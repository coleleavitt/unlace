__int64 __fastcall sub_63BA90(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 *v5; // rcx
  unsigned int v6; // edx
  __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 *v9; // r9
  __int64 *i; // rax
  __int64 v11; // rdx
  __int64 v13; // rax

  v2 = *(unsigned int *)(a1 + 40);
  v3 = *(_DWORD *)(a2 + 12);
  v5 = *(__int64 **)(a1 + 32);
  v6 = v2 - 1;
  v2 *= 16;
  v7 = (__int64 *)((char *)v5 + v2);
  v8 = 16LL * (v3 & v6);
  v9 = &v5[(unsigned __int64)v8 / 8];
  if ( v8 != v2 )
  {
    for ( i = &v5[(unsigned __int64)v8 / 8]; v7 != i; i += 2 )
    {
      v11 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v11 + 12) == v3 && a2 == v11 )
          return i[1];
      }
      else if ( !v11 )
      {
        return a1 + 240;
      }
    }
  }
  if ( v5 == v9 )
    return a1 + 240;
  while ( 1 )
  {
    v13 = *v5;
    if ( (unsigned __int64)*v5 <= 1 )
      break;
    if ( *(_DWORD *)(v13 + 12) == v3 && a2 == v13 )
    {
      i = v5;
      return i[1];
    }
LABEL_15:
    v5 += 2;
    if ( v9 == v5 )
      return a1 + 240;
  }
  if ( v13 )
    goto LABEL_15;
  return a1 + 240;
}

