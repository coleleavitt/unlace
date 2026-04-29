__int64 __fastcall sub_10B40(
        _QWORD *a1,
        unsigned int a2,
        double a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  unsigned int v10; // ebp
  __int64 v12; // r14
  __int64 v15; // rax
  int v16; // r15d
  const char *v17; // rax
  char *v18; // r8
  char *v19; // rbp
  char v20; // dl
  char *v21; // rax
  char v22; // dl
  int v23; // eax
  const char *v24; // rax
  char v25; // dl
  const char *v26; // rax
  char v27; // dl
  const char *v28; // rax
  char v29; // dl
  const char *v30; // rax
  char v31; // dl
  const char *v32; // rax
  char v33; // dl
  const char *v34; // rax
  char v35; // dl
  unsigned int v36; // eax
  _BYTE *v37; // rsi
  int v38; // eax
  const char *v39; // rax
  char v40; // dl
  const char *v41; // rax
  char v42; // dl
  char *v43; // rax
  char v44; // dl
  size_t v45; // rax
  __int64 v46; // rbp
  char *v47; // r8
  size_t v48; // r13
  size_t v49; // r15
  __int64 v50; // rsi
  size_t v51; // rdx
  __int64 v52; // rbp
  __int64 v53; // r13
  __int64 v54; // r15
  __int64 v55; // rsi
  char *v56; // r15
  size_t v57; // rbp
  char *v58; // rax
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r9
  char *v61; // rax
  size_t v62; // r13
  char *v63; // r15
  __int64 v64; // r13
  size_t v65; // r15
  __int64 v66; // rsi
  __int64 v67; // rbp
  __int64 v68; // r13
  unsigned __int64 v69; // r15
  __int64 v70; // rsi
  __int64 v71; // rax
  unsigned int v72; // edx
  void *v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  size_t v76; // r8
  __int64 v77; // r9
  unsigned __int64 v78; // r13
  void *v79; // rbp
  __int64 v80; // r15
  size_t v81; // r9
  __int64 v82; // rsi
  unsigned __int64 v83; // r13
  __int64 v84; // r15
  size_t v85; // r9
  __int64 v86; // rsi
  __int64 v87; // rax
  void *v88; // rsi
  double v89; // xmm0_8
  __int64 v90; // rsi
  double v91; // xmm4_8
  double v92; // xmm5_8
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  int v97; // eax
  __int64 v98; // rbp
  __int64 v99; // r13
  unsigned __int64 v100; // r15
  __int64 v101; // rsi
  int v102; // ebp
  __int64 v103; // rax
  __int64 v104; // r8
  __int64 v105; // rdx
  __int64 v106; // rsi
  __int64 v107; // r13
  _QWORD *v108; // rsi
  __int64 v109; // rcx
  __int64 v110; // r8
  size_t v111; // r9
  unsigned __int64 v112; // rdx
  _QWORD *v113; // r13
  size_t v114; // r8
  size_t v115; // r10
  __int64 v116; // rsi
  int v117; // r15d
  char *v118; // rax
  char v119; // dl
  unsigned int v120; // eax
  const char *v121; // rax
  char v122; // dl
  const char *v123; // rax
  char v124; // dl
  const char *v125; // r8
  const char *v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  size_t v131; // rbp
  void *v132; // rdi
  char *v133; // rsi
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  unsigned __int64 v138; // rbp
  size_t v139; // r15
  __int64 v140; // r13
  size_t v141; // r8
  __int64 v142; // rsi
  const char *v143; // rax
  char v144; // dl
  const char *v145; // rax
  char v146; // dl
  const char *v147; // rax
  char v148; // dl
  __int64 v149; // [rsp+8h] [rbp-510h]
  char *srcb; // [rsp+18h] [rbp-500h]
  char *src; // [rsp+18h] [rbp-500h]
  char *srca; // [rsp+18h] [rbp-500h]
  unsigned __int64 v153; // [rsp+20h] [rbp-4F8h]
  __int64 v154; // [rsp+20h] [rbp-4F8h]
  unsigned __int64 v155; // [rsp+20h] [rbp-4F8h]
  unsigned __int64 v156; // [rsp+20h] [rbp-4F8h]
  size_t v157; // [rsp+20h] [rbp-4F8h]
  size_t v158; // [rsp+20h] [rbp-4F8h]
  unsigned __int64 v159; // [rsp+20h] [rbp-4F8h]
  size_t v160; // [rsp+20h] [rbp-4F8h]
  __int64 v161; // [rsp+28h] [rbp-4F0h]
  size_t v162; // [rsp+28h] [rbp-4F0h]
  const char *v163; // [rsp+28h] [rbp-4F0h]
  size_t v164; // [rsp+28h] [rbp-4F0h]
  size_t v165; // [rsp+28h] [rbp-4F0h]
  size_t n; // [rsp+30h] [rbp-4E8h]
  size_t na; // [rsp+30h] [rbp-4E8h]
  size_t v168; // [rsp+38h] [rbp-4E0h]
  unsigned int v169; // [rsp+44h] [rbp-4D4h] BYREF
  int v170; // [rsp+48h] [rbp-4D0h] BYREF
  unsigned int v171; // [rsp+4Ch] [rbp-4CCh]
  __int64 v172; // [rsp+50h] [rbp-4C8h] BYREF
  __int128 v173; // [rsp+58h] [rbp-4C0h]
  char *v174; // [rsp+70h] [rbp-4A8h] BYREF
  unsigned __int64 v175; // [rsp+78h] [rbp-4A0h]
  void *v176; // [rsp+90h] [rbp-488h] BYREF
  __int128 v177; // [rsp+98h] [rbp-480h]
  void *v178; // [rsp+B0h] [rbp-468h] BYREF
  __int128 v179; // [rsp+B8h] [rbp-460h]
  char s[1023]; // [rsp+D0h] [rbp-448h] BYREF
  char v181; // [rsp+4CFh] [rbp-49h] BYREF
  _BYTE v182[8]; // [rsp+4D0h] [rbp-48h] BYREF
  unsigned __int64 v183; // [rsp+4D8h] [rbp-40h]

  v10 = 0;
  v12 = a1[77];
  v183 = __readfsqword(0x28u);
  v149 = a2;
  if ( netnode_supval(*(_QWORD *)(v12 + 144), a2, &v170, 8, 97) <= 0 )
    return v10;
  v172 = 0;
  v173 = 0;
  v15 = qvector_reserve(&v172, 0, 7, 1);
  v172 = v15;
  *(_QWORD *)&v173 = 7;
  *(_DWORD *)v15 = 1634493230;
  v16 = v170;
  *(_WORD *)(v15 + 4) = 29555;
  s[0] = 0;
  *(_BYTE *)(v172 + 6) = 0;
  if ( (v16 & 0x20) == 0 )
  {
    switch ( v16 & 7 )
    {
      case 0:
        v18 = s;
        v21 = " private";
        v19 = s;
        goto LABEL_12;
      case 1:
        v18 = s;
        v19 = s;
        goto LABEL_139;
      case 2:
        v18 = s;
        v19 = s;
        goto LABEL_137;
      case 3:
        v18 = s;
        v19 = s;
        goto LABEL_135;
      case 4:
        v18 = s;
        v19 = s;
        goto LABEL_133;
      case 5:
        v18 = s;
        v19 = s;
        goto LABEL_131;
      case 6:
        v18 = s;
        v19 = s;
        goto LABEL_129;
      case 7:
        v18 = s;
        v19 = s;
        goto LABEL_10;
    }
  }
  v17 = " interface";
  v18 = s;
  v19 = s;
  while ( 1 )
  {
    v20 = *v17++;
    *v19 = v20;
    if ( !v20 )
      break;
    ++v19;
    if ( v17 == (char *)&jpt_C6AC[8] + 3 )
    {
      v181 = 0;
      switch ( v16 & 7 )
      {
        case 0:
          goto LABEL_282;
        case 1:
          v19 = &v181;
LABEL_139:
          v21 = " public";
          goto LABEL_11;
        case 2:
          v19 = &v181;
LABEL_137:
          v21 = " nested public";
          goto LABEL_11;
        case 3:
          v19 = &v181;
LABEL_135:
          v21 = " nested private";
          goto LABEL_11;
        case 4:
          v19 = &v181;
LABEL_133:
          v21 = " nested family";
          goto LABEL_11;
        case 5:
          v19 = &v181;
LABEL_131:
          v21 = " nested assembly";
          goto LABEL_11;
        case 6:
          v19 = &v181;
LABEL_129:
          v21 = " nested famandassem";
          goto LABEL_11;
        case 7:
          v19 = &v181;
LABEL_10:
          v21 = " nested famorassem";
          goto LABEL_11;
      }
    }
  }
  switch ( v16 & 7 )
  {
    case 0:
      v21 = " private";
      break;
    case 1:
      goto LABEL_139;
    case 2:
      goto LABEL_137;
    case 3:
      goto LABEL_135;
    case 4:
      goto LABEL_133;
    case 5:
      goto LABEL_131;
    case 6:
      goto LABEL_129;
    case 7:
      goto LABEL_10;
  }
LABEL_11:
  if ( v19 >= v182 )
  {
    if ( !under_debugger )
      interr(520);
    goto LABEL_309;
  }
  while ( 1 )
  {
LABEL_12:
    if ( v19 != &v181 )
    {
      while ( 1 )
      {
        v22 = *v21++;
        *v19 = v22;
        if ( !v22 )
          break;
        if ( ++v19 == &v181 )
          goto LABEL_143;
      }
      v23 = v16 & 0x18;
      if ( v23 == 8 )
      {
        if ( v19 >= v182 )
          goto LABEL_291;
        if ( v19 == &v181 )
          goto LABEL_173;
        v123 = " sequential";
        while ( 1 )
        {
          v124 = *v123++;
          *v19 = v124;
          if ( !v124 )
            break;
          if ( ++v19 == &v181 )
            goto LABEL_173;
        }
      }
      else
      {
        if ( v23 != 16 )
        {
          if ( (v16 & 0x18) != 0 )
            goto LABEL_24;
          if ( v19 >= v182 )
            goto LABEL_297;
          if ( v19 != &v181 )
          {
            v24 = " auto";
            while ( 1 )
            {
              v25 = *v24++;
              *v19 = v25;
              if ( !v25 )
                goto LABEL_24;
              if ( ++v19 == &v181 )
                goto LABEL_173;
            }
          }
          goto LABEL_173;
        }
        if ( v19 >= v182 )
        {
          if ( !under_debugger )
            interr(520);
          goto LABEL_309;
        }
        if ( v19 == &v181 )
          goto LABEL_173;
        v121 = " explicit";
        while ( 1 )
        {
          v122 = *v121++;
          *v19 = v122;
          if ( !v122 )
            break;
          if ( ++v19 == &v181 )
            goto LABEL_173;
        }
      }
LABEL_24:
      if ( (v16 & 0x80u) == 0 )
        goto LABEL_30;
      if ( v19 >= v182 )
      {
        if ( !under_debugger )
          interr(520);
        goto LABEL_309;
      }
      goto LABEL_26;
    }
LABEL_143:
    v181 = 0;
    v97 = v16 & 0x18;
    if ( v97 != 8 && v97 != 16 && (v16 & 0x18) != 0 )
    {
      v19 = &v181;
      if ( (v16 & 0x80u) == 0 )
        goto LABEL_30;
LABEL_26:
      if ( v19 != &v181 )
      {
        v26 = " abstract";
        while ( 1 )
        {
          v27 = *v26++;
          *v19 = v27;
          if ( !v27 )
            break;
          if ( ++v19 == &v181 )
            goto LABEL_185;
        }
LABEL_30:
        if ( (v16 & 0x100) == 0 )
          goto LABEL_36;
        if ( v19 >= v182 )
          goto LABEL_289;
LABEL_32:
        if ( v19 != &v181 )
        {
          v28 = " sealed";
          while ( 1 )
          {
            v29 = *v28++;
            *v19 = v29;
            if ( !v29 )
              break;
            if ( ++v19 == &v181 )
              goto LABEL_188;
          }
LABEL_36:
          if ( (v16 & 0x400) != 0 )
          {
            if ( v19 >= v182 )
              goto LABEL_293;
            goto LABEL_38;
          }
          goto LABEL_42;
        }
        goto LABEL_188;
      }
      goto LABEL_185;
    }
LABEL_173:
    v181 = 0;
    if ( (v16 & 0x80u) == 0 )
    {
      v19 = &v181;
      if ( (v16 & 0x100) == 0 )
        goto LABEL_36;
      goto LABEL_32;
    }
LABEL_185:
    v181 = 0;
    if ( (v16 & 0x100) == 0 )
    {
      v19 = &v181;
      if ( (v16 & 0x400) != 0 )
      {
LABEL_38:
        if ( v19 == &v181 )
          break;
        v30 = " specialname";
        while ( 1 )
        {
          v31 = *v30++;
          *v19 = v31;
          if ( !v31 )
            break;
          if ( ++v19 == &v181 )
            goto LABEL_197;
        }
      }
LABEL_42:
      if ( (v16 & 0x1000) == 0 )
        goto LABEL_48;
      if ( v19 >= v182 )
        goto LABEL_285;
      goto LABEL_44;
    }
LABEL_188:
    v181 = 0;
    if ( (v16 & 0x400) != 0 )
      break;
    v19 = &v181;
    if ( (v16 & 0x1000) == 0 )
      goto LABEL_48;
LABEL_44:
    if ( v19 != &v181 )
    {
      v32 = " import";
      while ( 1 )
      {
        v33 = *v32++;
        *v19 = v33;
        if ( !v33 )
          break;
        if ( ++v19 == &v181 )
          goto LABEL_200;
      }
LABEL_48:
      if ( (v16 & 0x2000) == 0 )
        goto LABEL_54;
      if ( v19 >= v182 )
      {
        if ( !under_debugger )
        {
          interr(520);
LABEL_285:
          if ( !under_debugger )
          {
            interr(520);
LABEL_287:
            if ( !under_debugger )
            {
              interr(520);
LABEL_289:
              if ( !under_debugger )
              {
                interr(520);
LABEL_291:
                if ( !under_debugger )
                {
                  interr(520);
LABEL_293:
                  if ( !under_debugger )
                  {
                    interr(520);
LABEL_295:
                    if ( !under_debugger )
                    {
                      interr(520);
LABEL_297:
                      if ( !under_debugger )
                      {
                        interr(520);
LABEL_299:
                        if ( !under_debugger )
                          interr(520);
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_309:
        BUG();
      }
      goto LABEL_50;
    }
LABEL_200:
    v181 = 0;
    if ( (v16 & 0x2000) != 0 )
    {
LABEL_192:
      v181 = 0;
      v120 = v16 & 0x30000;
      if ( (v16 & 0x30000) == 0x20000 || v120 <= 0x20000 )
        goto LABEL_194;
      v37 = (_BYTE *)(&dword_0 + 1);
      v19 = &v181;
      if ( v120 != 196608 )
      {
        if ( (v16 & 0x100000) == 0 )
          goto LABEL_66;
        goto LABEL_62;
      }
      goto LABEL_59;
    }
    v36 = v16 & 0x30000;
    if ( (v16 & 0x30000) == 0x10000 )
      goto LABEL_194;
    v19 = &v181;
LABEL_55:
    if ( v36 <= 0x10000 )
    {
      if ( v19 >= v182 )
        goto LABEL_295;
      if ( v19 == &v181 )
        goto LABEL_194;
      v147 = " ansi";
      while ( 1 )
      {
        v148 = *v147++;
        *v19 = v148;
        if ( !v148 )
          goto LABEL_60;
        if ( ++v19 == &v181 )
          goto LABEL_194;
      }
    }
    if ( v36 == 0x20000 )
    {
      if ( v19 >= v182 )
        goto LABEL_287;
      if ( v19 == &v181 )
        goto LABEL_194;
      v143 = " autochar";
      while ( 1 )
      {
        v144 = *v143++;
        *v19 = v144;
        if ( !v144 )
          goto LABEL_60;
        if ( ++v19 == &v181 )
          goto LABEL_194;
      }
    }
    if ( v36 == 196608 )
    {
      v37 = (_BYTE *)(v182 - v19);
LABEL_59:
      srcb = v18;
      v38 = qsnprintf(v19, v37, " custom(%x)", v16 & 0xC00000);
      v18 = srcb;
      v19 += v38;
    }
LABEL_60:
    if ( (v16 & 0x100000) == 0 )
      goto LABEL_66;
    if ( v19 >= v182 )
      goto LABEL_276;
LABEL_62:
    if ( v19 == &v181 )
      goto LABEL_203;
    v39 = " beforefieldinit";
    while ( 1 )
    {
      v40 = *v39++;
      *v19 = v40;
      if ( !v40 )
        break;
      if ( ++v19 == &v181 )
        goto LABEL_203;
    }
LABEL_66:
    if ( (v16 & 0x200000) == 0 )
      goto LABEL_72;
    if ( v19 >= v182 )
    {
      if ( !under_debugger )
      {
        interr(520);
LABEL_276:
        if ( !under_debugger )
          interr(520);
      }
      goto LABEL_309;
    }
LABEL_68:
    if ( v19 == &v181 )
      goto LABEL_176;
    v41 = " forwarder";
    while ( 1 )
    {
      v42 = *v41++;
      *v19 = v42;
      if ( !v42 )
        break;
      if ( ++v19 == &v181 )
        goto LABEL_176;
    }
LABEL_72:
    v16 &= 0x40800u;
    if ( v16 != 2048 )
      goto LABEL_73;
    if ( v19 < v182 )
    {
      if ( v19 != &v181 )
      {
        v118 = "rtspecialname";
        do
        {
          v119 = *v118++;
          *v19 = v119;
          if ( !v119 )
            goto LABEL_79;
        }
        while ( ++v19 != &v181 );
      }
LABEL_178:
      v181 = 0;
      goto LABEL_79;
    }
    if ( under_debugger )
      goto LABEL_309;
    interr(520);
LABEL_282:
    v21 = " private";
    v19 = &v181;
  }
LABEL_197:
  v181 = 0;
  if ( (v16 & 0x1000) != 0 )
    goto LABEL_200;
  v19 = &v181;
  if ( (v16 & 0x2000) == 0 )
    goto LABEL_54;
LABEL_50:
  if ( v19 == &v181 )
    goto LABEL_192;
  v34 = " serializable";
  while ( 1 )
  {
    v35 = *v34++;
    *v19 = v35;
    if ( !v35 )
      break;
    if ( ++v19 == &v181 )
      goto LABEL_192;
  }
LABEL_54:
  v36 = v16 & 0x30000;
  if ( (v16 & 0x30000) != 0x10000 )
    goto LABEL_55;
  if ( v19 >= v182 )
  {
    if ( !under_debugger )
      interr(520);
    goto LABEL_309;
  }
  if ( v19 != &v181 )
  {
    v145 = " unicode";
    do
    {
      v146 = *v145++;
      *v19 = v146;
      if ( !v146 )
        goto LABEL_60;
    }
    while ( ++v19 != &v181 );
  }
LABEL_194:
  v181 = 0;
  if ( (v16 & 0x100000) == 0 )
  {
    v19 = &v181;
    if ( (v16 & 0x200000) == 0 )
      goto LABEL_72;
    goto LABEL_68;
  }
LABEL_203:
  v181 = 0;
  if ( (v16 & 0x200000) != 0 )
  {
LABEL_176:
    v117 = v16 & 0x40800;
    v181 = 0;
    if ( v117 != 2048 && v117 != 0x40000 )
      goto LABEL_79;
    goto LABEL_178;
  }
  v16 &= 0x40800u;
  if ( v16 == 2048 )
    goto LABEL_178;
  v19 = &v181;
LABEL_73:
  if ( v16 == 0x40000 )
  {
    if ( v19 < v182 )
    {
      if ( v19 != &v181 )
      {
        v43 = "hassecurity";
        while ( 1 )
        {
          v44 = *v43++;
          *v19 = v44;
          if ( !v44 )
            goto LABEL_79;
          if ( ++v19 == &v181 )
            goto LABEL_178;
        }
      }
      goto LABEL_178;
    }
    goto LABEL_299;
  }
LABEL_79:
  src = v18;
  v45 = strlen(v18);
  v46 = v173;
  v47 = src;
  v48 = v45;
  v49 = v45;
  if ( (_QWORD)v173 )
  {
    v46 = v173 - 1;
    v49 = v45 + v173 - 1;
  }
  v50 = v172;
  v51 = v49 + 1;
  if ( *((_QWORD *)&v173 + 1) < v49 + 1 )
  {
    v172 = qvector_reserve(&v172, v172, v51, 1);
    v47 = src;
    v50 = v172;
    v51 = v49 + 1;
  }
  *(_QWORD *)&v173 = v51;
  *(_BYTE *)(v50 + v49) = 0;
  memmove((void *)(v46 + v172), v47, v48);
  v52 = v173;
  if ( (_QWORD)v173 )
  {
    v53 = v173 + 1;
    v54 = v173;
    v55 = v172;
    v52 = v173 - 1;
    if ( *((_QWORD *)&v173 + 1) >= (unsigned __int64)(v173 + 1) )
      goto LABEL_85;
LABEL_149:
    v172 = qvector_reserve(&v172, v55, v53, 1);
    v55 = v172;
  }
  else
  {
    v55 = v172;
    v53 = 2;
    v54 = 1;
    if ( *((_QWORD *)&v173 + 1) < 2u )
      goto LABEL_149;
  }
LABEL_85:
  *(_QWORD *)&v173 = v53;
  *(_BYTE *)(v55 + v54) = 0;
  *(_BYTE *)(v172 + v52) = 32;
  sub_7630((__int64)&v174, (__int64)a1, a2, 0.0, a4, a5);
  v56 = v174;
  srca = v174;
  if ( v175 > 1 )
  {
    v153 = v175;
    v57 = v175 - 1;
    v58 = strrchr(v174, 46);
    v59 = v153;
    if ( !v58 || (v60 = v58 - v56, v61 = v56, v60 == -1) || (v62 = v60 + 1, v63 = &v56[v60 + 1], !*v63) )
    {
      v64 = v173;
      v65 = v57;
      if ( (_QWORD)v173 )
      {
        v64 = v173 - 1;
        v65 = v57 + v173 - 1;
        v59 = v57 + v173;
      }
      v66 = v172;
      if ( *((_QWORD *)&v173 + 1) < v59 )
      {
        v159 = v59;
        v172 = qvector_reserve(&v172, v172, v59, 1);
        v59 = v159;
        v66 = v172;
      }
      *(_QWORD *)&v173 = v59;
      *(_BYTE *)(v66 + v65) = 0;
      memcpy((void *)(v64 + v172), srca, v57);
      goto LABEL_94;
    }
    v125 = "'";
    if ( *v61 != 39 )
      v125 = &::s;
    if ( v57 < v60 )
    {
      v178 = nullptr;
      v60 = v57;
      v179 = 0;
      goto LABEL_223;
    }
    v178 = nullptr;
    v179 = 0;
    if ( !v60 )
      goto LABEL_224;
    v59 = v60 + 1;
LABEL_223:
    na = v60;
    v163 = v125;
    v156 = v59;
    v178 = (void *)qvector_reserve(&v178, 0, v59, 1);
    *(_QWORD *)&v179 = v156;
    memmove(v178, srca, na);
    v125 = v163;
    *((_BYTE *)v178 + na) = 0;
    v126 = (const char *)v178;
    if ( !(_QWORD)v179 )
LABEL_224:
      v126 = (const char *)&unk_15584;
    sub_4D60((__int64)a1, 0, (__int64)".namespace %s%s", v126, v125);
    if ( v178 )
    {
      *(_QWORD *)&v179 = 0;
      qfree(v178, 0, v127, v128, v129, v130);
    }
    sub_4D60((__int64)a1, 0, (__int64)"{");
    if ( *srca == 39 )
      *v63 = 39;
    v178 = nullptr;
    if ( v62 > v57 )
      v62 = v57;
    v179 = 0;
    v131 = v57 - v62;
    if ( v131 )
    {
      v132 = nullptr;
      if ( v131 != -1 )
      {
        v178 = (void *)qvector_reserve(&v178, 0, v131 + 1, 1);
        v132 = v178;
      }
      v133 = &srca[v62];
      *(_QWORD *)&v179 = v131 + 1;
      memmove(v132, &srca[v62], v131);
      *((_BYTE *)v178 + v131) = 0;
      v138 = v179;
      if ( (_QWORD)v179 )
      {
        v139 = v179 - 1;
        if ( (_QWORD)v179 != 1 )
        {
          v140 = v173;
          v141 = v179 - 1;
          if ( (_QWORD)v173 )
          {
            v140 = v173 - 1;
            v141 = v139 + v173 - 1;
            v138 = v179 + v173 - 1;
          }
          v142 = v172;
          if ( *((_QWORD *)&v173 + 1) < v138 )
          {
            v160 = v141;
            v172 = qvector_reserve(&v172, v172, v138, 1);
            v141 = v160;
            v142 = v172;
          }
          *(_QWORD *)&v173 = v138;
          *(_BYTE *)(v142 + v141) = 0;
          v133 = (char *)v178;
          memcpy((void *)(v140 + v172), v178, v139);
        }
      }
      if ( v178 )
      {
        *(_QWORD *)&v179 = 0;
        qfree(v178, v133, v134, v135, v136, v137);
      }
    }
  }
LABEL_94:
  if ( (v171 & 0xFFFFFF) != 0 )
  {
    v67 = v173;
    if ( (_QWORD)v173 )
    {
      v68 = v173 + 8;
      v69 = v173 + 9;
      v67 = v173 - 1;
    }
    else
    {
      v69 = 10;
      v68 = 9;
    }
    v70 = v172;
    if ( *((_QWORD *)&v173 + 1) < v69 )
    {
      v172 = qvector_reserve(&v172, v172, v69, 1);
      v70 = v172;
    }
    *(_QWORD *)&v173 = v69;
    *(_BYTE *)(v70 + v68) = 0;
    v71 = v67 + v172;
    *(_QWORD *)v71 = 0x73646E6574786520LL;
    v72 = v171;
    *(_BYTE *)(v71 + 8) = 32;
    sub_7AB0((__int64 *)&v176, (__int64)a1, v72, 0.0, a4, a5);
    v73 = a1;
    sub_7A10((__int64 *)&v178, (__int64)a1, v171, 0.0, a4, a5);
    v78 = v177;
    v79 = v178;
    if ( (_QWORD)v177 )
    {
      v76 = v177 - 1;
      if ( (_QWORD)v177 != 1 )
      {
        v80 = v173;
        v81 = v177 - 1;
        if ( (_QWORD)v173 )
        {
          v80 = v173 - 1;
          v81 = v76 + v173 - 1;
          v78 = v177 + v173 - 1;
        }
        v82 = v172;
        if ( *((_QWORD *)&v173 + 1) < v78 )
        {
          v164 = v81;
          v157 = v177 - 1;
          v172 = qvector_reserve(&v172, v172, v78, 1);
          v81 = v164;
          v82 = v172;
          v76 = v157;
        }
        *(_QWORD *)&v173 = v78;
        *(_BYTE *)(v82 + v81) = 0;
        v73 = v176;
        memcpy((void *)(v80 + v172), v176, v76);
      }
    }
    v83 = v179;
    if ( (_QWORD)v179 )
    {
      v76 = v179 - 1;
      if ( (_QWORD)v179 != 1 )
      {
        v84 = v173;
        v85 = v179 - 1;
        if ( (_QWORD)v173 )
        {
          v84 = v173 - 1;
          v85 = v76 + v173 - 1;
          v83 = v179 + v173 - 1;
        }
        v86 = v172;
        if ( *((_QWORD *)&v173 + 1) < v83 )
        {
          v165 = v85;
          v158 = v179 - 1;
          v172 = qvector_reserve(&v172, v172, v83, 1);
          v85 = v165;
          v86 = v172;
          v76 = v158;
        }
        *(_QWORD *)&v173 = v83;
        *(_BYTE *)(v86 + v85) = 0;
        v73 = v79;
        memcpy((void *)(v84 + v172), v79, v76);
      }
    }
    if ( v79 )
      qfree(v79, v73, v74, v75, v76, v77);
    if ( v176 )
    {
      *(_QWORD *)&v177 = 0;
      qfree(v176, v73, v74, v75, v76, v77);
    }
  }
  v176 = nullptr;
  v177 = 0;
  v87 = netnode_altval(*(_QWORD *)(v12 + 144), v149, 70);
  if ( netnode_qgetblob(v87, &v176, 4, 0, 70) > 0 )
  {
    v98 = v173;
    if ( (_QWORD)v173 )
    {
      v99 = v173 + 11;
      v100 = v173 + 12;
      v98 = v173 - 1;
    }
    else
    {
      v100 = 13;
      v99 = 12;
    }
    v101 = v172;
    if ( *((_QWORD *)&v173 + 1) < v100 )
    {
      v172 = qvector_reserve(&v172, v172, v100, 1);
      v101 = v172;
    }
    *(_QWORD *)&v173 = v100;
    *(_BYTE *)(v101 + v99) = 0;
    qmemcpy((void *)(v98 + v172), " implements ", 12);
    if ( (_QWORD)v177 )
    {
      v102 = 0;
      v103 = 0;
      while ( 1 )
      {
        v90 = *((unsigned int *)v176 + v103);
        if ( netnode_supval(*(_QWORD *)(v12 + 144), v90, &v169, 4, 97) <= 0 )
          goto LABEL_121;
        if ( v102 )
          break;
LABEL_158:
        v108 = a1;
        sub_7A10((__int64 *)&v178, (__int64)a1, v169, 0.0, a4, a5);
        v112 = v179;
        v113 = v178;
        if ( (_QWORD)v179 )
        {
          v111 = v179 - 1;
          if ( (_QWORD)v179 != 1 )
          {
            v114 = v173;
            v115 = v179 - 1;
            if ( (_QWORD)v173 )
            {
              v114 = v173 - 1;
              v115 = v111 + v173 - 1;
              v112 = v179 + v173 - 1;
            }
            v116 = v172;
            if ( *((_QWORD *)&v173 + 1) < v112 )
            {
              v168 = v115;
              n = v114;
              v162 = v179 - 1;
              v155 = v112;
              v172 = qvector_reserve(&v172, v172, v112, 1);
              v115 = v168;
              v116 = v172;
              v114 = n;
              v111 = v162;
              v112 = v155;
            }
            *(_QWORD *)&v173 = v112;
            *(_BYTE *)(v116 + v115) = 0;
            v108 = v113;
            memcpy((void *)(v114 + v172), v113, v111);
          }
        }
        if ( v113 )
          qfree(v113, v108, v112, v109, v110, v111);
        v103 = ++v102;
        if ( v102 >= (unsigned __int64)v177 )
          goto LABEL_118;
      }
      v107 = v173;
      if ( (_QWORD)v173 )
      {
        v104 = v173 + 1;
        v105 = v173 + 2;
        v106 = v172;
        v107 = v173 - 1;
        if ( *((_QWORD *)&v173 + 1) < (unsigned __int64)(v173 + 2) )
          goto LABEL_172;
      }
      else
      {
        v106 = v172;
        v105 = 3;
        v104 = 2;
        if ( *((_QWORD *)&v173 + 1) < 3u )
        {
LABEL_172:
          v161 = v104;
          v154 = v105;
          v172 = qvector_reserve(&v172, v106, v105, 1);
          v104 = v161;
          v106 = v172;
          v105 = v154;
        }
      }
      *(_QWORD *)&v173 = v105;
      *(_BYTE *)(v106 + v104) = 0;
      *(_WORD *)(v172 + v107) = 8236;
      goto LABEL_158;
    }
  }
LABEL_118:
  v88 = &unk_15584;
  if ( (_QWORD)v173 )
    v88 = (void *)v172;
  (*(void (__fastcall **)(_QWORD *, void *, _QWORD))(*a1 + 136LL))(a1, v88, 0);
  v89 = (*(double (__fastcall **)(_QWORD *, char *, _QWORD))(*a1 + 136LL))(a1, "{", 0);
  v90 = a2;
  v10 = sub_108C0((__int64)a1, a2, v89, a4, a5, a6, v91, v92, a9, a10);
  if ( (_BYTE)v10 )
  {
    v90 = v149;
    if ( netnode_supval(*(_QWORD *)(v12 + 144), v149, &v178, 12, 109) == 12 )
    {
      v94 = (unsigned int)v178;
      if ( (_DWORD)v178 != 4 )
      {
        v90 = 0xFFFF;
        sub_4D60((__int64)a1, 0xFFFF, (__int64)".pack %d", (_DWORD)v178);
      }
    }
  }
  else
  {
LABEL_121:
    v10 = 0;
  }
  if ( v176 )
  {
    *(_QWORD *)&v177 = 0;
    qfree(v176, v90, v93, v94, v95, v96);
  }
  if ( srca )
    qfree(srca, v90, v93, v94, v95, v96);
  if ( v172 )
  {
    *(_QWORD *)&v173 = 0;
    qfree(v172, v90, v93, v94, v95, v96);
  }
  return v10;
}
