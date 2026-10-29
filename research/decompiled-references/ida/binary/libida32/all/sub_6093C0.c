_QWORD *__fastcall sub_6093C0(__int64 *a1, const char *a2)
{
  _QWORD *v2; // rax
  size_t v3; // r12
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm1
  __m128i si128; // xmm2
  __m128i v13; // xmm0
  void *v15; // rax
  const void *v16; // rsi

  v2 = (_QWORD *)operator new(0xD0u);
  v3 = a1[2];
  v4 = v2;
  *v2 = &off_2AFD020;
  v5 = *a1;
  v4[2] = 0;
  v4[1] = v5;
  *(_OWORD *)(v4 + 3) = 0;
  if ( v3 )
  {
    v15 = (void *)qalloc_or_throw(v3, a2);
    v4[2] = v15;
    v16 = (const void *)a1[1];
    v4[4] = v3;
    memcpy(v15, v16, v3);
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
  v4[19] = 0;
  *v4 = &off_2B08C00;
  v7 = v4[1];
  v4[22] = 0;
  *((_BYTE *)v4 + 200) = 0;
  v4[9] = 0;
  *((_OWORD *)v4 + 10) = 0;
  *(_OWORD *)(v4 + 23) = 0;
  if ( *(int *)(v7 + 28) > 0 )
  {
    v8 = 0;
    do
    {
      v9 = operator new(0x80u);
      v10 = v4[1];
      v11 = _mm_cvtsi32_si128(v8);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v13 = _mm_cvtsi32_si128(*(_DWORD *)(v10 + 4LL * (int)v8 + 16));
      *(_QWORD *)v9 = &off_2B08B48;
      v4[v8++ + 7] = v9;
      *(_QWORD *)(v9 + 32) = v10;
      *(_DWORD *)(v9 + 48) = 0;
      *(_QWORD *)(v9 + 56) = 0;
      *(_QWORD *)(v9 + 64) = v9 + 48;
      *(_QWORD *)(v9 + 72) = v9 + 48;
      *(_QWORD *)(v9 + 80) = 0;
      *(_QWORD *)(v9 + 88) = 0;
      *(_QWORD *)(v9 + 112) = v4 + 19;
      *(_DWORD *)(v9 + 120) = 0;
      *(__m128i *)(v9 + 16) = si128;
      *(_OWORD *)(v9 + 96) = 0;
      *(_QWORD *)(v9 + 8) = _mm_unpacklo_epi32(v13, v11).m128i_u64[0];
    }
    while ( *(_DWORD *)(v10 + 28) > (int)v8 );
  }
  return v4;
}

