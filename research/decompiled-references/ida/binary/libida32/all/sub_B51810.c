char __fastcall sub_B51810(_BYTE *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 i; // rax

  if ( *(char *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 32LL))(a1) + 84) >= 0 || (a1[29] & 1) == 0 )
    return 0;
  v2 = sub_B68690(a1);
  v3 = *(_QWORD *)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( *(_QWORD *)v2 < v4 )
  {
    v5 = *(_QWORD *)v2;
    while ( *(_WORD *)(*(_QWORD *)v5 + 36LL) != 376 )
    {
      v5 += 8;
      if ( v4 == v5 )
        goto LABEL_8;
    }
    if ( v4 == v5 )
      goto LABEL_8;
    return 1;
  }
  if ( v3 != v4 )
  {
    while ( *(_WORD *)(*(_QWORD *)v4 + 36LL) != 376 )
    {
      v4 += 8LL;
      if ( v3 == v4 )
        goto LABEL_8;
    }
    return 1;
  }
LABEL_8:
  if ( (a1[29] & 1) == 0 )
    return 0;
  v6 = sub_B68690(a1);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
  if ( *(_QWORD *)v6 < v8 )
  {
    v9 = *(_QWORD *)v6;
    while ( 1 )
    {
      v7 = v9;
      if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) == 378 )
        break;
      v9 += 8;
      if ( v8 == v9 )
        return 0;
    }
    return v7 != v8;
  }
  if ( v7 == v8 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) == 378 )
    return v7 != v8;
  for ( i = v8 + 8; ; i += 8LL )
  {
    v8 = i;
    if ( v7 == i )
      break;
    if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) == 378 )
      return v7 != v8;
  }
  return 0;
}

