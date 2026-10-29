__int64 __fastcall sub_10AC8C0(__int64 a1, __int64 a2)
{
  bool v2; // dl
  __int64 result; // rax

  if ( a2 == 3 )
  {
    if ( *(_WORD *)a1 == 27745 )
    {
      v2 = 1;
      if ( *(_BYTE *)(a1 + 2) == 108 )
        goto LABEL_4;
    }
    goto LABEL_3;
  }
  if ( a2 != 6 )
  {
    if ( a2 == 8 )
    {
      result = 15;
      if ( *(_QWORD *)a1 == 0x6E6F6974636E7566LL )
        result = 3;
      v2 = *(_QWORD *)a1 == 0x6E6F6974636E7566LL;
      goto LABEL_10;
    }
    if ( a2 == 14 )
    {
      if ( *(_QWORD *)a1 != 0x6E6F6974636E7566LL
        || *(_DWORD *)(a1 + 8) != 1953391917
        || (v2 = 1, result = 1, *(_WORD *)(a1 + 12) != 31090) )
      {
        v2 = 0;
        result = 15;
      }
      goto LABEL_21;
    }
LABEL_3:
    v2 = 0;
LABEL_4:
    result = 15;
    goto LABEL_19;
  }
  if ( *(_DWORD *)a1 != 1953723747 || (v2 = 1, result = 4, *(_WORD *)(a1 + 4) != 28015) )
  {
    v2 = 0;
    result = 4;
  }
LABEL_19:
  if ( !v2 && a2 == 13 )
  {
    if ( *(_QWORD *)a1 == 0x6E6F6974636E7566LL && *(_DWORD *)(a1 + 8) == 1769497901 && *(_BYTE *)(a1 + 12) == 116 )
      return 2;
    goto LABEL_21;
  }
LABEL_10:
  if ( a2 == 5 && !v2 )
  {
    if ( *(_DWORD *)a1 == 1701869940 && *(_BYTE *)(a1 + 4) == 100 )
      return 8;
    return 0;
  }
LABEL_21:
  if ( !v2 && a2 == 4 || !v2 )
    return 0;
  return result;
}

