__int64 __fastcall MACHOMERGER_START_HOOK(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // x0

  v9 = dyldhook_init((__int64)&a9);
  return MACHOMERGER_TRAMPOLINE_MACHOMERGER_REAL_START(v9);
}
