char __fastcall sub_1075460(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // al
  char v6; // cl
  bool v7; // r9
  char result; // al
  char v9; // r10

  v5 = a3 != 13;
  switch ( a3 )
  {
    case 7LL:
      if ( *(_DWORD *)a2 == 1702326128 && *(_WORD *)(a2 + 4) == 28786 && *(_BYTE *)(a2 + 6) == 99 )
      {
        v6 = 1;
        a5 = 1;
      }
      else if ( *(_DWORD *)a2 == 1769237601 && *(_WORD *)(a2 + 4) == 25974 && *(_BYTE *)(a2 + 6) == 99 )
      {
        a5 = a1[556];
        v6 = 1;
      }
      else
      {
        v6 = 0;
      }
      v7 = 1;
      break;
    case 3LL:
      if ( *(_WORD *)a2 == 29558 && *(_BYTE *)(a2 + 2) == 120 )
      {
        a5 = a1[559];
        v7 = 1;
        v6 = 1;
      }
      else
      {
        v7 = 1;
        v6 = 0;
      }
      break;
    case 13LL:
      if ( *(_QWORD *)a2 == 0x762D387265776F70LL && *(_DWORD *)(a2 + 8) == 1869898597 && *(_BYTE *)(a2 + 12) == 114 )
      {
        a5 = a1[560];
        v6 = 1;
        v7 = 1;
      }
      else
      {
        v7 = 1;
        v6 = 0;
      }
LABEL_10:
      if ( !(v7 | (unsigned __int8)v6) )
      {
        if ( *(_QWORD *)a2 == 0x38323174616F6C66LL )
        {
          v6 = 1;
          a5 = a1[278];
          goto LABEL_15;
        }
        goto LABEL_13;
      }
      goto LABEL_11;
    default:
      v7 = a3 != 8;
      if ( a3 == 6 )
      {
        if ( *(_DWORD *)a2 == 1887007331 && *(_WORD *)(a2 + 4) == 28532 )
        {
          a5 = a1[561];
          v6 = 1;
        }
        else
        {
          v6 = 0;
        }
LABEL_11:
        v5 |= v6;
        goto LABEL_12;
      }
      v6 = 0;
      break;
  }
  if ( a3 != 3 || v6 )
    goto LABEL_10;
  if ( *(_WORD *)a2 == 29800 && *(_BYTE *)(a2 + 2) == 109 )
  {
    a5 = a1[562];
    v6 = 1;
    goto LABEL_13;
  }
LABEL_12:
  if ( v5 )
  {
LABEL_13:
    if ( (unsigned __int8)v6 | (a3 != 14) )
      goto LABEL_14;
    v9 = a1[567];
    if ( *(_QWORD *)a2 != 0x2D30317265776F70LL || *(_DWORD *)(a2 + 8) != 1952671094 || *(_WORD *)(a2 + 12) != 29295 )
      goto LABEL_15;
    return v9;
  }
  v9 = a1[563];
  if ( *(_QWORD *)a2 == 0x762D397265776F70LL && *(_DWORD *)(a2 + 8) == 1869898597 && *(_BYTE *)(a2 + 12) == 114 )
    return v9;
LABEL_14:
  if ( !((unsigned __int8)v6 | (a3 != 17)) )
  {
    if ( !(*(_QWORD *)a2 ^ 0x6974616C65726370LL | *(_QWORD *)(a2 + 8) ^ 0x706F6D656D2D6576LL)
      && *(_BYTE *)(a2 + 16) == 115 )
    {
      return a1[568];
    }
    goto LABEL_29;
  }
LABEL_15:
  if ( v6 )
    return a5;
  if ( a3 == 3 )
  {
    if ( *(_WORD *)a2 == 28787 && *(_BYTE *)(a2 + 2) == 101 )
      return a1[564];
    a5 = a1[557];
    if ( *(_WORD *)a2 == 28013 && *(_BYTE *)(a2 + 2) == 97 )
      return a5;
    result = 0;
    goto LABEL_20;
  }
LABEL_29:
  result = v6 | (a3 != 11);
  if ( result )
  {
    result = v6 | (a3 != 16);
    if ( result )
    {
      result = v6;
      if ( v6 )
        return a5;
      goto LABEL_20;
    }
    a5 = a1[569];
    if ( *(_QWORD *)a2 ^ 0x64726F7764617571LL | *(_QWORD *)(a2 + 8) ^ 0x7363696D6F74612DLL )
      return result;
    return a5;
  }
  a5 = a1[558];
  if ( *(_QWORD *)a2 == 0x746F72702D706F72LL && *(_WORD *)(a2 + 8) == 25445 && *(_BYTE *)(a2 + 10) == 116 )
    return a5;
LABEL_20:
  if ( !v7 )
  {
    result = 0;
    if ( *(_QWORD *)a2 == 0x6C6C6163676E6F6CLL )
      return a1[570];
  }
  return result;
}

