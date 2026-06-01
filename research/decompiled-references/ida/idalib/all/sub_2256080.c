void __fastcall sub_2256080(__int64 ***a1, __int64 a2, void **a3, __int64 a4)
{
  __int64 v5; // r12
  unsigned __int64 v6; // rcx
  unsigned __int64 i; // r10
  unsigned __int64 j; // rdx
  __int64 v9; // rsi
  __int64 *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebp
  int v15; // ecx
  int v16; // eax
  int v17; // esi
  int v18; // ecx
  unsigned int v19; // ebx
  __int64 v20; // r14
  unsigned __int64 v21; // rbx
  __int64 **v22; // rdi
  unsigned __int64 *v23; // rax
  __int64 *v24; // rax
  __m128i *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r12
  unsigned __int64 v28; // rdx
  _BYTE *v29; // rbx
  __int64 *v30; // rdx
  __int64 v31; // rax
  void *v32; // rax
  _BYTE *v33; // rsi
  void **v34; // r9
  __int64 v35; // rax
  __m128i *v36; // r15
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  __m128i *v39; // rsi
  void **v40; // r14
  void **v41; // r10
  __m128i *v42; // rax
  __int32 v43; // edx
  __int32 v44; // eax
  char *v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // r15
  char *v48; // rbx
  __int64 v49; // rbp
  void **v50; // r12
  void **v51; // r13
  __int64 v52; // rdx
  _BYTE *v53; // rax
  char *v54; // rax
  char *v55; // rdi
  size_t v56; // rdx
  void *v57; // rax
  _BYTE *v58; // rsi
  _BYTE *v59; // r14
  __int128 *v60; // r13
  void *v61; // rdx
  int v62; // eax
  _BYTE *v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rbx
  void **v66; // r13
  void **v67; // r12
  size_t v68; // rbx
  char v69; // r15
  void *v70; // rbp
  signed __int64 v71; // r13
  __int64 v72; // r14
  signed __int64 v73; // r14
  unsigned __int64 v74; // rdi
  _BYTE *v75; // rax
  unsigned int *v76; // r9
  size_t v77; // rdx
  void **v78; // rsi
  char *v79; // rax
  char *v80; // rdx
  char v81; // cl
  char v82; // si
  _BYTE *v83; // rdi
  void **v84; // rbx
  void *v85; // rcx
  void **v86; // rax
  __int64 v87; // rax
  void *v88; // rsi
  __m128i *v89; // rdi
  __m128i *v90; // rbx
  void *v91; // rax
  __m128i *v92; // rdi
  __int64 *v93; // rdx
  unsigned __int64 v94; // rsi
  __int64 v95; // rax
  void **v96; // rax
  __m128i *v97; // rbx
  __m128i *v98; // rdi
  __int32 v99; // eax
  void **v100; // r12
  void **v101; // r13
  _BYTE *v102; // rbx
  char v103; // r15
  void *v104; // rbp
  char *v105; // r12
  __int64 v106; // r14
  __int64 v107; // r14
  char *v108; // rdi
  _BYTE *v109; // rax
  unsigned int *v110; // r9
  void **v111; // rdx
  void **v112; // rsi
  char *v113; // rax
  char *v114; // rdx
  char v115; // cl
  char v116; // si
  _BYTE *v117; // rdi
  void **v118; // rbx
  __m128 v119; // xmm0
  void *v120; // rax
  void **v121; // rax
  size_t v122; // rdx
  __m128i *v123; // rdi
  void **v124; // rdi
  void **v125; // rax
  void **v126; // r14
  signed __int64 v127; // rbp
  int v128; // ebx
  __int64 v129; // r14
  __int64 v130; // rax
  __int64 v131; // rdi
  int v132; // ebx
  __int64 v133; // rax
  void **v134; // rbp
  char *v135; // rbx
  __m128i *v136; // r14
  int v137; // r15d
  __int64 v138; // rdx
  __m128i *v139; // r14
  int v140; // ebx
  __int64 v141; // rdx
  unsigned int *v142; // [rsp+8h] [rbp-130h] BYREF
  void **v143; // [rsp+10h] [rbp-128h]
  _QWORD *v144; // [rsp+18h] [rbp-120h]
  __m128i *v145; // [rsp+20h] [rbp-118h]
  void **v146; // [rsp+28h] [rbp-110h]
  unsigned int *v147; // [rsp+30h] [rbp-108h]
  void **v148; // [rsp+38h] [rbp-100h]
  unsigned __int64 v149; // [rsp+40h] [rbp-F8h]
  unsigned int *v150; // [rsp+48h] [rbp-F0h]
  __int64 **v151; // [rsp+50h] [rbp-E8h]
  __int64 v152; // [rsp+58h] [rbp-E0h]
  _QWORD *v153; // [rsp+60h] [rbp-D8h]
  unsigned int v154; // [rsp+68h] [rbp-D0h]
  unsigned int v155; // [rsp+6Ch] [rbp-CCh]
  void **p_src; // [rsp+70h] [rbp-C8h]
  void **v157; // [rsp+78h] [rbp-C0h]
  _BYTE *v158; // [rsp+80h] [rbp-B8h]
  __int64 v159; // [rsp+88h] [rbp-B0h]
  void *v160[2]; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v161[16]; // [rsp+A0h] [rbp-98h] BYREF
  void *src; // [rsp+B0h] [rbp-88h] BYREF
  size_t n; // [rsp+B8h] [rbp-80h]
  _QWORD v164[2]; // [rsp+C0h] [rbp-78h] BYREF
  void *s2[2]; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v166; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v167; // [rsp+F0h] [rbp-48h]

  v5 = a2;
  v152 = a4;
  v6 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    for ( i = 0; i < v6; ++i )
    {
      if ( (unsigned __int8)((*(_BYTE *)(*(_QWORD *)(v5 + 24) + i) & 0xDF) - 65) <= 0x19u
        || (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v5 + 24) + i) - 48) <= 9u )
      {
        *(_BYTE *)(***a1 + (_QWORD)a3 * (_QWORD)(*a1)[1]) = (_BYTE)a3;
        for ( j = 1; (unsigned __int64)*a1[1] > j; *(_BYTE *)(v13 + v12) = v16 )
        {
          v9 = ***a1;
          v10 = (*a1)[1];
          v11 = ((_QWORD)a3 - 1) * (_QWORD)v10;
          v12 = (_QWORD)a3 * (_QWORD)v10;
          v13 = v9 + j;
          v14 = *(char *)(j + v9 + v11 - 1);
          v15 = *(char *)(v9 + j + v11);
          v16 = v14 + (*((_BYTE *)*a1[2] + j - 1) != *(_BYTE *)(*(_QWORD *)(v5 + 24) + i));
          v17 = *(char *)(j + v12 + v9 - 1) + 1;
          if ( v16 > v17 )
            v16 = v17;
          v18 = v15 + 1;
          if ( v16 > v18 )
            LOBYTE(v16) = v18;
          ++j;
        }
        v6 = *(_QWORD *)(v5 + 32);
        a3 = (void **)((char *)a3 + 1);
      }
    }
  }
  v154 = *(_DWORD *)(v5 + 4);
  if ( v154 != -1 )
  {
    v21 = (unsigned int)*((char *)*a1[1] + ***a1 + (_QWORD)(*a1)[1] * ((_QWORD)a3 - 1) - 1);
    v22 = a1[3];
    v151 = v22;
    v23 = (unsigned __int64 *)*v22;
    v155 = v21;
    v149 = v21;
    if ( v21 > *v23 )
    {
      if ( *((_DWORD *)v22[1] + 2) == *v22[2] )
        goto LABEL_14;
      *v23 = v21;
    }
    v161[0] = 0;
    v148 = v160;
    v160[0] = v161;
    v158 = v161;
    v160[1] = nullptr;
    v24 = v151[1];
    v25 = (__m128i *)*v24;
    v26 = *((unsigned int *)v24 + 2);
    v145 = v25;
    v144 = (_QWORD *)v26;
    if ( !(40 * v26) )
    {
      if ( v26 == *v151[2] )
        goto LABEL_14;
      goto LABEL_36;
    }
    v153 = (_QWORD *)v5;
    v27 = v26;
    v157 = a3;
    while ( 2 )
    {
      v27 >>= 1;
      v28 = v145[2].m128i_u32[10 * v27];
      v146 = (void **)v145 + 5 * v27;
      LOBYTE(v29) = v149 > v28;
      if ( v149 != v28 )
        goto LABEL_33;
      v57 = v148[1];
      if ( v57 )
        goto LABEL_54;
      v65 = v153;
      n = 0;
      p_src = &src;
      v147 = (unsigned int *)v153;
      src = v164;
      LOBYTE(v164[0]) = 0;
      sub_995C30((__int64)&src, 0x2Eu);
      v142 = (unsigned int *)v164;
      if ( !v65 )
        goto LABEL_85;
      v159 = v27;
      do
      {
        v66 = *((void ***)v147 + 3);
        v67 = (void **)((char *)v66 + *((_QWORD *)v147 + 4));
        if ( v66 != v67 )
        {
          v143 = *((void ***)v147 + 3);
          do
          {
            v68 = n;
            v67 = (void **)((char *)v67 - 1);
            v69 = *(_BYTE *)v67;
            v70 = src;
            v71 = n + 1;
            if ( src == v142 )
            {
              if ( (unsigned __int64)v71 > 0xF )
              {
                v72 = 15;
                if ( v71 < 0 )
LABEL_72:
                  std::__throw_length_error("basic_string::_M_create");
                goto LABEL_75;
              }
            }
            else
            {
              v72 = v164[0];
              if ( (unsigned __int64)v71 > v164[0] )
              {
                if ( v71 < 0 )
                  goto LABEL_72;
LABEL_75:
                v73 = 2 * v72;
                if ( v71 < (unsigned __int64)v73 )
                {
                  v74 = v73 + 1;
                  if ( v73 < 0 )
                  {
                    v74 = 0x8000000000000000LL;
                    v73 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                }
                else
                {
                  v74 = n + 2;
                  v73 = n + 1;
                }
                v75 = (_BYTE *)operator new(v74);
                v76 = (unsigned int *)src;
                v70 = v75;
                if ( v68 )
                {
                  if ( v68 == 1 )
                  {
                    *v75 = *(_BYTE *)src;
                  }
                  else
                  {
                    v150 = (unsigned int *)src;
                    memcpy(v75, src, v68);
                    v76 = v150;
                  }
                }
                if ( v76 != v142 )
                  operator delete(v76);
                src = v70;
                v164[0] = v73;
              }
            }
            *((_BYTE *)v70 + v68) = v69;
            n = v71;
            *((_BYTE *)src + v68 + 1) = 0;
          }
          while ( v143 != v67 );
        }
        v147 = *((unsigned int **)v147 + 5);
      }
      while ( v147 );
      v27 = v159;
LABEL_85:
      v77 = n;
      v78 = (void **)((char *)src + n);
      if ( src != (char *)src + n )
      {
        v79 = (char *)v78 - 1;
        if ( src >= (char *)v78 - 1 )
        {
          v78 = (void **)src;
        }
        else
        {
          v80 = (char *)src;
          do
          {
            v81 = *v80;
            v82 = *v79;
            ++v80;
            --v79;
            *(v80 - 1) = v82;
            v79[1] = v81;
          }
          while ( v79 > v80 );
          v78 = (void **)src;
          v77 = n;
        }
      }
      v83 = *v148;
      if ( v78 == p_src + 2 )
      {
        if ( v77 )
        {
          if ( v77 == 1 )
            *v83 = v164[0];
          else
            memcpy(v83, v78, v77);
          v77 = n;
          v83 = *v148;
        }
        v148[1] = (void *)v77;
        v83[v77] = 0;
        v83 = src;
      }
      else
      {
        if ( v83 == v158 )
        {
          v124 = v148;
          v142 = (unsigned int *)v164[0];
          *v148 = v78;
          *(__m128 *)(v124 + 1) = _mm_loadh_ps((const double *)&v142);
        }
        else
        {
          v142 = (unsigned int *)v164[0];
          v84 = v148;
          v85 = v148[2];
          *v148 = v78;
          *(__m128 *)(v84 + 1) = _mm_loadh_ps((const double *)&v142);
          if ( v83 )
          {
            src = v83;
            v164[0] = v85;
            goto LABEL_94;
          }
        }
        v83 = p_src + 2;
        src = p_src + 2;
      }
LABEL_94:
      v86 = p_src;
      n = 0;
      *v83 = 0;
      if ( src != v86 + 2 )
        operator delete(src);
      v57 = v148[1];
LABEL_54:
      v58 = *v148;
      s2[0] = &v166;
      sub_2255320(s2, v58, (__int64)v57 + (_QWORD)v58);
      v59 = s2[1];
      v60 = (__int128 *)s2[0];
      v29 = v146[1];
      v61 = s2[1];
      if ( v29 <= s2[1] )
        v61 = v146[1];
      if ( v61 && (v62 = memcmp(*v146, s2[0], (size_t)v61)) != 0 )
      {
        LOBYTE(v29) = v62 < 0;
      }
      else
      {
        v63 = v29;
        LOBYTE(v29) = 0;
        v64 = v63 - v59;
        if ( v64 <= 0x7FFFFFFF )
        {
          if ( v64 < (__int64)0xFFFFFFFF80000000LL )
            LOBYTE(v29) = 1;
          else
            LODWORD(v29) = (unsigned int)v64 >> 31;
        }
      }
      if ( v60 != &v166 )
        operator delete(v60);
LABEL_33:
      if ( !(_BYTE)v29 )
      {
        if ( !v27 )
          goto LABEL_35;
LABEL_31:
        v144 = (_QWORD *)v27;
        continue;
      }
      break;
    }
    v145 = (__m128i *)(v146 + 5);
    v27 = (__int64)v144 - v27 - 1;
    if ( v27 > 0 )
      goto LABEL_31;
LABEL_35:
    v5 = (__int64)v153;
    a3 = v157;
    v30 = v151[1];
    v31 = *((unsigned int *)v30 + 2);
    if ( (__m128i *)(*v30 + 40 * v31) == v145 && v31 == *v151[2] )
    {
LABEL_101:
      if ( v160[0] != v148 + 2 )
        operator delete(v160[0]);
      goto LABEL_14;
    }
LABEL_36:
    v146 = s2;
    v32 = v148[1];
    if ( v32 )
      goto LABEL_37;
    v144 = (_QWORD *)v5;
    s2[0] = &v166;
    s2[1] = nullptr;
    LOBYTE(v166) = 0;
    sub_995C30((__int64)s2, 0x2Eu);
    v142 = (unsigned int *)&v166;
    if ( !v5 )
      goto LABEL_150;
    v149 = v5;
    v150 = (unsigned int *)a3;
    while ( 2 )
    {
      v100 = (void **)v144[3];
      v101 = (void **)((char *)v100 + v144[4]);
      if ( v100 != v101 )
      {
        v143 = (void **)v144[3];
        do
        {
          v102 = s2[1];
          v101 = (void **)((char *)v101 - 1);
          v103 = *(_BYTE *)v101;
          v104 = s2[0];
          v105 = (char *)s2[1] + 1;
          if ( s2[0] == v142 )
          {
            if ( (unsigned __int64)v105 <= 0xF )
              goto LABEL_134;
            v106 = 15;
          }
          else
          {
            v106 = v166;
            if ( (unsigned __int64)v105 <= (unsigned __int64)v166 )
              goto LABEL_134;
          }
          if ( (__int64)v105 < 0 )
            goto LABEL_72;
          v107 = 2 * v106;
          if ( (unsigned __int64)v105 < v107 )
          {
            v108 = (char *)(v107 + 1);
            if ( v107 < 0 )
            {
              v108 = (char *)0x8000000000000000LL;
              v107 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v108 = (char *)s2[1] + 2;
            v107 = (__int64)s2[1] + 1;
          }
          v109 = (_BYTE *)operator new((unsigned __int64)v108);
          v110 = (unsigned int *)s2[0];
          v104 = v109;
          if ( v102 )
          {
            if ( v102 == (_BYTE *)&dword_0 + 1 )
            {
              *v109 = *(_BYTE *)s2[0];
            }
            else
            {
              v147 = (unsigned int *)s2[0];
              memcpy(v109, s2[0], (size_t)v102);
              v110 = v147;
            }
          }
          if ( v110 != v142 )
            operator delete(v110);
          s2[0] = v104;
          *(_QWORD *)&v166 = v107;
LABEL_134:
          v102[(_QWORD)v104] = v103;
          s2[1] = v105;
          *((_BYTE *)s2[0] + (unsigned __int64)v102 + 1) = 0;
        }
        while ( v143 != v101 );
      }
      v144 = (_QWORD *)v144[5];
      if ( v144 )
        continue;
      break;
    }
    v5 = v149;
    a3 = (void **)v150;
LABEL_150:
    v111 = (void **)s2[1];
    v112 = (void **)((char *)s2[0] + (unsigned __int64)s2[1]);
    if ( s2[0] != (char *)s2[0] + (unsigned __int64)s2[1] )
    {
      v113 = (char *)v112 - 1;
      if ( s2[0] >= (char *)v112 - 1 )
      {
        v112 = (void **)s2[0];
      }
      else
      {
        v114 = (char *)s2[0];
        do
        {
          v115 = *v114;
          v116 = *v113;
          ++v114;
          --v113;
          *(v114 - 1) = v116;
          v113[1] = v115;
        }
        while ( v113 > v114 );
        v112 = (void **)s2[0];
        v111 = (void **)s2[1];
      }
    }
    v117 = *v148;
    if ( v112 == v146 + 2 )
    {
      if ( v111 )
      {
        if ( v111 == (void **)((char *)&dword_0 + 1) )
          *v117 = v166;
        else
          memcpy(v117, v112, (size_t)v111);
        v111 = (void **)s2[1];
        v117 = *v148;
      }
      v148[1] = v111;
      *((_BYTE *)v111 + (_QWORD)v117) = 0;
      v117 = s2[0];
    }
    else
    {
      v142 = (unsigned int *)v166;
      if ( v117 == v158 )
      {
        v125 = v148;
        v143 = v111;
        *v148 = v112;
        *(__m128 *)(v125 + 1) = _mm_loadh_ps((const double *)&v142);
      }
      else
      {
        v143 = v111;
        v118 = v148;
        v119 = _mm_loadh_ps((const double *)&v142);
        v120 = v148[2];
        *v148 = v112;
        *(__m128 *)(v118 + 1) = v119;
        if ( v117 )
        {
          s2[0] = v117;
          *(_QWORD *)&v166 = v120;
          goto LABEL_159;
        }
      }
      s2[0] = v146 + 2;
      v117 = v146 + 2;
    }
LABEL_159:
    v121 = v146;
    s2[1] = nullptr;
    *v117 = 0;
    if ( s2[0] != v121 + 2 )
      operator delete(s2[0]);
    v32 = v148[1];
LABEL_37:
    v33 = *v148;
    s2[0] = v146 + 2;
    sub_2255320(v146, v33, (__int64)v32 + (_QWORD)v33);
    *(_QWORD *)&v167 = __PAIR64__(v154, v155);
    v34 = (void **)v151[1];
    v35 = *((unsigned int *)v34 + 2);
    v36 = (__m128i *)*v34;
    v37 = v35 + 1;
    v38 = 40 * v35;
    v39 = (__m128i *)((char *)*v34 + 40 * v35);
    if ( v39 == v145 )
    {
      v97 = (__m128i *)v146;
      if ( v37 > *((unsigned int *)v34 + 3) )
      {
        v134 = v34 + 2;
        if ( v36 > (__m128i *)v146 || v145 <= (__m128i *)v146 )
        {
          v142 = (unsigned int *)v151[1];
          v139 = (__m128i *)sub_2237400((__int64)v142, v34 + 2, v37, 40, (unsigned __int64 *)&src);
          sub_2255F90((__int64)v142, v139);
          v34 = (void **)v142;
          v140 = (int)src;
          if ( *(void ***)v142 != v134 )
          {
            free(*(void **)v142);
            v34 = (void **)v142;
          }
          v141 = *((unsigned int *)v34 + 2);
          *((_DWORD *)v34 + 3) = v140;
          *v34 = v139;
          v97 = (__m128i *)v146;
          v145 = (__m128i *)((char *)v139 + 40 * v141);
        }
        else
        {
          v142 = (unsigned int *)v151[1];
          v135 = (char *)((char *)v146 - (char *)v36);
          v136 = (__m128i *)sub_2237400((__int64)v142, v34 + 2, v37, 40, (unsigned __int64 *)&src);
          sub_2255F90((__int64)v142, v136);
          v34 = (void **)v142;
          v137 = (int)src;
          if ( *(void ***)v142 != v134 )
          {
            free(*(void **)v142);
            v34 = (void **)v142;
          }
          v138 = *((unsigned int *)v34 + 2);
          *v34 = v136;
          v97 = (__m128i *)&v135[(_QWORD)v136];
          *((_DWORD *)v34 + 3) = v137;
          v145 = (__m128i *)((char *)v136 + 40 * v138);
        }
      }
      v98 = v145;
      v145->m128i_i64[0] = (__int64)v145[1].m128i_i64;
      if ( (__m128i *)v97->m128i_i64[0] == &v97[1] )
      {
        v98[1] = _mm_loadu_si128(v97 + 1);
      }
      else
      {
        v98->m128i_i64[0] = v97->m128i_i64[0];
        v98[1].m128i_i64[0] = v97[1].m128i_i64[0];
      }
      v98->m128i_i64[1] = v97->m128i_i64[1];
      v97->m128i_i64[0] = (__int64)v97[1].m128i_i64;
      v99 = v97[2].m128i_i32[0];
      v97->m128i_i64[1] = 0;
      v97[1].m128i_i8[0] = 0;
      v98[2].m128i_i32[0] = v99;
      v98[2].m128i_i32[1] = v97[2].m128i_i32[1];
      ++*((_DWORD *)v34 + 2);
      goto LABEL_120;
    }
    v40 = v146;
    v41 = v146;
    if ( v37 > *((unsigned int *)v34 + 3) )
    {
      v126 = v34 + 2;
      v127 = (char *)v145 - (char *)v36;
      if ( v36 > (__m128i *)v146 || v39 <= (__m128i *)v146 )
      {
        v131 = (__int64)v151[1];
        v143 = v146;
        v142 = (unsigned int *)v34;
        v36 = (__m128i *)sub_2237400(v131, v34 + 2, v37, 40, (unsigned __int64 *)&src);
        sub_2255F90((__int64)v142, v36);
        v34 = (void **)v142;
        v41 = v143;
        v132 = (int)src;
        if ( *(void ***)v142 == v126 )
        {
          *(_QWORD *)v142 = v36;
          v40 = v146;
          v145 = (__m128i *)((char *)v36 + v127);
          v133 = *((unsigned int *)v34 + 2);
        }
        else
        {
          free(*(void **)v142);
          v34 = (void **)v142;
          v40 = v146;
          v145 = (__m128i *)((char *)v36 + v127);
          v41 = v143;
          v133 = v142[2];
          *(_QWORD *)v142 = v36;
        }
        *((_DWORD *)v34 + 3) = v132;
        v38 = 40 * v133;
        v39 = (__m128i *)((char *)v36 + 40 * v133);
      }
      else
      {
        v143 = (void **)v151[1];
        v142 = (unsigned int *)((char *)v146 - (char *)v36);
        v36 = (__m128i *)sub_2237400((__int64)v143, v34 + 2, v37, 40, (unsigned __int64 *)&src);
        sub_2255F90((__int64)v143, v36);
        v34 = v143;
        v128 = (int)src;
        if ( *v143 != v126 )
        {
          free(*v143);
          v34 = v143;
        }
        v129 = (__int64)v142;
        *v34 = v36;
        v145 = (__m128i *)((char *)v36 + v127);
        v130 = *((unsigned int *)v34 + 2);
        v40 = (void **)((char *)v36->m128i_i64 + v129);
        *((_DWORD *)v34 + 3) = v128;
        v41 = v40;
        v38 = 40 * v130;
        v39 = (__m128i *)((char *)v36 + 40 * v130);
      }
    }
    v42 = (__m128i *)((char *)v36 + v38 - 40);
    v39->m128i_i64[0] = (__int64)v39[1].m128i_i64;
    if ( (__m128i *)v42->m128i_i64[0] == &v42[1] )
    {
      v39[1] = _mm_loadu_si128(v42 + 1);
    }
    else
    {
      v39->m128i_i64[0] = v42->m128i_i64[0];
      v39[1].m128i_i64[0] = v42[1].m128i_i64[0];
    }
    v39->m128i_i64[1] = v42->m128i_i64[1];
    v42->m128i_i64[0] = (__int64)v42[1].m128i_i64;
    v43 = v42[2].m128i_i32[0];
    v42[1].m128i_i8[0] = 0;
    v42->m128i_i64[1] = 0;
    v44 = v42[2].m128i_i32[1];
    v39[2].m128i_i32[0] = v43;
    v45 = (char *)*v34;
    v39[2].m128i_i32[1] = v44;
    v46 = *((unsigned int *)v34 + 2);
    v47 = 0xCCCCCCCCCCCCCCCDLL * ((&v45[40 * v46 - 40] - (char *)v145) >> 3);
    if ( &v45[40 * v46 - 40] - (char *)v145 > 0 )
    {
      v142 = (unsigned int *)v5;
      v48 = &v45[40 * v46 - 64];
      v49 = (__int64)&v45[40 * v46 - 24];
      v50 = v34;
      v143 = a3;
      v51 = v41;
      while ( 1 )
      {
        v54 = *((char **)v48 - 2);
        v55 = *(char **)(v49 - 16);
        if ( v54 == v48 )
        {
          v56 = *((_QWORD *)v48 - 1);
          if ( v56 )
          {
            if ( v56 == 1 )
              *v55 = *v48;
            else
              memcpy(v55, v48, v56);
            v55 = *(char **)(v49 - 16);
            v56 = *((_QWORD *)v48 - 1);
          }
          *(_QWORD *)(v49 - 8) = v56;
          v55[v56] = 0;
          goto LABEL_46;
        }
        if ( v55 == (char *)v49 )
          break;
        *(_QWORD *)(v49 - 16) = v54;
        v52 = *(_QWORD *)v49;
        *(_QWORD *)(v49 - 8) = *((_QWORD *)v48 - 1);
        *(_QWORD *)v49 = *(_QWORD *)v48;
        if ( !v55 )
          goto LABEL_110;
        *((_QWORD *)v48 - 2) = v55;
        *(_QWORD *)v48 = v52;
LABEL_46:
        v53 = *((_BYTE **)v48 - 2);
        *((_QWORD *)v48 - 1) = 0;
        v49 -= 40;
        v48 -= 40;
        *v53 = 0;
        *(_DWORD *)(v49 + 56) = *((_DWORD *)v48 + 14);
        *(_DWORD *)(v49 + 60) = *((_DWORD *)v48 + 15);
        if ( !--v47 )
        {
          v34 = v50;
          v41 = v51;
          v5 = (__int64)v142;
          a3 = v143;
          LODWORD(v46) = *((_DWORD *)v34 + 2);
          v45 = (char *)*v34;
          goto LABEL_112;
        }
      }
      *(_QWORD *)(v49 - 16) = v54;
      *(_QWORD *)(v49 - 8) = *((_QWORD *)v48 - 1);
      *(_QWORD *)v49 = *(_QWORD *)v48;
LABEL_110:
      *((_QWORD *)v48 - 2) = v48;
      goto LABEL_46;
    }
LABEL_112:
    v87 = (unsigned int)(v46 + 1);
    *((_DWORD *)v34 + 2) = v87;
    if ( v145 <= (__m128i *)v41 && &v45[40 * v87] > (char *)v41 )
      v40 += 5;
    v88 = *v40;
    v89 = (__m128i *)v145->m128i_i64[0];
    if ( *v40 == v40 + 2 )
    {
      v122 = (size_t)v40[1];
      if ( v122 )
      {
        if ( v122 == 1 )
          v89->m128i_i8[0] = *((_BYTE *)v40 + 16);
        else
          memcpy(v89, v88, v122);
        v122 = (size_t)v40[1];
        v89 = (__m128i *)v145->m128i_i64[0];
      }
      v145->m128i_i64[1] = v122;
      v89->m128i_i8[v122] = 0;
      v89 = (__m128i *)*v40;
      goto LABEL_119;
    }
    if ( v89 == &v145[1] )
    {
      v123 = v145;
      v145->m128i_i64[0] = (__int64)v88;
      v123->m128i_i64[1] = (__int64)v40[1];
      v123[1].m128i_i64[0] = (__int64)v40[2];
    }
    else
    {
      v90 = v145;
      v145->m128i_i64[0] = (__int64)v88;
      v91 = (void *)v90[1].m128i_i64[0];
      v90->m128i_i64[1] = (__int64)v40[1];
      v90[1].m128i_i64[0] = (__int64)v40[2];
      if ( v89 )
      {
        *v40 = v89;
        v40[2] = v91;
LABEL_119:
        v40[1] = nullptr;
        v89->m128i_i8[0] = 0;
        v92 = v145;
        v145[2].m128i_i32[0] = *((_DWORD *)v40 + 8);
        v92[2].m128i_i32[1] = *((_DWORD *)v40 + 9);
LABEL_120:
        v93 = v151[1];
        v94 = *((unsigned int *)v93 + 2);
        if ( v94 > *v151[2] )
        {
          v95 = (unsigned int)(v94 - 1);
          *((_DWORD *)v93 + 2) = v95;
          v96 = (void **)(*v93 + 40 * v95);
          if ( *v96 != v96 + 2 )
            operator delete(*v96);
        }
        if ( s2[0] != v146 + 2 )
          operator delete(s2[0]);
        goto LABEL_101;
      }
    }
    *v40 = v40 + 2;
    v89 = (__m128i *)(v40 + 2);
    goto LABEL_119;
  }
LABEL_14:
  v19 = *(_DWORD *)(v5 + 8);
  if ( v19 || *(_BYTE *)v5 )
  {
    v20 = v152;
    do
    {
      if ( v19 )
      {
        sub_2254B00((__int64)s2, v19, v5);
        v19 += v166;
        if ( !(_QWORD)v167 && HIDWORD(s2[0]) != -1 )
          return;
      }
      else
      {
        v19 = 1;
        *(_OWORD *)s2 = 0;
        v166 = 0;
        LOBYTE(s2[0]) = 1;
        *(void **)((char *)s2 + 4) = (void *)0x1FFFFFFFFLL;
        LODWORD(v166) = 1;
        v167 = 0;
      }
      sub_2256080(v20, s2, a3, v20);
    }
    while ( BYTE4(s2[1]) );
  }
}
