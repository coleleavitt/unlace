_QWORD *__fastcall sub_3E64B0(__int64 *a1)
{
  _QWORD *v1; // rax
  size_t v2; // r12
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __m128i v9; // xmm1
  __m128i si128; // xmm2
  __m128i v11; // xmm0
  void *v13; // rax
  const void *v14; // rsi

  v1 = (_QWORD *)operator new(0x98u);
  v2 = a1[2];
  v3 = v1;
  *v1 = &off_2B26160;
  v4 = *a1;
  v3[2] = 0;
  v3[1] = v4;
  *(_OWORD *)(v3 + 3) = 0;
  if ( v2 )
  {
    v13 = (void *)qalloc_or_throw(v2);
    v3[2] = v13;
    v14 = (const void *)a1[1];
    v3[4] = v2;
    memcpy(v13, v14, v2);
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
  v3[9] = 0;
  *v3 = &off_2B26630;
  if ( *(int *)(v3[1] + 28LL) > 0 )
  {
    v6 = 0;
    do
    {
      v7 = operator new(0x50u);
      v8 = v3[1];
      v9 = _mm_cvtsi32_si128(v6);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v11 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 4LL * (int)v6 + 16));
      v3[v6++ + 7] = v7;
      *(_QWORD *)(v7 + 32) = v8;
      *(_QWORD *)(v7 + 40) = 0;
      *(_QWORD *)(v7 + 64) = 0;
      *(_BYTE *)(v7 + 72) = 100;
      *(_QWORD *)v7 = &off_2B264D0;
      *(__m128i *)(v7 + 16) = si128;
      *(_OWORD *)(v7 + 48) = 0;
      *(_QWORD *)(v7 + 8) = _mm_unpacklo_epi32(v11, v9).m128i_u64[0];
    }
    while ( *(_DWORD *)(v8 + 28) > (int)v6 );
  }
  return v3;
}
