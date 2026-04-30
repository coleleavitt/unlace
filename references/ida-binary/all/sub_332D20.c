__int64 __fastcall sub_332D20(
        __int64 a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // eax
  bool v11; // dl
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 result; // rax

  if ( (*(_BYTE *)(get_ph(a1, a2) + 8) & 1) == 0 )
    return 0;
  v10 = *(_DWORD *)(a1 + 8);
  if ( v10 == 58 || v10 == 25 )
    return sub_3AE740(a1);
  v11 = sub_32FD50();
  result = 1;
  if ( !v11 )
    return sub_331480(
             "Segment",
             (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_32E3E0,
             (__int64)&off_872F30,
             0,
             0,
             a3,
             a4,
             a5,
             a6,
             v12,
             v13,
             a9,
             a10);
  return result;
}
