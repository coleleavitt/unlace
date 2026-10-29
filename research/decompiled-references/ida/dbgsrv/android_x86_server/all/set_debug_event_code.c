/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_debug_event_code
// Address: 0x000A1B20

//----- (000A1B20) --------------------------------------------------------
void __cdecl set_debug_event_code(_DWORD *a1, int a2)
{
  unsigned int v2; // eax
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax

  if ( a1 )
  {
    switch ( a2 )
    {
      case 1:
      case 8:
      case 11:
        v2 = a1[4] & 0xFFFFFFF;
        if ( v2 <= 0xB )
        {
          v3 = 2306;
          if ( _bittest(&v3, v2) )
            goto LABEL_11;
        }
        goto LABEL_17;
      case 2:
      case 4:
        v6 = a1[4] & 0xFFFFFFF;
        if ( v6 == 4 || v6 == 2 )
          goto LABEL_11;
        goto LABEL_17;
      case 3:
      case 9:
      case 10:
        v4 = a1[4] & 0xFFFFFFF;
        if ( v4 > 0xA )
          goto LABEL_17;
        v5 = 1544;
        if ( !_bittest(&v5, v4) )
          goto LABEL_17;
LABEL_11:
        a1[4] = a2;
        return;
      case 5:
        if ( (a1[4] & 0xFFFFFFF) == 5 )
          return;
        goto LABEL_17;
      case 7:
        if ( (a1[4] & 0xFFFFFFF) == 7 )
          return;
LABEL_17:
        free_debug_event(a1);
        v7 = a2;
LABEL_18:
        a1[4] = v7;
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
        break;
      default:
        free_debug_event(a1);
        v7 = a2;
        if ( !a2 )
          return;
        goto LABEL_18;
    }
  }
}
