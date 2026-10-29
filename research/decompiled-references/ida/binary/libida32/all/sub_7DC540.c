__int64 __fastcall sub_7DC540(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r14
  unsigned __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  unsigned int v12; // ebp
  __int64 v13; // r12
  unsigned __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // r12
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v1 = a1[1];
  if ( v1 )
  {
    v2 = v1 + 8;
    v3 = v1 + 9;
    v4 = *a1;
    --v1;
    if ( a1[2] >= v3 )
      goto LABEL_3;
  }
  else
  {
    v4 = *a1;
    v3 = 10;
    v2 = 9;
    if ( (unsigned __int64)a1[2] >= 0xA )
      goto LABEL_3;
  }
  v7 = qvector_reserve(a1, v4, v3, 1);
  *a1 = v7;
  v4 = v7;
LABEL_3:
  a1[1] = v3;
  *(_BYTE *)(v4 + v2) = 0;
  v5 = *a1 + v1;
  *(_QWORD *)v5 = 0x4C4941465F435052LL;
  *(_BYTE *)(v5 + 8) = 32;
  sub_7ACD80(a1, 1);
  if ( !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  v8 = a1[1];
  if ( v8 )
  {
    v9 = v8 + 9;
    v10 = v8 + 10;
    v11 = *a1;
    --v8;
    if ( a1[2] >= v10 )
      goto LABEL_9;
  }
  else
  {
    v11 = *a1;
    v10 = 11;
    v9 = 10;
    if ( (unsigned __int64)a1[2] >= 0xB )
      goto LABEL_9;
  }
  v22 = qvector_reserve(a1, v11, v10, 1);
  *a1 = v22;
  v11 = v22;
LABEL_9:
  a1[1] = v10;
  *(_BYTE *)(v11 + v9) = 0;
  qmemcpy((void *)(*a1 + v8), " // result", 10);
  sub_7ACD80(a1, 1);
  v12 = sub_7AD010(a1);
  if ( !(_BYTE)v12 )
    return 0;
  v13 = a1[1];
  if ( v13 )
  {
    v15 = v13 + 8;
    v14 = v13 + 9;
    --v13;
  }
  else
  {
    v14 = 10;
    v15 = 9;
  }
  v16 = *a1;
  if ( a1[2] < v14 )
  {
    v24 = qvector_reserve(a1, v16, v14, 1);
    *a1 = v24;
    v16 = v24;
  }
  a1[1] = v14;
  *(_BYTE *)(v16 + v15) = 0;
  v17 = *a1 + v13;
  *(_QWORD *)v17 = 0x6F727265202F2F20LL;
  *(_BYTE *)(v17 + 8) = 114;
  sub_7ACD80(a1, 1);
  v18 = a1[1];
  if ( v18 )
  {
    v19 = v18 + 1;
    v20 = a1[1];
    --v18;
  }
  else
  {
    v20 = 1;
    v19 = 2;
  }
  v21 = *a1;
  if ( a1[2] < v19 )
  {
    v23 = qvector_reserve(a1, v21, v19, 1);
    *a1 = v23;
    v21 = v23;
  }
  a1[1] = v19;
  *(_BYTE *)(v21 + v18) = 59;
  *(_BYTE *)(*a1 + v20) = 0;
  return v12;
}

