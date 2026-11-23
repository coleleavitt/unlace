/* macho_cfstring_chained_arm64 fixture: CFString constants in a chained-fixup
   arm64 Mach-O, for kuna's `cfstrings` pass. Each entry's `data` pointer is a
   chained rebase. `kUtf16` is a UTF-16 entry (flag 0x10) whose characters live
   in __TEXT,__ustring; `kNul` holds an embedded NUL; `pass_greeting` hands a
   CFString to an imported function as a call argument. */
struct cfstr { const long *isa; long flags; const void *str; long len; };
extern const long __CFConstantStringClassReference[];
extern void consume(const void *s);
#define CF(name, flags, data, len) __attribute__((section("__DATA_CONST,__cfstring"), used)) \
    static const struct cfstr name = { __CFConstantStringClassReference, flags, data, len }
__attribute__((section("__TEXT,__ustring"), used))
static const unsigned short kUtf16Chars[] = { 'c', 'a', 'f', 0xe9, ' ', 0x2192, ' ', 'o', 'k', 0 };
CF(kAscii, 0x7c8, "chained hello", 13);
CF(kUtf16, 0x7d0, kUtf16Chars, 9);
CF(kNul, 0x7c8, "before\0after", 12);
const void *get_ascii(void) { return &kAscii; }
const void *get_utf16(void) { return &kUtf16; }
const void *get_nul(void) { return &kNul; }
void pass_greeting(void) { consume(&kAscii); }
int main(void) { pass_greeting(); return (int)(long)get_ascii(); }
