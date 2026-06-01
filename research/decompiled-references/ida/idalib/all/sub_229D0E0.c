__int64 __fastcall sub_229D0E0(__int64 a1, __int64 a2, unsigned int a3)
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
  char v23; // dl
  bool v24; // dl
  char v25; // bp
  char v26; // bp

  if ( a2 == 7 )
  {
    if ( *(_DWORD *)a1 == 1701733735 && *(_WORD *)(a1 + 4) == 26994 && *(_BYTE *)(a1 + 6) == 99 )
      return *((unsigned int *)&off_2BEC420 + 18 * a3 + 12);
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
      goto LABEL_41;
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
LABEL_41:
      v10 = a2 != 4;
LABEL_42:
      v11 = 1;
LABEL_43:
      v19 = v8 | v11;
      goto LABEL_44;
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
        goto LABEL_159;
      }
      v4 = 1;
      if ( *(_DWORD *)(a1 + 8) != 808530285 )
      {
        v4 = 0;
        goto LABEL_159;
      }
      goto LABEL_41;
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
      goto LABEL_42;
    }
    v10 = 1;
    if ( v9 )
    {
      v10 = v9;
      v11 = 0;
      goto LABEL_43;
    }
    goto LABEL_10;
  }
LABEL_159:
  if ( !v8 )
  {
    if ( *(_QWORD *)a1 == 0x696D6474376D7261LL )
      v4 = 1;
    v10 = a2 != 4;
    if ( *(_QWORD *)a1 == 0x696D6474376D7261LL )
      goto LABEL_42;
    goto LABEL_163;
  }
  v10 = a2 != 4;
  if ( v9 )
  {
LABEL_163:
    if ( a2 == 7 )
    {
      if ( *(_DWORD *)a1 == 929919585 && *(_WORD *)(a1 + 4) == 12337 && *(_BYTE *)(a1 + 6) == 116
        || *(_DWORD *)a1 == 929919585 && *(_WORD *)(a1 + 4) == 12338 && *(_BYTE *)(a1 + 6) == 116 )
      {
        v11 = 1;
        v4 = 1;
LABEL_50:
        v12 = v5 | v11;
        goto LABEL_51;
      }
      v19 = v8;
      v11 = 0;
LABEL_44:
      if ( !v19 )
      {
        if ( *(_QWORD *)a1 == 0x696D6474396D7261LL )
          goto LABEL_14;
        goto LABEL_52;
      }
      goto LABEL_50;
    }
    goto LABEL_12;
  }
LABEL_10:
  if ( *(_QWORD *)a1 == 0x696D6474376D7261LL && *(_WORD *)(a1 + 8) == 29485 )
  {
    v4 = 1;
    v9 = 0;
    goto LABEL_42;
  }
  v9 = 0;
LABEL_12:
  if ( v10 )
  {
    v11 = 0;
    goto LABEL_43;
  }
  v11 = 0;
  v12 = v5;
  if ( *(_DWORD *)a1 == 963474017 )
    goto LABEL_14;
LABEL_51:
  if ( !v12 )
  {
    if ( *(_DWORD *)a1 == 963474017 && *(_WORD *)(a1 + 4) == 12338 )
      goto LABEL_14;
    goto LABEL_58;
  }
LABEL_52:
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
          goto LABEL_64;
        goto LABEL_19;
      }
LABEL_232:
      if ( *(_DWORD *)a1 == 963474017 && *(_BYTE *)(a1 + 4) == 101 )
        goto LABEL_64;
      goto LABEL_24;
    }
LABEL_16:
    v14 = v13 | v11;
    if ( v8 | (unsigned __int8)v11 )
      goto LABEL_17;
    goto LABEL_61;
  }
LABEL_58:
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
  v14 = (a2 != 5) | v11;
  if ( v21 )
  {
LABEL_17:
    v15 = a2 != 11;
    if ( v14 )
      goto LABEL_18;
    goto LABEL_232;
  }
LABEL_61:
  if ( *(_QWORD *)a1 == 0x74303230316D7261LL )
  {
    v11 = 1;
    v4 = 1;
  }
  v15 = a2 != 11;
  if ( v11 )
    goto LABEL_64;
LABEL_19:
  if ( !v6 )
  {
    if ( *(_QWORD *)a1 == 0x2D653634396D7261LL && *(_BYTE *)(a1 + 8) == 115
      || *(_QWORD *)a1 == 0x2D653636396D7261LL && *(_BYTE *)(a1 + 8) == 115 )
    {
      goto LABEL_64;
    }
    if ( *(_QWORD *)a1 == 0x2D653836396D7261LL )
    {
      if ( *(_BYTE *)(a1 + 8) == 115 )
        goto LABEL_64;
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
      goto LABEL_64;
    goto LABEL_26;
  }
  if ( v11 )
  {
LABEL_64:
    v4 = 1;
    goto LABEL_65;
  }
  if ( !v8 )
  {
    if ( *(_QWORD *)a1 == 0x65303230316D7261LL )
      goto LABEL_64;
    v4 = 0;
    if ( *(_QWORD *)a1 == 0x65323230316D7261LL )
      goto LABEL_64;
    goto LABEL_134;
  }
LABEL_26:
  if ( !v9 )
  {
    if ( *(_QWORD *)a1 == 0x6A653632396D7261LL && *(_WORD *)(a1 + 8) == 29485
      || *(_QWORD *)a1 == 0x6A363331316D7261LL && *(_WORD *)(a1 + 8) == 29485 )
    {
      result = 1;
LABEL_31:
      v4 = 1;
      goto LABEL_32;
    }
    goto LABEL_65;
  }
LABEL_134:
  v25 = v15 | v4;
  if ( !(v15 | (unsigned __int8)v4) )
  {
    if ( *(_QWORD *)a1 != 0x6A363331316D7261LL )
      goto LABEL_136;
    if ( *(_WORD *)(a1 + 8) != 11622 )
      goto LABEL_136;
    result = 3;
    if ( *(_BYTE *)(a1 + 10) != 115 )
      goto LABEL_136;
LABEL_315:
    v15 = v25;
    goto LABEL_31;
  }
LABEL_65:
  if ( (unsigned __int8)v5 | (unsigned __int8)v4 )
  {
    if ( !v4 )
    {
      if ( v15 )
      {
        if ( !v7 )
          goto LABEL_69;
        v15 = v7;
        result = 1;
        goto LABEL_32;
      }
LABEL_136:
      result = 1;
      if ( (*(_QWORD *)a1 != 0x6F6E65726F63706DLL || *(_WORD *)(a1 + 8) != 26230 || *(_BYTE *)(a1 + 10) != 112)
        && (*(_QWORD *)a1 != 0x6A363731316D7261LL || *(_WORD *)(a1 + 8) != 11642 || *(_BYTE *)(a1 + 10) != 115) )
      {
        goto LABEL_138;
      }
      v15 = 0;
      v4 = 1;
      result = 1;
LABEL_32:
      v17 = v6 | v4;
      if ( !(v7 | (unsigned __int8)v4) )
        goto LABEL_33;
LABEL_72:
      if ( v17 )
        goto LABEL_73;
      goto LABEL_141;
    }
    v25 = v15;
    result = 1;
    goto LABEL_315;
  }
  if ( *(_DWORD *)a1 == 1868787821 )
  {
    result = 3;
    if ( *(_WORD *)(a1 + 4) == 25970 )
      goto LABEL_31;
  }
  if ( v4 )
    goto LABEL_412;
  if ( !v7 )
  {
LABEL_69:
    if ( *(_QWORD *)a1 == 0x6A363731316D7261LL && *(_DWORD *)(a1 + 8) == 1932355194 )
    {
      v22 = 1;
      v4 = 1;
      result = 3;
    }
    else
    {
      v22 = 0;
      v4 = 0;
      result = 1;
    }
    v7 = 0;
    v17 = v6 | v4;
    if ( !v22 )
    {
LABEL_33:
      if ( *(_QWORD *)a1 == 0x74363531316D7261LL && *(_DWORD *)(a1 + 8) == 1932355122 )
      {
        v4 = 1;
        result = 3;
        goto LABEL_74;
      }
LABEL_73:
      if ( !((unsigned __int8)v4 | (a2 != 13)) )
      {
        if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_DWORD *)(a1 + 8) == 1970040880 && *(_BYTE *)(a1 + 12) == 115 )
          goto LABEL_205;
        goto LABEL_75;
      }
LABEL_74:
      if ( v6 | (unsigned __int8)v4 )
      {
LABEL_75:
        if ( v13 | (unsigned __int8)v4 )
          goto LABEL_76;
        if ( *(_DWORD *)a1 != 808477555 || *(_BYTE *)(a1 + 4) != 48 )
        {
          if ( !v4 )
            goto LABEL_82;
LABEL_206:
          v23 = 1;
          goto LABEL_207;
        }
LABEL_205:
        result = 1;
        goto LABEL_206;
      }
      goto LABEL_142;
    }
    goto LABEL_72;
  }
  if ( v15 )
  {
LABEL_412:
    result = 1;
    goto LABEL_32;
  }
  result = 1;
LABEL_138:
  if ( *(_QWORD *)a1 == 0x74363531316D7261LL && *(_WORD *)(a1 + 8) == 11570 && *(_BYTE *)(a1 + 10) == 115 )
  {
    v26 = 1;
    v4 = 1;
    result = 1;
  }
  else
  {
    v26 = v6;
    v4 = 0;
  }
  v15 = 0;
  if ( v26 )
    goto LABEL_73;
LABEL_141:
  if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_BYTE *)(a1 + 8) == 48 )
  {
    v4 = 1;
    result = 1;
    goto LABEL_75;
  }
LABEL_142:
  if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_BYTE *)(a1 + 8) == 49 )
    goto LABEL_205;
LABEL_76:
  if ( v4 )
    goto LABEL_206;
  if ( !v6 )
  {
    if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_BYTE *)(a1 + 8) == 53
      || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_BYTE *)(a1 + 8) == 55 )
    {
      goto LABEL_272;
    }
    if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_BYTE *)(a1 + 8) == 56 )
    {
      result = 18;
      goto LABEL_206;
    }
    if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_BYTE *)(a1 + 8) == 57 )
    {
      result = 19;
      goto LABEL_206;
    }
  }
LABEL_82:
  if ( !v9
    && (*(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 12849
     || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 13617
     || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 14129) )
  {
LABEL_272:
    result = 20;
    goto LABEL_206;
  }
  if ( v13 )
  {
    if ( v6 )
    {
      v23 = 0;
LABEL_207:
      if ( !(v9 | (unsigned __int8)v23) )
        goto LABEL_208;
      goto LABEL_89;
    }
    if ( *(_QWORD *)a1 != 0x722D786574726F63LL || *(_BYTE *)(a1 + 8) != 52 )
    {
LABEL_91:
      if ( *(_QWORD *)a1 == 0x722D786574726F63LL && *(_BYTE *)(a1 + 8) == 53 )
      {
LABEL_210:
        result = 6;
        goto LABEL_195;
      }
      if ( *(_QWORD *)a1 == 0x722D786574726F63LL && *(_BYTE *)(a1 + 8) == 55
        || *(_QWORD *)a1 == 0x722D786574726F63LL && *(_BYTE *)(a1 + 8) == 56 )
      {
        result = 7;
        goto LABEL_195;
      }
      v23 = 0;
      goto LABEL_95;
    }
    v23 = v13;
    result = 1;
  }
  else
  {
    if ( *(_DWORD *)a1 == 1767993963 && *(_BYTE *)(a1 + 4) == 116 )
    {
      result = 20;
      goto LABEL_195;
    }
    v23 = 0;
    if ( !v9 )
    {
LABEL_208:
      if ( *(_QWORD *)a1 == 0x722D786574726F63LL && *(_WORD *)(a1 + 8) == 26164 )
        goto LABEL_210;
      goto LABEL_96;
    }
  }
LABEL_89:
  if ( v23 )
  {
LABEL_195:
    v23 = 1;
    goto LABEL_98;
  }
  if ( !v6 )
    goto LABEL_91;
LABEL_95:
  if ( !v9 )
  {
LABEL_96:
    if ( *(_QWORD *)a1 == 0x722D786574726F63LL && *(_WORD *)(a1 + 8) == 12853 )
      return 21;
    goto LABEL_97;
  }
  if ( a2 == 14 )
  {
    if ( *(_QWORD *)a1 != 0x722D786574726F63LL || *(_DWORD *)(a1 + 8) != 1819292213 || *(_WORD *)(a1 + 12) != 29557 )
      goto LABEL_99;
    v23 = v9;
    result = 21;
LABEL_98:
    if ( v23 )
      return result;
LABEL_99:
    if ( !v6 )
    {
      if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_BYTE *)(a1 + 8) == 51 )
        return 1;
      if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_BYTE *)(a1 + 8) == 52 )
        return 12;
      if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_BYTE *)(a1 + 8) == 55 )
        return 13;
    }
    if ( !v9 )
      goto LABEL_104;
    goto LABEL_199;
  }
  v23 = 0;
LABEL_97:
  if ( v13 | (unsigned __int8)v23 )
    goto LABEL_98;
  if ( *(_DWORD *)a1 == 808674163 && *(_BYTE *)(a1 + 4) == 48 )
    return 1;
  if ( v23 )
    return result;
  if ( !v9 )
  {
LABEL_104:
    if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_WORD *)(a1 + 8) == 13106 )
      return 1;
    if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_WORD *)(a1 + 8) == 13107 )
      return 14;
    v8 = 0;
    if ( v15 )
    {
      if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_WORD *)(a1 + 8) == 13621
        || *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_WORD *)(a1 + 8) == 13624
        || *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_WORD *)(a1 + 8) == 12853 )
      {
        return 16;
      }
      if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 12851
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 13619
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 13109
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 13621
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 14133
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 12855
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 13111
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 13623
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 13879 )
      {
        return 22;
      }
      v8 = 0;
      if ( !v7 )
        goto LABEL_110;
LABEL_180:
      if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 14135
        || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 14391 )
      {
        return 22;
      }
      v8 = 0;
      goto LABEL_183;
    }
    goto LABEL_107;
  }
LABEL_199:
  if ( !v8 )
  {
    if ( *(_QWORD *)a1 == 0x31636D2D72617473LL )
      return 14;
    goto LABEL_201;
  }
  if ( v15 )
  {
LABEL_201:
    v8 = 1;
    goto LABEL_109;
  }
LABEL_107:
  if ( *(_QWORD *)a1 == 0x6D2D786574726F63LL && *(_WORD *)(a1 + 8) == 13619 && *(_BYTE *)(a1 + 10) == 112 )
    return 14;
  v15 = 0;
LABEL_109:
  if ( !v7 )
  {
LABEL_110:
    if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_DWORD *)(a1 + 8) == 1700869687
      || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_DWORD *)(a1 + 8) == 1700870199 )
    {
      return 22;
    }
    goto LABEL_112;
  }
  if ( !v8 )
    goto LABEL_180;
  v8 = v7;
LABEL_183:
  if ( !v15 )
  {
    if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 14391 && *(_BYTE *)(a1 + 10) == 99 )
      return 22;
    if ( *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 12597 && *(_BYTE *)(a1 + 10) == 48
      || *(_QWORD *)a1 == 0x612D786574726F63LL && *(_WORD *)(a1 + 8) == 12599 && *(_BYTE *)(a1 + 10) == 48 )
    {
      return 21;
    }
  }
LABEL_112:
  if ( !v6 )
  {
    if ( *(_QWORD *)a1 == 0x782D786574726F63LL )
    {
      if ( *(_BYTE *)(a1 + 8) == 49 )
        result = 22;
      v6 = *(_BYTE *)(a1 + 8) == 49;
    }
    v24 = a2 != 7;
    if ( v6 )
      return result;
    goto LABEL_118;
  }
  v24 = a2 != 7;
  if ( v8 )
  {
LABEL_118:
    if ( !v15 )
    {
      if ( *(_QWORD *)a1 == 0x65737265766F656ELL && *(_WORD *)(a1 + 8) == 28205 && *(_BYTE *)(a1 + 10) == 49 )
        return 22;
      if ( *(_QWORD *)a1 == 0x65737265766F656ELL && *(_WORD *)(a1 + 8) == 28205 && *(_BYTE *)(a1 + 10) == 50 )
        return 21;
      if ( *(_QWORD *)a1 == 0x65737265766F656ELL && *(_WORD *)(a1 + 8) == 30253 && *(_BYTE *)(a1 + 10) == 49 )
        return 22;
    }
    goto LABEL_122;
  }
  if ( *(_QWORD *)a1 == 0x782D786574726F63LL && *(_WORD *)(a1 + 8) == 25393 )
    return 22;
LABEL_122:
  if ( v24 )
  {
    if ( !v6
      && (*(_QWORD *)a1 == 0x6D2D736F6E797865LL && *(_BYTE *)(a1 + 8) == 51
       || *(_QWORD *)a1 == 0x6D2D736F6E797865LL && *(_BYTE *)(a1 + 8) == 52
       || *(_QWORD *)a1 == 0x6D2D736F6E797865LL && *(_BYTE *)(a1 + 8) == 53) )
    {
      return 22;
    }
  }
  else if ( *(_DWORD *)a1 == 1818458467 && *(_WORD *)(a1 + 4) == 28271 && *(_BYTE *)(a1 + 6) == 101 )
  {
    return 22;
  }
  if ( !v10 )
  {
    if ( *(_DWORD *)a1 == 1870230123 )
      return 22;
LABEL_126:
    if ( !v13 && *(_DWORD *)a1 == 1718187891 )
    {
      result = 20;
      if ( *(_BYTE *)(a1 + 4) == 116 )
        return result;
    }
    return 0;
  }
  if ( v5 )
    goto LABEL_126;
  if ( *(_DWORD *)a1 == 1835890537 && *(_WORD *)(a1 + 4) == 29816
    || *(_DWORD *)a1 == 1633907576 && *(_WORD *)(a1 + 4) == 25964 )
  {
    return 1;
  }
  result = 0;
  if ( !v24 )
    return 0;
  return result;
}
