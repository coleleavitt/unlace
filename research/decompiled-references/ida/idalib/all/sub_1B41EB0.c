unsigned __int64 __fastcall sub_1B41EB0(
        __int64 *a1,
        unsigned __int64 p_ptr,
        int a3,
        unsigned __int64 a4,
        __int64 *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 *a9,
        __int64 a10,
        unsigned __int64 *a11,
        __int64 a12,
        unsigned __int64 *a13,
        __int64 a14,
        unsigned int *a15,
        __int64 a16,
        unsigned __int64 *a17,
        __int64 a18,
        __int64 a19)
{
  __int64 v19; // rbx
  unsigned __int8 v20; // al
  __int64 *v21; // r12
  __int64 *i; // r13
  unsigned int v23; // eax
  __int64 v24; // rax
  unsigned __int16 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r14
  unsigned int v29; // r15d
  unsigned int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // r15
  __int64 *v33; // r15
  __int64 *v34; // rbp
  unsigned int v35; // eax
  __int64 v36; // rax
  unsigned __int16 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // edx
  unsigned int v44; // eax
  __int64 v45; // rdi
  __int64 v46; // r9
  unsigned int v47; // eax
  __int64 v48; // r13
  __int64 v49; // r13
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int v53; // eax
  __int64 v54; // rdx
  unsigned __int64 *v55; // rbp
  unsigned __int64 *j; // r12
  unsigned __int64 v57; // r13
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  unsigned __int64 *v61; // rbp
  unsigned int *v62; // r15
  __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // rcx
  unsigned __int64 v67; // r9
  unsigned int v68; // eax
  __int64 v69; // rdi
  __int64 v70; // rax
  __int16 v71; // ax
  unsigned int v72; // eax
  __int64 v73; // r12
  unsigned int v74; // eax
  __int64 v75; // rax
  _BYTE *v76; // rbp
  __int64 v77; // rcx
  unsigned __int64 v78; // rbp
  unsigned __int64 v79; // r13
  unsigned __int64 *v80; // rbx
  unsigned __int64 *v81; // r12
  _BYTE *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // rsi
  unsigned __int64 v89; // r15
  unsigned int v90; // r13d
  const void *v91; // r12
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  unsigned __int64 v98; // rbx
  unsigned int v100; // eax
  __int64 v101; // r12
  __int64 v102; // r12
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  unsigned int v106; // eax
  unsigned int v107; // esi
  unsigned int v108; // eax
  unsigned int v109; // eax
  unsigned int v110; // ecx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  unsigned __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rdx
  unsigned __int64 v117; // rdx
  __int64 v118; // rax
  int v119; // eax
  unsigned int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rax
  _QWORD *v126; // rax
  __int64 v127; // r12
  unsigned int v128; // eax
  unsigned int v129; // ecx
  _QWORD *v130; // rsi
  __int64 v131; // r8
  _QWORD *v132; // rdx
  _QWORD *v133; // rsi
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  unsigned int v137; // eax
  __int64 v138; // r12
  __int64 v139; // r12
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  unsigned int v143; // eax
  __int64 v144; // r8
  __int64 v145; // r9
  unsigned int v146; // eax
  unsigned __int64 v147; // rax
  unsigned int v148; // eax
  __int64 v149; // r13
  __int64 v150; // r13
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  unsigned int v154; // eax
  _QWORD *v155; // rsi
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  unsigned int v159; // eax
  __int64 v160; // r12
  __int64 v161; // r12
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  unsigned int v165; // eax
  int v166; // esi
  int v167; // r8d
  __int64 v168; // r10
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r8
  char v172; // al
  __int64 v173; // rcx
  _DWORD *v174; // r9
  _QWORD *v175; // rax
  __int64 v176; // r12
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  unsigned int v180; // eax
  __int64 *v181; // rax
  unsigned __int64 v183; // [rsp+10h] [rbp-288h]
  __int64 v184; // [rsp+10h] [rbp-288h]
  unsigned __int64 v185; // [rsp+20h] [rbp-278h]
  unsigned __int64 *v186; // [rsp+20h] [rbp-278h]
  __int64 v187; // [rsp+28h] [rbp-270h]
  unsigned int v188; // [rsp+28h] [rbp-270h]
  unsigned __int64 v189; // [rsp+28h] [rbp-270h]
  __int64 v190; // [rsp+28h] [rbp-270h]
  __int64 v191; // [rsp+28h] [rbp-270h]
  __int64 v192; // [rsp+28h] [rbp-270h]
  unsigned __int64 v193; // [rsp+30h] [rbp-268h]
  unsigned __int64 v194; // [rsp+48h] [rbp-250h]
  unsigned __int64 v195; // [rsp+50h] [rbp-248h]
  unsigned __int64 v196; // [rsp+50h] [rbp-248h]
  unsigned int v197; // [rsp+50h] [rbp-248h]
  unsigned __int64 v198; // [rsp+50h] [rbp-248h]
  unsigned __int64 v199; // [rsp+50h] [rbp-248h]
  unsigned __int64 v200; // [rsp+50h] [rbp-248h]
  __int64 v203; // [rsp+90h] [rbp-208h]
  unsigned int v205; // [rsp+B0h] [rbp-1E8h]
  unsigned int v206; // [rsp+B4h] [rbp-1E4h]
  unsigned __int64 v207; // [rsp+C8h] [rbp-1D0h]
  unsigned __int64 v208; // [rsp+D0h] [rbp-1C8h]
  int v209; // [rsp+E4h] [rbp-1B4h] BYREF
  __int64 v210; // [rsp+E8h] [rbp-1B0h] BYREF
  __int64 v211[2]; // [rsp+F0h] [rbp-1A8h] BYREF
  unsigned int v212; // [rsp+100h] [rbp-198h]
  _QWORD v213[2]; // [rsp+110h] [rbp-188h] BYREF
  unsigned int v214; // [rsp+120h] [rbp-178h]
  __int64 v215[2]; // [rsp+130h] [rbp-168h] BYREF
  unsigned int v216; // [rsp+140h] [rbp-158h]
  __m128i v217; // [rsp+150h] [rbp-148h] BYREF
  _BYTE v218[16]; // [rsp+160h] [rbp-138h] BYREF
  __m128i v219; // [rsp+170h] [rbp-128h] BYREF
  _BYTE v220[32]; // [rsp+180h] [rbp-118h] BYREF
  __m128i ptr; // [rsp+1A0h] [rbp-F8h] BYREF
  _BYTE v222[32]; // [rsp+1B0h] [rbp-E8h] BYREF
  __m128 v223; // [rsp+1D0h] [rbp-C8h] BYREF
  __int64 v224; // [rsp+1E0h] [rbp-B8h]
  unsigned __int8 *v225; // [rsp+1F0h] [rbp-A8h] BYREF
  char v226; // [rsp+248h] [rbp-50h]
  unsigned int v227; // [rsp+250h] [rbp-48h]
  char v228; // [rsp+254h] [rbp-44h]

  v193 = p_ptr;
  v194 = a4;
  if ( !p_ptr )
    return 0;
  v209 = 0;
  v205 = p_ptr & 1;
  if ( (p_ptr & 1) != 0 )
  {
    sub_168B9F0((__int64)&v223, a1, a19, 0x120Au, 0);
    sub_16CF4F0((__int64)&v223, &v209);
    sub_15F7200(&v223);
    return p_ptr;
  }
  v19 = p_ptr;
  v20 = *(_BYTE *)(p_ptr + 28) & 0x7F;
  if ( v20 == 71 )
  {
    v19 = *(_QWORD *)(p_ptr + 48);
    v20 = *(_BYTE *)(v19 + 28) & 0x7F;
  }
  if ( (unsigned int)v20 - 34 > 5 )
  {
    sub_168B9F0((__int64)&v223, a1, *(_DWORD *)(v19 + 24), 0x1194u, 0);
    sub_16CF4F0((__int64)&v223, &v209);
    sub_15F7200(&v223);
    return 0;
  }
  if ( a4 )
  {
    p_ptr = a4;
    v194 = sub_1B11600(a1, a4, 0x60u, 1, 0, a7, a8) & 0xFFFFFFFFFFFFFFFELL;
  }
  v211[0] = 0;
  v211[1] = 0;
  v212 = 0;
  v21 = &a5[a6];
  v183 = 0;
  if ( v21 != a5 )
  {
    for ( i = a5; v21 != i; ++i )
    {
      while ( 1 )
      {
        v219.m128i_i64[0] = *i;
        v25 = (unsigned __int16 *)sub_BFBAE0(v219.m128i_u64[0]);
        v27 = *v25;
        v219.m128i_i64[0] = (__int64)v25;
        LOWORD(v27) = v27 & 0x1FF;
        if ( (_WORD)v27 != 71 )
          goto LABEL_18;
        v28 = *((_QWORD *)v25 + 2);
        v26 = *(_BYTE *)(v28 + 28) & 0x7F;
        if ( (_BYTE)v26 == 43 )
          break;
LABEL_10:
        v23 = sub_C00A40((unsigned __int64)v25, p_ptr, v27, v26, (__int64)a5);
        sub_168B9F0((__int64)&v223, a1, v23, 0x11DFu, 0);
        ptr.m128i_i64[0] = *(_QWORD *)(v19 + 40);
        v24 = sub_15894B0((__int64)&v223, ptr.m128i_i64);
        p_ptr = (unsigned __int64)&v217;
        v217.m128i_i32[0] = (*(_BYTE *)(v19 + 28) & 0x7Fu) - 35 <= 3;
        sub_1587D10(v24, v217.m128i_i32);
        sub_15F7200(&v223);
LABEL_11:
        if ( v21 == ++i )
          goto LABEL_20;
      }
      v29 = sub_B76070(v19, p_ptr, v27, v26);
      v30 = (unsigned __int8)(*(_WORD *)(v28 + 98) >> 4);
      if ( v30 == 255 )
      {
        if ( v29 > (unsigned int)sub_B74880(v28) )
        {
          v30 = (unsigned __int8)(*(_WORD *)(v28 + 98) >> 4);
          if ( v30 == 255 )
            v30 = sub_B74880(v28);
LABEL_16:
          v31 = *(_QWORD *)(*(_QWORD *)(v19 + 120) + 8LL * v30);
          v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
          if ( v32 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28) )
          {
            p_ptr = (unsigned __int64)v211;
            ptr.m128i_i64[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
            sub_1B038B0((__m128i *)&v223, (__int64)v211, (__int64)&ptr, &v219, v144, v145);
            goto LABEL_11;
          }
        }
      }
      else if ( v29 > v30 )
      {
        goto LABEL_16;
      }
      v25 = (unsigned __int16 *)v219.m128i_i64[0];
      v27 = *(unsigned __int16 *)v219.m128i_i64[0];
      LOWORD(v27) = v27 & 0x1FF;
LABEL_18:
      if ( (_WORD)v27 != 98 )
        goto LABEL_10;
      v183 = (unsigned __int64)v25;
    }
  }
LABEL_20:
  v213[0] = 0;
  v213[1] = 0;
  v185 = 0;
  v33 = &a9[a10];
  v34 = a9;
  v214 = 0;
  while ( v33 != v34 )
  {
    while ( 1 )
    {
      v215[0] = *v34;
      v37 = (unsigned __int16 *)sub_BFBAE0(v215[0]);
      v39 = *v37;
      v215[0] = (__int64)v37;
      LOWORD(v39) = v39 & 0x1FF;
      if ( (_WORD)v39 != 71 )
        goto LABEL_31;
      v40 = *((_QWORD *)v37 + 2);
      v39 = *(_BYTE *)(v40 + 28) & 0x7F;
      if ( (_BYTE)v39 == 43 )
        break;
LABEL_22:
      v35 = sub_C00A40((unsigned __int64)v37, p_ptr, v39, v38, (__int64)a5);
      sub_168B9F0((__int64)&v223, a1, v35, 0x11DFu, 0);
      ptr.m128i_i64[0] = *(_QWORD *)(v19 + 40);
      v36 = sub_15894B0((__int64)&v223, ptr.m128i_i64);
      p_ptr = (unsigned __int64)&v219;
      v219.m128i_i32[0] = (*(_BYTE *)(v19 + 28) & 0x7Fu) - 35 <= 3;
      sub_1587D10(v36, v219.m128i_i32);
LABEL_23:
      sub_15F7200(&v223);
LABEL_24:
      if ( v33 == ++v34 )
        goto LABEL_38;
    }
    v187 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40);
    v43 = sub_B76070(v19, p_ptr, v41, v42);
    v44 = (unsigned __int8)(*(_WORD *)(v40 + 98) >> 4);
    if ( v44 == 255 )
    {
      if ( v43 > (unsigned int)sub_B74880(v40) )
      {
        v44 = (unsigned __int8)(*(_WORD *)(v40 + 98) >> 4);
        if ( v44 == 255 )
          v44 = sub_B74880(v40);
LABEL_29:
        v45 = *(_QWORD *)(*(_QWORD *)(v19 + 120) + 8LL * v44);
        if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45) == v187 )
        {
          p_ptr = (unsigned __int64)v213;
          v223.m128_u64[0] = v187;
          sub_1B038B0(&v219, (__int64)v213, (__int64)&v223, v215, (__int64)a5, v46);
          if ( v220[0] )
          {
            ptr.m128i_i64[0] = *(_QWORD *)(v40 + 48);
            v223.m128_u64[0] = sub_C1BEF0((__int64)&ptr, (__int64)v213, v111, v112);
            v114 = sub_6D5440(&v223);
            v116 = *(_QWORD *)&byte_8[v114 & 0xFFFFFFFFFFFFFFF0LL];
            LOBYTE(v114) = v116 | v114;
            v117 = v116 & 0xFFFFFFFFFFFFFFF8LL;
            v217.m128i_i64[0] = v117 | v114 & 7;
            if ( (v117 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            {
              v118 = *(_QWORD *)(v117 & 0xFFFFFFFFFFFFFFF0LL);
              if ( v118 )
              {
                v119 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v118 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
                v117 = (unsigned int)(v119 - 2);
                if ( (unsigned __int8)(v119 - 2) <= 4u || (_BYTE)v119 == 42 )
                  goto LABEL_24;
              }
            }
            v120 = sub_C00A40(v215[0], (__int64)v213, v117, v115, (__int64)a5);
            sub_168B9F0((__int64)&v223, a1, v120, 0x1146u, 0);
            v190 = sub_1605D30((__int64)&v223, v217.m128i_i64);
            LODWORD(v210) = (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) != 0;
            v191 = sub_1588370(v190, (unsigned int *)&v210);
            ptr.m128i_i64[0] = sub_EEC8C0(v215[0], (__int64)&v210, *(double *)a7.m128_u64);
            sub_1587DB0(v191, ptr.m128i_i64);
            sub_15F7200(&v223);
            p_ptr = (unsigned __int64)a1;
            sub_168B9F0((__int64)&v223, a1, *(_DWORD *)(v40 + 24), 0x188Bu, 0);
            if ( v226 )
            {
              p_ptr = v40;
              sub_AE9DF0(&v225, v40, 0xAu);
            }
            else if ( v228 )
            {
              v192 = sub_168B9E0(&v223);
              v125 = v224;
              if ( v224 )
                v125 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v224 + 32LL))(v224);
              ptr.m128i_i64[0] = v125;
              v126 = sub_1587BC0(v192, ptr.m128i_i64, v121, v122, v123, v124);
              p_ptr = v40;
              sub_AE9DF0((unsigned __int8 **)(*v126 + 32LL * v227 + 8), v40, 0xAu);
            }
          }
          else
          {
            v148 = sub_C00A40(v215[0], (__int64)v213, v111, v112, v113);
            sub_168B9F0((__int64)&v223, a1, v148, 0x121Eu, 0);
            LODWORD(v210) = 1;
            v149 = sub_1587D10((__int64)&v223, (int *)&v210);
            sub_1AF81E0(&ptr, 6u);
            v150 = sub_1682AF0(v149, (__int64)&ptr);
            v217.m128i_i64[0] = sub_EEC8C0(v215[0], (__int64)&ptr, *(double *)a7.m128_u64);
            sub_1587DB0(v150, v217.m128i_i64);
            if ( (_BYTE *)ptr.m128i_i64[0] != v222 )
              operator delete((void *)ptr.m128i_i64[0]);
            sub_15F7200(&v223);
            v154 = sub_C00A40(*(_QWORD *)(v219.m128i_i64[0] + 8), (__int64)&v217, v151, v152, v153);
            sub_168B9F0((__int64)&v223, a1, v154, 0x181Au, 0);
            sub_1AF81E0(&ptr, 6u);
            p_ptr = (unsigned __int64)&ptr;
            sub_1682AF0((__int64)&v223, (__int64)&ptr);
            if ( (_BYTE *)ptr.m128i_i64[0] != v222 )
              operator delete((void *)ptr.m128i_i64[0]);
          }
          goto LABEL_23;
        }
      }
    }
    else if ( v43 > v44 )
    {
      goto LABEL_29;
    }
    v37 = (unsigned __int16 *)v215[0];
    v39 = *(unsigned __int16 *)v215[0];
    LOWORD(v39) = v39 & 0x1FF;
LABEL_31:
    if ( (_WORD)v39 != 98 )
      goto LABEL_22;
    if ( !v185 )
    {
      v185 = (unsigned __int64)v37;
      goto LABEL_24;
    }
    v47 = sub_C00A40((unsigned __int64)v37, p_ptr, v39, v38, (__int64)a5);
    sub_168B9F0((__int64)&v223, a1, v47, 0x121Eu, 0);
    v217.m128i_i32[0] = 2;
    v48 = sub_1587D10((__int64)&v223, v217.m128i_i32);
    sub_1AF81E0(&ptr, 6u);
    v49 = sub_1682AF0(v48, (__int64)&ptr);
    v219.m128i_i64[0] = sub_EEC8C0(v215[0], (__int64)&ptr, *(double *)a7.m128_u64);
    sub_1587DB0(v49, v219.m128i_i64);
    if ( (_BYTE *)ptr.m128i_i64[0] != v222 )
      operator delete((void *)ptr.m128i_i64[0]);
    sub_15F7200(&v223);
    v53 = sub_C00A40(v185, (__int64)&v219, v50, v51, v52);
    sub_168B9F0((__int64)&v223, a1, v53, 0x181Au, 0);
    sub_1AF81E0(&ptr, 6u);
    p_ptr = (unsigned __int64)&ptr;
    sub_1682AF0((__int64)&v223, (__int64)&ptr);
    if ( (_BYTE *)ptr.m128i_i64[0] != v222 )
      operator delete((void *)ptr.m128i_i64[0]);
    ++v34;
    sub_15F7200(&v223);
    v185 = v215[0];
  }
LABEL_38:
  v54 = 0;
  v219.m128i_i64[0] = (__int64)v220;
  v219.m128i_i64[1] = 0x400000000LL;
  v55 = &a11[a12];
  for ( j = a11; v55 != j; ++v219.m128i_i32[2] )
  {
    p_ptr = *j;
    v57 = 0;
    if ( *j )
    {
      v58 = sub_1B11600(a1, p_ptr, 6u, 1, 0, a7, a8);
      LODWORD(v54) = v219.m128i_i32[2];
      v57 = v58 & 0xFFFFFFFFFFFFFFFELL;
    }
    v59 = (unsigned int)v54;
    v60 = (unsigned int)v54 + 1LL;
    if ( v60 > v219.m128i_u32[3] )
    {
      p_ptr = (unsigned __int64)v220;
      sub_2237220(&v219, v220, v60, 8);
      *(_QWORD *)(v219.m128i_i64[0] + 8LL * v219.m128i_u32[2]) = v57;
    }
    else
    {
      *(_QWORD *)(v219.m128i_i64[0] + 8 * v59) = v57;
    }
    ++j;
    v54 = (unsigned int)(v219.m128i_i32[2] + 1);
  }
  v215[0] = 0;
  v215[1] = 0;
  v216 = 0;
  v186 = &a13[a14];
  if ( a13 != v186 )
  {
    v61 = a13;
    v62 = a15;
    v206 = v183 == 0 ? 53 : 105;
    while ( 1 )
    {
      while ( 1 )
      {
        v72 = *v62++;
        v188 = v72;
        v67 = sub_BFBAE0(*v61);
        v71 = *(_WORD *)v67 & 0x1FF;
        if ( v71 == 71 )
          break;
LABEL_50:
        if ( v71 == 98 )
        {
          if ( v183 )
          {
            v189 = v67;
            v100 = sub_C00A40(v67, p_ptr, v54, v66, (__int64)a5);
            sub_168B9F0((__int64)&v223, a1, v100, 0x1229u, 0);
            sub_1AF81E0(&v217, 0x35u);
            v101 = sub_1682AF0((__int64)&v223, (__int64)&v217);
            sub_1AF81E0(&ptr, v206);
            v102 = sub_1682AF0(v101, (__int64)&ptr);
            v210 = sub_EEC8C0(v189, (__int64)&ptr, *(double *)a7.m128_u64);
            sub_1587DB0(v102, &v210);
            if ( (_BYTE *)ptr.m128i_i64[0] != v222 )
              operator delete((void *)ptr.m128i_i64[0]);
            if ( (_BYTE *)v217.m128i_i64[0] != v218 )
              operator delete((void *)v217.m128i_i64[0]);
            sub_15F7200(&v223);
            v106 = sub_C00A40(v183, (__int64)&v210, v103, v104, v105);
            sub_168B9F0((__int64)&v223, a1, v106, 0x181Au, 0);
            v107 = v206;
LABEL_88:
            sub_1AF81E0(&ptr, v107);
            p_ptr = (unsigned __int64)&ptr;
            sub_1682AF0((__int64)&v223, (__int64)&ptr);
            if ( (_BYTE *)ptr.m128i_i64[0] != v222 )
              operator delete((void *)ptr.m128i_i64[0]);
            goto LABEL_58;
          }
          v183 = v67;
          if ( (*(_DWORD *)v67 & 0x3C000) == 0 )
          {
            v127 = *(_QWORD *)(v67 + 8);
            v128 = sub_C00A40(v67, p_ptr, v54, v66, (__int64)a5);
            p_ptr = 0;
            sub_1B41BB0(a1, 0, v128, v188, v127, 1);
          }
          goto LABEL_54;
        }
LABEL_57:
        v74 = sub_C00A40(v67, p_ptr, v54, v66, (__int64)a5);
        sub_168B9F0((__int64)&v223, a1, v74, 0x11DFu, 0);
        ptr.m128i_i64[0] = *(_QWORD *)(v19 + 40);
        v75 = sub_15894B0((__int64)&v223, ptr.m128i_i64);
        p_ptr = (unsigned __int64)&v217;
        v217.m128i_i32[0] = (*(_BYTE *)(v19 + 28) & 0x7Fu) - 35 <= 3;
        sub_1587D10(v75, v217.m128i_i32);
LABEL_58:
        ++v61;
        sub_15F7200(&v223);
        if ( v186 == v61 )
          goto LABEL_59;
      }
      v73 = *(_QWORD *)(v67 + 16);
      if ( (*(_BYTE *)(v73 + 28) & 0x7F) != 0x2B )
        goto LABEL_57;
      v195 = v67;
      v203 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 32LL))(v73);
      v65 = sub_B76070(v19, p_ptr, v63, v64);
      v67 = v195;
      v54 = v65;
      v68 = (unsigned __int8)(*(_WORD *)(v73 + 98) >> 4);
      if ( v68 == 255 )
      {
        v207 = v195;
        v197 = v54;
        v108 = sub_B74880(v73);
        v54 = v197;
        v67 = v207;
        if ( v197 <= v108 )
        {
LABEL_49:
          v71 = *(_WORD *)v67 & 0x1FF;
          goto LABEL_50;
        }
        v68 = (unsigned __int8)(*(_WORD *)(v73 + 98) >> 4);
        if ( v68 == 255 )
        {
          v68 = sub_B74880(v73);
          v67 = v207;
        }
      }
      else if ( (unsigned int)v54 <= v68 )
      {
        goto LABEL_49;
      }
      v196 = v67;
      v69 = *(_QWORD *)(*(_QWORD *)(v19 + 120) + 8LL * v68);
      v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 32LL))(v69);
      v67 = v196;
      if ( v70 != v203 )
        goto LABEL_49;
      if ( !v216 )
        break;
      v129 = (v216 - 1) & (((unsigned int)v203 >> 9) ^ ((unsigned int)v203 >> 4));
      v130 = (_QWORD *)(v215[0] + 16LL * v129);
      v131 = *v130;
      if ( v203 != *v130 )
      {
        v166 = 1;
        if ( v131 == -4096 )
          break;
        while ( 1 )
        {
          v167 = v166 + 1;
          v129 = (v216 - 1) & (v166 + v129);
          v130 = (_QWORD *)(v215[0] + 16LL * v129);
          v168 = *v130;
          if ( v203 == *v130 )
            break;
          v166 = v167;
          if ( v168 == -4096 )
            goto LABEL_144;
        }
      }
      v208 = v196;
      v132 = (_QWORD *)(16LL * v216 + v215[0]);
LABEL_122:
      sub_1AFD000(&v223, v130, v132, (__int64)v215, 1);
      v133 = (_QWORD *)(v215[0] + 16LL * v216);
      v198 = v223.m128_u64[0];
      sub_1AFD000(&v223, v133, v133, (__int64)v215, 1);
      if ( v198 != v223.m128_u64[0] )
      {
        v137 = sub_C00A40(v208, (__int64)v133, v134, v135, v136);
        sub_168B9F0((__int64)&v223, a1, v137, 0x1229u, 0);
        sub_1AF81E0(&v217, 0x35u);
        v138 = sub_1682AF0((__int64)&v223, (__int64)&v217);
        sub_1AF81E0(&ptr, 0x35u);
        v139 = sub_1682AF0(v138, (__int64)&ptr);
        v210 = sub_EEC8C0(v208, (__int64)&ptr, *(double *)a7.m128_u64);
        sub_1587DB0(v139, &v210);
        if ( (_BYTE *)ptr.m128i_i64[0] != v222 )
          operator delete((void *)ptr.m128i_i64[0]);
        if ( (_BYTE *)v217.m128i_i64[0] != v218 )
          operator delete((void *)v217.m128i_i64[0]);
        sub_15F7200(&v223);
        v143 = sub_C00A40(*(_QWORD *)(v198 + 8), (__int64)&v210, v140, v141, v142);
        sub_168B9F0((__int64)&v223, a1, v143, 0x181Au, 0);
        v107 = 53;
        goto LABEL_88;
      }
      v199 = sub_1AFD070((__int64)v211, v203);
      v155 = (_QWORD *)(v211[0] + 16LL * v212);
      sub_1AFD000(&v223, v155, v155, (__int64)v211, 1);
      if ( v199 != v223.m128_u64[0] )
      {
        v159 = sub_C00A40(v208, (__int64)v155, v156, v157, v158);
        sub_168B9F0((__int64)&v223, a1, v159, 0x1229u, 0);
        sub_1AF81E0(&v217, 0x35u);
        v160 = sub_1682AF0((__int64)&v223, (__int64)&v217);
        sub_1AF81E0(&ptr, 0x69u);
        v161 = sub_1682AF0(v160, (__int64)&ptr);
        v210 = sub_EEC8C0(v208, (__int64)&ptr, *(double *)a7.m128_u64);
        sub_1587DB0(v161, &v210);
        if ( (_BYTE *)ptr.m128i_i64[0] != v222 )
          operator delete((void *)ptr.m128i_i64[0]);
        if ( (_BYTE *)v217.m128i_i64[0] != v218 )
          operator delete((void *)v217.m128i_i64[0]);
        sub_15F7200(&v223);
        v165 = sub_C00A40(*(_QWORD *)(v199 + 8), (__int64)&v210, v162, v163, v164);
        sub_168B9F0((__int64)&v223, a1, v165, 0x181Au, 0);
        v107 = 105;
        goto LABEL_88;
      }
      p_ptr = (unsigned __int64)&ptr;
      ptr.m128i_i64[0] = v203;
      v172 = sub_1AF7860(v215, ptr.m128i_i64, &v223);
      v174 = (_DWORD *)v208;
      if ( v172 )
      {
        v175 = (_QWORD *)(v223.m128_u64[0] + 8);
      }
      else
      {
        p_ptr = (unsigned __int64)&ptr;
        v181 = sub_1AFD140((__int64)v215, &ptr, (__int64 *)v223.m128_u64[0], v173, (__int64)a5, v208);
        v54 = ptr.m128i_i64[0];
        v174 = (_DWORD *)v208;
        v181[1] = 0;
        v175 = v181 + 1;
        *(v175 - 1) = v54;
      }
      *v175 = v174;
      if ( (*v174 & 0x3C000) == 0 )
      {
        v200 = (unsigned __int64)v174;
        v176 = sub_B74600(v73);
        v180 = sub_C00A40(v200, (__int64)&ptr, v177, v178, v179);
        p_ptr = v203;
        sub_1B41BB0(a1, v203, v180, v188, v176, 1);
      }
LABEL_54:
      if ( v186 == ++v61 )
        goto LABEL_59;
    }
LABEL_144:
    v208 = v196;
    v130 = (_QWORD *)(v215[0] + 16LL * v216);
    v132 = v130;
    goto LABEL_122;
  }
LABEL_59:
  v76 = v222;
  ptr.m128i_i64[1] = 0x400000000LL;
  ptr.m128i_i64[0] = (__int64)v222;
  v77 = (__int64)&a17[a18];
  if ( a17 == (unsigned __int64 *)v77 )
    goto LABEL_73;
  v78 = 0;
  v79 = 0;
  v184 = v19;
  v80 = a17;
  v81 = &a17[a18];
  do
  {
    while ( 1 )
    {
      v89 = *v80;
      if ( *v80 == v79 || !v89 )
      {
        if ( v89 )
          v89 = v78;
        p_ptr = v89;
        sub_14B7B40((__int64)&ptr, v89);
        goto LABEL_66;
      }
      if ( (*(_WORD *)v89 & 0x1FF) != 0x47 )
        break;
      v82 = *(_BYTE **)(v89 + 16);
      if ( (v82[28] & 0x7F) != 0x2B )
        break;
      v83 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v82 + 32LL))(v82);
      v87 = v212;
      v88 = v211[0];
      if ( !v212 )
        goto LABEL_107;
      v87 = (v212 - 1) & (((unsigned int)v83 >> 9) ^ ((unsigned int)v83 >> 4));
      v84 = *(_QWORD *)(v211[0] + 16 * v87);
      if ( v83 != v84 )
      {
        if ( v84 == -4096 )
        {
LABEL_107:
          v109 = sub_C00A40(v89, v211[0], v87, v84, v85);
          v110 = 4491;
LABEL_108:
          sub_168B9F0((__int64)&v223, a1, v109, v110, 0);
          p_ptr = (unsigned __int64)&v217;
          v217.m128i_i64[0] = sub_EEC8C0(v89, (__int64)a1, *(double *)a7.m128_u64);
          sub_1587DB0((__int64)&v223, v217.m128i_i64);
          v79 = v89;
          sub_15F7200(&v223);
          goto LABEL_66;
        }
        LODWORD(v84) = 1;
        while ( 1 )
        {
          v86 = (unsigned int)(v84 + 1);
          v87 = (v212 - 1) & ((_DWORD)v84 + (_DWORD)v87);
          v84 = 16LL * (unsigned int)v87;
          v85 = *(_QWORD *)(v211[0] + v84);
          if ( v83 == v85 )
            break;
          v84 = (unsigned int)v86;
          if ( v85 == -4096 )
            goto LABEL_107;
        }
      }
      if ( (*(_DWORD *)v89 & 0x3C000) == 0
        && !sub_F61A60(*(_QWORD *)(*(_QWORD *)(v83 + 48) & 0xFFFFFFFFFFFFFFF0LL), v211[0], v87, v84, v85, v86) )
      {
        v109 = sub_C00A40(v89, v88, v169, v170, v171);
        v110 = 4486;
        goto LABEL_108;
      }
      p_ptr = v89;
      v79 = v89;
      sub_14B7B40((__int64)&ptr, v89);
LABEL_66:
      if ( v81 == ++v80 )
        goto LABEL_72;
    }
    v78 = *v80;
    if ( (*(_DWORD *)v89 & 0x3C000) == 0 )
    {
      v78 = 0;
      v146 = sub_C00A40(*v80, p_ptr, v54, v77, (__int64)a5);
      v147 = sub_1AF55B0(a1, v146, v89) & 0xFFFFFFFFFFFFFFFELL;
      if ( v147 )
        v78 = sub_1915F20((__int64 *)*a1, v147, 0, 1, a7, a8) & 0xFFFFFFFFFFFFFFFELL;
    }
    p_ptr = v78;
    ++v80;
    v79 = v89;
    sub_14B7B40((__int64)&ptr, v78);
  }
  while ( v81 != v80 );
LABEL_72:
  v19 = v184;
  v76 = (_BYTE *)ptr.m128i_i64[0];
  v205 = ptr.m128i_u32[2];
LABEL_73:
  v90 = v219.m128i_u32[2];
  v91 = (const void *)v219.m128i_i64[0];
  v92 = sub_168B6C0((__int64)a1);
  v93 = sub_B30840(v92, a3, v194, a5, a6, a9, a10, v91, v90, a13, a14, a15, a16, v76, v205, a19);
  sub_B8CC60(v19, v93, v94, v95, v96, v97);
  v98 = v193;
  if ( (_BYTE *)ptr.m128i_i64[0] != v222 )
    free((void *)ptr.m128i_i64[0]);
  operator delete(v215[0], 16LL * v216, 8);
  if ( (_BYTE *)v219.m128i_i64[0] != v220 )
    free((void *)v219.m128i_i64[0]);
  operator delete(v213[0], 16LL * v214, 8);
  operator delete(v211[0], 16LL * v212, 8);
  return v98;
}
