// Alternative name is '_MACHOMERGER_REAL_START'
// attributes: thunk
void __fastcall __noreturn MACHOMERGER_TRAMPOLINE_MACHOMERGER_REAL_START(
        __int64 a1,
        dyld3::MachOLoaded *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _dyld_start(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
