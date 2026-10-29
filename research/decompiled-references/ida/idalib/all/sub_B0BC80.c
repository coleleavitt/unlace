__int64 __fastcall sub_B0BC80(__int64 a1, __int64 a2, int *a3)
{
  bool v3; // cl
  int v4; // r8d

  switch ( a2 )
  {
    case 13LL:
      if ( *(_QWORD *)a1 != 0x6D5F65746F6D6572LL
        || *(_DWORD *)(a1 + 8) != 1919905125
        || (v3 = 1, *(_BYTE *)(a1 + 12) != 121) )
      {
        v3 = 0;
      }
      v4 = 0;
      break;
    case 16LL:
      v4 = 1;
      v3 = (*(_QWORD *)a1 ^ 0x746F6D65725F6F6ELL | *(_QWORD *)(a1 + 8) ^ 0x79726F6D656D5F65LL) == 0;
      break;
    case 19LL:
      if ( *(_QWORD *)a1 ^ 0x6172675F656E6966LL | *(_QWORD *)(a1 + 8) ^ 0x6D656D5F64656E69LL
        || *(_WORD *)(a1 + 16) != 29295
        || (v3 = 1, v4 = 2, *(_BYTE *)(a1 + 18) != 121) )
      {
        v3 = 0;
        v4 = 0;
      }
      goto LABEL_10;
    case 22LL:
      if ( !(*(_QWORD *)a1 ^ 0x5F656E69665F6F6ELL | *(_QWORD *)(a1 + 8) ^ 0x5F64656E69617267LL)
        && *(_DWORD *)(a1 + 16) == 1869440365 )
      {
        v4 = 3;
        if ( *(_WORD *)(a1 + 20) == 31090 )
          goto LABEL_19;
      }
      return 0;
    default:
      v4 = 0;
      v3 = 0;
      break;
  }
  if ( v3 || a2 != 20 )
  {
LABEL_10:
    if ( a2 != 23 )
      goto LABEL_24;
    if ( v3 )
      goto LABEL_19;
    if ( !(*(_QWORD *)a1 ^ 0x726F6E67695F6F6ELL | *(_QWORD *)(a1 + 8) ^ 0x6D726F6E65645F65LL)
      && *(_DWORD *)(a1 + 16) == 1834970209
      && *(_WORD *)(a1 + 20) == 25711 )
    {
      v4 = 5;
      if ( *(_BYTE *)(a1 + 22) == 101 )
        goto LABEL_19;
    }
    return 0;
  }
  if ( !(*(_QWORD *)a1 ^ 0x645F65726F6E6769LL | *(_QWORD *)(a1 + 8) ^ 0x5F6C616D726F6E65LL)
    && *(_DWORD *)(a1 + 16) == 1701080941 )
  {
    v4 = 4;
    goto LABEL_19;
  }
LABEL_24:
  if ( v3 )
  {
LABEL_19:
    *a3 = v4;
    return 1;
  }
  return 0;
}
