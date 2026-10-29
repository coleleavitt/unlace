__int64 __fastcall sub_7E6040(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  int v9; // r13d
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // r13
  unsigned __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // r12
  unsigned __int64 v22; // r13
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+8h] [rbp-40h]

  sub_7ACD80(a1, a3);
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
  v12 = qvector_reserve(a1, v8, v6, 1);
  *a1 = v12;
  v8 = v12;
LABEL_3:
  a1[1] = v6;
  *(_BYTE *)(v8 + v5) = 123;
  v9 = a3 + 1;
  *(_BYTE *)(*a1 + v7) = 0;
  sub_7ACD80(a1, a3 + 1);
  if ( !(unsigned __int8)sub_7E11B0(a1, a2, a3 + 1) )
    return 0;
  v13 = a1[1];
  if ( v13 )
  {
    v14 = v13 + 9;
    v15 = v13 + 10;
    v16 = *a1;
    --v13;
    if ( a1[2] >= v15 )
      goto LABEL_10;
  }
  else
  {
    v16 = *a1;
    v15 = 11;
    v14 = 10;
    if ( (unsigned __int64)a1[2] >= 0xB )
      goto LABEL_10;
  }
  v28 = v14;
  v25 = qvector_reserve(a1, v16, v15, 1);
  v14 = v28;
  *a1 = v25;
  v16 = v25;
LABEL_10:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  qmemcpy((void *)(*a1 + v13), " // client", 10);
  sub_7ACD80(a1, v9);
  v10 = sub_7E5C80(a1, a2 + 160, v9);
  if ( !(_BYTE)v10 )
    return 0;
  v17 = a1[1];
  if ( v17 )
  {
    v19 = v17 + 9;
    v18 = v17 + 10;
    --v17;
  }
  else
  {
    v18 = 11;
    v19 = 10;
  }
  v20 = *a1;
  if ( a1[2] < v18 )
  {
    v27 = qvector_reserve(a1, v20, v18, 1);
    *a1 = v27;
    v20 = v27;
  }
  a1[1] = v18;
  *(_BYTE *)(v20 + v19) = 0;
  qmemcpy((void *)(*a1 + v17), " // server", 10);
  sub_7ACD80(a1, a3);
  v21 = a1[1];
  if ( v21 )
  {
    v22 = v21 + 1;
    v23 = a1[1];
    --v21;
  }
  else
  {
    v23 = 1;
    v22 = 2;
  }
  v24 = *a1;
  if ( a1[2] < v22 )
  {
    v26 = qvector_reserve(a1, v24, v22, 1);
    *a1 = v26;
    v24 = v26;
  }
  a1[1] = v22;
  *(_BYTE *)(v24 + v21) = 125;
  *(_BYTE *)(*a1 + v23) = 0;
  return v10;
}

