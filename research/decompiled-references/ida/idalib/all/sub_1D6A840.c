_BYTE *__fastcall sub_1D6A840(__int64 a1, __m128 a2, __m128 a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  int *v5; // rbp
  __int64 *v6; // r13
  __int64 *v7; // r12
  char v8; // dl
  _QWORD *v9; // rax
  __int64 v10; // rsi
  int v11; // eax
  int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  bool v17; // bl
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // edx
  _BYTE *result; // rax
  _DWORD *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _DWORD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  void **v31; // rax
  __int64 v32; // rax
  int v33; // edi
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r13
  __m128 v38; // xmm6
  __int64 *v39; // rbp
  __int64 v40; // rax
  bool v41; // zf
  int v42; // eax
  __m128i v43; // xmm7
  __m128i v44; // xmm7
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  unsigned __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // rbp
  unsigned __int64 v52; // r13
  int v53; // eax
  unsigned __int64 v54; // r15
  char v55; // al
  int v56; // eax
  unsigned __int64 v57; // rax
  __int64 v58; // rsi
  unsigned __int64 v59; // rax
  __int64 v60; // r15
  _QWORD *v61; // rcx
  __int64 v62; // rax
  void *v63; // rsi
  const __m128i *v64; // roff
  __int64 v65; // rax
  __int64 v66; // rcx
  char v67; // al
  int v68; // eax
  __int64 v69; // rcx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rsi
  __int64 v72; // r13
  char *v73; // rcx
  unsigned __int64 v74; // r13
  __m128i v75; // xmm3
  int v76; // r10d
  _BYTE *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // r13
  unsigned int v80; // eax
  int *v81; // r14
  char *v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // r12
  unsigned __int64 v85; // rbx
  int v86; // eax
  unsigned __int64 v87; // rbp
  char v88; // al
  int v89; // eax
  unsigned __int64 v90; // rax
  __int64 v91; // rdx
  unsigned __int64 v92; // rax
  __int64 v93; // r14
  char *v94; // rdi
  _QWORD *v95; // rcx
  __int64 v96; // rax
  const __m128i *v97; // roff
  __int64 v98; // rax
  __int64 v99; // rbp
  __int64 v100; // rax
  char v101; // cl
  int v102; // eax
  __int64 v103; // rax
  unsigned __int64 v104; // r8
  unsigned __int64 v105; // rcx
  __int64 v106; // rsi
  unsigned __int64 v107; // rbx
  __m128i v108; // xmm5
  int v109; // edi
  char *v110; // rdi
  __int64 v111; // rax
  void **v112; // rbx
  __int64 v113; // rax
  __int64 v114; // rdx
  const __m128i *v115; // rdx
  __m128i *v116; // rax
  void *v117; // rbx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r9
  int v121; // ebx
  unsigned int v122; // eax
  __int64 *v123; // rax
  __int64 *v124; // rbp
  __int64 *v125; // r12
  __int64 *v126; // rdi
  __int64 v127; // rax
  char *v128; // rdi
  __int64 v129; // rbp
  __int64 v130; // r12
  void **v131; // r13
  __int64 *v132; // rdx
  __int64 v133; // rax
  __int64 *v134; // rdx
  __int64 v135; // rax
  unsigned __int64 v136; // rax
  __int64 v137; // rbx
  unsigned __int64 v138; // rbx
  unsigned __int64 v139; // rax
  unsigned __int64 v140; // rax
  unsigned int v141; // edx
  unsigned int v142; // ebp
  unsigned int v143; // ecx
  unsigned __int64 v144; // rdi
  unsigned __int64 v145; // r9
  __int64 v146; // rdi
  __int64 v147; // rax
  unsigned __int64 v148; // r12
  unsigned int v149; // ebp
  __int64 v150; // rbx
  unsigned __int64 v151; // rax
  __int64 v152; // r8
  unsigned __int64 v153; // r8
  unsigned __int64 v154; // rax
  unsigned __int64 v155; // rax
  unsigned int v156; // edx
  unsigned int v157; // r14d
  unsigned int v158; // esi
  unsigned __int64 v159; // rsi
  unsigned __int64 v160; // r9
  unsigned __int64 v161; // r15
  unsigned int v162; // r12d
  int v163; // ebp
  __int64 *v164; // r14
  int v165; // eax
  __int64 v166; // rdi
  __int64 v167; // rsi
  unsigned __int64 v168; // rbp
  void **v169; // rsi
  __int64 v170; // [rsp-8h] [rbp-760h]
  _QWORD *v171; // [rsp+0h] [rbp-758h]
  __int64 *v172; // [rsp+8h] [rbp-750h]
  __int64 v173; // [rsp+8h] [rbp-750h]
  unsigned __int64 v174; // [rsp+8h] [rbp-750h]
  unsigned __int64 v175; // [rsp+8h] [rbp-750h]
  __int64 *v176; // [rsp+10h] [rbp-748h] BYREF
  __m128 *v177; // [rsp+18h] [rbp-740h]
  void **v178; // [rsp+20h] [rbp-738h]
  __int64 v179; // [rsp+28h] [rbp-730h]
  char *v180; // [rsp+30h] [rbp-728h]
  _DWORD *v181; // [rsp+38h] [rbp-720h] BYREF
  void *v182; // [rsp+40h] [rbp-718h]
  __int64 v183; // [rsp+48h] [rbp-710h]
  const __m128i *v184; // [rsp+50h] [rbp-708h]
  _BYTE *v185; // [rsp+58h] [rbp-700h]
  char *v186; // [rsp+60h] [rbp-6F8h]
  unsigned int v187; // [rsp+6Ch] [rbp-6ECh]
  __int64 v188; // [rsp+70h] [rbp-6E8h]
  __int64 v189; // [rsp+78h] [rbp-6E0h]
  unsigned int v190; // [rsp+80h] [rbp-6D8h]
  int v191; // [rsp+84h] [rbp-6D4h]
  __int64 v192; // [rsp+88h] [rbp-6D0h]
  unsigned __int64 v193; // [rsp+90h] [rbp-6C8h]
  unsigned __int64 *v194; // [rsp+98h] [rbp-6C0h]
  __int64 v195; // [rsp+A0h] [rbp-6B8h]
  char v196; // [rsp+AAh] [rbp-6AEh]
  char v197; // [rsp+ABh] [rbp-6ADh]
  int v198; // [rsp+ACh] [rbp-6ACh]
  unsigned __int64 v199; // [rsp+B0h] [rbp-6A8h]
  unsigned __int64 v200; // [rsp+B8h] [rbp-6A0h]
  __int64 *v201; // [rsp+C0h] [rbp-698h]
  unsigned __int8 *v202; // [rsp+C8h] [rbp-690h]
  __int64 v203; // [rsp+D0h] [rbp-688h]
  __int64 v204; // [rsp+D8h] [rbp-680h]
  __int64 v205; // [rsp+E0h] [rbp-678h]
  int v206; // [rsp+E8h] [rbp-670h]
  unsigned int v207; // [rsp+ECh] [rbp-66Ch]
  void **v208; // [rsp+F0h] [rbp-668h]
  __int64 v209; // [rsp+F8h] [rbp-660h]
  __m128i v210; // [rsp+100h] [rbp-658h] BYREF
  __int64 *v211; // [rsp+110h] [rbp-648h]
  _QWORD *v212; // [rsp+118h] [rbp-640h]
  char v213; // [rsp+127h] [rbp-631h] BYREF
  void *v214; // [rsp+128h] [rbp-630h] BYREF
  __m128i v215; // [rsp+130h] [rbp-628h] BYREF
  __int64 v216; // [rsp+140h] [rbp-618h]
  __m128 v217; // [rsp+150h] [rbp-608h]
  __int64 v218; // [rsp+160h] [rbp-5F8h]
  __m128i v219; // [rsp+170h] [rbp-5E8h] BYREF
  __int64 v220; // [rsp+180h] [rbp-5D8h]
  __m128i v221; // [rsp+190h] [rbp-5C8h]
  void **v222; // [rsp+1A0h] [rbp-5B8h]
  __m128 v223; // [rsp+1B0h] [rbp-5A8h]
  __int64 v224; // [rsp+1C0h] [rbp-598h]
  __m128 v225; // [rsp+1D0h] [rbp-588h]
  __int64 v226; // [rsp+1E0h] [rbp-578h]
  __int64 v227; // [rsp+208h] [rbp-550h]
  void *v228; // [rsp+220h] [rbp-538h] BYREF
  __int64 v229; // [rsp+228h] [rbp-530h]
  __int64 v230; // [rsp+230h] [rbp-528h] BYREF
  void *v231; // [rsp+250h] [rbp-508h] BYREF
  __int64 v232; // [rsp+258h] [rbp-500h]
  char v233; // [rsp+260h] [rbp-4F8h] BYREF
  __int64 v234; // [rsp+2C0h] [rbp-498h] BYREF
  __int64 v235; // [rsp+2C8h] [rbp-490h]
  __int64 v236; // [rsp+2D0h] [rbp-488h] BYREF
  unsigned int v237; // [rsp+2D8h] [rbp-480h]
  void *v238; // [rsp+310h] [rbp-448h] BYREF
  __int64 v239; // [rsp+318h] [rbp-440h]
  __int64 v240; // [rsp+328h] [rbp-430h]
  __int16 v241; // [rsp+330h] [rbp-428h]
  char v242; // [rsp+332h] [rbp-426h]
  __int64 v243; // [rsp+338h] [rbp-420h]
  int v244; // [rsp+350h] [rbp-408h] BYREF
  __m128i v245; // [rsp+358h] [rbp-400h]
  __int64 v246; // [rsp+368h] [rbp-3F0h]
  __int8 v247; // [rsp+370h] [rbp-3E8h]
  __int64 v248; // [rsp+378h] [rbp-3E0h]
  __int64 v249; // [rsp+380h] [rbp-3D8h]
  char v250; // [rsp+390h] [rbp-3C8h]
  void *v251; // [rsp+398h] [rbp-3C0h]
  __int64 v252; // [rsp+3A0h] [rbp-3B8h]
  _BYTE v253[128]; // [rsp+3A8h] [rbp-3B0h] BYREF
  __int64 v254; // [rsp+428h] [rbp-330h]
  void *v255; // [rsp+430h] [rbp-328h] BYREF
  __int64 v256; // [rsp+438h] [rbp-320h]
  char v257; // [rsp+440h] [rbp-318h] BYREF
  void *ptr; // [rsp+4A0h] [rbp-2B8h]
  __int64 v259; // [rsp+4A8h] [rbp-2B0h]
  char v260; // [rsp+4B0h] [rbp-2A8h] BYREF
  __int16 v261; // [rsp+510h] [rbp-248h]
  char v262; // [rsp+512h] [rbp-246h]
  _QWORD v263[3]; // [rsp+520h] [rbp-238h] BYREF
  __m128 *v264; // [rsp+538h] [rbp-220h]
  __int64 v265; // [rsp+540h] [rbp-218h]
  unsigned int v266; // [rsp+548h] [rbp-210h]
  __int64 *v267; // [rsp+550h] [rbp-208h]
  __int64 v268; // [rsp+558h] [rbp-200h]

  v3 = (_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(int **)(a1 + 40);
  v6 = *(__int64 **)(a1 + 80);
  v176 = *(__int64 **)(a1 + 48);
  v7 = *(__int64 **)(a1 + 88);
  v179 = *(_QWORD *)(a1 + 56);
  v180 = *(char **)(a1 + 64);
  v172 = *(__int64 **)(a1 + 72);
  v177 = *(__m128 **)(a1 + 32);
  v202 = *(unsigned __int8 **)(a1 + 96);
  v194 = *(unsigned __int64 **)(a1 + 104);
  v184 = *(const __m128i **)(a1 + 24);
  v171 = **(_QWORD ***)(a1 + 16);
  sub_18C74E0(v4, 0, 0, 4);
  v187 = *(_DWORD *)(v4 + 11200);
  v196 = *(_BYTE *)(v4 + 12592);
  v197 = *(_BYTE *)(v4 + 11248);
  v191 = *(_DWORD *)(*(_QWORD *)(v4 + 264) + 204LL);
  sub_1DBADC0(v4);
  if ( !v8 )
    *(_BYTE *)(v4 + 12592) = 1;
  *(_BYTE *)(v4 + 11248) = 0;
  if ( !sub_B8E0B0((__int64)v171) || (v9 = (_QWORD *)sub_B8D340((__int64)v171)) == nullptr )
  {
    v9 = (_QWORD *)(v171[2] & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v171[2] & 4) != 0 )
      v9 = (_QWORD *)*v9;
  }
  v10 = *(_QWORD *)(v4 + 544);
  *(_QWORD *)(v4 + 544) = v9;
  v11 = *(_DWORD *)(v4 + 40);
  v12 = *(_DWORD *)(v4 + 80);
  v178 = &v255;
  v189 = v10;
  LODWORD(v10) = *(_DWORD *)(v4 + 2632);
  *(_DWORD *)(v4 + 80) = v11;
  v13 = *(_DWORD *)(v4 + 3688);
  v14 = *(_QWORD *)(v4 + 9944);
  v15 = *(_QWORD *)(v4 + 512);
  v206 = v10;
  *(_DWORD *)(v4 + 2632) = v13;
  v255 = &v257;
  v259 = 0x400000000LL;
  v227 = v14;
  v256 = 0x400000000LL;
  v195 = v15;
  v198 = v12;
  ptr = &v260;
  v261 = 1;
  v262 = 0;
  *(_QWORD *)(v4 + 512) = 0;
  *(_QWORD *)(v4 + 9944) = 0;
  v16 = v171[7];
  v213 = 0;
  v17 = 0;
  if ( !(unsigned int)sub_1D67A60(v4, (__int64)v171, v16, 1, v184, v177, a2, a3, (__int64)&v255, 0, 0, &v213) )
  {
    v24 = sub_BC1D90(*(_QWORD **)(v4 + 248), (const __m128i *)v255, (unsigned int)v256, v18, v19, v20);
    v28 = sub_BC1D90(*(_QWORD **)(v4 + 248), (const __m128i *)ptr, (unsigned int)v259, v25, v26, v27);
    v182 = v24;
    v30 = (__int64)&v238;
    v181 = v28;
    a2 = _mm_loadh_ps((const double *)&v181);
    *v177 = a2;
    v234 = v4;
    v235 = 1;
    v201 = &v234;
    v31 = (void **)&v236;
    do
    {
      *v31 = (void *)-4096LL;
      v31 += 2;
    }
    while ( v31 != &v238 );
    v242 = 0;
    v241 = 0;
    v243 = 0;
    v238 = v201 + 12;
    v239 = 0x100000000LL;
    v32 = *(_QWORD *)(v4 + 11280);
    *(_QWORD *)(v4 + 11280) = v201;
    v240 = v32;
    v33 = *v5;
    v182 = v255;
    v183 = (unsigned int)v256;
    if ( v33 )
    {
      v165 = sub_1D38E60(
               v4,
               v171,
               0,
               *(_QWORD *)(*v176 + 24),
               *(_QWORD *)(*(_QWORD *)v179 + 24LL),
               *v180,
               (__int64)v182,
               v183);
      v30 = v170;
      if ( v165 )
        goto LABEL_115;
      if ( *v5 == 1 )
        goto LABEL_194;
    }
    v34 = v7[1];
    v35 = *v172;
    v204 = *v7;
    v200 = v34;
    v209 = v35;
    v203 = *v6;
    v199 = v6[1];
    if ( !v199 )
    {
      v127 = 1;
LABEL_113:
      if ( v200 == v127 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v204 + 8 * v199) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38
        || v200 <= v199 )
      {
LABEL_194:
        v17 = *(_DWORD *)(v4 + 11200) <= v187;
        goto LABEL_116;
      }
LABEL_115:
      v17 = 0;
LABEL_116:
      v128 = (char *)v238;
      if ( !(_BYTE)v241 )
      {
        if ( (_DWORD)v239 )
        {
          v129 = 0;
          v130 = 8LL * (unsigned int)(v239 - 1) + 8;
          do
          {
            v131 = *(void ***)&v128[v129];
            if ( v131 )
            {
              if ( *v131 != v131 + 2 )
                free(*v131);
              operator delete(v131, 0x30u);
              v128 = (char *)v238;
            }
            v129 += 8;
          }
          while ( v130 != v129 );
        }
        LOBYTE(v241) = 1;
        *(_QWORD *)(v234 + 11280) = v240;
      }
      if ( v128 != (char *)(v201 + 12) )
        free(v128);
      if ( (v235 & 1) == 0 )
        operator delete(v236, 16LL * v237, 8);
      goto LABEL_6;
    }
    v36 = (__int64)v263;
    v188 = v4;
    v37 = 0;
    v176 = v263;
    LODWORD(v179) = 0;
    v190 = 0;
    v38 = _mm_loadh_ps((const double *)&v176);
    v211 = (__int64 *)&v214;
    v212 = v3;
    v210 = (__m128i)v38;
LABEL_24:
    v39 = (__int64 *)(v203 + 8 * v37);
    v40 = *(_QWORD *)(*v39 & 0xFFFFFFFFFFFFFFF0LL);
    v41 = *(_BYTE *)(v40 + 16) == 38;
    v181 = (_DWORD *)v40;
    if ( !v41 )
    {
      if ( v190 < v200 )
      {
        v136 = *(_QWORD *)(v204 + 8LL * v190) & 0xFFFFFFFFFFFFFFF0LL;
        v137 = *(_QWORD *)v136;
        if ( *(_BYTE *)(*(_QWORD *)v136 + 16LL) != 38 )
        {
          if ( (*(_BYTE *)(v137 + 8) & 0xF) != 0 )
          {
            v138 = sub_F64F00(*(_QWORD *)(v204 + 8LL * v190), v36, v34, v30, v29) & 0xFFFFFFFFFFFFFFF0LL;
            v181 = *(_DWORD **)(*v39 & 0xFFFFFFFFFFFFFFF0LL);
          }
          else
          {
            v138 = v137 & 0xFFFFFFFFFFFFFFF0LL;
          }
          v139 = (unsigned __int64)v181;
          if ( (v181[2] & 0xF) != 0 )
            v139 = sub_F64F00(*v39, v36, v34, v30, v29);
          v140 = v139 & 0xFFFFFFFFFFFFFFF0LL;
          v141 = 0;
          v142 = v190 + 1;
          if ( v190 != -1 )
          {
            v143 = *v202;
            if ( v143 <= v190 )
              v141 = v190 - v143 + 1;
          }
          v144 = *v194;
          v145 = (*v194 & 1) != 0
               ? (((v144 >> 1) & ~(-1LL << (*v194 >> 58))) >> v179) & 1
               : (*(_QWORD *)(*(_QWORD *)v144 + 8LL * ((unsigned int)v179 >> 6)) >> v179) & 1LL;
          v36 = (__int64)v171;
          if ( !(unsigned int)sub_1D38E60(v188, v171, v141, v140, v138, v145 & 1, (__int64)v182, v183) )
          {
            v190 = v142;
            v37 = (unsigned int)(v179 + 1);
            v121 = v179 + 1;
            goto LABEL_111;
          }
        }
      }
      v3 = v212;
      v4 = v188;
      goto LABEL_115;
    }
    v205 = *(_QWORD *)(v40 + 32);
    sub_F1D250((__int64)&v215, v205, 0, 0);
    v265 = 0x100000000000000LL;
    v263[0] = v188;
    v218 = v216;
    a2 = (__m128)_mm_load_si128(&v215);
    v263[2] = v184;
    v268 = 0x200000000LL;
    v264 = v177;
    v220 = v216;
    v42 = *(_DWORD *)(v209 + 20);
    v217 = a2;
    v267 = v176 + 8;
    v263[1] = v209;
    v266 = 0;
    v219 = (__m128i)a2;
    sub_1504FB0(v211, v42 & 0x1FFFFFFF, 0);
    v43 = _mm_load_si128(&v210);
    v231 = &v233;
    v208 = &v231;
    v221 = v43;
    v44 = _mm_load_si128(&v219);
    v222 = &v231;
    v226 = v220;
    v232 = 0x400000000LL;
    v225 = (__m128)v44;
    v180 = (char *)&v228;
    v228 = &v230;
    v229 = 0x200000000LL;
    sub_1E4C8C0(v263[0], (unsigned int)&v228, v45, v46, v47, v48, *(_OWORD *)&v44, v220);
    if ( (_DWORD)v229 )
    {
      v185 = v253;
      v51 = 0;
      v173 = 16 * ((unsigned int)(v229 - 1) + 1LL);
      while ( 1 )
      {
        v54 = *(_QWORD *)((_BYTE *)v228 + v51) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)((_BYTE *)v228 + v51) & 4) == 0 )
        {
          if ( v54 )
            break;
        }
        v55 = *(_BYTE *)(v54 + 28) & 0x7F;
        if ( v55 != 67 )
        {
          if ( v55 == 47 )
          {
            v53 = *(_DWORD *)(v54 + 68) & 0xFFFFF;
            v52 = *(_WORD *)(v54 + 70) >> 4;
          }
          else
          {
            v53 = *(_DWORD *)(v54 + 64) & 0xFFFFF;
            v52 = *(_WORD *)(v54 + 66) >> 4;
          }
LABEL_29:
          if ( v53 != v264[1].m128_i32[2] )
            goto LABEL_30;
          goto LABEL_34;
        }
        v52 = (unsigned int)sub_BBE5B0(*(_QWORD *)((_BYTE *)v228 + v51) & 0xFFFFFFFFFFFFFFF8LL);
        v56 = sub_BBE590(v54);
        if ( v56 != v264[1].m128_i32[2] )
          goto LABEL_30;
LABEL_34:
        v57 = *(_QWORD *)v221.m128i_i64[0];
        if ( (*(_QWORD *)v221.m128i_i64[0] & 1) != 0 )
        {
          v49 = v57 >> 58;
          v58 = ~(-1LL << (v57 >> 58));
          v59 = v58 & (v57 >> 1);
          if ( !_bittest64((const __int64 *)&v59, v52) )
          {
            *(_QWORD *)v221.m128i_i64[0] = 2 * ((v49 << 57) | v58 & (v59 | (1LL << v52))) + 1;
            goto LABEL_37;
          }
        }
        else
        {
          v49 = v52 & 0x3F;
          v134 = (__int64 *)(*(_QWORD *)v57 + 8LL * ((unsigned int)v52 >> 6));
          v135 = *v134;
          if ( !_bittest64(&v135, v49) )
          {
            *v134 = v135 | (1LL << v49);
LABEL_37:
            v60 = v221.m128i_i64[1];
            v61 = *(_QWORD **)(v221.m128i_i64[1] + 16);
            v62 = 32LL * (unsigned int)v52;
            v41 = (*(_DWORD *)(*v61 + v62) & 0x7FFFFFFF) == 0;
            v63 = v185;
            v244 = v52;
            *(_BYTE *)(v221.m128i_i64[1] + 38) = !v41;
            v245 = (__m128i)(0xFFFFFFFE00000000LL & v245.m128i_u64[0]);
            v248 &= 0xFFFFFFFE00000000LL;
            v41 = *(_BYTE *)(v60 + 39) == 0;
            v247 = 0;
            v249 = 0;
            v250 = 0;
            v251 = v63;
            v252 = 0x400000000LL;
            v254 = 0;
            if ( v41 )
            {
              v64 = (const __m128i *)(*v61 + v62);
              v245 = _mm_loadu_si128(v64);
              v246 = v64[1].m128i_i64[0];
              v247 = v64[1].m128i_i8[8];
              v65 = *v61 + v62;
              *(_QWORD *)v65 &= 0xFFFFFFFE00000000LL;
              *(_QWORD *)(v65 + 8) = 0;
              *(_BYTE *)(v65 + 24) = 0;
            }
            v50 = 8LL * (unsigned int)v52;
            v66 = *(_QWORD *)(*(_QWORD *)(v60 + 8) + v50 + 24);
            v67 = *(_BYTE *)(v66 + 28) & 0x7F;
            if ( v67 == 67 )
            {
              v68 = *(_DWORD *)(v66 + 64);
              if ( !v68 )
              {
LABEL_41:
                v69 = *(unsigned int *)(v60 + 56);
                v70 = *(_QWORD *)(v60 + 48);
                v71 = v69 + 1;
                v72 = 7 * v69;
                v73 = (char *)&v244;
                v74 = v70 + 32 * v72;
                if ( v71 > *(unsigned int *)(v60 + 60) )
                {
                  v166 = v60 + 48;
                  v186 = *(char **)(v60 + 48);
                  if ( v70 > (unsigned __int64)&v244 || v74 <= (unsigned __int64)&v244 )
                  {
                    v186 = (char *)v50;
                    sub_1D67900(v166, v71);
                    v73 = (char *)&v244;
                    v50 = (__int64)v186;
                    v74 = *(_QWORD *)(v60 + 48) + 224LL * *(unsigned int *)(v60 + 56);
                  }
                  else
                  {
                    v192 = v50;
                    sub_1D67900(v166, v71);
                    v167 = *(_QWORD *)(v60 + 48);
                    v50 = v192;
                    v73 = (char *)(v167 + (char *)&v244 - v186);
                    v74 = v167 + 224LL * *(unsigned int *)(v60 + 56);
                  }
                }
                *(_DWORD *)v74 = *(_DWORD *)v73;
                *(__m128i *)(v74 + 8) = _mm_loadu_si128((const __m128i *)(v73 + 8));
                *(__m128i *)(v74 + 24) = _mm_loadu_si128((const __m128i *)(v73 + 24));
                *(__m128i *)(v74 + 40) = _mm_loadu_si128((const __m128i *)(v73 + 40));
                v75 = _mm_loadu_si128((const __m128i *)(v73 + 56));
                *(_QWORD *)(v74 + 80) = 0x400000000LL;
                *(__m128i *)(v74 + 56) = v75;
                v76 = *((_DWORD *)v73 + 20);
                *(_QWORD *)(v74 + 72) = v74 + 88;
                if ( v76 )
                {
                  v186 = v73;
                  v192 = v50;
                  sub_1D3C410((__int64 *)(v74 + 72), (__int64 *)v73 + 9);
                  v50 = v192;
                  v73 = v186;
                }
                *(_QWORD *)(v74 + 216) = *((_QWORD *)v73 + 27);
                v77 = v251;
                ++*(_DWORD *)(v60 + 56);
                if ( v77 != v185 )
                {
                  v186 = (char *)v50;
                  free(v77);
                  v50 = (__int64)v186;
                }
                v49 = *(_QWORD *)(*(_QWORD *)(v60 + 8) + v50 + 24);
                if ( (*(_BYTE *)(v49 + 28) & 0x7F) == 0x2F && !*(_BYTE *)(v49 + 81) )
                {
                  v78 = *(_QWORD *)(sub_AB5860(*(_QWORD *)(*(_QWORD *)v60 + 248LL), *(_QWORD *)(v49 + 48))
                                  & 0xFFFFFFFFFFFFFFF0LL);
                  if ( *(_BYTE *)(v78 + 16) == 38 )
                  {
                    v79 = (__int64)v222;
                    sub_F1D250((__int64)&v244, *(_QWORD *)(v78 + 32), 0, 0);
                    sub_1CB6790(v79, (const __m128i *)&v244);
                  }
                }
                goto LABEL_30;
              }
            }
            else
            {
              if ( v67 == 47 )
              {
                if ( !*(_BYTE *)(v66 + 81) )
                  goto LABEL_41;
              }
              else if ( v67 != 68 || (*(_BYTE *)(v66 + 80) & 4) == 0 )
              {
                goto LABEL_41;
              }
              v68 = *(_DWORD *)(v66 + 84) + 1;
              if ( *(_DWORD *)(v66 + 84) == -1 )
                goto LABEL_41;
            }
            *(_DWORD *)(v60 + 40) = v68;
            goto LABEL_41;
          }
        }
LABEL_30:
        v51 += 16;
        if ( v173 == v51 )
          goto LABEL_56;
      }
      v52 = *(unsigned __int16 *)(v54 + 22);
      v53 = *(_WORD *)(v54 + 20) & 0x7FFF;
      goto LABEL_29;
    }
LABEL_56:
    if ( v228 != v180 + 16 )
      free(v228);
    v207 = v268;
    v80 = v232;
    if ( !(_DWORD)v232 )
      goto LABEL_91;
    v81 = &v244;
    v186 = v253;
    v185 = v180 + 16;
LABEL_60:
    v82 = (char *)v231 + 24 * v80;
    a2 = (__m128)_mm_loadu_si128((const __m128i *)(v82 - 24));
    v83 = *((_QWORD *)v82 - 1);
    LODWORD(v232) = v80 - 1;
    v223 = a2;
    v228 = v185;
    v224 = v83;
    v225 = a2;
    v226 = v83;
    v229 = 0x200000000LL;
    sub_1E4C8C0(v263[0], (_DWORD)v180, v83, v49, (_DWORD)v231, v50, *(_OWORD *)&a2, v83);
    if ( !(_DWORD)v229 )
      goto LABEL_89;
    v84 = 0;
    v174 = (unsigned __int64)v81;
    v192 = 16 * ((unsigned int)(v229 - 1) + 1LL);
    while ( 1 )
    {
      v87 = *(_QWORD *)((_BYTE *)v228 + v84) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)((_BYTE *)v228 + v84) & 4) == 0 )
      {
        if ( v87 )
          break;
      }
      v88 = *(_BYTE *)(v87 + 28) & 0x7F;
      if ( v88 == 67 )
      {
        v85 = (unsigned int)sub_BBE5B0(*(_QWORD *)((_BYTE *)v228 + v84) & 0xFFFFFFFFFFFFFFF8LL);
        v89 = sub_BBE590(v87);
        if ( v264[1].m128_i32[2] != v89 )
          goto LABEL_65;
LABEL_69:
        v90 = *(_QWORD *)v221.m128i_i64[0];
        if ( (*(_QWORD *)v221.m128i_i64[0] & 1) != 0 )
        {
          v49 = v90 >> 58;
          v91 = ~(-1LL << (v90 >> 58));
          v92 = v91 & (v90 >> 1);
          if ( _bittest64((const __int64 *)&v92, v85) )
            goto LABEL_65;
          *(_QWORD *)v221.m128i_i64[0] = 2 * ((v49 << 57) | v91 & (v92 | (1LL << v85))) + 1;
        }
        else
        {
          v49 = v85 & 0x3F;
          v132 = (__int64 *)(*(_QWORD *)v90 + 8LL * ((unsigned int)v85 >> 6));
          v133 = *v132;
          if ( _bittest64(&v133, v49) )
            goto LABEL_65;
          *v132 = v133 | (1LL << v49);
        }
        v93 = v221.m128i_i64[1];
        v94 = v186;
        v95 = *(_QWORD **)(v221.m128i_i64[1] + 16);
        v96 = 32LL * (unsigned int)v85;
        v41 = (*(_DWORD *)(*v95 + v96) & 0x7FFFFFFF) == 0;
        v244 = v85;
        *(_BYTE *)(v221.m128i_i64[1] + 38) = !v41;
        v245 = (__m128i)(0xFFFFFFFE00000000LL & v245.m128i_u64[0]);
        v248 &= 0xFFFFFFFE00000000LL;
        v41 = *(_BYTE *)(v93 + 39) == 0;
        v247 = 0;
        v249 = 0;
        v250 = 0;
        v251 = v94;
        v252 = 0x400000000LL;
        v254 = 0;
        if ( v41 )
        {
          v97 = (const __m128i *)(*v95 + v96);
          v245 = _mm_loadu_si128(v97);
          v246 = v97[1].m128i_i64[0];
          v247 = v97[1].m128i_i8[8];
          v98 = *v95 + v96;
          *(_QWORD *)v98 &= 0xFFFFFFFE00000000LL;
          *(_QWORD *)(v98 + 8) = 0;
          *(_BYTE *)(v98 + 24) = 0;
        }
        v99 = 8LL * (unsigned int)v85;
        v100 = *(_QWORD *)(*(_QWORD *)(v93 + 8) + v99 + 24);
        v101 = *(_BYTE *)(v100 + 28) & 0x7F;
        if ( v101 == 67 )
        {
          v102 = *(_DWORD *)(v100 + 64);
          if ( !v102 )
            goto LABEL_77;
LABEL_76:
          *(_DWORD *)(v93 + 40) = v102;
          goto LABEL_77;
        }
        if ( v101 == 47 )
        {
          if ( !*(_BYTE *)(v100 + 81) )
            goto LABEL_77;
        }
        else if ( v101 != 68 || (*(_BYTE *)(v100 + 80) & 4) == 0 )
        {
          goto LABEL_77;
        }
        v102 = *(_DWORD *)(v100 + 84) + 1;
        if ( v102 )
          goto LABEL_76;
LABEL_77:
        v103 = *(unsigned int *)(v93 + 56);
        v104 = *(_QWORD *)(v93 + 48);
        v105 = v174;
        v106 = v103 + 1;
        v107 = v104 + 224 * v103;
        if ( v103 + 1 > (unsigned __int64)*(unsigned int *)(v93 + 60) )
        {
          v146 = v93 + 48;
          v193 = *(_QWORD *)(v93 + 48);
          if ( v104 > v174 || v107 <= v174 )
          {
            sub_1D67900(v146, v106);
            v105 = v174;
            v107 = *(_QWORD *)(v93 + 48) + 224LL * *(unsigned int *)(v93 + 56);
          }
          else
          {
            sub_1D67900(v146, v106);
            v147 = *(_QWORD *)(v93 + 48);
            v105 = v147 + v174 - v193;
            v107 = v147 + 224LL * *(unsigned int *)(v93 + 56);
          }
        }
        *(_DWORD *)v107 = *(_DWORD *)v105;
        *(__m128i *)(v107 + 8) = _mm_loadu_si128((const __m128i *)(v105 + 8));
        *(__m128i *)(v107 + 24) = _mm_loadu_si128((const __m128i *)(v105 + 24));
        *(__m128i *)(v107 + 40) = _mm_loadu_si128((const __m128i *)(v105 + 40));
        v108 = _mm_loadu_si128((const __m128i *)(v105 + 56));
        *(_QWORD *)(v107 + 80) = 0x400000000LL;
        *(__m128i *)(v107 + 56) = v108;
        v109 = *(_DWORD *)(v105 + 80);
        *(_QWORD *)(v107 + 72) = v107 + 88;
        if ( v109 )
        {
          v193 = v105;
          sub_1D3C410((__int64 *)(v107 + 72), (__int64 *)(v105 + 72));
          v105 = v193;
        }
        *(_QWORD *)(v107 + 216) = *(_QWORD *)(v105 + 216);
        v110 = (char *)v251;
        ++*(_DWORD *)(v93 + 56);
        if ( v110 != v186 )
          free(v110);
        v49 = *(_QWORD *)(*(_QWORD *)(v93 + 8) + v99 + 24);
        if ( (*(_BYTE *)(v49 + 28) & 0x7F) != 0x2F )
          goto LABEL_65;
        if ( *(_BYTE *)(v49 + 81) )
          goto LABEL_65;
        v111 = *(_QWORD *)(sub_AB5860(*(_QWORD *)(*(_QWORD *)v93 + 248LL), *(_QWORD *)(v49 + 48)) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v111 + 16) != 38 )
          goto LABEL_65;
        v112 = v222;
        sub_F1D250(v174, *(_QWORD *)(v111 + 32), 0, 0);
        v113 = *((unsigned int *)v112 + 2);
        v114 = v113 + 1;
        if ( v113 + 1 > (unsigned __int64)*((unsigned int *)v112 + 3) )
        {
          v168 = (unsigned __int64)*v112;
          v169 = v112 + 2;
          if ( (unsigned __int64)*v112 > v174 || v174 >= v168 + 24 * v113 )
          {
            sub_2237220(v112, v169, v114, 24);
            v49 = (unsigned __int64)*v112;
            v113 = *((unsigned int *)v112 + 2);
            v115 = (const __m128i *)v174;
          }
          else
          {
            sub_2237220(v112, v169, v114, 24);
            v49 = (unsigned __int64)*v112;
            v113 = *((unsigned int *)v112 + 2);
            v115 = (const __m128i *)((char *)*v112 + v174 - v168);
          }
        }
        else
        {
          v49 = (unsigned __int64)*v112;
          v115 = (const __m128i *)v174;
        }
        v84 += 16;
        v116 = (__m128i *)(v49 + 24 * v113);
        *v116 = _mm_loadu_si128(v115);
        v116[1].m128i_i64[0] = v115[1].m128i_i64[0];
        ++*((_DWORD *)v112 + 2);
        if ( v192 == v84 )
        {
LABEL_88:
          v81 = (int *)v174;
LABEL_89:
          if ( v228 != v185 )
          {
            free(v228);
            v80 = v232;
            if ( !(_DWORD)v232 )
              goto LABEL_91;
            goto LABEL_60;
          }
          v80 = v232;
          if ( !(_DWORD)v232 )
          {
LABEL_91:
            if ( v231 != v208 + 2 )
              free(v231);
            v117 = v214;
            if ( ((unsigned __int8)v214 & 1) == 0 && v214 )
            {
              if ( *(void **)v214 != (char *)v214 + 16 )
                free(*(void **)v214);
              operator delete(v117, 0x48u);
            }
            v36 = v207;
            sub_1D37560(v176, v207);
            v37 = (unsigned int)(v179 + 1);
            v121 = v179 + 1;
            if ( v199 == v37 || (v36 = v266) != 0 )
            {
              v118 = v190;
              v148 = v205 & 0xFFFFFFFFFFFFFFF0LL;
              if ( v200 > v190 )
              {
                v149 = v190;
                LODWORD(v180) = v179 + 1;
                v150 = 8LL * ((unsigned int)v179 >> 6);
                do
                {
                  if ( v266 && v266 - 1 <= (unsigned int)v265 )
                    break;
                  v151 = *(_QWORD *)(v204 + 8 * v118) & 0xFFFFFFFFFFFFFFF0LL;
                  v152 = *(_QWORD *)v151;
                  if ( (*(_BYTE *)(*(_QWORD *)v151 + 8LL) & 0xF) != 0 )
                    v153 = sub_F64F00(*(_QWORD *)(v204 + 8 * v118), v36, v118, v119, v152) & 0xFFFFFFFFFFFFFFF0LL;
                  else
                    v153 = v152 & 0xFFFFFFFFFFFFFFF0LL;
                  v154 = *(_QWORD *)v148;
                  if ( (*(_BYTE *)(*(_QWORD *)v148 + 8LL) & 0xF) != 0 )
                  {
                    v175 = v153;
                    v154 = sub_F64F00(v205, v36, v118, v119, v153);
                    v153 = v175;
                  }
                  v155 = v154 & 0xFFFFFFFFFFFFFFF0LL;
                  v156 = 0;
                  v157 = v149 + 1;
                  if ( v149 != -1 )
                  {
                    v158 = *v202;
                    if ( v158 <= v149 )
                      v156 = v149 + 1 - v158;
                  }
                  v159 = *v194;
                  if ( (*v194 & 1) != 0 )
                    v160 = (((v159 >> 1) & ~(-1LL << (*v194 >> 58))) >> v179) & 1;
                  else
                    v160 = (*(_QWORD *)(*(_QWORD *)v159 + v150) >> v179) & 1LL;
                  v36 = (__int64)v171;
                  if ( (unsigned int)sub_1D38E60(v188, v171, v156, v155, v153, v160 & 1, (__int64)v182, v183) )
                    goto LABEL_206;
                  ++v149;
                  sub_1D38630((__int64)v176);
                  v118 = v157;
                }
                while ( v157 < v200 );
                v190 = v149;
                v121 = (int)v180;
              }
            }
            else
            {
              v122 = v181[5];
              if ( v122 > 1 && !BYTE4(v265) )
              {
                v118 = v190;
                v161 = v200;
                v162 = v190;
                if ( v200 > v190 )
                {
                  v163 = v122 + v190 - 1;
                  v164 = v176;
                  do
                  {
                    ++v162;
                    sub_1D38630((__int64)v164);
                  }
                  while ( v162 != v163 && v162 < v161 );
                  v190 = v162;
                }
              }
            }
            if ( !HIBYTE(v265) && (unsigned int)sub_1D3CBA0((__int64)v176, v36, v118, v119, v29, v120) )
            {
LABEL_206:
              v3 = v212;
              v4 = v188;
              sub_1D36980((__int64)v176);
              goto LABEL_115;
            }
            v30 = (unsigned int)v268;
            v123 = v267;
            v34 = 224LL * (unsigned int)v268;
            v124 = (__int64 *)((char *)v267 + v34);
            if ( v267 != (__int64 *)((char *)v267 + v34) )
            {
              do
              {
                v36 = *(unsigned int *)v123;
                v123 += 28;
                v30 = v264[15].m128_i64[0];
                *(_QWORD *)(v30 + 8 * v36) = *(v123 - 1);
              }
              while ( v124 != v123 );
              v125 = v267;
              v124 = (__int64 *)((char *)v267 + v34);
              if ( v267 != (__int64 *)((char *)v267 + v34) )
              {
                do
                {
                  while ( 1 )
                  {
                    v124 -= 28;
                    v126 = (__int64 *)v124[9];
                    if ( v126 == v124 + 11 )
                      break;
                    free(v126);
                    if ( v125 == v124 )
                      goto LABEL_108;
                  }
                }
                while ( v125 != v124 );
LABEL_108:
                v124 = v267;
              }
            }
            if ( v124 != v176 + 8 )
              free(v124);
LABEL_111:
            LODWORD(v179) = v121;
            if ( v199 == v37 )
            {
              v3 = v212;
              v4 = v188;
              v199 = v190;
              v127 = v190 + 1;
              goto LABEL_113;
            }
            goto LABEL_24;
          }
          goto LABEL_60;
        }
      }
      else
      {
        if ( v88 == 47 )
        {
          v86 = *(_DWORD *)(v87 + 68) & 0xFFFFF;
          v85 = *(_WORD *)(v87 + 70) >> 4;
        }
        else
        {
          v86 = *(_DWORD *)(v87 + 64) & 0xFFFFF;
          v85 = *(_WORD *)(v87 + 66) >> 4;
        }
LABEL_64:
        if ( v264[1].m128_i32[2] == v86 )
          goto LABEL_69;
LABEL_65:
        v84 += 16;
        if ( v192 == v84 )
          goto LABEL_88;
      }
    }
    v85 = *(unsigned __int16 *)(v87 + 22);
    v86 = *(_WORD *)(v87 + 20) & 0x7FFF;
    goto LABEL_64;
  }
LABEL_6:
  if ( ptr != v178 + 16 )
    free(ptr);
  if ( v255 != v178 + 2 )
    free(v255);
  if ( v189 )
  {
    *(_QWORD *)(v4 + 544) = v189;
    *(_QWORD *)(v4 + 512) = v195;
    *(_QWORD *)(v4 + 9944) = v227;
    *(_DWORD *)(v4 + 80) = v198;
    *(_DWORD *)(v4 + 2632) = v206;
  }
  *(_DWORD *)(v4 + 11200) = v187;
  *(_BYTE *)(v4 + 12592) = v196;
  *(_BYTE *)(v4 + 11248) = v197;
  v21 = *(_QWORD *)(v4 + 264);
  if ( *(_DWORD *)(v21 + 204) == 5 )
    *(_BYTE *)(v21 + 194) = 1;
  v22 = 3;
  if ( !v191 )
    v22 = 0;
  *(_DWORD *)(v21 + 204) = v22;
  sub_190D5E0(v4, a2);
  result = (_BYTE *)*v3;
  *(_BYTE *)*v3 = v17;
  return result;
}
