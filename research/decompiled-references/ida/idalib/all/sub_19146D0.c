__int64 __fastcall sub_19146D0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  if ( a2 > 1 )
    return sub_1914520(a1, a2 & 0xFFFFFFFFFFFFFFFELL, a3, a4, a5, a6, a7, a8);
  else
    return a2;
}
