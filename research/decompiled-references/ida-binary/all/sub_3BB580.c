__int64 __fastcall sub_3BB580(
        __int64 *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // r14
  __int64 v12; // rax
  const char **v13; // rbp
  __int64 *v14; // rbx
  __int64 *v15; // r12
  const char *v16; // rsi
  __int64 tinfo_pdata; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // r13d
  void *v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rdi
  unsigned __int64 v30; // rax
  __int64 tinfo_property; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  size_t v35; // r13
  __int64 v36; // r15
  size_t v37; // r14
  __m128 v38; // xmm0
  _BOOL4 v39; // r14d
  __int64 v40; // rsi
  __m128 v41; // xmm4
  __m128 v42; // xmm5
  __int64 v43; // rax
  char *v44; // rsi
  double v45; // xmm4_8
  double v46; // xmm5_8
  char *v47; // r14
  __int64 v48; // r14
  double v49; // xmm0_8
  const char *v50; // rdx
  const char *v51; // rcx
  const char *v52; // rsi
  double v53; // xmm4_8
  double v54; // xmm5_8
  __int64 v55; // rdi
  __int64 v56; // r14
  __int64 v57; // rbx
  __int64 v58; // rbp
  __int64 *v59; // r12
  __int64 v60; // rdi
  __int64 v61; // rdi
  unsigned __int64 v62; // r14
  __int64 v63; // rcx
  __int64 v64; // rax
  size_t v65; // r14
  const char *v66; // rsi
  char *v67; // rcx
  unsigned __int64 tinfo_property4; // r14
  char *v69; // rdi
  int *v70; // rdx
  __int64 v71; // rcx
  char *v72; // rdi
  char *v73; // rax
  char *v74; // rcx
  char *v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdi
  char *v78; // rbx
  __int64 v79; // rbp
  __int64 *v80; // r12
  __int64 v81; // rdi
  __int64 v82; // rdi
  int *v83; // rax
  int *v84; // rcx
  unsigned __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // r14
  __int64 v88; // r8
  char *v89; // r9
  __int64 v90; // rcx
  __int64 v91; // r14
  void *v92; // rax
  void *v93; // rax
  const void **v94; // rcx
  unsigned __int64 v95; // [rsp+0h] [rbp-1F8h]
  bool v96; // [rsp+Eh] [rbp-1EAh]
  char v97; // [rsp+Fh] [rbp-1E9h]
  _BYTE *v98; // [rsp+10h] [rbp-1E8h]
  int v99; // [rsp+18h] [rbp-1E0h]
  __int64 v100; // [rsp+20h] [rbp-1D8h]
  unsigned int n; // [rsp+28h] [rbp-1D0h]
  size_t na; // [rsp+28h] [rbp-1D0h]
  const void **nb; // [rsp+28h] [rbp-1D0h]
  __int64 v104; // [rsp+30h] [rbp-1C8h]
  char *src; // [rsp+38h] [rbp-1C0h]
  const char **srca; // [rsp+38h] [rbp-1C0h]
  char *srcd; // [rsp+38h] [rbp-1C0h]
  __int64 *srcb; // [rsp+38h] [rbp-1C0h]
  void *srcc; // [rsp+38h] [rbp-1C0h]
  size_t v110; // [rsp+40h] [rbp-1B8h]
  size_t v111; // [rsp+40h] [rbp-1B8h]
  size_t v112; // [rsp+40h] [rbp-1B8h]
  size_t v113; // [rsp+40h] [rbp-1B8h]
  __int64 *v114; // [rsp+48h] [rbp-1B0h]
  const void **v115; // [rsp+48h] [rbp-1B0h]
  const void **v116; // [rsp+48h] [rbp-1B0h]
  char *v117; // [rsp+50h] [rbp-1A8h]
  char *v118; // [rsp+50h] [rbp-1A8h]
  __int64 v119; // [rsp+58h] [rbp-1A0h]
  __int64 v120; // [rsp+58h] [rbp-1A0h]
  const char *v121; // [rsp+60h] [rbp-198h] BYREF
  __int64 v122; // [rsp+68h] [rbp-190h] BYREF
  __int64 v123; // [rsp+70h] [rbp-188h] BYREF
  __int64 v124; // [rsp+78h] [rbp-180h] BYREF
  const char *v125; // [rsp+80h] [rbp-178h] BYREF
  __int128 v126; // [rsp+88h] [rbp-170h]
  const char *v127; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v128; // [rsp+A8h] [rbp-150h]
  char *v129; // [rsp+C0h] [rbp-138h] BYREF
  __int128 v130; // [rsp+C8h] [rbp-130h]
  char *s2; // [rsp+E0h] [rbp-118h] BYREF
  size_t v132[3]; // [rsp+E8h] [rbp-110h]
  char *s1; // [rsp+100h] [rbp-F8h] BYREF
  __int128 v134; // [rsp+108h] [rbp-F0h]
  char *v135; // [rsp+120h] [rbp-D8h] BYREF
  __int128 v136; // [rsp+128h] [rbp-D0h]
  __int64 v137; // [rsp+140h] [rbp-B8h] BYREF
  __int128 v138; // [rsp+148h] [rbp-B0h]
  void *v139; // [rsp+158h] [rbp-A0h]
  __int128 v140; // [rsp+160h] [rbp-98h]
  int v141; // [rsp+170h] [rbp-88h]
  char v142; // [rsp+174h] [rbp-84h]
  __int64 v143; // [rsp+180h] [rbp-78h] BYREF
  __int128 v144; // [rsp+188h] [rbp-70h]
  int *v145; // [rsp+198h] [rbp-60h]
  __int128 v146; // [rsp+1A0h] [rbp-58h]
  int v147; // [rsp+1B0h] [rbp-48h]
  char v148; // [rsp+1B4h] [rbp-44h]
  unsigned __int64 v149; // [rsp+1B8h] [rbp-40h]

  v149 = __readfsqword(0x28u);
  v11 = *a1;
  if ( !*a1 )
    return 0;
  v12 = a1[26];
  v13 = &v121;
  v14 = a1;
  v121 = nullptr;
  v15 = &v137;
  copy_tinfo_t(&v121, v12 + 8, a11);
  v16 = (_BYTE *)(&qword_28 + 5);
  v137 = 0;
  v139 = nullptr;
  v141 = 0;
  v142 = 0x80;
  v138 = 0;
  v140 = 0;
  v20 = 0;
  if ( !(unsigned __int8)get_tinfo_details(v121, 45, &v137) )
    goto LABEL_3;
  v16 = v121;
  v125 = nullptr;
  v126 = 0;
  if ( ((unsigned __int16)v121 & 0x100) != 0 )
  {
    get_tinfo_pdata(&v125, v121, 0);
    v16 = v121;
  }
  v127 = nullptr;
  v128 = 0;
  if ( (unsigned __int64)v16 > 0xFF )
  {
    tinfo_pdata = get_tinfo_pdata(&v127, v16, 5);
    v30 = *(_QWORD *)(a1[26] + 16);
    v96 = (_DWORD)tinfo_pdata == 1;
    if ( v30 > 0xFFFFFFFFFFFFFFFDLL )
    {
LABEL_75:
      v20 = 0;
      goto LABEL_76;
    }
  }
  else
  {
    v30 = *(_QWORD *)(a1[26] + 16);
    if ( v30 > 0xFFFFFFFFFFFFFFFDLL )
    {
      v20 = 0;
      goto LABEL_71;
    }
    v96 = 0;
  }
  if ( v30 >= (unsigned __int64)v138 )
    goto LABEL_75;
  v104 = sub_3C5BC0(v11, v16, tinfo_pdata, v18, v19);
  if ( !v104 )
    goto LABEL_75;
  tinfo_property = get_tinfo_property(v121, 291);
  v33 = itext(tinfo_property == 0 ? 127 : 129, 291, v32);
  v99 = (unsigned int)sub_3BB450(v33, (__int64)&v137);
  v129 = nullptr;
  v130 = 0;
  if ( ((unsigned __int16)v121 & 0x100) != 0 )
  {
    get_tinfo_pdata(&v129, v121, 8);
    if ( (unsigned __int64)v130 > 0x51 )
      sub_3B5F80((__int64 *)&v129);
  }
  v95 = *(_QWORD *)(a1[26] + 16);
  v97 = v142 & 0x10;
  if ( (v142 & 0x10) == 0 )
  {
    v34 = 56 * v95 + v137;
    v100 = 56 * v95;
    v35 = *(_QWORD *)(v34 + 8);
    if ( !v35 )
    {
      s2 = nullptr;
      v36 = -1;
      v98 = nullptr;
      *(_OWORD *)v132 = 0;
      goto LABEL_27;
    }
    goto LABEL_78;
  }
  if ( (_QWORD)v140 )
  {
    v83 = (int *)v139;
    v84 = (int *)((char *)v139 + 4 * v140);
    if ( v139 != v84 )
    {
      v85 = 0;
      while ( 1 )
      {
        v62 = *v83;
        v36 = v85;
        v85 += v62;
        if ( v95 < v85 )
          break;
        if ( v84 == ++v83 )
        {
          v62 = -1;
          v36 = -1;
          goto LABEL_138;
        }
      }
      if ( v62 > 1 )
      {
        v86 = v36 + 1;
        if ( v95 != v36 )
          v86 = *(_QWORD *)(a1[26] + 16);
        v95 = v86;
      }
LABEL_138:
      v98 = nullptr;
      v100 = 56 * v95;
      v35 = *(_QWORD *)(v137 + 56 * v95 + 8);
      v34 = v137 + 56 * v95;
      if ( !v35 )
        goto LABEL_80;
      goto LABEL_79;
    }
  }
  v63 = v137;
  v34 = v137 + 56 * v95;
  v100 = 56 * v95;
  v35 = *(_QWORD *)(v34 + 8);
  if ( v35 )
  {
LABEL_78:
    v62 = -1;
    v36 = -1;
LABEL_79:
    nb = (const void **)v34;
    v98 = (_BYTE *)qalloc_or_throw(v35);
    memcpy(v98, *nb, v35);
LABEL_80:
    s2 = nullptr;
    *(_OWORD *)v132 = 0;
    if ( v62 <= 1 || !v97 )
      goto LABEL_27;
    v63 = v137;
    goto LABEL_83;
  }
  v36 = -1;
  s2 = nullptr;
  v98 = nullptr;
  *(_OWORD *)v132 = 0;
LABEL_83:
  v64 = v63 + 56 * v36;
  if ( (char **)v64 != &s2 )
  {
    v65 = *(_QWORD *)(v64 + 8);
    if ( v65 >= 2 )
    {
      srcd = *(char **)v64;
      s2 = (char *)qvector_reserve(&s2, 0, v65, 1);
      v132[0] = v65;
      memmove(s2, srcd, v65 - 1);
      s2[v65 - 1] = 0;
    }
  }
  while ( 1 )
  {
LABEL_27:
    s1 = nullptr;
    v134 = 0;
    if ( v35 )
    {
      s1 = (char *)qalloc_or_throw(v35);
      *((_QWORD *)&v134 + 1) = v35;
      memcpy(s1, v98, v35);
      *(_QWORD *)&v134 = v35;
    }
    v37 = v132[0];
    v38 = 0;
    v135 = nullptr;
    v136 = 0;
    if ( v132[0] )
    {
      v135 = (char *)qalloc_or_throw(v132[0]);
      *((_QWORD *)&v136 + 1) = v37;
      memcpy(v135, s2, v37);
      *(_QWORD *)&v136 = v37;
    }
    v39 = 1;
    if ( (v142 & 0x60) != 0x40 )
    {
      v39 = 0;
      if ( (v142 & 0x60) == 0 )
        v39 = (v141 & 0x400) != 0;
    }
    if ( (v142 & 7) != 0 )
      v40 = (unsigned int)(1 << ((v142 & 7) - 1));
    else
      v40 = (unsigned __int8)getinf(61);
    v122 = extend_sign(*(_QWORD *)(v137 + v100 + 48), v40, v39);
    v43 = -1;
    if ( v97 )
      v43 = *(_QWORD *)(v137 + 56 * v36 + 48);
    v123 = v43;
    v44 = (char *)&::s1;
    if ( (_QWORD)v130 )
      v44 = v129;
    if ( (int)sub_1697D0(
                v99,
                (__int64)v44,
                (__int64)&s1,
                (__int64)&v122,
                (__int64)&v123,
                (__int64)&v135,
                (__m128)0LL,
                a3,
                a4,
                a5,
                v41,
                v42,
                a8,
                a9,
                v95) <= 0 )
      goto LABEL_127;
    if ( !v35 )
    {
      v66 = &::s1;
      if ( !(_QWORD)v134 )
        goto LABEL_88;
LABEL_87:
      v47 = s1;
      if ( !strcmp(s1, v66) )
        goto LABEL_88;
      goto LABEL_45;
    }
    if ( (_QWORD)v134 )
    {
      v66 = v98;
      goto LABEL_87;
    }
    if ( !*v98 )
      goto LABEL_88;
    v47 = (char *)&::s1;
LABEL_45:
    n = set_tinfo_property4(v13, 22, v95, v47, 0, 0);
    if ( n )
      goto LABEL_46;
LABEL_88:
    n = set_tinfo_property4(v13, 24, v95, v122, v123, 0);
    if ( n )
      goto LABEL_46;
    v67 = (char *)&::s1;
    if ( (_QWORD)v134 )
      v67 = s1;
    v44 = (_BYTE *)(&dword_124 + 3);
    tinfo_property4 = get_tinfo_property4(v121, 295, 0, v67, 0, 0);
    if ( !v97 || (unsigned __int64)v136 <= 1 )
      goto LABEL_127;
    v44 = (char *)&::s1;
    if ( v132[0] )
      v44 = s2;
    v69 = v135;
    if ( !strcmp(v135, v44) )
      goto LABEL_96;
    v38 = 0;
    v44 = (_BYTE *)(&qword_28 + 5);
    v143 = 0;
    v145 = nullptr;
    v147 = 0;
    v148 = 0x80;
    v144 = 0;
    v146 = 0;
    get_tinfo_details(v121, 45, &v143);
    if ( !(_QWORD)v146 )
      break;
    v72 = (char *)&v145[v146];
    if ( v145 == (int *)v72 )
      break;
    v70 = v145;
    v73 = nullptr;
    while ( 1 )
    {
      v71 = *v70;
      v44 = v73;
      v73 += v71;
      if ( tinfo_property4 < (unsigned __int64)v73 )
        break;
      if ( v72 == (char *)++v70 )
        goto LABEL_154;
    }
    if ( v71 == 1 )
      break;
    v74 = (char *)&::s1;
    if ( (_QWORD)v136 )
      v74 = v135;
    v75 = v44;
    v44 = (_BYTE *)(&dword_14 + 2);
    n = set_tinfo_property4(v13, 22, v75, v74, 0, 0);
    if ( v145 )
    {
      *(_QWORD *)&v146 = 0;
      *(double *)v38.m128_u64 = qfree(v145, (_BYTE *)&dword_14 + 2);
    }
    v76 = v143;
    v77 = v143;
    if ( v143 )
    {
      v44 = (char *)v144;
      if ( (_QWORD)v144 )
        goto LABEL_118;
      goto LABEL_125;
    }
LABEL_126:
    if ( !n )
      goto LABEL_127;
LABEL_46:
    v143 = 0;
    v144 = 0;
    src = (char *)v138;
    if ( (_QWORD)v138 )
    {
      v143 = qalloc_or_throw(56 * v138);
      v87 = v143;
      v88 = 0;
      v89 = nullptr;
      *((_QWORD *)&v144 + 1) = src;
      while ( 1 )
      {
        v90 = v137;
        v91 = v88 + v87;
        a3 = 0;
        *(_QWORD *)v91 = 0;
        v94 = (const void **)(v88 + v90);
        *(_OWORD *)(v91 + 8) = 0;
        if ( v94[1] )
        {
          v119 = v88;
          v117 = v89;
          v115 = v94;
          v112 = (size_t)v94[1];
          v92 = (void *)qalloc_or_throw(v112);
          *(_QWORD *)v91 = v92;
          *(_QWORD *)(v91 + 16) = v112;
          memcpy(v92, *v115, v112);
          v88 = v119;
          v89 = v117;
          v94 = v115;
          *(_QWORD *)(v91 + 8) = v112;
        }
        a4 = 0;
        *(_QWORD *)(v91 + 24) = 0;
        *(_OWORD *)(v91 + 32) = 0;
        if ( v94[4] )
        {
          v120 = v88;
          v118 = v89;
          v116 = v94;
          v113 = (size_t)v94[4];
          v93 = (void *)qalloc_or_throw(v113);
          *(_QWORD *)(v91 + 24) = v93;
          *(_QWORD *)(v91 + 40) = v113;
          memcpy(v93, v116[3], v113);
          v88 = v120;
          v89 = v118;
          v94 = v116;
          *(_QWORD *)(v91 + 32) = v113;
        }
        ++v89;
        v88 += 56;
        *(_QWORD *)(v91 + 48) = v94[6];
        if ( src == v89 )
          break;
        v87 = v143;
      }
      *(_QWORD *)&v144 = src;
    }
    v48 = v140;
    v49 = 0.0;
    v145 = nullptr;
    v146 = 0;
    if ( (_QWORD)v140 )
    {
      srcc = (void *)(4 * v140);
      v145 = (int *)qalloc_or_throw(4 * v140);
      *((_QWORD *)&v146 + 1) = v48;
      memcpy(v145, v139, (size_t)srcc);
      *(_QWORD *)&v146 = v48;
    }
    v124 = 0;
    v147 = v141;
    v148 = v142;
    create_tinfo(&v124, 45, 45, &v143);
    v50 = &::s1;
    if ( (_QWORD)v128 )
      v50 = v127;
    set_tinfo_property4(&v124, 5, v50, v96, 0, 0);
    v51 = &::s1;
    if ( (_QWORD)v126 )
      v51 = v125;
    save_tinfo(&v124, v104, *(unsigned int *)(v14[26] + 24), v51, 5);
    v52 = (const char *)n;
    sub_3AC490(v14, n, (__int64)"Failed to edit member", (__m128)0LL, a3, a4, a5, v53, v54, a8, a9);
    clear_tinfo_t(&v124);
    if ( v145 )
    {
      *(_QWORD *)&v146 = 0;
      v49 = qfree(v145, (const char *)n);
    }
    v55 = v143;
    if ( v143 )
    {
      if ( (_QWORD)v144 )
      {
        v110 = (size_t)v15;
        v56 = v144;
        na = (size_t)v14;
        v57 = 0;
        srca = v13;
        v58 = 0;
        do
        {
          v59 = (__int64 *)(v55 + v58);
          v60 = *(_QWORD *)(v55 + v58 + 24);
          if ( v60 )
          {
            v59[4] = 0;
            v49 = qfree(v60, v52, v49);
          }
          v61 = *v59;
          if ( *v59 )
          {
            v59[1] = 0;
            v49 = qfree(v61, v52, v49);
          }
          ++v57;
          v55 = v143;
          v58 += 56;
        }
        while ( v56 != v57 );
        v14 = (__int64 *)na;
        v13 = srca;
        v15 = (__int64 *)v110;
      }
      *(_QWORD *)&v144 = 0;
      v49 = qfree(v55, v52, v49);
    }
    if ( v135 )
    {
      *(_QWORD *)&v136 = 0;
      v49 = qfree(v135, v52, v49);
    }
    if ( s1 )
    {
      *(_QWORD *)&v134 = 0;
      qfree(s1, v52, v49);
    }
  }
LABEL_154:
  if ( v145 )
  {
    *(_QWORD *)&v146 = 0;
    *(double *)v38.m128_u64 = qfree(v145, v44);
    v77 = v143;
    if ( !v143 )
      goto LABEL_127;
    v44 = (char *)v144;
    if ( !(_QWORD)v144 )
    {
      *(double *)v38.m128_u64 = qfree(v143, nullptr, *(double *)v38.m128_u64);
LABEL_127:
      v69 = v135;
      goto LABEL_96;
    }
LABEL_118:
    v114 = v15;
    srcb = v14;
    v78 = nullptr;
    v111 = (size_t)v13;
    v79 = 0;
    do
    {
      v80 = (__int64 *)(v77 + v79);
      v81 = *(_QWORD *)(v77 + v79 + 24);
      if ( v81 )
      {
        v80[4] = 0;
        qfree(v81, v44);
      }
      v82 = *v80;
      if ( *v80 )
      {
        v80[1] = 0;
        qfree(v82, v44);
      }
      v76 = v143;
      ++v78;
      v79 += 56;
      v77 = v143;
    }
    while ( v78 != v44 );
    v14 = srcb;
    v13 = (const char **)v111;
    v15 = v114;
LABEL_125:
    *(_QWORD *)&v144 = 0;
    *(double *)v38.m128_u64 = qfree(v76, v44);
    goto LABEL_126;
  }
  v77 = v143;
  if ( !v143 )
    goto LABEL_127;
  v44 = (char *)v144;
  if ( (_QWORD)v144 )
    goto LABEL_118;
  *(double *)v38.m128_u64 = qfree(v143, nullptr, v70, v71, 0);
  v69 = v135;
LABEL_96:
  if ( v69 )
  {
    *(_QWORD *)&v136 = 0;
    *(double *)v38.m128_u64 = qfree(v69, v44);
  }
  if ( s1 )
  {
    *(_QWORD *)&v134 = 0;
    *(double *)v38.m128_u64 = qfree(s1, v44, *(double *)v38.m128_u64);
  }
  v16 = nullptr;
  v20 = (unsigned __int8)sub_3AC490(v14, 0, (__int64)"Failed to edit member", v38, a3, a4, a5, v45, v46, a8, a9);
  if ( s2 )
  {
    v132[0] = 0;
    *(double *)v38.m128_u64 = qfree(s2, nullptr);
  }
  if ( v98 )
    *(double *)v38.m128_u64 = qfree(v98, nullptr, *(double *)v38.m128_u64);
  if ( v129 )
  {
    *(_QWORD *)&v130 = 0;
    qfree(v129, nullptr, *(double *)v38.m128_u64);
  }
LABEL_76:
  if ( v127 )
  {
    *(_QWORD *)&v128 = 0;
    qfree(v127, v16);
  }
LABEL_71:
  if ( !v125 )
  {
LABEL_3:
    v21 = v139;
    if ( !v139 )
      goto LABEL_5;
    goto LABEL_4;
  }
  *(_QWORD *)&v126 = 0;
  qfree(v125, v16);
  v21 = v139;
  if ( v139 )
  {
LABEL_4:
    *(_QWORD *)&v140 = 0;
    qfree(v21, v16);
  }
LABEL_5:
  v22 = v137;
  if ( v137 )
  {
    v23 = v138;
    if ( (_QWORD)v138 )
    {
      v24 = 0;
      v25 = 0;
      do
      {
        v26 = (__int64 *)(v22 + v24);
        v27 = *(_QWORD *)(v22 + v24 + 24);
        if ( v27 )
        {
          v26[4] = 0;
          qfree(v27, v16);
        }
        v28 = *v26;
        if ( *v26 )
        {
          v26[1] = 0;
          qfree(v28, v16);
        }
        ++v25;
        v22 = v137;
        v24 += 56;
      }
      while ( v23 != v25 );
    }
    *(_QWORD *)&v138 = 0;
    qfree(v22, v16);
  }
  clear_tinfo_t(v13);
  return v20;
}
