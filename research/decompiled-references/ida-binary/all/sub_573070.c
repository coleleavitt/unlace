__int64 __fastcall sub_573070(
        __int64 a1,
        unsigned int a2,
        __int16 a3,
        __m128i si128,
        __m128i a5,
        __m128i a6,
        __m128 a7)
{
  _DWORD *v7; // rbx
  unsigned int v8; // eax
  __int16 v9; // cx
  __int64 v10; // r8
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rbp
  __int64 v15; // rbx
  unsigned int v16; // r13d
  _QWORD *v17; // r12
  __int64 v18; // r14
  unsigned __int16 v19; // dx
  int v20; // eax
  int v21; // ebp
  __int64 v22; // rdi
  char v23; // r11
  __int64 v24; // rax
  int v25; // r12d
  int v26; // ebp
  int v27; // r14d
  volatile signed __int32 **v28; // rbx
  int v29; // ecx
  int v30; // r14d
  volatile signed __int32 **v31; // r13
  char v32; // al
  int v33; // ebp
  __int16 v34; // r12
  char *v35; // rdi
  __int64 v36; // rax
  char *v37; // rdx
  unsigned int v38; // edx
  unsigned int v39; // esi
  unsigned int v40; // r9d
  char *v41; // rax
  unsigned int v42; // eax
  char *v43; // rdi
  __int16 v44; // ax
  __int64 v45; // rsi
  __int64 v46; // rdi
  bool v47; // al
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 v50; // r9
  unsigned __int64 v51; // rdi
  __int64 v52; // rax
  unsigned int v53; // edx
  unsigned int v55; // r13d
  _DWORD *v56; // rdi
  unsigned int v57; // r15d
  const __m128i *v58; // rbp
  __int64 v59; // rax
  int v60; // ecx
  unsigned __int16 v61; // dx
  __int64 v62; // rax
  unsigned int v63; // edx
  unsigned int v64; // esi
  unsigned int v65; // r9d
  unsigned int v66; // edx
  __int64 v67; // r8
  unsigned int *v68; // rax
  __m128i v69; // xmm2
  __m128i v70; // xmm1
  __m128i v71; // xmm0
  unsigned int v72; // ecx
  __m128i v73; // xmm2
  int v74; // eax
  __int64 v75; // r10
  __int64 v76; // r10
  __int64 v77; // r10
  __int64 v78; // r10
  __int64 v79; // r10
  __int64 v80; // r10
  __int64 v81; // rcx
  unsigned int v82; // ebx
  const __m128i *v83; // r14
  __int64 v84; // rax
  volatile signed __int32 **v85; // r15
  unsigned __int32 v86; // r13d
  __int64 v87; // rcx
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rbx
  volatile signed __int32 **v91; // r13
  volatile signed __int32 ***v92; // r15
  char v93; // al
  unsigned int v94; // edx
  volatile signed __int32 **v95; // r12
  volatile signed __int32 **v96; // rbp
  volatile signed __int32 *v97; // rsi
  unsigned __int32 i; // ebp
  __int64 v99; // rdx
  volatile signed __int32 ***v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rcx
  __m128i v103; // xmm4
  unsigned __int16 v104; // di
  __int16 v105; // dx
  __int64 v106; // rbp
  unsigned __int32 v107; // ecx
  unsigned int v108; // r12d
  __int64 v109; // rbp
  volatile signed __int32 **v110; // r13
  volatile signed __int32 **v111; // r12
  volatile signed __int32 *v112; // rsi
  unsigned int v113; // ebx
  __int64 v114; // rax
  __int64 v115; // rbx
  __int64 v116; // r13
  volatile signed __int32 **v117; // r14
  __int64 v118; // rax
  volatile signed __int32 **v119; // r12
  volatile signed __int32 **v120; // r15
  volatile signed __int32 *v121; // rsi
  unsigned int v122; // esi
  unsigned int v123; // eax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rdi
  unsigned __int16 *v127; // rax
  __int16 v128; // ax
  unsigned __int64 v129; // r9
  int v130; // ecx
  __int16 v131; // bx
  __int64 v132; // rax
  __int64 *v133; // rbp
  unsigned __int32 v134; // r12d
  _WORD *v135; // rax
  __int32 v136; // ecx
  __int64 v137; // r8
  unsigned __int64 v138; // r15
  __int64 v139; // rbp
  _WORD *v140; // rax
  __int32 v141; // r10d
  __int64 v142; // r8
  unsigned int v143; // r13d
  __int64 v144; // rbx
  __int64 v145; // r9
  __int64 v146; // rbp
  __int64 v147; // rax
  __int64 v148; // r15
  __int64 *v149; // r12
  _QWORD *v150; // rcx
  _QWORD *v151; // rdx
  int v152; // edx
  __int64 v153; // rsi
  __int64 v154; // rdi
  bool v155; // al
  __int64 v156; // rdx
  unsigned int v157; // ebx
  unsigned __int32 v158; // r13d
  unsigned __int64 v159; // rcx
  unsigned __int64 j; // rdi
  __int64 v161; // rax
  const __m128i *v162; // rax
  __int64 v163; // rbx
  unsigned __int32 v164; // eax
  int v165; // r15d
  __int64 v166; // [rsp+28h] [rbp-100h]
  char v167; // [rsp+28h] [rbp-100h]
  int v168; // [rsp+28h] [rbp-100h]
  int v169; // [rsp+28h] [rbp-100h]
  int v170; // [rsp+28h] [rbp-100h]
  _DWORD *v171; // [rsp+30h] [rbp-F8h]
  __int64 v172; // [rsp+30h] [rbp-F8h]
  int v173; // [rsp+30h] [rbp-F8h]
  unsigned int v174; // [rsp+30h] [rbp-F8h]
  unsigned int v175; // [rsp+30h] [rbp-F8h]
  __m128i v176; // [rsp+38h] [rbp-F0h] BYREF
  volatile signed __int32 ***v177; // [rsp+48h] [rbp-E0h]
  unsigned int v178; // [rsp+50h] [rbp-D8h]
  int v179; // [rsp+54h] [rbp-D4h]
  __int64 m128i_i64; // [rsp+58h] [rbp-D0h]
  __int64 v181; // [rsp+60h] [rbp-C8h]
  __int64 v182; // [rsp+68h] [rbp-C0h]
  __int64 v183; // [rsp+70h] [rbp-B8h]
  _QWORD *v184; // [rsp+78h] [rbp-B0h]
  unsigned int v185; // [rsp+80h] [rbp-A8h]
  unsigned int v186; // [rsp+84h] [rbp-A4h]
  const __m128i *v187; // [rsp+88h] [rbp-A0h]
  int v188; // [rsp+90h] [rbp-98h]
  unsigned int v189; // [rsp+94h] [rbp-94h]
  _QWORD *v190; // [rsp+98h] [rbp-90h]
  unsigned int v191; // [rsp+A0h] [rbp-88h]
  unsigned int v192; // [rsp+A4h] [rbp-84h]
  unsigned __int16 v193; // [rsp+A8h] [rbp-80h]
  unsigned __int16 v194; // [rsp+AAh] [rbp-7Eh]
  unsigned int v195; // [rsp+ACh] [rbp-7Ch]
  __int64 v196; // [rsp+B0h] [rbp-78h]
  __int64 v197; // [rsp+B8h] [rbp-70h]
  unsigned int v198; // [rsp+C0h] [rbp-68h]
  unsigned int v199; // [rsp+C4h] [rbp-64h]
  unsigned __int16 v200; // [rsp+C8h] [rbp-60h]
  unsigned __int8 v201; // [rsp+CAh] [rbp-5Eh]
  char v202; // [rsp+CBh] [rbp-5Dh]
  int v203; // [rsp+CCh] [rbp-5Ch]
  _QWORD v204[2]; // [rsp+D0h] [rbp-58h] BYREF
  volatile signed __int32 **v205; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v206; // [rsp+E8h] [rbp-40h]

  v7 = *(_DWORD **)(a1 + 1216);
  v200 = a3;
  v8 = v7[2];
  if ( a2 >= v8 )
    return 0;
  v9 = 1;
  v185 = a2;
  if ( a3 )
    v9 = a3;
  v198 = v8;
  LODWORD(v10) = v8;
  v11 = a1;
  v201 = 0;
  v194 = v9;
  v196 = 48LL * v8;
  v195 = 0;
  v197 = v8;
  v199 = a2;
  do
  {
    if ( v198 < v185 )
    {
      v12 = *(_QWORD *)v7;
      v176.m128i_i64[0] = v11;
      v171 = v7;
      v13 = v12 + v196;
      v166 = 48LL * v185;
      v14 = v12 + v166;
      v15 = v12 + 48 * (v197 + v185 - v198 - 1) + 48;
      do
      {
        if ( !*(_DWORD *)(v13 + 40) )
        {
          v16 = *(_DWORD *)(v14 + 40);
          if ( !v16 )
          {
            v17 = *(_QWORD **)v13;
            v18 = *(_QWORD *)v14;
            if ( ((**(_QWORD **)v14 ^ **(_QWORD **)v13) & 0xFFFFFFFF0000FFFFLL) == 0
              && *((_DWORD *)v17 + 54) == *(_DWORD *)(v18 + 216) )
            {
              v45 = *(_QWORD *)(v14 + 24);
              v46 = *(_QWORD *)(v13 + 24);
              v176.m128i_i32[2] = v10;
              v47 = sub_5715E0(v46, v45);
              v10 = v176.m128i_u32[2];
              v50 = 0xFFFFFFFF0000FFFFLL;
              if ( v47 )
              {
                v51 = (unsigned __int64)v17;
                v11 = v176.m128i_i64[0];
                if ( *(_WORD *)(v18 + 208) )
                {
                  do
                  {
                    v52 = v16++;
                    sub_572A30(
                      v51,
                      *((_QWORD *)v171 + 9),
                      v48,
                      v49,
                      v10,
                      v50,
                      (__int128)_mm_loadu_si128((const __m128i *)(v18 + 24 * v52 + 16)),
                      *(_QWORD *)(v18 + 24 * v52 + 32));
                    v18 = *(_QWORD *)v14;
                    v51 = *(_QWORD *)v13;
                  }
                  while ( v16 < *(unsigned __int16 *)(*(_QWORD *)v14 + 208LL) );
                  LODWORD(v10) = v171[2];
                }
                if ( !*(_WORD *)v51 )
                  *(_DWORD *)(v13 + 16) = *(_DWORD *)(v51 + 220);
                if ( v185 >= (unsigned int)v10 )
LABEL_181:
                  __assert_fail(
                    "(uint32_t)(version) < (&self->heads)->size",
                    "lib/src/./stack.c",
                    0x2A0u,
                    "ts_stack_remove_version");
                sub_56CF60(*(_QWORD *)v171 + v166, (__int64)(v171 + 12), *((_QWORD *)v171 + 9));
                v53 = v171[2];
                if ( v185 >= v53 )
LABEL_182:
                  __assert_fail("index < self->size", "lib/src/./././././array.h", 0xAFu, "_array__erase");
                memmove(
                  (void *)(*(_QWORD *)v171 + v166),
                  (const void *)(*(_QWORD *)v171 + 48LL * (v185 + 1)),
                  48LL * (v53 - v185 - 1));
                --v171[2];
                v7 = *(_DWORD **)(v11 + 1216);
                LODWORD(v10) = v7[2];
                goto LABEL_55;
              }
            }
          }
        }
        v13 += 48;
      }
      while ( v15 != v13 );
      v7 = v171;
      v11 = v176.m128i_i64[0];
    }
    if ( v185 >= (unsigned int)v10 )
      sub_55D2E0();
    v19 = **(_WORD **)(*(_QWORD *)v7 + 48LL * v185);
    v20 = v200;
    *(_DWORD *)(v11 + 1280) = 0;
    if ( (_WORD)v20 )
    {
      v21 = v20 + 1;
      if ( v194 >= (unsigned __int16)(v20 + 1) )
        goto LABEL_180;
      v22 = *(_QWORD *)(v11 + 1256);
    }
    else
    {
      v22 = *(_QWORD *)(v11 + 1256);
      v21 = *(_DWORD *)(v22 + 12);
      if ( v194 >= (unsigned __int16)v21 )
      {
LABEL_175:
        v55 = v7[2];
        v123 = v185;
        if ( v199 != v185 )
          goto LABEL_128;
        goto LABEL_176;
      }
    }
    v176.m128i_i32[2] = v19;
    v23 = 0;
    v177 = &v205;
    v24 = v11;
    v25 = v21;
    v26 = v194;
    v27 = v10;
    v10 = v24;
    while ( 2 )
    {
      v172 = v10;
      v167 = v23;
      sub_562CE0(v22, v176.m128i_u16[4], v26, (__int64)v177);
      v23 = v167;
      v10 = v172;
      if ( !(_DWORD)v206 )
        goto LABEL_42;
      v28 = v205;
      v29 = v27;
      v168 = v26;
      v30 = v25;
      v31 = &v205[(unsigned int)v206];
      do
      {
        while ( 1 )
        {
          v204[0] = *v28;
          v32 = *(_BYTE *)v28;
          if ( *(_BYTE *)v28 != 1 )
          {
            if ( (v32 == 3 || !v32) && !WORD2(v204[0]) )
              v23 = 1;
            goto LABEL_22;
          }
          v33 = *((unsigned __int8 *)v28 + 1);
          if ( (_BYTE)v33 )
            break;
LABEL_22:
          if ( v31 == ++v28 )
            goto LABEL_41;
        }
        v34 = *((_WORD *)v28 + 1);
        v35 = *(char **)(v10 + 1272);
        v173 = SWORD2(v204[0]);
        v36 = *(unsigned int *)(v10 + 1280);
        if ( (_DWORD)v36 )
        {
          v37 = *(char **)(v10 + 1272);
          while ( *(_DWORD *)v37 != v33 || *((_WORD *)v37 + 2) != v34 )
          {
            v37 += 16;
            if ( &v35[16 * (unsigned int)v36] == v37 )
            {
              v38 = v36 + 1;
              goto LABEL_31;
            }
          }
          goto LABEL_22;
        }
        v38 = 1;
LABEL_31:
        v176.m128i_i16[0] = *((_WORD *)v28 + 3);
        v39 = *(_DWORD *)(v10 + 1284);
        if ( v39 < v38 )
        {
          v40 = 2 * v39;
          if ( 2 * v39 < 8 )
            v40 = 8;
          if ( v40 >= v38 )
            v38 = v40;
          v178 = v38;
          if ( v39 < v38 )
          {
            v181 = v10;
            LODWORD(m128i_i64) = v29;
            LOBYTE(v179) = v23;
            if ( v35 )
            {
              v41 = (char *)off_8C52A8(v35, 16LL * v38);
              v23 = v179;
              v29 = m128i_i64;
              v10 = v181;
            }
            else
            {
              v41 = (char *)off_8C52B8(16LL * v38);
              v10 = v181;
              v29 = m128i_i64;
              v23 = v179;
            }
            v35 = v41;
            v42 = v178;
            *(_QWORD *)(v10 + 1272) = v35;
            *(_DWORD *)(v10 + 1284) = v42;
            v36 = *(unsigned int *)(v10 + 1280);
          }
        }
        ++v28;
        v43 = &v35[16 * v36];
        *(_DWORD *)(v10 + 1280) = v36 + 1;
        *(_DWORD *)v43 = v33;
        *((_DWORD *)v43 + 2) = v173;
        v44 = v176.m128i_i16[0];
        *((_WORD *)v43 + 2) = v34;
        *((_WORD *)v43 + 6) = v44;
      }
      while ( v31 != v28 );
LABEL_41:
      v26 = v168;
      v25 = v30;
      v27 = v29;
LABEL_42:
      if ( (unsigned __int16)++v26 < (unsigned __int16)v25 )
      {
        v22 = *(_QWORD *)(v10 + 1256);
        continue;
      }
      break;
    }
    v11 = v10;
    LODWORD(v10) = v27;
    v7 = *(_DWORD **)(v11 + 1216);
    if ( !*(_DWORD *)(v11 + 1280) )
    {
      if ( !v23 )
        goto LABEL_174;
      v201 = v23;
      v55 = v7[2];
      goto LABEL_127;
    }
    v202 = v23;
    v55 = v7[2];
    v56 = v7;
    v203 = v27;
    v57 = 0;
    v58 = (const __m128i *)v11;
    while ( 2 )
    {
      v59 = v58[79].m128i_i64[1] + 16LL * v57;
      v60 = *(_DWORD *)v59;
      v188 = *(_DWORD *)(v59 + 8);
      v61 = *(_WORD *)(v59 + 12);
      LODWORD(v59) = *(unsigned __int16 *)(v59 + 4);
      LODWORD(v205) = v60;
      v193 = v61;
      LODWORD(v181) = v59;
      v62 = sub_56D150(
              v56,
              v185,
              v177,
              v60,
              *(double *)si128.m128i_i64,
              *(double *)a5.m128i_i64,
              *(double *)a6.m128i_i64,
              a7);
      v56 = (_DWORD *)v58[76].m128i_i64[0];
      v64 = v63;
      v65 = v63;
      v183 = v62;
      v66 = v56[2];
      if ( v66 )
      {
        v67 = *(_QWORD *)v56;
        if ( v66 - 1 <= 7 )
        {
          v74 = 0;
          v72 = 0;
          goto LABEL_64;
        }
        v68 = (unsigned int *)(v67 + 40);
        v69 = 0;
        do
        {
          v70 = _mm_cvtsi32_si128(v68[24]);
          v71 = _mm_cvtsi32_si128(*v68);
          v68 += 48;
          a5 = _mm_unpacklo_epi32(v70, _mm_cvtsi32_si128(*(v68 - 12)));
          v69 = _mm_sub_epi32(
                  v69,
                  _mm_cmpeq_epi32(
                    _mm_unpacklo_epi64(_mm_unpacklo_epi32(v71, _mm_cvtsi32_si128(*(v68 - 36))), a5),
                    (__m128i)xmmword_5DE040));
        }
        while ( (unsigned int *)(v67 + 40 + 192LL * (v66 >> 2)) != v68 );
        v72 = v66 & 0xFFFFFFFC;
        v73 = _mm_add_epi32(v69, _mm_srli_si128(v69, 8));
        si128 = _mm_srli_si128(v73, 4);
        a6 = _mm_add_epi32(v73, si128);
        v74 = _mm_cvtsi128_si32(a6);
        if ( (v66 & 3) != 0 )
        {
LABEL_64:
          if ( *(_DWORD *)(v67 + 48LL * v72 + 40) == 2 )
            ++v74;
          v75 = v72 + 1;
          if ( (unsigned int)v75 < v66 )
          {
            if ( *(_DWORD *)(v67 + 48 * v75 + 40) == 2 )
              ++v74;
            v76 = v72 + 2;
            if ( (unsigned int)v76 < v66 )
            {
              if ( *(_DWORD *)(v67 + 48 * v76 + 40) == 2 )
                ++v74;
              v77 = v72 + 3;
              if ( (unsigned int)v77 < v66 )
              {
                if ( *(_DWORD *)(v67 + 48 * v77 + 40) == 2 )
                  ++v74;
                v78 = v72 + 4;
                if ( (unsigned int)v78 < v66 )
                {
                  if ( *(_DWORD *)(v67 + 48 * v78 + 40) == 2 )
                    ++v74;
                  v79 = v72 + 5;
                  if ( (unsigned int)v79 < v66 )
                  {
                    if ( *(_DWORD *)(v67 + 48 * v79 + 40) == 2 )
                      ++v74;
                    v80 = v72 + 6;
                    if ( (unsigned int)v80 < v66 )
                    {
                      if ( *(_DWORD *)(v67 + 48 * v80 + 40) == 2 )
                        ++v74;
                      v81 = v72 + 7;
                      if ( (unsigned int)v81 < v66 && *(_DWORD *)(v67 + 48 * v81 + 40) == 2 )
                        ++v74;
                    }
                  }
                }
              }
            }
          }
        }
        if ( !v64 )
        {
          v65 = v56[2];
          goto LABEL_122;
        }
      }
      else
      {
        v74 = 0;
        if ( !v64 )
          goto LABEL_166;
      }
      v179 = 0;
      v82 = 0;
      v83 = v58;
      v186 = v74 + 10;
      v187 = v58 + 81;
      v191 = v57;
      v192 = v55;
      v178 = v65;
      while ( 2 )
      {
        v84 = v183 + 24LL * v82;
        v85 = *(volatile signed __int32 ***)v84;
        si128.m128i_i64[0] = *(_QWORD *)(v84 + 8);
        v169 = *(_DWORD *)(v84 + 16);
        v86 = v169 - v179;
        if ( v186 >= v169 - v179 )
        {
          v204[1] = *(_QWORD *)(v84 + 8);
          v204[0] = v85;
          sub_56B3A0((__int64)v204, (__int64)v187);
          v87 = v83[78].m128i_i64[1];
          LODWORD(v182) = v193;
          v88 = sub_56C3B0(v181, (__int64)v204, v193, v87);
          v89 = v82 + 1;
          v174 = v89;
          if ( (unsigned int)v89 >= v178 )
          {
            v174 = v82;
          }
          else
          {
            LODWORD(v184) = v86;
            v176.m128i_i64[0] = v88;
            v90 = v183 + 24 * v89;
            m128i_i64 = (__int64)v83[82].m128i_i64;
            while ( 1 )
            {
              v91 = *(volatile signed __int32 ***)v90;
              si128.m128i_i64[0] = *(_QWORD *)(v90 + 8);
              if ( *(_DWORD *)(v90 + 16) != v169 )
              {
                --v174;
                v86 = (unsigned int)v184;
                v88 = v176.m128i_i64[0];
                goto LABEL_132;
              }
              v92 = v177;
              v206 = *(_QWORD *)(v90 + 8);
              v176.m128i_i64[1] = si128.m128i_i64[0];
              v205 = v91;
              sub_56B3A0((__int64)v177, m128i_i64);
              v93 = sub_56FDA0((__int64)v83, v176.m128i_i64[0], (__int64)v92);
              si128 = _mm_loadl_epi64((const __m128i *)&v176.m128i_u64[1]);
              if ( v93 )
              {
                for ( i = 0; i < v83[81].m128i_i32[2]; ++i )
                {
                  v99 = i;
                  sub_56C9A0(
                    (__int64)&v83[76].m128i_i64[1],
                    *(volatile signed __int32 **)(v83[81].m128i_i64[0] + 8 * v99));
                }
                v83[81].m128i_i32[2] = 0;
                sub_56C9A0((__int64)&v83[76].m128i_i64[1], (volatile signed __int32 *)v176.m128i_i64[0]);
                v100 = v177;
                v101 = v83[82].m128i_i64[1];
                v102 = v83[78].m128i_i64[1];
                v103 = _mm_loadu_si128(v83 + 81);
                v83[81].m128i_i64[0] = v83[82].m128i_i64[0];
                v104 = v181;
                v105 = v182;
                v83[81].m128i_i64[1] = v101;
                v83[82] = v103;
                v176.m128i_i64[0] = sub_56C3B0(v104, (__int64)v100, v105, v102);
              }
              else
              {
                v94 = _mm_cvtsi128_si32(si128);
                v95 = v91;
                v83[82].m128i_i32[2] = 0;
                v96 = &v91[v94];
                if ( v94 )
                {
                  do
                  {
                    v97 = *v95++;
                    sub_56C9A0((__int64)&v83[76].m128i_i64[1], v97);
                  }
                  while ( v96 != v95 );
                }
                if ( v91 )
                  off_8C52A0(v91);
              }
              v90 += 24;
              if ( v174 + 1 >= v178 )
                break;
              ++v174;
            }
            v86 = (unsigned int)v184;
            v88 = v176.m128i_i64[0];
          }
LABEL_132:
          v124 = v83[76].m128i_i64[0];
          if ( v86 >= *(_DWORD *)(v124 + 8) )
            __assert_fail("(uint32_t)(version) < (&self->heads)->size", "lib/src/./stack.c", 0x1DBu, "ts_stack_state");
          v125 = *(_QWORD *)v124;
          v176.m128i_i64[1] = v88;
          m128i_i64 = v86;
          v126 = v83[78].m128i_i64[1];
          v127 = *(unsigned __int16 **)(v125 + 48LL * v86);
          v176.m128i_i64[0] = 48LL * v86;
          v128 = sub_562F50(v126, *v127, v181);
          v129 = v176.m128i_u64[1];
          v130 = v188;
          v131 = v128;
          *(_DWORD *)(v176.m128i_i64[1] + 42) |= 0x18FFFFu;
          v132 = v83[76].m128i_i64[0];
          *(_DWORD *)(v129 + 60) += v130;
          if ( v86 >= *(_DWORD *)(v132 + 8) )
            goto LABEL_178;
          v133 = (__int64 *)(*(_QWORD *)v132 + v176.m128i_i64[0]);
          v134 = 0;
          v135 = sub_55DDD0(*v133, v129, 0, v131, (__int64 *)(v132 + 48));
          v136 = v83[81].m128i_i32[2];
          *v133 = (__int64)v135;
          if ( v136 )
          {
            while ( 1 )
            {
              v137 = v83[76].m128i_i64[0];
              v138 = *(_QWORD *)(v83[81].m128i_i64[0] + 8LL * v134);
              if ( v86 >= *(_DWORD *)(v137 + 8) )
                break;
              v139 = *(_QWORD *)v137 + v176.m128i_i64[0];
              v140 = sub_55DDD0(*(_QWORD *)v139, v138, 0, v131, (__int64 *)(v137 + 48));
              if ( v138 )
              {
                *(_QWORD *)v139 = v140;
                if ( ++v134 >= v83[81].m128i_i32[2] )
                  goto LABEL_138;
              }
              else
              {
                v152 = *((_DWORD *)v140 + 55);
                ++v134;
                *(_QWORD *)v139 = v140;
                *(_DWORD *)(v139 + 16) = v152;
                if ( v134 >= v83[81].m128i_i32[2] )
                  goto LABEL_138;
              }
            }
LABEL_178:
            __assert_fail("(uint32_t)(version) < (&self->heads)->size", "lib/src/./stack.c", 0x207u, "ts_stack_push");
          }
LABEL_138:
          if ( v86 )
          {
            v141 = v86;
            v142 = m128i_i64;
            v143 = v185;
            v144 = 0;
            v145 = v176.m128i_i64[0];
            while ( 1 )
            {
              if ( v143 != (_DWORD)v144 )
              {
                v146 = v83[76].m128i_i64[0];
                v147 = *(_QWORD *)v146;
                v148 = *(_QWORD *)v146 + 48 * v144;
                if ( !*(_DWORD *)(v148 + 40) )
                {
                  v149 = (__int64 *)(v147 + v145);
                  if ( !*(_DWORD *)(v147 + v145 + 40) )
                  {
                    v150 = *(_QWORD **)v148;
                    v151 = (_QWORD *)*v149;
                    if ( ((*(_QWORD *)*v149 ^ **(_QWORD **)v148) & 0xFFFFFFFF0000FFFFLL) == 0
                      && *((_DWORD *)v150 + 54) == *((_DWORD *)v151 + 54) )
                    {
                      v153 = v149[3];
                      v154 = *(_QWORD *)(v148 + 24);
                      v182 = v145;
                      m128i_i64 = v142;
                      v176.m128i_i32[2] = v141;
                      v190 = v150;
                      v189 = 0;
                      v184 = v151;
                      v155 = sub_5715E0(v154, v153);
                      v141 = v176.m128i_i32[2];
                      v142 = m128i_i64;
                      v145 = v182;
                      if ( v155 )
                        break;
                    }
                  }
                }
              }
              if ( v142 == ++v144 )
                goto LABEL_146;
            }
            v156 = (__int64)v184;
            v157 = v189;
            v158 = v176.m128i_u32[2];
            v159 = (unsigned __int64)v190;
            if ( *((_WORD *)v184 + 104) )
            {
              for ( j = (unsigned __int64)v190; ; j = *(_QWORD *)v148 )
              {
                v161 = v157++;
                v162 = (const __m128i *)(v156 + 24 * v161);
                a7 = (__m128)_mm_loadu_si128(v162 + 1);
                sub_572A30(j, *(_QWORD *)(v146 + 72), v156, v159, v142, v145, (__int128)a7, v162[2].m128i_i64[0]);
                v156 = *v149;
                if ( v157 >= *(unsigned __int16 *)(*v149 + 208) )
                  break;
              }
              v159 = *(_QWORD *)v148;
            }
            if ( !*(_WORD *)v159 )
              *(_DWORD *)(v148 + 16) = *(_DWORD *)(v159 + 220);
            if ( v158 >= *(_DWORD *)(v146 + 8) )
              goto LABEL_181;
            v163 = v176.m128i_i64[0];
            sub_56CF60(v176.m128i_i64[0] + *(_QWORD *)v146, v146 + 48, *(_QWORD *)(v146 + 72));
            v164 = *(_DWORD *)(v146 + 8);
            if ( v158 >= v164 )
              goto LABEL_182;
            v165 = v179 + 1;
            memmove(
              (void *)(v163 + *(_QWORD *)v146),
              (const void *)(*(_QWORD *)v146 + 48LL * (v158 + 1)),
              48LL * (v179 + v164 - 1 - v169));
            --*(_DWORD *)(v146 + 8);
            v179 = v165;
          }
LABEL_146:
          v82 = v174 + 1;
          goto LABEL_147;
        }
        v106 = v83[76].m128i_i64[0];
        v176.m128i_i64[0] = *(_QWORD *)(v84 + 8);
        if ( v86 >= *(_DWORD *)(v106 + 8) )
          goto LABEL_181;
        sub_56CF60(*(_QWORD *)v106 + 48LL * v86, v106 + 48, *(_QWORD *)(v106 + 72));
        v107 = *(_DWORD *)(v106 + 8);
        if ( v86 >= v107 )
          goto LABEL_182;
        si128 = _mm_loadl_epi64(&v176);
        v108 = _mm_cvtsi128_si32(si128);
        memmove(
          (void *)(*(_QWORD *)v106 + 48LL * v86),
          (const void *)(*(_QWORD *)v106 + 48LL * (v86 + 1)),
          48LL * (v179 + v107 - 1 - v169));
        --*(_DWORD *)(v106 + 8);
        v109 = (__int64)&v83[76].m128i_i64[1];
        if ( v108 )
        {
          v110 = v85;
          v111 = &v85[v108];
          do
          {
            v112 = *v110++;
            sub_56C9A0((__int64)&v83[76].m128i_i64[1], v112);
          }
          while ( v110 != v111 );
        }
        if ( v85 )
          off_8C52A0(v85);
        v113 = v82 + 1;
        if ( v113 < v178 )
        {
          v114 = v113;
          v175 = v113;
          v115 = (__int64)v83;
          v116 = v183 + 24 * v114;
          while ( 1 )
          {
            if ( *(_QWORD *)(v115 + 152) || *(_QWORD *)(v115 + 1400) )
            {
              *(__m128i *)(v115 + 192) = _mm_load_si128((const __m128i *)&xmmword_5DE050);
              si128 = _mm_load_si128((const __m128i *)&xmmword_5DE060);
              *(__m128i *)(v115 + 208) = si128;
              *(_QWORD *)(v115 + 223) = 0x736E6F69737265LL;
              sub_55D530(v115);
            }
            v117 = *(volatile signed __int32 ***)v116;
            v118 = *(unsigned int *)(v116 + 8);
            if ( *(_DWORD *)(v116 + 16) != v169 )
              break;
            v119 = *(volatile signed __int32 ***)v116;
            v120 = &v117[v118];
            if ( (_DWORD)v118 )
            {
              do
              {
                v121 = *v119++;
                sub_56C9A0(v109, v121);
              }
              while ( v119 != v120 );
            }
            if ( v117 )
              off_8C52A0(v117);
            ++v175;
            v116 += 24;
            if ( v175 >= v178 )
            {
              v57 = v191;
              v55 = v192;
              v58 = (const __m128i *)v115;
              goto LABEL_121;
            }
          }
          v83 = (const __m128i *)v115;
          ++v179;
          v82 = v175;
LABEL_147:
          if ( v82 >= v178 )
            break;
          continue;
        }
        break;
      }
      v57 = v191;
      v55 = v192;
      v58 = v83;
LABEL_121:
      v56 = (_DWORD *)v58[76].m128i_i64[0];
      v65 = v56[2];
LABEL_122:
      if ( v55 < v65 )
      {
        v122 = v55;
        v55 = v65;
        goto LABEL_124;
      }
LABEL_166:
      v55 = v65;
      v122 = -1;
LABEL_124:
      if ( ++v57 < v58[80].m128i_i32[0] )
        continue;
      break;
    }
    LODWORD(v10) = v203;
    v7 = v56;
    v11 = (__int64)v58;
    if ( v202 )
    {
      v201 = v202;
      goto LABEL_127;
    }
    if ( v122 == -1 || v195 > 5 )
    {
LABEL_174:
      if ( !v200 )
        goto LABEL_175;
LABEL_180:
      v170 = v10;
      sub_56E7E0((__int64 *)v7, v185);
      v7 = *(_DWORD **)(v11 + 1216);
      LODWORD(v10) = v170;
      v55 = v7[2];
LABEL_127:
      v123 = v185;
      if ( v199 != v185 )
      {
LABEL_128:
        LODWORD(v10) = v55;
        v185 = v123 + 1;
        goto LABEL_55;
      }
LABEL_176:
      v185 = v10;
      LODWORD(v10) = v55;
    }
    else
    {
      sub_56E900((__int64)v56, v122, v185);
      v7 = (_DWORD *)v58[76].m128i_i64[0];
      LODWORD(v10) = v7[2];
    }
LABEL_55:
    ++v195;
  }
  while ( v185 < (unsigned int)v10 );
  return v201;
}
