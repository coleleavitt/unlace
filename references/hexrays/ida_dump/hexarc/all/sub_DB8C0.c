__int64 __fastcall sub_DB8C0(_QWORD *a1, __int64 a2, char *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  int v7; // ebp
  int v8; // r15d
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdx
  char v13; // r13
  char v14; // al
  char v15; // bl
  char v16; // r13
  __int64 v17; // r12
  __int64 v18; // r12
  __int64 v19; // rsi
  int v20; // r12d
  char v21; // al
  bool v22; // r15
  int v23; // eax
  int v24; // r9d
  int v25; // r12d
  int v26; // edi
  int v27; // esi
  __int64 v28; // rax
  __int64 v29; // rdi
  unsigned int v30; // ebx
  char v31; // al
  int v32; // ebp
  int v33; // edx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  int v36; // eax
  int v37; // edx
  __m128i v38; // xmm1
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rdx
  __m128i v44; // xmm1
  __m128i v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __m128i v49; // xmm0
  __m128i v50; // xmm1
  __int64 v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // rdx
  __int64 v54; // rax
  __m128i v55; // xmm1
  __int64 v56; // rax
  __m128i v57; // xmm0
  __m128i v58; // xmm1
  __m128i v59; // xmm1
  __int64 v60; // r15
  char v61; // al
  unsigned __int64 v62; // r13
  unsigned __int64 v63; // r15
  int v64; // ebx
  int v65; // edx
  __m128i v66; // xmm0
  __m128i v67; // xmm1
  int v68; // eax
  int v69; // edx
  __int64 v70; // rax
  __int64 v71; // rdx
  __m128i v72; // xmm1
  __int64 v73; // rax
  __m128i v74; // xmm0
  __int64 v75; // rdx
  __m128i v76; // xmm1
  __m128i v77; // xmm0
  __m128i v78; // xmm0
  __m128i v79; // xmm1
  __int64 v80; // rax
  __m128i v81; // xmm0
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rax
  __m128i v86; // xmm1
  __int64 v87; // rdx
  __int64 v88; // rax
  __m128i v89; // xmm1
  __int64 v90; // rax
  __m128i v91; // xmm0
  __int64 v92; // rdx
  __m128i v93; // xmm2
  __m128i v94; // xmm1
  int v96; // eax
  int v97; // eax
  int v98; // r9d
  __int64 v99; // r15
  char v100; // al
  int v101; // ecx
  __int64 v102; // r15
  unsigned __int64 v103; // r15
  __int64 v104; // rax
  __int64 v105; // rdi
  unsigned int v106; // eax
  int v107; // eax
  unsigned __int64 v108; // r13
  unsigned __int64 v109; // rbx
  unsigned int v110; // ebp
  int v111; // eax
  unsigned __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rsi
  int v116; // edi
  __m128i v117; // xmm0
  __int64 v118; // rcx
  __m128i v119; // xmm1
  int v120; // edi
  __m128i v121; // xmm1
  __m128i v122; // xmm0
  __m128i v123; // xmm1
  __m128i v124; // xmm0
  __m128i v125; // xmm0
  __int64 v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rdx
  __m128i v132; // xmm1
  __m128i v133; // xmm0
  __m128i v134; // xmm1
  __m128i v135; // xmm0
  __m128i v136; // xmm1
  __int64 v137; // rax
  bool v139; // [rsp+28h] [rbp-2E0h]
  int v140; // [rsp+34h] [rbp-2D4h]
  int v141; // [rsp+38h] [rbp-2D0h]
  int v142; // [rsp+38h] [rbp-2D0h]
  unsigned __int64 v143; // [rsp+38h] [rbp-2D0h]
  int v144; // [rsp+40h] [rbp-2C8h]
  int v145; // [rsp+40h] [rbp-2C8h]
  __int64 v146; // [rsp+40h] [rbp-2C8h]
  int *v147; // [rsp+48h] [rbp-2C0h]
  int v148; // [rsp+50h] [rbp-2B8h] BYREF
  int v149; // [rsp+54h] [rbp-2B4h]
  __int64 v150; // [rsp+58h] [rbp-2B0h]
  __m128i v151; // [rsp+60h] [rbp-2A8h] BYREF
  __int64 v152; // [rsp+70h] [rbp-298h]
  __m128i v153; // [rsp+78h] [rbp-290h] BYREF
  __m128i v154; // [rsp+88h] [rbp-280h] BYREF
  unsigned int v155; // [rsp+98h] [rbp-270h]
  __int64 v156; // [rsp+A8h] [rbp-260h]
  __m128i v157; // [rsp+B0h] [rbp-258h] BYREF
  __int64 v158; // [rsp+C0h] [rbp-248h]
  __m128i v159; // [rsp+C8h] [rbp-240h] BYREF
  __m128i v160; // [rsp+D8h] [rbp-230h] BYREF
  __int64 v161; // [rsp+E8h] [rbp-220h]
  __int64 v162; // [rsp+F0h] [rbp-218h] BYREF
  __int64 v163; // [rsp+F8h] [rbp-210h]
  __int64 v164; // [rsp+100h] [rbp-208h]
  __m128i v165; // [rsp+108h] [rbp-200h] BYREF
  int v166; // [rsp+118h] [rbp-1F0h]
  __int16 v167; // [rsp+11Ch] [rbp-1ECh]
  int v168; // [rsp+120h] [rbp-1E8h] BYREF
  int v169; // [rsp+124h] [rbp-1E4h]
  __int64 v170; // [rsp+128h] [rbp-1E0h]
  __m128i v171; // [rsp+130h] [rbp-1D8h] BYREF
  __int64 v172; // [rsp+140h] [rbp-1C8h]
  __m128i v173; // [rsp+148h] [rbp-1C0h] BYREF
  __m128i v174; // [rsp+158h] [rbp-1B0h] BYREF
  unsigned int v175; // [rsp+168h] [rbp-1A0h]
  __int64 v176; // [rsp+178h] [rbp-190h]
  __m128i v177; // [rsp+180h] [rbp-188h] BYREF
  __int64 v178; // [rsp+190h] [rbp-178h]
  __m128i v179; // [rsp+198h] [rbp-170h] BYREF
  __m128i v180; // [rsp+1A8h] [rbp-160h] BYREF
  __int64 v181; // [rsp+1B8h] [rbp-150h]
  __int64 v182; // [rsp+1C0h] [rbp-148h] BYREF
  __int64 v183; // [rsp+1C8h] [rbp-140h]
  __int64 v184; // [rsp+1D0h] [rbp-138h]
  __m128i v185; // [rsp+1D8h] [rbp-130h] BYREF
  int v186; // [rsp+1E8h] [rbp-120h]
  __int16 v187; // [rsp+1ECh] [rbp-11Ch]
  __int64 v188; // [rsp+1F0h] [rbp-118h] BYREF
  __int64 v189; // [rsp+1F8h] [rbp-110h]
  __m128i v190; // [rsp+200h] [rbp-108h] BYREF
  __int64 v191; // [rsp+210h] [rbp-F8h]
  __m128i v192; // [rsp+218h] [rbp-F0h] BYREF
  __m128i v193; // [rsp+228h] [rbp-E0h] BYREF
  unsigned int v194; // [rsp+238h] [rbp-D0h]
  __int64 v195; // [rsp+248h] [rbp-C0h]
  __m128i v196; // [rsp+250h] [rbp-B8h] BYREF
  __int64 v197; // [rsp+260h] [rbp-A8h]
  __m128i v198; // [rsp+268h] [rbp-A0h] BYREF
  __m128i v199; // [rsp+278h] [rbp-90h] BYREF
  __int64 v200; // [rsp+288h] [rbp-80h]
  __int64 v201; // [rsp+290h] [rbp-78h] BYREF
  __int64 v202; // [rsp+298h] [rbp-70h]
  __int64 v203; // [rsp+2A0h] [rbp-68h]
  __m128i v204; // [rsp+2A8h] [rbp-60h] BYREF
  int v205; // [rsp+2B8h] [rbp-50h]
  __int16 v206; // [rsp+2BCh] [rbp-4Ch]
  unsigned __int64 v207; // [rsp+2C8h] [rbp-40h]

  v4 = a1[38];
  v5 = *(_QWORD *)(*a1 + 480LL);
  v207 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(*(_QWORD *)(v5 + 112) + 48LL) & 8;
  v8 = *(_DWORD *)(*(_QWORD *)(a1[2] + 112LL) + 80LL);
  v140 = v8;
  v9 = sub_D9CC0(a1) / v8;
  *((_DWORD *)a1 + 87) = v9;
  if ( (int)v9 < 0 || (v12 = a1[2], (int)v9 >= *(_DWORD *)(v12 + 656)) )
  {
    sub_329B90(a1[1], v4, 38, v8, v10, v11);
    *((_DWORD *)a1 + 87) = 0;
    goto LABEL_28;
  }
  if ( *(_BYTE *)(v12 + 148) == 1 )
  {
    v30 = 256;
    if ( (_DWORD)v9 )
      return v30;
    goto LABEL_28;
  }
  if ( !(_DWORD)v9 )
  {
LABEL_28:
    v15 = 0;
    v16 = 0;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v13 = *a3;
    if ( !*a3 )
      break;
    ++a3;
    if ( (unsigned int)v13 <= 0x7F )
    {
      v14 = (v13 == 64) | (islower(v13) != 0);
      if ( v14 )
      {
        v15 = v14;
        v16 = 0;
        goto LABEL_9;
      }
    }
  }
  v15 = 1;
  v16 = 1;
LABEL_9:
  v17 = *a1;
  sub_CA9F0((__int64)&v148, *(_QWORD *)(*a1 + 480LL), 0);
  v160 = (__m128i)(unsigned __int64)v17;
  v18 = *a1;
  v167 = 0;
  v19 = *(_QWORD *)(v18 + 480);
  v161 = 0;
  v162 = 0;
  v163 = 0;
  v164 = 0;
  v166 = -1;
  v165 = 0;
  sub_CA9F0((__int64)&v168, v19, 0);
  v180 = (__m128i)(unsigned __int64)v18;
  v20 = 2;
  v181 = 0;
  v182 = 0;
  v183 = 0;
  v184 = 0;
  v186 = -1;
  v187 = 0;
  v185 = 0;
  if ( !v7 )
    v20 = 2 * (*(_BYTE *)(*(_QWORD *)(*a1 + 480LL) + 148LL) != 0);
  if ( !(unsigned __int8)sub_E0850(a1) )
  {
    sub_D8490((__int64)&v148, 0x70u, a2, v20);
    if ( *(_BYTE *)(a1[2] + 148LL) != 2 )
    {
LABEL_13:
      v21 = sub_5E300(&v160.m128i_i64[1]);
      goto LABEL_14;
    }
    v99 = *a1;
    sub_CA9F0((__int64)&v188, *(_QWORD *)(*a1 + 480LL), 0);
    v199 = (__m128i)(unsigned __int64)v99;
    v200 = 0;
    v201 = 0;
    v202 = 0;
    v203 = 0;
    v205 = -1;
    v206 = 0;
    v204 = 0;
    if ( (unsigned __int8)sub_5E300(&v160.m128i_i64[1]) )
    {
      v100 = sub_5E300(&v162);
      v101 = 0;
      v102 = 0;
      if ( v100 )
        goto LABEL_152;
    }
    else
    {
      v102 = (int)(sub_5E680(&v160.m128i_i64[1]) + 1);
      if ( (unsigned __int8)sub_5E300(&v162) )
      {
LABEL_211:
        v101 = 2 * (v102 != 0);
LABEL_152:
        sub_D8490((__int64)&v188, 0xB0u, a2, v101);
        if ( (unsigned __int8)sub_5E300(&v199.m128i_i64[1]) )
        {
          if ( !(unsigned __int8)sub_5E300(&v160.m128i_i64[1]) )
          {
            v103 = 0;
            v143 = (int)(sub_5E680(&v160.m128i_i64[1]) + 1);
            goto LABEL_155;
          }
LABEL_154:
          v143 = 0;
          v103 = 0;
LABEL_155:
          v146 = 0;
          if ( !(unsigned __int8)sub_5E300(&v201) )
            v146 = (int)(sub_5E680(&v201) + 1);
          if ( !(unsigned __int8)sub_5E300(&v162) )
            v143 += (int)(sub_5E680(&v162) + 1);
          v104 = v203;
          v105 = v203;
          if ( v103 + v146 < v143 )
            goto LABEL_160;
          v114 = v150;
          v115 = v189;
LABEL_217:
          v116 = v188;
          v189 = v114;
          v117 = _mm_load_si128(&v151);
          v118 = v191;
          v150 = v115;
          v119 = _mm_load_si128(&v190);
          LODWORD(v188) = v148;
          v148 = v116;
          v120 = HIDWORD(v188);
          v151 = v119;
          v121 = _mm_loadu_si128(&v192);
          HIDWORD(v188) = v149;
          v190 = v117;
          v122 = _mm_loadu_si128(&v153);
          v191 = v152;
          v152 = v118;
          LODWORD(v118) = v194;
          v153 = v121;
          v123 = _mm_loadu_si128(&v193);
          v194 = v155;
          v192 = v122;
          v124 = _mm_loadu_si128(&v154);
          v149 = v120;
          v154 = v123;
          v193 = v124;
          v125 = _mm_load_si128(&v157);
          v155 = v118;
          v126 = v195;
          v195 = v156;
          v156 = v126;
          v127 = v197;
          v197 = v158;
          v158 = v127;
          v128 = v200;
          v200 = v161;
          v161 = v128;
          v129 = v201;
          v201 = v162;
          v162 = v129;
          v105 = v164;
          v130 = v202;
          v202 = v163;
          v131 = v165.m128i_i64[1];
          v164 = v104;
          v132 = _mm_load_si128(&v196);
          v196 = v125;
          v133 = _mm_loadu_si128(&v159);
          v163 = v130;
          v157 = v132;
          v134 = _mm_loadu_si128(&v198);
          v198 = v133;
          v135 = _mm_loadu_si128(&v160);
          v159 = v134;
          v165 = _mm_loadu_si128(&v204);
          v203 = v105;
          v204.m128i_i64[1] = v131;
          LODWORD(v131) = v205;
          v136 = _mm_loadu_si128(&v199);
          v205 = v166;
          v166 = v131;
          LOBYTE(v131) = v206;
          v160 = v136;
          LOBYTE(v206) = v167;
          LOBYTE(v167) = v131;
          v199 = v135;
LABEL_160:
          if ( v105 )
          {
            v204.m128i_i64[0] = 0;
            qfree(v105);
          }
          qfree(v201);
          qfree(v199.m128i_i64[1]);
          if ( v197 )
          {
            v198.m128i_i64[0] = 0;
            qfree(v197);
          }
          if ( v195 )
          {
            v196.m128i_i64[0] = 0;
            qfree(v195);
          }
          if ( v191 )
          {
            v192.m128i_i64[0] = 0;
            qfree(v191);
          }
          if ( v189 )
          {
            v190.m128i_i64[0] = 0;
            qfree(v189);
          }
          goto LABEL_13;
        }
        v103 = (int)(sub_5E680(&v199.m128i_i64[1]) + 1);
        if ( (unsigned __int8)sub_5E300(&v160.m128i_i64[1]) )
        {
          if ( !v103 )
            goto LABEL_154;
        }
        else
        {
          v143 = (int)(sub_5E680(&v160.m128i_i64[1]) + 1);
          if ( v143 >= v103 )
          {
            if ( v103 )
            {
              v115 = v189;
              v114 = v150;
              v137 = 0;
              while ( *(_DWORD *)(v189 + 4 * v137) == *(_DWORD *)(v150 + 4 * v137) )
              {
                if ( ++v137 == v103 )
                  goto LABEL_155;
              }
              v104 = v203;
              goto LABEL_217;
            }
            goto LABEL_155;
          }
        }
        v114 = v150;
        v115 = v189;
        v104 = v203;
        goto LABEL_217;
      }
    }
    v102 += (int)(sub_5E680(&v162) + 1);
    goto LABEL_211;
  }
  sub_D8490((__int64)&v148, 0xB0u, a2, 0);
  v21 = sub_5E300(&v160.m128i_i64[1]);
LABEL_14:
  if ( v21 )
  {
    v22 = 0;
    if ( (unsigned __int8)sub_5E300(&v162) )
      goto LABEL_16;
    v60 = 0;
  }
  else
  {
    v60 = (int)(sub_5E680(&v160.m128i_i64[1]) + 1);
    if ( (unsigned __int8)sub_5E300(&v162) )
    {
      v22 = (int)v60 != 0;
      goto LABEL_16;
    }
  }
  v22 = (int)(sub_5E680(&v162) + 1) + v60 != 0;
LABEL_16:
  v23 = sub_D8490((__int64)&v168, 0x80u, a2, v20);
  v24 = *((_DWORD *)a1 + 87);
  v25 = v23;
  v139 = v23 != 0;
  v26 = v24;
  if ( !v24 )
  {
    if ( *(_BYTE *)(a1[2] + 144LL) )
    {
      if ( v16 && v15 )
      {
        if ( v23 )
        {
LABEL_34:
          v15 = 1;
          v16 = 0;
          v147 = &v168;
LABEL_35:
          v144 = v24;
          if ( !(unsigned __int8)sub_D80C0((__int64)v147) )
            goto LABEL_36;
          v142 = 0;
          v24 = v144;
LABEL_132:
          v145 = v24;
          if ( (*(_BYTE *)(*a1 + 24LL) & 8) != 0 )
          {
            v97 = sub_D9900(a1);
            v98 = v145;
            if ( v97 >= 0 )
            {
LABEL_134:
              v98 = v97 / v140;
              goto LABEL_135;
            }
          }
          else
          {
            v97 = sub_DA920((__int64)a1, -1, *(int *)(a1[1] + 120LL));
            v98 = v145;
            if ( v97 >= 0 )
              goto LABEL_134;
          }
          if ( !*((_BYTE *)v147 + 205) )
          {
            v29 = v184;
            v30 = 0;
            goto LABEL_87;
          }
LABEL_135:
          if ( *((_DWORD *)a1 + 87) < v98 )
            *((_DWORD *)a1 + 87) = v98;
          if ( v142 && *((_DWORD *)a1 + 87) )
            goto LABEL_116;
LABEL_36:
          if ( v22 )
          {
            if ( v139 )
              goto LABEL_69;
          }
          else if ( !v139 )
          {
            goto LABEL_116;
          }
          v27 = *((_DWORD *)a1 + 87);
          if ( !v7 )
          {
LABEL_177:
            if ( !v139 )
            {
LABEL_172:
              if ( !v22 )
                goto LABEL_23;
LABEL_124:
              if ( !v27 )
                goto LABEL_82;
LABEL_80:
              if ( HIBYTE(v167) )
                sub_D4780((__int64)&v148, (_DWORD *)a1 + 87);
              goto LABEL_82;
            }
LABEL_63:
            if ( !v22 )
              goto LABEL_45;
            goto LABEL_44;
          }
          goto LABEL_39;
        }
LABEL_174:
        v15 = 1;
        v16 = 0;
LABEL_129:
        if ( !v22 && !v139 )
        {
          v142 = 0;
          v147 = &v148;
          goto LABEL_132;
        }
        v147 = &v148;
        goto LABEL_35;
      }
      if ( !v23 )
        goto LABEL_129;
    }
    else
    {
      v96 = sub_C98B0(0x7D6u, a1[38]);
      v26 = *((_DWORD *)a1 + 87);
      v24 = 0;
      v27 = v26;
      if ( v96 )
      {
        v142 = v96 / v140;
        if ( v96 / v140 )
        {
          if ( v25 )
          {
            if ( v26 )
              goto LABEL_23;
            v15 = 0;
            v16 = 0;
            v147 = &v168;
          }
          else
          {
            if ( v26 )
              goto LABEL_23;
            v15 = 0;
            v16 = 0;
            v147 = &v148;
          }
          goto LABEL_132;
        }
      }
      if ( v16 && v15 )
      {
        if ( v25 )
        {
          if ( v26 )
          {
LABEL_20:
            if ( !v22 )
            {
              if ( v7 )
              {
                v27 = v26;
                if ( !v25 )
                  goto LABEL_23;
              }
              goto LABEL_46;
            }
LABEL_69:
            v62 = 0;
            if ( !(unsigned __int8)sub_5E300(&v160.m128i_i64[1]) )
              v62 = (int)(sub_5E680(&v160.m128i_i64[1]) + 1);
            if ( !(unsigned __int8)sub_5E300(&v162) )
              v62 += (int)(sub_5E680(&v162) + 1);
            v63 = 0;
            if ( !(unsigned __int8)sub_5E300(&v180.m128i_i64[1]) )
              v63 = (int)(sub_5E680(&v180.m128i_i64[1]) + 1);
            if ( !(unsigned __int8)sub_5E300(&v182) )
              v63 += (int)(sub_5E680(&v182) + 1);
            if ( v63 < v62 )
            {
              v27 = *((_DWORD *)a1 + 87);
              if ( !v7 )
                goto LABEL_124;
              if ( v27 )
                goto LABEL_80;
              if ( v155 == 112 )
              {
                v139 = 0;
                v22 = 1;
                goto LABEL_122;
              }
LABEL_82:
              v64 = 0;
              if ( !(unsigned __int8)sub_5E300(&v160.m128i_i64[1]) )
                v64 = sub_5E680(&v160.m128i_i64[1]) + 1;
              if ( !(unsigned __int8)sub_5E300(&v162) )
                v64 += sub_5E680(&v162) + 1;
              v65 = v148;
              v66 = _mm_loadu_si128((const __m128i *)(a1 + 13));
              v67 = _mm_load_si128(&v151);
              v148 = *((_DWORD *)a1 + 22);
              v68 = *((_DWORD *)a1 + 23);
              *((_DWORD *)a1 + 22) = v65;
              v69 = v149;
              v149 = v68;
              v70 = a1[12];
              *((_DWORD *)a1 + 23) = v69;
              v71 = v150;
              *(__m128i *)(a1 + 13) = v67;
              v72 = _mm_loadu_si128(&v153);
              v150 = v70;
              v73 = a1[15];
              v151 = v66;
              v74 = _mm_loadu_si128((const __m128i *)a1 + 8);
              *((_DWORD *)a1 + 87) += v64;
              v30 = v155;
              a1[12] = v71;
              v75 = v152;
              *((__m128i *)a1 + 8) = v72;
              v76 = _mm_loadu_si128(&v154);
              v152 = v73;
              LODWORD(v73) = *((_DWORD *)a1 + 40);
              v153 = v74;
              v77 = _mm_loadu_si128((const __m128i *)a1 + 9);
              a1[15] = v75;
              *((__m128i *)a1 + 9) = v76;
              v154 = v77;
              *((_DWORD *)a1 + 40) = v30;
              v78 = _mm_loadu_si128((const __m128i *)(a1 + 23));
              v155 = v73;
              v79 = _mm_load_si128(&v157);
              v80 = a1[22];
              a1[22] = v156;
              v157 = v78;
              v81 = _mm_loadu_si128((const __m128i *)a1 + 13);
              v156 = v80;
              v82 = a1[25];
              a1[25] = v158;
              v158 = v82;
              v83 = a1[30];
              a1[30] = v161;
              v84 = v162;
              v161 = v83;
              v85 = a1[31];
              *(__m128i *)(a1 + 23) = v79;
              v86 = _mm_loadu_si128(&v159);
              a1[31] = v84;
              v87 = v163;
              v162 = v85;
              v88 = a1[32];
              *((__m128i *)a1 + 13) = v86;
              v89 = _mm_loadu_si128((const __m128i *)a1 + 17);
              v163 = v88;
              v90 = a1[33];
              v159 = v81;
              v91 = _mm_loadu_si128((const __m128i *)a1 + 14);
              a1[32] = v87;
              v92 = v164;
              v164 = v90;
              LODWORD(v90) = *((_DWORD *)a1 + 72);
              a1[33] = v92;
              LODWORD(v92) = v166;
              v166 = v90;
              LOBYTE(v90) = *((_BYTE *)a1 + 292);
              *((_DWORD *)a1 + 72) = v92;
              LOBYTE(v92) = v167;
              v93 = _mm_loadu_si128(&v165);
              LOBYTE(v167) = v90;
              v165 = v89;
              v29 = v184;
              v94 = _mm_loadu_si128(&v160);
              *((_BYTE *)a1 + 292) = v92;
              *((__m128i *)a1 + 17) = v93;
              *((__m128i *)a1 + 14) = v94;
              v160 = v91;
              goto LABEL_87;
            }
            v108 = 0;
            if ( !(unsigned __int8)sub_5E300(&v180.m128i_i64[1]) )
              v108 = (int)(sub_5E680(&v180.m128i_i64[1]) + 1);
            if ( !(unsigned __int8)sub_5E300(&v182) )
              v108 += (int)(sub_5E680(&v182) + 1);
            v109 = 0;
            if ( !(unsigned __int8)sub_5E300(&v160.m128i_i64[1]) )
              v109 = (int)(sub_5E680(&v160.m128i_i64[1]) + 1);
            if ( !(unsigned __int8)sub_5E300(&v162) )
              v109 += (int)(sub_5E680(&v162) + 1);
            v27 = *((_DWORD *)a1 + 87);
            if ( v109 < v108 )
            {
              if ( !v7 )
                goto LABEL_45;
              if ( !v27 )
              {
                if ( v155 != 112 )
                  goto LABEL_48;
                v139 = 1;
                v22 = 0;
LABEL_122:
                if ( (unsigned int)sub_D8490((__int64)&v148, 0x70u, a2, 8) )
                {
                  v27 = *((_DWORD *)a1 + 87);
                  if ( !v139 )
                    goto LABEL_124;
                  goto LABEL_44;
                }
                v107 = sub_D8490((__int64)&v168, 0x80u, a2, 8);
                v27 = *((_DWORD *)a1 + 87);
                if ( v107 )
                  goto LABEL_63;
                goto LABEL_177;
              }
LABEL_46:
              if ( HIBYTE(v187) )
                sub_D4780((__int64)&v168, (_DWORD *)a1 + 87);
              goto LABEL_48;
            }
            if ( v7 && !v27 )
            {
              if ( v155 == 112 )
              {
                v139 = 1;
                v22 = 1;
                goto LABEL_122;
              }
              goto LABEL_43;
            }
LABEL_44:
            v31 = sub_D9B80((__int64)&v148, v27);
            v27 = *((_DWORD *)a1 + 87);
            if ( !v31 )
              goto LABEL_124;
LABEL_45:
            if ( v27 )
              goto LABEL_46;
LABEL_48:
            v32 = 0;
            if ( !(unsigned __int8)sub_5E300(&v180.m128i_i64[1]) )
              v32 = sub_5E680(&v180.m128i_i64[1]) + 1;
            if ( !(unsigned __int8)sub_5E300(&v182) )
              v32 += sub_5E680(&v182) + 1;
            v33 = v168;
            v34 = _mm_loadu_si128((const __m128i *)(a1 + 13));
            v30 = v175;
            v35 = _mm_load_si128(&v171);
            v168 = *((_DWORD *)a1 + 22);
            v36 = *((_DWORD *)a1 + 23);
            *((_DWORD *)a1 + 22) = v33;
            v37 = v169;
            *(__m128i *)(a1 + 13) = v35;
            v38 = _mm_loadu_si128(&v173);
            v169 = v36;
            v39 = a1[12];
            *((_DWORD *)a1 + 23) = v37;
            v40 = v170;
            v171 = v34;
            v41 = _mm_loadu_si128((const __m128i *)a1 + 8);
            v170 = v39;
            v42 = a1[15];
            a1[12] = v40;
            v43 = v172;
            *((__m128i *)a1 + 8) = v38;
            v44 = _mm_loadu_si128(&v174);
            v172 = v42;
            LODWORD(v42) = *((_DWORD *)a1 + 40);
            v173 = v41;
            v45 = _mm_loadu_si128((const __m128i *)a1 + 9);
            a1[15] = v43;
            *((__m128i *)a1 + 9) = v44;
            v174 = v45;
            *((_DWORD *)a1 + 87) += v32;
            *((_DWORD *)a1 + 40) = v30;
            v175 = v42;
            v46 = a1[22];
            a1[22] = v176;
            v176 = v46;
            v47 = a1[25];
            a1[25] = v178;
            v178 = v47;
            v48 = a1[30];
            v49 = _mm_loadu_si128((const __m128i *)(a1 + 23));
            a1[30] = v181;
            v50 = _mm_load_si128(&v177);
            v181 = v48;
            v51 = a1[31];
            v177 = v49;
            v52 = _mm_loadu_si128((const __m128i *)a1 + 13);
            a1[31] = v182;
            v53 = v183;
            v182 = v51;
            v54 = a1[32];
            *(__m128i *)(a1 + 23) = v50;
            v29 = a1[33];
            v55 = _mm_loadu_si128(&v179);
            v183 = v54;
            v56 = a1[35];
            *((__m128i *)a1 + 13) = v55;
            v179 = v52;
            v57 = _mm_loadu_si128((const __m128i *)a1 + 14);
            a1[32] = v53;
            v58 = _mm_loadu_si128(&v185);
            v185.m128i_i64[1] = v56;
            a1[33] = v184;
            LODWORD(v56) = *((_DWORD *)a1 + 72);
            LODWORD(v53) = v186;
            *((__m128i *)a1 + 17) = v58;
            v59 = _mm_loadu_si128(&v180);
            v186 = v56;
            LOBYTE(v56) = *((_BYTE *)a1 + 292);
            *((_DWORD *)a1 + 72) = v53;
            v184 = v29;
            *((_BYTE *)a1 + 292) = v187;
            LOBYTE(v187) = v56;
            *((__m128i *)a1 + 14) = v59;
            v180 = v57;
            goto LABEL_87;
          }
          goto LABEL_34;
        }
        if ( v26 )
        {
LABEL_148:
          if ( v22 )
            goto LABEL_80;
LABEL_149:
          v29 = v184;
          v30 = 80;
          goto LABEL_87;
        }
        goto LABEL_174;
      }
      if ( !v25 )
      {
        if ( v26 )
          goto LABEL_170;
        goto LABEL_129;
      }
      if ( v26 )
      {
LABEL_66:
        if ( v22 )
          goto LABEL_69;
        v27 = v26;
        if ( !v7 )
          goto LABEL_45;
        goto LABEL_39;
      }
    }
    v141 = v24;
    v61 = sub_D80C0((__int64)&v168);
    v24 = v141;
    if ( !v61 )
    {
      if ( v22 && v139 )
        goto LABEL_69;
      v27 = *((_DWORD *)a1 + 87);
      if ( !v7 )
        goto LABEL_63;
      goto LABEL_39;
    }
    v142 = 0;
    v147 = &v168;
    goto LABEL_132;
  }
  if ( v16 && v15 )
  {
    if ( v23 )
      goto LABEL_20;
    goto LABEL_148;
  }
  if ( v23 )
    goto LABEL_66;
LABEL_170:
  if ( v22 )
  {
    v27 = v26;
    if ( !v7 )
      goto LABEL_172;
LABEL_39:
    if ( v27 )
    {
      if ( !v25 )
      {
        if ( !v22 )
          goto LABEL_23;
        goto LABEL_80;
      }
      if ( !v22 )
        goto LABEL_46;
      goto LABEL_44;
    }
    if ( v155 == 112 )
      goto LABEL_122;
    if ( v25 )
    {
      if ( !v22 )
        goto LABEL_48;
LABEL_43:
      v27 = 0;
      goto LABEL_44;
    }
    if ( v22 )
      goto LABEL_82;
    goto LABEL_143;
  }
LABEL_116:
  if ( !v16 )
  {
    if ( v15 )
      goto LABEL_149;
    v27 = *((_DWORD *)a1 + 87);
    if ( !v7 || v27 )
    {
LABEL_23:
      if ( v27 > 0 )
      {
        v28 = a1[2];
        if ( *(_BYTE *)(v28 + 148) )
        {
          if ( (unsigned __int8)getinf_flag(3, 4)
            && (netnode_check(&v188, "$ golang", 0, 0), v110 = netnode_altval(v188, 0, 65), v110 > 0x74) )
          {
            v111 = *(_DWORD *)(get_ph() + 4);
            v29 = v184;
            v30 = 176;
            if ( v111 )
            {
              v112 = (unsigned int)(v111 - 13);
              v30 = 256;
              if ( (unsigned int)v112 <= 0x3B )
              {
                v113 = 0x800000000000005LL;
                if ( _bittest64(&v113, v112) )
                {
                  if ( v110 != 117 )
                    v30 = 176;
                }
              }
            }
          }
          else
          {
            v29 = v184;
            v30 = 256;
          }
        }
        else
        {
          v106 = sub_C9FE0(*(_QWORD *)(v28 + 112));
          v29 = v184;
          v30 = v106;
        }
        goto LABEL_87;
      }
      goto LABEL_143;
    }
    if ( v155 == 112 )
    {
      v139 = 0;
      v22 = 0;
      goto LABEL_122;
    }
LABEL_143:
    v29 = v184;
    v30 = 32;
    goto LABEL_87;
  }
  v29 = v184;
  v30 = 96;
LABEL_87:
  if ( v29 )
  {
    v185.m128i_i64[0] = 0;
    qfree(v29);
  }
  qfree(v182);
  qfree(v180.m128i_i64[1]);
  if ( v178 )
  {
    v179.m128i_i64[0] = 0;
    qfree(v178);
  }
  if ( v176 )
  {
    v177.m128i_i64[0] = 0;
    qfree(v176);
  }
  if ( v172 )
  {
    v173.m128i_i64[0] = 0;
    qfree(v172);
  }
  if ( v170 )
  {
    v171.m128i_i64[0] = 0;
    qfree(v170);
  }
  if ( v164 )
  {
    v165.m128i_i64[0] = 0;
    qfree(v164);
  }
  qfree(v162);
  qfree(v160.m128i_i64[1]);
  if ( v158 )
  {
    v159.m128i_i64[0] = 0;
    qfree(v158);
  }
  if ( v156 )
  {
    v157.m128i_i64[0] = 0;
    qfree(v156);
  }
  if ( v152 )
  {
    v153.m128i_i64[0] = 0;
    qfree(v152);
  }
  if ( v150 )
  {
    v151.m128i_i64[0] = 0;
    qfree(v150);
  }
  return v30;
}
