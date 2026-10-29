__int64 __fastcall sub_807E30(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned int v8; // ebp
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r14
  unsigned __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // r12
  unsigned __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 8;
    v5 = v3 + 9;
    v6 = *a1;
    --v3;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a1;
    v5 = 10;
    v4 = 9;
    if ( (unsigned __int64)a1[2] >= 0xA )
      goto LABEL_3;
  }
  v10 = qvector_reserve(a1, v6, v5, 1);
  *a1 = v10;
  v6 = v10;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  v7 = *a1 + v3;
  *(_QWORD *)v7 = 0x4D4C545F48535550LL;
  *(_BYTE *)(v7 + 8) = 32;
  sub_7D01E0(a1, 1);
  v8 = sub_807970(a1, (_QWORD *)(a2 + 16), 1);
  if ( !(_BYTE)v8 )
    return v8;
  v11 = a1[1];
  if ( v11 )
  {
    v12 = v11 + 10;
    v13 = v11 + 11;
    v14 = *a1;
    --v11;
    if ( a1[2] >= v13 )
      goto LABEL_9;
  }
  else
  {
    v14 = *a1;
    v13 = 12;
    v12 = 11;
    if ( (unsigned __int64)a1[2] >= 0xC )
      goto LABEL_9;
  }
  v20 = qvector_reserve(a1, v14, v13, 1);
  *a1 = v20;
  v14 = v20;
LABEL_9:
  a1[1] = v13;
  *(_BYTE *)(v14 + v12) = 0;
  qmemcpy((void *)(*a1 + v11), " // payload", 11);
  sub_7D01E0(a1, 1);
  v15 = a1[1];
  if ( !v15 )
  {
    v18 = *a1;
    v17 = 1;
    v16 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_11;
LABEL_13:
    v19 = qvector_reserve(a1, v18, v16, 1);
    *a1 = v19;
    v18 = v19;
    goto LABEL_11;
  }
  v16 = v15 + 1;
  v17 = a1[1];
  v18 = *a1;
  --v15;
  if ( a1[2] < v16 )
    goto LABEL_13;
LABEL_11:
  a1[1] = v16;
  *(_BYTE *)(v18 + v15) = 59;
  *(_BYTE *)(*a1 + v17) = 0;
  return v8;
}
