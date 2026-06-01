__int64 __fastcall sub_7193F0(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 result; // rax
  __int64 v11; // rax
  double v12; // xmm4_8
  double v13; // xmm5_8

  if ( *(_DWORD *)(a2 + 40) == 1
    || (result = sub_70DBE0(a1, *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFCLL, 0, a3, a4, a5, a6, a7, a8, a9, a10),
        (_BYTE)result) )
  {
    if ( (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL) <= 7 || (*(_BYTE *)(a2 + 24) & 4) != 0 )
    {
      return 1;
    }
    else
    {
      v11 = sub_C0F1A0(a2 + 24);
      return sub_719220(a1, *(_QWORD *)(v11 + 8), a3, a4, a5, a6, v12, v13, a9, a10);
    }
  }
  return result;
}
