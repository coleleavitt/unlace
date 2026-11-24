// fpo_i386.c -- i386 functions built without a frame pointer, for the
// `pdbtypes` `$T0` (VFRAME) frame math: `sum_buf` is a frame-pointer-omitted
// function whose `volatile` array clang scatters into pieces, `aligned` a
// realigned frame (locals off `$T0`, parameters off `EBP`).
//
//   clang-cl --target=i686-pc-windows-msvc /O2 /Oy /Z7 /GS- /Brepro -fno-builtin \
//       -ffile-compilation-dir=. /c fpo_i386.c /Fofpo.obj
//   lld-link /Brepro /pdbsourcepath:C:\\src /entry:mainCRTStartup /subsystem:console \
//       /nodefaultlib /debug /pdbaltpath:fpo_i386.pdb /out:fpo_i386.exe \
//       /pdb:fpo_i386.pdb fpo.obj
__declspec(noinline) int sum_buf(int n, int k) {
    volatile int buf[8];
    for (int i = 0; i < 8; i++) buf[i] = n * i + k;
    int t = 0;
    for (int i = 0; i < 8; i++) t += buf[i];
    return t;
}
__declspec(noinline) int aligned(int n) {
    __declspec(align(32)) volatile int a[8];
    a[0] = n; a[7] = n + 1;
    return a[0] + a[7];
}
int mainCRTStartup(void) { return sum_buf(3, 4) + aligned(5); }
