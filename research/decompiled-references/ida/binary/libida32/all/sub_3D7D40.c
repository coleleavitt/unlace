__int64 __fastcall sub_3D7D40(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  size_t v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __m128i si128; // xmm0
  __int64 v13; // rax
  __int64 v14; // r12
  int v15; // r15d
  __int64 v16; // r14
  __int64 v17; // rbx
  __m128i v18; // xmm1
  __m128i v19; // xmm3
  __int64 v20; // rax
  __m128 v21; // xmm0
  __int64 v22; // rax
  void *v24; // rax
  const void *v25; // rsi
  __m128i v26[4]; // [rsp+8h] [rbp-40h] BYREF

  v2 = (_QWORD *)operator new(0xC8u);
  v7 = a1[2];
  v8 = v2;
  *v2 = &off_2AFD020;
  v9 = *a1;
  v8[2] = 0;
  v8[1] = v9;
  *(_OWORD *)(v8 + 3) = 0;
  if ( v7 )
  {
    v24 = (void *)qalloc_or_throw(v7, a2, v3, v4, v5, v6);
    v8[2] = v24;
    v25 = (const void *)a1[1];
    v8[4] = v7;
    memcpy(v24, v25, v7);
    v8[3] = v7;
  }
  v10 = a1[4];
  v8[15] = -1;
  *(_OWORD *)(v8 + 7) = 0;
  v8[5] = v10;
  LODWORD(v10) = *((_DWORD *)a1 + 10);
  v8[16] = -1;
  *((_DWORD *)v8 + 12) = v10;
  v8[17] = 0xFFFFFFFFLL;
  *((_DWORD *)v8 + 36) = 0;
  *(_OWORD *)(v8 + 9) = 0;
  *(_OWORD *)(v8 + 11) = 0;
  *(_OWORD *)(v8 + 13) = 0;
  merge_handler_ctr();
  *((_OWORD *)v8 + 10) = 0;
  *v8 = &off_2AFD198;
  v8[19] = 0;
  v11 = qvector_reserve(v8 + 19, 0, 27, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23838D0);
  v8[19] = v11;
  v8[20] = 27;
  *(__m128i *)v11 = si128;
  *(__m128i *)(v11 + 10) = _mm_load_si128((const __m128i *)&xmmword_23838E0);
  *(_BYTE *)(v8[19] + 26LL) = 0;
  v13 = *a1;
  v8[22] = 0;
  v8[9] = 0;
  *(_OWORD *)(v8 + 23) = 0;
  if ( *(int *)(v13 + 28) > 0 )
  {
    v14 = 0;
    v26[0].m128i_i64[0] = (__int64)(v8 + 22);
    do
    {
      v15 = *(_DWORD *)(v13 + 4LL * (int)v14 + 16);
      v16 = switch_dbctx(v15);
      v17 = operator new(0x58u);
      v18 = _mm_loadl_epi64(v26);
      v19 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v20 = *(_QWORD *)(*a1 + 8);
      v21 = _mm_loadh_ps((const double *)(v16 + 1368));
      *(_DWORD *)(v17 + 8) = v15;
      *(_DWORD *)(v17 + 12) = -1;
      *(_QWORD *)(v17 + 64) = 0;
      *(_QWORD *)v17 = &off_2AFD070;
      *(__m128i *)(v17 + 16) = v19;
      *(__m128 *)(v17 + 32) = v21;
      *(__m128i *)(v17 + 48) = _mm_unpacklo_epi64(v18, (__m128i)(unsigned __int64)(v20 + 480));
      *(_OWORD *)(v17 + 72) = 0;
      v22 = qvector_reserve(v17 + 64, 0, 6, 1);
      *(_QWORD *)(v17 + 64) = v22;
      *(_QWORD *)(v17 + 72) = 6;
      *(_DWORD *)v22 = 1701869908;
      *(_BYTE *)(v22 + 4) = 115;
      *(_BYTE *)(*(_QWORD *)(v17 + 64) + 5LL) = 0;
      v13 = *a1;
      v8[v14 + 7] = v17;
      *(_DWORD *)(v17 + 12) = v14++;
    }
    while ( *(_DWORD *)(v13 + 28) > (int)v14 );
  }
  return 0;
}

