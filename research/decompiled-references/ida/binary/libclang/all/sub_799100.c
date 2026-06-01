__int64 __fastcall sub_799100(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rax
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 *v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx

  v1 = *(_BYTE *)(a1 + 29) & 1;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v3 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    v3 = sub_793320(a1);
  v4 = sub_6BB160(*(_QWORD *)(v3 + 88), a1);
  v5 = *v4;
  v6 = *v4 + 8LL * *((unsigned int *)v4 + 2);
  if ( v5 < v6 )
  {
    while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 401 )
    {
      v5 += 8LL;
      if ( v6 == v5 )
        goto LABEL_12;
    }
  }
  else
  {
    if ( v5 == v6 )
      goto LABEL_12;
    while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 401 )
    {
      v6 += 8LL;
      if ( v5 == v6 )
        goto LABEL_12;
    }
  }
  if ( v5 != v6 )
    return v1;
LABEL_12:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v7 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    v7 = sub_793320(a1);
  v8 = sub_6BB160(*(_QWORD *)(v7 + 88), a1);
  v9 = *v8;
  v10 = *v8 + 8LL * *((unsigned int *)v8 + 2);
  if ( v9 < v10 )
  {
    while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 405 )
    {
      v9 += 8LL;
      if ( v10 == v9 )
        goto LABEL_21;
    }
  }
  else
  {
    if ( v9 == v10 )
      goto LABEL_21;
    while ( *(_WORD *)(*(_QWORD *)v10 + 32LL) != 405 )
    {
      v10 += 8LL;
      if ( v9 == v10 )
        goto LABEL_21;
    }
  }
  if ( v9 != v10 )
    return v1;
LABEL_21:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v11 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    v11 = sub_793320(a1);
  v12 = sub_6BB160(*(_QWORD *)(v11 + 88), a1);
  v13 = *v12;
  v14 = *v12 + 8LL * *((unsigned int *)v12 + 2);
  if ( v13 < v14 )
  {
    while ( *(_WORD *)(*(_QWORD *)v13 + 32LL) != 407 )
    {
      v13 += 8LL;
      if ( v14 == v13 )
        return 0;
    }
    LOBYTE(v1) = v14 != v13;
  }
  else
  {
    if ( v13 == v14 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v14 + 32LL) != 407 )
    {
      v14 += 8LL;
      if ( v13 == v14 )
        return 0;
    }
    LOBYTE(v1) = v13 != v14;
  }
  return v1;
}

