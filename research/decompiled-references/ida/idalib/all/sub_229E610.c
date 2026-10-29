__int64 __fastcall sub_229E610(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v3; // al
  char v4; // dl
  char v5; // r10
  bool v6; // cl
  bool v7; // r12
  bool v8; // r8
  bool v9; // bl
  bool v10; // r13
  char v11; // al
  char v12; // bp
  bool v13; // r9
  char v14; // bp
  bool v15; // r11
  __int64 result; // rax
  char v17; // bp
  char v18; // al
  char v19; // r9
  bool v20; // bp
  char v21; // r11
  char v22; // r14
  char v23; // bp
  char v24; // dl
  bool v25; // dl
  char v26; // bp
  char v27; // bp
  char v28; // r14

  if ( a2 == 7 )
  {
    if ( *(_DWORD *)a1 == 1701733735 && *(_WORD *)(a1 + 4) == 26994 && *(_BYTE *)(a1 + 6) == 99 )
      return (__int64)*(&off_2BEC420 + 9 * a3 + 7);
    v3 = 0;
    v4 = 0;
    goto LABEL_4;
  }
  v6 = a2 != 9;
  if ( a2 == 4 )
  {
    v3 = *(_DWORD *)a1 == 946696801;
    v4 = v3;
LABEL_4:
    v5 = 1;
    v6 = 1;
    v7 = 1;
    v8 = a2 != 8;
    v9 = a2 != 10;
    goto LABEL_5;
  }
  v7 = a2 != 12;
  if ( a2 == 6 )
  {
    if ( *(_DWORD *)a1 != 946696801 || (v18 = 1, v4 = 1, *(_WORD *)(a1 + 4) != 12337) )
    {
      v18 = 0;
      v4 = 0;
    }
    v8 = 1;
    v9 = 1;
    v5 = 0;
    v7 = 1;
    if ( v18 )
      goto LABEL_35;
  }
  else
  {
    if ( a2 == 9 )
    {
      if ( *(_QWORD *)a1 != 0x7261676E6F727473LL || (v3 = 1, v4 = 1, *(_BYTE *)(a1 + 8) != 109) )
      {
        v3 = 0;
        v4 = 0;
      }
      v8 = 1;
      v9 = 1;
      v5 = 1;
      v6 = 0;
LABEL_5:
      if ( !v3 )
        goto LABEL_6;
LABEL_35:
      v10 = a2 != 4;
LABEL_36:
      v11 = 1;
LABEL_37:
      v19 = v8 | v11;
      goto LABEL_38;
    }
    v8 = a2 != 8;
    v9 = a2 != 10;
    if ( a2 == 12 )
    {
      v5 = 1;
      v6 = 1;
      v7 = 0;
      if ( *(_QWORD *)a1 != 0x7261676E6F727473LL )
      {
        v4 = 0;
        goto LABEL_161;
      }
      v4 = 1;
      if ( *(_DWORD *)(a1 + 8) != 808530285 )
      {
        v4 = 0;
        goto LABEL_161;
      }
      goto LABEL_35;
    }
    v5 = 1;
    v6 = 1;
    v4 = 0;
  }
LABEL_6:
  if ( a2 == 13 )
  {
    if ( *(_QWORD *)a1 == 0x7261676E6F727473LL && *(_DWORD *)(a1 + 8) == 808530285 && *(_BYTE *)(a1 + 12) == 48
      || *(_QWORD *)a1 == 0x7261676E6F727473LL && *(_DWORD *)(a1 + 8) == 825307501 && *(_BYTE *)(a1 + 12) == 48 )
    {
      v4 = 1;
      v10 = 1;
      goto LABEL_36;
    }
    v10 = 1;
    if ( v9 )
    {
      v10 = v9;
      v11 = 0;
      goto LABEL_37;
    }
    goto LABEL_10;
  }
LABEL_161:
  if ( !v8 )
  {
    if ( *(_QWORD *)a1 == 0x696D6474376D7261LL )
      v4 = 1;
    v10 = a2 != 4;
    if ( *(_QWORD *)a1 == 0x696D6474376D7261LL )
      goto LABEL_36;
    goto LABEL_165;
  }
  v10 = a2 != 4;
  if ( v9 )
  {
LABEL_165:
    if ( a2 == 7 )
    {
      if ( *(_DWORD *)a1 == 929919585 && *(_WORD *)(a1 + 4) == 12337 && *(_BYTE *)(a1 + 6) == 116
        || *(_DWORD *)a1 == 929919585 && *(_WORD *)(a1 + 4) == 12338 && *(_BYTE *)(a1 + 6) == 116 )
      {
        v11 = 1;
        v4 = 1;
LABEL_44:
        v12 = v11 | v5;
        goto LABEL_45;
      }
      v19 = v8;
      v11 = 0;
LABEL_38:
      if ( !v19 )
      {
        if ( *(_QWORD *)a1 == 0x696D6474396D7261LL )
          goto LABEL_14;
        goto LABEL_46;
      }
      goto LABEL_44;
    }
    goto LABEL_12;
  }
LABEL_10:
  if ( *(_QWORD *)a1 == 0x696D6474376D7261LL && *(_WORD *)(a1 + 8) == 29485 )
  {
    v4 = 1;
    v9 = 0;
    goto LABEL_36;
  }
  v9 = 0;
LABEL_12:
  if ( v10 )
  {
    v11 = 0;
    goto LABEL_37;
  }
  v11 = 0;
  v12 = v5;
  if ( *(_DWORD *)a1 == 963474017 )
    goto LABEL_14;
LABEL_45:
  if ( !v12 )
  {
    if ( *(_DWORD *)a1 == 963474017 && *(_WORD *)(a1 + 4) == 12338 )
      goto LABEL_14;
    goto LABEL_52;
  }
LABEL_46:
  if ( v11 )
    goto LABEL_15;
  if ( a2 == 7
    && (*(_DWORD *)a1 == 963474017 && *(_WORD *)(a1 + 4) == 12338 && *(_BYTE *)(a1 + 6) == 116
     || *(_DWORD *)a1 == 963474017 && *(_WORD *)(a1 + 4) == 12850 && *(_BYTE *)(a1 + 6) == 116
     || *(_DWORD *)a1 == 963474017 && *(_WORD *)(a1 + 4) == 12340 && *(_BYTE *)(a1 + 6) == 116) )
  {
LABEL_14:
    v4 = 1;
LABEL_15:
    v11 = 1;
    v13 = a2 != 5;
    goto LABEL_16;
  }
  v20 = v5;
  if ( v5 )
  {
    v13 = a2 != 5;
    if ( !v6 )
    {
      if ( *(_QWORD *)a1 == 0x6D647430316D7261LL && *(_BYTE *)(a1 + 8) == 105 )
      {
        v11 = v5;
        v4 = 1;
        v6 = 0;
      }
      else
      {
        v20 = a2 != 5;
        v11 = 0;
        v6 = 0;
      }
      v15 = a2 != 11;
      if ( v20 )
      {
LABEL_18:
        if ( v11 )
          goto LABEL_58;
        goto LABEL_19;
      }
LABEL_235:
      if ( *(_DWORD *)a1 == 963474017 && *(_BYTE *)(a1 + 4) == 101 )
        goto LABEL_227;
      goto LABEL_24;
    }
LABEL_16:
    v14 = v11 | v13;
    if ( (unsigned __int8)v11 | v8 )
      goto LABEL_17;
    goto LABEL_55;
  }
LABEL_52:
  if ( *(_DWORD *)a1 == 859402341 && *(_WORD *)(a1 + 4) == 12849 )
  {
    v21 = 1;
    v11 = 1;
    v4 = 1;
  }
  else
  {
    v21 = v8 | v11;
  }
  v13 = a2 != 5;
  v14 = v11 | (a2 != 5);
  if ( v21 )
  {
LABEL_17:
    v15 = a2 != 11;
    if ( v14 )
      goto LABEL_18;
    goto LABEL_235;
  }
LABEL_55:
  if ( *(_QWORD *)a1 == 0x74303230316D7261LL )
  {
    v11 = 1;
    v4 = 1;
  }
  v15 = a2 != 11;
  if ( v11 )
    goto LABEL_58;
LABEL_19:
  if ( !v6 )
  {
    if ( *(_QWORD *)a1 == 0x2D653634396D7261LL && *(_BYTE *)(a1 + 8) == 115
      || *(_QWORD *)a1 == 0x2D653636396D7261LL && *(_BYTE *)(a1 + 8) == 115 )
    {
      goto LABEL_227;
    }
    if ( *(_QWORD *)a1 == 0x2D653836396D7261LL )
    {
      if ( *(_BYTE *)(a1 + 8) == 115 )
      {
LABEL_227:
        result = 1025;
        goto LABEL_59;
      }
      v11 = 0;
    }
    else
    {
      v11 = 0;
    }
  }
LABEL_24:
  if ( !((unsigned __int8)v5 | (unsigned __int8)v11) )
  {
    v5 = 0;
    if ( *(_DWORD *)a1 == 829256289 && *(_WORD *)(a1 + 4) == 25904 )
      goto LABEL_227;
    goto LABEL_26;
  }
  if ( v11 )
  {
LABEL_58:
    result = 1;
LABEL_59:
    v4 = 1;
LABEL_60:
    v17 = v5 | v4;
    goto LABEL_61;
  }
  if ( !v8 )
  {
    if ( *(_QWORD *)a1 == 0x65303230316D7261LL )
      goto LABEL_227;
    v4 = 0;
    if ( *(_QWORD *)a1 == 0x65323230316D7261LL )
      goto LABEL_227;
LABEL_130:
    v26 = v15 | v4;
    if ( !(v15 | (unsigned __int8)v4) )
    {
      if ( *(_QWORD *)a1 != 0x6A363331316D7261LL
        || *(_WORD *)(a1 + 8) != 11622
        || (result = 1025, *(_BYTE *)(a1 + 10) != 115) )
      {
        result = 1;
        goto LABEL_133;
      }
LABEL_358:
      v15 = v26;
      goto LABEL_351;
    }
    result = 1;
    goto LABEL_60;
  }
LABEL_26:
  if ( v9 )
    goto LABEL_130;
  if ( *(_QWORD *)a1 == 0x6A653632396D7261LL && *(_WORD *)(a1 + 8) == 29485
    || *(_QWORD *)a1 == 0x6A363331316D7261LL && *(_WORD *)(a1 + 8) == 29485 )
  {
    goto LABEL_350;
  }
  result = 1;
  v17 = v5 | v4;
LABEL_61:
  if ( v17 )
  {
    if ( !v4 )
    {
      if ( v15 )
      {
        if ( !v7 )
          goto LABEL_65;
        v15 = v7;
        goto LABEL_146;
      }
LABEL_133:
      if ( *(_QWORD *)a1 == 0x6F6E65726F63706DLL && *(_WORD *)(a1 + 8) == 26230 && *(_BYTE *)(a1 + 10) == 112 )
      {
        result = 1025;
      }
      else
      {
        if ( *(_QWORD *)a1 != 0x6A363731316D7261LL || *(_WORD *)(a1 + 8) != 11642 || *(_BYTE *)(a1 + 10) != 115 )
          goto LABEL_135;
        result = 1281;
      }
      v15 = 0;
      goto LABEL_351;
    }
    v26 = v15;
    goto LABEL_358;
  }
  if ( *(_DWORD *)a1 == 1868787821 && *(_WORD *)(a1 + 4) == 25970 )
  {
LABEL_350:
    result = 1025;
LABEL_351:
    v4 = 1;
    v28 = v7 | 1;
LABEL_147:
    v23 = v6 | v4;
    if ( !v28 )
      goto LABEL_148;
LABEL_68:
    if ( v23 )
      goto LABEL_69;
    goto LABEL_138;
  }
  if ( v4 )
    goto LABEL_146;
  if ( !v7 )
  {
LABEL_65:
    if ( *(_QWORD *)a1 == 0x6A363731316D7261LL && *(_DWORD *)(a1 + 8) == 1932355194 )
    {
      v22 = 1;
      v4 = 1;
      result = 1281;
    }
    else
    {
      v22 = 0;
      v4 = 0;
    }
    v7 = 0;
    v23 = v6 | v4;
    if ( !v22 )
    {
LABEL_148:
      if ( *(_QWORD *)a1 == 0x74363531316D7261LL && *(_DWORD *)(a1 + 8) == 1932355122 )
      {
        v4 = 1;
        result = 1025;
        goto LABEL_70;
      }
LABEL_69:
      if ( !((unsigned __int8)v4 | (a2 != 13)) )
      {
        if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_DWORD *)(a1 + 8) == 1970040880 && *(_BYTE *)(a1 + 12) == 115 )
          goto LABEL_204;
        goto LABEL_71;
      }
LABEL_70:
      if ( v6 | (unsigned __int8)v4 )
      {
LABEL_71:
        if ( v13 | (unsigned __int8)v4 )
          goto LABEL_72;
        if ( *(_DWORD *)a1 != 808477555 || *(_BYTE *)(a1 + 4) != 48 )
        {
          if ( !v4 )
            goto LABEL_78;
LABEL_205:
          v24 = 1;
          goto LABEL_206;
        }
LABEL_204:
        result = 1;
        goto LABEL_205;
      }
      goto LABEL_139;
    }
    goto LABEL_68;
  }
  if ( v15 )
  {
LABEL_146:
    v28 = v7 | v4;
    goto LABEL_147;
  }
LABEL_135:
  if ( *(_QWORD *)a1 == 0x74363531316D7261LL && *(_WORD *)(a1 + 8) == 11570 && *(_BYTE *)(a1 + 10) == 115 )
  {
    v27 = 1;
    v4 = 1;
    result = 1025;
  }
  else
  {
    v27 = v6;
    v4 = 0;
  }
  v15 = 0;
  if ( v27 )
    goto LABEL_69;
LABEL_138:
  if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_BYTE *)(a1 + 8) == 48 )
  {
    v4 = 1;
    result = 1;
    goto LABEL_71;
  }
LABEL_139:
  if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_BYTE *)(a1 + 8) == 49 )
    goto LABEL_204;
LABEL_72:
  if ( v4 )
    goto LABEL_205;
  if ( !v6 )
  {
    if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_BYTE *)(a1 + 8) == 53 )
      goto LABEL_366;
    if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_BYTE *)(a1 + 8) == 55 )
      goto LABEL_267;
    if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_BYTE *)(a1 + 8) == 56 )
    {
      result = 1280;
      goto LABEL_205;
    }
    if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_BYTE *)(a1 + 8) == 57 )
    {
LABEL_366:
      result = 1344;
      goto LABEL_205;
    }
  }
LABEL_78:
  if ( !v9
    && (*(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 12849
     || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 13617
     || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 14129) )
  {
LABEL_267:
    result = 1904;
    goto LABEL_205;
  }
  if ( v13 )
  {
    if ( v6 )
    {
      v24 = 0;
LABEL_206:
      if ( !((unsigned __int8)v24 | v9) )
        goto LABEL_207;
      goto LABEL_85;
    }
    if ( *(_QWORD *)a1 != 0x722D786574726F63LL || *(_BYTE *)(a1 + 8) != 52 )
    {
LABEL_87:
      if ( *(_QWORD *)a1 == 0x722D786574726F63LL && *(_BYTE *)(a1 + 8) == 53
        || *(_QWORD *)a1 == 0x722D786574726F63LL && *(_BYTE *)(a1 + 8) == 55
        || *(_QWORD *)a1 == 0x722D786574726F63LL && *(_BYTE *)(a1 + 8) == 56 )
      {
        result = 1136;
        goto LABEL_194;
      }
      v24 = 0;
      goto LABEL_91;
    }
    v24 = v13;
    result = 1041;
  }
  else
  {
    if ( *(_DWORD *)a1 == 1767993963 && *(_BYTE *)(a1 + 4) == 116 )
    {
      result = 1072;
      goto LABEL_194;
    }
    v24 = 0;
    if ( !v9 )
    {
LABEL_207:
      if ( *(_QWORD *)a1 == 0x722D786574726F63LL && *(_WORD *)(a1 + 8) == 26164 )
      {
        result = 1041;
        goto LABEL_194;
      }
      goto LABEL_92;
    }
  }
LABEL_85:
  if ( v24 )
  {
LABEL_194:
    v24 = 1;
    goto LABEL_94;
  }
  if ( !v6 )
    goto LABEL_87;
LABEL_91:
  if ( !v9 )
  {
LABEL_92:
    if ( *(_QWORD *)a1 == 0x722D786574726F63LL && *(_WORD *)(a1 + 8) == 12853 )
      return 1651;
    goto LABEL_93;
  }
  if ( a2 == 14 )
  {
    if ( *(_QWORD *)a1 != 0x722D786574726F63LL || *(_DWORD *)(a1 + 8) != 1819292213 || *(_WORD *)(a1 + 12) != 29557 )
      goto LABEL_95;
    v24 = v9;
    result = 1651;
LABEL_94:
    if ( v24 )
      return result;
LABEL_95:
    if ( !v6 )
    {
      if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_BYTE *)(a1 + 8) == 51 )
        return 17;
      if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_BYTE *)(a1 + 8) == 52
        || *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_BYTE *)(a1 + 8) == 55 )
      {
        return 1041;
      }
    }
    if ( !v9 )
      goto LABEL_100;
    goto LABEL_198;
  }
  v24 = 0;
LABEL_93:
  if ( v13 | (unsigned __int8)v24 )
    goto LABEL_94;
  if ( *(_DWORD *)a1 == 808674163 && *(_BYTE *)(a1 + 4) == 48 )
    return 17;
  if ( v24 )
    return result;
  if ( !v9 )
  {
LABEL_100:
    if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_WORD *)(a1 + 8) == 13106 )
      return 17;
    if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_WORD *)(a1 + 8) == 13107 )
      return 1040;
    v8 = 0;
    if ( v15 )
    {
      if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_WORD *)(a1 + 8) == 13621 )
        return 2148015128LL;
      if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_WORD *)(a1 + 8) == 13624
        || *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_WORD *)(a1 + 8) == 12853 )
      {
        return 3221756952LL;
      }
      if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 12851
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 13619
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 13109 )
      {
        return 1906;
      }
      if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 13621 )
        return 16242;
      if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 14133
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 12855
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 13111 )
      {
        return 1906;
      }
      if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 13623
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 13879 )
      {
        return 16242;
      }
      v8 = 0;
      if ( !v7 )
        goto LABEL_106;
LABEL_182:
      if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 14135
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 14391 )
      {
        return 16242;
      }
      v8 = 0;
      goto LABEL_185;
    }
    goto LABEL_103;
  }
LABEL_198:
  if ( !v8 )
  {
    if ( *(_QWORD *)a1 == 0x31636D2D72617473LL )
      return 1040;
    goto LABEL_200;
  }
  if ( v15 )
  {
LABEL_200:
    v8 = 1;
    goto LABEL_105;
  }
LABEL_103:
  if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_WORD *)(a1 + 8) == 13619 && *(_BYTE *)(a1 + 10) == 112 )
    return 1040;
  v15 = 0;
LABEL_105:
  if ( !v7 )
  {
LABEL_106:
    if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_DWORD *)(a1 + 8) == 1700869687 )
      return 16242;
    if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_DWORD *)(a1 + 8) == 1700870199 )
      return 14194;
    goto LABEL_108;
  }
  if ( !v8 )
    goto LABEL_182;
  v8 = v7;
LABEL_185:
  if ( !v15 )
  {
    if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 14391 && *(_BYTE *)(a1 + 10) == 99 )
      return 16242;
    if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 12597 && *(_BYTE *)(a1 + 10) == 48
      || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 12599 && *(_BYTE *)(a1 + 10) == 48 )
    {
      return (__int64)&loc_333772;
    }
  }
LABEL_108:
  if ( v6 )
  {
    v25 = a2 != 7;
    if ( !v8 )
    {
      if ( *(_QWORD *)a1 == 0x782D786574726F63LL && *(_WORD *)(a1 + 8) == 25393 )
        return 16242;
LABEL_118:
      if ( v25 )
      {
        if ( !v6 )
        {
          if ( *(_QWORD *)a1 == 0x6D2D736F6E797865LL && *(_BYTE *)(a1 + 8) == 51 )
            return 1906;
          if ( *(_QWORD *)a1 == 0x6D2D736F6E797865LL && *(_BYTE *)(a1 + 8) == 52
            || *(_QWORD *)a1 == 0x6D2D736F6E797865LL && *(_BYTE *)(a1 + 8) == 53 )
          {
            return 16242;
          }
        }
      }
      else if ( *(_DWORD *)a1 == 1818458467 && *(_WORD *)(a1 + 4) == 28271 && *(_BYTE *)(a1 + 6) == 101 )
      {
        return 1906;
      }
      if ( v10 )
      {
        if ( !v5 )
        {
          if ( *(_DWORD *)a1 == 1835890537 && *(_WORD *)(a1 + 4) == 29816
            || *(_DWORD *)a1 == 1633907576 && *(_WORD *)(a1 + 4) == 25964 )
          {
            return 1;
          }
          result = 0;
          if ( v25 )
            return result;
          return *(_DWORD *)a1 == 1635151465 && *(_WORD *)(a1 + 4) == 26988 && *(_BYTE *)(a1 + 6) == 100;
        }
LABEL_122:
        if ( !v13 )
        {
          if ( *(_DWORD *)a1 == 1718187891 )
          {
            result = 1072;
            if ( *(_BYTE *)(a1 + 4) == 116 )
              return result;
          }
          return 0;
        }
        if ( v25 )
          return 0;
        return *(_DWORD *)a1 == 1635151465 && *(_WORD *)(a1 + 4) == 26988 && *(_BYTE *)(a1 + 6) == 100;
      }
      if ( *(_DWORD *)a1 != 1870230123 )
        goto LABEL_122;
      return 1906;
    }
  }
  else
  {
    if ( *(_QWORD *)a1 == 0x782D786574726F63LL )
    {
      if ( *(_BYTE *)(a1 + 8) == 49 )
        result = 16242;
      v6 = *(_BYTE *)(a1 + 8) == 49;
    }
    v25 = a2 != 7;
    if ( v6 )
      return result;
  }
  if ( v15 )
    goto LABEL_118;
  if ( *(_QWORD *)a1 == 0x65737265766F656ELL && *(_WORD *)(a1 + 8) == 28205 && *(_BYTE *)(a1 + 10) == 49 )
    return 16242;
  if ( *(_QWORD *)a1 == 0x65737265766F656ELL && *(_WORD *)(a1 + 8) == 28205 && *(_BYTE *)(a1 + 10) == 50 )
    return (__int64)&loc_333772;
  if ( *(_QWORD *)a1 != 0x65737265766F656ELL )
    goto LABEL_118;
  if ( *(_WORD *)(a1 + 8) != 30253 )
    goto LABEL_118;
  result = 1064818;
  if ( *(_BYTE *)(a1 + 10) != 49 )
    goto LABEL_118;
  return result;
}
