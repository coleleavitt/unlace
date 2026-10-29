_QWORD *__fastcall sub_625780(__int64 *a1)
{
  _QWORD *v1; // rax
  size_t v2; // r12
  _QWORD *v3; // rbx
  __int64 v4; // rax
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

  v1 = (_QWORD *)operator new(0xD0u);
  v2 = a1[2];
  v3 = v1;
  *v1 = &off_2B26160;
  v4 = *a1;
  v3[2] = 0;
  v3[1] = v4;
  *(_OWORD *)(v3 + 3) = 0;
  if ( v2 )
  {
    v14 = (void *)qalloc_or_throw(v2);
    v3[2] = v14;
    v15 = (const void *)a1[1];
    v3[4] = v2;
    memcpy(v14, v15, v2);
    v3[3] = v2;
  }
  v5 = a1[4];
  v3[15] = -1;
  v3[5] = v5;
  LODWORD(v5) = *((_DWORD *)a1 + 10);
  v3[16] = -1;
  *((_DWORD *)v3 + 12) = v5;
  v3[17] = -1;
  v3[18] = 0;
  *(_OWORD *)(v3 + 7) = 0;
  *(_OWORD *)(v3 + 9) = 0;
  *(_OWORD *)(v3 + 11) = 0;
  *(_OWORD *)(v3 + 13) = 0;
  merge_handler_ctr(v3, 0);
  v3[19] = 0;
  *v3 = &off_2B32BC0;
  v6 = v3[1];
  v3[22] = 0;
  *((_BYTE *)v3 + 200) = 0;
  v3[9] = 0;
  *((_OWORD *)v3 + 10) = 0;
  *(_OWORD *)(v3 + 23) = 0;
  if ( *(int *)(v6 + 28) > 0 )
  {
    v7 = 0;
    do
    {
      v8 = operator new(0x80u);
      v9 = v3[1];
      v10 = _mm_cvtsi32_si128(v7);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v12 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 4LL * (int)v7 + 16));
      *(_QWORD *)v8 = &off_2B32B08;
      v3[v7++ + 7] = v8;
      *(_QWORD *)(v8 + 32) = v9;
      *(_DWORD *)(v8 + 48) = 0;
      *(_QWORD *)(v8 + 56) = 0;
      *(_QWORD *)(v8 + 64) = v8 + 48;
      *(_QWORD *)(v8 + 72) = v8 + 48;
      *(_QWORD *)(v8 + 80) = 0;
      *(_QWORD *)(v8 + 88) = 0;
      *(_QWORD *)(v8 + 112) = v3 + 19;
      *(_DWORD *)(v8 + 120) = 0;
      *(__m128i *)(v8 + 16) = si128;
      *(_OWORD *)(v8 + 96) = 0;
      *(_QWORD *)(v8 + 8) = _mm_unpacklo_epi32(v12, v10).m128i_u64[0];
    }
    while ( *(_DWORD *)(v9 + 28) > (int)v7 );
  }
  return v3;
}
