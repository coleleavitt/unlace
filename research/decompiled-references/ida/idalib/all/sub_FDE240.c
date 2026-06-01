__int64 __fastcall sub_FDE240(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  unsigned int v3; // edx

  v1 = *(_QWORD *)(a1 + 16);
  result = 0;
  if ( (unsigned int)*(_QWORD *)v1 > 1 )
  {
    v3 = ((*(_BYTE *)(v1 + 16) - *(_BYTE *)(v1 + 18)) & 0x3F) + ((unsigned int)*(_QWORD *)v1 << 6);
    if ( v3 == 430 )
    {
      if ( *(_DWORD *)(v1 + 16) != 1702064993 || *(_WORD *)(v1 + 20) != 29810 )
        return 0;
      return 23;
    }
    else if ( v3 <= 0x1AE )
    {
      if ( v3 == 321 )
      {
        if ( *(_DWORD *)(v1 + 16) != 1768189541 || *(_BYTE *)(v1 + 20) != 102 )
          return 0;
        return 8;
      }
      else if ( v3 <= 0x141 )
      {
        if ( v3 == 306 )
        {
          if ( *(_DWORD *)(v1 + 16) == 1702063205 )
            return 7;
        }
        else if ( v3 <= 0x132 )
        {
          if ( v3 == 169 )
          {
            return *(_WORD *)(v1 + 16) == 26217;
          }
          else if ( v3 == 272 && *(_DWORD *)(v1 + 16) == 1935893363 )
          {
            return 22;
          }
        }
        else if ( v3 == 316 )
        {
          return 4 * (unsigned int)(*(_DWORD *)(v1 + 16) == 1718185061);
        }
        else if ( v3 == 318 && *(_DWORD *)(v1 + 16) == 1701734764 )
        {
          return 14;
        }
      }
      else if ( v3 == 325 )
      {
        if ( *(_DWORD *)(v1 + 16) != 1701078633 || *(_BYTE *)(v1 + 20) != 102 )
          return 0;
        return 2;
      }
      else if ( v3 <= 0x145 )
      {
        if ( v3 == 323 )
        {
          if ( *(_DWORD *)(v1 + 16) == 1700949349 && *(_BYTE *)(v1 + 20) == 100 )
            return 17;
          return 0;
        }
        if ( v3 == 324 )
        {
          if ( *(_DWORD *)(v1 + 16) == 1852138601 && *(_BYTE *)(v1 + 20) == 116 )
            return 21;
          return 0;
        }
      }
      else
      {
        if ( v3 != 371 )
        {
          if ( v3 == 399 )
          {
            if ( *(_DWORD *)(v1 + 16) == 1734439536 && *(_WORD *)(v1 + 20) == 24941 )
              return 16;
          }
          else if ( v3 == 337 && *(_DWORD *)(v1 + 16) == 1701080693 && *(_BYTE *)(v1 + 20) == 102 )
          {
            return 13;
          }
          return 0;
        }
        if ( *(_DWORD *)(v1 + 16) != 1869771365 || *(_BYTE *)(v1 + 20) != 114 )
          return 0;
        return 15;
      }
    }
    else if ( v3 == 510 )
    {
      if ( *(_DWORD *)(v1 + 16) != 1768318308 || *(_WORD *)(v1 + 20) != 25966 || *(_BYTE *)(v1 + 22) != 100 )
        return 0;
      return 9;
    }
    else if ( v3 > 0x1FE )
    {
      if ( v3 == 774 )
      {
        if ( *(_QWORD *)(v1 + 16) != 0x5F6564756C636E69LL || *(_DWORD *)(v1 + 24) != 1954047342 )
          return 0;
        return 19;
      }
      else if ( v3 <= 0x306 )
      {
        if ( v3 == 532 )
        {
          if ( *(_QWORD *)(v1 + 16) == 0x7472657373616E75LL )
            return 24;
        }
        else if ( v3 == 572 && *(_QWORD *)(v1 + 16) == 0x6665646E66696C65LL )
        {
          return 6;
        }
      }
      else if ( v3 == 1007 )
      {
        if ( *(_QWORD *)(v1 + 16) != 0x7461766972705F5FLL
          || *(_DWORD *)(v1 + 24) != 1634557797
          || *(_WORD *)(v1 + 28) != 29283
          || *(_BYTE *)(v1 + 30) != 111 )
        {
          return 0;
        }
        return 26;
      }
      else
      {
        if ( v3 != 1078 )
        {
          if ( v3 == 943
            && *(_QWORD *)(v1 + 16) == 0x63696C6275705F5FLL
            && *(_DWORD *)(v1 + 24) == 1667329375
            && *(_WORD *)(v1 + 28) == 28530 )
          {
            return 25;
          }
          return 0;
        }
        result = 0;
        if ( !(*(_QWORD *)(v1 + 16) ^ 0x64756C636E695F5FLL | *(_QWORD *)(v1 + 24) ^ 0x736F7263616D5F65LL) )
          return 11;
      }
    }
    else if ( v3 == 446 )
    {
      if ( *(_DWORD *)(v1 + 16) != 1768318308 || *(_WORD *)(v1 + 20) != 25966 )
        return 0;
      return 12;
    }
    else if ( v3 <= 0x1BE )
    {
      if ( v3 == 441 )
      {
        if ( *(_DWORD *)(v1 + 16) == 1869639017 && *(_WORD *)(v1 + 20) == 29810 )
          return 18;
        return 0;
      }
      if ( v3 == 443 )
      {
        if ( *(_DWORD *)(v1 + 16) == 1684956777 && *(_WORD *)(v1 + 20) == 26213 )
          return 3;
        return 0;
      }
    }
    else if ( v3 == 454 )
    {
      if ( *(_DWORD *)(v1 + 16) != 1818455657 || *(_WORD *)(v1 + 20) != 25717 || *(_BYTE *)(v1 + 22) != 101 )
        return 0;
      return 10;
    }
    else
    {
      if ( v3 != 508 )
      {
        if ( v3 == 453
          && *(_DWORD *)(v1 + 16) == 1852989815
          && *(_WORD *)(v1 + 20) == 28265
          && *(_BYTE *)(v1 + 22) == 103 )
        {
          return 20;
        }
        return 0;
      }
      if ( *(_DWORD *)(v1 + 16) != 1718185061 || *(_WORD *)(v1 + 20) != 25956 || *(_BYTE *)(v1 + 22) != 102 )
        return 0;
      return 5;
    }
  }
  return result;
}
