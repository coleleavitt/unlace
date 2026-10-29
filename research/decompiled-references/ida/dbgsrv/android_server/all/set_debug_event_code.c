/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_debug_event_code
// Address: 0x00000000000B0BF4

//----- (00000000000B0BF4) ----------------------------------------------------
void __fastcall set_debug_event_code(__int64 a1, int a2)
{
  int v2; // w21
  int v5; // w8

  if ( a1 )
  {
    v2 = a2 - 1;
    switch ( a2 )
    {
      case 1:
      case 8:
      case 11:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFFu) <= 0xB && ((1 << *(_BYTE *)(a1 + 20)) & 0x902) != 0 )
          goto LABEL_11;
        goto LABEL_17;
      case 2:
      case 4:
        v5 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( v5 == 4 || v5 == 2 )
          goto LABEL_11;
        goto LABEL_17;
      case 3:
      case 9:
      case 10:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFFu) > 0xA || ((1 << *(_BYTE *)(a1 + 20)) & 0x608) == 0 )
          goto LABEL_17;
LABEL_11:
        *(_DWORD *)(a1 + 20) = a2;
        return;
      case 5:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 5 )
          return;
        goto LABEL_17;
      case 7:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 7 )
          return;
LABEL_17:
        free_debug_event(a1);
LABEL_18:
        *(_DWORD *)(a1 + 20) = a2;
        switch ( v2 )
        {
          case 0:
          case 2:
          case 7:
          case 8:
          case 9:
          case 10:
            *(_QWORD *)(a1 + 24) = 0;
            *(_QWORD *)(a1 + 32) = 0;
            *(_QWORD *)(a1 + 40) = 0;
            break;
          case 4:
            *(_QWORD *)(a1 + 24) = -1;
            *(_QWORD *)(a1 + 32) = -1;
            break;
          case 6:
            *(_QWORD *)(a1 + 40) = 0;
            *(_QWORD *)(a1 + 48) = 0;
            *(_QWORD *)(a1 + 56) = 0;
            break;
          default:
            return;
        }
        break;
      default:
        free_debug_event(a1);
        if ( !a2 )
          return;
        goto LABEL_18;
    }
  }
}
