__int64 __fastcall sub_805FA0(__int64 *a1, __int64 a2, int a3)
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
  __int64 v17; // r14
  __int64 v18; // r14
  unsigned __int64 v19; // r15
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // r14
  __int64 v24; // r8
  unsigned __int64 v25; // r15
  __int64 v26; // rsi
  __int64 v27; // r13
  unsigned __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // rsi
  __int64 v31; // r12
  unsigned __int64 v32; // r13
  __int64 v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+8h] [rbp-40h]
  __int64 v41; // [rsp+8h] [rbp-40h]
  __int64 v42; // [rsp+8h] [rbp-40h]

  sub_7D01E0(a1, a3);
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
  sub_7D01E0(a1, a3 + 1);
  if ( !(unsigned __int8)sub_7D0290(a1) )
    return 0;
  v13 = a1[1];
  if ( !v13 )
  {
    v16 = *a1;
    v15 = 7;
    v14 = 6;
    if ( (unsigned __int64)a1[2] >= 7 )
      goto LABEL_10;
LABEL_31:
    v40 = v14;
    v35 = qvector_reserve(a1, v16, v15, 1);
    v14 = v40;
    *a1 = v35;
    v16 = v35;
    goto LABEL_10;
  }
  v14 = v13 + 5;
  v15 = v13 + 6;
  v16 = *a1;
  --v13;
  if ( a1[2] < v15 )
    goto LABEL_31;
LABEL_10:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  v17 = *a1 + v13;
  *(_WORD *)(v17 + 4) = 25705;
  *(_DWORD *)v17 = 539963168;
  sub_7D01E0(a1, v9);
  if ( !(unsigned __int8)sub_7D0290(a1) )
    return 0;
  v18 = a1[1];
  if ( v18 )
  {
    v20 = v18 + 5;
    v19 = v18 + 6;
    --v18;
  }
  else
  {
    v19 = 7;
    v20 = 6;
  }
  v21 = *a1;
  if ( a1[2] < v19 )
  {
    v41 = v20;
    v36 = qvector_reserve(a1, v21, v19, 1);
    v20 = v41;
    *a1 = v36;
    v21 = v36;
  }
  a1[1] = v19;
  *(_BYTE *)(v21 + v20) = 0;
  v22 = *a1 + v18;
  *(_DWORD *)v22 = 539963168;
  *(_WORD *)(v22 + 4) = 29556;
  sub_7D01E0(a1, v9);
  if ( !(unsigned __int8)sub_7D0470(a1) )
    return 0;
  v23 = a1[1];
  if ( v23 )
  {
    v24 = v23 + 11;
    v25 = v23 + 12;
    --v23;
  }
  else
  {
    v25 = 13;
    v24 = 12;
  }
  v26 = *a1;
  if ( a1[2] < v25 )
  {
    v42 = v24;
    v37 = qvector_reserve(a1, v26, v25, 1);
    v24 = v42;
    *a1 = v37;
    v26 = v37;
  }
  a1[1] = v25;
  *(_BYTE *)(v26 + v24) = 0;
  qmemcpy((void *)(*a1 + v23), " // idb_path", 12);
  sub_7D01E0(a1, v9);
  v10 = sub_8032C0(a1, a2 + 40, v9);
  if ( !(_BYTE)v10 )
    return 0;
  v27 = a1[1];
  if ( v27 )
  {
    v29 = v27 + 7;
    v28 = v27 + 8;
    --v27;
  }
  else
  {
    v28 = 9;
    v29 = 8;
  }
  v30 = *a1;
  if ( a1[2] < v28 )
  {
    v39 = qvector_reserve(a1, v30, v28, 1);
    *a1 = v39;
    v30 = v39;
  }
  a1[1] = v28;
  *(_BYTE *)(v30 + v29) = 0;
  *(_QWORD *)(*a1 + v27) = 0x72657375202F2F20LL;
  sub_7D01E0(a1, a3);
  v31 = a1[1];
  if ( v31 )
  {
    v32 = v31 + 1;
    v33 = a1[1];
    --v31;
  }
  else
  {
    v33 = 1;
    v32 = 2;
  }
  v34 = *a1;
  if ( a1[2] < v32 )
  {
    v38 = qvector_reserve(a1, v34, v32, 1);
    *a1 = v38;
    v34 = v38;
  }
  a1[1] = v32;
  *(_BYTE *)(v34 + v31) = 125;
  *(_BYTE *)(*a1 + v33) = 0;
  return v10;
}
