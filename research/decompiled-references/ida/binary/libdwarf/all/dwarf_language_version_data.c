__int64 __fastcall dwarf_language_version_data(unsigned __int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v5; // rax
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  v6[0] = 0;
  if ( a1 > 0xFFFE || (unsigned int)dwarf_get_LNAME_name(a1, v6) == -1 )
    return 0xFFFFFFFFLL;
  if ( a1 <= 9 )
  {
    if ( a1 )
    {
      v5 = 1LL << a1;
      if ( ((1LL << a1) & 0x1C4) != 0 )
      {
LABEL_6:
        *a2 = 0;
        *a3 = 0;
      }
      else if ( (v5 & 0x222) != 0 )
      {
LABEL_16:
        *a2 = 1;
        *a3 = "YYYY";
      }
      else
      {
        if ( (v5 & 0x18) == 0 )
          return 0xFFFFFFFFLL;
LABEL_13:
        *a2 = 0;
        *a3 = "YYYYMM";
      }
      return 0;
    }
  }
  else if ( a1 - 10 <= 0x25 )
  {
    switch ( a1 )
    {
      case 0xDuLL:
      case 0xFuLL:
      case 0x10uLL:
      case 0x16uLL:
        *a2 = 1;
        *a3 = 0;
        break;
      case 0x11uLL:
      case 0x12uLL:
      case 0x27uLL:
      case 0x2AuLL:
        goto LABEL_13;
      case 0x15uLL:
      case 0x2EuLL:
        goto LABEL_16;
      case 0x1AuLL:
      case 0x23uLL:
      case 0x24uLL:
        *a2 = 0;
        *a3 = "VVMM";
        break;
      case 0x20uLL:
      case 0x21uLL:
      case 0x26uLL:
      case 0x2BuLL:
      case 0x2CuLL:
      case 0x2DuLL:
      case 0x2FuLL:
        *a2 = 0;
        *a3 = "VVMMPP";
        break;
      case 0x22uLL:
        *a2 = 0;
        *a3 = "YYYY";
        break;
      case 0x25uLL:
        *a2 = 0;
        *a3 = "YYYYRR";
        break;
      default:
        goto LABEL_6;
    }
    return 0;
  }
  return 0xFFFFFFFFLL;
}

