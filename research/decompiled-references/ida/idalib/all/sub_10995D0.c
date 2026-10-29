__int64 __fastcall sub_10995D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _BYTE *v6; // rsi
  signed __int64 v7; // r13
  _QWORD *v8; // rax
  __m128i v9; // xmm0
  int v10; // r11d
  bool v11; // r8
  bool v12; // dl
  int v13; // ecx
  int v14; // edi
  bool v15; // r9
  bool v16; // r10
  bool v17; // si
  char v18; // r10
  char v19; // si
  bool v20; // si
  char v21; // si
  bool v22; // r13
  char v23; // r15
  char v24; // r13
  char v25; // r13
  char v26; // r13
  char v27; // r13
  char v28; // r9
  char v29; // r9
  char v30; // al
  _QWORD *v32; // [rsp+10h] [rbp-78h]
  _QWORD v33[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v34; // [rsp+30h] [rbp-58h]
  __int64 v35; // [rsp+40h] [rbp-48h]

  v6 = *(_BYTE **)(a1 + 216);
  v7 = *(_QWORD *)(a1 + 224);
  v8 = v33;
  v32 = v33;
  LOBYTE(v3) = v6 == nullptr && &v6[v7] != nullptr;
  if ( (_BYTE)v3 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v7 > 0xF )
  {
    if ( v7 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v8 = (_QWORD *)operator new(v7 + 1);
    v33[0] = v7;
    v32 = v8;
LABEL_43:
    memcpy(v8, v6, v7);
    v8 = v32;
    goto LABEL_5;
  }
  if ( v7 == 1 )
  {
    LOBYTE(v33[0]) = *v6;
    goto LABEL_5;
  }
  if ( v7 )
    goto LABEL_43;
LABEL_5:
  *((_BYTE *)v8 + v7) = 0;
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 248));
  v10 = *(_DWORD *)(a1 + 260);
  v35 = *(_QWORD *)(a1 + 264);
  v11 = a3 != 5;
  v34 = v9;
  v12 = a3 != 6;
  if ( a3 != 7 )
  {
    if ( a3 == 3 )
    {
      if ( *(_WORD *)a2 != 13364 || *(_BYTE *)(a2 + 2) != 48 )
      {
        if ( *(_WORD *)a2 == 13620 && *(_BYTE *)(a2 + 2) == 48
          || *(_WORD *)a2 == 12342 && *(_BYTE *)(a2 + 2) == 49
          || *(_WORD *)a2 == 12342 && *(_BYTE *)(a2 + 2) == 50
          || *(_WORD *)a2 == 12342 && *(_BYTE *)(a2 + 2) == 51 )
        {
          v15 = 1;
          v13 = 4;
          v14 = 4;
LABEL_18:
          v16 = 1;
          v17 = a3 != 2;
          if ( v15 )
            goto LABEL_19;
          goto LABEL_51;
        }
        v13 = 0;
        v14 = 3;
        v15 = 1;
        goto LABEL_188;
      }
    }
    else if ( a3 == 5 )
    {
      if ( *(_DWORD *)a2 != 1714435124 || *(_BYTE *)(a2 + 4) != 112 )
        goto LABEL_46;
    }
    else if ( a3 != 6 || *(_DWORD *)a2 != 878932080 || *(_WORD *)(a2 + 4) != 12340 )
    {
      goto LABEL_46;
    }
    v13 = 0;
    v14 = 3;
LABEL_17:
    v15 = a3 != 4;
    goto LABEL_18;
  }
  if ( *(_DWORD *)a2 == 1701733735 && *(_WORD *)(a2 + 4) == 26994 )
  {
    v13 = 4;
    v14 = 4;
    if ( *(_BYTE *)(a2 + 6) == 99 )
      goto LABEL_17;
  }
LABEL_46:
  v13 = 4;
  v14 = 4;
  v15 = a3 != 4;
  if ( a3 == 4 )
  {
    v15 = 0;
    if ( *(_DWORD *)a2 == 1697853494 )
    {
      v14 = 4;
      v13 = 4;
    }
    v16 = *(_DWORD *)a2 == 1697853494;
    goto LABEL_50;
  }
LABEL_188:
  if ( a3 != 5 )
  {
    if ( a3 == 3 )
    {
      if ( *(_WORD *)a2 == 12342 && *(_BYTE *)(a2 + 2) == 52 )
        goto LABEL_209;
      v17 = 1;
LABEL_21:
      if ( *(_WORD *)a2 == 12854 && *(_BYTE *)(a2 + 2) == 48 || *(_WORD *)a2 == 13110 && *(_BYTE *)(a2 + 2) == 48 )
        goto LABEL_24;
      goto LABEL_53;
    }
    v16 = 0;
LABEL_50:
    v17 = a3 != 2;
    if ( v15 )
    {
LABEL_19:
      if ( v16 )
      {
LABEL_25:
        v18 = a3 != 11;
LABEL_26:
        v3 = 1;
        goto LABEL_27;
      }
      if ( a3 != 3 )
        goto LABEL_53;
      goto LABEL_21;
    }
LABEL_51:
    if ( v16 )
      goto LABEL_25;
    if ( *(_DWORD *)a2 == 1697919030 )
      goto LABEL_24;
    goto LABEL_53;
  }
  if ( *(_DWORD *)a2 == 1697853494 && *(_BYTE *)(a2 + 4) == 118 )
    goto LABEL_209;
  v17 = 1;
LABEL_53:
  if ( v17 )
  {
    if ( v15 )
      goto LABEL_56;
    if ( *(_DWORD *)a2 != 808465463 )
    {
      if ( *(_DWORD *)a2 == 808793143 )
        goto LABEL_24;
      goto LABEL_60;
    }
LABEL_209:
    v14 = 4;
    v13 = 4;
    goto LABEL_25;
  }
  if ( *(_WORD *)a2 == 13159 )
    goto LABEL_24;
  if ( *(_WORD *)a2 == 13415 )
    goto LABEL_209;
LABEL_56:
  if ( a3 == 3
    && (*(_WORD *)a2 == 13415 && *(_BYTE *)(a2 + 2) == 43 || *(_WORD *)a2 == 13623 && *(_BYTE *)(a2 + 2) == 48) )
  {
    goto LABEL_24;
  }
  if ( !v15 )
  {
LABEL_60:
    if ( *(_DWORD *)a2 != 942945592 )
      goto LABEL_61;
LABEL_24:
    v13 = 4;
    v14 = 4;
    goto LABEL_25;
  }
  if ( a3 == 6 )
  {
    if ( *(_DWORD *)a2 == 878932080 && *(_WORD *)(a2 + 4) == 13616
      || *(_DWORD *)a2 == 878932080 && *(_WORD *)(a2 + 4) == 13366 )
    {
      v18 = v15;
    }
    else
    {
      if ( *(_DWORD *)a2 != 878932080 || *(_WORD *)(a2 + 4) != 13879 )
        goto LABEL_144;
      v18 = 1;
    }
LABEL_223:
    v14 = 3;
    v13 = 0;
    goto LABEL_26;
  }
LABEL_61:
  if ( a3 == 3 )
  {
    v18 = 1;
    if ( *(_WORD *)a2 == 14137 && *(_BYTE *)(a2 + 2) == 48 )
      goto LABEL_223;
    goto LABEL_63;
  }
LABEL_144:
  v18 = a3 != 11;
  if ( a3 == 6 )
  {
    if ( *(_DWORD *)a2 == 962818160 )
    {
      if ( *(_WORD *)(a2 + 4) == 12343 )
        v14 = 3;
      LOBYTE(v3) = *(_WORD *)(a2 + 4) == 12343;
      if ( *(_WORD *)(a2 + 4) == 12343 )
        v13 = 0;
    }
    goto LABEL_27;
  }
LABEL_63:
  if ( !v17 )
  {
    if ( *(_WORD *)a2 == 13671 )
    {
      v13 = 4;
      v14 = 4;
    }
    else
    {
      v3 = 0;
      if ( *(_WORD *)a2 != 12897 )
      {
        if ( v18 )
          goto LABEL_28;
        goto LABEL_67;
      }
      v13 = 0;
      v14 = 3;
    }
    v3 = 1;
    goto LABEL_28;
  }
  if ( a3 != 5 )
  {
LABEL_27:
    if ( (unsigned __int8)v18 | (unsigned __int8)v3 )
    {
LABEL_28:
      v19 = v3 | v15;
      goto LABEL_29;
    }
LABEL_67:
    if ( *(_QWORD *)a2 == 0x6C6C65632D637070LL && *(_WORD *)(a2 + 8) == 25133 && *(_BYTE *)(a2 + 10) == 101 )
    {
      v3 = 1;
      v14 = 3;
      v13 = 0;
    }
    else if ( !(v12 | (unsigned __int8)v3) )
    {
      goto LABEL_31;
    }
LABEL_69:
    v21 = v11 | v3;
    goto LABEL_70;
  }
  if ( *(_DWORD *)a2 == 1633906800 && *(_BYTE *)(a2 + 4) == 50 )
  {
    v13 = 0;
    v3 = 1;
    v14 = 3;
LABEL_30:
    if ( !((unsigned __int8)v3 | v12) )
    {
LABEL_31:
      if ( *(_DWORD *)a2 == 808465765 && *(_WORD *)(a2 + 4) == 25453 )
      {
LABEL_176:
        v14 = 4;
        v13 = 4;
        goto LABEL_159;
      }
      goto LABEL_32;
    }
    goto LABEL_69;
  }
  v19 = v15;
LABEL_29:
  if ( v19 )
    goto LABEL_30;
  v21 = v11 | v3;
  if ( *(_DWORD *)a2 == 808465765 )
  {
    v13 = 4;
    v14 = 4;
    goto LABEL_159;
  }
LABEL_70:
  if ( v21 )
  {
    if ( !(v12 | (unsigned __int8)v3) )
    {
      v3 = 0;
LABEL_32:
      if ( *(_DWORD *)a2 == 1702326128 && *(_WORD *)(a2 + 4) == 13170 )
      {
        v3 = 1;
        v14 = 4;
        v13 = 4;
        goto LABEL_160;
      }
      goto LABEL_33;
    }
  }
  else if ( *(_DWORD *)a2 == 808793445 && *(_BYTE *)(a2 + 4) == 48 )
  {
    goto LABEL_176;
  }
  if ( !(_BYTE)v3 )
  {
    if ( !v15 )
    {
      if ( *(_DWORD *)a2 == 863139696 )
      {
        v13 = 4;
        v14 = 4;
      }
      else
      {
        if ( *(_DWORD *)a2 != 879916912 )
        {
          v22 = 1;
          if ( *(_DWORD *)a2 == 896694128 )
            v13 = 0;
          LOBYTE(v3) = *(_DWORD *)a2 == 896694128;
          if ( *(_DWORD *)a2 == 896694128 )
            v14 = 3;
          else
            v22 = a3 != 5;
          v20 = a3 != 7;
          v23 = v3 | (a3 != 7);
          if ( !v22 )
          {
LABEL_162:
            if ( *(_DWORD *)a2 == 896694128 && *(_BYTE *)(a2 + 4) == 43 )
              goto LABEL_258;
            goto LABEL_163;
          }
LABEL_82:
          if ( v23 )
            goto LABEL_83;
LABEL_36:
          if ( *(_DWORD *)a2 == 1702326128 && *(_WORD *)(a2 + 4) == 13682 && *(_BYTE *)(a2 + 6) == 43 )
          {
LABEL_258:
            v3 = 1;
            v14 = 3;
            v13 = 0;
LABEL_85:
            if ( v15 | (unsigned __int8)v3 )
              goto LABEL_86;
LABEL_165:
            v24 = v11 | v3;
            if ( *(_DWORD *)a2 == 913471344 )
            {
              v13 = 0;
              v3 = 1;
              v14 = 3;
LABEL_89:
              v25 = v3 | v20;
              goto LABEL_90;
            }
LABEL_88:
            if ( !v24 )
            {
              if ( *(_DWORD *)a2 == 913471344 && *(_BYTE *)(a2 + 4) == 120 )
              {
                v3 = 1;
                v14 = 3;
                v13 = 0;
LABEL_93:
                v27 = v3 | v12;
                goto LABEL_94;
              }
              v26 = v15 | v3;
LABEL_92:
              if ( !v26 )
              {
                if ( *(_DWORD *)a2 == 930248560 )
                {
                  v13 = 2;
                  v3 = 1;
                  v14 = 3;
                  goto LABEL_97;
                }
                goto LABEL_197;
              }
              goto LABEL_93;
            }
            goto LABEL_89;
          }
          goto LABEL_37;
        }
        v13 = 0;
        v14 = 3;
      }
      v3 = 1;
      v20 = a3 != 7;
      goto LABEL_161;
    }
    if ( a3 != 6 )
      goto LABEL_160;
LABEL_33:
    v20 = a3 != 7;
    if ( *(_DWORD *)a2 != 1702326128 || *(_WORD *)(a2 + 4) != 13426 )
      goto LABEL_34;
    v3 = 1;
    v14 = 3;
    v13 = 0;
LABEL_161:
    v23 = v3 | v20;
    if ( !(v11 | (unsigned __int8)v3) )
      goto LABEL_162;
    goto LABEL_82;
  }
LABEL_159:
  v3 = 1;
LABEL_160:
  v20 = a3 != 7;
  if ( (unsigned __int8)v3 | v12 )
    goto LABEL_161;
  v3 = 0;
LABEL_34:
  if ( *(_DWORD *)a2 == 1702326128 && *(_WORD *)(a2 + 4) == 13682 )
  {
    v3 = 1;
    v14 = 3;
    v13 = 0;
    goto LABEL_84;
  }
  if ( !(v20 | (unsigned __int8)v3) )
    goto LABEL_36;
LABEL_83:
  if ( (unsigned __int8)v3 | v11 )
  {
LABEL_84:
    if ( (unsigned __int8)v3 | v20 )
      goto LABEL_85;
    v20 = 0;
    v3 = 0;
LABEL_37:
    if ( *(_DWORD *)a2 == 1702326128 && *(_WORD *)(a2 + 4) == 13682 && *(_BYTE *)(a2 + 6) == 120 )
    {
      v14 = 4;
      v3 = 1;
      v13 = 4;
LABEL_87:
      v24 = v11 | v3;
      goto LABEL_88;
    }
    goto LABEL_86;
  }
  v3 = 0;
LABEL_163:
  if ( *(_DWORD *)a2 == 896694128 && *(_BYTE *)(a2 + 4) == 120 )
  {
    v3 = 1;
    v13 = 4;
    v14 = 4;
  }
  else if ( !((unsigned __int8)v3 | v15) )
  {
    goto LABEL_165;
  }
LABEL_86:
  if ( (unsigned __int8)v3 | v12 )
    goto LABEL_87;
  if ( *(_DWORD *)a2 == 1702326128 && *(_WORD *)(a2 + 4) == 13938 )
  {
    v3 = 1;
    v14 = 3;
    v13 = 0;
    goto LABEL_91;
  }
  v25 = v20 | v3;
LABEL_90:
  if ( v25 )
  {
LABEL_91:
    v26 = v3 | v15;
    goto LABEL_92;
  }
  if ( *(_DWORD *)a2 == 1702326128 && *(_WORD *)(a2 + 4) == 13938 && *(_BYTE *)(a2 + 6) == 120 )
  {
    v14 = 3;
    v3 = 1;
    v13 = 0;
    goto LABEL_96;
  }
  v27 = v12 | v3;
LABEL_94:
  if ( v27 )
  {
    if ( v15 | (unsigned __int8)v3 )
    {
LABEL_96:
      if ( (unsigned __int8)v3 | v12 )
      {
LABEL_97:
        if ( (unsigned __int8)v3 | v15 )
          goto LABEL_98;
        v3 = 0;
LABEL_198:
        v28 = v11 | v3;
        if ( *(_DWORD *)a2 == 963802992 )
        {
          v3 = 1;
          v14 = 3;
          v13 = 2;
          goto LABEL_101;
        }
        goto LABEL_100;
      }
      v3 = 0;
      goto LABEL_192;
    }
    v3 = 0;
LABEL_197:
    if ( *(_DWORD *)a2 != 947025776 )
      goto LABEL_198;
LABEL_231:
    v3 = 1;
    v14 = 3;
    v13 = 2;
    goto LABEL_99;
  }
  if ( *(_DWORD *)a2 != 1702326128 || *(_WORD *)(a2 + 4) != 14194 )
  {
LABEL_192:
    if ( *(_DWORD *)a2 != 1702326128 || *(_WORD *)(a2 + 4) != 14450 )
    {
LABEL_193:
      if ( *(_DWORD *)a2 == 1702326128 && *(_WORD *)(a2 + 4) == 14706 )
      {
        v13 = 2;
        v14 = 3;
        goto LABEL_155;
      }
      goto LABEL_101;
    }
    goto LABEL_231;
  }
  v14 = 3;
  v3 = 1;
  v13 = 2;
LABEL_98:
  if ( !((unsigned __int8)v3 | v12) )
  {
    v3 = 0;
    goto LABEL_193;
  }
LABEL_99:
  v28 = v11 | v3;
LABEL_100:
  if ( !v28 )
  {
    if ( *(_DWORD *)a2 != 829585264 || *(_BYTE *)(a2 + 4) != 48 )
      goto LABEL_133;
    goto LABEL_154;
  }
LABEL_101:
  if ( v20 | (unsigned __int8)v3 )
  {
    if ( v11 | (unsigned __int8)v3 )
      goto LABEL_103;
    v3 = 0;
LABEL_133:
    if ( *(_DWORD *)a2 != 829585264 || *(_BYTE *)(a2 + 4) != 49 )
      goto LABEL_135;
    v14 = 3;
    v13 = 2;
    v30 = 1;
LABEL_156:
    v29 = v30 | v11;
    goto LABEL_108;
  }
  if ( *(_DWORD *)a2 == 1702326128 && *(_WORD *)(a2 + 4) == 12658 && *(_BYTE *)(a2 + 6) == 48 )
  {
LABEL_154:
    v14 = 3;
    v13 = 2;
    goto LABEL_155;
  }
LABEL_103:
  if ( (_BYTE)v3 )
  {
LABEL_155:
    v30 = 1;
    goto LABEL_156;
  }
  if ( v20 )
  {
LABEL_135:
    v30 = v3 | (a3 != 3);
    if ( !v30 )
    {
      if ( *(_WORD *)a2 != 28784 || *(_BYTE *)(a2 + 2) != 99 )
        goto LABEL_138;
LABEL_271:
      v30 = 1;
      v14 = 4;
      v13 = 4;
      goto LABEL_139;
    }
    v30 = v3;
    goto LABEL_156;
  }
  if ( *(_DWORD *)a2 == 1702326128 && *(_WORD *)(a2 + 4) == 12658 && *(_BYTE *)(a2 + 6) == 49 )
  {
    v13 = 2;
    v14 = 3;
LABEL_123:
    v30 = 1;
    goto LABEL_124;
  }
  if ( *(_DWORD *)a2 == 1702326128 && *(_WORD *)(a2 + 4) == 28786 && *(_BYTE *)(a2 + 6) == 99 )
  {
    v13 = 4;
    v14 = 4;
    goto LABEL_123;
  }
  v29 = a3 != 5;
  v30 = 0;
LABEL_108:
  if ( !v29 )
  {
    if ( *(_DWORD *)a2 != 862154864 || *(_BYTE *)(a2 + 4) != 50 )
      goto LABEL_110;
    goto LABEL_271;
  }
LABEL_124:
  if ( a3 == 9 && !v30 )
  {
    if ( *(_QWORD *)a2 == 0x3663707265776F70LL && *(_BYTE *)(a2 + 8) == 52 )
    {
      v30 = 1;
      v14 = 4;
      v13 = 4;
      goto LABEL_111;
    }
    goto LABEL_127;
  }
LABEL_138:
  if ( !((unsigned __int8)v30 | v11) )
  {
    v30 = 0;
LABEL_110:
    if ( *(_DWORD *)a2 != 912486512 || *(_BYTE *)(a2 + 4) != 52 )
      goto LABEL_111;
    v30 = 1;
    v14 = 4;
    v13 = 4;
    goto LABEL_112;
  }
LABEL_139:
  v18 |= v30;
LABEL_127:
  if ( v18 )
  {
LABEL_111:
    if ( (unsigned __int8)v30 | v20 )
      goto LABEL_112;
    if ( *(_DWORD *)a2 != 912486512 || *(_WORD *)(a2 + 4) != 27700 || *(_BYTE *)(a2 + 6) != 101 )
      goto LABEL_113;
LABEL_131:
    v13 = 4;
    v14 = 4;
    goto LABEL_115;
  }
  if ( *(_QWORD *)a2 == 0x3663707265776F70LL && *(_WORD *)(a2 + 8) == 27700 && *(_BYTE *)(a2 + 10) == 101 )
    goto LABEL_131;
LABEL_112:
  if ( !((unsigned __int8)v30 | v12) )
  {
    v13 = 4;
    v14 = 4;
    goto LABEL_115;
  }
LABEL_113:
  if ( !v30 )
  {
    v13 = 4;
    v14 = 4;
  }
LABEL_115:
  LOBYTE(v3) = v13 != 4;
  if ( v10 == 7 )
    LOBYTE(v3) = v14 != 4;
  if ( v32 != v33 )
    operator delete(v32);
  return v3;
}
