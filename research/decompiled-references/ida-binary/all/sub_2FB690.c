unsigned __int64 __fastcall sub_2FB690(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, signed __int64 a5, __int64 a6)
{
  __m128i *v7; // rbx
  __int64 v8; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  size_t v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // r15
  bool v16; // dl
  __int64 v17; // rcx
  size_t v18; // rsi
  _QWORD *v19; // r12
  __int64 v20; // r12
  unsigned __int64 v21; // rdx
  size_t v22; // r13
  size_t v23; // r13
  size_t v24; // r13
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __int64 v27; // rbp
  size_t v28; // r8
  __int64 v29; // rdx
  const char *v30; // rsi
  _QWORD *v31; // rbp
  __m128i v32; // xmm1
  __m128i v33; // xmm2
  __m128i v34; // xmm3
  void *v35; // rax
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  signed __int64 v43; // rbp
  _QWORD *v44; // r12
  __int64 v45; // r9
  __int64 v46; // rcx
  size_t v47; // rdx
  size_t v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  size_t v51; // rdx
  __int64 v52; // rdi
  void *v53; // rax
  size_t v54; // rdx
  __int64 v55; // rcx
  size_t v56; // r12
  size_t v57; // r15
  void *v58; // rax
  const void *v59; // rsi
  void *v60; // rax
  const void *v61; // rsi
  __int64 v62; // rax
  __m128i v63; // xmm0
  __int64 v64; // r14
  __m128i v65; // xmm4
  _QWORD *v66; // rbp
  __int64 v67; // rax
  __m128i v68; // xmm0
  __int64 v69; // rax
  __m128i v70; // xmm4
  __int64 v71; // rax
  __int64 *v72; // rbx
  size_t v73; // rbp
  __int64 v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // r12
  __m128i v77; // xmm0
  __int64 v78; // rdi
  __int64 v79; // r12
  __m128i v80; // xmm0
  __int64 v81; // rdi
  __int64 v82; // r12
  __m128i v83; // xmm0
  __int64 v84; // rdx
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rdi
  void *v88; // rax
  __int64 v89; // rdi
  void *v90; // rax
  __m128 v91; // xmm0
  __int64 v92; // rax
  __m128i v93; // xmm0
  __m128i v94; // xmm0
  bool v95; // zf
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // r12
  size_t v100; // r13
  size_t v101; // r13
  size_t v102; // r13
  __int64 v103; // rdi
  void *v104; // rax
  size_t v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rdi
  void *v108; // rax
  size_t v109; // rdx
  __int64 v110; // rcx
  _QWORD *v111; // rbp
  unsigned __int64 v112; // r10
  size_t v113; // r11
  unsigned __int64 v114; // r10
  size_t v115; // r11
  int v116; // eax
  unsigned __int64 v117; // r10
  size_t v118; // r11
  void *v119; // rax
  unsigned __int64 *v120; // rdx
  signed __int64 v121; // rbp
  _QWORD *v122; // rbx
  signed __int64 v123; // r12
  __int64 v124; // rdi
  __int64 v125; // rdi
  __int64 v126; // rdi
  unsigned __int64 v127; // rax
  __int64 v128; // rcx
  signed __int64 v129; // r12
  __int64 v130; // rbp
  unsigned __int64 v131; // rbx
  __int64 v132; // rdi
  __int64 v133; // rdi
  __int64 v134; // rdi
  void *v135; // rax
  void *v136; // rax
  void *v137; // rax
  void *v138; // rax
  void *v139; // rax
  __int64 v140; // rsi
  __int64 v141; // rsi
  void *v142; // rax
  void *v143; // rax
  void *v144; // rax
  __int64 v145; // rsi
  __int64 v146; // [rsp+8h] [rbp-160h] BYREF
  __m128i v147; // [rsp+10h] [rbp-158h] BYREF
  int v148; // [rsp+20h] [rbp-148h]
  int v149; // [rsp+24h] [rbp-144h]
  __int64 v150; // [rsp+28h] [rbp-140h]
  __m128i v151; // [rsp+30h] [rbp-138h] BYREF
  __m128i v152; // [rsp+40h] [rbp-128h] BYREF
  __m128i v153; // [rsp+50h] [rbp-118h] BYREF
  void *v154; // [rsp+60h] [rbp-108h]
  size_t n; // [rsp+68h] [rbp-100h]
  __m128i v156; // [rsp+70h] [rbp-F8h] BYREF
  __m128i v157; // [rsp+80h] [rbp-E8h] BYREF
  __m128i v158; // [rsp+90h] [rbp-D8h] BYREF
  signed __int64 v159; // [rsp+A0h] [rbp-C8h]
  size_t v160; // [rsp+A8h] [rbp-C0h]
  __int64 v161; // [rsp+B8h] [rbp-B0h] BYREF
  unsigned __int64 *v162; // [rsp+C0h] [rbp-A8h]
  unsigned __int64 v163; // [rsp+C8h] [rbp-A0h] BYREF
  __int128 v164; // [rsp+D0h] [rbp-98h] BYREF
  unsigned __int64 v165; // [rsp+128h] [rbp-40h]

  v7 = a1;
  v8 = a1->m128i_i64[0];
  v165 = __readfsqword(0x28u);
  if ( !v8 || (v10 = *(_QWORD *)a3, *(int *)v8 > 1) )
  {
LABEL_3:
    v11 = *(_QWORD *)a3;
    v12 = *(_QWORD *)(a3 + 16);
    v146 = 0;
    v147.m128i_i64[0] = v11;
    if ( v12 )
    {
      v60 = (void *)qalloc_or_throw(v12);
      v61 = *(const void **)(a3 + 8);
      v146 = (__int64)v60;
      memcpy(v60, v61, v12);
    }
    v154 = nullptr;
    v13 = *(_QWORD *)(a3 + 40);
    v151.m128i_i64[0] = v13;
    if ( v13 )
    {
      v57 = v13;
      v58 = (void *)qalloc_or_throw(v13);
      v59 = *(const void **)(a3 + 32);
      v154 = v58;
      memcpy(v58, v59, v57);
    }
    v14 = *(_QWORD *)(a3 + 64);
    v15 = nullptr;
    v152.m128i_i64[0] = v14;
    if ( v14 )
    {
      v56 = v14;
      v15 = (void *)qalloc_or_throw(v14);
      memcpy(v15, *(const void **)(a3 + 56), v56);
    }
    v16 = a1[1].m128i_i64[0] != 0;
    v17 = a1->m128i_i64[0];
    v150 = *(_QWORD *)(a3 + 80);
    v148 = *(_DWORD *)(a3 + 88);
    v149 = *(_DWORD *)(a3 + 92);
    v153.m128i_i8[0] = a2 == 0 && v16;
    if ( !v153.m128i_i8[0] )
    {
      if ( v17 )
      {
        if ( *(int *)v17 > 1 )
        {
LABEL_12:
          sub_2F8810(v7, 0, 1, 0, a5, a6);
          a5 = v7->m128i_i64[1];
LABEL_13:
          v18 = v7[1].m128i_u64[0];
          v19 = (_QWORD *)a5;
          goto LABEL_26;
        }
        v19 = (_QWORD *)a1->m128i_i64[1];
        v37 = *(_QWORD *)(v17 + 8);
        v18 = v7[1].m128i_u64[0];
        a5 = v7->m128i_i64[1] - ((v17 + 31) & 0xFFFFFFFFFFFFFFF0LL);
        v38 = 0xAAAAAAAAAAAAAAABLL * (a5 >> 5);
        if ( (__int64)(v37 - v18 - v38) <= 0 )
        {
          if ( a5 <= 0 )
            goto LABEL_12;
          v39 = 2 * v18;
          if ( (__int64)(3 * v18) >= 2 * v37 )
            goto LABEL_12;
          v40 = 0;
          goto LABEL_38;
        }
      }
      else
      {
        sub_2F8810(a1, 0, 1, 0, a5, a6);
        v19 = (_QWORD *)a1->m128i_i64[1];
        v18 = a1[1].m128i_u64[0];
      }
LABEL_26:
      v25 = _mm_loadl_epi64(&v152);
      v26 = _mm_loadl_epi64(&v151);
      v27 = 12 * v18;
      v28 = a2 + 1 - v18;
      v29 = v18 + 1;
      v30 = (const char *)(v18 - a2);
      v31 = &v19[v27];
      v32 = _mm_unpacklo_epi64(v25, v25);
      v33 = _mm_unpacklo_epi64(v26, v26);
      v34 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
      if ( (__int64)v30 <= 0 && v28 )
      {
        v35 = v154;
        *((__m128i *)v31 + 1) = v34;
        *(__m128i *)(v31 + 5) = v33;
        v31[4] = v35;
        *(__m128 *)v31 = _mm_loadh_ps((const double *)&v146);
      }
      else
      {
        v62 = *(v31 - 8);
        v63 = _mm_loadu_si128((const __m128i *)v31 - 6);
        *(v31 - 8) = 0;
        v64 = 0;
        v65 = _mm_loadu_si128((const __m128i *)(v31 - 7));
        *(v31 - 11) = 0;
        v66 = v31 - 24;
        v66[28] = v62;
        v67 = v66[19];
        *((__m128i *)v66 + 12) = v63;
        v68 = _mm_loadu_si128((const __m128i *)v66 + 7);
        v66[31] = v67;
        v69 = v66[22];
        *(__m128i *)(v66 + 29) = v65;
        v70 = _mm_loadu_si128((const __m128i *)v66 + 10);
        v66[34] = v69;
        v71 = v66[23];
        *((__m128i *)v66 + 13) = v68;
        *((_OWORD *)v66 + 7) = 0;
        *(_OWORD *)(v66 + 17) = 0;
        v66[19] = 0;
        *((__m128i *)v66 + 16) = v70;
        *((_OWORD *)v66 + 10) = 0;
        v66[35] = v71;
        if ( v28 )
        {
          v152.m128i_i64[0] = v29;
          v153.m128i_i64[0] = (__int64)v19;
          n = (size_t)v7;
          v72 = v66;
          v73 = v28;
          v156 = v32;
          v157 = v33;
          v158 = v34;
          do
          {
            v74 = *v72;
            v75 = v72[13];
            v76 = v72[1];
            v77 = _mm_loadu_si128((const __m128i *)v72 + 1);
            *((_OWORD *)v72 + 1) = 0;
            v72[12] = v74;
            v72[1] = 0;
            if ( v75 )
            {
              v72[14] = 0;
              v151 = v77;
              qfree(v75, v30);
              v77 = _mm_load_si128(&v151);
            }
            v78 = v72[16];
            v72[13] = v76;
            *((__m128i *)v72 + 7) = v77;
            v79 = v72[4];
            v80 = _mm_loadu_si128((const __m128i *)(v72 + 5));
            v72[4] = 0;
            *(_OWORD *)(v72 + 5) = 0;
            if ( v78 )
            {
              v72[17] = 0;
              v151 = v80;
              qfree(v78, v30);
              v80 = _mm_load_si128(&v151);
            }
            v81 = v72[19];
            v72[16] = v79;
            *(__m128i *)(v72 + 17) = v80;
            v82 = v72[7];
            v83 = _mm_loadu_si128((const __m128i *)v72 + 4);
            v72[7] = 0;
            *((_OWORD *)v72 + 4) = 0;
            if ( v81 )
            {
              v72[20] = 0;
              v151 = v83;
              qfree(v81, v30);
              v83 = _mm_load_si128(&v151);
            }
            v84 = v72[10];
            --v64;
            v72 -= 12;
            v72[31] = v82;
            *((__m128i *)v72 + 16) = v83;
            v72[34] = v84;
            *((_DWORD *)v72 + 70) = *((_DWORD *)v72 + 46);
            *((_DWORD *)v72 + 71) = *((_DWORD *)v72 + 47);
          }
          while ( v73 != v64 );
          v29 = v152.m128i_i64[0];
          v19 = (_QWORD *)v153.m128i_i64[0];
          v7 = (__m128i *)n;
          v32 = _mm_load_si128(&v156);
          v33 = _mm_load_si128(&v157);
          v34 = _mm_load_si128(&v158);
        }
        v31 = &v19[12 * a2];
        v85 = v31[1];
        *v31 = v147.m128i_i64[0];
        if ( v85 )
        {
          v31[2] = 0;
          v147.m128i_i64[0] = v29;
          v153 = v34;
          v152 = v33;
          v151 = v32;
          qfree(v85, v30);
          v34 = _mm_load_si128(&v153);
          v33 = _mm_load_si128(&v152);
          v32 = _mm_load_si128(&v151);
          v29 = v147.m128i_i64[0];
        }
        v86 = v146;
        v87 = v31[4];
        *((__m128i *)v31 + 1) = v34;
        v31[1] = v86;
        if ( v87 )
        {
          v31[5] = 0;
          v146 = v29;
          v151 = v33;
          v147 = v32;
          qfree(v87, v30);
          v33 = _mm_load_si128(&v151);
          v32 = _mm_load_si128(&v147);
          v29 = v146;
        }
        v88 = v154;
        v89 = v31[7];
        *(__m128i *)(v31 + 5) = v33;
        v31[4] = v88;
        if ( v89 )
        {
          v31[8] = 0;
          v146 = v29;
          v147 = v32;
          qfree(v89, v30);
          v32 = _mm_load_si128(&v147);
          v29 = v146;
        }
      }
      v31[7] = v15;
      *((__m128i *)v31 + 4) = v32;
      v31[10] = v150;
      *((_DWORD *)v31 + 22) = v148;
      *((_DWORD *)v31 + 23) = v149;
      v7->m128i_i64[1] = (__int64)v19;
      v7[1].m128i_i64[0] = v29;
      return v165 - __readfsqword(0x28u);
    }
    if ( !v17 || *(int *)v17 > 1 )
      goto LABEL_71;
    a5 = a1->m128i_i64[1];
    v96 = a5 - ((v17 + 31) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v96 > 0 )
      goto LABEL_72;
    v97 = *(_QWORD *)(v17 + 8);
    v18 = a1[1].m128i_u64[0];
    v38 = 0xAAAAAAAAAAAAAAABLL * (v96 >> 5);
    if ( (__int64)(v97 - v18 - v38) <= 0 || (v39 = 2 * v18, a6 = 3 * v18, (__int64)(3 * v18) >= v97) )
    {
LABEL_71:
      sub_2F8810(a1, 1, 1, 0, a5, a6);
      a5 = a1->m128i_i64[1];
      goto LABEL_72;
    }
    v19 = (_QWORD *)a1->m128i_i64[1];
    v98 = (__int64)(v97 - v18 - 1) / 2;
    if ( v98 < 0 )
      v98 = 0;
    v40 = v98 + 1;
LABEL_38:
    v41 = v40 - v38;
    a5 = (signed __int64)&v19[12 * v41];
    if ( !v18 || (_QWORD *)a5 == v19 || !v19 || !a5 )
      goto LABEL_74;
    if ( a5 < (unsigned __int64)v19 )
    {
      n = (size_t)&v19[12 * v41];
      sub_2FB180(v19, (const void *)v18, (_QWORD *)n);
      a5 = n;
      goto LABEL_74;
    }
    *(_QWORD *)&v164 = 0;
    v42 = 32 * (v18 + v39);
    v162 = (unsigned __int64 *)&v161;
    v43 = a5 + v42;
    v44 = &v19[(unsigned __int64)v42 / 8];
    v161 = a5 + v42;
    v163 = a5 + v42;
    if ( a5 >= (unsigned __int64)v44 )
    {
      v159 = (signed __int64)v44;
      v45 = a5;
      if ( a5 == v43 )
      {
        v120 = &v163;
        *(_QWORD *)&v164 = a5;
        v162 = &v163;
LABEL_117:
        v127 = *v120;
        if ( v163 < *v120 )
        {
          v128 = 1;
        }
        else
        {
          v128 = -1;
          if ( v163 == *v120 )
            goto LABEL_74;
        }
        n = (size_t)v7;
        v129 = a5;
        v130 = -96 * v128;
        do
        {
          *v120 = v130 + v127;
          v131 = *v162;
          v132 = *(_QWORD *)(*v162 - 40);
          if ( v132 )
          {
            *(_QWORD *)(v131 - 32) = 0;
            qfree(v132, (const char *)v18);
          }
          v133 = *(_QWORD *)(v131 - 64);
          if ( v133 )
          {
            *(_QWORD *)(v131 - 56) = 0;
            qfree(v133, (const char *)v18);
          }
          v134 = *(_QWORD *)(v131 - 88);
          if ( v134 )
          {
            *(_QWORD *)(v131 - 80) = 0;
            qfree(v134, (const char *)v18);
          }
          v120 = v162;
          v127 = *v162;
        }
        while ( *v162 != v163 );
        v7 = (__m128i *)n;
        a5 = v129;
LABEL_74:
        v95 = v153.m128i_i8[0] == 0;
        v7->m128i_i64[1] = a5;
        if ( v95 )
          goto LABEL_13;
LABEL_72:
        v90 = v154;
        *(_QWORD *)(a5 - 40) = v15;
        v91 = _mm_loadh_ps((const double *)&v146);
        *(_QWORD *)(a5 - 64) = v90;
        v92 = v150;
        *(__m128 *)(a5 - 96) = v91;
        *(_QWORD *)(a5 - 16) = v92;
        LODWORD(v92) = v148;
        *(__m128i *)(a5 - 80) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
        v93 = _mm_loadl_epi64(&v151);
        *(_DWORD *)(a5 - 8) = v92;
        LODWORD(v92) = v149;
        *(__m128i *)(a5 - 56) = _mm_unpacklo_epi64(v93, v93);
        v94 = _mm_loadl_epi64(&v152);
        *(_DWORD *)(a5 - 4) = v92;
        *(__m128i *)(a5 - 32) = _mm_unpacklo_epi64(v94, v94);
        v7->m128i_i64[1] -= 96;
        ++v7[1].m128i_i64[0];
        return v165 - __readfsqword(0x28u);
      }
    }
    else
    {
      v159 = a5;
      v45 = (__int64)v44;
      if ( v44 == (_QWORD *)v43 )
      {
        *(_QWORD *)&v164 = v44;
        v162 = (unsigned __int64 *)&v164;
LABEL_90:
        v111 = v44 - 12;
        do
        {
          v44 = v111;
          *(_QWORD *)(v45 - 96) = *v111;
          if ( (_QWORD *)(v45 - 88) != v111 + 1 )
          {
            v117 = v111[2];
            if ( !v117 || (v118 = v117 - 1, v117 == 1) )
            {
              *(_QWORD *)(v45 - 80) = 0;
            }
            else
            {
              n = v111[1];
              v119 = *(void **)(v45 - 88);
              if ( *(_QWORD *)(v45 - 72) < v117 )
              {
                v145 = *(_QWORD *)(v45 - 88);
                v156.m128i_i64[0] = v117;
                v160 = v117 - 1;
                v158.m128i_i64[0] = v45;
                v157.m128i_i64[0] = a5;
                v119 = (void *)qvector_reserve(v45 - 88, v145, v117, 1);
                v45 = v158.m128i_i64[0];
                v118 = v160;
                a5 = v157.m128i_i64[0];
                v117 = v156.m128i_i64[0];
                *(_QWORD *)(v158.m128i_i64[0] - 88) = v119;
              }
              *(_QWORD *)(v45 - 80) = v117;
              v18 = n;
              v158.m128i_i64[0] = a5;
              v157.m128i_i64[0] = v117;
              v156.m128i_i64[0] = v45;
              memmove(v119, (const void *)n, v118);
              v45 = v156.m128i_i64[0];
              a5 = v158.m128i_i64[0];
              *(_BYTE *)(*(_QWORD *)(v156.m128i_i64[0] - 88) + v157.m128i_i64[0] - 1) = 0;
            }
          }
          if ( (_QWORD *)(v45 - 64) != v111 + 4 )
          {
            v112 = v111[5];
            if ( v112 && (v113 = v112 - 1, v112 != 1) )
            {
              n = v111[4];
              v135 = *(void **)(v45 - 64);
              if ( *(_QWORD *)(v45 - 48) < v112 )
              {
                v141 = *(_QWORD *)(v45 - 64);
                v156.m128i_i64[0] = v112;
                v160 = v112 - 1;
                v158.m128i_i64[0] = v45;
                v157.m128i_i64[0] = a5;
                v135 = (void *)qvector_reserve(v45 - 64, v141, v112, 1);
                v45 = v158.m128i_i64[0];
                v113 = v160;
                a5 = v157.m128i_i64[0];
                v112 = v156.m128i_i64[0];
                *(_QWORD *)(v158.m128i_i64[0] - 64) = v135;
              }
              *(_QWORD *)(v45 - 56) = v112;
              v18 = n;
              v158.m128i_i64[0] = a5;
              v157.m128i_i64[0] = v112;
              v156.m128i_i64[0] = v45;
              memmove(v135, (const void *)n, v113);
              v45 = v156.m128i_i64[0];
              a5 = v158.m128i_i64[0];
              *(_BYTE *)(*(_QWORD *)(v156.m128i_i64[0] - 64) + v157.m128i_i64[0] - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v45 - 56) = 0;
            }
          }
          if ( (_QWORD *)(v45 - 40) != v111 + 7 )
          {
            v114 = v111[8];
            if ( v114 && (v115 = v114 - 1, v114 != 1) )
            {
              n = v111[7];
              v136 = *(void **)(v45 - 40);
              if ( *(_QWORD *)(v45 - 24) < v114 )
              {
                v140 = *(_QWORD *)(v45 - 40);
                v156.m128i_i64[0] = v114;
                v160 = v114 - 1;
                v158.m128i_i64[0] = v45;
                v157.m128i_i64[0] = a5;
                v136 = (void *)qvector_reserve(v45 - 40, v140, v114, 1);
                v45 = v158.m128i_i64[0];
                v115 = v160;
                a5 = v157.m128i_i64[0];
                v114 = v156.m128i_i64[0];
                *(_QWORD *)(v158.m128i_i64[0] - 40) = v136;
              }
              *(_QWORD *)(v45 - 32) = v114;
              v18 = n;
              v158.m128i_i64[0] = a5;
              v157.m128i_i64[0] = v114;
              v156.m128i_i64[0] = v45;
              memmove(v136, (const void *)n, v115);
              v45 = v156.m128i_i64[0];
              a5 = v158.m128i_i64[0];
              *(_BYTE *)(*(_QWORD *)(v156.m128i_i64[0] - 40) + v157.m128i_i64[0] - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v45 - 32) = 0;
            }
          }
          v116 = *((_DWORD *)v111 + 20);
          v111 -= 12;
          *(_DWORD *)(v45 - 16) = v116;
          *(_DWORD *)(v45 - 12) = *((_DWORD *)v111 + 45);
          *(_DWORD *)(v45 - 8) = *((_DWORD *)v111 + 46);
          *(_DWORD *)(v45 - 4) = *((_DWORD *)v111 + 47);
          v45 = v161 - 96;
          v161 = v45;
        }
        while ( a5 != v45 );
LABEL_107:
        v120 = &v163;
        v162 = &v163;
        if ( v44 != (_QWORD *)v159 )
        {
          n = (size_t)v7;
          v121 = v159;
          v122 = v44;
          v123 = a5;
          do
          {
            v124 = v122[7];
            v122 += 12;
            if ( v124 )
            {
              *(v122 - 4) = 0;
              qfree(v124, (const char *)v18);
            }
            v125 = *(v122 - 8);
            if ( v125 )
            {
              *(v122 - 7) = 0;
              qfree(v125, (const char *)v18);
            }
            v126 = *(v122 - 11);
            if ( v126 )
            {
              *(v122 - 10) = 0;
              qfree(v126, (const char *)v18);
            }
          }
          while ( v122 != (_QWORD *)v121 );
          v7 = (__m128i *)n;
          v120 = v162;
          a5 = v123;
        }
        goto LABEL_117;
      }
    }
    v46 = (__int64)(v44 - 12);
    do
    {
      v50 = *(_QWORD *)v46;
      *(_QWORD *)(v43 - 88) = 0;
      v44 = (_QWORD *)v46;
      *(_OWORD *)(v43 - 80) = 0;
      *(_QWORD *)(v43 - 96) = v50;
      v51 = *(_QWORD *)(v46 + 16);
      if ( v51 )
      {
        v52 = *(_QWORD *)(v46 + 16);
        v156.m128i_i64[0] = v46;
        v158.m128i_i64[0] = v45;
        v157.m128i_i64[0] = a5;
        n = v51;
        v53 = (void *)qalloc_or_throw(v52);
        v54 = n;
        v55 = v156.m128i_i64[0];
        *(_QWORD *)(v43 - 88) = v53;
        *(_QWORD *)(v43 - 72) = v54;
        v18 = *(_QWORD *)(v55 + 8);
        memcpy(v53, (const void *)v18, v54);
        v46 = v156.m128i_i64[0];
        v45 = v158.m128i_i64[0];
        a5 = v157.m128i_i64[0];
        *(_QWORD *)(v43 - 80) = n;
      }
      *(_QWORD *)(v43 - 64) = 0;
      *(_OWORD *)(v43 - 56) = 0;
      v47 = *(_QWORD *)(v46 + 40);
      if ( v47 )
      {
        v107 = *(_QWORD *)(v46 + 40);
        v156.m128i_i64[0] = v46;
        v158.m128i_i64[0] = v45;
        v157.m128i_i64[0] = a5;
        n = v47;
        v108 = (void *)qalloc_or_throw(v107);
        v109 = n;
        v110 = v156.m128i_i64[0];
        *(_QWORD *)(v43 - 64) = v108;
        *(_QWORD *)(v43 - 48) = v109;
        v18 = *(_QWORD *)(v110 + 32);
        memcpy(v108, (const void *)v18, v109);
        v46 = v156.m128i_i64[0];
        v45 = v158.m128i_i64[0];
        a5 = v157.m128i_i64[0];
        *(_QWORD *)(v43 - 56) = n;
      }
      *(_QWORD *)(v43 - 40) = 0;
      *(_OWORD *)(v43 - 32) = 0;
      v48 = *(_QWORD *)(v46 + 64);
      if ( v48 )
      {
        v103 = *(_QWORD *)(v46 + 64);
        v156.m128i_i64[0] = v46;
        v158.m128i_i64[0] = v45;
        v157.m128i_i64[0] = a5;
        n = v48;
        v104 = (void *)qalloc_or_throw(v103);
        v105 = n;
        v106 = v156.m128i_i64[0];
        *(_QWORD *)(v43 - 40) = v104;
        *(_QWORD *)(v43 - 24) = v105;
        v18 = *(_QWORD *)(v106 + 56);
        memcpy(v104, (const void *)v18, v105);
        v46 = v156.m128i_i64[0];
        v45 = v158.m128i_i64[0];
        a5 = v157.m128i_i64[0];
        *(_QWORD *)(v43 - 32) = n;
      }
      v49 = *(_QWORD *)(v46 + 80);
      v46 -= 96;
      *(_QWORD *)(v43 - 16) = v49;
      *(_DWORD *)(v43 - 8) = *(_DWORD *)(v46 + 184);
      *(_DWORD *)(v43 - 4) = *(_DWORD *)(v46 + 188);
      v43 = v161 - 96;
      v161 = v43;
    }
    while ( v43 != v45 );
    *(_QWORD *)&v164 = *v162;
    v162 = (unsigned __int64 *)&v164;
    if ( a5 == v45 )
      goto LABEL_107;
    goto LABEL_90;
  }
  if ( a1[1].m128i_i64[0] == a2 )
  {
    v20 = a1->m128i_i64[1];
    v21 = (v8 + 31) & 0xFFFFFFFFFFFFFFF0LL;
    if ( a2 != *(_QWORD *)(v8 + 8) - 0xAAAAAAAAAAAAAAABLL * ((__int64)(v20 - v21) >> 5) )
    {
      v99 = 96 * a2 + v20;
      *(_QWORD *)v99 = v10;
      *(_QWORD *)(v99 + 8) = 0;
      *(_OWORD *)(v99 + 16) = 0;
      v100 = *(_QWORD *)(a3 + 16);
      if ( v100 )
      {
        v143 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 16));
        *(_QWORD *)(v99 + 24) = v100;
        *(_QWORD *)(v99 + 8) = v143;
        memcpy(v143, *(const void **)(a3 + 8), v100);
        *(_QWORD *)(v99 + 16) = v100;
      }
      *(_QWORD *)(v99 + 32) = 0;
      *(_OWORD *)(v99 + 40) = 0;
      v101 = *(_QWORD *)(a3 + 40);
      if ( v101 )
      {
        v142 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 40));
        *(_QWORD *)(v99 + 32) = v142;
        *(_QWORD *)(v99 + 48) = v101;
        memcpy(v142, *(const void **)(a3 + 32), v101);
        *(_QWORD *)(v99 + 40) = v101;
      }
      *(_QWORD *)(v99 + 56) = 0;
      *(_OWORD *)(v99 + 64) = 0;
      v102 = *(_QWORD *)(a3 + 64);
      if ( v102 )
      {
        v144 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 64));
        *(_QWORD *)(v99 + 56) = v144;
        *(_QWORD *)(v99 + 72) = v102;
        memcpy(v144, *(const void **)(a3 + 56), v102);
        *(_QWORD *)(v99 + 64) = v102;
      }
      *(_QWORD *)(v99 + 80) = *(_QWORD *)(a3 + 80);
      *(_QWORD *)(v99 + 88) = *(_QWORD *)(a3 + 88);
      ++a1[1].m128i_i64[0];
      return v165 - __readfsqword(0x28u);
    }
    if ( a2 )
      goto LABEL_3;
  }
  else
  {
    if ( a2 )
      goto LABEL_3;
    v20 = a1->m128i_i64[1];
    v21 = (v8 + 31) & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( v21 == v20 )
    goto LABEL_3;
  *(_QWORD *)(v20 - 96) = v10;
  *(_QWORD *)(v20 - 88) = 0;
  *(_OWORD *)(v20 - 80) = 0;
  v22 = *(_QWORD *)(a3 + 16);
  if ( v22 )
  {
    v138 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 16));
    *(_QWORD *)(v20 - 72) = v22;
    *(_QWORD *)(v20 - 88) = v138;
    memcpy(v138, *(const void **)(a3 + 8), v22);
    *(_QWORD *)(v20 - 80) = v22;
  }
  *(_QWORD *)(v20 - 64) = 0;
  *(_OWORD *)(v20 - 56) = 0;
  v23 = *(_QWORD *)(a3 + 40);
  if ( v23 )
  {
    v139 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 40));
    *(_QWORD *)(v20 - 64) = v139;
    *(_QWORD *)(v20 - 48) = v23;
    memcpy(v139, *(const void **)(a3 + 32), v23);
    *(_QWORD *)(v20 - 56) = v23;
  }
  *(_QWORD *)(v20 - 40) = 0;
  *(_OWORD *)(v20 - 32) = 0;
  v24 = *(_QWORD *)(a3 + 64);
  if ( v24 )
  {
    v137 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 64));
    *(_QWORD *)(v20 - 40) = v137;
    *(_QWORD *)(v20 - 24) = v24;
    memcpy(v137, *(const void **)(a3 + 56), v24);
    *(_QWORD *)(v20 - 32) = v24;
  }
  *(_QWORD *)(v20 - 16) = *(_QWORD *)(a3 + 80);
  *(_DWORD *)(v20 - 8) = *(_DWORD *)(a3 + 88);
  *(_DWORD *)(v20 - 4) = *(_DWORD *)(a3 + 92);
  a1->m128i_i64[1] -= 96;
  ++a1[1].m128i_i64[0];
  return v165 - __readfsqword(0x28u);
}
