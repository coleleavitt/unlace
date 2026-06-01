__int64 __fastcall sub_7E11B0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  int v9; // r12d
  unsigned int v10; // r12d
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // r14
  __int64 v22; // r8
  unsigned __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // r13
  unsigned __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rbp
  unsigned __int64 v30; // r13
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+8h] [rbp-40h]
  __int64 v39; // [rsp+8h] [rbp-40h]
  __int64 v40; // [rsp+8h] [rbp-40h]

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
  if ( !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  v13 = a1[1];
  if ( !v13 )
  {
    v16 = *a1;
    v15 = 15;
    v14 = 14;
    if ( (unsigned __int64)a1[2] >= 0xF )
      goto LABEL_10;
LABEL_31:
    v38 = v14;
    v33 = qvector_reserve(a1, v16, v15, 1);
    v14 = v38;
    *a1 = v33;
    v16 = v33;
    goto LABEL_10;
  }
  v14 = v13 + 13;
  v15 = v13 + 14;
  v16 = *a1;
  --v13;
  if ( a1[2] < v15 )
    goto LABEL_31;
LABEL_10:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  qmemcpy((void *)(*a1 + v13), " // session_id", 14);
  sub_7ACD80(a1, v9);
  if ( !(unsigned __int8)sub_7AD010(a1) )
    return 0;
  v17 = a1[1];
  if ( v17 )
  {
    v19 = v17 + 12;
    v18 = v17 + 13;
    --v17;
  }
  else
  {
    v18 = 14;
    v19 = 13;
  }
  v20 = *a1;
  if ( a1[2] < v18 )
  {
    v39 = v19;
    v34 = qvector_reserve(a1, v20, v18, 1);
    v19 = v39;
    *a1 = v34;
    v20 = v34;
  }
  a1[1] = v18;
  *(_BYTE *)(v20 + v19) = 0;
  qmemcpy((void *)(*a1 + v17), " // peer_name", 13);
  sub_7ACD80(a1, v9);
  if ( !(unsigned __int8)sub_7E0120(a1, a2 + 32, v9) )
    return 0;
  v21 = a1[1];
  if ( v21 )
  {
    v22 = v21 + 7;
    v23 = v21 + 8;
    --v21;
  }
  else
  {
    v23 = 9;
    v22 = 8;
  }
  v24 = *a1;
  if ( a1[2] < v23 )
  {
    v40 = v22;
    v35 = qvector_reserve(a1, v24, v23, 1);
    v22 = v40;
    *a1 = v35;
    v24 = v35;
  }
  a1[1] = v23;
  *(_BYTE *)(v24 + v22) = 0;
  *(_QWORD *)(*a1 + v21) = 0x72657375202F2F20LL;
  sub_7ACD80(a1, v9);
  v10 = sub_7ACE30(a1);
  if ( !(_BYTE)v10 )
    return 0;
  v25 = a1[1];
  if ( v25 )
  {
    v27 = v25 + 14;
    v26 = v25 + 15;
    --v25;
  }
  else
  {
    v26 = 16;
    v27 = 15;
  }
  v28 = *a1;
  if ( a1[2] < v26 )
  {
    v37 = qvector_reserve(a1, v28, v26, 1);
    *a1 = v37;
    v28 = v37;
  }
  a1[1] = v26;
  *(_BYTE *)(v28 + v27) = 0;
  qmemcpy((void *)(*a1 + v25), " // established", 15);
  sub_7ACD80(a1, a3);
  v29 = a1[1];
  if ( v29 )
  {
    v30 = v29 + 1;
    v31 = a1[1];
    --v29;
  }
  else
  {
    v31 = 1;
    v30 = 2;
  }
  v32 = *a1;
  if ( a1[2] < v30 )
  {
    v36 = qvector_reserve(a1, v32, v30, 1);
    *a1 = v36;
    v32 = v36;
  }
  a1[1] = v30;
  *(_BYTE *)(v32 + v29) = 125;
  *(_BYTE *)(*a1 + v31) = 0;
  return v10;
}

