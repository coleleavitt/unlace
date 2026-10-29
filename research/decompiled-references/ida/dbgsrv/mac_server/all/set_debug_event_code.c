/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_debug_event_code
// Address: 0x0000000100073730

//----- (0000000100073730) ----------------------------------------------------
__int64 __fastcall set_debug_event_code(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // r14

  if ( a1 )
  {
    switch ( a2 )
    {
      case 1:
      case 8:
      case 11:
        result = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (unsigned int)result <= 0xB )
        {
          v3 = 2306;
          if ( _bittest(&v3, result) )
            goto LABEL_11;
        }
        goto LABEL_17;
      case 2:
      case 4:
        result = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (_DWORD)result == 4 || (_DWORD)result == 2 )
          goto LABEL_11;
        goto LABEL_17;
      case 3:
      case 9:
      case 10:
        result = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (unsigned int)result > 0xA )
          goto LABEL_17;
        v4 = 1544;
        if ( !_bittest(&v4, result) )
          goto LABEL_17;
LABEL_11:
        *(_DWORD *)(a1 + 20) = a2;
        return result;
      case 5:
        result = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (_DWORD)result != 5 )
          goto LABEL_17;
        return result;
      case 7:
        result = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (_DWORD)result == 7 )
          return result;
LABEL_17:
        v5 = a1;
        result = free_debug_event(a1);
        goto LABEL_18;
      default:
        v5 = a1;
        result = free_debug_event(a1);
        if ( !a2 )
          return result;
LABEL_18:
        *(_DWORD *)(v5 + 20) = a2;
        switch ( a2 )
        {
          case 1:
          case 3:
          case 8:
          case 9:
          case 10:
          case 11:
            *(_OWORD *)(v5 + 24) = 0;
            *(_QWORD *)(v5 + 40) = 0;
            break;
          case 5:
            *(_OWORD *)(v5 + 24) = -1;
            break;
          case 7:
            *(_OWORD *)(v5 + 40) = 0;
            *(_QWORD *)(v5 + 56) = 0;
            break;
          default:
            return result;
        }
        break;
    }
  }
  return result;
}
