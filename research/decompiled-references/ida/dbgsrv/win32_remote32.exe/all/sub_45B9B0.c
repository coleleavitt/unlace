/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B9B0
// Address: 0x0045B9B0

//----- (0045B9B0) --------------------------------------------------------
void __stdcall sub_45B9B0(_DWORD *a1, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  bool v6; // zf
  int v7; // ecx
  _DWORD *v8; // eax
  void *v9; // ecx
  void *v10; // [esp-4h] [ebp-20h]
  _DWORD *v11; // [esp+24h] [ebp+8h]

  if ( a1 )
  {
    switch ( a2 )
    {
      case 1:
      case 8:
      case 11:
        v3 = a1[4] & 0xFFFFFFF;
        if ( v3 != 1 && v3 != 11 && v3 != 8 )
          goto LABEL_17;
        goto LABEL_6;
      case 2:
      case 4:
        v4 = a1[4] & 0xFFFFFFF;
        if ( v4 == 2 )
          goto LABEL_6;
        if ( v4 != 4 )
          goto LABEL_17;
        a1[4] = a2;
        return;
      case 3:
      case 9:
      case 10:
        v5 = a1[4] & 0xFFFFFFF;
        if ( v5 == 3 || v5 == 9 )
        {
LABEL_6:
          a1[4] = a2;
        }
        else if ( v5 == 10 )
        {
          a1[4] = a2;
        }
        else
        {
LABEL_17:
          v7 = a1[4] & 0xFFFFFFF;
          switch ( v7 )
          {
            case 1:
            case 8:
            case 11:
              if ( v7 != 1 && v7 != 11 && v7 != 8 )
              {
                if ( byte_4B70F0 )
                  __debugbreak();
                sub_4533F0(3295);
              }
              goto LABEL_21;
            case 3:
            case 9:
            case 10:
              if ( v7 != 3 && v7 != 9 && v7 != 10 )
              {
                if ( byte_4B70F0 )
                  __debugbreak();
                sub_4533F0(3297);
              }
LABEL_21:
              if ( a1[5] )
              {
                v10 = (void *)a1[5];
                a1[6] = 0;
                sub_453A20(v10);
                a1[5] = 0;
                a1[7] = 0;
              }
              break;
            case 5:
              sub_40CCF0(a1);
              break;
            case 7:
              v8 = sub_410C10(a1);
              v11 = v8;
              v9 = (void *)v8[3];
              if ( v9 )
              {
                v8[4] = 0;
                sub_453A20(v9);
                v11[3] = 0;
                v11[5] = 0;
              }
              break;
            default:
              break;
          }
          a1[4] = 0;
          if ( a2 )
          {
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
                a1[5] = -1;
                a1[6] = -1;
                break;
              case 7:
                a1[8] = 0;
                a1[9] = 0;
                a1[10] = 0;
                break;
              default:
                return;
            }
          }
        }
        break;
      case 5:
        v6 = (a1[4] & 0xFFFFFFF) == 5;
        goto LABEL_16;
      case 7:
        v6 = (a1[4] & 0xFFFFFFF) == 7;
LABEL_16:
        if ( !v6 )
          goto LABEL_17;
        return;
      default:
        goto LABEL_17;
    }
  }
}
// 4B70F0: using guessed type char byte_4B70F0;
