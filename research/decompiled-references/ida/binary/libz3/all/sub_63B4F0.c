__int64 __fastcall sub_63B4F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // r9d
  __int64 result; // rax
  __int64 *v5; // r8
  unsigned int v6; // ecx
  __int64 *v7; // rdi
  __int64 v8; // rcx
  __int64 *v9; // rsi
  __int64 *i; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx

  v2 = *(unsigned int *)(a1 + 184);
  v3 = *(_DWORD *)(a2 + 12);
  result = a2;
  v5 = *(__int64 **)(a1 + 176);
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
        if ( *(_DWORD *)(v11 + 12) == v3 && result == v11 )
          return i[1];
      }
      else if ( !v11 )
      {
        return result;
      }
    }
  }
  if ( v5 != v9 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = *v5;
        if ( (unsigned __int64)*v5 > 1 )
          break;
        if ( v12 )
        {
          v5 += 2;
          if ( v9 != v5 )
            continue;
        }
        return result;
      }
      if ( *(_DWORD *)(v12 + 12) == v3 && result == v12 )
        break;
      v5 += 2;
      if ( v9 == v5 )
        return result;
    }
    i = v5;
    return i[1];
  }
  return result;
}

