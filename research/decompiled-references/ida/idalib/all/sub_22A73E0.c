char *__fastcall sub_22A73E0(__int64 a1, __int64 a2)
{
  char *result; // rax
  char v3; // r12
  char v4; // r10
  bool v5; // r9
  char *v6; // rbx
  char v7; // cl
  char v8; // r8
  bool v9; // r11
  bool v10; // r10
  char v11; // r10
  char v12; // r9
  char v13; // r9
  bool v14; // r9
  char v15; // r10
  char v16; // r8

  result = (char *)a1;
  if ( a2 == 6 )
  {
    if ( *(_DWORD *)a1 == 1835888483 && *(_WORD *)(a1 + 4) == 28271 )
    {
      v5 = 1;
      v3 = 1;
      v8 = 0;
      v6 = "generic";
      v7 = 1;
    }
    else
    {
      if ( *(_DWORD *)a1 != 878932080 || *(_WORD *)(a1 + 4) != 12340 )
      {
        if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 13170 )
        {
          v5 = 1;
          v3 = 1;
          v8 = 0;
          v7 = 1;
          v6 = "pwr3";
        }
        else
        {
          v5 = 1;
          v8 = 0;
          v7 = 0;
          v3 = 1;
          v6 = "generic";
        }
        goto LABEL_20;
      }
      v5 = 1;
      v3 = 1;
      v8 = 0;
      v6 = "440";
      v7 = 1;
    }
    goto LABEL_9;
  }
  if ( a2 == 3 )
  {
    if ( *(_WORD *)a1 == 12340 && *(_BYTE *)(a1 + 2) == 53 )
    {
      v5 = 1;
      v3 = 1;
      v7 = 1;
      v6 = "generic";
      v8 = 1;
LABEL_9:
      v4 = v7 | 1;
      goto LABEL_10;
    }
    goto LABEL_15;
  }
  if ( a2 != 5 )
  {
LABEL_15:
    v3 = 1;
    goto LABEL_6;
  }
  if ( *(_DWORD *)a1 == 1714435124 && *(_BYTE *)(a1 + 4) == 112 )
  {
    v5 = 1;
    v3 = 0;
    v7 = 1;
    v6 = "440";
    v8 = 1;
    goto LABEL_9;
  }
  v3 = 0;
LABEL_6:
  v4 = a2 != 2;
  if ( a2 == 3 )
  {
    v5 = 1;
    if ( *(_WORD *)a1 == 13110 && *(_BYTE *)(a1 + 2) == 48 )
    {
      v8 = 1;
      v7 = 1;
      v6 = "pwr3";
      goto LABEL_20;
    }
    v6 = "generic";
    v7 = 0;
    v8 = 1;
    goto LABEL_9;
  }
  v5 = a2 != 2;
  v8 = 1;
  v7 = 0;
  v6 = "generic";
LABEL_10:
  if ( v4 )
  {
LABEL_20:
    v9 = a2 != 3;
    goto LABEL_21;
  }
  v9 = a2 != 3;
  if ( *(_WORD *)a1 == 13127 )
  {
    v7 = 1;
    v6 = "g3";
  }
  else if ( *(_WORD *)a1 == 13383 )
  {
    v7 = 1;
    v10 = a2 != 4;
    v6 = "g4";
    goto LABEL_22;
  }
LABEL_21:
  v10 = a2 != 4;
  if ( !((unsigned __int8)v7 | v9) && *(_WORD *)a1 == 13383 && *(_BYTE *)(a1 + 2) == 43 )
  {
    v7 = 1;
    v6 = "g4+";
    goto LABEL_23;
  }
LABEL_22:
  if ( (unsigned __int8)v7 | v10 )
  {
LABEL_23:
    v11 = v7 | v8;
    goto LABEL_24;
  }
  v11 = v8 | v7;
  if ( *(_DWORD *)a1 == 942945592 )
  {
    v6 = "e500";
    v7 = 1;
    goto LABEL_25;
  }
LABEL_24:
  if ( !v11 && *(_DWORD *)a1 == 962818160 && *(_WORD *)(a1 + 4) == 12343 )
  {
    v7 = 1;
    v6 = "970";
    goto LABEL_26;
  }
LABEL_25:
  if ( (unsigned __int8)v7 | v5 )
  {
LABEL_26:
    v12 = v7 | v3;
    goto LABEL_27;
  }
  v12 = v7 | v3;
  if ( *(_WORD *)a1 == 13639 )
  {
    v6 = "g5";
    v7 = 1;
    goto LABEL_28;
  }
LABEL_27:
  if ( v12 )
  {
LABEL_28:
    v13 = v7 | v8;
    goto LABEL_29;
  }
  if ( *(_DWORD *)a1 == 1633906800 && *(_BYTE *)(a1 + 4) == 50 )
  {
    v7 = 1;
    v6 = "a2";
    goto LABEL_30;
  }
  v13 = v8 | v7;
LABEL_29:
  if ( v13 )
  {
LABEL_30:
    v14 = a2 != 7;
    goto LABEL_31;
  }
  v14 = a2 != 7;
  if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 13426 )
  {
    v7 = 1;
    v6 = "pwr4";
  }
  else if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 13682 )
  {
    v7 = 1;
    v6 = "pwr5";
    goto LABEL_32;
  }
LABEL_31:
  v15 = v14 | v7;
  if ( v14 | (unsigned __int8)v7 )
    goto LABEL_32;
  if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 13682 && *(_BYTE *)(a1 + 6) == 120 )
  {
    v7 = 1;
    v6 = "pwr5x";
LABEL_32:
    v16 = v7 | v8;
    v15 = 1;
    if ( v16 )
      goto LABEL_33;
    goto LABEL_61;
  }
  if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 13682 && *(_BYTE *)(a1 + 6) == 43 )
  {
    v7 = 1;
    v6 = "pwr5+";
    goto LABEL_34;
  }
  v16 = v7 | v8;
  if ( v16 )
  {
LABEL_33:
    if ( v15 )
      goto LABEL_34;
    goto LABEL_64;
  }
LABEL_61:
  if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 13938 )
  {
    v7 = 1;
    v6 = "pwr6";
    goto LABEL_34;
  }
  if ( v15 )
    goto LABEL_66;
  v16 = 0;
LABEL_64:
  if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 13938 && *(_BYTE *)(a1 + 6) == 120 )
  {
    v7 = 1;
    v6 = "pwr6x";
    goto LABEL_34;
  }
  if ( !v16 )
  {
LABEL_66:
    if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 14194 )
    {
      v7 = 1;
      v6 = "pwr7";
    }
    else if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 14450 )
    {
      v6 = "pwr8";
      v7 = 1;
    }
    else if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 14706 )
    {
      v6 = "pwr9";
      v7 = 1;
      goto LABEL_38;
    }
  }
LABEL_34:
  if ( !((unsigned __int8)v7 | v14) )
  {
    if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 12658 && *(_BYTE *)(a1 + 6) == 48 )
    {
      v6 = "pwr10";
      v7 = 1;
      goto LABEL_38;
    }
    if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 12658 && *(_BYTE *)(a1 + 6) == 49 )
    {
      v6 = "pwr11";
      v7 = 1;
      goto LABEL_38;
    }
  }
  if ( v7 )
  {
LABEL_38:
    if ( a2 == 11 )
    {
      if ( v7 )
        return v6;
LABEL_85:
      if ( *(_QWORD *)a1 == 0x3663707265776F70LL && *(_WORD *)(a1 + 8) == 27700 )
      {
        result = "ppc64le";
        if ( *(_BYTE *)(a1 + 10) != 101 )
          return (char *)a1;
      }
      return result;
    }
    if ( v7 )
      return v6;
    return result;
  }
  if ( a2 == 7 )
  {
    if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 28786 && *(_BYTE *)(a1 + 6) == 99 )
      return (char *)"ppc";
    goto LABEL_38;
  }
  if ( a2 != 9 )
  {
    if ( a2 != 11 )
      return result;
    goto LABEL_85;
  }
  if ( *(_QWORD *)a1 == 0x3363707265776F70LL && *(_BYTE *)(a1 + 8) == 50 )
    return (char *)"ppc";
  if ( *(_QWORD *)a1 == 0x3663707265776F70LL )
  {
    result = "ppc64";
    if ( *(_BYTE *)(a1 + 8) != 52 )
      return (char *)a1;
  }
  return result;
}
