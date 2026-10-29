__int64 __fastcall sub_640D90(__int64 *a1, const char *a2)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // r12
  size_t v12; // rax
  size_t v13; // r13
  size_t v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbp
  unsigned __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rbp
  unsigned __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 1;
    v5 = a1[1];
    v6 = *a1;
    --v3;
    if ( a1[2] >= v4 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a1;
    v5 = 1;
    v4 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
  }
  v26 = qvector_reserve(a1, v6, v4, 1);
  *a1 = v26;
  v6 = v26;
LABEL_3:
  a1[1] = v4;
  *(_BYTE *)(v6 + v3) = 1;
  *(_BYTE *)(*a1 + v5) = 0;
  v7 = a1[1];
  if ( v7 )
  {
    v8 = v7 + 1;
    v9 = a1[1];
    v10 = *a1;
    --v7;
    if ( a1[2] >= v8 )
      goto LABEL_5;
  }
  else
  {
    v10 = *a1;
    v9 = 1;
    v8 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_5;
  }
  v25 = qvector_reserve(a1, v10, v8, 1);
  *a1 = v25;
  v10 = v25;
LABEL_5:
  a1[1] = v8;
  *(_BYTE *)(v10 + v7) = 32;
  *(_BYTE *)(*a1 + v9) = 0;
  if ( a2 )
  {
    v11 = a1[1];
    v12 = strlen(a2);
    v13 = v12;
    v14 = v12;
    if ( v11 )
    {
      --v11;
      v14 = v12 + v11;
    }
    v15 = *a1;
    if ( a1[2] < v14 + 1 )
    {
      v29 = qvector_reserve(a1, v15, v14 + 1, 1);
      *a1 = v29;
      v15 = v29;
    }
    a1[1] = v14 + 1;
    *(_BYTE *)(v15 + v14) = 0;
    memmove((void *)(v11 + *a1), a2, v13);
  }
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
  v28 = qvector_reserve(a1, v19, v17, 1);
  *a1 = v28;
  v19 = v28;
LABEL_13:
  a1[1] = v17;
  *(_BYTE *)(v19 + v16) = 2;
  *(_BYTE *)(*a1 + v18) = 0;
  v20 = a1[1];
  if ( !v20 )
  {
    v23 = *a1;
    v22 = 1;
    v21 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_15;
LABEL_21:
    v27 = qvector_reserve(a1, v23, v21, 1);
    *a1 = v27;
    v23 = v27;
    goto LABEL_15;
  }
  v21 = v20 + 1;
  v22 = a1[1];
  v23 = *a1;
  --v20;
  if ( a1[2] < v21 )
    goto LABEL_21;
LABEL_15:
  a1[1] = v21;
  *(_BYTE *)(v23 + v20) = 32;
  result = *a1;
  *(_BYTE *)(*a1 + v22) = 0;
  return result;
}

