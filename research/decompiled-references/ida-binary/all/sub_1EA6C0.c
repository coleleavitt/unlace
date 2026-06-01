__int64 __fastcall sub_1EA6C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        __int64 a15,
        int a16,
        int a17,
        int a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        __int64 a27)
{
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  char v32; // [rsp+0h] [rbp-8h]

  if ( *(_QWORD *)(a1 + 40) )
  {
    if ( *(_DWORD *)(a1 + 32) == 1 )
      sub_169700(
        (int)"Coherency check failed: rinfo.rtype != TCCRT_FLAT\n",
        a2,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13,
        a14,
        v32);
    return a1;
  }
  else
  {
    sub_1E69C0(*(double *)a7.m128_u64, a1, a2, a3, a4);
    return sub_1EA700(a1, a2, v28, v29, v30, v31, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27);
  }
}
