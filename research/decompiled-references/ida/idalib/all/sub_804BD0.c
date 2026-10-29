__int64 __fastcall sub_804BD0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned int v8; // r12d
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r8
  unsigned __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // r13
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rsi
  _DWORD *v20; // r13
  __int64 v21; // rbp
  unsigned __int64 v22; // r13
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+8h] [rbp-40h]

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
  v10 = qvector_reserve(a1, v7, v5, 1);
  *a1 = v10;
  v7 = v10;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v7 + v4) = 123;
  *(_BYTE *)(*a1 + v6) = 0;
  sub_7D01E0(a1, a3 + 1);
  if ( !(unsigned __int8)sub_7D0290(a1) )
    return 0;
  v11 = a1[1];
  if ( v11 )
  {
    v12 = v11 + 8;
    v13 = v11 + 9;
    v14 = *a1;
    --v11;
    if ( a1[2] >= v13 )
      goto LABEL_10;
  }
  else
  {
    v14 = *a1;
    v13 = 10;
    v12 = 9;
    if ( (unsigned __int64)a1[2] >= 0xA )
      goto LABEL_10;
  }
  v28 = v12;
  v25 = qvector_reserve(a1, v14, v13, 1);
  v12 = v28;
  *a1 = v25;
  v14 = v25;
LABEL_10:
  a1[1] = v13;
  *(_BYTE *)(v14 + v12) = 0;
  v15 = *a1 + v11;
  *(_QWORD *)v15 = 0x72617473202F2F20LL;
  *(_BYTE *)(v15 + 8) = 116;
  sub_7D01E0(a1, a3 + 1);
  v8 = sub_7D0290(a1);
  if ( !(_BYTE)v8 )
    return 0;
  v16 = a1[1];
  if ( v16 )
  {
    v18 = v16 + 6;
    v17 = v16 + 7;
    --v16;
  }
  else
  {
    v17 = 8;
    v18 = 7;
  }
  v19 = *a1;
  if ( a1[2] < v17 )
  {
    v27 = qvector_reserve(a1, v19, v17, 1);
    *a1 = v27;
    v19 = v27;
  }
  a1[1] = v17;
  *(_BYTE *)(v19 + v18) = 0;
  v20 = (_DWORD *)(*a1 + v16);
  *v20 = 539963168;
  *(_DWORD *)((char *)v20 + 3) = 1684956448;
  sub_7D01E0(a1, a3);
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
  return v8;
}
