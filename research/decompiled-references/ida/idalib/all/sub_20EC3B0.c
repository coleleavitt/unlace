bool __fastcall sub_20EC3B0(int a1, __int64 a2, int a3)
{
  bool result; // al

  switch ( a1 )
  {
    case 0:
      if ( (_DWORD)a2 == 5 )
        return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      if ( (_DWORD)a2 == 8 )
        return a3 > 0;
      return 0;
    case 1:
      return (_DWORD)a2 == 7 && a3 > 0;
    case 2:
      switch ( a2 )
      {
        case 0LL:
        case 17LL:
        case 43LL:
        case 61LL:
        case 63LL:
        case 64LL:
          return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
        case 62LL:
          result = (unsigned int)(a3 - 60) <= 0x7FFFFFC3;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 3:
      if ( (_DWORD)a2 == 43 )
        return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      if ( (int)a2 > 43 )
      {
        if ( (_DWORD)a2 == 61 )
          return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
        if ( (int)a2 < 61 )
        {
          return 0;
        }
        else
        {
          if ( (unsigned int)(a2 - 63) <= 1 )
            return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          return 0;
        }
      }
      else
      {
        if ( !(_DWORD)a2 || (_DWORD)a2 == 17 )
          return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
        return 0;
      }
    case 4:
      switch ( a2 )
      {
        case 1LL:
        case 2LL:
        case 42LL:
        case 86LL:
        case 87LL:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        case 14LL:
        case 84LL:
        case 92LL:
        case 108LL:
        case 115LL:
          return a3 > 0;
        case 16LL:
        case 33LL:
        case 113LL:
          return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
        default:
          result = 0;
          break;
      }
      return result;
    case 5:
    case 8:
    case 26:
    case 27:
    case 28:
    case 42:
    case 46:
    case 62:
    case 65:
    case 93:
    case 101:
    case 103:
      return 0;
    case 6:
      if ( (_DWORD)a2 == 43 )
        return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      if ( (int)a2 > 43 )
      {
        if ( (_DWORD)a2 == 61 )
          return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
        if ( (int)a2 < 61 )
        {
          return 0;
        }
        else
        {
          if ( (unsigned int)(a2 - 63) <= 1 )
            return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          return 0;
        }
      }
      else
      {
        if ( !(_DWORD)a2 || (_DWORD)a2 == 17 )
          return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
        return 0;
      }
    case 7:
      if ( (_DWORD)a2 == 48 )
        return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      if ( (int)a2 <= 48 )
      {
        if ( (_DWORD)a2 == 27 )
          return a3 > 0;
        return 0;
      }
      else
      {
        if ( (_DWORD)a2 == 54 || (_DWORD)a2 == 102 )
          return a3 > 0;
        return 0;
      }
    case 9:
      if ( (_DWORD)a2 == 13 || (_DWORD)a2 == 44 )
        return a3 > 0;
      return 0;
    case 10:
      if ( (_DWORD)a2 == 13 )
        return a3 > 0;
      return 0;
    case 11:
      if ( (_DWORD)a2 == 42 )
        return a3 > 0;
      return 0;
    case 12:
      result = 0;
      if ( (_DWORD)a2 == 55 )
        return (unsigned int)(a3 - 45) <= 0x7FFFFFD2;
      return result;
    case 13:
      if ( (_DWORD)a2 == 50 )
        return a3 > 0;
      return 0;
    case 14:
      if ( (_DWORD)a2 == 53 )
        return a3 > 0;
      if ( (int)a2 <= 53 )
      {
        if ( (_DWORD)a2 == 6 || (_DWORD)a2 == 46 )
          return a3 > 0;
        return 0;
      }
      else
      {
        if ( (_DWORD)a2 == 96 || (_DWORD)a2 == 105 || (_DWORD)a2 == 68 )
          return a3 > 0;
        return 0;
      }
    case 15:
      if ( (_DWORD)a2 == 48 )
        return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      if ( (int)a2 > 48 )
      {
        if ( (_DWORD)a2 == 54 || (_DWORD)a2 == 102 )
          return a3 > 0;
        return 0;
      }
      else
      {
        if ( (_DWORD)a2 == 27 )
          return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
        return (_DWORD)a2 == 31 && (unsigned int)(a3 - 52) <= 0x7FFFFFCB;
      }
    case 16:
      if ( (_DWORD)a2 == 9 )
        return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      if ( (_DWORD)a2 == 56 )
        return a3 > 0;
      return (_DWORD)a2 == 3 && (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
    case 17:
      if ( (int)a2 < 22 )
        return 0;
      if ( (int)a2 <= 24 || (_DWORD)a2 == 108 )
        return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
      return 0;
    case 18:
      if ( (_DWORD)a2 == 36 )
        return a3 > 0;
      if ( (int)a2 > 36 )
      {
        if ( (_DWORD)a2 == 76 )
        {
          return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
        }
        else
        {
          if ( (_DWORD)a2 == 82 || (_DWORD)a2 == 52 )
            return a3 > 0;
          return 0;
        }
      }
      else
      {
        if ( (_DWORD)a2 == 15 || (_DWORD)a2 == 28 || (_DWORD)a2 == 7 )
          return a3 > 0;
        return 0;
      }
    case 19:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 19:
        case 20:
        case 28:
        case 36:
        case 44:
        case 52:
        case 53:
        case 72:
        case 82:
        case 83:
        case 85:
        case 90:
        case 94:
          return a3 > 0;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 20:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 19:
        case 20:
        case 28:
        case 36:
        case 44:
        case 52:
        case 53:
        case 67:
        case 72:
        case 82:
        case 83:
        case 85:
        case 89:
        case 90:
        case 94:
        case 96:
          return a3 > 0;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 21:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 19:
        case 20:
        case 28:
        case 36:
        case 44:
        case 52:
        case 72:
        case 73:
        case 82:
        case 83:
        case 85:
        case 90:
        case 94:
          return a3 > 0;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 22:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 19:
        case 20:
        case 28:
        case 36:
        case 44:
        case 52:
        case 53:
        case 72:
        case 73:
        case 82:
        case 83:
        case 85:
        case 89:
        case 90:
        case 94:
        case 96:
          return a3 > 0;
        case 67:
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 23:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 19:
        case 20:
        case 28:
        case 36:
        case 52:
        case 53:
        case 72:
        case 82:
        case 83:
        case 85:
        case 89:
        case 90:
        case 96:
          return a3 > 0;
        case 44:
        case 67:
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 24:
      switch ( (int)a2 )
      {
        case 15:
        case 36:
        case 52:
        case 53:
        case 65:
        case 77:
        case 82:
        case 85:
        case 90:
          return a3 > 0;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 25:
      switch ( (int)a2 )
      {
        case 6:
        case 15:
        case 36:
        case 44:
        case 52:
        case 53:
        case 65:
        case 77:
        case 82:
        case 85:
        case 89:
        case 90:
        case 96:
          return a3 > 0;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 29:
    case 30:
    case 31:
    case 32:
    case 34:
    case 105:
      if ( (_DWORD)a2 == 65 )
        return a3 > 0;
      return 0;
    case 33:
      if ( (_DWORD)a2 == 18 || (_DWORD)a2 == 65 )
        return a3 > 0;
      return 0;
    case 35:
      if ( (_DWORD)a2 == 59 )
        return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      if ( (_DWORD)a2 == 93 )
        return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      result = 0;
      if ( (_DWORD)a2 == 10 )
        return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      return result;
    case 36:
      if ( (_DWORD)a2 == 37 )
        return a3 > 0;
      if ( (int)a2 <= 37 )
      {
        result = 0;
        if ( (unsigned int)(a2 - 1) <= 1 )
          return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
      }
      else
      {
        if ( (_DWORD)a2 == 87 )
          return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
        return (_DWORD)a2 == 92 && (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      }
      return result;
    case 37:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 36:
        case 52:
        case 53:
        case 65:
        case 77:
        case 82:
        case 85:
        case 90:
          return a3 > 0;
        case 76:
          return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
        default:
          result = 0;
          break;
      }
      return result;
    case 38:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 36:
        case 52:
        case 53:
        case 65:
        case 77:
        case 82:
        case 85:
        case 89:
        case 90:
        case 96:
          return a3 > 0;
        case 44:
        case 67:
        case 76:
          return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
        default:
          result = 0;
          break;
      }
      return result;
    case 39:
      if ( (_DWORD)a2 == 80 )
        return a3 > 0;
      return 0;
    case 40:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 20:
        case 34:
        case 35:
        case 36:
        case 40:
        case 44:
        case 45:
        case 52:
        case 58:
        case 60:
        case 70:
        case 81:
        case 82:
        case 85:
        case 94:
        case 107:
          return a3 > 0;
        default:
          result = 0;
          break;
      }
      return result;
    case 41:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 20:
        case 34:
        case 35:
        case 36:
        case 40:
        case 44:
        case 45:
        case 52:
        case 53:
        case 58:
        case 60:
        case 70:
        case 81:
        case 82:
        case 85:
        case 89:
        case 94:
        case 96:
        case 107:
          return a3 > 0;
        case 67:
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 43:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 20:
        case 35:
        case 36:
        case 40:
        case 44:
        case 45:
        case 52:
        case 58:
        case 60:
        case 70:
        case 81:
        case 82:
        case 85:
        case 94:
        case 107:
          return a3 > 0;
        default:
          result = 0;
          break;
      }
      return result;
    case 44:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 20:
        case 35:
        case 36:
        case 40:
        case 44:
        case 45:
        case 52:
        case 53:
        case 58:
        case 60:
        case 70:
        case 81:
        case 82:
        case 85:
        case 89:
        case 94:
        case 96:
        case 107:
          return a3 > 0;
        case 67:
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 45:
      if ( (_DWORD)a2 == 78 )
        return (unsigned int)(a3 - 52) <= 0x7FFFFFCB;
      if ( (_DWORD)a2 == 114 )
        return a3 > 0;
      return (_DWORD)a2 == 20 && (unsigned int)(a3 - 50) <= 1;
    case 47:
      if ( (_DWORD)a2 == 29 )
        return (unsigned int)(a3 - 52) <= 0x7FFFFFCB;
      if ( (int)a2 <= 29 )
      {
        if ( (_DWORD)a2 == 22 )
          return a3 > 0;
        return 0;
      }
      else
      {
        if ( (_DWORD)a2 == 95 || (_DWORD)a2 == 101 )
          return a3 > 0;
        return 0;
      }
    case 48:
      switch ( (int)a2 )
      {
        case 7:
        case 19:
        case 20:
        case 36:
        case 44:
        case 72:
        case 73:
        case 82:
        case 83:
        case 85:
        case 94:
          return a3 > 0;
        case 59:
        case 93:
          result = (unsigned int)(a3 - 60) <= 0x7FFFFFC3;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 49:
      switch ( (int)a2 )
      {
        case 15:
        case 19:
        case 20:
        case 36:
        case 44:
        case 52:
        case 53:
        case 72:
        case 77:
        case 82:
        case 83:
        case 85:
        case 90:
        case 94:
          return a3 > 0;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 50:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 19:
        case 20:
        case 36:
        case 44:
        case 52:
        case 53:
        case 67:
        case 72:
        case 77:
        case 82:
        case 83:
        case 85:
        case 89:
        case 90:
        case 94:
        case 96:
          return a3 > 0;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 51:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 19:
        case 20:
        case 36:
        case 44:
        case 52:
        case 53:
        case 72:
        case 73:
        case 77:
        case 82:
        case 83:
        case 85:
        case 90:
        case 94:
          return a3 > 0;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 52:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 19:
        case 20:
        case 36:
        case 44:
        case 52:
        case 53:
        case 72:
        case 73:
        case 77:
        case 82:
        case 83:
        case 85:
        case 89:
        case 90:
        case 94:
        case 96:
          return a3 > 0;
        case 67:
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 53:
      switch ( (int)a2 )
      {
        case 7:
        case 19:
        case 20:
        case 34:
        case 36:
        case 44:
        case 72:
        case 73:
        case 82:
        case 83:
        case 85:
        case 94:
          return a3 > 0;
        default:
          result = 0;
          break;
      }
      return result;
    case 54:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 19:
        case 20:
        case 34:
        case 35:
        case 36:
        case 40:
        case 44:
        case 52:
        case 58:
        case 60:
        case 70:
        case 72:
        case 73:
        case 81:
        case 82:
        case 83:
        case 85:
        case 94:
        case 107:
          return a3 > 0;
        default:
          result = 0;
          break;
      }
      return result;
    case 55:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 19:
        case 20:
        case 34:
        case 35:
        case 36:
        case 40:
        case 44:
        case 52:
        case 53:
        case 58:
        case 60:
        case 70:
        case 72:
        case 73:
        case 81:
        case 82:
        case 83:
        case 85:
        case 89:
        case 94:
        case 96:
        case 107:
          return a3 > 0;
        case 67:
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 56:
      switch ( (int)a2 )
      {
        case 7:
        case 19:
        case 20:
        case 36:
        case 44:
        case 72:
        case 73:
        case 82:
        case 83:
        case 85:
        case 94:
          return a3 > 0;
        default:
          result = 0;
          break;
      }
      return result;
    case 57:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 19:
        case 20:
        case 35:
        case 36:
        case 40:
        case 44:
        case 52:
        case 58:
        case 60:
        case 70:
        case 72:
        case 73:
        case 81:
        case 82:
        case 83:
        case 85:
        case 94:
        case 107:
          return a3 > 0;
        default:
          result = 0;
          break;
      }
      return result;
    case 58:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 19:
        case 20:
        case 35:
        case 36:
        case 40:
        case 44:
        case 52:
        case 53:
        case 58:
        case 60:
        case 70:
        case 72:
        case 73:
        case 81:
        case 82:
        case 83:
        case 85:
        case 89:
        case 94:
        case 96:
        case 107:
          return a3 > 0;
        case 67:
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 59:
      switch ( (int)a2 )
      {
        case 7:
        case 19:
        case 20:
        case 36:
        case 44:
        case 52:
        case 72:
        case 73:
        case 82:
        case 83:
        case 85:
        case 94:
          return a3 > 0;
        default:
          result = 0;
          break;
      }
      return result;
    case 60:
      switch ( (int)a2 )
      {
        case 7:
        case 19:
        case 20:
        case 36:
        case 44:
        case 72:
        case 82:
        case 83:
        case 85:
        case 94:
          return a3 > 0;
        default:
          result = 0;
          break;
      }
      return result;
    case 61:
      if ( (_DWORD)a2 == 88 )
        return (unsigned int)(a3 - 99) <= 0x7FFFFF9C;
      if ( (int)a2 > 88 )
      {
        if ( (_DWORD)a2 == 91 )
          return a3 > 0;
        if ( (int)a2 < 91 )
        {
          return 0;
        }
        else
        {
          if ( (unsigned int)(a2 - 103) <= 1 )
            return a3 > 0;
          return 0;
        }
      }
      else
      {
        if ( (_DWORD)a2 == 11 || (_DWORD)a2 == 30 )
          return a3 > 0;
        return 0;
      }
    case 63:
      if ( (_DWORD)a2 == 32 || (_DWORD)a2 == 47 )
        return a3 > 0;
      return 0;
    case 64:
      if ( (_DWORD)a2 == 65 )
        return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      if ( (int)a2 <= 65 )
        return ((_DWORD)a2 == 7 || (_DWORD)a2 == 36) && (unsigned int)(a3 - 52) <= 0x7FFFFFCB;
      if ( (_DWORD)a2 == 82 )
        return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      result = 0;
      if ( (_DWORD)a2 == 85 )
        return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      return result;
    case 66:
      if ( (_DWORD)a2 == 52 )
        return a3 > 0;
      if ( (int)a2 <= 52 )
      {
        if ( (_DWORD)a2 == 7 || (_DWORD)a2 == 36 )
          return a3 > 0;
        return 0;
      }
      else
      {
        if ( (_DWORD)a2 == 82 || (_DWORD)a2 == 85 || (_DWORD)a2 == 65 )
          return a3 > 0;
        return 0;
      }
    case 67:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 52:
        case 53:
        case 82:
        case 85:
        case 89:
        case 96:
          return a3 > 0;
        case 44:
        case 67:
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 68:
      if ( (_DWORD)a2 == 36 )
        return a3 > 0;
      if ( (int)a2 > 36 )
      {
        if ( (_DWORD)a2 == 65 || (_DWORD)a2 == 82 )
          return a3 > 0;
        return 0;
      }
      else
      {
        if ( (_DWORD)a2 == 7 || (_DWORD)a2 == 18 )
          return a3 > 0;
        return 0;
      }
    case 69:
      result = 0;
      if ( (_DWORD)a2 == 97 )
        return (unsigned int)(a3 - 60) <= 0x7FFFFFC3;
      return result;
    case 70:
      switch ( (int)a2 )
      {
        case 7:
        case 21:
        case 22:
        case 26:
        case 36:
        case 44:
        case 51:
        case 55:
        case 65:
        case 73:
        case 74:
        case 75:
        case 82:
          return a3 > 0;
        case 41:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 45:
        case 112:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        case 99:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 71:
      if ( (_DWORD)a2 == 55 )
        return a3 > 0;
      if ( (int)a2 > 55 )
      {
        if ( (_DWORD)a2 == 110 )
        {
          return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
        }
        else
        {
          if ( (_DWORD)a2 == 111 )
            return a3 > 0;
          return 0;
        }
      }
      else
      {
        if ( (_DWORD)a2 == 26 || (_DWORD)a2 == 44 )
          return a3 > 0;
        return 0;
      }
    case 72:
      switch ( (int)a2 )
      {
        case 22:
        case 26:
        case 44:
        case 55:
        case 65:
          return a3 > 0;
        default:
          result = 0;
          break;
      }
      return result;
    case 73:
      switch ( (int)a2 )
      {
        case 22:
        case 26:
        case 44:
        case 55:
        case 65:
          return a3 > 0;
        default:
          result = 0;
          break;
      }
      return result;
    case 74:
      switch ( (int)a2 )
      {
        case 7:
        case 20:
        case 21:
        case 22:
        case 26:
        case 36:
        case 44:
        case 51:
        case 55:
        case 65:
        case 72:
        case 73:
        case 75:
        case 82:
        case 83:
        case 85:
        case 94:
          return a3 > 0;
        case 41:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 99:
          goto LABEL_245;
        case 112:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 75:
      switch ( (int)a2 )
      {
        case 8:
        case 15:
        case 20:
        case 21:
        case 22:
        case 26:
        case 36:
        case 44:
        case 51:
        case 52:
        case 53:
        case 55:
        case 65:
        case 72:
        case 77:
        case 82:
        case 83:
        case 85:
        case 90:
        case 94:
        case 112:
          return a3 > 0;
        case 41:
LABEL_245:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 76:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 20:
        case 21:
        case 22:
        case 26:
        case 36:
        case 44:
        case 51:
        case 52:
        case 53:
        case 55:
        case 65:
        case 67:
        case 72:
        case 77:
        case 82:
        case 83:
        case 85:
        case 89:
        case 90:
        case 94:
        case 96:
        case 112:
          return a3 > 0;
        case 41:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 77:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 20:
        case 21:
        case 22:
        case 26:
        case 36:
        case 44:
        case 51:
        case 52:
        case 53:
        case 55:
        case 65:
        case 72:
        case 73:
        case 75:
        case 77:
        case 82:
        case 83:
        case 85:
        case 90:
        case 94:
          return a3 > 0;
        case 41:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 76:
        case 112:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        case 99:
          goto LABEL_258;
        default:
          result = 0;
          break;
      }
      return result;
    case 78:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 20:
        case 21:
        case 22:
        case 26:
        case 36:
        case 44:
        case 51:
        case 52:
        case 53:
        case 55:
        case 65:
        case 72:
        case 73:
        case 75:
        case 77:
        case 82:
        case 83:
        case 85:
        case 89:
        case 90:
        case 94:
        case 96:
          return a3 > 0;
        case 41:
LABEL_258:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 67:
        case 76:
        case 112:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        case 99:
          goto LABEL_276;
        default:
          result = 0;
          break;
      }
      return result;
    case 79:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 21:
        case 22:
        case 26:
        case 36:
        case 44:
        case 51:
        case 52:
        case 53:
        case 55:
        case 65:
        case 72:
        case 73:
        case 75:
        case 82:
        case 83:
        case 85:
        case 89:
        case 90:
        case 94:
        case 96:
          return a3 > 0;
        case 41:
LABEL_276:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 67:
        case 76:
        case 112:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        case 99:
          goto LABEL_246;
        default:
          result = 0;
          break;
      }
      return result;
    case 80:
      switch ( (int)a2 )
      {
        case 7:
        case 20:
        case 21:
        case 22:
        case 26:
        case 36:
        case 44:
        case 51:
        case 55:
        case 65:
        case 71:
        case 73:
        case 74:
        case 75:
        case 82:
        case 85:
        case 94:
        case 99:
          return a3 > 0;
        case 41:
LABEL_246:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 112:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 81:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 20:
        case 21:
        case 22:
        case 26:
        case 28:
        case 36:
        case 44:
        case 51:
        case 52:
        case 55:
        case 65:
        case 71:
        case 73:
        case 75:
        case 82:
        case 85:
        case 94:
        case 99:
          return a3 > 0;
        case 41:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 76:
        case 112:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 82:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 20:
        case 21:
        case 22:
        case 26:
        case 28:
        case 36:
        case 44:
        case 51:
        case 52:
        case 53:
        case 55:
        case 65:
        case 71:
        case 72:
        case 82:
        case 83:
        case 85:
        case 90:
        case 94:
        case 99:
        case 112:
          return a3 > 0;
        case 41:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 83:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 20:
        case 21:
        case 22:
        case 26:
        case 28:
        case 36:
        case 44:
        case 51:
        case 52:
        case 53:
        case 55:
        case 65:
        case 67:
        case 71:
        case 72:
        case 82:
        case 83:
        case 85:
        case 89:
        case 90:
        case 94:
        case 96:
        case 99:
        case 112:
          return a3 > 0;
        case 41:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 84:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 20:
        case 21:
        case 22:
        case 26:
        case 28:
        case 36:
        case 44:
        case 51:
        case 52:
        case 55:
        case 65:
        case 71:
        case 72:
        case 73:
        case 75:
        case 82:
        case 83:
        case 85:
        case 90:
        case 94:
        case 99:
          return a3 > 0;
        case 41:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 76:
        case 112:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 85:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 20:
        case 21:
        case 22:
        case 26:
        case 28:
        case 36:
        case 44:
        case 51:
        case 52:
        case 53:
        case 55:
        case 65:
        case 71:
        case 72:
        case 73:
        case 75:
        case 82:
        case 83:
        case 85:
        case 89:
        case 90:
        case 94:
        case 96:
        case 99:
          return a3 > 0;
        case 41:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 67:
        case 76:
        case 112:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 86:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 21:
        case 22:
        case 26:
        case 28:
        case 36:
        case 44:
        case 51:
        case 52:
        case 53:
        case 55:
        case 65:
        case 71:
        case 73:
        case 75:
        case 82:
        case 85:
        case 89:
        case 94:
        case 96:
        case 99:
          return a3 > 0;
        case 41:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 67:
        case 76:
        case 112:
          return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
        default:
          result = 0;
          break;
      }
      return result;
    case 87:
      if ( (_DWORD)a2 == 38 )
        return a3 > 0;
      if ( (int)a2 <= 38 )
      {
        if ( (_DWORD)a2 == 22 || (_DWORD)a2 == 26 )
          return a3 > 0;
        return 0;
      }
      else
      {
        if ( (_DWORD)a2 == 65 || (_DWORD)a2 == 102 || (_DWORD)a2 == 44 )
          return a3 > 0;
        return 0;
      }
    case 88:
      switch ( (int)a2 )
      {
        case 4:
        case 25:
          return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
        case 7:
        case 20:
        case 22:
        case 35:
        case 36:
        case 44:
        case 45:
        case 58:
        case 81:
        case 82:
        case 94:
        case 107:
          return a3 > 0;
        default:
          result = 0;
          break;
      }
      return result;
    case 89:
      return ((_DWORD)a2 == 7 || (_DWORD)a2 == 98) && (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
    case 90:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 20:
        case 35:
        case 36:
        case 40:
        case 44:
        case 45:
        case 52:
        case 58:
        case 60:
        case 70:
        case 81:
        case 82:
        case 85:
        case 94:
        case 107:
          return a3 > 0;
        default:
          result = 0;
          break;
      }
      return result;
    case 91:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 20:
        case 35:
        case 36:
        case 40:
        case 44:
        case 45:
        case 52:
        case 53:
        case 58:
        case 60:
        case 70:
        case 81:
        case 82:
        case 85:
        case 89:
        case 94:
        case 96:
        case 107:
          return a3 > 0;
        case 67:
        case 76:
          return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
        default:
          result = 0;
          break;
      }
      return result;
    case 92:
      if ( (_DWORD)a2 == 22 )
        return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
      result = 0;
      if ( (_DWORD)a2 == 65 )
        return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      return result;
    case 94:
      switch ( (int)a2 )
      {
        case 7:
        case 20:
        case 36:
        case 71:
        case 73:
        case 82:
        case 85:
        case 94:
        case 99:
          return a3 > 0;
        case 44:
          result = (unsigned int)(a3 - 52) <= 0x7FFFFFCB;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 95:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 20:
        case 28:
        case 36:
        case 44:
        case 52:
        case 71:
        case 73:
        case 82:
        case 85:
        case 94:
        case 99:
          return a3 > 0;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 96:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 19:
        case 20:
        case 28:
        case 36:
        case 44:
        case 52:
        case 53:
        case 71:
        case 72:
        case 82:
        case 83:
        case 85:
        case 90:
        case 94:
        case 99:
          return a3 > 0;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 97:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 20:
        case 28:
        case 36:
        case 44:
        case 52:
        case 53:
        case 67:
        case 71:
        case 72:
        case 82:
        case 83:
        case 85:
        case 89:
        case 90:
        case 94:
        case 96:
        case 99:
          return a3 > 0;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 98:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 19:
        case 20:
        case 28:
        case 36:
        case 44:
        case 52:
        case 71:
        case 72:
        case 73:
        case 82:
        case 83:
        case 85:
        case 90:
        case 94:
        case 99:
          return a3 > 0;
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 99:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 20:
        case 28:
        case 36:
        case 44:
        case 52:
        case 53:
        case 71:
        case 72:
        case 73:
        case 82:
        case 83:
        case 85:
        case 89:
        case 90:
        case 94:
        case 96:
        case 99:
          return a3 > 0;
        case 67:
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 100:
      switch ( (int)a2 )
      {
        case 6:
        case 7:
        case 15:
        case 20:
        case 28:
        case 36:
        case 52:
        case 53:
        case 71:
        case 73:
        case 82:
        case 85:
        case 89:
        case 94:
        case 96:
        case 99:
          return a3 > 0;
        case 44:
        case 67:
        case 76:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 102:
      result = 0;
      if ( (_DWORD)a2 == 97 )
        return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
      return result;
    case 104:
      return ((_DWORD)a2 == 39 || (_DWORD)a2 == 79) && (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
    case 106:
      switch ( (int)a2 )
      {
        case 22:
        case 26:
        case 51:
        case 65:
        case 66:
        case 69:
          return a3 > 0;
        case 41:
          return (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
        default:
          result = 0;
          break;
      }
      return result;
    case 107:
      if ( (_DWORD)a2 == 26 )
        return a3 > 0;
      if ( (int)a2 <= 26 )
      {
        if ( (_DWORD)a2 == 22 || (_DWORD)a2 == 24 )
          return a3 > 0;
        return 0;
      }
      else
      {
        if ( (_DWORD)a2 == 65 || (_DWORD)a2 == 109 || (_DWORD)a2 == 49 )
          return a3 > 0;
        return 0;
      }
    case 108:
      if ( (_DWORD)a2 == 52 )
        return a3 > 0;
      if ( (int)a2 <= 52 )
      {
        if ( (_DWORD)a2 == 12 )
          return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
        if ( (_DWORD)a2 == 15 )
          return a3 > 0;
        return 0;
      }
      else
      {
        if ( (_DWORD)a2 == 82 || (_DWORD)a2 == 85 )
          return a3 > 0;
        result = 0;
        if ( (_DWORD)a2 == 76 )
          return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
      }
      return result;
    case 109:
      return (_DWORD)a2 == 34 && a3 > 0;
    case 110:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 19:
        case 20:
        case 36:
        case 44:
        case 52:
        case 72:
        case 73:
        case 76:
        case 82:
        case 83:
        case 85:
        case 94:
          return a3 > 0;
        case 12:
          return (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
        default:
          result = 0;
          break;
      }
      return result;
    case 111:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 21:
        case 22:
        case 26:
        case 36:
        case 44:
        case 51:
        case 52:
        case 55:
        case 65:
        case 73:
        case 75:
        case 76:
        case 82:
        case 85:
        case 99:
          return a3 > 0;
        case 12:
        case 45:
        case 112:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        case 41:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 112:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 20:
        case 21:
        case 22:
        case 26:
        case 36:
        case 44:
        case 51:
        case 52:
        case 55:
        case 65:
        case 72:
        case 73:
        case 75:
        case 76:
        case 82:
        case 83:
        case 85:
        case 94:
          return a3 > 0;
        case 12:
        case 112:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        case 41:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        case 99:
          goto LABEL_257;
        default:
          result = 0;
          break;
      }
      return result;
    case 113:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 20:
        case 21:
        case 22:
        case 26:
        case 36:
        case 44:
        case 51:
        case 52:
        case 55:
        case 65:
        case 71:
        case 73:
        case 75:
        case 76:
        case 82:
        case 85:
        case 94:
        case 99:
          return a3 > 0;
        case 12:
        case 112:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        case 41:
LABEL_257:
          result = (unsigned int)(a3 - 51) <= 0x7FFFFFCC;
          break;
        default:
          result = 0;
          break;
      }
      return result;
    case 114:
      switch ( (int)a2 )
      {
        case 7:
        case 15:
        case 20:
        case 36:
        case 52:
        case 71:
        case 73:
        case 76:
        case 82:
        case 85:
        case 94:
        case 99:
          return a3 > 0;
        case 12:
          result = (unsigned int)(a3 - 50) <= 0x7FFFFFCD;
          break;
        default:
          result = 0;
          break;
      }
      return result;
  }
}
