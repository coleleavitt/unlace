__int64 __fastcall sub_ADF270(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 *v4; // rcx
  unsigned int v5; // edx
  __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 *v8; // r9
  __int64 *i; // rdx
  __int64 result; // rax

  sub_ADEE70((__int64 *)a1);
  v2 = *(unsigned int *)(a1 + 104);
  v3 = *(_DWORD *)(a2 + 12);
  v4 = *(__int64 **)(a1 + 96);
  v5 = v2 - 1;
  v2 *= 16;
  v6 = (__int64 *)((char *)v4 + v2);
  v7 = 16LL * (v3 & v5);
  v8 = &v4[(unsigned __int64)v7 / 8];
  if ( v7 != v2 )
  {
    for ( i = &v4[(unsigned __int64)v7 / 8]; v6 != i; i += 2 )
    {
      result = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(result + 12) == v3 && a2 == result )
          return i[1];
      }
      else if ( !result )
      {
        return result;
      }
    }
  }
  if ( v4 == v8 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      result = *v4;
      if ( (unsigned __int64)*v4 > 1 )
        break;
      if ( !result )
        return result;
      v4 += 2;
      if ( v8 == v4 )
        return 0;
    }
    if ( *(_DWORD *)(result + 12) == v3 && a2 == result )
      break;
    v4 += 2;
    if ( v8 == v4 )
      return 0;
  }
  i = v4;
  return i[1];
}

