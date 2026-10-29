void __fastcall sub_19116A0(
        __m128 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  int v8; // eax

  v8 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( a4 && (a5 = (unsigned int)(v8 - 40), (unsigned int)a5 <= 6) )
  {
    sub_1906C40(a1, a2, a3, 0, (__int64)&a1[280].m128_i64[1]);
  }
  else if ( (unsigned int)(v8 - 34) > 5 )
  {
    *(_BYTE *)(a3 + 29) |= 8u;
  }
  else
  {
    sub_1910D40((__int64)a1, a2, a3, a4, a5, a6, a7, a8);
  }
}
