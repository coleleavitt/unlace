__int64 __fastcall sub_1AA7910(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        char *a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // r8

  if ( a4 )
    return sub_1AA5E80((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9);
  v10 = 0;
  if ( a10 )
  {
    if ( (a10 & 1) == 0 )
      v10 = a10;
  }
  sub_1AA7040(a1, a3, a7, a8, v10, a6);
  return a10;
}
