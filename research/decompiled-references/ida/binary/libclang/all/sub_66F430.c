__int64 __fastcall sub_66F430(__int64 *a1, const __m128i *a2, __int64 a3, double a4, __m128i a5, double a6, __m128 a7)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned __int64 v12; // rbx
  __int64 v14; // rax
  unsigned int *v15; // rax
  __int64 *v16; // rbx
  __int64 m128i_i64; // r12
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *v22; // rbx
  void *v23; // r13
  __m128i v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  void *v29; // rbx
  void *v30; // r12
  __m128i v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  const __m128i *v34; // r13
  const __m128i *v35; // r12
  __int32 v36; // r13d
  int v37; // r12d
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  void *v41; // rbx
  void *v42; // r13
  __m128i v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  void *v48; // rbx
  void *v49; // r13
  __m128i si128; // rax
  __int64 v51; // rdx
  unsigned int *v52; // rax
  _QWORD *v53; // r12
  __int64 v54; // r13
  _QWORD *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  void *v59; // rbx
  void *v60; // r13
  __m128i v61; // rax
  __int64 v62; // rdx
  _QWORD *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  void *v67; // rbx
  void *v68; // r13
  __m128i v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  void *v75; // rbx
  void *v76; // r13
  __m128i v77; // rax
  __int64 v78; // rdx
  __int64 *v79; // r12
  __int64 v80; // rax
  __int64 v81; // rbx
  _WORD *v82; // rsi
  __int64 *v83; // r15
  _QWORD **v84; // rbx
  __int64 v85; // rcx
  char v86; // al
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  void *v90; // rbx
  void *v91; // r13
  __m128i v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  void *v97; // rbx
  void *v98; // r13
  __m128i v99; // rax
  __int64 v100; // rdx
  unsigned __int64 v101; // r12
  __int64 v102; // r15
  unsigned __int8 v103; // al
  __int64 v104; // r9
  unsigned __int8 v105; // r8
  unsigned __int64 v106; // r10
  __int64 v107; // rsi
  void *v108; // rcx
  __m128i v109; // xmm0
  __int64 v110; // rsi
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __m128i v114; // xmm0
  void *v115; // rbx
  void *v116; // r12
  __m128i v117; // rax
  __int64 v118; // rdx
  unsigned __int64 v119; // rax
  unsigned __int32 v120; // eax
  char *v121; // r13
  __int64 v122; // r12
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  void *v127; // rbx
  void *v128; // r13
  __m128i v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rsi
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  void *v136; // rbx
  void *v137; // r13
  __m128i v138; // rax
  __int64 v139; // rdx
  _QWORD *v140; // rax
  __int64 v141; // rax
  _QWORD *v142; // rax
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  void *v146; // rbx
  void *v147; // r13
  __m128i v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  void *v153; // rbx
  void *v154; // r13
  __m128i v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  void *v160; // rbx
  void *v161; // r13
  __m128i v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rax
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  void *v168; // rbx
  void *v169; // r13
  __m128i v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  void *v175; // rbx
  void *v176; // r13
  __m128i v177; // rax
  __int64 v178; // rdx
  __int8 v179; // al
  __int64 v180; // rdx
  unsigned int v181; // eax
  __int64 v182; // r12
  __int64 v183; // r13
  __int64 v184; // rsi
  _QWORD *v185; // r12
  __int64 v186; // r13
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  void *v190; // rbx
  void *v191; // r13
  __m128i v192; // rax
  __int64 v193; // rdx
  unsigned __int32 v194; // eax
  char *v195; // r13
  __int64 v196; // r12
  unsigned __int64 v197; // rax
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r9
  void *v201; // rbx
  void *v202; // r13
  __m128i v203; // rax
  __int64 v204; // rdx
  _QWORD *v205; // rcx
  _QWORD *v206; // r12
  _QWORD *v207; // r13
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r9
  void *v211; // rbx
  void *v212; // r12
  __m128i v213; // rax
  __int64 v214; // rdx
  unsigned __int64 v215; // r12
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // r12
  __int64 v219; // rax
  __int64 v220; // r13
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // r9
  void *v224; // rbx
  void *v225; // r13
  __m128i v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  void *v231; // rbx
  void *v232; // r13
  __m128i v233; // rax
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  void *v238; // rbx
  void *v239; // r12
  __m128i v240; // rax
  __int64 v241; // rdx
  __int64 v242; // rsi
  __int64 v243; // rcx
  __int64 v244; // r8
  __int64 v245; // r9
  void *v246; // rbx
  void *v247; // r12
  __m128i v248; // rax
  __int64 v249; // rdx
  __int64 v250; // rax
  __int64 v251; // r13
  __int64 v252; // r12
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  void *v256; // r12
  void *v257; // r13
  const __m128i **v258; // rax
  __int64 v259; // [rsp+0h] [rbp-B8h]
  __int64 v260; // [rsp+0h] [rbp-B8h]
  __m128i v261; // [rsp+0h] [rbp-B8h]
  __int64 *v262; // [rsp+18h] [rbp-A0h]
  __int64 v263; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v264; // [rsp+18h] [rbp-A0h]
  unsigned __int8 v265; // [rsp+27h] [rbp-91h]
  void *v266[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v267; // [rsp+40h] [rbp-78h]
  void *v268[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v269; // [rsp+60h] [rbp-58h]
  void *v270; // [rsp+68h] [rbp-50h]
  void *v271; // [rsp+70h] [rbp-48h]
  __int64 v272; // [rsp+88h] [rbp-30h]
  __int64 v273; // [rsp+90h] [rbp-28h]
  __int64 v274; // [rsp+A8h] [rbp-10h]

  v10 = a2->m128i_i16[0] & 0x1FF;
  v274 = v9;
  v273 = v8;
  v272 = v7;
  v12 = (unsigned __int64)a2;
  switch ( (__int16)v10 )
  {
    case 0:
      return 1;
    case 1:
    case 2:
    case 4:
    case 6:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 17:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 26:
    case 27:
    case 29:
    case 30:
    case 31:
    case 32:
    case 35:
    case 36:
    case 37:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 48:
    case 50:
    case 53:
    case 55:
    case 56:
    case 57:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 68:
    case 69:
    case 75:
    case 78:
    case 79:
    case 80:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 98:
    case 99:
    case 100:
    case 104:
    case 105:
    case 106:
    case 108:
    case 109:
    case 111:
    case 114:
    case 116:
    case 117:
    case 119:
    case 120:
    case 121:
    case 122:
    case 124:
    case 125:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 153:
    case 154:
    case 155:
    case 156:
    case 157:
    case 158:
    case 159:
    case 236:
    case 238:
    case 239:
    case 240:
    case 241:
    case 242:
    case 246:
    case 247:
    case 249:
    case 252:
    case 253:
      return sub_672BE0(a1, a2, a3);
    case 3:
    case 77:
      return sub_6757F0(a1, a2, a3);
    case 5:
      if ( (a2->m128i_i8[2] & 0x40) != 0
        && !(unsigned __int8)sub_673BB0(a1, *(_QWORD *)a2[1].m128i_i64[0], a2[1].m128i_i64[0] + 8) )
      {
        return 0;
      }
      sub_AC4830(v268);
      v48 = v270;
      v49 = v271;
      v267 = v269;
      si128 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = si128;
LABEL_59:
      if ( v48 != (void *)si128.m128i_i64[0] )
        goto LABEL_60;
LABEL_65:
      if ( v49 == (void *)si128.m128i_i64[1] )
        return 1;
LABEL_60:
      v51 = si128.m128i_i8[8] & 3;
      if ( (_DWORD)v51 )
        si128.m128i_i64[0] = sub_ACE280(v266, a2, v51, v45, v46, v47);
      while ( 1 )
      {
        a2 = *(const __m128i **)si128.m128i_i64[0];
        if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)si128.m128i_i64[0], a3) )
          return 0;
        si128.m128i_i64[1] = (__int64)v266[1];
        if ( ((__int64)v266[1] & 3) != 0 )
        {
          if ( v266[1] <= (char *)&dword_0 + 3 )
          {
            a2 = (const __m128i *)(&dword_0 + 1);
            sub_ACE0F0(v266, 1);
          }
          else
          {
            sub_ACE150(v266);
          }
          si128 = *(__m128i *)v266;
          goto LABEL_59;
        }
        si128.m128i_i64[0] = (__int64)v266[0] + 8;
        v266[0] = (void *)si128.m128i_i64[0];
        if ( v48 == (void *)si128.m128i_i64[0] )
          goto LABEL_65;
      }
    case 7:
      v33 = a2->m128i_u32[1];
      v34 = a2;
      v35 = (const __m128i *)((char *)a2 + 8 * v33);
      if ( !(_DWORD)v33 )
        goto LABEL_391;
      do
      {
        if ( !(unsigned __int8)sub_673BB0(a1, *(_QWORD *)v34[1].m128i_i64[1], v34[1].m128i_i64[1] + 8) )
          return 0;
        v34 = (const __m128i *)((char *)v34 + 8);
      }
      while ( v34 != v35 );
LABEL_391:
      sub_AC4830(v268);
      v201 = v270;
      v202 = v271;
      v267 = v269;
      v203 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = v203;
LABEL_392:
      if ( v201 != (void *)v203.m128i_i64[0] )
        goto LABEL_393;
LABEL_398:
      if ( v202 == (void *)v203.m128i_i64[1] )
        return 1;
LABEL_393:
      v204 = v203.m128i_i8[8] & 3;
      if ( (_DWORD)v204 )
        v203.m128i_i64[0] = sub_ACE280(v266, a2, v204, v198, v199, v200);
      while ( 1 )
      {
        a2 = *(const __m128i **)v203.m128i_i64[0];
        if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v203.m128i_i64[0], a3) )
          return 0;
        v203.m128i_i64[1] = (__int64)v266[1];
        if ( ((__int64)v266[1] & 3) != 0 )
        {
          if ( v266[1] <= (char *)&dword_0 + 3 )
          {
            a2 = (const __m128i *)(&dword_0 + 1);
            sub_ACE0F0(v266, 1);
          }
          else
          {
            sub_ACE150(v266);
          }
          v203 = *(__m128i *)v266;
          goto LABEL_392;
        }
        v203.m128i_i64[0] = (__int64)v266[0] + 8;
        v266[0] = (void *)v203.m128i_i64[0];
        if ( v201 == (void *)v203.m128i_i64[0] )
          goto LABEL_398;
      }
    case 15:
    case 107:
      return sub_6756D0(a1, a2, a3);
    case 16:
      return sub_6775A0(a1, a2, a3);
    case 18:
      if ( !(unsigned __int8)sub_672860(a1, a2[1].m128i_i64[0], a3) )
        return 0;
      v79 = &a2[1].m128i_i64[1];
      v80 = a2->m128i_u16[2];
      v81 = (__int64)&a2[1].m128i_i64[v80];
      if ( v80 == 1 )
        return 1;
      while ( 1 )
      {
        v82 = (_WORD *)*v79;
        if ( (*(_WORD *)*v79 & 0x1FF) == 0x1B )
          v82 = *((_WORD **)v82 + 2);
        if ( !(unsigned __int8)sub_672860(a1, v82, a3) )
          break;
        if ( (__int64 *)v81 == ++v79 )
          return 1;
      }
      return 0;
    case 24:
    case 25:
      return sub_6746C0(a1, a2, a3);
    case 28:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
      return sub_6755B0(a1, a2, a3);
    case 33:
      v71 = a2[2].m128i_i64[1];
      if ( (v71 & 6) != 4
        || (v215 = v71 & 0xFFFFFFFFFFFFFFF8LL,
            v216 = sub_798D40(v71 & 0xFFFFFFFFFFFFFFF8LL),
            v217 = sub_6C9720(v216, v215, 0),
            LODWORD(v268[0]) = a2[2].m128i_i32[1],
            HIDWORD(v268[0]) = v268[0],
            (unsigned __int8)sub_673BB0(a1, v217, v268)) )
      {
        sub_AC4830(v268);
        v75 = v270;
        v76 = v271;
        v267 = v269;
        v77 = _mm_load_si128((const __m128i *)v268);
        for ( *(__m128i *)v266 = v77; ; v77 = *(__m128i *)v266 )
        {
          if ( v75 == (void *)v77.m128i_i64[0] )
          {
LABEL_106:
            if ( v76 == (void *)v77.m128i_i64[1] )
              return 1;
          }
          v78 = v77.m128i_i8[8] & 3;
          if ( (_DWORD)v78 )
            v77.m128i_i64[0] = sub_ACE280(v266, a2, v78, v72, v73, v74);
          while ( 1 )
          {
            a2 = *(const __m128i **)v77.m128i_i64[0];
            if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v77.m128i_i64[0], a3) )
              return 0;
            v77.m128i_i64[1] = (__int64)v266[1];
            if ( ((__int64)v266[1] & 3) != 0 )
              break;
            v77.m128i_i64[0] = (__int64)v266[0] + 8;
            v266[0] = (void *)v77.m128i_i64[0];
            if ( v75 == (void *)v77.m128i_i64[0] )
              goto LABEL_106;
          }
          if ( v266[1] <= (char *)&dword_0 + 3 )
          {
            a2 = (const __m128i *)(&dword_0 + 1);
            sub_ACE0F0(v266, 1);
          }
          else
          {
            sub_ACE150(v266);
          }
        }
      }
      return 0;
    case 34:
      if ( !a2[1].m128i_i8[10] )
      {
        v63 = (_QWORD *)a2[2].m128i_i64[1];
        if ( v63 )
        {
          if ( !(unsigned __int8)sub_673BB0(a1, *v63, v63 + 1) )
            return 0;
        }
      }
      sub_AC4830(v268);
      v67 = v270;
      v68 = v271;
      v267 = v269;
      v69 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = v69;
LABEL_90:
      if ( v67 != (void *)v69.m128i_i64[0] )
        goto LABEL_91;
LABEL_96:
      if ( v68 == (void *)v69.m128i_i64[1] )
        return 1;
LABEL_91:
      v70 = v69.m128i_i8[8] & 3;
      if ( (_DWORD)v70 )
        v69.m128i_i64[0] = sub_ACE280(v266, a2, v70, v64, v65, v66);
      while ( 1 )
      {
        a2 = *(const __m128i **)v69.m128i_i64[0];
        if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v69.m128i_i64[0], a3) )
          return 0;
        v69.m128i_i64[1] = (__int64)v266[1];
        if ( ((__int64)v266[1] & 3) != 0 )
        {
          if ( v266[1] <= (char *)&dword_0 + 3 )
          {
            a2 = (const __m128i *)(&dword_0 + 1);
            sub_ACE0F0(v266, 1);
          }
          else
          {
            sub_ACE150(v266);
          }
          v69 = *(__m128i *)v266;
          goto LABEL_90;
        }
        v69.m128i_i64[0] = (__int64)v266[0] + 8;
        v266[0] = (void *)v69.m128i_i64[0];
        if ( v67 == (void *)v69.m128i_i64[0] )
          goto LABEL_96;
      }
    case 38:
      v55 = (_QWORD *)a2[1].m128i_i64[0];
      if ( v55 && !(unsigned __int8)sub_673BB0(a1, *v55, v55 + 1) )
        return 0;
      sub_AC4830(v268);
      v59 = v270;
      v60 = v271;
      v267 = v269;
      v61 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = v61;
LABEL_78:
      if ( v59 != (void *)v61.m128i_i64[0] )
        goto LABEL_79;
LABEL_84:
      if ( v60 == (void *)v61.m128i_i64[1] )
        return 1;
LABEL_79:
      v62 = v61.m128i_i8[8] & 3;
      if ( (_DWORD)v62 )
        v61.m128i_i64[0] = sub_ACE280(v266, a2, v62, v56, v57, v58);
      while ( 1 )
      {
        a2 = *(const __m128i **)v61.m128i_i64[0];
        if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v61.m128i_i64[0], a3) )
          return 0;
        v61.m128i_i64[1] = (__int64)v266[1];
        if ( ((__int64)v266[1] & 3) != 0 )
        {
          if ( v266[1] <= (char *)&dword_0 + 3 )
          {
            a2 = (const __m128i *)(&dword_0 + 1);
            sub_ACE0F0(v266, 1);
          }
          else
          {
            sub_ACE150(v266);
          }
          v61 = *(__m128i *)v266;
          goto LABEL_78;
        }
        v61.m128i_i64[0] = (__int64)v266[0] + 8;
        v266[0] = (void *)v61.m128i_i64[0];
        if ( v59 == (void *)v61.m128i_i64[0] )
          goto LABEL_84;
      }
    case 47:
      return sub_675E10(a1, a2, a3);
    case 49:
      v123 = a2[1].m128i_i64[0];
      if ( !v123 || (v123 & 4) == 0 || (v123 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        sub_AC4830(v268);
        v127 = v270;
        v128 = v271;
        v267 = v269;
        v129 = _mm_load_si128((const __m128i *)v268);
        for ( *(__m128i *)v266 = v129; ; v129 = *(__m128i *)v266 )
        {
          if ( v127 == (void *)v129.m128i_i64[0] )
          {
LABEL_194:
            if ( v128 == (void *)v129.m128i_i64[1] )
              return 1;
          }
          v130 = v129.m128i_i8[8] & 3;
          if ( (_DWORD)v130 )
            v129.m128i_i64[0] = sub_ACE280(v266, a2, v130, v124, v125, v126);
          while ( 1 )
          {
            a2 = *(const __m128i **)v129.m128i_i64[0];
            if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v129.m128i_i64[0], a3) )
              return 0;
            v129.m128i_i64[1] = (__int64)v266[1];
            if ( ((__int64)v266[1] & 3) != 0 )
              break;
            v129.m128i_i64[0] = (__int64)v266[0] + 8;
            v266[0] = (void *)v129.m128i_i64[0];
            if ( (void *)v129.m128i_i64[0] == v127 )
              goto LABEL_194;
          }
          if ( v266[1] <= (char *)&dword_0 + 3 )
          {
            a2 = (const __m128i *)(&dword_0 + 1);
            sub_ACE0F0(v266, 1);
          }
          else
          {
            sub_ACE150(v266);
          }
        }
      }
      return sub_677EF0(a1, v123 & 0xFFFFFFFFFFFFFFF8LL);
    case 51:
      if ( !(unsigned __int8)sub_674510(a1, a2[2].m128i_i64[1], a2[3].m128i_i64[0]) )
        return 0;
      sub_AC4830(v268);
      v97 = v270;
      v98 = v271;
      v267 = v269;
      v99 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = v99;
LABEL_141:
      if ( v97 != (void *)v99.m128i_i64[0] )
        goto LABEL_142;
LABEL_147:
      if ( v98 == (void *)v99.m128i_i64[1] )
        return 1;
LABEL_142:
      v100 = v99.m128i_i8[8] & 3;
      if ( (_DWORD)v100 )
        v99.m128i_i64[0] = sub_ACE280(v266, a2, v100, v94, v95, v96);
      while ( 1 )
      {
        a2 = *(const __m128i **)v99.m128i_i64[0];
        if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v99.m128i_i64[0], a3) )
          return 0;
        v99.m128i_i64[1] = (__int64)v266[1];
        if ( ((__int64)v266[1] & 3) != 0 )
        {
          if ( v266[1] <= (char *)&dword_0 + 3 )
          {
            a2 = (const __m128i *)(&dword_0 + 1);
            sub_ACE0F0(v266, 1);
          }
          else
          {
            sub_ACE150(v266);
          }
          v99 = *(__m128i *)v266;
          goto LABEL_141;
        }
        v99.m128i_i64[0] = (__int64)v266[0] + 8;
        v266[0] = (void *)v99.m128i_i64[0];
        if ( (void *)v99.m128i_i64[0] == v97 )
          goto LABEL_147;
      }
    case 52:
      return sub_674FD0(a1, a2, a3);
    case 54:
      v119 = a2[3].m128i_u64[0];
      if ( (v119 & 4) == 0 )
        return sub_672AE0(a1, v12, a3);
      if ( v119 <= 7 )
        return sub_672AE0(a1, a2, a3);
      v12 = v119 & 0xFFFFFFFFFFFFFFF8LL;
      return sub_672AE0(a1, v12, a3);
    case 58:
      if ( (a2[1].m128i_i8[3] & 0x40) != 0 )
      {
        if ( !(unsigned __int8)sub_672CC0(a1, a2[2].m128i_i64[0]) )
          return 0;
      }
      else
      {
        v205 = (_QWORD *)a2[2].m128i_i64[a2[1].m128i_i16[0] & 0x7FFF];
        if ( !(unsigned __int8)sub_673BB0(a1, *v205, v205 + 1) )
          return 0;
      }
      v83 = &a2[2].m128i_i64[(unsigned __int8)(a2[1].m128i_i8[3] & 0x40) >> 6];
      v84 = (_QWORD **)&a2[2]
          + (a2[1].m128i_i16[0] & 0x7FFF)
          - ((unsigned int)((a2[1].m128i_i8[3] & 0x40) == 0)
           - 1)
          + ((a2[1].m128i_i8[3] & 0x40) == 0);
      v262 = &v83[a2[1].m128i_i16[0] & 0x7FFF];
      if ( v83 == v262 )
        return 1;
      while ( 1 )
      {
        v85 = *v83;
        if ( *v84 )
        {
          v259 = *v83;
          v86 = sub_673BB0(a1, **v84, *v84 + 1);
          v85 = v259;
          if ( !v86 )
            break;
        }
        if ( !(unsigned __int8)sub_672860(a1, v85, a3) )
          return 0;
        ++v83;
        ++v84;
        if ( v262 == v83 )
          return 1;
      }
      return 0;
    case 66:
      if ( !(unsigned __int8)sub_672860(a1, a2[2].m128i_i64[0], a3) )
        return 0;
      sub_AC4830(v268);
      v90 = v270;
      v91 = v271;
      v267 = v269;
      v92 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = v92;
LABEL_130:
      if ( v90 != (void *)v92.m128i_i64[0] )
        goto LABEL_131;
LABEL_136:
      if ( v91 == (void *)v92.m128i_i64[1] )
        return 1;
LABEL_131:
      v93 = v92.m128i_i8[8] & 3;
      if ( (_DWORD)v93 )
        v92.m128i_i64[0] = sub_ACE280(v266, a2, v93, v87, v88, v89);
      while ( 1 )
      {
        a2 = *(const __m128i **)v92.m128i_i64[0];
        if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v92.m128i_i64[0], a3) )
          return 0;
        v92.m128i_i64[1] = (__int64)v266[1];
        if ( ((__int64)v266[1] & 3) != 0 )
        {
          if ( v266[1] <= (char *)&dword_0 + 3 )
          {
            a2 = (const __m128i *)(&dword_0 + 1);
            sub_ACE0F0(v266, 1);
          }
          else
          {
            sub_ACE150(v266);
          }
          v92 = *(__m128i *)v266;
          goto LABEL_130;
        }
        v92.m128i_i64[0] = (__int64)v266[0] + 8;
        v266[0] = (void *)v92.m128i_i64[0];
        if ( (void *)v92.m128i_i64[0] == v90 )
          goto LABEL_136;
      }
    case 67:
      v101 = a2[3].m128i_u32[0];
      break;
    case 70:
      if ( !(unsigned __int8)sub_674510(a1, a2[1].m128i_i64[0], a2[1].m128i_i64[1])
        || !(unsigned __int8)sub_675910(a1, a2[2].m128i_i64[0], a2[3].m128i_i64[0]) )
      {
        return 0;
      }
      if ( (a2->m128i_i8[2] & 8) == 0 )
        goto LABEL_447;
      if ( !a2[3].m128i_i32[2] )
        goto LABEL_447;
      v120 = a2[4].m128i_u32[1];
      if ( !v120 )
        goto LABEL_447;
      v121 = &a2[4].m128i_i8[8];
      v122 = (__int64)&a2[2 * v120 + 4].m128i_i64[1];
      do
      {
        if ( !(unsigned __int8)sub_674590(a1, v121) )
          return 0;
        v121 += 32;
      }
      while ( v121 != (char *)v122 );
LABEL_447:
      sub_AC4830(v268);
      v231 = v270;
      v232 = v271;
      v267 = v269;
      v233 = _mm_load_si128((const __m128i *)v268);
      for ( *(__m128i *)v266 = v233; ; v233 = *(__m128i *)v266 )
      {
        if ( v231 == (void *)v233.m128i_i64[0] )
        {
LABEL_454:
          if ( v232 == (void *)v233.m128i_i64[1] )
            return 1;
        }
        v234 = v233.m128i_i8[8] & 3;
        if ( (_DWORD)v234 )
          v233.m128i_i64[0] = sub_ACE280(v266, a2, v234, v228, v229, v230);
        while ( 1 )
        {
          a2 = *(const __m128i **)v233.m128i_i64[0];
          if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v233.m128i_i64[0], a3) )
            return 0;
          v233.m128i_i64[1] = (__int64)v266[1];
          if ( ((__int64)v266[1] & 3) != 0 )
            break;
          v233.m128i_i64[0] = (__int64)v266[0] + 8;
          v266[0] = (void *)v233.m128i_i64[0];
          if ( v231 == (void *)v233.m128i_i64[0] )
            goto LABEL_454;
        }
        if ( v266[1] <= (char *)&dword_0 + 3 )
        {
          a2 = (const __m128i *)(&dword_0 + 1);
          sub_ACE0F0(v266, 1);
        }
        else
        {
          sub_ACE150(v266);
        }
      }
    case 71:
    case 73:
    case 74:
      return sub_672860(a1, a2[1].m128i_i64[1], a3);
    case 72:
      v261 = 0;
      if ( (a2->m128i_i8[2] & 8) != 0 )
        v261 = _mm_loadu_si128(a2 + 2);
      if ( !(unsigned __int8)sub_674510(a1, v261.m128i_i64[0], v261.m128i_i64[1])
        || !(unsigned __int8)sub_675910(a1, *(_QWORD *)(a2[1].m128i_i64[0] + 40), a2[1].m128i_i64[1]) )
      {
        return 0;
      }
      v179 = a2->m128i_i8[2];
      if ( (v179 & 0x10) == 0 )
        goto LABEL_460;
      v180 = 16LL * ((v179 & 8) != 0) + 8LL * ((v179 & 0x20) != 0);
      if ( !*(__int32 *)((char *)a2[2].m128i_i32 + v180) )
        goto LABEL_460;
      v181 = *(unsigned __int32 *)((char *)&a2[2].m128i_u32[3] + v180);
      v182 = (__int64)a2[3].m128i_i64 + v180;
      if ( !v181 )
        goto LABEL_460;
      v183 = v182 + 32LL * v181;
      while ( (unsigned __int8)sub_674590(a1, v182) )
      {
        v182 += 32;
        if ( v182 == v183 )
        {
LABEL_460:
          sub_AC4830(v268);
          v238 = v270;
          v239 = v271;
          v267 = v269;
          v240 = _mm_load_si128((const __m128i *)v268);
          for ( *(__m128i *)v266 = v240; ; v240 = *(__m128i *)v266 )
          {
            if ( v238 == (void *)v240.m128i_i64[0] )
            {
LABEL_467:
              if ( v239 == (void *)v240.m128i_i64[1] )
                return 1;
            }
            v241 = v240.m128i_i8[8] & 3;
            if ( (_DWORD)v241 )
              v240.m128i_i64[0] = sub_ACE280(v266, a2, v241, v235, v236, v237);
            while ( 1 )
            {
              a2 = *(const __m128i **)v240.m128i_i64[0];
              if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v240.m128i_i64[0], a3) )
                return 0;
              v240.m128i_i64[1] = (__int64)v266[1];
              if ( ((__int64)v266[1] & 3) != 0 )
                break;
              v240.m128i_i64[0] = (__int64)v266[0] + 8;
              v266[0] = (void *)v240.m128i_i64[0];
              if ( v238 == (void *)v240.m128i_i64[0] )
                goto LABEL_467;
            }
            if ( v266[1] <= (char *)&dword_0 + 3 )
            {
              a2 = (const __m128i *)(&dword_0 + 1);
              sub_ACE0F0(v266, 1);
            }
            else
            {
              sub_ACE150(v266);
            }
          }
        }
      }
      return 0;
    case 76:
      if ( !(unsigned __int8)sub_677500(a1, a2[1].m128i_i64[0]) )
        return 0;
      sub_AC4830(v268);
      v136 = v270;
      v137 = v271;
      v267 = v269;
      v138 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = v138;
LABEL_203:
      if ( v136 != (void *)v138.m128i_i64[0] )
        goto LABEL_204;
      while ( 1 )
      {
        if ( v137 == (void *)v138.m128i_i64[1] )
          return 1;
LABEL_204:
        v139 = v138.m128i_i8[8] & 3;
        if ( (_DWORD)v139 )
          v138.m128i_i64[0] = sub_ACE280(v266, a2, v139, v133, v134, v135);
        do
        {
          a2 = *(const __m128i **)v138.m128i_i64[0];
          if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v138.m128i_i64[0], a3) )
            return 0;
          v138.m128i_i64[1] = (__int64)v266[1];
          if ( ((__int64)v266[1] & 3) != 0 )
          {
            if ( v266[1] <= (char *)&dword_0 + 3 )
            {
              a2 = (const __m128i *)(&dword_0 + 1);
              sub_ACE0F0(v266, 1);
            }
            else
            {
              sub_ACE150(v266);
            }
            v138 = *(__m128i *)v266;
            goto LABEL_203;
          }
          v138.m128i_i64[0] = (__int64)v266[0] + 8;
          v266[0] = (void *)v138.m128i_i64[0];
        }
        while ( v136 != (void *)v138.m128i_i64[0] );
      }
    case 95:
    case 97:
      return sub_674870(a1, a2, a3);
    case 96:
      if ( !(unsigned __int8)sub_673BB0(
                               a1,
                               *(_QWORD *)(a2[1].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL),
                               (a2[1].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) + 8) )
        return 0;
      sub_AC4830(v268);
      v153 = v270;
      v154 = v271;
      v267 = v269;
      v155 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = v155;
LABEL_233:
      if ( v153 != (void *)v155.m128i_i64[0] )
        goto LABEL_234;
      while ( 1 )
      {
        if ( v154 == (void *)v155.m128i_i64[1] )
          return 1;
LABEL_234:
        v156 = v155.m128i_i8[8] & 3;
        if ( (_DWORD)v156 )
          v155.m128i_i64[0] = sub_ACE280(v266, a2, v156, v150, v151, v152);
        do
        {
          a2 = *(const __m128i **)v155.m128i_i64[0];
          if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v155.m128i_i64[0], a3) )
            return 0;
          v155.m128i_i64[1] = (__int64)v266[1];
          if ( ((__int64)v266[1] & 3) != 0 )
          {
            if ( v266[1] <= (char *)&dword_0 + 3 )
            {
              a2 = (const __m128i *)(&dword_0 + 1);
              sub_ACE0F0(v266, 1);
            }
            else
            {
              sub_ACE150(v266);
            }
            v155 = *(__m128i *)v266;
            goto LABEL_233;
          }
          v155.m128i_i64[0] = (__int64)v266[0] + 8;
          v266[0] = (void *)v155.m128i_i64[0];
        }
        while ( v153 != (void *)v155.m128i_i64[0] );
      }
    case 101:
      if ( !(unsigned __int8)sub_673BB0(a1, *(_QWORD *)a2[1].m128i_i64[0], a2[1].m128i_i64[0] + 8) )
        return 0;
      sub_AC4830(v268);
      v160 = v270;
      v161 = v271;
      v267 = v269;
      v162 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = v162;
LABEL_243:
      if ( v160 != (void *)v162.m128i_i64[0] )
        goto LABEL_244;
      while ( 1 )
      {
        if ( v161 == (void *)v162.m128i_i64[1] )
          return 1;
LABEL_244:
        v163 = v162.m128i_i8[8] & 3;
        if ( (_DWORD)v163 )
          v162.m128i_i64[0] = sub_ACE280(v266, a2, v163, v157, v158, v159);
        do
        {
          a2 = *(const __m128i **)v162.m128i_i64[0];
          if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v162.m128i_i64[0], a3) )
            return 0;
          v162.m128i_i64[1] = (__int64)v266[1];
          if ( ((__int64)v266[1] & 3) != 0 )
          {
            if ( v266[1] <= (char *)&dword_0 + 3 )
            {
              a2 = (const __m128i *)(&dword_0 + 1);
              sub_ACE0F0(v266, 1);
            }
            else
            {
              sub_ACE150(v266);
            }
            v162 = *(__m128i *)v266;
            goto LABEL_243;
          }
          v162.m128i_i64[0] = (__int64)v266[0] + 8;
          v266[0] = (void *)v162.m128i_i64[0];
        }
        while ( (void *)v162.m128i_i64[0] != v160 );
      }
    case 102:
      sub_8C11F0(v268, a2);
      return (unsigned __int8)sub_672CC0(a1, v268[1]) && (unsigned __int8)sub_672CC0(a1, v269);
    case 103:
      if ( !(unsigned __int8)sub_674510(a1, a2[2].m128i_i64[0], a2[2].m128i_i64[1]) )
        return 0;
      v140 = (_QWORD *)a2[3].m128i_i64[0];
      if ( v140 )
      {
        if ( !(unsigned __int8)sub_673BB0(a1, *v140, v140 + 1) )
          return 0;
      }
      v141 = a2[4].m128i_i64[0];
      if ( !v141
        || (v141 & 4) != 0
        || (v142 = (_QWORD *)(v141 & 0xFFFFFFFFFFFFFFF8LL)) == nullptr
        || (unsigned __int8)sub_673BB0(a1, *v142, v142 + 1) )
      {
        sub_AC4830(v268);
        v146 = v270;
        v147 = v271;
        v267 = v269;
        v148 = _mm_load_si128((const __m128i *)v268);
        for ( *(__m128i *)v266 = v148; ; v148 = *(__m128i *)v266 )
        {
          if ( v146 == (void *)v148.m128i_i64[0] )
          {
LABEL_225:
            if ( v147 == (void *)v148.m128i_i64[1] )
              return 1;
          }
          v149 = v148.m128i_i8[8] & 3;
          if ( (_DWORD)v149 )
            v148.m128i_i64[0] = sub_ACE280(v266, a2, v149, v143, v144, v145);
          while ( 1 )
          {
            a2 = *(const __m128i **)v148.m128i_i64[0];
            if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v148.m128i_i64[0], a3) )
              return 0;
            v148.m128i_i64[1] = (__int64)v266[1];
            if ( ((__int64)v266[1] & 3) != 0 )
              break;
            v148.m128i_i64[0] = (__int64)v266[0] + 8;
            v266[0] = (void *)v148.m128i_i64[0];
            if ( (void *)v148.m128i_i64[0] == v146 )
              goto LABEL_225;
          }
          if ( v266[1] <= (char *)&dword_0 + 3 )
          {
            a2 = (const __m128i *)(&dword_0 + 1);
            sub_ACE0F0(v266, 1);
          }
          else
          {
            sub_ACE150(v266);
          }
        }
      }
      return 0;
    case 110:
      if ( !(unsigned __int8)sub_674510(a1, a2[2].m128i_i64[0], a2[2].m128i_i64[1])
        || !(unsigned __int8)sub_675910(a1, a2[3].m128i_i64[0], a2[4].m128i_i64[0]) )
      {
        return 0;
      }
      if ( (a2->m128i_i8[2] & 0x10) == 0 )
        goto LABEL_434;
      if ( !a2[4].m128i_i32[2] )
        goto LABEL_434;
      v194 = a2[5].m128i_u32[1];
      if ( !v194 )
        goto LABEL_434;
      v195 = &a2[5].m128i_i8[8];
      v196 = (__int64)&a2[2 * v194 + 5].m128i_i64[1];
      while ( (unsigned __int8)sub_674590(a1, v195) )
      {
        v195 += 32;
        if ( v195 == (char *)v196 )
        {
LABEL_434:
          sub_AC4830(v268);
          v224 = v270;
          v225 = v271;
          v267 = v269;
          v226 = _mm_load_si128((const __m128i *)v268);
          for ( *(__m128i *)v266 = v226; ; v226 = *(__m128i *)v266 )
          {
            if ( v224 == (void *)v226.m128i_i64[0] )
            {
LABEL_441:
              if ( v225 == (void *)v226.m128i_i64[1] )
                return 1;
            }
            v227 = v226.m128i_i8[8] & 3;
            if ( (_DWORD)v227 )
              v226.m128i_i64[0] = sub_ACE280(v266, a2, v227, v221, v222, v223);
            while ( 1 )
            {
              a2 = *(const __m128i **)v226.m128i_i64[0];
              if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v226.m128i_i64[0], a3) )
                return 0;
              v226.m128i_i64[1] = (__int64)v266[1];
              if ( ((__int64)v266[1] & 3) != 0 )
                break;
              v226.m128i_i64[0] = (__int64)v266[0] + 8;
              v266[0] = (void *)v226.m128i_i64[0];
              if ( v224 == (void *)v226.m128i_i64[0] )
                goto LABEL_441;
            }
            if ( v266[1] <= (char *)&dword_0 + 3 )
            {
              a2 = (const __m128i *)(&dword_0 + 1);
              sub_ACE0F0(v266, 1);
            }
            else
            {
              sub_ACE150(v266);
            }
          }
        }
      }
      return 0;
    case 112:
    case 113:
    case 135:
      return sub_672A00(a1, a2, a3);
    case 115:
      if ( !(unsigned __int8)sub_673BB0(a1, *(_QWORD *)a2[2].m128i_i64[1], a2[2].m128i_i64[1] + 8) )
        return 0;
      sub_AC4830(v268);
      v190 = v270;
      v191 = v271;
      v267 = v269;
      v192 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = v192;
LABEL_295:
      if ( v190 != (void *)v192.m128i_i64[0] )
        goto LABEL_296;
      while ( 1 )
      {
        if ( v191 == (void *)v192.m128i_i64[1] )
          return 1;
LABEL_296:
        v193 = v192.m128i_i8[8] & 3;
        if ( (_DWORD)v193 )
          v192.m128i_i64[0] = sub_ACE280(v266, a2, v193, v187, v188, v189);
        do
        {
          a2 = *(const __m128i **)v192.m128i_i64[0];
          if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v192.m128i_i64[0], a3) )
            return 0;
          v192.m128i_i64[1] = (__int64)v266[1];
          if ( ((__int64)v266[1] & 3) != 0 )
          {
            if ( v266[1] <= (char *)&dword_0 + 3 )
            {
              a2 = (const __m128i *)(&dword_0 + 1);
              sub_ACE0F0(v266, 1);
            }
            else
            {
              sub_ACE150(v266);
            }
            v192 = *(__m128i *)v266;
            goto LABEL_295;
          }
          v192.m128i_i64[0] = (__int64)v266[0] + 8;
          v266[0] = (void *)v192.m128i_i64[0];
        }
        while ( v190 != (void *)v192.m128i_i64[0] );
      }
    case 118:
      return sub_66D270(a1, a2[1].m128i_i64[0], a4, a5, a6, a7);
    case 123:
      if ( !(unsigned __int8)sub_673BB0(a1, *(_QWORD *)a2[3].m128i_i64[0], a2[3].m128i_i64[0] + 8) )
        return 0;
      sub_AC4830(v268);
      v175 = v270;
      v176 = v271;
      v267 = v269;
      v177 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = v177;
LABEL_264:
      if ( v175 != (void *)v177.m128i_i64[0] )
        goto LABEL_265;
      while ( 1 )
      {
        if ( v176 == (void *)v177.m128i_i64[1] )
          return 1;
LABEL_265:
        v178 = v177.m128i_i8[8] & 3;
        if ( (_DWORD)v178 )
          v177.m128i_i64[0] = sub_ACE280(v266, a2, v178, v172, v173, v174);
        do
        {
          a2 = *(const __m128i **)v177.m128i_i64[0];
          if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v177.m128i_i64[0], a3) )
            return 0;
          v177.m128i_i64[1] = (__int64)v266[1];
          if ( ((__int64)v266[1] & 3) != 0 )
          {
            if ( v266[1] <= (char *)&dword_0 + 3 )
            {
              a2 = (const __m128i *)(&dword_0 + 1);
              sub_ACE0F0(v266, 1);
            }
            else
            {
              sub_ACE150(v266);
            }
            v177 = *(__m128i *)v266;
            goto LABEL_264;
          }
          v177.m128i_i64[0] = (__int64)v266[0] + 8;
          v266[0] = (void *)v177.m128i_i64[0];
        }
        while ( v175 != (void *)v177.m128i_i64[0] );
      }
    case 126:
      v164 = a2[1].m128i_i64[0];
      if ( v164 && !(unsigned __int8)sub_672860(a1, *(_QWORD *)(v164 + 16), a3) )
        return 0;
      sub_AC4830(v268);
      v168 = v270;
      v169 = v271;
      v267 = v269;
      v170 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = v170;
LABEL_254:
      if ( v168 != (void *)v170.m128i_i64[0] )
        goto LABEL_255;
      while ( 1 )
      {
        if ( v169 == (void *)v170.m128i_i64[1] )
          return 1;
LABEL_255:
        v171 = v170.m128i_i8[8] & 3;
        if ( (_DWORD)v171 )
          v170.m128i_i64[0] = sub_ACE280(v266, a2, v171, v165, v166, v167);
        do
        {
          a2 = *(const __m128i **)v170.m128i_i64[0];
          if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v170.m128i_i64[0], a3) )
            return 0;
          v170.m128i_i64[1] = (__int64)v266[1];
          if ( ((__int64)v266[1] & 3) != 0 )
          {
            if ( v266[1] <= (char *)&dword_0 + 3 )
            {
              a2 = (const __m128i *)(&dword_0 + 1);
              sub_ACE0F0(v266, 1);
            }
            else
            {
              sub_ACE150(v266);
            }
            v170 = *(__m128i *)v266;
            goto LABEL_254;
          }
          v170.m128i_i64[0] = (__int64)v266[0] + 8;
          v266[0] = (void *)v170.m128i_i64[0];
        }
        while ( v168 != (void *)v170.m128i_i64[0] );
      }
    case 141:
      v184 = a2[3].m128i_i64[1];
      if ( v184 && !(unsigned __int8)sub_672CC0(a1, v184) )
        return 0;
      v185 = (_QWORD *)(v12 + 64);
      v186 = v12 + 8LL * *(unsigned int *)(v12 + 52) + 56;
      if ( v12 + 64 == v186 )
        goto LABEL_406;
      do
      {
        if ( !(unsigned __int8)sub_672CC0(a1, *v185) )
          return 0;
        ++v185;
      }
      while ( (_QWORD *)v186 != v185 );
LABEL_406:
      v206 = *(_QWORD **)(v12 + 24);
      v207 = &v206[*(_QWORD *)(v12 + 32)];
      if ( v206 == v207 )
      {
LABEL_473:
        v242 = v12;
        sub_AC4830(v268);
        v246 = v270;
        v247 = v271;
        v267 = v269;
        v248 = _mm_load_si128((const __m128i *)v268);
        for ( *(__m128i *)v266 = v248; ; v248 = *(__m128i *)v266 )
        {
          if ( v246 == (void *)v248.m128i_i64[0] )
          {
LABEL_480:
            if ( v247 == (void *)v248.m128i_i64[1] )
              return 1;
          }
          v249 = v248.m128i_i8[8] & 3;
          if ( (_DWORD)v249 )
            v248.m128i_i64[0] = sub_ACE280(v266, v242, v249, v243, v244, v245);
          while ( 1 )
          {
            v242 = *(_QWORD *)v248.m128i_i64[0];
            if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v248.m128i_i64[0], a3) )
              return 0;
            v248.m128i_i64[1] = (__int64)v266[1];
            if ( ((__int64)v266[1] & 3) != 0 )
              break;
            v248.m128i_i64[0] = (__int64)v266[0] + 8;
            v266[0] = (void *)v248.m128i_i64[0];
            if ( v246 == (void *)v248.m128i_i64[0] )
              goto LABEL_480;
          }
          if ( v266[1] <= (char *)&dword_0 + 3 )
          {
            v242 = 1;
            sub_ACE0F0(v266, 1);
          }
          else
          {
            sub_ACE150(v266);
          }
        }
      }
      while ( (unsigned __int8)sub_672E40(a1, *v206) )
      {
        if ( v207 == ++v206 )
          goto LABEL_473;
      }
      return 0;
    case 142:
    case 143:
    case 144:
    case 145:
    case 146:
    case 147:
      return sub_672FD0(a1, a2, a3);
    case 148:
    case 149:
    case 150:
    case 151:
    case 152:
      return sub_673100(a1, a2, a3);
    case 160:
    case 161:
    case 162:
    case 163:
    case 164:
    case 165:
    case 166:
    case 167:
    case 168:
    case 169:
    case 170:
    case 171:
    case 172:
    case 173:
    case 174:
    case 175:
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
    case 192:
    case 193:
    case 194:
    case 195:
    case 196:
    case 197:
    case 198:
    case 199:
    case 200:
    case 201:
    case 202:
    case 203:
    case 204:
    case 205:
    case 206:
    case 207:
    case 208:
    case 209:
    case 210:
    case 211:
    case 212:
    case 213:
    case 214:
    case 215:
    case 216:
    case 217:
    case 218:
    case 219:
    case 220:
    case 221:
    case 222:
    case 223:
    case 224:
    case 225:
    case 226:
    case 227:
    case 228:
    case 230:
    case 231:
    case 232:
    case 233:
    case 234:
      return sub_6773D0(a1, a2, a3);
    case 229:
      if ( !(unsigned __int8)sub_675910(a1, a2[2].m128i_i64[0], a2[3].m128i_i64[0]) )
        return 0;
      v52 = (unsigned int *)a2[1].m128i_i64[1];
      if ( !v52 )
        goto LABEL_411;
      v53 = v52 + 4;
      v54 = (__int64)&v52[2 * *v52 + 4];
      if ( v52 + 4 == (unsigned int *)v54 )
        goto LABEL_411;
      do
      {
        if ( !(unsigned __int8)sub_675FE0(a1, *v53) )
          return 0;
        ++v53;
      }
      while ( (_QWORD *)v54 != v53 );
LABEL_411:
      sub_AC4830(v268);
      v211 = v270;
      v212 = v271;
      v267 = v269;
      v213 = _mm_load_si128((const __m128i *)v268);
      for ( *(__m128i *)v266 = v213; ; v213 = *(__m128i *)v266 )
      {
        if ( v211 == (void *)v213.m128i_i64[0] )
        {
LABEL_418:
          if ( v212 == (void *)v213.m128i_i64[1] )
            return 1;
        }
        v214 = v213.m128i_i8[8] & 3;
        if ( (_DWORD)v214 )
          v213.m128i_i64[0] = sub_ACE280(v266, a2, v214, v208, v209, v210);
        while ( 1 )
        {
          a2 = *(const __m128i **)v213.m128i_i64[0];
          if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v213.m128i_i64[0], a3) )
            return 0;
          v213.m128i_i64[1] = (__int64)v266[1];
          if ( ((__int64)v266[1] & 3) != 0 )
            break;
          v213.m128i_i64[0] = (__int64)v266[0] + 8;
          v266[0] = (void *)v213.m128i_i64[0];
          if ( v211 == (void *)v213.m128i_i64[0] )
            goto LABEL_418;
        }
        if ( v266[1] <= (char *)&dword_0 + 3 )
        {
          a2 = (const __m128i *)(&dword_0 + 1);
          sub_ACE0F0(v266, 1);
        }
        else
        {
          sub_ACE150(v266);
        }
      }
    case 235:
      return sub_672CC0(a1, a2->m128i_i64[1]);
    case 237:
      if ( !(unsigned __int8)sub_674510(a1, a2[1].m128i_i64[0], a2[1].m128i_i64[1])
        || !(unsigned __int8)sub_675910(a1, a2[2].m128i_i64[0], a2[3].m128i_i64[0]) )
      {
        return 0;
      }
      sub_AC4830(v268);
      v29 = v270;
      v30 = v271;
      v267 = v269;
      v31 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = v31;
LABEL_25:
      if ( v29 != (void *)v31.m128i_i64[0] )
        goto LABEL_26;
      while ( 1 )
      {
        if ( v30 == (void *)v31.m128i_i64[1] )
          return 1;
LABEL_26:
        v32 = v31.m128i_i8[8] & 3;
        if ( (_DWORD)v32 )
          v31.m128i_i64[0] = sub_ACE280(v266, a2, v32, v26, v27, v28);
        do
        {
          a2 = *(const __m128i **)v31.m128i_i64[0];
          if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v31.m128i_i64[0], a3) )
            return 0;
          v31.m128i_i64[1] = (__int64)v266[1];
          if ( ((__int64)v266[1] & 3) != 0 )
          {
            if ( v266[1] <= (char *)&dword_0 + 3 )
            {
              a2 = (const __m128i *)(&dword_0 + 1);
              sub_ACE0F0(v266, 1);
            }
            else
            {
              sub_ACE150(v266);
            }
            v31 = *(__m128i *)v266;
            goto LABEL_25;
          }
          v31.m128i_i64[0] = (__int64)v266[0] + 8;
          v266[0] = (void *)v31.m128i_i64[0];
        }
        while ( v29 != (void *)v31.m128i_i64[0] );
      }
    case 243:
      v14 = a2->m128i_i64[1];
      if ( (v14 & 1) != 0 )
      {
        v15 = (unsigned int *)(v14 & 0xFFFFFFFFFFFFFFFELL);
        v16 = (__int64 *)(v15 + 2);
        m128i_i64 = (__int64)&v15[2 * *v15 + 2];
      }
      else
      {
        m128i_i64 = (__int64)a2[1].m128i_i64;
        v16 = &a2->m128i_i64[1];
        if ( !v14 )
          return 1;
      }
      if ( v16 == (__int64 *)m128i_i64 )
        return 1;
      while ( (unsigned __int8)sub_66D270(a1, *v16, a4, a5, a6, a7) )
      {
        if ( (__int64 *)m128i_i64 == ++v16 )
          return 1;
      }
      return 0;
    case 244:
    case 245:
      return sub_672860(a1, a2[1].m128i_i64[0], a3);
    case 248:
      v18 = sub_ACBC90(a2);
      if ( !(unsigned __int8)sub_66D270(a1, v18, a4, a5, a6, a7) )
        return 0;
      sub_AC4830(v268);
      v22 = v270;
      v23 = v271;
      v267 = v269;
      v24 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = v24;
LABEL_13:
      if ( v22 != (void *)v24.m128i_i64[0] )
        goto LABEL_14;
      while ( 1 )
      {
        if ( v23 == (void *)v24.m128i_i64[1] )
          return 1;
LABEL_14:
        v25 = v24.m128i_i8[8] & 3;
        if ( (_DWORD)v25 )
          v24.m128i_i64[0] = sub_ACE280(v266, a2, v25, v19, v20, v21);
        do
        {
          a2 = *(const __m128i **)v24.m128i_i64[0];
          if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v24.m128i_i64[0], a3) )
            return 0;
          v24.m128i_i64[1] = (__int64)v266[1];
          if ( ((__int64)v266[1] & 3) != 0 )
          {
            if ( v266[1] <= (char *)&dword_0 + 3 )
            {
              a2 = (const __m128i *)(&dword_0 + 1);
              sub_ACE0F0(v266, 1);
            }
            else
            {
              sub_ACE150(v266);
            }
            v24 = *(__m128i *)v266;
            goto LABEL_13;
          }
          v24.m128i_i64[0] = (__int64)v266[0] + 8;
          v266[0] = (void *)v24.m128i_i64[0];
        }
        while ( v22 != (void *)v24.m128i_i64[0] );
      }
    case 250:
      v131 = a2[1].m128i_i64[0];
      if ( v131 && !(unsigned __int8)sub_672860(a1, v131, a3) )
        return 0;
      if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)(v12 + 64), a3) )
        return 0;
      v132 = sub_ACDD50(v12);
      if ( !(unsigned __int8)sub_672860(a1, v132, a3) )
        return 0;
      return sub_672860(a1, *(_QWORD *)(v12 + 72), a3);
    case 251:
      if ( !(unsigned __int8)sub_66D270(a1, a2[1].m128i_i64[0], a4, a5, a6, a7) )
        return 0;
      sub_AC4830(v268);
      v41 = v270;
      v42 = v271;
      v267 = v269;
      v43 = _mm_load_si128((const __m128i *)v268);
      *(__m128i *)v266 = v43;
LABEL_48:
      if ( v41 != (void *)v43.m128i_i64[0] )
        goto LABEL_49;
      while ( 1 )
      {
        if ( v42 == (void *)v43.m128i_i64[1] )
          return 1;
LABEL_49:
        v44 = v43.m128i_i8[8] & 3;
        if ( (_DWORD)v44 )
          v43.m128i_i64[0] = sub_ACE280(v266, a2, v44, v38, v39, v40);
        do
        {
          a2 = *(const __m128i **)v43.m128i_i64[0];
          if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v43.m128i_i64[0], a3) )
            return 0;
          v43.m128i_i64[1] = (__int64)v266[1];
          if ( ((__int64)v266[1] & 3) != 0 )
          {
            if ( v266[1] <= (char *)&dword_0 + 3 )
            {
              a2 = (const __m128i *)(&dword_0 + 1);
              sub_ACE0F0(v266, 1);
            }
            else
            {
              sub_ACE150(v266);
            }
            v43 = *(__m128i *)v266;
            goto LABEL_48;
          }
          v43.m128i_i64[0] = (__int64)v266[0] + 8;
          v266[0] = (void *)v43.m128i_i64[0];
        }
        while ( (void *)v43.m128i_i64[0] != v41 );
      }
    case 254:
      if ( !(unsigned __int8)sub_672860(a1, a2[3].m128i_i64[0], a3) )
        return 0;
      v36 = a2[1].m128i_i32[1];
      v37 = 0;
      if ( !v36 )
        goto LABEL_426;
      do
      {
        if ( !(unsigned __int8)sub_672860(
                                 a1,
                                 *(_QWORD *)(a2[3].m128i_i64[1] + 8LL * (unsigned int)(a2[1].m128i_i32[0] + v37)),
                                 a3) )
          return 0;
        ++v37;
      }
      while ( v36 != v37 );
LABEL_426:
      v218 = 0;
      v219 = a2[1].m128i_u32[0];
      v220 = 8 * v219;
      if ( !(_DWORD)v219 )
        goto LABEL_486;
      do
      {
        if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)(a2[3].m128i_i64[1] + v218), a3) )
          return 0;
        v218 += 8;
      }
      while ( v218 != v220 );
LABEL_486:
      v250 = a2[1].m128i_u32[2];
      if ( !(_DWORD)v250 )
      {
LABEL_492:
        sub_AC4830(v268);
        v256 = v270;
        v257 = v271;
        v267 = v269;
        *(__m128i *)v266 = _mm_load_si128((const __m128i *)v268);
        while ( 1 )
        {
          v258 = (const __m128i **)v266[0];
          if ( v256 == v266[0] && v257 == v266[1] )
            return 1;
          if ( ((__int64)v266[1] & 3) != 0 )
            v258 = (const __m128i **)sub_ACE280(v266, a2, (__int64)v266[1] & 3, v253, v254, v255);
          a2 = *v258;
          if ( !(unsigned __int8)sub_672860(a1, *v258, a3) )
            break;
          if ( ((__int64)v266[1] & 3) != 0 )
          {
            if ( v266[1] <= (char *)&dword_0 + 3 )
            {
              a2 = (const __m128i *)(&dword_0 + 1);
              sub_ACE0F0(v266, 1);
            }
            else
            {
              sub_ACE150(v266);
            }
          }
          else
          {
            v266[0] = (char *)v266[0] + 8;
          }
        }
        return 0;
      }
      v251 = 8 * v250;
      v252 = 0;
      while ( (unsigned __int8)sub_672860(a1, *(_QWORD *)(a2[4].m128i_i64[0] + v252), a3) )
      {
        v252 += 8;
        if ( v251 == v252 )
          goto LABEL_492;
      }
      return 0;
    default:
      return 1;
  }
  while ( 1 )
  {
    v102 = *(_QWORD *)(v12 + 24);
    v263 = **(_QWORD **)(v12 + 40);
    v260 = 4LL * *(unsigned int *)(v263 + 4) + 20;
    v103 = sub_B100B0(*(_QWORD *)(*(_QWORD *)(v102 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    v104 = v102 + 16;
    v105 = v103;
    v106 = *(char *)(v101 + v263 + v260);
    v107 = *(unsigned int *)(v102 + 24);
    v108 = *(void **)(v102 + 16);
    if ( (unsigned __int64)(v107 + 63) <= 0x7F )
      break;
    v265 = v103;
    v264 = *(char *)(v101 + v263 + v260);
    sub_2585D40(v266, v107, (unsigned __int64)(v107 + 63) >> 6, v108);
    LODWORD(v107) = v266[1];
    v104 = v102 + 16;
    v106 = v264;
    v105 = v265;
    LODWORD(v268[1]) = v266[1];
    if ( LODWORD(v266[1]) <= 0x40 )
      goto LABEL_152;
    sub_2585A50(v268, v264, v265);
    v104 = v102 + 16;
LABEL_154:
    sub_808730(v104, *(_QWORD *)(v12 + 32), v268);
    if ( LODWORD(v268[1]) > 0x40 && v268[0] )
      operator delete[](v268[0]);
    if ( LODWORD(v266[1]) > 0x40 && v266[0] )
      operator delete[](v266[0]);
    if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)(v12 + 24), a3) )
      return 0;
    ++v101;
    v109 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)(v12 + 48)), (__m128i)0LL);
    if ( v101 >= _mm_add_epi64(v109, _mm_srli_si128(v109, 8)).m128i_u64[0] )
    {
      v110 = v12;
      sub_AC4830(v268);
      v114 = _mm_load_si128((const __m128i *)v268);
      v115 = v270;
      v116 = v271;
      v267 = v269;
      v117 = v114;
      *(__m128i *)v266 = v114;
LABEL_163:
      if ( v115 != (void *)v117.m128i_i64[0] )
        goto LABEL_164;
LABEL_169:
      if ( v116 == (void *)v117.m128i_i64[1] )
        return 1;
LABEL_164:
      v118 = v117.m128i_i8[8] & 3;
      if ( (_DWORD)v118 )
        v117.m128i_i64[0] = sub_ACE280(v266, v110, v118, v111, v112, v113);
      while ( 1 )
      {
        v110 = *(_QWORD *)v117.m128i_i64[0];
        if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v117.m128i_i64[0], a3) )
          return 0;
        v117.m128i_i64[1] = (__int64)v266[1];
        if ( ((__int64)v266[1] & 3) != 0 )
        {
          if ( v266[1] <= (char *)&dword_0 + 3 )
          {
            v110 = 1;
            sub_ACE0F0(v266, 1);
          }
          else
          {
            sub_ACE150(v266);
          }
          v117 = *(__m128i *)v266;
          goto LABEL_163;
        }
        v117.m128i_i64[0] = (__int64)v266[0] + 8;
        v266[0] = (void *)v117.m128i_i64[0];
        if ( (void *)v117.m128i_i64[0] == v115 )
          goto LABEL_169;
      }
    }
  }
  LODWORD(v266[1]) = *(_DWORD *)(v102 + 24);
  v266[0] = v108;
  LODWORD(v268[1]) = v107;
LABEL_152:
  if ( v105 )
  {
    v197 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v107;
    if ( !(_DWORD)v107 )
      v197 = 0;
    v268[0] = (void *)(v106 & v197);
  }
  else
  {
    v268[0] = (void *)v106;
  }
  goto LABEL_154;
}

