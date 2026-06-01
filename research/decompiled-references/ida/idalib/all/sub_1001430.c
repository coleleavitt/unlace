unsigned __int64 __fastcall sub_1001430(__int64 a1, __int64 a2, char a3)
{
  bool v3; // cl
  bool v4; // r9
  char v5; // bl
  bool v6; // al
  bool v7; // r10
  char v8; // al
  char v9; // r11
  char v10; // bp
  char v11; // bp
  char v12; // bp
  char v13; // al
  char v14; // bp
  char v15; // al
  char v16; // bp
  char v17; // al
  char v18; // r12
  char v19; // al
  char v20; // bp
  bool v21; // bp
  char v22; // al
  char v23; // r14
  bool v24; // r11
  char v25; // r15
  bool v26; // r13
  char v27; // r15
  char v28; // bl
  char v29; // bp
  bool v30; // bl
  char v31; // r14
  char v32; // bp
  char v33; // r11
  bool v34; // r10
  char v35; // bp
  bool v36; // bp
  __int64 v37; // rax
  char v38; // si
  __int64 v39; // r11
  char v40; // r10
  __int64 v41; // r11
  char v42; // si
  char v43; // cl
  __int64 v44; // r9
  char v45; // bl
  unsigned __int64 v46; // rdx
  bool v48; // al
  char v49; // bp
  char v50; // r13
  char v51; // r14
  char v52; // al
  double v53[3]; // [rsp+0h] [rbp-58h] BYREF
  char v54; // [rsp+1Ah] [rbp-3Eh]
  bool v55; // [rsp+1Bh] [rbp-3Dh]
  bool v56; // [rsp+1Ch] [rbp-3Ch]
  bool v57; // [rsp+1Dh] [rbp-3Bh]
  bool v58; // [rsp+1Eh] [rbp-3Ah]
  bool v59; // [rsp+1Fh] [rbp-39h]

  v58 = a2 != 15;
  v57 = a2 != 16;
  LOBYTE(v53[0]) = a2 != 14;
  if ( a2 == 7 )
  {
    if ( *(_DWORD *)a1 != 1919181921 || *(_WORD *)(a1 + 4) != 29541 || (v3 = 1, *(_BYTE *)(a1 + 6) != 115) )
      v3 = 0;
    v4 = 1;
    goto LABEL_122;
  }
  if ( a2 == 15 )
  {
    if ( *(_QWORD *)a1 == 0x2D7265746E696F70LL
      && *(_DWORD *)(a1 + 8) == 1886220131
      && *(_WORD *)(a1 + 12) == 29281
      && *(_BYTE *)(a1 + 14) == 101 )
    {
      v4 = 1;
      v3 = 1;
    }
    else
    {
      v4 = 1;
      v3 = 0;
    }
LABEL_122:
    v48 = v3 || v4;
    goto LABEL_123;
  }
  v4 = a2 != 9;
  if ( a2 != 16 )
  {
    if ( a2 == 14 )
    {
      if ( *(_QWORD *)a1 == 0x612D6C656E72656BLL && *(_DWORD *)(a1 + 8) == 1701995620 && *(_WORD *)(a1 + 12) == 29555 )
      {
        v5 = 1;
        v3 = 1;
        v54 = 1;
      }
      else
      {
        v3 = 0;
        v54 = 1;
        v5 = 1;
        if ( !v57 )
          goto LABEL_118;
      }
LABEL_10:
      if ( v3 | (unsigned __int8)v54 )
        goto LABEL_11;
      goto LABEL_126;
    }
    v3 = 0;
    goto LABEL_122;
  }
  if ( !(*(_QWORD *)a1 ^ 0x2D7265746E696F70LL | *(_QWORD *)(a1 + 8) ^ 0x7463617274627573LL) )
  {
    v54 = 1;
    v3 = 1;
    goto LABEL_9;
  }
  v48 = a2 != 9;
  v3 = 0;
LABEL_123:
  v54 = a2 != 12;
  if ( !v48 )
  {
    if ( *(_QWORD *)a1 == 0x7365726464617768LL && *(_BYTE *)(a1 + 8) == 115 )
    {
      v3 = 1;
      v5 = a2 != 11;
      goto LABEL_11;
    }
    v5 = a2 != 11;
    if ( v3 | (unsigned __int8)v54 )
      goto LABEL_11;
LABEL_126:
    if ( *(_QWORD *)a1 == 0x732D6761746D656DLL && *(_DWORD *)(a1 + 8) == 1801675124 )
      goto LABEL_128;
    goto LABEL_12;
  }
LABEL_9:
  v5 = a2 != 11;
  if ( v3 || v57 )
    goto LABEL_10;
LABEL_118:
  if ( !(*(_QWORD *)a1 ^ 0x682D6C656E72656BLL | *(_QWORD *)(a1 + 8) ^ 0x7373657264646177LL) )
  {
    v3 = 1;
    goto LABEL_12;
  }
LABEL_11:
  if ( !((unsigned __int8)v5 | v3) )
  {
    if ( *(_QWORD *)a1 == 0x682D6761746D656DLL && *(_WORD *)(a1 + 8) == 24933 && *(_BYTE *)(a1 + 10) == 112 )
      v3 = 1;
    goto LABEL_13;
  }
LABEL_12:
  if ( !(v3 | LOBYTE(v53[0])) )
  {
    if ( *(_QWORD *)a1 == 0x672D6761746D656DLL && *(_DWORD *)(a1 + 8) == 1633841004 && *(_WORD *)(a1 + 12) == 29548 )
    {
      if ( a3 )
      {
        v9 = a3;
        v3 = a2 != 6;
        v7 = a2 != 4;
        goto LABEL_348;
      }
      goto LABEL_128;
    }
    if ( a3 )
      goto LABEL_188;
  }
LABEL_13:
  if ( v3 )
  {
LABEL_128:
    v3 = 1;
LABEL_17:
    v6 = a2 != 6;
LABEL_18:
    v7 = a2 != 4;
    if ( !v3 && !v6 )
    {
      if ( *(_DWORD *)a1 == 2054845798 && *(_WORD *)(a1 + 4) == 29285 )
      {
        v8 = 1;
        v9 = 1;
      }
      else
      {
        v8 = a2 != 4;
        v9 = 0;
      }
      v3 = 0;
      goto LABEL_22;
    }
    v9 = v3;
    v3 = v6;
    goto LABEL_348;
  }
  if ( a2 == 6 )
  {
    if ( *(_DWORD *)a1 == 1953326445 && *(_WORD *)(a1 + 4) == 26465
      || *(_DWORD *)a1 == 1869440365 && *(_WORD *)(a1 + 4) == 31090 )
    {
      v7 = 1;
      v9 = 1;
LABEL_348:
      v49 = v9 | LOBYTE(v53[0]);
      goto LABEL_192;
    }
    goto LABEL_17;
  }
LABEL_188:
  v6 = a2 != 6;
  v9 = v3 || a2 != 13;
  if ( v9 )
    goto LABEL_18;
  if ( *(_QWORD *)a1 == 0x6D2D6C656E72656BLL && *(_DWORD *)(a1 + 8) == 1919905125 && *(_BYTE *)(a1 + 12) == 121 )
  {
    v49 = 1;
    v9 = 1;
  }
  else
  {
    v49 = LOBYTE(v53[0]);
  }
  v3 = a2 != 6;
  v7 = 1;
LABEL_192:
  v8 = v9 | v7;
  if ( !v49 )
  {
    if ( *(_QWORD *)a1 == 0x6E2D72657A7A7566LL && *(_DWORD *)(a1 + 8) == 1768697199 && *(_WORD *)(a1 + 12) == 27502 )
    {
      v10 = 1;
      v9 = 1;
    }
    else
    {
      v10 = v3 | v9;
    }
    goto LABEL_23;
  }
LABEL_22:
  v10 = v3 | v9;
  if ( !v8 )
  {
    v52 = v4 | v9;
    if ( *(_DWORD *)a1 == 1701869940 )
    {
      v52 = 1;
      v9 = 1;
    }
    v55 = a2 != 8;
    v11 = v9 | (a2 != 8);
    if ( v52 )
    {
LABEL_25:
      if ( v11 )
        goto LABEL_26;
      goto LABEL_270;
    }
    goto LABEL_275;
  }
LABEL_23:
  v55 = a2 != 8;
  if ( v10 )
  {
    v11 = v9 | v55;
    if ( v4 | (unsigned __int8)v9 )
      goto LABEL_25;
LABEL_275:
    if ( *(_QWORD *)a1 == 0x61636972656D756ELL && *(_BYTE *)(a1 + 8) == 108 )
    {
      v9 = 1;
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  if ( *(_DWORD *)a1 == 1701996660 && *(_WORD *)(a1 + 4) == 25697 )
  {
    v9 = 1;
  }
  else if ( !((unsigned __int8)v9 | v55) )
  {
LABEL_270:
    if ( *(_QWORD *)a1 == 0x656D69746C616572LL )
    {
      v9 = 1;
      goto LABEL_28;
    }
LABEL_27:
    if ( !(v4 | (unsigned __int8)v9) )
    {
      if ( *(_QWORD *)a1 == 0x6E656D6E67696C61LL && *(_BYTE *)(a1 + 8) == 116 )
      {
        v13 = 1;
        v9 = 1;
      }
      else
      {
        v13 = v7 | v9;
      }
      v59 = a2 != 7;
      goto LABEL_30;
    }
    goto LABEL_28;
  }
LABEL_26:
  if ( v7 | (unsigned __int8)v9 )
    goto LABEL_27;
  if ( *(_DWORD *)a1 != 1801545068 )
  {
LABEL_28:
    v12 = v9 | v54;
    goto LABEL_29;
  }
  v12 = 1;
  v9 = 1;
LABEL_29:
  v59 = a2 != 7;
  v13 = v7 | v9;
  if ( !v12 )
  {
    if ( *(_QWORD *)a1 == 0x6F622D7961727261LL && *(_DWORD *)(a1 + 8) == 1935961717 )
    {
      v14 = 1;
      v9 = 1;
    }
    else
    {
      v14 = v9 | v59;
    }
    goto LABEL_31;
  }
LABEL_30:
  v14 = v9 | v59;
  if ( !v13 )
  {
    if ( *(_DWORD *)a1 == 1819242338 )
      v9 = 1;
    v15 = *(_DWORD *)a1 == 1819242338;
    v56 = a2 != 19;
    goto LABEL_32;
  }
LABEL_31:
  v56 = a2 != 19;
  v15 = v7 | v9;
  if ( v14 )
  {
LABEL_32:
    v16 = v9 | v56;
    if ( v15 )
      goto LABEL_33;
    if ( *(_DWORD *)a1 == 1836412517 )
    {
      v9 = 1;
      goto LABEL_35;
    }
LABEL_34:
    if ( !((unsigned __int8)v9 | (a2 != 20)) )
    {
      if ( !(*(_QWORD *)a1 ^ 0x69642D74616F6C66LL | *(_QWORD *)(a1 + 8) ^ 0x2D79622D65646976LL)
        && *(_DWORD *)(a1 + 16) == 1869768058 )
      {
        v19 = 1;
        v9 = 1;
      }
      else
      {
        v19 = v9 | (a2 != 22);
      }
      v18 = a2 != 17;
LABEL_38:
      v20 = v18 | v9;
      if ( !v19 )
      {
        if ( !(*(_QWORD *)a1 ^ 0x2D72656765746E69LL | *(_QWORD *)(a1 + 8) ^ 0x622D656469766964LL)
          && *(_DWORD *)(a1 + 16) == 1702505849
          && *(_WORD *)(a1 + 20) == 28530 )
        {
          v9 = 1;
          goto LABEL_41;
        }
        goto LABEL_40;
      }
      goto LABEL_39;
    }
    goto LABEL_35;
  }
  if ( *(_DWORD *)a1 == 1818850658 && *(_WORD *)(a1 + 4) == 26996 && *(_BYTE *)(a1 + 6) == 110 )
  {
    v9 = 1;
    goto LABEL_34;
  }
  v16 = v9 | v56;
LABEL_33:
  if ( v16 )
    goto LABEL_34;
  if ( *(_QWORD *)a1 ^ 0x61632D74616F6C66LL | *(_QWORD *)(a1 + 8) ^ 0x667265766F2D7473LL
    || *(_WORD *)(a1 + 16) != 28524
    || *(_BYTE *)(a1 + 18) != 119 )
  {
LABEL_35:
    v17 = v9 | v55;
    goto LABEL_36;
  }
  v17 = 1;
  v9 = 1;
LABEL_36:
  v18 = a2 != 17;
  if ( v17 )
  {
    v19 = v9 | (a2 != 22);
    goto LABEL_38;
  }
  v20 = v9 | v18;
  if ( *(_QWORD *)a1 == 0x6E6F6974636E7566LL )
  {
    v9 = 1;
    goto LABEL_40;
  }
LABEL_39:
  if ( !v20 )
  {
    if ( !(*(_QWORD *)a1 ^ 0x2D6C6C756E6E6F6ELL | *(_QWORD *)(a1 + 8) ^ 0x7475626972747461LL)
      && *(_BYTE *)(a1 + 16) == 101 )
    {
      goto LABEL_153;
    }
    goto LABEL_41;
  }
LABEL_40:
  if ( !(v7 | (unsigned __int8)v9) )
  {
    if ( *(_DWORD *)a1 == 1819047278 )
      goto LABEL_153;
    goto LABEL_42;
  }
LABEL_41:
  if ( (unsigned __int8)v9 | v58 )
  {
LABEL_42:
    if ( !v9 )
    {
      if ( a2 == 18 )
      {
        if ( !(*(_QWORD *)a1 ^ 0x6C6962616C6C756ELL | *(_QWORD *)(a1 + 8) ^ 0x697373612D797469LL)
          && *(_WORD *)(a1 + 16) == 28263
          || !(*(_QWORD *)a1 ^ 0x6C6962616C6C756ELL | *(_QWORD *)(a1 + 8) ^ 0x757465722D797469LL)
          && *(_WORD *)(a1 + 16) == 28274 )
        {
          goto LABEL_157;
        }
        goto LABEL_48;
      }
      goto LABEL_202;
    }
    goto LABEL_153;
  }
  if ( *(_QWORD *)a1 != 0x6C6962616C6C756ELL
    || *(_DWORD *)(a1 + 8) != 762934377
    || *(_WORD *)(a1 + 12) != 29281
    || *(_BYTE *)(a1 + 14) != 103 )
  {
LABEL_202:
    if ( a3 )
    {
      v21 = a2 != 25;
      if ( !v5 )
      {
LABEL_50:
        if ( *(_QWORD *)a1 == 0x6C6962616C6C756ELL && *(_WORD *)(a1 + 8) == 29801 && *(_BYTE *)(a1 + 10) == 121
          || *(_QWORD *)a1 == 0x732D7463656A626FLL && *(_WORD *)(a1 + 8) == 31337 && *(_BYTE *)(a1 + 10) == 101 )
        {
          v23 = 1;
          v22 = 1;
        }
        else
        {
          v22 = v9;
          v23 = v3 | v9;
        }
        goto LABEL_53;
      }
      goto LABEL_204;
    }
    goto LABEL_48;
  }
LABEL_153:
  v9 = 1;
LABEL_48:
  if ( !v9 )
  {
    v21 = a2 != 25;
    if ( !v5 )
      goto LABEL_50;
LABEL_204:
    v22 = v9 | v57;
    if ( !((unsigned __int8)v9 | v57) )
    {
      v50 = v5;
      if ( *(_QWORD *)(a1 + 8) ^ 0x776F6C667265766FLL | *(_QWORD *)a1 ^ 0x2D7265746E696F70LL )
        v50 = v21;
      else
        v22 = v5;
      v24 = v5;
      v25 = v5 | v22;
      if ( !v50 )
        goto LABEL_209;
      goto LABEL_55;
    }
    v5 = v9 | v57;
    v22 = v9;
    goto LABEL_158;
  }
LABEL_157:
  v22 = 1;
  v21 = a2 != 25;
LABEL_158:
  v23 = v22 | v3;
LABEL_53:
  v24 = a2 != 10;
  if ( v23 )
  {
    v25 = v24 | v22;
    if ( v21 | (unsigned __int8)v22 )
      goto LABEL_55;
LABEL_209:
    if ( !(*(_QWORD *)a1 ^ 0x2D736E7275746572LL | *(_QWORD *)(a1 + 8) ^ 0x2D6C6C756E6E6F6ELL)
      && *(_QWORD *)(a1 + 16) == 0x7475626972747461LL
      && *(_BYTE *)(a1 + 24) == 101 )
    {
      v51 = 1;
      v22 = 1;
    }
    else
    {
      v51 = v22 | LOBYTE(v53[0]);
    }
    v26 = a2 != 5;
    v27 = (a2 != 5) | v22;
    if ( !v51 )
      goto LABEL_213;
LABEL_57:
    if ( v27 )
      goto LABEL_58;
    goto LABEL_216;
  }
  if ( *(_DWORD *)a1 == 1970562418 && *(_WORD *)(a1 + 4) == 28274 )
  {
    v25 = 1;
    v22 = 1;
  }
  else
  {
    v25 = v24 | v22;
  }
LABEL_55:
  v26 = a2 != 5;
  if ( !v25 )
  {
    if ( *(_QWORD *)a1 == 0x61622D7466696873LL && *(_WORD *)(a1 + 8) == 25971 )
    {
      v27 = 1;
      v22 = 1;
    }
    else
    {
      v27 = v26 | v22;
    }
    goto LABEL_57;
  }
  v27 = v26 | v22;
  if ( (unsigned __int8)v22 | LOBYTE(v53[0]) )
    goto LABEL_57;
LABEL_213:
  if ( *(_QWORD *)a1 == 0x78652D7466696873LL && *(_DWORD *)(a1 + 8) == 1701736304 && *(_WORD *)(a1 + 12) == 29806 )
  {
    v22 = a3;
    if ( a3 )
      goto LABEL_59;
    v22 = 1;
  }
  else if ( a3 )
  {
    goto LABEL_58;
  }
  if ( !(v26 | (unsigned __int8)v22) )
  {
LABEL_216:
    if ( *(_DWORD *)a1 == 1718184051 && *(_BYTE *)(a1 + 4) == 116 )
    {
      v22 = 1;
LABEL_60:
      v28 = v4 | v22;
      goto LABEL_61;
    }
LABEL_59:
    if ( !((unsigned __int8)v22 | (unsigned __int8)v5) )
    {
      if ( *(_QWORD *)a1 == 0x6168636165726E75LL && *(_WORD *)(a1 + 8) == 27746 && *(_BYTE *)(a1 + 10) == 101 )
      {
        v22 = 1;
        goto LABEL_63;
      }
      goto LABEL_62;
    }
    goto LABEL_60;
  }
LABEL_58:
  if ( (unsigned __int8)v22 | (a2 != 23) )
    goto LABEL_59;
  if ( !(*(_QWORD *)a1 ^ 0x692D64656E676973LL | *(_QWORD *)(a1 + 8) ^ 0x6F2D72656765746ELL)
    && *(_DWORD *)(a1 + 16) == 1718773110
    && *(_WORD *)(a1 + 20) == 28524
    && *(_BYTE *)(a1 + 22) == 119 )
  {
    v22 = 1;
    goto LABEL_62;
  }
  v28 = v4;
  v22 = 0;
LABEL_61:
  if ( !v28 )
  {
    if ( *(_QWORD *)a1 == 0x6E756F622D616C76LL && *(_BYTE *)(a1 + 8) == 100 )
    {
      v22 = 1;
      goto LABEL_64;
    }
    goto LABEL_63;
  }
LABEL_62:
  if ( !(v7 | (unsigned __int8)v22) )
  {
    if ( *(_DWORD *)a1 != 1920233590 )
      goto LABEL_64;
    v22 = 1;
LABEL_65:
    if ( !((unsigned __int8)v22 | v55) )
    {
      if ( *(_QWORD *)a1 == 0x776F6C6661746164LL )
      {
        v22 = 1;
        goto LABEL_68;
      }
      goto LABEL_67;
    }
    goto LABEL_66;
  }
LABEL_63:
  if ( !((unsigned __int8)v22 | v21) )
  {
    if ( !(*(_QWORD *)a1 ^ 0x64656E6769736E75LL | *(_QWORD *)(a1 + 8) ^ 0x72656765746E692DLL)
      && *(_QWORD *)(a1 + 16) == 0x6F6C667265766F2DLL
      && *(_BYTE *)(a1 + 24) == 119 )
    {
      v22 = 1;
      goto LABEL_66;
    }
    goto LABEL_65;
  }
LABEL_64:
  if ( (unsigned __int8)v22 | v56 )
    goto LABEL_65;
  if ( !(*(_QWORD *)a1 ^ 0x64656E6769736E75LL | *(_QWORD *)(a1 + 8) ^ 0x622D74666968732DLL)
    && *(_WORD *)(a1 + 16) == 29537
    && *(_BYTE *)(a1 + 18) == 101 )
  {
    v22 = 1;
    goto LABEL_67;
  }
LABEL_66:
  if ( !((unsigned __int8)v22 | v58) )
  {
    if ( *(_QWORD *)a1 != 0x747361632D696663LL
      || *(_DWORD *)(a1 + 8) != 1920234285
      || *(_WORD *)(a1 + 12) != 25449
      || *(_BYTE *)(a1 + 14) != 116 )
    {
      goto LABEL_68;
    }
    v22 = 1;
    goto LABEL_69;
  }
LABEL_67:
  if ( (unsigned __int8)v22 | v57 )
  {
LABEL_68:
    if ( v4 | (unsigned __int8)v22 )
      goto LABEL_69;
    if ( *(_QWORD *)a1 == 0x6C6163692D696663LL && *(_BYTE *)(a1 + 8) == 108 )
    {
      v22 = 1;
LABEL_71:
      v29 = v24 | v22;
      goto LABEL_72;
    }
LABEL_70:
    if ( !((unsigned __int8)v22 | (a2 != 18)) )
    {
      if ( !(*(_QWORD *)a1 ^ 0x65726E752D696663LL | *(_QWORD *)(a1 + 8) ^ 0x61632D646574616CLL)
        && *(_WORD *)(a1 + 16) == 29811 )
      {
        v31 = 1;
        v22 = 1;
      }
      else
      {
        v31 = v4 | v22;
      }
      v30 = a2 != 3;
      goto LABEL_73;
    }
    goto LABEL_71;
  }
  if ( !(*(_QWORD *)a1 ^ 0x697265642D696663LL | *(_QWORD *)(a1 + 8) ^ 0x747361632D646576LL) )
  {
    v22 = 1;
    goto LABEL_70;
  }
LABEL_69:
  v29 = v24 | v22;
  if ( v24 | (unsigned __int8)v22 )
    goto LABEL_70;
  if ( *(_QWORD *)a1 == 0x6163666D2D696663LL )
  {
    if ( *(_WORD *)(a1 + 8) == 27756 )
      v22 = 1;
    v29 = *(_WORD *)(a1 + 8) == 27756;
  }
LABEL_72:
  v30 = a2 != 3;
  v31 = v4 | v22;
  if ( !v29 )
  {
    if ( *(_QWORD *)a1 == 0x6163766E2D696663LL && *(_WORD *)(a1 + 8) == 27756 )
    {
      v32 = 1;
      v22 = 1;
    }
    else
    {
      v32 = v30 | v22;
    }
    goto LABEL_74;
  }
LABEL_73:
  v32 = v30 | v22;
  if ( !v31 )
  {
    if ( *(_QWORD *)a1 == 0x6C6163762D696663LL && *(_BYTE *)(a1 + 8) == 108 )
    {
      v22 = a3;
      if ( a3 )
        goto LABEL_76;
      v22 = 1;
    }
    else if ( a3 )
    {
LABEL_75:
      if ( !((unsigned __int8)v22 | v7) )
      {
        v22 = 0;
        if ( *(_DWORD *)a1 == 1768317803 )
        {
          v22 = 1;
          goto LABEL_79;
        }
        goto LABEL_78;
      }
      goto LABEL_76;
    }
    v32 = v22 | v30;
  }
LABEL_74:
  if ( v32 )
    goto LABEL_75;
  if ( *(_WORD *)a1 != 26211 || *(_BYTE *)(a1 + 2) != 105 )
  {
LABEL_76:
    if ( !((unsigned __int8)v22 | v24) )
    {
      if ( *(_QWORD *)a1 == 0x6174732D65666173LL && *(_WORD *)(a1 + 8) == 27491 )
        v22 = 1;
      goto LABEL_79;
    }
    goto LABEL_77;
  }
  v22 = 1;
LABEL_77:
  v18 |= v22;
LABEL_78:
  if ( !v18
    && !(*(_QWORD *)a1 ^ 0x632D776F64616873LL | *(_QWORD *)(a1 + 8) ^ 0x636174732D6C6C61LL)
    && *(_BYTE *)(a1 + 16) == 107 )
  {
    goto LABEL_156;
  }
LABEL_79:
  if ( a3 )
  {
    if ( !v22 )
    {
      if ( !v4 )
      {
        if ( *(_QWORD *)a1 == 0x656E696665646E75LL && *(_BYTE *)(a1 + 8) == 100 )
          v22 = a3;
        else
          v22 = 0;
        goto LABEL_164;
      }
      goto LABEL_82;
    }
LABEL_156:
    v33 = 1;
    v34 = a2 != 27;
LABEL_85:
    v35 = v34 | v33;
    goto LABEL_86;
  }
  if ( v22 )
    goto LABEL_156;
  if ( !v4 )
  {
    v22 = *(_QWORD *)a1 == 0x656E696665646E75LL && *(_BYTE *)(a1 + 8) == 100;
    v33 = v22 | LOBYTE(v53[0]);
    if ( !((unsigned __int8)v22 | LOBYTE(v53[0])) )
      goto LABEL_83;
    goto LABEL_164;
  }
LABEL_82:
  v33 = LOBYTE(v53[0]);
  if ( !LOBYTE(v53[0]) )
  {
LABEL_83:
    if ( *(_QWORD *)a1 == 0x656E696665646E75LL && *(_DWORD *)(a1 + 8) == 1920216420 )
      v33 = *(_WORD *)(a1 + 12) == 28769;
    v34 = 1;
    goto LABEL_85;
  }
LABEL_164:
  v34 = a2 != 27;
  if ( !((unsigned __int8)v22 | (a2 != 36)) )
  {
    if ( *(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x656E6769736E752DLL
      || *(_QWORD *)(a1 + 16) ^ 0x656765746E692D64LL | *(_QWORD *)(a1 + 24) ^ 0x61636E7572742D72LL
      || *(_DWORD *)(a1 + 32) != 1852795252 )
    {
      v33 = v22;
      v35 = v34 | v22;
    }
    else
    {
      v35 = 1;
      v33 = 1;
    }
LABEL_86:
    if ( v35 )
      goto LABEL_87;
    goto LABEL_226;
  }
  v33 = v22 | (a2 != 34);
  if ( v33 )
  {
    v33 = v22;
    goto LABEL_85;
  }
  if ( *(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x2D64656E6769732DLL
    || *(_QWORD *)(a1 + 16) ^ 0x2D72656765746E69LL | *(_QWORD *)(a1 + 24) ^ 0x697461636E757274LL
    || *(_WORD *)(a1 + 32) != 28271 )
  {
    if ( a3 )
    {
LABEL_228:
      v36 = a2 != 28;
      goto LABEL_88;
    }
    v33 = 0;
  }
  else
  {
    if ( a3 )
    {
      v33 = a3;
      v36 = a3;
LABEL_89:
      if ( !v33 )
      {
        v37 = 2;
        if ( a2 == 40 )
        {
LABEL_91:
          if ( *(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x72656765746E692DLL
            || *(_QWORD *)(a1 + 16) ^ 0x656D68746972612DLL | *(_QWORD *)(a1 + 24) ^ 0x756C61762D636974LL
            || *(_QWORD *)(a1 + 32) != 0x65676E6168632D65LL )
          {
            v38 = 0;
            v37 = 0;
          }
          else
          {
            v38 = 1;
          }
          v39 = 0;
          if ( a3 )
            goto LABEL_95;
          goto LABEL_178;
        }
        goto LABEL_236;
      }
LABEL_185:
      v37 = 0;
      goto LABEL_147;
    }
    v33 = v22 | (a2 != 36);
  }
  if ( !((unsigned __int8)v33 | v34) )
  {
LABEL_226:
    if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x72656765746E692DLL)
      && *(_QWORD *)(a1 + 16) == 0x7461636E7572742DLL
      && *(_WORD *)(a1 + 24) == 28521
      && *(_BYTE *)(a1 + 26) == 110 )
    {
      v33 = 1;
    }
    goto LABEL_228;
  }
LABEL_87:
  v36 = a2 != 28;
  if ( !((unsigned __int8)v33 | (a2 != 28)) )
  {
    if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x72656765746E692DLL)
      && *(_QWORD *)(a1 + 16) == 0x68632D6E6769732DLL
      && *(_DWORD *)(a1 + 24) == 1701277281 )
    {
      v37 = 1;
      goto LABEL_147;
    }
    v36 = 0;
    if ( a3 )
    {
      v36 = 0;
LABEL_236:
      v38 = 0;
      v37 = 0;
      v39 = 4;
      goto LABEL_178;
    }
    goto LABEL_176;
  }
LABEL_88:
  if ( a3 )
    goto LABEL_89;
  if ( v33 )
    goto LABEL_185;
LABEL_176:
  v37 = 0;
  if ( a2 == 40 )
    goto LABEL_91;
  v38 = 0;
  v37 = 0;
  v39 = 0;
LABEL_178:
  v40 = v38 | v34;
  if ( !v40 )
  {
    if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x72656765746E692DLL)
      && *(_QWORD *)(a1 + 16) == 0x737265766E6F632DLL
      && *(_WORD *)(a1 + 24) == 28521 )
    {
      if ( *(_BYTE *)(a1 + 26) == 110 )
        v37 = v39;
      v40 = *(_BYTE *)(a1 + 26) == 110;
    }
    goto LABEL_98;
  }
LABEL_95:
  v40 = v38;
  if ( !((unsigned __int8)v38 | v36)
    && !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x6C6569667469622DLL)
    && *(_QWORD *)(a1 + 16) == 0x7265766E6F632D64LL
    && *(_DWORD *)(a1 + 24) == 1852795251 )
  {
    v37 = 8;
    goto LABEL_147;
  }
LABEL_98:
  if ( !a3 )
  {
    if ( !v40 )
    {
      v41 = 0;
      if ( !v56 )
      {
        if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x737265766E6F632DLL)
          && *(_WORD *)(a1 + 16) == 28521
          && *(_BYTE *)(a1 + 18) == 110 )
        {
          v40 = 1;
          v37 = 0;
        }
        else
        {
          v40 = 0;
        }
        v41 = 0;
      }
      goto LABEL_102;
    }
LABEL_147:
    v42 = 1;
LABEL_148:
    v54 |= v42;
    goto LABEL_104;
  }
  if ( v40 )
    goto LABEL_147;
  if ( !v56 )
  {
    if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x737265766E6F632DLL)
      && *(_WORD *)(a1 + 16) == 28521
      && *(_BYTE *)(a1 + 18) == 110 )
    {
      v40 = a3;
      v37 = 16;
    }
    else
    {
      v40 = 0;
    }
    goto LABEL_199;
  }
  v41 = 32;
LABEL_102:
  v42 = v40 | v59;
  if ( (unsigned __int8)v40 | v59 )
  {
LABEL_199:
    if ( !((unsigned __int8)v40 | v4) )
    {
      if ( *(_QWORD *)a1 == 0x7361632D636A626FLL && *(_BYTE *)(a1 + 8) == 116 )
      {
        v43 = 1;
        v42 = 1;
        v37 = 64;
      }
      else
      {
        v43 = v40 | v3;
        v42 = v40;
      }
LABEL_106:
      v44 = 0;
      if ( !a3 )
        goto LABEL_108;
      goto LABEL_107;
    }
    v42 = v40;
    goto LABEL_148;
  }
  if ( *(_DWORD *)a1 == 1702129257 && *(_WORD *)(a1 + 4) == 25959 && *(_BYTE *)(a1 + 6) == 114 )
  {
    v37 = v41;
    v42 = 1;
    goto LABEL_105;
  }
LABEL_104:
  if ( v54 )
  {
LABEL_105:
    v43 = v42 | v3;
    goto LABEL_106;
  }
  if ( *(_QWORD *)a1 == 0x6F622D6C61636F6CLL && *(_DWORD *)(a1 + 8) == 1935961717 )
  {
    if ( !a3 )
    {
      v37 = 128;
      v42 = 1;
      goto LABEL_110;
    }
    v42 = a3;
    v37 = 128;
    v43 = a3 | v3;
  }
  else
  {
    if ( !a3 )
      goto LABEL_109;
    v43 = v42 | v3;
  }
LABEL_107:
  v44 = 256;
LABEL_108:
  if ( !v43 )
  {
    if ( *(_DWORD *)a1 == 1853189986 && *(_WORD *)(a1 + 4) == 29540 )
    {
      v37 = v44;
      v45 = 1;
      v42 = 1;
LABEL_111:
      v46 = (unsigned __int64)(a3 != 0) << 10;
      if ( v45 )
        goto LABEL_112;
      goto LABEL_142;
    }
LABEL_110:
    v45 = v42 | v30;
    goto LABEL_111;
  }
LABEL_109:
  if ( (unsigned __int8)v42 | v26 )
    goto LABEL_110;
  if ( *(_DWORD *)a1 == 1685414771 && *(_BYTE *)(a1 + 4) == 111 )
  {
    if ( !a3 )
    {
      v37 = 512;
      goto LABEL_114;
    }
    v42 = a3;
    v37 = 512;
  }
  else
  {
    if ( !a3 )
      goto LABEL_144;
    v42 = 0;
  }
  v46 = 1024;
  if ( !((unsigned __int8)v42 | v30) )
  {
LABEL_142:
    if ( *(_WORD *)a1 == 27745 )
    {
      v37 = v46;
      if ( *(_BYTE *)(a1 + 2) == 108 )
        goto LABEL_114;
    }
LABEL_144:
    v37 = 0;
    goto LABEL_114;
  }
LABEL_112:
  if ( !v42 )
    v37 = 0;
LABEL_114:
  *(_QWORD *)&v53[0] = v37;
  return _mm_loadh_ps(v53).m128_u64[0];
}
