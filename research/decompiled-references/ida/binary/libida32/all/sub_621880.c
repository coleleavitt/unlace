__int64 __fastcall sub_621880(__int64 *a1, const char *a2, int a3)
{
  _QWORD *v4; // rax
  size_t v5; // r14
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rbp
  __int64 v12; // rdx
  __m128i v13; // xmm1
  __m128i si128; // xmm2
  __m128i v15; // xmm0
  void *v16; // rax
  const void *v17; // rsi

  v4 = (_QWORD *)operator new(0x98u);
  v5 = a1[2];
  v6 = v4;
  *v4 = &off_2AFD020;
  v7 = *a1;
  v6[2] = 0;
  v6[1] = v7;
  *(_OWORD *)(v6 + 3) = 0;
  if ( v5 )
  {
    v16 = (void *)qalloc_or_throw(v5, a2);
    v6[2] = v16;
    v17 = (const void *)a1[1];
    v6[4] = v5;
    memcpy(v16, v17, v5);
    v6[3] = v5;
  }
  v8 = a1[4];
  v6[15] = -1;
  v6[5] = v8;
  LODWORD(v8) = *((_DWORD *)a1 + 10);
  v6[16] = -1;
  *((_DWORD *)v6 + 12) = v8;
  v6[17] = 0xFFFFFFFFLL;
  *((_DWORD *)v6 + 36) = 0;
  *(_OWORD *)(v6 + 7) = 0;
  *(_OWORD *)(v6 + 9) = 0;
  *(_OWORD *)(v6 + 11) = 0;
  *(_OWORD *)(v6 + 13) = 0;
  merge_handler_ctr();
  v9 = v6[1];
  v6[9] = 0;
  result = *(unsigned int *)(v9 + 28);
  if ( (int)result > 0 )
  {
    v11 = 0;
    do
    {
      result = operator new(0x30u);
      v12 = v6[1];
      v13 = _mm_cvtsi32_si128(v11);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v15 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + 4LL * (int)v11 + 16));
      v6[v11++ + 7] = result;
      *(_QWORD *)(result + 32) = v12;
      *(_QWORD *)result = off_2B0CDF0;
      *(_DWORD *)(result + 40) = a3;
      *(__m128i *)(result + 16) = si128;
      *(_QWORD *)(result + 8) = _mm_unpacklo_epi32(v15, v13).m128i_u64[0];
    }
    while ( *(_DWORD *)(v12 + 28) > (int)v11 );
  }
  return result;
}

