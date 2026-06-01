/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100040AD0
// Address: 0x0000000100040AD0

//----- (0000000100040AD0) ----------------------------------------------------
__int64 __fastcall sub_100040AD0(__int64 a1, unsigned __int8 *a2, const char *a3, int a4)
{
  const char *v7; // r14
  pthread_mutex_t *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rax
  char v12; // r14
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rax
  int v18; // edi
  int v19; // r8d
  int v20; // ecx
  bool v21; // cc
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rsi
  int v25; // ecx
  __int64 v26; // r12
  unsigned __int8 *v27; // rsi
  __int64 v28; // r13
  signed int v29; // r13d
  char **v30; // r15
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rdi
  int v34; // r14d
  int v35; // eax
  char *v36; // rsi
  __int64 v37; // r14
  int v38; // eax
  unsigned __int8 *v39; // rsi
  __int64 v40; // r13
  pthread_mutex_t *v41; // r14
  int v42; // r12d
  char *v43; // r14
  int v44; // eax
  __int64 v45; // rdi
  char *v46; // r13
  __int64 v47; // r12
  int v48; // eax
  const char *v49; // rsi
  int v50; // r8d
  int v51; // r9d
  void *v52; // rax
  __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  unsigned __int8 *v55; // rsi
  __int64 v56; // rcx
  const char *v57; // rsi
  unsigned __int64 v58; // rsi
  bool v59; // cf
  unsigned __int64 v60; // rsi
  unsigned int v61; // r14d
  char *v62; // rax
  __int64 v63; // rcx
  char *v64; // rdi
  __int64 v65; // rax
  int v66; // eax
  unsigned __int64 v67; // r13
  char *v68; // rax
  __int64 v69; // rcx
  char *v70; // rdi
  void *v71; // rdi
  int v72; // r13d
  int v73; // r13d
  __int64 v74; // rsi
  int v75; // r13d
  int v76; // r13d
  unsigned __int64 v77; // rax
  int v78; // r13d
  int v79; // r13d
  unsigned __int64 v80; // rax
  int v81; // r13d
  int v82; // r13d
  unsigned __int8 *v83; // rsi
  char *v84; // rax
  __int64 v85; // rcx
  char *v86; // rdi
  int v87; // r13d
  int v88; // r13d
  unsigned __int64 v89; // rax
  __int64 v90; // rcx
  int v91; // r13d
  int v92; // r14d
  __int64 v93; // rcx
  _DWORD *v94; // rax
  int v95; // r14d
  __int64 v96; // r15
  __int64 v97; // r12
  __int64 v98; // r15
  __int64 v99; // rax
  __int64 v100; // rdi
  __int64 v101; // rdi
  unsigned __int8 *v102; // rax
  int v103; // ecx
  __int64 v104; // r13
  __int64 v105; // r15
  __int64 v106; // r13
  __int64 v107; // r14
  unsigned __int16 v108; // ax
  __int64 v109; // rax
  unsigned __int8 v110; // al
  int v111; // esi
  char *v112; // rax
  __int64 v113; // rcx
  char *v114; // rdi
  int v115; // eax
  unsigned __int8 *v116; // rsi
  int v117; // eax
  __int64 v118; // rax
  unsigned int v119; // eax
  int v120; // eax
  signed __int64 v121; // r15
  void *v122; // r14
  _BYTE *v123; // rax
  _BYTE *v124; // r12
  int v125; // eax
  __int16 v126; // ax
  unsigned __int16 v127; // ax
  unsigned __int16 v128; // ax
  unsigned __int16 v129; // ax
  unsigned __int16 v130; // ax
  unsigned __int8 v131; // al
  unsigned __int8 v132; // al
  __int64 v133; // r14
  unsigned __int8 v134; // al
  unsigned __int8 *v135; // rdi
  unsigned __int8 v136; // al
  char v137; // al
  int v138; // eax
  int v139; // eax
  __int64 v140; // r14
  __int64 v141; // r12
  __int64 v142; // r15
  __int64 v143; // r14
  int v144; // r14d
  __int64 v145; // r12
  __int64 v146; // r13
  __int64 v147; // rax
  __int64 v148; // rdi
  __int64 v149; // rdi
  unsigned __int8 v150; // al
  int v151; // eax
  __int64 v152; // rdi
  __int64 v153; // r13
  __int64 v154; // r14
  unsigned __int8 *v155; // r15
  __int64 v156; // r13
  pthread_mutex_t *v157; // r12
  __int64 (__fastcall ***v158)(_QWORD, const char *); // rdi
  unsigned __int16 v159; // ax
  int v160; // r15d
  int *v161; // r14
  unsigned __int64 v162; // rdi
  const char *v163; // rsi
  __int64 i; // r14
  int v165; // eax
  int v166; // eax
  int v167; // eax
  __int64 v168; // rdi
  unsigned __int16 v169; // ax
  unsigned __int16 v170; // ax
  int v171; // esi
  unsigned __int16 v172; // ax
  unsigned __int8 v173; // r14
  void *v174; // rax
  unsigned __int64 v175; // rsi
  __int64 v176; // r14
  unsigned __int16 v177; // ax
  __int64 v178; // rax
  __int64 v179; // r14
  unsigned __int8 v180; // al
  unsigned __int8 *v181; // rdi
  unsigned __int8 *v182; // rsi
  __int64 v183; // rsi
  unsigned __int8 *v184; // r14
  unsigned __int8 v185; // al
  __int64 v186; // r12
  unsigned __int8 *v187; // r15
  unsigned __int8 v188; // al
  unsigned __int8 *v189; // rsi
  __int64 v190; // r15
  __int64 v191; // rax
  unsigned __int8 v192; // al
  unsigned __int16 v193; // ax
  unsigned __int8 v194; // al
  __int64 v195; // r15
  __int64 v196; // r12
  __int64 v197; // r15
  __int64 v198; // r13
  __int64 v199; // r15
  __int64 v200; // r13
  unsigned __int16 v201; // ax
  int v202; // esi
  unsigned __int16 v203; // ax
  int v204; // eax
  unsigned __int8 *v205; // rax
  unsigned __int8 v206; // cl
  unsigned __int8 v207; // al
  unsigned __int16 v208; // ax
  int v209; // eax
  unsigned __int8 v210; // al
  unsigned __int8 v211; // al
  unsigned __int8 *v212; // rax
  __int64 v213; // r13
  __int64 v214; // r12
  unsigned __int8 *v215; // r15
  _QWORD **v216; // r14
  __int64 v217; // r13
  __int64 v218; // r12
  int v219; // eax
  void *v220; // rdi
  unsigned __int16 v221; // ax
  unsigned __int8 *v222; // rax
  __int64 v223; // rax
  __int64 v224; // r14
  __int64 v225; // rdi
  __int64 v226; // rdi
  char *v227; // rax
  __int64 v228; // rcx
  char *v229; // rdi
  __int64 v230; // rcx
  __int64 v231; // rax
  unsigned __int8 *v232; // rsi
  __int64 v233; // rdi
  __int64 v234; // rdi
  char *v235; // rax
  __int64 v236; // rcx
  char *v237; // rdi
  __int64 *v238; // rdi
  unsigned __int8 *v239; // rdi
  __int64 v240; // rcx
  unsigned __int64 v241; // rax
  int v243; // eax
  unsigned __int64 v244; // rdi
  unsigned int v245; // edi
  int v246; // eax
  char v247; // [rsp+0h] [rbp-D0h]
  __int64 v248; // [rsp+8h] [rbp-C8h]
  int v249; // [rsp+14h] [rbp-BCh]
  __int64 v250; // [rsp+18h] [rbp-B8h]
  int v251; // [rsp+28h] [rbp-A8h]
  int v252; // [rsp+28h] [rbp-A8h]
  char **v253; // [rsp+30h] [rbp-A0h]
  unsigned __int8 *v254; // [rsp+38h] [rbp-98h]
  __int64 v255; // [rsp+40h] [rbp-90h]
  _DWORD v256[2]; // [rsp+48h] [rbp-88h] BYREF
  int v257; // [rsp+50h] [rbp-80h]
  int v258; // [rsp+54h] [rbp-7Ch]
  unsigned __int8 *v259; // [rsp+58h] [rbp-78h] BYREF
  unsigned __int8 v260[8]; // [rsp+60h] [rbp-70h] BYREF
  void *v261[2]; // [rsp+68h] [rbp-68h] BYREF
  void *v262; // [rsp+78h] [rbp-58h]
  char v263[8]; // [rsp+80h] [rbp-50h] BYREF
  void *__p[2]; // [rsp+88h] [rbp-48h] BYREF
  __int64 v265; // [rsp+98h] [rbp-38h]

  v260[0] = 2;
  *(_OWORD *)v261 = 0;
  v262 = nullptr;
  v248 = a1 + 48;
  v250 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 128) = 0;
  if ( !a3
    || (v7 = a3,
        v8 = (pthread_mutex_t *)qword_1000AD0F0,
        qmutex_lock((pthread_mutex_t *)qword_1000AD0F0),
        a4 = sub_1000347E0(*(_QWORD *)(a1 + 8), v7),
        qmutex_unlock(v8),
        v9 = 0,
        a4 != 0x7FFFFFFF) )
  {
    *(_DWORD *)(a1 + 120) = a4;
    v10 = 0;
    goto LABEL_5;
  }
LABEL_3:
  v255 = v9;
  v254 = a2;
  set_qerrno();
  set_error_string(0, v7);
LABEL_413:
  if ( (unsigned int)get_qerrno() != 90 )
    sub_10003BC00(v260);
  v235 = *(char **)(a1 + 24);
  v236 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v236 + 1) )
  {
    v235 = (char *)qvector_reserve(a1 + 24, v235, v236 + 1, 0x20u);
    *(_QWORD *)(a1 + 24) = v235;
    v236 = *(_QWORD *)(a1 + 32);
  }
  v237 = &v235[32 * v236];
  *v237 = 2;
  *(_OWORD *)(v237 + 8) = 0;
  *((_QWORD *)v237 + 3) = 0;
  ++*(_QWORD *)(a1 + 32);
  move_idcv((unsigned __int8 *)v237, v260);
LABEL_418:
  sub_10003B860(a1, *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
LABEL_419:
  v238 = *(__int64 **)(a1 + 128);
  if ( !v238 )
  {
LABEL_424:
    v61 = 0;
    goto LABEL_425;
  }
  while ( !sub_1000330D0(v238, *(_QWORD *)(a1 + 112) - 1LL, v256) )
  {
    if ( *(_QWORD *)(a1 + 56) <= (unsigned __int64)(int)v250 )
      goto LABEL_424;
    if ( !sub_10003E780(a1) )
    {
      v245 = 301;
      goto LABEL_458;
    }
    v238 = *(__int64 **)(a1 + 128);
    if ( !v238 )
      goto LABEL_424;
  }
  *(_QWORD *)(a1 + 112) = v256[1];
  if ( v257 == 1 )
  {
    v246 = v258 + *(_DWORD *)(a1 + 100);
    if ( v246 < 0 || (v244 = (unsigned int)v246, v241 = *(_QWORD *)(a1 + 32), v241 <= v244) )
    {
      v245 = 286;
      goto LABEL_458;
    }
LABEL_440:
    v240 = *(_QWORD *)(a1 + 24);
    v239 = (unsigned __int8 *)(v240 + 32 * v244);
    v259 = v239;
    goto LABEL_441;
  }
  if ( v257 == 2 )
  {
    v243 = v258 + *(_DWORD *)(a1 + 96);
    if ( v243 < 0 || (v244 = (unsigned int)v243, v241 = *(_QWORD *)(a1 + 32), v241 <= v244) )
    {
      v245 = 287;
LABEL_458:
      if ( under_debugger == 1 )
        goto LABEL_111;
      goto LABEL_459;
    }
    goto LABEL_440;
  }
  if ( v257 != 3 )
  {
    v245 = 300;
    goto LABEL_458;
  }
  v239 = (unsigned __int8 *)sub_100037B10(*(_QWORD *)(a1 + 8), v258);
  v259 = v239;
  v240 = *(_QWORD *)(a1 + 24);
  v241 = *(_QWORD *)(a1 + 32);
LABEL_441:
  v55 = (unsigned __int8 *)(v240 + 32 * v241 - 32);
  if ( (unsigned int)move_idcv(v239, v55) )
    goto LABEL_113;
  v55 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
  v263[0] = 2;
  *(_OWORD *)__p = 0;
  v265 = 0;
  copy_idcv((unsigned __int8 *)v263, v55);
  sub_100044270((_QWORD *)(a1 + 24));
  if ( v263[0] != 5 )
  {
    if ( v263[0] != 7 )
      goto LABEL_113;
    v71 = __p[0];
    if ( !__p[0] )
      goto LABEL_113;
LABEL_445:
    __p[1] = nullptr;
    qfree(v71);
    goto LABEL_113;
  }
LABEL_173:
  v55 = (unsigned __int8 *)v263;
  sub_1000380B0((unsigned __int8 **)__p[0], (unsigned __int8 *)v263);
LABEL_113:
  if ( !*(_BYTE *)(a1 + 144) && (callui(27, (_DWORD)v55, v54, (unsigned int)&callui, v50, v51, v247) & 1) != 0 )
    goto LABEL_412;
  v55 = *(unsigned __int8 **)(a1 + 112);
  v61 = sub_100032D20(*(_QWORD **)(a1 + 128), (__int64 *)v55);
  ++*(_QWORD *)(a1 + 112);
  v65 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(v65 + 124) )
  {
    v255 = (unsigned int)(v255 + 1);
    if ( (int)v255 >= 101 )
    {
      v255 = 0;
      if ( *(_QWORD *)(v65 + 112) != -1 && is_main_thread() )
      {
        v255 = 0;
        if ( time(nullptr) - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) >= 3 )
        {
          v255 = 0;
          sub_10001DA30((int)"Running IDC script");
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 124LL) = 1;
        }
      }
    }
  }
  while ( 1 )
  {
    v29 = (unsigned __int8)v61;
    switch ( (char)v61 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
        goto LABEL_19;
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
        a4 = (unsigned __int8)v61 - 16;
        goto LABEL_137;
      case 32:
      case 33:
      case 34:
      case 35:
      case 36:
      case 37:
      case 38:
      case 39:
      case 40:
      case 41:
      case 42:
      case 43:
      case 44:
      case 45:
      case 46:
      case 47:
        v75 = (unsigned __int8)v61 - 32;
        goto LABEL_141;
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 63:
        v78 = (unsigned __int8)v61 - 48;
        goto LABEL_149;
      case 64:
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
        v87 = (unsigned __int8)v61 - 64;
        goto LABEL_166;
      case 80:
      case 81:
      case 82:
      case 83:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
      case 91:
      case 92:
      case 93:
      case 94:
      case 95:
        v91 = (unsigned __int8)v61 - 80;
        goto LABEL_170;
      case 96:
      case 97:
      case 98:
      case 99:
      case 100:
      case 101:
      case 102:
      case 103:
      case 104:
      case 105:
      case 106:
      case 107:
      case 108:
      case 109:
      case 110:
      case 111:
        v72 = (unsigned __int8)v61 - 96;
        goto LABEL_133;
      case 112:
      case 113:
      case 114:
      case 115:
      case 116:
      case 117:
      case 118:
      case 119:
      case 120:
      case 121:
      case 122:
      case 123:
      case 124:
      case 125:
      case 126:
      case 127:
        v81 = (unsigned __int8)v61 - 112;
        goto LABEL_157;
      case -128:
        v207 = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v29 = v207;
        goto LABEL_19;
      case -127:
        v193 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v29 = v193;
        goto LABEL_19;
      case -126:
        v194 = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        a4 = v194;
        goto LABEL_137;
      case -125:
        v129 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        a4 = v129;
        goto LABEL_137;
      case -124:
        v132 = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v75 = v132;
        goto LABEL_141;
      case -123:
        v203 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v75 = v203;
LABEL_141:
        *(_DWORD *)(a1 + 120) = v75;
        v76 = *(_DWORD *)(a1 + 100) + v75;
        if ( v76 < 0 )
          goto LABEL_460;
        v77 = *(_QWORD *)(a1 + 32);
        if ( v77 <= (unsigned int)v76 )
          goto LABEL_460;
        if ( (unsigned int)move_idcv(
                             (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * (unsigned int)v76),
                             (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v77 - 32)) )
          goto LABEL_413;
        v55 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v263[0] = 2;
        *(_OWORD *)__p = 0;
        v265 = 0;
        copy_idcv((unsigned __int8 *)v263, v55);
        sub_100044270((_QWORD *)(a1 + 24));
        if ( v263[0] == 5 )
          goto LABEL_173;
        if ( v263[0] == 7 )
        {
          v71 = __p[0];
          if ( __p[0] )
            goto LABEL_445;
        }
        goto LABEL_113;
      case -122:
        v131 = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v78 = v131;
        goto LABEL_149;
      case -121:
        v130 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v78 = v130;
LABEL_149:
        *(_DWORD *)(a1 + 120) = v78;
        v79 = *(_DWORD *)(a1 + 96) + v78;
        if ( v79 < 0 )
          goto LABEL_461;
        v80 = *(_QWORD *)(a1 + 32);
        if ( v80 <= (unsigned int)v79 )
          goto LABEL_461;
        if ( (unsigned int)move_idcv(
                             (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * (unsigned int)v79),
                             (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v80 - 32)) )
          goto LABEL_413;
        v55 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v263[0] = 2;
        *(_OWORD *)__p = 0;
        v265 = 0;
        copy_idcv((unsigned __int8 *)v263, v55);
        sub_100044270((_QWORD *)(a1 + 24));
        if ( v263[0] == 5 )
          goto LABEL_173;
        if ( v263[0] == 7 )
        {
          v71 = __p[0];
          if ( __p[0] )
            goto LABEL_445;
        }
        goto LABEL_113;
      case -120:
        v192 = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v87 = v192;
        goto LABEL_166;
      case -119:
        v208 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v87 = v208;
LABEL_166:
        *(_DWORD *)(a1 + 120) = v87;
        v88 = *(_DWORD *)(a1 + 100) + v87;
        if ( v88 >= 0 )
        {
          v89 = *(_QWORD *)(a1 + 32);
          if ( v89 > (unsigned int)v88 )
            goto LABEL_168;
        }
        goto LABEL_460;
      case -118:
        v185 = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v91 = v185;
        goto LABEL_170;
      case -117:
        v172 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v91 = v172;
LABEL_170:
        *(_DWORD *)(a1 + 120) = v91;
        v88 = *(_DWORD *)(a1 + 96) + v91;
        if ( v88 < 0 )
          goto LABEL_461;
        v89 = *(_QWORD *)(a1 + 32);
        if ( v89 <= (unsigned int)v88 )
          goto LABEL_461;
LABEL_168:
        v90 = *(_QWORD *)(a1 + 24);
        v55 = (unsigned __int8 *)(v90 + 32 * v89 - 32);
        v66 = copy_idcv((unsigned __int8 *)(v90 + 32LL * (unsigned int)v88), v55);
        goto LABEL_123;
      case -116:
        v150 = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v72 = v150;
        goto LABEL_133;
      case -115:
        v128 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v72 = v128;
LABEL_133:
        *(_DWORD *)(a1 + 120) = v72;
        v73 = *(_DWORD *)(a1 + 100) + v72;
        if ( v73 < 0 )
          goto LABEL_460;
        v74 = (unsigned int)v73;
        if ( *(_QWORD *)(a1 + 32) <= (unsigned __int64)(unsigned int)v73 )
          goto LABEL_460;
        goto LABEL_159;
      case -114:
        v136 = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v81 = v136;
        goto LABEL_157;
      case -113:
        v127 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v81 = v127;
LABEL_157:
        *(_DWORD *)(a1 + 120) = v81;
        v82 = *(_DWORD *)(a1 + 96) + v81;
        if ( v82 < 0 )
          goto LABEL_461;
        v74 = (unsigned int)v82;
        if ( *(_QWORD *)(a1 + 32) <= (unsigned __int64)(unsigned int)v82 )
          goto LABEL_461;
LABEL_159:
        v83 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v74);
        goto LABEL_160;
      case -112:
      case -111:
      case -110:
      case -109:
      case -108:
      case -107:
      case -106:
      case -105:
      case -104:
      case -103:
      case -102:
      case -101:
      case -100:
      case -99:
      case -98:
      case -97:
      case -49:
        v245 = 299;
        goto LABEL_462;
      case -96:
        v137 = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v67 = v137;
        goto LABEL_126;
      case -95:
        v126 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v67 = v126;
        goto LABEL_126;
      case -94:
        LOBYTE(v119) = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v119 = (unsigned __int8)v119;
        goto LABEL_279;
      case -93:
        LOWORD(v119) = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v119 = (unsigned __int16)v119;
LABEL_279:
        *(_DWORD *)(a1 + 120) = v119;
        v175 = *(_QWORD *)(a1 + 32);
        v59 = v175 < v119;
        v55 = (unsigned __int8 *)(v175 - v119);
        if ( v59 )
        {
          v245 = 285;
          goto LABEL_462;
        }
        if ( v119 )
        {
          v263[0] = 2;
          *(_OWORD *)__p = 0;
          v265 = 0;
          sub_10002E5F0(a1 + 24, (unsigned __int64)v55, (unsigned __int8 *)v263);
          if ( v263[0] == 5 )
            goto LABEL_173;
          if ( v263[0] == 7 )
          {
            v71 = __p[0];
            if ( __p[0] )
              goto LABEL_445;
          }
        }
        goto LABEL_113;
      case -92:
        v186 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
        v187 = (unsigned __int8 *)(v186 - 32);
        v259 = (unsigned __int8 *)(v186 - 32);
        v188 = *(_BYTE *)(v186 - 32);
        if ( v188 != 10 )
          goto LABEL_301;
        if ( !deref_idcv(v187, 2) )
          goto LABEL_413;
        v188 = *v187;
LABEL_301:
        if ( v188 != 9 && v188 != 2 || *(_QWORD *)(v186 - 24) == -1 || SLODWORD(qword_1000AC128[1]) <= 0 )
          goto LABEL_405;
        if ( !(unsigned int)move_idcv(
                              v260,
                              (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32)) )
        {
          v189 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
          v263[0] = 2;
          *(_OWORD *)__p = 0;
          v265 = 0;
          copy_idcv((unsigned __int8 *)v263, v189);
          sub_100044270((_QWORD *)(a1 + 24));
          sub_100043B90((unsigned __int8 *)v263);
        }
        v190 = 32LL * *(int *)(*(_QWORD *)(a1 + 72) + 4LL * *(_QWORD *)(a1 + 80) - 4);
        sub_100043890(a1 + 24, v190 + *(_QWORD *)(a1 + 24), v260);
        v191 = *(_QWORD *)(a1 + 24);
        v263[0] = 2;
        *(_OWORD *)__p = 0;
        v265 = 0;
        sub_1000439E0(a1 + 24, v191 + v190 + 32, (unsigned __int8 *)v263);
        if ( v263[0] == 5 )
        {
          sub_1000380B0((unsigned __int8 **)__p[0], (unsigned __int8 *)v263);
        }
        else if ( v263[0] == 7 )
        {
          sub_100006E30(__p);
        }
        a4 = -LODWORD(qword_1000AC128[1]);
LABEL_137:
        *(_DWORD *)(a1 + 120) = a4;
        goto LABEL_138;
      case -91:
        v169 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        *(_DWORD *)(a1 + 120) = v169;
        v260[0] = 2;
        v261[0] = nullptr;
        v55 = (unsigned __int8 *)(*(_QWORD *)(a1 + 32) + v169);
        sub_10002E5F0(a1 + 24, (unsigned __int64)v55, v260);
        goto LABEL_113;
      case -90:
        goto LABEL_113;
      case -89:
        v166 = sub_100032D90(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        v67 = v166;
        goto LABEL_126;
      case -88:
        v120 = sub_100032D90(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        v121 = v120;
        v122 = (void *)(v120 + 1LL);
        v123 = qalloc((signed __int64)v122);
        v124 = v123;
        if ( !v123 )
          goto LABEL_413;
        sub_100032CE0(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112), v123, v121);
        *(_QWORD *)(a1 + 112) += v121;
        v124[v121] = 0;
        v260[0] = 7;
        v261[0] = v124;
        v262 = v122;
        v261[1] = v122;
        v84 = *(char **)(a1 + 24);
        v85 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v85 + 1) )
        {
          v84 = (char *)qvector_reserve(a1 + 24, v84, v85 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v84;
          v85 = *(_QWORD *)(a1 + 32);
        }
        goto LABEL_164;
      case -87:
        v55 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v263[0] = 2;
        *(_OWORD *)__p = 0;
        v265 = 0;
        copy_idcv((unsigned __int8 *)v263, v55);
        v148 = *(_QWORD *)(a1 + 32);
        if ( v148 )
        {
          v149 = v148 - 1;
          *(_QWORD *)(a1 + 32) = v149;
          sub_100039BA0((unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v149));
        }
        if ( v263[0] == 5 )
          goto LABEL_173;
        if ( v263[0] == 7 )
        {
          v71 = __p[0];
          if ( __p[0] )
            goto LABEL_445;
        }
        goto LABEL_113;
      case -86:
      case -44:
        v92 = *(_DWORD *)(a1 + 32) - ((unsigned __int8)v61 == 212);
        v93 = *(_QWORD *)(a1 + 80);
        v54 = v93 + 1;
        v94 = *(_DWORD **)(a1 + 72);
        if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)(v93 + 1) )
        {
          v55 = *(unsigned __int8 **)(a1 + 72);
          v94 = qvector_reserve(a1 + 72, v55, v54, 4u);
          *(_QWORD *)(a1 + 72) = v94;
          v93 = *(_QWORD *)(a1 + 80);
        }
        v94[v93] = v92;
        ++*(_QWORD *)(a1 + 80);
        goto LABEL_113;
      case -85:
        v117 = sub_100032D90(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        LODWORD(v55) = v117;
        sub_100033960(a1, v117);
        goto LABEL_113;
      case -84:
      case -83:
        v95 = sub_100032D90(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        v96 = *(_QWORD *)(a1 + 24);
        v97 = 32LL * *(_QWORD *)(a1 + 32);
        v259 = (unsigned __int8 *)(v96 + v97 - 32);
        if ( !(unsigned __int8)sub_1000409F0((__int64)v259) )
          goto LABEL_413;
        v98 = v97 + v96;
        v99 = *(_QWORD *)(v98 - 24);
        if ( v29 == 173 )
        {
          *(_QWORD *)(v98 - 24) = v99 == 0;
          v99 = v99 == 0;
        }
        if ( v99 )
          sub_100033960(a1, v95);
        v55 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v263[0] = 2;
        *(_OWORD *)__p = 0;
        v265 = 0;
        copy_idcv((unsigned __int8 *)v263, v55);
        v100 = *(_QWORD *)(a1 + 32);
        if ( v100 )
        {
          v101 = v100 - 1;
          *(_QWORD *)(a1 + 32) = v101;
          sub_100039BA0((unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v101));
        }
        if ( v263[0] == 5 )
          goto LABEL_173;
        if ( v263[0] == 7 )
        {
          v71 = __p[0];
          if ( __p[0] )
            goto LABEL_445;
        }
        goto LABEL_113;
      case -82:
        v153 = *(_QWORD *)(a1 + 24);
        v154 = 32LL * *(_QWORD *)(a1 + 32);
        v155 = (unsigned __int8 *)(v154 + v153 - 32);
        v259 = v155;
        if ( (unsigned int)idcv_string((__int64)v155) )
          goto LABEL_413;
        v156 = v154 + v153;
        v7 = _s1;
        if ( *(_QWORD *)(v156 - 16) )
          v7 = *(const char **)(v156 - 24);
        v157 = (pthread_mutex_t *)qword_1000AD0F0;
        qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
        LODWORD(v55) = (_DWORD)v7;
        *(_DWORD *)(a1 + 120) = sub_1000347E0(*(_QWORD *)(a1 + 8), v7);
        qmutex_unlock(v157);
        if ( *(_DWORD *)(a1 + 120) != 0x7FFFFFFF )
        {
          sub_100037A90(v155);
          *(_BYTE *)(v156 - 32) = 6;
          *(_DWORD *)(v156 - 24) = *(_DWORD *)(a1 + 120);
          goto LABEL_113;
        }
        v158 = *(__int64 (__fastcall ****)(_QWORD, const char *))(a1 + 136);
        if ( v158 )
        {
          v261[0] = (void *)(**v158)(v158, v7);
          if ( v261[0] != (void *)-1LL )
          {
            v55 = v260;
            copy_idcv(v155, v260);
            goto LABEL_113;
          }
        }
        a2 = v254;
        v9 = v255;
        goto LABEL_3;
      case -81:
        if ( !sub_10003E780(a1) )
          goto LABEL_413;
        if ( *(_QWORD *)(a1 + 56) > (unsigned __int64)(int)v250 )
          goto LABEL_113;
        if ( v254 )
        {
          if ( !(unsigned int)move_idcv(
                                v254,
                                (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32)) )
          {
            v116 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
            v263[0] = 2;
            *(_OWORD *)__p = 0;
            v265 = 0;
            copy_idcv((unsigned __int8 *)v263, v116);
            sub_100044270((_QWORD *)(a1 + 24));
            sub_100043B90((unsigned __int8 *)v263);
            LOBYTE(v61) = 1;
            goto LABEL_425;
          }
          goto LABEL_413;
        }
        LOBYTE(v61) = 1;
        sub_10003CE60(a1);
LABEL_425:
        if ( v260[0] == 5 )
        {
          sub_1000380B0((unsigned __int8 **)v261[0], v260);
        }
        else if ( v260[0] == 7 && v261[0] )
        {
          v261[1] = nullptr;
          qfree(v261[0]);
        }
        return v61;
      case -80:
      case -79:
      case -78:
      case -77:
      case -76:
      case -75:
      case -74:
      case -73:
      case -72:
      case -71:
      case -70:
      case -69:
      case -68:
      case -67:
      case -66:
      case -65:
      case -56:
      case -55:
      case -54:
      case -53:
      case -52:
      case -51:
      case -50:
      case -48:
      case -47:
        LODWORD(v55) = (unsigned __int8)v61;
        v66 = sub_10003ED40((__int64 *)(a1 + 24), (unsigned __int8)v61);
        goto LABEL_123;
      case -64:
        LOBYTE(v115) = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v115 = (unsigned __int8)v115;
        goto LABEL_340;
      case -63:
        LOWORD(v115) = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v115 = (unsigned __int16)v115;
LABEL_340:
        v209 = *(_DWORD *)(a1 + 100) + v115;
        if ( v209 >= 0 )
        {
          v168 = (unsigned int)v209;
          if ( *(_QWORD *)(a1 + 32) > (unsigned __int64)(unsigned int)v209 )
            goto LABEL_342;
        }
        goto LABEL_460;
      case -62:
        LOBYTE(v138) = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v138 = (unsigned __int8)v138;
        goto LABEL_270;
      case -61:
        LOWORD(v138) = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v138 = (unsigned __int16)v138;
LABEL_270:
        v167 = *(_DWORD *)(a1 + 96) + v138;
        if ( v167 < 0 )
          goto LABEL_461;
        v168 = (unsigned int)v167;
        if ( *(_QWORD *)(a1 + 32) <= (unsigned __int64)(unsigned int)v167 )
          goto LABEL_461;
LABEL_342:
        v135 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v168);
        goto LABEL_343;
      case -60:
        LOBYTE(v139) = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v139 = (unsigned __int8)v139;
        goto LABEL_253;
      case -59:
        LOWORD(v139) = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v139 = (unsigned __int16)v139;
LABEL_253:
        v151 = *(_DWORD *)(a1 + 100) + v139;
        if ( v151 >= 0 )
        {
          v152 = (unsigned int)v151;
          if ( *(_QWORD *)(a1 + 32) > (unsigned __int64)(unsigned int)v151 )
            goto LABEL_331;
        }
LABEL_460:
        v245 = 286;
        goto LABEL_462;
      case -58:
        LOBYTE(v125) = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v125 = (unsigned __int8)v125;
        goto LABEL_329;
      case -57:
        LOWORD(v125) = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v125 = (unsigned __int16)v125;
LABEL_329:
        v204 = *(_DWORD *)(a1 + 96) + v125;
        if ( v204 < 0 || (v152 = (unsigned int)v204, *(_QWORD *)(a1 + 32) <= (unsigned __int64)(unsigned int)v204) )
        {
LABEL_461:
          v245 = 287;
LABEL_462:
          if ( under_debugger == 1 )
            goto LABEL_111;
LABEL_459:
          interr(v245);
          goto LABEL_111;
        }
LABEL_331:
        v181 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v152);
LABEL_332:
        v259 = v181;
        LODWORD(v55) = 0;
        v205 = deref_idcv(v181, 0);
        if ( !v205 )
          goto LABEL_413;
        LODWORD(v54) = *v205;
        if ( (_DWORD)v54 == 9 )
          goto LABEL_336;
        v206 = 1;
        if ( (_DWORD)v54 == 3 )
        {
LABEL_112:
          v55 = (unsigned __int8 *)&xmmword_1000A1550;
          eadd((__int64)(v205 + 8), (__int64)&xmmword_1000A1550, (__int64)(v205 + 8), v206);
        }
        else
        {
          if ( (_DWORD)v54 != 2 )
            goto LABEL_412;
LABEL_336:
          --*((_QWORD *)v205 + 1);
        }
        goto LABEL_113;
      case -46:
        v260[0] = 3;
        sub_100032CE0(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112), v261, 16);
        *(_QWORD *)(a1 + 112) += 16LL;
        v263[0] = 2;
        *(_OWORD *)__p = 0;
        v265 = 0;
        copy_idcv((unsigned __int8 *)v263, v260);
        v112 = *(char **)(a1 + 24);
        v113 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v113 + 1) )
        {
          v112 = (char *)qvector_reserve(a1 + 24, v112, v113 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v112;
          v113 = *(_QWORD *)(a1 + 32);
        }
        v114 = &v112[32 * v113];
        *v114 = 2;
        *(_OWORD *)(v114 + 8) = 0;
        *((_QWORD *)v114 + 3) = 0;
        v55 = (unsigned __int8 *)v263;
        copy_idcv((unsigned __int8 *)v114, (unsigned __int8 *)v263);
        ++*(_QWORD *)(a1 + 32);
        if ( v263[0] == 5 )
          goto LABEL_173;
        if ( v263[0] == 7 )
        {
          v71 = __p[0];
          if ( __p[0] )
            goto LABEL_445;
        }
        goto LABEL_113;
      case -45:
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) == 4 )
          v173 = 9;
        else
          v173 = 2;
        v174 = (void *)sub_100032DC0(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 8LL;
        v260[0] = v173;
        v261[0] = v174;
        v263[0] = 2;
        *(_OWORD *)__p = 0;
        v265 = 0;
        copy_idcv((unsigned __int8 *)v263, v260);
        v227 = *(char **)(a1 + 24);
        v228 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v228 + 1) )
        {
          v227 = (char *)qvector_reserve(a1 + 24, v227, v228 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v227;
          v228 = *(_QWORD *)(a1 + 32);
        }
        v229 = &v227[32 * v228];
        *v229 = 2;
        *(_OWORD *)(v229 + 8) = 0;
        *((_QWORD *)v229 + 3) = 0;
        v55 = (unsigned __int8 *)v263;
        copy_idcv((unsigned __int8 *)v229, (unsigned __int8 *)v263);
        ++*(_QWORD *)(a1 + 32);
        if ( v263[0] == 5 )
          goto LABEL_173;
        if ( v263[0] == 7 )
        {
          v71 = __p[0];
          if ( __p[0] )
            goto LABEL_445;
        }
        goto LABEL_113;
      case -43:
        v210 = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v202 = v210;
        goto LABEL_349;
      case -42:
        v201 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v202 = v201;
LABEL_349:
        *(_DWORD *)(a1 + 120) = v202;
        v83 = (unsigned __int8 *)sub_100037B10(*(_QWORD *)(a1 + 8), v202);
        goto LABEL_160;
      case -41:
        v211 = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v171 = v211;
        goto LABEL_351;
      case -40:
        v170 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v171 = v170;
LABEL_351:
        *(_DWORD *)(a1 + 120) = v171;
        v212 = (unsigned __int8 *)sub_100037B10(*(_QWORD *)(a1 + 8), v171);
        if ( (unsigned int)move_idcv(v212, (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32)) )
          goto LABEL_413;
        v55 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v263[0] = 2;
        *(_OWORD *)__p = 0;
        v265 = 0;
        copy_idcv((unsigned __int8 *)v263, v55);
        sub_100044270((_QWORD *)(a1 + 24));
        if ( v263[0] == 5 )
          goto LABEL_173;
        if ( v263[0] == 7 )
        {
          v71 = __p[0];
          if ( __p[0] )
            goto LABEL_445;
        }
        goto LABEL_113;
      case -39:
        v110 = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v111 = v110;
        goto LABEL_364;
      case -38:
        v221 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v111 = v221;
LABEL_364:
        *(_DWORD *)(a1 + 120) = v111;
        v222 = (unsigned __int8 *)sub_100037B10(*(_QWORD *)(a1 + 8), v111);
        v55 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v66 = copy_idcv(v222, v55);
        goto LABEL_123;
      case -37:
        v133 = *(_QWORD *)(a1 + 8);
        v134 = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v109 = sub_100037B10(v133, v134);
        goto LABEL_229;
      case -36:
        v107 = *(_QWORD *)(a1 + 8);
        v108 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v109 = sub_100037B10(v107, v108);
LABEL_229:
        v135 = (unsigned __int8 *)v109;
LABEL_343:
        v259 = v135;
        LODWORD(v55) = 0;
        v205 = deref_idcv(v135, 0);
        if ( !v205 )
          goto LABEL_413;
        LODWORD(v54) = *v205;
        if ( (_DWORD)v54 == 9 )
          goto LABEL_347;
        v206 = 0;
        if ( (_DWORD)v54 == 3 )
          goto LABEL_112;
        if ( (_DWORD)v54 != 2 )
          goto LABEL_412;
LABEL_347:
        ++*((_QWORD *)v205 + 1);
        goto LABEL_113;
      case -35:
        v179 = *(_QWORD *)(a1 + 8);
        v180 = sub_100032D20(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v178 = sub_100037B10(v179, v180);
        goto LABEL_287;
      case -34:
        v176 = *(_QWORD *)(a1 + 8);
        v177 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v178 = sub_100037B10(v176, v177);
LABEL_287:
        v181 = (unsigned __int8 *)v178;
        goto LABEL_332;
      case -33:
        set_qerrno();
        goto LABEL_418;
      case -32:
      case -31:
      case -30:
      case -29:
      case -28:
      case -27:
      case -26:
      case -25:
      case -24:
      case -23:
      case -22:
      case -21:
      case -20:
      case -19:
      case -18:
      case -17:
        v67 = (unsigned int)(unsigned __int8)v61 - 224;
LABEL_126:
        v261[0] = (void *)v67;
        v260[0] = 2;
        v263[0] = 2;
        *(_OWORD *)__p = 0;
        v265 = 0;
        copy_idcv((unsigned __int8 *)v263, v260);
        v68 = *(char **)(a1 + 24);
        v69 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v69 + 1) )
        {
          v68 = (char *)qvector_reserve(a1 + 24, v68, v69 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v68;
          v69 = *(_QWORD *)(a1 + 32);
        }
        v70 = &v68[32 * v69];
        *v70 = 2;
        *(_OWORD *)(v70 + 8) = 0;
        *((_QWORD *)v70 + 3) = 0;
        v55 = (unsigned __int8 *)v263;
        copy_idcv((unsigned __int8 *)v70, (unsigned __int8 *)v263);
        ++*(_QWORD *)(a1 + 32);
        if ( v263[0] == 5 )
          goto LABEL_173;
        if ( v263[0] == 7 )
        {
          v71 = __p[0];
          if ( __p[0] )
            goto LABEL_445;
        }
        goto LABEL_113;
      case -16:
        v159 = sub_100032D50(*(_QWORD **)(a1 + 128), *(__int64 **)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v160 = v159;
        *(_DWORD *)(a1 + 120) = v159;
        v260[0] = 5;
        v161 = (int *)operator new(0x20u);
        sub_100032160((__int64)v161, v160);
        v261[0] = v161;
        v162 = v161[7];
        v163 = (const char *)*(int *)(a1 + 120);
        if ( (_DWORD)v162 != (_DWORD)v163 )
        {
          set_error_data(0, v163);
          goto LABEL_412;
        }
        for ( i = sub_100033F10(v162); ; i = sub_100033FB0(*(_QWORD *)(a1 + 8), *(int *)(i + 24)) )
        {
          v165 = sub_10003B410(i, i + 32);
          *(_DWORD *)(a1 + 120) = v165;
          if ( v165 != -1 || !*(_DWORD *)(i + 24) )
            break;
        }
        goto LABEL_292;
      case -15:
        v213 = *(_QWORD *)(a1 + 24);
        v214 = 32LL * *(_QWORD *)(a1 + 32);
        v215 = (unsigned __int8 *)(v214 + v213 - 32);
        v259 = v215;
        if ( *v215 != 5 )
        {
          v55 = (unsigned __int8 *)(v214 + v213 - 32);
          v66 = copy_idcv(v55, v55);
          goto LABEL_123;
        }
        v216 = (_QWORD **)operator new(0x20u);
        v217 = v214 + v213;
        v218 = *(_QWORD *)(v217 - 24);
        LODWORD(v55) = v218;
        sub_100043C20(v216, (_QWORD *)v218);
        *((_DWORD *)v216 + 6) = 1;
        *((_DWORD *)v216 + 7) = *(_DWORD *)(v218 + 28);
        v219 = *v215;
        if ( v219 == 5 )
        {
          LODWORD(v55) = (_DWORD)v215;
          sub_1000380B0(*(unsigned __int8 ***)(v217 - 24), v215);
        }
        else if ( v219 == 7 )
        {
          v220 = *(void **)(v217 - 24);
          if ( v220 )
          {
            *(_QWORD *)(v217 - 16) = 0;
            qfree(v220);
            *(_QWORD *)(v217 - 24) = 0;
            *(_QWORD *)(v217 - 8) = 0;
          }
        }
        *(_BYTE *)(v217 - 32) = 5;
        *(_QWORD *)(v217 - 24) = v216;
        goto LABEL_113;
      case -14:
        v259 = v260;
        if ( (unsigned __int8)sub_10003D8E0(a1, &v259) )
          goto LABEL_311;
        goto LABEL_419;
      case -13:
        if ( !(unsigned __int8)sub_10003DE00(a1) )
          goto LABEL_419;
        goto LABEL_113;
      case -12:
        if ( !(unsigned __int8)sub_10003DE00(a1) )
          goto LABEL_419;
        v55 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v263[0] = 2;
        *(_OWORD *)__p = 0;
        v265 = 0;
        copy_idcv((unsigned __int8 *)v263, v55);
        v225 = *(_QWORD *)(a1 + 32);
        if ( v225 )
        {
          v226 = v225 - 1;
          *(_QWORD *)(a1 + 32) = v226;
          sub_100039BA0((unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v226));
        }
        if ( v263[0] == 5 )
          goto LABEL_173;
        if ( v263[0] == 7 )
        {
          v71 = __p[0];
          if ( __p[0] )
            goto LABEL_445;
        }
        goto LABEL_113;
      case -11:
      case -10:
        v259 = v260;
        if ( !(unsigned __int8)sub_10003D8E0(a1, &v259) )
          goto LABEL_419;
        if ( !v259 )
          goto LABEL_412;
        v102 = deref_idcv(v259, 0);
        if ( !v102 )
          goto LABEL_413;
        v103 = *v102;
        if ( v103 == 2 || v103 == 9 )
        {
          *((_QWORD *)v102 + 1) = *((_QWORD *)v102 + 1) + 2LL * ((unsigned __int8)v61 == 245) - 1;
        }
        else
        {
          if ( v103 != 3 )
            goto LABEL_412;
          eadd((__int64)(v102 + 8), (__int64)&xmmword_1000A1550, (__int64)(v102 + 8), (unsigned __int8)v61 != 245);
        }
LABEL_311:
        v55 = v260;
        v66 = move_idcv((unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32), v260);
LABEL_123:
        if ( v66 )
          goto LABEL_413;
        goto LABEL_113;
      case -9:
        v259 = v260;
        if ( !(unsigned __int8)sub_10003E040(a1, (_DWORD *)(a1 + 120), &v259) )
          goto LABEL_413;
        if ( *(_DWORD *)(a1 + 120) == -1 )
        {
          v187 = v259;
          v188 = *v259;
LABEL_405:
          if ( v188 != 6 )
            goto LABEL_412;
          *(_DWORD *)(a1 + 120) = *((_DWORD *)v187 + 2);
          v232 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
          v263[0] = 2;
          *(_OWORD *)__p = 0;
          v265 = 0;
          copy_idcv((unsigned __int8 *)v263, v232);
          v233 = *(_QWORD *)(a1 + 32);
          if ( v233 )
          {
            v234 = v233 - 1;
            *(_QWORD *)(a1 + 32) = v234;
            sub_100039BA0((unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v234));
          }
          a2 = v254;
          if ( v263[0] == 5 )
          {
            sub_1000380B0((unsigned __int8 **)__p[0], (unsigned __int8 *)v263);
          }
          else if ( v263[0] == 7 && __p[0] )
          {
            __p[1] = nullptr;
            qfree(__p[0]);
          }
          a4 = *(_DWORD *)(a1 + 120);
        }
        else
        {
          if ( !(unsigned int)move_idcv(
                                v260,
                                (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32)) )
          {
            v182 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
            v263[0] = 2;
            *(_OWORD *)__p = 0;
            v265 = 0;
            copy_idcv((unsigned __int8 *)v263, v182);
            sub_100044270((_QWORD *)(a1 + 24));
            sub_100043B90((unsigned __int8 *)v263);
          }
LABEL_292:
          v183 = *(_QWORD *)(a1 + 24) + 32LL * *(int *)(*(_QWORD *)(a1 + 72) + 4LL * *(_QWORD *)(a1 + 80) - 4);
          v263[0] = 2;
          *(_OWORD *)__p = 0;
          v265 = 0;
          v184 = (unsigned __int8 *)sub_1000439E0(a1 + 24, v183, (unsigned __int8 *)v263);
          v259 = v184;
          if ( v263[0] == 5 )
          {
            sub_1000380B0((unsigned __int8 **)__p[0], (unsigned __int8 *)v263);
          }
          else if ( v263[0] == 7 && __p[0] )
          {
            __p[1] = nullptr;
            qfree(__p[0]);
          }
          v55 = v260;
          if ( (unsigned int)move_idcv(v184, v260) )
            goto LABEL_413;
          a4 = *(_DWORD *)(a1 + 120);
          if ( a4 == -1 )
          {
            v230 = *(_QWORD *)(a1 + 80);
            v231 = *(int *)(*(_QWORD *)(a1 + 72) + 4 * v230 - 4);
            if ( v230 )
              *(_QWORD *)(a1 + 80) = v230 - 1;
            if ( *(_QWORD *)(a1 + 32) - 1LL != v231 )
              goto LABEL_412;
            goto LABEL_113;
          }
LABEL_138:
          a2 = v254;
        }
        v10 = v255;
LABEL_5:
        v255 = v10;
        v254 = a2;
        if ( a4 >= 0 )
        {
          v11 = *(__int64 **)(a1 + 8);
          v12 = 1;
          v13 = 0;
          if ( v11[1] <= (unsigned __int64)(unsigned int)a4 )
            goto LABEL_34;
          v14 = *v11;
          v15 = *(_QWORD *)(v14 + 8LL * (unsigned int)a4);
          v13 = 0;
          if ( !v15 )
            goto LABEL_34;
          v12 = 0;
          if ( *(_QWORD *)(v15 + 40) )
          {
            v16 = v15 + 32;
            v17 = *(_QWORD *)(a1 + 80);
            v18 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v17 - 4);
            if ( v17 )
              *(_QWORD *)(a1 + 80) = v17 - 1;
            v19 = *(_DWORD *)(v15 + 24);
            v20 = *(_DWORD *)(a1 + 32) - v18;
            v21 = v20 < v19;
            v22 = v20 - v19;
            if ( v21 && (v23 = *(_QWORD *)(v15 + 72)) != 0 && (v24 = *(_QWORD *)(v15 + 64)) != 0 )
            {
              v25 = v23 + v22;
              if ( v25 >= 0 )
              {
                v249 = *(_DWORD *)(v15 + 24);
                v26 = (int)v23;
                v27 = (unsigned __int8 *)(32LL * (unsigned int)v25 + v24);
                v28 = (unsigned int)v25 - 1LL;
                while ( ++v28 < v26 )
                {
                  sub_10002E260((char **)(a1 + 24), v27);
                  v27 += 32;
                }
                v16 = v15 + 32;
                if ( *(_DWORD *)(v15 + 24) != v249 )
                {
LABEL_78:
                  set_qerrno();
                  v57 = _s1;
                  if ( *(_QWORD *)(v15 + 8) )
                    v57 = *(const char **)v15;
                  set_error_string(0, v57);
                  goto LABEL_413;
                }
              }
            }
            else if ( v19 != *(_DWORD *)(a1 + 32) - v18 )
            {
              goto LABEL_78;
            }
            v41 = (pthread_mutex_t *)qword_1000AD0F0;
            qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
            v42 = *(_DWORD *)(v15 + 136);
            if ( v42 == -1 )
            {
              v49 = _s1;
              if ( *(_QWORD *)(v15 + 8) )
                v49 = *(const char **)v15;
              set_error_string(0, v49);
              set_qerrno();
            }
            else
            {
              *(_DWORD *)(v15 + 136) = v42 + 1;
            }
            qmutex_unlock(v41);
            if ( v42 == -1 )
              goto LABEL_413;
            v52 = *(void **)(a1 + 48);
            v53 = *(_QWORD *)(a1 + 56);
            v54 = v53 + 1;
            if ( *(_QWORD *)(a1 + 64) >= (unsigned __int64)(v53 + 1) )
            {
              LODWORD(v55) = v18;
            }
            else
            {
              v52 = qvector_reserve(v248, v52, v54, 0x18u);
              LODWORD(v55) = v18;
              *(_QWORD *)(a1 + 48) = v52;
              v53 = *(_QWORD *)(a1 + 56);
              v54 = v53 + 1;
            }
            v56 = 3 * v53;
            *(_QWORD *)(a1 + 56) = v54;
            *((_DWORD *)v52 + 2 * v56 + 2) = *(_DWORD *)(a1 + 112);
            *((_QWORD *)v52 + v56) = *(_QWORD *)(a1 + 104);
            *((_DWORD *)v52 + 2 * v56 + 3) = *(_DWORD *)(a1 + 96);
            LODWORD(v54) = *(_DWORD *)(a1 + 100);
            *((_DWORD *)v52 + 2 * v56 + 4) = v54;
            *(_DWORD *)(a1 + 96) = (_DWORD)v55;
            *(_DWORD *)(a1 + 100) = *(_DWORD *)(a1 + 32);
            *(_QWORD *)(a1 + 128) = v16;
            *(_QWORD *)(a1 + 104) = v15;
            *(_QWORD *)(a1 + 112) = 0;
            goto LABEL_113;
          }
          v13 = *(_QWORD *)(v14 + 8LL * (unsigned int)a4);
LABEL_34:
          set_qerrno();
          if ( v12 || *(_QWORD *)(v13 + 8) <= 1u )
          {
            v43 = v263;
            qsnprintf(v263, 20, "#%d", *(_DWORD *)(a1 + 120));
          }
          else
          {
            v43 = *(char **)v13;
          }
          set_error_string(0, v43);
          goto LABEL_413;
        }
        v29 = -a4;
LABEL_19:
        *(_DWORD *)(a1 + 120) = v29;
        v255 = (unsigned int)(v255 + 200);
        if ( qword_1000AC0E0 <= (unsigned __int64)v29 )
          goto LABEL_412;
        v260[0] = 2;
        v261[0] = nullptr;
        v30 = &off_1000AC0E8[5 * v29];
        if ( !v30 )
          goto LABEL_412;
        v31 = sub_1000348C0(v30[2], (char *)v256);
        v32 = *(_QWORD *)(a1 + 80);
        v33 = *(int *)(*(_QWORD *)(a1 + 72) + 4 * v32 - 4);
        if ( v32 )
          *(_QWORD *)(a1 + 80) = v32 - 1;
        v253 = (char **)(a1 + 24);
        v34 = *(_DWORD *)(a1 + 32) - v33;
        v35 = v34 - v31;
        if ( v34 >= v31 )
          goto LABEL_40;
        v36 = v30[3];
        if ( !v36 )
          goto LABEL_40;
        v37 = *((int *)v30 + 8);
        v38 = v37 + v35;
        if ( v38 < 0 )
        {
          v34 = v31;
          if ( LOBYTE(v256[0]) == 1 )
            goto LABEL_41;
        }
        else
        {
          v251 = v31;
          v39 = (unsigned __int8 *)&v36[32 * v38];
          v40 = (unsigned int)v38 - 1LL;
          while ( ++v40 < v37 )
          {
            sub_10002E260(v253, v39);
            v39 += 32;
          }
          v31 = v251;
          v34 = v251;
LABEL_40:
          if ( LOBYTE(v256[0]) == 1 )
          {
LABEL_41:
            v261[0] = (void *)v34;
            goto LABEL_44;
          }
        }
        if ( v31 != v34 )
        {
          set_error_string(0, *v30);
LABEL_412:
          set_qerrno();
          goto LABEL_413;
        }
LABEL_44:
        v44 = *((_DWORD *)v30 + 9);
        v252 = v34;
        if ( ((unsigned __int8)v44 & (qword_1000AC100[2] != 0)) == 1 )
        {
          if ( !((unsigned __int8 (*)(void))qword_1000AC100[2])() )
            goto LABEL_412;
          v44 = *((_DWORD *)v30 + 9);
        }
        if ( (v44 & 4) == 0 && !is_main_thread() )
        {
          set_error_string(0, *v30);
          goto LABEL_412;
        }
        v45 = (__int64)&(*v253)[32 * v33];
        v46 = v30[2];
        if ( v34 > 0 )
        {
          v47 = v45;
          do
          {
            if ( *(_BYTE *)v47 != *v46 )
            {
              switch ( *v46 )
              {
                case 2:
                  v48 = idcv_long((unsigned __int8 *)v47);
                  goto LABEL_52;
                case 3:
                  v48 = idcv_float((unsigned __int8 *)v47);
                  goto LABEL_52;
                case 4:
                  v46 -= v46[1] == 0;
                  break;
                case 5:
                case 6:
                case 8:
                  goto LABEL_81;
                case 7:
                  v48 = idcv_string(v47);
                  goto LABEL_52;
                case 9:
                  v48 = idcv_int64((unsigned __int8 *)v47);
LABEL_52:
                  if ( !v48 )
                    break;
                  goto LABEL_413;
                case 10:
                  if ( *(_BYTE *)v47 != 2 || *(_QWORD *)(v47 + 8) )
                    goto LABEL_81;
                  break;
                default:
                  if ( under_debugger != 1 )
                    interr(0x121u);
                  goto LABEL_111;
              }
            }
            v47 += 32;
            ++v46;
            --v34;
          }
          while ( v34 );
        }
        if ( (*v46 & 0xFB) != 0 )
        {
LABEL_81:
          if ( (unsigned int)set_qerrno() )
            goto LABEL_413;
        }
        if ( (*((_BYTE *)v30 + 36) & 2) != 0 )
          sub_10003EA40(a1, (__int64)v30, v45, v252);
        if ( ((unsigned int (__fastcall *)(__int64, unsigned __int8 *))v30[1])(v45, v260) )
          goto LABEL_412;
        v58 = *(_QWORD *)(a1 + 32);
        v59 = v58 < v252;
        v60 = v58 - v252;
        if ( v59 )
        {
          if ( under_debugger != 1 )
            interr(0x11Du);
          goto LABEL_111;
        }
        v61 = (unsigned int)v254;
        if ( v252 )
        {
          v263[0] = 2;
          *(_OWORD *)__p = 0;
          v265 = 0;
          sub_10002E5F0((__int64)v253, v60, (unsigned __int8 *)v263);
          if ( v263[0] == 5 )
          {
            sub_1000380B0((unsigned __int8 **)__p[0], (unsigned __int8 *)v263);
          }
          else if ( v263[0] == 7 && __p[0] )
          {
            __p[1] = nullptr;
            qfree(__p[0]);
          }
        }
        if ( *(_QWORD *)(a1 + 56) <= (unsigned __int64)(int)v250 )
        {
          if ( !v254 || (v61 = 8, !(unsigned int)move_idcv(v254, v260)) )
          {
            LOBYTE(v61) = 1;
            goto LABEL_425;
          }
          goto LABEL_413;
        }
        set_qerrno();
        v55 = *(unsigned __int8 **)(a1 + 112);
        v61 = sub_100032D20(*(_QWORD **)(a1 + 128), (__int64 *)v55);
        ++*(_QWORD *)(a1 + 112);
        if ( (_BYTE)v61 == 0xA9 )
        {
          if ( v260[0] == 5 )
          {
            v55 = v260;
            sub_1000380B0((unsigned __int8 **)v261[0], v260);
          }
          else if ( v260[0] == 7 && v261[0] )
          {
            v261[1] = nullptr;
            qfree(v261[0]);
            v262 = nullptr;
          }
          v260[0] = 2;
          v261[0] = nullptr;
          goto LABEL_113;
        }
        v62 = *(char **)(a1 + 24);
        v63 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v63 + 1) )
        {
          v62 = (char *)qvector_reserve((__int64)v253, v62, v63 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v62;
          v63 = *(_QWORD *)(a1 + 32);
        }
        v64 = &v62[32 * v63];
        *v64 = 2;
        *(_OWORD *)(v64 + 8) = 0;
        *((_QWORD *)v64 + 3) = 0;
        ++*(_QWORD *)(a1 + 32);
        v55 = v260;
        move_idcv((unsigned __int8 *)v64, v260);
        break;
      case -8:
        v118 = 96;
        goto LABEL_239;
      case -7:
        v118 = 100;
LABEL_239:
        v144 = *(_DWORD *)(a1 + v118);
        v145 = *(_QWORD *)(a1 + 24);
        v146 = 32LL * *(_QWORD *)(a1 + 32);
        v142 = v145 + v146 - 32;
        v259 = (unsigned __int8 *)v142;
        if ( (unsigned int)idcv_long((unsigned __int8 *)v142) )
          goto LABEL_413;
        v143 = (unsigned int)(*(_DWORD *)(v146 + v145 - 24) + v144);
        if ( *(_QWORD *)(a1 + 32) > (unsigned __int64)v143 )
          goto LABEL_241;
        v245 = 292;
        goto LABEL_462;
      case -6:
        v140 = *(_QWORD *)(a1 + 24);
        v141 = 32LL * *(_QWORD *)(a1 + 32);
        v142 = v140 + v141 - 32;
        v259 = (unsigned __int8 *)v142;
        if ( (unsigned int)idcv_long((unsigned __int8 *)v142) )
          goto LABEL_413;
        v143 = *(_QWORD *)(v141 + v140 - 24);
        if ( v143 < 0 || (unsigned __int64)v143 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL) )
        {
          v245 = 294;
          goto LABEL_462;
        }
        LODWORD(v143) = ~(_DWORD)v143;
LABEL_241:
        *(_BYTE *)v142 = 10;
        *(_QWORD *)(v142 + 8) = a1;
        *(_DWORD *)(v142 + 16) = v143;
        if ( (int)v143 < 0 )
        {
          LODWORD(v55) = ~(_DWORD)v143;
          v147 = sub_100037B10(*(_QWORD *)(a1 + 8), ~(_DWORD)v143);
        }
        else
        {
          if ( *(_DWORD *)a1 != 289621065 || *(_QWORD *)(a1 + 32) <= (unsigned __int64)(unsigned int)v143 )
          {
LABEL_466:
            if ( under_debugger != 1 )
              interr(0x125u);
LABEL_111:
            BUG();
          }
          v147 = *(_QWORD *)(a1 + 24) + 32LL * (unsigned int)v143;
        }
        if ( !v147 )
          goto LABEL_466;
        if ( *(_BYTE *)v147 == 10 )
          *(_OWORD *)(v142 + 8) = *(_OWORD *)(v147 + 8);
        goto LABEL_113;
      case -5:
        v198 = *(_QWORD *)(a1 + 32) - 4LL;
        if ( v198 >= 0 )
        {
          v199 = *(_QWORD *)(a1 + 24);
          v200 = 32 * v198;
          v259 = (unsigned __int8 *)(v199 + v200 + 32);
          if ( (unsigned int)idcv_long((unsigned __int8 *)(v199 + v200 + 64))
            || (unsigned int)idcv_long((unsigned __int8 *)(v199 + v200 + 96))
            || (unsigned int)set_idcv_slice(
                               (unsigned __int8 *)(v199 + v200 + 32),
                               *(_QWORD *)(v200 + v199 + 72),
                               *(_QWORD *)(v200 + v199 + 104),
                               (unsigned __int8 *)(v200 + v199),
                               0) )
          {
            goto LABEL_413;
          }
          sub_10003CE60(a1);
          sub_10003CE60(a1);
          sub_1000403B0((_QWORD *)(a1 + 24), v260);
          sub_10003CE60(a1);
          v55 = v260;
          sub_100044310((char **)(a1 + 24), v260);
          goto LABEL_113;
        }
        if ( under_debugger != 1 )
          interr(0x128u);
        goto LABEL_111;
      case -4:
        v195 = *(_QWORD *)(a1 + 32) - 3LL;
        if ( v195 >= 0 )
        {
          v196 = *(_QWORD *)(a1 + 24);
          v197 = 32 * v195;
          v259 = (unsigned __int8 *)(v196 + v197);
          if ( (unsigned int)idcv_long((unsigned __int8 *)(v196 + v197 + 32)) )
            goto LABEL_413;
          if ( (unsigned int)idcv_long((unsigned __int8 *)(v196 + v197 + 64)) )
            goto LABEL_413;
          LODWORD(v55) = v196 + v197;
          if ( (unsigned int)get_idcv_slice(
                               (unsigned __int8 *)(v196 + v197),
                               (unsigned __int8 *)(v196 + v197),
                               *(_QWORD *)(v196 + v197 + 40),
                               *(_QWORD *)(v196 + v197 + 72),
                               0) )
            goto LABEL_413;
          sub_10003CE60(a1);
          sub_10003CE60(a1);
          goto LABEL_113;
        }
        if ( under_debugger != 1 )
          interr(0x127u);
        goto LABEL_111;
      case -3:
        v83 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
LABEL_160:
        copy_idcv(v260, v83);
        if ( v260[0] == 10 && !deref_idcv(v260, 2) )
          goto LABEL_413;
        v84 = *(char **)(a1 + 24);
        v85 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v85 + 1) )
        {
          v84 = (char *)qvector_reserve(a1 + 24, v84, v85 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v84;
          v85 = *(_QWORD *)(a1 + 32);
        }
LABEL_164:
        v86 = &v84[32 * v85];
        *v86 = 2;
        *(_OWORD *)(v86 + 8) = 0;
        *((_QWORD *)v86 + 3) = 0;
        ++*(_QWORD *)(a1 + 32);
        v55 = v260;
        move_idcv((unsigned __int8 *)v86, v260);
        goto LABEL_113;
      case -2:
        v223 = *(_QWORD *)(a1 + 32) - 2LL;
        if ( v223 >= 0 )
        {
          v224 = *(_QWORD *)(a1 + 24) + 32 * v223;
          v259 = (unsigned __int8 *)v224;
          if ( (unsigned int)idcv_long((unsigned __int8 *)(v224 + 32)) )
            goto LABEL_413;
          LODWORD(v55) = v224;
          if ( (unsigned int)get_idcv_slice(
                               (unsigned __int8 *)v224,
                               (unsigned __int8 *)v224,
                               *(_QWORD *)(v224 + 40),
                               0,
                               1) )
            goto LABEL_413;
          sub_10003CE60(a1);
          goto LABEL_113;
        }
        if ( under_debugger != 1 )
          interr(0x129u);
        goto LABEL_111;
      case -1:
        v104 = *(_QWORD *)(a1 + 32) - 3LL;
        if ( v104 >= 0 )
        {
          v105 = *(_QWORD *)(a1 + 24);
          v106 = 32 * v104;
          v259 = (unsigned __int8 *)(v105 + v106 + 32);
          if ( (unsigned int)idcv_long((unsigned __int8 *)(v105 + v106 + 64))
            || (unsigned int)set_idcv_slice(
                               (unsigned __int8 *)(v105 + v106 + 32),
                               *(_QWORD *)(v106 + v105 + 72),
                               0,
                               (unsigned __int8 *)(v106 + v105),
                               1) )
          {
            goto LABEL_413;
          }
          sub_10003CE60(a1);
          sub_1000403B0((_QWORD *)(a1 + 24), v260);
          sub_10003CE60(a1);
          v55 = v260;
          sub_100044310((char **)(a1 + 24), v260);
          goto LABEL_113;
        }
        if ( under_debugger != 1 )
          interr(0x12Au);
        goto LABEL_111;
    }
  }
}
// 1000413EE: variable 'v54' is possibly undefined
// 1000413EE: variable 'v50' is possibly undefined
// 1000413EE: variable 'v51' is possibly undefined
// 1000413EE: variable 'v247' is possibly undefined
// 1000A1550: using guessed type __int128 xmmword_1000A1550;
// 1000AC0E0: using guessed type __int64 qword_1000AC0E0;
// 1000AC0E8: using guessed type char **off_1000AC0E8;
// 1000AC100: using guessed type __int64 qword_1000AC100[4];
// 1000AC128: using guessed type __int64 qword_1000AC128[3];
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
// 1000AE23D: using guessed type char under_debugger;
