__int64 __fastcall sub_1AE90(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  char *v4; // rcx
  char v5; // di
  unsigned __int8 v6; // di
  __int64 i; // rdx
  _BYTE *v8; // rdi
  __int64 v9; // rdx

  v2 = *(_QWORD *)(a1 + 32);
  if ( !v2 )
    return 0;
  v4 = *(char **)(a1 + 24);
  v5 = *v4;
  *(_QWORD *)(a1 + 32) = v2 - 1;
  *(_QWORD *)(a1 + 24) = v4 + 1;
  if ( v5 != 95 )
  {
    v6 = v5 - 48;
    if ( v6 <= 9u )
    {
      *a2 = (char)v6;
      for ( i = *(_QWORD *)(a1 + 32); i; *(_QWORD *)(a1 + 32) = i )
      {
        v8 = *(_BYTE **)(a1 + 24);
        if ( (unsigned __int8)(*v8 - 48) > 9u )
        {
          if ( *v8 != 95 )
            return 0;
          *(_QWORD *)(a1 + 24) = v8 + 1;
          *(_QWORD *)(a1 + 32) = i - 1;
          ++*a2;
          return 1;
        }
        *a2 = (char)(*v8 - 48) + 10LL * *a2;
        v9 = *(_QWORD *)(a1 + 32);
        if ( !v9 )
          return 0;
        i = v9 - 1;
        ++*(_QWORD *)(a1 + 24);
      }
    }
    return 0;
  }
  *a2 = 0;
  return 1;
}

