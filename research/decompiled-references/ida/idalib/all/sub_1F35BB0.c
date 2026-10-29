unsigned __int64 __fastcall sub_1F35BB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx

  result = *(_BYTE *)(a1 + 28) & 0x7F;
  switch ( (char)result )
  {
    case 0:
      result = *(_QWORD *)(a1 + 72);
      if ( (result & 1) != 0 || (result & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        v10 = result & 0xFFFFFFFFFFFFFFFELL;
        if ( (result & 0xFFFFFFFFFFFFFFFELL) != 0 && (result & 4) != 0 && (result &= 0xFFFFFFFFFFFFFFF8LL) != 0 )
          *(_QWORD *)(result + 16) = a2;
        else
          v10 = a2 & 0xFFFFFFFFFFFFFFFALL;
        *(_QWORD *)(a1 + 72) = v10 | 1;
      }
      else
      {
        result = sub_6E2500((_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL), a2, a3, a4, a5, a6) | 1;
        *(_QWORD *)(a1 + 72) = result;
      }
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 21:
    case 22:
    case 23:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 55:
    case 56:
    case 57:
    case 63:
    case 67:
    case 68:
    case 73:
    case 74:
    case 75:
    case 76:
      return result;
    case 19:
    case 20:
      result = *(_QWORD *)(a1 + 88);
      if ( (result & 1) != 0 || (result & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        v8 = result & 0xFFFFFFFFFFFFFFFELL;
        if ( (result & 0xFFFFFFFFFFFFFFFELL) != 0 && (result & 4) != 0 && (result &= 0xFFFFFFFFFFFFFFF8LL) != 0 )
          *(_QWORD *)(result + 16) = a2;
        else
          v8 = a2 & 0xFFFFFFFFFFFFFFFALL;
        *(_QWORD *)(a1 + 88) = v8 | 1;
      }
      else
      {
        result = sub_6E2500((_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL), a2, a3, a4, a5, a6) | 1;
        *(_QWORD *)(a1 + 88) = result;
      }
      break;
    case 24:
      result = *(_QWORD *)(a1 + 80);
      if ( (result & 1) != 0 || (result & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        v7 = result & 0xFFFFFFFFFFFFFFFELL;
        if ( (result & 0xFFFFFFFFFFFFFFFELL) != 0 && (result & 4) != 0 && (result &= 0xFFFFFFFFFFFFFFF8LL) != 0 )
          *(_QWORD *)(result + 16) = a2;
        else
          v7 = a2 & 0xFFFFFFFFFFFFFFFALL;
        *(_QWORD *)(a1 + 80) = v7 | 1;
      }
      else
      {
        result = sub_6E2500((_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL), a2, a3, a4, a5, a6) | 1;
        *(_QWORD *)(a1 + 80) = result;
      }
      break;
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
      result = sub_1F33850((unsigned __int64 *)(a1 + 104), a2, a3, a4, a5, a6);
      break;
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
      result = sub_1F338B0((unsigned __int64 *)(a1 + 72), a2, a3, a4, a5, a6);
      break;
    case 53:
    case 54:
    case 77:
      result = *(_QWORD *)(a1 + 48);
      if ( (result & 1) != 0 || (result & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        v9 = result & 0xFFFFFFFFFFFFFFFELL;
        if ( (result & 0xFFFFFFFFFFFFFFFELL) != 0 && (result & 4) != 0 && (result &= 0xFFFFFFFFFFFFFFF8LL) != 0 )
          *(_QWORD *)(result + 16) = a2;
        else
          v9 = a2 & 0xFFFFFFFFFFFFFFFALL;
        *(_QWORD *)(a1 + 48) = v9 | 1;
      }
      else
      {
        result = sub_6E2500((_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL), a2, a3, a4, a5, a6) | 1;
        *(_QWORD *)(a1 + 48) = result;
      }
      break;
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
      result = sub_1F33910((unsigned __int64 *)(a1 + 96), a2, a3, a4, a5, a6);
      break;
    case 64:
    case 65:
    case 66:
      result = sub_1F33970((unsigned __int64 *)(a1 + 64), a2, a3, a4, a5, a6);
      break;
    case 69:
    case 70:
    case 71:
    case 72:
      result = sub_1F339D0((unsigned __int64 *)(a1 + 64), a2, a3, a4, a5, a6);
      break;
    default:
      result = *(_BYTE *)(a1 + 28) & 0x7F;
      break;
  }
  return result;
}
