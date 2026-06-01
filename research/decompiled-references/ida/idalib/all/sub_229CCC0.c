char *__fastcall sub_229CCC0(__int64 a1, __int64 a2)
{
  bool v2; // r8
  char *result; // rax
  bool v4; // cl

  if ( a2 == 3 )
  {
    if ( *(_WORD *)a1 == 28774 )
    {
      v2 = 1;
      if ( *(_BYTE *)(a1 + 2) == 97 )
        goto LABEL_4;
    }
    goto LABEL_3;
  }
  if ( a2 != 4 )
  {
    if ( a2 == 8 )
    {
      v2 = *(_QWORD *)a1 == 0x6B6369726576616DLL;
      goto LABEL_4;
    }
LABEL_3:
    v2 = 0;
LABEL_4:
    result = "invalid";
LABEL_5:
    v4 = a2 != 8;
LABEL_6:
    if ( !v2 && !v4 )
    {
      if ( *(_QWORD *)a1 == 0x3631642D33706676LL )
        return "vfpv3-d16";
      if ( *(_QWORD *)a1 == 0x3631642D34706676LL )
        return "vfpv4-d16";
    }
    goto LABEL_7;
  }
  switch ( *(_DWORD *)a1 )
  {
    case 0x32657066:
    case 0x33657066:
      v2 = 1;
      result = "invalid";
      goto LABEL_5;
    case 0x32706676:
      v2 = 1;
      result = "vfpv2";
      goto LABEL_5;
    case 0x33706676:
      v4 = 1;
      v2 = 1;
      result = "vfpv3";
      goto LABEL_6;
    case 0x34706676:
      return "vfpv4";
  }
  v2 = 0;
  result = "invalid";
LABEL_7:
  if ( v2 )
    return result;
  if ( a2 != 10 )
  {
    if ( a2 == 12 )
    {
      if ( *(_QWORD *)a1 == 0x70732D3476706676LL && *(_DWORD *)(a1 + 8) == 909206573 )
        return "fpv4-sp-d16";
    }
    else if ( a2 == 11 )
    {
      if ( *(_QWORD *)a1 == 0x2D70642D34767066LL && *(_WORD *)(a1 + 8) == 12644 && *(_BYTE *)(a1 + 10) == 54 )
        return "vfpv4-d16";
      if ( *(_QWORD *)a1 == 0x2D70642D35767066LL && *(_WORD *)(a1 + 8) == 12644 && *(_BYTE *)(a1 + 10) == 54 )
        return "fpv5-d16";
    }
    return (char *)a1;
  }
  if ( *(_QWORD *)a1 == 0x642D70732D347066LL && *(_WORD *)(a1 + 8) == 13873 )
    return "fpv4-sp-d16";
  if ( *(_QWORD *)a1 == 0x642D70642D347066LL )
  {
    if ( *(_WORD *)(a1 + 8) == 13873 )
      return "vfpv4-d16";
    if ( *(_QWORD *)a1 != 0x642D70732D357066LL )
      goto LABEL_12;
    goto LABEL_44;
  }
  if ( *(_QWORD *)a1 == 0x642D70732D357066LL )
  {
LABEL_44:
    if ( *(_WORD *)(a1 + 8) == 13873 )
      return "fpv5-sp-d16";
  }
LABEL_12:
  if ( *(_QWORD *)a1 == 0x642D70642D357066LL && *(_WORD *)(a1 + 8) == 13873 )
    return "fpv5-d16";
  if ( *(_QWORD *)a1 == 0x7066762D6E6F656ELL && *(_WORD *)(a1 + 8) == 13174 )
    return "neon";
  else
    return (char *)a1;
}
