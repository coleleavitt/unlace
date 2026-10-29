/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E3C0
// Address: 0x0006E3C0

//----- (0006E3C0) --------------------------------------------------------
void __fastcall sub_6E3C0(_DWORD *a1, int a2)
{
  int v2; // r6
  int v5; // r3
  bool v6; // zf
  int v7; // r2
  int v8; // r3
  unsigned int v9; // r3
  bool v10; // cc

  if ( a1 )
  {
    v2 = a2 - 1;
    switch ( a2 )
    {
      case 1:
      case 8:
      case 11:
        v5 = a1[4] & 0xFFFFFFF;
        v6 = v5 == 11;
        if ( v5 != 11 )
          v6 = v5 == 1;
        v7 = v6;
        if ( v5 == 8 )
          v8 = v7 | 1;
        else
          v8 = v7;
        if ( !v8 )
          goto LABEL_4;
        goto LABEL_19;
      case 2:
      case 4:
        if ( (((a1[4] & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
          goto LABEL_4;
        goto LABEL_19;
      case 3:
      case 9:
      case 10:
        v9 = a1[4] & 0xFFFFFFF;
        v10 = v9 > 3;
        if ( v9 != 3 )
          v10 = v9 - 9 > 1;
        if ( v10 )
          goto LABEL_4;
LABEL_19:
        a1[4] = a2;
        return;
      case 5:
        if ( (a1[4] & 0xFFFFFFF) == 5 )
          return;
        goto LABEL_7;
      case 7:
        if ( (a1[4] & 0xFFFFFFF) == 7 )
          return;
LABEL_7:
        sub_6E318(a1);
LABEL_8:
        a1[4] = a2;
        switch ( v2 )
        {
          case 0:
          case 2:
          case 7:
          case 8:
          case 9:
          case 10:
            a1[5] = 0;
            a1[6] = 0;
            a1[7] = 0;
            break;
          case 4:
            a1[5] = -1;
            a1[6] = -1;
            break;
          case 6:
            a1[8] = 0;
            a1[9] = 0;
            a1[10] = 0;
            break;
          default:
            return;
        }
        break;
      default:
LABEL_4:
        sub_6E318(a1);
        if ( !a2 )
          return;
        goto LABEL_8;
    }
  }
}
