__int64 __fastcall sub_558200(_QWORD *a1, char a2)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rsi
  _QWORD *v7; // r15
  __int64 v8; // r12
  unsigned __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = a1[4];
  if ( v3 )
  {
    v4 = v3 + 1;
    v5 = a1[4];
    v6 = a1[3];
    --v3;
    v7 = a1 + 3;
    if ( a1[5] >= v4 )
      goto LABEL_3;
  }
  else
  {
    v6 = a1[3];
    v5 = 1;
    v4 = 2;
    v7 = a1 + 3;
    if ( a1[5] >= 2u )
      goto LABEL_3;
  }
  v14 = qvector_reserve(v7, v6, v4, 1);
  a1[3] = v14;
  v6 = v14;
LABEL_3:
  a1[4] = v4;
  *(_BYTE *)(v6 + v3) = 1;
  *(_BYTE *)(a1[3] + v5) = 0;
  v8 = a1[4];
  if ( v8 )
  {
    v9 = v8 + 1;
    v10 = a1[4];
    v11 = a1[3];
    --v8;
    if ( a1[5] >= v9 )
      goto LABEL_5;
  }
  else
  {
    v11 = a1[3];
    v10 = 1;
    v9 = 2;
    if ( a1[5] >= 2u )
      goto LABEL_5;
  }
  v13 = qvector_reserve(v7, v11, v9, 1);
  a1[3] = v13;
  v11 = v13;
LABEL_5:
  a1[4] = v9;
  *(_BYTE *)(v11 + v8) = a2;
  result = a1[3];
  *(_BYTE *)(result + v10) = 0;
  if ( a2 == 33 )
  {
    result = (a1[4] == 0) + a1[4] - 1LL;
    a1[6] = result;
  }
  return result;
}

