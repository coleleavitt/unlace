bool __fastcall sub_B516B0(_BYTE *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  unsigned __int64 i; // rax

  if ( *(char *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 32LL))(a1) + 84) >= 0 || (a1[29] & 1) == 0 )
    return 0;
  v2 = sub_B68690(a1);
  v3 = *(_QWORD *)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( *(_QWORD *)v2 < v4 )
  {
    v5 = *(_QWORD *)v2;
    while ( 1 )
    {
      v3 = v5;
      if ( *(_WORD *)(*(_QWORD *)v5 + 36LL) == 157 )
        break;
      v5 += 8;
      if ( v4 == v5 )
        return 0;
    }
    return v3 != v4;
  }
  if ( v3 == v4 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) == 157 )
    return v3 != v4;
  for ( i = v4 + 8; ; i += 8LL )
  {
    v4 = i;
    if ( v3 == i )
      break;
    if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) == 157 )
      return v3 != v4;
  }
  return 0;
}

