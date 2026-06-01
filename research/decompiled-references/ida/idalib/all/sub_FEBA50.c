__int64 __fastcall sub_FEBA50(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 result; // rax
  char v4; // cl
  char v5; // r9
  char v6; // r9
  char v7; // r9
  char v8; // r10
  bool v9; // r9
  bool v10; // dl
  bool v11; // cl
  bool v12; // r10
  bool v13; // r8

  switch ( a2 )
  {
    case 3LL:
      if ( (*(_WORD *)a1 != 14435 || *(_BYTE *)(a1 + 2) != 57) && (*(_WORD *)a1 != 14691 || *(_BYTE *)(a1 + 2) != 48) )
      {
        v2 = 0;
        if ( *(_WORD *)a1 == 14691 )
        {
          v4 = 1;
          result = 3;
          if ( *(_BYTE *)(a1 + 2) == 57 )
            goto LABEL_17;
        }
        result = 0;
        v4 = 0;
        if ( *(_WORD *)a1 == 14691 && *(_BYTE *)(a1 + 2) == 120 )
        {
          v2 = 0;
LABEL_202:
          result = 3;
          v4 = 1;
          goto LABEL_17;
        }
        v2 = 0;
LABEL_28:
        if ( *(_WORD *)a1 == 12643 && *(_BYTE *)(a1 + 2) == 49 )
        {
          v4 = 1;
          result = 5;
          goto LABEL_22;
        }
        goto LABEL_29;
      }
      v2 = 0;
LABEL_67:
      result = 0;
LABEL_68:
      v5 = 1;
      v4 = 1;
      goto LABEL_15;
    case 12LL:
      if ( *(_QWORD *)a1 != 0x3A393938396F7369LL || (v2 = 1, *(_DWORD *)(a1 + 8) != 809056561) )
      {
        v2 = 1;
        if ( *(_QWORD *)a1 == 0x3A393938396F7369LL && *(_DWORD *)(a1 + 8) == 960051505 )
          goto LABEL_202;
        result = 0;
        v4 = 0;
LABEL_26:
        if ( *(_QWORD *)a1 == 0x3A393938396F7369LL && *(_DWORD *)(a1 + 8) == 2017016113 )
          goto LABEL_202;
        goto LABEL_27;
      }
      goto LABEL_67;
    case 14LL:
      if ( *(_QWORD *)a1 == 0x3A393938396F7369LL && *(_DWORD *)(a1 + 8) == 876165425 )
      {
        v2 = 1;
        result = 1;
        if ( *(_WORD *)(a1 + 12) == 14640 )
          goto LABEL_68;
      }
LABEL_10:
      v2 = 1;
      result = 0;
      v4 = 0;
      v5 = 0;
      goto LABEL_15;
  }
  if ( a2 != 5 )
    goto LABEL_10;
  if ( *(_DWORD *)a1 == 947220071 && *(_BYTE *)(a1 + 4) == 57 || *(_DWORD *)a1 == 963997287 && *(_BYTE *)(a1 + 4) == 48 )
  {
    v2 = 1;
    result = 2;
    v4 = 1;
    v5 = 1;
    goto LABEL_74;
  }
  v2 = 1;
  v5 = 0;
  result = 0;
  v4 = 0;
LABEL_15:
  if ( a2 == 12 )
  {
    if ( v5 )
    {
LABEL_17:
      v6 = 1;
LABEL_18:
      if ( v2 || v6 )
        goto LABEL_20;
LABEL_29:
      v2 = 0;
      if ( *(_WORD *)a1 == 12643 && *(_BYTE *)(a1 + 2) == 120 )
      {
LABEL_224:
        result = 5;
        v4 = 1;
        goto LABEL_22;
      }
      goto LABEL_30;
    }
    goto LABEL_26;
  }
LABEL_74:
  if ( v5 )
    goto LABEL_17;
  if ( a2 != 5 )
  {
LABEL_27:
    if ( !v2 )
      goto LABEL_28;
    if ( a2 == 12 )
    {
      if ( *(_QWORD *)a1 == 0x3A393938396F7369LL && *(_DWORD *)(a1 + 8) == 825307186 )
        goto LABEL_224;
LABEL_118:
      if ( *(_QWORD *)a1 == 0x3A393938396F7369LL && *(_DWORD *)(a1 + 8) == 2016489522 )
        goto LABEL_224;
      goto LABEL_119;
    }
LABEL_78:
    v6 = 0;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)a1 != 963997287 || *(_BYTE *)(a1 + 4) != 57)
    && (*(_DWORD *)a1 != 963997287 || *(_BYTE *)(a1 + 4) != 120) )
  {
    goto LABEL_78;
  }
  v6 = 1;
  result = 4;
  v4 = 1;
LABEL_20:
  if ( a2 == 12 )
  {
    if ( v6 )
    {
LABEL_22:
      v7 = 1;
LABEL_34:
      if ( v2 || v7 )
        goto LABEL_36;
      goto LABEL_121;
    }
    goto LABEL_118;
  }
  if ( v6 )
    goto LABEL_22;
LABEL_30:
  if ( a2 != 5 )
  {
LABEL_119:
    if ( !v2 )
    {
      if ( *(_WORD *)a1 == 12643 && *(_BYTE *)(a1 + 2) == 55 )
        goto LABEL_228;
LABEL_121:
      v2 = 0;
      if ( *(_WORD *)a1 != 12643 || *(_BYTE *)(a1 + 2) != 56 )
        goto LABEL_122;
LABEL_198:
      result = 7;
      v4 = 1;
      goto LABEL_38;
    }
    if ( a2 == 12 )
    {
      if ( *(_QWORD *)a1 != 0x3A393938396F7369LL || *(_DWORD *)(a1 + 8) != 925970482 )
        goto LABEL_150;
      goto LABEL_198;
    }
    goto LABEL_33;
  }
  if ( (*(_DWORD *)a1 != 829779559 || *(_BYTE *)(a1 + 4) != 49)
    && (*(_DWORD *)a1 != 829779559 || *(_BYTE *)(a1 + 4) != 120) )
  {
LABEL_33:
    v7 = 0;
    goto LABEL_34;
  }
  v7 = 1;
  result = 6;
  v4 = 1;
LABEL_36:
  if ( a2 == 12 )
  {
    if ( v7 )
    {
LABEL_38:
      v8 = 1;
      goto LABEL_39;
    }
LABEL_150:
    if ( *(_QWORD *)a1 == 0x3A393938396F7369LL && *(_DWORD *)(a1 + 8) == 942747698 )
    {
LABEL_228:
      v4 = 1;
      result = 7;
      goto LABEL_38;
    }
LABEL_151:
    if ( !v2 )
    {
      v9 = a2 != 5;
      v10 = a2 != 2;
      if ( *(_WORD *)a1 == 12899 && *(_BYTE *)(a1 + 2) == 51 )
        goto LABEL_154;
      goto LABEL_126;
    }
    if ( a2 == 12 )
    {
      if ( *(_QWORD *)a1 == 0x3A393938396F7369LL && *(_DWORD *)(a1 + 8) == 875704370 )
      {
        v8 = v2;
        v4 = 1;
        result = 9;
      }
      else
      {
        v8 = 0;
      }
      v10 = v2;
      v9 = v2;
LABEL_83:
      if ( v8 )
        goto LABEL_41;
      if ( a2 != 5 )
        goto LABEL_128;
LABEL_85:
      if ( *(_DWORD *)a1 == 846556775 && *(_BYTE *)(a1 + 4) == 51
        || *(_DWORD *)a1 == 846556775 && *(_BYTE *)(a1 + 4) == 120 )
      {
        result = 10;
        goto LABEL_41;
      }
      if ( *(_DWORD *)a1 == 846556775 && *(_BYTE *)(a1 + 4) == 121 )
      {
        result = 12;
        goto LABEL_41;
      }
      if ( *(_DWORD *)a1 == 959130467 && *(_BYTE *)(a1 + 4) == 56
        || *(_DWORD *)a1 == 808135523 && *(_BYTE *)(a1 + 4) == 51 )
      {
        result = 13;
        goto LABEL_41;
      }
      goto LABEL_90;
    }
    v8 = 0;
LABEL_39:
    v9 = a2 != 5;
    v10 = a2 != 2;
    if ( !v2 )
    {
      if ( v8 )
      {
LABEL_41:
        v4 = 1;
        goto LABEL_42;
      }
      goto LABEL_126;
    }
    goto LABEL_83;
  }
  if ( v7 )
    goto LABEL_38;
LABEL_122:
  if ( a2 != 5 )
    goto LABEL_151;
  if ( *(_DWORD *)a1 == 829779559 && *(_BYTE *)(a1 + 4) == 55 || *(_DWORD *)a1 == 829779559 && *(_BYTE *)(a1 + 4) == 56 )
  {
    v9 = 0;
    v10 = 1;
    result = 8;
    goto LABEL_41;
  }
  v9 = 0;
  v10 = 1;
  if ( v2 )
    goto LABEL_85;
LABEL_126:
  if ( *(_WORD *)a1 == 12899 && *(_BYTE *)(a1 + 2) == 120 )
  {
LABEL_154:
    result = 9;
    goto LABEL_41;
  }
  if ( *(_WORD *)a1 == 12899 && *(_BYTE *)(a1 + 2) == 121 )
  {
    result = 11;
    goto LABEL_41;
  }
LABEL_128:
  if ( a2 != 7 )
  {
    if ( a2 != 5 )
    {
LABEL_102:
      if ( !((unsigned __int8)v4 | v9) )
      {
        if ( *(_DWORD *)a1 == 774990947 && *(_BYTE *)(a1 + 4) == 48 )
        {
          v9 = 0;
          result = 27;
          goto LABEL_45;
        }
        goto LABEL_104;
      }
      goto LABEL_42;
    }
LABEL_90:
    if ( *(_DWORD *)a1 == 824912739 && *(_BYTE *)(a1 + 4) == 49
      || *(_DWORD *)a1 == 808135523 && *(_BYTE *)(a1 + 4) == 120 )
    {
      result = 15;
      goto LABEL_41;
    }
    if ( *(_DWORD *)a1 == 824912739 && *(_BYTE *)(a1 + 4) == 52
      || *(_DWORD *)a1 == 824912739 && *(_BYTE *)(a1 + 4) == 121 )
    {
      result = 17;
      goto LABEL_41;
    }
    if ( *(_DWORD *)a1 == 824912739 && *(_BYTE *)(a1 + 4) == 55
      || *(_DWORD *)a1 == 824912739 && *(_BYTE *)(a1 + 4) == 122 )
    {
      result = 19;
      goto LABEL_41;
    }
    if ( *(_DWORD *)a1 == 841689955 && *(_BYTE *)(a1 + 4) == 48
      || *(_DWORD *)a1 == 841689955 && *(_BYTE *)(a1 + 4) == 97 )
    {
      result = 21;
      goto LABEL_41;
    }
    if ( *(_DWORD *)a1 == 841689955 && *(_BYTE *)(a1 + 4) == 51
      || *(_DWORD *)a1 == 841689955 && *(_BYTE *)(a1 + 4) == 98 )
    {
      result = 23;
      goto LABEL_41;
    }
    if ( *(_DWORD *)a1 == 841689955 && *(_BYTE *)(a1 + 4) == 99
      || *(_DWORD *)a1 == 841689955 && *(_BYTE *)(a1 + 4) == 54 )
    {
      v4 = 1;
      result = 25;
      goto LABEL_42;
    }
    goto LABEL_102;
  }
  if ( *(_DWORD *)a1 == 729116263 && *(_WORD *)(a1 + 4) == 14635 && *(_BYTE *)(a1 + 6) == 56
    || *(_DWORD *)a1 == 729116263 && *(_WORD *)(a1 + 4) == 12331 && *(_BYTE *)(a1 + 6) == 51 )
  {
    result = 14;
    goto LABEL_41;
  }
  if ( *(_DWORD *)a1 == 729116263 && *(_WORD *)(a1 + 4) == 12587 && *(_BYTE *)(a1 + 6) == 49
    || *(_DWORD *)a1 == 729116263 && *(_WORD *)(a1 + 4) == 12331 && *(_BYTE *)(a1 + 6) == 120 )
  {
    result = 16;
    goto LABEL_41;
  }
  if ( *(_DWORD *)a1 == 729116263 && *(_WORD *)(a1 + 4) == 12587 && *(_BYTE *)(a1 + 6) == 52
    || *(_DWORD *)a1 == 729116263 && *(_WORD *)(a1 + 4) == 12587 && *(_BYTE *)(a1 + 6) == 121 )
  {
    result = 18;
    goto LABEL_41;
  }
  if ( *(_DWORD *)a1 == 729116263 && *(_WORD *)(a1 + 4) == 12587 && *(_BYTE *)(a1 + 6) == 55
    || *(_DWORD *)a1 == 729116263 && *(_WORD *)(a1 + 4) == 12587 && *(_BYTE *)(a1 + 6) == 122 )
  {
    result = 20;
    goto LABEL_41;
  }
  if ( *(_DWORD *)a1 == 729116263 && *(_WORD *)(a1 + 4) == 12843 && *(_BYTE *)(a1 + 6) == 48
    || *(_DWORD *)a1 == 729116263 && *(_WORD *)(a1 + 4) == 12843 && *(_BYTE *)(a1 + 6) == 97 )
  {
    result = 22;
    goto LABEL_41;
  }
  if ( *(_DWORD *)a1 == 729116263 && *(_WORD *)(a1 + 4) == 12843 && *(_BYTE *)(a1 + 6) == 51
    || *(_DWORD *)a1 == 729116263 && *(_WORD *)(a1 + 4) == 12843 && *(_BYTE *)(a1 + 6) == 98 )
  {
    result = 24;
    goto LABEL_41;
  }
  if ( *(_DWORD *)a1 == 729116263 && *(_WORD *)(a1 + 4) == 12843 && *(_BYTE *)(a1 + 6) == 99
    || *(_DWORD *)a1 == 729116263 && *(_WORD *)(a1 + 4) == 12843 && *(_BYTE *)(a1 + 6) == 54 )
  {
    result = 26;
    goto LABEL_45;
  }
LABEL_42:
  if ( !((unsigned __int8)v4 | v10) )
  {
    if ( *(_WORD *)a1 == 27747 )
    {
      result = 27;
      goto LABEL_45;
    }
    if ( v4 )
    {
LABEL_45:
      v11 = 1;
      v12 = a2 != 8;
      v13 = a2 != 9;
      goto LABEL_46;
    }
    goto LABEL_109;
  }
  if ( v4 )
    goto LABEL_45;
  if ( !v9 )
  {
LABEL_104:
    if ( *(_DWORD *)a1 == 774990947 && *(_BYTE *)(a1 + 4) == 49 )
    {
      v9 = 0;
      result = 28;
      goto LABEL_45;
    }
    if ( *(_DWORD *)a1 == 774990947 && *(_BYTE *)(a1 + 4) == 50 )
    {
      v9 = 0;
      result = 29;
      goto LABEL_45;
    }
    if ( *(_DWORD *)a1 == 775056483 && *(_BYTE *)(a1 + 4) == 48 )
    {
      v9 = 0;
      result = 30;
      goto LABEL_45;
    }
    if ( *(_DWORD *)a1 == 775122019 && *(_BYTE *)(a1 + 4) == 48 )
    {
      v9 = 0;
      result = 31;
      goto LABEL_45;
    }
    v9 = 0;
  }
LABEL_109:
  v12 = a2 != 8;
  v13 = a2 != 9;
  if ( a2 == 8 )
  {
    v12 = 0;
    if ( *(_QWORD *)a1 == 0x302E312B2B636C63LL )
      result = 32;
    v11 = *(_QWORD *)a1 == 0x302E312B2B636C63LL;
    v13 = 1;
    goto LABEL_113;
  }
  if ( v9 )
  {
    v11 = 0;
LABEL_46:
    if ( !v11 && !v13 )
    {
      if ( *(_QWORD *)a1 == 0x3230322B2B636C63LL && *(_BYTE *)(a1 + 8) == 49 )
        return 33;
      v13 = 0;
LABEL_49:
      if ( !v9 )
      {
        if ( *(_DWORD *)a1 == 774982723 && *(_BYTE *)(a1 + 4) == 49 )
          return 28;
        if ( *(_DWORD *)a1 == 774982723 && *(_BYTE *)(a1 + 4) == 50 )
          return 29;
        if ( *(_DWORD *)a1 == 775048259 && *(_BYTE *)(a1 + 4) == 48 )
          return 30;
        if ( *(_DWORD *)a1 == 775113795 && *(_BYTE *)(a1 + 4) == 48 )
          return 31;
        if ( *(_DWORD *)a1 == 725830723 && *(_BYTE *)(a1 + 4) == 43 )
          return 32;
      }
      goto LABEL_55;
    }
LABEL_113:
    if ( v11 || v10 )
      goto LABEL_114;
    goto LABEL_162;
  }
  if ( *(_DWORD *)a1 == 727936099 && *(_BYTE *)(a1 + 4) == 43 )
    return 32;
  v11 = 0;
  if ( v10 )
  {
LABEL_114:
    if ( v11 )
      return result;
    goto LABEL_49;
  }
LABEL_162:
  if ( *(_WORD *)a1 == 19523 )
    return 27;
  if ( v11 )
    goto LABEL_164;
LABEL_55:
  if ( v12 )
  {
    if ( !v13 )
    {
      if ( *(_QWORD *)a1 == 0x3230322B2B434C43LL && *(_BYTE *)(a1 + 8) == 49 )
        return 33;
      goto LABEL_176;
    }
    v11 = 0;
LABEL_164:
    if ( a2 == 4 && !v11 )
    {
LABEL_166:
      if ( *(_DWORD *)a1 == 1819503720 )
        return 34;
      else
        return 42;
    }
    if ( v11 )
      return result;
LABEL_176:
    result = 42;
    if ( v12 )
      return result;
    goto LABEL_58;
  }
  if ( *(_QWORD *)a1 == 0x302E312B2B434C43LL )
    return 32;
  if ( a2 == 4 )
    goto LABEL_166;
LABEL_58:
  if ( *(_QWORD *)a1 == 0x353130326C736C68LL )
    return 35;
  result = 36;
  if ( *(_QWORD *)a1 != 0x363130326C736C68LL )
  {
    result = 37;
    if ( *(_QWORD *)a1 != 0x373130326C736C68LL )
    {
      result = 38;
      if ( *(_QWORD *)a1 != 0x383130326C736C68LL )
      {
        result = 39;
        if ( *(_QWORD *)a1 != 0x313230326C736C68LL )
        {
          result = 40;
          if ( *(_QWORD *)a1 != 0x783230326C736C68LL )
            return (unsigned int)(*(_QWORD *)a1 != 0x793230326C736C68LL) + 41;
        }
      }
    }
  }
  return result;
}
