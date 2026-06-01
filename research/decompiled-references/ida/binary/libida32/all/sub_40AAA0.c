_QWORD *__fastcall sub_40AAA0(__int64 *a1, const char *a2)
{
  _QWORD *v2; // rax
  size_t v3; // r12
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm1
  __m128i si128; // xmm2
  __m128i v12; // xmm0
  void *v14; // rax
  const void *v15; // rsi

  v2 = (_QWORD *)operator new(0x98u);
  v3 = a1[2];
  v4 = v2;
  *v2 = &off_2AFD020;
  v5 = *a1;
  v4[2] = 0;
  v4[1] = v5;
  *(_OWORD *)(v4 + 3) = 0;
  if ( v3 )
  {
    v14 = (void *)qalloc_or_throw(v3, a2);
    v4[2] = v14;
    v15 = (const void *)a1[1];
    v4[4] = v3;
    memcpy(v14, v15, v3);
    v4[3] = v3;
  }
  v6 = a1[4];
  v4[15] = -1;
  v4[5] = v6;
  LODWORD(v6) = *((_DWORD *)a1 + 10);
  v4[16] = -1;
  *((_DWORD *)v4 + 12) = v6;
  v4[17] = 0xFFFFFFFFLL;
  *((_DWORD *)v4 + 36) = 0;
  *(_OWORD *)(v4 + 7) = 0;
  *(_OWORD *)(v4 + 9) = 0;
  *(_OWORD *)(v4 + 11) = 0;
  *(_OWORD *)(v4 + 13) = 0;
  merge_handler_ctr();
  v4[9] = 0;
  *v4 = &off_2AFDC00;
  if ( *(int *)(v4[1] + 28LL) > 0 )
  {
    v7 = 0;
    do
    {
      v8 = operator new(0x28u);
      v9 = v4[1];
      v10 = _mm_cvtsi32_si128(v7);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v12 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 4LL * (int)v7 + 16));
      v4[v7++ + 7] = v8;
      *(_QWORD *)(v8 + 32) = v9;
      *(_QWORD *)v8 = off_2AFDB48;
      *(__m128i *)(v8 + 16) = si128;
      *(_QWORD *)(v8 + 8) = _mm_unpacklo_epi32(v12, v10).m128i_u64[0];
    }
    while ( *(_DWORD *)(v9 + 28) > (int)v7 );
  }
  return v4;
}

