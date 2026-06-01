__int64 __fastcall sub_7DBD80(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r14
  unsigned __int64 v3; // r13
  __int64 v4; // rsi
  unsigned int v5; // ebp
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax

  v1 = a1[1];
  if ( v1 )
  {
    v2 = v1 + 10;
    v3 = v1 + 11;
    v4 = *a1;
    --v1;
    if ( a1[2] >= v3 )
      goto LABEL_3;
  }
  else
  {
    v4 = *a1;
    v3 = 12;
    v2 = 11;
    if ( (unsigned __int64)a1[2] >= 0xC )
      goto LABEL_3;
  }
  v7 = qvector_reserve(a1, v4, v3, 1);
  *a1 = v7;
  v4 = v7;
LABEL_3:
  a1[1] = v3;
  *(_BYTE *)(v4 + v2) = 0;
  qmemcpy((void *)(*a1 + v1), "SHOW_USERS ", 11);
  sub_7ACD80(a1, 1);
  v5 = sub_7ACE10(a1);
  if ( !(_BYTE)v5 )
    return v5;
  v8 = a1[1];
  if ( v8 )
  {
    v9 = v8 + 7;
    v10 = v8 + 8;
    v11 = *a1;
    --v8;
    if ( a1[2] >= v10 )
      goto LABEL_9;
  }
  else
  {
    v11 = *a1;
    v10 = 9;
    v9 = 8;
    if ( (unsigned __int64)a1[2] >= 9 )
      goto LABEL_9;
  }
  v17 = qvector_reserve(a1, v11, v10, 1);
  *a1 = v17;
  v11 = v17;
LABEL_9:
  a1[1] = v10;
  *(_BYTE *)(v11 + v9) = 0;
  *(_QWORD *)(*a1 + v8) = 0x74726F73202F2F20LL;
  sub_7ACD80(a1, 1);
  v12 = a1[1];
  if ( !v12 )
  {
    v15 = *a1;
    v14 = 1;
    v13 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_11;
LABEL_13:
    v16 = qvector_reserve(a1, v15, v13, 1);
    *a1 = v16;
    v15 = v16;
    goto LABEL_11;
  }
  v13 = v12 + 1;
  v14 = a1[1];
  v15 = *a1;
  --v12;
  if ( a1[2] < v13 )
    goto LABEL_13;
LABEL_11:
  a1[1] = v13;
  *(_BYTE *)(v15 + v12) = 59;
  *(_BYTE *)(*a1 + v14) = 0;
  return v5;
}

