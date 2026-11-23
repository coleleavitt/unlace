/* MSVC-ABI half of the `arithhelpers` fixture: clang emits calls to the CRT's
   __stdcall `_alldiv` family. The stand-ins below only give the helpers a body
   and a PDB name.
   clang --target=i686-pc-windows-msvc -O2 -g -gcodeview -c arithhelpers.c
   clang --target=i686-pc-windows-msvc -O0 -g -gcodeview -c arithhelpers_msvc_stubs.c
   lld-link /debug /safeseh:no /nodefaultlib /entry:mainCRTStartup /subsystem:console
     /alternatename:__alldiv=__alldiv@16 (likewise __aulldiv __allrem __aullrem __allmul)
     arithhelpers.obj arithhelpers_msvc_stubs.obj /out:arithhelpers_msvc_i386.exe */
long long __stdcall _alldiv(long long a, long long b){ return a ^ b; }
long long __stdcall _aulldiv(long long a, long long b){ return a ^ b; }
long long __stdcall _allrem(long long a, long long b){ return a ^ b; }
long long __stdcall _aullrem(long long a, long long b){ return a ^ b; }
long long __stdcall _allmul(long long a, long long b){ return a ^ b; }
void mainCRTStartup(void){}
