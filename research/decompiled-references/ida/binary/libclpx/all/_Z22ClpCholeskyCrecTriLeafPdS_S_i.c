void __fastcall ClpCholeskyCrecTriLeaf(double *a1, double *a2, double *a3, int a4)
{
  double *v5; // r12
  double *v6; // rbx
  int v7; // r8d
  __int64 v8; // r10
  double *v9; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rdx
  unsigned int v16; // eax
  double v17; // xmm0_8
  __int64 v18; // rax
  __int64 v19; // rdx
  double *v20; // rcx
  __m128d v21; // xmm14
  __m128d v22; // xmm13
  __m128d v23; // xmm12
  __m128d v24; // xmm11
  __m128d v25; // xmm10
  double *v26; // r15
  double *v27; // r14
  __m128d v28; // xmm9
  __m128d v29; // xmm8
  double *v30; // rdi
  __int64 v31; // rdx
  double *v32; // rsi
  __int64 v33; // rax
  double *v34; // rdi
  unsigned int v35; // edx
  __m128d v36; // xmm7
  __m128d v37; // xmm6
  __m128d v38; // xmm5
  __m128d v39; // xmm2
  __m128d v40; // xmm3
  __m128d v41; // xmm1
  __m128d v42; // xmm4
  __int64 v43; // rdx
  double *v44; // rax
  double v45; // xmm0_8
  double *v46; // rax
  __int64 v47; // rdx
  double v48; // xmm0_8
  double *v49; // rcx
  double *v50; // rbp
  double *v51; // r10
  unsigned int v52; // r12d
  __int64 v53; // rbx
  double v54; // xmm6_8
  double v55; // xmm5_8
  double v56; // xmm4_8
  double v57; // xmm5_8
  double v58; // xmm4_8
  double v59; // xmm0_8
  double v60; // xmm6_8
  double v61; // xmm2_8
  double v62; // xmm5_8
  double v63; // xmm1_8
  double v64; // xmm4_8
  double v65; // xmm3_8
  double v66; // xmm4_8
  double v67; // xmm3_8
  double v68; // xmm5_8
  double v69; // xmm4_8
  double v70; // xmm6_8
  double v71; // xmm0_8
  double v72; // xmm2_8
  double v73; // xmm5_8
  double v74; // xmm1_8
  double v75; // xmm4_8
  double v76; // xmm3_8
  double v77; // xmm4_8
  double v78; // xmm3_8
  double v79; // xmm5_8
  double v80; // xmm4_8
  double v81; // xmm6_8
  double v82; // xmm0_8
  double v83; // xmm2_8
  double v84; // xmm5_8
  double v85; // xmm1_8
  double v86; // xmm4_8
  double v87; // xmm3_8
  double v88; // xmm4_8
  double v89; // xmm3_8
  double v90; // xmm5_8
  double v91; // xmm4_8
  double v92; // xmm6_8
  double v93; // xmm0_8
  double v94; // xmm2_8
  double v95; // xmm5_8
  double v96; // xmm1_8
  double v97; // xmm4_8
  double v98; // xmm3_8
  double v99; // xmm4_8
  double v100; // xmm3_8
  double v101; // xmm5_8
  double v102; // xmm4_8
  double v103; // xmm6_8
  double v104; // xmm0_8
  double v105; // xmm2_8
  double v106; // xmm5_8
  double v107; // xmm1_8
  double v108; // xmm4_8
  double v109; // xmm3_8
  double v110; // xmm4_8
  double v111; // xmm3_8
  double v112; // xmm5_8
  double v113; // xmm4_8
  double v114; // xmm6_8
  double v115; // xmm0_8
  double v116; // xmm2_8
  double v117; // xmm5_8
  double v118; // xmm1_8
  double v119; // xmm4_8
  double v120; // xmm3_8
  double v121; // xmm4_8
  double v122; // xmm3_8
  double v123; // xmm5_8
  double v124; // xmm4_8
  double v125; // xmm6_8
  double v126; // xmm0_8
  double v127; // xmm2_8
  double v128; // xmm5_8
  double v129; // xmm1_8
  double v130; // xmm4_8
  double v131; // xmm3_8
  double v132; // xmm4_8
  double v133; // xmm3_8
  double v134; // xmm5_8
  double v135; // xmm4_8
  double v136; // xmm6_8
  double v137; // xmm0_8
  double v138; // xmm2_8
  double v139; // xmm5_8
  double v140; // xmm1_8
  double v141; // xmm4_8
  double v142; // xmm3_8
  double v143; // xmm4_8
  double v144; // xmm5_8
  double v145; // xmm4_8
  double v146; // xmm0_8
  double v147; // xmm2_8
  double v148; // xmm5_8
  double v149; // xmm6_8
  double v150; // xmm1_8
  double v151; // xmm4_8
  double v152; // xmm3_8
  double v153; // xmm4_8
  double v154; // xmm3_8
  double v155; // xmm5_8
  double v156; // xmm4_8
  double v157; // xmm6_8
  double v158; // xmm0_8
  double v159; // xmm2_8
  double v160; // xmm5_8
  double v161; // xmm1_8
  double v162; // xmm4_8
  double v163; // xmm3_8
  double v164; // xmm4_8
  double v165; // xmm3_8
  double v166; // xmm5_8
  double v167; // xmm4_8
  double v168; // xmm6_8
  double v169; // xmm0_8
  double v170; // xmm2_8
  double v171; // xmm5_8
  double v172; // xmm1_8
  double v173; // xmm4_8
  double v174; // xmm3_8
  double v175; // xmm4_8
  double v176; // xmm3_8
  double v177; // xmm5_8
  double v178; // xmm4_8
  double v179; // xmm6_8
  double v180; // xmm0_8
  double v181; // xmm2_8
  double v182; // xmm5_8
  double v183; // xmm1_8
  double v184; // xmm4_8
  double v185; // xmm3_8
  double v186; // xmm4_8
  double v187; // xmm3_8
  double v188; // xmm5_8
  double v189; // xmm4_8
  double v190; // xmm6_8
  double v191; // xmm0_8
  double v192; // xmm2_8
  double v193; // xmm5_8
  double v194; // xmm1_8
  double v195; // xmm4_8
  double v196; // xmm3_8
  double v197; // xmm4_8
  double v198; // xmm3_8
  double v199; // xmm5_8
  double v200; // xmm4_8
  double v201; // xmm6_8
  double v202; // xmm0_8
  double v203; // xmm2_8
  double v204; // xmm5_8
  double v205; // xmm1_8
  double v206; // xmm4_8
  double v207; // xmm3_8
  double v208; // xmm4_8
  double v209; // xmm3_8
  double v210; // xmm5_8
  double v211; // xmm4_8
  double v212; // xmm6_8
  double v213; // xmm2_8
  double v214; // xmm5_8
  double v215; // xmm1_8
  double v216; // xmm4_8
  double *v217; // rdi
  double *v218; // rsi
  double *v219; // r8
  double v220; // xmm6_8
  double *v221; // rdx
  __int64 v222; // rax
  double v223; // xmm5_8
  double v224; // xmm4_8
  double v225; // xmm3_8
  double v226; // xmm0_8
  double v227; // xmm2_8
  double v228; // xmm1_8
  double v229; // xmm0_8
  double v230; // xmm2_8
  __m128d v231; // [rsp+0h] [rbp-1F8h]
  __m128d v232; // [rsp+10h] [rbp-1E8h]
  __m128d v233; // [rsp+20h] [rbp-1D8h]
  double *v234; // [rsp+30h] [rbp-1C8h]
  double *v235; // [rsp+38h] [rbp-1C0h]
  __m128d v236; // [rsp+40h] [rbp-1B8h]
  __m128d v237; // [rsp+50h] [rbp-1A8h]
  __m128d v238; // [rsp+60h] [rbp-198h]
  __m128d v239; // [rsp+70h] [rbp-188h]
  double *v240; // [rsp+80h] [rbp-178h]
  double *v241; // [rsp+88h] [rbp-170h]
  __m128d v242; // [rsp+90h] [rbp-168h]
  __m128d v243; // [rsp+A0h] [rbp-158h]
  __m128d v244; // [rsp+B0h] [rbp-148h]
  __m128d v245; // [rsp+C0h] [rbp-138h]
  __m128d v246; // [rsp+D0h] [rbp-128h]
  __m128d v247; // [rsp+E0h] [rbp-118h]
  __m128d v248; // [rsp+F0h] [rbp-108h]
  __m128d v249; // [rsp+100h] [rbp-F8h]
  __m128d v250; // [rsp+110h] [rbp-E8h]
  __m128d v251; // [rsp+120h] [rbp-D8h]
  __m128d v252; // [rsp+130h] [rbp-C8h]
  unsigned int v253; // [rsp+148h] [rbp-B0h]
  unsigned int v254; // [rsp+14Ch] [rbp-ACh]
  __int64 v255; // [rsp+150h] [rbp-A8h]
  double *v256; // [rsp+160h] [rbp-98h]
  double *v257; // [rsp+168h] [rbp-90h]
  double *v258; // [rsp+170h] [rbp-88h]
  double *v259; // [rsp+178h] [rbp-80h]
  double *v260; // [rsp+180h] [rbp-78h]
  double *v261; // [rsp+188h] [rbp-70h]
  double *v262; // [rsp+190h] [rbp-68h]
  double *v263; // [rsp+198h] [rbp-60h]
  int v264; // [rsp+1A0h] [rbp-58h]
  int v265; // [rsp+1A4h] [rbp-54h]
  double *v266; // [rsp+1B0h] [rbp-48h]
  int v267; // [rsp+1BCh] [rbp-3Ch]

  if ( a4 == 16 )
  {
    v49 = a1 - 2;
    v50 = a2 - 32;
    v51 = a2 + 2;
    v52 = 13;
    v53 = 2;
    do
    {
      v54 = v49[3];
      v55 = v49[2];
      v56 = *a3 * v55;
      v57 = v55 * v56;
      v58 = v56 * v54;
      v59 = v51[15] - *a3 * v54 * v54;
      v60 = v49[19];
      v61 = *(v51 - 2) - v57;
      v62 = v49[18];
      v63 = *(v51 - 1) - v58;
      v64 = a3[1];
      v65 = v64 * v60;
      v66 = v64 * v62;
      v67 = v65 * v60;
      v68 = v62 * v66;
      v69 = v66 * v60;
      v70 = v49[35];
      v71 = v59 - v67;
      v72 = v61 - v68;
      v73 = v49[34];
      v74 = v63 - v69;
      v75 = a3[2];
      v76 = v75 * v70;
      v77 = v75 * v73;
      v78 = v76 * v70;
      v79 = v73 * v77;
      v80 = v77 * v70;
      v81 = v49[51];
      v82 = v71 - v78;
      v83 = v72 - v79;
      v84 = v49[50];
      v85 = v74 - v80;
      v86 = a3[3];
      v87 = v86 * v81;
      v88 = v86 * v84;
      v89 = v87 * v81;
      v90 = v84 * v88;
      v91 = v88 * v81;
      v92 = v49[67];
      v93 = v82 - v89;
      v94 = v83 - v90;
      v95 = v49[66];
      v96 = v85 - v91;
      v97 = a3[4];
      v98 = v97 * v92;
      v99 = v97 * v95;
      v100 = v98 * v92;
      v101 = v95 * v99;
      v102 = v99 * v92;
      v103 = v49[83];
      v104 = v93 - v100;
      v105 = v94 - v101;
      v106 = v49[82];
      v107 = v96 - v102;
      v108 = a3[5];
      v109 = v108 * v103;
      v110 = v108 * v106;
      v111 = v109 * v103;
      v112 = v106 * v110;
      v113 = v110 * v103;
      v114 = v49[99];
      v115 = v104 - v111;
      v116 = v105 - v112;
      v117 = v49[98];
      v118 = v107 - v113;
      v119 = a3[6];
      v120 = v119 * v114;
      v121 = v119 * v117;
      v122 = v120 * v114;
      v123 = v117 * v121;
      v124 = v121 * v114;
      v125 = v49[115];
      v126 = v115 - v122;
      v127 = v116 - v123;
      v128 = v49[114];
      v129 = v118 - v124;
      v130 = a3[7];
      v131 = v130 * v125;
      v132 = v130 * v128;
      v133 = v131 * v125;
      v134 = v128 * v132;
      v135 = v132 * v125;
      v136 = v49[131];
      v137 = v126 - v133;
      v138 = v127 - v134;
      v139 = v49[130];
      v140 = v129 - v135;
      v141 = a3[8];
      v142 = v141 * v136;
      v143 = v141 * v139;
      v144 = v139 * v143;
      v145 = v143 * v136;
      v146 = v137 - v142 * v136;
      v147 = v138 - v144;
      v148 = v49[146];
      v149 = v49[147];
      v150 = v140 - v145;
      v151 = a3[9];
      v152 = v151 * v149;
      v153 = v151 * v148;
      v154 = v152 * v149;
      v155 = v148 * v153;
      v156 = v153 * v149;
      v157 = v49[163];
      v158 = v146 - v154;
      v159 = v147 - v155;
      v160 = v49[162];
      v161 = v150 - v156;
      v162 = a3[10];
      v163 = v162 * v157;
      v164 = v162 * v160;
      v165 = v163 * v157;
      v166 = v160 * v164;
      v167 = v164 * v157;
      v168 = v49[179];
      v169 = v158 - v165;
      v170 = v159 - v166;
      v171 = v49[178];
      v172 = v161 - v167;
      v173 = a3[11];
      v174 = v173 * v168;
      v175 = v173 * v171;
      v176 = v174 * v168;
      v177 = v171 * v175;
      v178 = v175 * v168;
      v179 = v49[195];
      v180 = v169 - v176;
      v181 = v170 - v177;
      v182 = v49[194];
      v183 = v172 - v178;
      v184 = a3[12];
      v185 = v184 * v179;
      v186 = v184 * v182;
      v187 = v185 * v179;
      v188 = v182 * v186;
      v189 = v186 * v179;
      v190 = v49[211];
      v191 = v180 - v187;
      v192 = v181 - v188;
      v193 = v49[210];
      v194 = v183 - v189;
      v195 = a3[13];
      v196 = v195 * v190;
      v197 = v195 * v193;
      v198 = v196 * v190;
      v199 = v193 * v197;
      v200 = v197 * v190;
      v201 = v49[227];
      v202 = v191 - v198;
      v203 = v192 - v199;
      v204 = v49[226];
      v205 = v194 - v200;
      v206 = a3[14];
      v207 = v206 * v201;
      v208 = v206 * v204;
      v209 = v207 * v201;
      v210 = v204 * v208;
      v211 = v208 * v201;
      v212 = v49[243];
      v213 = v203 - v210;
      v214 = v49[242];
      v215 = v205 - v211;
      v216 = a3[15] * v214;
      v51[15] = v202 - v209 - a3[15] * v212 * v212;
      *(v51 - 2) = v213 - v214 * v216;
      *(v51 - 1) = v215 - v216 * v212;
      if ( (_DWORD)v53 != 16 )
      {
        v217 = v49 + 4;
        v218 = v49 + 5;
        v219 = v51;
        do
        {
          v220 = *v219;
          v221 = a3;
          v222 = 0;
          v223 = v219[16];
          v224 = v219[1];
          v225 = v219[17];
          do
          {
            v226 = *v221++;
            v227 = v217[v222];
            v228 = v49[v222 + 2] * v226;
            v229 = v226 * v49[v222 + 3];
            v220 = v220 - v228 * v227;
            v223 = v223 - v227 * v229;
            v230 = v218[v222];
            v222 += 16;
            v224 = v224 - v228 * v230;
            v225 = v225 - v229 * v230;
          }
          while ( v222 != 256 );
          *v219 = v220;
          v219 += 2;
          v217 += 2;
          v219[14] = v223;
          v218 += 2;
          *(v219 - 1) = v224;
          v219[15] = v225;
        }
        while ( v219 != &v50[2 * (v52 >> 1) + 34 + v53] );
      }
      v53 += 2;
      v50 += 32;
      v51 += 34;
      v52 -= 2;
      v49 += 2;
    }
    while ( v53 != 18 );
  }
  else
  {
    v5 = a2 - 16;
    if ( a4 > 0 )
    {
      v6 = a1;
      v7 = 0;
      v254 = a4;
      v255 = 16;
      v266 = a3 + 16;
      v8 = 0;
      v9 = a2;
      v267 = a4 - 1;
      do
      {
        v12 = v254;
        if ( a4 <= v7 )
          v12 = 1;
        v13 = (unsigned __int64)&v5[v255 + v12];
        if ( ((unsigned __int64)v6 >= v13 || v9 >= v6 + 241)
          && (v6 >= v9 + 2 || v9 >= v6 + 242)
          && v254 > 2
          && a4 > v7
          && ((unsigned __int64)a3 >= v13 || v9 >= v266) )
        {
          v14 = 1;
          if ( a4 > v7 )
            v14 = v254;
          v15 = ((unsigned __int64)v6 >> 3) & 1;
          v16 = v267 - v7;
          if ( a4 <= v7 )
            v16 = 0;
          if ( 2 - (unsigned int)((_DWORD)v15 == 0) > v16 )
          {
            LODWORD(v43) = v7;
          }
          else
          {
            v264 = v7;
            if ( (_DWORD)v15 )
            {
              v17 = *v9
                  - *v6 * *v6 * *a3
                  - v6[16] * v6[16] * a3[1]
                  - v6[32] * v6[32] * a3[2]
                  - v6[48] * v6[48] * a3[3]
                  - v6[64] * v6[64] * a3[4]
                  - v6[80] * v6[80] * a3[5]
                  - v6[96] * v6[96] * a3[6]
                  - v6[112] * v6[112] * a3[7]
                  - v6[128] * v6[128] * a3[8]
                  - v6[144] * v6[144] * a3[9]
                  - v6[160] * v6[160] * a3[10]
                  - v6[176] * v6[176] * a3[11]
                  - v6[192] * v6[192] * a3[12]
                  - v6[208] * v6[208] * a3[13];
              v264 = v8 + 1;
              *v9 = v17 - v6[224] * v6[224] * a3[14] - a1[(unsigned int)(v8 + 240)] * v6[240] * a3[15];
            }
            v18 = ((unsigned __int64)v6 >> 3) & 1;
            v265 = v14 - v15;
            v253 = (unsigned int)(v14 - v15) >> 1;
            v19 = v8 + v18 + 16;
            v20 = &v5[v19];
            v252 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)a3, (__m128d)*(unsigned __int64 *)a3);
            v263 = &a1[v8 + v18];
            v261 = &a1[v8 + 32 + v18];
            v262 = &a1[v19];
            v251 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 1), (__m128d)*((unsigned __int64 *)a3 + 1));
            v260 = &a1[v8 + 48 + v18];
            v248 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 4), (__m128d)*((unsigned __int64 *)a3 + 4));
            v259 = &a1[v8 + 64 + v18];
            v258 = &a1[v8 + 80 + v18];
            v257 = &a1[v8 + 96 + v18];
            v250 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 2), (__m128d)*((unsigned __int64 *)a3 + 2));
            v21 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)v6, (__m128d)*(unsigned __int64 *)v6);
            v247 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 5), (__m128d)*((unsigned __int64 *)a3 + 5));
            v245 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 7), (__m128d)*((unsigned __int64 *)a3 + 7));
            v249 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 3), (__m128d)*((unsigned __int64 *)a3 + 3));
            v22 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 16), (__m128d)*((unsigned __int64 *)v6 + 16));
            v23 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 32), (__m128d)*((unsigned __int64 *)v6 + 32));
            v24 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 48), (__m128d)*((unsigned __int64 *)v6 + 48));
            v246 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 6), (__m128d)*((unsigned __int64 *)a3 + 6));
            v256 = &a1[v8 + 112 + v18];
            v25 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 64), (__m128d)*((unsigned __int64 *)v6 + 64));
            v26 = &a1[v8 + 128 + v18];
            v27 = &a1[v8 + 144 + v18];
            v243 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 9), (__m128d)*((unsigned __int64 *)a3 + 9));
            v241 = &a1[v8 + 160 + v18];
            v236 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 12), (__m128d)*((unsigned __int64 *)a3 + 12));
            v28 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 80), (__m128d)*((unsigned __int64 *)v6 + 80));
            v29 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 96), (__m128d)*((unsigned __int64 *)v6 + 96));
            v240 = &a1[v8 + 176 + v18];
            v235 = &a1[v8 + 192 + v18];
            v30 = &a1[v8 + 208 + v18];
            v31 = v8 + v18 + 224;
            v242 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 10), (__m128d)*((unsigned __int64 *)a3 + 10));
            v244 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 8), (__m128d)*((unsigned __int64 *)a3 + 8));
            v32 = &a1[v8 + 240 + v18];
            v33 = 0;
            v232 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 14), (__m128d)*((unsigned __int64 *)a3 + 14));
            v231 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 15), (__m128d)*((unsigned __int64 *)a3 + 15));
            v234 = v30;
            v34 = &a1[v31];
            v35 = 0;
            v239 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 160), (__m128d)*((unsigned __int64 *)v6 + 160));
            v36 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 112), (__m128d)*((unsigned __int64 *)v6 + 112));
            v37 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 128), (__m128d)*((unsigned __int64 *)v6 + 128));
            v38 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 144), (__m128d)*((unsigned __int64 *)v6 + 144));
            v238 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 11), (__m128d)*((unsigned __int64 *)a3 + 11));
            v39 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 192), (__m128d)*((unsigned __int64 *)v6 + 192));
            v40 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 224), (__m128d)*((unsigned __int64 *)v6 + 224));
            v41 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 240), (__m128d)*((unsigned __int64 *)v6 + 240));
            v237 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 176), (__m128d)*((unsigned __int64 *)v6 + 176));
            v233 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a3 + 13), (__m128d)*((unsigned __int64 *)a3 + 13));
            v42 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)v6 + 208), (__m128d)*((unsigned __int64 *)v6 + 208));
            do
            {
              ++v35;
              *(__m128d *)&v20[v33] = _mm_sub_pd(
                                        _mm_sub_pd(
                                          _mm_sub_pd(
                                            _mm_sub_pd(
                                              _mm_sub_pd(
                                                _mm_sub_pd(
                                                  _mm_sub_pd(
                                                    _mm_sub_pd(
                                                      _mm_sub_pd(
                                                        _mm_sub_pd(
                                                          _mm_sub_pd(
                                                            _mm_sub_pd(
                                                              _mm_sub_pd(
                                                                _mm_sub_pd(
                                                                  _mm_sub_pd(
                                                                    _mm_sub_pd(
                                                                      *(__m128d *)&v20[v33],
                                                                      _mm_mul_pd(
                                                                        _mm_mul_pd(*(__m128d *)&v263[v33], v21),
                                                                        v252)),
                                                                    _mm_mul_pd(
                                                                      _mm_mul_pd(*(__m128d *)&v262[v33], v22),
                                                                      v251)),
                                                                  _mm_mul_pd(
                                                                    _mm_mul_pd(*(__m128d *)&v261[v33], v23),
                                                                    v250)),
                                                                _mm_mul_pd(
                                                                  _mm_mul_pd(*(__m128d *)&v260[v33], v24),
                                                                  v249)),
                                                              _mm_mul_pd(_mm_mul_pd(*(__m128d *)&v259[v33], v25), v248)),
                                                            _mm_mul_pd(_mm_mul_pd(*(__m128d *)&v258[v33], v28), v247)),
                                                          _mm_mul_pd(_mm_mul_pd(*(__m128d *)&v257[v33], v29), v246)),
                                                        _mm_mul_pd(_mm_mul_pd(*(__m128d *)&v256[v33], v36), v245)),
                                                      _mm_mul_pd(_mm_mul_pd(*(__m128d *)&v26[v33], v37), v244)),
                                                    _mm_mul_pd(_mm_mul_pd(*(__m128d *)&v27[v33], v38), v243)),
                                                  _mm_mul_pd(_mm_mul_pd(v239, *(__m128d *)&v241[v33]), v242)),
                                                _mm_mul_pd(_mm_mul_pd(v237, *(__m128d *)&v240[v33]), v238)),
                                              _mm_mul_pd(_mm_mul_pd(*(__m128d *)&v235[v33], v39), v236)),
                                            _mm_mul_pd(_mm_mul_pd(*(__m128d *)&v234[v33], v42), v233)),
                                          _mm_mul_pd(_mm_mul_pd(*(__m128d *)&v34[v33], v40), v232)),
                                        _mm_mul_pd(_mm_mul_pd(v41, *(__m128d *)&v32[v33]), v231));
              v33 += 2;
            }
            while ( v35 < v253 );
            LODWORD(v43) = (v265 & 0xFFFFFFFE) + v264;
            if ( (v265 & 0xFFFFFFFE) == v265 )
              goto LABEL_20;
          }
          v43 = (int)v43;
          v44 = &a1[(int)v43];
          do
          {
            ++v44;
            v45 = v5[v43 + 16]
                - *v6 * *(v44 - 1) * *a3
                - v6[16] * v44[15] * a3[1]
                - v6[32] * v44[31] * a3[2]
                - v6[48] * v44[47] * a3[3]
                - v6[64] * v44[63] * a3[4]
                - v6[80] * v44[79] * a3[5]
                - v6[96] * v44[95] * a3[6]
                - v6[112] * v44[111] * a3[7]
                - v6[128] * v44[127] * a3[8]
                - v6[144] * v44[143] * a3[9]
                - v6[160] * v44[159] * a3[10]
                - v6[176] * v44[175] * a3[11]
                - v6[192] * v44[191] * a3[12]
                - v6[208] * v44[207] * a3[13];
            v5[v43++ + 16] = v45 - v6[224] * v44[223] * a3[14] - v6[240] * v44[239] * a3[15];
          }
          while ( a4 > (int)v43 );
        }
        else
        {
          v46 = v6;
          v47 = v8;
          do
          {
            ++v46;
            v48 = v5[v47 + 16]
                - *v6 * *(v46 - 1) * *a3
                - v6[16] * v46[15] * a3[1]
                - v6[32] * v46[31] * a3[2]
                - v6[48] * v46[47] * a3[3]
                - v6[64] * v46[63] * a3[4]
                - v6[80] * v46[79] * a3[5]
                - v6[96] * v46[95] * a3[6]
                - v6[112] * v46[111] * a3[7]
                - v6[128] * v46[127] * a3[8]
                - v6[144] * v46[143] * a3[9]
                - v6[160] * v46[159] * a3[10]
                - v6[176] * v46[175] * a3[11]
                - v6[192] * v46[191] * a3[12]
                - v6[208] * v46[207] * a3[13];
            v5[v47++ + 16] = v48 - v6[224] * v46[223] * a3[14] - v6[240] * v46[239] * a3[15];
          }
          while ( a4 > (int)v47 );
        }
LABEL_20:
        ++v7;
        ++v8;
        --v254;
        ++v255;
        ++v6;
        v9 += 17;
        v5 += 16;
      }
      while ( a4 != v7 );
    }
  }
}

