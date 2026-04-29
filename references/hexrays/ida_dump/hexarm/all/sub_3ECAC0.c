__int64 __fastcall sub_3ECAC0(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v3; // rax
  unsigned int v4; // edx

  if ( *(_DWORD *)(a1 + 80) != 8 )
  {
    v2 = *(_DWORD *)(a1 + 488);
    if ( a2 >= v2 )
    {
      if ( a2 <= v2 + 124 && (a2 & 3) == 0 )
        return (a2 & 7) == 0 ? 8 : 4;
      if ( a2 <= v2 + 248 )
      {
        v4 = 8;
        if ( (a2 & 7) == 0 )
          return v4;
      }
    }
  }
  v3 = *(_QWORD *)(a1 + 688);
  if ( *(_BYTE *)(v3 + 8) )
  {
    while ( a2 >= *(_DWORD *)(v3 + 40) )
    {
      v3 += 24;
      if ( !*(_BYTE *)(v3 + 8) )
        return 1;
    }
    v4 = 1;
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 16) == a2 )
        return (unsigned int)*(__int16 *)(v3 + 12);
    }
    return v4;
  }
  return 1;
}
