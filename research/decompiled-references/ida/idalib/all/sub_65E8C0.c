void __fastcall sub_65E8C0(__int64 *a1, const char *a2, char a3)
{
  size_t v5; // rax
  __int64 v6; // r12
  size_t v7; // r13
  size_t v8; // r8
  __int64 v9; // rsi
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // r15
  unsigned __int64 v14; // r13
  char v15; // r13
  __int64 v16; // r12
  unsigned __int64 v17; // r15
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rbp
  unsigned __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rbp
  unsigned __int64 v25; // r12
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  size_t v33; // [rsp+8h] [rbp-40h]
  __int64 v34; // [rsp+8h] [rbp-40h]

  if ( !a3 )
  {
    if ( !a2 )
      return;
    goto LABEL_3;
  }
  v11 = a1[1];
  if ( v11 )
  {
    v14 = v11 + 1;
    v13 = a1[1];
    v12 = *a1;
    --v11;
    if ( a1[2] >= v14 )
      goto LABEL_11;
  }
  else
  {
    v12 = *a1;
    v13 = 1;
    v14 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_11;
  }
  v29 = qvector_reserve(a1, v12, v14, 1);
  *a1 = v29;
  v12 = v29;
LABEL_11:
  a1[1] = v14;
  v15 = a3;
  *(_BYTE *)(v12 + v11) = 1;
  *(_BYTE *)(*a1 + v13) = 0;
  v16 = a1[1];
  if ( v16 )
  {
    v17 = v16 + 1;
    v18 = a1[1];
    v19 = *a1;
    --v16;
    if ( a1[2] >= v17 )
      goto LABEL_13;
  }
  else
  {
    v19 = *a1;
    v18 = 1;
    v17 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_13;
  }
  v34 = v18;
  v30 = qvector_reserve(a1, v19, v17, 1);
  v18 = v34;
  *a1 = v30;
  v19 = v30;
LABEL_13:
  a1[1] = v17;
  *(_BYTE *)(v19 + v16) = a3;
  *(_BYTE *)(*a1 + v18) = 0;
  if ( !a2 )
  {
LABEL_16:
    v20 = a1[1];
    if ( v20 )
    {
      v21 = v20 + 1;
      v22 = a1[1];
      v23 = *a1;
      --v20;
      if ( a1[2] >= v21 )
        goto LABEL_18;
    }
    else
    {
      v23 = *a1;
      v22 = 1;
      v21 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_18;
    }
    v32 = qvector_reserve(a1, v23, v21, 1);
    *a1 = v32;
    v23 = v32;
LABEL_18:
    a1[1] = v21;
    *(_BYTE *)(v23 + v20) = 2;
    *(_BYTE *)(*a1 + v22) = 0;
    v24 = a1[1];
    if ( v24 )
    {
      v25 = v24 + 1;
      v26 = a1[1];
      v27 = *a1;
      --v24;
      if ( a1[2] >= v25 )
      {
LABEL_20:
        a1[1] = v25;
        *(_BYTE *)(v27 + v24) = v15;
        *(_BYTE *)(*a1 + v26) = 0;
        return;
      }
    }
    else
    {
      v27 = *a1;
      v26 = 1;
      v25 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_20;
    }
    v31 = qvector_reserve(a1, v27, v25, 1);
    *a1 = v31;
    v27 = v31;
    goto LABEL_20;
  }
LABEL_3:
  v5 = strlen(a2);
  v6 = a1[1];
  v7 = v5;
  v8 = v5;
  if ( v6 )
  {
    --v6;
    v9 = *a1;
    v8 = v5 + v6;
    v10 = v5 + v6 + 1;
    if ( a1[2] >= v10 )
      goto LABEL_5;
  }
  else
  {
    v9 = *a1;
    v10 = v5 + 1;
    if ( a1[2] >= v5 + 1 )
      goto LABEL_5;
  }
  v33 = v8;
  v28 = qvector_reserve(a1, v9, v10, 1);
  v8 = v33;
  *a1 = v28;
  v9 = v28;
LABEL_5:
  a1[1] = v10;
  *(_BYTE *)(v9 + v8) = 0;
  memmove((void *)(v6 + *a1), a2, v7);
  if ( a3 )
  {
    v15 = a3;
    goto LABEL_16;
  }
}
