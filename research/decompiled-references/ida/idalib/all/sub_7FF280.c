__int64 __fastcall sub_7FF280(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rbp
  unsigned __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // r13
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v4 = a1[1];
  if ( v4 )
  {
    v5 = v4 + 10;
    v6 = v4 + 11;
    v7 = *a1;
    --v4;
    if ( a1[2] >= v6 )
      goto LABEL_3;
  }
  else
  {
    v7 = *a1;
    v6 = 12;
    v5 = 11;
    if ( (unsigned __int64)a1[2] >= 0xC )
      goto LABEL_3;
  }
  v18 = qvector_reserve(a1, v7, v6, 1);
  *a1 = v18;
  v7 = v18;
LABEL_3:
  a1[1] = v6;
  *(_BYTE *)(v7 + v5) = 0;
  qmemcpy((void *)(*a1 + v4), "LIST_PEERS ", 11);
  if ( a3 > 5 )
  {
    sub_7D01E0(a1, 1);
    result = sub_7D0270(a1);
    if ( !(_BYTE)result )
      return result;
    v9 = a1[1];
    if ( v9 )
    {
      v11 = v9 + 8;
      v10 = v9 + 9;
      --v9;
    }
    else
    {
      v10 = 10;
      v11 = 9;
    }
    v12 = *a1;
    if ( a1[2] < v10 )
    {
      v20 = qvector_reserve(a1, v12, v10, 1);
      *a1 = v20;
      v12 = v20;
    }
    a1[1] = v10;
    *(_BYTE *)(v12 + v11) = 0;
    v13 = *a1 + v9;
    *(_QWORD *)v13 = 0x67616C66202F2F20LL;
    *(_BYTE *)(v13 + 8) = 115;
  }
  sub_7D01E0(a1, 1);
  v14 = a1[1];
  if ( v14 )
  {
    v17 = v14 + 1;
    v16 = a1[1];
    v15 = *a1;
    --v14;
    if ( a1[2] >= v17 )
      goto LABEL_12;
LABEL_16:
    v19 = qvector_reserve(a1, v15, v17, 1);
    *a1 = v19;
    v15 = v19;
    goto LABEL_12;
  }
  v15 = *a1;
  v16 = 1;
  v17 = 2;
  if ( (unsigned __int64)a1[2] < 2 )
    goto LABEL_16;
LABEL_12:
  a1[1] = v17;
  *(_BYTE *)(v15 + v14) = 59;
  *(_BYTE *)(*a1 + v16) = 0;
  return 1;
}
