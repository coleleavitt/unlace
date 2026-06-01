__int64 __fastcall sub_783680(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // r12d
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  v2 = *(_BYTE *)(v1 + 29) & 1;
  if ( (*(_BYTE *)(v1 + 29) & 1) == 0 )
    return sub_799CE0(a1);
  v4 = v1;
  v5 = sub_79A2B0(v1);
  v6 = *(_QWORD *)v5;
  v7 = *(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 8);
  if ( *(_QWORD *)v5 < v7 )
  {
    while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 389 )
    {
      v6 += 8;
      if ( v7 == v6 )
        goto LABEL_13;
    }
LABEL_8:
    if ( v6 != v7 )
      return v2;
    goto LABEL_13;
  }
  if ( v6 != v7 )
  {
    while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 389 )
    {
      v7 += 8LL;
      if ( v6 == v7 )
        goto LABEL_13;
    }
    goto LABEL_8;
  }
LABEL_13:
  if ( (*(_BYTE *)(v4 + 29) & 1) == 0 )
    return sub_799CE0(a1);
  v8 = sub_79A2B0(v4);
  v9 = *(_QWORD *)v8;
  v10 = *(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8);
  if ( v9 < v10 )
  {
    while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 391 )
    {
      v9 += 8LL;
      if ( v10 == v9 )
        return sub_799CE0(a1);
    }
  }
  else
  {
    if ( v9 == v10 )
      return sub_799CE0(a1);
    while ( *(_WORD *)(*(_QWORD *)v10 + 32LL) != 391 )
    {
      v10 += 8LL;
      if ( v9 == v10 )
        return sub_799CE0(a1);
    }
  }
  if ( v9 == v10 )
    return sub_799CE0(a1);
  return v2;
}

