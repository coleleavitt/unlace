_QWORD *__fastcall sub_3E0770(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  size_t v7; // r12
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm1
  __m128i si128; // xmm2
  __m128i v16; // xmm0
  void *v18; // rax
  const void *v19; // rsi

  v2 = (_QWORD *)operator new(0x98u);
  v7 = a1[2];
  v8 = v2;
  *v2 = &off_2AFD020;
  v9 = *a1;
  v8[2] = 0;
  v8[1] = v9;
  *(_OWORD *)(v8 + 3) = 0;
  if ( v7 )
  {
    v18 = (void *)qalloc_or_throw(v7, a2, v3, v4, v5, v6);
    v8[2] = v18;
    v19 = (const void *)a1[1];
    v8[4] = v7;
    memcpy(v18, v19, v7);
    v8[3] = v7;
  }
  v10 = a1[4];
  v8[15] = -1;
  v8[5] = v10;
  LODWORD(v10) = *((_DWORD *)a1 + 10);
  v8[16] = -1;
  *((_DWORD *)v8 + 12) = v10;
  v8[17] = 0xFFFFFFFFLL;
  *((_DWORD *)v8 + 36) = 0;
  *(_OWORD *)(v8 + 7) = 0;
  *(_OWORD *)(v8 + 9) = 0;
  *(_OWORD *)(v8 + 11) = 0;
  *(_OWORD *)(v8 + 13) = 0;
  merge_handler_ctr();
  v8[9] = 0;
  *v8 = &off_2AFD450;
  if ( *(int *)(v8[1] + 28LL) > 0 )
  {
    v11 = 0;
    do
    {
      v12 = operator new(0x28u);
      v13 = v8[1];
      v14 = _mm_cvtsi32_si128(v11);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v16 = _mm_cvtsi32_si128(*(_DWORD *)(v13 + 4LL * (int)v11 + 16));
      v8[v11++ + 7] = v12;
      *(_QWORD *)(v12 + 32) = v13;
      *(_QWORD *)v12 = off_2BCFE20;
      *(__m128i *)(v12 + 16) = si128;
      *(_QWORD *)(v12 + 8) = _mm_unpacklo_epi32(v16, v14).m128i_u64[0];
    }
    while ( *(_DWORD *)(v13 + 28) > (int)v11 );
  }
  return v8;
}

