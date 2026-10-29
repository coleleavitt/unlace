__int64 __fastcall sub_7DC2C0(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r14
  unsigned __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  unsigned int v11; // ebp
  __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r12
  unsigned __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  v1 = a1[1];
  if ( v1 )
  {
    v2 = v1 + 12;
    v3 = v1 + 13;
    v4 = *a1;
    --v1;
    if ( a1[2] >= v3 )
      goto LABEL_3;
  }
  else
  {
    v4 = *a1;
    v3 = 14;
    v2 = 13;
    if ( (unsigned __int64)a1[2] >= 0xE )
      goto LABEL_3;
  }
  v6 = qvector_reserve(a1, v4, v3, 1);
  *a1 = v6;
  v4 = v6;
LABEL_3:
  a1[1] = v3;
  *(_BYTE *)(v4 + v2) = 0;
  qmemcpy((void *)(*a1 + v1), "SET_PASSWORD ", 13);
  sub_7ACD80(a1, 1);
  if ( !(unsigned __int8)sub_7AD010(a1) )
    return 0;
  v7 = a1[1];
  if ( v7 )
  {
    v8 = v7 + 11;
    v9 = v7 + 12;
    v10 = *a1;
    --v7;
    if ( a1[2] >= v9 )
      goto LABEL_9;
  }
  else
  {
    v10 = *a1;
    v9 = 13;
    v8 = 12;
    if ( (unsigned __int64)a1[2] >= 0xD )
      goto LABEL_9;
  }
  v20 = qvector_reserve(a1, v10, v9, 1);
  *a1 = v20;
  v10 = v20;
LABEL_9:
  a1[1] = v9;
  *(_BYTE *)(v10 + v8) = 0;
  qmemcpy((void *)(*a1 + v7), " // username", 12);
  sub_7ACD80(a1, 1);
  v11 = sub_7AD010(a1);
  if ( !(_BYTE)v11 )
    return 0;
  v12 = a1[1];
  if ( v12 )
  {
    v14 = v12 + 11;
    v13 = v12 + 12;
    --v12;
  }
  else
  {
    v13 = 13;
    v14 = 12;
  }
  v15 = *a1;
  if ( a1[2] < v13 )
  {
    v22 = qvector_reserve(a1, v15, v13, 1);
    *a1 = v22;
    v15 = v22;
  }
  a1[1] = v13;
  *(_BYTE *)(v15 + v14) = 0;
  qmemcpy((void *)(*a1 + v12), " // password", 12);
  sub_7ACD80(a1, 1);
  v16 = a1[1];
  if ( v16 )
  {
    v17 = v16 + 1;
    v18 = a1[1];
    --v16;
  }
  else
  {
    v18 = 1;
    v17 = 2;
  }
  v19 = *a1;
  if ( a1[2] < v17 )
  {
    v21 = qvector_reserve(a1, v19, v17, 1);
    *a1 = v21;
    v19 = v21;
  }
  a1[1] = v17;
  *(_BYTE *)(v19 + v16) = 59;
  *(_BYTE *)(*a1 + v18) = 0;
  return v11;
}

