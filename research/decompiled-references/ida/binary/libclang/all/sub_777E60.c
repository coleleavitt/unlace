__int64 __fastcall sub_777E60(__int64 a1, char a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx

  if ( (a2 & 4) != 0 )
    return 0;
  if ( (a2 & 1) == 0 )
  {
    v2 = *(_BYTE *)(a1 + 29) & 1;
    if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
      return 0;
    v4 = sub_79A2B0(a1);
    v5 = *(_QWORD *)v4;
    v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
    if ( v5 < v6 )
    {
      while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 375 )
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
      while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 375 )
      {
        v6 += 8LL;
        if ( v5 == v6 )
          goto LABEL_12;
      }
    }
    if ( v5 != v6 )
      return v2;
  }
LABEL_12:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v7 = sub_79A2B0(a1);
  v8 = *(_QWORD *)v7;
  v9 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
  if ( v8 < v9 )
  {
    while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 386 )
    {
      v8 += 8LL;
      if ( v9 == v8 )
        return 0;
    }
    LOBYTE(v2) = v9 != v8;
  }
  else
  {
    if ( v8 == v9 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 386 )
    {
      v9 += 8LL;
      if ( v8 == v9 )
        return 0;
    }
    LOBYTE(v2) = v8 != v9;
  }
  return v2;
}

