__int64 __fastcall sub_4A6CB0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned int v9; // r14d
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 v13[12]; // [rsp+0h] [rbp-60h] BYREF

  v13[7] = __readfsqword(0x28u);
  v9 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 2392) + 12LL) & 0x100) >> 8;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 2392) + 12LL) & 0x100) != 0 )
  {
    ++*(_DWORD *)(a1 + 1944);
    sub_496080(v13, *(_QWORD *)(a1 + 2384), nullptr, a2, *(double *)a3.m128_u64, a4);
    sub_4A6B30(
      (__int64 *)a1,
      (_BYTE *)off_50 + 1,
      0,
      (_BYTE *)off_50 + 1,
      0,
      0,
      a2,
      a3,
      a4,
      a5,
      v11,
      v12,
      a8,
      a9,
      0x1013u);
    sub_490100((__int64)v13, (_BYTE *)off_50 + 1);
    --*(_DWORD *)(a1 + 1944);
  }
  return v9;
}
