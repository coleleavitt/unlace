unsigned __int64 __fastcall sub_1B11600(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        char a4,
        char a5,
        __m128 a6,
        __m128 a7)
{
  if ( !a2 )
    return 1;
  if ( (*(_DWORD *)a2 & 0x3C000) != 0 )
    return a2;
  return sub_1B10FC0(a1, a2, a3, a4, a5, a6, a7);
}
