__int64 __fastcall sub_18F5260(
        __int64 a1,
        __int64 a2,
        int *a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        __m128i a7,
        double a8,
        char a9,
        __int64 a10,
        char a11)
{
  __m128 *v11; // rbx
  char **v12; // r15
  __int64 v13; // r13
  _QWORD *v14; // rbp
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // rbp
  int v27; // edx
  unsigned __int8 v28; // al
  __int64 *v29; // r13
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  unsigned int v34; // ecx
  __int64 *v35; // rsi
  __int64 v36; // r9
  _QWORD *v37; // rdx
  __int64 v38; // r12
  unsigned __int8 *v39; // rax
  __int64 v40; // r15
  __int64 v41; // rdx
  unsigned __int8 v42; // r13
  unsigned __int8 *v43; // rbx
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r13
  char **v47; // r12
  __int64 v48; // r15
  __int64 v49; // r13
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // rbp
  unsigned __int64 v55; // rdx
  int v56; // eax
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r9
  unsigned __int64 v64; // r13
  char *v65; // r13
  char *v66; // rbp
  unsigned __int64 v67; // rbx
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  __int64 v70; // rdx
  unsigned __int64 v71; // r12
  __m128 *v72; // rbp
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rbx
  unsigned __int64 v79; // r12
  __int64 v80; // rbp
  void *v81; // rdi
  unsigned __int64 v82; // rsi
  int v83; // eax
  unsigned __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rsi
  char *v87; // rbp
  __int64 v88; // r12
  void *v89; // rdi
  int v90; // eax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rsi
  __int64 v94; // rbp
  void *v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r12
  unsigned __int64 v99; // rbp
  __int64 v100; // rbx
  unsigned __int64 v101; // r12
  void *v102; // rdi
  __int64 v103; // r12
  void *v104; // rdi
  __int64 *v105; // rsi
  unsigned int *v106; // rax
  __int64 v107; // rbx
  __int64 v108; // rax
  __int64 v109; // rdx
  unsigned __int64 v110; // rdx
  unsigned __int64 *v111; // rcx
  __int64 v112; // r9
  __int64 v113; // rdi
  char **v114; // rsi
  __int64 v115; // r8
  unsigned __int64 *v116; // rax
  unsigned __int64 v117; // rax
  unsigned __int64 *v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rdx
  int v123; // esi
  int v124; // r10d
  __int64 v125; // r9
  __int64 v126; // rax
  unsigned __int64 v127; // rax
  __int64 v128; // rbx
  unsigned __int8 v129; // al
  char *v130; // rbp
  __int64 v131; // rdi
  bool v132; // al
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  char v137; // r12
  __int64 *v138; // r14
  unsigned int v139; // ecx
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rbp
  __int64 v149; // r8
  __int64 v150; // r9
  char *v151; // rax
  _QWORD *v152; // rax
  __int64 v153; // rbx
  __int64 *v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  unsigned __int64 *v157; // rax
  __int64 *v158; // rdx
  unsigned __int64 v159; // rcx
  unsigned __int64 v160; // rax
  unsigned __int64 v161; // rbx
  __int64 v162; // rdi
  unsigned __int64 v163; // rbx
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // r12
  char *v169; // rax
  _QWORD *v170; // rax
  __int64 *v171; // rax
  __int64 v172; // rcx
  int v173; // eax
  __int64 v174; // rdx
  __int64 v175; // rdx
  __int64 *v176; // rbp
  __int64 v177; // r13
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // r12
  char *v183; // rax
  _QWORD *v184; // rax
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // rbx
  __int64 v188; // r8
  __int64 v189; // r9
  char *v190; // rax
  _QWORD *v191; // rax
  __int64 v192; // r14
  unsigned __int8 *v193; // rbx
  _BYTE *v194; // rdx
  __int64 v195; // rax
  unsigned __int64 *v196; // rax
  unsigned __int64 *v197; // rax
  unsigned __int64 *v198; // rax
  __int64 *v199; // rdx
  unsigned __int64 v200; // rcx
  unsigned __int64 v201; // rax
  unsigned __int64 **v202; // rax
  __int64 v203; // rdx
  int v204; // eax
  __int64 *v205; // rcx
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // r12
  __int64 v209; // r15
  __int64 v210; // r12
  void *v211; // rdi
  __int64 v212; // [rsp-10h] [rbp-218h]
  __int64 v213; // [rsp-8h] [rbp-210h]
  __int64 v214; // [rsp+0h] [rbp-208h]
  char *v215; // [rsp+0h] [rbp-208h]
  __int64 v216; // [rsp+8h] [rbp-200h]
  __int64 v217; // [rsp+8h] [rbp-200h]
  char **v218; // [rsp+8h] [rbp-200h]
  int v219; // [rsp+10h] [rbp-1F8h]
  int v220; // [rsp+10h] [rbp-1F8h]
  int v221; // [rsp+10h] [rbp-1F8h]
  char **v222; // [rsp+18h] [rbp-1F0h]
  __int64 v223; // [rsp+28h] [rbp-1E0h]
  __int64 v224; // [rsp+30h] [rbp-1D8h]
  unsigned int v225; // [rsp+38h] [rbp-1D0h]
  unsigned __int64 v230; // [rsp+60h] [rbp-1A8h]
  __int64 v231[2]; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v232; // [rsp+78h] [rbp-190h] BYREF
  char *v233; // [rsp+80h] [rbp-188h] BYREF
  __int64 v234; // [rsp+88h] [rbp-180h]
  __m128 v235; // [rsp+110h] [rbp-F8h] BYREF
  void *v236; // [rsp+120h] [rbp-E8h]
  __int64 v237; // [rsp+128h] [rbp-E0h]
  void *v238[2]; // [rsp+130h] [rbp-D8h] BYREF
  __int64 v239; // [rsp+140h] [rbp-C8h] BYREF
  __int16 v240; // [rsp+150h] [rbp-B8h]
  char v241; // [rsp+188h] [rbp-80h]
  unsigned int v242; // [rsp+190h] [rbp-78h]
  char v243; // [rsp+194h] [rbp-74h]
  void *ptr; // [rsp+198h] [rbp-70h]
  __int64 v245; // [rsp+1A0h] [rbp-68h]
  _BYTE v246[96]; // [rsp+1A8h] [rbp-60h] BYREF

  v13 = a1;
  v14 = (_QWORD *)a2;
  v231[0] = a2;
  v225 = *a3;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 > 5 )
    goto LABEL_3;
  v11 = (__m128 *)(a1 + 11256);
  v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v32 = *(unsigned int *)(a1 + 11272);
  v33 = *(_QWORD *)(a1 + 11256);
  if ( !(_DWORD)v32 )
    goto LABEL_181;
  v34 = (v32 - 1) & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
  v35 = (__int64 *)(v33 + 56LL * v34);
  v36 = *v35;
  if ( v31 != *v35 )
  {
    v123 = 1;
    if ( v36 != -4096 )
    {
      do
      {
        v124 = v123 + 1;
        v34 = (v32 - 1) & (v123 + v34);
        v35 = (__int64 *)(v33 + 56LL * v34);
        v125 = *v35;
        if ( v31 == *v35 )
          goto LABEL_47;
        v123 = v124;
      }
      while ( v125 != -4096 );
    }
LABEL_181:
    sub_18C7040(&v235, (_QWORD *)(v33 + 56 * v32), (_QWORD *)(v33 + 56 * v32), (__int64)v11, 1);
    v230 = v235.m128_u64[0];
    goto LABEL_48;
  }
LABEL_47:
  sub_18C7040(&v235, v35, (_QWORD *)(v33 + 56 * v32), (__int64)v11, 1);
  v230 = v235.m128_u64[0];
LABEL_48:
  v37 = (_QWORD *)(*(_QWORD *)(v13 + 11256) + 56LL * *(unsigned int *)(v13 + 11272));
  sub_18C7040(&v235, v37, v37, (__int64)v11, 1);
  if ( v235.m128_u64[0] == v230 )
    goto LABEL_109;
  v38 = *(_QWORD *)(v230 + 8);
  v12 = &v233;
  v224 = v38 + 32LL * *(unsigned int *)(v230 + 16);
  if ( v224 == v38 )
    goto LABEL_108;
  v223 = v13;
  do
  {
    sub_FC70B0((__int64)&v235, *(_QWORD *)(v223 + 264), *(_DWORD *)v38, *(_DWORD *)(v38 + 24));
    v39 = *(unsigned __int8 **)(v38 + 8);
    if ( !v39 )
      goto LABEL_95;
    v219 = *v39;
    if ( *v39 )
    {
      v222 = v12;
      v40 = 0;
      do
      {
        while ( 1 )
        {
          v42 = v39[(unsigned int)v40 + 1];
          if ( v42 )
            break;
          v41 = v40++;
          sub_AEC220((unsigned __int8 **)&v235, *(_BYTE **)&v39[32 * v41 + 96], *(_QWORD *)&v39[32 * v41 + 104]);
          v39 = *(unsigned __int8 **)(v38 + 8);
          if ( v219 == (_DWORD)v40 )
            goto LABEL_58;
        }
        v43 = (unsigned __int8 *)v235.m128_u64[0];
        v216 = *(_QWORD *)&v39[8 * (unsigned int)v40 + 16];
        if ( !v235.m128_u64[0] )
        {
          v82 = v235.m128_u64[1];
          v83 = *(_DWORD *)(v235.m128_u64[1] + 14976);
          if ( v83 )
          {
            v91 = (unsigned int)(v83 - 1);
            *(_DWORD *)(v235.m128_u64[1] + 14976) = v91;
            v43 = *(unsigned __int8 **)(v82 + 8 * v91 + 14848);
            v92 = *((unsigned int *)v43 + 134);
            *v43 = 0;
            v93 = *((_QWORD *)v43 + 66);
            *((_DWORD *)v43 + 106) = 0;
            v92 <<= 6;
            v94 = v93 + v92;
            while ( v93 != v94 )
            {
              while ( 1 )
              {
                v94 -= 64;
                v95 = *(void **)(v94 + 24);
                if ( v95 == (void *)(v94 + 40) )
                  break;
                operator delete(v95);
                if ( v93 == v94 )
                  goto LABEL_134;
              }
            }
LABEL_134:
            *((_DWORD *)v43 + 134) = 0;
          }
          else
          {
            v43 = (unsigned __int8 *)operator new(0x3A0u);
            *v43 = 0;
            *((_QWORD *)v43 + 12) = v43 + 112;
            *((_QWORD *)v43 + 16) = v43 + 144;
            *((_QWORD *)v43 + 20) = v43 + 176;
            *((_QWORD *)v43 + 24) = v43 + 208;
            *((_QWORD *)v43 + 28) = v43 + 240;
            *((_QWORD *)v43 + 32) = v43 + 272;
            *((_QWORD *)v43 + 36) = v43 + 304;
            *((_QWORD *)v43 + 40) = v43 + 336;
            *((_QWORD *)v43 + 44) = v43 + 368;
            *((_QWORD *)v43 + 48) = v43 + 400;
            *((_QWORD *)v43 + 52) = v43 + 432;
            *((_QWORD *)v43 + 13) = 0;
            v43[112] = 0;
            *((_QWORD *)v43 + 17) = 0;
            v43[144] = 0;
            *((_QWORD *)v43 + 21) = 0;
            v43[176] = 0;
            *((_QWORD *)v43 + 25) = 0;
            v43[208] = 0;
            *((_QWORD *)v43 + 29) = 0;
            v43[240] = 0;
            *((_QWORD *)v43 + 33) = 0;
            v43[272] = 0;
            *((_QWORD *)v43 + 37) = 0;
            v43[304] = 0;
            *((_QWORD *)v43 + 41) = 0;
            v43[336] = 0;
            *((_QWORD *)v43 + 45) = 0;
            v43[368] = 0;
            *((_QWORD *)v43 + 49) = 0;
            v43[400] = 0;
            *((_QWORD *)v43 + 53) = 0x800000000LL;
            *((_QWORD *)v43 + 66) = v43 + 544;
            *((_QWORD *)v43 + 67) = 0x600000000LL;
          }
          v235.m128_u64[0] = (unsigned __int64)v43;
        }
        ++v40;
        v43[*v43 + 1] = v42;
        v44 = v235.m128_u64[0];
        v45 = *(unsigned __int8 *)v235.m128_u64[0];
        *(_BYTE *)v235.m128_u64[0] = v45 + 1;
        *(_QWORD *)(v44 + 8 * v45 + 16) = v216;
        v39 = *(unsigned __int8 **)(v38 + 8);
      }
      while ( v219 != (_DWORD)v40 );
LABEL_58:
      v12 = v222;
    }
    v46 = *((_QWORD *)v39 + 52);
    if ( v46 != v46 + 12LL * *((unsigned int *)v39 + 106) )
    {
      v214 = v38;
      v47 = v12;
      v48 = *((_QWORD *)v39 + 52);
      v49 = v46 + 12LL * *((unsigned int *)v39 + 106);
      do
      {
        v54 = v235.m128_u64[0];
        if ( v235.m128_u64[0] )
        {
          v50 = *(unsigned int *)(v235.m128_u64[0] + 424);
          v51 = *(unsigned int *)(v235.m128_u64[0] + 428);
          v52 = v50 + 1;
        }
        else
        {
          v55 = v235.m128_u64[1];
          v56 = *(_DWORD *)(v235.m128_u64[1] + 14976);
          if ( v56 )
          {
            v75 = (unsigned int)(v56 - 1);
            *(_DWORD *)(v235.m128_u64[1] + 14976) = v75;
            v54 = *(_QWORD *)(v55 + 8 * v75 + 14848);
            v76 = *(unsigned int *)(v54 + 536);
            *(_BYTE *)v54 = 0;
            v77 = *(_QWORD *)(v54 + 528);
            *(_DWORD *)(v54 + 424) = 0;
            v78 = v77 + (v76 << 6);
            if ( v77 == v78 )
            {
              v52 = 1;
              v50 = 0;
            }
            else
            {
              v218 = v47;
              v79 = v54;
              v80 = v77;
              do
              {
                while ( 1 )
                {
                  v78 -= 64;
                  v81 = *(void **)(v78 + 24);
                  if ( v81 == (void *)(v78 + 40) )
                    break;
                  operator delete(v81);
                  if ( v80 == v78 )
                    goto LABEL_116;
                }
              }
              while ( v80 != v78 );
LABEL_116:
              v54 = v79;
              v47 = v218;
              v50 = *(unsigned int *)(v54 + 424);
              v52 = v50 + 1;
            }
            *(_DWORD *)(v54 + 536) = 0;
            v51 = *(unsigned int *)(v54 + 428);
          }
          else
          {
            v57 = operator new(0x3A0u);
            v51 = 8;
            v52 = 1;
            v54 = v57;
            *(_BYTE *)v57 = 0;
            *(_QWORD *)(v57 + 96) = v57 + 112;
            *(_QWORD *)(v57 + 128) = v57 + 144;
            *(_QWORD *)(v57 + 160) = v57 + 176;
            *(_QWORD *)(v57 + 192) = v57 + 208;
            *(_QWORD *)(v57 + 224) = v57 + 240;
            *(_QWORD *)(v57 + 256) = v57 + 272;
            *(_QWORD *)(v57 + 288) = v57 + 304;
            *(_QWORD *)(v57 + 320) = v57 + 336;
            *(_QWORD *)(v57 + 352) = v57 + 368;
            *(_QWORD *)(v57 + 384) = v57 + 400;
            *(_QWORD *)(v57 + 416) = v57 + 432;
            *(_QWORD *)(v57 + 104) = 0;
            *(_BYTE *)(v57 + 112) = 0;
            *(_QWORD *)(v57 + 136) = 0;
            *(_BYTE *)(v57 + 144) = 0;
            *(_QWORD *)(v57 + 168) = 0;
            *(_BYTE *)(v57 + 176) = 0;
            *(_QWORD *)(v57 + 200) = 0;
            *(_BYTE *)(v57 + 208) = 0;
            *(_QWORD *)(v57 + 232) = 0;
            *(_BYTE *)(v57 + 240) = 0;
            *(_QWORD *)(v57 + 264) = 0;
            *(_BYTE *)(v57 + 272) = 0;
            *(_QWORD *)(v57 + 296) = 0;
            *(_BYTE *)(v57 + 304) = 0;
            *(_QWORD *)(v57 + 328) = 0;
            *(_BYTE *)(v57 + 336) = 0;
            *(_QWORD *)(v57 + 360) = 0;
            *(_BYTE *)(v57 + 368) = 0;
            *(_QWORD *)(v57 + 392) = 0;
            *(_BYTE *)(v57 + 400) = 0;
            *(_QWORD *)(v57 + 424) = 0x800000000LL;
            *(_QWORD *)(v57 + 528) = v57 + 544;
            *(_QWORD *)(v57 + 536) = 0x600000000LL;
            v50 = 0;
          }
          v235.m128_u64[0] = v54;
        }
        v233 = *(char **)v48;
        LODWORD(v234) = *(_DWORD *)(v48 + 8);
        if ( v52 > v51 )
        {
          sub_2237220(v54 + 416, v54 + 432, v52, 12);
          v50 = *(unsigned int *)(v54 + 424);
        }
        v48 += 12;
        v53 = *(_QWORD *)(v54 + 416) + 12 * v50;
        *(_QWORD *)v53 = *v47;
        *(_DWORD *)(v53 + 8) = *((_DWORD *)v47 + 2);
        ++*(_DWORD *)(v54 + 424);
      }
      while ( v49 != v48 );
      v12 = v47;
      v38 = v214;
      v39 = *(unsigned __int8 **)(v214 + 8);
    }
    v63 = *((_QWORD *)v39 + 66);
    v64 = (unsigned __int64)*((unsigned int *)v39 + 134) << 6;
    v215 = (char *)(v63 + v64);
    if ( v63 == v63 + v64 )
      goto LABEL_95;
    v217 = v38;
    v65 = *((char **)v39 + 66);
    do
    {
      v66 = v65;
      if ( *(_DWORD *)v65 && *((_DWORD *)v65 + 1) )
      {
        v67 = v235.m128_u64[0];
        if ( v235.m128_u64[0] )
        {
          v68 = *(unsigned int *)(v235.m128_u64[0] + 536);
          v69 = *(_QWORD *)(v235.m128_u64[0] + 528);
          v70 = v68 + 1;
          v71 = v69 + (v68 << 6);
          if ( v68 + 1 <= (unsigned __int64)*(unsigned int *)(v235.m128_u64[0] + 540) )
          {
LABEL_92:
            *(_QWORD *)v71 = *(_QWORD *)v66;
            *(_DWORD *)(v71 + 8) = *((_DWORD *)v66 + 2);
            *(_QWORD *)(v71 + 12) = *(_QWORD *)(v66 + 12);
            *(_DWORD *)(v71 + 20) = *((_DWORD *)v66 + 5);
            *(_QWORD *)(v71 + 24) = v71 + 40;
            sub_18BD160((_QWORD *)(v71 + 24), *((_BYTE **)v66 + 3), *((_QWORD *)v66 + 3) + *((_QWORD *)v66 + 4));
            *(_BYTE *)(v71 + 56) = v66[56];
            ++*(_DWORD *)(v67 + 536);
            goto LABEL_93;
          }
        }
        else
        {
          v84 = v235.m128_u64[1];
          v85 = *(_DWORD *)(v235.m128_u64[1] + 14976);
          if ( v85 )
          {
            v96 = (unsigned int)(v85 - 1);
            *(_DWORD *)(v235.m128_u64[1] + 14976) = v96;
            v67 = *(_QWORD *)(v84 + 8 * v96 + 14848);
            v97 = *(unsigned int *)(v67 + 536);
            *(_BYTE *)v67 = 0;
            v98 = *(_QWORD *)(v67 + 528);
            *(_DWORD *)(v67 + 424) = 0;
            v69 = v98 + (v97 << 6);
            if ( v98 != v69 )
            {
              v99 = v67;
              v100 = v98;
              v101 = v69;
              do
              {
                while ( 1 )
                {
                  v101 -= 64LL;
                  v102 = *(void **)(v101 + 24);
                  if ( v102 == (void *)(v101 + 40) )
                    break;
                  operator delete(v102);
                  if ( v100 == v101 )
                    goto LABEL_141;
                }
              }
              while ( v100 != v101 );
LABEL_141:
              v67 = v99;
              v66 = v65;
              v69 = *(_QWORD *)(v67 + 528);
            }
            *(_DWORD *)(v67 + 536) = 0;
            v86 = *(unsigned int *)(v67 + 540);
          }
          else
          {
            v86 = 6;
            v67 = operator new(0x3A0u);
            *(_BYTE *)v67 = 0;
            *(_QWORD *)(v67 + 96) = v67 + 112;
            v69 = v67 + 544;
            *(_QWORD *)(v67 + 128) = v67 + 144;
            *(_QWORD *)(v67 + 160) = v67 + 176;
            *(_QWORD *)(v67 + 192) = v67 + 208;
            *(_QWORD *)(v67 + 224) = v67 + 240;
            *(_QWORD *)(v67 + 256) = v67 + 272;
            *(_QWORD *)(v67 + 288) = v67 + 304;
            *(_QWORD *)(v67 + 320) = v67 + 336;
            *(_QWORD *)(v67 + 352) = v67 + 368;
            *(_QWORD *)(v67 + 384) = v67 + 400;
            *(_QWORD *)(v67 + 416) = v67 + 432;
            *(_QWORD *)(v67 + 104) = 0;
            *(_BYTE *)(v67 + 112) = 0;
            *(_QWORD *)(v67 + 136) = 0;
            *(_BYTE *)(v67 + 144) = 0;
            *(_QWORD *)(v67 + 168) = 0;
            *(_BYTE *)(v67 + 176) = 0;
            *(_QWORD *)(v67 + 200) = 0;
            *(_BYTE *)(v67 + 208) = 0;
            *(_QWORD *)(v67 + 232) = 0;
            *(_BYTE *)(v67 + 240) = 0;
            *(_QWORD *)(v67 + 264) = 0;
            *(_BYTE *)(v67 + 272) = 0;
            *(_QWORD *)(v67 + 296) = 0;
            *(_BYTE *)(v67 + 304) = 0;
            *(_QWORD *)(v67 + 328) = 0;
            *(_BYTE *)(v67 + 336) = 0;
            *(_QWORD *)(v67 + 360) = 0;
            *(_BYTE *)(v67 + 368) = 0;
            *(_QWORD *)(v67 + 392) = 0;
            *(_BYTE *)(v67 + 400) = 0;
            *(_QWORD *)(v67 + 424) = 0x800000000LL;
            *(_QWORD *)(v67 + 528) = v67 + 544;
            *(_QWORD *)(v67 + 536) = 0x600000000LL;
          }
          v70 = 1;
          v235.m128_u64[0] = v67;
          v71 = v69;
          if ( v86 )
            goto LABEL_92;
        }
        if ( v69 > (unsigned __int64)v65 || v71 <= (unsigned __int64)v65 )
        {
          v103 = sub_2237400(v67 + 528, v67 + 544, v70, 64, v12);
          sub_9EF810((__int64 *)(v67 + 528), v103);
          v104 = *(void **)(v67 + 528);
          if ( v104 == (void *)(v67 + 544) )
          {
            *(_DWORD *)(v67 + 540) = (_DWORD)v233;
            v122 = *(unsigned int *)(v67 + 536);
            *(_QWORD *)(v67 + 528) = v103;
            v71 = (v122 << 6) + v103;
          }
          else
          {
            v221 = (int)v233;
            free(v104);
            *(_QWORD *)(v67 + 528) = v103;
            *(_DWORD *)(v67 + 540) = v221;
            v71 = ((unsigned __int64)*(unsigned int *)(v67 + 536) << 6) + v103;
          }
        }
        else
        {
          v87 = &v65[-v69];
          v88 = sub_2237400(v67 + 528, v67 + 544, v70, 64, v12);
          sub_9EF810((__int64 *)(v67 + 528), v88);
          v89 = *(void **)(v67 + 528);
          v90 = (int)v233;
          if ( v89 == (void *)(v67 + 544) )
          {
            *(_QWORD *)(v67 + 528) = v88;
            *(_DWORD *)(v67 + 540) = v90;
          }
          else
          {
            v220 = (int)v233;
            free(v89);
            *(_QWORD *)(v67 + 528) = v88;
            *(_DWORD *)(v67 + 540) = v220;
          }
          v66 = &v87[v88];
          v71 = ((unsigned __int64)*(unsigned int *)(v67 + 536) << 6) + v88;
        }
        goto LABEL_92;
      }
LABEL_93:
      v65 += 64;
    }
    while ( v215 != v65 );
    v38 = v217;
LABEL_95:
    if ( (_BYTE)v240 )
    {
      sub_FC7790((__int64)v236, (__int64 *)&v235, SHIBYTE(v240));
      v236 = nullptr;
      v240 = 0;
    }
    if ( v238[0] != &v239 )
      operator delete(v238[0]);
    if ( v235.m128_u64[0] && v235.m128_u64[1] )
      sub_1580C40(v235.m128_u64[1], v235.m128_u64[0]);
    v38 += 32;
  }
  while ( v224 != v38 );
  v13 = v223;
  v11 = *(__m128 **)(v230 + 8);
  v72 = &v11[2 * *(unsigned int *)(v230 + 16)];
  while ( v11 != v72 )
  {
    v72 -= 2;
    v73 = v72->m128_u64[1];
    if ( v73 )
    {
      v74 = v72[1].m128_u64[0];
      if ( v74 )
        sub_1580C40(v74, v73);
    }
  }
LABEL_108:
  *(_DWORD *)(v230 + 16) = 0;
LABEL_109:
  if ( (unsigned __int8)sub_B81C90(v231[0]) )
  {
    v11 = &v235;
    sub_168B9F0((__int64)&v235, (__int64 *)(v13 + 8), v225, 0x15E3u, 0);
    sub_15F7200(&v235);
  }
  a2 = v231[0];
  sub_19BA1E0(v13, v231[0], v225);
  v14 = (_QWORD *)v231[0];
LABEL_3:
  if ( !*(_BYTE *)(v13 + 3060) )
  {
    a2 = (__int64)v14;
    v58 = sub_2236570(v13 + 3040, v14);
    v14 = (_QWORD *)v231[0];
    if ( !v58 )
      goto LABEL_9;
LABEL_70:
    v59 = (__int64 *)(v13 + 8);
    if ( (*((_BYTE *)v14 + 28) & 0x7F) == 0x34 )
    {
      sub_168B9F0((__int64)&v235, v59, v225, 0xCF8u, 0);
      v233 = *(char **)(v231[0] + 40);
      sub_15894B0((__int64)&v235, (__int64 *)&v233);
      LODWORD(v11) = 1;
      sub_15F7200(&v235);
    }
    else
    {
      sub_168B9F0((__int64)&v235, v59, v225, 0xCCAu, 0);
      if ( v241 )
      {
        sub_AE9DF0((unsigned __int8 **)v238, 0, 2u);
      }
      else if ( v243 )
      {
        v148 = sub_168B9E0(&v235);
        v151 = (char *)v236;
        if ( v236 )
          v151 = (char *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v236 + 32LL))(v236);
        v233 = v151;
        v152 = sub_1587BC0(v148, (__int64 *)&v233, v146, v147, v149, v150);
        sub_AE9DF0((unsigned __int8 **)(*v152 + 32LL * v242 + 8), 0, 2u);
      }
      v232 = *(_QWORD *)(v231[0] + 40);
      v60 = sub_15894B0((__int64)&v235, &v232);
      LODWORD(v11) = 1;
      v233 = *(char **)(v231[0] + 48);
      sub_162B6D0(v60, (__int64 *)&v233);
      sub_15F7200(&v235);
    }
    return (unsigned int)v11;
  }
  v15 = *(_QWORD **)(v13 + 3040);
  v16 = &v15[*(unsigned int *)(v13 + 3052)];
  if ( v15 != v16 )
  {
    if ( v14 == (_QWORD *)*v15 )
      goto LABEL_70;
    while ( v16 != ++v15 )
    {
      if ( (_QWORD *)*v15 == v14 )
        goto LABEL_70;
    }
  }
LABEL_9:
  v17 = *((_BYTE *)v14 + 28) & 0x7F;
  if ( (unsigned int)v17 - 34 > 5 )
    goto LABEL_23;
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*v14 + 32LL))(v14) + 82) & 0x40) != 0 )
  {
    v105 = (__int64 *)(v13 + 8);
    if ( (*((_BYTE *)v14 + 28) & 0x7F) == 0x26 && (*((_BYTE *)v14 + 87) & 0x20) != 0 )
    {
      sub_168B9F0((__int64)&v235, v105, v225, 0xE4Fu, 0);
      v161 = sub_B72690((__int64)(v14 + 9));
      if ( v161 )
        v161 -= 64LL;
      if ( v241 )
      {
        sub_AE9DF0((unsigned __int8 **)v238, v161, 0xAu);
      }
      else if ( v243 )
      {
        v182 = sub_168B9E0(&v235);
        v183 = (char *)v236;
        if ( v236 )
          v183 = (char *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v236 + 32LL))(v236);
        v233 = v183;
        v184 = sub_1587BC0(v182, (__int64 *)&v233, v178, v179, v180, v181);
        sub_AE9DF0((unsigned __int8 **)(*v184 + 32LL * v242 + 8), v161, 0xAu);
      }
      v162 = 0;
      if ( (*((_BYTE *)v14 + 87) & 0x20) != 0 )
        v162 = v14[23];
      v163 = sub_B72690(v162 + 72);
      if ( v163 )
        v163 -= 64LL;
      if ( v241 )
      {
        sub_AE9DF0((unsigned __int8 **)v238, v163, 0xAu);
      }
      else if ( v243 )
      {
        v168 = sub_168B9E0(&v235);
        v169 = (char *)v236;
        if ( v236 )
          v169 = (char *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v236 + 32LL))(v236);
        v233 = v169;
        v170 = sub_1587BC0(v168, (__int64 *)&v233, v164, v165, v166, v167);
        sub_AE9DF0((unsigned __int8 **)(*v170 + 32LL * v242 + 8), v163, 0xAu);
      }
      goto LABEL_154;
    }
    if ( (*((_BYTE *)v14 + 83) & 8) != 0 && (v106 = (unsigned int *)v14[16], *((_BYTE *)v106 + 4)) )
    {
      v107 = *(_QWORD *)&v106[2 * *v106 + 2];
      sub_168B9F0((__int64)&v235, v105, v225, 0xE4Eu, 0);
      LOBYTE(v232) = v107 != 0;
      v108 = sub_1588420((__int64)&v235, (unsigned __int8 *)&v232);
      if ( v107 )
      {
        v109 = *(_DWORD *)(v107 + 16) * ((*(_WORD *)(v107 + 2) >> 6) & 7u);
        v233 = (char *)(v107 + 4LL * *(unsigned int *)(v107 + 4) + 20);
        v234 = v109;
LABEL_153:
        sub_166BAF0(v108, (__int64)&v233);
LABEL_154:
        LODWORD(v11) = 1;
        sub_15F7200(&v235);
        sub_18F5080(v13, (__int64)v14);
        return (unsigned int)v11;
      }
    }
    else
    {
      sub_168B9F0((__int64)&v235, v105, v225, 0xE4Eu, 0);
      LOBYTE(v232) = 0;
      v108 = sub_1588420((__int64)&v235, (unsigned __int8 *)&v232);
    }
    v233 = nullptr;
    v234 = 0;
    goto LABEL_153;
  }
  if ( a11 )
    goto LABEL_20;
  v20 = v14[7];
  if ( (v20 & 4) == 0 || !*(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
    goto LABEL_20;
  a7 = 0;
  a2 = (__int64)v14;
  v235 = 0;
  v11 = (__m128 *)v246;
  v236 = v238;
  v237 = 0x400000000LL;
  LOWORD(v242) = 0;
  ptr = v246;
  v245 = 0x400000000LL;
  if ( (unsigned __int8)sub_17516B0(v13, (unsigned __int64)v14, (__int64)&v235, v225, 1u, 0.0) )
  {
LABEL_208:
    if ( ptr != v246 )
      free(ptr);
    if ( v236 != v238 )
      free(v236);
LABEL_43:
    LODWORD(v11) = 1;
    return (unsigned int)v11;
  }
  if ( !(_BYTE)v242 )
  {
    sub_168B9F0((__int64)&v233, (__int64 *)(v13 + 8), v225, 0x1347u, 0);
    sub_17BA610((__int64)&v233, v231);
    sub_15F7200(&v233);
    sub_174DC50(v13, (__int64)&v235, 1u, 0.0);
    goto LABEL_208;
  }
  if ( ptr != v246 )
    free(ptr);
  if ( v236 != v238 )
    free(v236);
LABEL_20:
  v21 = *(_QWORD *)(v13 + 232);
  if ( (*(_BYTE *)(v21 + 1) & 0x20) != 0 )
  {
    v61 = sub_C1D490((__int64)v14, a2, v18, v19);
    v62 = sub_F57E80(*(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v62
      || (*(_QWORD *)(v62 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0
      || (*(_BYTE *)(v62 + 17) & 4) != 0
      || (a2 = (__int64)v14, LODWORD(v11) = sub_1D3EC30(v13, v14, v225, 1), !(_BYTE)v11) )
    {
      v21 = *(_QWORD *)(v13 + 232);
      goto LABEL_21;
    }
    return (unsigned int)v11;
  }
LABEL_21:
  if ( (*(_BYTE *)(v21 + 60) & 0x10) != 0 )
  {
    a2 = v225;
    if ( !(unsigned __int8)sub_1799D00(*(__int64 **)(v13 + 664), v225, (__int64)v14) )
      goto LABEL_43;
  }
  v14 = (_QWORD *)v231[0];
  v17 = *(_BYTE *)(v231[0] + 28) & 0x7F;
LABEL_23:
  if ( v17 == 73 )
  {
    a2 = (__int64)v14;
    if ( (unsigned __int8)sub_1CBF760(v13, v14, v225) )
      goto LABEL_43;
    v14 = (_QWORD *)v231[0];
    v17 = *(_BYTE *)(v231[0] + 28) & 0x7F;
  }
  if ( (unsigned int)v17 - 35 <= 3 )
  {
    v22 = sub_B72690((__int64)(v14 + 9));
    if ( !v22 )
      BUG();
    v23 = *(_QWORD *)(v22 + 64);
    if ( v23
      && (*(_BYTE *)(v23 + 10) & 0x20) != 0
      && ((*((_BYTE *)v14 + 28) & 0x7F) == 0x26 && sub_B98FC0((__int64)v14, a2)
       || sub_B98230(v14, a2)
       || sub_B98360(v14, a2)) )
    {
      v11 = &v235;
      sub_168B9F0((__int64)&v235, (__int64 *)(v13 + 8), v225, 0x1A56u, 0);
      LOBYTE(v233) = (*((_BYTE *)v14 + 28) & 0x7F) != 38;
      sub_1588420((__int64)&v235, (unsigned __int8 *)&v233);
      sub_15F7200(&v235);
    }
    v14 = (_QWORD *)v231[0];
    v17 = *(_BYTE *)(v231[0] + 28) & 0x7F;
  }
  if ( v17 == 18 )
  {
    v24 = sub_BACEB0((unsigned __int64)v14, 1);
    if ( v24 )
    {
      if ( (unsigned __int8)sub_1BDF300(v13, v24, v225) )
        goto LABEL_43;
      goto LABEL_37;
    }
    v14 = (_QWORD *)v231[0];
  }
  if ( (unsigned __int8)sub_1BDF300(v13, v14, v225) )
    goto LABEL_43;
LABEL_37:
  v25 = *(_QWORD *)(v13 + 544);
  v26 = v231[0];
  v27 = *(_DWORD *)(*(_QWORD *)(v13 + 232) + 64LL);
  if ( (*(_BYTE *)(v25 + 8) & 0x7F) == 0x1A )
  {
    LOBYTE(v11) = v27 != 0 && v25 != 56;
    if ( (_BYTE)v11 )
    {
      if ( sub_B8E9C0(v25, v231[0]) )
      {
        v26 = v231[0];
        v27 = *(_DWORD *)(*(_QWORD *)(v13 + 232) + 64LL);
        goto LABEL_39;
      }
      v26 = v231[0];
      v28 = *(_BYTE *)(v231[0] + 28) & 0x7F;
      if ( (unsigned int)v28 - 40 <= 6 )
      {
        sub_168B9F0((__int64)&v235, (__int64 *)(v13 + 8), v225, 0x1230u, 0);
        v126 = *(unsigned int *)(v13 + 40);
        if ( !(_DWORD)v126 )
          BUG();
        LOBYTE(v233) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * v126 - 8) + 9LL) & 1;
        sub_15890D0((__int64)&v235, (unsigned __int8 *)&v233);
        sub_15F7200(&v235);
        sub_168B9F0((__int64)&v235, (__int64 *)(v13 + 8), *(_DWORD *)(v231[0] + 24), 0x172Eu, 0);
        sub_17BA610((__int64)&v235, v231);
        sub_15F7200(&v235);
        return (unsigned int)v11;
      }
LABEL_41:
      if ( v28 == 57 )
      {
        v29 = (__int64 *)(v13 + 8);
        sub_168B9F0((__int64)&v235, v29, v225, 0x150Bu, 0);
        sub_15F7200(&v235);
        sub_168B9F0((__int64)&v235, v29, *(_DWORD *)(v26 + 24), 0x1726u, 0);
        sub_15F7200(&v235);
        goto LABEL_43;
      }
      sub_1687F30(v13, v26, a3, a4, a5, a6, a7, a8, a9, a10);
      v113 = v231[0];
      v233 = (char *)v231[0];
      v114 = (char **)v212;
      v115 = v213;
      if ( (*(_BYTE *)(v231[0] + 29) & 1) == 0 )
      {
LABEL_164:
        v120 = *(_QWORD *)(v13 + 232);
        v233 = (char *)v113;
        if ( (*(_BYTE *)(v120 + 1) & 8) != 0 )
          goto LABEL_165;
        v114 = nullptr;
        v127 = sub_15F1640(v13, 0);
        v128 = v127;
        if ( v127 && (*(_BYTE *)(v127 + 82) & 1) != 0 )
        {
          v129 = sub_B81B70(v127);
          if ( !v129 )
            goto LABEL_311;
          if ( v129 <= 3u )
            goto LABEL_198;
          if ( v129 > 6u )
          {
LABEL_311:
            ++*((_DWORD *)v12 + 2);
            BUG();
          }
          if ( (unsigned __int8)sub_B844D0(v233) == 2 )
          {
            v130 = v233;
            v131 = *(_QWORD *)(v13 + 272);
            if ( (v233[28] & 0x7Fu) - 34 > 5 )
            {
              v132 = sub_1021600(v131, v225);
              v137 = 1;
            }
            else
            {
              v132 = sub_1021600(v131, v225);
              v137 = v132;
              if ( !v132 )
              {
                if ( (v130[82] & 1) == 0 )
                {
                  if ( (v130[29] & 1) == 0 )
                  {
LABEL_196:
                    v138 = (__int64 *)(v13 + 8);
                    v139 = 5598;
LABEL_197:
                    sub_168B9F0((__int64)&v235, v138, v225, v139, 0);
                    LOBYTE(v232) = v137;
                    v140 = sub_1588420((__int64)&v235, (unsigned __int8 *)&v232);
                    sub_1683CF0(v140, (__int64 *)&v233);
                    sub_15F7200(&v235);
                    sub_18CD400(v13, v128, v141, v142, v143, v144);
                    v145 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v233 + 32LL))(v233);
                    sub_168B9F0((__int64)&v235, v138, *(_DWORD *)(v145 + 24), 0x172Eu, 0);
                    v114 = &v233;
                    sub_1683CF0((__int64)&v235, (__int64 *)&v233);
                    sub_15F7200(&v235);
                    goto LABEL_198;
                  }
                  v198 = sub_B8C3D0((__int64)v130, v225, v133, v134, v135, v136);
                  v199 = (__int64 *)*v198;
                  v200 = *v198 + 8LL * *((unsigned int *)v198 + 2);
                  if ( *v198 >= v200 )
                  {
                    if ( v199 == (__int64 *)v200 )
                      goto LABEL_196;
                    if ( *(_WORD *)(*(_QWORD *)v200 + 36LL) != 181 )
                    {
                      v205 = (__int64 *)(v200 + 8);
                      while ( v199 != v205 )
                      {
                        v206 = *v205++;
                        if ( *(_WORD *)(v206 + 36) == 181 )
                          goto LABEL_286;
                      }
                      goto LABEL_196;
                    }
                  }
                  else
                  {
                    v201 = *v198;
                    while ( *(_WORD *)(*(_QWORD *)v201 + 36LL) != 181 )
                    {
                      v201 += 8LL;
                      if ( v200 == v201 )
                        goto LABEL_196;
                    }
                    if ( v200 == v201 )
                      goto LABEL_196;
                  }
                }
LABEL_286:
                v138 = (__int64 *)(v13 + 8);
                v139 = 5599;
                goto LABEL_197;
              }
              v137 = 0;
            }
            v138 = (__int64 *)(v13 + 8);
            v139 = v132 + 5598;
            goto LABEL_197;
          }
        }
LABEL_198:
        v113 = v231[0];
LABEL_165:
        if ( (*(_BYTE *)(v113 + 29) & 1) == 0 )
        {
LABEL_166:
          if ( (*(_BYTE *)(v113 + 28) & 0x7Fu) - 26 <= 0x1A )
            sub_160A1C0(v13, *(_QWORD *)(v113 + 48), v225, v113);
          v121 = *(_QWORD *)(v13 + 232);
          if ( ((*(_BYTE *)(v121 + 96) & 0x10) != 0 || *(_DWORD *)(v121 + 64) && (*(_BYTE *)(v121 + 68) & 8) != 0)
            && (LODWORD(v11) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 248) + 17448LL) + 273LL), !(_BYTE)v11)
            && (*(_BYTE *)(v231[0] + 28) & 0x7Fu) - 40 <= 6
            && (unsigned int)sub_B73370(v231[0]) )
          {
            sub_1606D30((__int64)&v235, (_QWORD *)v13, (unsigned int)*a3, 5178, 0);
            sub_15F7200(&v235);
          }
          else
          {
            LODWORD(v11) = 0;
          }
          return (unsigned int)v11;
        }
        v157 = sub_B8C3D0(v113, (__int64)v114, v110, (__int64)v111, v115, v112);
        v158 = (__int64 *)*v157;
        v159 = *v157 + 8LL * *((unsigned int *)v157 + 2);
        if ( *v157 >= v159 )
        {
          v113 = v231[0];
          if ( v158 == (__int64 *)v159 )
            goto LABEL_166;
          if ( *(_WORD *)(*(_QWORD *)v159 + 36LL) != 143 )
          {
            v171 = (__int64 *)(v159 + 8);
            while ( v158 != v171 )
            {
              v172 = *v171++;
              if ( *(_WORD *)(v172 + 36) == 143 )
                goto LABEL_254;
            }
            goto LABEL_166;
          }
        }
        else
        {
          v160 = *v157;
          while ( *(_WORD *)(*(_QWORD *)v160 + 36LL) != 143 )
          {
            v160 += 8LL;
            if ( v159 == v160 )
              goto LABEL_233;
          }
          v113 = v231[0];
          if ( v159 == v160 )
            goto LABEL_166;
        }
LABEL_254:
        v173 = (*(_BYTE *)(*(_QWORD *)(v13 + 232) + 207LL) >> 3) & 3;
        if ( v173 != 3 )
        {
          v174 = *(_QWORD *)(v13 + 240);
          if ( *(_DWORD *)(v174 + 532) )
          {
            if ( *(_DWORD *)(v174 + 528) != v173 )
            {
              sub_168B9F0((__int64)&v235, (__int64 *)(v13 + 8), *(_DWORD *)(v113 + 24), 0x1446u, 0);
              v233 = (char *)sub_995750(v231[0]);
              v234 = v175;
              sub_166BAF0((__int64)&v235, (__int64)&v233);
              sub_15F7200(&v235);
LABEL_233:
              v113 = v231[0];
            }
          }
        }
        goto LABEL_166;
      }
      v116 = sub_B8C3D0(v231[0], v212, v110, (__int64)v111, v213, v112);
      v110 = *v116;
      v117 = *v116 + 8LL * *((unsigned int *)v116 + 2);
      if ( v110 < v117 )
      {
        v111 = (unsigned __int64 *)v110;
        while ( 1 )
        {
          v114 = (char **)*v111;
          if ( *(_WORD *)(*v111 + 36) == 389 )
            break;
          if ( (unsigned __int64 *)v117 == ++v111 )
            goto LABEL_163;
        }
        if ( (unsigned __int64 *)v117 == v111 )
          goto LABEL_163;
      }
      else
      {
        if ( v110 == v117 )
          goto LABEL_163;
        if ( *(_WORD *)(*(_QWORD *)v117 + 36LL) != 389 )
        {
          v118 = (unsigned __int64 *)(v117 + 8);
          do
          {
            v111 = v118;
            if ( (unsigned __int64 *)v110 == v118 )
              goto LABEL_163;
            v119 = *v118++;
          }
          while ( *(_WORD *)(v119 + 36) != 389 );
        }
      }
      v153 = *(_QWORD *)v110;
      if ( *(_WORD *)(*(_QWORD *)v110 + 36LL) != 389 )
      {
        v154 = (__int64 *)(v110 + 8);
        do
          v153 = *v154++;
        while ( *(_WORD *)(v153 + 36) != 389 );
      }
      if ( !(unsigned int)sub_B1AAA0(v153) )
        goto LABEL_163;
      if ( (unsigned int)sub_B1AAA0(v153) == 4 )
        goto LABEL_163;
      v155 = sub_1A86570(*(_QWORD *)(v13 + 736));
      if ( !v155 )
        goto LABEL_163;
      v156 = sub_B8C1B0(v155);
      if ( !v156 )
        goto LABEL_163;
      if ( (*(_BYTE *)(v156 + 29) & 1) != 0 )
      {
        v196 = sub_B8C3D0(v156, (__int64)v114, v110, (__int64)v111, v115, v112);
        v110 = *v196;
        v111 = (unsigned __int64 *)(*v196 + 8LL * *((unsigned int *)v196 + 2));
        if ( *v196 >= (unsigned __int64)v111 )
        {
          if ( (unsigned __int64 *)v110 != v111 )
          {
            if ( *(_WORD *)(*v111 + 36) == 389 )
              goto LABEL_163;
            v202 = (unsigned __int64 **)(v111 + 1);
            while ( (unsigned __int64 **)v110 != v202 )
            {
              v111 = *v202++;
              if ( *((_WORD *)v111 + 18) == 389 )
                goto LABEL_163;
            }
          }
        }
        else
        {
          v197 = (unsigned __int64 *)*v196;
          while ( 1 )
          {
            v110 = *v197;
            if ( *(_WORD *)(*v197 + 36) == 389 )
              break;
            if ( v111 == ++v197 )
              goto LABEL_224;
          }
          if ( v111 != v197 )
            goto LABEL_163;
        }
      }
LABEL_224:
      sub_168B9F0((__int64)&v235, (__int64 *)(v13 + 8), v225, 0x1D77u, 0);
      v114 = &v233;
      sub_17BA610((__int64)&v235, (__int64 *)&v233);
      sub_15F7200(&v235);
LABEL_163:
      v113 = v231[0];
      goto LABEL_164;
    }
  }
LABEL_39:
  v28 = *(_BYTE *)(v26 + 28) & 0x7F;
  if ( !v27 || (unsigned int)v28 - 40 > 6 )
    goto LABEL_41;
  if ( (unsigned __int8)sub_1AF5BD0(*(_QWORD *)(v13 + 760), v26) )
  {
    v26 = v231[0];
    v28 = *(_BYTE *)(v231[0] + 28) & 0x7F;
    goto LABEL_41;
  }
  v176 = (__int64 *)(v13 + 8);
  sub_168B9F0((__int64)&v235, (__int64 *)(v13 + 8), v225, 0x1167u, 0);
  v177 = sub_1AF5E20(*(_QWORD *)(v13 + 760));
  if ( v241 )
  {
    sub_AE9DF0((unsigned __int8 **)v238, v177, 0xAu);
  }
  else if ( v243 )
  {
    v187 = sub_168B9E0(&v235);
    v190 = (char *)v236;
    if ( v236 )
      v190 = (char *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v236 + 32LL))(v236);
    v233 = v190;
    v191 = sub_1587BC0(v187, (__int64 *)&v233, v185, v186, v188, v189);
    v192 = *v191 + 32LL * v242;
    v193 = *(unsigned __int8 **)(v192 + 8);
    if ( !v193 )
    {
      v203 = *(_QWORD *)(v192 + 16);
      v204 = *(_DWORD *)(v203 + 14976);
      if ( v204 )
      {
        v207 = (unsigned int)(v204 - 1);
        *(_DWORD *)(v203 + 14976) = v207;
        v193 = *(unsigned __int8 **)(v203 + 8 * v207 + 14848);
        v208 = *((unsigned int *)v193 + 134);
        *v193 = 0;
        v209 = *((_QWORD *)v193 + 66);
        *((_DWORD *)v193 + 106) = 0;
        v210 = v209 + (v208 << 6);
        while ( v209 != v210 )
        {
          while ( 1 )
          {
            v210 -= 64;
            v211 = *(void **)(v210 + 24);
            if ( v211 == (void *)(v210 + 40) )
              break;
            operator delete(v211);
            if ( v209 == v210 )
              goto LABEL_307;
          }
        }
LABEL_307:
        *((_DWORD *)v193 + 134) = 0;
      }
      else
      {
        v193 = (unsigned __int8 *)operator new(0x3A0u);
        *v193 = 0;
        *((_QWORD *)v193 + 12) = v193 + 112;
        *((_QWORD *)v193 + 16) = v193 + 144;
        *((_QWORD *)v193 + 20) = v193 + 176;
        *((_QWORD *)v193 + 24) = v193 + 208;
        *((_QWORD *)v193 + 28) = v193 + 240;
        *((_QWORD *)v193 + 32) = v193 + 272;
        *((_QWORD *)v193 + 36) = v193 + 304;
        *((_QWORD *)v193 + 40) = v193 + 336;
        *((_QWORD *)v193 + 44) = v193 + 368;
        *((_QWORD *)v193 + 48) = v193 + 400;
        *((_QWORD *)v193 + 52) = v193 + 432;
        v193[112] = 0;
        *((_QWORD *)v193 + 13) = 0;
        *((_QWORD *)v193 + 17) = 0;
        v193[144] = 0;
        *((_QWORD *)v193 + 21) = 0;
        v193[176] = 0;
        *((_QWORD *)v193 + 25) = 0;
        v193[208] = 0;
        *((_QWORD *)v193 + 29) = 0;
        v193[240] = 0;
        *((_QWORD *)v193 + 33) = 0;
        v193[272] = 0;
        *((_QWORD *)v193 + 37) = 0;
        v193[304] = 0;
        *((_QWORD *)v193 + 41) = 0;
        v193[336] = 0;
        *((_QWORD *)v193 + 45) = 0;
        v193[368] = 0;
        *((_QWORD *)v193 + 49) = 0;
        v193[400] = 0;
        *((_QWORD *)v193 + 53) = 0x800000000LL;
        *((_QWORD *)v193 + 66) = v193 + 544;
        *((_QWORD *)v193 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v192 + 8) = v193;
    }
    v193[*v193 + 1] = 10;
    v194 = *(_BYTE **)(v192 + 8);
    v195 = (unsigned __int8)*v194;
    *v194 = v195 + 1;
    *(_QWORD *)&v194[8 * v195 + 16] = v177;
  }
  sub_15F7200(&v235);
  sub_168B9F0((__int64)&v235, v176, *(_DWORD *)(v231[0] + 24), 0x172Eu, 0);
  sub_17BA610((__int64)&v235, v231);
  LODWORD(v11) = 1;
  sub_15F7200(&v235);
  return (unsigned int)v11;
}
