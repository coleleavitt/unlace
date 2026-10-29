__int64 __fastcall sub_1370BC0(__int64 a1, __int64 a2)
{
  char v2; // dl
  unsigned __int8 v3; // r8
  char v4; // cl
  bool v5; // r11
  char v6; // bp
  bool v7; // r10
  char v8; // al
  char v9; // al
  bool v10; // bl
  char v11; // r12
  bool v12; // dl

  if ( a2 == 3 )
  {
    if ( *(_WORD *)a1 == 29537 && *(_BYTE *)(a1 + 2) == 116 || *(_WORD *)a1 == 25456 && *(_BYTE *)(a1 + 2) == 109 )
    {
      v4 = 0;
      v3 = 2;
      goto LABEL_88;
    }
LABEL_4:
    v2 = 0;
    v3 = 2;
    v4 = 0;
LABEL_5:
    v5 = a2 != 2;
    goto LABEL_6;
  }
  if ( a2 != 1 )
    goto LABEL_4;
  v3 = 0;
  v4 = 4;
  if ( *(_BYTE *)a1 == 99 )
  {
LABEL_88:
    v2 = 1;
    goto LABEL_5;
  }
  if ( *(_BYTE *)a1 != 83 )
  {
    if ( *(_BYTE *)a1 != 115 )
    {
      v6 = 1;
      if ( *(_BYTE *)a1 == 105 )
      {
        v2 = 1;
        v4 = 4;
        v3 = 0;
        v7 = 1;
        v5 = 1;
LABEL_8:
        if ( v7 | (unsigned __int8)v2 )
          goto LABEL_9;
        goto LABEL_36;
      }
      v2 = 0;
      v4 = 0;
      v5 = 1;
      v3 = 2;
      v7 = 1;
LABEL_7:
      v6 = 0;
      goto LABEL_8;
    }
    v2 = 1;
    v3 = 0;
    v4 = 1;
    goto LABEL_5;
  }
  v5 = 1;
  v4 = 1;
  v3 = 0;
  v2 = 1;
LABEL_6:
  v6 = v5 | v2;
  v7 = a2 != 3;
  if ( v5 | (unsigned __int8)v2 )
    goto LABEL_7;
  if ( *(_WORD *)a1 == 26985 )
  {
    v2 = 1;
    v4 = 5;
    v3 = 0;
    v6 = 1;
    goto LABEL_9;
  }
  if ( v7 | (unsigned __int8)v2 )
    goto LABEL_9;
LABEL_36:
  if ( *(_WORD *)a1 == 30051 && *(_BYTE *)(a1 + 2) == 105 )
  {
    v3 = 0;
    v2 = 1;
    v6 = 1;
    v4 = 10;
    goto LABEL_10;
  }
LABEL_9:
  if ( (unsigned __int8)v2 | (a2 != 1) )
  {
LABEL_10:
    v8 = v2 | v5;
    goto LABEL_11;
  }
  if ( *(_BYTE *)a1 == 109 )
  {
    v6 = 0;
    v4 = 6;
    v3 = 0;
    goto LABEL_62;
  }
  v8 = v5 | v2;
LABEL_11:
  if ( !v8 && *(_WORD *)a1 == 26989 )
  {
    v2 = 1;
    v4 = 6;
    v3 = 0;
    v6 = 1;
    goto LABEL_15;
  }
  if ( v2 )
  {
LABEL_62:
    v2 = 1;
LABEL_15:
    v9 = v7 | v2;
LABEL_16:
    if ( !v9 && *(_WORD *)a1 == 26989 && *(_BYTE *)(a1 + 2) == 105 )
    {
      v4 = 7;
      v6 = 1;
      v10 = a2 != 4;
      v3 = 0;
      goto LABEL_43;
    }
    goto LABEL_17;
  }
  if ( !v5 )
  {
    v2 = 0;
    if ( *(_WORD *)a1 == 28013 )
    {
      v6 = 0;
      v4 = 7;
      v3 = 0;
      goto LABEL_60;
    }
    goto LABEL_15;
  }
  if ( a2 != 1 )
  {
    v9 = v7;
    goto LABEL_16;
  }
  if ( *(_BYTE *)a1 != 77 )
  {
LABEL_19:
    if ( *(_BYTE *)a1 != 67 )
      goto LABEL_20;
    goto LABEL_42;
  }
  v6 = 0;
  v2 = v5;
  v3 = 0;
  v4 = 7;
LABEL_17:
  if ( v2 )
  {
LABEL_60:
    v10 = a2 != 4;
    goto LABEL_43;
  }
  if ( a2 == 1 )
    goto LABEL_19;
  if ( !v5 )
  {
    if ( *(_WORD *)a1 != 25443 )
    {
      v10 = a2 != 4;
      if ( *(_WORD *)a1 != 28771 )
      {
LABEL_47:
        if ( v10 || *(_DWORD *)a1 != 1836085347 )
        {
          v12 = a2 != 5;
          goto LABEL_49;
        }
LABEL_85:
        v3 = 0;
        v4 = 5;
        return ((v2 & 1) << 11) | v4 & 0xF | (v3 << 8);
      }
    }
LABEL_42:
    v6 = 0;
    v3 = 0;
    v4 = 5;
    v10 = 1;
LABEL_43:
    v11 = 1;
    goto LABEL_44;
  }
LABEL_20:
  v10 = a2 != 4;
  if ( v7 )
    goto LABEL_47;
  if ( *(_WORD *)a1 == 28771 && *(_BYTE *)(a1 + 2) == 112
    || *(_WORD *)a1 == 20547 && *(_BYTE *)(a1 + 2) == 80
    || *(_WORD *)a1 == 11107 && *(_BYTE *)(a1 + 2) == 43
    || *(_WORD *)a1 == 30819 && *(_BYTE *)(a1 + 2) == 120
    || *(_WORD *)a1 == 28776 && *(_BYTE *)(a1 + 2) == 112 )
  {
    goto LABEL_85;
  }
  if ( *(_WORD *)a1 == 30824 && *(_BYTE *)(a1 + 2) == 120 )
  {
    v6 = 0;
    v10 = 1;
    v11 = 1;
    v3 = 0;
    v4 = 5;
  }
  else
  {
    v11 = 0;
    v10 = 1;
  }
LABEL_44:
  v12 = a2 != 5;
  if ( v11 )
  {
    v2 = v6;
    return ((v2 & 1) << 11) | v4 & 0xF | (v3 << 8);
  }
LABEL_49:
  if ( !v7 )
  {
    if ( *(_WORD *)a1 == 26985 && *(_BYTE *)(a1 + 2) == 109 )
    {
      v2 = 1;
      v4 = 5;
      goto LABEL_79;
    }
    if ( *(_WORD *)a1 == 26985 && *(_BYTE *)(a1 + 2) == 104 )
    {
      v3 = 0;
      v2 = 1;
      v4 = 5;
      return ((v2 & 1) << 11) | v4 & 0xF | (v3 << 8);
    }
LABEL_52:
    if ( v12 )
      goto LABEL_54;
    goto LABEL_53;
  }
  if ( v5 )
  {
    v7 = v5;
    goto LABEL_52;
  }
  if ( *(_WORD *)a1 == 27747 )
  {
    v2 = 0;
    v4 = 8;
LABEL_79:
    v3 = 0;
    return ((v2 & 1) << 11) | v4 & 0xF | (v3 << 8);
  }
  if ( v12 )
  {
    v7 = v12;
LABEL_67:
    if ( *(_WORD *)a1 == 30051 )
    {
      v3 = 0;
      v4 = 10;
      v2 = 0;
      return ((v2 & 1) << 11) | v4 & 0xF | (v3 << 8);
    }
    if ( v7 )
    {
      if ( *(_WORD *)a1 == 27756 || *(_WORD *)a1 == 25442 )
      {
        v2 = 0;
        v4 = 3;
        v3 = 0;
        return ((v2 & 1) << 11) | v4 & 0xF | (v3 << 8);
      }
      goto LABEL_71;
    }
    goto LABEL_69;
  }
LABEL_53:
  if ( *(_DWORD *)a1 == 1885564003 && *(_BYTE *)(a1 + 4) == 112 )
  {
    v3 = 0;
    v4 = 9;
    v2 = 0;
    return ((v2 & 1) << 11) | v4 & 0xF | (v3 << 8);
  }
LABEL_54:
  if ( !v5 )
    goto LABEL_67;
  if ( !v7 )
  {
    if ( *(_WORD *)a1 == 30051 && *(_BYTE *)(a1 + 2) == 104 )
    {
      v2 = 0;
      v3 = 0;
      v4 = 10;
      return ((v2 & 1) << 11) | v4 & 0xF | (v3 << 8);
    }
LABEL_69:
    if ( *(_WORD *)a1 == 26984 && *(_BYTE *)(a1 + 2) == 112 )
    {
      v2 = 0;
      v4 = 11;
      v3 = 0;
      return ((v2 & 1) << 11) | v4 & 0xF | (v3 << 8);
    }
    v7 = 0;
  }
LABEL_71:
  if ( v10 )
  {
    if ( !v7 && *(_WORD *)a1 == 26979 && *(_BYTE *)(a1 + 2) == 114 )
    {
      v2 = 0;
      v4 = 2;
      v3 = 0;
    }
    else
    {
      v2 = 0;
      v3 = 0;
      v4 = 0;
    }
  }
  else
  {
    v2 = 0;
    v4 = 12;
    if ( *(_DWORD *)a1 != 1819503720 )
      v4 = 0;
    v3 = 0;
  }
  return ((v2 & 1) << 11) | v4 & 0xF | (v3 << 8);
}
