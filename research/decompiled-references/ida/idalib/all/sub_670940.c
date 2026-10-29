unsigned __int64 __fastcall sub_670940(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned __int8 a8)
{
  if ( !*(_BYTE *)(a1 + 2321) )
  {
    if ( !under_debugger )
      interr(512);
    BUG();
  }
  sub_670080((__int64 *)a1, a2, nullptr, a4, a5, a6, a7, 1, a8);
  return sub_670080((__int64 *)a1, a2, a3, a4, a5, a6, a7, 0, a8);
}
