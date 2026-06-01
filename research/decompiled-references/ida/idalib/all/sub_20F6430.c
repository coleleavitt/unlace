__int64 __fastcall sub_20F6430(int a1)
{
  unsigned int v1; // ebx
  char *v3; // rax
  __int64 v4; // rdx
  int v5; // ecx
  char v6; // r9
  bool v7; // r8
  unsigned __int8 v8; // r10
  bool v9; // si
  bool v10; // di
  char v11; // cl
  int v12; // r13d
  bool v13; // r11
  char v14; // r11
  bool v15; // r11
  int v16; // r12d
  bool v17; // r8
  char v18; // bl
  char v19; // r11
  char v20; // si
  int v21; // edi
  bool v22; // si
  char v23; // si
  bool v24; // di
  int v25; // esi
  int v26; // r8d
  int v27; // ecx
  int v28; // ecx
  int v30; // esi
  int v31; // r11d
  int v32; // r11d

  v3 = sub_20F4520(a1);
  if ( v4 == 7 )
  {
    if ( *(_DWORD *)v3 != 1635151465 || *((_WORD *)v3 + 2) != 26988 || (v5 = 0, v3[6] != 100) )
      v5 = 1;
    v6 = 1;
    v7 = v5 == 0;
    v1 = 0;
LABEL_5:
    v8 = v4 != 8;
    v9 = v4 != 3;
    v10 = v4 != 4;
    if ( a1 == 2 )
      goto LABEL_6;
    goto LABEL_15;
  }
  if ( v4 == 6 )
  {
    if ( *(_DWORD *)v3 == 1735549300 && *((_WORD *)v3 + 2) == 29797 )
    {
      v7 = 1;
      v1 = a1 == 1;
      v6 = 0;
    }
    else
    {
      v7 = 0;
      v6 = 0;
    }
    goto LABEL_5;
  }
  v8 = v4 != 8;
  v9 = v4 != 3;
  v10 = v4 != 4;
  if ( a1 != 2 )
  {
    if ( v4 != 5 )
    {
      v7 = 0;
      v6 = 1;
LABEL_15:
      v11 = 1;
      v14 = v8 | v7;
LABEL_16:
      if ( a1 != 3 )
        goto LABEL_17;
      v12 = 3;
      if ( !v14 )
      {
LABEL_8:
        v13 = v9 || v7;
        if ( *(_QWORD *)v3 == 0x6C656C6C61726170LL )
        {
          v1 = v12;
          v7 = 1;
          if ( a1 == 4 )
          {
LABEL_337:
            if ( v7 || v10 )
              goto LABEL_24;
            goto LABEL_338;
          }
          goto LABEL_21;
        }
        goto LABEL_19;
      }
LABEL_341:
      if ( v9 || v7 )
        goto LABEL_21;
      goto LABEL_342;
    }
    if ( *(_DWORD *)v3 != 1835099508 || v3[4] != 115 )
    {
      v14 = v4 != 8;
      v6 = 1;
      v11 = 0;
      v7 = 0;
      goto LABEL_16;
    }
    if ( a1 == 3 )
    {
      v1 = 0;
      v6 = 1;
      v7 = 1;
      v11 = 0;
      goto LABEL_341;
    }
    v1 = 0;
LABEL_594:
    v6 = 1;
    v11 = 0;
    v7 = 1;
    goto LABEL_18;
  }
  v6 = 1;
  v7 = 0;
  if ( v4 == 5 )
  {
    if ( *(_DWORD *)v3 != 1835099508 || v3[4] != 115 )
    {
      v14 = v4 != 8;
      v6 = 1;
      v11 = 0;
      v7 = 0;
LABEL_17:
      if ( !v14 )
        goto LABEL_7;
      goto LABEL_18;
    }
    v1 = 2;
    goto LABEL_594;
  }
LABEL_6:
  v11 = 1;
  if ( !(v8 | v7) )
  {
LABEL_7:
    v12 = 0;
    goto LABEL_8;
  }
LABEL_18:
  v13 = v9 || v7;
LABEL_19:
  if ( a1 == 4 )
  {
    if ( v13 )
      goto LABEL_337;
    v31 = 4;
    goto LABEL_343;
  }
  if ( v13 )
  {
LABEL_21:
    v15 = v7 || v10;
    goto LABEL_22;
  }
LABEL_342:
  v31 = 0;
LABEL_343:
  if ( *(_WORD *)v3 == 28518 && v3[2] == 114 )
  {
    v1 = v31;
    goto LABEL_270;
  }
  v15 = v10 || v7;
LABEL_22:
  if ( a1 == 5 )
  {
    if ( !v15 && *(_DWORD *)v3 == 1684892019 )
    {
      v1 = 5;
      goto LABEL_270;
    }
    goto LABEL_317;
  }
  if ( !v15 )
  {
LABEL_338:
    if ( *(_DWORD *)v3 == 1684892019 )
    {
LABEL_339:
      v1 = 0;
      goto LABEL_270;
    }
  }
LABEL_24:
  if ( a1 != 6 )
  {
LABEL_317:
    if ( v7 )
      goto LABEL_270;
    if ( !v10 && *(_DWORD *)v3 == 1953722216 )
      goto LABEL_339;
    v16 = v1;
    v1 = 0;
    goto LABEL_29;
  }
  if ( v7 )
    goto LABEL_270;
  if ( v10 )
  {
    v16 = v1;
  }
  else
  {
    if ( *(_DWORD *)v3 == 1953722216 )
    {
      v1 = 6;
      goto LABEL_270;
    }
    v16 = v1;
    v10 = 0;
  }
  v1 = 7;
LABEL_29:
  if ( !v6 && *(_DWORD *)v3 == 1869115246 && *((_WORD *)v3 + 2) == 29811 )
    goto LABEL_270;
  v1 = 8 * (a1 == 6);
  if ( !v9 && *(_WORD *)v3 == 28771 && v3[2] == 117 )
    goto LABEL_270;
  v1 = 9 * (a1 == 6);
  if ( !v9 && *(_WORD *)v3 == 28775 && v3[2] == 117 )
    goto LABEL_270;
  if ( a1 == 6 )
  {
    v1 = 10;
    if ( v10 )
    {
      if ( !v9 )
      {
        if ( *(_WORD *)v3 == 28257 )
        {
          v1 = 11;
          if ( v3[2] == 121 )
            goto LABEL_270;
        }
        goto LABEL_371;
      }
      v10 = v9;
LABEL_428:
      v9 = 1;
      v1 = 0;
      goto LABEL_42;
    }
  }
  else
  {
    v1 = 0;
    if ( v10 )
    {
      if ( !v9 && *(_WORD *)v3 == 28257 && v3[2] == 121 )
      {
        v1 = 0;
        goto LABEL_270;
      }
      goto LABEL_39;
    }
  }
  if ( *(_DWORD *)v3 == 1634168934 )
    goto LABEL_270;
  if ( a1 == 6 )
  {
    v10 = 0;
    goto LABEL_370;
  }
LABEL_39:
  if ( a1 == 7 )
  {
    if ( !v9 )
    {
      if ( *(_WORD *)v3 == 29281 && v3[2] == 109 )
      {
        v1 = 12;
        goto LABEL_270;
      }
      v9 = 0;
    }
    v1 = 13;
    goto LABEL_42;
  }
LABEL_370:
  if ( v9 )
    goto LABEL_428;
LABEL_371:
  if ( *(_WORD *)v3 == 29281 && v3[2] == 109 )
  {
    v1 = 0;
    goto LABEL_270;
  }
  v9 = 0;
  v1 = 0;
LABEL_42:
  if ( !v11 && *(_DWORD *)v3 == 1701671521 && v3[4] == 98 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 7 )
    v1 = 14;
  if ( v4 == 7 && *(_DWORD *)v3 == 1668440417 && *((_WORD *)v3 + 2) == 13928 && v3[6] == 52 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 7 )
    v1 = 15;
  if ( v4 == 10 && *(_QWORD *)v3 == 0x5F34366863726161LL && *((_WORD *)v3 + 4) == 25954 )
    goto LABEL_270;
  v1 = 16 * (a1 == 7);
  if ( v4 == 10 && *(_QWORD *)v3 == 0x5F34366863726161LL && *((_WORD *)v3 + 4) == 12851 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 7 )
    v1 = 17;
  if ( !v9 && *(_WORD *)v3 == 28784 && v3[2] == 99 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 7 )
    v1 = 18;
  if ( !v11 && *(_DWORD *)v3 == 1818456176 && v3[4] == 101 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 7 )
    v1 = 19;
  if ( !v11 && *(_DWORD *)v3 == 912486512 && v3[4] == 52 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 7 )
    v1 = 20;
  if ( v4 == 7 && *(_DWORD *)v3 == 912486512 && *((_WORD *)v3 + 2) == 27700 && v3[6] == 101 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 7 )
    v1 = 21;
  if ( !v9 && *(_WORD *)v3 == 14456 && v3[2] == 54 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 7 )
    v1 = 22;
  if ( !v6 && *(_DWORD *)v3 == 1597388920 && *((_WORD *)v3 + 2) == 13366 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 7 )
    v1 = 23;
  if ( !v6 && *(_DWORD *)v3 == 1734634849 && *((_WORD *)v3 + 2) == 28259 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 7 )
    v1 = 24;
  if ( !v11 && *(_DWORD *)v3 == 1953527406 && v3[4] == 120 )
  {
LABEL_270:
    v11 = 1;
    v22 = v4 != 32;
    if ( a1 != 14 )
      goto LABEL_271;
    goto LABEL_286;
  }
  if ( a1 == 7 )
  {
    v1 = 25;
    v17 = v4 != 7;
    if ( v4 != 7 )
      goto LABEL_364;
    goto LABEL_393;
  }
  if ( v4 == 7 )
  {
    v1 = 0;
LABEL_393:
    if ( *(_DWORD *)v3 == 1953527406 && *((_WORD *)v3 + 2) == 13944 && v3[6] == 52 )
      goto LABEL_270;
    v1 = 0;
    if ( a1 == 7 )
      v1 = 26;
    if ( *(_DWORD *)v3 == 1919512691 && *((_WORD *)v3 + 2) == 13942 && v3[6] == 52 )
    {
      if ( a1 != 8 )
        goto LABEL_270;
      v16 = v1;
      v17 = 0;
      goto LABEL_379;
    }
    v17 = 0;
    goto LABEL_89;
  }
  v17 = 1;
LABEL_89:
  if ( a1 == 8 )
  {
    if ( v10 )
    {
LABEL_93:
      v1 = 28;
      goto LABEL_94;
    }
    if ( *(_DWORD *)v3 != 1953722216 )
    {
      v10 = 0;
      goto LABEL_93;
    }
    v16 = 27;
    v10 = 0;
LABEL_379:
    v19 = 1;
LABEL_380:
    v1 = v16;
    if ( v19 )
      goto LABEL_270;
    if ( !v9 && *(_WORD *)v3 == 29281 && v3[2] == 109 )
    {
      v1 = 0;
      goto LABEL_270;
    }
    v1 = 0;
    goto LABEL_116;
  }
LABEL_364:
  if ( !v10 && *(_DWORD *)v3 == 1953722216 )
    goto LABEL_339;
  v1 = 0;
LABEL_94:
  if ( !v6 && *(_DWORD *)v3 == 1869115246 && *((_WORD *)v3 + 2) == 29811 )
    goto LABEL_500;
  v1 = 0;
  if ( a1 == 8 )
    v1 = 29;
  if ( !v9 && *(_WORD *)v3 == 28771 && v3[2] == 117 )
    goto LABEL_500;
  v1 = 0;
  if ( a1 == 8 )
    v1 = 30;
  if ( !v9 && *(_WORD *)v3 == 28775 && v3[2] == 117 )
  {
LABEL_500:
    if ( a1 != 8 )
      goto LABEL_270;
    v16 = v1;
    goto LABEL_379;
  }
  if ( a1 == 8 )
  {
    v32 = 31;
    if ( v10 )
    {
      if ( !v9 )
      {
        v1 = 32;
        goto LABEL_107;
      }
      v19 = 0;
      goto LABEL_458;
    }
LABEL_385:
    if ( *(_DWORD *)v3 == 1634168934 )
    {
      v16 = v32;
      v19 = 1;
      if ( a1 != 8 )
      {
LABEL_387:
        v18 = v19 | v6;
        if ( a1 != 9 )
          goto LABEL_109;
LABEL_388:
        if ( !v18 && *(_DWORD *)v3 == 1651340654 )
        {
          v1 = 33;
          if ( *((_WORD *)v3 + 2) == 29285 )
            goto LABEL_270;
        }
        goto LABEL_380;
      }
    }
    else
    {
      v19 = 0;
      if ( a1 != 8 )
        goto LABEL_387;
    }
LABEL_458:
    v18 = v19 | v6;
    goto LABEL_109;
  }
  if ( !v10 )
  {
    v32 = 0;
    goto LABEL_385;
  }
  v1 = 0;
  if ( v9 )
  {
    v19 = 0;
    goto LABEL_387;
  }
LABEL_107:
  if ( *(_WORD *)v3 == 28257 && v3[2] == 121 )
    goto LABEL_270;
  v18 = v6;
  v19 = 0;
  if ( a1 == 9 )
    goto LABEL_388;
LABEL_109:
  if ( !v18 && *(_DWORD *)v3 == 1651340654 && *((_WORD *)v3 + 2) == 29285 )
  {
    v1 = 0;
    goto LABEL_270;
  }
  if ( a1 != 10 )
    goto LABEL_380;
  if ( v19 )
    goto LABEL_621;
  if ( !v9 && *(_WORD *)v3 == 29281 )
  {
    v1 = 34;
    if ( v3[2] == 109 )
      goto LABEL_270;
  }
  v1 = 35;
LABEL_116:
  if ( !v11 && *(_DWORD *)v3 == 1701671521 && v3[4] == 98 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 10 )
    v1 = 36;
  if ( !v17 && *(_DWORD *)v3 == 1668440417 && *((_WORD *)v3 + 2) == 13928 && v3[6] == 52 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 10 )
    v1 = 37;
  if ( v4 == 10 && *(_QWORD *)v3 == 0x5F34366863726161LL && *((_WORD *)v3 + 4) == 25954 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 10 )
    v1 = 38;
  if ( v4 == 10 && *(_QWORD *)v3 == 0x5F34366863726161LL && *((_WORD *)v3 + 4) == 12851 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 10 )
    v1 = 39;
  if ( !v9 && *(_WORD *)v3 == 28784 && v3[2] == 99 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 10 )
    v1 = 40;
  if ( !v11 && *(_DWORD *)v3 == 1818456176 && v3[4] == 101 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 10 )
    v1 = 41;
  if ( !v11 && *(_DWORD *)v3 == 912486512 && v3[4] == 52 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 10 )
    v1 = 42;
  if ( !v17 && *(_DWORD *)v3 == 912486512 && *((_WORD *)v3 + 2) == 27700 && v3[6] == 101 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 10 )
    v1 = 43;
  if ( !v9 && *(_WORD *)v3 == 14456 && v3[2] == 54 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 10 )
    v1 = 44;
  if ( !v6 && *(_DWORD *)v3 == 1597388920 && *((_WORD *)v3 + 2) == 13366 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 10 )
    v1 = 45;
  if ( !v6 && *(_DWORD *)v3 == 1734634849 && *((_WORD *)v3 + 2) == 28259 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 10 )
    v1 = 46;
  if ( !v11 && *(_DWORD *)v3 == 1953527406 && v3[4] == 120 )
    goto LABEL_270;
  if ( a1 == 10 )
  {
    v1 = 47;
    if ( v17 )
      goto LABEL_165;
LABEL_422:
    if ( *(_DWORD *)v3 == 1953527406 && *((_WORD *)v3 + 2) == 13944 && v3[6] == 52 )
      goto LABEL_270;
    if ( a1 == 10 )
    {
      if ( *(_DWORD *)v3 == 1919512691 && *((_WORD *)v3 + 2) == 13942 )
      {
        v1 = 48;
        if ( v3[6] == 52 )
          goto LABEL_270;
      }
    }
    else
    {
      if ( *(_DWORD *)v3 == 1919512691 && *((_WORD *)v3 + 2) == 13942 && v3[6] == 52 )
      {
        v1 = 0;
        goto LABEL_270;
      }
      if ( a1 == 11 )
      {
        v17 = 0;
        goto LABEL_417;
      }
    }
    v17 = 0;
    goto LABEL_165;
  }
  v1 = 0;
  if ( !v17 )
    goto LABEL_422;
  if ( a1 != 11 )
  {
LABEL_165:
    if ( v9 )
      goto LABEL_170;
    if ( *(_WORD *)v3 == 28001 && v3[2] == 100 )
    {
      v1 = 0;
      goto LABEL_270;
    }
    v1 = 0;
LABEL_169:
    if ( *(_WORD *)v3 == 29281 && v3[2] == 109 )
      goto LABEL_270;
LABEL_170:
    v1 = 0;
    if ( a1 != 11 )
      goto LABEL_171;
    goto LABEL_411;
  }
LABEL_417:
  if ( !v9 )
  {
    if ( *(_WORD *)v3 == 28001 )
    {
      v1 = 49;
      if ( v3[2] == 100 )
        goto LABEL_270;
    }
    v9 = 0;
    v1 = 50;
    goto LABEL_169;
  }
LABEL_411:
  v1 = 51;
LABEL_171:
  if ( !v9 && *(_WORD *)v3 == 29538 && v3[2] == 99 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 11 )
    v1 = 52;
  if ( !v10 && *(_DWORD *)v3 == 2036429411 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 11 )
    v1 = 53;
  if ( !v17 && *(_DWORD *)v3 == 1768584550 && *((_WORD *)v3 + 2) == 29556 && v3[6] == 117 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 11 )
    v1 = 54;
  if ( !v9 && *(_WORD *)v3 == 28263 && v3[2] == 117 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 11 )
    v1 = 55;
  if ( !v9 && *(_WORD *)v3 == 25193 && v3[2] == 109 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 11 )
    v1 = 56;
  if ( !v11 && *(_DWORD *)v3 == 1702129257 && v3[4] == 108 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 11 )
    v1 = 57;
  if ( !v10 && *(_DWORD *)v3 == 1836477548 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 11 )
    v1 = 58;
  if ( !v9 && *(_WORD *)v3 == 25966 && v3[2] == 99 )
    goto LABEL_270;
  if ( a1 == 11 )
  {
    v1 = 59;
    if ( v6 )
    {
LABEL_409:
      if ( v9 )
        goto LABEL_358;
      v1 = 60;
LABEL_206:
      if ( *(_WORD *)v3 == 26480 && v3[2] == 105 )
        goto LABEL_270;
      if ( a1 != 11 )
        goto LABEL_208;
LABEL_358:
      v1 = 61;
      goto LABEL_209;
    }
  }
  else
  {
    v1 = 0;
    if ( v6 )
      goto LABEL_205;
  }
  if ( *(_DWORD *)v3 == 1684633198 && *((_WORD *)v3 + 2) == 24937 )
    goto LABEL_270;
  if ( a1 == 11 )
    goto LABEL_409;
LABEL_205:
  v1 = 0;
  if ( !v9 )
    goto LABEL_206;
LABEL_208:
  v1 = 0;
LABEL_209:
  if ( v4 == 2 && *(_WORD *)v3 == 26996 )
    goto LABEL_270;
  if ( a1 == 11 )
  {
    if ( !v17 && *(_DWORD *)v3 == 1852534389 && *((_WORD *)v3 + 2) == 30575 )
    {
      v1 = 62;
      if ( v3[6] == 110 )
        goto LABEL_270;
    }
    goto LABEL_215;
  }
  if ( !v17 && *(_DWORD *)v3 == 1852534389 && *((_WORD *)v3 + 2) == 30575 && v3[6] == 110 )
  {
    v1 = 0;
    goto LABEL_270;
  }
  if ( a1 != 12 )
  {
LABEL_215:
    if ( v4 != 9 )
      goto LABEL_220;
    if ( *(_QWORD *)v3 == 0x6C615F686374616DLL && v3[8] == 108 )
    {
      v1 = 0;
      goto LABEL_270;
    }
    v1 = 0;
LABEL_219:
    if ( *(_QWORD *)v3 == 0x6E615F686374616DLL && v3[8] == 121 )
      goto LABEL_270;
LABEL_220:
    v1 = 0;
    if ( a1 != 12 )
      goto LABEL_221;
    goto LABEL_407;
  }
  if ( v4 == 9 )
  {
    if ( *(_QWORD *)v3 == 0x6C615F686374616DLL )
    {
      v1 = 63;
      if ( v3[8] == 108 )
        goto LABEL_270;
    }
    v1 = 64;
    goto LABEL_219;
  }
LABEL_407:
  v1 = 65;
LABEL_221:
  if ( v4 == 10 && *(_QWORD *)v3 == 0x6F6E5F686374616DLL && *((_WORD *)v3 + 4) == 25966 )
    goto LABEL_270;
  v1 = 0;
  if ( a1 == 12 )
    v1 = 66;
  if ( v4 == 21
    && !(*(_QWORD *)v3 ^ 0x5F656C6261736964LL | *((_QWORD *)v3 + 1) ^ 0x746963696C706D69LL)
    && *((_DWORD *)v3 + 4) == 1935762015
    && v3[20] == 101 )
  {
    goto LABEL_270;
  }
  if ( a1 == 12 )
  {
    v1 = 67;
    if ( v4 != 15 )
    {
      if ( v4 == 19
        && !(*(_QWORD *)v3 ^ 0x5F6F745F646E6962LL | *((_QWORD *)v3 + 1) ^ 0x746172616C636564LL)
        && *((_WORD *)v3 + 8) == 28521 )
      {
        v1 = 68;
        if ( v3[18] == 110 )
          goto LABEL_270;
      }
      goto LABEL_235;
    }
  }
  else
  {
    if ( v4 != 15 )
    {
      if ( v4 == 19
        && !(*(_QWORD *)v3 ^ 0x5F6F745F646E6962LL | *((_QWORD *)v3 + 1) ^ 0x746172616C636564LL)
        && *((_WORD *)v3 + 8) == 28521
        && v3[18] == 110 )
      {
        v1 = 0;
        goto LABEL_270;
      }
      goto LABEL_232;
    }
    v1 = 0;
  }
  if ( *(_QWORD *)v3 == 0x65745F776F6C6C61LL
    && *((_DWORD *)v3 + 2) == 1634496621
    && *((_WORD *)v3 + 6) == 25972
    && v3[14] == 115 )
  {
    v16 = v1;
    v20 = 1;
    if ( a1 == 12 )
      goto LABEL_270;
LABEL_233:
    if ( a1 == 13 )
    {
      if ( !v20 )
      {
        if ( !v10 && *(_DWORD *)v3 == 1702195828 )
        {
          v1 = 69;
          goto LABEL_270;
        }
        v21 = 70;
        goto LABEL_239;
      }
    }
    else if ( !v20 )
    {
      goto LABEL_235;
    }
LABEL_621:
    v1 = v16;
    goto LABEL_270;
  }
  if ( a1 != 12 )
  {
LABEL_232:
    v20 = 0;
    goto LABEL_233;
  }
LABEL_235:
  if ( !v10 && *(_DWORD *)v3 == 1702195828 )
    goto LABEL_339;
  v21 = 0;
LABEL_239:
  v22 = v4 != 32;
  if ( !v11 )
  {
    if ( *(_DWORD *)v3 == 1936482662 && v3[4] == 101 )
    {
      v16 = v21;
      v11 = 1;
      if ( a1 == 13 )
      {
        v11 = 1;
        goto LABEL_439;
      }
      goto LABEL_582;
    }
    if ( a1 != 13 )
      goto LABEL_242;
    goto LABEL_437;
  }
  if ( a1 == 13 )
  {
LABEL_437:
    v27 = 71;
    if ( v17 )
    {
      v11 = 0;
LABEL_439:
      v8 |= v11;
LABEL_243:
      v1 = 0;
      if ( v8 )
      {
        v1 = v16;
LABEL_271:
        v23 = v11 | v22;
        if ( a1 != 15 )
        {
LABEL_272:
          v24 = v4 != 15;
          if ( v23 )
            goto LABEL_273;
          goto LABEL_287;
        }
LABEL_246:
        v24 = v4 != 15;
        if ( v23 )
        {
LABEL_274:
          if ( !v24 && !v11 )
          {
            v25 = 0;
LABEL_330:
            if ( *(_QWORD *)v3 == 0x5F64656966696E75LL
              && *((_DWORD *)v3 + 2) == 1919181921
              && *((_WORD *)v3 + 6) == 29541
              && v3[14] == 115 )
            {
              if ( a1 != 18 && a1 != 19 )
              {
                v1 = v25;
                v11 = 1;
                goto LABEL_302;
              }
              goto LABEL_359;
            }
            if ( a1 != 18 )
            {
              v28 = 77;
              if ( a1 == 19 )
                goto LABEL_333;
              goto LABEL_295;
            }
            v24 = 0;
            v11 = 0;
LABEL_256:
            if ( v4 == 21 )
            {
              v26 = 76;
              if ( v11 )
                goto LABEL_263;
              goto LABEL_258;
            }
            goto LABEL_293;
          }
          goto LABEL_255;
        }
        v25 = 73;
LABEL_248:
        if ( *(_QWORD *)v3 ^ 0x6E65202C796E613CLL | *((_QWORD *)v3 + 1) ^ 0x7420796C65726974LL
          || *((_QWORD *)v3 + 2) ^ 0x6564207465677261LL | *((_QWORD *)v3 + 3) ^ 0x3E746E65646E6570LL )
        {
          v25 = 0;
          if ( a1 == 16 )
            v25 = 74;
          if ( *(_QWORD *)v3 ^ 0x6E65202C796E613CLL | *((_QWORD *)v3 + 1) ^ 0x7420796C65726974LL
            || *((_QWORD *)v3 + 2) ^ 0x6564207465677261LL | *((_QWORD *)v3 + 3) ^ 0x3E746E65646E6570LL )
          {
            if ( a1 != 17 )
            {
LABEL_255:
              if ( a1 == 18 )
                goto LABEL_256;
              goto LABEL_290;
            }
            goto LABEL_328;
          }
        }
        else if ( a1 == 16 )
        {
          v1 = v25;
          v11 = 1;
          goto LABEL_274;
        }
        if ( a1 == 18 )
        {
LABEL_359:
          v1 = v25;
          v11 = 1;
          goto LABEL_263;
        }
        v1 = v25;
        v11 = 1;
        goto LABEL_290;
      }
LABEL_244:
      if ( *(_QWORD *)v3 == 0x6863746170736964LL )
      {
        v11 = 1;
        v24 = v4 != 15;
        if ( a1 == 15 )
          goto LABEL_274;
        goto LABEL_273;
      }
LABEL_245:
      v23 = v11 | v22;
      v1 = v16;
      if ( a1 != 15 )
        goto LABEL_272;
      goto LABEL_246;
    }
    goto LABEL_280;
  }
  if ( !v17 )
  {
    v27 = 0;
LABEL_280:
    if ( *(_DWORD *)v3 == 1852534389 && *((_WORD *)v3 + 2) == 30575 && v3[6] == 110 )
    {
      v16 = v27;
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    if ( a1 != 14 )
      goto LABEL_245;
    v8 |= v11;
    goto LABEL_284;
  }
  v11 = 0;
LABEL_582:
  v8 |= v11;
LABEL_242:
  if ( a1 != 14 )
    goto LABEL_243;
LABEL_284:
  v1 = 72;
  if ( !v8 )
    goto LABEL_244;
  v1 = v16;
LABEL_286:
  v24 = v4 != 15;
  if ( !((unsigned __int8)v11 | v22) )
  {
LABEL_287:
    v25 = 0;
    goto LABEL_248;
  }
LABEL_273:
  if ( a1 != 17 )
    goto LABEL_274;
LABEL_328:
  if ( !v11 )
  {
    v25 = 75;
    if ( !v24 )
      goto LABEL_330;
  }
LABEL_290:
  if ( v4 == 21 && !v11 )
  {
    v26 = 0;
LABEL_258:
    if ( !(*(_QWORD *)v3 ^ 0x5F64656966696E75LL | *((_QWORD *)v3 + 1) ^ 0x6D5F646572616873LL)
      && *((_DWORD *)v3 + 4) == 1919905125
      && v3[20] == 121 )
    {
      if ( a1 != 20 )
      {
        v1 = v26;
        v11 = 1;
        goto LABEL_263;
      }
      v1 = v26;
      v11 = 1;
LABEL_312:
      v30 = 0;
      goto LABEL_313;
    }
    v11 = 0;
    if ( a1 != 19 )
      goto LABEL_302;
    v11 = 0;
LABEL_262:
    if ( !v24 )
    {
      v28 = 77;
      goto LABEL_333;
    }
LABEL_263:
    if ( v4 == 18 && !v11 )
    {
      v1 = 0;
LABEL_306:
      if ( *(_QWORD *)v3 ^ 0x5F63696D616E7964LL | *((_QWORD *)v3 + 1) ^ 0x6F7461636F6C6C61LL
        || *((_WORD *)v3 + 8) != 29554 )
      {
        return 0;
      }
      return v1;
    }
    goto LABEL_320;
  }
  if ( a1 == 19 )
  {
    if ( v11 )
      goto LABEL_263;
    goto LABEL_262;
  }
LABEL_293:
  if ( v11 || v24 )
  {
LABEL_302:
    if ( a1 == 20 )
    {
LABEL_303:
      if ( v4 == 18 && !v11 )
      {
        v1 = 78;
        goto LABEL_306;
      }
      goto LABEL_312;
    }
    goto LABEL_263;
  }
LABEL_295:
  v28 = 0;
LABEL_333:
  if ( *(_QWORD *)v3 == 0x5F65737265766572LL
    && *((_DWORD *)v3 + 2) == 1818650223
    && *((_WORD *)v3 + 6) == 24943
    && v3[14] == 100 )
  {
    v30 = 0;
    if ( a1 != 20 )
    {
      v1 = v28;
      v11 = 1;
      if ( a1 == 21 )
        return v1;
LABEL_313:
      if ( v4 == 24 )
        goto LABEL_314;
      goto LABEL_323;
    }
    v1 = v28;
    v11 = 1;
    goto LABEL_312;
  }
  v11 = 0;
  if ( a1 == 20 )
  {
    v11 = 0;
    goto LABEL_303;
  }
LABEL_320:
  v30 = 79;
  if ( a1 != 21 )
    v30 = 0;
  if ( v4 == 24 )
  {
LABEL_314:
    if ( !v11 )
    {
      if ( *(_QWORD *)v3 ^ 0x645F63696D6F7461LL | *((_QWORD *)v3 + 1) ^ 0x6D5F746C75616665LL )
        return 0;
      v1 = v30;
      if ( *((_QWORD *)v3 + 2) != 0x726564726F5F6D65LL )
        return 0;
    }
    return v1;
  }
LABEL_323:
  if ( !v11 )
    return 0;
  return v1;
}
