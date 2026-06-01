void *__fastcall sub_7ED200(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r12
  __int64 v3; // rdx
  __int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // rax
  size_t v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // rcx
  __m128i v10; // xmm0
  void *result; // rax
  size_t v12; // rbp
  void *v13; // rax
  void *v14; // rax
  const void *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // rdx
  const void **v22; // rbp
  size_t v23; // r15
  void *v24; // rax
  void *v25; // rax
  __int64 v26; // [rsp+0h] [rbp-40h]
  __int64 v27; // [rsp+0h] [rbp-40h]

  v2 = a2;
  v3 = a2[1];
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = *((_WORD *)a2 + 2);
  *(_QWORD *)(a1 + 8) = v3;
  v5 = a2[2];
  *(_WORD *)(a1 + 4) = v4;
  v6 = a2[3];
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  v7 = a2[5];
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 24) = v6;
  if ( v7 )
  {
    v13 = (void *)qalloc_or_throw(v7, (const char *)a2);
    *(_QWORD *)(a1 + 48) = v7;
    a2 = (_QWORD *)a2[4];
    *(_QWORD *)(a1 + 32) = v13;
    memcpy(v13, a2, v7);
    *(_QWORD *)(a1 + 40) = v7;
  }
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v8 = v2[8];
  if ( v8 )
  {
    v25 = (void *)qalloc_or_throw(40 * v8, (const char *)a2);
    *(_QWORD *)(a1 + 56) = v25;
    a2 = (_QWORD *)v2[7];
    *(_QWORD *)(a1 + 72) = v8;
    memcpy(v25, a2, 40 * v8);
    *(_QWORD *)(a1 + 64) = v8;
  }
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  v9 = v2[11];
  if ( v9 )
  {
    v26 = v2[11];
    v16 = qalloc_or_throw(24 * v9, (const char *)a2);
    v17 = v26;
    *(_QWORD *)(a1 + 80) = v16;
    v18 = v16;
    v19 = 0;
    *(_QWORD *)(a1 + 96) = v26;
    while ( 1 )
    {
      v20 = 24 * v19 + v18;
      v21 = v2[10] + 24 * v19;
      *(_QWORD *)v20 = 0;
      v22 = (const void **)v21;
      *(_OWORD *)(v20 + 8) = 0;
      v23 = *(_QWORD *)(v21 + 8);
      if ( v23 )
      {
        v27 = v17;
        v24 = (void *)qalloc_or_throw(*(_QWORD *)(v21 + 8), (const char *)a2);
        *(_QWORD *)v20 = v24;
        ++v19;
        *(_QWORD *)(v20 + 16) = v23;
        a2 = *v22;
        memcpy(v24, *v22, v23);
        v17 = v27;
        *(_QWORD *)(v20 + 8) = v23;
        if ( v27 == v19 )
        {
LABEL_13:
          *(_QWORD *)(a1 + 88) = v17;
          break;
        }
      }
      else if ( v17 == ++v19 )
      {
        goto LABEL_13;
      }
      v18 = *(_QWORD *)(a1 + 80);
    }
  }
  v10 = _mm_loadu_si128((const __m128i *)(v2 + 13));
  result = (void *)v2[15];
  *(_QWORD *)(a1 + 128) = 0;
  *(__m128i *)(a1 + 104) = v10;
  *(_OWORD *)(a1 + 136) = 0;
  v12 = v2[17];
  *(_QWORD *)(a1 + 120) = result;
  if ( v12 )
  {
    v14 = (void *)qalloc_or_throw(v12, (const char *)a2);
    *(_QWORD *)(a1 + 144) = v12;
    v15 = (const void *)v2[16];
    *(_QWORD *)(a1 + 128) = v14;
    result = memcpy(v14, v15, v12);
    *(_QWORD *)(a1 + 136) = v12;
  }
  return result;
}

