/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_340D0
// Address: 0x000340D0

//----- (000340D0) --------------------------------------------------------
char __cdecl sub_340D0(int a1)
{
  __int16 v1; // di
  char result; // al
  __int16 v3; // cx
  int v4; // eax
  int v5; // [esp+8h] [ebp-14h]

  v1 = *(_WORD *)(a1 + 402);
  if ( *(_BYTE *)(a1 + 476) )
  {
    result = 1;
    switch ( v1 )
    {
      case 15872:
        v3 = __ROL2__(*(_WORD *)(a1 + 400), 8);
        v4 = 2;
        if ( (v3 & 0xFFFE) != 2 )
          return 1;
        break;
      case 1536:
        v3 = __ROL2__(*(_WORD *)(a1 + 400), 8);
        v4 = 1;
        if ( (v3 & 0xFFFE) != 2 )
          return 1;
        break;
      case 768:
        v3 = __ROL2__(*(_WORD *)(a1 + 400), 8);
        v4 = 0;
        if ( (v3 & 0xFFFE) != 2 )
          return 1;
        break;
      default:
        return result;
    }
    v5 = v4;
    *(_WORD *)(a1 + 402) = __ROL2__(v1, 8);
    *(_WORD *)(a1 + 400) = v3;
    if ( (*(unsigned __int8 (__cdecl **)(int, int, _DWORD))(a1 + 380))(a1, 3, *(unsigned __int8 *)(a1 + 389)) )
    {
      *(_BYTE *)(a1 + 476) = 0;
      *(_BYTE *)(a1 + 478) = v5 == 2;
      result = 1;
      if ( v5 == 2 )
        return result;
      goto LABEL_17;
    }
    return 0;
  }
  else
  {
    result = 1;
    if ( v1 == 62 )
    {
      if ( (*(_WORD *)(a1 + 400) & 0xFFFE) == 2 )
        *(_BYTE *)(a1 + 478) = 1;
    }
    else if ( (v1 == 6 || v1 == 3) && (*(_WORD *)(a1 + 400) & 0xFFFE) == 2 )
    {
      *(_BYTE *)(a1 + 478) = 0;
LABEL_17:
      *(_BYTE *)(a1 + 477) = 0;
      return 1;
    }
  }
  return result;
}
