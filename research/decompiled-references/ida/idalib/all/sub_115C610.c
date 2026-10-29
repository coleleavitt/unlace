const char *__fastcall sub_115C610(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  const char *result; // rax
  bool v5; // bl
  bool v6; // r11
  const char *v7; // r9
  bool v8; // dl
  bool v9; // r10
  bool v10; // bp
  bool v11; // r8
  char v12; // cl

  v3 = *(_DWORD *)(a3 + 44);
  if ( *(_DWORD *)(a3 + 32) == 30 )
  {
    result = "-Av9b";
    if ( v3 != 13 )
    {
      if ( (v3 & 0xFFFFFFFB) == 3 || (result = "-Av9", v3 == 12) )
        result = "-Av9a";
    }
    if ( a2 == 7 )
    {
      if ( *(_DWORD *)a1 == 1734437230 && *(_WORD *)(a1 + 4) == 29281 && *(_BYTE *)(a1 + 6) == 97 )
        return "-Av9b";
    }
    else if ( a2 == 8 )
    {
      if ( *(_QWORD *)a1 == 0x326172616761696ELL )
      {
        return "-Av9b";
      }
      else if ( *(_QWORD *)a1 == 0x336172616761696ELL || *(_QWORD *)a1 == 0x346172616761696ELL )
      {
        return "-Av9d";
      }
    }
    return result;
  }
  result = "-Av8plus";
  if ( v3 != 13 )
    result = "-Av8";
  if ( a2 == 2 )
  {
    v8 = *(_WORD *)a1 == 14454;
    v6 = v8;
LABEL_52:
    v5 = a2 != 8;
    if ( a2 == 10 && !v8 )
    {
      if ( *(_QWORD *)a1 == 0x6170737265707968LL && *(_WORD *)(a1 + 8) == 25458 )
      {
        v6 = 1;
        v8 = 1;
        v9 = 1;
        v7 = "-Av8";
      }
      else
      {
        v7 = "-Av8";
        v9 = 1;
      }
LABEL_56:
      if ( !v9 && !v8 )
      {
        if ( *(_DWORD *)a1 == 929264500 && *(_WORD *)(a1 + 4) == 12592 )
        {
          v7 = "-Asparclet";
          v8 = 1;
          v6 = 1;
          v10 = a2 != 7;
LABEL_14:
          v11 = v10 || v8;
          if ( v8 || a2 != 11 )
            goto LABEL_15;
          goto LABEL_77;
        }
        goto LABEL_13;
      }
      goto LABEL_12;
    }
    v7 = "-Av8";
    goto LABEL_9;
  }
  if ( a2 == 10 )
  {
    if ( *(_QWORD *)a1 == 0x6170737265707573LL )
    {
      v8 = 1;
      v6 = 1;
      if ( *(_WORD *)(a1 + 8) == 25458 )
        goto LABEL_52;
    }
    goto LABEL_51;
  }
  if ( a2 != 9 )
  {
    if ( a2 == 4 )
    {
      v9 = 1;
      v5 = 1;
      v7 = "-Asparclite";
      v8 = *(_DWORD *)a1 == 875772262;
      if ( *(_DWORD *)a1 != 875772262 )
        v7 = "-Av8";
      v6 = *(_DWORD *)a1 == 875772262;
      goto LABEL_64;
    }
LABEL_51:
    v8 = 0;
    v6 = 0;
    goto LABEL_52;
  }
  v5 = 1;
  if ( *(_QWORD *)a1 == 0x74696C6372617073LL && *(_BYTE *)(a1 + 8) == 101 )
  {
    v6 = 1;
    v7 = "-Asparclite";
    v8 = 1;
  }
  else
  {
    v6 = 0;
    v7 = "-Av8";
    v8 = 0;
  }
LABEL_9:
  v9 = a2 != 6;
  if ( a2 == 12 && !v8 )
  {
    if ( *(_QWORD *)a1 == 0x74696C6372617073LL && *(_DWORD *)(a1 + 8) == 2016819301 )
    {
      v6 = 1;
      v7 = "-Asparclite";
      v8 = 1;
    }
    goto LABEL_12;
  }
LABEL_64:
  if ( v8 || v5 )
    goto LABEL_56;
  if ( *(_QWORD *)a1 == 0x74656C6372617073LL )
  {
    v7 = "-Asparclet";
    v8 = 1;
    v6 = 1;
    goto LABEL_13;
  }
LABEL_12:
  if ( !v8 && a2 == 2 )
  {
    if ( *(_WORD *)a1 == 14710 )
    {
      v12 = 1;
      v8 = 1;
      v6 = 1;
      v7 = "-Av8plus";
    }
    else
    {
      v12 = v8 || a2 != 11;
    }
    v10 = a2 != 7;
    v11 = a2 != 7 || v8;
    if ( !v12 )
    {
LABEL_77:
      if ( *(_QWORD *)a1 != 0x6170736172746C75LL || *(_WORD *)(a1 + 8) != 25458 || *(_BYTE *)(a1 + 10) != 51 )
        goto LABEL_16;
      return "-Av8plus";
    }
    goto LABEL_15;
  }
LABEL_13:
  v10 = a2 != 7;
  if ( v8 || a2 != 10 )
    goto LABEL_14;
  if ( *(_QWORD *)a1 == 0x6170736172746C75LL && *(_WORD *)(a1 + 8) == 25458 )
    return "-Av8plus";
  v11 = v8 || v10;
LABEL_15:
  if ( !v11 )
  {
    if ( *(_DWORD *)a1 != 1734437230 || *(_WORD *)(a1 + 4) != 29281 || *(_BYTE *)(a1 + 6) != 97 )
    {
      if ( v8 )
        return v7;
      goto LABEL_21;
    }
    return "-Av8plusb";
  }
LABEL_16:
  if ( v8 )
    return v7;
  if ( !v5 )
  {
    if ( *(_QWORD *)a1 != 0x326172616761696ELL )
    {
      if ( *(_QWORD *)a1 == 0x336172616761696ELL || *(_QWORD *)a1 == 0x346172616761696ELL )
        return "-Av8plusd";
      goto LABEL_21;
    }
    return "-Av8plusb";
  }
LABEL_21:
  if ( v9 )
  {
    if ( a2 == 5 )
      goto LABEL_34;
    if ( v6 )
      return result;
LABEL_83:
    if ( !v10 && *(_DWORD *)a1 == 825717351 && *(_WORD *)(a1 + 4) == 29234 && *(_BYTE *)(a1 + 6) == 99 )
      return "-Aleon";
    return result;
  }
  if ( *(_DWORD *)a1 == 825385325 && *(_WORD *)(a1 + 4) == 12336
    || *(_DWORD *)a1 == 825385325 && *(_WORD *)(a1 + 4) == 12341
    || *(_DWORD *)a1 == 825385325 && *(_WORD *)(a1 + 4) == 13621
    || *(_DWORD *)a1 == 875716973 && *(_WORD *)(a1 + 4) == 12341
    || *(_DWORD *)a1 == 875716973 && *(_WORD *)(a1 + 4) == 13621
    || *(_DWORD *)a1 == 2016567661 && *(_WORD *)(a1 + 4) == 30773
    || *(_DWORD *)a1 == 808608109 && *(_WORD *)(a1 + 4) == 12344
    || *(_DWORD *)a1 == 808608109 && *(_WORD *)(a1 + 4) == 13624
    || *(_DWORD *)a1 == 875716973 && *(_WORD *)(a1 + 4) == 12344
    || *(_DWORD *)a1 == 875716973 && *(_WORD *)(a1 + 4) == 13624
    || *(_DWORD *)a1 == 2016567661 && *(_WORD *)(a1 + 4) == 30776 )
  {
    return "-Aleon";
  }
  if ( a2 != 5 )
  {
    if ( *(_DWORD *)a1 == 959870049 && *(_WORD *)(a1 + 4) == 25911
      || *(_DWORD *)a1 == 959870049 && *(_WORD *)(a1 + 4) == 26167 )
    {
      return "-Av8";
    }
    goto LABEL_83;
  }
LABEL_34:
  if ( *(_DWORD *)a1 == 1852794220 && *(_BYTE *)(a1 + 4) == 50 )
    return "-Av8";
  if ( *(_DWORD *)a1 == 1852794220 && *(_BYTE *)(a1 + 4) == 51 )
    return "-Aleon";
  if ( *(_DWORD *)a1 == 959870069 && *(_BYTE *)(a1 + 4) == 57 )
    return "-Av8";
  if ( v6 )
    return v7;
  if ( *(_DWORD *)a1 == 1852794220 && *(_BYTE *)(a1 + 4) == 52 || *(_DWORD *)a1 == 876048999 && *(_BYTE *)(a1 + 4) == 48 )
    return "-Aleon";
  return result;
}
