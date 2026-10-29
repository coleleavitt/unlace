__int64 __fastcall sub_728B90(_BYTE *a1, void **a2, __int64 a3, __int64 a4, __int64 (__fastcall *a5)())
{
  __int64 (__fastcall *v6)(); // rbp
  void **v7; // rbx
  unsigned int token; // r12d
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // r15
  char *v12; // r10
  size_t v13; // r11
  void *v14; // rdi
  char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  char *v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // r15
  const char *v24; // r14
  __int64 v25; // r12
  __int64 v26; // rcx
  void (__fastcall *v27)(__int64, char **, __int64 *); // r14
  const char *v28; // rsi
  __int64 v29; // rdx
  unsigned int v30; // ebx
  const char *file_line; // rax
  size_t v33; // rax
  char *v34; // r9
  size_t v35; // r10
  size_t v36; // rax
  char *v37; // r10
  size_t v38; // r9
  const char *v39; // rax
  void *v40; // rdi
  void *v41; // rdx
  void *v42; // rdi
  void *v43; // rdx
  __int64 v44; // rax
  size_t v45; // r13
  void *v46; // rbp
  char *v47; // rsi
  __m128i v48; // xmm0
  __int16 v49; // r9
  int v50; // r8d
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  char v54; // dl
  char *v55; // rax
  __m128i v56; // xmm0
  unsigned int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 *v60; // r13
  char **p_s2; // rsi
  const char *v62; // rbp
  char *v63; // rdx
  __int64 v64; // r14
  __int64 v65; // r13
  __int64 v66; // r12
  void *v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // rsi
  const char *v73; // rax
  __int64 v74; // rbp
  size_t v75; // rbp
  __m128i v76; // xmm0
  __m128i v77; // xmm0
  void *v78; // r9
  int v79; // r8d
  const char *v80; // rax
  char *v81; // rdx
  __int64 v82; // r13
  __int64 v83; // r12
  __int64 v84; // rbx
  void *v85; // rdi
  char v86; // al
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 *v89; // rax
  char *v90; // r14
  __int64 v91; // r15
  __int64 v92; // rbp
  const char **v93; // r13
  __int64 v94; // rbx
  size_t v95; // r9
  size_t v96; // r11
  __m128i v97; // xmm0
  __m128i v98; // xmm0
  const char *v99; // rax
  void *v100; // r15
  char *v101; // r15
  char **v102; // r15
  size_t v104; // [rsp+0h] [rbp-208h]
  char *srce; // [rsp+8h] [rbp-200h]
  void **src; // [rsp+8h] [rbp-200h]
  const char *srca; // [rsp+8h] [rbp-200h]
  char *srcb; // [rsp+8h] [rbp-200h]
  _BYTE *srcg; // [rsp+8h] [rbp-200h]
  _BYTE *srci; // [rsp+8h] [rbp-200h]
  void *srcd; // [rsp+8h] [rbp-200h]
  void *srcf; // [rsp+8h] [rbp-200h]
  void *srch; // [rsp+8h] [rbp-200h]
  void *srcc; // [rsp+8h] [rbp-200h]
  __int64 *v116; // [rsp+10h] [rbp-1F8h]
  void **v117; // [rsp+18h] [rbp-1F0h]
  size_t v118; // [rsp+18h] [rbp-1F0h]
  size_t v119; // [rsp+20h] [rbp-1E8h]
  int v120; // [rsp+20h] [rbp-1E8h]
  char *v121; // [rsp+20h] [rbp-1E8h]
  const char *v122; // [rsp+20h] [rbp-1E8h]
  __int64 (__fastcall *v123)(); // [rsp+20h] [rbp-1E8h]
  size_t v124; // [rsp+20h] [rbp-1E8h]
  char *v125; // [rsp+28h] [rbp-1E0h]
  __int16 v126; // [rsp+28h] [rbp-1E0h]
  size_t v127; // [rsp+28h] [rbp-1E0h]
  size_t v128; // [rsp+28h] [rbp-1E0h]
  int v129; // [rsp+34h] [rbp-1D4h] BYREF
  __int64 v130; // [rsp+38h] [rbp-1D0h] BYREF
  _QWORD v131[2]; // [rsp+40h] [rbp-1C8h] BYREF
  void *v132; // [rsp+50h] [rbp-1B8h] BYREF
  __int128 v133; // [rsp+58h] [rbp-1B0h]
  char *s; // [rsp+70h] [rbp-198h] BYREF
  __int128 v135; // [rsp+78h] [rbp-190h]
  char *s2; // [rsp+90h] [rbp-178h] BYREF
  __int128 v137; // [rsp+98h] [rbp-170h]
  __int64 v138; // [rsp+A8h] [rbp-160h]
  __int64 v139; // [rsp+B0h] [rbp-158h]
  __m128i v140; // [rsp+B8h] [rbp-150h] BYREF
  void *v141; // [rsp+D0h] [rbp-138h] BYREF
  size_t n[2]; // [rsp+D8h] [rbp-130h]
  __int64 v143; // [rsp+E8h] [rbp-120h]
  __int64 v144; // [rsp+F0h] [rbp-118h]
  __m128i v145[3]; // [rsp+F8h] [rbp-110h] BYREF
  char v146; // [rsp+130h] [rbp-D8h]
  __m128i v147; // [rsp+138h] [rbp-D0h] BYREF
  void *v148[2]; // [rsp+150h] [rbp-B8h] BYREF
  __int128 v149; // [rsp+160h] [rbp-A8h]
  __int64 v150; // [rsp+170h] [rbp-98h]
  __int64 v151; // [rsp+178h] [rbp-90h]
  __m128i v152; // [rsp+180h] [rbp-88h]
  void *dest; // [rsp+190h] [rbp-78h] BYREF
  __int128 v154; // [rsp+198h] [rbp-70h]
  __int64 v155; // [rsp+1A8h] [rbp-60h]
  __int64 v156; // [rsp+1B0h] [rbp-58h]
  __m128i v157; // [rsp+1B8h] [rbp-50h] BYREF
  unsigned __int64 v158; // [rsp+1C8h] [rbp-40h]

  v6 = a5;
  v7 = a2;
  v158 = __readfsqword(0x28u);
  if ( !a5 )
    v6 = off_2C57D00;
  s2 = nullptr;
  v138 = 0;
  v139 = 0;
  v141 = nullptr;
  v143 = 0;
  v144 = 0;
  v137 = 0;
  v140 = 0;
  *(_OWORD *)n = 0;
  v145[0] = 0;
  token = lex_get_token((int)a2);
  v9 = sub_780220(a2);
  v10 = *(_QWORD *)(v9 + 8);
  v11 = v9;
  if ( v10 > 1 )
  {
    *(_QWORD *)(v9 + 32) = 0;
    v12 = *(char **)v9;
    v13 = v10 - 1;
    v14 = *(void **)(v9 + 48);
    if ( *(_QWORD *)(v9 + 64) < v10 )
    {
      v125 = *(char **)v9;
      v119 = v10 - 1;
      srcd = (void *)v10;
      v44 = qvector_reserve(v9 + 48, v14, v10, 1);
      *(_QWORD *)(v11 + 48) = v44;
      v12 = v125;
      v14 = (void *)v44;
      v13 = v119;
      v10 = (unsigned __int64)srcd;
    }
    *(_QWORD *)(v11 + 56) = v10;
    v15 = v12;
    srce = (char *)v10;
    memmove(v14, v12, v13);
    srce[*(_QWORD *)(v11 + 48) - 1] = 0;
    *(_DWORD *)(v11 + 72) = 0;
    goto LABEL_7;
  }
  v15 = (char *)(v9 + 72);
  file_line = (const char *)lex_get_file_line(v7, v9 + 72, &s, 0);
  if ( file_line && (srca = file_line, v33 = strlen(file_line), v34 = (char *)srca, (v35 = v33) != 0) )
  {
    v42 = *(void **)(v11 + 24);
    v43 = (void *)(v33 + 1);
    if ( *(_QWORD *)(v11 + 40) < v33 + 1 )
    {
      v128 = v33;
      v122 = srca;
      srch = (void *)(v33 + 1);
      v88 = qvector_reserve(v11 + 24, v42, v43, 1);
      *(_QWORD *)(v11 + 24) = v88;
      v35 = v128;
      v42 = (void *)v88;
      v34 = (char *)v122;
      v43 = srch;
    }
    *(_QWORD *)(v11 + 32) = v43;
    v15 = v34;
    srci = (_BYTE *)v35;
    memmove(v42, v34, v35);
    srci[*(_QWORD *)(v11 + 24)] = 0;
  }
  else
  {
    *(_QWORD *)(v11 + 32) = 0;
  }
  if ( s )
  {
    srcb = s;
    v36 = strlen(s);
    v37 = srcb;
    v38 = v36;
    if ( v36 )
    {
      v40 = *(void **)(v11 + 48);
      v41 = (void *)(v36 + 1);
      if ( *(_QWORD *)(v11 + 64) < v36 + 1 )
      {
        v127 = v36;
        v121 = srcb;
        srcf = (void *)(v36 + 1);
        v87 = qvector_reserve(v11 + 48, v40, v41, 1);
        *(_QWORD *)(v11 + 48) = v87;
        v38 = v127;
        v40 = (void *)v87;
        v37 = v121;
        v41 = srcf;
      }
      *(_QWORD *)(v11 + 56) = v41;
      v15 = v37;
      srcg = (_BYTE *)v38;
      memmove(v40, v37, v38);
      srcg[*(_QWORD *)(v11 + 48)] = 0;
LABEL_7:
      if ( !token )
        goto LABEL_8;
LABEL_34:
      v39 = (const char *)qstrerror(token, v15, v16, v17);
      goto LABEL_35;
    }
  }
  *(_QWORD *)(v11 + 56) = 0;
  if ( token )
    goto LABEL_34;
LABEL_8:
  if ( (_WORD)v138 == 1 )
  {
    *a1 = 1;
LABEL_22:
    v30 = 1;
    goto LABEL_23;
  }
  v18 = lex_get_token((int)v7);
  if ( v18 )
    goto LABEL_44;
  if ( (_WORD)v143 != 61 )
  {
    v39 = (const char *)qstrerror(1347, &v141, v19, v20);
    goto LABEL_35;
  }
  v18 = lex_get_token((int)v7);
  if ( v18 )
  {
LABEL_44:
    v39 = (const char *)qstrerror(v18, &v141, v19, v20);
    goto LABEL_35;
  }
  v21 = (char *)haystack;
  if ( (_QWORD)v137 )
    v21 = s2;
  if ( a4 )
  {
    src = v7;
    v22 = 0;
    v23 = a4;
    v24 = v21;
    v25 = a3;
    do
    {
      if ( !strcmp(*(const char **)v25, v24) )
      {
        v7 = src;
        goto LABEL_19;
      }
      ++v22;
      v25 += 40;
    }
    while ( v23 != v22 );
    v7 = src;
    v25 = 0;
LABEL_19:
    v116 = (__int64 *)sub_780220(v7);
    v27 = nullptr;
    if ( v25 )
      goto LABEL_20;
  }
  else
  {
    v116 = (__int64 *)sub_780220(v7);
  }
  if ( (unsigned __int64)v116[1] <= 1 || (v89 = (__int64 *)sub_5E46D0(0.0, 0.0), *v89 == *v89 + 32 * v89[1]) )
  {
LABEL_114:
    p_s2 = &s2;
    v62 = (const char *)((__int64 (__fastcall *)(void **, char **, void **, double, double))v6)(
                          v7,
                          &s2,
                          &v141,
                          0.0,
                          0.0);
    goto LABEL_67;
  }
  srcc = (void *)(*v89 + 32 * v89[1]);
  v90 = (char *)haystack;
  v91 = *v89;
  if ( (_QWORD)v137 )
    v90 = s2;
  v117 = v7;
  v123 = v6;
  while ( 1 )
  {
    v92 = *(_QWORD *)(v91 + 8);
    if ( v92 )
    {
      v93 = *(const char ***)v91;
      v94 = 0;
      while ( 1 )
      {
        v25 = (__int64)v93;
        if ( !strcmp(*v93, v90) )
          break;
        ++v94;
        v93 += 5;
        if ( v92 == v94 )
          goto LABEL_126;
      }
      if ( v93 )
        break;
    }
LABEL_126:
    v91 += 32;
    if ( srcc == (void *)v91 )
    {
      v7 = v117;
      v6 = v123;
      goto LABEL_114;
    }
  }
  v7 = v117;
  v27 = *(void (__fastcall **)(__int64, char **, __int64 *))(v91 + 16);
LABEL_20:
  v150 = 0;
  v151 = 0;
  dest = nullptr;
  v155 = 0;
  v156 = 0;
  s = nullptr;
  v133 = 0;
  v149 = 0;
  v152 = 0;
  v154 = 0;
  v157 = 0;
  v135 = 0;
  v28 = (const char *)*(unsigned int *)(v25 + 16);
  v132 = nullptr;
  v129 = 0;
  v29 = (unsigned __int8)v28 & 0xF;
  v130 = 0;
  v131[0] = 0;
  v131[1] = 0;
  *(_OWORD *)v148 = 0;
  switch ( (unsigned __int8)v28 & 0xF )
  {
    case 1:
      if ( ((unsigned int)v28 & 0x2000000) != 0 )
        v86 = sub_728610((__int64 *)&v132, (__int64)v7, (__int64)&v141);
      else
        v86 = sub_727C20((__int64 *)&v132, (__int64)v7, (__int64)&v141, v26);
      if ( !v86 )
        goto LABEL_91;
      v60 = (__int64 *)haystack;
      if ( (_QWORD)v133 )
        v60 = (__int64 *)v132;
      goto LABEL_50;
    case 2:
      v60 = &v130;
      LODWORD(v78) = 0x8000000;
      v79 = 0x4000000;
      goto LABEL_84;
    case 3:
      if ( (unsigned __int16)v143 > 0x83u )
      {
        if ( (unsigned __int16)(v143 - 132) > 1u )
          goto LABEL_89;
      }
      else
      {
        if ( (unsigned __int16)v143 > 0x80u )
          goto LABEL_136;
        if ( (_WORD)v143 != 128 )
        {
LABEL_89:
          v80 = (const char *)qstrerror(1355, v28, v29, v26);
LABEL_90:
          sub_727620((__int64)v7, (__int64)"%s", v80);
        }
      }
      v129 = 1;
LABEL_136:
      v60 = (__int64 *)&v129;
      goto LABEL_50;
    case 5:
      v60 = &v130;
      v78 = &loc_2000000;
      v79 = 0x1000000;
LABEL_84:
      if ( (unsigned __int8)sub_7280C0(v25, &v130, v7, (__int64)&v141, v79, (int)v78) )
        goto LABEL_50;
LABEL_91:
      v81 = s;
      if ( s )
      {
        v82 = v135;
        if ( (_QWORD)v135 )
        {
          v83 = 0;
          v84 = 0;
          do
          {
            v85 = *(void **)&v81[v83];
            if ( v85 )
            {
              *(_QWORD *)&v81[v83 + 8] = 0;
              qfree(v85);
              v81 = s;
            }
            ++v84;
            v83 += 56;
          }
          while ( v82 != v84 );
        }
        *(_QWORD *)&v135 = 0;
        qfree(v81);
      }
      jvalue_t_clear(v131);
      if ( dest )
      {
        *(_QWORD *)&v154 = 0;
        qfree(dest);
      }
      if ( v148[1] )
      {
        *(_QWORD *)&v149 = 0;
        qfree(v148[1]);
      }
      if ( !v132 )
        goto LABEL_36;
      *(_QWORD *)&v133 = 0;
      v30 = 0;
      qfree(v132);
      goto LABEL_23;
    case 6:
      v74 = v137;
      v148[0] = v7;
      if ( (unsigned __int64)v137 > 1 )
      {
        v101 = s2;
        v148[1] = (void *)qvector_reserve(&v148[1], 0, v137, 1);
        *(_QWORD *)&v149 = v74;
        memmove(v148[1], v101, v74 - 1);
        *((_BYTE *)v148[1] + v74 - 1) = 0;
      }
      v75 = n[0];
      v76 = _mm_loadu_si128(&v140);
      LOWORD(v150) = v138;
      v152 = v76;
      HIDWORD(v150) = HIDWORD(v138);
      LOBYTE(v151) = v139;
      if ( n[0] > 1 )
      {
        v100 = v141;
        if ( *((_QWORD *)&v154 + 1) < n[0] )
          dest = (void *)qvector_reserve(&dest, dest, n[0], 1);
        *(_QWORD *)&v154 = v75;
        memmove(dest, v100, v75 - 1);
        *((char *)dest + v75 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v154 = 0;
      }
      v60 = (__int64 *)v148;
      v77 = _mm_loadu_si128(v145);
      LOWORD(v155) = v143;
      v157 = v77;
      HIDWORD(v155) = HIDWORD(v143);
      LOBYTE(v156) = v144;
      goto LABEL_50;
    case 7:
      v45 = n[0];
      if ( !n[0] )
      {
        v46 = nullptr;
        v47 = nullptr;
        v48 = _mm_loadu_si128(v145);
        v49 = v143;
        v50 = HIDWORD(v143);
        v146 = v144;
        v51 = 1;
        v147 = v48;
LABEL_47:
        v126 = v49;
        v120 = v50;
        s = (char *)qvector_reserve(&s, v47, v51, 56);
        v52 = v135;
        v47 = s;
        v49 = v126;
        v50 = v120;
        goto LABEL_48;
      }
      v46 = (void *)qalloc_or_throw(n[0], v28);
      memcpy(v46, v141, v45);
      v52 = v135;
      v98 = _mm_loadu_si128(v145);
      v47 = s;
      v146 = v144;
      v50 = HIDWORD(v143);
      v51 = v135 + 1;
      v49 = v143;
      v147 = v98;
      if ( *((_QWORD *)&v135 + 1) < (unsigned __int64)(v135 + 1) )
        goto LABEL_47;
LABEL_48:
      v53 = 7 * v52;
      v54 = v146;
      v55 = &v47[8 * v53];
      *(__m128i *)(v55 + 8) = _mm_unpacklo_epi64((__m128i)v45, (__m128i)v45);
      v56 = _mm_loadu_si128(&v147);
      v55[32] = v54;
      *(_QWORD *)v55 = v46;
      *((_WORD *)v55 + 12) = v49;
      *((_DWORD *)v55 + 7) = v50;
      *(__m128i *)(v55 + 40) = v56;
      *(_QWORD *)&v135 = v135 + 1;
      v57 = parse_json(v131, v7, &s);
      if ( v57 )
      {
        v99 = (const char *)qstrerror(v57, v7, v58, v59);
        sub_727620((__int64)v7, (__int64)"%s", v99);
      }
      v60 = v131;
LABEL_50:
      p_s2 = (char **)v7;
      v62 = (const char *)cfgopt_t__apply3();
      if ( (*(_DWORD *)(v25 + 16) & 0xF) == 6 )
      {
        v95 = v154;
        if ( (_QWORD)v154 && (v96 = v154 - 1, (_QWORD)v154 != 1) )
        {
          v102 = (char **)dest;
          if ( n[1] < (unsigned __int64)v154 )
          {
            v124 = v154 - 1;
            v118 = v154;
            v141 = (void *)qvector_reserve(&v141, v141, v154, 1);
            v96 = v124;
            v95 = v118;
          }
          p_s2 = v102;
          n[0] = v95;
          v104 = v95;
          memmove(v141, v102, v96);
          *((char *)v141 + v104 - 1) = 0;
        }
        else
        {
          n[0] = 0;
        }
        v97 = _mm_loadu_si128(&v157);
        LOWORD(v143) = v155;
        v145[0] = v97;
        HIDWORD(v143) = HIDWORD(v155);
        LOBYTE(v144) = v156;
      }
      if ( !v62 && v27 )
      {
        p_s2 = (char **)(*(_DWORD *)(v25 + 16) & 0xF);
        v27(v25, p_s2, v60);
      }
      v63 = s;
      if ( s )
      {
        v64 = v135;
        if ( (_QWORD)v135 )
        {
          v65 = 0;
          v66 = 0;
          do
          {
            v67 = *(void **)&v63[v65];
            if ( v67 )
            {
              *(_QWORD *)&v63[v65 + 8] = 0;
              qfree(v67);
              v63 = s;
            }
            ++v66;
            v65 += 56;
          }
          while ( v64 != v66 );
        }
        *(_QWORD *)&v135 = 0;
        qfree(v63);
      }
      jvalue_t_clear(v131);
      if ( dest )
      {
        *(_QWORD *)&v154 = 0;
        qfree(dest);
      }
      if ( v148[1] )
      {
        *(_QWORD *)&v149 = 0;
        qfree(v148[1]);
      }
      if ( v132 )
      {
        *(_QWORD *)&v133 = 0;
        qfree(v132);
      }
      break;
    default:
      v80 = (const char *)qstrerror(1364, v28, v29, v26);
      goto LABEL_90;
  }
LABEL_67:
  if ( v62 == (_BYTE *)&dword_0 + 2 )
  {
    v73 = (const char *)qstrerror(1364, p_s2, v68, v69);
    goto LABEL_75;
  }
  if ( (unsigned __int64)v62 > 2 )
  {
    if ( v62 != (_BYTE *)&dword_0 + 3 )
      sub_727620((__int64)v7, (__int64)"%s", v62);
    v73 = (const char *)qstrerror(1353, p_s2, v68, v69);
LABEL_75:
    sub_727620((__int64)v7, (__int64)"%s", v73);
  }
  if ( !v62 )
    goto LABEL_22;
  if ( (unsigned __int64)v116[1] > 1 )
  {
    if ( !byte_2CA2E28 )
    {
      v72 = *v116;
      byte_2CA2E28 = 1;
      callui(117, v72, (int)&callui, v69, v70, v71);
    }
    goto LABEL_36;
  }
  if ( !byte_2CA15CB )
  {
    v39 = (const char *)qstrerror(1363, p_s2, v68, v69);
LABEL_35:
    sub_727620((__int64)v7, (__int64)"%s", v39);
  }
LABEL_36:
  v30 = 0;
LABEL_23:
  if ( v141 )
  {
    n[0] = 0;
    qfree(v141);
  }
  if ( s2 )
  {
    *(_QWORD *)&v137 = 0;
    qfree(s2);
  }
  return v30;
}

