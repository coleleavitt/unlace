__int64 __fastcall sub_641C10(__int64 *a1, char a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rbp
  unsigned __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rbp
  unsigned __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rbp
  unsigned __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

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
  v24 = qvector_reserve(a1, v6, v4, 1);
  *a1 = v24;
  v6 = v24;
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
  v28 = qvector_reserve(a1, v10, v8, 1);
  *a1 = v28;
  v10 = v28;
LABEL_5:
  a1[1] = v8;
  *(_BYTE *)(v10 + v7) = 9;
  *(_BYTE *)(*a1 + v9) = 0;
  v11 = a1[1];
  if ( v11 )
  {
    v12 = v11 + 1;
    v13 = a1[1];
    v14 = *a1;
    --v11;
    if ( a1[2] >= v12 )
      goto LABEL_7;
  }
  else
  {
    v14 = *a1;
    v13 = 1;
    v12 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_7;
  }
  v27 = qvector_reserve(a1, v14, v12, 1);
  *a1 = v27;
  v14 = v27;
LABEL_7:
  a1[1] = v12;
  *(_BYTE *)(v14 + v11) = a2;
  *(_BYTE *)(*a1 + v13) = 0;
  v15 = a1[1];
  if ( v15 )
  {
    v16 = v15 + 1;
    v17 = a1[1];
    v18 = *a1;
    --v15;
    if ( a1[2] >= v16 )
      goto LABEL_9;
  }
  else
  {
    v18 = *a1;
    v17 = 1;
    v16 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_9;
  }
  v26 = qvector_reserve(a1, v18, v16, 1);
  *a1 = v26;
  v18 = v26;
LABEL_9:
  a1[1] = v16;
  *(_BYTE *)(v18 + v15) = 2;
  *(_BYTE *)(*a1 + v17) = 0;
  v19 = a1[1];
  if ( !v19 )
  {
    v22 = *a1;
    v21 = 1;
    v20 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_11;
LABEL_15:
    v25 = qvector_reserve(a1, v22, v20, 1);
    *a1 = v25;
    v22 = v25;
    goto LABEL_11;
  }
  v20 = v19 + 1;
  v21 = a1[1];
  v22 = *a1;
  --v19;
  if ( a1[2] < v20 )
    goto LABEL_15;
LABEL_11:
  a1[1] = v20;
  *(_BYTE *)(v22 + v19) = 9;
  result = *a1;
  *(_BYTE *)(*a1 + v21) = 0;
  return result;
}

