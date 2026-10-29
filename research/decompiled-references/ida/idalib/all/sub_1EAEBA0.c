unsigned int *__fastcall sub_1EAEBA0(__int64 a1, unsigned int a2)
{
  _DWORD *v2; // r9
  __int64 v3; // r8
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int *v7; // rdx
  unsigned int *result; // rax

  v2 = *(_DWORD **)a1;
  v3 = 4LL * *(unsigned int *)(a1 + 8);
  v4 = *(_DWORD **)a1;
  v5 = (v3 * 4) >> 4;
  if ( v3 * 4 )
  {
    do
    {
      while ( 1 )
      {
        v6 = v5 >> 1;
        v7 = &v4[4 * (v5 >> 1)];
        if ( *v7 > a2 )
          break;
        v4 = v7 + 4;
        v5 = v5 - v6 - 1;
        if ( v5 <= 0 )
        {
          result = v7;
          if ( v2 == v4 )
            return &v4[v3];
          return result;
        }
      }
      v5 >>= 1;
    }
    while ( v6 );
    result = v4 - 4;
    if ( v2 != v4 )
      return result;
  }
  return &v4[v3];
}
