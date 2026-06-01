_BYTE *__fastcall sub_2051540(__int64 a1, char a2)
{
  unsigned int v2; // ecx
  _BYTE *result; // rax
  _BYTE **v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
  result = *(_BYTE **)(a1 - 32LL * v2);
  if ( v2 > 1 )
  {
    v4 = (_BYTE **)(a1 - 32LL * v2 + 32);
    v5 = 32 * (v2 - 2 - (unsigned __int64)v2);
    if ( a2 )
    {
      while ( 1 )
      {
        if ( *v4 != result && **v4 != 1 )
        {
          if ( *result != 1 )
            return nullptr;
          result = *v4;
        }
        v4 += 4;
        if ( v4 == (_BYTE **)(a1 + v5 + 64) )
          return result;
      }
    }
    v6 = a1 + v5 + 64;
    while ( *v4 == result )
    {
      v4 += 4;
      if ( v4 == (_BYTE **)v6 )
        return result;
    }
    return nullptr;
  }
  return result;
}
