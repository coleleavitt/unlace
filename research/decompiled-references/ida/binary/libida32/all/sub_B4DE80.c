char __fastcall sub_B4DE80(__int64 a1, char a2)
{
  char v2; // al
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 i; // rax

  if ( (a2 & 4) != 0 )
    return 0;
  v2 = *(_BYTE *)(a1 + 29) & 1;
  if ( (a2 & 1) == 0 )
  {
    if ( !v2 )
      return 0;
    v4 = sub_B68690(a1);
    v5 = *(_QWORD *)v4;
    v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
    if ( *(_QWORD *)v4 >= v6 )
    {
      if ( v5 == v6 )
      {
LABEL_10:
        v2 = *(_BYTE *)(a1 + 29) & 1;
        goto LABEL_11;
      }
      while ( *(_WORD *)(*(_QWORD *)v6 + 36LL) != 385 )
      {
        v6 += 8LL;
        if ( v5 == v6 )
          goto LABEL_10;
      }
    }
    else
    {
      v7 = *(_QWORD *)v4;
      while ( *(_WORD *)(*(_QWORD *)v7 + 36LL) != 385 )
      {
        v7 += 8;
        if ( v6 == v7 )
          goto LABEL_10;
      }
      if ( v6 == v7 )
        goto LABEL_10;
    }
    return 1;
  }
LABEL_11:
  if ( !v2 )
    return 0;
  v8 = sub_B68690(a1);
  v9 = *(_QWORD *)v8;
  v10 = *(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8);
  if ( *(_QWORD *)v8 < v10 )
  {
    v11 = *(_QWORD *)v8;
    while ( 1 )
    {
      v9 = v11;
      if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 396 )
        break;
      v11 += 8;
      if ( v10 == v11 )
        return 0;
    }
    return v9 != v10;
  }
  if ( v9 == v10 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) == 396 )
    return v9 != v10;
  for ( i = v10 + 8; ; i += 8LL )
  {
    v10 = i;
    if ( v9 == i )
      break;
    if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) == 396 )
      return v9 != v10;
  }
  return 0;
}

