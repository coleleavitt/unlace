unsigned __int64 __fastcall sub_652DF0(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        unsigned __int8 a8)
{
  unsigned int v9; // r13d

  if ( !*(_BYTE *)(a1 + 2233) )
  {
    if ( !under_debugger )
      interr(512);
    BUG();
  }
  v9 = a5;
  sub_6525A0((__int64 *)a1, a2, nullptr, a4, a5, a6, a7, 1, a8);
  return sub_6525A0((__int64 *)a1, a2, a3, a4, v9, a6, a7, 0, a8);
}

