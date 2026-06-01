__int64 __fastcall sub_1D67A60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        const __m128i *a5,
        __m128 *a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        unsigned int a11,
        _BYTE *a12)
{
  int v12; // eax
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // r12
  const __m128i *v17; // rax
  char v18; // al
  __int64 *v19; // rcx
  __int8 v20; // al
  unsigned int v21; // ebx
  const __m128i *v22; // r12
  __int64 v23; // rax
  __int64 v24; // r9
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // edx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  char *v31; // rcx
  __m128i *v32; // rdx
  __m128 *v33; // rax
  const __m128i *v34; // rdx
  __m128i v35; // xmm2
  __m128i v36; // xmm4
  __int64 v37; // r8
  int v38; // edx
  bool v39; // zf
  __int16 v40; // r13
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  char v43; // al
  unsigned __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __m128i *v47; // rbx
  unsigned __int64 v48; // rsi
  __int64 v49; // rax
  int v50; // edx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __m128i *v53; // rcx
  __m128i *v54; // rax
  __int64 *v55; // rbx
  __int64 v56; // r9
  char v57; // al
  __int64 v58; // rax
  __int64 v59; // rcx
  unsigned __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rsi
  char v63; // al
  __int64 v64; // rax
  unsigned __int64 v65; // rdi
  __int64 v66; // rcx
  __int64 v67; // rbx
  unsigned __int64 v68; // rbx
  unsigned __int64 v69; // rax
  __m128i v70; // xmm3
  unsigned __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  char v74; // r12
  char v75; // r13
  char v76; // bl
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // r12d
  __int64 v82; // r8
  __int16 v83; // bx
  unsigned __int64 v84; // rax
  char v85; // bp
  unsigned __int64 v86; // rax
  char v87; // dl
  __m128 *v88; // r15
  __int64 v89; // r14
  _DWORD *v90; // rax
  const __m128i *v91; // rsi
  __int64 v92; // rdx
  _QWORD *v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  _DWORD *v97; // rax
  _BYTE *v99; // rbx
  void **v100; // rsi
  __m128 v101; // xmm0
  __int64 v102; // rax
  const __m128i *v103; // rax
  __int64 v104; // rsi
  __int64 v105; // rdx
  char v106; // al
  int v107; // eax
  unsigned __int64 v108; // rsi
  const __m128i *v109; // rdx
  unsigned __int64 v110; // rbx
  __m128i v111; // xmm6
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  const __m128i *v115; // rdx
  __int64 v116; // r8
  __m128i *v117; // rbx
  __int64 v118; // rsi
  __int64 v119; // rcx
  const __m128i *v120; // rbp
  unsigned __int64 *v121; // rdi
  unsigned __int64 v122; // rax
  char v123; // dl
  __m128 *v124; // r15
  __int64 v125; // r14
  _DWORD *v126; // rax
  const __m128i *v127; // rsi
  __int64 v128; // rdx
  _QWORD *v129; // rdi
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  _DWORD *v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rax
  const __m128i *v136; // rax
  __int64 v137; // rbx
  const __m128i *v138; // r13
  __int64 v139; // r12
  __int64 v140; // rax
  unsigned __int64 v141; // rdx
  __m128i *v142; // r12
  __m128i *v143; // rcx
  __int64 v144; // r13
  unsigned __int64 v145; // rax
  int v146; // r12d
  int v147; // eax
  __int64 v148; // rcx
  int v149; // edx
  __m128i *v150; // rdi
  __int64 v151; // r8
  __int64 v152; // r9
  int v153; // eax
  int v154; // edx
  __m128i *v155; // rdi
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // rbx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rax
  _QWORD *v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // rbx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rax
  _QWORD *v169; // rax
  unsigned __int64 v170; // rax
  char v171; // dl
  __m128 *v172; // r15
  __int64 v173; // r14
  _DWORD *v174; // rax
  const __m128i *v175; // rsi
  __int64 v176; // rdx
  _QWORD *v177; // rdi
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  _DWORD *v181; // rax
  unsigned __int64 v182; // [rsp+0h] [rbp-4A8h] BYREF
  _DWORD *v183; // [rsp+8h] [rbp-4A0h]
  __int64 v184; // [rsp+10h] [rbp-498h]
  __m128 *v185; // [rsp+18h] [rbp-490h] BYREF
  const __m128i *v186; // [rsp+20h] [rbp-488h]
  __int64 v187; // [rsp+28h] [rbp-480h]
  __int64 v188; // [rsp+30h] [rbp-478h]
  const __m128i *v189; // [rsp+38h] [rbp-470h]
  __int64 v190; // [rsp+40h] [rbp-468h] BYREF
  __int64 v191; // [rsp+48h] [rbp-460h]
  char v192; // [rsp+53h] [rbp-455h]
  int v193; // [rsp+54h] [rbp-454h]
  char *v194; // [rsp+58h] [rbp-450h]
  const __m128i *v195; // [rsp+60h] [rbp-448h]
  __int64 v196; // [rsp+68h] [rbp-440h]
  __int64 v197; // [rsp+70h] [rbp-438h]
  __int64 v198; // [rsp+78h] [rbp-430h]
  void **p_ptr; // [rsp+80h] [rbp-428h]
  void **v200; // [rsp+88h] [rbp-420h]
  const __m128i *v201; // [rsp+90h] [rbp-418h]
  __int64 v202; // [rsp+98h] [rbp-410h]
  const __m128i *v203; // [rsp+A0h] [rbp-408h]
  __int64 v204; // [rsp+A8h] [rbp-400h]
  __m128i v205; // [rsp+B0h] [rbp-3F8h] BYREF
  __m128i v206; // [rsp+C0h] [rbp-3E8h] BYREF
  __m128 v207; // [rsp+D0h] [rbp-3D8h] BYREF
  __m128 v208; // [rsp+E0h] [rbp-3C8h]
  __m128i v209; // [rsp+F0h] [rbp-3B8h] BYREF
  __m128i v210; // [rsp+100h] [rbp-3A8h] BYREF
  void *v211; // [rsp+110h] [rbp-398h] BYREF
  __int64 v212; // [rsp+118h] [rbp-390h]
  char v213; // [rsp+120h] [rbp-388h] BYREF
  void *ptr; // [rsp+150h] [rbp-358h] BYREF
  __int64 v215; // [rsp+158h] [rbp-350h]
  char v216; // [rsp+160h] [rbp-348h] BYREF
  __m256i v217; // [rsp+190h] [rbp-318h] BYREF
  __int8 v218; // [rsp+1B0h] [rbp-2F8h]
  __int64 v219; // [rsp+1B8h] [rbp-2F0h]
  __int64 v220; // [rsp+1C0h] [rbp-2E8h]
  char v221; // [rsp+1D0h] [rbp-2D8h]
  void *v222; // [rsp+1D8h] [rbp-2D0h]
  __int64 v223; // [rsp+1E0h] [rbp-2C8h]
  char v224; // [rsp+1E8h] [rbp-2C0h] BYREF
  int v225; // [rsp+200h] [rbp-2A8h]
  char v226; // [rsp+204h] [rbp-2A4h]
  __int64 v227; // [rsp+268h] [rbp-240h]
  __m128i v228; // [rsp+270h] [rbp-238h] BYREF
  __m128 v229; // [rsp+280h] [rbp-228h]
  unsigned __int8 *v230[2]; // [rsp+290h] [rbp-218h] BYREF
  const __m128i *v231; // [rsp+2A0h] [rbp-208h] BYREF
  __int64 v232; // [rsp+2A8h] [rbp-200h]
  _QWORD v233[4]; // [rsp+2B0h] [rbp-1F8h] BYREF
  _QWORD v234[2]; // [rsp+2D0h] [rbp-1D8h] BYREF
  __int16 v235; // [rsp+2E0h] [rbp-1C8h]
  char v236; // [rsp+2E2h] [rbp-1C6h]
  __int64 v237; // [rsp+2E8h] [rbp-1C0h]
  unsigned int v238; // [rsp+2F0h] [rbp-1B8h]
  char v239; // [rsp+2F4h] [rbp-1B4h]

  v12 = *(_DWORD *)(a3 + 20);
  v192 = a4;
  v193 = v12 & 0x1FFFFFFF;
  if ( (v12 & 0x1FFFFFFF) == 0 )
  {
LABEL_29:
    LODWORD(v189) = 0;
    return (unsigned int)v189;
  }
  v185 = a6;
  v200 = &v211;
  v186 = a5;
  v190 = a3;
  v183 = (_DWORD *)a1;
  v187 = 24;
  v184 = 0;
  v194 = &v213;
  while ( 1 )
  {
    v14 = v184;
    v182 = *(_QWORD *)(v190 + v187);
    v15 = v186->m128i_i64[0];
    v16 = 32 * v184;
    v188 = v187 + v190;
    v17 = (const __m128i *)(32 * v184 + v15);
    if ( (v17->m128i_i32[0] & 0x7FFFFFFF) != 0 )
    {
LABEL_4:
      if ( a11 > v14 )
      {
        v18 = sub_B8BED0(v182);
        if ( !a10 || !v18 || sub_1DBAFC0(a10, 0, 0) != v182 )
        {
          v55 = (__int64 *)v186;
          sub_1CB6790(a9, (const __m128i *)(v16 + v186->m128i_i64[0]));
          sub_AB6BB0(&v228, *((_QWORD **)v183 + 31), (const __m128i *)(v16 + *v55));
          sub_1CB6790(a9 + 112, &v228);
          goto LABEL_28;
        }
        v19 = (__int64 *)v186;
        *(_OWORD *)(a10 + 120) = 0;
        *(_DWORD *)(a10 + 136) = 0;
        v17 = (const __m128i *)(v16 + *v19);
      }
      a8 = (__m128)_mm_loadu_si128(v17);
      v207 = a8;
      a7 = (__m128)_mm_loadu_si128(v17 + 1);
      v208 = a7;
      if ( (a8.m128_i32[0] & 0x7FFFFFFF) != 9 )
      {
        v81 = 0;
        *(__m128 *)v217.m256i_i8 = a8;
        v82 = v185[1].m128_u32[0];
        *(__m128 *)&v217.m256i_u64[2] = a7;
        sub_1D37A30(&v228, (__int64)v183, (const __m128i *)&v217, 0, v82, v182, *(double *)a7.m128_u64, a8);
        v39 = v192 == 0;
        v83 = *(_WORD *)(a9 + 225);
        *(_WORD *)(a9 + 225) = 0;
        if ( !v39 )
          v81 = 2 - (v217.m256i_i8[24] == 0);
        v84 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
        v85 = sub_1CCE030(
                (unsigned __int64)v183,
                v182,
                &v228,
                a2,
                *(unsigned int *)(a2 + 24),
                HIDWORD(v84),
                a7,
                a8,
                0,
                a9,
                v81);
        if ( *(_BYTE *)(a9 + 226) )
          v185[1].m128_i8[5] = 1;
        *(_WORD *)(a9 + 225) = v83;
LABEL_58:
        if ( v85 )
        {
          v86 = v182 & 0xFFFFFFFFFFFFFFF9LL;
          v87 = *(_BYTE *)(v182 + 28) & 0x7F;
          if ( v87 != 67 )
          {
            v86 |= 4u;
            v44 = v182 & 0xFFFFFFFFFFFFFFF9LL | 2;
            if ( v87 == 47 )
              v86 = v182 & 0xFFFFFFFFFFFFFFF9LL | 2;
          }
          v88 = v185;
          v89 = (__int64)v183;
          v185[11].m128_u64[0] = v86;
          v90 = sub_BC1D90(
                  *(_QWORD **)(v89 + 248),
                  *(const __m128i **)(a9 + 112),
                  *(unsigned int *)(a9 + 120),
                  v44,
                  v45,
                  v46);
          v91 = *(const __m128i **)a9;
          v92 = *(unsigned int *)(a9 + 8);
          v93 = *(_QWORD **)(v89 + 248);
          v182 = (unsigned __int64)v90;
          v97 = sub_BC1D90(v93, v91, v92, v94, v95, v96);
          LODWORD(v189) = 7;
          v183 = v97;
          *v88 = _mm_loadh_ps((const double *)&v182);
          return (unsigned int)v189;
        }
        goto LABEL_28;
      }
      v212 = 0x200000000LL;
      v211 = v194;
      p_ptr = &ptr;
      ptr = &v216;
      v215 = 0x200000000LL;
      v191 = v207.m128_u64[1] + 24LL * v207.m128_u32[1];
      if ( v207.m128_u64[1] != v191 )
      {
        v209 = _mm_loadu_si128((const __m128i *)v207.m128_u64[1]);
        v210.m128i_i64[0] = *(_QWORD *)(v207.m128_u64[1] + 16);
        v20 = v208.m128_i8[8];
        if ( (*(_DWORD *)v207.m128_u64[1] & 0x7FFFFFFF) != 0 )
        {
          v21 = 0;
          v189 = (const __m128i *)&v217;
          v22 = (const __m128i *)(v207.m128_u64[1] + 24);
          while ( 1 )
          {
            v210.m128i_i8[8] = v20;
            v36 = _mm_load_si128(&v210);
            v37 = v185[1].m128_u32[0];
            *(__m128i *)v217.m256i_i8 = _mm_load_si128(&v209);
            *(__m128i *)&v217.m256i_u64[2] = v36;
            sub_1D37A30(&v228, (__int64)v183, v189, 0, v37, v182, *(double *)a7.m128_u64, a8);
            v38 = 0;
            v39 = v192 == 0;
            v40 = *(_WORD *)(a9 + 225);
            *(_WORD *)(a9 + 225) = 0;
            if ( !v39 )
              v38 = 2 - (v217.m256i_i8[24] == 0);
            v41 = *(_QWORD *)a2;
            LODWORD(v188) = v38;
            v42 = (*(__int64 (__fastcall **)(__int64))(v41 + 16))(a2);
            v43 = sub_1CCE030(
                    (unsigned __int64)v183,
                    v182,
                    &v228,
                    a2,
                    *(unsigned int *)(a2 + 24),
                    HIDWORD(v42),
                    a7,
                    a8,
                    v21,
                    a9,
                    v188);
            if ( *(_BYTE *)(a9 + 226) )
            {
              v44 = (unsigned __int64)v185;
              v185[1].m128_i8[5] = 1;
            }
            *(_WORD *)(a9 + 225) = v40;
            if ( v43 )
              goto LABEL_73;
            v47 = (__m128i *)v211;
            v48 = HIDWORD(v212);
            v49 = *(_QWORD *)a9 + 24LL * *(unsigned int *)(a9 + 8);
            v50 = *(_DWORD *)(a9 + 8) - 1;
            v228 = _mm_loadu_si128((const __m128i *)(v49 - 24));
            v51 = *(_QWORD *)(v49 - 8);
            *(_DWORD *)(a9 + 8) = v50;
            v229.m128_u64[0] = v51;
            v52 = (unsigned int)v212 + 1LL;
            v53 = (__m128i *)((char *)v47 + 24 * (unsigned int)v212);
            v54 = &v228;
            if ( v52 > v48 )
            {
              if ( v47 > &v228 || v53 <= &v228 )
              {
                sub_2237220(v200, v194, v52, 24);
                v53 = (__m128i *)((char *)v211 + 24 * (unsigned int)v212);
                v54 = &v228;
              }
              else
              {
                sub_2237220(v200, v194, v52, 24);
                v54 = (__m128i *)((char *)v211 + (char *)&v228 - (char *)v47);
                v53 = (__m128i *)((char *)v211 + 24 * (unsigned int)v212);
              }
            }
            *v53 = _mm_loadu_si128(v54);
            v23 = v54[1].m128i_i64[0];
            LODWORD(v212) = v212 + 1;
            v53[1].m128i_i64[0] = v23;
            v24 = *(_QWORD *)(a9 + 112);
            v25 = HIDWORD(v215);
            v26 = v24 + 24LL * *(unsigned int *)(a9 + 120);
            v27 = *(_DWORD *)(a9 + 120) - 1;
            v228 = _mm_loadu_si128((const __m128i *)(v26 - 24));
            v28 = *(_QWORD *)(v26 - 8);
            *(_DWORD *)(a9 + 120) = v27;
            v229.m128_u64[0] = v28;
            v29 = (unsigned int)v215;
            v30 = (unsigned int)v215 + 1LL;
            if ( v30 > v25 )
            {
              v99 = ptr;
              v100 = p_ptr + 2;
              if ( ptr > &v228 || &v228 >= (__m128i *)((char *)ptr + 24 * (unsigned int)v215) )
              {
                sub_2237220(p_ptr, v100, v30, 24);
                v31 = (char *)ptr;
                v29 = (unsigned int)v215;
                v32 = &v228;
              }
              else
              {
                sub_2237220(p_ptr, v100, v30, 24);
                v31 = (char *)ptr;
                v29 = (unsigned int)v215;
                v32 = (__m128i *)((char *)ptr + (char *)&v228 - v99);
              }
            }
            else
            {
              v31 = (char *)ptr;
              v32 = &v228;
            }
            a8 = (__m128)_mm_loadu_si128(v32);
            v33 = (__m128 *)&v31[24 * v29];
            *v33 = a8;
            v33[1].m128_u64[0] = v32[1].m128i_u64[0];
            v34 = v22;
            LODWORD(v215) = v215 + 1;
            if ( (const __m128i *)v191 == v22 )
            {
              v134 = (unsigned int)v212;
              if ( (_DWORD)v212 )
                goto LABEL_119;
              goto LABEL_110;
            }
            v35 = _mm_loadu_si128(v22);
            v22 = (const __m128i *)((char *)v22 + 24);
            v209 = v35;
            v210.m128i_i64[0] = v22[-1].m128i_i64[1];
            v20 = v208.m128_i8[8];
            if ( (v34->m128i_i32[0] & 0x7FFFFFFF) == 0 )
              break;
            v21 = v212;
          }
        }
        sub_168B9F0((__int64)&v228, (__int64 *)v183 + 1, *(_DWORD *)(v182 + 24), 0x13DFu, 0);
        if ( (_BYTE)v237 )
        {
          sub_F21D50(v230, &v207);
        }
        else
        {
          if ( !v239 )
          {
LABEL_72:
            sub_15F7200(&v228);
LABEL_73:
            v85 = 1;
LABEL_74:
            if ( ptr != p_ptr + 2 )
              free(ptr);
            if ( v211 != v194 )
              free(v211);
            goto LABEL_58;
          }
          v165 = sub_168B9E0(&v228);
          v168 = v229.m128_u64[0];
          if ( v229.m128_u64[0] )
            v168 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v229.m128_u64[0] + 32LL))(v229.m128_u64[0]);
          v217.m256i_i64[0] = v168;
          v169 = sub_1587BC0(v165, v217.m256i_i64, v163, v164, v166, v167);
          sub_F21D50(*v169 + 32LL * v238 + 8, &v207);
        }
        if ( (_BYTE)v237 )
        {
          sub_AE9DF0(v230, v182, 0xAu);
        }
        else if ( v239 )
        {
          v158 = sub_168B9E0(&v228);
          v161 = v229.m128_u64[0];
          if ( v229.m128_u64[0] )
            v161 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v229.m128_u64[0] + 32LL))(v229.m128_u64[0]);
          v217.m256i_i64[0] = v161;
          v162 = sub_1587BC0(v158, v217.m256i_i64, v156, v157, v159, v160);
          sub_AE9DF0((unsigned __int8 **)(*v162 + 32LL * v238 + 8), v182, 0xAu);
        }
        goto LABEL_72;
      }
      v189 = (const __m128i *)&v217;
LABEL_110:
      v228.m128i_i64[0] = (__int64)v183;
      sub_1D37A00(&v228.m128i_i64[1]);
      v235 = 0;
      v233[2] = v234;
      v233[3] = 0x100000000LL;
      v135 = *((_QWORD *)v183 + 1410);
      v236 = 0;
      v234[1] = v135;
      v136 = v189;
      *((_QWORD *)v183 + 1410) = &v228;
      v137 = *(_QWORD *)a9;
      v138 = v136 + 1;
      v139 = *(unsigned int *)(a9 + 8);
      v237 = 0;
      v217.m256i_i64[0] = (__int64)v136[1].m128i_i64;
      v217.m256i_i64[1] = 0x400000000LL;
      v225 = 0;
      v226 = 0;
      if ( a2 )
      {
        v140 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
        v209.m128i_i64[1] = v137;
        v210.m128i_i64[0] = v139;
        v141 = v217.m256i_u32[2] + 1LL;
        v209.m128i_i64[0] = v140 | 4;
        v142 = &v209;
        v143 = (__m128i *)(v217.m256i_i64[0] + 24LL * v217.m256i_u32[2]);
        if ( v141 > v217.m256i_u32[3] )
        {
          v188 = v217.m256i_i64[0];
          if ( v217.m256i_i64[0] > (unsigned __int64)&v209 || v143 <= &v209 )
          {
            v142 = &v209;
            sub_2237220(v189, &v189[1], v141, 24);
            v143 = (__m128i *)(v217.m256i_i64[0] + 24LL * v217.m256i_u32[2]);
          }
          else
          {
            sub_2237220(v189, v138, v141, 24);
            v142 = (__m128i *)((char *)&v209 + v217.m256i_i64[0] - v188);
            v143 = (__m128i *)(v217.m256i_i64[0] + 24LL * v217.m256i_u32[2]);
          }
        }
      }
      else
      {
        v209.m128i_i64[1] = v137;
        v143 = (__m128i *)&v136[1];
        v210.m128i_i64[0] = v139;
        v142 = &v209;
        v209.m128i_i64[0] = 4;
      }
      v144 = (__int64)v183;
      *v143 = _mm_loadu_si128(v142);
      v143[1].m128i_i64[0] = v142[1].m128i_i64[0];
      v145 = v182;
      ++v217.m256i_i32[2];
      v146 = *(_DWORD *)(v144 + 12632);
      *(_DWORD *)(v144 + 12632) = 0;
      LOBYTE(v188) = *(_BYTE *)(v145 + 28);
      if ( (v188 & 0x7F) == 0x2F )
      {
        v147 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
        v148 = *(unsigned int *)(a9 + 8);
        v149 = *(_DWORD *)(a2 + 24);
        v201 = *(const __m128i **)a9;
        v202 = v148;
        sub_1DC3910((unsigned int)&v209, v144, v149, a2, v182, v147, (__int64)v201, v148);
        if ( !v209.m128i_i8[8]
          && (sub_1DD1D30(v144, *(_QWORD *)(v182 + 48), v189, *(unsigned int *)(v182 + 24), *(_QWORD *)(v182 + 40), 0)
            & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          goto LABEL_115;
        }
      }
      else
      {
        if ( (v188 & 0x7F) != 0x44 )
        {
LABEL_116:
          v150 = (__m128i *)v217.m256i_i64[0];
          v183[3158] = v146;
          if ( v150 != &v189[1] )
            free(v150);
          sub_1CB3BA0((__int64)&v228);
          v134 = (unsigned int)v212;
LABEL_119:
          sub_F1EDF0((__int64)&v228, *((_QWORD **)v183 + 31), (const __m128i *)v211, v134, v45, v24);
          sub_1CB6790(a9, &v228);
          sub_F1EDF0((__int64)&v228, *((_QWORD **)v183 + 31), (const __m128i *)ptr, (unsigned int)v215, v151, v152);
          v85 = 0;
          sub_1CB6790(a9 + 112, &v228);
          goto LABEL_74;
        }
        v153 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
        v154 = *(_DWORD *)(a2 + 24);
        v203 = *(const __m128i **)a9;
        v204 = *(unsigned int *)(a9 + 8);
        sub_1DC38E0((unsigned int)&v209, (_DWORD)v183, v154, a2, v182, v153, (__int64)v203, v204);
        if ( !v209.m128i_i8[8] && sub_1E02D80(v183, v182, *((_QWORD *)v183 + 68), v189) )
        {
LABEL_115:
          sub_1DBADA0(&v209);
          goto LABEL_116;
        }
      }
      sub_1DBADA0(&v209);
      v155 = (__m128i *)v217.m256i_i64[0];
      v183[3158] = v146;
      if ( v155 != &v189[1] )
        free(v155);
      sub_1CB3BA0((__int64)&v228);
      goto LABEL_73;
    }
    if ( (unsigned __int8)sub_B8BE90(v182) )
    {
      memset(v230, 0, 12);
      v101 = _mm_loadh_ps((const double *)&v190);
      v231 = (const __m128i *)v233;
      v228 = (__m128i)v101;
      v232 = 0x200000000LL;
      v102 = v186->m128i_i64[0];
      v189 = v186;
      v103 = (const __m128i *)(32 * v184 + v102);
      a7 = _mm_loadh_ps((const double *)&v185);
      v229 = a7;
      v39 = (v103->m128i_i32[0] & 0x7FFFFFFF) == 0;
      v217.m256i_i32[0] = v184;
      v189 = (const __m128i *)&v217;
      v222 = &v224;
      *(_DWORD *)((char *)v230 + 6) = !v39;
      v217.m256i_i64[2] = 0;
      v217.m256i_i64[1] &= 0xFFFFFFFE00000000LL;
      v219 &= 0xFFFFFFFE00000000LL;
      v218 = 0;
      v220 = 0;
      v221 = 0;
      v223 = 0x400000000LL;
      v227 = 0;
      *(__m128i *)&v217.m256i_u64[1] = _mm_loadu_si128(v103);
      v217.m256i_i64[3] = v103[1].m128i_i64[0];
      v104 = v187;
      v218 = v103[1].m128i_i8[8];
      v103->m128i_i64[1] = 0;
      v103->m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v103[1].m128i_i8[8] = 0;
      v105 = *(_QWORD *)(v228.m128i_i64[1] + v104);
      v106 = *(_BYTE *)(v105 + 28) & 0x7F;
      if ( v106 == 67 )
      {
        v107 = *(_DWORD *)(v105 + 64);
        if ( !v107 )
          goto LABEL_80;
      }
      else
      {
        if ( v106 == 47 )
        {
          if ( !*(_BYTE *)(v105 + 81) )
            goto LABEL_80;
        }
        else if ( v106 != 68 || (*(_BYTE *)(v105 + 80) & 4) == 0 )
        {
LABEL_80:
          v108 = (unsigned int)v232 + 1LL;
          v109 = v189;
          v110 = (unsigned __int64)&v231[14 * (unsigned int)v232];
          if ( v108 > HIDWORD(v232) )
          {
            if ( v231 > v189 || v110 <= (unsigned __int64)v189 )
            {
              sub_1D67900((__int64)&v231, v108);
              v109 = v189;
              v110 = (unsigned __int64)&v231[14 * (unsigned int)v232];
            }
            else
            {
              v191 = (__int64)v231;
              sub_1D67900((__int64)&v231, v108);
              v109 = (const __m128i *)((char *)v189 + (_QWORD)v231 - v191);
              v110 = (unsigned __int64)&v231[14 * (unsigned int)v232];
            }
          }
          *(_DWORD *)v110 = v109->m128i_i32[0];
          *(__m128i *)(v110 + 8) = _mm_loadu_si128((const __m128i *)&v109->m128i_u64[1]);
          *(__m128i *)(v110 + 24) = _mm_loadu_si128((const __m128i *)((char *)v109 + 24));
          *(__m128i *)(v110 + 40) = _mm_loadu_si128((const __m128i *)((char *)v109 + 40));
          v111 = _mm_loadu_si128((const __m128i *)((char *)v109 + 56));
          *(_QWORD *)(v110 + 72) = v110 + 88;
          *(__m128i *)(v110 + 56) = v111;
          *(_QWORD *)(v110 + 80) = 0x400000000LL;
          if ( v109[5].m128i_i32[0] )
          {
            v191 = (__int64)v109;
            sub_1D3C410((__int64 *)(v110 + 72), &v109[4].m128i_i64[1]);
            v109 = (const __m128i *)v191;
          }
          *(_QWORD *)(v110 + 216) = v109[13].m128i_i64[1];
          LODWORD(v232) = v232 + 1;
          if ( v222 != &v189[5].m128i_u64[1] )
            free(v222);
          sub_1D37560(v228.m128i_i64, 1);
          LODWORD(v189) = 0;
          if ( !HIBYTE(v230[0]) )
            LODWORD(v189) = sub_1D3CBA0((__int64)&v228, 1, v112, v113, v114, v56);
          v115 = v231;
          v116 = 14LL * (unsigned int)v232;
          v117 = (__m128i *)&v231[v116];
          if ( v231 != &v231[v116] )
          {
            do
            {
              v118 = v115[13].m128i_i64[1];
              v119 = v115->m128i_u32[0];
              v115 += 14;
              *(_QWORD *)(*(_QWORD *)(v229.m128_u64[1] + 240) + 8 * v119) = v118;
            }
            while ( v117 != v115 );
            v117 = (__m128i *)&v231[v116];
            if ( v231 != &v231[v116] )
            {
              v191 = a2;
              v120 = v231;
              do
              {
                while ( 1 )
                {
                  v117 -= 14;
                  v121 = (unsigned __int64 *)v117[4].m128i_i64[1];
                  if ( v121 == &v117[5].m128i_u64[1] )
                    break;
                  free(v121);
                  if ( v120 == v117 )
                    goto LABEL_93;
                }
              }
              while ( v120 != v117 );
LABEL_93:
              v117 = (__m128i *)v231;
              a2 = v191;
            }
          }
          if ( v117 != (__m128i *)v233 )
            free(v117);
          if ( (_DWORD)v189 )
            return (unsigned int)v189;
          goto LABEL_31;
        }
        v107 = *(_DWORD *)(v105 + 84) + 1;
        if ( *(_DWORD *)(v105 + 84) == -1 )
          goto LABEL_80;
      }
      LODWORD(v230[1]) = v107;
      goto LABEL_80;
    }
LABEL_31:
    v17 = (const __m128i *)(v16 + v186->m128i_i64[0]);
    if ( (v17->m128i_i32[0] & 0x7FFFFFFF) != 0 )
      goto LABEL_4;
    if ( a12 )
    {
      v228.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      *a12 = 1;
      v228.m128i_i64[1] = 0;
      sub_1CB6790(a9, &v228);
      v228 = (__m128i)(0xFFFFFFFE00000000LL & v228.m128i_u64[0]);
      sub_1CB6790(a9 + 112, &v228);
      goto LABEL_28;
    }
    v57 = *(_BYTE *)(a2 + 28);
    LOBYTE(ptr) = 0;
    if ( (v57 & 0x7Fu) - 68 > 6 )
      goto LABEL_104;
    v228.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    v58 = *(_QWORD *)(a2 + 16);
    v59 = 0;
    v228.m128i_i64[1] = 0;
    v229.m128_u64[1] = 0;
    v60 = v58 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v58 & 4) != 0 )
      v60 = *(_QWORD *)v60;
    v61 = 0;
    v62 = (*(_BYTE *)(v60 + 8) & 0x7Fu) - 59;
    if ( (unsigned int)v62 <= 2 )
    {
      v61 = v60 - 64;
      if ( v60 != 64 )
      {
        v61 = *(_QWORD *)(v60 + 64);
        if ( v61 )
        {
          v63 = *(_BYTE *)(v61 + 10);
          v61 = 0;
          if ( (v63 & 0x20) != 0 )
          {
            v64 = *(_QWORD *)(v60 - 48);
            v65 = v64 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v64 & 4) != 0 )
              v65 = *(_QWORD *)v65;
            v61 = 0;
            if ( (*(_BYTE *)(v65 + 8) & 0x7Fu) - 35 <= 3 )
            {
              v61 = v65 - 72;
              if ( v65 != 72 )
              {
                v189 = (const __m128i *)(v65 - 72);
                v67 = *(_QWORD *)(sub_B8C1B0(v65) + 16);
                if ( (v67 & 4) != 0 )
                  v68 = *(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF8LL);
                else
                  v68 = v67 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v68 )
                  v68 -= 64LL;
                v59 = sub_1703690((__int64)v189, v62, (__int64)v189, v66);
                v61 = v68;
              }
            }
          }
        }
      }
    }
    sub_19A2CD0((__int64)&v217, (__int64)v183, v61, v59, (*(_BYTE *)(*((_QWORD *)v183 + 29) + 1LL) & 0x40) != 0, v56);
    v197 = *(_QWORD *)(a9 + 112);
    v198 = *(unsigned int *)(a9 + 120);
    v195 = *(const __m128i **)a9;
    v196 = *(unsigned int *)(a9 + 8);
    v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    sub_1CB4D90(
      &v205,
      (__int64)v183,
      (_QWORD *)a2,
      *(unsigned int *)(a2 + 24),
      HIDWORD(v69),
      v182,
      a7,
      (__int64)v195,
      v196,
      v197,
      v198,
      &ptr);
    v70 = _mm_loadu_si128(&v206);
    v228 = _mm_loadu_si128(&v205);
    v229 = (__m128)v70;
    sub_19A2DA0(v217.m256i_i64);
    if ( (v228.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      break;
    v74 = *(_BYTE *)(a9 + 224);
    v75 = *(_BYTE *)(a9 + 225);
    v76 = *(_BYTE *)(a9 + 226);
    *(_WORD *)(a9 + 224) = 0;
    *(_BYTE *)(a9 + 226) = 0;
    v77 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    if ( (unsigned __int8)sub_1CCE030(
                            (unsigned __int64)v183,
                            v182,
                            &v228,
                            a2,
                            *(unsigned int *)(a2 + 24),
                            HIDWORD(v77),
                            a7,
                            a8,
                            0,
                            a9,
                            0) )
    {
      v170 = *(_QWORD *)v188 & 0xFFFFFFFFFFFFFFF9LL;
      v171 = *(_BYTE *)(*(_QWORD *)v188 + 28LL) & 0x7F;
      if ( v171 != 67 )
      {
        v170 |= 4u;
        v78 = *(_QWORD *)v188 & 0xFFFFFFFFFFFFFFF9LL | 2;
        if ( v171 == 47 )
          v170 = *(_QWORD *)v188 & 0xFFFFFFFFFFFFFFF9LL | 2;
      }
      v172 = v185;
      v173 = (__int64)v183;
      v185[11].m128_u64[0] = v170;
      v174 = sub_BC1D90(
               *(_QWORD **)(v173 + 248),
               *(const __m128i **)(a9 + 112),
               *(unsigned int *)(a9 + 120),
               v78,
               v79,
               v80);
      v175 = *(const __m128i **)a9;
      v176 = *(unsigned int *)(a9 + 8);
      v177 = *(_QWORD **)(v173 + 248);
      v182 = (unsigned __int64)v174;
      v181 = sub_BC1D90(v177, v175, v176, v178, v179, v180);
      LODWORD(v189) = 7;
      v183 = v181;
      *v172 = _mm_loadh_ps((const double *)&v182);
      *(_BYTE *)(a9 + 226) = v76;
      *(_BYTE *)(a9 + 225) = v75;
      *(_BYTE *)(a9 + 224) = v74;
      return (unsigned int)v189;
    }
    *(_BYTE *)(a9 + 226) = v76;
    *(_BYTE *)(a9 + 225) = v75;
    *(_BYTE *)(a9 + 224) = v74;
LABEL_28:
    ++v184;
    v187 += 8;
    if ( v193 == (_DWORD)v184 )
      goto LABEL_29;
  }
  v122 = *(_QWORD *)v188 & 0xFFFFFFFFFFFFFFF9LL;
  v123 = *(_BYTE *)(*(_QWORD *)v188 + 28LL) & 0x7F;
  if ( v123 != 67 )
  {
    v122 |= 4u;
    v71 = *(_QWORD *)v188 & 0xFFFFFFFFFFFFFFF9LL | 2;
    if ( v123 == 47 )
      v122 = *(_QWORD *)v188 & 0xFFFFFFFFFFFFFFF9LL | 2;
  }
  v124 = v185;
  v125 = (__int64)v183;
  v185[11].m128_u64[0] = v122;
  v126 = sub_BC1D90(*(_QWORD **)(v125 + 248), *(const __m128i **)(a9 + 112), *(unsigned int *)(a9 + 120), v71, v72, v73);
  v127 = *(const __m128i **)a9;
  v128 = *(unsigned int *)(a9 + 8);
  v129 = *(_QWORD **)(v125 + 248);
  v182 = (unsigned __int64)v126;
  v133 = sub_BC1D90(v129, v127, v128, v130, v131, v132);
  v39 = (_BYTE)ptr == 0;
  LODWORD(v189) = 7;
  v183 = v133;
  *v124 = _mm_loadh_ps((const double *)&v182);
  if ( v39 )
LABEL_104:
    LODWORD(v189) = 3;
  return (unsigned int)v189;
}
