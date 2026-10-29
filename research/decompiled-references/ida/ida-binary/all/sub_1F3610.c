__int64 __fastcall sub_1F3610(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  int v12; // eax

  if ( !*(_BYTE *)(a1 + 968) )
    return sub_1751D0(0, a2, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( *(_QWORD *)(a1 + 424) )
  {
    v12 = *(_DWORD *)(a1 + 416);
    switch ( v12 )
    {
      case 2:
        return sub_1751D0(*(_QWORD *)(a1 + 896), a2, a5, a6, a7, a8, a9, a10, a11, a12);
      case 3:
        return sub_1751D0(*(_QWORD *)(a1 + 904), a2, a5, a6, a7, a8, a9, a10, a11, a12);
      case 1:
        return sub_1751D0(*(_QWORD *)(a1 + 888), a2, a5, a6, a7, a8, a9, a10, a11, a12);
      default:
        return sub_1751D0(0, a2, a5, a6, a7, a8, a9, a10, a11, a12);
    }
  }
  else
  {
    sub_1E69C0(*(double *)a5.m128_u64, a1, a2, a3, a4);
    return sub_1F36A0();
  }
}
