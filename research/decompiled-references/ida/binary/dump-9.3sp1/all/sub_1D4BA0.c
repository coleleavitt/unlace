__int64 __fastcall sub_1D4BA0(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  __m128i v4; // xmm1
  __m128i v8; // xmm0
  __m128i v9; // xmm2
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __m128i v13; // xmm1
  _QWORD *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // r14
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v26; // rax
  __m128i v27; // [rsp+0h] [rbp-78h] BYREF
  __m128i v28; // [rsp+10h] [rbp-68h] BYREF
  __m128i v29; // [rsp+20h] [rbp-58h] BYREF
  _UNKNOWN **v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+38h] [rbp-40h]
  unsigned __int64 v32; // [rsp+48h] [rbp-30h]

  v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a3, (__m128i)(unsigned __int64)a3);
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 128));
  v9 = _mm_loadl_epi64((const __m128i *)(a1 + 568));
  v32 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 80) += a3;
  *(_QWORD *)(a1 + 144) += a3;
  v11 = _mm_add_epi64(v8, v4);
  v12 = a1 + 184;
  *(__m128i *)(v12 - 56) = v11;
  v27 = v4;
  v29 = _mm_unpacklo_epi64(v9, v11);
  sub_1D3B80(v12, a3, (unsigned __int64 *)&v29);
  sub_1D3B80(a1 + 272, a3, (unsigned __int64 *)&v29);
  *(_QWORD *)(a1 + 576) += a3;
  v13 = _mm_load_si128(&v27);
  v14 = (_QWORD *)(a1 + 600);
  do
  {
    *v14 += a3;
    v14 += 4;
  }
  while ( (_QWORD *)(a1 + 728) != v14 );
  v15 = *(_QWORD *)(a1 + 1472);
  *(_QWORD *)(a1 + 704) = ~*(_QWORD *)(a1 + 696);
  if ( a4 )
  {
    v16 = *(_QWORD *)(a1 + 1480);
    v17 = v15 + 40 * v16;
    if ( v17 != v15 )
    {
      do
      {
        v18 = _mm_loadu_si128((const __m128i *)(v15 + 24));
        *(_QWORD *)(v15 + 8) += a3;
        v15 += 40;
        *(__m128i *)(v15 - 16) = _mm_add_epi64(v18, v13);
      }
      while ( v15 != v17 );
      v16 = *(_QWORD *)(a1 + 1480);
      v15 = *(_QWORD *)(a1 + 1472);
    }
    v19 = *a4;
    v20 = _mm_loadu_si128((const __m128i *)(a4 + 1));
    v21 = _mm_loadu_si128((const __m128i *)(a4 + 3));
    if ( *(_QWORD *)(a1 + 1488) < (unsigned __int64)(v16 + 1) )
    {
      v28 = v21;
      v27 = v20;
      v26 = qvector_reserve(a1 + 1472, v15, v16 + 1, 40);
      v21 = _mm_load_si128(&v28);
      v20 = _mm_load_si128(&v27);
      *(_QWORD *)(a1 + 1472) = v26;
      v16 = *(_QWORD *)(a1 + 1480);
      v15 = v26;
    }
    v22 = v15 + 40 * v16;
    *(_QWORD *)v22 = v19;
    *(__m128i *)(v22 + 8) = v20;
    *(__m128i *)(v22 + 24) = v21;
    ++*(_QWORD *)(a1 + 1480);
    *(_QWORD *)(a1 + 152) += a3;
  }
  else
  {
    *(_QWORD *)(v15 + 16) += a3;
    *(_QWORD *)(*(_QWORD *)(a1 + 1472) + 32LL) += a3;
  }
  sub_18D7E0((_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 1472) + 8LL), *(_QWORD *)(a1 + 144) - *(int *)(a1 + 120));
  sub_1D4A90(a1, 0, a2, a3);
  v31 = a3;
  v23 = *(_QWORD *)(a1 + 432);
  v30 = &off_4DEA70;
  v24 = v23 + 104LL * *(_QWORD *)(a1 + 440);
  while ( v24 != v23 )
  {
    v23 += 104;
    for_all_arglocs();
  }
  return 0;
}
