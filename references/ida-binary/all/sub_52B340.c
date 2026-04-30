void __fastcall sub_52B340(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __m128i v3; // xmm0
  __int64 v4; // rcx
  __int64 v5; // rdx
  __m128i v6; // xmm0
  __int64 v7; // rcx
  __int64 v8; // rdx
  __m128i v9; // xmm0

  v2 = *a1;
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  v4 = a2[3];
  *a2 = v2;
  *(__m128i *)(a2 + 1) = v3;
  v5 = a1[3];
  v6 = _mm_loadu_si128((const __m128i *)a1 + 2);
  a1[3] = v4;
  a1[4] = a2[4];
  a1[5] = a2[5];
  v7 = a2[6];
  a2[3] = v5;
  *((__m128i *)a2 + 2) = v6;
  v8 = a1[6];
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 7));
  a1[6] = v7;
  a1[7] = a2[7];
  a1[8] = a2[8];
  a2[6] = v8;
  *(__m128i *)(a2 + 7) = v9;
}
