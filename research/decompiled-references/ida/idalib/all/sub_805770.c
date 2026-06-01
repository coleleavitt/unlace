__int64 __fastcall sub_805770(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r14
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 11;
    v5 = v3 + 12;
    v6 = *a1;
    --v3;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a1;
    v5 = 13;
    v4 = 12;
    if ( (unsigned __int64)a1[2] >= 0xD )
      goto LABEL_3;
  }
  v9 = qvector_reserve(a1, v6, v5, 1);
  *a1 = v9;
  v6 = v9;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  qmemcpy((void *)(*a1 + v3), "DEL_HISTORY ", 12);
  sub_7D01E0(a1, 1);
  v7 = sub_804E30(a1, (_QWORD *)(a2 + 16), 1);
  if ( !(_BYTE)v7 )
    return v7;
  v10 = a1[1];
  if ( v10 )
  {
    v11 = v10 + 10;
    v12 = v10 + 11;
    v13 = *a1;
    --v10;
    if ( a1[2] >= v12 )
      goto LABEL_9;
  }
  else
  {
    v13 = *a1;
    v12 = 12;
    v11 = 11;
    if ( (unsigned __int64)a1[2] >= 0xC )
      goto LABEL_9;
  }
  v19 = qvector_reserve(a1, v13, v12, 1);
  *a1 = v19;
  v13 = v19;
LABEL_9:
  a1[1] = v12;
  *(_BYTE *)(v13 + v11) = 0;
  qmemcpy((void *)(*a1 + v10), " // filters", 11);
  sub_7D01E0(a1, 1);
  v14 = a1[1];
  if ( !v14 )
  {
    v17 = *a1;
    v16 = 1;
    v15 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_11;
LABEL_13:
    v18 = qvector_reserve(a1, v17, v15, 1);
    *a1 = v18;
    v17 = v18;
    goto LABEL_11;
  }
  v15 = v14 + 1;
  v16 = a1[1];
  v17 = *a1;
  --v14;
  if ( a1[2] < v15 )
    goto LABEL_13;
LABEL_11:
  a1[1] = v15;
  *(_BYTE *)(v17 + v14) = 59;
  *(_BYTE *)(*a1 + v16) = 0;
  return v7;
}
