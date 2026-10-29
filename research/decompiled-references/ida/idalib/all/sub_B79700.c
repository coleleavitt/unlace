__int64 __fastcall sub_B79700(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 *v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 *i; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  if ( (*(_BYTE *)(v1 + 29) & 1) == 0 )
    return sub_B911E0(a1);
  v3 = v1;
  v4 = sub_B8C3D0(v1);
  v5 = *(__int64 **)v4;
  v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
  if ( *(_QWORD *)v4 < v6 )
  {
    v13 = *(__int64 **)v4;
    while ( *(_WORD *)(*v13 + 36) != 399 )
    {
      if ( (__int64 *)v6 == ++v13 )
        goto LABEL_9;
    }
    if ( (__int64 *)v6 != v13 )
      return 1;
  }
  else if ( v5 != (__int64 *)v6 )
  {
    if ( *(_WORD *)(*(_QWORD *)v6 + 36LL) == 399 )
      return 1;
    for ( i = (__int64 *)(v6 + 8); v5 != i; ++i )
    {
      v8 = *i;
      if ( *(_WORD *)(v8 + 36) == 399 )
        return 1;
    }
  }
LABEL_9:
  if ( (*(_BYTE *)(v3 + 29) & 1) == 0 )
    return sub_B911E0(a1);
  v9 = sub_B8C3D0(v3);
  v10 = *(_QWORD *)v9;
  v11 = *(_QWORD *)v9 + 8LL * *(unsigned int *)(v9 + 8);
  if ( *(_QWORD *)v9 >= v11 )
  {
    if ( v10 != v11 )
    {
      while ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 401 )
      {
        v11 += 8LL;
        if ( v10 == v11 )
          return sub_B911E0(a1);
      }
      return 1;
    }
    return sub_B911E0(a1);
  }
  v12 = *(_QWORD *)v9;
  while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 401 )
  {
    v12 += 8;
    if ( v11 == v12 )
      return sub_B911E0(a1);
  }
  if ( v11 == v12 )
    return sub_B911E0(a1);
  return 1;
}
