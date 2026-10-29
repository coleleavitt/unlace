unsigned __int64 __fastcall sub_29C700(__int64 *a1, char *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  unsigned __int64 v4; // r14
  char *v5; // r13
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rbx
  _QWORD *v12; // rdi
  __m128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  const char *v17; // rsi
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rbp
  __int64 v24; // rbx
  int v25; // r12d
  __int64 v26; // rax
  const char *v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // r14
  __int64 v30; // r12
  __int64 v31; // rbx
  void *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rbp
  __int64 v35; // r12
  __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // r15
  __int64 v39; // rbp
  __int64 v40; // r14
  void *v41; // rdi
  __int64 *v42; // rbp
  __int64 v43; // r12
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // r12
  __int64 v47; // rbp
  __int64 v48; // rbx
  void *v49; // rdi
  __int64 v51; // r12
  __int64 v52; // r14
  __int64 *v53; // rbp
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rbp
  __int64 k; // rbx
  __int64 v58; // r14
  void *v59; // rdi
  __int64 v60; // rbx
  __int64 v61; // r12
  __int64 v62; // r14
  __int64 v63; // rbp
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // r15
  __int64 v72; // rbx
  __int64 v73; // r12
  __int64 v74; // rbp
  __int64 v75; // r14
  void *v76; // rax
  __int64 v77; // rdi
  __int64 v78; // rbx
  __int64 v79; // r15
  __int64 v80; // r14
  void *v81; // rdi
  __int64 v82; // r14
  __int64 v83; // r8
  __int64 v84; // rcx
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rbp
  __int64 j; // rcx
  __int64 v94; // r12
  __int64 v95; // r8
  void *v96; // rax
  __int64 v97; // r8
  size_t v98; // rdx
  __int64 v99; // rbp
  __int64 v100; // rbx
  __int64 *v101; // r12
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 *v109; // r8
  __int64 v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rsi
  __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // r13
  __int64 v117; // r14
  __int64 v118; // rbp
  void *v119; // rdi
  __int64 *v120; // rbp
  __int64 v121; // r12
  __int64 v122; // rdi
  __int64 v123; // rax
  _QWORD *v124; // r15
  int v125; // r14d
  __int64 v126; // rax
  _QWORD *v127; // rbp
  __int64 i; // r12
  _DWORD *v129; // r10
  int v130; // r11d
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rdx
  time_t v135; // [rsp+8h] [rbp-160h]
  __int64 v136; // [rsp+10h] [rbp-158h]
  __int64 v137; // [rsp+18h] [rbp-150h]
  __int64 v138; // [rsp+18h] [rbp-150h]
  __int64 v139; // [rsp+20h] [rbp-148h]
  int v140; // [rsp+28h] [rbp-140h]
  __int64 v141; // [rsp+28h] [rbp-140h]
  __m128i v142; // [rsp+30h] [rbp-138h] BYREF
  __int64 v143; // [rsp+40h] [rbp-128h]
  __int64 v144; // [rsp+48h] [rbp-120h]
  __int64 v145; // [rsp+50h] [rbp-118h]
  __int64 v146; // [rsp+58h] [rbp-110h]
  __m128i v147; // [rsp+60h] [rbp-108h] BYREF
  int v148; // [rsp+74h] [rbp-F4h]
  __int64 *v149; // [rsp+78h] [rbp-F0h]
  __int64 v150; // [rsp+80h] [rbp-E8h]
  __int64 v151; // [rsp+88h] [rbp-E0h]
  __int64 v152; // [rsp+90h] [rbp-D8h]
  int v153; // [rsp+98h] [rbp-D0h]
  int v154; // [rsp+9Ch] [rbp-CCh]
  size_t n; // [rsp+A0h] [rbp-C8h]
  __int64 v156; // [rsp+A8h] [rbp-C0h]
  __int64 v157; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v158; // [rsp+B8h] [rbp-B0h]
  __int64 v159; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v160; // [rsp+D8h] [rbp-90h]
  __int64 v161; // [rsp+E0h] [rbp-88h]
  __int64 *v162; // [rsp+F0h] [rbp-78h] BYREF
  int v163; // [rsp+F8h] [rbp-70h] BYREF
  __int64 v164; // [rsp+100h] [rbp-68h]
  int *v165; // [rsp+108h] [rbp-60h]
  int *v166; // [rsp+110h] [rbp-58h]
  __int64 v167; // [rsp+118h] [rbp-50h]
  unsigned __int64 v168; // [rsp+128h] [rbp-40h]

  v2.m128i_i64[0] = 0;
  v3 = *((_QWORD *)a2 + 1);
  v4 = (int)v3;
  v168 = __readfsqword(0x28u);
  v5 = a2;
  v140 = v3;
  v154 = v3;
  v157 = 0;
  v158 = 0;
  if ( (_DWORD)v3 )
  {
    v165 = &v163;
    v163 = 0;
    v164 = 0;
    v166 = &v163;
    v167 = 0;
    v149 = &v157;
    v6 = qvector_reserve(&v157, 0, (int)v3, 48);
    v7 = v158.m128i_i64[1];
    v158.m128i_i64[1] = 0;
    v8 = v157;
    if ( v158.m128i_i64[0] - 1 >= 0 )
    {
      v9 = v6 + 8;
      v10 = v7;
      v11 = v158.m128i_i64[0] - 1;
      do
      {
        v16 = *(_QWORD *)(v8 + 16);
        if ( v16 )
        {
          v12 = nullptr;
          v13 = _mm_loadh_ps((const double *)(v8 + 24));
          *(_DWORD *)v9 = *(_DWORD *)(v8 + 8);
          v14 = *(_QWORD *)(v8 + 32);
          *(__m128 *)(v9 + 8) = v13;
          *(_QWORD *)(v9 + 24) = v14;
          *(_QWORD *)(v16 + 8) = v9;
          v15 = *(_QWORD *)(v8 + 40);
          *(_QWORD *)(v8 + 16) = 0;
          *(_QWORD *)(v9 + 32) = v15;
          *(_QWORD *)(v8 + 24) = v8 + 8;
          *(_QWORD *)(v8 + 32) = v8 + 8;
          *(_QWORD *)(v8 + 40) = 0;
        }
        else
        {
          *(_DWORD *)v9 = 0;
          *(_QWORD *)(v9 + 8) = 0;
          *(_QWORD *)(v9 + 16) = v9;
          *(_QWORD *)(v9 + 24) = v9;
          *(_QWORD *)(v9 + 32) = 0;
          v12 = *(_QWORD **)(v8 + 16);
        }
        --v11;
        v8 += 48;
        v9 += 48;
        sub_2920A0(v12);
      }
      while ( v11 != -1 );
      v7 = v10;
      v8 = v157;
      v5 = a2;
    }
    *(double *)v2.m128i_i64 = qfree(v8, nullptr);
    v157 = v6;
    v158.m128i_i64[1] = v7;
    if ( v158.m128i_i64[0] < v4 )
    {
      v123 = v6 + 48 * v158.m128i_i64[0] + 8;
      do
      {
        *(_DWORD *)v123 = 0;
        *(_QWORD *)(v123 + 8) = 0;
        *(_QWORD *)(v123 + 16) = v123;
        *(_QWORD *)(v123 + 24) = v123;
        v123 += 48;
        *(_QWORD *)(v123 - 16) = 0;
      }
      while ( v123 != v6 + 48 * v4 + 8 );
    }
    v158.m128i_i64[0] = v4;
    sub_2920A0(nullptr);
    if ( v140 > 0 )
    {
      v138 = 0;
      v136 = 0;
      do
      {
        v124 = (_QWORD *)(*(_QWORD *)v5 + v138);
        v125 = 0;
        v126 = 0;
        v127 = (_QWORD *)(v157 + v136);
        for ( i = v157 + v136 + 8; (unsigned __int64)v125 < v124[1]; v126 = v125 )
        {
          v129 = (_DWORD *)i;
          v130 = *(_DWORD *)(*v124 + 4 * v126);
          LODWORD(v159) = v130;
          v131 = v127[2];
          if ( !v131 )
            goto LABEL_160;
          do
          {
            while ( 1 )
            {
              v132 = *(_QWORD *)(v131 + 16);
              v133 = *(_QWORD *)(v131 + 24);
              if ( v130 > *(_DWORD *)(v131 + 32) )
                break;
              v129 = (_DWORD *)v131;
              v131 = *(_QWORD *)(v131 + 16);
              if ( !v132 )
                goto LABEL_158;
            }
            v131 = *(_QWORD *)(v131 + 24);
          }
          while ( v133 );
LABEL_158:
          if ( (_DWORD *)i == v129 || v130 < v129[8] )
          {
LABEL_160:
            v162 = &v159;
            v129 = sub_2900D0(v127, (__int64)v129, (int **)&v162);
          }
          v129[9] = v125++;
        }
        v136 += 48;
        v138 += 32;
      }
      while ( 16 * (3LL * (unsigned int)(v140 - 1) + 3) != v136 );
    }
  }
  else
  {
    v149 = &v157;
  }
  v17 = v5;
  v142.m128i_i32[0] = sub_2971E0(a1, v5, v149, *(double *)v2.m128i_i64);
  v135 = time(nullptr);
  if ( v142.m128i_i32[0] > 0 )
  {
    v148 = 0;
    v18 = v140 - 2;
    v151 = 32 * v18;
    v19 = v140 - 1;
    v152 = 48 * v18;
    v141 = 32 * ((unsigned int)(v140 - 2) + 2LL);
    v20 = v19 - v18;
    v153 = v19;
    v137 = 32 * v20;
    v139 = 48 * v20;
    while ( 1 )
    {
      v161 = 0;
      v21 = *((_QWORD *)v5 + 1);
      v144 = 0;
      v143 = v21;
      if ( v21 )
      {
        v71 = v21;
        v144 = qalloc_or_throw(32 * v21);
        v72 = v144;
        v73 = 0;
        v161 = v71;
        do
        {
          v74 = *(_QWORD *)v5 + 32 * v73;
          *(_QWORD *)v72 = 0;
          *(_OWORD *)(v72 + 8) = 0;
          v75 = *(_QWORD *)(v74 + 8);
          if ( v75 )
          {
            v76 = (void *)qalloc_or_throw(4 * v75);
            *(_QWORD *)v72 = v76;
            *(_QWORD *)(v72 + 16) = v75;
            memcpy(v76, *(const void **)v74, 4 * v75);
            *(_QWORD *)(v72 + 8) = v75;
          }
          ++v73;
          v72 += 32;
          *(_QWORD *)(v72 - 8) = *(_QWORD *)(v74 + 24);
        }
        while ( v143 != v73 );
      }
      v22 = v158.m128i_i64[0];
      v164 = 0;
      v146 = 0;
      if ( v158.m128i_i64[0] )
      {
        v146 = qalloc_or_throw(48 * v158.m128i_i64[0]);
        v60 = v146 + 8;
        v61 = 0;
        v164 = v22;
        v62 = -8 - v146;
        do
        {
          v63 = v157 + v62 + v60;
          *(_QWORD *)(v60 + 16) = v60;
          *(_DWORD *)v60 = 0;
          *(_QWORD *)(v60 + 8) = 0;
          *(_QWORD *)(v60 + 24) = v60;
          *(_QWORD *)(v60 + 32) = 0;
          v64 = *(_QWORD *)(v63 + 16);
          if ( v64 )
          {
            v65 = sub_292270(v64, v60);
            v66 = v65;
            do
            {
              v67 = v65;
              v65 = *(_QWORD *)(v65 + 16);
            }
            while ( v65 );
            *(_QWORD *)(v60 + 16) = v67;
            v68 = v66;
            do
            {
              v69 = v68;
              v68 = *(_QWORD *)(v68 + 24);
            }
            while ( v68 );
            *(_QWORD *)(v60 + 24) = v69;
            v70 = *(_QWORD *)(v63 + 40);
            *(_QWORD *)(v60 + 8) = v66;
            *(_QWORD *)(v60 + 32) = v70;
          }
          ++v61;
          v60 += 48;
        }
        while ( v22 != v61 );
      }
      v23 = v151;
      v24 = v152;
      v25 = v153;
      do
      {
        if ( v25 <= 0 )
          break;
        --v25;
        sub_2972A0(
          a1,
          *(double *)v2.m128i_i64,
          v23 + v137 + *(_QWORD *)v5,
          v157 + v24 + v139,
          (_QWORD *)(*(_QWORD *)v5 + v23),
          (_QWORD *)(v157 + v24),
          0);
        v24 -= 48;
        v23 -= 32;
      }
      while ( time(nullptr) - v135 <= 10 );
      v17 = (const char *)v135;
      if ( time(nullptr) - v135 > 10 )
        break;
      v26 = sub_2971E0(a1, v5, v149, *(double *)v2.m128i_i64);
      v17 = (const char *)v142.m128i_u32[0];
      v150 = v26;
      v147.m128i_i32[0] = v26;
      if ( (int)v26 < v142.m128i_i32[0] )
      {
        v145 = 0;
        v33 = *((_QWORD *)v5 + 1);
        if ( v33 )
        {
          v145 = qalloc_or_throw(32 * v33);
          v92 = v145;
          for ( j = 0; j != v33; ++j )
          {
            v94 = *(_QWORD *)v5 + 32 * j;
            *(_QWORD *)v92 = 0;
            *(_OWORD *)(v92 + 8) = 0;
            v95 = *(_QWORD *)(v94 + 8);
            if ( v95 )
            {
              v142.m128i_i64[0] = *(_QWORD *)(v94 + 8);
              v156 = j;
              n = 4 * v95;
              v96 = (void *)qalloc_or_throw(4 * v95);
              v97 = v142.m128i_i64[0];
              *(_QWORD *)v92 = v96;
              v98 = n;
              *(_QWORD *)(v92 + 16) = v97;
              v17 = *(const char **)v94;
              memcpy(v96, *(const void **)v94, v98);
              j = v156;
              *(_QWORD *)(v92 + 8) = v142.m128i_i64[0];
            }
            v92 += 32;
            *(_QWORD *)(v92 - 8) = *(_QWORD *)(v94 + 24);
          }
        }
        if ( v144 )
        {
          v51 = 0;
          v52 = v143;
          v53 = (__int64 *)v144;
          if ( v143 )
          {
            do
            {
              v54 = *v53;
              if ( *v53 )
              {
                v53[1] = 0;
                qfree(v54, v17);
              }
              ++v51;
              v53 += 4;
            }
            while ( v52 != v51 );
          }
          *(double *)v2.m128i_i64 = qfree(v144, v17);
        }
        v34 = v158.m128i_i64[0];
        v161 = v33;
        v35 = 0;
        if ( v158.m128i_i64[0] )
        {
          v35 = qalloc_or_throw(48 * v158.m128i_i64[0]);
          v82 = v35 + 8;
          v83 = 0;
          do
          {
            v84 = v157 + 48 * v83;
            *(_QWORD *)(v82 + 16) = v82;
            *(_DWORD *)v82 = 0;
            *(_QWORD *)(v82 + 8) = 0;
            *(_QWORD *)(v82 + 24) = v82;
            *(_QWORD *)(v82 + 32) = 0;
            v85 = *(_QWORD *)(v84 + 16);
            v143 = v84;
            if ( v85 )
            {
              v142.m128i_i64[0] = v83;
              v86 = sub_292270(v85, v82);
              v87 = v143;
              v83 = v142.m128i_i64[0];
              v88 = v86;
              do
              {
                v89 = v88;
                v88 = *(_QWORD *)(v88 + 16);
              }
              while ( v88 );
              *(_QWORD *)(v82 + 16) = v89;
              v90 = v86;
              do
              {
                v17 = (const char *)v90;
                v90 = *(_QWORD *)(v90 + 24);
              }
              while ( v90 );
              *(_QWORD *)(v82 + 24) = v17;
              v91 = *(_QWORD *)(v87 + 40);
              *(_QWORD *)(v82 + 8) = v86;
              *(_QWORD *)(v82 + 32) = v91;
            }
            ++v83;
            v82 += 48;
          }
          while ( v34 != v83 );
        }
        if ( v146 )
        {
          v55 = v146;
          if ( v22 )
          {
            v143 = v34;
            v56 = v146;
            v142.m128i_i64[0] = v33;
            for ( k = 0; k != v22; ++k )
            {
              v58 = *(_QWORD *)(v56 + 16);
              while ( v58 )
              {
                sub_2920A0(*(_QWORD **)(v58 + 24));
                v59 = (void *)v58;
                v58 = *(_QWORD *)(v58 + 16);
                v17 = (const char *)&qword_28;
                operator delete(v59, 0x28u);
              }
              v56 += 48;
            }
            v34 = v143;
            v33 = v142.m128i_i64[0];
          }
          *(double *)v2.m128i_i64 = qfree(v146, v17, v55, *(double *)v2.m128i_i64);
        }
        v164 = v34;
        if ( !(_DWORD)v150 )
          goto LABEL_133;
        LODWORD(v143) = 0;
      }
      else
      {
        v27 = (const char *)&v159;
        v159 = v144;
        v160 = v143;
        sub_290300((__int64 *)v5, &v159);
        v145 = 0;
        if ( v22 )
        {
          v145 = qalloc_or_throw(48 * v22);
          v99 = v145 + 8;
          v100 = 0;
          v101 = (__int64 *)(v146 + 16);
          do
          {
            *(_DWORD *)v99 = 0;
            *(_QWORD *)(v99 + 8) = 0;
            *(_QWORD *)(v99 + 16) = v99;
            *(_QWORD *)(v99 + 24) = v99;
            *(_QWORD *)(v99 + 32) = 0;
            if ( *v101 )
            {
              v27 = (const char *)v99;
              v102 = sub_292270(*v101, v99);
              v103 = v102;
              do
              {
                v104 = v103;
                v103 = *(_QWORD *)(v103 + 16);
              }
              while ( v103 );
              *(_QWORD *)(v99 + 16) = v104;
              v105 = v102;
              do
              {
                v106 = v105;
                v105 = *(_QWORD *)(v105 + 24);
              }
              while ( v105 );
              *(_QWORD *)(v99 + 24) = v106;
              v107 = v101[3];
              *(_QWORD *)(v99 + 8) = v102;
              *(_QWORD *)(v99 + 32) = v107;
            }
            ++v100;
            v99 += 48;
            v101 += 6;
          }
          while ( v22 != v100 );
        }
        v28 = v157;
        v2 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
        if ( v157 )
        {
          v29 = v158.m128i_i64[0];
          if ( v158.m128i_i64[0] )
          {
            v30 = 0;
            v147 = v2;
            do
            {
              v31 = *(_QWORD *)(v28 + 48 * v30 + 16);
              if ( v31 )
              {
                do
                {
                  sub_2920A0(*(_QWORD **)(v31 + 24));
                  v32 = (void *)v31;
                  v31 = *(_QWORD *)(v31 + 16);
                  v27 = (const char *)&qword_28;
                  operator delete(v32, 0x28u);
                }
                while ( v31 );
                v28 = v157;
              }
              ++v30;
            }
            while ( v29 != v30 );
            v2 = _mm_load_si128(&v147);
          }
          v147 = v2;
          v158.m128i_i64[0] = 0;
          qfree(v28, v27);
          v2 = _mm_load_si128(&v147);
        }
        v33 = v143;
        v34 = v22;
        LODWORD(v143) = 1;
        v35 = v146;
        v158 = v2;
        v157 = v145;
        v145 = v144;
        v147.m128i_i32[0] = v142.m128i_i32[0];
      }
      v17 = (const char *)v135;
      if ( time(nullptr) - v135 > 10 )
        goto LABEL_133;
      v36 = 32;
      v37 = 48;
      if ( v154 > 1 )
      {
        do
        {
          sub_2972A0(
            a1,
            *(double *)v2.m128i_i64,
            *(_QWORD *)v5 + v36 - 32,
            v157 + v37 - 48,
            (_QWORD *)(*(_QWORD *)v5 + v36),
            (_QWORD *)(v157 + v37),
            1);
          v37 += 48;
          v36 += 32;
        }
        while ( v141 != v36 );
      }
      v142.m128i_i32[0] = sub_2971E0(a1, v5, v149, *(double *)v2.m128i_i64);
      if ( v142.m128i_i32[0] >= v147.m128i_i32[0] )
      {
        v17 = (const char *)&v159;
        v160 = v33;
        v159 = v145;
        sub_290300((__int64 *)v5, &v159);
        v146 = 0;
        if ( v34 )
        {
          v146 = qalloc_or_throw(48 * v34);
          v108 = v146 + 8;
          v109 = (__int64 *)(v35 + 16);
          do
          {
            *(_DWORD *)v108 = 0;
            *(_QWORD *)(v108 + 8) = 0;
            *(_QWORD *)(v108 + 16) = v108;
            *(_QWORD *)(v108 + 24) = v108;
            *(_QWORD *)(v108 + 32) = 0;
            v110 = *v109;
            if ( *v109 )
            {
              v144 = (__int64)v109;
              v142.m128i_i64[0] = v108;
              v111 = sub_292270(v110, v108);
              v108 = v142.m128i_i64[0];
              v109 = (__int64 *)v144;
              v112 = v111;
              do
              {
                v113 = v112;
                v112 = *(_QWORD *)(v112 + 16);
              }
              while ( v112 );
              *(_QWORD *)(v142.m128i_i64[0] + 16) = v113;
              v114 = v111;
              do
              {
                v17 = (const char *)v114;
                v114 = *(_QWORD *)(v114 + 24);
              }
              while ( v114 );
              *(_QWORD *)(v108 + 24) = v17;
              v115 = v109[3];
              *(_QWORD *)(v108 + 8) = v111;
              *(_QWORD *)(v108 + 32) = v115;
            }
            v109 += 6;
            v108 += 48;
          }
          while ( (__int64 *)(v35 + 48 * v34 + 16) != v109 );
        }
        v77 = v157;
        v2 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)v34);
        if ( v157 )
        {
          if ( v158.m128i_i64[0] )
          {
            v144 = v33;
            v142 = v2;
            v78 = 0;
            v79 = v158.m128i_i64[0];
            do
            {
              v80 = *(_QWORD *)(v77 + 48 * v78 + 16);
              if ( v80 )
              {
                do
                {
                  sub_2920A0(*(_QWORD **)(v80 + 24));
                  v81 = (void *)v80;
                  v80 = *(_QWORD *)(v80 + 16);
                  v17 = (const char *)&qword_28;
                  operator delete(v81, 0x28u);
                }
                while ( v80 );
                v77 = v157;
              }
              ++v78;
            }
            while ( v79 != v78 );
            v2 = _mm_load_si128(&v142);
            v33 = v144;
          }
          v142 = v2;
          v158.m128i_i64[0] = 0;
          qfree(v77, v17);
          v2 = _mm_load_si128(&v142);
        }
        v158 = v2;
        v157 = v146;
        if ( (_DWORD)v143 == 1 )
          goto LABEL_133;
        v142.m128i_i32[0] = v147.m128i_i32[0];
      }
      v17 = (const char *)v135;
      if ( time(nullptr) - v135 > 10 )
        goto LABEL_133;
      if ( v35 )
      {
        if ( v34 )
        {
          v38 = v35;
          v39 = v35 + 48 * v34;
          do
          {
            v40 = *(_QWORD *)(v38 + 16);
            while ( v40 )
            {
              sub_2920A0(*(_QWORD **)(v40 + 24));
              v41 = (void *)v40;
              v40 = *(_QWORD *)(v40 + 16);
              v17 = (const char *)&qword_28;
              operator delete(v41, 0x28u);
            }
            v38 += 48;
          }
          while ( v38 != v39 );
        }
        *(double *)v2.m128i_i64 = qfree(v35, v17);
      }
      if ( v145 )
      {
        v42 = (__int64 *)v145;
        v43 = 0;
        if ( v33 )
        {
          do
          {
            v44 = *v42;
            if ( *v42 )
            {
              v42[1] = 0;
              *(double *)v2.m128i_i64 = qfree(v44, v17, *(double *)v2.m128i_i64);
            }
            ++v43;
            v42 += 4;
          }
          while ( v43 != v33 );
        }
        *(double *)v2.m128i_i64 = qfree(v145, v17, *(double *)v2.m128i_i64);
      }
      if ( ++v148 == 10 || v142.m128i_i32[0] <= 0 )
        goto LABEL_49;
    }
    v35 = v146;
    v34 = v22;
    v33 = v143;
    v145 = v144;
LABEL_133:
    if ( v35 )
    {
      if ( v34 )
      {
        v116 = v35;
        v117 = v35 + 48 * v34;
        do
        {
          v118 = *(_QWORD *)(v116 + 16);
          while ( v118 )
          {
            sub_2920A0(*(_QWORD **)(v118 + 24));
            v119 = (void *)v118;
            v118 = *(_QWORD *)(v118 + 16);
            v17 = (const char *)&qword_28;
            operator delete(v119, 0x28u);
          }
          v116 += 48;
        }
        while ( v116 != v117 );
      }
      qfree(v35, v17);
    }
    if ( v145 )
    {
      v120 = (__int64 *)v145;
      v121 = 0;
      if ( v33 )
      {
        do
        {
          v122 = *v120;
          if ( *v120 )
          {
            v120[1] = 0;
            qfree(v122, v17);
          }
          ++v121;
          v120 += 4;
        }
        while ( v33 != v121 );
      }
      qfree(v145, v17);
    }
  }
LABEL_49:
  v45 = v157;
  if ( v157 )
  {
    v46 = v158.m128i_i64[0];
    if ( v158.m128i_i64[0] )
    {
      v47 = 0;
      do
      {
        v48 = *(_QWORD *)(v45 + 48 * v47 + 16);
        if ( v48 )
        {
          do
          {
            sub_2920A0(*(_QWORD **)(v48 + 24));
            v49 = (void *)v48;
            v48 = *(_QWORD *)(v48 + 16);
            v17 = (const char *)&qword_28;
            operator delete(v49, 0x28u);
          }
          while ( v48 );
          v45 = v157;
        }
        ++v47;
      }
      while ( v46 != v47 );
    }
    v158.m128i_i64[0] = 0;
    qfree(v45, v17);
  }
  return v168 - __readfsqword(0x28u);
}
