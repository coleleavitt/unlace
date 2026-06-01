_QWORD *__fastcall create_moddata_merge_handler(
        __int64 *a1,
        unsigned int a2,
        const char *a3,
        __int64 a4,
        const char *a5)
{
  _QWORD *v7; // rax
  size_t v8; // r12
  _QWORD *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  int v14; // r15d
  __int64 v15; // rax
  __m128i si128; // xmm2
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdi
  size_t v20; // r14
  void *v21; // rax
  __int64 v22; // rax
  void *v24; // rax
  const void *v25; // rsi

  if ( !(unsigned __int8)idbattrs_need_merging(*a1, a3, a4) )
    return nullptr;
  v7 = (_QWORD *)operator new(0x98u);
  v8 = a1[2];
  v9 = v7;
  *v7 = &off_2AFD020;
  v10 = *a1;
  v9[2] = 0;
  v9[1] = v10;
  *(_OWORD *)(v9 + 3) = 0;
  if ( v8 )
  {
    v24 = (void *)qalloc_or_throw(v8, a3);
    v9[2] = v24;
    v25 = (const void *)a1[1];
    v9[4] = v8;
    memcpy(v24, v25, v8);
    v9[3] = v8;
  }
  v11 = a1[4];
  v9[15] = -1;
  v9[5] = v11;
  LODWORD(v11) = *((_DWORD *)a1 + 10);
  v9[16] = -1;
  *((_DWORD *)v9 + 12) = v11;
  v9[17] = 0xFFFFFFFFLL;
  *((_DWORD *)v9 + 36) = 0;
  *(_OWORD *)(v9 + 7) = 0;
  *(_OWORD *)(v9 + 9) = 0;
  *(_OWORD *)(v9 + 11) = 0;
  *(_OWORD *)(v9 + 13) = 0;
  merge_handler_ctr();
  v12 = v9[1];
  v9[9] = 0;
  if ( *(int *)(v12 + 28) > 0 )
  {
    v13 = 0;
    do
    {
      v14 = v13;
      v15 = operator new(0x80u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v17 = v15;
      v18 = v9[1];
      v19 = *(int *)(v18 + 4LL * (int)v13 + 16);
      *(_QWORD *)(v17 + 32) = v18;
      *(_DWORD *)(v17 + 12) = -1;
      *(_DWORD *)(v17 + 8) = v19;
      *(_QWORD *)v17 = &off_2B08F60;
      *(__m128i *)(v17 + 16) = si128;
      *(_QWORD *)(v17 + 40) = switch_dbctx(v19);
      *(_DWORD *)(v17 + 48) = -1;
      *(_OWORD *)(v17 + 56) = 0;
      *(_OWORD *)(v17 + 72) = 0;
      *(_OWORD *)(v17 + 88) = 0;
      if ( a5 )
      {
        v20 = strlen(a5);
        v21 = (void *)qvector_reserve(v17 + 80, 0, v20 + 1, 1);
        *(_QWORD *)(v17 + 80) = v21;
        *(_QWORD *)(v17 + 88) = v20 + 1;
        memmove(v21, a5, v20);
        *(_BYTE *)(*(_QWORD *)(v17 + 80) + v20) = 0;
      }
      *(_QWORD *)(v17 + 104) = 0;
      *(_QWORD *)(v17 + 112) = a3;
      *(_QWORD *)(v17 + 120) = a4;
      sub_616DF0(v17, a2);
      v9[v13 + 7] = v17;
      v22 = v9[1];
      ++v13;
      *(_DWORD *)(v17 + 12) = v14;
    }
    while ( *(_DWORD *)(v22 + 28) > (int)v13 );
  }
  *((_DWORD *)v9 + 35) = a2;
  return v9;
}

