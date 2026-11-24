// Fixture source for tests/stages/unlace-itaniumeh-sharedpad.toml (eh4_x86_64.elf):
//   g++ -O2 -fno-pie -no-pie -Wl,--build-id=none -o eh4_x86_64.elf eh4.cc; strip --strip-debug (g++ 15.3.0)
// patchelf's shrinkRPath shape: calls in one try unwind to pads that only
// load the exception registers and jump on into handler code they share.
#include <cerrno>
#include <memory>
#include <string>

struct SysError {
    int errNo;
    explicit SysError(int e) : errNo(e) {}
    virtual ~SysError() {}
};

struct Image {
    std::string bytes;
    explicit Image(std::string b);
    int machine() const { return static_cast<int>(bytes.size()); }
};

__attribute__((noinline)) std::string readFile(const char * name)
{
    std::string s(name);
    if (s.size() < 3) throw SysError(ENOENT);
    return s;
}

__attribute__((noinline)) void note(const char * what, const char * name);

__attribute__((noinline)) Image::Image(std::string b) : bytes(std::move(b))
{
    if (bytes.size() > 100) throw SysError(EIO);
}

extern "C" __attribute__((noinline)) int probe(const char * const * names, int n, int want)
{
    int found = 0;
    for (int i = 0; i < n; i++) {
        try {
            auto image = std::make_shared<Image>(readFile(names[i]));
            if (image->machine() != want)
                note("ignoring", names[i]);
            else
                found++;
        } catch (SysError & e) {
            if (e.errNo != ENOENT) throw;
        }
    }
    return found;
}

__attribute__((noinline)) void note(const char * what, const char * name)
{
    __builtin_printf("%s %s\n", what, name);
}

int main(int argc, char ** argv)
{
    return probe(argv, argc, 4);
}
