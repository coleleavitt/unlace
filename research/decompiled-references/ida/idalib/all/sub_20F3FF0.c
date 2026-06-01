__int64 __fastcall sub_20F3FF0(__int64 a1, __int64 a2, int a3)
{
  bool v3; // cl
  bool v4; // dl
  __int64 result; // rax
  bool v6; // dl
  bool v7; // cl
  char v8; // dl

  if ( a3 != 3 )
  {
LABEL_2:
    if ( a2 == 7 )
    {
      if ( *(_DWORD *)a1 != 1635151465 || *(_WORD *)(a1 + 4) != 26988 || (v8 = 1, *(_BYTE *)(a1 + 6) != 100) )
        v8 = 0;
      result = 0;
      if ( v8 )
        goto LABEL_30;
LABEL_42:
      v6 = a2 != 15;
      goto LABEL_43;
    }
    goto LABEL_3;
  }
  if ( a2 != 4 )
  {
    if ( a2 == 3 )
    {
      if ( *(_WORD *)a1 == 29545 && *(_BYTE *)(a1 + 2) == 97 )
        return 16;
      v4 = 0;
      result = 0;
      v3 = 1;
      goto LABEL_19;
    }
    goto LABEL_2;
  }
  result = 8;
  if ( *(_DWORD *)a1 == 1684957547 )
    return result;
  result = 10;
  if ( *(_DWORD *)a1 == 1751347809 )
    return result;
LABEL_3:
  v3 = a2 != 8;
  if ( a2 == 6 )
  {
    result = 1;
    if ( *(_DWORD *)a1 == 1735549300 && *(_WORD *)(a1 + 4) == 29797 )
      goto LABEL_30;
    v4 = 1;
    v3 = 1;
    if ( *(_DWORD *)a1 == 1684956534 && *(_WORD *)(a1 + 4) == 29295 )
    {
      result = 11;
      goto LABEL_30;
    }
    goto LABEL_38;
  }
  v4 = a2 != 3;
  if ( a2 == 5 )
  {
    if ( *(_DWORD *)a1 == 1835099508 )
    {
      result = 2;
      if ( *(_BYTE *)(a1 + 4) == 115 )
        goto LABEL_30;
    }
    result = 0;
    goto LABEL_67;
  }
  result = 0;
  if ( a2 == 8 )
  {
    if ( *(_QWORD *)a1 != 0x6C656C6C61726170LL )
      goto LABEL_7;
    result = 3;
LABEL_30:
    v6 = 1;
    v7 = a2 != 18;
    goto LABEL_31;
  }
LABEL_19:
  if ( v4 )
  {
    if ( a2 == 4 )
    {
      if ( *(_DWORD *)a1 == 1684892019 )
      {
        result = 5;
        goto LABEL_30;
      }
      if ( *(_DWORD *)a1 == 1684957547 )
      {
        result = 6;
        goto LABEL_30;
      }
      if ( *(_DWORD *)a1 == 1751347809 )
      {
        result = 7;
        goto LABEL_30;
      }
      if ( *(_DWORD *)a1 == 1684957547 )
      {
        result = 8;
        goto LABEL_30;
      }
      goto LABEL_49;
    }
  }
  else if ( *(_WORD *)a1 == 28518 && *(_BYTE *)(a1 + 2) == 114 )
  {
    result = 4;
    goto LABEL_30;
  }
  if ( a2 == 10 )
  {
    if ( *(_QWORD *)a1 == 0x6E5F656369766564LL && *(_WORD *)(a1 + 8) == 28021 )
    {
      result = 9;
      goto LABEL_30;
    }
    goto LABEL_38;
  }
  if ( a2 == 4 )
  {
LABEL_49:
    if ( *(_DWORD *)a1 == 1751347809 )
    {
      result = 10;
      goto LABEL_30;
    }
    goto LABEL_38;
  }
LABEL_67:
  if ( a2 == 9 )
  {
    if ( *(_QWORD *)a1 == 0x6F69736E65747865LL && *(_BYTE *)(a1 + 8) == 110 )
    {
      result = 12;
      goto LABEL_30;
    }
    if ( *(_QWORD *)a1 == 0x6F697469646E6F63LL && *(_BYTE *)(a1 + 8) == 110 )
    {
      result = 13;
      goto LABEL_30;
    }
    goto LABEL_39;
  }
LABEL_38:
  if ( v3 )
  {
LABEL_39:
    if ( !v4 )
    {
      if ( *(_WORD *)a1 == 29545 && *(_BYTE *)(a1 + 2) == 97 )
      {
        result = 15;
        goto LABEL_9;
      }
      if ( *(_WORD *)a1 == 29545 && *(_BYTE *)(a1 + 2) == 97 )
      {
        result = 16;
        goto LABEL_9;
      }
    }
    goto LABEL_42;
  }
LABEL_7:
  v6 = a2 != 15;
  if ( *(_QWORD *)a1 == 0x6863746170736964LL )
  {
    result = 14;
LABEL_9:
    v6 = 1;
    goto LABEL_10;
  }
LABEL_43:
  if ( v6 )
  {
    v7 = a2 != 18;
    if ( a2 == 21 )
    {
      if ( *(_QWORD *)a1 ^ 0x5F64656966696E75LL | *(_QWORD *)(a1 + 8) ^ 0x6D5F646572616873LL
        || *(_DWORD *)(a1 + 16) != 1919905125
        || *(_BYTE *)(a1 + 20) != 121 )
      {
        v6 = 0;
        goto LABEL_62;
      }
      result = 18;
LABEL_10:
      if ( a2 == 24 )
      {
        if ( v6 )
          return result;
        goto LABEL_12;
      }
LABEL_62:
      if ( !v6 )
        return 0;
      return result;
    }
    v6 = 0;
LABEL_31:
    if ( !v7 && !v6 )
    {
      if ( *(_QWORD *)a1 ^ 0x5F63696D616E7964LL | *(_QWORD *)(a1 + 8) ^ 0x6F7461636F6C6C61LL
        || *(_WORD *)(a1 + 16) != 29554 )
      {
        return 0;
      }
      return 20;
    }
    goto LABEL_10;
  }
  if ( *(_QWORD *)a1 == 0x5F64656966696E75LL && *(_DWORD *)(a1 + 8) == 1919181921 && *(_WORD *)(a1 + 12) == 29541 )
  {
    v6 = 1;
    result = 17;
    if ( *(_BYTE *)(a1 + 14) == 115 )
      goto LABEL_10;
  }
  if ( *(_QWORD *)a1 == 0x5F65737265766572LL
    && *(_DWORD *)(a1 + 8) == 1818650223
    && *(_WORD *)(a1 + 12) == 24943
    && *(_BYTE *)(a1 + 14) == 100 )
  {
    return 19;
  }
  result = 0;
  if ( a2 == 24 )
  {
LABEL_12:
    if ( *(_QWORD *)a1 ^ 0x645F63696D6F7461LL | *(_QWORD *)(a1 + 8) ^ 0x6D5F746C75616665LL
      || *(_QWORD *)(a1 + 16) != 0x726564726F5F6D65LL )
    {
      return 0;
    }
    return 21;
  }
  return result;
}
