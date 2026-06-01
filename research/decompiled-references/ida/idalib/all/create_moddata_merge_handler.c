_QWORD *__fastcall create_moddata_merge_handler(__int64 *a1, int a2, __int64 a3, __int64 a4, const char *a5)
{
  _QWORD *v6; // rax
  size_t v7; // r12
  _QWORD *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  int v13; // r15d
  __int64 v14; // rax
  __m128i si128; // xmm2
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  size_t v19; // r14
  void *v20; // rax
  __int64 v21; // rax
  void *v23; // rax
  const void *v24; // rsi

  if ( !(unsigned __int8)idbattrs_need_merging(*a1, a3, a4) )
    return nullptr;
  v6 = (_QWORD *)operator new(0x98u);
  v7 = a1[2];
  v8 = v6;
  *v6 = &off_2B26160;
  v9 = *a1;
  v8[2] = 0;
  v8[1] = v9;
  *(_OWORD *)(v8 + 3) = 0;
  if ( v7 )
  {
    v23 = (void *)qalloc_or_throw(v7);
    v8[2] = v23;
    v24 = (const void *)a1[1];
    v8[4] = v7;
    memcpy(v23, v24, v7);
    v8[3] = v7;
  }
  v10 = a1[4];
  v8[15] = -1;
  v8[5] = v10;
  LODWORD(v10) = *((_DWORD *)a1 + 10);
  v8[16] = -1;
  *((_DWORD *)v8 + 12) = v10;
  v8[17] = -1;
  v8[18] = 0;
  *(_OWORD *)(v8 + 7) = 0;
  *(_OWORD *)(v8 + 9) = 0;
  *(_OWORD *)(v8 + 11) = 0;
  *(_OWORD *)(v8 + 13) = 0;
  merge_handler_ctr(v8, 0);
  v11 = v8[1];
  v8[9] = 0;
  if ( *(int *)(v11 + 28) > 0 )
  {
    v12 = 0;
    do
    {
      v13 = v12;
      v14 = operator new(0x80u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v16 = v14;
      v17 = v8[1];
      v18 = *(int *)(v17 + 4LL * (int)v12 + 16);
      *(_QWORD *)(v16 + 32) = v17;
      *(_DWORD *)(v16 + 12) = -1;
      *(_DWORD *)(v16 + 8) = v18;
      *(_QWORD *)v16 = &off_2B32F20;
      *(__m128i *)(v16 + 16) = si128;
      *(_QWORD *)(v16 + 40) = switch_dbctx(v18);
      *(_QWORD *)(v16 + 48) = -1;
      *(_OWORD *)(v16 + 56) = 0;
      *(_OWORD *)(v16 + 72) = 0;
      *(_OWORD *)(v16 + 88) = 0;
      if ( a5 )
      {
        v19 = strlen(a5);
        v20 = (void *)qvector_reserve(v16 + 80, 0, v19 + 1, 1);
        *(_QWORD *)(v16 + 80) = v20;
        *(_QWORD *)(v16 + 88) = v19 + 1;
        memmove(v20, a5, v19);
        *(_BYTE *)(*(_QWORD *)(v16 + 80) + v19) = 0;
      }
      *(_QWORD *)(v16 + 104) = 0;
      *(_QWORD *)(v16 + 112) = a3;
      *(_QWORD *)(v16 + 120) = a4;
      sub_633A00((_QWORD *)v16, a2);
      v8[v12 + 7] = v16;
      v21 = v8[1];
      ++v12;
      *(_DWORD *)(v16 + 12) = v13;
    }
    while ( *(_DWORD *)(v21 + 28) > (int)v12 );
  }
  *((_DWORD *)v8 + 36) = a2;
  return v8;
}
