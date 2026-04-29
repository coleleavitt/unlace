__int64 __fastcall sub_A830(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  void (__fastcall *v8)(__int64, __int64, __int64); // rax

  v8 = *(void (__fastcall **)(__int64, __int64, __int64))(a2 + 240);
  if ( !v8 )
  {
    if ( !under_debugger )
      interr(0);
    BUG();
  }
  v8(a1, a2, a8);
  return a1;
}
