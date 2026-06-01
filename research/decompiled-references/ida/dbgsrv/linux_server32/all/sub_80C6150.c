/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C6150
// Address: 0x080C6150

//----- (080C6150) --------------------------------------------------------
void __cdecl sub_80C6150(_DWORD *a1, int a2)
{
  int v2; // eax
  unsigned int v3; // eax
  int v4; // edx

  if ( a1 )
  {
    switch ( a2 )
    {
      case 1:
      case 8:
      case 11:
        v3 = a1[4] & 0xFFFFFFF;
        if ( v3 <= 0xB )
        {
          v4 = 2306;
          if ( _bittest(&v4, v3) )
            goto LABEL_4;
        }
        goto LABEL_8;
      case 2:
      case 4:
        if ( (((a1[4] & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
          goto LABEL_4;
        goto LABEL_8;
      case 3:
      case 9:
      case 10:
        v2 = a1[4] & 0xFFFFFFF;
        if ( (unsigned int)(v2 - 9) <= 1 || v2 == 3 )
        {
LABEL_4:
          a1[4] = a2;
        }
        else
        {
LABEL_8:
          sub_80C6090(a1);
LABEL_9:
          a1[4] = a2;
          switch ( a2 )
          {
            case 1:
            case 3:
            case 8:
            case 9:
            case 10:
            case 11:
              a1[5] = 0;
              a1[6] = 0;
              a1[7] = 0;
              break;
            case 5:
              goto LABEL_16;
            case 7:
              goto LABEL_19;
            default:
              return;
          }
        }
        break;
      case 5:
        if ( (a1[4] & 0xFFFFFFF) != 5 )
        {
          sub_80C6090(a1);
          a1[4] = 5;
LABEL_16:
          a1[5] = -1;
          a1[6] = -1;
        }
        return;
      case 7:
        if ( (a1[4] & 0xFFFFFFF) != 7 )
        {
          sub_80C6090(a1);
          a1[4] = 7;
LABEL_19:
          a1[8] = 0;
          a1[9] = 0;
          a1[10] = 0;
        }
        return;
      default:
        sub_80C6090(a1);
        if ( !a2 )
          return;
        goto LABEL_9;
    }
  }
}
