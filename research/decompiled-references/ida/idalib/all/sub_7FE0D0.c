__int64 __fastcall sub_7FE0D0(__int64 *a1, _BYTE *a2, int a3)
{
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r8
  int v10; // r9d
  unsigned int v11; // r12d
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // r15
  unsigned __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rbp
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax

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
  v13 = qvector_reserve(a1, v8, v6, 1);
  *a1 = v13;
  v8 = v13;
LABEL_3:
  a1[1] = v6;
  *(_BYTE *)(v8 + v5) = 123;
  *(_BYTE *)(*a1 + v7) = 0;
  sub_7D01E0(a1, a3 + 1);
  v11 = sub_7D02D0(a1, a2, 0x10u, a3 + 1, v9, v10);
  if ( (_BYTE)v11 )
  {
    v14 = a1[1];
    if ( v14 )
    {
      v15 = v14 + 7;
      v16 = v14 + 8;
      v17 = *a1;
      --v14;
      if ( a1[2] >= v16 )
        goto LABEL_9;
    }
    else
    {
      v17 = *a1;
      v16 = 9;
      v15 = 8;
      if ( (unsigned __int64)a1[2] >= 9 )
        goto LABEL_9;
    }
    v23 = qvector_reserve(a1, v17, v16, 1);
    *a1 = v23;
    v17 = v23;
LABEL_9:
    a1[1] = v16;
    *(_BYTE *)(v17 + v15) = 0;
    *(_QWORD *)(*a1 + v14) = 0x68736168202F2F20LL;
    sub_7D01E0(a1, a3);
    v18 = a1[1];
    if ( v18 )
    {
      v19 = v18 + 1;
      v20 = a1[1];
      v21 = *a1;
      --v18;
      if ( a1[2] >= v19 )
      {
LABEL_11:
        a1[1] = v19;
        *(_BYTE *)(v21 + v18) = 125;
        *(_BYTE *)(*a1 + v20) = 0;
        return v11;
      }
    }
    else
    {
      v21 = *a1;
      v20 = 1;
      v19 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_11;
    }
    v22 = qvector_reserve(a1, v21, v19, 1);
    *a1 = v22;
    v21 = v22;
    goto LABEL_11;
  }
  return v11;
}
