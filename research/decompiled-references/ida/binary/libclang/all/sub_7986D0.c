unsigned __int8 __fastcall sub_7986D0(__int64 a1)
{
  unsigned __int8 result; // al
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdi

  result = 0;
  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned __int8)v2 <= 0x3Cu )
  {
    v3 = 0x1F00003F03FF01FFLL;
    result = _bittest64(&v3, v2);
    if ( result )
    {
      switch ( (char)v2 )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
          v4 = a1 + 40;
          goto LABEL_5;
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 60:
          v4 = a1 + 64;
          goto LABEL_5;
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
          v4 = a1 + 48;
          goto LABEL_5;
        case 24:
          v4 = a1 + 56;
          goto LABEL_5;
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
          v4 = a1 + 72;
LABEL_5:
          result = (*(_BYTE *)(v4 + 8) & 0x7F) == 22 || (*(_BYTE *)(v4 + 8) & 0x7F) == 0;
          break;
        default:
          return result;
      }
    }
  }
  return result;
}

