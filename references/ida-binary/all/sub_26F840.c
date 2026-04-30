unsigned __int64 __fastcall sub_26F840(const __m128i *a1, __int64 a2)
{
  const __m128i *v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  __m128i v9; // xmm0
  unsigned __int64 v10; // rdx
  __int64 *v11; // rbp
  void (*v12)(); // rcx
  __int64 *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rcx
  __m128i v16; // xmm0
  __m128 v17; // xmm1
  void (*v18)(); // rcx
  __int64 v19; // r13
  __int64 v20; // rbp
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // r14
  QT::QFont *p_ptr; // r12
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // r15
  __int64 v29; // r14
  __int64 v30; // r13
  __int64 *v31; // rbp
  __int64 v32; // rcx
  __int64 v33; // r12
  __int64 i; // rbx
  __int64 *v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // r12
  __int64 j; // rbx
  __int64 *v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // r13
  __int64 v44; // rbp
  __int64 *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  size_t v48; // rdx
  size_t v49; // rax
  const char *v50; // rbp
  __m128i v51; // xmm0
  __m128i si128; // xmm1
  __int64 v53; // rcx
  QT::QTextDocument *v54; // rbp
  QT::QTextDocument *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rbp
  __int64 v58; // rbx
  __int64 *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rax
  void (*v62)(); // rax
  const char *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rbp
  const char *v66; // r15
  __int64 v67; // r14
  void *v68; // r10
  _BYTE *v69; // r11
  __int64 v70; // rsi
  __int64 v71; // rdx
  unsigned __int64 v72; // r12
  size_t v73; // r14
  __int64 v74; // r15
  __int64 v75; // r10
  __int64 v76; // rsi
  __int64 v77; // r12
  __int64 v78; // rsi
  unsigned __int64 v79; // rax
  __int64 v80; // r12
  __int64 v81; // r13
  __int64 v82; // r8
  __int64 v83; // rbp
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // r12
  const char *v87; // rcx
  const char *v88; // rdi
  __int64 v89; // rdx
  unsigned __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  unsigned __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rbx
  __int64 v96; // rcx
  __int64 v97; // rsi
  __int64 v98; // rcx
  __int64 v99; // rdx
  unsigned __int64 v100; // rax
  size_t v101; // rax
  __int64 v102; // r13
  __m128i v103; // [rsp+0h] [rbp-168h] BYREF
  void *v104; // [rsp+18h] [rbp-150h] BYREF
  __int64 v105; // [rsp+20h] [rbp-148h]
  __int64 v106; // [rsp+28h] [rbp-140h]
  void *v107; // [rsp+30h] [rbp-138h]
  __int64 *v108; // [rsp+38h] [rbp-130h]
  __int64 v109; // [rsp+40h] [rbp-128h] BYREF
  __m128i v110; // [rsp+48h] [rbp-120h]
  __int64 v111; // [rsp+60h] [rbp-108h] BYREF
  __int128 v112; // [rsp+68h] [rbp-100h]
  __int64 v113; // [rsp+80h] [rbp-E8h] BYREF
  __m128i v114; // [rsp+88h] [rbp-E0h] BYREF
  __int64 (__fastcall **v115)(); // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v116; // [rsp+A8h] [rbp-C0h]
  __m128i v117; // [rsp+B0h] [rbp-B8h] BYREF
  bool v118; // [rsp+C0h] [rbp-A8h]
  __m256i ptr; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v120; // [rsp+F0h] [rbp-78h] BYREF
  __int128 v121; // [rsp+F8h] [rbp-70h]
  __int64 v122; // [rsp+108h] [rbp-60h]
  __int128 v123; // [rsp+110h] [rbp-58h]
  unsigned __int64 v124; // [rsp+128h] [rbp-40h]

  v124 = __readfsqword(0x28u);
  if ( a1[3].m128i_i64[1] )
    return v124 - __readfsqword(0x28u);
  v3 = a1;
  v4 = sub_279D70(a2 + 40);
  if ( !v4 )
    return v124 - __readfsqword(0x28u);
  v106 = sub_277DF0();
  v5 = sub_279D60(a2 + 40);
  v6 = sub_278470(v106, v5);
  if ( !v6 )
  {
    v61 = sub_279D60(a2 + 40);
    v6 = sub_2784E0(v106, v61);
    if ( !v6 )
    {
      v9.m128i_i64[0] = 0;
      v109 = 0;
      v111 = 0;
      v110 = 0;
      v112 = 0;
      v62 = *(void (**)())(*(_QWORD *)v4 + 72LL);
      if ( v62 != nullsub_63 )
      {
        v63 = (const char *)&v111;
        v64 = v3->m128i_i64[0];
        v104 = &v111;
        ((void (__fastcall *)(__int64, __int64 *, __int64))v62)(v4, &v111, v64);
LABEL_66:
        v65 = v111;
        v105 = v111 + 24 * v112;
        if ( v105 == v111 )
        {
LABEL_126:
          v47 = v110.m128i_i64[0];
          p_ptr = (QT::QFont *)&ptr;
          goto LABEL_47;
        }
        v108 = &v109;
        while ( 1 )
        {
          v77 = v110.m128i_i64[0];
          if ( v110.m128i_i64[0] > 1uLL )
          {
            v63 = (const char *)v109;
            v102 = v110.m128i_i64[0] - 1;
            if ( v110.m128i_i64[1] < (unsigned __int64)(v110.m128i_i64[0] + 2) )
            {
              v109 = qvector_reserve(v108, v109, v110.m128i_i64[0] + 2, 1);
              v63 = (const char *)v109;
            }
            v110.m128i_i64[0] = v77 + 2;
            v63[v77 + 1] = 0;
            *(_WORD *)(v102 + v109) = 8236;
          }
          if ( *(_QWORD *)(v65 + 8) )
          {
            v66 = *(const char **)v65;
            v9.m128i_i64[0] = 0;
            memset(&ptr, 0, 24);
            if ( *v66 == 32 )
            {
              v78 = 0;
              v79 = 0;
              v67 = 0;
              v103.m128i_i64[0] = (__int64)&ptr;
              v80 = 7;
              v81 = 6;
              while ( 1 )
              {
                if ( v79 < 7 )
                  goto LABEL_92;
                while ( 1 )
                {
                  ptr.m256i_i64[1] = v80;
                  ++v66;
                  *(_BYTE *)(v78 + v81) = 0;
                  v82 = v67 + ptr.m256i_i64[0];
                  *(_DWORD *)v82 = 1935830566;
                  *(_WORD *)(v82 + 4) = 15216;
                  v67 = ptr.m256i_i64[1];
                  if ( *v66 != 32 )
                  {
                    v101 = strlen(v66);
                    v68 = (void *)v101;
                    v69 = (_BYTE *)v101;
                    if ( v67 )
                    {
                      --v67;
                      v69 = (_BYTE *)(v101 + v67);
                    }
LABEL_71:
                    v70 = ptr.m256i_i64[0];
                    v71 = (__int64)(v69 + 1);
                    if ( ptr.m256i_i64[2] < (unsigned __int64)(v69 + 1) )
                    {
                      v107 = v68;
                      v106 = (__int64)v69;
                      v103.m128i_i64[0] = (__int64)(v69 + 1);
                      ptr.m256i_i64[0] = qvector_reserve(&ptr, ptr.m256i_i64[0], v71, 1);
                      v68 = v107;
                      v70 = ptr.m256i_i64[0];
                      v69 = (_BYTE *)v106;
                      v71 = v103.m128i_i64[0];
                    }
                    ptr.m256i_i64[1] = v71;
                    v69[v70] = 0;
                    v63 = v66;
                    memmove((void *)(v67 + ptr.m256i_i64[0]), v66, (size_t)v68);
                    goto LABEL_74;
                  }
                  v79 = ptr.m256i_u64[2];
                  v78 = ptr.m256i_i64[0];
                  v80 = 7;
                  v81 = 6;
                  if ( !ptr.m256i_i64[1] )
                    break;
                  v80 = ptr.m256i_i64[1] + 6;
                  v81 = ptr.m256i_i64[1] + 5;
                  v67 = ptr.m256i_i64[1] - 1;
                  if ( ptr.m256i_i64[2] < (unsigned __int64)(ptr.m256i_i64[1] + 6) )
                  {
LABEL_92:
                    ptr.m256i_i64[0] = qvector_reserve(v103.m128i_i64[0], v78, v80, 1);
                    v78 = ptr.m256i_i64[0];
                  }
                }
              }
            }
          }
          else
          {
            memset(&ptr, 0, 24);
            v9.m128i_i64[0] = 0;
            v66 = &s1;
          }
          if ( v66 )
          {
            v67 = 0;
            v68 = (void *)strlen(v66);
            v69 = v68;
            goto LABEL_71;
          }
LABEL_74:
          v72 = ptr.m256i_u64[1];
          if ( ptr.m256i_i64[1] )
          {
            v73 = ptr.m256i_i64[1] - 1;
            if ( ptr.m256i_i64[1] != 1 )
            {
              v74 = v110.m128i_i64[0];
              v75 = ptr.m256i_i64[1] - 1;
              if ( v110.m128i_i64[0] )
              {
                v74 = v110.m128i_i64[0] - 1;
                v75 = v73 + v110.m128i_i64[0] - 1;
                v72 = ptr.m256i_i64[1] + v110.m128i_i64[0] - 1;
              }
              v76 = v109;
              if ( v110.m128i_i64[1] < v72 )
              {
                v103.m128i_i64[0] = v75;
                v109 = qvector_reserve(&v109, v109, v72, 1);
                v75 = v103.m128i_i64[0];
                v76 = v109;
              }
              v110.m128i_i64[0] = v72;
              *(_BYTE *)(v76 + v75) = 0;
              v63 = (const char *)ptr.m256i_i64[0];
              memcpy((void *)(v74 + v109), (const void *)ptr.m256i_i64[0], v73);
            }
          }
          if ( ptr.m256i_i64[0] )
          {
            ptr.m256i_i64[1] = 0;
            *(double *)v9.m128i_i64 = qfree(ptr.m256i_i64[0], v63);
          }
          v65 += 24;
          if ( v105 == v65 )
            goto LABEL_126;
        }
      }
LABEL_129:
      p_ptr = (QT::QFont *)&ptr;
      goto LABEL_48;
    }
  }
  v7 = sub_273410(v6);
  v9.m128i_i64[0] = 0;
  v10 = v3->m128i_i64[0];
  v109 = 0;
  v111 = 0;
  v11 = (__int64 *)v7;
  v110 = 0;
  v112 = 0;
  v12 = *(void (**)())(*(_QWORD *)v4 + 72LL);
  if ( v12 == nullsub_63 )
  {
    if ( !v7 )
      goto LABEL_129;
    v104 = &v111;
  }
  else
  {
    v104 = &v111;
    v63 = (const char *)&v111;
    ((void (__fastcall *)(__int64, __int64 *, unsigned __int64))v12)(v4, &v111, v10);
    if ( !v11 )
      goto LABEL_66;
    v10 = v3->m128i_i64[0];
  }
  v13 = &v113;
  v113 = 0;
  v14 = 1;
  v114 = 0;
  v15 = *v11;
  v16 = 0;
  v107 = &v113;
  v17 = _mm_loadh_ps((const double *)&v104);
  v18 = *(void (**)())(v15 + 72);
  if ( v18 != nullsub_63 )
  {
    ((void (__fastcall *)(__int64 *, __int64 *, unsigned __int64, void (*)(), __int64, __int64, double, unsigned __int64, unsigned __int64))v18)(
      v11,
      &v113,
      v10,
      v18,
      1,
      v8,
      0.0,
      v17.m128_u64[0],
      v17.m128_u64[1]);
    v16 = _mm_loadl_epi64(&v114);
    v17 = (__m128)_mm_load_si128(&v103);
    v14 = v16.m128i_i64[0] + 1;
  }
  v19 = v112;
  *(__m128 *)ptr.m256i_i8 = v17;
  v120 = 0;
  v20 = v112 + 1;
  v122 = 0;
  v21 = v14 * (v112 + 1);
  *(__m128i *)&ptr.m256i_u64[2] = _mm_unpacklo_epi64(v16, (__m128i)(unsigned __int64)v112);
  v121 = 0;
  v123 = 0;
  if ( v21 )
  {
    v103.m128i_i64[0] = v14;
    v13 = nullptr;
    v120 = qvector_reserve(&v120, 0, v14 * (v112 + 1), 8);
    memset((void *)(v120 + 8 * v121), 0, 8 * (v21 - v121));
    *(_QWORD *)&v121 = v21;
    v14 = v103.m128i_i64[0];
  }
  v22 = -24;
  v23 = 0;
  if ( !v14 )
    goto LABEL_15;
  if ( !v20 )
  {
    do
      ++v23;
    while ( v23 != v14 );
    goto LABEL_15;
  }
  v105 = v14;
  do
  {
    LOBYTE(v13) = v23 == 0;
    v83 = 0;
    do
    {
      v84 = v83 + v23 * (ptr.m256i_i64[3] + 1);
      if ( v84 >= (unsigned __int64)v121 )
        goto LABEL_134;
      v10 = v120;
      *(_QWORD *)(v120 + 8 * v84) = 0;
      v85 = v83 + 1;
      if ( v19 == v83 )
        goto LABEL_116;
      ++v83;
    }
    while ( !v85 || !v23 );
    v103.m128i_i64[0] = (__int64)v3;
    v86 = v23 - 1;
    while ( 1 )
    {
      v95 = v83 - 1;
      v96 = *(_QWORD *)ptr.m256i_i64[1] + 24 * v83 - 24;
      v97 = *(_QWORD *)(v22 + *(_QWORD *)ptr.m256i_i64[0] + 8);
      if ( *(_QWORD *)(v96 + 8) )
      {
        v87 = *(const char **)v96;
        v88 = &s1;
        if ( !v97 )
          goto LABEL_102;
        goto LABEL_101;
      }
      v87 = &s1;
      if ( !v97 )
        break;
LABEL_101:
      v88 = *(const char **)(v22 + *(_QWORD *)ptr.m256i_i64[0]);
LABEL_102:
      if ( !strcmp(v88, v87) )
        break;
      v13 = (__int64 *)v121;
      v90 = v83 + (ptr.m256i_i64[3] + 1) * v86;
      if ( v90 >= (unsigned __int64)v121 )
        goto LABEL_132;
      v91 = v23 * (ptr.m256i_i64[3] + 1);
      v18 = *(void (**)())(v120 + 8 * v90);
      v92 = v95 + v91;
      if ( v95 + v91 >= (unsigned __int64)v121 )
      {
        if ( !under_debugger )
        {
          interr(2351, v121, v92, v18, 0.0);
LABEL_132:
          if ( !under_debugger )
          {
            interr(2351, v13, v89, v90, 0.0);
LABEL_134:
            if ( !under_debugger )
            {
              interr(2351, v13, v10, v18, 0.0);
LABEL_136:
              if ( !under_debugger )
              {
                interr(2351, v13, v10, v18, 0.0);
LABEL_138:
                if ( !under_debugger )
                {
                  interr(2351, v13, v99, v98, 0.0);
LABEL_140:
                  if ( !under_debugger )
                    interr(2351, v13, v10, v18, 0.0);
                }
              }
            }
          }
        }
        BUG();
      }
      v10 = *(_QWORD *)(v120 + 8 * v92);
      if ( (unsigned __int64)v18 < v10 )
        v18 = (void (*)())v10;
      v93 = v83 + v91;
      if ( v93 >= (unsigned __int64)v121 )
        goto LABEL_140;
      *(_QWORD *)(v120 + 8 * v93) = v18;
      v94 = v83 + 1;
      if ( v19 == v83 )
        goto LABEL_115;
LABEL_109:
      v83 = v94;
    }
    v13 = (__int64 *)v121;
    v98 = (ptr.m256i_i64[3] + 1) * v86;
    v99 = v98 + v95;
    if ( v98 + v95 >= (unsigned __int64)v121 )
      goto LABEL_138;
    v18 = (void (*)())v120;
    v100 = v83 + v23 * (ptr.m256i_i64[3] + 1);
    v10 = *(_QWORD *)(v120 + 8 * v99) + 1LL;
    if ( v100 >= (unsigned __int64)v121 )
      goto LABEL_136;
    *(_QWORD *)(v120 + 8 * v100) = v10;
    v94 = v83 + 1;
    if ( v19 != v83 )
      goto LABEL_109;
LABEL_115:
    v3 = (const __m128i *)v103.m128i_i64[0];
LABEL_116:
    ++v23;
    v22 += 24;
  }
  while ( v105 != v23 );
LABEL_15:
  p_ptr = (QT::QFont *)&ptr;
  txtdiff_t_diff_mod(&ptr, v13, v10);
  v117 = 0;
  v25 = *(_QWORD *)(v106 + 112);
  v116 = 0;
  v115 = &html_diff_printer_t___vtable;
  v118 = (*(_BYTE *)(v25 + 49) & 4) == 0;
  txtdiff_t_serialize(&ptr, &v115);
  v26 = v109;
  v9 = _mm_load_si128(&v117);
  v117.m128i_i64[1] = v110.m128i_i64[1];
  v109 = v116;
  v116 = v26;
  v115 = &html_diff_printer_t___vtable;
  v110 = v9;
  if ( v26 )
  {
    v117.m128i_i64[0] = 0;
    *(double *)v9.m128i_i64 = qfree(v26, (const char *)&v115);
  }
  v27 = v122;
  if ( v122 )
  {
    if ( (_QWORD)v123 )
    {
      v103.m128i_i64[0] = (__int64)v3;
      v28 = 0;
      v29 = 0;
      v30 = v123;
      v104 = &ptr;
      do
      {
        v31 = (__int64 *)(v27 + v28);
        v32 = *(_QWORD *)(v27 + v28 + 24);
        if ( v32 )
        {
          v33 = v31[4];
          if ( v33 )
          {
            for ( i = 0; i != v33; ++i )
            {
              v35 = (__int64 *)(v32 + 24 * i);
              v36 = *v35;
              if ( *v35 )
              {
                v35[1] = 0;
                *(double *)v9.m128i_i64 = qfree(v36, (const char *)&v115, *(double *)v9.m128i_i64);
                v32 = v31[3];
              }
            }
          }
          v31[4] = 0;
          *(double *)v9.m128i_i64 = qfree(v32, (const char *)&v115, *(double *)v9.m128i_i64);
        }
        v37 = *v31;
        if ( *v31 )
        {
          v38 = v31[1];
          if ( v38 )
          {
            for ( j = 0; j != v38; ++j )
            {
              v40 = (__int64 *)(v37 + 24 * j);
              v41 = *v40;
              if ( *v40 )
              {
                v40[1] = 0;
                *(double *)v9.m128i_i64 = qfree(v41, (const char *)&v115, *(double *)v9.m128i_i64);
                v37 = *v31;
              }
            }
          }
          v31[1] = 0;
          *(double *)v9.m128i_i64 = qfree(v37, (const char *)&v115, *(double *)v9.m128i_i64);
        }
        ++v29;
        v27 = v122;
        v28 += 56;
      }
      while ( v30 != v29 );
      v3 = (const __m128i *)v103.m128i_i64[0];
      p_ptr = (QT::QFont *)v104;
    }
    *(_QWORD *)&v123 = 0;
    *(double *)v9.m128i_i64 = qfree(v27, (const char *)&v115, *(double *)v9.m128i_i64);
  }
  if ( v120 )
  {
    *(_QWORD *)&v121 = 0;
    *(double *)v9.m128i_i64 = qfree(v120, (const char *)&v115, *(double *)v9.m128i_i64);
  }
  v42 = v113;
  if ( v113 )
  {
    v43 = v114.m128i_i64[0];
    if ( v114.m128i_i64[0] )
    {
      v44 = 0;
      do
      {
        v45 = (__int64 *)(v42 + 24 * v44);
        v46 = *v45;
        if ( *v45 )
        {
          v45[1] = 0;
          *(double *)v9.m128i_i64 = qfree(v46, (const char *)&v115, *(double *)v9.m128i_i64);
          v42 = v113;
        }
        ++v44;
      }
      while ( v43 != v44 );
    }
    v114.m128i_i64[0] = 0;
    *(double *)v9.m128i_i64 = qfree(v42, (const char *)&v115, *(double *)v9.m128i_i64);
  }
  v47 = v110.m128i_i64[0];
LABEL_47:
  if ( v47 )
  {
    v49 = v47 - 1;
    v50 = (const char *)v109;
    v48 = v49 >> 63;
  }
  else
  {
LABEL_48:
    LOBYTE(v48) = 0;
    v49 = 0;
    v50 = &s1;
  }
  if ( !v50 || (_BYTE)v48 )
  {
    v49 = 0;
    if ( v50 )
      v49 = strlen(v50);
  }
  v104 = &v111;
  QT::QString::fromUtf8(p_ptr, v49, v50, *(double *)v9.m128i_i64);
  v51 = _mm_loadu_si128(v3 + 2);
  si128 = _mm_load_si128((const __m128i *)&ptr);
  v53 = ptr.m256i_i64[2];
  ptr.m256i_i64[2] = v3[3].m128i_i64[0];
  v3[3].m128i_i64[0] = v53;
  v3[2] = si128;
  *(__m128i *)ptr.m256i_i8 = v51;
  if ( v51.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v51.m128i_i64[0], 1u) )
    free((void *)ptr.m256i_i64[0]);
  v104 = &v111;
  v54 = (QT::QTextDocument *)operator new(0x10u);
  QT::QTextDocument::QTextDocument(v54, nullptr);
  v3[3].m128i_i64[1] = (__int64)v54;
  v104 = &v111;
  QT::QTextDocument::setHtml(v54, (const QT::QString *)&v3[2]);
  v104 = &v111;
  v55 = (QT::QTextDocument *)v3[3].m128i_i64[1];
  sub_3D7160(p_ptr);
  QT::QTextDocument::setDefaultFont(v55, p_ptr);
  QT::QFont::~QFont(p_ptr);
  v56 = v111;
  if ( v111 )
  {
    v57 = v112;
    if ( (_QWORD)v112 )
    {
      v58 = 0;
      do
      {
        v59 = (__int64 *)(v56 + 24 * v58);
        v60 = *v59;
        if ( *v59 )
        {
          v59[1] = 0;
          qfree(v60, (const char *)p_ptr);
          v56 = v111;
        }
        ++v58;
      }
      while ( v57 != v58 );
    }
    *(_QWORD *)&v112 = 0;
    *(double *)v51.m128i_i64 = qfree(v56, (const char *)p_ptr);
  }
  if ( v109 )
  {
    v110.m128i_i64[0] = 0;
    qfree(v109, (const char *)p_ptr, *(double *)v51.m128i_i64);
  }
  return v124 - __readfsqword(0x28u);
}
