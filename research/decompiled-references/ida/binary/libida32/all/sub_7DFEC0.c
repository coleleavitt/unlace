__int64 __fastcall sub_7DFEC0(__int64 *a1, __int64 a2, int a3)
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
  __int64 v15; // r13
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rbp
  unsigned __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-40h]

  sub_7ACD80(a1, a3);
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
  sub_7ACD80(a1, a3 + 1);
  if ( !(unsigned __int8)sub_7AD010(a1) )
    return 0;
  v11 = a1[1];
  if ( v11 )
  {
    v12 = v11 + 12;
    v13 = v11 + 13;
    v14 = *a1;
    --v11;
    if ( a1[2] >= v13 )
      goto LABEL_10;
  }
  else
  {
    v14 = *a1;
    v13 = 14;
    v12 = 13;
    if ( (unsigned __int64)a1[2] >= 0xE )
      goto LABEL_10;
  }
  v26 = v12;
  v23 = qvector_reserve(a1, v14, v13, 1);
  v12 = v26;
  *a1 = v23;
  v14 = v23;
LABEL_10:
  a1[1] = v13;
  *(_BYTE *)(v14 + v12) = 0;
  qmemcpy((void *)(*a1 + v11), " // statement", 13);
  sub_7ACD80(a1, a3 + 1);
  v8 = sub_7ACE10(a1);
  if ( !(_BYTE)v8 )
    return 0;
  v15 = a1[1];
  if ( v15 )
  {
    v17 = v15 + 7;
    v16 = v15 + 8;
    --v15;
  }
  else
  {
    v16 = 9;
    v17 = 8;
  }
  v18 = *a1;
  if ( a1[2] < v16 )
  {
    v25 = qvector_reserve(a1, v18, v16, 1);
    *a1 = v25;
    v18 = v25;
  }
  a1[1] = v16;
  *(_BYTE *)(v18 + v17) = 0;
  *(_QWORD *)(*a1 + v15) = 0x6365736D202F2F20LL;
  sub_7ACD80(a1, a3);
  v19 = a1[1];
  if ( v19 )
  {
    v20 = v19 + 1;
    v21 = a1[1];
    --v19;
  }
  else
  {
    v21 = 1;
    v20 = 2;
  }
  v22 = *a1;
  if ( a1[2] < v20 )
  {
    v24 = qvector_reserve(a1, v22, v20, 1);
    *a1 = v24;
    v22 = v24;
  }
  a1[1] = v20;
  *(_BYTE *)(v22 + v19) = 125;
  *(_BYTE *)(*a1 + v21) = 0;
  return v8;
}

