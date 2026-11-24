// Fixture for unlace_cppsig's PE export arm (unlace-cli/tests/msvcexport_cli.rs).
// Build (clang 22, lld-link 22):
//   clang --target=i686-pc-windows-msvc -O2 -fno-asynchronous-unwind-tables -c msvcexport_pe_i386.cpp
//   lld-link /nologo /dll /noentry /nodefaultlib /base:0x10000000 /fixed /safeseh:no /Brepro \
//     /out:msvcexport_pe_i386.dll msvcexport_pe_i386.obj
struct can_frame {
    unsigned id;
    unsigned char len;
    unsigned char data[8];
};

class Port {
public:
    int open_;
    unsigned last_;
    __declspec(dllexport) int Send(can_frame *frames, unsigned count);
    __declspec(dllexport) static unsigned __stdcall Pack(unsigned id, unsigned char len);
};

int Port::Send(can_frame *frames, unsigned count) {
    if (!open_)
        return 0;
    last_ = frames[count - 1].id;
    return (int)count;
}

unsigned __stdcall Port::Pack(unsigned id, unsigned char len) {
    return (id << 4) | len;
}
