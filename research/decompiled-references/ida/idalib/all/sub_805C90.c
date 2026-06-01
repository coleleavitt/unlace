__int64 __fastcall sub_805C90(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // r12d
  unsigned int v9; // r12d
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r8
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // r15
  unsigned __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rbp
  unsigned __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-40h]
  __int64 v34; // [rsp+8h] [rbp-40h]

  sub_7D01E0(a1, a3);
  v4 = a1[1];
  if ( v4 )
  {
    v5 = v4 + 1;
    v6 = a1[1];
    v7 = *a1;
    --v4;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v7 = *a1;
    v6 = 1;
    v5 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
  }
  v11 = qvector_reserve(a1, v7, v5, 1);
  *a1 = v11;
  v7 = v11;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v7 + v4) = 123;
  v8 = a3 + 1;
  *(_BYTE *)(*a1 + v6) = 0;
  sub_7D01E0(a1, a3 + 1);
  if ( !(unsigned __int8)sub_7D0290(a1) )
    return 0;
  v12 = a1[1];
  if ( !v12 )
  {
    v15 = *a1;
    v14 = 7;
    v13 = 6;
    if ( (unsigned __int64)a1[2] >= 7 )
      goto LABEL_10;
LABEL_26:
    v33 = v13;
    v29 = qvector_reserve(a1, v15, v14, 1);
    v13 = v33;
    *a1 = v29;
    v15 = v29;
    goto LABEL_10;
  }
  v13 = v12 + 5;
  v14 = v12 + 6;
  v15 = *a1;
  --v12;
  if ( a1[2] < v14 )
    goto LABEL_26;
LABEL_10:
  a1[1] = v14;
  *(_BYTE *)(v15 + v13) = 0;
  v16 = *a1 + v12;
  *(_DWORD *)v16 = 539963168;
  *(_WORD *)(v16 + 4) = 29556;
  sub_7D01E0(a1, v8);
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  v17 = a1[1];
  if ( v17 )
  {
    v19 = v17 + 13;
    v18 = v17 + 14;
    --v17;
  }
  else
  {
    v18 = 15;
    v19 = 14;
  }
  v20 = *a1;
  if ( a1[2] < v18 )
  {
    v34 = v19;
    v30 = qvector_reserve(a1, v20, v18, 1);
    v19 = v34;
    *a1 = v30;
    v20 = v30;
  }
  a1[1] = v18;
  *(_BYTE *)(v20 + v19) = 0;
  qmemcpy((void *)(*a1 + v17), " // func_index", 14);
  sub_7D01E0(a1, v8);
  v9 = sub_7D0270(a1);
  if ( !(_BYTE)v9 )
    return 0;
  v21 = a1[1];
  if ( v21 )
  {
    v22 = v21 + 10;
    v23 = v21 + 11;
    --v21;
  }
  else
  {
    v23 = 12;
    v22 = 11;
  }
  v24 = *a1;
  if ( a1[2] < v23 )
  {
    v31 = qvector_reserve(a1, v24, v23, 1);
    *a1 = v31;
    v24 = v31;
  }
  a1[1] = v23;
  *(_BYTE *)(v24 + v22) = 0;
  qmemcpy((void *)(*a1 + v21), " // push_id", 11);
  sub_7D01E0(a1, a3);
  v25 = a1[1];
  if ( v25 )
  {
    v26 = v25 + 1;
    v27 = a1[1];
    --v25;
  }
  else
  {
    v27 = 1;
    v26 = 2;
  }
  v28 = *a1;
  if ( a1[2] < v26 )
  {
    v32 = qvector_reserve(a1, v28, v26, 1);
    *a1 = v32;
    v28 = v32;
  }
  a1[1] = v26;
  *(_BYTE *)(v28 + v25) = 125;
  *(_BYTE *)(*a1 + v27) = 0;
  return v9;
}
