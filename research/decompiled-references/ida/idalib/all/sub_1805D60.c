__int64 __fastcall sub_1805D60(__int64 a1, __int64 a2)
{
  bool v2; // dl
  bool v3; // r9
  __int64 result; // rax
  bool v5; // cl
  bool v6; // cl

  switch ( a2 )
  {
    case 5LL:
      if ( *(_DWORD *)a1 != 1702390128 || (v2 = 1, *(_BYTE *)(a1 + 4) != 108) )
        v2 = 0;
      v3 = 1;
      result = 33;
      break;
    case 6LL:
      v3 = 1;
      if ( *(_DWORD *)a1 != 1953654134 || (v2 = 1, result = 34, *(_WORD *)(a1 + 4) != 30821) )
      {
        v2 = 0;
        result = 34;
      }
      break;
    case 8LL:
      v3 = 1;
      v5 = 1;
      v2 = *(_QWORD *)a1 == 0x797274656D6F6567LL;
      result = 2 * (unsigned int)v2 + 33;
      goto LABEL_8;
    default:
      v3 = a2 != 7;
      if ( a2 == 4 )
      {
        v5 = 1;
        result = 36;
        v2 = 1;
        if ( *(_DWORD *)a1 != 1819047272 )
        {
          v2 = 0;
          result = 33;
        }
LABEL_16:
        if ( !v5 && !v2 )
        {
          if ( *(_QWORD *)a1 == 0x72656E6567796172LL && *(_DWORD *)(a1 + 8) == 1869182049 && *(_BYTE *)(a1 + 12) == 110 )
          {
            result = 40;
            v2 = 1;
            goto LABEL_19;
          }
          goto LABEL_18;
        }
        goto LABEL_17;
      }
      v2 = 0;
      result = 33;
      break;
  }
  v5 = a2 != 13;
  if ( a2 == 6 && !v2 )
  {
    if ( *(_DWORD *)a1 == 1634561892 && *(_WORD *)(a1 + 4) == 28265 )
    {
      v2 = 1;
      result = 37;
    }
    goto LABEL_17;
  }
LABEL_8:
  if ( v3 || v2 )
    goto LABEL_16;
  if ( *(_DWORD *)a1 == 1886220131 && *(_WORD *)(a1 + 4) == 29813 && *(_BYTE *)(a1 + 6) == 101 )
  {
    v2 = 1;
    result = 38;
    goto LABEL_18;
  }
LABEL_17:
  if ( v2 || a2 != 12 )
  {
LABEL_18:
    if ( !v2 && a2 == 6 )
    {
      if ( *(_DWORD *)a1 == 1752788577 && *(_WORD *)(a1 + 4) == 29801 )
      {
        v2 = 1;
        result = 42;
        goto LABEL_21;
      }
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  if ( *(_QWORD *)a1 == 0x6365737265746E69LL && *(_DWORD *)(a1 + 8) == 1852795252 )
  {
    v2 = 1;
    result = 41;
LABEL_20:
    if ( !v2 && a2 == 4 )
    {
      if ( *(_DWORD *)a1 == 1936943469 )
      {
        v2 = 1;
        result = 44;
      }
      else if ( *(_DWORD *)a1 == 1752393069 )
      {
        return 46;
      }
      goto LABEL_24;
    }
    goto LABEL_21;
  }
LABEL_19:
  if ( v2 || a2 != 10 )
    goto LABEL_20;
  if ( *(_QWORD *)a1 == 0x68747365736F6C63LL && *(_WORD *)(a1 + 8) == 29801 )
  {
    result = 43;
    v2 = 1;
    goto LABEL_22;
  }
LABEL_21:
  if ( !v2 && a2 == 8 )
  {
    v6 = v2 || v5;
    if ( *(_QWORD *)a1 == 0x656C62616C6C6163LL )
    {
      v2 = 1;
      result = 45;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
LABEL_22:
  v6 = v2 || v5;
LABEL_23:
  if ( !v6 )
  {
    if ( *(_QWORD *)a1 == 0x636966696C706D61LL && *(_DWORD *)(a1 + 8) == 1869182049 && *(_BYTE *)(a1 + 12) == 110 )
      return 47;
    goto LABEL_25;
  }
LABEL_24:
  if ( v2 || v3 )
  {
LABEL_25:
    if ( !v2 )
      return 0;
    return result;
  }
  if ( *(_DWORD *)a1 != 1919052140 || *(_WORD *)(a1 + 4) != 29281 )
    return 0;
  result = 39;
  if ( *(_BYTE *)(a1 + 6) != 121 )
    return 0;
  return result;
}
