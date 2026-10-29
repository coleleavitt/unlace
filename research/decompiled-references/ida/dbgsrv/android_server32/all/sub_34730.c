/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34730
// Address: 0x00034730

//----- (00034730) --------------------------------------------------------
const char *__fastcall sub_34730(int a1, __int64 a2)
{
  int v3; // r4
  int v4; // r0

  v3 = *(unsigned __int16 *)(a1 + 406);
  if ( *(_BYTE *)(a1 + 395) == 6 )
  {
    v4 = a2 - 1610612749;
    if ( __PAIR64__(
           ((unsigned int)(a2 - 1610612751) >= 0xFFFFFFFE) + ((unsigned __int64)(a2 - 1610612751) >> 32),
           (int)a2 - 1610612749) < 0x1F )
    {
      if ( 0x51557FFBu >> v4 << 31 )
        return off_D9610[v4];
    }
  }
  if ( a2 > 1879047668 )
  {
    if ( a2 <= 1879047924 )
    {
      if ( (unsigned __int64)(a2 - 1879047669) <= 0xB )
        __asm { ADD             PC, R0 }
    }
    else if ( a2 > 1879048175 )
    {
      if ( a2 > 2147483644 )
      {
        switch ( a2 )
        {
          case 0x7FFFFFFDLL:
            return "DT_AUXILIARY";
          case 0x7FFFFFFELL:
            return "DT_USED";
          case 0x7FFFFFFFLL:
            return "DT_FILTER";
        }
      }
      else if ( (unsigned __int64)(a2 - 1879048176) <= 0xF )
      {
        __asm { ADD             PC, R0 }
      }
    }
    else if ( (unsigned __int64)(a2 - 1879047925) <= 0xA )
    {
      __asm { ADD             PC, R0 }
    }
  }
  else
  {
    if ( (unsigned __int64)a2 <= 0x21 )
      __asm { MOV             PC, R6 }
    if ( a2 == 1879047424 )
      return "DT_VALRNGLO";
  }
  if ( v3 <= 39 )
  {
    if ( v3 == 8 )
    {
      if ( (unsigned __int64)(a2 - 1879048193) < 0x34 )
        return *(&off_D9690[(_DWORD)a2] - 1879048193);
    }
    else if ( v3 == 20 && a2 == 1879048192 )
    {
      return "DT_PPC_GOT";
    }
    return nullptr;
  }
  switch ( v3 )
  {
    case 40:
      goto LABEL_29;
    case 50:
      if ( (unsigned __int64)(a2 - 1610612736) <= 0x18 )
        __asm { ADD             PC, R4 }
      if ( a2 == 1879048192 )
        return "DT_IA_64_PLT_RESERVE";
      break;
    case 183:
LABEL_29:
      if ( (unsigned __int64)(a2 - 1610612751) < 4 )
        return *(&off_D9760[(_DWORD)a2] - 1610612751);
      break;
  }
  return nullptr;
}
// D9610: using guessed type char *off_D9610[31];
// D9690: using guessed type char *off_D9690[11];
// D9760: using guessed type char *off_D9760[4];
