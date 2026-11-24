// pdb_bitfields.cpp -- a struct with bitfields for the `pdbtypes` TPI mapper.
//
//   clang-cl --target=x86_64-pc-windows-msvc /Od /Z7 /GS- /Brepro -fno-builtin \
//       -ffile-compilation-dir=. /c pdb_bitfields.cpp /Fopdb_bitfields.obj
//   lld-link /Brepro /pdbsourcepath:C:\\src /entry:mainCRTStartup /subsystem:console \
//       /nodefaultlib /debug /pdbaltpath:pdb_bitfields.pdb /out:pdb_bitfields.exe \
//       /pdb:pdb_bitfields.pdb pdb_bitfields.obj
//
// Only the .pdb is vendored.

struct Flags {
    unsigned a : 3;
    unsigned b : 5;
    unsigned short c : 9;
    int d;
};

Flags g_flags;

extern "C" int mainCRTStartup() {
    g_flags.b = 7;
    g_flags.c = 300;
    return g_flags.a + g_flags.d;
}
