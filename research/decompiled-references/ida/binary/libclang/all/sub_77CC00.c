bool __fastcall sub_77CC00(__int64 a1, unsigned __int64 a2)
{
  int v3; // eax
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax

  if ( sub_76AB10(a1, a2) )
    return 0;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_4;
  v4 = sub_79A2B0(a1);
  v5 = *(_QWORD *)v4;
  v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
  if ( v5 < v6 )
  {
    while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 265 )
    {
      v5 += 8LL;
      if ( v6 == v5 )
        goto LABEL_17;
    }
LABEL_12:
    if ( v5 != v6 )
      return 1;
    goto LABEL_17;
  }
  if ( v5 != v6 )
  {
    while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 265 )
    {
      v6 += 8LL;
      if ( v5 == v6 )
        goto LABEL_17;
    }
    goto LABEL_12;
  }
LABEL_17:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_4;
  v7 = sub_79A2B0(a1);
  v8 = *(_QWORD *)v7;
  v9 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
  if ( v8 < v9 )
  {
    while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 121 )
    {
      v8 += 8LL;
      if ( v9 == v8 )
        goto LABEL_4;
    }
  }
  else
  {
    if ( v8 == v9 )
      goto LABEL_4;
    while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 121 )
    {
      v9 += 8LL;
      if ( v8 == v9 )
        goto LABEL_4;
    }
  }
  if ( v8 != v9 )
    return 0;
LABEL_4:
  v3 = *(_BYTE *)(*(_QWORD *)(a2 + 2160) + 205LL) & 3;
  if ( v3 != 2 )
  {
    if ( v3 == 1 )
      return (unsigned int)sub_77B3E0(a1) == 0;
    return 0;
  }
  return 1;
}

