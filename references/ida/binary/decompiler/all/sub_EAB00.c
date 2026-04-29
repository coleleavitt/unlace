__int64 __fastcall sub_EAB00(_QWORD *a1, __int64 a2, char *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  int v7; // r12d
  int v8; // r14d
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdx
  char v13; // r13
  char v14; // al
  char v15; // bl
  char v16; // r14
  __int64 v17; // rax
  int v18; // r13d
  __int64 v19; // rdx
  char v20; // al
  char v21; // al
  __int64 v22; // rdx
  int v23; // eax
  int v24; // r9d
  int v25; // r13d
  int v26; // edi
  int v27; // esi
  __int64 v28; // rax
  __int64 v29; // rdi
  unsigned int v30; // ebx
  char v31; // al
  int v32; // r12d
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
  char v60; // al
  char v61; // al
  unsigned __int64 v62; // r14
  char v63; // al
  unsigned __int64 v64; // rdx
  char v65; // al
  unsigned __int64 v66; // rdx
  int v67; // ebx
  int v68; // edx
  __m128i v69; // xmm0
  __m128i v70; // xmm1
  int v71; // eax
  int v72; // edx
  __int64 v73; // rax
  __int64 v74; // rdx
  __m128i v75; // xmm1
  __int64 v76; // rax
  __m128i v77; // xmm0
  __int64 v78; // rdx
  __m128i v79; // xmm1
  __m128i v80; // xmm0
  __m128i v81; // xmm0
  __m128i v82; // xmm1
  __int64 v83; // rax
  __m128i v84; // xmm0
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  __m128i v89; // xmm1
  __int64 v90; // rdx
  __int64 v91; // rax
  __m128i v92; // xmm1
  __int64 v93; // rax
  __m128i v94; // xmm0
  __int64 v95; // rdx
  __m128i v96; // xmm2
  __m128i v97; // xmm1
  int v99; // eax
  int v100; // eax
  int v101; // r9d
  __int64 v102; // rax
  __int64 v103; // rdx
  char v104; // al
  int v105; // ecx
  __int64 v106; // rdx
  unsigned __int64 v107; // rdx
  char v108; // al
  unsigned __int64 v109; // rdx
  char v110; // al
  unsigned __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rdi
  int v114; // eax
  unsigned __int64 v115; // r14
  unsigned __int64 v116; // rbx
  char v117; // al
  int v118; // eax
  __int64 v119; // rcx
  __int64 v120; // rsi
  int v121; // edi
  __m128i v122; // xmm0
  __int64 v123; // rcx
  __m128i v124; // xmm1
  int v125; // edi
  __m128i v126; // xmm1
  __m128i v127; // xmm0
  __m128i v128; // xmm1
  __m128i v129; // xmm0
  __m128i v130; // xmm0
  __int64 v131; // rcx
  __int64 v132; // rcx
  __int64 v133; // rcx
  __int64 v134; // rcx
  __int64 v135; // rcx
  __int64 v136; // rdx
  __m128i v137; // xmm1
  __m128i v138; // xmm0
  __m128i v139; // xmm1
  __m128i v140; // xmm0
  __m128i v141; // xmm1
  unsigned int v142; // r12d
  int v143; // eax
  unsigned __int64 v144; // rax
  __int64 v145; // rdx
  int v146; // eax
  int v147; // eax
  int v148; // eax
  __int64 v149; // rax
  bool v151; // [rsp+18h] [rbp-2F0h]
  __int64 v152; // [rsp+18h] [rbp-2F0h]
  unsigned __int64 v153; // [rsp+18h] [rbp-2F0h]
  unsigned __int64 v154; // [rsp+18h] [rbp-2F0h]
  __int64 v155; // [rsp+18h] [rbp-2F0h]
  unsigned __int64 v156; // [rsp+18h] [rbp-2F0h]
  bool v157; // [rsp+28h] [rbp-2E0h]
  __int64 v158; // [rsp+28h] [rbp-2E0h]
  unsigned __int64 v159; // [rsp+28h] [rbp-2E0h]
  int v160; // [rsp+34h] [rbp-2D4h]
  int v161; // [rsp+38h] [rbp-2D0h]
  int v162; // [rsp+38h] [rbp-2D0h]
  unsigned __int64 v163; // [rsp+38h] [rbp-2D0h]
  int v164; // [rsp+40h] [rbp-2C8h]
  int v165; // [rsp+40h] [rbp-2C8h]
  unsigned __int64 v166; // [rsp+40h] [rbp-2C8h]
  __int64 *v167; // [rsp+48h] [rbp-2C0h]
  __int64 v168; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v169; // [rsp+58h] [rbp-2B0h]
  __m128i v170; // [rsp+60h] [rbp-2A8h] BYREF
  __int64 v171; // [rsp+70h] [rbp-298h]
  __m128i v172; // [rsp+78h] [rbp-290h] BYREF
  __m128i v173; // [rsp+88h] [rbp-280h] BYREF
  __int64 v174; // [rsp+98h] [rbp-270h]
  __int64 v175; // [rsp+A0h] [rbp-268h]
  __int64 v176; // [rsp+A8h] [rbp-260h]
  __m128i v177; // [rsp+B0h] [rbp-258h] BYREF
  __int64 v178; // [rsp+C0h] [rbp-248h]
  __m128i v179; // [rsp+C8h] [rbp-240h] BYREF
  __m128i v180; // [rsp+D8h] [rbp-230h] BYREF
  __int64 v181; // [rsp+E8h] [rbp-220h]
  __int64 v182; // [rsp+F0h] [rbp-218h] BYREF
  __int64 v183; // [rsp+F8h] [rbp-210h]
  __int64 v184; // [rsp+100h] [rbp-208h]
  __m128i v185; // [rsp+108h] [rbp-200h] BYREF
  int v186; // [rsp+118h] [rbp-1F0h]
  __int16 v187; // [rsp+11Ch] [rbp-1ECh]
  __int64 v188; // [rsp+120h] [rbp-1E8h] BYREF
  __int64 v189; // [rsp+128h] [rbp-1E0h]
  __m128i v190; // [rsp+130h] [rbp-1D8h] BYREF
  __int64 v191; // [rsp+140h] [rbp-1C8h]
  __m128i v192; // [rsp+148h] [rbp-1C0h] BYREF
  __m128i v193; // [rsp+158h] [rbp-1B0h] BYREF
  __int64 v194; // [rsp+168h] [rbp-1A0h]
  __int64 v195; // [rsp+170h] [rbp-198h]
  __int64 v196; // [rsp+178h] [rbp-190h]
  __m128i v197; // [rsp+180h] [rbp-188h] BYREF
  __int64 v198; // [rsp+190h] [rbp-178h]
  __m128i v199; // [rsp+198h] [rbp-170h] BYREF
  __m128i v200; // [rsp+1A8h] [rbp-160h] BYREF
  __int64 v201; // [rsp+1B8h] [rbp-150h]
  __int64 v202; // [rsp+1C0h] [rbp-148h] BYREF
  __int64 v203; // [rsp+1C8h] [rbp-140h]
  __int64 v204; // [rsp+1D0h] [rbp-138h]
  __m128i v205; // [rsp+1D8h] [rbp-130h] BYREF
  int v206; // [rsp+1E8h] [rbp-120h]
  __int16 v207; // [rsp+1ECh] [rbp-11Ch]
  __int64 v208; // [rsp+1F0h] [rbp-118h] BYREF
  __int64 v209; // [rsp+1F8h] [rbp-110h]
  __m128i v210; // [rsp+200h] [rbp-108h] BYREF
  __int64 v211; // [rsp+210h] [rbp-F8h]
  __m128i v212; // [rsp+218h] [rbp-F0h] BYREF
  __m128i v213; // [rsp+228h] [rbp-E0h] BYREF
  __int64 v214; // [rsp+238h] [rbp-D0h]
  __int64 v215; // [rsp+240h] [rbp-C8h]
  __int64 v216; // [rsp+248h] [rbp-C0h]
  __m128i v217; // [rsp+250h] [rbp-B8h] BYREF
  __int64 v218; // [rsp+260h] [rbp-A8h]
  __m128i v219; // [rsp+268h] [rbp-A0h] BYREF
  __m128i v220; // [rsp+278h] [rbp-90h] BYREF
  __int64 v221; // [rsp+288h] [rbp-80h]
  __int64 v222; // [rsp+290h] [rbp-78h] BYREF
  __int64 v223; // [rsp+298h] [rbp-70h]
  __int64 v224; // [rsp+2A0h] [rbp-68h]
  __m128i v225; // [rsp+2A8h] [rbp-60h] BYREF
  int v226; // [rsp+2B8h] [rbp-50h]
  __int16 v227; // [rsp+2BCh] [rbp-4Ch]
  unsigned __int64 v228; // [rsp+2C8h] [rbp-40h]

  v4 = a1[38];
  v5 = *(_QWORD *)(*a1 + 480LL);
  v228 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(*(_QWORD *)(v5 + 112) + 48LL) & 8;
  v8 = *(_DWORD *)(*(_QWORD *)(a1[2] + 112LL) + 80LL);
  v160 = v8;
  v9 = sub_E1500(a1) / v8;
  *((_DWORD *)a1 + 87) = v9;
  if ( (int)v9 < 0 || (v12 = a1[2], (int)v9 >= *(_DWORD *)(v12 + 656)) )
  {
    sub_32DD50(a1[1], v4, 38, v8, v10, v11);
    *((_DWORD *)a1 + 87) = 0;
    goto LABEL_27;
  }
  if ( *(_BYTE *)(v12 + 148) == 1 )
  {
    v30 = 256;
    if ( (_DWORD)v9 )
      return v30;
    goto LABEL_27;
  }
  if ( !(_DWORD)v9 )
  {
LABEL_27:
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
  v170 = 0;
  v18 = 2;
  v19 = *(_QWORD *)(v17 + 480);
  v172 = 0;
  v168 = 0;
  v169 = 0;
  v171 = 0;
  v174 = 0;
  v175 = v19;
  v176 = 0;
  v178 = 0;
  v180 = (__m128i)(unsigned __int64)v17;
  v181 = 0;
  v182 = 0;
  v183 = 0;
  v184 = 0;
  v186 = -1;
  v187 = 0;
  v188 = 0;
  v189 = 0;
  v191 = 0;
  v194 = 0;
  v195 = v19;
  v196 = 0;
  v173 = 0;
  v177 = 0;
  v179 = 0;
  v185 = 0;
  v190 = 0;
  v192 = 0;
  v193 = 0;
  v197 = 0;
  v198 = 0;
  v200 = (__m128i)(unsigned __int64)v17;
  v201 = 0;
  v202 = 0;
  v203 = 0;
  v204 = 0;
  v206 = -1;
  v207 = 0;
  v199 = 0;
  v205 = 0;
  if ( !v7 )
    v18 = 2 * (*(_BYTE *)(v19 + 148) != 0);
  if ( !(unsigned __int8)sub_E16D0(a1) )
  {
    sub_DFB70((__int64)&v168, 0x70u, a2, v18);
    if ( *(_BYTE *)(a1[2] + 148LL) != 2 )
    {
LABEL_13:
      v20 = sub_63F80(&v180.m128i_i64[1]);
      goto LABEL_14;
    }
    v102 = *a1;
    v227 = 0;
    v103 = *(_QWORD *)(v102 + 480);
    v220 = (__m128i)(unsigned __int64)v102;
    v208 = 0;
    v209 = 0;
    v211 = 0;
    v214 = 0;
    v215 = v103;
    v216 = 0;
    v218 = 0;
    v221 = 0;
    v222 = 0;
    v223 = 0;
    v224 = 0;
    v226 = -1;
    v210 = 0;
    v212 = 0;
    v213 = 0;
    v217 = 0;
    v219 = 0;
    v225 = 0;
    if ( (unsigned __int8)sub_63F80(&v180.m128i_i64[1]) )
    {
      v104 = sub_63F80(&v182);
      v105 = 0;
      v106 = 0;
      if ( v104 )
        goto LABEL_150;
    }
    else
    {
      v155 = (int)(sub_64300(&v180.m128i_i64[1]) + 1);
      v117 = sub_63F80(&v182);
      v106 = v155;
      if ( v117 )
      {
LABEL_201:
        v105 = 2 * (v106 != 0);
LABEL_150:
        sub_DFB70((__int64)&v208, 0xB0u, a2, v105);
        if ( (unsigned __int8)sub_63F80(&v220.m128i_i64[1]) )
        {
          if ( !(unsigned __int8)sub_63F80(&v180.m128i_i64[1]) )
          {
            v118 = sub_64300(&v180.m128i_i64[1]);
            v107 = 0;
            v154 = v118 + 1;
            goto LABEL_153;
          }
LABEL_152:
          v154 = 0;
          v107 = 0;
LABEL_153:
          v166 = v107;
          v108 = sub_63F80(&v222);
          v109 = v166;
          v158 = 0;
          if ( !v108 )
          {
            v147 = sub_64300(&v222);
            v109 = v166;
            v158 = v147 + 1;
          }
          v163 = v109;
          v110 = sub_63F80(&v182);
          v111 = v163;
          if ( !v110 )
          {
            v146 = sub_64300(&v182);
            v111 = v163;
            v154 += v146 + 1;
          }
          v112 = v224;
          v113 = v224;
          if ( v158 + v111 < v154 )
            goto LABEL_158;
          v119 = v169;
          v120 = v209;
LABEL_209:
          v121 = v208;
          v209 = v119;
          v122 = _mm_load_si128(&v170);
          v123 = v211;
          v169 = v120;
          v124 = _mm_load_si128(&v210);
          LODWORD(v208) = v168;
          LODWORD(v168) = v121;
          v125 = HIDWORD(v208);
          v170 = v124;
          v126 = _mm_loadu_si128(&v212);
          HIDWORD(v208) = HIDWORD(v168);
          v210 = v122;
          v127 = _mm_loadu_si128(&v172);
          v211 = v171;
          v171 = v123;
          LODWORD(v123) = v214;
          v172 = v126;
          v128 = _mm_loadu_si128(&v213);
          LODWORD(v214) = v174;
          v212 = v127;
          v129 = _mm_loadu_si128(&v173);
          HIDWORD(v168) = v125;
          v173 = v128;
          v213 = v129;
          v130 = _mm_load_si128(&v177);
          LODWORD(v174) = v123;
          v131 = v216;
          v216 = v176;
          v176 = v131;
          v132 = v218;
          v218 = v178;
          v178 = v132;
          v133 = v221;
          v221 = v181;
          v181 = v133;
          v134 = v222;
          v222 = v182;
          v182 = v134;
          v113 = v184;
          v135 = v223;
          v223 = v183;
          v136 = v185.m128i_i64[1];
          v184 = v112;
          v137 = _mm_load_si128(&v217);
          v217 = v130;
          v138 = _mm_loadu_si128(&v179);
          v183 = v135;
          v177 = v137;
          v139 = _mm_loadu_si128(&v219);
          v219 = v138;
          v140 = _mm_loadu_si128(&v180);
          v179 = v139;
          v185 = _mm_loadu_si128(&v225);
          v224 = v113;
          v225.m128i_i64[1] = v136;
          LODWORD(v136) = v226;
          v141 = _mm_loadu_si128(&v220);
          v226 = v186;
          v186 = v136;
          LOBYTE(v136) = v227;
          v180 = v141;
          LOBYTE(v227) = v187;
          LOBYTE(v187) = v136;
          v220 = v140;
LABEL_158:
          if ( v113 )
          {
            v225.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          qfree();
          if ( v218 )
          {
            v219.m128i_i64[0] = 0;
            qfree();
          }
          if ( v216 )
          {
            v217.m128i_i64[0] = 0;
            qfree();
          }
          if ( v211 )
          {
            v212.m128i_i64[0] = 0;
            qfree();
          }
          if ( v209 )
          {
            v210.m128i_i64[0] = 0;
            qfree();
          }
          goto LABEL_13;
        }
        v156 = (int)(sub_64300(&v220.m128i_i64[1]) + 1);
        if ( (unsigned __int8)sub_63F80(&v180.m128i_i64[1]) )
        {
          if ( !v156 )
            goto LABEL_152;
        }
        else
        {
          v159 = v156;
          v148 = sub_64300(&v180.m128i_i64[1]);
          v107 = v156;
          v154 = v148 + 1;
          if ( v154 >= v107 )
          {
            if ( v159 )
            {
              v120 = v209;
              v119 = v169;
              v149 = 0;
              while ( *(_DWORD *)(v209 + 4 * v149) == *(_DWORD *)(v169 + 4 * v149) )
              {
                if ( ++v149 == v159 )
                  goto LABEL_153;
              }
              v112 = v224;
              goto LABEL_209;
            }
            goto LABEL_153;
          }
        }
        v119 = v169;
        v120 = v209;
        v112 = v224;
        goto LABEL_209;
      }
    }
    v106 += (int)(sub_64300(&v182) + 1);
    goto LABEL_201;
  }
  sub_DFB70((__int64)&v168, 0xB0u, a2, 0);
  v20 = sub_63F80(&v180.m128i_i64[1]);
LABEL_14:
  if ( v20 )
  {
    v21 = sub_63F80(&v182);
    v151 = 0;
    v22 = 0;
    if ( v21 )
      goto LABEL_16;
    goto LABEL_53;
  }
  v152 = (int)(sub_64300(&v180.m128i_i64[1]) + 1);
  v60 = sub_63F80(&v182);
  v22 = v152;
  if ( !v60 )
LABEL_53:
    v22 += (int)(sub_64300(&v182) + 1);
  v151 = v22 != 0;
LABEL_16:
  v23 = sub_DFB70((__int64)&v188, 0x80u, a2, v18);
  v24 = *((_DWORD *)a1 + 87);
  v25 = v23;
  v157 = v23 != 0;
  v26 = v24;
  if ( !v24 )
  {
    if ( *(_BYTE *)(a1[2] + 144LL) )
    {
      if ( v16 && v15 )
      {
        if ( v23 )
        {
LABEL_33:
          v167 = &v188;
          v15 = 1;
          v16 = 0;
LABEL_34:
          v164 = v24;
          if ( !(unsigned __int8)sub_DF7C0((__int64)v167) )
            goto LABEL_35;
          v162 = 0;
          v24 = v164;
LABEL_130:
          v165 = v24;
          if ( (*(_BYTE *)(*a1 + 24LL) & 8) != 0 )
          {
            v100 = sub_E1140(a1);
            v101 = v165;
            if ( v100 >= 0 )
            {
LABEL_132:
              v101 = v100 / v160;
              goto LABEL_133;
            }
          }
          else
          {
            v100 = sub_E9C40((__int64)a1, -1, *(int *)(a1[1] + 120LL));
            v101 = v165;
            if ( v100 >= 0 )
              goto LABEL_132;
          }
          if ( !*((_BYTE *)v167 + 205) )
          {
            v29 = v204;
            v30 = 0;
            goto LABEL_85;
          }
LABEL_133:
          if ( *((_DWORD *)a1 + 87) < v101 )
            *((_DWORD *)a1 + 87) = v101;
          if ( v162 && *((_DWORD *)a1 + 87) )
            goto LABEL_114;
LABEL_35:
          if ( v151 )
          {
            if ( v157 )
              goto LABEL_67;
          }
          else if ( !v157 )
          {
            goto LABEL_114;
          }
          v27 = *((_DWORD *)a1 + 87);
          if ( !v7 )
          {
LABEL_174:
            if ( !v157 )
            {
LABEL_170:
              if ( !v151 )
                goto LABEL_23;
LABEL_122:
              if ( !v27 )
                goto LABEL_80;
LABEL_78:
              if ( HIBYTE(v187) )
                sub_D2300((__int64)&v168, (_DWORD *)a1 + 87);
              goto LABEL_80;
            }
LABEL_61:
            if ( !v151 )
              goto LABEL_44;
            goto LABEL_43;
          }
          goto LABEL_38;
        }
LABEL_172:
        v15 = 1;
        v16 = 0;
LABEL_127:
        if ( !v151 && !v157 )
        {
          v162 = 0;
          v167 = &v168;
          goto LABEL_130;
        }
        v167 = &v168;
        goto LABEL_34;
      }
      if ( !v23 )
        goto LABEL_127;
    }
    else
    {
      v99 = sub_D3E80();
      v26 = *((_DWORD *)a1 + 87);
      v24 = 0;
      v27 = v26;
      if ( v99 )
      {
        v162 = v99 / v160;
        if ( v99 / v160 )
        {
          if ( v25 )
          {
            if ( v26 )
              goto LABEL_23;
            v167 = &v188;
            v15 = 0;
            v16 = 0;
          }
          else
          {
            if ( v26 )
              goto LABEL_23;
            v15 = 0;
            v16 = 0;
            v167 = &v168;
          }
          goto LABEL_130;
        }
      }
      if ( v16 && v15 )
      {
        if ( v25 )
        {
          if ( v26 )
          {
LABEL_20:
            if ( !v151 )
            {
              if ( v7 )
              {
                v27 = v26;
                if ( !v25 )
                  goto LABEL_23;
              }
              goto LABEL_45;
            }
LABEL_67:
            v62 = 0;
            if ( !(unsigned __int8)sub_63F80(&v180.m128i_i64[1]) )
              v62 = (int)(sub_64300(&v180.m128i_i64[1]) + 1);
            if ( !(unsigned __int8)sub_63F80(&v182) )
              v62 += (int)(sub_64300(&v182) + 1);
            v63 = sub_63F80(&v200.m128i_i64[1]);
            v64 = 0;
            if ( !v63 )
              v64 = (int)(sub_64300(&v200.m128i_i64[1]) + 1);
            v153 = v64;
            v65 = sub_63F80(&v202);
            v66 = v153;
            if ( !v65 )
              v66 = (int)(sub_64300(&v202) + 1) + v153;
            if ( v66 < v62 )
            {
              v27 = *((_DWORD *)a1 + 87);
              if ( !v7 )
                goto LABEL_122;
              if ( v27 )
                goto LABEL_78;
              if ( (_DWORD)v174 == 112 )
              {
                v157 = 0;
                v151 = 1;
                goto LABEL_120;
              }
LABEL_80:
              v67 = 0;
              if ( !(unsigned __int8)sub_63F80(&v180.m128i_i64[1]) )
                v67 = sub_64300(&v180.m128i_i64[1]) + 1;
              if ( !(unsigned __int8)sub_63F80(&v182) )
                v67 += sub_64300(&v182) + 1;
              v68 = v168;
              v69 = _mm_loadu_si128((const __m128i *)(a1 + 13));
              v70 = _mm_load_si128(&v170);
              LODWORD(v168) = *((_DWORD *)a1 + 22);
              v71 = *((_DWORD *)a1 + 23);
              *((_DWORD *)a1 + 22) = v68;
              v72 = HIDWORD(v168);
              HIDWORD(v168) = v71;
              v73 = a1[12];
              *((_DWORD *)a1 + 23) = v72;
              v74 = v169;
              *(__m128i *)(a1 + 13) = v70;
              v75 = _mm_loadu_si128(&v172);
              v169 = v73;
              v76 = a1[15];
              v170 = v69;
              v77 = _mm_loadu_si128((const __m128i *)a1 + 8);
              *((_DWORD *)a1 + 87) += v67;
              v30 = v174;
              a1[12] = v74;
              v78 = v171;
              *((__m128i *)a1 + 8) = v75;
              v79 = _mm_loadu_si128(&v173);
              v171 = v76;
              LODWORD(v76) = *((_DWORD *)a1 + 40);
              v172 = v77;
              v80 = _mm_loadu_si128((const __m128i *)a1 + 9);
              a1[15] = v78;
              *((__m128i *)a1 + 9) = v79;
              v173 = v80;
              *((_DWORD *)a1 + 40) = v30;
              v81 = _mm_loadu_si128((const __m128i *)(a1 + 23));
              LODWORD(v174) = v76;
              v82 = _mm_load_si128(&v177);
              v83 = a1[22];
              a1[22] = v176;
              v177 = v81;
              v84 = _mm_loadu_si128((const __m128i *)a1 + 13);
              v176 = v83;
              v85 = a1[25];
              a1[25] = v178;
              v178 = v85;
              v86 = a1[30];
              a1[30] = v181;
              v87 = v182;
              v181 = v86;
              v88 = a1[31];
              *(__m128i *)(a1 + 23) = v82;
              v89 = _mm_loadu_si128(&v179);
              a1[31] = v87;
              v90 = v183;
              v182 = v88;
              v91 = a1[32];
              *((__m128i *)a1 + 13) = v89;
              v92 = _mm_loadu_si128((const __m128i *)a1 + 17);
              v183 = v91;
              v93 = a1[33];
              v179 = v84;
              v94 = _mm_loadu_si128((const __m128i *)a1 + 14);
              a1[32] = v90;
              v95 = v184;
              v184 = v93;
              LODWORD(v93) = *((_DWORD *)a1 + 72);
              a1[33] = v95;
              LODWORD(v95) = v186;
              v186 = v93;
              LOBYTE(v93) = *((_BYTE *)a1 + 292);
              *((_DWORD *)a1 + 72) = v95;
              LOBYTE(v95) = v187;
              v96 = _mm_loadu_si128(&v185);
              LOBYTE(v187) = v93;
              v185 = v92;
              v29 = v204;
              v97 = _mm_loadu_si128(&v180);
              *((_BYTE *)a1 + 292) = v95;
              *((__m128i *)a1 + 17) = v96;
              *((__m128i *)a1 + 14) = v97;
              v180 = v94;
              goto LABEL_85;
            }
            v115 = 0;
            if ( !(unsigned __int8)sub_63F80(&v200.m128i_i64[1]) )
              v115 = (int)(sub_64300(&v200.m128i_i64[1]) + 1);
            if ( !(unsigned __int8)sub_63F80(&v202) )
              v115 += (int)(sub_64300(&v202) + 1);
            v116 = 0;
            if ( !(unsigned __int8)sub_63F80(&v180.m128i_i64[1]) )
              v116 = (int)(sub_64300(&v180.m128i_i64[1]) + 1);
            if ( !(unsigned __int8)sub_63F80(&v182) )
              v116 += (int)(sub_64300(&v182) + 1);
            v27 = *((_DWORD *)a1 + 87);
            if ( v116 < v115 )
            {
              if ( !v7 )
                goto LABEL_44;
              if ( !v27 )
              {
                if ( (_DWORD)v174 != 112 )
                  goto LABEL_47;
                v157 = 1;
                v151 = 0;
LABEL_120:
                if ( (unsigned int)sub_DFB70((__int64)&v168, 0x70u, a2, 8) )
                {
                  v27 = *((_DWORD *)a1 + 87);
                  if ( !v157 )
                    goto LABEL_122;
                  goto LABEL_43;
                }
                v114 = sub_DFB70((__int64)&v188, 0x80u, a2, 8);
                v27 = *((_DWORD *)a1 + 87);
                if ( v114 )
                  goto LABEL_61;
                goto LABEL_174;
              }
LABEL_45:
              if ( HIBYTE(v207) )
                sub_D2300((__int64)&v188, (_DWORD *)a1 + 87);
              goto LABEL_47;
            }
            if ( v7 && !v27 )
            {
              if ( (_DWORD)v174 == 112 )
              {
                v157 = 1;
                v151 = 1;
                goto LABEL_120;
              }
              goto LABEL_42;
            }
LABEL_43:
            v31 = sub_E13C0((__int64)&v168, v27);
            v27 = *((_DWORD *)a1 + 87);
            if ( !v31 )
              goto LABEL_122;
LABEL_44:
            if ( v27 )
              goto LABEL_45;
LABEL_47:
            v32 = 0;
            if ( !(unsigned __int8)sub_63F80(&v200.m128i_i64[1]) )
              v32 = sub_64300(&v200.m128i_i64[1]) + 1;
            if ( !(unsigned __int8)sub_63F80(&v202) )
              v32 += sub_64300(&v202) + 1;
            v33 = v188;
            v34 = _mm_loadu_si128((const __m128i *)(a1 + 13));
            v30 = v194;
            v35 = _mm_load_si128(&v190);
            LODWORD(v188) = *((_DWORD *)a1 + 22);
            v36 = *((_DWORD *)a1 + 23);
            *((_DWORD *)a1 + 22) = v33;
            v37 = HIDWORD(v188);
            *(__m128i *)(a1 + 13) = v35;
            v38 = _mm_loadu_si128(&v192);
            HIDWORD(v188) = v36;
            v39 = a1[12];
            *((_DWORD *)a1 + 23) = v37;
            v40 = v189;
            v190 = v34;
            v41 = _mm_loadu_si128((const __m128i *)a1 + 8);
            v189 = v39;
            v42 = a1[15];
            a1[12] = v40;
            v43 = v191;
            *((__m128i *)a1 + 8) = v38;
            v44 = _mm_loadu_si128(&v193);
            v191 = v42;
            LODWORD(v42) = *((_DWORD *)a1 + 40);
            v192 = v41;
            v45 = _mm_loadu_si128((const __m128i *)a1 + 9);
            a1[15] = v43;
            *((__m128i *)a1 + 9) = v44;
            v193 = v45;
            *((_DWORD *)a1 + 87) += v32;
            *((_DWORD *)a1 + 40) = v30;
            LODWORD(v194) = v42;
            v46 = a1[22];
            a1[22] = v196;
            v196 = v46;
            v47 = a1[25];
            a1[25] = v198;
            v198 = v47;
            v48 = a1[30];
            v49 = _mm_loadu_si128((const __m128i *)(a1 + 23));
            a1[30] = v201;
            v50 = _mm_load_si128(&v197);
            v201 = v48;
            v51 = a1[31];
            v197 = v49;
            v52 = _mm_loadu_si128((const __m128i *)a1 + 13);
            a1[31] = v202;
            v53 = v203;
            v202 = v51;
            v54 = a1[32];
            *(__m128i *)(a1 + 23) = v50;
            v29 = a1[33];
            v55 = _mm_loadu_si128(&v199);
            v203 = v54;
            v56 = a1[35];
            *((__m128i *)a1 + 13) = v55;
            v199 = v52;
            v57 = _mm_loadu_si128((const __m128i *)a1 + 14);
            a1[32] = v53;
            v58 = _mm_loadu_si128(&v205);
            v205.m128i_i64[1] = v56;
            a1[33] = v204;
            LODWORD(v56) = *((_DWORD *)a1 + 72);
            LODWORD(v53) = v206;
            *((__m128i *)a1 + 17) = v58;
            v59 = _mm_loadu_si128(&v200);
            v206 = v56;
            LOBYTE(v56) = *((_BYTE *)a1 + 292);
            *((_DWORD *)a1 + 72) = v53;
            v204 = v29;
            *((_BYTE *)a1 + 292) = v207;
            LOBYTE(v207) = v56;
            *((__m128i *)a1 + 14) = v59;
            v200 = v57;
            goto LABEL_85;
          }
          goto LABEL_33;
        }
        if ( v26 )
        {
LABEL_146:
          if ( v151 )
            goto LABEL_78;
LABEL_147:
          v29 = v204;
          v30 = 80;
          goto LABEL_85;
        }
        goto LABEL_172;
      }
      if ( !v25 )
      {
        if ( v26 )
          goto LABEL_168;
        goto LABEL_127;
      }
      if ( v26 )
      {
LABEL_64:
        if ( v151 )
          goto LABEL_67;
        v27 = v26;
        if ( !v7 )
          goto LABEL_44;
        goto LABEL_38;
      }
    }
    v161 = v24;
    v61 = sub_DF7C0((__int64)&v188);
    v24 = v161;
    if ( !v61 )
    {
      if ( v151 && v157 )
        goto LABEL_67;
      v27 = *((_DWORD *)a1 + 87);
      if ( !v7 )
        goto LABEL_61;
      goto LABEL_38;
    }
    v162 = 0;
    v167 = &v188;
    goto LABEL_130;
  }
  if ( v16 && v15 )
  {
    if ( v23 )
      goto LABEL_20;
    goto LABEL_146;
  }
  if ( v23 )
    goto LABEL_64;
LABEL_168:
  if ( v151 )
  {
    v27 = v26;
    if ( !v7 )
      goto LABEL_170;
LABEL_38:
    if ( v27 )
    {
      if ( !v25 )
      {
        if ( !v151 )
          goto LABEL_23;
        goto LABEL_78;
      }
      if ( !v151 )
        goto LABEL_45;
      goto LABEL_43;
    }
    if ( (_DWORD)v174 == 112 )
      goto LABEL_120;
    if ( v25 )
    {
      if ( !v151 )
        goto LABEL_47;
LABEL_42:
      v27 = 0;
      goto LABEL_43;
    }
    if ( v151 )
      goto LABEL_80;
    goto LABEL_141;
  }
LABEL_114:
  if ( !v16 )
  {
    if ( v15 )
      goto LABEL_147;
    v27 = *((_DWORD *)a1 + 87);
    if ( !v7 || v27 )
    {
LABEL_23:
      if ( v27 > 0 )
      {
        v28 = a1[2];
        if ( *(_BYTE *)(v28 + 148) )
        {
          if ( (unsigned __int8)getinf_flag() && (netnode_check(), v142 = netnode_altval(), v142 > 0x74) )
          {
            v143 = *(_DWORD *)(get_ph() + 4);
            v29 = v204;
            v30 = 176;
            if ( v143 )
            {
              v144 = (unsigned int)(v143 - 13);
              v30 = 256;
              if ( (unsigned int)v144 <= 0x3B )
              {
                v145 = 0x800000000000005LL;
                if ( _bittest64(&v145, v144) )
                {
                  if ( v142 != 117 )
                    v30 = 176;
                }
              }
            }
          }
          else
          {
            v29 = v204;
            v30 = 256;
          }
        }
        else
        {
          v29 = v204;
          v30 = (*(_DWORD *)(*(_QWORD *)(v28 + 112) + 48LL) & 8) == 0 ? 112 : 48;
        }
        goto LABEL_85;
      }
      goto LABEL_141;
    }
    if ( (_DWORD)v174 == 112 )
    {
      v157 = 0;
      v151 = 0;
      goto LABEL_120;
    }
LABEL_141:
    v29 = v204;
    v30 = 32;
    goto LABEL_85;
  }
  v29 = v204;
  v30 = 96;
LABEL_85:
  if ( v29 )
  {
    v205.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  qfree();
  if ( v198 )
  {
    v199.m128i_i64[0] = 0;
    qfree();
  }
  if ( v196 )
  {
    v197.m128i_i64[0] = 0;
    qfree();
  }
  if ( v191 )
  {
    v192.m128i_i64[0] = 0;
    qfree();
  }
  if ( v189 )
  {
    v190.m128i_i64[0] = 0;
    qfree();
  }
  if ( v184 )
  {
    v185.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  qfree();
  if ( v178 )
  {
    v179.m128i_i64[0] = 0;
    qfree();
  }
  if ( v176 )
  {
    v177.m128i_i64[0] = 0;
    qfree();
  }
  if ( v171 )
  {
    v172.m128i_i64[0] = 0;
    qfree();
  }
  if ( v169 )
  {
    v170.m128i_i64[0] = 0;
    qfree();
  }
  return v30;
}
