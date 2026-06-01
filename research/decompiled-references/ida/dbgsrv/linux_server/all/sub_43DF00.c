/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DF00
// Address: 0x000000000043DF00

//----- (000000000043DF00) ----------------------------------------------------
__int64 __fastcall sub_43DF00(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 *a4,
        char a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  unsigned __int64 v13; // r15
  char v16; // al
  unsigned __int8 *v17; // rbx
  int v19; // r13d
  char v20; // al
  __int64 v21; // rax
  int v22; // eax
  __int64 i; // rbx
  size_t v24; // rax
  size_t v25; // r14
  size_t v26; // r12
  double v27; // xmm4_8
  double v28; // xmm5_8
  unsigned __int8 *v29; // rax
  double v30; // xmm4_8
  double v31; // xmm5_8
  unsigned int v32; // ebp
  unsigned __int64 v33; // r12
  unsigned __int8 *v34; // rbx
  bool v35; // zf
  size_t v36; // rbp
  size_t v37; // r8
  char *v38; // rsi
  char *v39; // r9
  size_t v40; // r12
  unsigned __int64 v41; // rbp
  unsigned __int64 v42; // rax
  _BYTE *v43; // rsi
  size_t v44; // r8
  unsigned __int64 v45; // r14
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // r15
  _BYTE *v52; // rax
  size_t v53; // rdx
  double v54; // xmm4_8
  double v55; // xmm5_8
  double v56; // xmm4_8
  double v57; // xmm5_8
  unsigned __int8 *v58; // rdi
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r8
  int *v61; // rax
  int *v62; // rbp
  __int64 v63; // r12
  _QWORD *v64; // r15
  char *v65; // rcx
  __int64 v66; // r12
  char *v67; // r14
  __int64 v68; // r13
  char *v69; // rbp
  _QWORD *v70; // rbx
  const char *v71; // rdi
  const char *v72; // rsi
  int v73; // eax
  _QWORD *v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rcx
  _BYTE *v77; // rax
  size_t v78; // r15
  __int64 v79; // r12
  __int64 v80; // rcx
  int *v81; // rax
  __int64 v82; // rdx
  _BOOL8 v83; // rdi
  char *v84; // r12
  _BYTE *v85; // rax
  __int64 v86; // r8
  double v87; // xmm4_8
  double v88; // xmm5_8
  void *v89; // rcx
  __int64 v90; // r13
  __int64 v91; // rbx
  const char *v92; // rsi
  _QWORD *v93; // r15
  const char *v94; // r14
  const char *v95; // r12
  const char *v96; // rdi
  _QWORD *v97; // rbp
  const char *v98; // rsi
  int v99; // eax
  _QWORD *v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rdx
  char *v103; // r9
  char *v104; // rdi
  char v105; // al
  __int64 v106; // rdx
  double v107; // xmm4_8
  double v108; // xmm5_8
  int *v109; // rax
  int *v110; // r14
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r13
  char *v114; // r9
  __int64 v115; // rcx
  __int64 v116; // r8
  int *v117; // rax
  __int64 v118; // rdx
  _BOOL8 v119; // rdi
  char *v120; // r12
  double v121; // xmm4_8
  double v122; // xmm5_8
  char *v123; // rdi
  char v124; // al
  __int64 v125; // rdx
  size_t v126; // rbp
  double v127; // xmm4_8
  double v128; // xmm5_8
  unsigned __int8 *v129; // rax
  double v130; // xmm4_8
  double v131; // xmm5_8
  __int64 v132; // rbp
  __int64 v133; // rbx
  double v134; // xmm4_8
  double v135; // xmm5_8
  void *v136; // rdi
  void *v137; // rdi
  _QWORD *v138; // r14
  _QWORD *v139; // r14
  unsigned __int64 v140; // [rsp+8h] [rbp-160h]
  char *v141; // [rsp+8h] [rbp-160h]
  char *v142; // [rsp+8h] [rbp-160h]
  unsigned __int64 v143; // [rsp+8h] [rbp-160h]
  size_t v144; // [rsp+8h] [rbp-160h]
  size_t v146; // [rsp+10h] [rbp-158h]
  size_t v147; // [rsp+10h] [rbp-158h]
  char *s1; // [rsp+18h] [rbp-150h]
  char *s1a; // [rsp+18h] [rbp-150h]
  __int64 v150; // [rsp+20h] [rbp-148h]
  int v151; // [rsp+28h] [rbp-140h]
  unsigned __int8 *v152; // [rsp+28h] [rbp-140h]
  char *v154; // [rsp+30h] [rbp-138h]
  unsigned __int64 v155; // [rsp+48h] [rbp-120h]
  unsigned __int64 v156; // [rsp+58h] [rbp-110h] BYREF
  void *ptr; // [rsp+60h] [rbp-108h] BYREF
  __int128 v158; // [rsp+68h] [rbp-100h]
  __int64 v159; // [rsp+80h] [rbp-E8h] BYREF
  int v160; // [rsp+88h] [rbp-E0h] BYREF
  int *v161; // [rsp+90h] [rbp-D8h]
  int *v162; // [rsp+98h] [rbp-D0h]
  int *v163; // [rsp+A0h] [rbp-C8h]
  __int64 v164; // [rsp+A8h] [rbp-C0h]
  char *s2; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v166; // [rsp+B8h] [rbp-B0h] BYREF
  __int128 *v167; // [rsp+C8h] [rbp-A0h]
  __int128 *v168; // [rsp+D0h] [rbp-98h]
  __int64 v169; // [rsp+D8h] [rbp-90h]
  unsigned __int8 v170[8]; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v171; // [rsp+E8h] [rbp-80h]
  __int64 v172; // [rsp+F8h] [rbp-70h]
  char s[40]; // [rsp+100h] [rbp-68h] BYREF
  unsigned __int64 v174; // [rsp+128h] [rbp-40h]

  v13 = a2;
  v174 = __readfsqword(0x28u);
  while ( 1 )
  {
    v16 = *a1;
    if ( *a1 == 7 )
    {
      v33 = *((_QWORD *)a1 + 2);
      v34 = a1;
      if ( !v33 )
      {
        v13 = 0;
        if ( (a5 & 1) == 0 )
          v13 = 0;
        goto LABEL_25;
      }
      v46 = v33 - 1;
      if ( a2 >= 0 || (v13 = v46 + a2, (__int64)(v46 + a2) >= 0) )
      {
        if ( v46 <= v13 )
          v13 = v33 - 1;
        if ( (a5 & 1) == 0 )
        {
LABEL_54:
          if ( (a3 & 0x8000000000000000LL) == 0LL )
          {
            v33 = v13;
            if ( v46 > a3 )
              v46 = a3;
            if ( v46 >= v13 )
              v13 = v46;
            goto LABEL_25;
          }
          goto LABEL_46;
        }
        if ( (__int64)(v13 + 1) < 0 )
        {
          v13 = 0x7FFFFFFFFFFFFFFFLL;
          a3 = 0x8000000000000000LL;
LABEL_46:
          v33 = v13;
          if ( (__int64)(v46 + a3) >= 0 )
          {
            if ( v46 > v46 + a3 )
              v46 += a3;
            if ( v46 >= v13 )
              v13 = v46;
          }
          goto LABEL_25;
        }
        v33 = v13++;
      }
      else
      {
        v13 = 0;
        if ( (a5 & 1) == 0 )
          goto LABEL_54;
        v33 = 0;
        v13 = 1;
      }
      if ( v46 < v13 )
      {
        if ( v46 < v33 )
          v46 = v33;
        v13 = v46;
      }
LABEL_25:
      v35 = *a4 == 7;
      v170[0] = 2;
      v172 = 0;
      v171 = 0;
      if ( !v35 )
      {
        v32 = sub_4418C0(v170, a4, 0.0, a7, a8, a9, a10, a11, a12, a13);
        if ( v32 || (v32 = sub_441D50((__int64)v170, 0.0, a7, a8, a9, a10, a11, a12, a13)) != 0 )
        {
          sub_441540((__int64)v170, 0.0, a7, a8, a9, a10, a11, a12, a13);
          return v32;
        }
        a4 = v170;
      }
      v36 = *((_QWORD *)a4 + 2);
      v37 = v13 - v33;
      if ( v36 )
      {
        --v36;
        v38 = *((char **)a1 + 1);
        if ( v36 >= v37 )
        {
          v140 = v13 - v33;
          memcpy(&v38[v33], *((const void **)a4 + 1), v13 - v33);
          if ( v13 - v33 >= v36 )
          {
LABEL_39:
            sub_441540((__int64)v170, 0.0, a7, a8, a9, a10, a11, a12, a13);
            return 0;
          }
          v39 = byte_49111D;
          v40 = v36 + v33 - v13;
          if ( *((_QWORD *)a4 + 2) | v140 )
            v39 = (char *)(v140 + *((_QWORD *)a4 + 1));
          v41 = *((_QWORD *)a1 + 2);
          v42 = *((_QWORD *)a1 + 3);
          v43 = *((_BYTE **)a1 + 1);
          if ( v41 )
          {
            --v41;
            v44 = v40 + v41;
            v45 = v40 + v41 + 1;
            if ( v42 >= v45 )
              goto LABEL_36;
            v58 = a1 + 8;
          }
          else
          {
            v45 = v40 + 1;
            v58 = a1 + 8;
            v44 = v40;
            if ( v42 >= v40 + 1 )
            {
              *((_QWORD *)v34 + 2) = v45;
              v43[v40] = 0;
LABEL_38:
              memmove((void *)(v41 + *((_QWORD *)v34 + 1)), v39, v40);
              goto LABEL_39;
            }
          }
          v146 = v44;
          v142 = v39;
          v77 = sub_481540((__int64)v58, v43, v45, 1u);
          *((_QWORD *)v34 + 1) = v77;
          v44 = v146;
          v43 = v77;
          v39 = v142;
LABEL_36:
          *((_QWORD *)v34 + 2) = v45;
          v43[v44] = 0;
          if ( v13 < v41 )
          {
            v59 = v41;
            v141 = v39;
            v41 = v13;
            memmove((void *)(v13 + *((_QWORD *)v34 + 1) + v40), (const void *)(v13 + *((_QWORD *)v34 + 1)), v59 - v13);
            v39 = v141;
          }
          goto LABEL_38;
        }
      }
      else
      {
        if ( v33 == v13 )
          goto LABEL_39;
        v38 = *((char **)a1 + 1);
      }
      v47 = *((_QWORD *)a1 + 2);
      if ( v47 )
      {
        v48 = v47 - 1;
        if ( v33 < v48 )
        {
          v49 = v33;
          v50 = v13 - v36;
          if ( v13 - v36 < v48 )
          {
            v144 = v13 - v33;
            v78 = v48 - v13 + v36;
            memmove(&v38[v33], &v38[v50], v78);
            v38 = *((char **)a1 + 1);
            v37 = v144;
            v49 = v78 + v33;
          }
          v51 = v49 + 1;
          v52 = v38;
          if ( *((_QWORD *)a1 + 3) < v49 + 1 )
          {
            v147 = v37;
            v143 = v49;
            v52 = sub_481540((__int64)(a1 + 8), v38, v49 + 1, 1u);
            v37 = v147;
            v49 = v143;
            *((_QWORD *)a1 + 1) = v52;
          }
          *((_QWORD *)a1 + 2) = v51;
          v52[v49] = 0;
          v38 = *((char **)a1 + 1);
        }
      }
      v53 = v36;
      if ( v37 <= v36 )
        v53 = v37;
      memcpy(&v38[v33], *((const void **)a4 + 1), v53);
      goto LABEL_39;
    }
    if ( v16 != 10 )
      break;
    a1 = sub_4419D0(a1, 0, a6, a7, a8, a9, a10, a11, a12, a13);
    if ( !a1 )
      return sub_479E90();
  }
  v17 = a1;
  if ( v16 != 5 )
    return sub_479EB0(0x620u);
  v19 = a5 & 1;
  if ( v19 )
  {
    sub_485490(s, 32, "%llu", a2);
    return (unsigned int)sub_443F90((__int64)a1, s, (__m128i *)a4, 0, a6, a7, a8, a9, v54, v55, a12, a13);
  }
  v160 = 0;
  v162 = &v160;
  v163 = &v160;
  v20 = *a4;
  v161 = nullptr;
  v164 = 0;
  if ( v20 != 5 )
  {
    if ( v20 != 7 )
    {
      v32 = sub_479EB0(0x620u);
      sub_443800(v161, a6, a7, a8, a9, v56, v57, a12, a13);
      return v32;
    }
    v21 = *((_QWORD *)a4 + 2);
    if ( v21 )
    {
      v60 = 0;
      do
      {
        if ( v60 >= v21 - 1 )
          break;
        v61 = v161;
        v62 = &v160;
        if ( !v161 )
          goto LABEL_109;
        do
        {
          if ( *((_QWORD *)v61 + 4) < v60 )
          {
            v61 = *((int **)v61 + 3);
          }
          else
          {
            v62 = v61;
            v61 = *((int **)v61 + 2);
          }
        }
        while ( v61 );
        if ( v62 == &v160 || v60 < *((_QWORD *)v62 + 4) )
        {
LABEL_109:
          s1a = (char *)v60;
          v79 = operator new(0x48u);
          *(_BYTE *)(v79 + 40) = 2;
          a6 = 0.0;
          *(_QWORD *)(v79 + 32) = s1a;
          *(_QWORD *)(v79 + 64) = 0;
          *(_OWORD *)(v79 + 48) = 0;
          v81 = (int *)sub_43CA40(&v159, v62, (unsigned __int64)s1a, v80, (__int64)s1a);
          v60 = (unsigned __int64)s1a;
          v62 = v81;
          if ( v82 )
          {
            v83 = v81 || &v160 == (int *)v82 || (unsigned __int64)s1a < *(_QWORD *)(v82 + 32);
            v62 = (int *)v79;
            std::_Rb_tree_insert_and_rebalance(v83, v79, v82, &v160);
            v60 = (unsigned __int64)s1a;
            ++v164;
          }
          else if ( v79 )
          {
            sub_441540(v79 + 40, 0.0, a7, a8, a9, a10, a11, a12, a13);
            operator delete((void *)v79, 0x48u);
            v60 = (unsigned __int64)s1a;
          }
        }
        v84 = byte_49111D;
        if ( *((_QWORD *)a4 + 2) | v60 )
          v84 = (char *)(*((_QWORD *)a4 + 1) + v60);
        sub_441540((__int64)(v62 + 10), a6, a7, a8, a9, a10, a11, a12, a13);
        *((_BYTE *)v62 + 40) = 7;
        a6 = 0.0;
        *(_OWORD *)(v62 + 14) = 0;
        *((_QWORD *)v62 + 6) = 0;
        v85 = sub_481540((__int64)(v62 + 12), nullptr, 2u, 1u);
        *((_QWORD *)v62 + 6) = v85;
        ++v19;
        *((_QWORD *)v62 + 7) = 2;
        v60 = v19;
        *v85 = *v84;
        *(_BYTE *)(*((_QWORD *)v62 + 6) + 1LL) = 0;
        v21 = *((_QWORD *)a4 + 2);
      }
      while ( v21 );
      goto LABEL_117;
    }
    goto LABEL_10;
  }
  a6 = 0.0;
  v63 = *((_QWORD *)a4 + 1);
  s2 = nullptr;
  v166 = 0;
  s2 = (char *)sub_481540((__int64)&s2, nullptr, 2u, 1u);
  *(_QWORD *)&v166 = 2;
  *s2 = 48;
  s2[1] = 0;
  v150 = v63 + 8;
  if ( !*(_QWORD *)(v63 + 16) )
  {
    if ( s2 )
    {
      *(_QWORD *)&v166 = 0;
      j__free(s2);
    }
    goto LABEL_117;
  }
  v64 = *(_QWORD **)(v63 + 16);
  v65 = (char *)::s1;
  v66 = v63 + 8;
  v67 = s2;
  v68 = v166;
  if ( (_QWORD)v166 )
    v65 = s2;
  v152 = a1;
  v69 = v65;
  while ( 2 )
  {
    v75 = v64[5];
    if ( v68 )
    {
      v70 = v64;
      if ( !v75 )
      {
        v71 = ::s1;
        v72 = v67;
        goto LABEL_91;
      }
LABEL_99:
      v71 = (const char *)v64[4];
      v72 = v69;
LABEL_91:
      v73 = strcmp(v71, v72);
      v74 = (_QWORD *)v64[2];
      v64 = (_QWORD *)v64[3];
      if ( v73 >= 0 )
      {
        v66 = (__int64)v70;
        v64 = v74;
      }
      if ( !v64 )
      {
        v17 = v152;
        v13 = a2;
        v103 = v67;
        goto LABEL_133;
      }
      continue;
    }
    break;
  }
  if ( v75 )
  {
LABEL_98:
    v70 = v64;
    goto LABEL_99;
  }
  while ( 1 )
  {
    v76 = v64[2];
    if ( !v76 )
      break;
    v66 = (__int64)v64;
    v64 = (_QWORD *)v64[2];
    if ( *(_QWORD *)(v76 + 40) )
      goto LABEL_98;
  }
  v103 = v67;
  v139 = v64;
  v17 = v152;
  v13 = a2;
  v66 = (__int64)v139;
LABEL_133:
  if ( v103 )
  {
    *(_QWORD *)&v166 = 0;
    j__free(v103);
  }
  if ( v150 != v66 )
  {
    while ( 2 )
    {
      if ( !*(_QWORD *)(v66 + 40) )
        goto LABEL_117;
      v104 = *(char **)(v66 + 32);
      v105 = *v104;
      if ( !*v104 )
        goto LABEL_117;
      v106 = *(_QWORD *)(v66 + 32);
      if ( v105 != 48 )
      {
        while ( (unsigned __int8)(v105 - 48) <= 9u )
        {
          v105 = *(_BYTE *)++v106;
          if ( !v105 )
            goto LABEL_141;
        }
        goto LABEL_117;
      }
      if ( v104[1] )
        goto LABEL_117;
LABEL_141:
      sub_485540(v104, "%llu", &s2);
      v109 = v161;
      if ( v161 )
      {
        v110 = &v160;
        do
        {
          while ( 1 )
          {
            v111 = *((_QWORD *)v109 + 2);
            v112 = *((_QWORD *)v109 + 3);
            if ( *((_QWORD *)v109 + 4) >= (unsigned __int64)s2 )
              break;
            v109 = *((int **)v109 + 3);
            if ( !v112 )
              goto LABEL_146;
          }
          v110 = v109;
          v109 = *((int **)v109 + 2);
        }
        while ( v111 );
LABEL_146:
        if ( v110 == &v160 || (unsigned __int64)s2 < *((_QWORD *)v110 + 4) )
        {
LABEL_148:
          v113 = operator new(0x48u);
          *(_BYTE *)(v113 + 40) = 2;
          a6 = 0.0;
          v114 = s2;
          *(_QWORD *)(v113 + 32) = s2;
          *(_QWORD *)(v113 + 64) = 0;
          *(_OWORD *)(v113 + 48) = 0;
          v154 = v114;
          v117 = (int *)sub_43CA40(&v159, v110, (unsigned __int64)v114, v115, v116);
          v110 = v117;
          if ( v118 )
          {
            v119 = v117 || &v160 == (int *)v118 || (unsigned __int64)v154 < *(_QWORD *)(v118 + 32);
            v110 = (int *)v113;
            std::_Rb_tree_insert_and_rebalance(v119, v113, v118, &v160);
            ++v164;
          }
          else if ( v113 )
          {
            sub_441540(v113 + 40, 0.0, a7, a8, a9, v107, v108, a12, a13);
            operator delete((void *)v113, 0x48u);
          }
        }
        sub_4418C0((unsigned __int8 *)v110 + 40, (unsigned __int8 *)(v66 + 56), 0.0, a7, a8, a9, v107, v108, a12, a13);
        v66 = std::_Rb_tree_increment(v66);
        if ( v66 == v150 )
          goto LABEL_117;
        continue;
      }
      break;
    }
    v110 = &v160;
    goto LABEL_148;
  }
LABEL_117:
  v19 = v164;
LABEL_10:
  s1 = *((char **)v17 + 1);
  v22 = a3 - v13;
  if ( (__int64)(a3 - v13) < 0 )
    v22 = 0;
  v151 = v19 - v22;
  if ( v19 == v22 )
    goto LABEL_13;
  a6 = 0.0;
  LODWORD(v166) = 0;
  v167 = &v166;
  v168 = &v166;
  *((_QWORD *)&v166 + 1) = 0;
  v169 = 0;
  ptr = nullptr;
  v158 = 0;
  ptr = sub_481540((__int64)&ptr, nullptr, 2u, 1u);
  *(_QWORD *)&v158 = 2;
  *(_BYTE *)ptr = 48;
  *((_BYTE *)ptr + 1) = 0;
  v89 = ptr;
  if ( !*((_QWORD *)s1 + 2) )
  {
    if ( ptr )
    {
      *(_QWORD *)&v158 = 0;
      j__free(ptr);
    }
    goto LABEL_165;
  }
  v90 = v158;
  v91 = (__int64)(s1 + 8);
  v92 = ::s1;
  v155 = v13;
  v93 = *((_QWORD **)s1 + 2);
  v94 = (const char *)ptr;
  if ( (_QWORD)v158 )
    v92 = (const char *)ptr;
  v95 = v92;
  while ( 2 )
  {
    v101 = v93[5];
    if ( v90 )
    {
      if ( !v101 )
      {
        v96 = ::s1;
        v97 = v93;
        v98 = v94;
        goto LABEL_124;
      }
LABEL_131:
      v96 = (const char *)v93[4];
      v97 = v93;
      v98 = v95;
LABEL_124:
      v99 = strcmp(v96, v98);
      v100 = (_QWORD *)v93[2];
      v93 = (_QWORD *)v93[3];
      if ( v99 >= 0 )
      {
        v91 = (__int64)v97;
        v93 = v100;
      }
      if ( !v93 )
      {
        v120 = s1 + 8;
        v13 = v155;
        v89 = (void *)v94;
        goto LABEL_161;
      }
      continue;
    }
    break;
  }
  if ( v101 )
    goto LABEL_131;
  while ( 1 )
  {
    v102 = v93[2];
    if ( !v102 )
      break;
    v91 = (__int64)v93;
    v93 = (_QWORD *)v93[2];
    if ( *(_QWORD *)(v102 + 40) )
      goto LABEL_131;
  }
  v89 = (void *)v94;
  v138 = v93;
  v120 = s1 + 8;
  v13 = v155;
  v91 = (__int64)v138;
LABEL_161:
  if ( v89 )
  {
    *(_QWORD *)&v158 = 0;
    j__free(v89);
  }
  while ( (char *)v91 != v120 )
  {
    if ( !*(_QWORD *)(v91 + 40) )
      break;
    v123 = *(char **)(v91 + 32);
    v124 = *v123;
    if ( !*v123 )
      break;
    v125 = *(_QWORD *)(v91 + 32);
    if ( v124 != 48 )
    {
      while ( (unsigned __int8)(v124 - 48) <= 9u )
      {
        v124 = *(_BYTE *)++v125;
        if ( !v124 )
          goto LABEL_170;
      }
      break;
    }
    if ( v123[1] )
      break;
LABEL_170:
    sub_485540(v123, "%llu", &v156);
    if ( v156 < v13 )
    {
      v91 = std::_Rb_tree_increment(v91);
    }
    else
    {
      if ( v156 >= a3 )
      {
        sub_485490(s, 32, "%llu", v156 + v151);
        a6 = 0.0;
        ptr = nullptr;
        v158 = 0;
        v126 = strlen(s);
        ptr = sub_481540((__int64)&ptr, nullptr, v126 + 1, 1u);
        *(_QWORD *)&v158 = v126 + 1;
        memmove(ptr, s, v126);
        *((_BYTE *)ptr + v126) = 0;
        v129 = (unsigned __int8 *)sub_43DCB0(
                                    &s2,
                                    (__int64)&ptr,
                                    0.0,
                                    *(double *)a7.m128_u64,
                                    a8,
                                    a9,
                                    v127,
                                    v128,
                                    a12,
                                    a13);
        sub_4418C0(v129, (unsigned __int8 *)(v91 + 56), 0.0, a7, a8, a9, v130, v131, a12, a13);
        if ( ptr )
        {
          *(_QWORD *)&v158 = 0;
          j__free(ptr);
        }
      }
      v132 = std::_Rb_tree_increment(v91);
      v133 = std::_Rb_tree_rebalance_for_erase(v91, v120);
      sub_441540(v133 + 56, 0.0, a7, a8, a9, v134, v135, a12, a13);
      v136 = *(void **)(v133 + 32);
      if ( v136 )
      {
        *(_QWORD *)(v133 + 40) = 0;
        j__free(v136);
      }
      v137 = (void *)v133;
      v91 = v132;
      operator delete(v137, 0x58u);
      --*((_QWORD *)s1 + 5);
    }
  }
LABEL_165:
  sub_441DE0(s1, (__int64)v167, (__int64)&v166, (__int64)v89, v86, 0.0, a7, a8, a9, v87, v88, a12, a13);
  sub_445BA0(*((_QWORD **)&v166 + 1), 0.0, a7, a8, a9, v121, v122, a12, a13);
LABEL_13:
  for ( i = (__int64)v162; (int *)i != &v160; i = std::_Rb_tree_increment(i) )
  {
    sub_485490(s, 32, "%llu", v13);
    a7 = 0;
    s2 = nullptr;
    v166 = 0;
    v24 = strlen(s);
    v25 = v24 + 1;
    v26 = v24;
    s2 = (char *)sub_481540((__int64)&s2, nullptr, v24 + 1, 1u);
    *(_QWORD *)&v166 = v25;
    memmove(s2, s, v26);
    s2[v26] = 0;
    v29 = (unsigned __int8 *)sub_43DCB0(s1, (__int64)&s2, a6, 0.0, a8, a9, v27, v28, a12, a13);
    sub_4418C0(v29, (unsigned __int8 *)(i + 40), a6, (__m128)0LL, a8, a9, v30, v31, a12, a13);
    if ( s2 )
    {
      *(_QWORD *)&v166 = 0;
      j__free(s2);
    }
    ++v13;
  }
  sub_443800(v161, a6, a7, a8, a9, a10, a11, a12, a13);
  return 0;
}
// 43E0D6: variable 'v27' is possibly undefined
// 43E0D6: variable 'v28' is possibly undefined
// 43E0E3: variable 'v30' is possibly undefined
// 43E0E3: variable 'v31' is possibly undefined
// 43E12B: variable 'a10' is possibly undefined
// 43E12B: variable 'a11' is possibly undefined
// 43E424: variable 'v54' is possibly undefined
// 43E424: variable 'v55' is possibly undefined
// 43E444: variable 'v56' is possibly undefined
// 43E444: variable 'v57' is possibly undefined
// 43E74D: variable 'v80' is possibly undefined
// 43E75D: variable 'v82' is possibly undefined
// 43EABF: variable 'v115' is possibly undefined
// 43EABF: variable 'v116' is possibly undefined
// 43EACA: variable 'v118' is possibly undefined
// 43EB08: variable 'v107' is possibly undefined
// 43EB08: variable 'v108' is possibly undefined
// 43EBB9: variable 'v89' is possibly undefined
// 43EBB9: variable 'v86' is possibly undefined
// 43EBB9: variable 'v87' is possibly undefined
// 43EBB9: variable 'v88' is possibly undefined
// 43EBC6: variable 'v121' is possibly undefined
// 43EBC6: variable 'v122' is possibly undefined
// 43ECC0: variable 'v127' is possibly undefined
// 43ECC0: variable 'v128' is possibly undefined
// 43ECCD: variable 'v130' is possibly undefined
// 43ECCD: variable 'v131' is possibly undefined
// 43ED07: variable 'v134' is possibly undefined
// 43ED07: variable 'v135' is possibly undefined
// 4050E0: using guessed type __int64 __fastcall std::_Rb_tree_insert_and_rebalance(_QWORD, _QWORD, _QWORD, _QWORD);
// 4053F0: using guessed type __int64 __fastcall std::_Rb_tree_rebalance_for_erase(_QWORD, _QWORD);
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 405760: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
