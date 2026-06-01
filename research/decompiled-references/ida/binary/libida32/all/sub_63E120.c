__int64 __fastcall sub_63E120(
        __int64 *a1,
        __int64 a2,
        int a3,
        int a4,
        const char *a5,
        char *a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __m128 a14,
        char *a15,
        char *a16,
        char *a17,
        unsigned __int8 *a18,
        char *a19,
        int a20)
{
  char *v20; // r11
  __int64 v21; // r15
  char *v23; // rax
  unsigned int v27; // r14d
  _QWORD *v28; // rbx
  void *v29; // rdi
  char *v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // r15
  char *v33; // rax
  void *v34; // rdi
  __int64 v36; // rax
  const char *v37; // r9
  size_t v38; // rax
  const char *v39; // r9
  size_t v40; // r10
  const char *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r9
  unsigned __int8 v45; // al
  __int64 v46; // r8
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __m128i v49; // xmm0
  char **v50; // r13
  void *v51; // rdi
  char *v52; // rdi
  char *v53; // r15
  __int64 v54; // r12
  char *v55; // rbx
  void *v56; // rdi
  void *v57; // rdi
  char *v58; // rdx
  __int64 v59; // rbx
  __int64 v60; // r15
  char *v61; // rax
  void *v62; // rdi
  char *v63; // rdx
  __int64 v64; // rbx
  __int64 v65; // r15
  char *v66; // rax
  void *v67; // rdi
  char *v68; // rdi
  __int64 v69; // r12
  __int64 v70; // r15
  char *v71; // rbx
  void *v72; // rdi
  void *v73; // rdi
  size_t v74; // r14
  char v75; // al
  char v76; // cl
  char *v77; // rax
  double v78; // xmm4_8
  double v79; // xmm5_8
  unsigned int v80; // r14d
  unsigned int v81; // r12d
  __int64 v82; // r15
  int v83; // eax
  char *v84; // r14
  char *v85; // rdi
  void *v86; // rax
  char *v87; // rdi
  size_t v88; // rdx
  __int64 v89; // [rsp+0h] [rbp-1F0h]
  __int64 *v90; // [rsp+8h] [rbp-1E8h]
  _QWORD *v91; // [rsp+10h] [rbp-1E0h]
  size_t v92; // [rsp+10h] [rbp-1E0h]
  __int64 *v93; // [rsp+18h] [rbp-1D8h]
  char *v94; // [rsp+18h] [rbp-1D8h]
  char *s2; // [rsp+20h] [rbp-1D0h]
  char *s2a; // [rsp+20h] [rbp-1D0h]
  char *v97; // [rsp+28h] [rbp-1C8h]
  void **v98; // [rsp+30h] [rbp-1C0h]
  size_t n; // [rsp+38h] [rbp-1B8h]
  size_t na; // [rsp+38h] [rbp-1B8h]
  size_t nc; // [rsp+38h] [rbp-1B8h]
  size_t nb; // [rsp+38h] [rbp-1B8h]
  __int64 v103; // [rsp+40h] [rbp-1B0h]
  bool src; // [rsp+60h] [rbp-190h]
  char *srca; // [rsp+60h] [rbp-190h]
  const char *srcb; // [rsp+60h] [rbp-190h]
  _BYTE *srcc; // [rsp+60h] [rbp-190h]
  char *v109; // [rsp+68h] [rbp-188h]
  char *i; // [rsp+70h] [rbp-180h]
  unsigned int v111; // [rsp+78h] [rbp-178h]
  __int64 v112; // [rsp+7Ch] [rbp-174h] BYREF
  void *v113; // [rsp+88h] [rbp-168h] BYREF
  char *s1; // [rsp+90h] [rbp-160h] BYREF
  size_t v115[3]; // [rsp+98h] [rbp-158h]
  void *v116; // [rsp+B0h] [rbp-140h] BYREF
  __int128 v117; // [rsp+B8h] [rbp-138h]
  void *v118; // [rsp+D0h] [rbp-120h] BYREF
  __int128 v119; // [rsp+D8h] [rbp-118h]
  void *ptr; // [rsp+F0h] [rbp-100h] BYREF
  __int128 v121; // [rsp+F8h] [rbp-F8h]
  void *v122; // [rsp+110h] [rbp-E0h] BYREF
  __int128 v123; // [rsp+118h] [rbp-D8h]
  int v124; // [rsp+128h] [rbp-C8h]
  __int16 v125; // [rsp+12Ch] [rbp-C4h]
  char v126; // [rsp+12Eh] [rbp-C2h]
  void *v127; // [rsp+130h] [rbp-C0h]
  __int128 v128; // [rsp+138h] [rbp-B8h]
  void *s; // [rsp+148h] [rbp-A8h]
  __int64 v130; // [rsp+150h] [rbp-A0h]
  void *v131; // [rsp+158h] [rbp-98h]
  __int64 v132; // [rsp+160h] [rbp-90h]
  int v133; // [rsp+168h] [rbp-88h]
  __int64 v134; // [rsp+170h] [rbp-80h]
  void *v135[2]; // [rsp+178h] [rbp-78h] BYREF
  __int128 v136; // [rsp+188h] [rbp-68h]
  void *v137; // [rsp+198h] [rbp-58h]
  __int128 v138; // [rsp+1A0h] [rbp-50h]
  char v139[4]; // [rsp+1B4h] [rbp-3Ch] BYREF
  unsigned __int64 v140; // [rsp+1B8h] [rbp-38h]

  v20 = a19;
  LODWORD(v112) = a3;
  HIDWORD(v103) = a20;
  v140 = __readfsqword(0x28u);
  src = a6 == nullptr || a2 == 0;
  if ( src || !*a6 )
    return 2;
  v21 = *(_QWORD *)(a2 + 64);
  if ( !v21 )
    return 4;
  if ( (*(_BYTE *)(v21 + 8) & 2) == 0 )
    return 5;
  v111 = v112;
  if ( (unsigned int)v112 >= *(_DWORD *)(v21 + 48) )
    return 3;
  v23 = *(char **)(v21 + 40);
  if ( !v23 )
  {
    v23 = (char *)sub_62D8C0(v21, 0);
    v20 = a19;
  }
  s1 = nullptr;
  v125 = 0;
  v122 = nullptr;
  *(_OWORD *)v135 = 0;
  v124 = -1;
  v126 = 0;
  v127 = nullptr;
  s = v135;
  v130 = 1;
  v131 = nullptr;
  v132 = 0;
  v133 = 1065353216;
  v134 = 0;
  v137 = nullptr;
  *(_OWORD *)v115 = 0;
  v123 = 0;
  v128 = 0;
  v136 = 0;
  v138 = 0;
  v98 = v135;
  v97 = &v23[4 * (unsigned int)v112];
  if ( *(_DWORD *)v97 == -1 )
  {
LABEL_33:
    v41 = (const char *)&v116;
    s2 = v20;
    v116 = nullptr;
    v118 = nullptr;
    v113 = nullptr;
    v90 = (__int64 *)&v118;
    v93 = (__int64 *)&v116;
    v117 = 0;
    v119 = 0;
    if ( !(unsigned __int8)sub_632470(
                             (__int64)&v113,
                             (__int64 *)&v116,
                             (__int64)&v118,
                             a2,
                             (const char **)&s1,
                             a6,
                             (__int64)a15,
                             a4) )
    {
      if ( (_QWORD)v117 && s2 )
      {
        v47 = v116;
        v48 = *(_QWORD *)s2;
        v49 = _mm_loadu_si128((const __m128i *)(s2 + 8));
        *(_QWORD *)s2 = *(_QWORD *)v116;
        *((_QWORD *)s2 + 1) = v47[1];
        *((_QWORD *)s2 + 2) = v47[2];
        *v47 = v48;
        *(__m128i *)(v47 + 1) = v49;
      }
      v27 = 9;
      goto LABEL_44;
    }
    v91 = v113;
    if ( v113 )
    {
      v45 = *((_BYTE *)v113 + 52) & 7;
      if ( v45 )
      {
        v43 = (unsigned int)v45 - 1;
        LODWORD(v46) = 1 << (v45 - 1);
      }
      else
      {
        LODWORD(v46) = (unsigned __int8)getinf(61);
      }
      v46 = (int)v46;
    }
    else
    {
      v46 = -1;
    }
    if ( *(_DWORD *)v97 != -1 )
    {
      v41 = (const char *)a2;
      sub_6A6710(a1, a2, &v122, s1, v46, a4 >= 0);
    }
    if ( a5 && *a5 )
    {
      ptr = nullptr;
      v121 = 0;
      na = strlen(a5);
      LODWORD(s2) = na + 1;
      v41 = a5;
      ptr = (void *)qvector_reserve(&ptr, 0, na + 1, 1);
      *(_QWORD *)&v121 = na + 1;
      memmove(ptr, a5, na);
      v43 = na;
      *((_BYTE *)ptr + na) = 0;
      v74 = v121;
      if ( (a4 & 0x400) != 0 )
        goto LABEL_120;
    }
    else
    {
      v74 = v115[0];
      ptr = nullptr;
      v121 = 0;
      if ( !v115[0] )
      {
        if ( (a4 & 0x400) != 0 )
        {
LABEL_90:
          s2a = (char *)haystack;
LABEL_91:
          if ( *(_DWORD *)v97 != -1 )
          {
            v75 = *a6;
            if ( (v125 & 0x2F) == 0xD )
            {
              v76 = (v75 & 0x3F) != 45;
            }
            else
            {
              v76 = 1;
              if ( (v125 & 0x3F) == 0x2D )
                v76 = (v75 & 0x2F) != 13;
            }
            sub_633C40(a1, a2, v111, v76);
          }
          if ( !(unsigned int)sub_632230((__int64)a1, a2, s2a, 3, nullptr, 0, 0, 0, 0, nullptr) )
          {
LABEL_98:
            v77 = nullptr;
            if ( v115[0] > 1 )
              v77 = s1;
            v109 = (char *)sub_5CAFE0(*a1, (__int64)v139, a2, (__int64)a6, s2a, v111, v77);
            sub_63E030(a1, (__int64 *)a2, (__int64)s2a, v91, v93, 0.0, a8, a9, a10, v78, v79, a13, a14);
            *(_DWORD *)v97 = (unsigned int)sub_630670(a1, v21, s2a, v109, a15, a16, a17, a18, &v112, 0)
                           - *(_DWORD *)(v21 + 32);
            *(_DWORD *)(a2 + 32) |= 0x40u;
            if ( BYTE4(v103) )
            {
              v80 = 6;
              if ( !src )
              {
                v80 = 2;
                v81 = 1;
                goto LABEL_103;
              }
            }
            else
            {
              if ( !src )
              {
                v80 = 0;
                v81 = 3;
LABEL_103:
                v82 = *(_QWORD *)(*a1 + 1480);
                v83 = *(_DWORD *)(v82 + 2484) + 1;
                if ( *(_DWORD *)(v82 + 2484) == -1 )
                  v83 = 1;
                *(_DWORD *)(v82 + 2484) = v83;
                mark_builtin_widgets(1024, 0, 1);
                sub_698450(v82);
                sub_63AF00(a1, a2, (__int64)s2a, v109, a15, (__int64)&v122, 0.0, a8, (__int64)v91);
                sub_62F220(*a1, v81, v80, v111, s2a);
                if ( v115[0] > 1 )
                {
                  v84 = s1;
                  if ( strcmp(s1, s2a) )
                    sub_396090(0x59u, v111, v84, s2a);
                }
                if ( (_QWORD)v119 )
                  sub_6354C0((__int64 *)a2, (__int64)s2a, v90);
                v27 = 0;
                goto LABEL_111;
              }
              v80 = 4;
            }
            v81 = 3;
            goto LABEL_103;
          }
          v27 = 7;
          if ( (a4 & 4) != 0 )
          {
            sub_633EC0(a1, a2, s2a, a4 & 0xFFFA | 1, nullptr);
            goto LABEL_98;
          }
LABEL_111:
          if ( ptr )
          {
            *(_QWORD *)&v121 = 0;
            qfree(ptr);
          }
LABEL_44:
          v50 = (char **)v113;
          if ( v113 )
          {
            v51 = *((void **)v113 + 3);
            if ( v51 )
            {
              *((_QWORD *)v113 + 4) = 0;
              qfree(v51);
            }
            v52 = *v50;
            if ( *v50 )
            {
              v53 = v50[1];
              if ( v53 )
              {
                v54 = 0;
                for ( i = nullptr; i != v53; ++i )
                {
                  v55 = &v52[v54];
                  v56 = *(void **)&v52[v54 + 24];
                  if ( v56 )
                  {
                    *((_QWORD *)v55 + 4) = 0;
                    qfree(v56);
                  }
                  v57 = *(void **)v55;
                  if ( *(_QWORD *)v55 )
                  {
                    *((_QWORD *)v55 + 1) = 0;
                    qfree(v57);
                  }
                  v52 = *v50;
                  v54 += 56;
                }
              }
              v50[1] = nullptr;
              qfree(v52);
            }
            qfree(v50);
          }
          v58 = (char *)v118;
          if ( v118 )
          {
            if ( (_QWORD)v119 )
            {
              v59 = 0;
              v60 = v119;
              do
              {
                v61 = &v58[24 * v59];
                v62 = *(void **)v61;
                if ( *(_QWORD *)v61 )
                {
                  *((_QWORD *)v61 + 1) = 0;
                  qfree(v62);
                  v58 = (char *)v118;
                }
                ++v59;
              }
              while ( v60 != v59 );
            }
            *(_QWORD *)&v119 = 0;
            qfree(v58);
          }
          v63 = (char *)v116;
          if ( v116 )
          {
            if ( (_QWORD)v117 )
            {
              v64 = 0;
              v65 = v117;
              do
              {
                v66 = &v63[24 * v64];
                v67 = *(void **)v66;
                if ( *(_QWORD *)v66 )
                {
                  *((_QWORD *)v66 + 1) = 0;
                  qfree(v67);
                  v63 = (char *)v116;
                }
                ++v64;
              }
              while ( v65 != v64 );
            }
            *(_QWORD *)&v117 = 0;
            qfree(v63);
          }
          v68 = (char *)v137;
          if ( v137 )
          {
            v69 = v138;
            if ( (_QWORD)v138 )
            {
              v70 = 0;
              do
              {
                v71 = &v68[128 * v70];
                clear_tinfo_t(v71 + 64);
                v72 = *((void **)v71 + 5);
                if ( v72 )
                {
                  *((_QWORD *)v71 + 6) = 0;
                  qfree(v72);
                }
                v73 = *((void **)v71 + 2);
                if ( v73 )
                {
                  *((_QWORD *)v71 + 3) = 0;
                  qfree(v73);
                }
                v68 = (char *)v137;
                ++v70;
              }
              while ( v69 != v70 );
            }
            *(_QWORD *)&v138 = 0;
            qfree(v68);
          }
          if ( v135[1] )
          {
            *(_QWORD *)&v136 = 0;
            qfree(v135[1]);
          }
          goto LABEL_11;
        }
        goto LABEL_115;
      }
      v86 = (void *)qalloc_or_throw(v115[0], v41, v42, v43, v46);
      v41 = s1;
      ptr = v86;
      *((_QWORD *)&v121 + 1) = v74;
      memcpy(v86, s1, v74);
      *(_QWORD *)&v121 = v74;
      if ( (a4 & 0x400) != 0 )
        goto LABEL_121;
    }
    if ( v74 > 1 )
    {
      if ( (a4 & 0x80u) == 0 )
        goto LABEL_128;
      v41 = &byte_8;
      validate_name(&ptr, 8, (4 * (_WORD)a4) & 0x400 | 1u);
    }
    if ( !(_QWORD)v121 )
    {
LABEL_115:
      v85 = (char *)haystack;
LABEL_116:
      if ( !(unsigned __int8)is_valid_typename(
                               v85,
                               (__int64)v41,
                               v42,
                               v43,
                               v46,
                               v44,
                               v89,
                               (int)&v118,
                               (int)v91,
                               (int)&v116,
                               (int)s2,
                               (int)v97,
                               (int)v135,
                               (int)&v122,
                               v103) )
      {
        v27 = 10;
        goto LABEL_111;
      }
      if ( (a4 & 1) == 0 )
        sub_62B950((char *)&ptr, v41);
      v74 = v121;
LABEL_120:
      if ( !v74 )
        goto LABEL_90;
LABEL_121:
      s2a = (char *)ptr;
      goto LABEL_91;
    }
LABEL_128:
    v85 = (char *)ptr;
    goto LABEL_116;
  }
  if ( (a4 & 4) != 0 )
  {
    srca = v20;
    v36 = sub_630800(a2, (unsigned int)v112);
    v20 = srca;
    if ( !v36 )
      goto LABEL_31;
    v37 = (const char *)(v36 + 4);
    if ( *(_BYTE *)(v36 + 4) == 35 && !*(_BYTE *)(v36 + 5) )
      v37 = (const char *)(v36 + 5);
    n = (size_t)srca;
    srcb = v37;
    v38 = strlen(v37);
    v39 = srcb;
    v20 = (char *)n;
    v40 = v38;
    if ( v38 )
    {
      v87 = s1;
      v88 = v38 + 1;
      if ( v115[1] < v38 + 1 )
      {
        v92 = v38;
        v94 = (char *)n;
        nb = v38 + 1;
        s1 = (char *)qvector_reserve(&s1, s1, v88, 1);
        v40 = v92;
        v87 = s1;
        v20 = v94;
        v39 = srcb;
        v88 = nb;
      }
      v115[0] = v88;
      nc = (size_t)v20;
      srcc = (_BYTE *)v40;
      memmove(v87, v39, v40);
      v20 = (char *)nc;
      srcc[(_QWORD)s1] = 0;
    }
    else
    {
LABEL_31:
      v115[0] = 0;
    }
    src = 1;
    goto LABEL_33;
  }
  v27 = 7;
LABEL_11:
  v28 = v131;
  if ( v131 )
  {
    do
    {
      v29 = v28;
      v28 = (_QWORD *)*v28;
      operator delete(v29, 0x20u);
    }
    while ( v28 );
  }
  memset(s, 0, 8 * v130);
  v132 = 0;
  v131 = nullptr;
  if ( s != v98 )
    operator delete(s, 8 * v130);
  v30 = (char *)v127;
  if ( v127 )
  {
    if ( (_QWORD)v128 )
    {
      v31 = 0;
      v32 = v128;
      do
      {
        v33 = &v30[32 * v31];
        v34 = *(void **)v33;
        if ( *(_QWORD *)v33 )
        {
          *((_QWORD *)v33 + 1) = 0;
          qfree(v34);
          v30 = (char *)v127;
        }
        ++v31;
      }
      while ( v32 != v31 );
    }
    *(_QWORD *)&v128 = 0;
    qfree(v30);
  }
  if ( v122 )
  {
    *(_QWORD *)&v123 = 0;
    qfree(v122);
  }
  if ( s1 )
  {
    v115[0] = 0;
    qfree(s1);
  }
  return v27;
}

