char *__fastcall sub_21B1D80(__int64 a1, __int64 a2, __int64 a3)
{
  char *result; // rax
  bool v4; // cl
  char v5; // r9
  char v6; // cl
  char *v7; // r10
  bool v8; // r8
  char v9; // r8

  result = (char *)a2;
  if ( a3 != 6 )
  {
    v4 = a3 != 7;
    v5 = 0;
LABEL_3:
    v6 = v5 | v4;
    goto LABEL_4;
  }
  if ( *(_DWORD *)a2 == 1852405604 )
  {
    v5 = 1;
    v4 = 1;
    if ( *(_WORD *)(a2 + 4) == 28518 )
      goto LABEL_3;
  }
  v6 = 1;
  if ( *(_DWORD *)a2 == 1768716132 )
  {
    v5 = 1;
    v7 = "debug_line";
    if ( *(_WORD *)(a2 + 4) == 25966 )
      goto LABEL_5;
  }
  v5 = 0;
LABEL_4:
  v7 = "debug_info";
  if ( v6 )
  {
LABEL_5:
    v8 = a3 != 5;
LABEL_6:
    v9 = v5 | v8;
    v6 = 1;
    goto LABEL_7;
  }
  if ( *(_DWORD *)a2 == 1651537764 && *(_WORD *)(a2 + 4) == 28014 && *(_BYTE *)(a2 + 6) == 115 )
  {
    v5 = 1;
    v7 = "debug_pubnames";
    goto LABEL_5;
  }
  if ( *(_DWORD *)a2 == 1651537764 && *(_WORD *)(a2 + 4) == 31092 && *(_BYTE *)(a2 + 6) == 112 )
  {
    v5 = 1;
    v7 = "debug_pubtypes";
    goto LABEL_5;
  }
  if ( *(_DWORD *)a2 == 1918990180 && *(_WORD *)(a2 + 4) == 26478 && *(_BYTE *)(a2 + 6) == 101 )
  {
    v5 = 1;
    v8 = a3 != 5;
    v7 = "debug_aranges";
    goto LABEL_6;
  }
  if ( *(_DWORD *)a2 == 1650554724 && *(_WORD *)(a2 + 4) == 25970 )
  {
    v7 = "debug_abbrev";
    if ( *(_BYTE *)(a2 + 6) == 118 )
      return v7;
  }
  v9 = v5 | (a3 != 5);
  v7 = "debug_info";
LABEL_7:
  if ( !v9 && *(_DWORD *)a2 == 1953724260 && *(_BYTE *)(a2 + 4) == 114 )
    return "debug_str";
  if ( !v6 )
  {
    if ( *(_DWORD *)a2 == 1852995428 && *(_WORD *)(a2 + 4) == 25959 && *(_BYTE *)(a2 + 6) == 115 )
      return "debug_ranges";
    if ( v9 )
      goto LABEL_33;
    v6 = 0;
LABEL_17:
    if ( *(_DWORD *)a2 == 1869379428 && *(_BYTE *)(a2 + 4) == 99 )
      return "debug_loc";
    if ( v6 )
      goto LABEL_19;
    v9 = 0;
LABEL_33:
    if ( *(_DWORD *)a2 == 1919317860 && *(_WORD *)(a2 + 4) == 28001 && *(_BYTE *)(a2 + 6) == 101 )
      return "debug_frame";
    if ( v9 )
      goto LABEL_10;
LABEL_19:
    if ( *(_DWORD *)a2 == 1634563940 )
    {
      result = "debug_macinfo";
      if ( *(_BYTE *)(a2 + 4) != 99 )
        return (char *)a2;
    }
    return result;
  }
  if ( !v9 )
    goto LABEL_17;
LABEL_10:
  if ( v5 )
    return v7;
  return result;
}
