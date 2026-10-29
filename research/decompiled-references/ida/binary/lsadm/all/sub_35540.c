void *__fastcall sub_35540(__int64 a1, __int64 a2)
{
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
  const void *v14; // rsi
  void *v15; // rax
  const void *v16; // rsi
  char *v17; // rax
  __int64 v18; // rcx
  char *v19; // r13
  __int64 v20; // r14
  char *v21; // r13
  __int64 v22; // rdx
  const void **v23; // rbp
  size_t v24; // r15
  void *v25; // rax
  void *v26; // rax
  const void *v27; // rsi
  __int64 v28; // [rsp+0h] [rbp-40h]
  __int64 v29; // [rsp+0h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = *(_WORD *)(a2 + 4);
  *(_QWORD *)(a1 + 8) = v3;
  v5 = *(_QWORD *)(a2 + 16);
  *(_WORD *)(a1 + 4) = v4;
  v6 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  v7 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 24) = v6;
  if ( v7 )
  {
    v13 = sub_29E10(v7);
    *(_QWORD *)(a1 + 48) = v7;
    v14 = *(const void **)(a2 + 32);
    *(_QWORD *)(a1 + 32) = v13;
    memcpy(v13, v14, v7);
    *(_QWORD *)(a1 + 40) = v7;
  }
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v8 = *(_QWORD *)(a2 + 64);
  if ( v8 )
  {
    v26 = sub_29E10(40 * v8);
    *(_QWORD *)(a1 + 56) = v26;
    v27 = *(const void **)(a2 + 56);
    *(_QWORD *)(a1 + 72) = v8;
    memcpy(v26, v27, 40 * v8);
    *(_QWORD *)(a1 + 64) = v8;
  }
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  v9 = *(_QWORD *)(a2 + 88);
  if ( v9 )
  {
    v28 = *(_QWORD *)(a2 + 88);
    v17 = (char *)sub_29E10(24 * v9);
    v18 = v28;
    *(_QWORD *)(a1 + 80) = v17;
    v19 = v17;
    v20 = 0;
    *(_QWORD *)(a1 + 96) = v28;
    while ( 1 )
    {
      v21 = &v19[24 * v20];
      v22 = *(_QWORD *)(a2 + 80) + 24 * v20;
      *(_QWORD *)v21 = 0;
      v23 = (const void **)v22;
      *(_OWORD *)(v21 + 8) = 0;
      v24 = *(_QWORD *)(v22 + 8);
      if ( v24 )
      {
        v29 = v18;
        v25 = sub_29E10(*(_QWORD *)(v22 + 8));
        *(_QWORD *)v21 = v25;
        ++v20;
        *((_QWORD *)v21 + 2) = v24;
        memcpy(v25, *v23, v24);
        v18 = v29;
        *((_QWORD *)v21 + 1) = v24;
        if ( v29 == v20 )
        {
LABEL_13:
          *(_QWORD *)(a1 + 88) = v18;
          break;
        }
      }
      else if ( v18 == ++v20 )
      {
        goto LABEL_13;
      }
      v19 = *(char **)(a1 + 80);
    }
  }
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 104));
  result = *(void **)(a2 + 120);
  *(_QWORD *)(a1 + 128) = 0;
  *(__m128i *)(a1 + 104) = v10;
  *(_OWORD *)(a1 + 136) = 0;
  v12 = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 120) = result;
  if ( v12 )
  {
    v15 = sub_29E10(v12);
    *(_QWORD *)(a1 + 144) = v12;
    v16 = *(const void **)(a2 + 128);
    *(_QWORD *)(a1 + 128) = v15;
    result = memcpy(v15, v16, v12);
    *(_QWORD *)(a1 + 136) = v12;
  }
  return result;
}

