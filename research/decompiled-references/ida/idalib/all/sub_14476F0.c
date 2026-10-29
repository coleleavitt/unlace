void __fastcall sub_14476F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 *v7; // rdi
  __int64 v8; // r9
  unsigned __int64 v9; // r13
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 *v16; // rbx
  __int64 v17; // r14
  unsigned int v18; // esi
  __int64 v19; // rdx
  unsigned int v20; // edi
  __int64 v21; // rax
  __int64 v22; // rbp
  unsigned int v23; // esi
  char v24; // r12
  _BYTE *v25; // rdi
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // r13
  unsigned __int64 v29; // rax
  __int64 v30; // rbp
  unsigned int v31; // ecx
  __int64 *v32; // rdx
  __int64 v33; // r8
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // rbp
  __int64 v37; // rbx
  __int64 v38; // rdx
  unsigned __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 *v42; // rbp
  __int64 v43; // r15
  unsigned __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 *v46; // rdx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // r8
  __int64 v50; // rbx
  __int64 v51; // r13
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rdx
  unsigned __int32 v56; // r11d
  __int64 v57; // r12
  __int64 v58; // r8
  _QWORD *v59; // rcx
  __int64 v60; // rdx
  unsigned __int32 i; // r10d
  __int64 v62; // rcx
  unsigned int v63; // edi
  __int64 v64; // rsi
  __int64 v65; // r9
  int v66; // ecx
  unsigned __int32 v67; // esi
  unsigned __int32 v68; // r8d
  unsigned int v69; // edi
  __int64 v70; // rsi
  __int64 v71; // rax
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rdx
  const __m128i *v74; // rcx
  unsigned __int64 v75; // rax
  const __m128i *v76; // rdi
  const __m128i *v77; // rdx
  unsigned __int64 v78; // r8
  unsigned __int64 v79; // rax
  __m128d v80; // xmm1
  __m128d v81; // xmm0
  __int64 *v82; // rdx
  __int64 *v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rdi
  char v86; // al
  char v87; // bp
  unsigned __int64 v88; // rdx
  __int64 v89; // rax
  __int64 *v90; // rbx
  __int64 *v91; // r14
  int v92; // eax
  __int64 v93; // r9
  int *v94; // r15
  __int64 v95; // rsi
  char v96; // al
  int v97; // edi
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rax
  _QWORD *v102; // rdx
  unsigned __int32 v103; // r8d
  unsigned __int64 v104; // r9
  _QWORD *v105; // rcx
  __int64 v106; // rdx
  unsigned __int32 v107; // r10d
  __int64 v108; // rdi
  __int64 v109; // r11
  unsigned int v110; // ecx
  __int64 v111; // rax
  __int64 v112; // rsi
  int v113; // ecx
  unsigned __int32 v114; // esi
  unsigned __int32 v115; // edi
  unsigned int v116; // r12d
  __int64 *v117; // r10
  __int64 v118; // rax
  __int64 v119; // rdx
  _QWORD *v120; // rcx
  _QWORD *v121; // rdx
  int v122; // edx
  __int64 v123; // r8
  _QWORD *v124; // rcx
  _QWORD *v125; // rdx
  int v126; // esi
  __int64 v127; // rbx
  int v128; // r10d
  __int64 v129; // rcx
  unsigned __int64 v130; // rax
  int v131; // edi
  int v132; // r10d
  __int64 v133; // r9
  unsigned int v134; // r12d
  int v135; // r10d
  unsigned int v136; // r10d
  __m128i si128; // xmm0
  int v138; // eax
  int v139; // r10d
  __int64 *v140; // r11
  int v141; // r11d
  unsigned int v142; // r10d
  int v143; // r10d
  __int64 *v144; // r8
  int v145; // r11d
  int v146; // r10d
  unsigned int v147; // r11d
  __m128 v150; // [rsp+20h] [rbp-118h] BYREF
  __m128i *v151; // [rsp+30h] [rbp-108h]
  __int64 v152; // [rsp+38h] [rbp-100h]
  __int64 v153; // [rsp+40h] [rbp-F8h]
  __int64 v154; // [rsp+48h] [rbp-F0h]
  __int64 v155; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v156; // [rsp+58h] [rbp-E0h]
  unsigned __int32 v157; // [rsp+60h] [rbp-D8h]
  __m128 ptr; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v159[184]; // [rsp+80h] [rbp-B8h] BYREF

  v3 = a1 + 2080;
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
  v4 = *(unsigned int *)(a1 + 2096);
  v5 = *(_QWORD *)(a1 + 2080);
  if ( (_DWORD)v4 )
  {
    v6 = (v4 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v7 = (__int64 *)(v5 + 16LL * v6);
    v8 = *v7;
    if ( a2 == *v7 )
    {
LABEL_3:
      sub_14452A0(&ptr, v7, (_QWORD *)(16 * v4 + v5), v3, 1);
      v9 = ptr.m128_u64[0];
      goto LABEL_4;
    }
    v131 = 1;
    if ( v8 != -4096 )
    {
      do
      {
        v132 = v131 + 1;
        v6 = (v4 - 1) & (v131 + v6);
        v7 = (__int64 *)(v5 + 16LL * v6);
        v133 = *v7;
        if ( a2 == *v7 )
          goto LABEL_3;
        v131 = v132;
      }
      while ( v133 != -4096 );
    }
  }
  sub_14452A0(&ptr, (_QWORD *)(v5 + 16LL * (unsigned int)v4), (_QWORD *)(v5 + 16LL * (unsigned int)v4), v3, 1);
  v9 = ptr.m128_u64[0];
LABEL_4:
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 2080) + 16LL * *(unsigned int *)(a1 + 2096));
  sub_14452A0(&ptr, v10, v10, v3, 1);
  if ( ptr.m128_u64[0] == v9 )
    return;
  v151 = (__m128i *)(a3 + 8);
  v14 = *(_QWORD *)(a3 + 8);
  if ( (v14 & 4) != 0 )
    *(_DWORD *)((v14 & 0xFFFFFFFFFFFFFFF8LL) + 8) = 0;
  else
    *(_QWORD *)(a3 + 8) = 0;
  v157 = 0;
  v155 = 0;
  v156 = 0;
  v15 = *(_QWORD *)(a3 + 24) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 24) & 4) != 0 )
  {
    v16 = *(__int64 **)v15;
    v17 = *(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8);
  }
  else
  {
    v16 = (__int64 *)(a3 + 24);
    if ( !v15 )
      goto LABEL_27;
    v17 = a3 + 32;
  }
  if ( (__int64 *)v17 != v16 )
  {
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v22 = *v16;
      if ( !v18 )
        goto LABEL_16;
      v12 = v18 - 1;
      v20 = v12 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
      v21 = v19 + 16LL * v20;
      v11 = *(_QWORD *)v21;
      if ( v22 == *(_QWORD *)v21 )
        goto LABEL_13;
      v128 = 1;
      v13 = 0;
      if ( v11 != -4096 )
      {
        while ( 1 )
        {
          if ( !v13 && v11 == -8192 )
            v13 = v21;
          v20 = v12 & (v128 + v20);
          v21 = v19 + 16LL * v20;
          v11 = *(_QWORD *)v21;
          if ( v22 == *(_QWORD *)v21 )
            goto LABEL_13;
          if ( v11 == -4096 )
            break;
          ++v128;
        }
        if ( v13 )
          v21 = v13;
      }
      v11 = 3 * v18;
      v19 = (unsigned int)(v156 + 1);
      if ( 4 * (int)v19 < (unsigned int)v11 )
      {
        v129 = v18 >> 3;
        if ( v18 - ((_DWORD)v19 + HIDWORD(v156)) > (unsigned int)v129 )
          goto LABEL_157;
        sub_14474F0(&v155, v18, v19, v129, v12, v13);
        if ( !v157 )
        {
LABEL_250:
          LODWORD(v156) = v156 + 1;
          BUG();
        }
        v134 = (v157 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
        LODWORD(v19) = v156 + 1;
        v21 = v155 + 16LL * v134;
        v11 = *(_QWORD *)v21;
        if ( v22 == *(_QWORD *)v21 )
          goto LABEL_18;
        if ( v11 != -4096 )
        {
          v12 = v155 + 16LL * v134;
          v135 = 1;
          v21 = 0;
          while ( 1 )
          {
            if ( !v21 && v11 == -8192 )
              v21 = v12;
            v13 = (unsigned int)(v135 + 1);
            v136 = (v157 - 1) & (v134 + v135);
            v134 = v136;
            v12 = v155 + 16LL * v136;
            v11 = *(_QWORD *)v12;
            if ( v22 == *(_QWORD *)v12 )
            {
              v21 = v155 + 16LL * v136;
              goto LABEL_18;
            }
            if ( v11 == -4096 )
              break;
            v135 = v13;
          }
          if ( v21 )
          {
LABEL_157:
            v11 = *(_QWORD *)v21;
LABEL_18:
            LODWORD(v156) = v19;
            if ( v11 != -4096 )
              --HIDWORD(v156);
            goto LABEL_20;
          }
          v21 = v155 + 16LL * v136;
        }
      }
      else
      {
LABEL_16:
        sub_14474F0(&v155, 2 * v18, v19, v11, v12, v13);
        if ( !v157 )
          goto LABEL_250;
        v12 = v157 - 1;
        v23 = v12 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
        LODWORD(v19) = v156 + 1;
        v21 = v155 + 16LL * v23;
        v11 = *(_QWORD *)v21;
        if ( v22 == *(_QWORD *)v21 )
          goto LABEL_18;
        if ( v11 != -4096 )
        {
          v13 = v155 + 16LL * ((unsigned int)v12 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4)));
          v145 = 1;
          v21 = 0;
          while ( 1 )
          {
            if ( !v21 && v11 == -8192 )
              v21 = v13;
            v146 = v145 + 1;
            v147 = v23 + v145;
            v23 = v12 & v147;
            v13 = v155 + 16LL * ((unsigned int)v12 & v147);
            v11 = *(_QWORD *)v13;
            if ( v22 == *(_QWORD *)v13 )
            {
              v21 = v155 + 16LL * ((unsigned int)v12 & v147);
              goto LABEL_18;
            }
            if ( v11 == -4096 )
              break;
            v145 = v146;
          }
          if ( v21 )
            goto LABEL_157;
          v21 = v155 + 16LL * ((unsigned int)v12 & v147);
        }
      }
      LODWORD(v156) = v19;
LABEL_20:
      *(_QWORD *)v21 = v22;
      *(_DWORD *)(v21 + 8) = 0;
LABEL_13:
      ++v16;
      *(_DWORD *)(v21 + 8) = -1;
      if ( (__int64 *)v17 == v16 )
        break;
      v19 = v155;
      v18 = v157;
    }
  }
LABEL_27:
  ptr.m128_u64[0] = (unsigned __int64)v159;
  ptr.m128_u64[1] = 0x1000000000LL;
  v26 = *(_QWORD *)(v9 + 8);
  if ( (v26 & 4) != 0 )
  {
    v130 = v26 & 0xFFFFFFFFFFFFFFF8LL;
    v27 = *(__int64 **)v130;
    v28 = *(_QWORD *)v130 + 8LL * *(unsigned int *)(v130 + 8);
  }
  else
  {
    v27 = (__int64 *)(v9 + 8);
    if ( (v26 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_79;
    v28 = v9 + 16;
  }
  if ( v27 != (__int64 *)v28 )
  {
    v29 = 0;
    while ( 1 )
    {
      v30 = *v27;
      if ( !v157 )
        break;
      v31 = (v157 - 1) & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
      v32 = (__int64 *)(v155 + 16LL * v31);
      v33 = *v32;
      if ( v30 != *v32 )
      {
        v122 = 1;
        if ( v33 == -4096 )
          break;
        while ( 1 )
        {
          v13 = (unsigned int)(v122 + 1);
          v31 = (v157 - 1) & (v122 + v31);
          v32 = (__int64 *)(v155 + 16LL * v31);
          v123 = *v32;
          if ( v30 == *v32 )
            break;
          v122 = v13;
          if ( v123 == -4096 )
            goto LABEL_35;
        }
      }
      if ( !*((_DWORD *)v32 + 2) )
        break;
LABEL_38:
      if ( (__int64 *)v28 == ++v27 )
      {
        if ( !(_DWORD)v29 )
          goto LABEL_79;
        while ( 2 )
        {
          while ( 2 )
          {
            v34 = (unsigned int)v29;
            LODWORD(v29) = v29 - 1;
            v37 = *(_QWORD *)(ptr.m128_u64[0] + 8 * v34 - 8);
            ptr.m128_i32[2] = v29;
            v38 = *(_QWORD *)(v37 + 24);
            if ( v38 )
            {
              v39 = *(unsigned int *)(v38 + 416);
              v34 = *(_QWORD *)(a1 + 1704);
              v40 = *(_QWORD *)(v34 + 24);
              if ( v39 < (*(_QWORD *)(v34 + 32) - v40) >> 2 )
              {
                v34 = *(unsigned int *)(v40 + 4 * v39);
                if ( (_DWORD)v34 )
                {
                  if ( *(_QWORD *)(v37 + 16) )
                  {
                    v35 = *(_QWORD *)(a3 + 8);
                    v36 = v35 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v35 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                    {
                      if ( (v35 & 4) != 0 )
                      {
                        v29 = *(unsigned int *)(v36 + 8);
                        if ( v29 + 1 > *(unsigned int *)(v36 + 12) )
                        {
                          sub_2237220(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL, v36 + 16, v29 + 1, 8);
                          v29 = *(unsigned int *)(v36 + 8);
                        }
                        *(_QWORD *)(*(_QWORD *)v36 + 8 * v29) = v37;
                        ++*(_DWORD *)(v36 + 8);
                        LODWORD(v29) = ptr.m128_i32[2];
                      }
                      else
                      {
                        v150.m128_u64[0] = v37;
                        v150 = _mm_loadh_ps((const double *)v150.m128_u64);
                        v29 = operator new(0x30u);
                        si128 = _mm_load_si128((const __m128i *)&v150);
                        *(_QWORD *)(v29 + 8) = 0x400000002LL;
                        *(_QWORD *)v29 = v29 + 16;
                        *(__m128i *)(v29 + 16) = si128;
                        *(_QWORD *)(a3 + 8) = v29 | 4;
                        LODWORD(v29) = ptr.m128_i32[2];
                      }
                    }
                    else
                    {
                      *(_QWORD *)(a3 + 8) = v37 & 0xFFFFFFFFFFFFFFFBLL;
                    }
                  }
LABEL_48:
                  if ( !(_DWORD)v29 )
                    goto LABEL_79;
                  continue;
                }
              }
            }
            break;
          }
          v41 = *(unsigned int *)(v37 + 36);
          v42 = (__int64 *)(v37 + 40);
          if ( v37 + 40 + 8 * v41 == v37 + 40 )
            goto LABEL_48;
          v43 = v37 + 40 + 8 * v41;
LABEL_56:
          while ( 2 )
          {
            v49 = v157;
            v50 = *v42;
            v51 = v155;
            if ( !v157 )
            {
LABEL_57:
              v150.m128_i32[0] = v157;
              v52 = ((((((((2 * v157 - 1) | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 2)
                       | (2 * v157 - 1)
                       | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 4)
                     | (((2 * v157 - 1) | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 2)
                     | (2 * v157 - 1)
                     | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 8)
                   | (((((2 * v157 - 1) | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 2)
                     | (2 * v157 - 1)
                     | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 4)
                   | (((2 * v157 - 1) | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 2)
                   | (2 * v157 - 1)
                   | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 16;
              v53 = (v52
                   | (((((((2 * v157 - 1) | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 2)
                       | (2 * v157 - 1)
                       | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 4)
                     | (((2 * v157 - 1) | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 2)
                     | (2 * v157 - 1)
                     | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 8)
                   | (((((2 * v157 - 1) | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 2)
                     | (2 * v157 - 1)
                     | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 4)
                   | (((2 * v157 - 1) | ((unsigned __int64)(2 * v157 - 1) >> 1)) >> 2)
                   | (2 * v157 - 1)
                   | ((unsigned __int64)(2 * v157 - 1) >> 1))
                  + 1;
              if ( (unsigned int)v53 < 0x40 )
                LODWORD(v53) = 64;
              v157 = v53;
              v54 = sub_22300B0(16LL * (unsigned int)v53, 8, v52, v34, v49, v13);
              v155 = v54;
              if ( v51 )
              {
                v55 = (_QWORD *)v54;
                v156 = 0;
                v56 = v157;
                v57 = 16LL * v150.m128_u32[0];
                v58 = v51 + v57;
                v59 = (_QWORD *)(v54 + 16LL * v157);
                if ( (_QWORD *)v54 != v59 )
                {
                  do
                  {
                    *v55 = -4096;
                    v55 += 2;
                  }
                  while ( v59 != v55 );
                }
                v60 = v51;
                for ( i = v56 - 1; v58 != v60; v60 += 16 )
                {
                  v62 = *(_QWORD *)v60;
                  if ( *(_QWORD *)v60 != -4096 && v62 != -8192 )
                  {
                    if ( !v56 )
                    {
                      *(_QWORD *)&dword_0 = *(_QWORD *)v60;
                      BUG();
                    }
                    v63 = i & (((unsigned int)v62 >> 9) ^ ((unsigned int)v62 >> 4));
                    v64 = v54 + 16LL * v63;
                    v65 = *(_QWORD *)v64;
                    if ( *(_QWORD *)v64 != v62 && v65 != -4096 )
                    {
                      LODWORD(v152) = 1;
                      v150.m128_u64[0] = 0;
                      v153 = v60;
                      while ( 1 )
                      {
                        if ( !v150.m128_u64[0] )
                        {
                          if ( v65 != -8192 )
                            v64 = v150.m128_u64[0];
                          v150.m128_u64[0] = v64;
                        }
                        v63 = i & (v152 + v63);
                        v64 = v54 + 16LL * v63;
                        v65 = *(_QWORD *)v64;
                        if ( v62 == *(_QWORD *)v64 )
                        {
                          v60 = v153;
                          goto LABEL_67;
                        }
                        if ( v65 == -4096 )
                          break;
                        LODWORD(v152) = v152 + 1;
                      }
                      v60 = v153;
                      if ( v150.m128_u64[0] )
                        v64 = v150.m128_u64[0];
                    }
LABEL_67:
                    *(_QWORD *)v64 = v62;
                    v66 = *(_DWORD *)(v60 + 8);
                    LODWORD(v156) = v156 + 1;
                    *(_DWORD *)(v64 + 8) = v66;
                  }
                }
                operator delete(v51, v57, 8);
                v54 = v155;
                v67 = v157;
                LODWORD(v34) = v156 + 1;
              }
              else
              {
                v156 = 0;
                v67 = v157;
                v120 = (_QWORD *)(v54 + 16LL * v157);
                if ( (_QWORD *)v54 != v120 )
                {
                  v121 = (_QWORD *)v54;
                  do
                  {
                    *v121 = -4096;
                    v121 += 2;
                  }
                  while ( v120 != v121 );
                }
                LODWORD(v34) = 1;
              }
              if ( !v67 )
                goto LABEL_251;
              v68 = v67 - 1;
              v69 = (v67 - 1) & (((unsigned int)v50 >> 9) ^ ((unsigned int)v50 >> 4));
              v46 = (__int64 *)(v54 + 16LL * v69);
              v70 = *v46;
              if ( v50 == *v46 )
                goto LABEL_72;
              v139 = 1;
              v140 = nullptr;
              if ( v70 != -4096 )
              {
                while ( 1 )
                {
                  if ( v140 || v70 != -8192 )
                    v46 = v140;
                  v141 = v139 + 1;
                  v142 = v69 + v139;
                  v69 = v68 & v142;
                  v13 = v54 + 16LL * (v68 & v142);
                  v70 = *(_QWORD *)v13;
                  if ( v50 == *(_QWORD *)v13 )
                  {
                    v46 = (__int64 *)(v54 + 16LL * (v68 & v142));
                    goto LABEL_72;
                  }
                  if ( v70 == -4096 )
                    break;
                  v139 = v141;
                  v140 = v46;
                  v46 = (__int64 *)v13;
                }
                if ( !v46 )
                {
                  v46 = (__int64 *)(v54 + 16LL * (v68 & v142));
                  goto LABEL_135;
                }
LABEL_109:
                v70 = *v46;
                goto LABEL_72;
              }
LABEL_135:
              LODWORD(v156) = v34;
              goto LABEL_74;
            }
            v44 = v157 - 1;
            LODWORD(v45) = v44 & (((unsigned int)v50 >> 9) ^ ((unsigned int)v50 >> 4));
            v46 = (__int64 *)(v155 + 16LL * (unsigned int)v45);
            v47 = *v46;
            if ( v50 == *v46 )
            {
LABEL_54:
              v34 = (unsigned __int64)(v46 + 1);
              v48 = *((_DWORD *)v46 + 2) + 1;
              *((_DWORD *)v46 + 2) = v48;
              if ( *(_DWORD *)(v50 + 32) != v48 )
                goto LABEL_55;
            }
            else
            {
              v97 = 1;
              v13 = 0;
              if ( v47 != -4096 )
              {
                while ( 1 )
                {
                  if ( v47 == -8192 && !v13 )
                    v13 = (__int64)v46;
                  v45 = (unsigned int)v44 & ((_DWORD)v45 + v97);
                  v46 = (__int64 *)(v155 + 16 * v45);
                  v47 = *v46;
                  if ( v50 == *v46 )
                    goto LABEL_54;
                  if ( v47 == -4096 )
                    break;
                  ++v97;
                }
                if ( v13 )
                  v46 = (__int64 *)v13;
              }
              v34 = (unsigned int)(v156 + 1);
              if ( 4 * (int)v34 >= 3 * v157 )
                goto LABEL_57;
              if ( v157 - HIDWORD(v156) - (unsigned int)v34 > v157 >> 3 )
                goto LABEL_109;
              v150.m128_i32[0] = v157;
              v98 = (((((v44 >> 1) | v44 | (((v44 >> 1) | v44) >> 2)) >> 4)
                    | (v44 >> 1)
                    | v44
                    | (((v44 >> 1) | v44) >> 2)) >> 8)
                  | (((v44 >> 1) | v44 | (((v44 >> 1) | v44) >> 2)) >> 4)
                  | (v44 >> 1)
                  | v44
                  | (((v44 >> 1) | v44) >> 2);
              v99 = v98 >> 16;
              v100 = ((v98 >> 16) | v98) + 1;
              if ( (unsigned int)v100 < 0x40 )
                LODWORD(v100) = 64;
              v157 = v100;
              v101 = sub_22300B0(16LL * (unsigned int)v100, 8, v99, v34, v49, v13);
              v155 = v101;
              if ( v51 )
              {
                v102 = (_QWORD *)v101;
                v156 = 0;
                v103 = v157;
                v150.m128_u64[0] = 16LL * v150.m128_u32[0];
                v104 = v51 + v150.m128_u64[0];
                v105 = (_QWORD *)(v101 + 16LL * v157);
                if ( (_QWORD *)v101 != v105 )
                {
                  do
                  {
                    *v102 = -4096;
                    v102 += 2;
                  }
                  while ( v105 != v102 );
                }
                v106 = v51;
                v107 = v103 - 1;
                v108 = v101;
                do
                {
                  v109 = *(_QWORD *)v106;
                  if ( *(_QWORD *)v106 != -4096 && v109 != -8192 )
                  {
                    if ( !v103 )
                    {
                      *(_QWORD *)&dword_0 = *(_QWORD *)v106;
                      BUG();
                    }
                    v110 = v107 & (((unsigned int)v109 >> 9) ^ ((unsigned int)v109 >> 4));
                    v111 = v108 + 16LL * v110;
                    v112 = *(_QWORD *)v111;
                    if ( *(_QWORD *)v111 != v109 && v112 != -4096 )
                    {
                      LODWORD(v153) = 1;
                      v152 = 0;
                      v154 = v106;
                      while ( 1 )
                      {
                        if ( !v152 )
                        {
                          if ( v112 != -8192 )
                            v111 = v152;
                          v152 = v111;
                        }
                        v110 = v107 & (v153 + v110);
                        v111 = v108 + 16LL * v110;
                        v112 = *(_QWORD *)v111;
                        if ( v109 == *(_QWORD *)v111 )
                        {
                          v106 = v154;
                          goto LABEL_129;
                        }
                        if ( v112 == -4096 )
                          break;
                        LODWORD(v153) = v153 + 1;
                      }
                      v106 = v154;
                      if ( v152 )
                        v111 = v152;
                    }
LABEL_129:
                    v113 = *(_DWORD *)(v106 + 8);
                    LODWORD(v156) = v156 + 1;
                    *(_QWORD *)v111 = v109;
                    *(_DWORD *)(v111 + 8) = v113;
                  }
                  v106 += 16;
                }
                while ( v104 != v106 );
                operator delete(v51, v150.m128_u64[0], 8);
                v101 = v155;
                v114 = v157;
                LODWORD(v34) = v156 + 1;
              }
              else
              {
                v156 = 0;
                v114 = v157;
                v124 = (_QWORD *)(v101 + 16LL * v157);
                if ( (_QWORD *)v101 != v124 )
                {
                  v125 = (_QWORD *)v101;
                  do
                  {
                    *v125 = -4096;
                    v125 += 2;
                  }
                  while ( v124 != v125 );
                }
                LODWORD(v34) = 1;
              }
              if ( !v114 )
              {
LABEL_251:
                LODWORD(v156) = v156 + 1;
                BUG();
              }
              v115 = v114 - 1;
              v116 = (v114 - 1) & (((unsigned int)v50 >> 9) ^ ((unsigned int)v50 >> 4));
              v46 = (__int64 *)(v101 + 16LL * v116);
              v70 = *v46;
              if ( v50 != *v46 )
              {
                v13 = 1;
                v117 = nullptr;
                if ( v70 == -4096 )
                  goto LABEL_135;
                while ( 1 )
                {
                  if ( v117 || v70 != -8192 )
                    v46 = v117;
                  v143 = v13 + 1;
                  v13 = v115 & (v116 + (_DWORD)v13);
                  v116 = v13;
                  v144 = (__int64 *)(v101 + 16LL * (unsigned int)v13);
                  v70 = *v144;
                  if ( v50 == *v144 )
                  {
                    v46 = (__int64 *)(v101 + 16LL * (unsigned int)v13);
                    goto LABEL_72;
                  }
                  if ( v70 == -4096 )
                    break;
                  LODWORD(v13) = v143;
                  v117 = v46;
                  v46 = v144;
                }
                if ( v46 )
                  goto LABEL_109;
                v46 = (__int64 *)(v101 + 16LL * (unsigned int)v13);
                goto LABEL_135;
              }
LABEL_72:
              LODWORD(v156) = v34;
              if ( v70 != -4096 )
                --HIDWORD(v156);
LABEL_74:
              v34 = (unsigned __int64)(v46 + 1);
              *v46 = v50;
              *((_DWORD *)v46 + 2) = 0;
              *((_DWORD *)v46 + 2) = 1;
              if ( *(_DWORD *)(v50 + 32) != 1 )
              {
LABEL_55:
                if ( (__int64 *)v43 == ++v42 )
                  goto LABEL_78;
                continue;
              }
            }
            break;
          }
          v71 = ptr.m128_u32[2];
          v34 = ptr.m128_u32[3];
          v72 = ptr.m128_u32[2] + 1LL;
          if ( v72 > ptr.m128_u32[3] )
          {
            sub_2237220(&ptr, v159, v72, 8);
            v71 = ptr.m128_u32[2];
          }
          ++v42;
          *(_QWORD *)(ptr.m128_u64[0] + 8 * v71) = v50;
          ++ptr.m128_i32[2];
          if ( (__int64 *)v43 == v42 )
          {
LABEL_78:
            LODWORD(v29) = ptr.m128_i32[2];
            if ( !ptr.m128_i32[2] )
              goto LABEL_79;
            continue;
          }
          goto LABEL_56;
        }
      }
    }
LABEL_35:
    if ( v29 + 1 > ptr.m128_u32[3] )
    {
      sub_2237220(&ptr, v159, v29 + 1, 8);
      v29 = ptr.m128_u32[2];
    }
    *(_QWORD *)(ptr.m128_u64[0] + 8 * v29) = v30;
    v29 = (unsigned int)++ptr.m128_i32[2];
    goto LABEL_38;
  }
LABEL_79:
  v73 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 8) & 4) != 0 )
  {
    v74 = *(const __m128i **)v73;
    v75 = *(_QWORD *)v73 + 8LL * *(unsigned int *)(v73 + 8);
  }
  else
  {
    if ( !v73 )
      goto LABEL_90;
    v74 = v151;
    v75 = a3 + 16;
  }
  if ( (const __m128i *)v75 != v74 )
  {
    v76 = (const __m128i *)(v75 - 8);
    if ( v75 - 8 > (unsigned __int64)v74 )
    {
      v77 = v74;
      v78 = ((v75 - 9 - (unsigned __int64)v74) >> 4) + 1;
      if ( (v75 <= (unsigned __int64)v74 || v75 - 8 * v78 >= (unsigned __int64)v74 + 8 * v78)
        && v75 - 9 - (unsigned __int64)v74 > 0x1F )
      {
        v79 = v75 - 16;
        do
        {
          v80 = (__m128d)_mm_loadu_si128((const __m128i *)v79);
          v81 = (__m128d)_mm_loadu_si128(v77++);
          v79 -= 16LL;
          v77[-1] = (const __m128i)_mm_shuffle_pd(v80, v80, 1);
          *(__m128d *)(v79 + 16) = _mm_shuffle_pd(v81, v81, 1);
        }
        while ( &v74[v78 >> 1] != v77 );
        v82 = &v74->m128i_i64[v78 & 0xFFFFFFFFFFFFFFFELL];
        v83 = &v76->m128i_i64[-(v78 & 0xFFFFFFFFFFFFFFFELL)];
        if ( (v78 & 0xFFFFFFFFFFFFFFFELL) != v78 )
        {
          v84 = *v82;
          *v82 = *v83;
          *v83 = v84;
        }
      }
      else
      {
        do
        {
          v118 = v74->m128i_i64[0];
          v119 = v76->m128i_i64[0];
          v74 = (const __m128i *)((char *)v74 + 8);
          v76 = (const __m128i *)((char *)v76 - 8);
          v74[-1].m128i_i64[1] = v119;
          v76->m128i_i64[1] = v118;
        }
        while ( v76 > v74 );
      }
    }
  }
LABEL_90:
  v85 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 )
  {
    while ( 1 )
    {
      v86 = *(_BYTE *)(v85 + 12) & 3;
      if ( v86 != 2 )
        break;
      v85 = *(_QWORD *)v85;
      if ( !v85 )
        goto LABEL_93;
    }
    if ( v86 )
    {
      v87 = 1;
      v85 = 0;
    }
    else
    {
      v126 = *(_DWORD *)(v85 + 8);
      v127 = *(_QWORD *)(v85 + 16);
      if ( v126 )
      {
        v138 = sub_1021680(*(_QWORD *)(a1 + 88), v126);
        v85 = v127;
        v87 = v138 != 3 && v138 != 0;
      }
      else
      {
        v85 = *(_QWORD *)(v85 + 16);
        v87 = 0;
      }
    }
  }
  else
  {
LABEL_93:
    v87 = 1;
  }
  v88 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 8) & 4) != 0 )
  {
    v89 = *(unsigned int *)(v88 + 8);
    v151 = *(__m128i **)v88;
    v90 = &v151->m128i_i64[v89];
    goto LABEL_96;
  }
  v24 = 0;
  if ( v88 )
  {
    v90 = (__int64 *)(a3 + 16);
LABEL_96:
    v91 = (__int64 *)v151;
    v24 = 0;
    if ( v151 != (__m128i *)v90 )
    {
      do
      {
        v93 = *v91;
        v94 = *(int **)(*v91 + 16);
        if ( v85 != 0 && v94 != (int *)v85 )
        {
          v95 = *(_QWORD *)(*v91 + 16);
          v150.m128_u64[0] = *v91;
          v96 = sub_13F10C0(v85, v95, a1, 1);
          v93 = v150.m128_u64[0];
          if ( !v96 )
            v24 = v85 != 0 && v94 != (int *)v85;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v93 + 24) + 904LL) & 0x40) == 0 )
        {
          if ( *v94 )
          {
            v92 = sub_1021680(*(_QWORD *)(a1 + 88), *v94);
            v87 &= v92 != 3 && v92 != 0;
          }
          else
          {
            v87 = 0;
          }
        }
        ++v91;
        v85 = (__int64)v94;
      }
      while ( v90 != v91 );
      v24 &= v87 ^ 1;
    }
  }
  v25 = (_BYTE *)ptr.m128_u64[0];
  *(_BYTE *)(a3 + 20) = v24;
  if ( v25 != v159 )
    free(v25);
  operator delete(v155, 16LL * v157, 8);
}
