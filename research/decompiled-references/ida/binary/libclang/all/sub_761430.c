__int64 __fastcall sub_761430(__int64 a1, __int64 a2, int *a3)
{
  char v3; // cl
  int v4; // eax

  if ( a2 == 4 )
  {
    if ( *(_DWORD *)a1 == 1885956979 )
    {
      v3 = 1;
      v4 = 0;
      goto LABEL_15;
    }
    if ( *(_DWORD *)a1 != 1684370293 )
      return 0;
    v4 = 4;
LABEL_12:
    *a3 = v4;
    return 1;
  }
  if ( a2 != 12 )
  {
    if ( a2 != 8 )
    {
      if ( a2 == 11 )
      {
        if ( *(_QWORD *)a1 != 0x2D7270672D6C6C61LL )
          return 0;
        v4 = 5;
        if ( *(_DWORD *)(a1 + 7) != 1735549229 )
          return 0;
        goto LABEL_12;
      }
      v3 = 0;
      v4 = 0;
      goto LABEL_15;
    }
    if ( *(_QWORD *)a1 == 0x7270672D64657375LL )
    {
      v3 = 1;
      v4 = 2;
      goto LABEL_23;
    }
    if ( *(_QWORD *)a1 != 0x6772612D64657375LL )
      return 0;
    v4 = 3;
    goto LABEL_12;
  }
  if ( *(_QWORD *)a1 == 0x7270672D64657375LL )
  {
    v3 = 1;
    v4 = 1;
    if ( *(_DWORD *)(a1 + 8) == 1735549229 )
      goto LABEL_23;
  }
  v3 = 0;
  v4 = 1;
LABEL_15:
  if ( a2 == 7 && !v3 )
  {
    if ( *(_DWORD *)a1 == 762080353 )
    {
      v4 = 6;
      if ( *(_DWORD *)(a1 + 3) == 1919969069 )
        goto LABEL_12;
    }
    if ( *(_DWORD *)a1 == 762080353 )
    {
      v4 = 7;
      if ( *(_DWORD *)(a1 + 3) == 1735549229 )
        goto LABEL_12;
    }
    return 0;
  }
LABEL_23:
  if ( a2 == 3 )
  {
    if ( !v3 )
    {
      if ( *(_WORD *)a1 != 27745 )
        return 0;
      v4 = 8;
      if ( *(_BYTE *)(a1 + 2) != 108 )
        return 0;
    }
    goto LABEL_12;
  }
  if ( v3 )
    goto LABEL_12;
  return 0;
}

