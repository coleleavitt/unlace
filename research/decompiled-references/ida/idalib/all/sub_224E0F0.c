__int64 __fastcall sub_224E0F0(__int64 a1)
{
  __m128d v2; // xmm1
  __int64 v3; // rdx
  __int64 result; // rax
  __m128d v5; // [rsp+0h] [rbp-38h] BYREF
  double v6; // [rsp+10h] [rbp-28h]
  __int64 v7; // [rsp+18h] [rbp-20h]
  __int64 v8; // [rsp+20h] [rbp-18h]

  *(_BYTE *)(a1 + 144) = 0;
  sub_224DEC0((__int64)&v5, 0);
  v2 = _mm_sub_pd(_mm_add_pd(*(__m128d *)a1, v5), *(__m128d *)(a1 + 40));
  v3 = *(_QWORD *)(a1 + 24) + v7 - *(_QWORD *)(a1 + 64);
  result = *(_QWORD *)(a1 + 32) + v8 - *(_QWORD *)(a1 + 72);
  *(double *)(a1 + 16) = *(double *)(a1 + 16) + v6 - *(double *)(a1 + 56);
  *(__m128d *)a1 = v2;
  *(_QWORD *)(a1 + 24) = v3;
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
