_QWORD *__fastcall sub_265E80(_QWORD *a1, __int64 a2, int a3)
{
  unsigned __int8 v5; // al
  __int64 v6; // r14
  __int64 v7; // r13
  char *v8; // r15
  _DWORD *v9; // rax
  __int64 v10; // rdx
  const char *v11; // r14
  size_t v12; // rax
  __int64 v13; // r12
  size_t v14; // r13
  size_t v15; // r15
  __int64 v16; // rsi
  size_t v17; // rdx
  __int64 v18; // r12
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rsi
  unsigned __int64 v22; // r12
  size_t v23; // r14
  __int64 v24; // r13
  size_t v25; // r15
  __int64 v26; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax

  v5 = *(_BYTE *)(a2 + 25);
  if ( v5 == 3 )
  {
    *a1 = 0;
    v6 = 8;
    v7 = 7;
    *(_OWORD *)(a1 + 1) = 0;
    v8 = "$MERGE$";
    goto LABEL_8;
  }
  if ( v5 > 3u )
  {
    if ( v5 == 4 )
    {
      *a1 = 0;
      v6 = 7;
      v7 = 6;
      *(_OWORD *)(a1 + 1) = 0;
      v8 = "$DIFF$";
      goto LABEL_8;
    }
LABEL_30:
    *a1 = 0;
    v6 = 4;
    v7 = 3;
    *(_OWORD *)(a1 + 1) = 0;
    v8 = "XXX";
    goto LABEL_8;
  }
  if ( v5 == 1 )
  {
    *a1 = 0;
    v6 = 6;
    v8 = "$DIS$";
    *(_OWORD *)(a1 + 1) = 0;
    v7 = 5;
    goto LABEL_8;
  }
  if ( v5 != 2 )
    goto LABEL_30;
  *a1 = 0;
  v6 = 6;
  v7 = 5;
  *(_OWORD *)(a1 + 1) = 0;
  v8 = "$DBG$";
LABEL_8:
  v9 = (_DWORD *)qvector_reserve(a1, 0, v6, 1);
  *a1 = v9;
  v10 = (unsigned int)v7;
  a1[1] = v6;
  if ( (v7 & 4) != 0 )
  {
    *v9 = *(_DWORD *)v8;
    *(_DWORD *)((char *)v9 + (unsigned int)v7 - 4) = *(_DWORD *)&v8[(unsigned int)v7 - 4];
  }
  else
  {
    v10 = (unsigned __int8)*v8;
    *(_BYTE *)v9 = v10;
    if ( (v7 & 2) != 0 )
    {
      v10 = *(unsigned __int16 *)&v8[v7 - 2];
      *(_WORD *)((char *)v9 + v7 - 2) = v10;
    }
  }
  *(_BYTE *)(*a1 + v7) = 0;
  if ( a3 != 1 )
  {
    if ( a3 == 2 )
    {
      v30 = *(_QWORD *)(get_current_config(a1, 0, v10) + 624);
      if ( *(_QWORD *)(v30 + 48) <= 1u )
        goto LABEL_22;
      v11 = *(const char **)(v30 + 40);
    }
    else
    {
      v11 = *(const char **)(a2 + 32);
    }
    if ( v11 )
    {
      v12 = strlen(v11);
      v13 = a1[1];
      v14 = v12;
      v15 = v12;
      if ( v13 )
      {
        --v13;
        v15 = v12 + v13;
      }
      v16 = *a1;
      v17 = v15 + 1;
      if ( a1[2] < v15 + 1 )
      {
        v31 = qvector_reserve(a1, v16, v17, 1);
        *a1 = v31;
        v17 = v15 + 1;
        v16 = v31;
      }
      a1[1] = v17;
      *(_BYTE *)(v16 + v15) = 0;
      memmove((void *)(v13 + *a1), v11, v14);
      v18 = a1[1];
      if ( v18 )
      {
        v19 = v18 + 1;
        v20 = a1[1];
        v21 = *a1;
        --v18;
        if ( a1[2] >= v19 )
        {
LABEL_21:
          a1[1] = v19;
          *(_BYTE *)(v21 + v20) = 0;
          *(_BYTE *)(*a1 + v18) = 36;
          goto LABEL_22;
        }
      }
      else
      {
        v21 = *a1;
        v19 = 2;
        v20 = 1;
        if ( a1[2] >= 2u )
          goto LABEL_21;
      }
      v28 = qvector_reserve(a1, v21, v19, 1);
      *a1 = v28;
      v21 = v28;
      goto LABEL_21;
    }
  }
LABEL_22:
  v22 = *(_QWORD *)(a2 + 8);
  if ( v22 )
  {
    v23 = v22 - 1;
    if ( v22 != 1 )
    {
      v24 = a1[1];
      v25 = v22 - 1;
      if ( v24 )
      {
        --v24;
        v25 = v23 + v24;
        v22 += v24;
      }
      v26 = *a1;
      if ( a1[2] < v22 )
      {
        v29 = qvector_reserve(a1, v26, v22, 1);
        *a1 = v29;
        v26 = v29;
      }
      a1[1] = v22;
      *(_BYTE *)(v26 + v25) = 0;
      memcpy((void *)(v24 + *a1), *(const void **)a2, v23);
    }
  }
  return a1;
}
