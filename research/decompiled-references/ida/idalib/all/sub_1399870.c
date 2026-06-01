__int64 __fastcall sub_1399870(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rax
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  unsigned int *v7; // rax
  __m128i v8; // xmm2
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int *v13; // rax
  int v15; // [rsp+4h] [rbp-7Ch] BYREF
  __int64 v16; // [rsp+8h] [rbp-78h] BYREF
  __m128i v17; // [rsp+10h] [rbp-70h]
  __m128i v18; // [rsp+20h] [rbp-60h]
  __m128i v19; // [rsp+30h] [rbp-50h]
  __m128i v20; // [rsp+40h] [rbp-40h]

  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v16 = 3;
  v4 = sub_A25EE0(a1 + 16, (int *)a2);
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 4));
  v6 = _mm_cvtsi32_si128(*v4);
  v18 = _mm_unpacklo_epi64(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 8)), _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12)));
  v17 = _mm_unpacklo_epi64(v6, v5);
  v7 = sub_A25EE0(a1 + 16, (int *)a3);
  v8 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
  v9 = _mm_unpacklo_epi64(_mm_cvtsi32_si128(*(_DWORD *)(a3 + 8)), _mm_cvtsi32_si128(*(_DWORD *)(a3 + 12)));
  v10 = _mm_cvtsi32_si128(*v7);
  v11 = *(_QWORD *)(a1 + 8);
  v15 = 3;
  v20 = v9;
  v12 = *(_QWORD *)(v11 + 32);
  v19 = _mm_unpacklo_epi64(v10, v8);
  v13 = sub_A25EE0(v12 + 1496, &v15);
  sub_1398530(v12 + 1312, *v13, (__int64)&v16, 9);
  std::_V2::system_category((std::_V2 *)(v12 + 1312));
  return 0;
}
