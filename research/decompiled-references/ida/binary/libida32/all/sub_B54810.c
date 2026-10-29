bool __fastcall sub_B54810(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // rdx
  unsigned __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 i; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v1 = sub_B68690(a1);
  v2 = *(__int64 **)v1;
  v3 = *(_QWORD *)v1 + 8LL * *(unsigned int *)(v1 + 8);
  if ( (unsigned __int64)v2 >= v3 )
  {
    if ( v2 == (__int64 *)v3 )
      goto LABEL_12;
    if ( *(_WORD *)(*(_QWORD *)v3 + 36LL) != 209 )
    {
      v4 = (__int64 *)(v3 + 8);
      while ( v2 != v4 )
      {
        v5 = *v4++;
        if ( *(_WORD *)(v5 + 36) == 209 )
          goto LABEL_10;
      }
      goto LABEL_12;
    }
LABEL_10:
    while ( *(_WORD *)(*v2 + 36) != 209 )
      ++v2;
    if ( *(_DWORD *)(*v2 + 40) )
      return 0;
    goto LABEL_12;
  }
  v11 = v2;
  while ( *(_WORD *)(*v11 + 36) != 209 )
  {
    if ( (__int64 *)v3 == ++v11 )
      goto LABEL_12;
  }
  if ( (__int64 *)v3 != v11 )
    goto LABEL_10;
LABEL_12:
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v6 = sub_B68690(a1);
    v7 = *(_QWORD *)v6;
    v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
    if ( *(_QWORD *)v6 < v8 )
    {
      v12 = *(_QWORD *)v6;
      while ( 1 )
      {
        v7 = v12;
        if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 215 )
          break;
        v12 += 8;
        if ( v8 == v12 )
          return 0;
      }
      return v7 != v8;
    }
    if ( v7 != v8 )
    {
      if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 215 )
      {
        for ( i = v8 + 8; ; i += 8LL )
        {
          v8 = i;
          if ( v7 == i )
            break;
          if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) == 215 )
            return v7 != v8;
        }
        return 0;
      }
      return v7 != v8;
    }
  }
  return 0;
}

