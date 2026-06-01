unsigned __int64 __fastcall set_debug_event_code(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx

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
          if ( _bittest64(&v3, result) )
            goto LABEL_13;
        }
        goto LABEL_5;
      case 2:
      case 4:
        result = ((*(_DWORD *)(a1 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD;
        if ( (((*(_DWORD *)(a1 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
          goto LABEL_13;
        goto LABEL_5;
      case 3:
      case 9:
      case 10:
        result = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (unsigned int)(result - 9) <= 1 || (_DWORD)result == 3 )
        {
LABEL_13:
          *(_DWORD *)(a1 + 20) = a2;
        }
        else
        {
LABEL_5:
          result = free_debug_event(a1);
LABEL_6:
          *(_DWORD *)(a1 + 20) = a2;
          switch ( a2 )
          {
            case 1:
            case 3:
            case 8:
            case 9:
            case 10:
            case 11:
              *(_QWORD *)(a1 + 24) = 0;
              *(_OWORD *)(a1 + 32) = 0;
              break;
            case 5:
              goto LABEL_16;
            case 7:
              goto LABEL_19;
            default:
              return result;
          }
        }
        break;
      case 5:
        result = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (_DWORD)result != 5 )
        {
          result = free_debug_event(a1);
          *(_DWORD *)(a1 + 20) = 5;
LABEL_16:
          *(_OWORD *)(a1 + 24) = -1;
        }
        return result;
      case 7:
        result = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (_DWORD)result != 7 )
        {
          result = free_debug_event(a1);
          *(_DWORD *)(a1 + 20) = 7;
LABEL_19:
          *(_QWORD *)(a1 + 40) = 0;
          *(_OWORD *)(a1 + 48) = 0;
        }
        return result;
      default:
        result = free_debug_event(a1);
        if ( !a2 )
          return result;
        goto LABEL_6;
    }
  }
  return result;
}
