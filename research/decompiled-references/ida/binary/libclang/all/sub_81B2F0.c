__int64 __fastcall sub_81B2F0(__int64 a1)
{
  _DWORD *v1; // rax
  unsigned __int16 v2; // dx
  unsigned int *v3; // rsi
  __int64 v4; // rcx
  unsigned int v5; // edx
  unsigned int *v7; // rsi
  __int64 v8; // rcx

  v1 = *(_DWORD **)(a1 + 24);
  if ( *v1 )
    return (unsigned int)v1[3];
  v2 = *(_WORD *)(a1 + 20) >> 1;
  if ( !v2 )
  {
    return (unsigned int)v1[3];
  }
  else if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
  {
    v7 = v1 + 5;
    v8 = (__int64)&v1[6 * v2 + 5];
    while ( 1 )
    {
      v5 = *v7;
      if ( *v7 )
        break;
      v7 += 6;
      if ( v7 == (unsigned int *)v8 )
        return (unsigned int)v1[3];
    }
  }
  else
  {
    v3 = v1 + 4;
    v4 = (__int64)&v1[6 * v2 + 4];
    while ( 1 )
    {
      v5 = *v3;
      if ( *v3 )
        break;
      v3 += 6;
      if ( (unsigned int *)v4 == v3 )
        return (unsigned int)v1[3];
    }
  }
  return v5;
}

