__int64 __fastcall sub_65B9E0(
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
  char v42; // al
  __int64 v43; // r8
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __m128i v46; // xmm0
  char **v47; // r13
  void *v48; // rdi
  char *v49; // rdi
  char *v50; // r15
  __int64 v51; // r12
  char *v52; // rbx
  void *v53; // rdi
  void *v54; // rdi
  char *v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // r15
  char *v58; // rax
  void *v59; // rdi
  char *v60; // rdx
  __int64 v61; // rbx
  __int64 v62; // r15
  char *v63; // rax
  void *v64; // rdi
  char *v65; // rdi
  __int64 v66; // r12
  __int64 v67; // r15
  char *v68; // rbx
  void *v69; // rdi
  void *v70; // rdi
  size_t v71; // r14
  char v72; // al
  char v73; // cl
  char *v74; // rax
  double v75; // xmm4_8
  double v76; // xmm5_8
  unsigned int v77; // r14d
  unsigned int v78; // r12d
  __int64 v79; // r15
  int v80; // eax
  char *v81; // r14
  char *v82; // rdi
  void *v83; // rax
  char *v84; // rdi
  size_t v85; // rdx
  __int64 v86; // [rsp+0h] [rbp-200h]
  __int64 *v87; // [rsp+8h] [rbp-1F8h]
  _QWORD *v88; // [rsp+10h] [rbp-1F0h]
  size_t v89; // [rsp+10h] [rbp-1F0h]
  __int64 *v90; // [rsp+18h] [rbp-1E8h]
  char *v91; // [rsp+18h] [rbp-1E8h]
  char *s2; // [rsp+20h] [rbp-1E0h]
  char *s2a; // [rsp+20h] [rbp-1E0h]
  char *v94; // [rsp+28h] [rbp-1D8h]
  void **v95; // [rsp+30h] [rbp-1D0h]
  size_t n; // [rsp+38h] [rbp-1C8h]
  size_t na; // [rsp+38h] [rbp-1C8h]
  size_t nc; // [rsp+38h] [rbp-1C8h]
  size_t nb; // [rsp+38h] [rbp-1C8h]
  __int64 v100; // [rsp+40h] [rbp-1C0h]
  bool src; // [rsp+60h] [rbp-1A0h]
  char *srca; // [rsp+60h] [rbp-1A0h]
  const char *srcb; // [rsp+60h] [rbp-1A0h]
  _BYTE *srcc; // [rsp+60h] [rbp-1A0h]
  char *v106; // [rsp+68h] [rbp-198h]
  char *i; // [rsp+70h] [rbp-190h]
  unsigned int v108; // [rsp+78h] [rbp-188h]
  __int64 v109; // [rsp+7Ch] [rbp-184h] BYREF
  void *v110; // [rsp+88h] [rbp-178h] BYREF
  char *s1; // [rsp+90h] [rbp-170h] BYREF
  size_t v112[3]; // [rsp+98h] [rbp-168h]
  void *v113; // [rsp+B0h] [rbp-150h] BYREF
  __int128 v114; // [rsp+B8h] [rbp-148h]
  void *v115; // [rsp+D0h] [rbp-130h] BYREF
  __int128 v116; // [rsp+D8h] [rbp-128h]
  void *ptr; // [rsp+F0h] [rbp-110h] BYREF
  __int128 v118; // [rsp+F8h] [rbp-108h]
  void *v119; // [rsp+110h] [rbp-F0h] BYREF
  __int128 v120; // [rsp+118h] [rbp-E8h]
  __int64 v121; // [rsp+128h] [rbp-D8h]
  __int16 v122; // [rsp+130h] [rbp-D0h]
  char v123; // [rsp+132h] [rbp-CEh]
  void *v124; // [rsp+138h] [rbp-C8h]
  __int128 v125; // [rsp+140h] [rbp-C0h]
  void *s; // [rsp+150h] [rbp-B0h]
  __int64 v127; // [rsp+158h] [rbp-A8h]
  void *v128; // [rsp+160h] [rbp-A0h]
  __int64 v129; // [rsp+168h] [rbp-98h]
  int v130; // [rsp+170h] [rbp-90h]
  __int64 v131; // [rsp+178h] [rbp-88h]
  void *v132[2]; // [rsp+180h] [rbp-80h] BYREF
  __int128 v133; // [rsp+190h] [rbp-70h]
  void *v134; // [rsp+1A0h] [rbp-60h]
  __int128 v135; // [rsp+1A8h] [rbp-58h]
  char v136[4]; // [rsp+1C4h] [rbp-3Ch] BYREF
  unsigned __int64 v137; // [rsp+1C8h] [rbp-38h]

  v20 = a19;
  LODWORD(v109) = a3;
  HIDWORD(v100) = a20;
  v137 = __readfsqword(0x28u);
  src = a6 == nullptr || a2 == 0;
  if ( src || !*a6 )
    return 2;
  v21 = *(_QWORD *)(a2 + 64);
  if ( !v21 )
    return 4;
  if ( (*(_BYTE *)(v21 + 8) & 2) == 0 )
    return 5;
  v108 = v109;
  if ( (unsigned int)v109 >= *(_DWORD *)(v21 + 48) )
    return 3;
  v23 = *(char **)(v21 + 40);
  if ( !v23 )
  {
    v23 = (char *)sub_64AEC0(v21, 0);
    v20 = a19;
  }
  s1 = nullptr;
  v122 = 0;
  v119 = nullptr;
  *(_OWORD *)v132 = 0;
  v121 = -1;
  v123 = 0;
  v124 = nullptr;
  s = v132;
  v127 = 1;
  v128 = nullptr;
  v129 = 0;
  v130 = 1065353216;
  v131 = 0;
  v134 = nullptr;
  *(_OWORD *)v112 = 0;
  v120 = 0;
  v125 = 0;
  v133 = 0;
  v135 = 0;
  v95 = v132;
  v94 = &v23[4 * (unsigned int)v109];
  if ( *(_DWORD *)v94 == -1 )
  {
LABEL_33:
    v41 = (const char *)&v113;
    s2 = v20;
    v113 = nullptr;
    v115 = nullptr;
    v110 = nullptr;
    v87 = (__int64 *)&v115;
    v90 = (__int64 *)&v113;
    v114 = 0;
    v116 = 0;
    if ( !(unsigned __int8)sub_64FA70(
                             (__int64)&v110,
                             (__int64 *)&v113,
                             (__int64)&v115,
                             a2,
                             (__int64)&s1,
                             a6,
                             (__int64)a15,
                             a4) )
    {
      if ( (_QWORD)v114 && s2 )
      {
        v44 = v113;
        v45 = *(_QWORD *)s2;
        v46 = _mm_loadu_si128((const __m128i *)(s2 + 8));
        *(_QWORD *)s2 = *(_QWORD *)v113;
        *((_QWORD *)s2 + 1) = v44[1];
        *((_QWORD *)s2 + 2) = v44[2];
        *v44 = v45;
        *(__m128i *)(v44 + 1) = v46;
      }
      v27 = 9;
      goto LABEL_44;
    }
    v88 = v110;
    if ( v110 )
    {
      v42 = *((_BYTE *)v110 + 52) & 7;
      if ( v42 )
        LODWORD(v43) = 1 << (v42 - 1);
      else
        LODWORD(v43) = (unsigned __int8)getinf(61);
      v43 = (int)v43;
    }
    else
    {
      v43 = -1;
    }
    if ( *(_DWORD *)v94 != -1 )
    {
      v41 = (const char *)a2;
      sub_6C7610(a1, a2, &v119, s1, v43, a4 >= 0);
    }
    if ( a5 && *a5 )
    {
      ptr = nullptr;
      v118 = 0;
      na = strlen(a5);
      LODWORD(s2) = na + 1;
      v41 = a5;
      ptr = (void *)qvector_reserve(&ptr, 0, na + 1, 1);
      *(_QWORD *)&v118 = na + 1;
      memmove(ptr, a5, na);
      *((_BYTE *)ptr + na) = 0;
      v71 = v118;
      if ( (a4 & 0x400) != 0 )
        goto LABEL_120;
    }
    else
    {
      v71 = v112[0];
      ptr = nullptr;
      v118 = 0;
      if ( !v112[0] )
      {
        if ( (a4 & 0x400) != 0 )
        {
LABEL_90:
          s2a = (char *)haystack;
LABEL_91:
          if ( *(_DWORD *)v94 != -1 )
          {
            v72 = *a6;
            if ( (v122 & 0x2F) == 0xD )
            {
              v73 = (v72 & 0x3F) != 45;
            }
            else
            {
              v73 = 1;
              if ( (v122 & 0x3F) == 0x2D )
                v73 = (v72 & 0x2F) != 13;
            }
            sub_651240(a1, a2, v108, v73);
          }
          if ( !(unsigned int)sub_64F830((__int64)a1, a2, s2a, 3, nullptr, 0, 0, 0, 0, nullptr) )
          {
LABEL_98:
            v74 = nullptr;
            if ( v112[0] > 1 )
              v74 = s1;
            v106 = (char *)sub_5E6DC0(*a1, (__int64)v136, a2, (__int64)a6, s2a, v108, v74);
            sub_65B8F0(a1, (__int64 *)a2, (__int64)s2a, v88, v90, 0.0, a8, a9, a10, v75, v76, a13, a14);
            *(_DWORD *)v94 = (unsigned int)sub_64DC80(a1, v21, s2a, v106, a15, a16, a17, a18, &v109, 0)
                           - *(_DWORD *)(v21 + 32);
            *(_DWORD *)(a2 + 32) |= 0x40u;
            if ( BYTE4(v100) )
            {
              v77 = 6;
              if ( !src )
              {
                v77 = 2;
                v78 = 1;
                goto LABEL_103;
              }
            }
            else
            {
              if ( !src )
              {
                v77 = 0;
                v78 = 3;
LABEL_103:
                v79 = *(_QWORD *)(*a1 + 1672);
                v80 = *(_DWORD *)(v79 + 2608) + 1;
                if ( *(_DWORD *)(v79 + 2608) == -1 )
                  v80 = 1;
                *(_DWORD *)(v79 + 2608) = v80;
                mark_builtin_widgets(1024, 0, 1);
                sub_6B8D40(v79);
                sub_6586E0(a1, a2, (__int64)s2a, v106, a15, (__int64)&v119, 0.0, a8, (__int64)v88);
                sub_64C820(*a1, v78, v77, v108, s2a);
                if ( v112[0] > 1 )
                {
                  v81 = s1;
                  if ( strcmp(s1, s2a) )
                    sub_39ADA0(0x59u, v108, v81, s2a);
                }
                if ( (_QWORD)v116 )
                  sub_652AD0((__int64 *)a2, (__int64)s2a, v87);
                v27 = 0;
                goto LABEL_111;
              }
              v77 = 4;
            }
            v78 = 3;
            goto LABEL_103;
          }
          v27 = 7;
          if ( (a4 & 4) != 0 )
          {
            sub_6514C0(a1, a2, s2a, a4 & 0xFFFA | 1, nullptr);
            goto LABEL_98;
          }
LABEL_111:
          if ( ptr )
          {
            *(_QWORD *)&v118 = 0;
            qfree(ptr);
          }
LABEL_44:
          v47 = (char **)v110;
          if ( v110 )
          {
            v48 = *((void **)v110 + 3);
            if ( v48 )
            {
              *((_QWORD *)v110 + 4) = 0;
              qfree(v48);
            }
            v49 = *v47;
            if ( *v47 )
            {
              v50 = v47[1];
              if ( v50 )
              {
                v51 = 0;
                for ( i = nullptr; i != v50; ++i )
                {
                  v52 = &v49[v51];
                  v53 = *(void **)&v49[v51 + 24];
                  if ( v53 )
                  {
                    *((_QWORD *)v52 + 4) = 0;
                    qfree(v53);
                  }
                  v54 = *(void **)v52;
                  if ( *(_QWORD *)v52 )
                  {
                    *((_QWORD *)v52 + 1) = 0;
                    qfree(v54);
                  }
                  v49 = *v47;
                  v51 += 56;
                }
              }
              v47[1] = nullptr;
              qfree(v49);
            }
            qfree(v47);
          }
          v55 = (char *)v115;
          if ( v115 )
          {
            if ( (_QWORD)v116 )
            {
              v56 = 0;
              v57 = v116;
              do
              {
                v58 = &v55[24 * v56];
                v59 = *(void **)v58;
                if ( *(_QWORD *)v58 )
                {
                  *((_QWORD *)v58 + 1) = 0;
                  qfree(v59);
                  v55 = (char *)v115;
                }
                ++v56;
              }
              while ( v57 != v56 );
            }
            *(_QWORD *)&v116 = 0;
            qfree(v55);
          }
          v60 = (char *)v113;
          if ( v113 )
          {
            if ( (_QWORD)v114 )
            {
              v61 = 0;
              v62 = v114;
              do
              {
                v63 = &v60[24 * v61];
                v64 = *(void **)v63;
                if ( *(_QWORD *)v63 )
                {
                  *((_QWORD *)v63 + 1) = 0;
                  qfree(v64);
                  v60 = (char *)v113;
                }
                ++v61;
              }
              while ( v62 != v61 );
            }
            *(_QWORD *)&v114 = 0;
            qfree(v60);
          }
          v65 = (char *)v134;
          if ( v134 )
          {
            v66 = v135;
            if ( (_QWORD)v135 )
            {
              v67 = 0;
              do
              {
                v68 = &v65[144 * v67];
                clear_tinfo_t(v68 + 64);
                v69 = *((void **)v68 + 5);
                if ( v69 )
                {
                  *((_QWORD *)v68 + 6) = 0;
                  qfree(v69);
                }
                v70 = *((void **)v68 + 2);
                if ( v70 )
                {
                  *((_QWORD *)v68 + 3) = 0;
                  qfree(v70);
                }
                v65 = (char *)v134;
                ++v67;
              }
              while ( v66 != v67 );
            }
            *(_QWORD *)&v135 = 0;
            qfree(v65);
          }
          if ( v132[1] )
          {
            *(_QWORD *)&v133 = 0;
            qfree(v132[1]);
          }
          goto LABEL_11;
        }
        goto LABEL_115;
      }
      v83 = (void *)qalloc_or_throw(v112[0]);
      v41 = s1;
      ptr = v83;
      *((_QWORD *)&v118 + 1) = v71;
      memcpy(v83, s1, v71);
      *(_QWORD *)&v118 = v71;
      if ( (a4 & 0x400) != 0 )
        goto LABEL_121;
    }
    if ( v71 > 1 )
    {
      if ( (a4 & 0x80u) == 0 )
        goto LABEL_128;
      v41 = &byte_8;
      validate_name(&ptr, 8, (4 * (_WORD)a4) & 0x400 | 1);
    }
    if ( !(_QWORD)v118 )
    {
LABEL_115:
      v82 = (char *)haystack;
LABEL_116:
      if ( !(unsigned __int8)is_valid_typename(
                               v82,
                               v86,
                               (int)&v115,
                               (int)v88,
                               (int)&v113,
                               (int)s2,
                               (int)v94,
                               (int)v132,
                               (int)&v119,
                               v100) )
      {
        v27 = 10;
        goto LABEL_111;
      }
      if ( (a4 & 1) == 0 )
        sub_648F50((char *)&ptr, v41);
      v71 = v118;
LABEL_120:
      if ( !v71 )
        goto LABEL_90;
LABEL_121:
      s2a = (char *)ptr;
      goto LABEL_91;
    }
LABEL_128:
    v82 = (char *)ptr;
    goto LABEL_116;
  }
  if ( (a4 & 4) != 0 )
  {
    srca = v20;
    v36 = sub_64DE20(a2, (unsigned int)v109);
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
      v84 = s1;
      v85 = v38 + 1;
      if ( v112[1] < v38 + 1 )
      {
        v89 = v38;
        v91 = (char *)n;
        nb = v38 + 1;
        s1 = (char *)qvector_reserve(&s1, s1, v85, 1);
        v40 = v89;
        v84 = s1;
        v20 = v91;
        v39 = srcb;
        v85 = nb;
      }
      v112[0] = v85;
      nc = (size_t)v20;
      srcc = (_BYTE *)v40;
      memmove(v84, v39, v40);
      v20 = (char *)nc;
      srcc[(_QWORD)s1] = 0;
    }
    else
    {
LABEL_31:
      v112[0] = 0;
    }
    src = 1;
    goto LABEL_33;
  }
  v27 = 7;
LABEL_11:
  v28 = v128;
  if ( v128 )
  {
    do
    {
      v29 = v28;
      v28 = (_QWORD *)*v28;
      operator delete(v29, 0x20u);
    }
    while ( v28 );
  }
  memset(s, 0, 8 * v127);
  v129 = 0;
  v128 = nullptr;
  if ( s != v95 )
    operator delete(s, 8 * v127);
  v30 = (char *)v124;
  if ( v124 )
  {
    if ( (_QWORD)v125 )
    {
      v31 = 0;
      v32 = v125;
      do
      {
        v33 = &v30[32 * v31];
        v34 = *(void **)v33;
        if ( *(_QWORD *)v33 )
        {
          *((_QWORD *)v33 + 1) = 0;
          qfree(v34);
          v30 = (char *)v124;
        }
        ++v31;
      }
      while ( v32 != v31 );
    }
    *(_QWORD *)&v125 = 0;
    qfree(v30);
  }
  if ( v119 )
  {
    *(_QWORD *)&v120 = 0;
    qfree(v119);
  }
  if ( s1 )
  {
    v112[0] = 0;
    qfree(s1);
  }
  return v27;
}
