__int64 __fastcall sub_3DDC00(__int64 *a1)
{
  _QWORD *v1; // rax
  size_t v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __m128i si128; // xmm0
  __int64 v8; // rax
  __int64 v9; // r12
  int v10; // r15d
  __int64 v11; // r14
  __int64 v12; // rbx
  __m128i v13; // xmm1
  __m128i v14; // xmm3
  __int64 v15; // rax
  __m128 v16; // xmm0
  __int64 v17; // rax
  void *v19; // rax
  const void *v20; // rsi
  __m128i v21[4]; // [rsp+8h] [rbp-40h] BYREF

  v1 = (_QWORD *)operator new(0xC8u);
  v2 = a1[2];
  v3 = v1;
  *v1 = &off_2B26160;
  v4 = *a1;
  v3[2] = 0;
  v3[1] = v4;
  *(_OWORD *)(v3 + 3) = 0;
  if ( v2 )
  {
    v19 = (void *)qalloc_or_throw(v2);
    v3[2] = v19;
    v20 = (const void *)a1[1];
    v3[4] = v2;
    memcpy(v19, v20, v2);
    v3[3] = v2;
  }
  v5 = a1[4];
  v3[15] = -1;
  v3[16] = -1;
  v3[5] = v5;
  LODWORD(v5) = *((_DWORD *)a1 + 10);
  v3[17] = -1;
  *((_DWORD *)v3 + 12) = v5;
  v3[18] = 0;
  *(_OWORD *)(v3 + 7) = 0;
  *(_OWORD *)(v3 + 9) = 0;
  *(_OWORD *)(v3 + 11) = 0;
  *(_OWORD *)(v3 + 13) = 0;
  merge_handler_ctr(v3, "Custom calling conventions");
  *((_OWORD *)v3 + 10) = 0;
  *v3 = &off_2B262D8;
  v3[19] = 0;
  v6 = qvector_reserve(v3 + 19, 0, 27, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A78E0);
  v3[19] = v6;
  v3[20] = 27;
  *(__m128i *)v6 = si128;
  *(__m128i *)(v6 + 10) = _mm_load_si128((const __m128i *)&xmmword_23A78F0);
  *(_BYTE *)(v3[19] + 26LL) = 0;
  v8 = *a1;
  v3[22] = 0;
  v3[9] = 0;
  *(_OWORD *)(v3 + 23) = 0;
  if ( *(int *)(v8 + 28) > 0 )
  {
    v9 = 0;
    v21[0].m128i_i64[0] = (__int64)(v3 + 22);
    do
    {
      v10 = *(_DWORD *)(v8 + 4LL * (int)v9 + 16);
      v11 = switch_dbctx(v10);
      v12 = operator new(0x58u);
      v13 = _mm_loadl_epi64(v21);
      v14 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v15 = *(_QWORD *)(*a1 + 8);
      v16 = _mm_loadh_ps((const double *)(v11 + 1560));
      *(_DWORD *)(v12 + 8) = v10;
      *(_DWORD *)(v12 + 12) = -1;
      *(_QWORD *)(v12 + 64) = 0;
      *(_QWORD *)v12 = &off_2B261B0;
      *(__m128i *)(v12 + 16) = v14;
      *(__m128 *)(v12 + 32) = v16;
      *(__m128i *)(v12 + 48) = _mm_unpacklo_epi64(v13, (__m128i)(unsigned __int64)(v15 + 480));
      *(_OWORD *)(v12 + 72) = 0;
      v17 = qvector_reserve(v12 + 64, 0, 6, 1);
      *(_QWORD *)(v12 + 64) = v17;
      *(_QWORD *)(v12 + 72) = 6;
      *(_DWORD *)v17 = 1701869908;
      *(_BYTE *)(v17 + 4) = 115;
      *(_BYTE *)(*(_QWORD *)(v12 + 64) + 5LL) = 0;
      v8 = *a1;
      v3[v9 + 7] = v12;
      *(_DWORD *)(v12 + 12) = v9++;
    }
    while ( *(_DWORD *)(v8 + 28) > (int)v9 );
  }
  return 0;
}
