unsigned __int64 __fastcall sub_20EF010(__int64 a1, __int64 a2)
{
  bool v2; // cl
  char v3; // al
  bool v4; // dl
  char v5; // bl
  char v6; // r9
  bool v7; // r10
  char v8; // r11
  char v9; // r8
  char v10; // r11
  bool v11; // bp
  char v12; // r12
  char v13; // r11
  bool v14; // r8
  char v15; // r12
  char v16; // r11
  char v17; // r12
  bool v18; // r11
  char v19; // r12
  bool v20; // r12
  char v21; // bl
  char v22; // r13
  char v23; // r14
  bool v24; // bl
  char v25; // r14
  char v26; // bp
  char v27; // bl
  char v28; // dl
  char v29; // r10
  char v30; // r12
  char v31; // r9
  char v32; // r8
  char v33; // al
  unsigned int v34; // ecx
  int v35; // eax
  char v37; // bl
  char v38; // bl
  bool v39; // r14
  bool v40; // r13
  char v41; // r13
  char v42; // r13
  unsigned __int64 v43; // [rsp+14h] [rbp-54h] BYREF
  int v44; // [rsp+1Ch] [rbp-4Ch]
  __int64 v45; // [rsp+20h] [rbp-48h] BYREF
  __int64 v46; // [rsp+28h] [rbp-40h]
  __int64 v47; // [rsp+30h] [rbp-38h]
  int v48; // [rsp+38h] [rbp-30h]
  int v49; // [rsp+3Ch] [rbp-2Ch]

  v45 = a1;
  v46 = a2;
  v49 = 0;
  if ( a2 == 6 )
  {
    if ( *(_DWORD *)a1 == 1702060641 && *(_WORD *)(a1 + 4) == 29806 )
    {
      v47 = 0;
      v3 = 1;
      v48 = 0x7FFFFFFF;
      LOBYTE(v49) = 1;
      goto LABEL_9;
    }
    v2 = 1;
LABEL_4:
    v3 = 0;
    goto LABEL_10;
  }
  if ( a2 != 7 )
  {
    v2 = a2 != 5;
    if ( a2 == 11 )
    {
      if ( *(_QWORD *)a1 == 0x615F7473756A6461LL && *(_WORD *)(a1 + 8) == 26482 && *(_BYTE *)(a1 + 10) == 115 )
      {
        LOBYTE(v49) = 1;
        v9 = 1;
        v3 = 1;
        v47 = 3;
        v48 = 0x7FFFFFFF;
      }
      else
      {
        v9 = a2 != 5;
        v3 = 0;
      }
      v4 = 1;
      v5 = 1;
      v6 = 0;
      if ( !v9 )
        goto LABEL_132;
LABEL_28:
      v7 = a2 != 9;
      if ( !((unsigned __int8)v5 | (unsigned __int8)v3) )
      {
        if ( *(_DWORD *)a1 == 1734962273 && *(_WORD *)(a1 + 4) == 25966 && *(_BYTE *)(a1 + 6) == 100 )
        {
          v47 = 6;
          v3 = v9;
          v48 = 0x7FFFFFFF;
          LOBYTE(v49) = 1;
        }
        else
        {
          v9 = a2 != 9;
          v3 = 0;
        }
        v5 = 0;
LABEL_32:
        v11 = a2 != 2;
        if ( v9 )
        {
          v12 = v11 | v3;
          if ( !((unsigned __int8)v6 | (unsigned __int8)v3) )
            goto LABEL_18;
        }
        else
        {
          if ( *(_QWORD *)a1 != 0x6F7461636F6C6C61LL || *(_BYTE *)(a1 + 8) != 114 )
          {
            v14 = a2 != 4;
            if ( v11 | (unsigned __int8)v3 )
            {
LABEL_35:
              v15 = v14 | v3;
              if ( !((unsigned __int8)v3 | (a2 != 24)) )
                goto LABEL_21;
              goto LABEL_36;
            }
LABEL_269:
            v15 = v14 | v3;
            if ( *(_WORD *)a1 == 29793 )
            {
              v3 = 1;
              v47 = 10;
              v48 = 0x7FFFFFFF;
              LOBYTE(v49) = 1;
              goto LABEL_38;
            }
            goto LABEL_36;
          }
          LOBYTE(v49) = 1;
          v12 = 1;
          v3 = 1;
          v47 = 8;
          v48 = 0x7FFFFFFF;
        }
LABEL_34:
        v14 = a2 != 4;
        if ( v12 )
          goto LABEL_35;
        goto LABEL_269;
      }
      goto LABEL_13;
    }
    goto LABEL_4;
  }
  if ( *(_DWORD *)a1 == 1601266529 && *(_WORD *)(a1 + 4) == 25970 && *(_BYTE *)(a1 + 6) == 108 )
  {
    v47 = 1;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
    goto LABEL_130;
  }
  if ( *(_DWORD *)a1 == 1970365281 && *(_WORD *)(a1 + 4) == 29289 && *(_BYTE *)(a1 + 6) == 101 )
  {
    v47 = 2;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
LABEL_130:
    v5 = 0;
    v2 = 1;
    v4 = 1;
    v3 = 1;
    goto LABEL_131;
  }
  v3 = 0;
LABEL_9:
  v2 = 1;
LABEL_10:
  v4 = a2 != 8;
  v5 = a2 != 7;
  if ( !((a2 != 8) | (unsigned __int8)v3) )
  {
    if ( *(_QWORD *)a1 == 0x7974696E69666661LL )
    {
      v47 = 4;
      v4 = 0;
      v6 = 1;
      v5 = 1;
      LOBYTE(v49) = 1;
      v7 = 1;
      v3 = 1;
      v48 = 0x7FFFFFFF;
    }
    else
    {
      v4 = 0;
      v3 = 0;
      v6 = 1;
      v5 = 1;
      v7 = 1;
    }
LABEL_13:
    v8 = v3 | v4;
    goto LABEL_14;
  }
LABEL_131:
  v6 = 1;
  v9 = v2 | v3;
  if ( v2 | (unsigned __int8)v3 )
    goto LABEL_28;
LABEL_132:
  if ( *(_DWORD *)a1 == 1734962273 && *(_BYTE *)(a1 + 4) == 110 )
  {
    LOBYTE(v49) = 1;
    v8 = 1;
    v3 = 1;
    v47 = 5;
    v48 = 0x7FFFFFFF;
  }
  else
  {
    v8 = v4 | v3;
  }
  v7 = a2 != 9;
LABEL_14:
  v9 = v7 | v3;
  if ( v8 )
    goto LABEL_32;
  v10 = v6 | v3;
  if ( *(_QWORD *)a1 == 0x657461636F6C6C61LL )
  {
    LOBYTE(v49) = 1;
    v10 = 1;
    v3 = 1;
    v47 = 7;
    v48 = 0x7FFFFFFF;
  }
  v11 = a2 != 2;
  v12 = (a2 != 2) | v3;
  if ( v10 )
    goto LABEL_34;
LABEL_18:
  if ( *(_QWORD *)a1 == 0x615F646E65707061LL && *(_WORD *)(a1 + 8) == 26482 && *(_BYTE *)(a1 + 10) == 115 )
  {
    LOBYTE(v49) = 1;
    v13 = 1;
    v3 = 1;
    v47 = 9;
    v48 = 0x7FFFFFFF;
  }
  else
  {
    v13 = v3 | (a2 != 24);
  }
  v14 = a2 != 4;
  v15 = (a2 != 4) | v3;
  if ( !v13 )
  {
LABEL_21:
    if ( !(*(_QWORD *)a1 ^ 0x645F63696D6F7461LL | *(_QWORD *)(a1 + 8) ^ 0x6D5F746C75616665LL)
      && *(_QWORD *)(a1 + 16) == 0x726564726F5F6D65LL )
    {
      v47 = 11;
      v3 = 1;
      v48 = 0x7FFFFFFF;
      LOBYTE(v49) = 1;
LABEL_38:
      v16 = v5 | v3;
      goto LABEL_39;
    }
    goto LABEL_37;
  }
LABEL_36:
  if ( !v15 )
  {
    v16 = v5 | v3;
    if ( *(_DWORD *)a1 != 1684957538 )
    {
LABEL_39:
      if ( !v16 )
      {
        if ( *(_DWORD *)a1 == 1953522019 && *(_WORD *)(a1 + 4) == 29301 && *(_BYTE *)(a1 + 6) == 101 )
        {
          v47 = 14;
          v3 = 1;
          v48 = 0x7FFFFFFF;
          LOBYTE(v49) = 1;
          goto LABEL_42;
        }
LABEL_286:
        if ( *(_DWORD *)a1 == 1886220131 && *(_WORD *)(a1 + 4) == 29281 && *(_BYTE *)(a1 + 6) == 101 )
        {
          LOBYTE(v49) = 1;
          v42 = 1;
          v3 = 1;
          v47 = 16;
          v48 = 0x7FFFFFFF;
        }
        else
        {
          v42 = v6 | v3;
        }
        v18 = a2 != 6;
        v19 = (a2 != 6) | v3;
        if ( !v42 )
          goto LABEL_289;
        goto LABEL_45;
      }
      goto LABEL_40;
    }
    v47 = 12;
    v3 = 1;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
    goto LABEL_40;
  }
LABEL_37:
  if ( (unsigned __int8)v3 | (a2 != 27) )
    goto LABEL_38;
  if ( !(*(_QWORD *)a1 ^ 0x616C6C65636E6163LL | *(_QWORD *)(a1 + 8) ^ 0x6E6F635F6E6F6974LL)
    && *(_QWORD *)(a1 + 16) == 0x745F746375727473LL
    && *(_WORD *)(a1 + 24) == 28793
    && *(_BYTE *)(a1 + 26) == 101 )
  {
    v47 = 13;
    v3 = 1;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
    goto LABEL_41;
  }
LABEL_40:
  v17 = v4 | v3;
  if ( !(v4 | (unsigned __int8)v3) )
  {
    if ( *(_QWORD *)a1 == 0x657370616C6C6F63LL )
    {
      LOBYTE(v49) = 1;
      v17 = 1;
      v3 = 1;
      v47 = 15;
      v48 = 0x7FFFFFFF;
    }
    goto LABEL_43;
  }
LABEL_41:
  if ( !((unsigned __int8)v5 | (unsigned __int8)v3) )
    goto LABEL_286;
LABEL_42:
  v17 = v4 | v3;
LABEL_43:
  v18 = a2 != 6;
  if ( v17 )
  {
    v19 = v18 | v3;
    if ( (unsigned __int8)v6 | (unsigned __int8)v3 )
      goto LABEL_45;
LABEL_289:
    if ( *(_QWORD *)a1 == 0x7669727079706F63LL && *(_WORD *)(a1 + 8) == 29793 && *(_BYTE *)(a1 + 10) == 101 )
    {
      v47 = 18;
      v3 = 1;
      v48 = 0x7FFFFFFF;
      LOBYTE(v49) = 1;
      goto LABEL_47;
    }
    goto LABEL_46;
  }
  v19 = v18 | v3;
  if ( *(_QWORD *)a1 == 0x736E6961746E6F63LL )
  {
    v3 = 1;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
    v47 = 17;
    goto LABEL_47;
  }
LABEL_45:
  if ( !v19 )
  {
    if ( *(_DWORD *)a1 == 2037411683 && *(_WORD *)(a1 + 4) == 28265 )
    {
      v47 = 19;
      v48 = 0x7FFFFFFF;
      LOBYTE(v49) = 1;
      goto LABEL_49;
    }
    goto LABEL_47;
  }
LABEL_46:
  if ( !((unsigned __int8)v5 | (unsigned __int8)v3) )
  {
    if ( *(_DWORD *)a1 == 1634100580 && *(_WORD *)(a1 + 4) == 27765 && *(_BYTE *)(a1 + 6) == 116 )
    {
      v47 = 20;
      v48 = 0x7FFFFFFF;
      LOBYTE(v49) = 1;
      goto LABEL_49;
    }
LABEL_48:
    if ( v3 )
    {
LABEL_49:
      v3 = 1;
      v20 = a2 != 13;
LABEL_50:
      v21 = v3 | v4;
      goto LABEL_51;
    }
    if ( !v18 )
    {
      if ( *(_DWORD *)a1 == 1701864804 && *(_WORD *)(a1 + 4) == 25710 )
      {
        v47 = 22;
        v48 = 0x7FFFFFFF;
        LOBYTE(v49) = 1;
        goto LABEL_49;
      }
      if ( *(_DWORD *)a1 == 1869636964 && *(_WORD *)(a1 + 4) == 27234 )
      {
        v47 = 106;
        v48 = 0x7FFFFFFF;
        LOBYTE(v49) = 1;
        goto LABEL_49;
      }
      if ( v5 )
        goto LABEL_139;
      v18 = 0;
LABEL_323:
      v3 = 0;
      goto LABEL_254;
    }
LABEL_213:
    if ( v5 )
    {
      if ( !v18 )
      {
LABEL_139:
        if ( *(_DWORD *)a1 == 1635018084 && *(_WORD *)(a1 + 4) == 26723 )
        {
          v47 = 25;
          goto LABEL_317;
        }
        if ( *(_DWORD *)a1 == 1769366884 && *(_WORD *)(a1 + 4) == 25955 )
        {
          v47 = 26;
LABEL_317:
          LOBYTE(v49) = 1;
          v3 = 1;
          v20 = a2 != 13;
          v48 = 0x7FFFFFFF;
          v18 = 0;
          goto LABEL_50;
        }
        v37 = v6;
        v18 = 0;
        goto LABEL_142;
      }
      v37 = v6;
LABEL_142:
      if ( v6 )
      {
        v20 = a2 != 13;
        if ( a2 == 13 )
        {
          if ( *(_QWORD *)a1 == 0x6863735F74736964LL && *(_DWORD *)(a1 + 8) == 1819632741 && *(_BYTE *)(a1 + 12) == 101 )
          {
            v47 = 28;
            v3 = v6;
            v48 = 0x7FFFFFFF;
            LOBYTE(v49) = 1;
          }
          else
          {
            v3 = 0;
          }
          v6 = v37;
          v20 = 0;
          goto LABEL_147;
        }
        v6 = v37;
        v3 = 0;
        goto LABEL_50;
      }
      v3 = 0;
      v6 = v37;
      goto LABEL_258;
    }
    goto LABEL_323;
  }
LABEL_47:
  if ( (unsigned __int8)v3 | (a2 != 10) )
    goto LABEL_48;
  if ( *(_QWORD *)a1 == 0x6D746C7561666564LL && *(_WORD *)(a1 + 8) == 28769 )
  {
    v47 = 21;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
    goto LABEL_49;
  }
  v5 |= v3;
  if ( !v3 )
    goto LABEL_213;
  if ( v5 )
    goto LABEL_49;
LABEL_254:
  if ( *(_DWORD *)a1 == 1953719652 && *(_WORD *)(a1 + 4) == 28530 && *(_BYTE *)(a1 + 6) == 121 )
  {
    v47 = 24;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
    goto LABEL_49;
  }
  if ( !v3 )
  {
    v37 = v6;
    goto LABEL_142;
  }
  if ( (unsigned __int8)v6 | (unsigned __int8)v3 )
    goto LABEL_49;
LABEL_258:
  if ( *(_QWORD *)a1 == 0x745F656369766564LL && *(_WORD *)(a1 + 8) == 28793 && *(_BYTE *)(a1 + 10) == 101 )
  {
    LOBYTE(v49) = 1;
    v21 = 1;
    v3 = 1;
    v47 = 27;
    v48 = 0x7FFFFFFF;
  }
  else
  {
    v21 = v4 | v3;
  }
  v20 = a2 != 13;
LABEL_51:
  if ( !v21 )
  {
    v38 = v2 | v3;
    if ( *(_QWORD *)a1 == 0x73736F7263616F64LL )
    {
      v47 = 29;
      v3 = 1;
      v48 = 0x7FFFFFFF;
      LOBYTE(v49) = 1;
      goto LABEL_149;
    }
LABEL_148:
    if ( !v38 )
    {
      if ( *(_DWORD *)a1 == 1702129253 && *(_BYTE *)(a1 + 4) == 114 )
      {
        v47 = 31;
        v3 = 1;
        v48 = 0x7FFFFFFF;
        LOBYTE(v49) = 1;
        goto LABEL_58;
      }
      if ( v14 | (unsigned __int8)v3 )
      {
LABEL_58:
        v23 = v18 | v3;
        goto LABEL_59;
      }
LABEL_221:
      v41 = v2 | v3;
      if ( *(_DWORD *)a1 == 1818845542 )
      {
        LOBYTE(v49) = 1;
        v41 = 1;
        v3 = 1;
        v47 = 33;
        v48 = 0x7FFFFFFF;
      }
      v24 = a2 != 12;
      v25 = (a2 != 12) | v3;
      if ( !v41 )
        goto LABEL_224;
LABEL_61:
      if ( !v25 )
      {
        if ( *(_QWORD *)a1 == 0x6972707473726966LL && *(_DWORD *)(a1 + 8) == 1702125942 )
        {
          v47 = 36;
          v48 = 0x7FFFFFFF;
          LOBYTE(v49) = 1;
          goto LABEL_64;
        }
        goto LABEL_63;
      }
      goto LABEL_62;
    }
LABEL_149:
    v22 = v14 | v3;
    if ( v7 | (unsigned __int8)v3 )
      goto LABEL_57;
    goto LABEL_150;
  }
  if ( (unsigned __int8)v3 | (a2 != 18) )
  {
LABEL_147:
    v38 = v3 | v2;
    goto LABEL_148;
  }
  if ( !(*(_QWORD *)a1 ^ 0x5F63696D616E7964LL | *(_QWORD *)(a1 + 8) ^ 0x6F7461636F6C6C61LL)
    && *(_WORD *)(a1 + 16) == 29554 )
  {
    v47 = 30;
    v3 = v21;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
  }
  else
  {
    v21 = v7;
    v3 = 0;
  }
  v22 = v14 | v3;
  if ( v21 )
  {
LABEL_57:
    if ( v22 )
      goto LABEL_58;
    goto LABEL_221;
  }
LABEL_150:
  if ( *(_QWORD *)a1 != 0x766973756C637865LL || *(_BYTE *)(a1 + 8) != 101 )
    goto LABEL_58;
  LOBYTE(v49) = 1;
  v23 = 1;
  v3 = 1;
  v47 = 32;
  v48 = 0x7FFFFFFF;
LABEL_59:
  v24 = a2 != 12;
  if ( v23 )
  {
    v25 = v24 | v3;
    if ( v2 | (unsigned __int8)v3 )
      goto LABEL_61;
LABEL_224:
    if ( *(_DWORD *)a1 == 1634625894 && *(_BYTE *)(a1 + 4) == 108 )
    {
      v47 = 35;
      v48 = 0x7FFFFFFF;
      LOBYTE(v49) = 1;
      goto LABEL_64;
    }
    goto LABEL_226;
  }
  if ( *(_DWORD *)a1 != 1953261926 || *(_WORD *)(a1 + 4) != 29285 )
  {
    v25 = v24 | v3;
    goto LABEL_61;
  }
  v47 = 34;
  v3 = 1;
  v48 = 0x7FFFFFFF;
  LOBYTE(v49) = 1;
LABEL_62:
  if ( v2 | (unsigned __int8)v3 )
  {
LABEL_63:
    if ( v3 )
    {
LABEL_64:
      v3 = 1;
      goto LABEL_65;
    }
    if ( !v14 )
    {
      if ( *(_DWORD *)a1 == 1836020326 )
      {
        v47 = 38;
        v3 = 1;
        v48 = 0x7FFFFFFF;
        LOBYTE(v49) = 1;
        goto LABEL_65;
      }
      if ( *(_DWORD *)a1 == 1819047270 )
      {
        v47 = 39;
        v3 = 1;
        v48 = 0x7FFFFFFF;
        LOBYTE(v49) = 1;
        goto LABEL_65;
      }
    }
    v39 = v7;
    goto LABEL_203;
  }
LABEL_226:
  if ( *(_DWORD *)a1 == 1937075302 && *(_BYTE *)(a1 + 4) == 104 )
  {
    v47 = 106;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
    goto LABEL_64;
  }
  if ( v3 )
  {
    if ( v7 | (unsigned __int8)v3 )
      goto LABEL_64;
LABEL_237:
    if ( *(_QWORD *)a1 == 0x7A69736E69617267LL && *(_BYTE *)(a1 + 8) == 101 )
    {
      v47 = 40;
      v3 = 1;
      v48 = 0x7FFFFFFF;
      LOBYTE(v49) = 1;
LABEL_66:
      v26 = v3 | v11;
      if ( v2 | (unsigned __int8)v3 )
        goto LABEL_67;
LABEL_208:
      if ( *(_DWORD *)a1 == 1684828008 && *(_BYTE *)(a1 + 4) == 115 )
      {
        v47 = 43;
        v3 = 1;
        v48 = 0x7FFFFFFF;
        LOBYTE(v49) = 1;
        goto LABEL_69;
      }
      goto LABEL_68;
    }
    goto LABEL_65;
  }
  v39 = v7;
LABEL_203:
  if ( !v7 )
  {
    v3 = 0;
    v7 = v39;
    goto LABEL_237;
  }
  if ( a2 == 15 )
  {
    if ( *(_QWORD *)a1 == 0x697665645F736168LL
      && *(_DWORD *)(a1 + 8) == 1633641827
      && *(_WORD *)(a1 + 12) == 25700
      && *(_BYTE *)(a1 + 14) == 114 )
    {
      v47 = 41;
      v40 = v7;
      v3 = v7;
      v48 = 0x7FFFFFFF;
      LOBYTE(v49) = 1;
    }
    else
    {
      v40 = v2;
      v3 = 0;
    }
    v7 = v39;
    v26 = v3 | v11;
    if ( !v40 )
      goto LABEL_208;
    goto LABEL_67;
  }
  v7 = v39;
  v3 = 0;
LABEL_65:
  if ( v14 | (unsigned __int8)v3 )
    goto LABEL_66;
  v26 = v3 | v11;
  if ( *(_DWORD *)a1 == 1953393000 )
  {
    v3 = 1;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
    v47 = 42;
    if ( v24 | 1 )
      goto LABEL_69;
LABEL_233:
    if ( *(_QWORD *)a1 == 0x63756465725F6E69LL && *(_DWORD *)(a1 + 8) == 1852795252 )
    {
      v47 = 45;
      v3 = 1;
      v48 = 0x7FFFFFFF;
      LOBYTE(v49) = 1;
      goto LABEL_72;
    }
LABEL_71:
    if ( !((unsigned __int8)v3 | v7) )
    {
      if ( *(_QWORD *)a1 == 0x766973756C636E69LL && *(_BYTE *)(a1 + 8) == 101 )
      {
        v47 = 47;
        v3 = 1;
        v48 = 0x7FFFFFFF;
        LOBYTE(v49) = 1;
        goto LABEL_74;
      }
      if ( v14 | (unsigned __int8)v3 )
      {
LABEL_74:
        v29 = v3 | v6;
        goto LABEL_75;
      }
LABEL_248:
      v30 = v3 | v20;
      if ( *(_DWORD *)a1 == 1953066601 )
      {
        v3 = 1;
        v48 = 0x7FFFFFFF;
        LOBYTE(v49) = 1;
        v47 = 49;
        if ( v18 | 1 )
          goto LABEL_80;
        goto LABEL_250;
      }
      goto LABEL_77;
    }
LABEL_72:
    v28 = v3 | v4;
    if ( v28 )
      goto LABEL_73;
    goto LABEL_244;
  }
LABEL_67:
  if ( v26 )
  {
LABEL_68:
    if ( (unsigned __int8)v3 | v24 )
    {
LABEL_69:
      v27 = v4 | v3;
      goto LABEL_70;
    }
    goto LABEL_233;
  }
  v27 = v4 | v3;
  if ( *(_WORD *)a1 == 26217 )
  {
    v47 = 44;
    v3 = 1;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
    goto LABEL_71;
  }
LABEL_70:
  if ( v27 )
    goto LABEL_71;
  v28 = v3;
  if ( *(_QWORD *)a1 == 0x68636E6172626E69LL )
  {
    v47 = 46;
    v3 = 1;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
LABEL_73:
    if ( (unsigned __int8)v3 | v14 )
      goto LABEL_74;
    goto LABEL_248;
  }
LABEL_244:
  v3 = v28;
  v29 = v28 | v6;
  if ( *(_QWORD *)a1 == 0x7463657269646E69LL )
  {
    v47 = 48;
    v3 = 1;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
    goto LABEL_76;
  }
LABEL_75:
  if ( v29 )
  {
LABEL_76:
    v30 = v3 | v20;
LABEL_77:
    if ( v30 )
    {
      v31 = v3 | v6;
      if ( v31 )
        goto LABEL_79;
LABEL_265:
      if ( *(_QWORD *)a1 == 0x766972707473616CLL && *(_WORD *)(a1 + 8) == 29793 && *(_BYTE *)(a1 + 10) == 101 )
      {
        v47 = 52;
        v3 = 1;
        v48 = 0x7FFFFFFF;
        LOBYTE(v49) = 1;
        goto LABEL_82;
      }
      v32 = v31 | v14;
      v3 = v31;
      goto LABEL_81;
    }
    if ( *(_QWORD *)a1 == 0x63697665645F7369LL && *(_DWORD *)(a1 + 8) == 1953521509 && *(_BYTE *)(a1 + 12) == 114 )
    {
      v47 = 51;
      v3 = 1;
      v48 = 0x7FFFFFFF;
      LOBYTE(v49) = 1;
      goto LABEL_80;
    }
    goto LABEL_79;
  }
  if ( *(_QWORD *)a1 != 0x696C616974696E69LL || *(_WORD *)(a1 + 8) != 25978 || *(_BYTE *)(a1 + 10) != 114 )
  {
    v31 = v3;
    goto LABEL_265;
  }
  v47 = 50;
  v3 = 1;
  v48 = 0x7FFFFFFF;
  LOBYTE(v49) = 1;
LABEL_79:
  if ( (unsigned __int8)v3 | v18 )
  {
LABEL_80:
    v32 = v3 | v14;
LABEL_81:
    if ( !v32 )
    {
      v33 = v2 | v3;
      if ( *(_DWORD *)a1 == 1802398060 )
      {
        v47 = 54;
        v48 = 0x7FFFFFFF;
        LOBYTE(v49) = 1;
        goto LABEL_85;
      }
      goto LABEL_84;
    }
    goto LABEL_82;
  }
LABEL_250:
  if ( *(_DWORD *)a1 == 1701734764 && *(_WORD *)(a1 + 4) == 29281 )
  {
    v47 = 53;
    v3 = 1;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
    goto LABEL_83;
  }
LABEL_82:
  if ( (unsigned __int8)v3 | (a2 != 3) )
  {
LABEL_83:
    v33 = v2 | v3;
LABEL_84:
    if ( !v33 && *(_DWORD *)a1 == 1668571501 && *(_BYTE *)(a1 + 4) == 104 )
    {
      v47 = 56;
      v48 = 0x7FFFFFFF;
      LOBYTE(v49) = 1;
    }
    goto LABEL_85;
  }
  if ( *(_WORD *)a1 == 24941 && *(_BYTE *)(a1 + 2) == 112 )
  {
    v47 = 55;
    v48 = 0x7FFFFFFF;
    LOBYTE(v49) = 1;
  }
LABEL_85:
  v43 = 57;
  v44 = 0x7FFFFFFF;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "memory_order", 12);
  v44 = 0x7FFFFFFF;
  v43 = 58;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "mergeable", 9);
  v44 = 0x7FFFFFFF;
  v43 = 59;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "message", 7);
  v44 = 0x7FFFFFFF;
  v43 = 60;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "nogroup", 7);
  v44 = 0x7FFFFFFF;
  v43 = 61;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "no_openmp", 9);
  v44 = 0x7FFFFFFF;
  v43 = 62;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "no_openmp_constructs", 20);
  v44 = 0x7FFFFFFF;
  v43 = 63;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "no_openmp_routines", 18);
  v44 = 0x7FFFFFFF;
  v43 = 64;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "no_parallelism", 14);
  v44 = 0x7FFFFFFF;
  v43 = 65;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "nowait", 6);
  v44 = 0x7FFFFFFF;
  v43 = 66;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "nocontext", 9);
  v44 = 0x7FFFFFFF;
  v43 = 67;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "nontemporal", 11);
  v44 = 0x7FFFFFFF;
  v43 = 68;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "notinbranch", 11);
  v44 = 0x7FFFFFFF;
  v43 = 69;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "novariants", 10);
  v44 = 0x7FFFFFFF;
  v43 = 70;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "num_tasks", 9);
  v44 = 0x7FFFFFFF;
  v43 = 71;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "num_teams", 9);
  v44 = 0x7FFFFFFF;
  v43 = 72;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "num_threads", 11);
  v44 = 0x7FFFFFFF;
  v43 = 73;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "ompx_attribute", 14);
  v44 = 0x7FFFFFFF;
  v43 = 74;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "ompx_bare", 9);
  v44 = 0x7FFFFFFF;
  v43 = 75;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "ompx_dyn_cgroup_mem", 19);
  v44 = 0x7FFFFFFF;
  v43 = 76;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "order", 5);
  v44 = 0x7FFFFFFF;
  v43 = 77;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "ordered", 7);
  v44 = 0x7FFFFFFF;
  v43 = 78;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "otherwise", 9);
  v44 = 0x7FFFFFFF;
  v43 = 79;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "partial", 7);
  v44 = 0x7FFFFFFF;
  v43 = 80;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "permutation", 11);
  v44 = 0x7FFFFFFF;
  v43 = 81;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "priority", 8);
  v44 = 0x7FFFFFFF;
  v43 = 82;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "private", 7);
  v44 = 0x7FFFFFFF;
  v43 = 83;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "proc_bind", 9);
  v44 = 0x7FFFFFFF;
  v43 = 84;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "read", 4);
  v44 = 0x7FFFFFFF;
  v43 = 85;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "reduction", 9);
  v44 = 0x7FFFFFFF;
  v43 = 86;
  sub_20EEFA0((__int64)&v45, (__int64)&v43, "relaxed", 7);
  if ( (_BYTE)v49 )
  {
LABEL_157:
    v35 = v47;
    v34 = HIDWORD(v47);
    goto LABEL_118;
  }
  if ( v46 == 7 )
  {
    if ( *(_DWORD *)v45 == 1701602674 && *(_WORD *)(v45 + 4) == 29537 && *(_BYTE *)(v45 + 6) == 101 )
    {
      v47 = 87;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
  }
  else if ( v46 == 15 )
  {
    if ( *(_QWORD *)v45 == 0x5F65737265766572LL
      && *(_DWORD *)(v45 + 8) == 1818650223
      && *(_WORD *)(v45 + 12) == 24943
      && *(_BYTE *)(v45 + 14) == 100 )
    {
      v47 = 88;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    goto LABEL_181;
  }
  if ( v46 == 7 )
  {
    if ( *(_DWORD *)v45 == 1701208435 && *(_WORD *)(v45 + 4) == 25964 && *(_BYTE *)(v45 + 6) == 110 )
    {
      v47 = 89;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    goto LABEL_90;
  }
LABEL_181:
  if ( v46 == 8 )
  {
    if ( *(_QWORD *)v45 == 0x656C756465686373LL )
    {
      v47 = 90;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    goto LABEL_183;
  }
LABEL_90:
  if ( v46 == 9 )
  {
    if ( *(_QWORD *)v45 == 0x70616D5F666C6573LL && *(_BYTE *)(v45 + 8) == 115 )
    {
      v47 = 91;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    goto LABEL_92;
  }
LABEL_183:
  if ( v46 == 7 )
  {
    if ( *(_DWORD *)v45 == 1601267059 && *(_WORD *)(v45 + 4) == 29539 && *(_BYTE *)(v45 + 6) == 116 )
    {
      v47 = 92;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    goto LABEL_185;
  }
LABEL_92:
  if ( v46 == 8 )
  {
    if ( *(_QWORD *)v45 == 0x7974697265766573LL )
    {
      v47 = 93;
      v35 = 93;
      v48 = 0x7FFFFFFF;
      v34 = 0;
      goto LABEL_118;
    }
    goto LABEL_94;
  }
LABEL_185:
  if ( v46 == 6 )
  {
    if ( *(_DWORD *)v45 == 1918986355 && *(_WORD *)(v45 + 4) == 25701 )
    {
      v47 = 94;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    goto LABEL_187;
  }
LABEL_94:
  if ( v46 == 4 )
  {
    if ( *(_DWORD *)v45 == 1684892019 )
    {
      v47 = 95;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    goto LABEL_96;
  }
LABEL_187:
  if ( v46 == 7 )
  {
    if ( *(_DWORD *)v45 == 1684892019 && *(_WORD *)(v45 + 4) == 25964 && *(_BYTE *)(v45 + 6) == 110 )
    {
      v47 = 96;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    goto LABEL_190;
  }
LABEL_96:
  if ( v46 == 5 )
  {
    if ( *(_DWORD *)v45 == 1702521203 && *(_BYTE *)(v45 + 4) == 115 )
    {
      v47 = 97;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    goto LABEL_98;
  }
LABEL_190:
  if ( v46 == 14 )
  {
    if ( *(_QWORD *)v45 == 0x6465725F6B736174LL && *(_DWORD *)(v45 + 8) == 1769235317 && *(_WORD *)(v45 + 12) == 28271 )
    {
      v47 = 98;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    goto LABEL_193;
  }
LABEL_98:
  if ( v46 == 12 )
  {
    if ( *(_QWORD *)v45 == 0x6C5F646165726874LL && *(_DWORD *)(v45 + 8) == 1953066345 )
    {
      v47 = 99;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    goto LABEL_100;
  }
LABEL_193:
  if ( v46 == 13 )
  {
    if ( *(_QWORD *)v45 == 0x7270646165726874LL && *(_DWORD *)(v45 + 8) == 1952544361 && *(_BYTE *)(v45 + 12) == 101 )
      goto LABEL_410;
    goto LABEL_196;
  }
LABEL_100:
  if ( v46 == 7 )
  {
    if ( *(_DWORD *)v45 == 1701996660 && *(_WORD *)(v45 + 4) == 25697 && *(_BYTE *)(v45 + 6) == 115 )
    {
      v47 = 101;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    goto LABEL_102;
  }
LABEL_196:
  if ( v46 == 2 )
  {
    if ( *(_WORD *)v45 == 28532 )
    {
      v47 = 102;
      v35 = 102;
      v48 = 0x7FFFFFFF;
      v34 = 0;
      goto LABEL_118;
    }
    goto LABEL_173;
  }
LABEL_102:
  if ( v46 == 15 )
  {
    if ( *(_QWORD *)v45 == 0x5F64656966696E75LL
      && *(_DWORD *)(v45 + 8) == 1919181921
      && *(_WORD *)(v45 + 12) == 29541
      && *(_BYTE *)(v45 + 14) == 115 )
    {
      v47 = 103;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    goto LABEL_104;
  }
LABEL_173:
  if ( v46 == 21
    && !(*(_QWORD *)v45 ^ 0x5F64656966696E75LL | *(_QWORD *)(v45 + 8) ^ 0x6D5F646572616873LL)
    && *(_DWORD *)(v45 + 16) == 1919905125
    && *(_BYTE *)(v45 + 20) == 121 )
  {
    v47 = 104;
    v48 = 0x7FFFFFFF;
    goto LABEL_157;
  }
LABEL_104:
  if ( v46 == 7 )
  {
    if ( *(_DWORD *)v45 == 1718185589 && *(_WORD *)(v45 + 4) == 29295 && *(_BYTE *)(v45 + 6) == 109 )
    {
      v47 = 105;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    if ( *(_DWORD *)v45 == 1852534389 && *(_WORD *)(v45 + 4) == 30575 && *(_BYTE *)(v45 + 6) == 110 )
    {
LABEL_410:
      v47 = 106;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
  }
  switch ( v46 )
  {
    case 6LL:
      if ( *(_DWORD *)v45 == 1769238133 && *(_WORD *)(v45 + 4) == 25701 )
      {
        v47 = 107;
        v48 = 0x7FFFFFFF;
        goto LABEL_157;
      }
      if ( *(_DWORD *)v45 == 1633972341 && *(_WORD *)(v45 + 4) == 25972 )
      {
        v47 = 108;
        v48 = 0x7FFFFFFF;
        goto LABEL_157;
      }
      break;
    case 3LL:
      if ( *(_WORD *)v45 == 29557 && *(_BYTE *)(v45 + 2) == 101 )
      {
        v47 = 109;
        v48 = 0x7FFFFFFF;
        goto LABEL_157;
      }
      break;
    case 15LL:
      if ( *(_QWORD *)v45 == 0x697665645F657375LL
        && *(_DWORD *)(v45 + 8) == 1633641827
        && *(_WORD *)(v45 + 12) == 25700
        && *(_BYTE *)(v45 + 14) == 114 )
      {
        v47 = 110;
        v48 = 0x7FFFFFFF;
        goto LABEL_157;
      }
      goto LABEL_112;
  }
  if ( v46 != 14 )
  {
LABEL_112:
    if ( v46 == 15
      && *(_QWORD *)v45 == 0x6C6C615F73657375LL
      && *(_DWORD *)(v45 + 8) == 1952539503
      && *(_WORD *)(v45 + 12) == 29295
      && *(_BYTE *)(v45 + 14) == 115 )
    {
      v47 = 112;
      v48 = 0x7FFFFFFF;
      goto LABEL_157;
    }
    goto LABEL_114;
  }
  if ( *(_QWORD *)v45 == 0x697665645F657375LL && *(_DWORD *)(v45 + 8) == 1885300067 && *(_WORD *)(v45 + 12) == 29300 )
  {
    v47 = 111;
    v48 = 0x7FFFFFFF;
    goto LABEL_157;
  }
LABEL_114:
  if ( v46 == 4 )
  {
    if ( *(_DWORD *)v45 == 1801545079 )
    {
      v47 = 113;
      v35 = 113;
      v48 = 0x7FFFFFFF;
      v34 = 0;
      goto LABEL_118;
    }
    if ( *(_DWORD *)v45 == 1852139639 )
    {
      v47 = 114;
      v35 = 114;
      v48 = 0x7FFFFFFF;
      v34 = 0;
      goto LABEL_118;
    }
  }
  else if ( v46 == 5 && *(_DWORD *)v45 == 1953067639 && *(_BYTE *)(v45 + 4) == 101 )
  {
    v47 = 115;
    v48 = 0x7FFFFFFF;
    goto LABEL_157;
  }
  v34 = 0;
  v35 = 106;
LABEL_118:
  v43 = __PAIR64__(v34, v35);
  return __PAIR64__(v34, v35);
}
