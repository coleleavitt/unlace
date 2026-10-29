signed int *__fastcall sub_B6B8E0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rcx
  __m128i v3; // xmm0
  __int64 v4; // rcx
  __m128i v5; // xmm1
  __int64 v6; // rcx
  int v7; // r12d
  int v8; // eax
  int v9; // ebp
  int v11[2]; // [rsp+8h] [rbp-50h]
  int v12[2]; // [rsp+10h] [rbp-48h]
  int v13[2]; // [rsp+18h] [rbp-40h]
  int v14[2]; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+28h] [rbp-30h]

  v3 = _mm_cvtsi32_si128(sub_B645B0(a1, a2));
  v5 = _mm_cvtsi32_si128(sub_B645B0(a1, *(unsigned int **)(v2 + 32)));
  v7 = sub_B645B0(a1, *(unsigned int **)(v4 + 40));
  v8 = sub_B645B0(a1, *(unsigned int **)(v6 + 48));
  *(_QWORD *)v13 = _mm_unpacklo_epi32(v3, v5).m128i_u64[0];
  v9 = v8;
  v15 = v7;
  v14[1] = _mm_cvtsi128_si32(v5) ^ 1;
  v14[0] = _mm_cvtsi128_si32(v3) ^ 1;
  *(_QWORD *)v12 = _mm_unpacklo_epi32(v3, _mm_cvtsi32_si128(v14[1])).m128i_u64[0];
  *(_QWORD *)v11 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14[0]), v5).m128i_u64[0];
  sub_B6B2C0(a1, (unsigned int *)v14);
  v15 = v9;
  *(_QWORD *)v14 = *(_QWORD *)v11;
  sub_B6B2C0(a1, (unsigned int *)v14);
  v15 = v7 ^ 1;
  *(_QWORD *)v14 = *(_QWORD *)v12;
  sub_B6B2C0(a1, (unsigned int *)v14);
  v15 = v9 ^ 1;
  *(_QWORD *)v14 = *(_QWORD *)v13;
  return sub_B6B2C0(a1, (unsigned int *)v14);
}

