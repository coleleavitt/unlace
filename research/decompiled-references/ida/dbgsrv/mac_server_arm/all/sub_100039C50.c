/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100039C50
// Address: 0x0000000100039C50

//----- (0000000100039C50) ----------------------------------------------------
__int64 __fastcall sub_100039C50(__int64 a1, unsigned __int8 *a2, char *a3, int a4)
{
  __int64 v7; // x26
  pthread_mutex_t *v9; // x23
  int v10; // w27
  __int64 v11; // x21
  _QWORD *v12; // x8
  char v13; // w23
  __int64 v14; // x22
  __int64 v15; // x8
  int v16; // w24
  int v17; // w21
  int v18; // w8
  int v19; // w11
  __int64 v20; // x10
  __int64 v21; // x9
  __int64 v22; // x8
  __int64 v23; // x25
  unsigned __int8 *j; // x1
  unsigned __int8 *v25; // x28
  __int64 v26; // x21
  char **v27; // x21
  int v28; // w0
  unsigned __int8 *k; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  int v36; // w23
  __int64 v37; // x8
  __int64 v38; // x24
  int v39; // w22
  char *v40; // x8
  __int64 v41; // x10
  __int64 v42; // x9
  __int64 v43; // x22
  unsigned __int8 *v44; // x28
  pthread_mutex_t *v45; // x21
  int v46; // w8
  _QWORD *v47; // x1
  __int64 v48; // x8
  unsigned __int64 v49; // x2
  _QWORD *v50; // x8
  __int64 v51; // x8
  int v52; // w8
  _OWORD *v53; // x23
  char *v54; // x28
  int v55; // w25
  int16x4_t *v56; // x24
  int v57; // w0
  int v58; // w9
  int v59; // w8
  int v60; // w22
  __int64 v61; // x3
  __int64 v62; // x4
  __int64 v63; // x5
  __int64 v64; // x6
  __int64 v65; // x7
  __int64 v66; // x19
  unsigned __int64 v67; // x8
  _QWORD *v68; // x1
  __int64 v69; // x8
  unsigned __int8 *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  __int64 v75; // x5
  __int64 v76; // x6
  __int64 v77; // x7
  __int64 v78; // x8
  __int64 v79; // x8
  __int64 v80; // x8
  int v81; // w0
  unsigned __int64 v82; // x8
  _QWORD *v83; // x1
  __int64 v84; // x8
  unsigned __int8 *v85; // x0
  void *v86; // x0
  unsigned int v87; // w0
  unsigned __int64 v88; // x8
  unsigned int v89; // w0
  unsigned __int64 v90; // x8
  unsigned __int64 v91; // x9
  unsigned __int8 *v92; // x1
  unsigned int v93; // w0
  unsigned __int64 v94; // x8
  unsigned __int64 v95; // x9
  unsigned __int8 *v96; // x1
  unsigned int v97; // w0
  unsigned __int8 *v98; // x1
  _QWORD *v99; // x1
  __int64 v100; // x8
  unsigned __int8 *v101; // x0
  unsigned int v102; // w0
  unsigned __int64 v103; // x8
  unsigned __int64 v104; // x9
  unsigned int v105; // w0
  _QWORD *v106; // x1
  int v107; // w21
  __int64 v108; // x8
  _QWORD **v109; // x22
  __int64 v110; // x23
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  __int64 v114; // x5
  __int64 v115; // x6
  __int64 v116; // x7
  __int64 v117; // x8
  unsigned __int8 *v118; // x1
  __int64 v119; // x8
  __int64 v120; // x9
  __int64 v121; // x8
  int16x4_t *v122; // x0
  int v123; // w9
  int16x4_t v125; // x9
  int16x4_t v126; // x9
  __int64 v127; // x8
  __int64 v128; // x21
  __int64 v129; // x5
  __int64 v130; // x6
  __int64 v131; // x7
  __int64 v132; // x21
  int v133; // w0
  unsigned __int8 *v134; // x0
  int v135; // w1
  __int64 v136; // x8
  _QWORD *v137; // x1
  __int64 v138; // x8
  unsigned __int8 *v139; // x0
  unsigned int v140; // w0
  __int64 v141; // x8
  unsigned __int8 *v142; // x1
  _QWORD **v143; // x0
  __int64 v144; // x2
  __int64 v145; // x3
  __int64 v146; // x4
  __int64 v147; // x5
  __int64 v148; // x6
  __int64 v149; // x7
  int v150; // w22
  __int64 v151; // x23
  __int64 v152; // x21
  unsigned __int64 v153; // x8
  int v154; // w0
  unsigned int v155; // w0
  __int64 v156; // x8
  signed int v157; // w0
  signed __int64 v158; // x22
  void *v159; // x21
  void *v160; // x23
  unsigned int v161; // w0
  __int64 v162; // x8
  signed __int16 v163; // w0
  __int64 v164; // x21
  int v165; // w0
  signed __int8 v166; // w0
  unsigned int v167; // w0
  __int64 v168; // x8
  unsigned int v169; // w0
  __int64 v170; // x8
  __int64 v171; // x22
  __int64 v172; // x0
  unsigned __int8 *v173; // x1
  __int64 v174; // x8
  __int64 v175; // x9
  __int64 v176; // x8
  unsigned __int64 v177; // x8
  __int64 v178; // x24
  char *v179; // x21
  pthread_mutex_t *v180; // x23
  __int64 (__fastcall ***v181)(_QWORD, char *); // x0
  _QWORD **v182; // x21
  int *v183; // x22
  unsigned __int64 v184; // x0
  __int64 i; // x21
  int v186; // w0
  unsigned __int64 v187; // x1
  signed int v188; // w0
  unsigned __int64 v189; // x8
  unsigned int v190; // w0
  int v191; // w1
  __int64 v192; // x8
  unsigned __int8 v193; // w21
  _QWORD **v194; // x0
  unsigned __int64 v195; // x9
  __int64 v196; // x21
  int v197; // w0
  unsigned __int8 *v198; // x0
  __int64 v199; // x21
  int v200; // w0
  unsigned __int8 *v201; // x1
  __int64 v202; // x8
  __int64 v203; // x9
  unsigned __int8 *v204; // x0
  unsigned __int8 *v205; // x21
  __int64 v206; // x23
  int v207; // w8
  unsigned __int8 *v208; // x22
  unsigned __int8 *v211; // x1
  __int64 v212; // x24
  __int64 v213; // x8
  __int64 v214; // x8
  __int64 v215; // x21
  __int64 v216; // x1
  __int64 v217; // x2
  __int64 v218; // x3
  __int64 v219; // x4
  __int64 v220; // x5
  __int64 v221; // x6
  __int64 v222; // x7
  __int64 v223; // x5
  __int64 v224; // x6
  __int64 v225; // x7
  int v226; // w0
  __int64 v227; // x8
  __int64 v228; // x21
  __int64 v229; // x1
  __int64 v230; // x2
  __int64 v231; // x3
  __int64 v232; // x4
  __int64 v233; // x5
  __int64 v234; // x6
  __int64 v235; // x7
  __int64 v236; // x5
  __int64 v237; // x6
  __int64 v238; // x7
  int v239; // w1
  __int64 v240; // x8
  int16x4_t *v241; // x0
  int v242; // w8
  int v243; // w3
  int v244; // w8
  unsigned __int8 *v245; // x0
  unsigned __int8 *v246; // x1
  __int64 v247; // x24
  unsigned __int8 *v248; // x22
  int v249; // t1
  _QWORD **v250; // x21
  __int64 v251; // x23
  int v252; // w8
  void *v253; // x0
  unsigned __int8 *v254; // x0
  __int64 v255; // x8
  __int64 v256; // x21
  __int64 v257; // x5
  __int64 v258; // x6
  __int64 v259; // x7
  int v260; // w0
  unsigned __int8 *v261; // x1
  __int64 v262; // x8
  __int64 v263; // x9
  __int64 v264; // x8
  _QWORD *v265; // x1
  __int64 v266; // x8
  unsigned __int8 *v267; // x0
  unsigned __int8 *v268; // x21
  __int64 v269; // x9
  __int64 v270; // x8
  unsigned __int8 *v271; // x1
  __int64 v272; // x8
  __int64 v273; // x9
  __int64 v274; // x8
  _QWORD *v275; // x1
  __int64 v276; // x8
  unsigned __int8 *v277; // x0
  _QWORD *v278; // x0
  int v279; // w8
  unsigned __int8 *v280; // x0
  unsigned __int64 v281; // x8
  __int64 v282; // x9
  int v284; // w9
  unsigned __int64 v285; // x10
  int v286; // w9
  unsigned __int8 *v287; // x1
  char v288; // [xsp+0h] [xbp-C0h]
  _DWORD v289[3]; // [xsp+10h] [xbp-B0h] BYREF
  int v290; // [xsp+1Ch] [xbp-A4h]
  unsigned __int8 *v291; // [xsp+20h] [xbp-A0h] BYREF
  unsigned __int8 v292[8]; // [xsp+28h] [xbp-98h] BYREF
  void *v293; // [xsp+30h] [xbp-90h] BYREF
  void *v294; // [xsp+38h] [xbp-88h]
  void *v295; // [xsp+40h] [xbp-80h]
  char v296[8]; // [xsp+48h] [xbp-78h] BYREF
  void *v297; // [xsp+50h] [xbp-70h] BYREF
  __int64 v298; // [xsp+58h] [xbp-68h]
  __int64 v299; // [xsp+60h] [xbp-60h]
  int8x16x2_t v300; // 0:q0.32
  int8x16x2_t v301; // 0:q0.32
  int8x16x2_t v302; // 0:q0.32
  int8x16x2_t v303; // 0:q0.32
  int8x16x2_t v304; // 0:q0.32
  int8x16x2_t v305; // 0:q0.32

  v292[0] = 2;
  v294 = nullptr;
  v295 = nullptr;
  v293 = nullptr;
  v7 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 128) = 0;
  if ( !a3
    || (v9 = (pthread_mutex_t *)qword_10009D7C0,
        qmutex_lock((pthread_mutex_t *)qword_10009D7C0),
        a4 = sub_10002E59C(*(_QWORD *)(a1 + 8), a3),
        qmutex_unlock(v9),
        a4 != 0x7FFFFFFF) )
  {
    v10 = 0;
LABEL_6:
    *(_DWORD *)(a1 + 120) = a4;
    goto LABEL_7;
  }
  v10 = 0;
LABEL_99:
  set_qerrno();
  set_error_string(0);
  while ( 1 )
  {
    if ( (unsigned int)get_qerrno() != 90 )
      sub_100035078(v292);
    v275 = *(_QWORD **)(a1 + 24);
    v276 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v276 + 1) )
    {
      v275 = qvector_reserve((_QWORD *)(a1 + 24), v275, v276 + 1, 0x20u);
      *(_QWORD *)(a1 + 24) = v275;
      v276 = *(_QWORD *)(a1 + 32);
    }
    v277 = (unsigned __int8 *)&v275[4 * v276];
    *v277 = 2;
    *((_QWORD *)v277 + 2) = 0;
    *((_QWORD *)v277 + 3) = 0;
    *((_QWORD *)v277 + 1) = 0;
    ++*(_QWORD *)(a1 + 32);
    move_idcv(v277, v292);
LABEL_443:
    sub_100034CB4(a1, *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
LABEL_444:
    v278 = *(_QWORD **)(a1 + 128);
    if ( !v278 )
      break;
    while ( !(unsigned int)sub_10002D088(v278, *(_QWORD *)(a1 + 112) - 1LL, v289) )
    {
      if ( *(_QWORD *)(a1 + 56) <= (unsigned __int64)(int)v7 )
        goto LABEL_449;
      if ( (sub_100037A3C(a1) & 1) == 0 )
      {
        if ( under_debugger != 1 )
          goto LABEL_484;
        goto LABEL_483;
      }
      v278 = *(_QWORD **)(a1 + 128);
      if ( !v278 )
        goto LABEL_449;
    }
    v279 = v289[2];
    *(_QWORD *)(a1 + 112) = v289[1];
    if ( v279 == 1 )
    {
      v286 = *(_DWORD *)(a1 + 100);
      v285 = (unsigned int)(v286 + v290);
      if ( v286 + v290 < 0 || (v281 = *(_QWORD *)(a1 + 32), v281 <= v285) )
      {
        if ( under_debugger != 1 )
        {
          v154 = 286;
          goto LABEL_485;
        }
        goto LABEL_483;
      }
      goto LABEL_466;
    }
    if ( v279 == 2 )
    {
      v284 = *(_DWORD *)(a1 + 96);
      v285 = (unsigned int)(v284 + v290);
      if ( v284 + v290 < 0 || (v281 = *(_QWORD *)(a1 + 32), v281 <= v285) )
      {
        if ( under_debugger != 1 )
        {
          v154 = 287;
          goto LABEL_485;
        }
        goto LABEL_483;
      }
LABEL_466:
      v282 = *(_QWORD *)(a1 + 24);
      v280 = (unsigned __int8 *)(v282 + 32 * v285);
      v291 = v280;
      goto LABEL_467;
    }
    if ( v279 != 3 )
    {
      if ( under_debugger != 1 )
      {
        v154 = 300;
        goto LABEL_485;
      }
      goto LABEL_483;
    }
    v280 = (unsigned __int8 *)sub_10003136C(*(_QWORD *)(a1 + 8), v290);
    v291 = v280;
    v282 = *(_QWORD *)(a1 + 24);
    v281 = *(_QWORD *)(a1 + 32);
LABEL_467:
    if ( (unsigned int)move_idcv(v280, (unsigned __int8 *)(v282 + 32 * v281 - 32)) )
      goto LABEL_125;
    v287 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
    v296[0] = 2;
    v298 = 0;
    v299 = 0;
    v297 = nullptr;
    copy_idcv((unsigned __int8 *)v296, v287);
    sub_10003CBDC((__int64 *)(a1 + 24));
    if ( v296[0] != 5 )
    {
      if ( v296[0] != 7 )
        goto LABEL_125;
      v86 = v297;
      if ( !v297 )
        goto LABEL_125;
LABEL_471:
      v298 = 0;
      qfree(v86);
      goto LABEL_125;
    }
LABEL_186:
    sub_100031978((__int64)v297, (unsigned __int8 *)v296);
LABEL_125:
    if ( (*(_BYTE *)(a1 + 144) & 1) == 0 && (callui(27) & 1) != 0 )
      goto LABEL_437;
    v26 = (__int64)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
    ++*(_QWORD *)(a1 + 112);
    v79 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v79 + 124) & 1) == 0 && ++v10 >= 101 )
    {
      if ( *(_QWORD *)(v79 + 112) == -1 )
        goto LABEL_134;
      if ( !is_main_thread() )
      {
        v10 = 0;
        goto LABEL_137;
      }
      if ( time(nullptr) - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) < 3 )
      {
LABEL_134:
        v10 = 0;
        if ( (unsigned int)v26 <= 0xFF )
          goto LABEL_137;
      }
      else
      {
        sub_10001A65C();
        v10 = 0;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 124LL) = 1;
        if ( (unsigned int)v26 <= 0xFF )
          goto LABEL_137;
      }
LABEL_498:
      if ( under_debugger != 1 )
      {
        v154 = 299;
        goto LABEL_485;
      }
      while ( 1 )
      {
LABEL_483:
        __break(1u);
LABEL_484:
        v154 = 301;
LABEL_485:
        interr(v154);
      }
    }
LABEL_137:
    v80 = 96;
    switch ( (int)v26 )
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
        goto LABEL_23;
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
        a4 = v26 - 16;
        goto LABEL_6;
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
        v89 = v26 - 32;
        goto LABEL_154;
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
        v93 = v26 - 48;
        goto LABEL_162;
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
        v102 = v26 - 64;
        goto LABEL_179;
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
        v105 = v26 - 80;
        goto LABEL_183;
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
        v87 = v26 - 96;
        goto LABEL_149;
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
        v97 = v26 - 112;
        goto LABEL_170;
      case 128:
        LODWORD(v26) = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        goto LABEL_23;
      case 129:
        LODWORD(v26) = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        goto LABEL_23;
      case 130:
        a4 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        goto LABEL_6;
      case 131:
        a4 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        goto LABEL_6;
      case 132:
        v89 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        goto LABEL_154;
      case 133:
        v89 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
LABEL_154:
        *(_DWORD *)(a1 + 120) = v89;
        v90 = *(_DWORD *)(a1 + 100) + v89;
        if ( (v90 & 0x80000000) != 0LL )
          goto LABEL_488;
        v91 = *(_QWORD *)(a1 + 32);
        if ( v91 <= v90 )
          goto LABEL_488;
        if ( (unsigned int)move_idcv(
                             (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v90),
                             (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v91 - 32)) )
          continue;
        v92 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v296[0] = 2;
        v298 = 0;
        v299 = 0;
        v297 = nullptr;
        copy_idcv((unsigned __int8 *)v296, v92);
        sub_10003CBDC((__int64 *)(a1 + 24));
        if ( v296[0] == 5 )
          goto LABEL_186;
        if ( v296[0] == 7 )
        {
          v86 = v297;
          if ( v297 )
            goto LABEL_471;
        }
        goto LABEL_125;
      case 134:
        v93 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        goto LABEL_162;
      case 135:
        v93 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
LABEL_162:
        *(_DWORD *)(a1 + 120) = v93;
        v94 = *(_DWORD *)(a1 + 96) + v93;
        if ( (v94 & 0x80000000) != 0LL )
          goto LABEL_486;
        v95 = *(_QWORD *)(a1 + 32);
        if ( v95 <= v94 )
          goto LABEL_486;
        if ( (unsigned int)move_idcv(
                             (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v94),
                             (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v95 - 32)) )
          continue;
        v96 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v296[0] = 2;
        v298 = 0;
        v299 = 0;
        v297 = nullptr;
        copy_idcv((unsigned __int8 *)v296, v96);
        sub_10003CBDC((__int64 *)(a1 + 24));
        if ( v296[0] == 5 )
          goto LABEL_186;
        if ( v296[0] == 7 )
        {
          v86 = v297;
          if ( v297 )
            goto LABEL_471;
        }
        goto LABEL_125;
      case 136:
        v102 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        goto LABEL_179;
      case 137:
        v102 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
LABEL_179:
        *(_DWORD *)(a1 + 120) = v102;
        v103 = *(_DWORD *)(a1 + 100) + v102;
        if ( (v103 & 0x80000000) == 0LL )
        {
          v104 = *(_QWORD *)(a1 + 32);
          if ( v104 > v103 )
            goto LABEL_181;
        }
        goto LABEL_488;
      case 138:
        v105 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        goto LABEL_183;
      case 139:
        v105 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
LABEL_183:
        *(_DWORD *)(a1 + 120) = v105;
        v103 = *(_DWORD *)(a1 + 96) + v105;
        if ( (v103 & 0x80000000) != 0LL )
          goto LABEL_486;
        v104 = *(_QWORD *)(a1 + 32);
        if ( v104 <= v103 )
          goto LABEL_486;
LABEL_181:
        v81 = copy_idcv(
                (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v103),
                (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v104 - 32));
        goto LABEL_139;
      case 140:
        v87 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        goto LABEL_149;
      case 141:
        v87 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
LABEL_149:
        *(_DWORD *)(a1 + 120) = v87;
        v88 = *(_DWORD *)(a1 + 100) + v87;
        if ( (v88 & 0x80000000) != 0LL || *(_QWORD *)(a1 + 32) <= v88 )
          goto LABEL_488;
        goto LABEL_172;
      case 142:
        v97 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        goto LABEL_170;
      case 143:
        v97 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
LABEL_170:
        *(_DWORD *)(a1 + 120) = v97;
        v88 = *(_DWORD *)(a1 + 96) + v97;
        if ( (v88 & 0x80000000) != 0LL || *(_QWORD *)(a1 + 32) <= v88 )
          goto LABEL_486;
LABEL_172:
        v98 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v88);
        goto LABEL_173;
      case 160:
        v166 = (unsigned __int8)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v82 = v166;
        goto LABEL_142;
      case 161:
        v163 = (unsigned __int16)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v82 = v163;
        goto LABEL_142;
      case 162:
        v155 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v156 = *(_QWORD *)(a1 + 112) + 1LL;
        goto LABEL_297;
      case 163:
        v155 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v156 = *(_QWORD *)(a1 + 112) + 2LL;
LABEL_297:
        *(_QWORD *)(a1 + 112) = v156;
        *(_DWORD *)(a1 + 120) = v155;
        v195 = *(_QWORD *)(a1 + 32);
        if ( v195 < v155 )
        {
          if ( under_debugger != 1 )
          {
            v154 = 285;
            goto LABEL_485;
          }
          goto LABEL_483;
        }
        if ( v155 )
        {
          v296[0] = 2;
          v298 = 0;
          v299 = 0;
          v297 = nullptr;
          sub_100029350((unsigned __int8 **)(a1 + 24), (unsigned __int8 *)(v195 - v155), (unsigned __int8 *)v296);
          if ( v296[0] == 5 )
            goto LABEL_186;
          if ( v296[0] == 7 )
          {
            v86 = v297;
            if ( v297 )
              goto LABEL_471;
          }
        }
        goto LABEL_125;
      case 164:
        v206 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
        v208 = (unsigned __int8 *)(v206 - 32);
        v207 = *(unsigned __int8 *)(v206 - 32);
        v291 = (unsigned __int8 *)(v206 - 32);
        if ( v207 != 10 )
          goto LABEL_318;
        if ( !deref_idcv(v208, 2) )
          continue;
        v207 = *v208;
LABEL_318:
        if ( v207 != 9 && v207 != 2 )
          goto LABEL_430;
        if ( *(_QWORD *)(v206 - 24) == -1 || dword_10009CA50 < 1 )
          goto LABEL_430;
        if ( !(unsigned int)move_idcv(
                              v292,
                              (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32)) )
        {
          v211 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
          v296[0] = 2;
          v298 = 0;
          v299 = 0;
          v297 = nullptr;
          copy_idcv((unsigned __int8 *)v296, v211);
          sub_10003CBDC((__int64 *)(a1 + 24));
          sub_10003C558((unsigned __int8 *)v296);
        }
        v212 = *(int *)(*(_QWORD *)(a1 + 72) + 4LL * *(_QWORD *)(a1 + 80) - 4);
        sub_10003C23C((_QWORD **)(a1 + 24), *(_QWORD *)(a1 + 24) + 32 * v212, v292);
        v213 = *(_QWORD *)(a1 + 24);
        v296[0] = 2;
        v298 = 0;
        v299 = 0;
        v297 = nullptr;
        sub_10003C39C((_QWORD **)(a1 + 24), v213 + 32 * v212 + 32, (unsigned __int8 *)v296);
        if ( v296[0] == 5 )
        {
          sub_100031978((__int64)v297, (unsigned __int8 *)v296);
        }
        else if ( v296[0] == 7 )
        {
          sub_100006228(&v297);
        }
        a4 = -dword_10009CA50;
        goto LABEL_6;
      case 165:
        v190 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        *(_DWORD *)(a1 + 120) = v190;
        v292[0] = 2;
        v293 = nullptr;
        sub_100029350((unsigned __int8 **)(a1 + 24), (unsigned __int8 *)(*(_QWORD *)(a1 + 32) + v190), v292);
        goto LABEL_125;
      case 166:
        goto LABEL_125;
      case 167:
        v188 = (unsigned int)sub_10002CD10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        v82 = v188;
        goto LABEL_142;
      case 168:
        v157 = (unsigned int)sub_10002CD10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        v158 = v157;
        v159 = (void *)(v157 + 1LL);
        v160 = qalloc(v159);
        if ( !v160 )
          continue;
        sub_10002CC3C(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112), v160, v158);
        *(_QWORD *)(a1 + 112) += v158;
        *((_BYTE *)v160 + v158) = 0;
        v292[0] = 7;
        v294 = v159;
        v295 = v159;
        v293 = v160;
        v99 = *(_QWORD **)(a1 + 24);
        v100 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v100 + 1) )
        {
          v99 = qvector_reserve((_QWORD *)(a1 + 24), v99, v100 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v99;
          v100 = *(_QWORD *)(a1 + 32);
        }
        goto LABEL_177;
      case 169:
        v173 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v296[0] = 2;
        v298 = 0;
        v299 = 0;
        v297 = nullptr;
        copy_idcv((unsigned __int8 *)v296, v173);
        v174 = *(_QWORD *)(a1 + 32);
        if ( v174 )
        {
          v175 = *(_QWORD *)(a1 + 24);
          v176 = v174 - 1;
          *(_QWORD *)(a1 + 32) = v176;
          sub_100033200((unsigned __int8 *)(v175 + 32 * v176));
        }
        if ( v296[0] == 5 )
          goto LABEL_186;
        if ( v296[0] == 7 )
        {
          v86 = v297;
          if ( v297 )
            goto LABEL_471;
        }
        goto LABEL_125;
      case 170:
      case 212:
        v106 = *(_QWORD **)(a1 + 72);
        v107 = *(_DWORD *)(a1 + 32) - ((_DWORD)v26 == 212);
        v108 = *(_QWORD *)(a1 + 80);
        if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)(v108 + 1) )
        {
          v106 = qvector_reserve((_QWORD *)(a1 + 72), v106, v108 + 1, 4u);
          *(_QWORD *)(a1 + 72) = v106;
          v108 = *(_QWORD *)(a1 + 80);
        }
        *((_DWORD *)v106 + v108) = v107;
        ++*(_QWORD *)(a1 + 80);
        goto LABEL_125;
      case 171:
        v143 = sub_10002CD10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        sub_10002D7F8(a1, (__int64)v143, v144, v145, v146, v147, v148, v149, v288);
        goto LABEL_125;
      case 172:
      case 173:
        v109 = sub_10002CD10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        v110 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
        v291 = (unsigned __int8 *)(v110 - 32);
        if ( !(unsigned int)sub_100039B7C((unsigned __int8 *)(v110 - 32)) )
          continue;
        v117 = *(_QWORD *)(v110 - 24);
        if ( (_DWORD)v26 == 173 )
        {
          v117 = v117 == 0;
          *(_QWORD *)(v110 - 24) = v117;
        }
        if ( v117 )
          sub_10002D7F8(a1, (__int64)v109, v111, v112, v113, v114, v115, v116, v288);
        v118 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v296[0] = 2;
        v298 = 0;
        v299 = 0;
        v297 = nullptr;
        copy_idcv((unsigned __int8 *)v296, v118);
        v119 = *(_QWORD *)(a1 + 32);
        if ( v119 )
        {
          v120 = *(_QWORD *)(a1 + 24);
          v121 = v119 - 1;
          *(_QWORD *)(a1 + 32) = v121;
          sub_100033200((unsigned __int8 *)(v120 + 32 * v121));
        }
        if ( v296[0] == 5 )
          goto LABEL_186;
        if ( v296[0] == 7 )
        {
          v86 = v297;
          if ( v297 )
            goto LABEL_471;
        }
        goto LABEL_125;
      case 174:
        v178 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
        v291 = (unsigned __int8 *)(v178 - 32);
        if ( (unsigned int)idcv_string((unsigned __int8 *)(v178 - 32), v301, v71, v72, v73, v74, v75, v76, v77) )
          continue;
        v179 = &byte_100075A30;
        if ( *(_QWORD *)(v178 - 16) )
          v179 = *(char **)(v178 - 24);
        v180 = (pthread_mutex_t *)qword_10009D7C0;
        qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
        *(_DWORD *)(a1 + 120) = sub_10002E59C(*(_QWORD *)(a1 + 8), v179);
        qmutex_unlock(v180);
        if ( *(_DWORD *)(a1 + 120) == 0x7FFFFFFF )
        {
          v181 = *(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 136);
          if ( !v181 )
            goto LABEL_99;
          v293 = (void *)(**v181)(v181, v179);
          if ( v293 == (void *)-1LL )
            goto LABEL_99;
          copy_idcv((unsigned __int8 *)(v178 - 32), v292);
        }
        else
        {
          sub_1000312E4((unsigned __int8 *)(v178 - 32));
          *(_BYTE *)(v178 - 32) = 6;
          *(_DWORD *)(v178 - 24) = *(_DWORD *)(a1 + 120);
        }
        goto LABEL_125;
      case 175:
        if ( !(unsigned int)sub_100037A3C(a1) )
          continue;
        if ( *(_QWORD *)(a1 + 56) > (unsigned __int64)(int)v7 )
          goto LABEL_125;
        if ( !a2 )
        {
          sub_1000361B4(a1);
          goto LABEL_90;
        }
        if ( (unsigned int)move_idcv(a2, (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32)) )
          continue;
        v142 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v296[0] = 2;
        v298 = 0;
        v299 = 0;
        v297 = nullptr;
        copy_idcv((unsigned __int8 *)v296, v142);
        sub_10003CBDC((__int64 *)(a1 + 24));
        sub_10003C558((unsigned __int8 *)v296);
        v66 = 1;
        goto LABEL_450;
      case 176:
      case 177:
      case 178:
      case 179:
      case 180:
      case 181:
      case 182:
      case 183:
      case 184:
      case 185:
      case 186:
      case 187:
      case 188:
      case 189:
      case 190:
      case 191:
      case 200:
      case 201:
      case 202:
      case 203:
      case 204:
      case 205:
      case 206:
      case 208:
      case 209:
        v81 = sub_100038034((__int64 *)(a1 + 24), v26, v72, v73, v74, v75, v76, v77, v301);
        goto LABEL_139;
      case 192:
        v140 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v141 = *(_QWORD *)(a1 + 112) + 1LL;
        goto LABEL_362;
      case 193:
        v140 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v141 = *(_QWORD *)(a1 + 112) + 2LL;
LABEL_362:
        *(_QWORD *)(a1 + 112) = v141;
        v189 = *(_DWORD *)(a1 + 100) + v140;
        if ( (v189 & 0x80000000) == 0LL && *(_QWORD *)(a1 + 32) > v189 )
          goto LABEL_364;
        goto LABEL_488;
      case 194:
        v167 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v168 = *(_QWORD *)(a1 + 112) + 1LL;
        goto LABEL_288;
      case 195:
        v167 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v168 = *(_QWORD *)(a1 + 112) + 2LL;
LABEL_288:
        *(_QWORD *)(a1 + 112) = v168;
        v189 = *(_DWORD *)(a1 + 96) + v167;
        if ( (v189 & 0x80000000) != 0LL || *(_QWORD *)(a1 + 32) <= v189 )
          goto LABEL_486;
LABEL_364:
        v134 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v189);
        goto LABEL_365;
      case 196:
        v169 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v170 = *(_QWORD *)(a1 + 112) + 1LL;
        goto LABEL_271;
      case 197:
        v169 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v170 = *(_QWORD *)(a1 + 112) + 2LL;
LABEL_271:
        *(_QWORD *)(a1 + 112) = v170;
        v177 = *(_DWORD *)(a1 + 100) + v169;
        if ( (v177 & 0x80000000) == 0LL && *(_QWORD *)(a1 + 32) > v177 )
          goto LABEL_353;
LABEL_488:
        if ( under_debugger == 1 )
          goto LABEL_483;
        v154 = 286;
        goto LABEL_485;
      case 198:
        v161 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v162 = *(_QWORD *)(a1 + 112) + 1LL;
        goto LABEL_351;
      case 199:
        v161 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v162 = *(_QWORD *)(a1 + 112) + 2LL;
LABEL_351:
        *(_QWORD *)(a1 + 112) = v162;
        v177 = *(_DWORD *)(a1 + 96) + v161;
        if ( (v177 & 0x80000000) != 0LL || *(_QWORD *)(a1 + 32) <= v177 )
        {
LABEL_486:
          if ( under_debugger != 1 )
          {
            v154 = 287;
            goto LABEL_485;
          }
          goto LABEL_483;
        }
LABEL_353:
        v198 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v177);
LABEL_354:
        v291 = v198;
        v241 = (int16x4_t *)deref_idcv(v198, 0);
        if ( !v241 )
          continue;
        v242 = v241->u8[0];
        if ( v242 == 9 )
          goto LABEL_358;
        v243 = 1;
        if ( v242 == 3 )
        {
LABEL_399:
          eadd((unsigned __int16 *)&v241[1], (unsigned __int16 *)&xmmword_100087350, v241 + 1, v243, v305);
        }
        else
        {
          if ( v242 != 2 )
            goto LABEL_437;
LABEL_358:
          v78 = *(_QWORD *)&v241[1] - 1LL;
LABEL_124:
          v241[1] = (int16x4_t)v78;
        }
        goto LABEL_125;
      case 210:
        v292[0] = 3;
        sub_10002CC3C(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112), &v293, 16);
        *(_QWORD *)(a1 + 112) += 16LL;
        v296[0] = 2;
        v298 = 0;
        v299 = 0;
        v297 = nullptr;
        copy_idcv((unsigned __int8 *)v296, v292);
        v137 = *(_QWORD **)(a1 + 24);
        v138 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v138 + 1) )
        {
          v137 = qvector_reserve((_QWORD *)(a1 + 24), v137, v138 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v137;
          v138 = *(_QWORD *)(a1 + 32);
        }
        v139 = (unsigned __int8 *)&v137[4 * v138];
        *v139 = 2;
        *((_QWORD *)v139 + 2) = 0;
        *((_QWORD *)v139 + 3) = 0;
        *((_QWORD *)v139 + 1) = 0;
        copy_idcv(v139, (unsigned __int8 *)v296);
        ++*(_QWORD *)(a1 + 32);
        if ( v296[0] == 5 )
          goto LABEL_186;
        if ( v296[0] == 7 )
        {
          v86 = v297;
          if ( v297 )
            goto LABEL_471;
        }
        goto LABEL_125;
      case 211:
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) == 4 )
          v193 = 9;
        else
          v193 = 2;
        v194 = sub_10002CD54(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 8LL;
        v292[0] = v193;
        v293 = v194;
        v296[0] = 2;
        v298 = 0;
        v299 = 0;
        v297 = nullptr;
        copy_idcv((unsigned __int8 *)v296, v292);
        v265 = *(_QWORD **)(a1 + 24);
        v266 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v266 + 1) )
        {
          v265 = qvector_reserve((_QWORD *)(a1 + 24), v265, v266 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v265;
          v266 = *(_QWORD *)(a1 + 32);
        }
        v267 = (unsigned __int8 *)&v265[4 * v266];
        *v267 = 2;
        *((_QWORD *)v267 + 2) = 0;
        *((_QWORD *)v267 + 3) = 0;
        *((_QWORD *)v267 + 1) = 0;
        copy_idcv(v267, (unsigned __int8 *)v296);
        ++*(_QWORD *)(a1 + 32);
        if ( v296[0] == 5 )
          goto LABEL_186;
        if ( v296[0] == 7 )
        {
          v86 = v297;
          if ( v297 )
            goto LABEL_471;
        }
        goto LABEL_125;
      case 213:
        v239 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v240 = *(_QWORD *)(a1 + 112) + 1LL;
        goto LABEL_371;
      case 214:
        v239 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v240 = *(_QWORD *)(a1 + 112) + 2LL;
LABEL_371:
        *(_QWORD *)(a1 + 112) = v240;
        *(_DWORD *)(a1 + 120) = v239;
        v98 = (unsigned __int8 *)sub_10003136C(*(_QWORD *)(a1 + 8), v239);
        goto LABEL_173;
      case 215:
        v191 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v192 = *(_QWORD *)(a1 + 112) + 1LL;
        goto LABEL_373;
      case 216:
        v191 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v192 = *(_QWORD *)(a1 + 112) + 2LL;
LABEL_373:
        *(_QWORD *)(a1 + 112) = v192;
        *(_DWORD *)(a1 + 120) = v191;
        v245 = (unsigned __int8 *)sub_10003136C(*(_QWORD *)(a1 + 8), v191);
        if ( (unsigned int)move_idcv(v245, (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32)) )
          continue;
        v246 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v296[0] = 2;
        v298 = 0;
        v299 = 0;
        v297 = nullptr;
        copy_idcv((unsigned __int8 *)v296, v246);
        sub_10003CBDC((__int64 *)(a1 + 24));
        if ( v296[0] == 5 )
          goto LABEL_186;
        if ( v296[0] == 7 )
        {
          v86 = v297;
          if ( v297 )
            goto LABEL_471;
        }
        goto LABEL_125;
      case 217:
        v135 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v136 = *(_QWORD *)(a1 + 112) + 1LL;
        goto LABEL_386;
      case 218:
        v135 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        v136 = *(_QWORD *)(a1 + 112) + 2LL;
LABEL_386:
        *(_QWORD *)(a1 + 112) = v136;
        *(_DWORD *)(a1 + 120) = v135;
        v254 = (unsigned __int8 *)sub_10003136C(*(_QWORD *)(a1 + 8), v135);
        v81 = copy_idcv(v254, (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32));
        goto LABEL_139;
      case 219:
        v164 = *(_QWORD *)(a1 + 8);
        v165 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v134 = (unsigned __int8 *)sub_10003136C(v164, v165);
        goto LABEL_365;
      case 220:
        v132 = *(_QWORD *)(a1 + 8);
        v133 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v134 = (unsigned __int8 *)sub_10003136C(v132, v133);
LABEL_365:
        v291 = v134;
        v241 = (int16x4_t *)deref_idcv(v134, 0);
        if ( !v241 )
          continue;
        v244 = v241->u8[0];
        if ( v244 == 9 )
          goto LABEL_123;
        if ( v244 == 3 )
        {
          v243 = 0;
          goto LABEL_399;
        }
        if ( v244 != 2 )
          goto LABEL_437;
LABEL_123:
        v78 = *(_QWORD *)&v241[1] + 1LL;
        goto LABEL_124;
      case 221:
        v199 = *(_QWORD *)(a1 + 8);
        v200 = (unsigned int)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v198 = (unsigned __int8 *)sub_10003136C(v199, v200);
        goto LABEL_354;
      case 222:
        v196 = *(_QWORD *)(a1 + 8);
        v197 = (unsigned int)sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v198 = (unsigned __int8 *)sub_10003136C(v196, v197);
        goto LABEL_354;
      case 223:
        set_qerrno();
        goto LABEL_443;
      case 224:
      case 225:
      case 226:
      case 227:
      case 228:
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
        v82 = (unsigned int)(v26 - 224);
LABEL_142:
        v293 = (void *)v82;
        v292[0] = 2;
        v296[0] = 2;
        v298 = 0;
        v299 = 0;
        v297 = nullptr;
        copy_idcv((unsigned __int8 *)v296, v292);
        v83 = *(_QWORD **)(a1 + 24);
        v84 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v84 + 1) )
        {
          v83 = qvector_reserve((_QWORD *)(a1 + 24), v83, v84 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v83;
          v84 = *(_QWORD *)(a1 + 32);
        }
        v85 = (unsigned __int8 *)&v83[4 * v84];
        *v85 = 2;
        *((_QWORD *)v85 + 2) = 0;
        *((_QWORD *)v85 + 3) = 0;
        *((_QWORD *)v85 + 1) = 0;
        copy_idcv(v85, (unsigned __int8 *)v296);
        ++*(_QWORD *)(a1 + 32);
        if ( v296[0] == 5 )
          goto LABEL_186;
        if ( v296[0] == 7 )
        {
          v86 = v297;
          if ( v297 )
            goto LABEL_471;
        }
        goto LABEL_125;
      case 240:
        v182 = sub_10002CCCC(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        *(_DWORD *)(a1 + 120) = (_DWORD)v182;
        v292[0] = 5;
        v183 = (int *)operator new(0x20u);
        sub_10002C044(v183, v182);
        v293 = v183;
        v184 = v183[7];
        if ( (_DWORD)v184 == *(_DWORD *)(a1 + 120) )
        {
          for ( i = sub_10002DD14(v184); ; i = sub_10002DDA8(*(_QWORD *)(a1 + 8), v187) )
          {
            v186 = sub_100034860(i, (_QWORD *)(i + 32));
            *(_DWORD *)(a1 + 120) = v186;
            if ( v186 != -1 )
              break;
            v187 = *(int *)(i + 24);
            if ( !(_DWORD)v187 )
              break;
          }
LABEL_309:
          v202 = *(_QWORD *)(a1 + 24);
          v203 = *(int *)(*(_QWORD *)(a1 + 72) + 4LL * *(_QWORD *)(a1 + 80) - 4);
          v296[0] = 2;
          v298 = 0;
          v299 = 0;
          v297 = nullptr;
          v204 = (unsigned __int8 *)sub_10003C39C((_QWORD **)(a1 + 24), v202 + 32 * v203, (unsigned __int8 *)v296);
          v291 = v204;
          if ( v296[0] == 5 )
          {
            v268 = v204;
            sub_100031978((__int64)v297, (unsigned __int8 *)v296);
            v204 = v268;
          }
          else if ( v296[0] == 7 && v297 )
          {
            v298 = 0;
            v205 = v204;
            qfree(v297);
            v204 = v205;
          }
          if ( (unsigned int)move_idcv(v204, v292) )
            continue;
          a4 = *(_DWORD *)(a1 + 120);
          if ( a4 == -1 )
          {
            v269 = *(_QWORD *)(a1 + 80);
            v270 = *(int *)(*(_QWORD *)(a1 + 72) + 4 * v269 - 4);
            if ( v269 )
              *(_QWORD *)(a1 + 80) = v269 - 1;
            if ( *(_QWORD *)(a1 + 32) - 1LL != v270 )
              goto LABEL_437;
          }
          else
          {
LABEL_7:
            if ( (a4 & 0x80000000) == 0 )
            {
              v11 = 0;
              v12 = *(_QWORD **)(a1 + 8);
              v13 = 1;
              if ( v12[1] <= (unsigned __int64)(unsigned int)a4 )
                goto LABEL_81;
              v11 = 0;
              v14 = *(_QWORD *)(*v12 + 8LL * (unsigned int)a4);
              if ( !v14 )
                goto LABEL_81;
              if ( !*(_QWORD *)(v14 + 40) )
              {
                v13 = 0;
                v11 = v14;
LABEL_81:
                set_qerrno();
                if ( (v13 & 1) != 0 || *(_QWORD *)(v11 + 8) <= 1u )
                  qsnprintf(v296, 0x14u, "#%d", v61, v62, v63, v64, v65, *(_DWORD *)(a1 + 120));
                set_error_string(0);
                continue;
              }
              v15 = *(_QWORD *)(a1 + 80);
              v16 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v15 - 4);
              if ( v15 )
                *(_QWORD *)(a1 + 80) = v15 - 1;
              v17 = *(_DWORD *)(v14 + 24);
              v18 = *(_DWORD *)(a1 + 32) - v16;
              v19 = v18 - v17;
              if ( v18 < v17 && (v20 = *(_QWORD *)(v14 + 72)) != 0 && (v21 = *(_QWORD *)(v14 + 64)) != 0 )
              {
                v22 = (unsigned int)(v19 + v20);
                if ( v19 + (int)v20 >= 0 )
                {
                  v20 = (int)v20;
                  if ( (int)v20 <= v22 )
                    v20 = (unsigned int)(v19 + v20);
                  v23 = v20 - v22 + 1;
                  for ( j = (unsigned __int8 *)(v21 + 32 * v22); --v23; j = v25 )
                  {
                    v25 = j + 32;
                    sub_100028FEC((_QWORD *)(a1 + 24), j);
                  }
                  if ( *(_DWORD *)(v14 + 24) != v17 )
                    goto LABEL_99;
                }
              }
              else if ( *(_DWORD *)(v14 + 24) != v18 )
              {
                goto LABEL_99;
              }
              v45 = (pthread_mutex_t *)qword_10009D7C0;
              qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
              v46 = *(_DWORD *)(v14 + 136);
              if ( v46 == -1 )
              {
                set_error_string(0);
                set_qerrno();
                qmutex_unlock(v45);
                continue;
              }
              *(_DWORD *)(v14 + 136) = v46 + 1;
              qmutex_unlock(v45);
              v47 = *(_QWORD **)(a1 + 48);
              v48 = *(_QWORD *)(a1 + 56);
              v49 = v48 + 1;
              if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v48 + 1) )
              {
                v47 = qvector_reserve((_QWORD *)(a1 + 48), v47, v49, 0x18u);
                *(_QWORD *)(a1 + 48) = v47;
                v48 = *(_QWORD *)(a1 + 56);
                v49 = v48 + 1;
              }
              v50 = &v47[3 * v48];
              *(_QWORD *)(a1 + 56) = v49;
              *((_DWORD *)v50 + 2) = *(_QWORD *)(a1 + 112);
              *v50 = *(_QWORD *)(a1 + 104);
              *((_DWORD *)v50 + 3) = *(_DWORD *)(a1 + 96);
              *((_DWORD *)v50 + 4) = *(_DWORD *)(a1 + 100);
              v51 = *(_QWORD *)(a1 + 32);
              *(_DWORD *)(a1 + 96) = v16;
              *(_DWORD *)(a1 + 100) = v51;
              *(_QWORD *)(a1 + 128) = v14 + 32;
              *(_QWORD *)(a1 + 104) = v14;
              *(_QWORD *)(a1 + 112) = 0;
              goto LABEL_125;
            }
            LODWORD(v26) = -a4;
LABEL_23:
            *(_DWORD *)(a1 + 120) = v26;
            v10 += 200;
            if ( qword_10009CA00 <= (unsigned __int64)(int)v26 )
              goto LABEL_437;
            v292[0] = 2;
            v293 = nullptr;
            v27 = &off_10009CA08[5 * (int)v26];
            if ( !v27 )
              goto LABEL_437;
            v28 = sub_10002E694(v27[2], (char *)v289);
            v36 = v28;
            v37 = *(_QWORD *)(a1 + 80);
            v38 = *(int *)(*(_QWORD *)(a1 + 72) + 4 * v37 - 4);
            if ( v37 )
              *(_QWORD *)(a1 + 80) = v37 - 1;
            v39 = *(_DWORD *)(a1 + 32) - v38;
            if ( v39 < v28 )
            {
              v40 = v27[3];
              if ( v40 )
              {
                v41 = *((int *)v27 + 8);
                v42 = (unsigned int)(v41 + v39 - v28);
                if ( (int)v42 >= 0 )
                {
                  if ( v41 <= v42 )
                    v41 = (unsigned int)(v41 + v39 - v28);
                  v43 = v41 - v42 + 1;
                  for ( k = (unsigned __int8 *)&v40[32 * v42]; --v43; k = v44 )
                  {
                    v44 = k + 32;
                    sub_100028FEC((_QWORD *)(a1 + 24), k);
                  }
                }
                v39 = v36;
              }
            }
            if ( LOBYTE(v289[0]) == 1 )
            {
              v293 = (void *)v39;
            }
            else if ( v36 != v39 )
            {
              goto LABEL_86;
            }
            v52 = *((_DWORD *)v27 + 9);
            if ( (v52 & 1) != 0 && off_10009CA30 )
            {
              if ( !(unsigned int)off_10009CA30() )
                goto LABEL_87;
              v52 = *((_DWORD *)v27 + 9);
            }
            if ( (v52 & 4) == 0 && !is_main_thread() )
            {
LABEL_86:
              set_error_string(0);
LABEL_87:
              v60 = 8;
              set_qerrno();
              goto LABEL_88;
            }
            v53 = (_OWORD *)(*(_QWORD *)(a1 + 24) + 32 * v38);
            v54 = v27[2];
            if ( v39 >= 1 )
            {
              v55 = v39;
              v56 = (int16x4_t *)(*(_QWORD *)(a1 + 24) + 32 * v38);
              do
              {
                v58 = v56->u8[0];
                v59 = (unsigned __int8)*v54;
                if ( v58 != v59 )
                {
                  if ( (unsigned __int8)*v54 <= 5u )
                  {
                    if ( (unsigned __int8)*v54 <= 3u )
                    {
                      if ( v59 == 2 )
                      {
                        v57 = idcv_long((unsigned __int8 *)v56, v300, (__int64)k, v30, v31, v32, v33, v34, v35);
                      }
                      else
                      {
                        if ( v59 != 3 )
                        {
LABEL_116:
                          if ( under_debugger != 1 )
                            interr(289);
                          goto LABEL_483;
                        }
                        v57 = idcv_float(v56, v300);
                      }
                      goto LABEL_54;
                    }
                    if ( v59 != 4 )
                      goto LABEL_74;
                    v54 -= v54[1] == 0;
                  }
                  else
                  {
                    if ( (unsigned __int8)*v54 <= 8u )
                    {
                      if ( v59 != 7 )
                        goto LABEL_74;
                      v57 = idcv_string((unsigned __int8 *)v56, v300, (__int64)k, v30, v31, v32, v33, v34, v35);
                      goto LABEL_54;
                    }
                    if ( v59 == 9 )
                    {
                      v57 = idcv_int64((unsigned __int8 *)v56, v300, (__int64)k, v30, v31, v32, v33, v34, v35);
LABEL_54:
                      if ( v57 )
                        goto LABEL_75;
                      goto LABEL_55;
                    }
                    if ( v59 != 10 )
                      goto LABEL_116;
                    if ( v58 != 2 || *(_QWORD *)&v56[1] )
                      goto LABEL_74;
                  }
                }
LABEL_55:
                v56 += 4;
                ++v54;
                --v55;
              }
              while ( v55 );
            }
            if ( ((unsigned __int8)*v54 | 4) != 4 )
            {
LABEL_74:
              if ( (unsigned int)set_qerrno() )
              {
LABEL_75:
                v60 = 8;
                goto LABEL_88;
              }
            }
            if ( (*((_BYTE *)v27 + 36) & 2) != 0 )
              sub_100037D40(a1, (__int64)v27, v53, v39);
            if ( ((unsigned int (__fastcall *)(_OWORD *, unsigned __int8 *))v27[1])(v53, v292) )
              goto LABEL_87;
            v67 = *(_QWORD *)(a1 + 32);
            if ( v67 < v39 )
            {
              if ( under_debugger != 1 )
                interr(285);
              goto LABEL_483;
            }
            if ( v39 )
            {
              v296[0] = 2;
              v298 = 0;
              v299 = 0;
              v297 = nullptr;
              sub_100029350((unsigned __int8 **)(a1 + 24), (unsigned __int8 *)(v67 - v39), (unsigned __int8 *)v296);
              if ( v296[0] == 5 )
              {
                sub_100031978((__int64)v297, (unsigned __int8 *)v296);
              }
              else if ( v296[0] == 7 && v297 )
              {
                v298 = 0;
                qfree(v297);
              }
            }
            if ( *(_QWORD *)(a1 + 56) > (unsigned __int64)(int)v7 )
            {
              set_qerrno();
              v26 = (__int64)sub_10002CC88(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
              ++*(_QWORD *)(a1 + 112);
              if ( (_DWORD)v26 == 169 )
              {
                if ( v292[0] == 5 )
                {
                  sub_100031978((__int64)v293, v292);
                }
                else if ( v292[0] == 7 && v293 )
                {
                  v294 = nullptr;
                  qfree(v293);
                  v295 = nullptr;
                }
                v292[0] = 2;
                v293 = nullptr;
                v60 = 4;
                goto LABEL_88;
              }
              v68 = *(_QWORD **)(a1 + 24);
              v69 = *(_QWORD *)(a1 + 32);
              if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v69 + 1) )
              {
                v68 = qvector_reserve((_QWORD *)(a1 + 24), v68, v69 + 1, 0x20u);
                *(_QWORD *)(a1 + 24) = v68;
                v69 = *(_QWORD *)(a1 + 32);
              }
              v70 = (unsigned __int8 *)&v68[4 * v69];
              *v70 = 2;
              *((_QWORD *)v70 + 2) = 0;
              *((_QWORD *)v70 + 3) = 0;
              *((_QWORD *)v70 + 1) = 0;
              ++*(_QWORD *)(a1 + 32);
              move_idcv(v70, v292);
              goto LABEL_137;
            }
            if ( !a2 || (v60 = 8, !(unsigned int)move_idcv(a2, v292)) )
            {
LABEL_90:
              v66 = 1;
              goto LABEL_450;
            }
LABEL_88:
            if ( v60 != 4 )
              continue;
          }
          goto LABEL_125;
        }
        set_error_data(0);
LABEL_437:
        set_qerrno();
        break;
      case 241:
        v247 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
        v249 = *(unsigned __int8 *)(v247 - 32);
        v248 = (unsigned __int8 *)(v247 - 32);
        v291 = (unsigned __int8 *)(v247 - 32);
        if ( v249 != 5 )
        {
          v81 = copy_idcv(v248, v248);
          goto LABEL_139;
        }
        v250 = (_QWORD **)operator new(0x20u);
        v251 = *(_QWORD *)(v247 - 24);
        sub_10003C5FC(v250, (_QWORD *)v251);
        *((_DWORD *)v250 + 6) = 1;
        *((_DWORD *)v250 + 7) = *(_DWORD *)(v251 + 28);
        v252 = *v248;
        if ( v252 == 5 )
        {
          sub_100031978(*(_QWORD *)(v247 - 24), v248);
        }
        else if ( v252 == 7 )
        {
          v253 = *(void **)(v247 - 24);
          if ( v253 )
          {
            *(_QWORD *)(v247 - 16) = 0;
            qfree(v253);
            *(_QWORD *)(v247 - 24) = 0;
            *(_QWORD *)(v247 - 8) = 0;
          }
        }
        *(_BYTE *)(v247 - 32) = 5;
        *(_QWORD *)(v247 - 24) = v250;
        goto LABEL_125;
      case 242:
        v291 = v292;
        if ( (unsigned int)sub_100036C00((_QWORD *)a1, &v291, v72, v73, v74, v75, v76, v77, v301) )
          goto LABEL_333;
        goto LABEL_444;
      case 243:
        if ( (sub_1000370D8((_QWORD *)a1, v301, v71, v72, v73, v74, v75, v76, v77) & 1) == 0 )
          goto LABEL_444;
        goto LABEL_125;
      case 244:
        if ( !(unsigned int)sub_1000370D8((_QWORD *)a1, v301, v71, v72, v73, v74, v75, v76, v77) )
          goto LABEL_444;
        v261 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v296[0] = 2;
        v298 = 0;
        v299 = 0;
        v297 = nullptr;
        copy_idcv((unsigned __int8 *)v296, v261);
        v262 = *(_QWORD *)(a1 + 32);
        if ( v262 )
        {
          v263 = *(_QWORD *)(a1 + 24);
          v264 = v262 - 1;
          *(_QWORD *)(a1 + 32) = v264;
          sub_100033200((unsigned __int8 *)(v263 + 32 * v264));
        }
        if ( v296[0] == 5 )
          goto LABEL_186;
        if ( v296[0] == 7 )
        {
          v86 = v297;
          if ( v297 )
            goto LABEL_471;
        }
        goto LABEL_125;
      case 245:
      case 246:
        v291 = v292;
        if ( !(unsigned int)sub_100036C00((_QWORD *)a1, &v291, v72, v73, v74, v75, v76, v77, v301) )
          goto LABEL_444;
        if ( !v291 )
          goto LABEL_437;
        v122 = (int16x4_t *)deref_idcv(v291, 0);
        if ( !v122 )
          continue;
        v123 = v122->u8[0];
        if ( v123 == 2 || v123 == 9 )
        {
          v125 = v122[1];
          if ( (_DWORD)v26 == 245 )
            v126 = (int16x4_t)(*(_QWORD *)&v125 + 1LL);
          else
            v126 = (int16x4_t)(*(_QWORD *)&v125 - 1LL);
          v122[1] = v126;
        }
        else
        {
          if ( v123 != 3 )
            goto LABEL_437;
          eadd((unsigned __int16 *)&v122[1], (unsigned __int16 *)&xmmword_100087350, v122 + 1, v26 != 245, v302);
        }
LABEL_333:
        v81 = move_idcv((unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32), v292);
LABEL_139:
        if ( v81 )
          continue;
        goto LABEL_125;
      case 247:
        v291 = v292;
        if ( !(unsigned int)sub_10003731C((_QWORD *)a1, (_DWORD *)(a1 + 120), &v291, v73, v74, v75, v76, v77, v301) )
          continue;
        if ( *(_DWORD *)(a1 + 120) != -1 )
        {
          if ( !(unsigned int)move_idcv(
                                v292,
                                (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32)) )
          {
            v201 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
            v296[0] = 2;
            v298 = 0;
            v299 = 0;
            v297 = nullptr;
            copy_idcv((unsigned __int8 *)v296, v201);
            sub_10003CBDC((__int64 *)(a1 + 24));
            sub_10003C558((unsigned __int8 *)v296);
          }
          goto LABEL_309;
        }
        v208 = v291;
        v207 = *v291;
LABEL_430:
        if ( v207 != 6 )
          goto LABEL_437;
        *(_DWORD *)(a1 + 120) = *((_DWORD *)v208 + 2);
        v271 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v296[0] = 2;
        v298 = 0;
        v299 = 0;
        v297 = nullptr;
        copy_idcv((unsigned __int8 *)v296, v271);
        v272 = *(_QWORD *)(a1 + 32);
        if ( v272 )
        {
          v273 = *(_QWORD *)(a1 + 24);
          v274 = v272 - 1;
          *(_QWORD *)(a1 + 32) = v274;
          sub_100033200((unsigned __int8 *)(v273 + 32 * v274));
        }
        if ( v296[0] == 5 )
        {
          sub_100031978((__int64)v297, (unsigned __int8 *)v296);
        }
        else if ( v296[0] == 7 && v297 )
        {
          v298 = 0;
          qfree(v297);
        }
        a4 = *(_DWORD *)(a1 + 120);
        goto LABEL_7;
      case 248:
        goto LABEL_233;
      case 249:
        v80 = 100;
LABEL_233:
        v150 = *(_DWORD *)(a1 + v80);
        v151 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
        v152 = v151 - 32;
        v291 = (unsigned __int8 *)(v151 - 32);
        if ( (unsigned int)idcv_long((unsigned __int8 *)(v151 - 32), v301, v71, v72, v73, v74, v75, v76, v77) )
          continue;
        v153 = (unsigned int)(v150 + *(_DWORD *)(v151 - 24));
        if ( *(_QWORD *)(a1 + 32) > v153 )
          goto LABEL_259;
        if ( under_debugger == 1 )
          goto LABEL_483;
        v154 = 292;
        goto LABEL_485;
      case 250:
        v171 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
        v152 = v171 - 32;
        v291 = (unsigned __int8 *)(v171 - 32);
        if ( (unsigned int)idcv_long((unsigned __int8 *)(v171 - 32), v301, v71, v72, v73, v74, v75, v76, v77) )
          continue;
        v153 = *(_QWORD *)(v171 - 24);
        if ( (v153 & 0x8000000000000000LL) != 0 || v153 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL) )
        {
          if ( under_debugger != 1 )
          {
            v154 = 294;
            goto LABEL_485;
          }
          goto LABEL_483;
        }
        LODWORD(v153) = ~(_DWORD)v153;
LABEL_259:
        *(_BYTE *)v152 = 10;
        *(_QWORD *)(v152 + 8) = a1;
        *(_DWORD *)(v152 + 16) = v153;
        if ( (v153 & 0x80000000) != 0 )
        {
          v172 = sub_10003136C(*(_QWORD *)(a1 + 8), ~(_DWORD)v153);
        }
        else
        {
          if ( *(_DWORD *)a1 != 289621065 || *(_QWORD *)(a1 + 32) <= (unsigned __int64)(unsigned int)v153 )
          {
LABEL_494:
            if ( under_debugger != 1 )
              interr(293);
            goto LABEL_483;
          }
          v172 = *(_QWORD *)(a1 + 24) + 32LL * (unsigned int)v153;
        }
        if ( !v172 )
          goto LABEL_494;
        if ( *(_BYTE *)v172 == 10 )
          *(_OWORD *)(v152 + 8) = *(_OWORD *)(v172 + 8);
        goto LABEL_125;
      case 251:
        v227 = *(_QWORD *)(a1 + 32) - 4LL;
        if ( v227 < 0 )
        {
          if ( under_debugger != 1 )
            interr(296);
          goto LABEL_483;
        }
        v228 = *(_QWORD *)(a1 + 24) + 32 * v227;
        v291 = (unsigned __int8 *)(v228 + 32);
        if ( (unsigned int)idcv_long((unsigned __int8 *)(v228 + 64), v301, v71, v72, v73, v74, v75, v76, v77)
          || (unsigned int)idcv_long((unsigned __int8 *)(v228 + 96), v304, v229, v230, v231, v232, v233, v234, v235)
          || (unsigned int)set_idcv_slice(
                             (unsigned __int8 *)(v228 + 32),
                             *(_QWORD *)(v228 + 72),
                             *(_QWORD *)(v228 + 104),
                             (unsigned __int8 *)v228,
                             0,
                             v236,
                             v237,
                             v238) )
        {
          continue;
        }
        sub_1000361B4(a1);
        sub_1000361B4(a1);
        sub_10003953C((__int64 *)(a1 + 24), v292);
        sub_1000361B4(a1);
        sub_10003CC80((_QWORD **)(a1 + 24), v292);
        goto LABEL_125;
      case 252:
        v214 = *(_QWORD *)(a1 + 32) - 3LL;
        if ( v214 < 0 )
        {
          if ( under_debugger != 1 )
            interr(295);
          goto LABEL_483;
        }
        v215 = *(_QWORD *)(a1 + 24) + 32 * v214;
        v291 = (unsigned __int8 *)v215;
        if ( (unsigned int)idcv_long((unsigned __int8 *)(v215 + 32), v301, v71, v72, v73, v74, v75, v76, v77) )
          continue;
        if ( (unsigned int)idcv_long((unsigned __int8 *)(v215 + 64), v303, v216, v217, v218, v219, v220, v221, v222) )
          continue;
        get_idcv_slice(
          (unsigned __int8 *)v215,
          (unsigned __int8 *)v215,
          *(_QWORD *)(v215 + 40),
          *(_QWORD *)(v215 + 72),
          0,
          v223,
          v224,
          v225);
        if ( v226 )
          continue;
        sub_1000361B4(a1);
        sub_1000361B4(a1);
        goto LABEL_125;
      case 253:
        v98 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
LABEL_173:
        copy_idcv(v292, v98);
        if ( v292[0] == 10 && !deref_idcv(v292, 2) )
          continue;
        v99 = *(_QWORD **)(a1 + 24);
        v100 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v100 + 1) )
        {
          v99 = qvector_reserve((_QWORD *)(a1 + 24), v99, v100 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v99;
          v100 = *(_QWORD *)(a1 + 32);
        }
LABEL_177:
        v101 = (unsigned __int8 *)&v99[4 * v100];
        *v101 = 2;
        *((_QWORD *)v101 + 2) = 0;
        *((_QWORD *)v101 + 3) = 0;
        *((_QWORD *)v101 + 1) = 0;
        ++*(_QWORD *)(a1 + 32);
        move_idcv(v101, v292);
        goto LABEL_125;
      case 254:
        v255 = *(_QWORD *)(a1 + 32) - 2LL;
        if ( v255 < 0 )
        {
          if ( under_debugger != 1 )
            interr(297);
          goto LABEL_483;
        }
        v256 = *(_QWORD *)(a1 + 24) + 32 * v255;
        v291 = (unsigned __int8 *)v256;
        if ( (unsigned int)idcv_long((unsigned __int8 *)(v256 + 32), v301, v71, v72, v73, v74, v75, v76, v77) )
          continue;
        get_idcv_slice((unsigned __int8 *)v256, (unsigned __int8 *)v256, *(_QWORD *)(v256 + 40), 0, 1, v257, v258, v259);
        if ( v260 )
          continue;
        sub_1000361B4(a1);
        goto LABEL_125;
      case 255:
        v127 = *(_QWORD *)(a1 + 32) - 3LL;
        if ( v127 < 0 )
        {
          if ( under_debugger != 1 )
            interr(298);
          goto LABEL_483;
        }
        v128 = *(_QWORD *)(a1 + 24) + 32 * v127;
        v291 = (unsigned __int8 *)(v128 + 32);
        if ( (unsigned int)idcv_long((unsigned __int8 *)(v128 + 64), v301, v71, v72, v73, v74, v75, v76, v77)
          || (unsigned int)set_idcv_slice(
                             (unsigned __int8 *)(v128 + 32),
                             *(_QWORD *)(v128 + 72),
                             0,
                             (unsigned __int8 *)v128,
                             1,
                             v129,
                             v130,
                             v131) )
        {
          continue;
        }
        sub_1000361B4(a1);
        sub_10003953C((__int64 *)(a1 + 24), v292);
        sub_1000361B4(a1);
        sub_10003CC80((_QWORD **)(a1 + 24), v292);
        goto LABEL_125;
      default:
        goto LABEL_498;
    }
  }
LABEL_449:
  v66 = 0;
LABEL_450:
  if ( v292[0] == 5 )
  {
    sub_100031978((__int64)v293, v292);
  }
  else if ( v292[0] == 7 && v293 )
  {
    v294 = nullptr;
    qfree(v293);
  }
  return v66;
}
// 10003A150: conditional instruction was optimized away because w22.4==8
// 10003A224: conditional instruction was optimized away because w8.4==8
// 10003A31C: conditional instruction was optimized away because w8.4==5
// 100039FA8: variable 'v300' is possibly undefined
// 100039FA8: variable 'k' is possibly undefined
// 100039FA8: variable 'v30' is possibly undefined
// 100039FA8: variable 'v31' is possibly undefined
// 100039FA8: variable 'v32' is possibly undefined
// 100039FA8: variable 'v33' is possibly undefined
// 100039FA8: variable 'v34' is possibly undefined
// 100039FA8: variable 'v35' is possibly undefined
// 10003A104: variable 'v61' is possibly undefined
// 10003A104: variable 'v62' is possibly undefined
// 10003A104: variable 'v63' is possibly undefined
// 10003A104: variable 'v64' is possibly undefined
// 10003A104: variable 'v65' is possibly undefined
// 10003A53C: variable 'v72' is possibly undefined
// 10003A53C: variable 'v73' is possibly undefined
// 10003A53C: variable 'v74' is possibly undefined
// 10003A53C: variable 'v75' is possibly undefined
// 10003A53C: variable 'v76' is possibly undefined
// 10003A53C: variable 'v77' is possibly undefined
// 10003A53C: variable 'v301' is possibly undefined
// 10003A924: variable 'v111' is possibly undefined
// 10003A924: variable 'v112' is possibly undefined
// 10003A924: variable 'v113' is possibly undefined
// 10003A924: variable 'v114' is possibly undefined
// 10003A924: variable 'v115' is possibly undefined
// 10003A924: variable 'v116' is possibly undefined
// 10003A924: variable 'v288' is possibly undefined
// 10003AA08: variable 'v71' is possibly undefined
// 10003AA24: variable 'v129' is possibly undefined
// 10003AA24: variable 'v130' is possibly undefined
// 10003AA24: variable 'v131' is possibly undefined
// 10003AC10: variable 'v144' is possibly undefined
// 10003AC10: variable 'v145' is possibly undefined
// 10003AC10: variable 'v146' is possibly undefined
// 10003AC10: variable 'v147' is possibly undefined
// 10003AC10: variable 'v148' is possibly undefined
// 10003AC10: variable 'v149' is possibly undefined
// 10003B5AC: variable 'v303' is possibly undefined
// 10003B5AC: variable 'v216' is possibly undefined
// 10003B5AC: variable 'v217' is possibly undefined
// 10003B5AC: variable 'v218' is possibly undefined
// 10003B5AC: variable 'v219' is possibly undefined
// 10003B5AC: variable 'v220' is possibly undefined
// 10003B5AC: variable 'v221' is possibly undefined
// 10003B5AC: variable 'v222' is possibly undefined
// 10003B5C8: variable 'v223' is possibly undefined
// 10003B5C8: variable 'v224' is possibly undefined
// 10003B5C8: variable 'v225' is possibly undefined
// 10003B5CC: variable 'v226' is possibly undefined
// 10003B610: variable 'v304' is possibly undefined
// 10003B610: variable 'v229' is possibly undefined
// 10003B610: variable 'v230' is possibly undefined
// 10003B610: variable 'v231' is possibly undefined
// 10003B610: variable 'v232' is possibly undefined
// 10003B610: variable 'v233' is possibly undefined
// 10003B610: variable 'v234' is possibly undefined
// 10003B610: variable 'v235' is possibly undefined
// 10003B62C: variable 'v236' is possibly undefined
// 10003B62C: variable 'v237' is possibly undefined
// 10003B62C: variable 'v238' is possibly undefined
// 10003B984: variable 'v257' is possibly undefined
// 10003B984: variable 'v258' is possibly undefined
// 10003B984: variable 'v259' is possibly undefined
// 10003B988: variable 'v260' is possibly undefined
// 10003BA24: variable 'v305' is possibly undefined
// 10003BC10: variable 'v302' is possibly undefined
// 10002C044: using guessed type __int64 __fastcall sub_10002C044(_QWORD, _QWORD);
// 100075A30: using guessed type char byte_100075A30;
// 100087350: using guessed type __int128 xmmword_100087350;
// 10009CA00: using guessed type __int64 qword_10009CA00;
// 10009CA08: using guessed type char **off_10009CA08;
// 10009CA30: using guessed type __int64 (*off_10009CA30)(void);
// 10009CA50: using guessed type int dword_10009CA50;
// 10009D680: using guessed type __int64 (__fastcall *callui)(_QWORD);
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
// 10009D90D: using guessed type char under_debugger;
