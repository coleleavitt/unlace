bool __fastcall sub_B54950(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // rdx
  unsigned __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  bool result; // al
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 i; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 1;
  v1 = sub_B68690(a1);
  v2 = *(__int64 **)v1;
  v3 = *(_QWORD *)v1 + 8LL * *(unsigned int *)(v1 + 8);
  if ( (unsigned __int64)v2 < v3 )
  {
    v11 = v2;
    while ( *(_WORD *)(*v11 + 36) != 209 )
    {
      if ( (__int64 *)v3 == ++v11 )
        goto LABEL_12;
    }
    if ( (__int64 *)v3 == v11 )
    {
LABEL_12:
      if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
      {
        v7 = sub_B68690(a1);
        v8 = *(_QWORD *)v7;
        v9 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
        if ( *(_QWORD *)v7 < v9 )
        {
          v12 = *(_QWORD *)v7;
          while ( 1 )
          {
            v8 = v12;
            if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 215 )
              break;
            v12 += 8;
            if ( v9 == v12 )
              return 1;
          }
          return v8 == v9;
        }
        if ( v8 != v9 )
        {
          if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 215 )
          {
            for ( i = v9 + 8; ; i += 8LL )
            {
              v9 = i;
              if ( v8 == i )
                break;
              if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) == 215 )
                return v8 == v9;
            }
            return 1;
          }
          return v8 == v9;
        }
      }
      return 1;
    }
  }
  else
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
  }
LABEL_10:
  while ( *(_WORD *)(*v2 + 36) != 209 )
    ++v2;
  result = 0;
  if ( !*(_DWORD *)(*v2 + 40) )
    goto LABEL_12;
  return result;
}

