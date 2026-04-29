__int64 __fastcall sub_7B2C0(__int128 a1, double a2, double a3)
{
  __int128 *v3; // rbx
  char *v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  int v7; // eax
  int v8; // ecx
  int v9; // r13d
  char v10; // r15
  int v11; // r14d
  char v12; // dh
  int v13; // eax
  __int64 v14; // rax
  unsigned __int16 v15; // dx
  unsigned __int8 v16; // al
  int v17; // eax
  char v18; // al
  int v19; // eax
  unsigned __int8 v20; // al
  int v21; // eax
  bool v22; // cc
  __int64 v23; // rax
  __int64 v24; // r13
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int16 v30; // ax
  __int16 v31; // r15
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // rax
  char v39; // al
  _BYTE *v40; // rax
  __int64 v41; // rax
  _BYTE *v42; // rax
  _BYTE *v43; // rax
  __int64 v44; // rax
  _BYTE *v45; // rax
  __int64 v46; // rax
  char v47; // cl
  __int64 v48; // rax
  char v49; // r15
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rax
  _BYTE *v57; // rax
  __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  bool v62; // zf
  bool v63; // sf
  int v64; // eax
  __int64 func; // rax
  int v66; // eax
  bool v67; // [rsp+1h] [rbp-605h]
  int v68; // [rsp+2h] [rbp-604h]
  int v69; // [rsp+6h] [rbp-600h]
  __int64 v70; // [rsp+6h] [rbp-600h]
  __int64 v71; // [rsp+6h] [rbp-600h]
  __int64 *v72; // [rsp+6h] [rbp-600h]
  int v73; // [rsp+Eh] [rbp-5F8h]
  __int64 v74; // [rsp+36h] [rbp-5D0h] BYREF
  __int128 v75; // [rsp+3Eh] [rbp-5C8h] BYREF
  __int64 v76; // [rsp+4Eh] [rbp-5B8h]
  __int64 v77; // [rsp+56h] [rbp-5B0h]
  __int64 v78; // [rsp+5Eh] [rbp-5A8h]
  char v79; // [rsp+66h] [rbp-5A0h] BYREF
  char v80; // [rsp+1A6h] [rbp-460h] BYREF
  __int128 v81; // [rsp+1AEh] [rbp-458h] BYREF
  __int64 v82; // [rsp+1BEh] [rbp-448h]
  __int64 v83; // [rsp+1C6h] [rbp-440h]
  __int64 v84; // [rsp+1CEh] [rbp-438h]
  _QWORD v85[5]; // [rsp+1D6h] [rbp-430h] BYREF
  char v86; // [rsp+1FFh] [rbp-407h]
  __int16 v87; // [rsp+204h] [rbp-402h]
  _BYTE v88[680]; // [rsp+316h] [rbp-2F0h] BYREF
  int v89; // [rsp+5BEh] [rbp-48h]
  unsigned __int64 v90; // [rsp+5C6h] [rbp-40h]

  v90 = __readfsqword(0x28u);
  v3 = (__int128 *)*((_QWORD *)&a1 + 1);
  v4 = &v79;
  v75 = -1;
  v76 = -1;
  v77 = 0;
  v78 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( &v80 != v4 );
  v5 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL);
  if ( (unsigned int)getinf() == 22 && !(unsigned __int8)segtype() )
  {
    getseg();
    if ( get_segm_class() <= 0 )
      set_segm_class();
  }
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(unsigned __int16 *)(*((_QWORD *)&a1 + 1) + 24LL);
  v8 = *(_DWORD *)(v6 + 104);
  if ( v8 > v7 || *(_DWORD *)(v6 + 108) <= v7 )
  {
    v69 = 0;
    LOBYTE(v9) = 0;
    v10 = 0;
    v11 = -1;
    v67 = 1;
    v68 = -1;
    v73 = 0;
    goto LABEL_7;
  }
  v68 = -1;
  v10 = 0;
  v9 = *(_DWORD *)(*(_QWORD *)(v6 + 112) + 16LL * (v7 - v8) + 8);
  v73 = v9 & 1;
  v67 = !(*(_BYTE *)(*(_QWORD *)(v6 + 112) + 16LL * (v7 - v8) + 8) & 1);
  if ( (v9 & 0x100) != 0 )
  {
    v10 = 1;
    v20 = is_forced_operand();
    v68 = v20;
    v21 = sub_750A0(a1, (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 40LL), a1 + 5256, v20, (char *)&v75, 0.0);
    if ( v21 )
    {
      v10 = 0;
      if ( v21 == 2 )
        v3 = &v75;
    }
  }
  v11 = -1;
  v69 = v9 & 2;
  if ( (v9 & 0x200) == 0 )
  {
LABEL_7:
    if ( !*((_BYTE *)v3 + 121) )
      goto LABEL_8;
    goto LABEL_21;
  }
  v16 = is_forced_operand();
  *((_QWORD *)&a1 + 1) = v3;
  v11 = v16;
  v17 = sub_750A0(a1, (unsigned __int8 *)v3 + 80, a1 + 5272, v16, (char *)&v75, 0.0);
  if ( v17 )
  {
    if ( v17 == 2 )
      v3 = &v75;
    goto LABEL_7;
  }
  v10 = 1;
  if ( !*((_BYTE *)v3 + 121) )
    goto LABEL_8;
LABEL_21:
  v18 = is_forced_operand();
  *((_QWORD *)&a1 + 1) = v3;
  v19 = sub_750A0(a1, (unsigned __int8 *)v3 + 120, a1 + 5288, v18, (char *)&v75, 0.0);
  if ( v19 )
  {
    if ( v19 == 2 )
      v3 = &v75;
  }
  else
  {
    v10 = 1;
  }
LABEL_8:
  v12 = (unsigned __int16)get_flags_ex() >> 8;
  v13 = *((_DWORD *)v3 + 7);
  if ( (v12 & 8) == 0 && ((v13 & 0x100000) != 0 || (v13 & 0x2000) != 0) )
  {
    set_cmt();
    v13 = *((_DWORD *)v3 + 7);
  }
  if ( (v13 & 6) != 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 4488) + 8LL) = 512;
  v14 = *((unsigned __int16 *)v3 + 12);
  v15 = *((_WORD *)v3 + 12);
  if ( (unsigned __int16)v14 > 0x67u )
  {
    if ( (_WORD)v14 != 209 && (_WORD)v14 != 216 )
    {
      if ( !v69 )
        goto LABEL_30;
      goto LABEL_106;
    }
    if ( *((_BYTE *)v3 + 41) != 1 || *((_BYTE *)v3 + 81) != 1 || *((_WORD *)v3 + 23) != *((_WORD *)v3 + 43) )
    {
      if ( !v69 )
      {
        if ( !v67 )
        {
          if ( v10 )
            goto LABEL_100;
          goto LABEL_137;
        }
        goto LABEL_30;
      }
      goto LABEL_106;
    }
    if ( (*(_BYTE *)(a1 + 5265) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 5264) = 1;
      *(_QWORD *)(a1 + 5256) = 0;
    }
    if ( (*(_BYTE *)(a1 + 5281) & 1) != 0 )
    {
      v15 = *((_WORD *)v3 + 12);
      v14 = v15;
      if ( v69 )
      {
LABEL_202:
        if ( v15 != 46 )
        {
          v10 = 0;
          goto LABEL_104;
        }
        if ( v73 )
          goto LABEL_73;
        v10 = v67;
        v14 = 46;
        goto LABEL_205;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 5280) = 1;
      *(_QWORD *)(a1 + 5272) = 0;
      v15 = *((_WORD *)v3 + 12);
      v14 = v15;
      if ( v69 )
        goto LABEL_202;
    }
    if ( !v67 )
      goto LABEL_137;
    v14 = v15;
    v67 = 1;
    if ( v15 != 48 )
      goto LABEL_137;
    if ( (*(_BYTE *)(a1 + 4453) & 0x40) == 0 || v5 <= 5 )
    {
LABEL_113:
      v14 = 48;
LABEL_114:
      switch ( v14 )
      {
        case 0LL:
          if ( under_debugger )
            BUG();
          interr();
          goto LABEL_310;
        case 1LL:
        case 2LL:
        case 3LL:
        case 4LL:
        case 5LL:
        case 28LL:
        case 32LL:
        case 33LL:
          goto LABEL_116;
        case 6LL:
          if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
            goto LABEL_39;
          v14 = *(_QWORD *)(a1 + 5272);
          *(_DWORD *)(a1 + 5264) = 1;
          *(_QWORD *)(a1 + 5256) += v14;
          LOWORD(v14) = *((_WORD *)v3 + 12);
          goto LABEL_34;
        case 7LL:
          if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
            goto LABEL_39;
          v14 = *(_QWORD *)(a1 + 5272);
          *(_DWORD *)(a1 + 5264) = 1;
          *(_QWORD *)(a1 + 5256) &= v14;
          LOWORD(v14) = *((_WORD *)v3 + 12);
          goto LABEL_34;
        case 8LL:
        case 9LL:
        case 10LL:
        case 11LL:
        case 12LL:
        case 13LL:
        case 14LL:
        case 15LL:
        case 20LL:
        case 21LL:
        case 22LL:
        case 23LL:
        case 24LL:
        case 25LL:
        case 26LL:
        case 27LL:
        case 30LL:
        case 31LL:
        case 36LL:
        case 37LL:
        case 38LL:
        case 39LL:
        case 40LL:
        case 45LL:
        case 47LL:
          goto LABEL_39;
        case 16LL:
        case 17LL:
        case 18LL:
          goto LABEL_210;
        case 19LL:
          if ( (*(_BYTE *)(a1 + 5281) & 1) != 0 )
            goto LABEL_39;
          *(_DWORD *)(a1 + 5280) = 1;
          v62 = *(_BYTE *)(a1 + 5256) == 0;
          v63 = *(char *)(a1 + 5256) < 0;
          goto LABEL_303;
        case 29LL:
          if ( (*(_BYTE *)(a1 + 5281) & 1) != 0 )
            goto LABEL_39;
          *(_DWORD *)(a1 + 5280) = 1;
          v61 = *(_DWORD *)(a1 + 5256);
          v62 = v61 == 0;
          v63 = v61 < 0;
LABEL_303:
          *(_QWORD *)(a1 + 5272) = -(__int64)(v63 | (unsigned __int8)v62);
          goto LABEL_33;
        case 34LL:
          if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
            goto LABEL_39;
          --*(_QWORD *)(a1 + 5256);
          *(_DWORD *)(a1 + 5264) = 1;
          LOWORD(v14) = *((_WORD *)v3 + 12);
          goto LABEL_34;
        case 35LL:
          goto LABEL_244;
        case 41LL:
        case 42LL:
          goto LABEL_245;
        case 43LL:
          *(_DWORD *)(a1 + 5264) = 512;
          goto LABEL_32;
        case 44LL:
          if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
            goto LABEL_39;
          ++*(_QWORD *)(a1 + 5256);
          *(_DWORD *)(a1 + 5264) = 1;
          LOWORD(v14) = *((_WORD *)v3 + 12);
          goto LABEL_34;
        case 46LL:
        case 48LL:
          goto LABEL_73;
        default:
          goto LABEL_319;
      }
    }
    v10 = 0;
    if ( (unsigned __int8)get_byte() == 0xE8 )
    {
      v67 = 0;
      v14 = *((unsigned __int16 *)v3 + 12);
      goto LABEL_137;
    }
    goto LABEL_323;
  }
  if ( (unsigned __int16)v14 <= 0x62u )
  {
    if ( v69 )
      goto LABEL_71;
    if ( v67 )
    {
      if ( (_WORD)v14 != 48 )
      {
        if ( v10 )
        {
          v67 = v10;
          goto LABEL_100;
        }
        goto LABEL_137;
      }
      goto LABEL_110;
    }
    if ( v10 )
      goto LABEL_100;
LABEL_205:
    v67 = v10;
LABEL_206:
    if ( (unsigned __int16)v14 <= 0x30u )
      goto LABEL_114;
    v47 = v14 - 49;
    if ( (unsigned __int16)(v14 - 49) > 0x2Bu )
      goto LABEL_39;
    if ( ((1LL << v47) & 0x13EE809E2D0LL) != 0 )
    {
LABEL_230:
      if ( (*(_BYTE *)(a1 + 4452) & 2) != 0
        && *((_WORD *)v3 + 13) <= 4u
        && (unsigned __int8)get_byte() == 0x90
        && (get_flags_ex() & 0x600) == 0 )
      {
        auto_mark_range();
        LOWORD(v14) = *((_WORD *)v3 + 12);
        goto LABEL_34;
      }
      goto LABEL_33;
    }
    if ( ((1LL << v47) & 0xF) == 0 )
    {
      if ( (_WORD)v14 == 92 )
      {
LABEL_116:
        *(_DWORD *)(a1 + 5264) = 512;
        LOWORD(v14) = *((_WORD *)v3 + 12);
      }
      goto LABEL_34;
    }
LABEL_210:
    *(_DWORD *)(*(_QWORD *)(a1 + 4472) + 8LL) = 512;
    *(_DWORD *)(*(_QWORD *)(a1 + 4520) + 8LL) = 512;
    *(_DWORD *)(*(_QWORD *)(a1 + 4488) + 8LL) = 512;
    *(_DWORD *)(*(_QWORD *)(a1 + 4504) + 8LL) = 512;
    *(_DWORD *)(*(_QWORD *)(a1 + 4552) + 8LL) = 512;
    *(_DWORD *)(*(_QWORD *)(a1 + 4568) + 8LL) = 512;
    *(_DWORD *)(*(_QWORD *)(a1 + 4536) + 8LL) = 512;
    LOWORD(v14) = *((_WORD *)v3 + 12);
    goto LABEL_34;
  }
  get_item_end();
  split_sreg_range();
  v15 = *((_WORD *)v3 + 12);
  v14 = v15;
  if ( !v69 )
  {
    if ( !v67 )
      goto LABEL_30;
    goto LABEL_109;
  }
LABEL_71:
  if ( v15 != 46 )
  {
LABEL_104:
    if ( v15 == 16
      && *((_BYTE *)v3 + 41) == 7
      && sub_7F350(a1, v3, (char *)v3 + 40) == *((_QWORD *)v3 + 2) + *((unsigned __int16 *)v3 + 13) )
    {
LABEL_107:
      v15 = *((_WORD *)v3 + 12);
      v14 = v15;
      if ( v73 )
        goto LABEL_30;
      if ( v15 == 16 )
      {
        func = get_func();
        if ( func )
        {
          v72 = (__int64 *)func;
          v66 = sub_6E480(a1, (__int64)v3, &v74);
          if ( v66 != -1 )
            sub_72440(a1, (__int64)v3, v72, v66, v74);
        }
        v15 = *((_WORD *)v3 + 12);
        v14 = v15;
      }
LABEL_109:
      if ( v15 != 48 )
        goto LABEL_30;
LABEL_110:
      if ( (*(_BYTE *)(a1 + 4453) & 0x40) == 0 || (v67 = 1, v5 <= 5) )
      {
        if ( v10 )
          goto LABEL_100;
        goto LABEL_113;
      }
      if ( (unsigned __int8)get_byte() != 0xE8 )
      {
LABEL_323:
        if ( v5 == 6 )
        {
          v67 = 1;
          v14 = *((unsigned __int16 *)v3 + 12);
        }
        else
        {
          v62 = (unsigned __int16)get_word() == 5631;
          v14 = *((unsigned __int16 *)v3 + 12);
          v67 = !v62;
        }
LABEL_30:
        if ( v10 )
        {
          if ( (_WORD)v14 != 132 )
            goto LABEL_100;
LABEL_32:
          if ( !(unsigned __int8)sub_6D2F0(a1, (__int64)v3) )
          {
LABEL_95:
            set_noret_insn();
            v67 = 0;
            LOWORD(v14) = *((_WORD *)v3 + 12);
            goto LABEL_34;
          }
LABEL_33:
          LOWORD(v14) = *((_WORD *)v3 + 12);
          goto LABEL_34;
        }
LABEL_137:
        if ( (unsigned __int16)v14 <= 0x15Eu )
        {
          if ( (unsigned __int16)v14 > 0x6Au )
          {
            switch ( (int)v14 )
            {
              case 107:
                *(_DWORD *)(a1 + 5280) = 512;
                goto LABEL_116;
              case 108:
              case 109:
              case 110:
              case 111:
              case 112:
              case 113:
              case 114:
              case 115:
              case 116:
              case 117:
              case 118:
              case 119:
                *(_DWORD *)(*(_QWORD *)(a1 + 4488) + 8LL) = 512;
                goto LABEL_230;
              case 122:
              case 123:
              case 229:
              case 230:
              case 231:
              case 232:
              case 233:
              case 234:
              case 235:
              case 236:
              case 237:
              case 238:
              case 239:
              case 240:
              case 241:
              case 242:
              case 243:
              case 244:
                *(_QWORD *)(a1 + 5256) = *(_QWORD *)(a1 + 5272);
                *(_DWORD *)(a1 + 5264) = *(_DWORD *)(a1 + 5280);
                LOWORD(v14) = *((_WORD *)v3 + 12);
                goto LABEL_34;
              case 124:
              case 152:
              case 153:
              case 161:
              case 166:
              case 167:
              case 207:
              case 215:
                goto LABEL_116;
              case 127:
LABEL_244:
                *(_DWORD *)(*(_QWORD *)(a1 + 4504) + 8LL) = 512;
LABEL_245:
                *(_DWORD *)(a1 + 5280) = 512;
                LOWORD(v14) = *((_WORD *)v3 + 12);
                goto LABEL_34;
              case 128:
                if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
                  goto LABEL_39;
                *(_QWORD *)(a1 + 5256) = -*(_QWORD *)(a1 + 5256);
                *(_DWORD *)(a1 + 5264) = 1;
                LOWORD(v14) = *((_WORD *)v3 + 12);
                goto LABEL_34;
              case 130:
                if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
                  goto LABEL_39;
                *(_QWORD *)(a1 + 5256) = ~*(_QWORD *)(a1 + 5256);
                *(_DWORD *)(a1 + 5264) = 1;
                LOWORD(v14) = *((_WORD *)v3 + 12);
                goto LABEL_34;
              case 131:
                if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
                  goto LABEL_39;
                v14 = *(_QWORD *)(a1 + 5272);
                *(_DWORD *)(a1 + 5264) = 1;
                *(_QWORD *)(a1 + 5256) |= v14;
                LOWORD(v14) = *((_WORD *)v3 + 12);
                goto LABEL_34;
              case 132:
                goto LABEL_32;
              case 134:
                *(_DWORD *)(a1 + 5264) = 512;
                v82 = -1;
                v57 = v85;
                v83 = 0;
                v84 = 0;
                v81 = -1;
                do
                {
                  *(_WORD *)v57 = 0;
                  v57 += 40;
                  *((_WORD *)v57 - 19) = 0;
                  *((_WORD *)v57 - 18) = 0;
                  *((_DWORD *)v57 - 2) = 0;
                  *((_WORD *)v57 - 17) = 0;
                  *((_OWORD *)v57 - 2) = 0;
                  *((_QWORD *)v57 - 2) = 0;
                }
                while ( v88 != v57 );
                if ( decode_prev_insn() != -1 && (_WORD)v83 == 143 )
                {
                  *((_QWORD *)&a1 + 1) = &v81;
                  sub_750A0(a1, (unsigned __int8 *)v85, a1 + 5256, 1, (char *)&v75, 0.0);
                }
                goto LABEL_33;
              case 135:
              case 136:
              case 137:
              case 138:
              case 350:
                goto LABEL_210;
              case 143:
                if ( (*(_BYTE *)(a1 + 4452) & 1) == 0 || *((_BYTE *)v3 + 41) != 5 )
                  goto LABEL_39;
                if ( (get_flags_ex() & 0xF00000) == 0 )
                {
                  sub_22580((__int64)&v81);
                  if ( decode_prev_insn() != -1 && (_WORD)v83 == 143 && sub_68F90((__int64)&v81, (__int64)v85) != -1 )
                  {
                    v56 = sel2para();
                    sub_6A820(v5, 0, 16 * v56);
                  }
                }
                goto LABEL_33;
              case 154:
                if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
                  goto LABEL_39;
                *(_DWORD *)(a1 + 5264) = 1;
                *(_QWORD *)(a1 + 5256) = __ROL8__(*(_QWORD *)(a1 + 5256), *(_QWORD *)(a1 + 5272));
                LOWORD(v14) = *((_WORD *)v3 + 12);
                goto LABEL_34;
              case 155:
                if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
                  goto LABEL_39;
                *(_DWORD *)(a1 + 5264) = 1;
                *(_QWORD *)(a1 + 5256) = __ROR8__(*(_QWORD *)(a1 + 5256), *(_QWORD *)(a1 + 5272));
                LOWORD(v14) = *((_WORD *)v3 + 12);
                goto LABEL_34;
              case 159:
              case 160:
                if ( (_WORD)v14 != 159 || netnode_supval() == 8 )
                  goto LABEL_321;
                v49 = sub_7AA50(a1, (__int64)v3);
                goto LABEL_249;
              case 163:
                if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
                  goto LABEL_39;
                v54 = *(_DWORD *)(a1 + 5256);
                v55 = *(_QWORD *)(a1 + 5272);
                *(_DWORD *)(a1 + 5264) = 1;
                *(_QWORD *)(a1 + 5256) = v54 >> v55;
                goto LABEL_33;
              case 164:
                if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
                  goto LABEL_39;
                *(_DWORD *)(a1 + 5264) = 1;
                *(_QWORD *)(a1 + 5256) <<= *(_QWORD *)(a1 + 5272);
                LOWORD(v14) = *((_WORD *)v3 + 12);
                goto LABEL_34;
              case 165:
                if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
                  goto LABEL_39;
                *(_DWORD *)(a1 + 5264) = 1;
                *(_QWORD *)(a1 + 5256) >>= *(_QWORD *)(a1 + 5272);
                LOWORD(v14) = *((_WORD *)v3 + 12);
                goto LABEL_34;
              case 209:
                if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
                  goto LABEL_39;
                v14 = *(_QWORD *)(a1 + 5256) - *(_QWORD *)(a1 + 5272);
                *(_DWORD *)(a1 + 5264) = 1;
                *(_QWORD *)(a1 + 5256) = v14;
                LOWORD(v14) = *((_WORD *)v3 + 12);
                goto LABEL_34;
              case 214:
                v58 = *(_QWORD *)(a1 + 5256);
                v59 = *(_DWORD *)(a1 + 5280) & 0x100;
                if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
                {
                  if ( v59 )
                    goto LABEL_39;
                }
                else
                {
                  v60 = *(_QWORD *)(a1 + 5272);
                  *(_DWORD *)(a1 + 5264) = 1;
                  *(_QWORD *)(a1 + 5256) = v60;
                  if ( v59 )
                    goto LABEL_33;
                }
                *(_DWORD *)(a1 + 5280) = 1;
                *(_QWORD *)(a1 + 5272) = v58;
                LOWORD(v14) = *((_WORD *)v3 + 12);
                goto LABEL_34;
              case 216:
                if ( (*(_BYTE *)(a1 + 5265) & 1) != 0 )
                  goto LABEL_39;
                v53 = *(_QWORD *)(a1 + 5272);
                *(_DWORD *)(a1 + 5264) = 1;
                *(_QWORD *)(a1 + 5256) ^= v53;
                goto LABEL_33;
              default:
                goto LABEL_34;
            }
          }
          goto LABEL_206;
        }
LABEL_319:
        if ( (_WORD)v14 == 588 )
        {
          sub_6D2F0(a1, (__int64)v3);
          goto LABEL_33;
        }
        if ( (unsigned __int16)(v14 - 736) > 5u )
          goto LABEL_39;
LABEL_321:
        v49 = 0;
LABEL_249:
        if ( netnode_supval() != 8 )
          goto LABEL_210;
        v74 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v5 + v74);
        if ( v74 != -1 )
        {
          if ( (unsigned __int8)is_loaded()
            && (get_flags_ex() & 0x600) == 0x400
            && (unsigned __int8)is_problem_present() )
          {
            del_items();
          }
          add_cref();
        }
        v50 = get_func();
        v71 = v50;
        if ( !v50 )
          goto LABEL_210;
        if ( v49 )
        {
          v51 = sub_22C00((__int64)v3);
          if ( *((_WORD *)v3 + 12) != 160 )
          {
LABEL_256:
            sub_68E80(v71, v3, v51);
            v52 = get_func();
            *((_QWORD *)&a1 + 1) = v52;
            if ( v52 && v49 )
            {
              *(_QWORD *)(v52 + 16) &= ~0x4000uLL;
              sub_6EE20(a1, 0);
            }
            goto LABEL_210;
          }
        }
        else
        {
          if ( (*(_BYTE *)(v50 + 17) & 4) != 0
            || !(unsigned __int8)getinf_flag()
            || (unsigned int)get_auto_state() != 40 )
          {
            goto LABEL_210;
          }
          v51 = sub_22C00((__int64)v3);
          if ( *((_WORD *)v3 + 12) != 160 )
          {
            sub_68E80(v71, v3, v51);
            get_func();
            goto LABEL_210;
          }
        }
        v51 *= 2;
        goto LABEL_256;
      }
LABEL_222:
      v67 = 0;
      v14 = *((unsigned __int16 *)v3 + 12);
      goto LABEL_30;
    }
LABEL_106:
    v35 = sub_73080(a1, (__int64)v3, (bool *)&v74);
    *((_QWORD *)&a1 + 1) = v3;
    if ( !(unsigned __int8)sub_7A480(a1, v35, (unsigned __int8)v74, 0.0, a3) )
      goto LABEL_222;
    goto LABEL_107;
  }
  if ( !v10 )
  {
LABEL_73:
    if ( !sub_61E40((__int64)v3) )
    {
      if ( !(unsigned __int8)sub_6D2F0(a1, (__int64)v3) || *((_QWORD *)v3 + 6) == 41 && (unsigned int)getinf() == 11 )
        goto LABEL_95;
      if ( (unsigned int)getinf() == 22
        || (unsigned int)getinf() == 23
        || (unsigned int)getinf() == 3
        || (unsigned int)getinf() == 2 )
      {
        v26 = getinf();
        if ( (unsigned int)v26 <= 0xD )
        {
          v27 = -8293;
          if ( !_bittest64(&v27, v26) && (*((_BYTE *)v3 + 28) & 0x18) == 0 )
            add_dref();
        }
        v28 = *((_QWORD *)v3 + 6);
        if ( v28 <= 0x3F )
        {
          v29 = 0x8000008100000000LL;
          if ( _bittest64((const __int64 *)&v29, v28) )
            goto LABEL_95;
          if ( v28 == 33 )
          {
            sub_22580((__int64)&v81);
            if ( decode_prev_insn() != -1
              && (_WORD)v83 == 122
              && BYTE1(v85[0]) == 1
              && (!HIWORD(v85[0]) || HIWORD(v85[0]) == 20 || v87 == 16)
              && v86 == 5
              && (get_flags_ex() & 0xF000000) == 0 )
            {
              set_op_type();
            }
            v30 = netnode_altval();
            LOBYTE(v31) = v30;
            if ( v30 )
              goto LABEL_94;
            v32 = *(_QWORD *)(a1 + 4648);
            v33 = *(_DWORD *)(v32 + 8);
            if ( (v33 & 1) != 0 || (~(_BYTE)v33 & 0x46) == 0 )
            {
              v34 = (unsigned __int8)BYTE1(*(_QWORD *)v32);
              v70 = v34;
              LOBYTE(v31) = BYTE1(*(_QWORD *)v32);
              BYTE1(v34) = -1;
              v74 = v34;
              netnode_supset();
              if ( v70 )
              {
LABEL_94:
                v31 = (unsigned __int8)v31;
                if ( v31 == 49 || v31 == 0 || (unsigned __int8)v31 == 76 )
                  goto LABEL_95;
              }
            }
          }
        }
      }
      goto LABEL_210;
    }
    if ( (unsigned __int8)sub_61860(a1, v3, (__int64)&v81) )
    {
      if ( WORD2(v81) && (get_flags_ex() & 0x800) == 0 )
        set_cmt();
      if ( (unsigned int)get_named_type() )
      {
        v74 = 0;
        if ( (unsigned __int8)deserialize_tinfo() )
          apply_callee_tinfo();
        clear_tinfo_t();
      }
    }
    v14 = 0x80000000LL;
    if ( *((_QWORD *)v3 + 6) == 32 )
      v14 = 0x8000;
    v62 = (*((_QWORD *)v3 + 11) & v14) == 0;
    LOWORD(v14) = *((_WORD *)v3 + 12);
    if ( !v62 )
      v67 = 0;
LABEL_34:
    v22 = (unsigned __int16)v14 <= 0x56u;
    if ( (_WORD)v14 == 86 )
      goto LABEL_101;
    goto LABEL_35;
  }
LABEL_100:
  *(_DWORD *)(a1 + 5264) = 512;
  *(_DWORD *)(a1 + 5280) = 512;
  LOWORD(v14) = *((_WORD *)v3 + 12);
  v22 = (unsigned __int16)v14 <= 0x56u;
  if ( (_WORD)v14 == 86 )
    goto LABEL_101;
LABEL_35:
  if ( v22 )
  {
    if ( (_WORD)v14 != 16 )
    {
      if ( (unsigned __int16)(v14 - 17) > 1u )
        goto LABEL_39;
      goto LABEL_38;
    }
LABEL_101:
    if ( (unsigned int)sub_79600(a1, (__int64)v3, 0, 0.0, a3) == 1 )
      goto LABEL_38;
    goto LABEL_39;
  }
  if ( (unsigned __int16)(v14 - 87) <= 1u )
LABEL_38:
    sub_4CD50(a1, (__int64)v3);
LABEL_39:
  if ( (v9 & 4) != 0 )
  {
    if ( v68 == -1 )
      LOBYTE(v68) = is_forced_operand();
    *((_QWORD *)&a1 + 1) = v3;
    sub_75BC0(a1, (__int64)v3 + 40, a1 + 5256, v68, 0.0);
  }
  if ( (v9 & 8) != 0 )
  {
    if ( v11 == -1 )
      LOBYTE(v11) = is_forced_operand();
    *((_QWORD *)&a1 + 1) = v3;
    sub_75BC0(a1, (__int64)(v3 + 5), a1 + 5272, v11, 0.0);
  }
  v23 = get_func();
  v24 = v23;
  if ( v67 )
    goto LABEL_118;
  if ( *((_WORD *)v3 + 12) != 88 )
  {
LABEL_49:
    if ( (unsigned int)get_auto_state() == 40 && v24 )
    {
      v48 = *(_QWORD *)(v24 + 16);
      if ( (v48 & 0x400) == 0 )
      {
        if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 )
          recalc_spd();
        v48 = *(_QWORD *)(v24 + 16);
      }
      if ( (v48 & 0x22) == 0 && sub_68F20() )
      {
        *(_QWORD *)(v24 + 16) |= 2uLL;
        update_func();
        reanalyze_callers();
      }
    }
    goto LABEL_51;
  }
  if ( !v23 || (*(_BYTE *)(v23 + 16) & 0x10) == 0 )
  {
    if ( !(unsigned __int8)sub_6B740(a1, v3, (__m128i *)0xFFFFFFFFFFFFFFFFLL, 0, 0, 0, -1) )
      goto LABEL_49;
LABEL_118:
    get_auto_state();
    add_cref();
    if ( !v24 )
      goto LABEL_51;
    goto LABEL_119;
  }
  if ( !(unsigned __int8)sub_6B740(a1, v3, (__m128i *)0xFFFFFFFFFFFFFFFFLL, 0, 0, 0, 5) )
    goto LABEL_49;
  get_auto_state();
  add_cref();
LABEL_119:
  if ( (*(_BYTE *)(v24 + 17) & 4) == 0 && (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 )
  {
    if ( *((_WORD *)v3 + 12) == 134 )
    {
LABEL_310:
      v64 = *((_DWORD *)v3 + 7) & 0x1018;
      if ( v64 != 4096 && v64 != 8 && *((_WORD *)v3 + 23) == 4 && (unsigned __int8)(*((_BYTE *)v3 + 41) - 3) <= 1u )
        goto LABEL_52;
    }
    v36 = get_func();
    v37 = v36;
    if ( v36 )
    {
      *((_QWORD *)&a1 + 1) = v36;
      v38 = sub_741C0(a1, (__int64)v3, 0.0);
      if ( v38 )
        sub_68E80(v37, v3, v38);
      if ( *((_WORD *)v3 + 12) == 7 )
      {
        if ( *((_BYTE *)v3 + 41) != 1 || *((_WORD *)v3 + 23) != 4 )
          goto LABEL_52;
        *(_QWORD *)(v37 + 16) |= 0x800uLL;
        update_func();
      }
    }
  }
LABEL_51:
  if ( *((_BYTE *)v3 + 32) == 33
    && *((_WORD *)v3 + 12) == 143
    && ((unsigned int)getinf() == 11 || get_loader_name() == 3 && v89 == 6644344)
    && (*((_BYTE *)v3 + 28) & 0x10) == 0 )
  {
    if ( sub_75CD0(a1, (__int64)v3) )
    {
      v82 = -1;
      v42 = v85;
      v83 = 0;
      v84 = 0;
      v81 = -1;
      do
      {
        *(_WORD *)v42 = 0;
        v42 += 40;
        *((_WORD *)v42 - 19) = 0;
        *((_WORD *)v42 - 18) = 0;
        *((_DWORD *)v42 - 2) = 0;
        *((_WORD *)v42 - 17) = 0;
        *((_OWORD *)v42 - 2) = 0;
        *((_QWORD *)v42 - 2) = 0;
      }
      while ( v88 != v42 );
      if ( decode_prev_insn() != -1
        && (_WORD)v83 == 143
        && BYTE1(v85[0]) == 5
        && (unsigned __int8)is_loaded()
        && (get_flags_ex() & 0x600) == 0x400 )
      {
        del_items();
        auto_mark_range();
      }
    }
  }
LABEL_52:
  if ( (*(_BYTE *)(a1 + 4452) & 4) != 0
    && *((_WORD *)v3 + 12) == 122
    && *((_BYTE *)v3 + 41) == 1
    && *((_WORD *)v3 + 23) > 0x1Cu
    && ((v39 = *((_BYTE *)v3 + 81), v39 == 2) || (unsigned __int8)(v39 - 4) <= 1u)
    || (unsigned __int16)get_word() == 0xDA8C )
  {
    v82 = -1;
    v40 = v85;
    v83 = 0;
    v84 = 0;
    v81 = -1;
    do
    {
      *(_WORD *)v40 = 0;
      v40 += 40;
      *((_WORD *)v40 - 19) = 0;
      *((_WORD *)v40 - 18) = 0;
      *((_DWORD *)v40 - 2) = 0;
      *((_WORD *)v40 - 17) = 0;
      *((_OWORD *)v40 - 2) = 0;
      *((_QWORD *)v40 - 2) = 0;
    }
    while ( v88 != v40 );
    if ( decode_prev_insn() != -1
      && (get_flags_ex() & 0xF000000) == 0
      && (_WORD)v83 == 122
      && BYTE1(v85[0]) == 1
      && HIWORD(v85[0]) <= 3u
      && v86 == 5
      && get_sreg() != -1 )
    {
      v41 = sel2para();
      sub_6A820(v82, 1, 16 * v41);
    }
  }
  if ( (*(_BYTE *)(a1 + 4452) & 8) != 0 && *((_WORD *)v3 + 12) == 122 )
  {
    if ( ((*((_BYTE *)v3 + 41) - 2) & 0xFD) != 0 )
      return 1;
    if ( sub_68F90((__int64)v3, (__int64)(v3 + 5)) != -1 )
    {
      v82 = -1;
      v45 = v85;
      v83 = 0;
      v84 = 0;
      v81 = -1;
      do
      {
        *(_WORD *)v45 = 0;
        v45 += 40;
        *((_WORD *)v45 - 19) = 0;
        *((_WORD *)v45 - 18) = 0;
        *((_DWORD *)v45 - 2) = 0;
        *((_WORD *)v45 - 17) = 0;
        *((_OWORD *)v45 - 2) = 0;
        *((_QWORD *)v45 - 2) = 0;
      }
      while ( v88 != v45 );
      if ( decode_prev_insn() != -1
        && (_WORD)v83 == 122
        && v86 == 5
        && (get_flags_ex() & 0xF000000) == 0
        && BYTE1(v85[0]) == *((_BYTE *)v3 + 41)
        && *((_QWORD *)v3 + 7) - v85[2] == 2 )
      {
        v46 = sel2para();
        sub_6A820(v82, 1, 16 * v46);
      }
    }
  }
  if ( (*((_BYTE *)v3 + 28) & 0x18) == 0
    && *((_WORD *)v3 + 12) == 143
    && (*((_QWORD *)v3 + 5) & 0xFFFF00000000FF00LL) == 0x7000000000100LL )
  {
    v82 = -1;
    v83 = 0;
    v43 = v85;
    v84 = 0;
    v81 = -1;
    do
    {
      *(_WORD *)v43 = 0;
      v43 += 40;
      *((_WORD *)v43 - 19) = 0;
      *((_WORD *)v43 - 18) = 0;
      *((_DWORD *)v43 - 2) = 0;
      *((_WORD *)v43 - 17) = 0;
      *((_OWORD *)v43 - 2) = 0;
      *((_QWORD *)v43 - 2) = 0;
    }
    while ( v43 != v88 );
    if ( decode_prev_insn() != -1
      && (_WORD)v83 == 143
      && sub_68F90((__int64)&v81, (__int64)v85) != -1
      && decode_prev_insn() != -1
      && (_WORD)v83 == 122
      && (v85[0] & 0xFFFF00000000FF00LL) == 0x7000000000100LL
      && v86 == 5 )
    {
      v44 = sel2para();
      sub_6A820(v82, 1, 16 * v44);
    }
  }
  return 1;
}
