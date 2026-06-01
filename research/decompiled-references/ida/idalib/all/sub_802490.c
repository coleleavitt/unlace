__int64 __fastcall sub_802490(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned int v8; // r12d
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax

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
  v8 = sub_7D0270(a1);
  if ( (_BYTE)v8 )
  {
    v11 = a1[1];
    if ( v11 )
    {
      v12 = v11 + 12;
      v13 = v11 + 13;
      v14 = *a1;
      --v11;
      if ( a1[2] >= v13 )
        goto LABEL_9;
    }
    else
    {
      v14 = *a1;
      v13 = 14;
      v12 = 13;
      if ( (unsigned __int64)a1[2] >= 0xE )
        goto LABEL_9;
    }
    v20 = qvector_reserve(a1, v14, v13, 1);
    *a1 = v20;
    v14 = v20;
LABEL_9:
    a1[1] = v13;
    *(_BYTE *)(v14 + v12) = 0;
    qmemcpy((void *)(*a1 + v11), " // frequency", 13);
    sub_7D01E0(a1, a3);
    v15 = a1[1];
    if ( v15 )
    {
      v16 = v15 + 1;
      v17 = a1[1];
      v18 = *a1;
      --v15;
      if ( a1[2] >= v16 )
      {
LABEL_11:
        a1[1] = v16;
        *(_BYTE *)(v18 + v15) = 125;
        *(_BYTE *)(*a1 + v17) = 0;
        return v8;
      }
    }
    else
    {
      v18 = *a1;
      v17 = 1;
      v16 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_11;
    }
    v19 = qvector_reserve(a1, v18, v16, 1);
    *a1 = v19;
    v18 = v19;
    goto LABEL_11;
  }
  return v8;
}
