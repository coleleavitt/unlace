__m128i *__fastcall sub_8442F0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char **exception; // r12
  char **v6; // rax
  char **v7; // rbx
  __int64 v8; // r14
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  _OWORD *v14; // rax
  _OWORD *v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 (*v18)(void); // rdx
  __int64 v19; // rax
  _QWORD *v20; // r15
  unsigned __int64 v21; // r14
  _QWORD *v22; // rdx
  __int64 v23; // r13
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  _QWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int32 v32; // r9d
  __int64 v33; // rcx
  __m128i *v34; // r12
  __m128i *v35; // rdx
  int v36; // esi
  __m128i v37; // xmm0
  __int64 v38; // r9
  __m128i *v39; // rdi
  __m128i *v40; // rax
  __m128i *v41; // rcx
  __m128i *v42; // r11
  __int64 v43; // rdx
  __m128i *v44; // rax
  __m128i *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __m128i v50; // xmm1
  __int32 v51; // r8d
  __int64 v52; // rcx
  __m128i *v53; // r12
  __m128i *v54; // rdx
  int v55; // esi
  __m128i v56; // xmm0
  __int64 v57; // r8
  __m128i *v58; // rdi
  __m128i *v59; // rax
  __m128i *v60; // rcx
  __m128i *v61; // r11
  __int64 v62; // rdx
  __m128i *v63; // rax
  __m128i *v64; // rdx
  __int64 v65; // rax
  char *v66; // r12
  __int64 v67; // rax
  unsigned __int64 v68; // rdi
  __int64 v69; // rax
  void *v70; // rdi
  void *v71; // rdi
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // r12
  __int64 *v75; // r15
  __int64 v76; // rsi
  __int64 v77; // rdi
  bool v78; // zf
  unsigned int v80; // r12d
  size_t v81; // rsi
  unsigned int *v82; // rax
  __int64 v83; // rcx
  __m128i *v84; // rax
  __int32 v85; // r9d
  __m128i *v86; // rdi
  __m128i *v87; // rdx
  __m128i *v88; // rax
  __m128i *v89; // rsi
  const __m128i *v90; // r13
  __m128i *v91; // r10
  __m128i *v92; // rdi
  __int64 v93; // rdx
  __m128i *v94; // rsi
  __m128i *v95; // rdx
  __m128i v96; // xmm0
  __int64 *v97; // rax
  __m128i *v98; // rax
  __int32 v99; // r10d
  __m128i *v100; // rdi
  __m128i *v101; // rdx
  __m128i *v102; // rax
  __m128i *v103; // rsi
  const __m128i *v104; // r13
  __m128i *v105; // r11
  __m128i *v106; // rdi
  __int64 v107; // rdx
  __m128i *v108; // rsi
  __m128i *v109; // rdx
  __m128i v110; // xmm0
  __int64 *v111; // rax
  _QWORD *v112; // rax
  unsigned __int64 v113; // r15
  unsigned __int64 v114; // rbx
  __int64 v115; // rax
  unsigned __int64 v116; // r13
  __m128i *v117; // rdi
  unsigned __int64 v118; // rdx
  char *v119; // r15
  char v120; // al
  char *v121; // rcx
  __int64 *j; // r13
  __int64 *v123; // r15
  char v124; // al
  char *v125; // r15
  char v126; // al
  char *v127; // rcx
  __int64 *i; // r13
  __int64 *v129; // r15
  char v130; // al
  _QWORD *v131; // r14
  __int64 v132; // r15
  _QWORD *v133; // r12
  char v134; // al
  __int64 v135; // rax
  _QWORD *v136; // rax
  unsigned int v137; // r13d
  __int64 v138; // r12
  unsigned int v139; // r15d
  __int64 v140; // rdx
  __int64 v141; // rdi
  __int64 *v142; // r14
  __int64 v143; // rsi
  __int64 v144; // rdx
  unsigned int v145; // esi
  __int64 v146; // rcx
  __int64 v147; // rax
  unsigned int v148; // r12d
  unsigned int v149; // r13d
  __m128i *v150; // r14
  __m128i *v151; // r15
  __int32 v152; // esi
  __int64 v153; // rax
  __m128i *v154; // rdi
  __m128i *v155; // rax
  __m128i *v156; // rcx
  int v157; // edx
  _QWORD *v158; // rax
  unsigned int v159; // edx
  __int64 v160; // rcx
  int v161; // edx
  __int64 *v162; // rcx
  __int64 v163; // rax
  int v164; // r15d
  __int64 v165; // rax
  __int64 v166; // r13
  __m128i *v167; // rdx
  __int64 v168; // r14
  __int64 *v169; // r12
  __int64 k; // r15
  __int64 v171; // rax
  __m128i *v172; // rax
  __int64 v173; // rax
  __int64 v174; // r15
  __int64 v175; // rbx
  int v176; // edx
  int v177; // ecx
  int v178; // r8d
  int v179; // r9d
  __int64 v180; // r12
  unsigned __int64 v181; // rbx
  int v182; // r8d
  int v183; // r9d
  __int64 v184; // rax
  __int64 *v185; // rbx
  __int32 v186; // eax
  __int64 *v187; // r14
  __int64 *v188; // r12
  __int64 v189; // rsi
  __int64 v190; // rdi
  unsigned int v191; // edi
  unsigned int v192; // ecx
  __int64 v193; // rax
  __int64 v194; // rcx
  __int64 v195; // rdx
  __m128i *v196; // rax
  __m128i *v197; // rcx
  __m128i *v198; // rdx
  __m128i *v199; // rax
  const __m128i *v200; // rcx
  __m128i *v201; // r8
  __m128i *v202; // rsi
  __int64 v203; // rax
  __m128i *v204; // rdx
  __m128i *v205; // rax
  __m128i v206; // xmm0
  __int64 v207; // rax
  __int64 v208; // rax
  _QWORD *v209; // rax
  __int64 v210; // rcx
  int v211; // [rsp-8h] [rbp-F8h]
  int v212; // [rsp+0h] [rbp-F0h]
  int v213; // [rsp+0h] [rbp-F0h]
  int v214; // [rsp+8h] [rbp-E8h]
  int v215; // [rsp+8h] [rbp-E8h]
  int v217; // [rsp+10h] [rbp-E0h]
  int v218; // [rsp+18h] [rbp-D8h]
  int v219; // [rsp+18h] [rbp-D8h]
  unsigned int v221; // [rsp+1Ch] [rbp-D4h]
  int v222; // [rsp+20h] [rbp-D0h]
  int v223; // [rsp+20h] [rbp-D0h]
  __m128i *v224; // [rsp+28h] [rbp-C8h]
  char v225; // [rsp+28h] [rbp-C8h]
  __m128i v226; // [rsp+30h] [rbp-C0h] BYREF
  __m128i v227; // [rsp+40h] [rbp-B0h] BYREF
  const __m128i *v228; // [rsp+50h] [rbp-A0h]
  __int64 v229; // [rsp+58h] [rbp-98h]
  __int64 *v230; // [rsp+60h] [rbp-90h]
  __int64 v231; // [rsp+68h] [rbp-88h]
  __int64 *v232; // [rsp+70h] [rbp-80h]
  __m128i *v233; // [rsp+78h] [rbp-78h]
  int v234; // [rsp+80h] [rbp-70h]
  int v235[2]; // [rsp+88h] [rbp-68h] BYREF
  __int64 v236; // [rsp+90h] [rbp-60h] BYREF
  __int64 v237; // [rsp+98h] [rbp-58h]
  int v238[2]; // [rsp+A0h] [rbp-50h] BYREF
  void *v239; // [rsp+A8h] [rbp-48h]
  int v240; // [rsp+B0h] [rbp-40h]
  __int64 v241; // [rsp+B8h] [rbp-38h]

  v8 = a5;
  v224 = a1;
  v231 = a2;
  v10 = *(_QWORD *)(a4 + 8LL * a5 + 48);
  v229 = a3;
  *(_QWORD *)v235 = v10;
  v230 = sub_843620(a2, v10);
  if ( !v230 )
  {
    v114 = *(_QWORD *)(v231 + 24);
    v115 = sub_15DB5C0(v114, a5, *(_QWORD *)v235);
    *v224 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v115, (__m128i)v114);
    if ( v115 )
      ++*(_DWORD *)(v115 + 8);
    return v224;
  }
  v11 = v231;
  v12 = sub_186B270(0x40u);
  v13 = *(_QWORD *)(v231 + 24);
  *(_QWORD *)(v12 + 8) = 0;
  *(_QWORD *)v12 = v13;
  v14 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v12 + 16) = v14;
  *(_DWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 24) = 8;
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  v14[4] = 0;
  v14[5] = 0;
  v14[6] = 0;
  v14[7] = 0;
  v15 = (_OWORD *)sub_186B270(0x80u);
  v16 = *(__int64 **)(v11 + 8);
  *(_QWORD *)(v12 + 40) = v15;
  *v15 = 0;
  v15[1] = 0;
  v15[2] = 0;
  v15[3] = 0;
  v15[4] = 0;
  v15[5] = 0;
  v15[6] = 0;
  v15[7] = 0;
  v17 = *v16;
  *(_QWORD *)(v12 + 48) = 8;
  v18 = *(__int64 (**)(void))(v17 + 440);
  *(_DWORD *)(v12 + 56) = 0;
  v19 = (__int64)(v16 + 199);
  if ( (char *)v18 != (char *)sub_79F010 )
  {
    v232 = &v236;
    v19 = v18();
  }
  v232 = &v236;
  v20 = *(_QWORD **)sub_13D3750(v19, a4);
  if ( v20 )
  {
    v227.m128i_i64[1] = (__int64)&v20[*((unsigned int *)v20 - 1)];
    if ( v20 != (_QWORD *)v227.m128i_i64[1] )
    {
      v232 = &v236;
      v228 = (const __m128i *)(v8 + 22);
      do
      {
        v21 = **(_QWORD **)(*v20 + 8LL * (_QWORD)v228);
        sub_1374250(v232, v229, v21);
        v22 = *(_QWORD **)(v12 + 8);
        v23 = v236;
        if ( v22 )
        {
          v24 = *((_DWORD *)v22 - 1);
          if ( v24 == *((_DWORD *)v22 - 2) )
          {
            v80 = (3 * v24 + 1) >> 1;
            v81 = 8 * v80 + 8;
            if ( 8 * v24 + 8 >= (unsigned int)v81 || v24 >= v80 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v238, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v238);
              sub_233E40((__int64)v238);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v82 = (unsigned int *)sub_186B300(v22 - 1, v81);
            v83 = v82[1];
            v22 = v82 + 2;
            *v82 = v80;
            *(_QWORD *)(v12 + 8) = v82 + 2;
            LODWORD(v82) = v83;
            v27 = &v22[v83];
            v26 = (_DWORD)v82 + 1;
          }
          else
          {
            v25 = v24;
            v26 = v24 + 1;
            v27 = &v22[v25];
          }
        }
        else
        {
          v112 = (_QWORD *)sub_186B270(0x18u);
          v22 = v112 + 1;
          *v112 = 2;
          v26 = 1;
          *(_QWORD *)(v12 + 8) = v22;
          v27 = v22;
        }
        *v27 = v23;
        *((_DWORD *)v22 - 1) = v26;
        if ( !(unsigned __int8)sub_15D26C0(*(_QWORD *)(v231 + 24), v23) )
        {
          v113 = *(_QWORD *)(v231 + 24);
          v69 = sub_15DB5C0(v113, a5, *(_QWORD *)v235);
          *v224 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v69, (__m128i)v113);
          if ( !v69 )
          {
LABEL_63:
            v70 = *(void **)(v12 + 40);
            if ( v70 )
              sub_186B220(v70);
            v71 = *(void **)(v12 + 16);
            if ( v71 )
              sub_186B220(v71);
            v72 = *(_QWORD *)(v12 + 8);
            v73 = v72;
            if ( v72 )
            {
              v74 = v72 + 8LL * *(unsigned int *)(v72 - 4);
              if ( v72 >= v74 )
                goto LABEL_75;
              v75 = *(__int64 **)(v12 + 8);
              do
              {
                while ( 1 )
                {
                  v76 = *v75;
                  if ( *v75 )
                  {
                    v77 = *(_QWORD *)v12;
                    v78 = (*(_DWORD *)(v76 + 8))-- == 1;
                    if ( v78 )
                      break;
                  }
                  if ( (unsigned __int64)++v75 >= v74 )
                    goto LABEL_74;
                }
                sub_15D7BC0(v77, v76);
                ++v75;
              }
              while ( (unsigned __int64)v75 < v74 );
LABEL_74:
              v73 = *(_QWORD *)(v12 + 8);
              if ( v73 )
LABEL_75:
                sub_186B220((void *)(v73 - 8));
            }
            sub_186B220((void *)v12);
            return v224;
          }
LABEL_62:
          ++*(_DWORD *)(v69 + 8);
          goto LABEL_63;
        }
        v28 = 0x7FFFFFFF8LL;
        v29 = *(_QWORD *)(v12 + 8);
        if ( v29 )
          v28 = 8LL * (unsigned int)(*(_DWORD *)(v29 - 4) - 1);
        v30 = *(unsigned int *)(v12 + 24);
        v31 = *(_QWORD *)(v29 + v28);
        if ( 3 * (int)v30 >= (unsigned int)(4 * (*(_DWORD *)(v12 + 28) + *(_DWORD *)(v12 + 32))) )
        {
          v32 = v30 - 1;
          v33 = 16 * v30;
          v233 = *(__m128i **)(v12 + 16);
          v34 = (__m128i *)((char *)v233 + v33);
          v35 = v233;
          goto LABEL_15;
        }
        v226.m128i_i64[0] = *(_QWORD *)(v29 + v28);
        v226.m128i_i32[2] = 2 * v30;
        v227.m128i_i64[0] = 16LL * (unsigned int)(2 * v30);
        v98 = (__m128i *)sub_186B270(v227.m128i_u64[0]);
        v99 = v226.m128i_i32[2];
        v33 = v227.m128i_i64[0];
        v100 = v98;
        v101 = v98;
        v233 = v98;
        v31 = v226.m128i_i64[0];
        v102 = (__m128i *)((char *)v98 + v227.m128i_i64[0]);
        if ( v226.m128i_i32[2] )
        {
          if ( (((_BYTE)v102 - (_BYTE)v100) & 0x10) == 0 )
          {
            v103 = v100;
            do
            {
LABEL_113:
              *v101 = 0;
              v101 += 2;
              v101[-1] = 0;
            }
            while ( v101 != v102 );
            v233 = v103;
            goto LABEL_115;
          }
          v101 = v100 + 1;
          v103 = v100;
          *v100 = 0;
          if ( &v100[1] != v102 )
            goto LABEL_113;
        }
LABEL_115:
        v104 = *(const __m128i **)(v12 + 16);
        v32 = v99 - 1;
        v34 = v102;
        v105 = (__m128i *)&v104[*(unsigned int *)(v12 + 24)];
        if ( v104 != v105 )
        {
          do
          {
            while ( v104->m128i_i64[0] <= 1uLL )
            {
              if ( v105 == ++v104 )
                goto LABEL_124;
            }
            v106 = v233;
            v107 = 16LL * (*(_DWORD *)(v104->m128i_i64[0] + 12) & (unsigned int)v32);
            v108 = &v233[(unsigned __int64)v107 / 0x10];
            if ( v33 == v107 )
            {
LABEL_128:
              v106 = v233;
              if ( v233 == v108 )
              {
LABEL_133:
                v226.m128i_i32[0] = v99 - 1;
                v226.m128i_i64[1] = (__int64)v105;
                v227.m128i_i64[0] = v31;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v109 = v233;
              while ( v109->m128i_i64[0] )
              {
                if ( v108 == ++v109 )
                  goto LABEL_133;
              }
            }
            else
            {
              v109 = &v233[(unsigned __int64)v107 / 0x10];
              while ( v109->m128i_i64[0] )
              {
                if ( v102 == ++v109 )
                  goto LABEL_128;
              }
            }
            v110 = _mm_loadu_si128(v104++);
            v233 = v106;
            *v109 = v110;
          }
          while ( v105 != v104 );
LABEL_124:
          v105 = *(__m128i **)(v12 + 16);
        }
        if ( v105 )
        {
          v222 = v99;
          v226.m128i_i64[0] = v33;
          v226.m128i_i32[2] = v99 - 1;
          v227.m128i_i64[0] = v31;
          sub_186B220(v105);
          v99 = v222;
          v33 = v226.m128i_i64[0];
          v32 = v226.m128i_i32[2];
          v31 = v227.m128i_i64[0];
        }
        v111 = (__int64 *)v233;
        *(_DWORD *)(v12 + 24) = v99;
        *(_DWORD *)(v12 + 32) = 0;
        *(_QWORD *)(v12 + 16) = v111;
        v35 = (__m128i *)v111;
LABEL_15:
        v36 = *(_DWORD *)(v31 + 12);
        v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)v21);
        v38 = 16LL * (v36 & (unsigned int)v32);
        v39 = &v35[(unsigned __int64)v38 / 0x10];
        if ( v38 == v33 )
        {
          v41 = nullptr;
          v44 = v35;
LABEL_24:
          if ( v39 == v44 )
          {
LABEL_32:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v45 = v44;
          while ( 1 )
          {
            while ( 1 )
            {
              v46 = v45->m128i_i64[0];
              if ( v45->m128i_i64[0] > 1uLL )
                break;
              if ( !v46 )
              {
                v233 = v45;
                v40 = v45;
                goto LABEL_34;
              }
              v41 = v45++;
              if ( v39 == v45 )
                goto LABEL_32;
            }
            if ( *(_DWORD *)(v46 + 12) == v36 && v31 == v46 )
              break;
            if ( v39 == ++v45 )
              goto LABEL_32;
          }
          v40 = v45;
LABEL_136:
          *v40 = v37;
        }
        else
        {
          v40 = &v35[(unsigned __int64)v38 / 0x10];
          v41 = nullptr;
          v42 = v35;
          while ( 1 )
          {
            while ( 1 )
            {
              v43 = v40->m128i_i64[0];
              if ( v40->m128i_i64[0] <= 1uLL )
                break;
              if ( *(_DWORD *)(v43 + 12) == v36 && v31 == v43 )
                goto LABEL_136;
              if ( ++v40 == v34 )
              {
LABEL_23:
                v233 = v42;
                v44 = v42;
                goto LABEL_24;
              }
            }
            if ( !v43 )
              break;
            v41 = v40++;
            if ( v40 == v34 )
              goto LABEL_23;
          }
LABEL_34:
          if ( v41 )
            --*(_DWORD *)(v12 + 32);
          else
            v41 = v40;
          *v41 = v37;
          ++*(_DWORD *)(v12 + 28);
        }
        v47 = 0x7FFFFFFF8LL;
        v48 = *(_QWORD *)(v12 + 8);
        if ( v48 )
          v47 = 8LL * (unsigned int)(*(_DWORD *)(v48 - 4) - 1);
        v49 = *(unsigned int *)(v12 + 48);
        v50 = _mm_loadl_epi64((const __m128i *)(v48 + v47));
        if ( 3 * (int)v49 < (unsigned int)(4 * (*(_DWORD *)(v12 + 52) + *(_DWORD *)(v12 + 56))) )
        {
          v226.m128i_i32[2] = 2 * v49;
          v226.m128i_i64[0] = v50.m128i_i64[0];
          v227.m128i_i64[0] = 16LL * (unsigned int)(2 * v49);
          v84 = (__m128i *)sub_186B270(v227.m128i_u64[0]);
          v85 = v226.m128i_i32[2];
          v52 = v227.m128i_i64[0];
          v86 = v84;
          v87 = v84;
          v50 = _mm_loadl_epi64(&v226);
          v233 = v84;
          v88 = (__m128i *)((char *)v84 + v227.m128i_i64[0]);
          if ( v226.m128i_i32[2] )
          {
            if ( (((_BYTE)v88 - (_BYTE)v86) & 0x10) != 0 )
            {
              v87 = v86 + 1;
              v89 = v86;
              *v86 = 0;
              if ( v88 != &v86[1] )
                goto LABEL_90;
            }
            else
            {
              v89 = v86;
              do
              {
LABEL_90:
                *v87 = 0;
                v87 += 2;
                v87[-1] = 0;
              }
              while ( v88 != v87 );
              v233 = v89;
            }
          }
          v90 = *(const __m128i **)(v12 + 40);
          v51 = v85 - 1;
          v53 = v88;
          v91 = (__m128i *)&v90[*(unsigned int *)(v12 + 48)];
          if ( v90 != v91 )
          {
            do
            {
              while ( v90->m128i_i64[0] <= 1uLL )
              {
                if ( v91 == ++v90 )
                  goto LABEL_101;
              }
              v92 = v233;
              v93 = 16LL * (*(_DWORD *)(v90->m128i_i64[0] + 12) & (unsigned int)v51);
              v94 = &v233[(unsigned __int64)v93 / 0x10];
              if ( v52 == v93 )
              {
LABEL_105:
                v92 = v233;
                if ( v233 == v94 )
                {
LABEL_134:
                  v226.m128i_i32[0] = v85 - 1;
                  v226.m128i_i64[1] = (__int64)v91;
                  v227.m128i_i64[0] = v50.m128i_i64[0];
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v95 = v233;
                while ( v95->m128i_i64[0] )
                {
                  if ( v94 == ++v95 )
                    goto LABEL_134;
                }
              }
              else
              {
                v95 = &v233[(unsigned __int64)v93 / 0x10];
                while ( v95->m128i_i64[0] )
                {
                  if ( v88 == ++v95 )
                    goto LABEL_105;
                }
              }
              v96 = _mm_loadu_si128(v90++);
              v233 = v92;
              *v95 = v96;
            }
            while ( v91 != v90 );
LABEL_101:
            v91 = *(__m128i **)(v12 + 40);
          }
          if ( v91 )
          {
            v222 = v85;
            v226.m128i_i64[0] = v52;
            v226.m128i_i32[2] = v85 - 1;
            v227.m128i_i64[0] = v50.m128i_i64[0];
            sub_186B220(v91);
            v85 = v222;
            v52 = v226.m128i_i64[0];
            v50 = _mm_loadl_epi64(&v227);
            v51 = v226.m128i_i32[2];
          }
          v97 = (__int64 *)v233;
          *(_DWORD *)(v12 + 48) = v85;
          *(_DWORD *)(v12 + 56) = 0;
          *(_QWORD *)(v12 + 40) = v97;
          v54 = (__m128i *)v97;
          goto LABEL_41;
        }
        v51 = v49 - 1;
        v52 = 16 * v49;
        v233 = *(__m128i **)(v12 + 40);
        v53 = (__m128i *)((char *)v233 + v52);
        v54 = v233;
LABEL_41:
        v55 = *(_DWORD *)(v21 + 12);
        v56 = _mm_unpacklo_epi64((__m128i)v21, v50);
        v57 = 16LL * (v55 & (unsigned int)v51);
        v58 = &v54[(unsigned __int64)v57 / 0x10];
        if ( v57 == v52 )
        {
          v60 = nullptr;
          v63 = v54;
LABEL_50:
          if ( v58 == v63 )
          {
LABEL_58:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v64 = v63;
          while ( 1 )
          {
            while ( 1 )
            {
              v65 = v64->m128i_i64[0];
              if ( v64->m128i_i64[0] > 1uLL )
                break;
              if ( !v65 )
              {
                v233 = v64;
                v59 = v64;
                goto LABEL_79;
              }
              v60 = v64++;
              if ( v58 == v64 )
                goto LABEL_58;
            }
            if ( *(_DWORD *)(v65 + 12) == v55 && v21 == v65 )
              break;
            if ( v58 == ++v64 )
              goto LABEL_58;
          }
          v59 = v64;
LABEL_138:
          *v59 = v56;
        }
        else
        {
          v59 = &v54[(unsigned __int64)v57 / 0x10];
          v60 = nullptr;
          v61 = v54;
          while ( 1 )
          {
            while ( 1 )
            {
              v62 = v59->m128i_i64[0];
              if ( v59->m128i_i64[0] <= 1uLL )
                break;
              if ( *(_DWORD *)(v62 + 12) == v55 && v21 == v62 )
                goto LABEL_138;
              if ( ++v59 == v53 )
              {
LABEL_49:
                v233 = v61;
                v63 = v61;
                goto LABEL_50;
              }
            }
            if ( !v62 )
              break;
            v60 = v59++;
            if ( v59 == v53 )
              goto LABEL_49;
          }
LABEL_79:
          if ( v60 )
            --*(_DWORD *)(v12 + 56);
          else
            v60 = v59;
          *v60 = v56;
          ++*(_DWORD *)(v12 + 52);
        }
        ++v20;
      }
      while ( (_QWORD *)v227.m128i_i64[1] != v20 );
    }
  }
  v66 = *(char **)(v12 + 8);
  if ( !v66 || (v67 = *((unsigned int *)v66 - 1), !(_DWORD)v67) )
  {
    v68 = *(_QWORD *)(v231 + 24);
    v232 = &v236;
    v69 = sub_15DB5C0(v68, a5, *(_QWORD *)v235);
    *v224 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v69, (__m128i)v68);
    if ( !v69 )
      goto LABEL_63;
    goto LABEL_62;
  }
  v116 = 8 * v67;
  v117 = *(__m128i **)(v12 + 8);
  v232 = &v236;
  v227.m128i_i64[0] = (__int64)&v66[8 * v67];
  _BitScanReverse64(&v118, (8 * v67) >> 3);
  sub_841F60(v117, (char *)v227.m128i_i64[0], 2LL * (int)v118, v230);
  v233 = (__m128i *)(v66 + 8);
  if ( v116 > 0x80 )
  {
    v227.m128i_i64[1] = (__int64)(v66 + 128);
    do
    {
      v125 = (char *)v233;
      v232 = &v236;
      v126 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*v230 + 24))(
               v230,
               v233->m128i_i64[0],
               *(_QWORD *)v66);
      v127 = v125;
      v228 = *(const __m128i **)v125;
      if ( v126 )
      {
        if ( v125 - v66 <= 8 )
        {
          if ( v125 - v66 == 8 )
            v233->m128i_i64[0] = *(_QWORD *)v66;
        }
        else
        {
          memmove(v66 + 8, v66, v125 - v66);
        }
        *(_QWORD *)v66 = v228;
      }
      else
      {
        for ( i = (__int64 *)v233; ; i[1] = *i )
        {
          v232 = &v236;
          v129 = i;
          v130 = (*(__int64 (__fastcall **)(__int64 *, const __m128i *, _QWORD, char *))(*v230 + 24))(
                   v230,
                   v228,
                   *--i,
                   v127);
          if ( !v130 )
            break;
        }
        *v129 = (__int64)v228;
      }
      v233 = (__m128i *)((char *)v233 + 8);
    }
    while ( (__m128i *)v227.m128i_i64[1] != v233 );
    do
    {
      v131 = (_QWORD *)v227.m128i_i64[1];
      v132 = *(_QWORD *)v227.m128i_i64[1];
      while ( 1 )
      {
        v232 = &v236;
        v133 = v131;
        v134 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*v230 + 24))(v230, v132, *--v131);
        if ( !v134 )
          break;
        v131[1] = *v131;
      }
      v227.m128i_i64[1] += 8;
      v135 = v227.m128i_i64[1];
      *v133 = v132;
    }
    while ( v227.m128i_i64[0] != v135 );
  }
  else if ( v116 != 8 )
  {
    do
    {
      v119 = (char *)v233;
      v232 = &v236;
      v120 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*v230 + 24))(
               v230,
               v233->m128i_i64[0],
               *(_QWORD *)v66);
      v121 = v119;
      v228 = *(const __m128i **)v119;
      if ( v120 )
      {
        if ( v119 - v66 <= 8 )
        {
          if ( v119 - v66 == 8 )
            v233->m128i_i64[0] = *(_QWORD *)v66;
        }
        else
        {
          memmove(v66 + 8, v66, v119 - v66);
        }
        *(_QWORD *)v66 = v228;
      }
      else
      {
        for ( j = (__int64 *)v233; ; j[1] = *j )
        {
          v232 = &v236;
          v123 = j;
          v124 = (*(__int64 (__fastcall **)(__int64 *, const __m128i *, _QWORD, char *))(*v230 + 24))(
                   v230,
                   v228,
                   *--j,
                   v121);
          if ( !v124 )
            break;
        }
        *v123 = (__int64)v228;
      }
      v233 = (__m128i *)((char *)v233 + 8);
    }
    while ( (__m128i *)v227.m128i_i64[0] != v233 );
  }
  v136 = *(_QWORD **)(v12 + 8);
  if ( v136 )
  {
    v137 = *((_DWORD *)v136 - 1);
    if ( v137 )
    {
      v138 = *v136;
      v137 = 0;
      v139 = 0;
LABEL_179:
      v140 = v137;
      v141 = *(_QWORD *)v12;
      ++v137;
      v142 = &v136[v140];
      if ( v138 )
        ++*(_DWORD *)(v138 + 8);
      v143 = *v142;
      if ( *v142 )
      {
        v78 = (*(_DWORD *)(v143 + 8))-- == 1;
        if ( v78 )
        {
          v232 = &v236;
          sub_15D7BC0(v141, v143);
          v136 = *(_QWORD **)(v12 + 8);
        }
      }
      *v142 = v138;
      v144 = v139;
      v145 = v139;
      while ( 1 )
      {
        v146 = ++v145;
        if ( !v136 )
          break;
        if ( (unsigned int)v146 >= *((_DWORD *)v136 - 1) )
          goto LABEL_239;
        v138 = v136[v146];
        if ( v136[v144] != v138 )
        {
          v139 = v145;
          goto LABEL_179;
        }
        v144 = (unsigned int)v146;
      }
    }
    else
    {
LABEL_239:
      v187 = &v136[*((unsigned int *)v136 - 1)];
      v188 = &v136[v137];
      if ( v188 < v187 )
      {
        do
        {
          v189 = *v188;
          if ( *v188 )
          {
            v190 = *(_QWORD *)v12;
            v78 = (*(_DWORD *)(v189 + 8))-- == 1;
            if ( v78 )
            {
              v232 = &v236;
              sub_15D7BC0(v190, v189);
            }
          }
          ++v188;
        }
        while ( v188 < v187 );
        v136 = *(_QWORD **)(v12 + 8);
      }
      if ( v136 )
        *((_DWORD *)v136 - 1) = v137;
    }
  }
  v147 = *(unsigned int *)(v231 + 120);
  v148 = 2 * v147;
  if ( 3 * (int)v147 < (unsigned int)(4 * (*(_DWORD *)(v231 + 124) + *(_DWORD *)(v231 + 128))) )
  {
    v232 = &v236;
    v233 = (__m128i *)(32LL * v148);
    v196 = (__m128i *)sub_186B270((size_t)v233);
    v197 = v233;
    v150 = v196;
    v198 = &v196[2 * v148];
    if ( v148 )
    {
      do
      {
        v196->m128i_i64[0] = 0;
        v196 += 2;
        v196[-2].m128i_i64[1] = 0;
      }
      while ( v198 != v196 );
      v233 = v197;
      v199 = v150;
      if ( (((_BYTE)v198 - (_BYTE)v150) & 0x20) == 0 || (v199 = v150 + 2, v150[1].m128i_i32[0] = 0, &v150[2] != v198) )
      {
        do
        {
          v199[1].m128i_i32[0] = 0;
          v199 += 4;
          v199[-1].m128i_i32[0] = 0;
        }
        while ( v199 != v198 );
        v233 = v197;
      }
    }
    v149 = v148 - 1;
    v200 = *(const __m128i **)(v231 + 112);
    v201 = (__m128i *)&v200[2 * *(unsigned int *)(v231 + 120)];
    v151 = (__m128i *)((char *)v233 + (_QWORD)v150);
    if ( v200 != v201 )
    {
      do
      {
        if ( v200->m128i_i32[1] == 2 )
        {
          v202 = v233;
          v203 = 32LL * (v200->m128i_i32[0] & v149);
          v204 = &v150[(unsigned __int64)v203 / 0x10];
          if ( v233 == (__m128i *)v203 )
          {
LABEL_272:
            if ( v150 == v204 )
            {
LABEL_278:
              v227.m128i_i64[1] = (__int64)v201;
              v228 = v200;
              v232 = &v236;
              sub_1872CE0("");
              v232 = &v236;
              sub_1873130(114, 213);
            }
            v202 = v233;
            v205 = v150;
            while ( v205->m128i_i32[1] )
            {
              v205 += 2;
              if ( v204 == v205 )
                goto LABEL_278;
            }
          }
          else
          {
            v205 = &v150[(unsigned __int64)v203 / 0x10];
            while ( v205->m128i_i32[1] )
            {
              v205 += 2;
              if ( v151 == v205 )
                goto LABEL_272;
            }
          }
          v206 = _mm_loadu_si128(v200);
          v233 = v202;
          *v205 = v206;
          v205[1] = _mm_loadu_si128(v200 + 1);
        }
        v200 += 2;
      }
      while ( v201 != v200 );
      v201 = *(__m128i **)(v231 + 112);
    }
    if ( v201 )
    {
      v232 = &v236;
      sub_186B220(v201);
    }
    v207 = v231;
    *(_QWORD *)(v231 + 112) = v150;
    *(_DWORD *)(v207 + 120) = v148;
    *(_DWORD *)(v207 + 128) = 0;
  }
  else
  {
    v149 = v147 - 1;
    v150 = *(__m128i **)(v231 + 112);
    v233 = (__m128i *)(32 * v147);
    v151 = &v150[2 * v147];
  }
  v152 = a5 + *(_DWORD *)(a4 + 12);
  v153 = 32LL * (v152 & v149);
  v154 = &v150[(unsigned __int64)v153 / 0x10];
  if ( (__m128i *)v153 != v233 )
  {
    v155 = &v150[(unsigned __int64)v153 / 0x10];
    v156 = nullptr;
    while ( 1 )
    {
      v157 = v155->m128i_i32[1];
      if ( v157 == 2 )
      {
        if ( v152 == v155->m128i_i32[0] && a5 == v155[1].m128i_i32[0] && a4 == v155->m128i_i64[1] )
        {
          v155->m128i_i64[1] = a4;
          v155[1].m128i_i64[1] = v12;
          v155[1].m128i_i32[0] = a5;
          v155->m128i_i32[1] = 2;
          goto LABEL_204;
        }
      }
      else
      {
        if ( !v157 )
        {
          if ( v156 )
            goto LABEL_270;
          v156 = v155;
          goto LABEL_271;
        }
        v156 = v155;
      }
      v155 += 2;
      if ( v155 == v151 )
        goto LABEL_233;
    }
  }
  v156 = nullptr;
  while ( 1 )
  {
LABEL_233:
    if ( v154 == v150 )
    {
      v232 = &v236;
      sub_1872CE0("");
      v232 = &v236;
      sub_1873130(114, 405);
    }
    v186 = v150->m128i_i32[1];
    if ( v186 != 2 )
      break;
    if ( v152 == v150->m128i_i32[0] && a5 == v150[1].m128i_i32[0] && a4 == v150->m128i_i64[1] )
    {
      v150->m128i_i64[1] = a4;
      v150[1].m128i_i64[1] = v12;
      v150[1].m128i_i32[0] = a5;
      v150->m128i_i32[1] = 2;
      goto LABEL_204;
    }
LABEL_232:
    v150 += 2;
  }
  if ( v186 )
  {
    v156 = v150;
    goto LABEL_232;
  }
  if ( v156 )
LABEL_270:
    --*(_DWORD *)(v231 + 128);
  else
    v156 = v150;
LABEL_271:
  v156->m128i_i64[1] = a4;
  v156[1].m128i_i64[1] = v12;
  v156[1].m128i_i32[0] = a5;
  v208 = v231;
  v156->m128i_i32[1] = 2;
  v156->m128i_i32[0] = v152;
  ++*(_DWORD *)(v208 + 124);
LABEL_204:
  v158 = *(_QWORD **)(v231 + 136);
  if ( v158 )
  {
    v159 = *((_DWORD *)v158 - 1);
    if ( v159 == *((_DWORD *)v158 - 2) )
    {
      v191 = (3 * v159 + 1) >> 1;
      v192 = 8 * v191 + 8;
      if ( 8 * v159 + 8 >= v192 || v159 >= v191 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        v232 = &v236;
        v7 = v6;
        sub_24ABB0((__int64 *)v238, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v238);
        sub_233E40((__int64)v238);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v193 = sub_186B300(v158 - 1, v192);
      v194 = v231;
      v195 = v193;
      v158 = (_QWORD *)(v193 + 8);
      *(_DWORD *)v195 = v191;
      *(_QWORD *)(v194 + 136) = v158;
      LODWORD(v195) = *(_DWORD *)(v195 + 4);
      v162 = &v158[(unsigned int)v195];
      v161 = v195 + 1;
    }
    else
    {
      v160 = v159;
      v161 = v159 + 1;
      v162 = &v158[v160];
    }
  }
  else
  {
    v209 = (_QWORD *)sub_186B270(0x18u);
    v210 = v231;
    *v209 = 2;
    v158 = v209 + 1;
    v161 = 1;
    *(_QWORD *)(v210 + 136) = v158;
    v162 = v158;
  }
  *v162 = v12;
  *((_DWORD *)v158 - 1) = v161;
  v163 = *(_QWORD *)(v12 + 8);
  if ( v163 )
    v164 = *(_DWORD *)(v163 - 4);
  else
    v164 = 0;
  v232 = *(__int64 **)(v231 + 24);
  v165 = sub_15DB5C0(v232, 0, *(_QWORD *)v235);
  v166 = v165;
  if ( v165 )
    ++*(_DWORD *)(v165 + 8);
  v167 = *(__m128i **)(*(_QWORD *)(v12 + 8) + 8LL * (unsigned int)(v164 - 1));
  v168 = *(_QWORD *)(v231 + 24);
  if ( v167 )
    ++v167->m128i_i32[2];
  if ( v164 != 1 )
  {
    v169 = (__int64 *)v167;
    for ( k = 8LL * (unsigned int)(v164 - 2); ; k = v171 )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(*v230 + 16))(v230, v166);
      v172 = (__m128i *)sub_15E1BF0(*(_QWORD *)(v231 + 24));
      v233 = v172;
      if ( v172 )
        ++v172->m128i_i32[2];
      if ( v169 && (v78 = *((_DWORD *)v169 + 2) == 1, --*((_DWORD *)v169 + 2), v78) )
      {
        sub_15D7BC0(v168, v169);
        v171 = k - 8;
        if ( !k )
          goto LABEL_222;
      }
      else
      {
        v171 = k - 8;
        if ( !k )
          goto LABEL_222;
      }
      v169 = (__int64 *)v233;
    }
  }
  v233 = v167;
LABEL_222:
  v173 = sub_186B270(0x38u);
  v174 = v231;
  v175 = v173;
  sub_13478B0(v173, *(_QWORD *)(v231 + 24), 1);
  sub_1349280(v175, (_DWORD)v233, v176, v177, v178, v179);
  v180 = sub_15E3D10(
           *(_QWORD *)(v174 + 24),
           (int)&qword_18D6CD0,
           (int)&qword_18D6CD0,
           1,
           (int)v235,
           v235[0],
           1,
           v211,
           v212,
           v214,
           a4,
           v218,
           v222,
           (int)v224,
           v226.m128i_i8[0],
           v226.m128i_i32[2],
           v227.m128i_i32[0],
           v227.m128i_i32[2],
           (int)v228,
           v229,
           (int)v230,
           v231,
           (int)v232,
           (int)v233,
           v234,
           v235[0],
           v236,
           v237,
           v238[0],
           v239,
           v240,
           v241);
  sub_135F980(v229, v180, v175);
  v181 = *(_QWORD *)(v174 + 24);
  *(_QWORD *)v238 = sub_15DB5C0(v181, v221, *(_QWORD *)v235);
  v184 = sub_15DC610(
           v181,
           v180,
           1,
           (int)v238,
           v182,
           v183,
           v213,
           v215,
           v217,
           v219,
           v223,
           v225,
           v226.m128i_i32[0],
           v226.m128i_i32[2],
           v227.m128i_i32[0],
           (void *)v227.m128i_i64[1]);
  *v224 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v184, (__m128i)v181);
  if ( v184 )
    ++*(_DWORD *)(v184 + 8);
  v185 = (__int64 *)v233;
  if ( v233 )
  {
    LODWORD(v231) = v233->m128i_i32[2];
    v78 = (_DWORD)v231 == 1;
    v233->m128i_i32[2] = v231 - 1;
    if ( v78 )
      sub_15D7BC0(v168, v185);
  }
  if ( v166 )
  {
    v78 = (*(_DWORD *)(v166 + 8))-- == 1;
    if ( v78 )
      sub_15D7BC0(v232, v166);
  }
  return v224;
}

