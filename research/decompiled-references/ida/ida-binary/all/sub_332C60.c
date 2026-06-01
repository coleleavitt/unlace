__int64 __fastcall sub_332C60(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  double v10; // xmm4_8
  double v11; // xmm5_8

  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 == 58 || v9 == 25 )
    return sub_3AE6A0();
  if ( sub_32FD50() )
    return 1;
  return sub_331480(
           "Num",
           (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_32E3E0,
           (__int64)&off_872F70,
           0,
           0,
           a2,
           a3,
           a4,
           a5,
           v10,
           v11,
           a8,
           a9);
}
