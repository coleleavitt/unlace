__int64 __fastcall sub_5258E0(__int64 *a1, const char *a2, const char *a3, char a4)
{
  size_t v7; // rax
  __int64 v8; // r14
  size_t v9; // r15
  size_t v10; // r8
  __int64 v11; // rsi
  size_t v12; // rdx
  __int64 v13; // r12
  unsigned __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // r12
  unsigned __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // r12
  size_t v22; // rax
  size_t v23; // r13
  size_t v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rbp
  unsigned __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rsi
  __int64 result; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rsi
  unsigned __int64 v36; // r15
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  size_t v41; // [rsp+0h] [rbp-48h]
  __int64 v42; // [rsp+0h] [rbp-48h]
  size_t v43; // [rsp+8h] [rbp-40h]

  if ( (a4 & 1) != 0 )
  {
    v34 = a1[1];
    if ( v34 )
    {
      v37 = v34 + 9;
      v36 = v34 + 10;
      v35 = *a1;
      --v34;
      if ( a1[2] >= v36 )
        goto LABEL_31;
    }
    else
    {
      v35 = *a1;
      v36 = 11;
      v37 = 10;
      if ( (unsigned __int64)a1[2] >= 0xB )
      {
LABEL_31:
        a1[1] = v36;
        *(_BYTE *)(v35 + v37) = 0;
        qmemcpy((void *)(*a1 + v34), "qproperty-", 10);
        goto LABEL_2;
      }
    }
    v42 = v37;
    v40 = qvector_reserve(a1, v35, v36, 1);
    v37 = v42;
    *a1 = v40;
    v35 = v40;
    goto LABEL_31;
  }
LABEL_2:
  if ( a2 )
  {
    v7 = strlen(a2);
    v8 = a1[1];
    v9 = v7;
    v10 = v7;
    if ( v8 )
    {
      --v8;
      v10 = v7 + v8;
    }
    v11 = *a1;
    v12 = v10 + 1;
    if ( a1[2] < v10 + 1 )
    {
      v43 = v10;
      v41 = v10 + 1;
      v39 = qvector_reserve(a1, v11, v12, 1);
      v10 = v43;
      v12 = v41;
      *a1 = v39;
      v11 = v39;
    }
    a1[1] = v12;
    *(_BYTE *)(v11 + v10) = 0;
    memmove((void *)(v8 + *a1), a2, v9);
  }
  if ( (a4 & 2) != 0 )
    strrpl(*a1, 95, 45);
  v13 = a1[1];
  if ( v13 )
  {
    v14 = v13 + 1;
    v15 = a1[1];
    v16 = *a1;
    --v13;
    if ( a1[2] >= v14 )
      goto LABEL_12;
  }
  else
  {
    v16 = *a1;
    v15 = 1;
    v14 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_12;
  }
  v32 = qvector_reserve(a1, v16, v14, 1);
  *a1 = v32;
  v16 = v32;
LABEL_12:
  a1[1] = v14;
  *(_BYTE *)(v16 + v13) = 58;
  *(_BYTE *)(*a1 + v15) = 0;
  v17 = a1[1];
  if ( v17 )
  {
    v18 = v17 + 1;
    v19 = a1[1];
    v20 = *a1;
    --v17;
    if ( a1[2] >= v18 )
      goto LABEL_14;
  }
  else
  {
    v20 = *a1;
    v19 = 1;
    v18 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_14;
  }
  v31 = qvector_reserve(a1, v20, v18, 1);
  *a1 = v31;
  v20 = v31;
LABEL_14:
  a1[1] = v18;
  *(_BYTE *)(v20 + v17) = 32;
  *(_BYTE *)(*a1 + v19) = 0;
  if ( a3 )
  {
    v21 = a1[1];
    v22 = strlen(a3);
    v23 = v22;
    v24 = v22;
    if ( v21 )
    {
      --v21;
      v24 = v22 + v21;
    }
    v25 = *a1;
    if ( a1[2] < v24 + 1 )
    {
      v38 = qvector_reserve(a1, v25, v24 + 1, 1);
      *a1 = v38;
      v25 = v38;
    }
    a1[1] = v24 + 1;
    *(_BYTE *)(v25 + v24) = 0;
    memmove((void *)(v21 + *a1), a3, v23);
  }
  v26 = a1[1];
  if ( !v26 )
  {
    v29 = *a1;
    v28 = 1;
    v27 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_22;
LABEL_28:
    v33 = qvector_reserve(a1, v29, v27, 1);
    *a1 = v33;
    v29 = v33;
    goto LABEL_22;
  }
  v27 = v26 + 1;
  v28 = a1[1];
  v29 = *a1;
  --v26;
  if ( a1[2] < v27 )
    goto LABEL_28;
LABEL_22:
  a1[1] = v27;
  *(_BYTE *)(v29 + v26) = 59;
  result = *a1;
  *(_BYTE *)(*a1 + v28) = 0;
  return result;
}
