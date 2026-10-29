__int64 __fastcall sub_4CC1E0(__int64 a1)
{
  size_t v1; // rax
  __int64 v2; // rdx

  v1 = strlen((const char *)a1);
  v2 = 0;
  if ( v1 <= 3 )
    return v2;
  if ( *(_BYTE *)(a1 + 3) == 95
    && (*(_WORD *)a1 == 25971 && *(_BYTE *)(a1 + 2) == 103
     || *(_WORD *)a1 == 30067 && *(_BYTE *)(a1 + 2) == 98
     || *(_WORD *)a1 == 25188 && *(_BYTE *)(a1 + 2) == 108
     || *(_WORD *)a1 == 28277 && *(_BYTE *)(a1 + 2) == 107
     || *(_WORD *)a1 == 26223 && *(_BYTE *)(a1 + 2) == 102
     || *(_WORD *)a1 == 29537 && *(_BYTE *)(a1 + 2) == 99
     || *(_WORD *)a1 == 27750 && *(_BYTE *)(a1 + 2) == 116
     || *(_WORD *)a1 == 28524 && *(_BYTE *)(a1 + 2) == 99) )
  {
    return a1 + 4;
  }
  if ( v1 == 4 )
    return 0;
  if ( *(_BYTE *)(a1 + 4) == 95
    && (*(_DWORD *)a1 == 1970435187
     || *(_DWORD *)a1 == 1702132066
     || *(_DWORD *)a1 == 1685221239
     || *(_DWORD *)a1 == 1852271713) )
  {
    return a1 + 5;
  }
  if ( v1 == 5 )
    return 0;
  if ( *(_BYTE *)(a1 + 5) != 95
    || (*(_DWORD *)a1 != 1702132066 || *(_BYTE *)(a1 + 4) != 51)
    && (*(_DWORD *)a1 != 1954112116 || *(_BYTE *)(a1 + 4) != 101)
    && (*(_DWORD *)a1 != 1919907697 || *(_BYTE *)(a1 + 4) != 100)
    && (*(_DWORD *)a1 != 1919907684 || *(_BYTE *)(a1 + 4) != 100) )
  {
    if ( v1 != 6 )
    {
      if ( *(_BYTE *)(a1 + 6) == 95 && *(_DWORD *)a1 == 1919119212 )
      {
        v2 = a1 + 7;
        if ( *(_WORD *)(a1 + 4) == 29797 )
          return v2;
      }
      if ( v1 != 7 )
      {
        if ( *(_BYTE *)(a1 + 7) == 95
          && (*(_DWORD *)a1 == 2003660152 && *(_DWORD *)(a1 + 3) == 1685221239
           || *(_DWORD *)a1 == 2003660153 && *(_DWORD *)(a1 + 3) == 1685221239) )
        {
          return a1 + 8;
        }
        v2 = 0;
        if ( v1 != 8
          && *(_BYTE *)(a1 + 8) == 95
          && (*(_QWORD *)a1 == 0x6174616474737563LL || *(_QWORD *)a1 == 0x6C6165726B636170LL) )
        {
          return a1 + 9;
        }
        return v2;
      }
    }
    return 0;
  }
  return a1 + 6;
}
