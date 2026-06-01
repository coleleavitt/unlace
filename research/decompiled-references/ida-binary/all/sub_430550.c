__int64 __fastcall file_assoc_chooser_t__::vfunc_10(
        const char *a1,
        unsigned __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10)
{
  __m128i v10; // xmm0
  char **p_s2; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  const char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // r13
  char *v21; // r15
  char *v22; // rax
  char *v23; // r14
  const char *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r14
  size_t v28; // rax
  size_t v29; // r12
  __int64 v30; // r12
  size_t v31; // rax
  size_t v32; // r12
  __int64 v33; // r12
  size_t v34; // rax
  size_t v35; // r12
  __int64 v36; // r12
  __int64 v37; // r12
  __int64 v38; // r12
  __int64 v39; // r12
  __int64 v40; // r12
  char *v41; // r12
  __int64 v42; // rsi
  __int64 v43; // rax
  char *v44; // r13
  __m128i v45; // xmm0
  __int64 v46; // rax
  __m128i v47; // xmm0
  __int64 v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // rax
  __m128i v51; // xmm0
  __int64 v52; // rax
  __m128i v53; // xmm0
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rax
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  __int64 v61; // rax
  void *v62; // rdi
  __int64 v63; // r12
  void *v65; // r14
  void *v66; // rdi
  void *v67; // r14
  void *v68; // rdi
  void *v69; // r14
  void *v70; // rdi
  void *v71; // r14
  void *v72; // rdi
  void *v73; // r15
  void *v74; // rdi
  void *v75; // r15
  void *v76; // rdi
  char *v77; // r12
  size_t v78; // rax
  void *v79; // rdi
  size_t v80; // r14
  void *v81; // rdi
  size_t v82; // r14
  void *v83; // rdi
  size_t v84; // r14
  __int64 v85; // rax
  __int64 v86; // r14
  char v87; // [rsp+0h] [rbp-3370h]
  const char *v89; // [rsp+60h] [rbp-3310h]
  __int64 v91; // [rsp+68h] [rbp-3308h]
  void *v92; // [rsp+70h] [rbp-3300h] BYREF
  __int128 v93; // [rsp+78h] [rbp-32F8h]
  void *v94; // [rsp+90h] [rbp-32E0h] BYREF
  __int128 v95; // [rsp+98h] [rbp-32D8h]
  void *v96; // [rsp+B0h] [rbp-32C0h]
  __int128 v97; // [rsp+B8h] [rbp-32B8h]
  void *v98; // [rsp+D0h] [rbp-32A0h]
  __int128 v99; // [rsp+D8h] [rbp-3298h]
  void *v100; // [rsp+F0h] [rbp-3280h]
  __int128 v101; // [rsp+F8h] [rbp-3278h]
  void *src; // [rsp+110h] [rbp-3260h]
  __int128 v103; // [rsp+118h] [rbp-3258h]
  char *s2; // [rsp+130h] [rbp-3240h] BYREF
  __int128 v105; // [rsp+138h] [rbp-3238h]
  char *v106; // [rsp+150h] [rbp-3220h] BYREF
  __int128 v107; // [rsp+158h] [rbp-3218h]
  void *v108; // [rsp+168h] [rbp-3208h] BYREF
  __int128 v109; // [rsp+170h] [rbp-3200h]
  void *v110; // [rsp+180h] [rbp-31F0h] BYREF
  __int128 v111; // [rsp+188h] [rbp-31E8h]
  void *v112; // [rsp+198h] [rbp-31D8h] BYREF
  __int128 v113; // [rsp+1A0h] [rbp-31D0h]
  void *v114; // [rsp+1B0h] [rbp-31C0h] BYREF
  __int128 v115; // [rsp+1B8h] [rbp-31B8h]
  void *v116; // [rsp+1C8h] [rbp-31A8h] BYREF
  __int128 v117; // [rsp+1D0h] [rbp-31A0h]
  void *v118; // [rsp+1E0h] [rbp-3190h] BYREF
  __int128 v119; // [rsp+1E8h] [rbp-3188h]
  void *v120; // [rsp+1F8h] [rbp-3178h] BYREF
  __int128 v121; // [rsp+200h] [rbp-3170h]
  void *v122; // [rsp+210h] [rbp-3160h] BYREF
  __int128 v123; // [rsp+218h] [rbp-3158h]
  void *dest; // [rsp+228h] [rbp-3148h] BYREF
  __int128 v125; // [rsp+230h] [rbp-3140h]
  __int64 v126; // [rsp+240h] [rbp-3130h] BYREF
  __m128i v127; // [rsp+248h] [rbp-3128h] BYREF
  __int64 v128; // [rsp+258h] [rbp-3118h]
  __m128i v129; // [rsp+260h] [rbp-3110h] BYREF
  __int64 v130; // [rsp+270h] [rbp-3100h]
  __m128i v131; // [rsp+278h] [rbp-30F8h] BYREF
  __int64 v132; // [rsp+288h] [rbp-30E8h]
  __m128i v133; // [rsp+290h] [rbp-30E0h] BYREF
  __int64 v134; // [rsp+2A0h] [rbp-30D0h]
  __m128i v135; // [rsp+2A8h] [rbp-30C8h] BYREF
  __int64 v136; // [rsp+2B8h] [rbp-30B8h]
  __m128i v137; // [rsp+2C0h] [rbp-30B0h] BYREF
  __int64 v138; // [rsp+2D0h] [rbp-30A0h]
  __m128i v139; // [rsp+2D8h] [rbp-3098h] BYREF
  __int64 v140; // [rsp+2E8h] [rbp-3088h]
  __m128i v141; // [rsp+2F0h] [rbp-3080h] BYREF
  __int64 v142; // [rsp+300h] [rbp-3070h]
  __m128i v143; // [rsp+308h] [rbp-3068h] BYREF
  __int64 v144; // [rsp+318h] [rbp-3058h]
  __m128i v145; // [rsp+320h] [rbp-3050h] BYREF
  char v146[4096]; // [rsp+330h] [rbp-3040h] BYREF
  char v147[4096]; // [rsp+1330h] [rbp-2040h] BYREF
  char v148[4104]; // [rsp+2330h] [rbp-1040h] BYREF
  unsigned __int64 v149; // [rsp+3338h] [rbp-38h]

  v10.m128i_i64[0] = 0;
  v149 = __readfsqword(0x28u);
  v146[0] = 0;
  v147[0] = 0;
  v148[0] = 0;
  v92 = nullptr;
  v94 = nullptr;
  v96 = nullptr;
  v98 = nullptr;
  v100 = nullptr;
  src = nullptr;
  v93 = 0;
  v95 = 0;
  v97 = 0;
  v99 = 0;
  v101 = 0;
  v103 = 0;
  s2 = nullptr;
  v105 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      p_s2 = &s2;
      if ( !(unsigned int)sub_1697D0(
                            (int)"BUTTON YES ~A~dd\n"
                                 "Add file extension association\n"
                                 "\n"
                                 "<#omit the '.' for example 'i64','asm','h'#File e~x~tension      :q:0:10::>\n"
                                 "<#absolute path#~V~iew tool path      :f:0:80::>\n"
                                 "<#\"%l\" will be replaced by the filename#A~r~guments           :q:0:80::>\n"
                                 "<#absolute path#~D~iff tool path      :f:0:80::>\n"
                                 "<#\"%l\" will be replaced by the filename#Ar~g~uments           :q:0:80::>\n"
                                 "<#absolute path#~M~erge tool path     :f:0:80::>\n"
                                 "<#\"%l\" will be replaced by the filename#Args (~a~uto)         :q:0:80::>\n"
                                 "<#\"%l\" will be replaced by the filename#Args (~l~ocal)        :q:0:80::>\n"
                                 "<#\"%l\" will be replaced by the filename#Args (~r~emote)       :q:0:80::>\n"
                                 "<#\"%l\" will be replaced by the filename#Args (ma~n~ual)       :q:0:80::>\n",
                            (__int64)&s2,
                            (__int64)v146,
                            (__int64)&v92,
                            (__int64)v147,
                            (__int64)&v94,
                            (__m128)0LL,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10,
                            (char)v148) )
      {
        v63 = -1;
        goto LABEL_60;
      }
      v16 = a1;
      v17 = *((_QWORD *)a1 + 23);
      v18 = 240LL * *((_QWORD *)a1 + 24);
      v19 = v17 + v18;
      if ( v17 == v17 + v18 )
        break;
      v20 = v105;
      v21 = s2;
      v22 = (char *)&s1;
      v89 = a1;
      v91 = *((_QWORD *)a1 + 23);
      if ( (_QWORD)v105 )
        v22 = s2;
      v23 = v22;
      while ( 1 )
      {
        v25 = *(_QWORD *)(v91 + 8);
        if ( v20 )
        {
          v16 = v21;
          v24 = &s1;
          if ( !v25 )
            goto LABEL_8;
        }
        else if ( !v25 )
        {
          v26 = v91;
          v21 = (char *)&s1;
          a1 = v89;
          if ( !v26 )
            goto LABEL_16;
          goto LABEL_14;
        }
        v16 = v23;
        v24 = *(const char **)v91;
LABEL_8:
        if ( !strcmp(v24, v16) )
          break;
        v91 += 240;
        if ( v19 == v91 )
        {
          a1 = v89;
          goto LABEL_16;
        }
      }
      v86 = v91;
      a1 = v89;
      if ( v86 )
      {
        if ( !v20 )
          v21 = (char *)&s1;
LABEL_14:
        sub_169630(
          (int)"Extension \"%s\" already has an association!",
          (__int64)v21,
          v17,
          v18,
          v12,
          v13,
          (__m128)0LL,
          a4,
          a5,
          a6,
          v14,
          v15,
          a9,
          a10,
          v87);
        continue;
      }
      break;
    }
LABEL_16:
    if ( !v146[0] )
    {
      sub_169630(
        (int)"Please specify a viewer application",
        (__int64)v16,
        v17,
        v18,
        v12,
        v13,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v14,
        v15,
        a9,
        a10,
        v87);
      continue;
    }
    break;
  }
  v27 = v105;
  v106 = nullptr;
  v108 = nullptr;
  v110 = nullptr;
  v112 = nullptr;
  v114 = nullptr;
  v116 = nullptr;
  v118 = nullptr;
  v120 = nullptr;
  v122 = nullptr;
  dest = nullptr;
  v107 = 0;
  v109 = 0;
  v111 = 0;
  v113 = 0;
  v115 = 0;
  v117 = 0;
  v119 = 0;
  v121 = 0;
  v123 = 0;
  v125 = 0;
  if ( (unsigned __int64)v105 > 1 )
  {
    v77 = s2;
    v106 = (char *)qvector_reserve(&v106, 0, v105, 1);
    *(_QWORD *)&v107 = v27;
    memmove(v106, v77, v27 - 1);
    v106[v27 - 1] = 0;
    v78 = strlen(v146);
    v29 = v78;
    if ( v78 )
    {
      v79 = v108;
      v80 = v78 + 1;
      if ( *((_QWORD *)&v109 + 1) < v78 + 1 )
        goto LABEL_108;
      goto LABEL_95;
    }
LABEL_19:
    *(_QWORD *)&v109 = 0;
  }
  else
  {
    v28 = strlen(v146);
    v29 = v28;
    if ( !v28 )
      goto LABEL_19;
    v80 = v28 + 1;
    v79 = nullptr;
LABEL_108:
    v108 = (void *)qvector_reserve(&v108, v79, v80, 1);
    v79 = v108;
LABEL_95:
    *(_QWORD *)&v109 = v80;
    memmove(v79, v146, v29);
    *((_BYTE *)v108 + v29) = 0;
  }
  v30 = v93;
  if ( (unsigned __int64)v93 > 1 )
  {
    v75 = v92;
    v76 = v110;
    if ( *((_QWORD *)&v111 + 1) < (unsigned __int64)v93 )
    {
      v110 = (void *)qvector_reserve(&v110, v110, v93, 1);
      v76 = v110;
    }
    *(_QWORD *)&v111 = v30;
    memmove(v76, v75, v30 - 1);
    *((char *)v110 + v30 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v111 = 0;
  }
  v31 = strlen(v147);
  v32 = v31;
  if ( v31 )
  {
    v83 = v112;
    v84 = v31 + 1;
    if ( *((_QWORD *)&v113 + 1) < v31 + 1 )
    {
      v112 = (void *)qvector_reserve(&v112, v112, v84, 1);
      v83 = v112;
    }
    *(_QWORD *)&v113 = v84;
    memmove(v83, v147, v32);
    *((_BYTE *)v112 + v32) = 0;
  }
  else
  {
    *(_QWORD *)&v113 = 0;
  }
  v33 = v95;
  if ( (unsigned __int64)v95 > 1 )
  {
    v73 = v94;
    v74 = v114;
    if ( *((_QWORD *)&v115 + 1) < (unsigned __int64)v95 )
    {
      v114 = (void *)qvector_reserve(&v114, v114, v95, 1);
      v74 = v114;
    }
    *(_QWORD *)&v115 = v33;
    memmove(v74, v73, v33 - 1);
    *((char *)v114 + v33 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v115 = 0;
  }
  v34 = strlen(v148);
  v35 = v34;
  if ( v34 )
  {
    v81 = v116;
    v82 = v34 + 1;
    if ( *((_QWORD *)&v117 + 1) < v34 + 1 )
    {
      v116 = (void *)qvector_reserve(&v116, v116, v82, 1);
      v81 = v116;
    }
    *(_QWORD *)&v117 = v82;
    memmove(v81, v148, v35);
    *((_BYTE *)v116 + v35) = 0;
  }
  else
  {
    *(_QWORD *)&v117 = 0;
  }
  v36 = v97;
  if ( (unsigned __int64)v97 > 1 )
  {
    v71 = v96;
    v72 = v118;
    if ( *((_QWORD *)&v119 + 1) < (unsigned __int64)v97 )
    {
      v118 = (void *)qvector_reserve(&v118, v118, v97, 1);
      v72 = v118;
    }
    *(_QWORD *)&v119 = v36;
    memmove(v72, v71, v36 - 1);
    *((char *)v118 + v36 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v119 = 0;
  }
  v37 = v99;
  if ( (unsigned __int64)v99 > 1 )
  {
    v69 = v98;
    v70 = v120;
    if ( *((_QWORD *)&v121 + 1) < (unsigned __int64)v99 )
    {
      v120 = (void *)qvector_reserve(&v120, v120, v99, 1);
      v70 = v120;
    }
    *(_QWORD *)&v121 = v37;
    memmove(v70, v69, v37 - 1);
    *((char *)v120 + v37 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v121 = 0;
  }
  v38 = v101;
  if ( (unsigned __int64)v101 > 1 )
  {
    v67 = v100;
    v68 = v122;
    if ( *((_QWORD *)&v123 + 1) < (unsigned __int64)v101 )
    {
      v122 = (void *)qvector_reserve(&v122, v122, v101, 1);
      v68 = v122;
    }
    *(_QWORD *)&v123 = v38;
    memmove(v68, v67, v38 - 1);
    *((char *)v122 + v38 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v123 = 0;
  }
  v39 = v103;
  if ( (unsigned __int64)v103 > 1 )
  {
    v65 = src;
    v66 = dest;
    if ( *((_QWORD *)&v125 + 1) < (unsigned __int64)v103 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v103, 1);
      v66 = dest;
    }
    *(_QWORD *)&v125 = v39;
    memmove(v66, v65, v39 - 1);
    *((char *)dest + v39 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v125 = 0;
  }
  v40 = 0;
  if ( a2 < *((_QWORD *)a1 + 24) )
    v40 = 240 * a2;
  v41 = (char *)(*((_QWORD *)a1 + 23) + v40);
  sub_41BD40((__int64)&v126, (__int64)&v106);
  v42 = *((_QWORD *)a1 + 23);
  v43 = *((_QWORD *)a1 + 24);
  v44 = &v41[-v42];
  if ( *((_QWORD *)a1 + 25) < (unsigned __int64)(v43 + 1) )
  {
    v85 = qvector_reserve(a1 + 184, v42, v43 + 1, 240);
    *((_QWORD *)a1 + 23) = v85;
    v41 = &v44[v85];
    v43 = *((_QWORD *)a1 + 24);
  }
  p_s2 = (char **)v41;
  memmove(v41 + 240, v41, 240 * v43 - (_QWORD)v44);
  v45 = _mm_loadu_si128(&v127);
  *(_QWORD *)v41 = v126;
  v46 = v128;
  *(__m128i *)(v41 + 8) = v45;
  v47 = _mm_load_si128(&v129);
  *((_QWORD *)v41 + 3) = v46;
  v48 = v130;
  *((__m128i *)v41 + 2) = v47;
  v49 = _mm_loadu_si128(&v131);
  *((_QWORD *)v41 + 6) = v48;
  v50 = v132;
  *(__m128i *)(v41 + 56) = v49;
  v51 = _mm_load_si128(&v133);
  *((_QWORD *)v41 + 9) = v50;
  v52 = v134;
  *((__m128i *)v41 + 5) = v51;
  v53 = _mm_loadu_si128(&v135);
  *((_QWORD *)v41 + 12) = v52;
  v54 = v136;
  *(__m128i *)(v41 + 104) = v53;
  v55 = _mm_load_si128(&v137);
  *((_QWORD *)v41 + 15) = v54;
  v56 = v138;
  *((__m128i *)v41 + 8) = v55;
  v57 = _mm_loadu_si128(&v139);
  *((_QWORD *)v41 + 18) = v56;
  v58 = v140;
  *(__m128i *)(v41 + 152) = v57;
  v59 = _mm_load_si128(&v141);
  *((_QWORD *)v41 + 21) = v58;
  *((__m128i *)v41 + 11) = v59;
  v60 = _mm_loadu_si128(&v143);
  *((_QWORD *)v41 + 24) = v142;
  v61 = v144;
  *(__m128i *)(v41 + 200) = v60;
  v10 = _mm_load_si128(&v145);
  *((_QWORD *)v41 + 27) = v61;
  *((__m128i *)v41 + 14) = v10;
  v62 = dest;
  v63 = 1;
  ++*((_QWORD *)a1 + 24);
  if ( v62 )
  {
    *(_QWORD *)&v125 = 0;
    *(double *)v10.m128i_i64 = qfree(v62, (const char *)p_s2);
  }
  if ( v122 )
  {
    *(_QWORD *)&v123 = 0;
    *(double *)v10.m128i_i64 = qfree(v122, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  if ( v120 )
  {
    *(_QWORD *)&v121 = 0;
    *(double *)v10.m128i_i64 = qfree(v120, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  if ( v118 )
  {
    *(_QWORD *)&v119 = 0;
    *(double *)v10.m128i_i64 = qfree(v118, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  if ( v116 )
  {
    *(_QWORD *)&v117 = 0;
    *(double *)v10.m128i_i64 = qfree(v116, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    *(double *)v10.m128i_i64 = qfree(v114, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  if ( v112 )
  {
    *(_QWORD *)&v113 = 0;
    *(double *)v10.m128i_i64 = qfree(v112, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  if ( v110 )
  {
    *(_QWORD *)&v111 = 0;
    *(double *)v10.m128i_i64 = qfree(v110, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  if ( v108 )
  {
    *(_QWORD *)&v109 = 0;
    *(double *)v10.m128i_i64 = qfree(v108, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    *(double *)v10.m128i_i64 = qfree(v106, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
LABEL_60:
  if ( s2 )
  {
    *(_QWORD *)&v105 = 0;
    *(double *)v10.m128i_i64 = qfree(s2, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  if ( src )
  {
    *(_QWORD *)&v103 = 0;
    *(double *)v10.m128i_i64 = qfree(src, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    *(double *)v10.m128i_i64 = qfree(v100, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  if ( v98 )
  {
    *(_QWORD *)&v99 = 0;
    *(double *)v10.m128i_i64 = qfree(v98, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  if ( v96 )
  {
    *(_QWORD *)&v97 = 0;
    *(double *)v10.m128i_i64 = qfree(v96, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  if ( v94 )
  {
    *(_QWORD *)&v95 = 0;
    *(double *)v10.m128i_i64 = qfree(v94, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    qfree(v92, (const char *)p_s2, *(double *)v10.m128i_i64);
  }
  return v63;
}
