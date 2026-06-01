__int64 __fastcall sub_46F870(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // r14
  _DWORD *v5; // rbp
  unsigned int *v6; // r9
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rsi
  unsigned int *v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rcx
  unsigned int *v15; // rdx
  __int64 v16; // r10
  char *v17; // r9
  signed __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 result; // rax
  char *v22; // rbx
  __int64 v23; // rsi
  char *v24; // rcx
  unsigned __int64 v25; // r10
  char *v26; // r8
  const char *v27; // rsi
  __int128 v28; // xmm0
  size_t v29; // r15
  int v30; // eax
  __int64 v31; // rax
  size_t v32; // r15
  void *v33; // rax
  void *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  char *v37; // [rsp+8h] [rbp-40h]

  v4 = *(_DWORD **)(a2 + 48);
  v5 = v4;
  v6 = (unsigned int *)(**(_QWORD **)(a1 + 40) + 8 * a3);
  v7 = *v6;
  v8 = (__int64)(*(_QWORD *)(a2 + 56) << 6) >> 6;
  v9 = v8;
  v10 = *v6 + 1;
  if ( (__int64)(*(_QWORD *)(a2 + 56) << 6) <= 0 )
  {
    v16 = *(_QWORD *)(a1 + 56);
    v17 = *(char **)(a1 + 48);
    v18 = 0;
    v20 = 0;
    v19 = v16 << 6;
    result = v16 << 6 >> 6;
    if ( v16 << 6 <= 0 )
      return result;
    goto LABEL_15;
  }
  do
  {
    while ( 1 )
    {
      v11 = v9 >> 1;
      v12 = &v5[16 * (v9 >> 1)];
      if ( v7 >= *v12 && (v7 != *v12 || v12[1] < v10) )
        break;
      v9 >>= 1;
      if ( v11 <= 0 )
        goto LABEL_8;
    }
    v5 = v12 + 16;
    v9 = v9 - 1 - v11;
  }
  while ( v9 > 0 );
LABEL_8:
  v13 = v6[1];
  do
  {
    while ( 1 )
    {
      v14 = v8 >> 1;
      v15 = &v4[16 * (v8 >> 1)];
      if ( v13 >= *v15 && (v13 != *v15 || v15[1] < v13 + 1) )
        break;
      v8 >>= 1;
      if ( v14 <= 0 )
        goto LABEL_14;
    }
    v4 = v15 + 16;
    v8 = v8 - 1 - v14;
  }
  while ( v8 > 0 );
LABEL_14:
  v16 = *(_QWORD *)(a1 + 56);
  v17 = *(char **)(a1 + 48);
  v18 = (char *)v4 - (char *)v5;
  v19 = v16 << 6;
  v20 = ((char *)v4 - (char *)v5) >> 6;
  result = v16 << 6 >> 6;
  if ( v16 << 6 > 0 )
  {
LABEL_15:
    v22 = v17;
    do
    {
      while ( 1 )
      {
        v23 = result >> 1;
        v24 = &v22[64 * (result >> 1)];
        if ( v7 >= *(_DWORD *)v24 && (v7 != *(_DWORD *)v24 || *((_DWORD *)v24 + 1) < v10) )
          break;
        result >>= 1;
        if ( v23 <= 0 )
          goto LABEL_21;
      }
      v22 = v24 + 64;
      result = result - 1 - v23;
    }
    while ( result > 0 );
    goto LABEL_21;
  }
  v22 = *(char **)(a1 + 48);
LABEL_21:
  if ( v20 )
  {
    v25 = v20 + v16;
    v26 = (char *)(v22 - v17);
    if ( *(_QWORD *)(a1 + 64) < v25 )
    {
      v37 = (char *)(v22 - v17);
      v35 = qvector_reserve(a1 + 48, v17, v25, 64);
      v26 = v37;
      v36 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = v35;
      v22 = &v37[v35];
      v19 = v36 << 6;
    }
    v27 = v22;
    result = (__int64)memmove(&v22[v18], v22, v19 - (_QWORD)v26);
    if ( v5 != v4 )
    {
      v28 = 0;
      do
      {
        v31 = *(_QWORD *)v5;
        *((_QWORD *)v22 + 1) = 0;
        *((_OWORD *)v22 + 1) = v28;
        *(_QWORD *)v22 = v31;
        v32 = *((_QWORD *)v5 + 2);
        if ( v32 )
        {
          v33 = (void *)qalloc_or_throw(*((_QWORD *)v5 + 2), v27);
          *((_QWORD *)v22 + 3) = v32;
          *((_QWORD *)v22 + 1) = v33;
          v27 = *((const char **)v5 + 1);
          memcpy(v33, v27, v32);
          *((_QWORD *)v22 + 2) = v32;
          v28 = 0;
        }
        *((_QWORD *)v22 + 4) = 0;
        *(_OWORD *)(v22 + 40) = v28;
        v29 = *((_QWORD *)v5 + 5);
        if ( v29 )
        {
          v34 = (void *)qalloc_or_throw(*((_QWORD *)v5 + 5), v27);
          *((_QWORD *)v22 + 4) = v34;
          *((_QWORD *)v22 + 6) = v29;
          v27 = *((const char **)v5 + 4);
          memcpy(v34, v27, v29);
          *((_QWORD *)v22 + 5) = v29;
          v28 = 0;
        }
        v30 = v5[14];
        v5 += 16;
        v22 += 64;
        *((_DWORD *)v22 - 2) = v30;
        result = *((unsigned __int16 *)v5 - 2);
        *((_WORD *)v22 - 2) = result;
      }
      while ( v5 != v4 );
    }
    *(_QWORD *)(a1 + 56) += v20;
  }
  return result;
}

