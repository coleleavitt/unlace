__int64 __fastcall sub_EF0C10(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, int a5, int a6, double a7)
{
  int v7; // r8d
  int v8; // r9d
  char *v9; // rbx
  char *v10; // r13
  __int64 v11; // rax
  char v12; // al
  bool v13; // zf
  char *v14; // rdx
  char *v15; // r15
  char *v16; // rax
  char *v17; // rdx
  char v18; // bl
  char v19; // r14
  char *v20; // r10
  __int64 v21; // r12
  __int64 (__fastcall *v22)(__int64); // rax
  __int16 v23; // ax
  int v24; // ebx
  char *v25; // rax
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // r9d
  char *v29; // r10
  __int64 v30; // rsi
  int v31; // eax
  char *v32; // rcx
  int v33; // r14d
  unsigned int v34; // ebx
  _QWORD *v35; // rdi
  __int64 *v36; // rsi
  size_t v38; // rax
  size_t v39; // rbx
  unsigned __int64 v40; // rcx
  char *v41; // rsi
  char *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r12
  void **v46; // rdx
  __int64 v47; // rax
  void **v48; // rsi
  int v49; // ecx
  __int64 *v50; // rdi
  size_t v51; // rax
  unsigned __int64 v52; // rcx
  size_t v53; // rax
  unsigned __int64 v54; // rcx
  size_t v55; // r12
  _BYTE *v56; // rax
  size_t v57; // r14
  unsigned __int64 v58; // rdx
  size_t v59; // rbx
  unsigned __int64 v60; // rdx
  size_t v61; // rbx
  _BYTE *v62; // rax
  size_t v63; // r12
  unsigned __int64 v64; // rdx
  size_t v65; // rbx
  unsigned __int64 v66; // rdx
  char *v67; // rax
  char *v68; // rbx
  __int64 v69; // rcx
  unsigned int v70; // r14d
  char i; // al
  int v72; // eax
  char *v73; // rdx
  size_t v74; // rbp
  _BYTE *v75; // rax
  unsigned __int64 v76; // r15
  unsigned __int64 v77; // rdx
  char v78; // r14
  unsigned __int64 v79; // r14
  unsigned __int64 v80; // rdx
  _BYTE *v81; // rsi
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // r13
  void **p_src; // rdx
  __int64 v86; // rax
  void **v87; // rsi
  int v88; // ecx
  __int64 *v89; // rdi
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rbx
  void **v93; // rdx
  __int64 v94; // rax
  void **v95; // rsi
  int v96; // ecx
  __int64 *v97; // rdi
  _WORD *v98; // rbx
  int v99; // ebp
  int v100; // r12d
  __int64 v101; // rbx
  _BYTE *v102; // rax
  size_t v103; // rbx
  unsigned __int64 v104; // rdx
  _BYTE *v105; // rdi
  int v106; // ebp
  int v107; // r12d
  __int64 v108; // r15
  __int64 v109; // rax
  __int64 v110; // r14
  char *v111; // rbx
  int v112; // r15d
  int v113; // ebx
  __int64 v114; // rbx
  __int64 v115; // r15
  int v116; // r12d
  __int64 v117; // rax
  int v118; // edx
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // r14
  char *v122; // rbx
  int v123; // r13d
  int v124; // ebx
  __int64 v125; // r15
  __int64 v126; // rax
  int v127; // r12d
  int v128; // [rsp+18h] [rbp-160h]
  char *v129; // [rsp+20h] [rbp-158h]
  char *v130; // [rsp+28h] [rbp-150h]
  char *s; // [rsp+30h] [rbp-148h]
  __int64 v136; // [rsp+70h] [rbp-108h]
  char *v137; // [rsp+70h] [rbp-108h]
  char *v138; // [rsp+70h] [rbp-108h]
  char *v139; // [rsp+70h] [rbp-108h]
  unsigned __int64 v140; // [rsp+70h] [rbp-108h]
  char *v141; // [rsp+70h] [rbp-108h]
  __int64 v142; // [rsp+70h] [rbp-108h]
  __int64 v143; // [rsp+78h] [rbp-100h]
  char *v144; // [rsp+78h] [rbp-100h]
  int v145; // [rsp+78h] [rbp-100h]
  char *v146; // [rsp+80h] [rbp-F8h]
  char *v147; // [rsp+80h] [rbp-F8h]
  unsigned int v148; // [rsp+80h] [rbp-F8h]
  char *v149; // [rsp+80h] [rbp-F8h]
  __int64 v150; // [rsp+80h] [rbp-F8h]
  char *v151; // [rsp+80h] [rbp-F8h]
  int v152; // [rsp+80h] [rbp-F8h]
  unsigned int v153; // [rsp+98h] [rbp-E0h] BYREF
  int v154; // [rsp+9Ch] [rbp-DCh] BYREF
  void *v155[2]; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v156; // [rsp+B0h] [rbp-C8h] BYREF
  void *v157; // [rsp+C0h] [rbp-B8h] BYREF
  size_t v158; // [rsp+C8h] [rbp-B0h]
  _QWORD v159[2]; // [rsp+D0h] [rbp-A8h] BYREF
  void *v160; // [rsp+E0h] [rbp-98h] BYREF
  size_t v161; // [rsp+E8h] [rbp-90h]
  _QWORD v162[2]; // [rsp+F0h] [rbp-88h] BYREF
  void *src; // [rsp+100h] [rbp-78h] BYREF
  size_t n; // [rsp+108h] [rbp-70h] BYREF
  char v165; // [rsp+110h] [rbp-68h] BYREF
  __int64 v166; // [rsp+118h] [rbp-60h] BYREF
  char v167; // [rsp+120h] [rbp-58h]
  __int64 v168; // [rsp+12Ch] [rbp-4Ch]
  char v169; // [rsp+134h] [rbp-44h]

  sub_EEE340((__int64)v155, *(_QWORD *)(a1 + 48), (__int64)a3, (int)a4, a5, a6);
  v9 = (char *)v155[0];
  v10 = (char *)v155[0] + (unsigned __int64)v155[1];
  v128 = (int)v155[0];
  if ( *(_BYTE *)(a1 + 12) )
  {
    LOBYTE(v159[0]) = 0;
    v73 = (char *)v159;
    v158 = 0;
    v157 = v159;
    if ( v10 == v155[0] )
    {
      v81 = v159;
    }
    else
    {
      v74 = 0;
      do
      {
        v78 = *v9;
        if ( *v9 == 36 )
        {
          if ( v74 == 0x7FFFFFFFFFFFFFFFLL || v74 == 9223372036854775806LL )
LABEL_219:
            std::__throw_length_error("basic_string::append");
          v79 = v74 + 2;
          if ( v157 == v159 )
            v80 = 15;
          else
            v80 = v159[0];
          if ( v79 > v80 )
            sub_998B30((__int64)&v157, v74, 0, "$$", 2u);
          else
            *(_WORD *)((char *)v157 + v74) = 9252;
          v158 = v74 + 2;
          *((_BYTE *)v157 + v79) = 0;
        }
        else
        {
          v75 = v157;
          v76 = v74 + 1;
          if ( v157 == v159 )
            v77 = 15;
          else
            v77 = v159[0];
          if ( v76 > v77 )
          {
            sub_998B30((__int64)&v157, v74, 0, nullptr, 1u);
            v75 = v157;
          }
          v75[v74] = v78;
          v158 = v74 + 1;
          *((_BYTE *)v157 + v76) = 0;
        }
        ++v9;
        v74 = v158;
      }
      while ( v10 != v9 );
      v81 = v157;
      v73 = (char *)v157 + v158;
    }
    LODWORD(src) = 0;
    n = (size_t)&v166;
    sub_EE94D0(&n, v81, (__int64)v73);
    v168 = 0;
    v169 = 0;
    v82 = *(unsigned int *)(a2 + 8);
    v83 = v82 + 1;
    if ( v82 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      v109 = *(_QWORD *)a2;
      v110 = a2 + 16;
      if ( *(_QWORD *)a2 > (unsigned __int64)&src || (unsigned __int64)&src >= v109 + 56 * v82 )
      {
        v84 = sub_2237400(a2, a2 + 16, v83, 56, &v160);
        sub_EF0AE0((__int64 *)a2, v84);
        v113 = (int)v160;
        if ( v110 != *(_QWORD *)a2 )
          free(*(void **)a2);
        p_src = &src;
        *(_QWORD *)a2 = v84;
        v82 = *(unsigned int *)(a2 + 8);
        *(_DWORD *)(a2 + 12) = v113;
      }
      else
      {
        v111 = (char *)&src - v109;
        v84 = sub_2237400(a2, a2 + 16, v83, 56, &v160);
        sub_EF0AE0((__int64 *)a2, v84);
        v112 = (int)v160;
        if ( v110 != *(_QWORD *)a2 )
          free(*(void **)a2);
        p_src = (void **)&v111[v84];
        *(_QWORD *)a2 = v84;
        v82 = *(unsigned int *)(a2 + 8);
        *(_DWORD *)(a2 + 12) = v112;
      }
    }
    else
    {
      v84 = *(_QWORD *)a2;
      p_src = &src;
    }
    v86 = v84 + 56 * v82;
    *(_DWORD *)v86 = *(_DWORD *)p_src;
    *(_QWORD *)(v86 + 8) = v86 + 24;
    v87 = (void **)p_src[1];
    if ( v87 == p_src + 3 )
    {
      *(__m128i *)(v86 + 24) = _mm_loadu_si128((const __m128i *)(p_src + 3));
    }
    else
    {
      *(_QWORD *)(v86 + 8) = v87;
      *(_QWORD *)(v86 + 24) = p_src[3];
    }
    *(_QWORD *)(v86 + 16) = p_src[2];
    p_src[1] = p_src + 3;
    v88 = *((_DWORD *)p_src + 10);
    p_src[2] = nullptr;
    *((_BYTE *)p_src + 24) = 0;
    *(_DWORD *)(v86 + 40) = v88;
    *(_QWORD *)(v86 + 44) = *(void **)((char *)p_src + 44);
    *(_DWORD *)(v86 + 52) = *((_DWORD *)p_src + 13);
    v89 = (__int64 *)n;
    ++*(_DWORD *)(a2 + 8);
    if ( v89 != &v166 )
      operator delete(v89);
    if ( v157 != v159 )
      operator delete(v157);
    v34 = 0;
    v36 = (__int64 *)v155[0];
    goto LABEL_32;
  }
  LOBYTE(v162[0]) = 0;
  v160 = v162;
  v161 = 0;
  v11 = a3[2181];
  v153 = 0;
  v154 = 0;
  v12 = *(_BYTE *)(v11 + 275);
  if ( v10 == v155[0] )
  {
    v34 = 0;
    v36 = (__int64 *)v155[0];
    goto LABEL_32;
  }
  v13 = v12 == 0;
  v14 = "$)";
  v15 = (char *)v155[0];
  if ( v12 )
    v14 = "}";
  v16 = "$(";
  s = v14;
  v17 = "$|";
  if ( !v13 )
    v17 = "|";
  v130 = v17;
  if ( !v13 )
    v16 = "{";
  v129 = v16;
  do
  {
    v18 = *v15;
    if ( *v15 == 123 )
    {
      v51 = strlen(v129);
      if ( 0x7FFFFFFFFFFFFFFFLL - v161 < v51 )
        goto LABEL_219;
      v39 = v161 + v51;
      if ( v160 == v162 )
        v52 = 15;
      else
        v52 = v162[0];
      if ( v39 > v52 )
      {
        sub_998B30((__int64)&v160, v161, 0, v129, v51);
        goto LABEL_43;
      }
      v41 = (char *)v160 + v161;
      v13 = v51 == 1;
      v42 = v129;
      if ( !v13 )
        goto LABEL_42;
      goto LABEL_58;
    }
    if ( v18 > 123 )
    {
      if ( v18 == 124 )
      {
        v53 = strlen(v130);
        if ( 0x7FFFFFFFFFFFFFFFLL - v161 < v53 )
          goto LABEL_219;
        v39 = v161 + v53;
        if ( v160 == v162 )
          v54 = 15;
        else
          v54 = v162[0];
        if ( v39 > v54 )
        {
          sub_998B30((__int64)&v160, v161, 0, v130, v53);
          goto LABEL_43;
        }
        v41 = (char *)v160 + v161;
        v13 = v53 == 1;
        v42 = v130;
        if ( v13 )
        {
          *v41 = *v130;
          goto LABEL_43;
        }
        goto LABEL_42;
      }
      if ( v18 != 125 )
      {
LABEL_65:
        v55 = v161;
        v56 = v160;
        v57 = v161 + 1;
        if ( v160 == v162 )
          v58 = 15;
        else
          v58 = v162[0];
        if ( v57 > v58 )
        {
          sub_998B30((__int64)&v160, v161, 0, nullptr, 1u);
          v56 = v160;
        }
        v56[v55] = v18;
        ++v15;
        v161 = v57;
        *((_BYTE *)v160 + v55 + 1) = 0;
        continue;
      }
      v38 = strlen(s);
      if ( 0x7FFFFFFFFFFFFFFFLL - v161 < v38 )
        goto LABEL_219;
      v39 = v161 + v38;
      if ( v160 == v162 )
        v40 = 15;
      else
        v40 = v162[0];
      if ( v39 > v40 )
      {
        sub_998B30((__int64)&v160, v161, 0, s, v38);
        goto LABEL_43;
      }
      v41 = (char *)v160 + v161;
      v13 = v38 == 1;
      v42 = s;
      if ( !v13 )
      {
LABEL_42:
        *(_WORD *)v41 = *(_WORD *)v42;
LABEL_43:
        v161 = v39;
        ++v15;
        *((_BYTE *)v160 + v39) = 0;
        continue;
      }
LABEL_58:
      *v41 = *v42;
      goto LABEL_43;
    }
    if ( v18 == 36 )
    {
      v59 = v161;
      if ( v161 == 0x7FFFFFFFFFFFFFFFLL || v161 == 9223372036854775806LL )
        goto LABEL_219;
      if ( v160 == v162 )
        v60 = 15;
      else
        v60 = v162[0];
      if ( v161 + 2 > v60 )
      {
        sub_998B30((__int64)&v160, v161, 0, "$$", 2u);
      }
      else
      {
        v7 = 9252;
        *(_WORD *)((char *)v160 + v161) = 9252;
      }
      v161 = v59 + 2;
      ++v15;
      *((_BYTE *)v160 + v59 + 2) = 0;
      continue;
    }
    if ( v18 != 37 )
      goto LABEL_65;
    if ( v10 == v15 + 1 )
      goto LABEL_169;
    v19 = v15[1];
    v20 = v15 + 2;
    if ( v19 == 61 )
    {
      v65 = v161;
      if ( 0x7FFFFFFFFFFFFFFFLL - v161 <= 6 )
        goto LABEL_219;
      if ( v160 == v162 )
        v66 = 15;
      else
        v66 = v162[0];
      if ( v161 + 7 > v66 )
      {
        sub_998B30((__int64)&v160, v161, 0, "${:uid}", 7u);
        v20 = v15 + 2;
      }
      else
      {
        v67 = (char *)v160 + v161;
        *(_DWORD *)v67 = 1966766884;
        *((_WORD *)v67 + 2) = 25705;
        v67[6] = 125;
      }
      v161 = v65 + 7;
      *((_BYTE *)v160 + v65 + 7) = 0;
      goto LABEL_92;
    }
    if ( v19 <= 61 )
    {
      if ( v19 == 37 )
        goto LABEL_77;
    }
    else if ( v19 == 123 || v19 == 125 )
    {
LABEL_77:
      v61 = v161;
      v62 = v160;
      v63 = v161 + 1;
      if ( v160 == v162 )
        v64 = 15;
      else
        v64 = v162[0];
      if ( v63 > v64 )
      {
        sub_998B30((__int64)&v160, v161, 0, nullptr, 1u);
        v62 = v160;
        v20 = v15 + 2;
      }
      v62[v61] = v19;
      v15 = v20;
      v161 = v63;
      *((_BYTE *)v160 + v61 + 1) = 0;
      continue;
    }
    v21 = a3[2181];
    v22 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 376LL);
    if ( v22 != sub_EE7CA0 )
    {
      ((void (__fastcall *)(void **, __int64, _QWORD))v22)(&src, v21, (unsigned int)v19);
      v20 = v15 + 2;
      if ( v167 )
      {
        v7 = n;
        v102 = v160;
        v103 = n + v161;
        if ( v160 == v162 )
          v104 = 15;
        else
          v104 = v162[0];
        if ( v103 > v104 )
        {
          sub_998B30((__int64)&v160, v161, 0, src, n);
          v102 = v160;
          v20 = v15 + 2;
        }
        else if ( n )
        {
          v105 = (char *)v160 + v161;
          if ( n == 1 )
          {
            *v105 = *(_BYTE *)src;
            v102 = v160;
          }
          else
          {
            memcpy(v105, src, n);
            v102 = v160;
            v20 = v15 + 2;
          }
        }
        v161 = v103;
        v102[v103] = 0;
        if ( v167 && src != &v165 )
        {
          v139 = v20;
          operator delete(src);
          v20 = v139;
        }
LABEL_92:
        v15 = v20;
        continue;
      }
    }
    if ( v161 )
    {
      v137 = v20;
      LODWORD(src) = 0;
      n = (size_t)&v166;
      sub_EE94D0(&n, v160, (__int64)v160 + v161);
      v20 = v137;
      v168 = 0;
      v169 = 0;
      v90 = *(unsigned int *)(a2 + 8);
      v91 = v90 + 1;
      if ( v90 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
      {
        v117 = *(_QWORD *)a2;
        if ( *(_QWORD *)a2 > (unsigned __int64)&src || (unsigned __int64)&src >= v117 + 56 * v90 )
        {
          v92 = sub_2237400(a2, a2 + 16, v91, 56, &v157);
          sub_EF0AE0((__int64 *)a2, v92);
          v8 = a2 + 16;
          v20 = v137;
          if ( a2 + 16 == *(_QWORD *)a2 )
          {
            *(_DWORD *)(a2 + 12) = (_DWORD)v157;
          }
          else
          {
            v145 = (int)v157;
            free(*(void **)a2);
            v20 = v137;
            *(_DWORD *)(a2 + 12) = v145;
          }
          v90 = *(unsigned int *)(a2 + 8);
          *(_QWORD *)a2 = v92;
          v93 = &src;
        }
        else
        {
          v151 = v137;
          v141 = (char *)&src - v117;
          v92 = sub_2237400(a2, a2 + 16, v91, 56, &v157);
          sub_EF0AE0((__int64 *)a2, v92);
          v8 = a2 + 16;
          v118 = (int)v157;
          v20 = v151;
          if ( a2 + 16 == *(_QWORD *)a2 )
          {
            v119 = a2;
            *(_QWORD *)a2 = v92;
            *(_DWORD *)(a2 + 12) = v118;
          }
          else
          {
            v152 = (int)v157;
            v144 = v20;
            free(*(void **)a2);
            v119 = a2;
            v20 = v144;
            *(_QWORD *)a2 = v92;
            *(_DWORD *)(a2 + 12) = v152;
          }
          v90 = *(unsigned int *)(v119 + 8);
          v93 = (void **)&v141[v92];
        }
      }
      else
      {
        v92 = *(_QWORD *)a2;
        v93 = &src;
      }
      v94 = v92 + 56 * v90;
      *(_DWORD *)v94 = *(_DWORD *)v93;
      *(_QWORD *)(v94 + 8) = v94 + 24;
      v95 = (void **)v93[1];
      if ( v95 == v93 + 3 )
      {
        *(__m128i *)(v94 + 24) = _mm_loadu_si128((const __m128i *)(v93 + 3));
      }
      else
      {
        *(_QWORD *)(v94 + 8) = v95;
        *(_QWORD *)(v94 + 24) = v93[3];
      }
      *(_QWORD *)(v94 + 16) = v93[2];
      v93[1] = v93 + 3;
      v96 = *((_DWORD *)v93 + 10);
      v93[2] = nullptr;
      *((_BYTE *)v93 + 24) = 0;
      *(_DWORD *)(v94 + 40) = v96;
      *(_QWORD *)(v94 + 44) = *(void **)((char *)v93 + 44);
      *(_DWORD *)(v94 + 52) = *((_DWORD *)v93 + 13);
      v97 = (__int64 *)n;
      ++*(_DWORD *)(a2 + 8);
      if ( v97 != &v166 )
      {
        v138 = v20;
        operator delete(v97);
        v20 = v138;
      }
      v161 = 0;
      *(_BYTE *)v160 = 0;
    }
    v23 = *(_WORD *)&byte_2411740[2 * (unsigned __int8)v19];
    if ( (v23 & 0x60) != 0 )
    {
      if ( v10 == v20 )
      {
LABEL_169:
        v34 = 2322;
        v35 = v160;
        *a4 = (_DWORD)v10 - v128 - 1;
        goto LABEL_29;
      }
      v13 = v19 == 99;
      v68 = v20;
      v19 = v15[2];
      if ( v13 && v19 == 99 )
      {
        v68 = v15 + 3;
        v19 = v15[3];
      }
      v20 = v68 + 1;
      v69 = a3[289];
      v136 = a3[290];
      v143 = v69;
      if ( (byte_2411740[2 * (unsigned __int8)v19] & 8) == 0 )
        goto LABEL_23;
      if ( v68 == v10 )
      {
        v70 = 0;
LABEL_101:
        v148 = *(_DWORD *)(a1 + 16);
        if ( (unsigned int)sub_EEE650((unsigned __int16 *)a1, a1, v148, v69, v7, v8)
           + *(_DWORD *)(a1 + 80)
           + *(_DWORD *)(a1 + 20)
           + v148 <= v70 )
        {
          v72 = (_DWORD)v68 - v128;
          v34 = 2323;
          v35 = v160;
          *a4 = v72 - 1;
          goto LABEL_29;
        }
        src = &v165;
        sub_EE9590(&src, v15 + 1, (__int64)v68);
        if ( (**(_WORD **)(a1 + 48) & 0x1FF) == 9 )
        {
          v150 = *(_QWORD *)(a1 + 48);
          v106 = sub_C07A10(v150, (int)v15 - v128, v143, v136, v21, &v153, &v154);
          v107 = sub_C07A10(v150, (int)v68 - v128, v143, v136, v21, &v153, &v154);
        }
        else
        {
          v140 = *(_QWORD *)(a1 + 48);
          v106 = sub_EEB7E0(v140, (__int64)(v15 + 1), a7);
          v107 = sub_EEC140(v140);
        }
        if ( *(_DWORD *)(a2 + 12) <= *(_DWORD *)(a2 + 8) )
        {
          v125 = sub_2237400(a2, a2 + 16, 0, 56, &v157);
          v126 = v125 + 56LL * *(unsigned int *)(a2 + 8);
          *(_DWORD *)v126 = 1;
          *(_QWORD *)(v126 + 8) = v126 + 24;
          v142 = v126;
          sub_EE94D0((_QWORD *)(v126 + 8), src, (__int64)src + n);
          *(_DWORD *)(v142 + 40) = v70;
          *(_DWORD *)(v142 + 48) = v107;
          *(_DWORD *)(v142 + 44) = v106;
          *(_BYTE *)(v142 + 52) = 0;
          sub_EF0AE0((__int64 *)a2, v125);
          v8 = a2 + 16;
          v127 = (int)v157;
          if ( a2 + 16 != *(_QWORD *)a2 )
            free(*(void **)a2);
          *(_QWORD *)a2 = v125;
          *(_DWORD *)(a2 + 12) = v127;
          ++*(_DWORD *)(a2 + 8);
        }
        else
        {
          v108 = *(_QWORD *)a2 + 56LL * *(unsigned int *)(a2 + 8);
          *(_DWORD *)v108 = 1;
          *(_QWORD *)(v108 + 8) = v108 + 24;
          sub_EE94D0((_QWORD *)(v108 + 8), src, (__int64)src + n);
          *(_DWORD *)(v108 + 40) = v70;
          *(_DWORD *)(v108 + 44) = v106;
          *(_DWORD *)(v108 + 48) = v107;
          *(_BYTE *)(v108 + 52) = 0;
          ++*(_DWORD *)(a2 + 8);
        }
        if ( src != &v165 )
          operator delete(src);
        v15 = v68;
        continue;
      }
LABEL_97:
      v69 = (unsigned __int8)*(v20 - 1);
      v70 = 0;
      for ( i = *(v20 - 1); (byte_2411740[2 * v69] & 8) != 0; i = *v68 )
      {
        LODWORD(v69) = 5 * v70;
        ++v68;
        v70 = i + 10 * v70 - 48;
        if ( v10 == v68 )
          break;
        v69 = (unsigned __int8)*v68;
      }
      goto LABEL_101;
    }
    v143 = a3[289];
    v136 = a3[290];
    if ( (v23 & 8) != 0 )
    {
      v68 = v15 + 1;
      goto LABEL_97;
    }
LABEL_23:
    v24 = (_DWORD)v20 - v128;
    *a4 = (_DWORD)v20 - v128 - 1;
    if ( v19 != 91 )
    {
      v35 = v160;
      v34 = 2322;
      goto LABEL_29;
    }
    v146 = v20;
    v25 = (char *)memchr(v20, 93, v10 - v20);
    if ( !v25 )
    {
      v34 = 2325;
      goto LABEL_28;
    }
    v29 = v146;
    if ( v25 == v146 )
    {
      v34 = 2321;
      goto LABEL_28;
    }
    v30 = (__int64)v146;
    v147 = v25;
    v31 = sub_EEE710(a1, v30, v25 - v29, v26, v27, v28);
    v32 = v147;
    v33 = v31;
    if ( v31 == -1 )
    {
      *a4 = v24;
      v34 = 2324;
LABEL_28:
      v35 = v160;
      goto LABEL_29;
    }
    v149 = v147 + 1;
    src = &v165;
    sub_EE9590(&src, v15 + 1, (__int64)(v32 + 1));
    v98 = *(_WORD **)(a1 + 48);
    if ( (*v98 & 0x1FF) == 9 )
    {
      v99 = sub_C07A10(*(_QWORD *)(a1 + 48), (int)v15 - v128, v143, v136, v21, &v153, &v154);
      v100 = sub_C07A10((__int64)v98, (int)v149 - v128, v143, v136, v21, &v153, &v154);
    }
    else
    {
      v99 = sub_EEB7E0(*(_QWORD *)(a1 + 48), (__int64)(v15 + 1), a7);
      v100 = sub_EEC140((unsigned __int64)v98);
    }
    if ( *(_DWORD *)(a2 + 12) <= *(_DWORD *)(a2 + 8) )
    {
      v114 = sub_2237400(a2, a2 + 16, 0, 56, &v157);
      v115 = v114 + 56LL * *(unsigned int *)(a2 + 8);
      *(_DWORD *)v115 = 1;
      *(_QWORD *)(v115 + 8) = v115 + 24;
      sub_EE94D0((_QWORD *)(v115 + 8), src, (__int64)src + n);
      *(_DWORD *)(v115 + 40) = v33;
      *(_DWORD *)(v115 + 48) = v100;
      *(_DWORD *)(v115 + 44) = v99;
      *(_BYTE *)(v115 + 52) = 0;
      sub_EF0AE0((__int64 *)a2, v114);
      v8 = a2 + 16;
      v116 = (int)v157;
      if ( a2 + 16 != *(_QWORD *)a2 )
        free(*(void **)a2);
      *(_QWORD *)a2 = v114;
      *(_DWORD *)(a2 + 12) = v116;
      ++*(_DWORD *)(a2 + 8);
    }
    else
    {
      v101 = *(_QWORD *)a2 + 56LL * *(unsigned int *)(a2 + 8);
      *(_DWORD *)v101 = 1;
      *(_QWORD *)(v101 + 8) = v101 + 24;
      sub_EE94D0((_QWORD *)(v101 + 8), src, (__int64)src + n);
      *(_DWORD *)(v101 + 40) = v33;
      *(_DWORD *)(v101 + 44) = v99;
      *(_DWORD *)(v101 + 48) = v100;
      *(_BYTE *)(v101 + 52) = 0;
      ++*(_DWORD *)(a2 + 8);
    }
    if ( src != &v165 )
      operator delete(src);
    v15 = v149;
  }
  while ( v10 != v15 );
  v35 = v160;
  v34 = 0;
  if ( v161 )
  {
    LODWORD(src) = 0;
    n = (size_t)&v166;
    sub_EE94D0(&n, v160, (__int64)v160 + v161);
    v168 = 0;
    v169 = 0;
    v43 = *(unsigned int *)(a2 + 8);
    v44 = v43 + 1;
    if ( v43 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      v120 = *(_QWORD *)a2;
      v121 = a2 + 16;
      if ( *(_QWORD *)a2 > (unsigned __int64)&src || (unsigned __int64)&src >= v120 + 56 * v43 )
      {
        v45 = sub_2237400(a2, a2 + 16, v44, 56, &v157);
        sub_EF0AE0((__int64 *)a2, v45);
        v124 = (int)v157;
        if ( v121 != *(_QWORD *)a2 )
          free(*(void **)a2);
        v46 = &src;
        *(_QWORD *)a2 = v45;
        v43 = *(unsigned int *)(a2 + 8);
        *(_DWORD *)(a2 + 12) = v124;
      }
      else
      {
        v122 = (char *)&src - v120;
        v45 = sub_2237400(a2, a2 + 16, v44, 56, &v157);
        sub_EF0AE0((__int64 *)a2, v45);
        v123 = (int)v157;
        if ( v121 != *(_QWORD *)a2 )
          free(*(void **)a2);
        v46 = (void **)&v122[v45];
        *(_QWORD *)a2 = v45;
        v43 = *(unsigned int *)(a2 + 8);
        *(_DWORD *)(a2 + 12) = v123;
      }
    }
    else
    {
      v45 = *(_QWORD *)a2;
      v46 = &src;
    }
    v47 = v45 + 56 * v43;
    *(_DWORD *)v47 = *(_DWORD *)v46;
    *(_QWORD *)(v47 + 8) = v47 + 24;
    v48 = (void **)v46[1];
    if ( v48 == v46 + 3 )
    {
      *(__m128i *)(v47 + 24) = _mm_loadu_si128((const __m128i *)(v46 + 3));
    }
    else
    {
      *(_QWORD *)(v47 + 8) = v48;
      *(_QWORD *)(v47 + 24) = v46[3];
    }
    *(_QWORD *)(v47 + 16) = v46[2];
    v46[1] = v46 + 3;
    v49 = *((_DWORD *)v46 + 10);
    v46[2] = nullptr;
    *((_BYTE *)v46 + 24) = 0;
    *(_DWORD *)(v47 + 40) = v49;
    *(_QWORD *)(v47 + 44) = *(void **)((char *)v46 + 44);
    *(_DWORD *)(v47 + 52) = *((_DWORD *)v46 + 13);
    v50 = (__int64 *)n;
    ++*(_DWORD *)(a2 + 8);
    if ( v50 != &v166 )
      operator delete(v50);
    v35 = v160;
    v34 = 0;
  }
LABEL_29:
  if ( v35 != v162 )
    operator delete(v35);
  v36 = (__int64 *)v155[0];
LABEL_32:
  if ( v36 != &v156 )
    operator delete(v36);
  return v34;
}
