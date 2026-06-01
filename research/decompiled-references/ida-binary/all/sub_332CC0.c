__int64 __fastcall sub_332CC0(
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
  int v13; // eax

  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 == 58 || v9 == 25 )
  {
    v13 = *(_DWORD *)(a1 + 8);
    if ( v13 == 25 || v13 == 58 )
      return sub_3AB9B0(a1, 6, 0);
    else
      return 0;
  }
  else if ( sub_32FD50() )
  {
    return 1;
  }
  else
  {
    return sub_331480(
             "Char",
             (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_32E3E0,
             (__int64)&off_872F50,
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
}
