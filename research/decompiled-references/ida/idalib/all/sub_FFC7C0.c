__int64 __fastcall sub_FFC7C0(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  bool v5; // r9
  char v6; // di
  char v7; // r8
  char v8; // r10
  char v9; // r9
  bool v10; // cl
  bool v11; // cl
  char v12; // r8
  bool v13; // di
  char v14; // r8
  bool v15; // cl
  bool v16; // cl
  bool v17; // r8

  switch ( a1 )
  {
    case 3:
      switch ( a3 )
      {
        case 7LL:
          if ( *(_DWORD *)a2 == 1752461166 && *(_WORD *)(a2 + 4) == 28265 && *(_BYTE *)(a2 + 6) == 103 )
            return 0;
          else
            return 3;
        case 15LL:
          if ( *(_QWORD *)a2 == 0x7665645F6465656ELL
            && *(_DWORD *)(a2 + 8) == 1600480105
            && *(_WORD *)(a2 + 12) == 29808
            && *(_BYTE *)(a2 + 14) == 114 )
          {
            return 1;
          }
          else
          {
            return 3;
          }
        case 16LL:
          return (unsigned int)((*(_QWORD *)a2 ^ 0x7665645F6465656ELL | *(_QWORD *)(a2 + 8) ^ 0x726464615F656369LL) != 0)
               + 2;
        default:
          return 3;
      }
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 23:
    case 24:
    case 25:
    case 30:
    case 31:
    case 32:
    case 34:
    case 35:
    case 36:
    case 37:
    case 39:
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
    case 54:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 71:
    case 73:
    case 74:
    case 75:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 84:
    case 86:
    case 87:
    case 88:
    case 89:
    case 91:
    case 92:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
      switch ( a3 )
      {
        case 2LL:
          result = 0;
          if ( *(_WORD *)a2 != 28265 )
          {
LABEL_89:
            result = 0;
            if ( a3 == 4 )
            {
              if ( *(_DWORD *)a2 == 1802398067 )
                result = 6;
              v15 = *(_DWORD *)a2 == 1802398067;
              goto LABEL_93;
            }
            if ( a3 == 8 )
            {
              if ( *(_QWORD *)a2 == 0x74657374756F6E69LL )
                return 7;
              return 10;
            }
            goto LABEL_263;
          }
          goto LABEL_166;
        case 3LL:
          result = 1;
          if ( *(_WORD *)a2 != 30063 )
            goto LABEL_263;
          if ( *(_BYTE *)(a2 + 2) == 116 )
            goto LABEL_166;
          v15 = 0;
          break;
        case 5LL:
          if ( *(_DWORD *)a2 != 1970237033 )
            goto LABEL_89;
          result = 2;
          if ( *(_BYTE *)(a2 + 4) != 116 )
            goto LABEL_89;
          goto LABEL_166;
        case 13LL:
          if ( *(_QWORD *)a2 == 0x6F6E69786574756DLL && *(_DWORD *)(a2 + 8) == 1702065269 )
          {
            result = 3;
            if ( *(_BYTE *)(a2 + 12) == 116 )
              goto LABEL_166;
            result = 0;
          }
          else
          {
            result = 0;
          }
LABEL_263:
          v15 = 0;
          break;
        case 6LL:
          if ( *(_DWORD *)a2 == 1869636964 && (result = 4, *(_WORD *)(a2 + 4) == 27234)
            || *(_DWORD *)a2 == 1920298867 && (result = 5, *(_WORD *)(a2 + 4) == 25955) )
          {
LABEL_166:
            v15 = 1;
            break;
          }
          result = 0;
          v15 = 0;
          break;
        default:
          goto LABEL_89;
      }
      if ( !v15 && a3 == 12 )
      {
        if ( *(_QWORD *)a2 == 0x656D6C6C6174756FLL && *(_DWORD *)(a2 + 8) == 2037542765 )
          return 8;
LABEL_169:
        if ( v15 )
          return result;
        return 10;
      }
LABEL_93:
      if ( a3 == 14 )
      {
        if ( !v15 )
        {
          if ( *(_QWORD *)a2 == 0x6C6C6174756F6E69LL
            && *(_DWORD *)(a2 + 8) == 1869440365
            && *(_WORD *)(a2 + 12) == 31090 )
          {
            return 9;
          }
          else
          {
            return 10;
          }
        }
        return result;
      }
      goto LABEL_169;
    case 7:
      if ( a3 == 9 )
      {
        if ( *(_QWORD *)a2 == 0x6F7461636F6C6C61LL && *(_BYTE *)(a2 + 8) == 114 )
          return 0;
        else
          return 2;
      }
      else if ( a3 == 5 && *(_DWORD *)a2 == 1734962273 && *(_BYTE *)(a2 + 4) == 110 )
      {
        return 1;
      }
      else
      {
        return 2;
      }
    case 10:
      if ( a3 == 11 )
      {
        if ( *(_QWORD *)a2 == 0x74616C69706D6F63LL && *(_WORD *)(a2 + 8) == 28521 && *(_BYTE *)(a2 + 10) == 110 )
          return 0;
        else
          return 2;
      }
      else if ( a3 == 9 && *(_QWORD *)a2 == 0x6F69747563657865LL && *(_BYTE *)(a2 + 8) == 110 )
      {
        return 1;
      }
      else
      {
        return 2;
      }
    case 11:
      result = 3;
      if ( a3 == 7 )
      {
        if ( *(_DWORD *)a2 == 1601267059 && *(_WORD *)(a2 + 4) == 29539 && *(_BYTE *)(a2 + 6) == 116 )
        {
          return 0;
        }
        else if ( *(_DWORD *)a2 == 1601266529 && *(_WORD *)(a2 + 4) == 25970 && *(_BYTE *)(a2 + 6) == 108 )
        {
          return 1;
        }
        else if ( *(_DWORD *)a2 == 1634493810 && *(_WORD *)(a2 + 4) == 25976 && *(_BYTE *)(a2 + 6) == 100 )
        {
          return 2;
        }
        else
        {
          return 3;
        }
      }
      return result;
    case 12:
      switch ( a3 )
      {
        case 5LL:
          if ( *(_DWORD *)a2 == 1835099508 && *(_BYTE *)(a2 + 4) == 115 )
            return 0;
          else
            return 3;
        case 8LL:
          return 2 * (unsigned int)(*(_QWORD *)a2 != 0x6C656C6C61726170LL) + 1;
        case 6LL:
          if ( *(_DWORD *)a2 == 1701996660 && *(_WORD *)(a2 + 4) == 25697 )
            return 2;
          else
            return 3;
        default:
          return 3;
      }
    case 20:
      switch ( a3 )
      {
        case 4LL:
          return 4 * (unsigned int)(*(_DWORD *)a2 != 1701736302);
        case 6LL:
          if ( *(_DWORD *)a2 == 1918986355 && *(_WORD *)(a2 + 4) == 25701 )
            return 1;
          else
            return 4;
        case 7LL:
          if ( *(_DWORD *)a2 == 1986622064 && *(_WORD *)(a2 + 4) == 29793 && *(_BYTE *)(a2 + 6) == 101 )
          {
            return 2;
          }
          else if ( *(_DWORD *)a2 == 1852534389 && *(_WORD *)(a2 + 4) == 30575 && *(_BYTE *)(a2 + 6) == 110 )
          {
            return 4;
          }
          else
          {
            return 4;
          }
        case 12LL:
          if ( *(_QWORD *)a2 == 0x6972707473726966LL && *(_DWORD *)(a2 + 8) == 1702125942 )
            return 3;
          else
            return 4;
        default:
          return 4;
      }
    case 21:
      switch ( a3 )
      {
        case 6LL:
          if ( *(_DWORD *)a2 == 1818321779 )
          {
            v11 = *(_WORD *)(a2 + 4) == 29281;
            goto LABEL_71;
          }
          break;
        case 9LL:
          if ( *(_QWORD *)a2 != 0x7461676572676761LL || (v11 = 1, result = 1, *(_BYTE *)(a2 + 8) != 101) )
          {
            v11 = 0;
            result = 1;
          }
          goto LABEL_72;
        case 7LL:
          if ( *(_DWORD *)a2 == 1852403568 && *(_WORD *)(a2 + 4) == 25972 && *(_BYTE *)(a2 + 6) == 114 )
          {
            v13 = 1;
            v11 = 1;
            result = 2;
LABEL_74:
            if ( a3 == 2 && !v11 )
            {
              v14 = 1;
              if ( *(_WORD *)a2 == 28532 )
              {
                result = 6;
                v11 = 1;
                goto LABEL_78;
              }
LABEL_77:
              if ( !v14 )
              {
                if ( *(_DWORD *)a2 == 1919315828 && *(_WORD *)(a2 + 4) == 28015 )
                  return 8;
                goto LABEL_79;
              }
LABEL_78:
              if ( !v11 && a3 == 12 )
              {
                if ( *(_QWORD *)a2 == 0x6972707473726966LL && *(_DWORD *)(a2 + 8) == 1702125942 )
                  return 9;
                goto LABEL_80;
              }
LABEL_79:
              if ( !v11 && !v13 )
              {
                if ( *(_DWORD *)a2 == 1701736302 )
                  return 10;
                return 4;
              }
LABEL_80:
              if ( v11 )
                return result;
              if ( a3 == 7 )
              {
                if ( *(_DWORD *)a2 == 1634100580 && *(_WORD *)(a2 + 4) == 27765 && *(_BYTE *)(a2 + 6) == 116 )
                  return 11;
                if ( *(_DWORD *)a2 == 1936028272 && *(_WORD *)(a2 + 4) == 28261 && *(_BYTE *)(a2 + 6) == 116 )
                  return 12;
                return 4;
              }
              return 4;
            }
            goto LABEL_220;
          }
          v12 = 1;
          v11 = 0;
          result = 0;
LABEL_73:
          v13 = a3 != 4;
          if ( !v12 )
          {
            if ( *(_DWORD *)a2 == 1869376609 && *(_BYTE *)(a2 + 4) == 99 )
            {
              v11 = 1;
              result = 5;
LABEL_222:
              v14 = v11 || a3 != 6;
              goto LABEL_77;
            }
            v17 = v11 || v13;
LABEL_221:
            if ( !v17 )
            {
              if ( *(_DWORD *)a2 == 1836020326 )
              {
                v11 = 1;
                result = 7;
                goto LABEL_79;
              }
              goto LABEL_78;
            }
            goto LABEL_222;
          }
          goto LABEL_74;
        case 3LL:
          if ( *(_WORD *)a2 == 27745 && *(_BYTE *)(a2 + 2) == 108 )
          {
            v11 = 1;
            v13 = 1;
            result = 3;
          }
          else
          {
            v11 = 0;
            v13 = 1;
            result = 0;
          }
LABEL_220:
          v17 = v13 || v11;
          goto LABEL_221;
      }
      v11 = 0;
LABEL_71:
      result = 0;
LABEL_72:
      v12 = v11 || a3 != 5;
      goto LABEL_73;
    case 22:
      switch ( a3 )
      {
        case 2LL:
          result = 0;
          if ( *(_WORD *)a2 != 28265 )
          {
LABEL_99:
            result = 0;
            if ( a3 == 4 )
            {
              if ( *(_DWORD *)a2 == 1802398067 )
                result = 6;
              v16 = *(_DWORD *)a2 == 1802398067;
              goto LABEL_103;
            }
            if ( a3 == 8 )
            {
              if ( *(_QWORD *)a2 == 0x74657374756F6E69LL )
                return *(_DWORD *)(a4 + 64) < 0x33u ? 10 : 7;
              return 10;
            }
            goto LABEL_252;
          }
          goto LABEL_178;
        case 3LL:
          result = 1;
          if ( *(_WORD *)a2 != 30063 )
            goto LABEL_252;
          if ( *(_BYTE *)(a2 + 2) == 116 )
            goto LABEL_178;
          v16 = 0;
          break;
        case 5LL:
          if ( *(_DWORD *)a2 != 1970237033 )
            goto LABEL_99;
          result = 2;
          if ( *(_BYTE *)(a2 + 4) != 116 )
            goto LABEL_99;
          goto LABEL_178;
        case 13LL:
          if ( *(_QWORD *)a2 == 0x6F6E69786574756DLL && *(_DWORD *)(a2 + 8) == 1702065269 )
          {
            result = 3;
            if ( *(_BYTE *)(a2 + 12) == 116 )
              goto LABEL_178;
            result = 0;
          }
          else
          {
            result = 0;
          }
LABEL_252:
          v16 = 0;
          break;
        case 6LL:
          if ( *(_DWORD *)a2 == 1869636964 && (result = 4, *(_WORD *)(a2 + 4) == 27234)
            || *(_DWORD *)a2 == 1920298867 && (result = 5, *(_WORD *)(a2 + 4) == 25955) )
          {
LABEL_178:
            v16 = 1;
            break;
          }
          v16 = 0;
          result = 0;
          break;
        default:
          goto LABEL_99;
      }
      if ( !v16 && a3 == 12 )
      {
        if ( *(_QWORD *)a2 == 0x656D6C6C6174756FLL && *(_DWORD *)(a2 + 8) == 2037542765 )
          return 8;
        goto LABEL_181;
      }
LABEL_103:
      if ( a3 == 14 )
      {
        if ( v16 )
          return result;
        if ( *(_QWORD *)a2 == 0x6C6C6174756F6E69LL && *(_DWORD *)(a2 + 8) == 1869440365 && *(_WORD *)(a2 + 12) == 31090 )
          return 9;
        return 10;
      }
LABEL_181:
      if ( v16 )
        return result;
      return 10;
    case 26:
      if ( a3 == 8 )
        return 2 * (unsigned int)(*(_QWORD *)a2 != 0x726F747365636E61LL);
      if ( a3 == 10 && *(_QWORD *)a2 == 0x6E5F656369766564LL && *(_WORD *)(a2 + 8) == 28021 )
        return 1;
      return 2;
    case 27:
      switch ( a3 )
      {
        case 4LL:
          return 3 * (unsigned int)(*(_DWORD *)a2 != 1953722216);
        case 6LL:
          if ( *(_DWORD *)a2 == 1869115246 && *(_WORD *)(a2 + 4) == 29811 )
            return 1;
          else
            return 3;
        case 3LL:
          if ( *(_WORD *)a2 == 28257 && *(_BYTE *)(a2 + 2) == 121 )
            return 2;
          else
            return 3;
        default:
          return 3;
      }
    case 28:
      return a3 != 6 || *(_DWORD *)a2 != 1952543859 || *(_WORD *)(a2 + 4) != 25449;
    case 29:
      switch ( a3 )
      {
        case 6LL:
          if ( *(_DWORD *)a2 == 1920298867 && *(_WORD *)(a2 + 4) == 25955 )
            return 0;
          break;
        case 4LL:
          return 3 * (unsigned int)(*(_DWORD *)a2 != 1802398067) + 1;
        case 22LL:
          if ( !(*(_QWORD *)a2 ^ 0x706D6F5F6B6E6973LL | *(_QWORD *)(a2 + 8) ^ 0x6574695F7275635FLL)
            && *(_DWORD *)(a2 + 16) == 1769234802
            && *(_WORD *)(a2 + 20) == 28271 )
          {
            return 2;
          }
          else
          {
            return 4;
          }
        case 24LL:
          if ( !(*(_QWORD *)a2 ^ 0x6F5F656372756F73LL | *(_QWORD *)(a2 + 8) ^ 0x695F7275635F706DLL)
            && *(_QWORD *)(a2 + 16) == 0x6E6F697461726574LL )
          {
            return 3;
          }
          else
          {
            return 4;
          }
      }
      return 4;
    case 33:
      result = 106;
      if ( a3 == 7 )
      {
        if ( *(_DWORD *)a2 == 1601267059 && *(_WORD *)(a2 + 4) == 29539 && *(_BYTE *)(a2 + 6) == 116 )
        {
          return 92;
        }
        else if ( *(_DWORD *)a2 == 1970365281 && *(_WORD *)(a2 + 4) == 29289 && *(_BYTE *)(a2 + 6) == 101 )
        {
          return 2;
        }
        else if ( *(_DWORD *)a2 == 1634493810 && *(_WORD *)(a2 + 4) == 25976 && *(_BYTE *)(a2 + 6) == 100 )
        {
          return 86;
        }
        else
        {
          return 106;
        }
      }
      return result;
    case 38:
    case 102:
      if ( a3 == 6 )
      {
        if ( *(_DWORD *)a2 == 1886413165 && *(_WORD *)(a2 + 4) == 29285 )
          return 0;
        return 2;
      }
      if ( a3 != 7 || *(_DWORD *)a2 != 1936028272 || *(_WORD *)(a2 + 4) != 28261 || *(_BYTE *)(a2 + 6) != 116 )
        return 2;
      result = 2;
      if ( *(_DWORD *)(a4 + 64) > 0x32u )
        return 1;
      return result;
    case 40:
    case 70:
      result = a3 != 6 || *(_DWORD *)a2 != 1769108595 || *(_WORD *)(a2 + 4) != 29795;
      if ( *(_DWORD *)(a4 + 64) <= 0x32u )
        return 1;
      return result;
    case 52:
      return a3 != 11
          || *(_QWORD *)a2 != 0x6F697469646E6F63LL
          || *(_WORD *)(a2 + 8) != 24942
          || *(_BYTE *)(a2 + 10) != 108;
    case 53:
      if ( a3 == 3 )
      {
        if ( *(_WORD *)a2 == 24950 && *(_BYTE *)(a2 + 2) == 108 )
          return 0;
        if ( *(_WORD *)a2 == 25970 && *(_BYTE *)(a2 + 2) == 102 )
          return 1;
      }
      else if ( a3 == 4 )
      {
        if ( *(_DWORD *)a2 == 1818326645 )
          return 2;
        else
          return (unsigned int)(*(_DWORD *)a2 != 1885697139) + 3;
      }
      return 4;
    case 55:
      v5 = a3 != 4;
      if ( a3 == 5 )
      {
        result = 0;
        if ( *(_DWORD *)a2 == 1869376609 && *(_BYTE *)(a2 + 4) == 99 )
          goto LABEL_316;
        v6 = 0;
        v7 = 1;
LABEL_14:
        v8 = a3 != 8;
        if ( a3 == 5 && !v6 )
        {
          if ( *(_DWORD *)a2 == 1936682083 && *(_BYTE *)(a2 + 4) == 101 )
          {
            v6 = 1;
            result = 8;
            goto LABEL_18;
          }
LABEL_17:
          if ( !v8 )
          {
            v9 = v6 | v5;
            if ( *(_QWORD *)a2 == 0x726F746172657469LL )
            {
              result = 10;
              v6 = 1;
              goto LABEL_22;
            }
            goto LABEL_21;
          }
          goto LABEL_18;
        }
LABEL_228:
        v8 |= v6;
        goto LABEL_17;
      }
      if ( a3 == 2 )
      {
        result = 1;
        if ( *(_WORD *)a2 == 28532 )
        {
LABEL_316:
          v6 = 1;
          v7 = 1;
          goto LABEL_14;
        }
      }
      else
      {
        v7 = a3 != 7;
        switch ( a3 )
        {
          case 4LL:
            result = 2;
            v6 = 1;
            if ( *(_DWORD *)a2 == 1836020326 )
              goto LABEL_14;
            break;
          case 6LL:
            if ( *(_DWORD *)a2 != 1919315828 || (result = 3, *(_WORD *)(a2 + 4) != 28015) )
            {
              if ( *(_DWORD *)a2 != 1701602660 || (result = 4, *(_WORD *)(a2 + 4) != 25972) )
              {
                result = 0;
                if ( *(_DWORD *)a2 != 1635216481 || *(_WORD *)(a2 + 4) != 29561 )
                {
                  if ( *(_DWORD *)a2 == 1886413165 && *(_WORD *)(a2 + 4) == 29285 )
                  {
                    v6 = 1;
                    result = 9;
LABEL_20:
                    v9 = v6 | v5;
LABEL_21:
                    if ( !v9 )
                    {
                      if ( *(_DWORD *)a2 == 1718379891 )
                        return 12;
                      goto LABEL_23;
                    }
LABEL_22:
                    if ( !((unsigned __int8)v6 | (a3 != 9)) )
                    {
                      if ( *(_QWORD *)a2 == 0x6C6F685F78706D6FLL && *(_BYTE *)(a2 + 8) == 100 )
                        return (*(_BYTE *)(a4 + 68) & 1) == 0 ? 6 : 13;
                      return 6;
                    }
LABEL_23:
                    if ( v6 )
                      return result;
                    return 6;
                  }
                  v6 = 0;
LABEL_19:
                  if ( !v7 )
                  {
                    if ( *(_DWORD *)a2 == 1936028272 && *(_WORD *)(a2 + 4) == 28261 && *(_BYTE *)(a2 + 6) == 116 )
                      return *(_DWORD *)(a4 + 64) < 0x33u ? 6 : 11;
                    goto LABEL_22;
                  }
                  goto LABEL_20;
                }
                v6 = 1;
                result = 7;
LABEL_18:
                v7 |= v6;
                goto LABEL_19;
              }
            }
            v6 = 1;
            goto LABEL_14;
          case 7LL:
            if ( *(_DWORD *)a2 == 1701602674 && *(_WORD *)(a2 + 4) == 29537 && *(_BYTE *)(a2 + 6) == 101 )
            {
              v8 = 1;
              v7 = 0;
              v6 = 1;
              result = 5;
            }
            else
            {
              v8 = 1;
              v7 = 0;
              v6 = 0;
              result = 0;
            }
            goto LABEL_228;
        }
        result = 0;
      }
      v7 = 1;
      v6 = 0;
      goto LABEL_14;
    case 72:
      result = a3 != 6 || *(_DWORD *)a2 != 1769108595 || *(_WORD *)(a2 + 4) != 29795;
      if ( *(_DWORD *)(a4 + 64) <= 0x3Bu )
        return 1;
      return result;
    case 76:
      switch ( a3 )
      {
        case 10LL:
          return *(_QWORD *)a2 != 0x65727275636E6F63LL || *(_WORD *)(a2 + 8) != 29806;
        case 12LL:
          if ( *(_QWORD *)a2 == 0x6375646F72706572LL && *(_DWORD *)(a2 + 8) == 1701601897 )
            return 2;
          else
            return 1;
        case 13LL:
          if ( *(_QWORD *)a2 == 0x7274736E6F636E75LL && *(_DWORD *)(a2 + 8) == 1701734753 && *(_BYTE *)(a2 + 12) == 100 )
            return 3;
          else
            return 1;
        default:
          return 1;
      }
    case 83:
      if ( a3 == 6 )
      {
        if ( *(_DWORD *)a2 == 1953718637 && *(_WORD *)(a2 + 4) == 29285 )
          return 2;
        if ( *(_DWORD *)a2 == 1701998707 && *(_WORD *)(a2 + 4) == 25697 )
          return 4;
        return 7;
      }
      if ( a3 == 5 )
      {
        if ( *(_DWORD *)a2 == 1936682083 && *(_BYTE *)(a2 + 4) == 101 )
          return 3;
        return 7;
      }
      result = 7;
      if ( a3 == 7 )
      {
        if ( *(_DWORD *)a2 == 1835627120 && *(_WORD *)(a2 + 4) == 29281 && *(_BYTE *)(a2 + 6) == 121 )
        {
          return 5;
        }
        else if ( *(_DWORD *)a2 == 1634100580 && *(_WORD *)(a2 + 4) == 27765 && *(_BYTE *)(a2 + 6) == 116 )
        {
          return 6;
        }
        else if ( *(_DWORD *)a2 == 1852534389 && *(_WORD *)(a2 + 4) == 30575 && *(_BYTE *)(a2 + 6) == 110 )
        {
          return 7;
        }
        else
        {
          return 7;
        }
      }
      return result;
    case 85:
      switch ( a3 )
      {
        case 7LL:
          if ( *(_DWORD *)a2 == 1634100580 && *(_WORD *)(a2 + 4) == 27765 && *(_BYTE *)(a2 + 6) == 116 )
            return 0;
          else
            return 3;
        case 6LL:
          if ( *(_DWORD *)a2 == 1668509289 && *(_WORD *)(a2 + 4) == 28257 )
            return 1;
          else
            return 3;
        case 4LL:
          return (unsigned int)(*(_DWORD *)a2 != 1802723700) + 2;
        default:
          return 3;
      }
    case 90:
      switch ( a3 )
      {
        case 6LL:
          if ( *(_DWORD *)a2 != 1952543859 || (result = 0, v10 = 1, *(_WORD *)(a2 + 4) != 25449) )
          {
            if ( *(_DWORD *)a2 != 1684632935 || (v10 = 1, result = 2, *(_WORD *)(a2 + 4) != 25701) )
            {
              v10 = 0;
              result = 0;
            }
            goto LABEL_29;
          }
          goto LABEL_199;
        case 7LL:
          if ( *(_DWORD *)a2 == 1634629988 && *(_WORD *)(a2 + 4) == 26989 && *(_BYTE *)(a2 + 6) == 99 )
          {
            v10 = 1;
            result = 1;
            goto LABEL_29;
          }
          v10 = 0;
          result = 1;
LABEL_199:
          if ( !v10 && a3 == 7 )
          {
            if ( *(_DWORD *)a2 == 1953396082 && *(_WORD *)(a2 + 4) == 28009 && *(_BYTE *)(a2 + 6) == 101 )
            {
              result = 4;
              v10 = 1;
            }
            else
            {
              v10 = 0;
            }
            goto LABEL_204;
          }
          goto LABEL_29;
        case 4LL:
          result = 0;
          v10 = *(_DWORD *)a2 == 1869903201;
          if ( *(_DWORD *)a2 == 1869903201 )
            result = 3;
          goto LABEL_30;
      }
      v10 = 0;
LABEL_29:
      if ( !v10 && a3 == 9 )
      {
        if ( *(_QWORD *)a2 == 0x696E6F746F6E6F6DLL && *(_BYTE *)(a2 + 8) == 99 )
          return 6;
        goto LABEL_204;
      }
LABEL_30:
      if ( a3 == 12 && !v10 )
      {
        if ( *(_QWORD *)a2 == 0x746F6E6F6D6E6F6ELL && *(_DWORD *)(a2 + 8) == 1667853935 )
          return 7;
        return 5;
      }
LABEL_204:
      if ( !v10 && a3 == 4 )
        return 3 * (unsigned int)(*(_DWORD *)a2 == 1684892019) + 5;
      if ( !v10 )
        return 5;
      return result;
    case 93:
      if ( a3 == 5 )
      {
        if ( *(_DWORD *)a2 == 1635017062 && *(_BYTE *)(a2 + 4) == 108 )
          return 0;
        else
          return 2;
      }
      else if ( a3 == 7 && *(_DWORD *)a2 == 1852989815 && *(_WORD *)(a2 + 4) == 28265 && *(_BYTE *)(a2 + 6) == 103 )
      {
        return 1;
      }
      else
      {
        return 2;
      }
  }
}
