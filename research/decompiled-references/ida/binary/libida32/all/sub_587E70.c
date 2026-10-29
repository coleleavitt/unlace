__int64 __fastcall sub_587E70(__int64 *a1, char a2, int a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned __int64 v12; // r13

  v4 = *a1;
  v5 = a1[1];
  v6 = *a1;
  if ( !a3 )
  {
    if ( !v5 )
    {
LABEL_3:
      v7 = 1;
      v8 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
      {
LABEL_4:
        a1[1] = v8;
        *(_BYTE *)(v4 + v5) = a2;
        *(_BYTE *)(*a1 + v7) = 0;
        return 1;
      }
LABEL_13:
      v4 = qvector_reserve(a1, v6, v8, 1);
      *a1 = v4;
      goto LABEL_4;
    }
    v10 = v5 - 1;
LABEL_12:
    v7 = a1[1];
    v8 = v10 + 2;
    v5 = v10;
    if ( a1[2] >= v10 + 2 )
      goto LABEL_4;
    goto LABEL_13;
  }
  if ( !v5 )
    goto LABEL_3;
  v10 = v5 - 1;
  v11 = a3;
  if ( v5 - 1 < a3 )
    goto LABEL_12;
  v12 = a3 + 1LL;
  if ( v5 < v12 )
  {
    if ( a1[2] < v12 )
    {
      v4 = qvector_reserve(a1, v6, a3 + 1LL, 1);
      v5 = a1[1];
      *a1 = v4;
    }
    memset((void *)(v4 + v5), 0, v12 - v5);
    a1[1] = v12;
    v6 = *a1;
  }
  else if ( v12 != v5 )
  {
    a1[1] = v12;
  }
  *(_BYTE *)(v6 + v11) = 0;
  return 0;
}

