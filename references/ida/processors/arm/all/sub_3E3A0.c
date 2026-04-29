unsigned __int64 __fastcall sub_3E3A0(__int64 *a1)
{
  char *v1; // r13
  __int16 v2; // si
  __int64 v4; // rsi
  char *v5; // r12
  char v6; // al
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v10; // r10
  int v11; // r9d
  char *v12; // rbx
  char v13; // dl
  char v14; // r11
  char *v15; // rcx
  char *v16; // rax
  char *v17; // rcx
  int v18; // edi
  char v19; // bl
  __int64 v20; // rax
  char *v21; // rax
  char v22; // dl
  int v23; // r15d
  int v24; // eax
  int v25; // r15d
  char *v26; // rax
  __int16 v27; // ax
  __int16 v28; // cx
  char *v29; // rdx
  char v30; // cl
  int v31; // eax
  int v32; // eax
  char *v33; // rax
  char *v34; // rcx
  __int16 v35; // r8
  bool v36; // dl
  int v37; // edi
  char *v38; // rdi
  char v39; // r8
  char *v40; // rdi
  char v41; // al
  char *v42; // rax
  char v43; // di
  char v44; // al
  int v45; // eax
  int v46; // eax
  unsigned __int64 v47; // rax
  char *v48; // rax
  char v49; // si
  char v50; // dl
  char *v51; // r15
  char v52; // r8
  char *v53; // rax
  char v54; // r8
  char v55; // cl
  char v56; // r9
  char *v57; // rdi
  const char *v58; // rax
  char v59; // dl
  __int64 v60; // rdx
  const void *v61; // r14
  size_t v62; // rax
  __int64 v63; // rdi
  const char *v64; // rax
  char *v65; // rdi
  char v66; // r8
  __int64 v67; // r8
  unsigned __int64 v68; // rdx
  char v69; // dl
  char *v70; // rax
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // r15
  unsigned __int64 v74; // rdx
  __int64 v75; // r11
  char v76; // dl
  __int64 v77; // r15
  __int64 v78; // r10
  __int64 v79; // rdx
  char v80; // r9
  __int64 v81; // r15
  unsigned __int64 v82; // rdx
  __int64 v83; // r8
  char v84; // dl
  __int64 v85; // r13
  unsigned __int64 v86; // r15
  __int64 v87; // r8
  __int64 v88; // r15
  unsigned __int64 v89; // rdx
  __int64 v90; // r8
  char v91; // dl
  size_t v92; // r15
  __int64 v93; // r15
  unsigned __int64 v94; // rdx
  __int64 v95; // r9
  __int64 v96; // r15
  __int64 v97; // r9
  unsigned __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r15
  __int64 v101; // rdx
  _BYTE *v102; // rax
  char *v103; // rax
  _BYTE *v104; // rax
  char *v105; // rax
  char *v106; // rax
  char *v107; // rax
  char *v108; // [rsp+8h] [rbp-D0h]
  char v109; // [rsp+8h] [rbp-D0h]
  char v110; // [rsp+10h] [rbp-C8h]
  __int64 v111; // [rsp+10h] [rbp-C8h]
  __int64 v112; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v113; // [rsp+10h] [rbp-C8h]
  __int64 v114; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v115; // [rsp+10h] [rbp-C8h]
  __int64 v116; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v117; // [rsp+10h] [rbp-C8h]
  char v118; // [rsp+18h] [rbp-C0h]
  __int64 v119; // [rsp+18h] [rbp-C0h]
  __int64 v120; // [rsp+18h] [rbp-C0h]
  __int64 v121; // [rsp+18h] [rbp-C0h]
  char v122; // [rsp+18h] [rbp-C0h]
  __int64 v123; // [rsp+18h] [rbp-C0h]
  char v124; // [rsp+20h] [rbp-B8h]
  char v125; // [rsp+2Fh] [rbp-A9h]
  char *v126; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v127; // [rsp+38h] [rbp-A0h]
  __int64 v128; // [rsp+50h] [rbp-88h] BYREF
  __int128 v129; // [rsp+58h] [rbp-80h]
  char v130; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v131[30]; // [rsp+71h] [rbp-67h] BYREF
  char v132; // [rsp+8Fh] [rbp-49h] BYREF
  char v133; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int64 v134; // [rsp+98h] [rbp-40h]

  v2 = *((_WORD *)a1 + 124);
  v134 = __readfsqword(0x28u);
  if ( v2 == 278 )
  {
    v18 = *((char *)a1 + 257);
    v19 = *((_BYTE *)a1 + 256);
    if ( (*((_BYTE *)a1 + 257) & 1) != 0 )
    {
      LODWORD(v1) = 4;
      LOBYTE(v108) = v19 & 1;
    }
    else if ( (v18 & 2) != 0 )
    {
      LODWORD(v1) = 3;
      LOBYTE(v108) = v19 & 1;
    }
    else
    {
      if ( (v18 & 4) == 0 )
      {
        v130 = 32;
        v5 = v131;
LABEL_25:
        v7 = a1[77];
        v20 = a1[32] & 0xF;
        if ( (*(_BYTE *)(*(_QWORD *)(v7 + 24) + 4LL) & 1) != 0 )
          v21 = (&off_A0B20)[v20];
        else
          v21 = (char *)*(&off_A0BA0 + v20);
        for ( ; v5 != &v132; ++v5 )
        {
          v22 = *v21++;
          *v5 = v22;
          if ( !v22 )
            goto LABEL_31;
        }
        v132 = 0;
        goto LABEL_80;
      }
      LODWORD(v1) = 2;
      LOBYTE(v108) = v19 & 1;
    }
    v12 = &v130;
    v25 = 1;
    while ( 1 )
    {
      LOWORD(v4) = 69;
      if ( sub_1DCF0(v18, v25) == (_BYTE)v108 )
        LOWORD(v4) = 84;
      if ( v12 >= &v133 )
        goto LABEL_368;
      v26 = v12 + 1;
      *v12 = v4;
      if ( v12 + 1 >= &v133 )
      {
        v132 = 0;
        v26 = &v132;
      }
      if ( ++v25 == (_DWORD)v1 )
        break;
      v18 = *((char *)a1 + 257);
      v12 = v26;
    }
    if ( v26 >= &v133 )
    {
      if ( !under_debugger )
        goto LABEL_184;
      goto LABEL_430;
    }
    v5 = v26 + 1;
    *v26 = 32;
    if ( v26 + 1 >= &v133 )
    {
      v132 = 0;
      v5 = &v132;
    }
    goto LABEL_25;
  }
  LOWORD(v4) = v2 - 1027;
  if ( (v4 & 0xFFFD) == 0 )
  {
    LODWORD(v5) = (*((_DWORD *)a1 + 63) >> 19) & 0xF;
    if ( (*((_DWORD *)a1 + 63) & 0x80000) != 0 )
    {
      LODWORD(v1) = 4;
      goto LABEL_35;
    }
    if ( ((*((_DWORD *)a1 + 63) >> 19) & 2) != 0 )
      goto LABEL_34;
    if ( ((*((_DWORD *)a1 + 63) >> 19) & 4) != 0 )
    {
      LODWORD(v1) = 2;
      goto LABEL_35;
    }
    v6 = *((_BYTE *)a1 + 257);
    if ( v6 < 0 )
    {
      v12 = &v130;
      goto LABEL_71;
    }
    v130 = 32;
    v5 = v131;
LABEL_8:
    v7 = a1[77];
    goto LABEL_9;
  }
  if ( (*((_BYTE *)a1 + 258) & 4) != 0 )
  {
    v10 = a1[77];
    v11 = *((_DWORD *)a1 + 63);
    LOBYTE(v12) = 1;
    v13 = *((_BYTE *)a1 + 256);
    goto LABEL_12;
  }
  v27 = getinf(3);
  v11 = *((_DWORD *)a1 + 63);
  v13 = *((_BYTE *)a1 + 256);
  v10 = a1[77];
  v14 = v13 & 0xF;
  if ( (v27 & 0x1006) == 0x1002 )
  {
    LOBYTE(v12) = 1;
    goto LABEL_12;
  }
  LOBYTE(v12) = 0;
  v28 = *(_WORD *)(*(_QWORD *)(v10 + 24) + 4LL);
  if ( (v28 & 2) == 0 )
  {
LABEL_12:
    v14 = v13 & 0xF;
    LOBYTE(v1) = (v13 & 0xF) != 14;
    if ( (v11 & 0xC01) != 0 )
    {
      v130 = 83;
      v15 = v131;
      LOBYTE(v108) = 0;
      goto LABEL_14;
    }
    LOBYTE(v108) = 0;
    if ( (~(_WORD)v11 & 0x1002) == 0 )
    {
      v15 = &v130;
LABEL_161:
      if ( !(_BYTE)v12 )
        goto LABEL_323;
      LOWORD(v4) = 88;
      goto LABEL_163;
    }
    v16 = &v130;
LABEL_87:
    if ( (v11 & 0x402) == 0 )
      goto LABEL_246;
    if ( v16 >= &v133 )
    {
      if ( !under_debugger )
        goto LABEL_184;
      goto LABEL_430;
    }
    v34 = v16 + 1;
    *v16 = 66;
    if ( v16 + 1 >= &v133 )
    {
      LOWORD(v4) = *((_WORD *)a1 + 124);
      v17 = &v132;
LABEL_91:
      v132 = 0;
      v16 = &v132;
      if ( (v11 & 0x1800) != 0 )
        goto LABEL_19;
      goto LABEL_92;
    }
LABEL_302:
    v16 = v34;
    if ( (v11 & 0x1800) != 0 )
      goto LABEL_248;
    goto LABEL_273;
  }
  if ( v14 == 14 )
  {
    if ( (v11 & 0xC01) == 0 )
    {
      LOBYTE(v1) = 0;
      if ( (~(_WORD)v11 & 0x1002) != 0 )
        goto LABEL_244;
      LOWORD(v4) = *((_WORD *)a1 + 124);
      goto LABEL_333;
    }
    LOBYTE(v1) = 0;
LABEL_296:
    v130 = 83;
    if ( (~(_WORD)v11 & 0x1002) == 0 )
    {
      LOBYTE(v108) = 1;
      v15 = v131;
      LOBYTE(v12) = 0;
      LOBYTE(v4) = 68;
      goto LABEL_164;
    }
    if ( (~(_WORD)v11 & 0xC00) != 0 )
    {
      LOBYTE(v108) = 1;
      LOBYTE(v12) = 0;
      v16 = v131;
      goto LABEL_87;
    }
    LOBYTE(v108) = 1;
    LOBYTE(v12) = 0;
    v15 = v131;
    goto LABEL_17;
  }
  LOWORD(v4) = *((_WORD *)a1 + 124);
  if ( (unsigned __int16)v4 > 0x75u )
  {
    if ( (unsigned __int16)(v4 - 139) > 2u )
      goto LABEL_62;
    goto LABEL_242;
  }
  if ( (unsigned __int16)v4 > 0x72u )
  {
LABEL_242:
    if ( (v11 & 0xC01) == 0 )
    {
      LOBYTE(v1) = 1;
      if ( (~(_WORD)v11 & 0x1002) != 0 )
      {
LABEL_244:
        if ( (v11 & 0x402) == 0 )
        {
          LOBYTE(v108) = 1;
          LOBYTE(v12) = 0;
          v16 = &v130;
          goto LABEL_246;
        }
        v130 = 66;
        LOBYTE(v12) = 0;
        v34 = v131;
        LOBYTE(v108) = 1;
        goto LABEL_302;
      }
LABEL_333:
      v130 = 68;
      LOBYTE(v12) = 0;
      v16 = v131;
      LOBYTE(v108) = 1;
      goto LABEL_165;
    }
    LOBYTE(v1) = 1;
    goto LABEL_296;
  }
LABEL_62:
  if ( (v28 & 1) != 0 )
    v29 = (&off_A0B20)[v14];
  else
    v29 = (char *)*(&off_A0BA0 + v14);
  v16 = &v130;
  do
  {
    v30 = *v29++;
    *v16 = v30;
    if ( !v30 )
    {
      if ( (v11 & 0xC01) == 0 )
      {
        if ( (~(_WORD)v11 & 0x1002) == 0 )
          goto LABEL_322;
        LOBYTE(v108) = 1;
        LOBYTE(v12) = 0;
        LOBYTE(v1) = 0;
        goto LABEL_87;
      }
      if ( v16 >= &v133 )
      {
        if ( !under_debugger )
          goto LABEL_184;
        goto LABEL_430;
      }
      v15 = v16 + 1;
      *v16 = 83;
      if ( v16 + 1 >= &v133 )
      {
        v132 = 0;
        LOBYTE(v12) = 0;
        LOBYTE(v1) = 0;
        v15 = &v132;
        LOBYTE(v108) = 1;
LABEL_14:
        if ( (~(_WORD)v11 & 0x1002) != 0 )
          goto LABEL_15;
        goto LABEL_161;
      }
      if ( (~(_WORD)v11 & 0x1002) == 0 )
      {
        LOBYTE(v108) = 1;
        LOBYTE(v1) = 0;
        LOBYTE(v12) = 0;
        LOWORD(v4) = 68;
        goto LABEL_163;
      }
      LOBYTE(v108) = 1;
      LOBYTE(v12) = 0;
      LOBYTE(v1) = 0;
LABEL_15:
      if ( (~(_WORD)v11 & 0xC00) != 0 )
      {
        v16 = v15;
        goto LABEL_87;
      }
      if ( v15 >= &v133 )
      {
        if ( !under_debugger )
          goto LABEL_184;
        goto LABEL_430;
      }
LABEL_17:
      v16 = v15 + 1;
      *v15 = 87;
      LOWORD(v4) = *((_WORD *)a1 + 124);
      if ( v15 + 1 < &v133 )
        goto LABEL_165;
      goto LABEL_18;
    }
    ++v16;
    v17 = &v132;
  }
  while ( v16 != &v132 );
  v132 = 0;
  if ( (v11 & 0xC01) != 0 )
  {
    if ( (~(_WORD)v11 & 0x1002) != 0 )
    {
      LOBYTE(v108) = 1;
      LOBYTE(v12) = 0;
      v15 = v16;
      LOBYTE(v1) = 0;
      goto LABEL_15;
    }
LABEL_322:
    LOBYTE(v108) = 1;
    v15 = v16;
    LOBYTE(v1) = 0;
    LOBYTE(v12) = 0;
LABEL_323:
    LOWORD(v4) = 68;
LABEL_163:
    if ( v15 < &v133 )
    {
LABEL_164:
      v16 = v15 + 1;
      *v15 = v4;
      LOWORD(v4) = *((_WORD *)a1 + 124);
      if ( v15 + 1 < &v133 )
        goto LABEL_165;
LABEL_18:
      v17 = &v132;
LABEL_19:
      v132 = 0;
      if ( (unsigned __int16)(v4 - 871) > 1u )
      {
        v16 = &v132;
        goto LABEL_93;
      }
LABEL_175:
      v132 = 0;
      if ( (v11 & 4) == 0 )
        goto LABEL_185;
LABEL_176:
      v132 = 0;
      v16 = &v132;
      if ( (v11 & 0x20000) == 0 )
        goto LABEL_181;
      goto LABEL_177;
    }
    if ( !under_debugger )
      goto LABEL_184;
LABEL_430:
    BUG();
  }
  if ( (~(_WORD)v11 & 0x1002) == 0 )
  {
    LOBYTE(v108) = 1;
    LOBYTE(v1) = 0;
    LOBYTE(v12) = 0;
    goto LABEL_19;
  }
  LOBYTE(v108) = 1;
  LOBYTE(v1) = 0;
  LOBYTE(v12) = 0;
  if ( (v11 & 0x402) != 0 )
    goto LABEL_91;
LABEL_246:
  if ( (v11 & 0x1800) != 0 )
  {
    if ( v16 >= &v133 )
      goto LABEL_419;
LABEL_248:
    *v16 = 72;
    if ( v16 + 1 >= &v133 )
    {
      LOWORD(v4) = *((_WORD *)a1 + 124);
      goto LABEL_18;
    }
    LOWORD(v4) = *((_WORD *)a1 + 124);
    ++v16;
LABEL_165:
    if ( (unsigned __int16)(v4 - 871) <= 1u )
    {
LABEL_166:
      v17 = v16 + 1;
      *v16 = 68;
      if ( v16 + 1 >= &v133 )
      {
        v17 = &v132;
        goto LABEL_175;
      }
      if ( (v11 & 4) == 0 )
        goto LABEL_185;
      ++v16;
      goto LABEL_95;
    }
LABEL_93:
    if ( (v11 & 4) == 0 )
      goto LABEL_186;
    if ( v16 >= &v133 )
    {
      if ( !under_debugger )
        goto LABEL_184;
      goto LABEL_430;
    }
LABEL_95:
    *v16 = 84;
    if ( v16 + 1 < &v133 )
    {
      ++v16;
      if ( (v11 & 0x20000) != 0 )
        goto LABEL_97;
      goto LABEL_181;
    }
    v17 = &v132;
    goto LABEL_176;
  }
LABEL_273:
  LOWORD(v4) = *((_WORD *)a1 + 124);
LABEL_92:
  if ( (unsigned __int16)(v4 - 871) > 1u )
    goto LABEL_93;
  if ( v16 < &v133 )
    goto LABEL_166;
  if ( under_debugger )
    goto LABEL_430;
LABEL_184:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            while ( 2 )
            {
              while ( 2 )
              {
                while ( 2 )
                {
                  interr(518);
LABEL_185:
                  v16 = v17;
LABEL_186:
                  if ( (v11 & 0x20000) == 0 )
                  {
LABEL_181:
                    if ( (v11 & 0x100) == 0 )
                      goto LABEL_191;
                    if ( v16 >= &v133 )
                    {
                      if ( under_debugger )
                        goto LABEL_430;
                      continue;
                    }
LABEL_101:
                    v17 = v16 + 1;
                    *v16 = 76;
                    if ( v16 + 1 < &v133 )
                    {
                      if ( (v11 & 0x2000) != 0 )
                      {
                        ++v16;
                        goto LABEL_104;
                      }
                      goto LABEL_180;
                    }
                    v17 = &v132;
LABEL_178:
                    v132 = 0;
                    if ( (v11 & 0x2000) == 0 )
                    {
LABEL_180:
                      v16 = v17;
                      goto LABEL_105;
                    }
LABEL_179:
                    v132 = 0;
                    goto LABEL_180;
                  }
                  break;
                }
                if ( v16 >= &v133 )
                {
                  if ( under_debugger )
                    goto LABEL_430;
                  continue;
                }
                break;
              }
LABEL_97:
              *v16 = 78;
              if ( v16 + 1 >= &v133 || (v17 = v16 + 2, v16[1] = 83, v16 + 2 >= &v133) )
              {
                v17 = &v132;
LABEL_177:
                v132 = 0;
                if ( (v11 & 0x100) == 0 )
                  goto LABEL_190;
                goto LABEL_178;
              }
              if ( (v11 & 0x100) != 0 )
              {
                v16 += 2;
                goto LABEL_101;
              }
LABEL_190:
              v16 = v17;
LABEL_191:
              if ( (v11 & 0x2000) != 0 )
              {
                if ( v16 >= &v133 )
                {
                  if ( under_debugger )
                    goto LABEL_430;
                  continue;
                }
LABEL_104:
                *v16++ = 80;
                if ( v16 >= &v133 )
                {
                  v17 = &v132;
                  goto LABEL_179;
                }
              }
              break;
            }
LABEL_105:
            if ( (unsigned __int16)(v4 - 115) > 2u
              && (unsigned __int16)(v4 - 33) > 1u
              && (_WORD)v4 != 214
              && (_WORD)v4 != 184
              && (_WORD)v4 != 343
              && (_WORD)v4 != 416
              && (unsigned __int16)(v4 - 139) > 2u )
            {
              goto LABEL_121;
            }
            v35 = *((_WORD *)a1 + 135);
            v36 = !((unsigned __int8)v11 >> 7);
            v37 = v36;
            if ( (v11 & 0x10) == 0 )
            {
              v37 = v36 | 2;
              if ( v35 != 13 )
              {
                if ( (_BYTE)v108 || (v11 & 0x80u) == 0 )
                {
LABEL_109:
                  if ( v16 >= &v133 )
                    goto LABEL_423;
                  v38 = (char *)*(&off_A0740 + v37);
                  if ( v16 != &v132 )
                    goto LABEL_113;
                  goto LABEL_201;
                }
                if ( (_WORD)v4 == 141 || (v40 = v16, (_WORD)v4 == 117) )
                {
                  v37 = 2;
                  goto LABEL_109;
                }
                goto LABEL_122;
              }
              if ( (_WORD)v4 != 214 )
                goto LABEL_265;
              if ( !(_BYTE)v108 && (v11 & 0x80u) != 0 )
                goto LABEL_121;
              if ( v16 >= &v133 )
              {
LABEL_423:
                if ( under_debugger )
                  goto LABEL_430;
                interr(520);
LABEL_425:
                if ( under_debugger )
                  goto LABEL_430;
                continue;
              }
              v38 = (char *)*(&off_A0740 + v37);
              if ( v16 == &v132 )
              {
                v132 = 0;
                goto LABEL_203;
              }
LABEL_113:
              while ( 1 )
              {
                v39 = *v38++;
                *v16 = v39;
                if ( !v39 )
                  break;
                if ( ++v16 == &v132 )
                  goto LABEL_201;
              }
LABEL_114:
              if ( (_WORD)v4 == 141 || (_WORD)v4 == 117 )
              {
                if ( v16 >= &v133 )
                {
                  if ( under_debugger )
                    goto LABEL_430;
                  continue;
                }
                v40 = v16 + 1;
                *v16 = 88;
                if ( v16 + 1 >= &v133 )
                  goto LABEL_206;
                goto LABEL_122;
              }
LABEL_116:
              if ( (_BYTE)v108 )
              {
                if ( (_WORD)v4 == 140 || (_WORD)v4 == 116 )
                {
                  if ( v16 >= &v133 )
                    goto LABEL_416;
                  v40 = v16 + 1;
                  *v16 = 83;
                  if ( v16 + 1 >= &v133 )
                    goto LABEL_206;
                  goto LABEL_122;
                }
                if ( (_WORD)v4 == 115 || (_WORD)v4 == 139 )
                {
                  if ( v16 >= &v133 )
                  {
LABEL_416:
                    if ( under_debugger )
                      goto LABEL_430;
                    continue;
                  }
                  v40 = v16 + 1;
                  *v16 = 68;
                  if ( v16 + 1 >= &v133 )
                    goto LABEL_206;
                  goto LABEL_122;
                }
              }
LABEL_121:
              v40 = v16;
              goto LABEL_122;
            }
            break;
          }
          if ( v35 != 13 || (_WORD)v4 == 214 )
            goto LABEL_109;
LABEL_265:
          if ( v16 >= &v133 )
            goto LABEL_423;
          v65 = (char *)*(&off_A0760 + (v37 | (4 * (((_WORD)v4 == 33) | (unsigned __int8)((_WORD)v4 == 184)))));
          if ( v16 != &v132 )
          {
            do
            {
              v66 = *v65++;
              *v16 = v66;
              if ( !v66 )
                goto LABEL_114;
            }
            while ( ++v16 != &v132 );
          }
LABEL_201:
          v132 = 0;
          if ( (_WORD)v4 != 141 && (_WORD)v4 != 117 )
          {
LABEL_203:
            v16 = &v132;
            goto LABEL_116;
          }
LABEL_206:
          v132 = 0;
          v40 = &v132;
LABEL_122:
          if ( (v11 & 0x180000) != 0 )
          {
            v41 = 84;
            if ( (v11 & 0x180000) != 0x180000 )
              v41 = 69;
            if ( v40 >= &v133 )
            {
LABEL_427:
              if ( under_debugger )
                goto LABEL_430;
              continue;
            }
            v5 = v40 + 1;
            *v40 = v41;
            if ( v40 + 1 >= &v133 )
            {
              v132 = 0;
              if ( (v11 & 0x200) == 0 )
                goto LABEL_128;
              goto LABEL_173;
            }
            if ( (v11 & 0x200) != 0 )
            {
              ++v40;
LABEL_172:
              v5 = v40 + 1;
              *v40 = 87;
              if ( v40 + 1 >= &v133 )
              {
LABEL_173:
                v132 = 0;
LABEL_128:
                v5 = &v132;
              }
            }
          }
          else
          {
            if ( (v11 & 0x200) != 0 )
            {
              if ( v40 >= &v133 )
                goto LABEL_427;
              goto LABEL_172;
            }
            v5 = v40;
          }
          break;
        }
        if ( !(_BYTE)v1 )
          goto LABEL_140;
        if ( (_BYTE)v12 )
        {
          if ( v5 >= &v133 )
            goto LABEL_425;
          *v5 = 46;
          if ( v5 + 1 < &v133 )
          {
            ++v5;
          }
          else
          {
            v132 = 0;
            v5 = &v132;
          }
        }
        else if ( v5 >= &v133 )
        {
          goto LABEL_423;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v10 + 24) + 4LL) & 1) != 0 )
          v42 = (&off_A0B20)[v14];
        else
          v42 = (char *)*(&off_A0BA0 + v14);
        if ( v5 != &v132 )
        {
          while ( 1 )
          {
            v43 = *v42++;
            *v5 = v43;
            if ( !v43 )
              break;
            if ( ++v5 == &v132 )
              goto LABEL_234;
          }
LABEL_140:
          if ( (v11 & 0x8000) == 0 )
            goto LABEL_145;
          if ( v5 >= &v133 )
          {
LABEL_368:
            if ( under_debugger )
              goto LABEL_430;
            continue;
          }
          goto LABEL_142;
        }
        break;
      }
LABEL_234:
      v132 = 0;
      v5 = &v132;
      if ( (v11 & 0x8000) == 0 )
      {
LABEL_144:
        v5 = &v132;
        goto LABEL_145;
      }
LABEL_142:
      *v5 = 46;
      if ( v5 + 1 >= &v133 || (v5[1] = 87, v5 + 2 >= &v133) )
      {
        v132 = 0;
        goto LABEL_144;
      }
      v5 += 2;
LABEL_145:
      if ( (v11 & 0x10000) != 0 )
      {
        v50 = *((_BYTE *)a1 + 257);
        v126 = 0;
        v127 = 0;
        switch ( v50 & 7 )
        {
          case 0:
            v1 = "A";
            v51 = "I";
            goto LABEL_209;
          case 1:
            v1 = "B";
            v51 = "I";
            goto LABEL_209;
          case 2:
            v1 = "A";
            v51 = "D";
            goto LABEL_209;
          case 3:
            v1 = "B";
            v51 = "D";
            goto LABEL_209;
          case 4:
            v1 = "A";
            v51 = "G";
LABEL_209:
            v52 = v50 & 0x18;
            if ( (unsigned __int16)v4 <= 0x365u )
            {
              if ( (unsigned __int16)v4 > 0x363u )
              {
                LOWORD(v4) = 0;
                v110 = v50 & 0x60;
                v109 = v50 & 0x18;
                v53 = (char *)qvector_reserve((__int64)&v126, 0, 2, 1);
                v54 = v109;
                v55 = *v51;
                v126 = v53;
                *(_QWORD *)&v127 = 2;
                v56 = v110;
                v53[1] = 0;
                *v126 = v55;
                LOBYTE(v108) = (v109 - 8) & 0xF7;
                if ( (_BYTE)v108 )
                {
                  if ( v54 )
                    goto LABEL_300;
                }
                else
                {
                  v73 = v127;
                  if ( (_QWORD)v127 )
                  {
                    v74 = v127 + 1;
                    v75 = v127;
                    v73 = v127 - 1;
                  }
                  else
                  {
                    v74 = 2;
                    v75 = 1;
                  }
                  v4 = (__int64)v126;
                  if ( *((_QWORD *)&v127 + 1) < v74 )
                  {
                    v125 = v110;
                    v124 = v54;
                    v119 = v75;
                    v113 = v74;
                    v126 = (char *)qvector_reserve((__int64)&v126, (__int64)v126, v74, 1);
                    v56 = v125;
                    v4 = (__int64)v126;
                    v54 = v124;
                    v75 = v119;
                    v74 = v113;
                  }
                  *(_QWORD *)&v127 = v74;
                  v76 = *v1;
                  *(_BYTE *)(v4 + v75) = 0;
                  v126[v73] = v76;
                  if ( v54 == 8 )
                  {
                    v77 = ((_QWORD)v127 == 0) + (_QWORD)v127 - 1LL;
                    v78 = v77 + 2;
                    v79 = v77 + 3;
                    if ( *((_QWORD *)&v127 + 1) < (unsigned __int64)(v77 + 3) )
                    {
                      LOWORD(v4) = (_WORD)v126;
                      v122 = v56;
                      v106 = (char *)qvector_reserve((__int64)&v126, (__int64)v126, v79, 1);
                      v78 = v77 + 2;
                      v56 = v122;
                      v126 = v106;
                      v79 = v77 + 3;
                    }
                    *(_QWORD *)&v127 = v79;
                    v126[v78] = 0;
                    *(_WORD *)&v126[v77] = 14129;
                  }
                }
                switch ( v56 )
                {
                  case 96:
                    v96 = v127;
                    if ( (_QWORD)v127 )
                    {
                      v97 = v127 + 1;
                      v98 = v127 + 2;
                      v96 = v127 - 1;
                    }
                    else
                    {
                      v98 = 3;
                      v97 = 2;
                    }
                    if ( *((_QWORD *)&v127 + 1) < v98 )
                    {
                      LOWORD(v4) = (_WORD)v126;
                      v120 = v97;
                      v115 = v98;
                      v103 = (char *)qvector_reserve((__int64)&v126, (__int64)v126, v98, 1);
                      v97 = v120;
                      v98 = v115;
                      v126 = v103;
                    }
                    *(_QWORD *)&v127 = v98;
                    v126[v97] = 0;
                    *(_WORD *)&v126[v96] = 20563;
                    goto LABEL_217;
                  case 32:
                    v93 = v127;
                    if ( (_QWORD)v127 )
                    {
                      v94 = v127 + 1;
                      v95 = v127;
                      v93 = v127 - 1;
                    }
                    else
                    {
                      v94 = 2;
                      v95 = 1;
                    }
                    if ( *((_QWORD *)&v127 + 1) < v94 )
                    {
                      LOWORD(v4) = (_WORD)v126;
                      v123 = v95;
                      v117 = v94;
                      v107 = (char *)qvector_reserve((__int64)&v126, (__int64)v126, v94, 1);
                      v95 = v123;
                      v94 = v117;
                      v126 = v107;
                    }
                    *(_QWORD *)&v127 = v94;
                    v126[v95] = 0;
                    v126[v93] = 90;
                    goto LABEL_217;
                  case 64:
                    v99 = ((_QWORD)v127 == 0) + (_QWORD)v127 - 1LL;
                    v100 = v99 + 2;
                    v101 = v99 + 3;
                    if ( *((_QWORD *)&v127 + 1) < (unsigned __int64)(v99 + 3) )
                    {
                      LOWORD(v4) = (_WORD)v126;
                      v121 = ((_QWORD)v127 == 0) + (_QWORD)v127 - 1LL;
                      v116 = v99 + 3;
                      v105 = (char *)qvector_reserve((__int64)&v126, (__int64)v126, v101, 1);
                      v99 = v121;
                      v101 = v116;
                      v126 = v105;
                    }
                    *(_QWORD *)&v127 = v101;
                    v126[v100] = 0;
                    *(_WORD *)&v126[v99] = 13873;
                    goto LABEL_217;
                  case 0:
LABEL_217:
                    if ( (_BYTE)v108 )
                    {
                      v88 = v127;
                      if ( (_QWORD)v127 )
                      {
                        v89 = v127 + 1;
                        v90 = v127;
                        v88 = v127 - 1;
                      }
                      else
                      {
                        v89 = 2;
                        v90 = 1;
                      }
                      v4 = (__int64)v126;
                      if ( *((_QWORD *)&v127 + 1) < v89 )
                      {
                        v114 = v90;
                        v108 = (char *)v89;
                        v126 = (char *)qvector_reserve((__int64)&v126, (__int64)v126, v89, 1);
                        v90 = v114;
                        v4 = (__int64)v126;
                        v89 = (unsigned __int64)v108;
                      }
                      *(_QWORD *)&v127 = v89;
                      v91 = *v1;
                      *(_BYTE *)(v4 + v90) = 0;
                      v126[v88] = v91;
                    }
                    goto LABEL_218;
                }
LABEL_300:
                v4 = a1[30];
                sub_22E50((__int64)"%a: bad PAC flags %02X", 0.0, v4);
                v57 = v126;
                goto LABEL_225;
              }
LABEL_345:
              LOBYTE(v108) = v50 & 0x60;
              v126 = (char *)qvector_reserve((__int64)&v126, 0, 2, 1);
              v80 = (char)v108;
              *(_QWORD *)&v127 = 2;
              v126[1] = 0;
              *v126 = 65;
              v81 = v127;
              if ( (_QWORD)v127 )
              {
                v82 = v127 + 1;
                v83 = v127;
                v81 = v127 - 1;
              }
              else
              {
                v82 = 2;
                v83 = 1;
              }
              v4 = (__int64)v126;
              if ( *((_QWORD *)&v127 + 1) < v82 )
              {
                v118 = (char)v108;
                v112 = v83;
                v108 = (char *)v82;
                v126 = (char *)qvector_reserve((__int64)&v126, (__int64)v126, v82, 1);
                v80 = v118;
                v4 = (__int64)v126;
                v83 = v112;
                v82 = (unsigned __int64)v108;
              }
              *(_QWORD *)&v127 = v82;
              v84 = *v1;
              *(_BYTE *)(v4 + v83) = 0;
              v126[v81] = v84;
              if ( v80 == 32 )
              {
                v85 = v127;
                if ( (_QWORD)v127 )
                {
                  v86 = v127 + 1;
                  v87 = v127;
                  v85 = v127 - 1;
                }
                else
                {
                  v86 = 2;
                  v87 = 1;
                }
                v4 = (__int64)v126;
                if ( *((_QWORD *)&v127 + 1) < v86 )
                {
                  v108 = (char *)v87;
                  v126 = (char *)qvector_reserve((__int64)&v126, (__int64)v126, v86, 1);
                  v87 = (__int64)v108;
                  v4 = (__int64)v126;
                }
                *(_QWORD *)&v127 = v86;
                *(_BYTE *)(v4 + v87) = 0;
                v1 = &v126[v85];
                *v1 = 90;
              }
              goto LABEL_218;
            }
            if ( (_WORD)v4 != 870 )
              goto LABEL_345;
            if ( v52 == 16 )
            {
              v126 = (char *)qvector_reserve((__int64)&v126, 0, 3, 1);
              *(_QWORD *)&v127 = 3;
              strcpy(v126, "LR");
              v1 = (char *)v127;
              if ( (_QWORD)v127 )
              {
                v67 = v127 - 1;
                v68 = v127 + 1;
              }
              else
              {
                v67 = 0;
                v68 = 2;
                v1 = (_BYTE *)(&dword_0 + 1);
              }
              v4 = (__int64)v126;
              if ( *((_QWORD *)&v127 + 1) >= v68 )
                goto LABEL_280;
            }
            else
            {
              if ( v52 )
                goto LABEL_300;
              v67 = 0;
              v4 = 0;
              v1 = (_BYTE *)(&dword_0 + 1);
              v68 = 2;
            }
            v111 = v67;
            v108 = (char *)v68;
            v126 = (char *)qvector_reserve((__int64)&v126, v4, v68, 1);
            v67 = v111;
            v4 = (__int64)v126;
            v68 = (unsigned __int64)v108;
LABEL_280:
            *(_QWORD *)&v127 = v68;
            v69 = *v51;
            v1[v4] = 0;
            v126[v67] = v69;
LABEL_218:
            if ( v5 >= &v133 )
            {
              if ( under_debugger )
                goto LABEL_430;
              interr(520);
              goto LABEL_397;
            }
            v57 = v126;
            v58 = v126;
            if ( !(_QWORD)v127 )
              v58 = &s1;
            if ( v5 == &v132 )
            {
LABEL_299:
              v132 = 0;
              v5 = &v132;
            }
            else
            {
              while ( 1 )
              {
                v59 = *v58++;
                *v5 = v59;
                if ( !v59 )
                  break;
                if ( ++v5 == &v132 )
                  goto LABEL_299;
              }
            }
LABEL_225:
            if ( v57 )
            {
              *(_QWORD *)&v127 = 0;
              qfree((__int64)v57);
            }
            break;
          default:
            goto LABEL_300;
        }
      }
      if ( *((_WORD *)a1 + 124) != 959 )
        goto LABEL_147;
      v60 = *((char *)a1 + 257);
      v128 = 0;
      v129 = 0;
      if ( (_DWORD)v60 == 17 )
      {
        v72 = a1[34];
        if ( v72 )
        {
          LOWORD(v4) = 0;
          if ( v72 == 1 )
          {
            v104 = (_BYTE *)qvector_reserve((__int64)&v128, 0, 4, 1);
            v128 = (__int64)v104;
            *(_QWORD *)&v129 = 4;
            *(_WORD *)v104 = 19523;
            v104[2] = 82;
            *(_BYTE *)(v128 + 3) = 0;
          }
          else
          {
            v128 = qvector_reserve((__int64)&v128, 0, 5, 1);
            *(_QWORD *)&v129 = 5;
            strcpy((char *)v128, "OP17");
          }
        }
        else
        {
          v102 = (_BYTE *)qvector_reserve((__int64)&v128, 0, 4, 1);
          LOWORD(v4) = 17747;
          v128 = (__int64)v102;
          *(_QWORD *)&v129 = 4;
          *(_WORD *)v102 = 17747;
          v102[2] = 84;
          *(_BYTE *)(v128 + 3) = 0;
        }
      }
      else if ( (unsigned int)v60 > 0x16 )
      {
        v4 = (__int64)"OP%d";
        sub_1CD20(&v128);
      }
      else
      {
        v61 = *(&off_A0A60 + v60);
        if ( !v61 || (v62 = strlen((const char *)*(&off_A0A60 + v60)), (v1 = (char *)v62) == 0) )
        {
          if ( v5 >= &v133 )
            goto LABEL_408;
          v63 = 0;
          v64 = &s1;
          if ( v5 != &v132 )
            goto LABEL_261;
          v132 = 0;
          goto LABEL_147;
        }
        v92 = v62 + 1;
        LOWORD(v4) = (_WORD)v61;
        v128 = qvector_reserve((__int64)&v128, 0, v62 + 1, 1);
        *(_QWORD *)&v129 = v92;
        memmove((void *)v128, v61, (size_t)v1);
        v1[v128] = 0;
      }
      if ( v5 >= &v133 )
      {
LABEL_408:
        if ( !under_debugger )
          interr(520);
        goto LABEL_430;
      }
      v63 = v128;
      v64 = (const char *)v128;
      if ( !(_QWORD)v129 )
        v64 = &s1;
      if ( v5 == &v132 )
      {
LABEL_311:
        v132 = 0;
        v5 = &v132;
      }
      else
      {
LABEL_261:
        while ( 1 )
        {
          LOWORD(v4) = *(unsigned __int8 *)v64++;
          *v5 = v4;
          if ( !(_BYTE)v4 )
            break;
          if ( ++v5 == &v132 )
            goto LABEL_311;
        }
      }
      if ( v63 )
      {
        *(_QWORD *)&v129 = 0;
        qfree(v63);
      }
LABEL_147:
      if ( (_BYTE)v12 )
        break;
      v44 = *((_BYTE *)a1 + 257);
      if ( v44 >= 0 )
        break;
      v45 = v44 & 0x7F;
      if ( !v45 )
        break;
      v46 = (char)v45 - 1;
      if ( v46 > 22 )
        goto LABEL_151;
      if ( v5 >= &v133 )
        goto LABEL_418;
      v70 = off_A0920[v46];
      if ( v5 == &v132 )
      {
LABEL_291:
        v71 = *((char *)a1 + 296);
        v132 = 0;
        if ( (_BYTE)v71 )
        {
          v5 = &v132;
          v47 = v71 - 1;
          if ( v47 <= 0x16 )
          {
LABEL_154:
            v48 = off_A0920[v47];
            if ( v5 == &v132 )
            {
LABEL_43:
              v132 = 0;
              v5 = &v132;
              goto LABEL_44;
            }
            while ( 1 )
            {
              v49 = *v48++;
              *v5 = v49;
              if ( !v49 )
                break;
              if ( ++v5 == &v132 )
                goto LABEL_43;
            }
          }
          break;
        }
        v7 = a1[77];
LABEL_80:
        v5 = &v132;
        goto LABEL_9;
      }
      while ( 1 )
      {
        LOWORD(v4) = (unsigned __int8)*v70++;
        *v5 = v4;
        if ( !(_BYTE)v4 )
          break;
        if ( ++v5 == &v132 )
          goto LABEL_291;
      }
LABEL_151:
      if ( *((_BYTE *)a1 + 296) )
      {
        v47 = *((char *)a1 + 296) - 1;
        if ( v47 <= 0x16 )
        {
          if ( v5 < &v133 )
            goto LABEL_154;
LABEL_418:
          sub_38570();
LABEL_419:
          if ( under_debugger )
            goto LABEL_430;
          continue;
        }
      }
      break;
    }
LABEL_31:
    if ( v5 < &v133 )
      goto LABEL_8;
    if ( under_debugger )
      goto LABEL_430;
    interr(519);
LABEL_34:
    LODWORD(v1) = 3;
LABEL_35:
    v23 = 1;
    v12 = &v130;
    v108 = &v132;
    do
    {
      LOWORD(v4) = v23;
      v24 = sub_1DD10((int)v5, v23) == 0 ? 69 : 84;
      if ( v12 >= &v133 )
      {
        if ( under_debugger )
          goto LABEL_430;
        goto LABEL_184;
      }
      *v12++ = v24;
      if ( v12 >= &v133 )
      {
        v132 = 0;
        v12 = &v132;
      }
      ++v23;
    }
    while ( v23 != (_DWORD)v1 );
    v6 = *((_BYTE *)a1 + 257);
    if ( v6 >= 0 )
      goto LABEL_41;
LABEL_71:
    v31 = v6 & 0x7F;
    if ( !v31 )
      goto LABEL_41;
    v32 = (char)v31 - 1;
    if ( v32 > 22 )
      goto LABEL_41;
    if ( v12 >= &v133 )
      goto LABEL_418;
    v33 = off_A0920[v32];
    if ( v12 == &v132 )
      goto LABEL_43;
    while ( 1 )
    {
      LOWORD(v4) = (unsigned __int8)*v33++;
      *v12 = v4;
      if ( !(_BYTE)v4 )
        break;
      if ( ++v12 == &v132 )
        goto LABEL_43;
    }
LABEL_41:
    if ( v12 >= &v133 )
    {
LABEL_397:
      if ( under_debugger )
        goto LABEL_430;
      continue;
    }
    break;
  }
  v5 = v12 + 1;
  *v12 = 32;
  if ( v12 + 1 >= &v133 )
    goto LABEL_43;
LABEL_44:
  v7 = a1[77];
LABEL_9:
  v8 = *a1;
  *v5 = 0;
  (*(void (__fastcall **)(__int64 *, _QWORD, char *))(v8 + 280))(a1, *(unsigned int *)(v7 + 512), &v130);
  return v134 - __readfsqword(0x28u);
}
