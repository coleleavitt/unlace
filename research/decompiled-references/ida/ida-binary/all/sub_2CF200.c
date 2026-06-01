__int64 __fastcall sub_2CF200(
        __m128i *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rsi

  if ( *(_DWORD *)a3 != 5 )
    return sub_2010D0(a1, a2, (_DWORD *)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  v12 = *(_QWORD *)(a3 + 56);
  if ( v12 == -1 )
    return sub_2C9CE0(a1, *(_QWORD *)(a3 + 88), 0);
  else
    return sub_2C9CE0(a1, v12, 0);
}
