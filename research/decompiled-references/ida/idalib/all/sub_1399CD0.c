__int64 __fastcall sub_1399CD0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned int *v8; // rax
  __m128i v9; // xmm2
  __m128i v10; // xmm1
  unsigned int *v11; // rax
  __m128i v12; // xmm2
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned int *v17; // rax
  int v19; // [rsp+4h] [rbp-8Ch] BYREF
  __int64 v20; // [rsp+8h] [rbp-88h] BYREF
  __m128i v21; // [rsp+10h] [rbp-80h]
  __m128i v22; // [rsp+20h] [rbp-70h]
  __m128i v23; // [rsp+30h] [rbp-60h]
  __m128i v24; // [rsp+40h] [rbp-50h]
  __int64 v25; // [rsp+50h] [rbp-40h]

  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v20 = 7;
  v8 = sub_A25EE0(a1 + 16, (int *)a2);
  v9 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 4));
  v10 = _mm_cvtsi32_si128(*v8);
  v22 = _mm_unpacklo_epi64(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 8)), _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12)));
  v21 = _mm_unpacklo_epi64(v10, v9);
  v11 = sub_A25EE0(a1 + 16, (int *)a3);
  v12 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
  v13 = _mm_unpacklo_epi64(_mm_cvtsi32_si128(*(_DWORD *)(a3 + 8)), _mm_cvtsi32_si128(*(_DWORD *)(a3 + 12)));
  v14 = _mm_cvtsi32_si128(*v11);
  v15 = *(_QWORD *)(a1 + 8);
  v25 = a5;
  v24 = v13;
  v16 = *(_QWORD *)(v15 + 32);
  v19 = 7;
  v23 = _mm_unpacklo_epi64(v14, v12);
  v17 = sub_A25EE0(v16 + 1496, &v19);
  sub_A26740(v16 + 1312, *v17, (__int64)&v20, 10, a4, a5, 0);
  std::_V2::system_category((std::_V2 *)(v16 + 1312));
  return 0;
}
