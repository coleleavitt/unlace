__int64 __fastcall sub_13CF90(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 ph; // rdx
  __int64 result; // rax
  bool v10; // dl
  double v11; // xmm4_8
  double v12; // xmm5_8

  ph = get_ph();
  result = 0;
  if ( (*(_BYTE *)(ph + 8) & 1) != 0 )
  {
    v10 = sub_13BB10();
    result = 1;
    if ( !v10 )
      return sub_13C780(
               (__int64)"Segment",
               (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_13B160,
               (__int64)&off_2386A0,
               0,
               0,
               a1,
               a2,
               a3,
               a4,
               v11,
               v12,
               a7,
               a8);
  }
  return result;
}

