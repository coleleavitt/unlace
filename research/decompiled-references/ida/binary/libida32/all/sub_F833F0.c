__int64 __fastcall sub_F833F0(__int64 a1)
{
  _WORD *v1; // rax
  __int64 v2; // rdx
  _WORD *v3; // rsi
  char v4; // r8
  bool v5; // cl
  __int64 result; // rax
  char v7; // di

  v1 = sub_F72300((_WORD *)(*(_QWORD *)(a1 + 16) + 16LL), **(unsigned int **)(a1 + 16));
  v3 = v1;
  switch ( v2 )
  {
    case 8LL:
      v4 = 1;
      v5 = *(_QWORD *)v1 == 0x6E72757465726F6ELL;
      result = 0;
      break;
    case 6LL:
      if ( *(_DWORD *)v1 != 1970500449 || v1[2] != 25965 )
      {
        v5 = 0;
        v4 = 0;
        result = 2;
        v7 = 1;
LABEL_4:
        if ( !(v5 | (unsigned __int8)v4) )
        {
          if ( *(_DWORD *)v3 == 1701538156 && v3[2] == 31084 )
          {
            v5 = v7;
            result = 0;
            goto LABEL_17;
          }
          v5 = 0;
          if ( v2 != 8 )
            goto LABEL_17;
LABEL_7:
          if ( *(_QWORD *)v3 == 0x796C656B696C6E75LL )
            return 0;
          if ( v5 || v2 != 9 )
            goto LABEL_19;
          return *(_QWORD *)v3 == 0x7261637369646F6ELL && *((_BYTE *)v3 + 8) == 100;
        }
        goto LABEL_15;
      }
      v5 = 1;
      v4 = 0;
      result = 2;
      break;
    case 18LL:
      if ( !(*(_QWORD *)v1 ^ 0x5F73656972726163LL | *((_QWORD *)v1 + 1) ^ 0x6E65646E65706564LL) )
      {
        result = 0;
        v5 = 1;
        if ( v3[8] == 31075 )
          goto LABEL_15;
      }
      goto LABEL_14;
    case 10LL:
      if ( *(_QWORD *)v1 == 0x7461636572706564LL )
      {
        v5 = 1;
        result = 1;
        if ( v3[4] == 25701 )
          goto LABEL_15;
      }
LABEL_14:
      v5 = 0;
      result = 0;
      goto LABEL_15;
    default:
      v5 = 0;
      v4 = 1;
      result = 0;
      break;
  }
  v7 = v5 || v2 != 11;
  if ( v7 )
    goto LABEL_4;
  if ( *(_QWORD *)v3 == 0x6F7268746C6C6166LL && v3[4] == 26485 && *((_BYTE *)v3 + 10) == 104 )
  {
    result = 0;
    v5 = 1;
LABEL_16:
    if ( v5 || v2 != 8 )
      goto LABEL_17;
    goto LABEL_7;
  }
LABEL_15:
  if ( v5 || v2 != 17 )
    goto LABEL_16;
  if ( !(*(_QWORD *)v3 ^ 0x7571696E755F6F6ELL | *((_QWORD *)v3 + 1) ^ 0x7365726464615F65LL)
    && *((_BYTE *)v3 + 16) == 115 )
  {
    result = 0;
    v5 = 1;
LABEL_18:
    if ( v5 || v2 != 9 )
      goto LABEL_19;
    return *(_QWORD *)v3 == 0x7261637369646F6ELL && *((_BYTE *)v3 + 8) == 100;
  }
LABEL_17:
  if ( v5 || v2 != 12 )
    goto LABEL_18;
  if ( *(_QWORD *)v3 == 0x6E755F656279616DLL && *((_DWORD *)v3 + 2) == 1684370293 )
    return 0;
LABEL_19:
  if ( !v5 )
    return 0;
  return result;
}

