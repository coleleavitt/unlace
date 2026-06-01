__int64 __fastcall sub_77EAE0(_BYTE *a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx

  if ( *(char *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 32LL))(a1) + 84) >= 0 )
    return 0;
  v1 = a1[29] & 1;
  if ( (a1[29] & 1) == 0 )
    return 0;
  v3 = sub_79A2B0(a1);
  v4 = *(_QWORD *)v3;
  v5 = *(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 8);
  if ( v4 < v5 )
  {
    while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 367 )
    {
      v4 += 8LL;
      if ( v5 == v4 )
        goto LABEL_11;
    }
  }
  else
  {
    if ( v4 == v5 )
      goto LABEL_11;
    while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 367 )
    {
      v5 += 8LL;
      if ( v4 == v5 )
        goto LABEL_11;
    }
  }
  if ( v4 != v5 )
    return v1;
LABEL_11:
  if ( (a1[29] & 1) == 0 )
    return 0;
  v6 = sub_79A2B0(a1);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
  if ( v7 < v8 )
  {
    while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 369 )
    {
      v7 += 8LL;
      if ( v8 == v7 )
        return 0;
    }
    LOBYTE(v1) = v8 != v7;
  }
  else
  {
    if ( v7 == v8 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 369 )
    {
      v8 += 8LL;
      if ( v7 == v8 )
        return 0;
    }
    LOBYTE(v1) = v7 != v8;
  }
  return v1;
}

