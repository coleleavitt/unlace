__int64 __fastcall sub_32AE10(__int64 *a1, char a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 1;
    v5 = a1[1];
    v6 = *a1;
    --v3;
    if ( a1[2] >= v4 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a1;
    v5 = 1;
    v4 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
  }
  v12 = qvector_reserve(a1, v6, v4, 1);
  *a1 = v12;
  v6 = v12;
LABEL_3:
  a1[1] = v4;
  *(_BYTE *)(v6 + v3) = 2;
  *(_BYTE *)(*a1 + v5) = 0;
  v7 = a1[1];
  if ( !v7 )
  {
    v10 = *a1;
    v9 = 1;
    v8 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_5;
LABEL_9:
    v13 = qvector_reserve(a1, v10, v8, 1);
    *a1 = v13;
    v10 = v13;
    goto LABEL_5;
  }
  v8 = v7 + 1;
  v9 = a1[1];
  v10 = *a1;
  --v7;
  if ( a1[2] < v8 )
    goto LABEL_9;
LABEL_5:
  a1[1] = v8;
  *(_BYTE *)(v10 + v7) = a2;
  result = *a1;
  *(_BYTE *)(*a1 + v9) = 0;
  return result;
}
