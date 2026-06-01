__int64 __fastcall sub_803700(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r14
  unsigned __int64 v11; // r13
  __int64 v12; // rsi
  unsigned int v13; // ebp
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r12
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 14;
    v5 = v3 + 15;
    v6 = *a1;
    --v3;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a1;
    v5 = 16;
    v4 = 15;
    if ( (unsigned __int64)a1[2] >= 0x10 )
      goto LABEL_3;
  }
  v8 = qvector_reserve(a1, v6, v5, 1);
  *a1 = v8;
  v6 = v8;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  qmemcpy((void *)(*a1 + v3), "USER_OPERATION ", 15);
  sub_7D01E0(a1, 1);
  if ( !(unsigned __int8)sub_8032C0(a1, a2 + 16, 1) )
    return 0;
  v9 = a1[1];
  if ( v9 )
  {
    v10 = v9 + 7;
    v11 = v9 + 8;
    v12 = *a1;
    --v9;
    if ( a1[2] >= v11 )
      goto LABEL_9;
  }
  else
  {
    v12 = *a1;
    v11 = 9;
    v10 = 8;
    if ( (unsigned __int64)a1[2] >= 9 )
      goto LABEL_9;
  }
  v22 = qvector_reserve(a1, v12, v11, 1);
  *a1 = v22;
  v12 = v22;
LABEL_9:
  a1[1] = v11;
  *(_BYTE *)(v12 + v10) = 0;
  *(_QWORD *)(*a1 + v9) = 0x72657375202F2F20LL;
  sub_7D01E0(a1, 1);
  v13 = sub_7D0270(a1);
  if ( !(_BYTE)v13 )
    return 0;
  v14 = a1[1];
  if ( v14 )
  {
    v16 = v14 + 7;
    v15 = v14 + 8;
    --v14;
  }
  else
  {
    v15 = 9;
    v16 = 8;
  }
  v17 = *a1;
  if ( a1[2] < v15 )
  {
    v24 = qvector_reserve(a1, v17, v15, 1);
    *a1 = v24;
    v17 = v24;
  }
  a1[1] = v15;
  *(_BYTE *)(v17 + v16) = 0;
  *(_QWORD *)(*a1 + v14) = 0x65707974202F2F20LL;
  sub_7D01E0(a1, 1);
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
  return v13;
}
