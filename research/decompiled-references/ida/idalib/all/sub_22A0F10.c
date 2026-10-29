__int64 __fastcall sub_22A0F10(__int64 a1, __int64 a2)
{
  bool v2; // al
  __int64 *v3; // r10
  __int64 v4; // r11
  __int64 *v5; // rsi
  __int64 v6; // rdi
  __int64 *v7; // r10
  __int64 v8; // r11
  __int64 *v9; // rsi
  __int64 v10; // rdi
  __int64 *v11; // r10
  __int64 v12; // r11
  __int64 *v13; // r10
  __int64 v14; // r11
  __int64 *v15; // r10
  __int64 v16; // r11
  __int64 *v17; // r10
  __int64 v18; // r11
  __int64 *v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // r10
  __int64 v22; // r11
  __int64 *v23; // r10
  __int64 v24; // r11
  __int64 result; // rax
  __int64 v26; // [rsp+8h] [rbp-40h] BYREF
  __int64 v27; // [rsp+10h] [rbp-38h] BYREF
  __int64 v28; // [rsp+18h] [rbp-30h]
  __int64 v29; // [rsp+20h] [rbp-28h]
  __int64 v30; // [rsp+28h] [rbp-20h]

  v27 = a1;
  v28 = a2;
  v30 = 0;
  switch ( a2 )
  {
    case 5LL:
      if ( *(_DWORD *)a1 == 809003875 && *(_BYTE *)(a1 + 4) == 49 )
        goto LABEL_181;
      if ( *(_DWORD *)a1 == 809003875 && *(_BYTE *)(a1 + 4) == 50
        || *(_DWORD *)a1 == 842020965 && *(_BYTE *)(a1 + 4) == 116
        || *(_DWORD *)a1 == 842020979 && *(_BYTE *)(a1 + 4) == 116 )
      {
        goto LABEL_185;
      }
      if ( *(_DWORD *)a1 == 809003875 && *(_BYTE *)(a1 + 4) == 51 )
      {
LABEL_8:
        LOBYTE(v30) = 1;
        v29 = 0x78002602001LL;
        break;
      }
      goto LABEL_14;
    case 6LL:
      if ( *(_DWORD *)a1 == 809003875 && *(_WORD *)(a1 + 4) == 29745 )
        goto LABEL_181;
      if ( *(_DWORD *)a1 == 809003875 && *(_WORD *)(a1 + 4) == 29746 )
      {
LABEL_185:
        LOBYTE(v30) = 1;
        v29 = 0x18002600001LL;
        break;
      }
      if ( *(_DWORD *)a1 != 809003875 || *(_WORD *)(a1 + 4) != 27186 )
      {
        if ( *(_DWORD *)a1 == 809003875 && *(_WORD *)(a1 + 4) == 26675
          || *(_DWORD *)a1 == 809003875 && *(_WORD *)(a1 + 4) == 29747 )
        {
          goto LABEL_8;
        }
        if ( *(_DWORD *)a1 != 809003875 || *(_WORD *)(a1 + 4) != 26163 )
        {
          v2 = 1;
          if ( *(_DWORD *)a1 == 809003875 && *(_WORD *)(a1 + 4) == 25907 )
            goto LABEL_170;
          goto LABEL_15;
        }
LABEL_402:
        LOBYTE(v30) = 1;
        v29 = 0x78002602502LL;
        break;
      }
      LOBYTE(v30) = 1;
      v29 = 0x18002E00000LL;
      break;
    case 4LL:
      if ( *(_DWORD *)a1 == 825243749 )
      {
LABEL_181:
        LOBYTE(v30) = 1;
        v29 = 0x8000600001LL;
        break;
      }
      if ( *(_DWORD *)a1 == 842020965 || *(_DWORD *)a1 == 842020979 )
        goto LABEL_185;
      goto LABEL_14;
    case 7LL:
      if ( *(_DWORD *)a1 == 809003875 && *(_WORD *)(a1 + 4) == 26675 && *(_BYTE *)(a1 + 6) == 116 )
        goto LABEL_8;
      if ( *(_DWORD *)a1 == 809003875 && *(_WORD *)(a1 + 4) == 26163 && *(_BYTE *)(a1 + 6) == 104 )
        goto LABEL_402;
      if ( *(_DWORD *)a1 == 809003875 && *(_WORD *)(a1 + 4) == 25907 && *(_BYTE *)(a1 + 6) == 104
        || *(_DWORD *)a1 == 809003875 && *(_WORD *)(a1 + 4) == 25907 && *(_BYTE *)(a1 + 6) == 116 )
      {
        goto LABEL_170;
      }
      if ( *(_DWORD *)a1 == 809003875 && *(_WORD *)(a1 + 4) == 25907 && *(_BYTE *)(a1 + 6) == 102 )
      {
LABEL_295:
        LOBYTE(v30) = 1;
        v29 = 0x78002672502LL;
      }
      break;
    default:
LABEL_14:
      v2 = a2 != 8;
LABEL_15:
      if ( v2 )
        break;
      if ( *(_QWORD *)a1 != 0x7468653330386B63LL )
      {
        if ( *(_QWORD *)a1 != 0x6866653330386B63LL )
          break;
        goto LABEL_295;
      }
LABEL_170:
      LOBYTE(v30) = 1;
      v29 = 0x78002672000LL;
      break;
  }
  v26 = 0x78002602502LL;
  sub_22A0C80((__int64)&v27, &v26, (__int64)"ck803ft");
  if ( (_BYTE)v30 )
    goto LABEL_21;
  if ( v28 != 8 )
  {
    if ( v28 != 9 )
      goto LABEL_19;
    if ( *(_QWORD *)v27 != 0x6866653330386B63LL || *(_BYTE *)(v27 + 8) != 116 )
      goto LABEL_21;
LABEL_278:
    LOBYTE(v30) = 1;
    v29 = 0x78002672502LL;
    goto LABEL_21;
  }
  if ( *(_QWORD *)v27 == 0x7466653330386B63LL )
    goto LABEL_278;
LABEL_19:
  if ( v28 == 7 && *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 29235 && *(_BYTE *)(v27 + 6) == 49 )
  {
    LOBYTE(v30) = 1;
    v29 = 0x2F8002682000LL;
  }
LABEL_21:
  v5 = v3;
  v6 = v4;
  v26 = 0x3F8006682000LL;
  sub_22A0C80(v4, v3, (__int64)"ck803r2");
  v26 = 0x3F8006682000LL;
  sub_22A0C80(v6, v5, (__int64)"ck803r3");
  if ( (_BYTE)v30 )
    goto LABEL_80;
  if ( v28 == 8 )
  {
    switch ( *(_QWORD *)v27 )
    {
      case 0x3172683330386B63LL:
        goto LABEL_284;
      case 0x3272683330386B63LL:
      case 0x3372683330386B63LL:
        goto LABEL_183;
      case 0x3172743330386B63LL:
LABEL_284:
        LOBYTE(v30) = 1;
        v29 = 0x2F8002682000LL;
        goto LABEL_80;
      case 0x3272743330386B63LL:
      case 0x3372743330386B63LL:
        goto LABEL_183;
    }
  }
  if ( v28 == 9 )
  {
    if ( *(_QWORD *)v27 == 0x7274683330386B63LL && *(_BYTE *)(v27 + 8) == 49 )
      goto LABEL_284;
    if ( *(_QWORD *)v27 == 0x7274683330386B63LL && *(_BYTE *)(v27 + 8) == 50
      || *(_QWORD *)v27 == 0x7274683330386B63LL && *(_BYTE *)(v27 + 8) == 51 )
    {
LABEL_183:
      LOBYTE(v30) = 1;
      v29 = 0x3F8006682000LL;
      goto LABEL_80;
    }
  }
  if ( v28 == 8 )
  {
    if ( *(_QWORD *)v27 == 0x3172663330386B63LL )
    {
LABEL_290:
      LOBYTE(v30) = 1;
      v29 = 0x2F8002682502LL;
      goto LABEL_80;
    }
    if ( *(_QWORD *)v27 == 0x3272663330386B63LL || *(_QWORD *)v27 == 0x3372663330386B63LL )
      goto LABEL_282;
  }
  if ( v28 == 9 )
  {
    if ( *(_QWORD *)v27 == 0x7268663330386B63LL && *(_BYTE *)(v27 + 8) == 49 )
      goto LABEL_290;
    if ( *(_QWORD *)v27 == 0x7268663330386B63LL && *(_BYTE *)(v27 + 8) == 50
      || *(_QWORD *)v27 == 0x7268663330386B63LL && *(_BYTE *)(v27 + 8) == 51 )
    {
LABEL_282:
      LOBYTE(v30) = 1;
      v29 = 0x3F8006682502LL;
      goto LABEL_80;
    }
  }
  if ( v28 == 8 )
  {
    if ( *(_QWORD *)v27 == 0x3172653330386B63LL )
      goto LABEL_288;
    if ( *(_QWORD *)v27 == 0x3272653330386B63LL || *(_QWORD *)v27 == 0x3372653330386B63LL )
      goto LABEL_187;
  }
  if ( v28 == 9 )
  {
    if ( *(_QWORD *)v27 == 0x7268653330386B63LL && *(_BYTE *)(v27 + 8) == 49 )
      goto LABEL_288;
    if ( *(_QWORD *)v27 == 0x7268653330386B63LL && *(_BYTE *)(v27 + 8) == 50
      || *(_QWORD *)v27 == 0x7268653330386B63LL && *(_BYTE *)(v27 + 8) == 51 )
    {
LABEL_187:
      LOBYTE(v30) = 1;
      v29 = 0x3F800E6F2000LL;
      goto LABEL_80;
    }
    if ( *(_QWORD *)v27 == 0x7274653330386B63LL && *(_BYTE *)(v27 + 8) == 49 )
    {
LABEL_288:
      LOBYTE(v30) = 1;
      v29 = 0x2F800A6F2000LL;
      goto LABEL_80;
    }
    if ( *(_QWORD *)v27 == 0x7274653330386B63LL && *(_BYTE *)(v27 + 8) == 50
      || *(_QWORD *)v27 == 0x7274653330386B63LL && *(_BYTE *)(v27 + 8) == 51 )
    {
      goto LABEL_187;
    }
  }
  if ( v28 == 10 )
  {
    if ( *(_QWORD *)v27 == 0x7468653330386B63LL && *(_WORD *)(v27 + 8) == 12658 )
      goto LABEL_288;
    if ( *(_QWORD *)v27 == 0x7468653330386B63LL && *(_WORD *)(v27 + 8) == 12914
      || *(_QWORD *)v27 == 0x7468653330386B63LL && *(_WORD *)(v27 + 8) == 13170 )
    {
      goto LABEL_187;
    }
  }
  if ( v28 == 9 )
  {
    if ( *(_QWORD *)v27 == 0x7266653330386B63LL && *(_BYTE *)(v27 + 8) == 49 )
      goto LABEL_328;
    if ( *(_QWORD *)v27 == 0x7266653330386B63LL && *(_BYTE *)(v27 + 8) == 50
      || *(_QWORD *)v27 == 0x7266653330386B63LL && *(_BYTE *)(v27 + 8) == 51 )
    {
      goto LABEL_330;
    }
  }
  if ( v28 == 10 )
  {
    if ( *(_QWORD *)v27 == 0x6866653330386B63LL && *(_WORD *)(v27 + 8) == 12658 )
      goto LABEL_328;
    if ( *(_QWORD *)v27 == 0x6866653330386B63LL && *(_WORD *)(v27 + 8) == 12914
      || *(_QWORD *)v27 == 0x6866653330386B63LL && *(_WORD *)(v27 + 8) == 13170 )
    {
LABEL_330:
      LOBYTE(v30) = 1;
      v29 = 0x3F800E6F2502LL;
      goto LABEL_80;
    }
  }
  if ( v28 == 9 )
  {
    if ( *(_QWORD *)v27 == 0x7274663330386B63LL && *(_BYTE *)(v27 + 8) == 49 )
      goto LABEL_290;
    if ( *(_QWORD *)v27 == 0x7274663330386B63LL && *(_BYTE *)(v27 + 8) == 50
      || *(_QWORD *)v27 == 0x7274663330386B63LL && *(_BYTE *)(v27 + 8) == 51 )
    {
      goto LABEL_282;
    }
  }
  if ( v28 == 10 )
  {
    if ( *(_QWORD *)v27 == 0x7466653330386B63LL && *(_WORD *)(v27 + 8) == 12658 )
      goto LABEL_328;
    if ( *(_QWORD *)v27 == 0x7466653330386B63LL && *(_WORD *)(v27 + 8) == 12914
      || *(_QWORD *)v27 == 0x7466653330386B63LL && *(_WORD *)(v27 + 8) == 13170 )
    {
      goto LABEL_330;
    }
  }
  if ( v28 == 11 )
  {
    if ( *(_QWORD *)v27 == 0x6866653330386B63LL && *(_WORD *)(v27 + 8) == 29300 && *(_BYTE *)(v27 + 10) == 49 )
    {
LABEL_328:
      LOBYTE(v30) = 1;
      v29 = 0x2F800A6F2502LL;
      goto LABEL_80;
    }
    if ( *(_QWORD *)v27 == 0x6866653330386B63LL && *(_WORD *)(v27 + 8) == 29300 && *(_BYTE *)(v27 + 10) == 50
      || *(_QWORD *)v27 == 0x6866653330386B63LL && *(_WORD *)(v27 + 8) == 29300 && *(_BYTE *)(v27 + 10) == 51 )
    {
      goto LABEL_330;
    }
  }
  else if ( v28 == 4 )
  {
    if ( *(_DWORD *)v27 == 858798195 )
      goto LABEL_218;
    goto LABEL_216;
  }
  if ( v28 != 5 )
  {
LABEL_216:
    if ( v28 != 4 )
      goto LABEL_78;
    if ( *(_DWORD *)v27 != 858798181 )
      goto LABEL_210;
LABEL_218:
    LOBYTE(v30) = 1;
    v29 = 0x3F8006602000LL;
    goto LABEL_80;
  }
  if ( *(_DWORD *)v27 == 858798195 && *(_BYTE *)(v27 + 4) == 116 )
    goto LABEL_218;
LABEL_78:
  if ( v28 != 5 )
  {
LABEL_210:
    if ( v28 == 6 && *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 29491 )
    {
      LOBYTE(v30) = 1;
      v29 = 0x78002602001LL;
    }
    goto LABEL_80;
  }
  if ( *(_DWORD *)v27 == 858798181 && *(_BYTE *)(v27 + 4) == 116 )
    goto LABEL_218;
LABEL_80:
  v9 = v7;
  v10 = v8;
  v26 = 0x78002602001LL;
  sub_22A0C80(v8, v7, (__int64)"ck803st");
  v26 = 0x78002672000LL;
  sub_22A0C80(v10, v9, (__int64)"ck803se");
  v26 = 0x78002602502LL;
  sub_22A0C80(v10, v9, (__int64)"ck803sf");
  if ( (_BYTE)v30 )
    goto LABEL_90;
  if ( v28 != 8 )
  {
    if ( v28 != 9 )
      goto LABEL_83;
    if ( *(_QWORD *)v27 != 0x6665733330386B63LL || *(_BYTE *)(v27 + 8) != 116 )
      goto LABEL_85;
LABEL_233:
    LOBYTE(v30) = 1;
    v29 = 0x78002672502LL;
    goto LABEL_90;
  }
  if ( *(_QWORD *)v27 == 0x6665733330386B63LL )
    goto LABEL_233;
LABEL_83:
  if ( v28 == 5 && *(_DWORD *)v27 == 809003875 && *(_BYTE *)(v27 + 4) == 52 )
    goto LABEL_250;
LABEL_85:
  if ( v28 == 6 )
  {
    if ( *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 26676
      || *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 29748 )
    {
      goto LABEL_250;
    }
    goto LABEL_88;
  }
  if ( v28 != 7 )
  {
LABEL_88:
    if ( v28 == 6 && *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 26164 )
    {
      LOBYTE(v30) = 1;
      v29 = 0x3F8006602502LL;
    }
    goto LABEL_90;
  }
  if ( *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 26676 && *(_BYTE *)(v27 + 6) == 116 )
  {
LABEL_250:
    LOBYTE(v30) = 1;
    v29 = 0x3F8006602001LL;
  }
LABEL_90:
  v26 = 0x3F8006602502LL;
  sub_22A0C80(v12, v11, (__int64)"ck804fh");
  if ( !(_BYTE)v30 && v28 == 6 && *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 25908 )
  {
    LOBYTE(v30) = 1;
    v29 = 0x3F800E682000LL;
  }
  v26 = 0x3F800E682000LL;
  sub_22A0C80(v14, v13, (__int64)"ck804eh");
  if ( (_BYTE)v30 )
    goto LABEL_98;
  if ( v28 == 7 )
  {
    if ( *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 25908 && *(_BYTE *)(v27 + 6) == 116 )
      goto LABEL_266;
  }
  else if ( v28 == 8 )
  {
    if ( *(_QWORD *)v27 == 0x7468653430386B63LL )
    {
LABEL_266:
      v29 = 0x3F800E682000LL;
      LOBYTE(v30) = 1;
      goto LABEL_98;
    }
LABEL_261:
    if ( v28 == 8 && *(_QWORD *)v27 == 0x6866653430386B63LL )
      goto LABEL_263;
    goto LABEL_98;
  }
  if ( v28 != 7 )
    goto LABEL_261;
  if ( *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 25908 && *(_BYTE *)(v27 + 6) == 102 )
  {
LABEL_263:
    LOBYTE(v30) = 1;
    v29 = 0x3F800E682502LL;
  }
LABEL_98:
  v26 = 0x3F8006602502LL;
  sub_22A0C80(v16, v15, (__int64)"ck804ft");
  if ( (_BYTE)v30 )
    goto LABEL_132;
  switch ( v28 )
  {
    case 8LL:
      if ( *(_QWORD *)v27 == 0x7466653430386B63LL )
        goto LABEL_242;
      break;
    case 9LL:
      if ( *(_QWORD *)v27 == 0x6866653430386B63LL && *(_BYTE *)(v27 + 8) == 116 )
        goto LABEL_242;
      break;
    case 5LL:
      if ( *(_DWORD *)v27 == 875575397 && *(_BYTE *)(v27 + 4) == 100 )
      {
LABEL_229:
        LOBYTE(v30) = 1;
        v29 = 0x3F800E682000LL;
        goto LABEL_132;
      }
      goto LABEL_103;
  }
  if ( v28 == 6 )
  {
    if ( *(_DWORD *)v27 == 875575397 && *(_WORD *)(v27 + 4) == 29796 )
      goto LABEL_229;
    goto LABEL_105;
  }
LABEL_103:
  if ( v28 == 5 && *(_DWORD *)v27 == 875575397 && *(_BYTE *)(v27 + 4) == 102 )
    goto LABEL_417;
LABEL_105:
  if ( v28 == 6 )
  {
    if ( *(_DWORD *)v27 == 875575397 && *(_WORD *)(v27 + 4) == 29798 )
    {
LABEL_417:
      LOBYTE(v30) = 1;
      v29 = 0x3F8006602502LL;
      goto LABEL_132;
    }
    if ( *(_DWORD *)v27 == 875575397 && *(_WORD *)(v27 + 4) == 26212 )
    {
LABEL_242:
      LOBYTE(v30) = 1;
      v29 = 0x3F800E682502LL;
      goto LABEL_132;
    }
LABEL_108:
    if ( v28 == 5 && *(_DWORD *)v27 == 809003875 && *(_BYTE *)(v27 + 4) == 53 )
      goto LABEL_292;
    goto LABEL_110;
  }
  if ( v28 != 7 )
    goto LABEL_108;
  if ( *(_DWORD *)v27 == 875575397 && *(_WORD *)(v27 + 4) == 26212 && *(_BYTE *)(v27 + 6) == 116 )
    goto LABEL_242;
LABEL_110:
  if ( v28 == 6 )
  {
    if ( *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 25909 )
      goto LABEL_413;
    if ( *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 26165 )
      goto LABEL_429;
    if ( *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 29749 )
    {
LABEL_292:
      LOBYTE(v30) = 1;
      v29 = 0x3F80AE602001LL;
      goto LABEL_132;
    }
  }
  if ( v28 == 7 )
  {
    if ( *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 25909 && *(_BYTE *)(v27 + 6) == 102 )
      goto LABEL_245;
    if ( *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 25909 && *(_BYTE *)(v27 + 6) == 116 )
    {
LABEL_413:
      LOBYTE(v30) = 1;
      v29 = 0x3F80AE682000LL;
      goto LABEL_132;
    }
    if ( *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 26165 && *(_BYTE *)(v27 + 6) == 116 )
      goto LABEL_429;
    goto LABEL_118;
  }
  if ( v28 != 8 )
  {
LABEL_118:
    if ( v28 == 4 && *(_DWORD *)v27 == 892352617 )
      goto LABEL_292;
    goto LABEL_120;
  }
  if ( *(_QWORD *)v27 == 0x7466653530386B63LL )
  {
LABEL_245:
    LOBYTE(v30) = 1;
    v29 = 0x3F80AE682502LL;
    goto LABEL_132;
  }
LABEL_120:
  if ( v28 == 5 )
  {
    if ( *(_DWORD *)v27 == 892352617 && *(_BYTE *)(v27 + 4) == 102 )
    {
LABEL_429:
      LOBYTE(v30) = 1;
      v29 = 0x3F80AE602502LL;
      goto LABEL_132;
    }
    if ( *(_DWORD *)v27 == 809003875 && *(_BYTE *)(v27 + 4) == 55 )
    {
LABEL_286:
      LOBYTE(v30) = 1;
      v29 = 0xC7810B672001LL;
      goto LABEL_132;
    }
  }
  switch ( v28 )
  {
    case 6LL:
      if ( *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 25911 )
      {
        LOBYTE(v30) = 1;
        v29 = 0xC7810B672000LL;
        goto LABEL_132;
      }
      if ( *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 26167 )
      {
LABEL_260:
        LOBYTE(v30) = 1;
        v29 = 0xC7810B672F0ELL;
        goto LABEL_132;
      }
      break;
    case 7LL:
      if ( *(_DWORD *)v27 == 809003875 && *(_WORD *)(v27 + 4) == 25911 && *(_BYTE *)(v27 + 6) == 102 )
        goto LABEL_260;
      break;
    case 4LL:
      if ( *(_DWORD *)v27 == 925907043 )
        goto LABEL_286;
      goto LABEL_128;
  }
  if ( v28 == 5 )
  {
    if ( *(_DWORD *)v27 == 925907043 && *(_BYTE *)(v27 + 4) == 102 )
      goto LABEL_260;
    goto LABEL_257;
  }
LABEL_128:
  if ( v28 == 4 )
  {
    if ( *(_DWORD *)v27 == 925907058 )
      goto LABEL_286;
    goto LABEL_130;
  }
LABEL_257:
  if ( v28 != 5 )
  {
LABEL_130:
    if ( v28 == 6 && *(_DWORD *)v27 == 825781091 && *(_WORD *)(v27 + 4) == 25904 )
    {
      LOBYTE(v30) = 1;
      v29 = 0x1C7810B672001LL;
    }
    goto LABEL_132;
  }
  if ( *(_DWORD *)v27 == 925907058 && *(_BYTE *)(v27 + 4) == 102 )
    goto LABEL_260;
LABEL_132:
  v19 = v17;
  v20 = v18;
  v26 = 0x1C7810B672001LL;
  sub_22A0C80(v18, v17, (__int64)"ck810et");
  v26 = 0x1C7810B67230ELL;
  sub_22A0C80(v20, v19, (__int64)"ck810ef");
  if ( (_BYTE)v30 )
    goto LABEL_147;
  switch ( v28 )
  {
    case 8LL:
      if ( *(_QWORD *)v27 == 0x7466653031386B63LL )
      {
        v29 = 0x1C7810B67230ELL;
        LOBYTE(v30) = 1;
        goto LABEL_147;
      }
      break;
    case 6LL:
      if ( *(_DWORD *)v27 == 825781091 && *(_WORD *)(v27 + 4) == 26160 )
        goto LABEL_209;
      if ( *(_DWORD *)v27 == 825781091 && *(_WORD *)(v27 + 4) == 29744 )
      {
        LOBYTE(v30) = 1;
        v29 = 0x1C7810B672001LL;
        goto LABEL_147;
      }
      break;
    case 7LL:
      if ( *(_DWORD *)v27 == 825781091 && *(_WORD *)(v27 + 4) == 26160 && *(_BYTE *)(v27 + 6) == 116 )
        goto LABEL_209;
      goto LABEL_206;
    default:
      if ( v28 == 5 && *(_DWORD *)v27 == 825781091 && *(_BYTE *)(v27 + 4) == 48 )
      {
        v29 = 0x1C7810B672001LL;
        LOBYTE(v30) = 1;
        goto LABEL_147;
      }
      break;
  }
  if ( v28 != 4 )
  {
LABEL_206:
    if ( v28 != 5 )
      goto LABEL_140;
    if ( *(_DWORD *)v27 != 808532067 || *(_BYTE *)(v27 + 4) != 116 )
      goto LABEL_142;
LABEL_209:
    LOBYTE(v30) = 1;
    v29 = 0x1C7810B67230ELL;
    goto LABEL_147;
  }
  if ( *(_DWORD *)v27 == 808532067 )
    goto LABEL_209;
LABEL_140:
  if ( v28 == 6 && *(_DWORD *)v27 == 825781091 && *(_WORD *)(v27 + 4) == 30256 )
  {
LABEL_236:
    LOBYTE(v30) = 1;
    v29 = 0x1C7C10B672001LL;
    goto LABEL_147;
  }
LABEL_142:
  if ( v28 == 7 )
  {
    if ( *(_DWORD *)v27 == 825781091 && *(_WORD *)(v27 + 4) == 25904 && *(_BYTE *)(v27 + 6) == 118
      || *(_DWORD *)v27 == 825781091 && *(_WORD *)(v27 + 4) == 29744 && *(_BYTE *)(v27 + 6) == 118 )
    {
      goto LABEL_236;
    }
  }
  else if ( v28 == 8 )
  {
    if ( *(_QWORD *)v27 != 0x7674653031386B63LL )
      goto LABEL_147;
    goto LABEL_236;
  }
  if ( v28 == 5 && *(_DWORD *)v27 == 808532067 && *(_BYTE *)(v27 + 4) == 118 )
  {
    LOBYTE(v30) = 1;
    v29 = 0x1C7C10B67230ELL;
  }
LABEL_147:
  v26 = 0x1C7C10B67230ELL;
  sub_22A0C80(v22, v21, (__int64)"ck810fv");
  if ( (_BYTE)v30 )
    goto LABEL_159;
  if ( v28 != 8 )
  {
    if ( v28 != 6 )
      goto LABEL_151;
    if ( *(_DWORD *)v27 != 808532067 || *(_WORD *)(v27 + 4) != 30324 )
      goto LABEL_197;
LABEL_203:
    v29 = 0x1C7C10B67230ELL;
    LOBYTE(v30) = 1;
    goto LABEL_159;
  }
  if ( *(_QWORD *)v27 == 0x7666653031386B63LL || *(_QWORD *)v27 == 0x7674663031386B63LL )
    goto LABEL_203;
LABEL_151:
  if ( v28 == 8 )
  {
    if ( *(_QWORD *)v27 == 0x7674666530313863LL )
    {
      LOBYTE(v30) = 1;
      v29 = 0x1C7C10B67230ELL;
      goto LABEL_159;
    }
LABEL_153:
    if ( v28 == 6 )
    {
      if ( *(_DWORD *)v27 == 909667171 && *(_WORD *)(v27 + 4) == 26160 )
        goto LABEL_202;
      goto LABEL_155;
    }
LABEL_200:
    if ( v28 == 4 )
    {
      if ( *(_DWORD *)v27 == 808859747 )
      {
LABEL_202:
        LOBYTE(v30) = 1;
        v29 = 0x3FF810F6430F0LL;
        goto LABEL_159;
      }
      goto LABEL_189;
    }
LABEL_155:
    if ( v28 == 6 )
    {
      if ( *(_DWORD *)v27 == 909667171 && *(_WORD *)(v27 + 4) == 30256 )
      {
        LOBYTE(v30) = 1;
        v29 = 0x3FF81CF642001LL;
        goto LABEL_159;
      }
      goto LABEL_157;
    }
LABEL_189:
    if ( v28 == 7 )
    {
      if ( *(_DWORD *)v27 != 909667171 || *(_WORD *)(v27 + 4) != 26160 || *(_BYTE *)(v27 + 6) != 118 )
        goto LABEL_159;
LABEL_193:
      LOBYTE(v30) = 1;
      v29 = 0x3FF81CF6430F0LL;
      goto LABEL_159;
    }
LABEL_157:
    if ( v28 != 5 || *(_DWORD *)v27 != 808859747 || *(_BYTE *)(v27 + 4) != 118 )
      goto LABEL_159;
    goto LABEL_193;
  }
LABEL_197:
  if ( v28 != 5 )
    goto LABEL_153;
  if ( *(_DWORD *)v27 != 909667171 || *(_BYTE *)(v27 + 4) != 48 )
    goto LABEL_200;
  LOBYTE(v30) = 1;
  v29 = 0x3FF810F642001LL;
LABEL_159:
  v26 = 0;
  sub_22A0C80(v24, v23, (__int64)"invalid");
  result = 0;
  if ( (_BYTE)v30 )
    return v29;
  return result;
}
