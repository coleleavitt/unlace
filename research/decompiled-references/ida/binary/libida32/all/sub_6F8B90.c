__int64 __fastcall sub_6F8B90(
        __int64 *a1,
        double a2,
        __m128i a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        int a16,
        __int64 *a17)
{
  int v17; // edx
  __int64 result; // rax
  double v19; // xmm0_8
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22[3]; // [rsp+0h] [rbp-18h] BYREF

  v22[1] = __readfsqword(0x28u);
  v17 = a15 & 7;
  if ( v17 == 7 )
  {
    if ( *(_DWORD *)(a15 & 0xFFFFFFFFFFFFFFF8LL) )
    {
      return 1;
    }
    else
    {
      v19 = sub_EFED60(v22, *(_QWORD *)((a15 & 0xFFFFFFFFFFFFFFF8LL) + 16));
      return sub_6EEC90(a1, v22[0], v19, a3, a4, a5, v20, v21, a8, a9);
    }
  }
  else
  {
    result = 1;
    if ( (unsigned int)(v17 - 3) <= 2 && a17 )
      return sub_6F74E0(a1, *a17, (__int64)(a17 + 1), a12, *a17, a2, a3, a4, a5, a6, a7, a8, a9);
  }
  return result;
}

