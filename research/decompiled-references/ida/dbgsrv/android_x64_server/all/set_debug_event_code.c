/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_debug_event_code
// Address: 0x00000000000B57A0

//----- (00000000000B57A0) ----------------------------------------------------
void __fastcall set_debug_event_code(__int64 a1, int a2)
{
  unsigned int v2; // eax
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( a1 )
  {
    switch ( a2 )
    {
      case 1:
      case 8:
      case 11:
        v2 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( v2 <= 0xB )
        {
          v3 = 2306;
          if ( _bittest(&v3, v2) )
            goto LABEL_11;
        }
        goto LABEL_17;
      case 2:
      case 4:
        v6 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( v6 == 4 || v6 == 2 )
          goto LABEL_11;
        goto LABEL_17;
      case 3:
      case 9:
      case 10:
        v4 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( v4 > 0xA )
          goto LABEL_17;
        v5 = 1544;
        if ( !_bittest(&v5, v4) )
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
        switch ( a2 )
        {
          case 1:
          case 3:
          case 8:
          case 9:
          case 10:
          case 11:
            *(_OWORD *)(a1 + 24) = 0;
            *(_QWORD *)(a1 + 40) = 0;
            break;
          case 5:
            *(_OWORD *)(a1 + 24) = -1;
            break;
          case 7:
            *(_OWORD *)(a1 + 40) = 0;
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
