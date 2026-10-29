__int64 __fastcall sub_BDCC90(__int64 a1)
{
  _DWORD *v1; // rdx
  int v2; // eax
  unsigned int *v3; // rcx
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned int *v6; // rcx
  __int64 v7; // rsi

  v1 = *(_DWORD **)(a1 + 24);
  if ( *v1 )
    return (unsigned int)v1[3];
  v2 = *(_WORD *)(a1 + 20) >> 1;
  if ( !(*(_WORD *)(a1 + 20) >> 1) )
    return (unsigned int)v1[3];
  if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
  {
    v6 = v1 + 5;
    v7 = (__int64)&v1[6 * (v2 - 1) + 11];
    while ( 1 )
    {
      result = *v6;
      if ( (_DWORD)result )
        break;
      v6 += 6;
      if ( v6 == (unsigned int *)v7 )
        return (unsigned int)v1[3];
    }
  }
  else
  {
    v3 = v1 + 4;
    v4 = (__int64)&v1[6 * (v2 - 1) + 10];
    while ( 1 )
    {
      result = *v3;
      if ( (_DWORD)result )
        break;
      v3 += 6;
      if ( v3 == (unsigned int *)v4 )
        return (unsigned int)v1[3];
    }
  }
  return result;
}

