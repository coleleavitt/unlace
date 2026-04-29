unsigned __int64 __fastcall sub_19710(_DWORD *a1, __int16 a2, const char *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r13
  bool v10; // r12
  int v11; // r13d
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r12
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // r14
  _QWORD *v22; // rbx
  char v24; // dl
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // r13
  __int64 v34; // r13
  __int64 v35; // rax
  int v36; // eax
  _QWORD *v37; // rax
  int v38; // ebx
  unsigned int v39; // r13d
  __int64 v40; // r12
  unsigned int v41; // ebx
  __int64 v42; // rdx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rbx
  __int64 v49; // r13
  const char *v50; // rdx
  __int64 v51; // rdi
  __int64 v52; // rbx
  __int64 v53; // r13
  const char *v54; // rdx
  __int64 v55; // rdi
  __int64 v56; // rbx
  __int64 v57; // r15
  __int64 v58; // r13
  const char *v59; // rdi
  __int64 v60; // r13
  __int64 v61; // rbx
  __int64 v62; // rbx
  __int64 v63; // rbx
  __int64 v64; // rbx
  char v65; // al
  int v66; // ecx
  __int64 v67; // rbx
  __int64 v68; // rbx
  __int64 v69; // rbx
  __int64 v70; // rbx
  __int64 v71; // rbx
  __int64 v72; // rbx
  __int64 v73; // rbx
  __int64 v74; // rbx
  __int64 v75; // rbx
  __int64 v76; // rbx
  __int64 v77; // rbx
  __int64 v78; // rbx
  __int64 v79; // r12
  __int64 v80; // r12
  __int64 v81; // rbx
  __int64 v82; // rbx
  __int64 v83; // rbx
  __int64 v84; // rbx
  __int64 v85; // rbx
  __int64 v86; // rbx
  __int64 v87; // rbx
  __int64 v88; // rbx
  __int64 v89; // rbx
  __int64 v90; // rbx
  __int64 v91; // rbx
  __int64 v92; // rbx
  __int64 v93; // rbx
  __int64 v94; // rbx
  __int64 v95; // rbx
  __int64 v96; // rbx
  __int64 v97; // rbx
  __int64 v98; // rbx
  unsigned int v99; // r12d
  __int64 v100; // rax
  __int64 v101; // r12
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rdi
  __int64 v105; // rcx
  __int64 v106; // rdi
  __int64 v107; // r13
  __int64 v108; // r12
  _QWORD *v109; // rbx
  __int64 v110; // rdi
  __int64 v111; // r12
  __int64 v112; // r15
  _QWORD *v113; // rbx
  __int64 v114; // rax
  __int64 segm_by_name; // rax
  int v116; // r13d
  unsigned __int64 v117; // r12
  int v118; // edi
  __int64 v119; // rdx
  unsigned __int64 *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  char v125; // al
  unsigned int v126; // edi
  __int64 v127; // r12
  __int64 v128; // rdx
  _QWORD *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r9
  __int64 v133; // rdx
  __int64 v134; // rbx
  __int64 v135; // rax
  __int64 v136; // r12
  __int64 v137; // rdx
  unsigned __int64 v138; // r12
  unsigned __int64 v139; // r12
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rbx
  __int64 v145; // rbx
  __int64 v146; // rbx
  __int64 v147; // rbx
  __int64 v148; // rbx
  __int64 v149; // rbx
  __int64 v150; // rbx
  __int64 v151; // rbx
  __int64 v152; // rbx
  __int64 v153; // rdx
  __int64 v154; // rbx
  __int64 v155; // rbx
  __int64 v156; // rbx
  int v157; // eax
  __int64 v158; // r12
  __int64 v159; // rbx
  __int64 v160; // rbx
  __int64 v161; // rbx
  __int64 v162; // rbx
  __int64 v163; // rbx
  __int64 v164; // rbx
  char **v165; // r12
  __int64 v166; // rbx
  int v167; // edx
  __int64 v168; // rdx
  __int64 v169; // rdx
  int v170; // eax
  __int64 v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rdx
  __int64 v174; // rdx
  __int64 v175; // rdx
  const char *v176; // [rsp+0h] [rbp-8D0h]
  __int64 v177; // [rsp+8h] [rbp-8C8h]
  __int64 word; // [rsp+10h] [rbp-8C0h]
  __int64 byte; // [rsp+18h] [rbp-8B8h]
  __int64 v180; // [rsp+20h] [rbp-8B0h]
  char v181; // [rsp+2Fh] [rbp-8A1h]
  char v182; // [rsp+30h] [rbp-8A0h]
  unsigned int v183; // [rsp+38h] [rbp-898h]
  unsigned int v184; // [rsp+40h] [rbp-890h]
  unsigned int v185; // [rsp+40h] [rbp-890h]
  __int64 v186; // [rsp+40h] [rbp-890h]
  int v187; // [rsp+40h] [rbp-890h]
  int v188; // [rsp+40h] [rbp-890h]
  int v189; // [rsp+48h] [rbp-888h]
  unsigned int dword; // [rsp+48h] [rbp-888h]
  __int64 v191; // [rsp+48h] [rbp-888h]
  int v192; // [rsp+48h] [rbp-888h]
  __int64 v193; // [rsp+48h] [rbp-888h]
  __int64 (__fastcall **v194)(); // [rsp+68h] [rbp-868h] BYREF
  __int64 v195; // [rsp+70h] [rbp-860h] BYREF
  __m128i v196; // [rsp+78h] [rbp-858h]
  __int64 v197; // [rsp+90h] [rbp-840h] BYREF
  __int128 v198; // [rsp+98h] [rbp-838h]
  int v199; // [rsp+A8h] [rbp-828h]
  __int64 (__fastcall **v200)(); // [rsp+B0h] [rbp-820h] BYREF
  __int64 v201; // [rsp+B8h] [rbp-818h]
  __int128 v202; // [rsp+C0h] [rbp-810h]
  unsigned __int16 v203; // [rsp+D6h] [rbp-7FAh]
  __int64 v204; // [rsp+E0h] [rbp-7F0h]
  int v205; // [rsp+F8h] [rbp-7D8h] BYREF
  unsigned __int16 v206; // [rsp+FCh] [rbp-7D4h]
  unsigned __int16 v207; // [rsp+FEh] [rbp-7D2h]
  unsigned int v208; // [rsp+104h] [rbp-7CCh]
  int v209; // [rsp+108h] [rbp-7C8h]
  unsigned __int16 v210; // [rsp+10Ch] [rbp-7C4h]
  __int16 v211; // [rsp+110h] [rbp-7C0h]
  unsigned int v212; // [rsp+120h] [rbp-7B0h]
  __int64 v213; // [rsp+128h] [rbp-7A8h]
  unsigned int v214; // [rsp+14Ch] [rbp-784h]
  __int16 v215; // [rsp+154h] [rbp-77Ch]
  int v216; // [rsp+178h] [rbp-758h]
  int v217; // [rsp+198h] [rbp-738h]
  int v218; // [rsp+19Ch] [rbp-734h]
  unsigned int v219; // [rsp+1C0h] [rbp-710h]
  int v220; // [rsp+1C4h] [rbp-70Ch]
  int v221; // [rsp+1D8h] [rbp-6F8h]
  __int64 v222; // [rsp+2F8h] [rbp-5D8h]
  __int64 v223; // [rsp+300h] [rbp-5D0h]
  char v224; // [rsp+308h] [rbp-5C8h]
  __int64 ph; // [rsp+310h] [rbp-5C0h]
  __int64 eah; // [rsp+318h] [rbp-5B8h]
  __int64 v227; // [rsp+320h] [rbp-5B0h]
  __int128 v228; // [rsp+328h] [rbp-5A8h]
  _UNKNOWN **v229; // [rsp+338h] [rbp-598h] BYREF
  char v230; // [rsp+340h] [rbp-590h]
  __int128 v231; // [rsp+348h] [rbp-588h]
  int v232; // [rsp+358h] [rbp-578h]
  __int64 v233; // [rsp+380h] [rbp-550h]
  unsigned int *v234; // [rsp+388h] [rbp-548h]
  __int64 v235; // [rsp+390h] [rbp-540h]
  __int64 v236; // [rsp+398h] [rbp-538h]
  __int128 v237; // [rsp+3A0h] [rbp-530h]
  __m128i si128; // [rsp+3B0h] [rbp-520h]
  __int128 v239; // [rsp+3C0h] [rbp-510h]
  __int64 v240; // [rsp+3D0h] [rbp-500h]
  int v241; // [rsp+3D8h] [rbp-4F8h]
  __int16 v242; // [rsp+3DCh] [rbp-4F4h]
  char v243; // [rsp+3DEh] [rbp-4F2h]
  _UNKNOWN **v244; // [rsp+3E0h] [rbp-4F0h] BYREF
  bool v245; // [rsp+3E8h] [rbp-4E8h]
  __int128 v246; // [rsp+3F0h] [rbp-4E0h]
  int v247; // [rsp+400h] [rbp-4D0h]
  int v248; // [rsp+404h] [rbp-4CCh]
  unsigned int v249; // [rsp+408h] [rbp-4C8h]
  unsigned int v250; // [rsp+410h] [rbp-4C0h]
  unsigned int v251; // [rsp+414h] [rbp-4BCh]
  __int64 v252; // [rsp+428h] [rbp-4A8h]
  int *v253; // [rsp+430h] [rbp-4A0h]
  __int64 v254; // [rsp+438h] [rbp-498h]
  __int64 v255; // [rsp+440h] [rbp-490h]
  __int128 v256; // [rsp+448h] [rbp-488h]
  __m128i v257; // [rsp+458h] [rbp-478h]
  __int128 v258; // [rsp+468h] [rbp-468h]
  __int64 v259; // [rsp+478h] [rbp-458h]
  int v260; // [rsp+480h] [rbp-450h]
  __int16 v261; // [rsp+484h] [rbp-44Ch]
  char v262; // [rsp+486h] [rbp-44Ah]
  __int16 v263; // [rsp+488h] [rbp-448h]
  char v264; // [rsp+48Ah] [rbp-446h]
  char v265[1032]; // [rsp+490h] [rbp-440h] BYREF
  unsigned __int64 v266; // [rsp+898h] [rbp-38h]

  v266 = __readfsqword(0x28u);
  setinf();
  word_349D0 = a2;
  byte_349E1 = (a2 & 0x200) != 0;
  v201 = 0;
  v202 = 0;
  v200 = off_324C8;
  byte_349C0 = strcmp(a3, "Microsoft.Net assembly") == 0;
  ph = get_ph();
  v229 = &off_325A8;
  v233 = ph;
  v242 = 0;
  v244 = &off_325A8;
  v252 = ph;
  v261 = 0;
  eah = get_eah();
  v227 = 0;
  v230 = 0;
  v232 = 0;
  v234 = (unsigned int *)&v205;
  v235 = eah;
  v236 = 0;
  v240 = 0;
  v241 = 0;
  v243 = 0;
  v245 = 0;
  v247 = 0;
  v253 = &v205;
  v254 = eah;
  v255 = 0;
  v259 = 0;
  v260 = 0;
  v262 = 1;
  v228 = 0;
  v231 = 0;
  v237 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2CF90);
  v239 = -1;
  v246 = 0;
  v256 = 0;
  v263 = 0;
  v264 = 0;
  v257 = si128;
  v258 = -1;
  if ( !(unsigned __int8)sub_133F0((__int64)&v200, (__int64)a1, 0, byte_349C0 ^ 1u) )
  {
    if ( !byte_349E1 )
    {
      if ( under_debugger )
        BUG();
      interr();
    }
    sub_DA00(
      (__int64)"Failed to read the PE header, is the input file correct?",
      (__int64)a1,
      v5,
      v6,
      v7,
      v8,
      (char)v176);
  }
  netnode_check();
  netnode_set();
  netnode_supset();
  setinf_flag();
  read_config();
  if ( byte_349E1 )
    word_349D0 = netnode_altval() & 2;
  else
    netnode_supset();
  v9 = get_ph();
  if ( !(unsigned __int8)sub_D160(v9, (__int64)&v205)
    && (int)sub_CFC0(
              0,
              (__int64)"HIDECANCEL\n"
                       "The input file is compiled for an unknown processor (%#x)\n"
                       "Do you want to continue with the current processor?",
              v206) <= 0 )
  {
    sub_DA00(
      0,
      (__int64)"HIDECANCEL\n"
               "The input file is compiled for an unknown processor (%#x)\n"
               "Do you want to continue with the current processor?",
      v29,
      v30,
      v31,
      v32,
      (char)v176);
  }
  v10 = 0;
  if ( v217 )
    v10 = v218 != 0;
  v11 = *(_DWORD *)(v9 + 4);
  if ( byte_349E1 )
  {
    qword_349D8 = netnode_altval();
    if ( qword_349D8 )
      goto LABEL_17;
    v12 = v222;
    qword_349D8 = v222;
    goto LABEL_14;
  }
  v24 = is_debugger_on();
  v12 = v222;
  if ( v24 )
    v12 = getinf();
  qword_349D8 = v12;
  if ( (word_349D0 & 8) == 0 )
  {
LABEL_14:
    if ( v12 || (unsigned __int16)(v215 - 10) <= 3u || v11 )
      goto LABEL_17;
LABEL_124:
    if ( v10 )
    {
LABEL_125:
      qword_349D8 = 0x10000;
      goto LABEL_17;
    }
    goto LABEL_17;
  }
  if ( v11 )
    goto LABEL_17;
  if ( !(unsigned __int8)sub_A730((__int64)&qword_349D8, (__int64)"Please specify the new image base") )
    sub_DA00(0, (__int64)"Please specify the new image base", v25, v26, v27, v28, (char)v176);
  if ( qword_349D8 == v222 )
  {
    if ( qword_349D8 || (unsigned __int16)(v215 - 10) <= 3u )
      goto LABEL_17;
    goto LABEL_124;
  }
  if ( v10 )
  {
    if ( qword_349D8 || (unsigned __int16)(v215 - 10) <= 3u )
      goto LABEL_17;
    goto LABEL_125;
  }
  sub_A800((__int64)"AUTOHIDE REGISTRY\n"
                    "The entered imagebase value is different from the one specified in the PE header.\n"
                    "This PE file does not have any relocation entries, so likely some pointers will be wrong.");
LABEL_17:
  netnode_supset();
  setinf();
  v13.m128i_i64[0] = 0;
  v195 = 0;
  v196 = 0;
  v222 = qword_349D8;
  if ( v208 )
  {
    v33 = v208 + (unsigned __int64)(unsigned int)(18 * v209);
    if ( v33 == qlseek() && qlread() == 4 && (unsigned int)v197 > 4 )
    {
      qlseek();
      sub_12890((__int64)a1, (unsigned int *)&v197, 1u, "String table size", -1, -1);
      v34 = qalloc();
      if ( v34 )
      {
        v35 = qlread();
        if ( v35 == (unsigned int)v197 )
        {
          *(_BYTE *)(v34 + v35) = 0;
          if ( v195 )
          {
            v196.m128i_i64[0] = 0;
            qfree();
          }
          v195 = v34;
          v13 = _mm_unpacklo_epi64((__m128i)(unsigned int)(v197 + 1), (__m128i)(unsigned int)(v197 + 1));
          v196 = v13;
        }
        else
        {
          qfree();
        }
      }
    }
  }
  v14 = sub_FFC0((__int64)&v200, (__int64)a1, 0, (__int64)&v195);
  if ( byte_349E1 )
    goto LABEL_29;
  if ( byte_349C0 )
  {
    sub_12C90((__int64)&v200, (__int64)a1);
LABEL_21:
    if ( v224 )
    {
      getinf_flag();
      plan_to_apply_idasgn();
    }
    if ( ((unsigned __int16)(v206 - 332) <= 2u || v206 == 0x8664) && v205 != 23126 && v215 == 1 && v216 )
    {
      if ( (_QWORD)v237 )
      {
        v56 = v236;
        v57 = 0;
        v58 = v237;
        while ( 1 )
        {
          v59 = s1;
          if ( *(_QWORD *)(v56 + 8) )
            v59 = *(const char **)v56;
          if ( !strcasecmp(v59, "ntdll.dll") )
            break;
          ++v57;
          v56 += 64;
          if ( v58 == v57 )
            goto LABEL_291;
        }
      }
      else
      {
LABEL_291:
        getinf_flag();
        plan_to_apply_idasgn();
      }
    }
    if ( (unsigned __int8)getinf_flag() )
    {
      find_plugin();
      run_plugin();
    }
LABEL_29:
    if ( v195 )
    {
      v196.m128i_i64[0] = 0;
      qfree();
    }
    v15 = v255;
    v200 = off_324C8;
    v244 = &off_325A8;
    if ( v255 )
    {
      v16 = v256;
      if ( (_QWORD)v256 )
      {
        v17 = 0;
        do
        {
          v18 = (_QWORD *)(v15 + (v17 << 6));
          if ( v18[3] )
          {
            v18[4] = 0;
            qfree();
          }
          if ( *v18 )
          {
            v18[1] = 0;
            qfree();
          }
          ++v17;
          v15 = v255;
        }
        while ( v16 != v17 );
      }
      *(_QWORD *)&v256 = 0;
      qfree();
    }
    v19 = v236;
    v229 = &off_325A8;
    if ( v236 )
    {
      v20 = v237;
      if ( (_QWORD)v237 )
      {
        v21 = 0;
        do
        {
          v22 = (_QWORD *)(v19 + (v21 << 6));
          if ( v22[3] )
          {
            v22[4] = 0;
            qfree();
          }
          if ( *v22 )
          {
            v22[1] = 0;
            qfree();
          }
          v19 = v236;
          ++v21;
        }
        while ( v20 != v21 );
      }
      *(_QWORD *)&v237 = 0;
      qfree();
    }
    if ( v227 )
    {
      *(_QWORD *)&v228 = 0;
      qfree();
    }
    v200 = off_324F0;
    if ( v201 )
      goto LABEL_52;
    return v266 - __readfsqword(0x28u);
  }
  sub_10E80((__int64)&v200, a1, v14, *(double *)v13.m128i_i64);
  sub_118E0((__int64)&v200, a1);
  if ( v215 == 9 )
    byte_349E3 = 1;
  sub_19100((__int64)&v200, (__int64)a1);
  if ( v216 )
  {
    sub_6F70((__int64)"Reading imports directory...\n");
    v114 = v234[54];
    if ( (_DWORD)v114 && v234[55] )
    {
      si128.m128i_i64[0] = *(_QWORD *)(v235 + 16) & (qword_349D8 + v114);
      si128.m128i_i64[1] = *(_QWORD *)(v235 + 16) & (v234[55] + si128.m128i_i64[0]);
    }
    else
    {
      segm_by_name = get_segm_by_name();
      if ( segm_by_name
        && v234[32] >= (*(_QWORD *)(v235 + 16) & (unsigned __int64)(*(_QWORD *)segm_by_name - qword_349D8))
        && *(_QWORD *)(segm_by_name + 8) - *(_QWORD *)segm_by_name >= (unsigned __int64)v234[33] )
      {
        si128 = *(__m128i *)segm_by_name;
      }
    }
    sub_E4B0((__int64)&v200, a1, (unsigned int *)&v229);
  }
  v36 = v221;
  if ( !v221 )
    goto LABEL_77;
  if ( !(_QWORD)v202 )
  {
    v194 = off_32498;
    if ( v205 == 23126 )
      v167 = v223 + 40;
    else
      v167 = v210 + (_DWORD)v223 + 24;
    sub_DB90((__int64)&v200, (__int64)a1, v167, v207, (__int64)&v194);
    v36 = v221;
  }
  v116 = 0;
  while ( 1 )
  {
    v117 = (unsigned int)(v36 + v116);
    v118 = v36 + v116;
    if ( !a1 || *a1 != 3 )
    {
      v119 = v202 - 1;
      if ( (__int64)v202 - 1 < 0 )
        break;
      v120 = (unsigned __int64 *)(v201 + 32 * v202 - 32);
      while ( v117 < *v120 || v117 >= v120[1] )
      {
        --v119;
        v120 -= 4;
        if ( v119 == -1 )
          goto LABEL_210;
      }
      if ( v117 + v120[2] - *v120 == -1 )
        break;
    }
LABEL_216:
    if ( qlseek() == -1 )
      goto LABEL_214;
    if ( qlread() != 32 )
      goto LABEL_214;
    v126 = v249;
    if ( !v249 )
      goto LABEL_214;
    v127 = v250;
    v186 = v251;
    v245 = !(v248 & 1);
    if ( (v248 & 1) != 0 )
    {
      v127 = v222 + v250;
    }
    else if ( v211 == 523 )
    {
      v126 = v249 - v213;
    }
    else
    {
      v126 = v249 - HIDWORD(v213);
    }
    if ( a1 && *a1 == 3 )
      goto LABEL_241;
    v128 = v202 - 1;
    if ( (__int64)v202 - 1 >= 0 )
    {
      v129 = (_QWORD *)(v201 + 32 * v202 - 32);
      while ( (unsigned __int64)v126 < *v129 || (unsigned __int64)v126 >= v129[1] )
      {
        --v128;
        v129 -= 4;
        if ( v128 == -1 )
          goto LABEL_228;
      }
      if ( v126 + v129[2] - *v129 != -1 )
      {
LABEL_241:
        qlseek();
        goto LABEL_232;
      }
    }
LABEL_228:
    if ( v126 < v223 + v214 )
      goto LABEL_241;
    if ( !HIBYTE(v263)
      && (int)sub_CFC0(
                1u,
                (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                v126) <= 0 )
    {
      sub_DA00(
        0,
        (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
        v130,
        v131,
        v126,
        v132,
        (char)v176);
    }
    HIBYTE(v263) = 1;
    qlseek();
LABEL_232:
    v265[0] = 0;
    qlgetz();
    if ( !v265[0] )
      goto LABEL_214;
    v198 = 0;
    v197 = 0;
    if ( (unsigned __int8)idb_utf8() )
      qstrncpy();
    if ( v197 )
    {
      *(_QWORD *)&v198 = 0;
      qfree();
    }
    if ( (unsigned int)sub_A8F0((__int64)&v244, v265, v127, v186) )
      goto LABEL_214;
    v116 += 32;
    if ( (unsigned int)sub_E0F0((__int64)&v200, (__int64)a1, v127, v186, (__int64)&v244) )
      goto LABEL_214;
    v36 = v221;
  }
LABEL_210:
  if ( (__int64)v117 < v223 + v214 )
    goto LABEL_216;
  if ( !HIBYTE(v263)
    && (int)sub_CFC0(
              1u,
              (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
              v118) <= 0 )
  {
    sub_DA00(
      0,
      (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
      v121,
      v122,
      v123,
      v124,
      (char)v176);
  }
  HIBYTE(v263) = 1;
  qlseek();
LABEL_214:
  v125 = getinf_flag();
  sub_F1A0((__int64)&v200, (__int64)a1, v125);
LABEL_77:
  sub_111E0((__int64)&v200, a1);
  v37 = (_QWORD *)sub_D0A0();
  if ( v37 )
  {
    v37[4] = qword_349D8;
    (*(void (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(), _DWORD *, bool))(*v37 + 48LL))(
      v37,
      &v200,
      a1,
      (word_349D0 & 0x2008) == 8);
  }
  if ( (unsigned __int8)qgetenv() || (unsigned __int8)is_debugger_on() )
    goto LABEL_80;
  if ( v205 == 23126 )
  {
    v104 = v204;
    v105 = v203 - 40;
    if ( v204 + 40 - v203 )
      v105 = 0;
  }
  else
  {
    v104 = v211 == 523 ? v213 : HIDWORD(v213);
    v105 = 0;
  }
  if ( (unsigned __int8)sub_B580(
                          (__int64)&v205,
                          eah,
                          qword_349D8,
                          *(_QWORD *)(eah + 16) & (qword_349D8 + v105 - v104),
                          2) )
  {
LABEL_80:
    v38 = v223;
    v39 = 0;
    if ( v207 )
      v39 = v210 + (_DWORD)v223 + 24 + 40 * v207;
    v189 = 248;
    if ( v211 == 523 )
      v189 = 264;
    v40 = qword_349D8;
    if ( v205 == 23126 )
      v40 = qword_349D8 - (40 - v203);
    v184 = v214;
    v181 = is_loaded();
    if ( v181 )
    {
      v41 = v38 + v189;
      if ( v41 > v184 )
        v41 = v184;
      if ( v41 < v39 )
        v41 = v39;
      if ( v212 >= v41 )
      {
        v60 = eah;
        if ( v205 == 23126 )
        {
          del_items();
          sub_9640();
          create_data();
          set_cmt();
          set_op_type();
          v158 = *(_QWORD *)(v60 + 16) & (v40 + 2);
          create_data();
          set_cmt();
          set_op_type();
          v159 = *(_QWORD *)(v60 + 16) & (v158 + 2);
          byte = (unsigned __int8)get_byte();
          create_data();
          v176 = "Number of sections";
          set_cmt();
          set_op_type();
          v160 = *(_QWORD *)(v60 + 16) & (v159 + 1);
          create_data();
          set_cmt();
          set_op_type();
          v161 = *(_QWORD *)(v60 + 16) & (v160 + 1);
          create_data();
          set_cmt();
          set_op_type();
          v162 = *(_QWORD *)(v60 + 16) & (v161 + 2);
          create_data();
          if ( (unsigned __int8)is_loaded() && (unsigned int)get_dword() )
          {
            v173 = 4;
            if ( v211 == 523 )
              v173 = 8;
            sub_7230(v162, qword_349D8, v173, 0);
          }
          set_cmt();
          v163 = *(_QWORD *)(v60 + 16) & (v162 + 4);
          create_data();
          if ( (unsigned __int8)is_loaded() && (unsigned int)get_dword() )
          {
            v172 = 4;
            if ( v211 == 523 )
              v172 = 8;
            sub_7230(v163, qword_349D8, v172, 0);
          }
          set_cmt();
          v164 = *(_QWORD *)(v60 + 16) & (v163 + 4);
          create_data();
          set_cmt();
          set_op_type();
          v165 = off_32650;
          v134 = *(_QWORD *)(v60 + 16) & (v164 + 8);
          do
          {
            if ( (unsigned int)get_dword() )
            {
              sub_9640();
              create_data();
              if ( (unsigned __int8)is_loaded() && (unsigned int)get_dword() )
              {
                v174 = 4;
                if ( v211 == 523 )
                  v174 = 8;
                sub_7230(v134, qword_349D8, v174, 0);
              }
              set_cmt();
              v166 = *(_QWORD *)(v60 + 16) & (v134 + 4);
              create_data();
              set_cmt();
              set_op_type();
              v134 = *(_QWORD *)(v60 + 16) & (v166 + 4);
            }
            else
            {
              create_data();
              set_cmt();
              set_op_type();
              v134 = *(_QWORD *)(v60 + 16) & (v134 + 8);
            }
            ++v165;
          }
          while ( v165 != off_32660 );
        }
        else
        {
          del_items();
          sub_9640();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          create_data();
          set_cmt();
          set_op_type();
          dword = 0;
          if ( (unsigned __int8)is_loaded() )
            dword = get_dword();
          create_data();
          if ( (unsigned __int8)is_loaded() && (unsigned int)get_dword() )
          {
            get_default_reftype();
            op_offset();
          }
          set_cmt();
          create_data();
          set_cmt();
          v61 = *(_QWORD *)(v60 + 16) & (v40 + dword);
          sub_9640();
          del_items();
          create_data();
          set_cmt();
          set_op_type();
          v62 = *(_QWORD *)(v60 + 16) & (v61 + 4);
          sub_9640();
          create_data();
          set_cmt();
          set_op_type();
          v63 = *(_QWORD *)(v60 + 16) & (v62 + 2);
          byte = (unsigned __int16)get_word();
          create_data();
          v176 = "Number of sections";
          set_cmt();
          set_op_type();
          v64 = *(_QWORD *)(v60 + 16) & (v63 + 2);
          create_data();
          v65 = is_loaded();
          v66 = 0;
          if ( v65 )
            v66 = get_dword();
          v67 = sub_7130(v60, v64, (__int64)"Time stamp: ", v66);
          create_data();
          set_cmt();
          set_op_type();
          v68 = *(_QWORD *)(v60 + 16) & (v67 + 4);
          create_data();
          set_cmt();
          set_op_type();
          v69 = *(_QWORD *)(v60 + 16) & (v68 + 4);
          word = (unsigned __int16)get_word();
          create_data();
          set_cmt();
          set_op_type();
          v70 = *(_QWORD *)(v60 + 16) & (v69 + 2);
          create_data();
          set_cmt();
          set_op_type();
          v177 = *(_QWORD *)(v60 + 16) & (v70 + 2);
          sub_9640();
          create_data();
          set_cmt();
          set_op_type();
          v71 = *(_QWORD *)(v60 + 16) & (v177 + 2);
          create_data();
          set_cmt();
          set_op_type();
          v72 = *(_QWORD *)(v60 + 16) & (v71 + 1);
          create_data();
          set_cmt();
          set_op_type();
          v73 = *(_QWORD *)(v60 + 16) & (v72 + 1);
          create_data();
          set_cmt();
          set_op_type();
          v74 = *(_QWORD *)(v60 + 16) & (v73 + 4);
          create_data();
          set_cmt();
          set_op_type();
          v75 = *(_QWORD *)(v60 + 16) & (v74 + 4);
          create_data();
          set_cmt();
          set_op_type();
          v76 = *(_QWORD *)(v60 + 16) & (v75 + 4);
          create_data();
          if ( (unsigned __int8)is_loaded() && (unsigned int)get_dword() )
          {
            v169 = 4;
            if ( v211 == 523 )
              v169 = 8;
            sub_7230(v76, qword_349D8, v169, 0);
          }
          set_cmt();
          v77 = *(_QWORD *)(v60 + 16) & (v76 + 4);
          create_data();
          if ( (unsigned __int8)is_loaded() && (unsigned int)get_dword() )
          {
            v168 = 4;
            if ( v211 == 523 )
              v168 = 8;
            sub_7230(v77, qword_349D8, v168, 0);
          }
          set_cmt();
          v78 = *(_QWORD *)(v60 + 16) & (v77 + 4);
          if ( v211 == 523 )
            goto LABEL_143;
          create_data();
          if ( (unsigned __int8)is_loaded() && (unsigned int)get_dword() )
          {
            v175 = 4;
            if ( v211 == 523 )
              v175 = 8;
            sub_7230(v78, qword_349D8, v175, 0);
          }
          set_cmt();
          v78 = *(_QWORD *)(v60 + 16) & (v78 + 4);
          if ( v211 == 523 )
          {
LABEL_143:
            create_data();
            set_cmt();
            set_op_type();
            v79 = *(_QWORD *)(v60 + 16) & (v78 + 8);
          }
          else
          {
            create_data();
            set_cmt();
            set_op_type();
            v79 = *(_QWORD *)(v60 + 16) & (v78 + 4);
          }
          get_default_reftype();
          op_offset();
          create_data();
          set_cmt();
          set_op_type();
          v80 = *(_QWORD *)(v60 + 16) & (v79 + 4);
          create_data();
          set_cmt();
          set_op_type();
          v81 = *(_QWORD *)(v60 + 16) & (v80 + 4);
          create_data();
          set_cmt();
          set_op_type();
          v82 = *(_QWORD *)(v60 + 16) & (v81 + 2);
          create_data();
          set_cmt();
          set_op_type();
          v83 = *(_QWORD *)(v60 + 16) & (v82 + 2);
          create_data();
          set_cmt();
          set_op_type();
          v84 = *(_QWORD *)(v60 + 16) & (v83 + 2);
          create_data();
          set_cmt();
          set_op_type();
          v85 = *(_QWORD *)(v60 + 16) & (v84 + 2);
          create_data();
          set_cmt();
          set_op_type();
          v86 = *(_QWORD *)(v60 + 16) & (v85 + 2);
          create_data();
          set_cmt();
          set_op_type();
          v87 = *(_QWORD *)(v60 + 16) & (v86 + 2);
          create_data();
          set_cmt();
          set_op_type();
          v88 = *(_QWORD *)(v60 + 16) & (v87 + 4);
          create_data();
          set_cmt();
          set_op_type();
          v89 = *(_QWORD *)(v60 + 16) & (v88 + 4);
          create_data();
          set_cmt();
          set_op_type();
          v90 = *(_QWORD *)(v60 + 16) & (v89 + 4);
          create_data();
          set_cmt();
          set_op_type();
          v91 = *(_QWORD *)(v60 + 16) & (v90 + 4);
          create_data();
          set_cmt();
          set_op_type();
          v92 = *(_QWORD *)(v60 + 16) & (v91 + 2);
          create_data();
          set_cmt();
          set_op_type();
          v93 = *(_QWORD *)(v60 + 16) & (v92 + 2);
          if ( v211 == 523 )
          {
            create_data();
            set_cmt();
            set_op_type();
            v94 = *(_QWORD *)(v60 + 16) & (v93 + 8);
          }
          else
          {
            create_data();
            set_cmt();
            set_op_type();
            v94 = *(_QWORD *)(v60 + 16) & (v93 + 4);
          }
          if ( v211 == 523 )
          {
            create_data();
            set_cmt();
            set_op_type();
            v95 = *(_QWORD *)(v60 + 16) & (v94 + 8);
          }
          else
          {
            create_data();
            set_cmt();
            set_op_type();
            v95 = *(_QWORD *)(v60 + 16) & (v94 + 4);
          }
          if ( v211 == 523 )
          {
            create_data();
            set_cmt();
            set_op_type();
            v96 = *(_QWORD *)(v60 + 16) & (v95 + 8);
          }
          else
          {
            create_data();
            set_cmt();
            set_op_type();
            v96 = *(_QWORD *)(v60 + 16) & (v95 + 4);
          }
          if ( v211 == 523 )
          {
            create_data();
            set_cmt();
            set_op_type();
            v97 = *(_QWORD *)(v60 + 16) & (v96 + 8);
          }
          else
          {
            create_data();
            set_cmt();
            set_op_type();
            v97 = *(_QWORD *)(v60 + 16) & (v96 + 4);
          }
          create_data();
          set_cmt();
          set_op_type();
          v98 = *(_QWORD *)(v60 + 16) & (v97 + 4);
          v183 = 0;
          v99 = 0;
          if ( (unsigned __int8)is_loaded() )
          {
            v99 = get_dword();
            v170 = 16;
            if ( v99 <= 0x10 )
              v170 = v99;
            v183 = v170;
          }
          create_data();
          set_cmt();
          set_op_type();
          v100 = *(_QWORD *)(v60 + 16);
          v191 = v100 & (v98 + 4);
          if ( v99 )
          {
            v101 = 0;
            do
            {
              v185 = get_dword();
              if ( v185 )
              {
                sub_9640();
                create_data();
                if ( (unsigned __int8)is_loaded() && (unsigned int)get_dword() )
                {
                  v133 = 4;
                  if ( v211 == 523 )
                    v133 = 8;
                  sub_7230(v191, qword_349D8, v133, 0);
                }
                set_cmt();
                v102 = *(_QWORD *)(v60 + 16) & (v191 + 4);
                create_data();
                set_cmt();
                set_op_type();
                v103 = *(_QWORD *)(v60 + 16);
                v191 = v103 & (v102 + 4);
                if ( v101 == 11 )
                {
                  v154 = v103 & (qword_349D8 + v185);
                  v180 = v154;
                  sub_9640();
                  v182 = v181;
                  do
                  {
                    if ( !(unsigned __int8)is_loaded() )
                      break;
                    v187 = get_dword();
                    if ( !v187 )
                      break;
                    create_data();
                    v155 = sub_7130(v60, v154, (__int64)"Time stamp: ", v187);
                    create_data();
                    set_cmt();
                    set_op_type();
                    v156 = *(_QWORD *)(v60 + 16) & (v155 + 2);
                    v157 = 130;
                    if ( v211 == 523 )
                      v157 = 137;
                    v199 = v157;
                    v197 = -1;
                    v198 = (unsigned __int64)v180;
                    op_offset_ex();
                    v188 = 0;
                    if ( (unsigned __int8)is_loaded() )
                      v188 = get_dword();
                    create_data();
                    set_cmt();
                    set_op_type();
                    v154 = *(_QWORD *)(v60 + 16) & (v156 + 2);
                    v182 &= v188 == 0;
                  }
                  while ( !v182 );
                }
              }
              else
              {
                create_data();
                set_cmt();
                set_op_type();
                v191 = *(_QWORD *)(v60 + 16) & (v191 + 8);
              }
              ++v101;
            }
            while ( (unsigned int)v101 < v183 );
            v100 = *(_QWORD *)(v60 + 16);
          }
          v134 = v100 & (v177 + word);
        }
        v135 = getseg();
        if ( v135 )
        {
          v136 = *(_QWORD *)(v135 + 8);
          v137 = v134;
          if ( v134 == -1 )
            v137 = qlseek();
          if ( v136 == -1 )
          {
            v193 = v137;
            v171 = qlsize();
            v137 = v193;
            v136 = v171;
          }
          v138 = v136 - v137;
          if ( ((v138 | v137) & 0x8000000000000000LL) != 0LL )
          {
            v139 = 0;
          }
          else
          {
            if ( !byte )
            {
              del_items();
              goto LABEL_92;
            }
            if ( v138 >= 40 * byte )
            {
              del_items();
              LODWORD(v139) = byte;
LABEL_262:
              v192 = 0;
              do
              {
                if ( !(unsigned __int8)is_loaded() )
                  break;
                sub_9640();
                create_data();
                set_cmt();
                set_op_type();
                v151 = *(_QWORD *)(v60 + 16) & (v134 + 8);
                create_data();
                set_cmt();
                set_op_type();
                v152 = *(_QWORD *)(v60 + 16) & (v151 + 4);
                create_data();
                if ( (unsigned __int8)is_loaded() && (unsigned int)get_dword() )
                {
                  v153 = 4;
                  if ( v211 == 523 )
                    v153 = 8;
                  sub_7230(v152, qword_349D8, v153, 0);
                }
                set_cmt();
                v144 = *(_QWORD *)(v60 + 16) & (v152 + 4);
                create_data();
                set_cmt();
                set_op_type();
                v145 = *(_QWORD *)(v60 + 16) & (v144 + 4);
                create_data();
                set_cmt();
                set_op_type();
                v146 = *(_QWORD *)(v60 + 16) & (v145 + 4);
                create_data();
                set_cmt();
                set_op_type();
                v147 = *(_QWORD *)(v60 + 16) & (v146 + 4);
                create_data();
                set_cmt();
                set_op_type();
                v148 = *(_QWORD *)(v60 + 16) & (v147 + 4);
                create_data();
                set_cmt();
                set_op_type();
                v149 = *(_QWORD *)(v60 + 16) & (v148 + 2);
                create_data();
                set_cmt();
                set_op_type();
                v150 = *(_QWORD *)(v60 + 16) & (v149 + 2);
                create_data();
                set_cmt();
                set_op_type();
                ++v192;
                v134 = *(_QWORD *)(v60 + 16) & (v150 + 4);
              }
              while ( v192 != (_DWORD)v139 );
              goto LABEL_92;
            }
            v139 = v138 / 0x28;
          }
          if ( (unsigned int)sub_CFC0(
                               1u,
                               (__int64)"AUTOHIDE SESSION\n"
                                        "HIDECANCEL\n"
                                        "%s %llu is incorrect, maximum possible value is %llu%s",
                               "Number of sections",
                               byte,
                               v139,
                               ". Do you want to continue with the new value?") != 1 )
            sub_DA00(
              0,
              (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
              v140,
              v141,
              v142,
              v143,
              (char)"Number of sections");
          del_items();
          if ( v139 )
            goto LABEL_262;
        }
      }
    }
LABEL_92:
    if ( v219 && v220 )
    {
      if ( a1 && *a1 == 3 )
        goto LABEL_195;
      v42 = v202 - 1;
      if ( (__int64)v202 - 1 >= 0 )
      {
        v43 = (_QWORD *)(v201 + 32 * v202 - 32);
        while ( (unsigned __int64)v219 < *v43 || (unsigned __int64)v219 >= v43[1] )
        {
          --v42;
          v43 -= 4;
          if ( v42 == -1 )
            goto LABEL_101;
        }
        if ( v219 + v43[2] - *v43 != -1 )
          goto LABEL_195;
      }
LABEL_101:
      if ( v219 < v223 + v214 )
      {
LABEL_195:
        if ( qlseek() != -1 )
          sub_17310((__int64)&v200);
        goto LABEL_105;
      }
      if ( !HIBYTE(v263)
        && (int)sub_CFC0(
                  1u,
                  (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                  v219) <= 0 )
      {
        sub_DA00(
          0,
          (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
          v44,
          v45,
          v46,
          v47,
          (char)v176);
      }
      HIBYTE(v263) = 1;
      qlseek();
    }
LABEL_105:
    sub_18F40((__int64)&v200, a1);
    sub_113E0((__int64)&v200);
    v48 = v237;
    v49 = 0;
    if ( (_QWORD)v237 )
    {
      do
      {
        v51 = v236 + (v49 << 6);
        if ( *(_BYTE *)(v51 + 56) )
        {
          v50 = s1;
          if ( *(_QWORD *)(v51 + 32) )
            v50 = *(const char **)(v51 + 24);
          sub_7440(v233, (__int64)v234, v50, *(_QWORD *)(v51 + 48), 0);
        }
        else
        {
          netnode_kill();
        }
        ++v49;
      }
      while ( v48 != v49 );
    }
    v52 = v256;
    v53 = 0;
    if ( (_QWORD)v256 )
    {
      do
      {
        v55 = v255 + (v53 << 6);
        if ( *(_BYTE *)(v55 + 56) )
        {
          v54 = s1;
          if ( *(_QWORD *)(v55 + 32) )
            v54 = *(const char **)(v55 + 24);
          sub_7440(v252, (__int64)v253, v54, *(_QWORD *)(v55 + 48), 0);
        }
        else
        {
          netnode_kill();
        }
        ++v53;
      }
      while ( v52 != v53 );
    }
    sub_11C20((__int64)&v200, a1);
    goto LABEL_21;
  }
  sub_A800((__int64)"AUTOHIDE REGISTRY\nSome relocations are not applied");
  if ( v195 )
  {
    v196.m128i_i64[0] = 0;
    qfree();
  }
  v106 = v255;
  v200 = off_324C8;
  v244 = &off_325A8;
  if ( v255 )
  {
    v107 = v256;
    v108 = 0;
    if ( (_QWORD)v256 )
    {
      do
      {
        v109 = (_QWORD *)(v106 + (v108 << 6));
        if ( v109[3] )
        {
          v109[4] = 0;
          qfree();
        }
        if ( *v109 )
        {
          v109[1] = 0;
          qfree();
        }
        ++v108;
        v106 = v255;
      }
      while ( v107 != v108 );
    }
    *(_QWORD *)&v256 = 0;
    qfree();
  }
  v110 = v236;
  v229 = &off_325A8;
  if ( v236 )
  {
    v111 = v237;
    v112 = 0;
    if ( (_QWORD)v237 )
    {
      do
      {
        v113 = (_QWORD *)(v110 + (v112 << 6));
        if ( v113[3] )
        {
          v113[4] = 0;
          qfree();
        }
        if ( *v113 )
        {
          v113[1] = 0;
          qfree();
        }
        v110 = v236;
        ++v112;
      }
      while ( v111 != v112 );
    }
    *(_QWORD *)&v237 = 0;
    qfree();
  }
  if ( v227 )
  {
    *(_QWORD *)&v228 = 0;
    qfree();
  }
  v200 = off_324F0;
  if ( v201 )
  {
LABEL_52:
    *(_QWORD *)&v202 = 0;
    qfree();
  }
  return v266 - __readfsqword(0x28u);
}
