/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C468
// Address: 0x0002C468

//----- (0002C468) --------------------------------------------------------
int __fastcall sub_2C468(int a1)
{
  int v2; // r3
  unsigned int v3; // r1
  _WORD *v4; // r0
  unsigned int v5; // r3
  int v6; // r7
  int v7; // r1
  int result; // r0
  int v9; // r0
  char v10; // r1

  v2 = *(unsigned __int16 *)(a1 + 406);
  v3 = (unsigned int)(16777472 * v2) >> 16;
  v4 = (_WORD *)(a1 + 404);
  if ( *(_BYTE *)(a1 + 480) )
  {
    switch ( v2 )
    {
      case 15872:
        v5 = (((unsigned __int16)*v4 << 24) + (((unsigned __int16)*v4 << 8) & 0xFF0000u)) >> 16;
        v6 = 2;
        if ( (v5 & 0xFFFE) != 2 )
          return 1;
        break;
      case 1536:
        v5 = (((unsigned __int16)*v4 << 24) + (((unsigned __int16)*v4 << 8) & 0xFF0000u)) >> 16;
        v6 = 1;
        if ( (v5 & 0xFFFE) != 2 )
          return 1;
        break;
      case 768:
        v5 = (((unsigned __int16)*v4 << 24) + (((unsigned __int16)*v4 << 8) & 0xFF0000u)) >> 16;
        v6 = 0;
        if ( (v5 & 0xFFFE) != 2 )
          return 1;
        break;
      default:
        return 1;
    }
    *(_WORD *)(a1 + 406) = v3;
    *v4 = v5;
    v7 = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 384))(a1, 3, *(unsigned __int8 *)(a1 + 393));
    result = 0;
    if ( !v7 )
      return result;
    *(_BYTE *)(a1 + 480) = 0;
    *(_BYTE *)(a1 + 482) = v6 == 2;
    if ( v6 != 2 )
    {
LABEL_17:
      v9 = 481;
      v10 = 0;
LABEL_20:
      *(_BYTE *)(a1 + v9) = v10;
    }
  }
  else
  {
    if ( v2 != 62 )
    {
      if ( v2 != 6 && v2 != 3 || (*v4 & 0xFFFE) != 2 )
        return 1;
      *(_BYTE *)(a1 + 482) = 0;
      goto LABEL_17;
    }
    if ( (*v4 & 0xFFFE) == 2 )
    {
      v9 = 482;
      v10 = 1;
      goto LABEL_20;
    }
  }
  return 1;
}
