__int64 __fastcall sub_73D770(__int64 a1, __int64 a2, int *a3)
{
  bool v5; // r10
  bool v6; // r9
  char v7; // cl
  char v8; // si
  char v9; // bl
  bool v10; // dl
  int v11; // r11d
  char v12; // bl
  char v13; // cl

  v5 = a2 != 4;
  v6 = a2 != 8;
  v7 = a2 != 6;
  if ( a2 == 5 )
  {
    if ( *(_DWORD *)a1 == 1702390128 )
    {
      v8 = 1;
      if ( *(_BYTE *)(a1 + 4) == 108 )
      {
LABEL_4:
        v9 = v8 | (a2 != 7);
        v10 = a2 != 13;
        if ( !v9 )
        {
          if ( *(_DWORD *)a1 == 1886220131 && *(_DWORD *)(a1 + 3) == 1702131056 )
          {
            v8 = 1;
            v11 = 38;
            goto LABEL_29;
          }
          v11 = 33;
          v12 = v8 | (a2 != 12);
          goto LABEL_7;
        }
        goto LABEL_5;
      }
    }
LABEL_3:
    v8 = 0;
    goto LABEL_4;
  }
  if ( a2 != 6 )
  {
    if ( a2 == 8 )
    {
      if ( *(_QWORD *)a1 == 0x797274656D6F6567LL )
      {
        v10 = 1;
        v8 = 1;
        v11 = 35;
        goto LABEL_8;
      }
    }
    else if ( a2 == 4 )
    {
      if ( *(_DWORD *)a1 == 1819047272 )
      {
        v10 = 1;
        v8 = 1;
        v11 = 36;
        goto LABEL_10;
      }
      v8 = 0;
      v9 = 1;
      v10 = a2 != 13;
LABEL_5:
      v11 = 33;
      if ( !((unsigned __int8)v8 | v10) )
      {
        if ( *(_QWORD *)a1 == 0x72656E6567796172LL )
        {
          v8 = v9;
          v11 = 40;
          if ( *(_QWORD *)(a1 + 5) == 0x6E6F69746172656ELL )
            goto LABEL_30;
        }
        v8 = 0;
        v10 = 0;
        v11 = 33;
LABEL_9:
        if ( v7 )
          goto LABEL_10;
LABEL_23:
        if ( *(_DWORD *)a1 == 1752788577 && *(_WORD *)(a1 + 4) == 29801 )
        {
          v11 = 42;
          goto LABEL_14;
        }
        v13 = v8 | v5;
        goto LABEL_25;
      }
      goto LABEL_6;
    }
    goto LABEL_3;
  }
  if ( *(_DWORD *)a1 != 1953654134 || *(_WORD *)(a1 + 4) != 30821 )
  {
    if ( *(_DWORD *)a1 == 1634561892 && *(_WORD *)(a1 + 4) == 28265 )
    {
      v10 = 1;
      v8 = 1;
      v11 = 37;
      goto LABEL_26;
    }
    v10 = 1;
    v8 = 0;
    v11 = 34;
    goto LABEL_23;
  }
  v10 = 1;
  v8 = 1;
  v11 = 34;
LABEL_6:
  v12 = v8 | (a2 != 12);
LABEL_7:
  if ( v12 )
  {
LABEL_8:
    v7 |= v8;
    goto LABEL_9;
  }
  if ( *(_QWORD *)a1 == 0x6365737265746E69LL && *(_DWORD *)(a1 + 8) == 1852795252 )
  {
    v11 = 41;
    goto LABEL_14;
  }
LABEL_10:
  v13 = v5 | v8;
  if ( !((unsigned __int8)v8 | (a2 != 10)) )
  {
    if ( *(_QWORD *)a1 == 0x68747365736F6C63LL && *(_WORD *)(a1 + 8) == 29801 )
    {
      v11 = 43;
LABEL_14:
      *a3 = v11;
      return 1;
    }
    goto LABEL_26;
  }
LABEL_25:
  if ( !v13 )
  {
    if ( *(_DWORD *)a1 == 1936943469 )
    {
      v11 = 44;
      goto LABEL_14;
    }
    if ( *(_DWORD *)a1 != 1752393069 )
      goto LABEL_30;
    goto LABEL_49;
  }
LABEL_26:
  if ( (unsigned __int8)v8 | v6 )
  {
    if ( v8 || v5 )
      goto LABEL_29;
    if ( *(_DWORD *)a1 != 1752393069 )
      return 0;
LABEL_49:
    v11 = 46;
    goto LABEL_14;
  }
  if ( *(_QWORD *)a1 == 0x656C62616C6C6163LL )
  {
    v11 = 45;
    goto LABEL_14;
  }
LABEL_29:
  if ( !((unsigned __int8)v8 | v10) )
  {
    if ( *(_QWORD *)a1 == 0x636966696C706D61LL )
    {
      v11 = 47;
      if ( *(_QWORD *)(a1 + 5) == 0x6E6F697461636966LL )
        goto LABEL_14;
    }
    return 0;
  }
LABEL_30:
  if ( v8 )
    goto LABEL_14;
  return 0;
}

