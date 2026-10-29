/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_debug_event_code
// Address: 0x00074710

//----- (00074710) --------------------------------------------------------
int __fastcall set_debug_event_code(int result, int a2)
{
  _DWORD *v3; // r4
  int v4; // r6
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1

  if ( result )
  {
    v3 = (_DWORD *)result;
    v4 = a2 - 1;
    switch ( a2 )
    {
      case 1:
      case 8:
      case 11:
        v5 = *(_DWORD *)(result + 16) & 0xFFFFFFF;
        if ( v5 > 0xB )
          goto LABEL_17;
        v6 = 1 << v5;
        result = 2306;
        if ( (v6 & 0x902) == 0 )
          goto LABEL_17;
        v3[4] = a2;
        break;
      case 2:
      case 4:
        result = *(_DWORD *)(result + 16) & 0xFFFFFFF;
        if ( result != 4 && result != 2 )
          goto LABEL_17;
        v3[4] = a2;
        break;
      case 3:
      case 9:
      case 10:
        v7 = *(_DWORD *)(result + 16) & 0xFFFFFFF;
        if ( v7 > 0xA )
          goto LABEL_17;
        v8 = 1 << v7;
        result = 1544;
        if ( (v8 & 0x608) == 0 )
          goto LABEL_17;
        v3[4] = a2;
        break;
      case 5:
        result = -268435456;
        if ( (v3[4] & 0xFFFFFFF) != 5 )
          goto LABEL_17;
        break;
      case 7:
        result = -268435456;
        if ( (v3[4] & 0xFFFFFFF) != 7 )
        {
LABEL_17:
          result = free_debug_event(v3);
          goto LABEL_18;
        }
        break;
      default:
        result = free_debug_event((_DWORD *)result);
        if ( a2 )
        {
LABEL_18:
          v3[4] = a2;
          switch ( v4 )
          {
            case 0:
            case 2:
            case 7:
            case 8:
            case 9:
            case 10:
              v3[5] = 0;
              v3[6] = 0;
              v3[7] = 0;
              result = 0;
              break;
            case 4:
              v3[5] = -1;
              v3[6] = -1;
              result = -1;
              break;
            case 6:
              v3[8] = 0;
              v3[9] = 0;
              v3[10] = 0;
              result = 0;
              break;
            default:
              return result;
          }
        }
        break;
    }
  }
  return result;
}
