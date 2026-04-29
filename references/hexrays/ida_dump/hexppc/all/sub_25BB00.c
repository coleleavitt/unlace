__int64 __fastcall sub_25BB00(__int64 *a1, char a2, const char *a3)
{
  __int64 v5; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // r13
  size_t v14; // rax
  size_t v15; // r14
  size_t v16; // r15
  __int64 v17; // rsi
  size_t v18; // rdx
  __int64 v19; // rbp
  unsigned __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rbp
  unsigned __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 result; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  v5 = a1[1];
  if ( v5 )
  {
    v6 = v5 + 1;
    v7 = a1[1];
    v8 = *a1;
    --v5;
    if ( a1[2] >= v6 )
      goto LABEL_3;
  }
  else
  {
    v8 = *a1;
    v7 = 1;
    v6 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
  }
  v29 = qvector_reserve(a1, v8, v6, 1);
  *a1 = v29;
  v8 = v29;
LABEL_3:
  a1[1] = v6;
  *(_BYTE *)(v8 + v5) = 1;
  *(_BYTE *)(*a1 + v7) = 0;
  v9 = a1[1];
  if ( v9 )
  {
    v10 = v9 + 1;
    v11 = a1[1];
    v12 = *a1;
    --v9;
    if ( a1[2] >= v10 )
      goto LABEL_5;
  }
  else
  {
    v12 = *a1;
    v11 = 1;
    v10 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_5;
  }
  v28 = qvector_reserve(a1, v12, v10, 1);
  *a1 = v28;
  v12 = v28;
LABEL_5:
  a1[1] = v10;
  *(_BYTE *)(v12 + v9) = a2;
  *(_BYTE *)(*a1 + v11) = 0;
  if ( a3 )
  {
    v13 = a1[1];
    v14 = strlen(a3);
    v15 = v14;
    v16 = v14;
    if ( v13 )
    {
      --v13;
      v16 = v14 + v13;
    }
    v17 = *a1;
    v18 = v16 + 1;
    if ( a1[2] < v16 + 1 )
    {
      v32 = qvector_reserve(a1, v17, v18, 1);
      v18 = v16 + 1;
      *a1 = v32;
      v17 = v32;
    }
    a1[1] = v18;
    *(_BYTE *)(v17 + v16) = 0;
    memmove((void *)(v13 + *a1), a3, v15);
  }
  v19 = a1[1];
  if ( v19 )
  {
    v20 = v19 + 1;
    v21 = a1[1];
    v22 = *a1;
    --v19;
    if ( a1[2] >= v20 )
      goto LABEL_13;
  }
  else
  {
    v22 = *a1;
    v21 = 1;
    v20 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_13;
  }
  v31 = qvector_reserve(a1, v22, v20, 1);
  *a1 = v31;
  v22 = v31;
LABEL_13:
  a1[1] = v20;
  *(_BYTE *)(v22 + v19) = 2;
  *(_BYTE *)(*a1 + v21) = 0;
  v23 = a1[1];
  if ( !v23 )
  {
    v26 = *a1;
    v25 = 1;
    v24 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_15;
LABEL_21:
    v30 = qvector_reserve(a1, v26, v24, 1);
    *a1 = v30;
    v26 = v30;
    goto LABEL_15;
  }
  v24 = v23 + 1;
  v25 = a1[1];
  v26 = *a1;
  --v23;
  if ( a1[2] < v24 )
    goto LABEL_21;
LABEL_15:
  a1[1] = v24;
  *(_BYTE *)(v26 + v23) = a2;
  result = *a1;
  *(_BYTE *)(*a1 + v25) = 0;
  return result;
}
