unsigned __int64 __fastcall sub_EE1E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbp
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rbx
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rsi
  int v23; // eax
  __m128 v24; // xmm0
  int v25; // eax
  __int64 v26; // r13
  __int64 v27; // rbp
  __int64 v28; // r12
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // r13
  __int64 v36; // r12
  _QWORD *v37; // rbp
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // r12
  __int64 v42; // rbp
  __int64 *v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rdi
  __m128i *v46; // rax
  unsigned __int8 v47; // r12
  __int64 v48; // rdi
  __int64 v49; // r13
  __int64 v50; // r12
  _QWORD *v51; // rbp
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // r12
  __int64 v56; // rbp
  __int64 *v57; // rbx
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // r12
  __int64 v61; // rbp
  _QWORD *v62; // rbx
  __int64 v63; // rdi
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rbp
  int v67; // r12d
  __int64 v68; // rax
  __int64 v69; // rbp
  __int64 v70; // rax
  size_t v71; // r13
  __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rbp
  __int64 v75; // rax
  __m128i v76; // xmm0
  __int64 v77; // rax
  unsigned __int64 v78; // r14
  __int64 v79; // r8
  unsigned __int64 v80; // rcx
  size_t v81; // rdx
  __int64 v82; // rbp
  __int64 v83; // rbp
  __int64 v84; // r13
  __int64 v85; // r14
  __int64 v86; // r13
  __int64 v87; // r14
  int v88; // eax
  __int64 v89; // rax
  void *v90; // rax
  bool v91; // al
  int v92; // [rsp+8h] [rbp-300h]
  unsigned __int64 v93; // [rsp+10h] [rbp-2F8h]
  size_t n; // [rsp+40h] [rbp-2C8h]
  size_t na; // [rsp+40h] [rbp-2C8h]
  unsigned __int64 v100; // [rsp+48h] [rbp-2C0h]
  __int64 v101; // [rsp+58h] [rbp-2B0h]
  __int64 v102; // [rsp+68h] [rbp-2A0h]
  unsigned __int8 tinfo_details; // [rsp+7Fh] [rbp-289h]
  __int64 v104; // [rsp+88h] [rbp-280h] BYREF
  __int64 v105; // [rsp+90h] [rbp-278h] BYREF
  __int128 v106; // [rsp+98h] [rbp-270h]
  __int64 v107; // [rsp+A8h] [rbp-260h]
  __int64 v108; // [rsp+B0h] [rbp-258h] BYREF
  __int64 v109; // [rsp+B8h] [rbp-250h] BYREF
  __int128 v110; // [rsp+C0h] [rbp-248h]
  __int64 v111; // [rsp+D0h] [rbp-238h]
  __int128 v112; // [rsp+D8h] [rbp-230h]
  char v113; // [rsp+E8h] [rbp-220h]
  __int64 v114; // [rsp+F0h] [rbp-218h] BYREF
  __m128i v115; // [rsp+F8h] [rbp-210h] BYREF
  __int64 v116; // [rsp+108h] [rbp-200h]
  __int64 v117; // [rsp+110h] [rbp-1F8h] BYREF
  __int64 v118; // [rsp+118h] [rbp-1F0h] BYREF
  __int128 v119; // [rsp+120h] [rbp-1E8h]
  __int64 v120; // [rsp+130h] [rbp-1D8h]
  __int128 v121; // [rsp+138h] [rbp-1D0h]
  char v122; // [rsp+148h] [rbp-1C0h]
  __m128i v123; // [rsp+150h] [rbp-1B8h] BYREF
  __int64 v124; // [rsp+160h] [rbp-1A8h]
  __int64 v125; // [rsp+168h] [rbp-1A0h] BYREF
  _BYTE v126[24]; // [rsp+170h] [rbp-198h] BYREF
  __int128 v127; // [rsp+188h] [rbp-180h] BYREF
  __int64 v128; // [rsp+198h] [rbp-170h]
  __int64 v129; // [rsp+1A0h] [rbp-168h]
  char v130[8]; // [rsp+1A8h] [rbp-160h] BYREF
  __int64 v131; // [rsp+1B0h] [rbp-158h]
  __int64 v132; // [rsp+1B8h] [rbp-150h]
  __int64 v133; // [rsp+1C8h] [rbp-140h]
  __int64 v134; // [rsp+1D0h] [rbp-138h]
  __int64 v135; // [rsp+200h] [rbp-108h]
  __int64 v136; // [rsp+208h] [rbp-100h]
  __int64 v137; // [rsp+218h] [rbp-F0h]
  __int64 v138; // [rsp+220h] [rbp-E8h]
  __int64 v139; // [rsp+230h] [rbp-D8h]
  __int64 v140; // [rsp+238h] [rbp-D0h]
  __int64 v141; // [rsp+240h] [rbp-C8h]
  __int64 v142; // [rsp+248h] [rbp-C0h]
  __int64 v143; // [rsp+250h] [rbp-B8h]
  __int64 v144; // [rsp+258h] [rbp-B0h]
  __int128 v145; // [rsp+260h] [rbp-A8h]
  int v146; // [rsp+270h] [rbp-98h]
  __int16 v147; // [rsp+274h] [rbp-94h]
  __m128i si128; // [rsp+278h] [rbp-90h] BYREF
  __int128 v149; // [rsp+288h] [rbp-80h]
  __m128i v150; // [rsp+298h] [rbp-70h]
  __int128 v151; // [rsp+2A8h] [rbp-60h]
  int v152; // [rsp+2B8h] [rbp-50h]
  __int16 v153; // [rsp+2BCh] [rbp-4Ch]
  char v154; // [rsp+2BEh] [rbp-4Ah]
  unsigned __int64 v155; // [rsp+2C8h] [rbp-40h]

  v155 = __readfsqword(0x28u);
  v4 = sub_11FDC0(a4, 0);
  if ( !v4 )
    return v155 - __readfsqword(0x28u);
  v5 = v4;
  if ( *(_BYTE *)(v4 + 64) != 8 )
    return v155 - __readfsqword(0x28u);
  v7 = *(_QWORD *)(v4 + 72);
  v105 = 0;
  v101 = v7;
  v107 = 0;
  v8 = *(_QWORD *)(a1 + 64);
  v108 = 0;
  v109 = 0;
  v102 = v8;
  v111 = 0;
  v113 = 16;
  v106 = 0;
  v110 = 0;
  v112 = 0;
  v9 = sub_11FDC0(a2, 0);
  n = v9;
  if ( !v9 || *(_BYTE *)(v9 + 64) != 8 )
  {
    if ( !under_debugger )
      sub_3835A0(52541);
LABEL_161:
    BUG();
  }
  v104 = 0;
  if ( (unsigned __int8)get_op_tinfo(&v104, *(_QWORD *)(v9 + 24), 0)
    && (v123.m128i_i64[0] = 0,
        v123.m128i_i64[0] = get_tinfo_property(v104, 10),
        copy_tinfo_t(&v104, &v123),
        clear_tinfo_t(&v123),
        (tinfo_details = get_tinfo_details(v104, 12, &v105)) != 0) )
  {
    v17 = *(_QWORD *)(n + 72);
    v100 = v106;
    if ( (_QWORD)v106 == *(_QWORD *)(v17 + 32) && (v91 = sub_E35B0(v102, v17, &v105, v106)) )
    {
      tinfo_details = v91;
    }
    else
    {
      v114 = 0;
      v115 = 0;
      if ( v100 )
      {
        v92 = 0;
        v114 = qvector_reserve(&v114, 0, v100, 80);
        v65 = 0;
        while ( 1 )
        {
          v66 = v105 + 80 * v65;
          if ( !*(_QWORD *)(v17 + 32) )
            break;
          v67 = 0;
          v68 = 0;
          while ( (unsigned int)compare_arglocs(*(_QWORD *)(v17 + 24) + 80 * v68 + 56, v66) )
          {
            v68 = ++v67;
            if ( (unsigned __int64)v67 >= *(_QWORD *)(v17 + 32) )
              goto LABEL_137;
          }
          v69 = *(_QWORD *)(v17 + 24) + 80LL * v67;
          sub_123480(&v123, v69);
          v70 = *(_QWORD *)(v69 + 16);
          v125 = 0;
          v124 = v70;
          copy_tinfo_t(&v125, v69 + 24);
          memset(v126, 0, sizeof(v126));
          v71 = *(_QWORD *)(v69 + 40);
          if ( v71 )
          {
            *(_QWORD *)v126 = qalloc_or_throw(*(_QWORD *)(v69 + 40));
            *(_QWORD *)&v126[16] = v71;
            memcpy(*(void **)v126, *(const void **)(v69 + 32), v71);
            *(_QWORD *)&v126[8] = v71;
          }
          LODWORD(v127) = 0;
          copy_argloc(&v127, v69 + 56);
          v72 = v115.m128i_i64[0];
          v73 = v114;
          LODWORD(v128) = *(_DWORD *)(v69 + 72);
          if ( v115.m128i_i64[1] < (unsigned __int64)(v115.m128i_i64[0] + 1) )
          {
            v114 = qvector_reserve(&v114, v114, v115.m128i_i64[0] + 1, 80);
            v72 = v115.m128i_i64[0];
            v73 = v114;
          }
          v74 = v73 + 80 * v72;
          sub_123480(v74, &v123);
          v75 = v124;
          *(_QWORD *)(v74 + 24) = 0;
          *(_QWORD *)(v74 + 16) = v75;
          copy_tinfo_t(v74 + 24, &v125);
          v76 = _mm_loadu_si128((const __m128i *)&v126[8]);
          v77 = *(_QWORD *)v126;
          *(_QWORD *)v126 = 0;
          *(__m128i *)(v74 + 40) = v76;
          *(_OWORD *)&v126[8] = 0;
          *(_QWORD *)(v74 + 32) = v77;
          *(_DWORD *)(v74 + 56) = 0;
          copy_argloc(v74 + 56, &v127);
          *(_DWORD *)(v74 + 72) = v128;
          ++v115.m128i_i64[0];
          cleanup_argloc(&v127);
          if ( *(_QWORD *)v126 )
          {
            *(_QWORD *)&v126[8] = 0;
            qfree(*(_QWORD *)v126);
          }
          clear_tinfo_t(&v125);
          sub_11C7E0(&v123);
          v65 = ++v92;
          if ( v92 >= v100 )
            goto LABEL_24;
        }
LABEL_137:
        dstr_tinfo(&v104);
        sub_6CAE0(
          (__int64)"%a: argument #%d in a user-defined function type can not be applied to unmerged function: user-define"
                   "d type '%s' will be ignored\n",
          0.0,
          *(_QWORD *)(n + 24),
          (const char *)(unsigned int)(v92 + 1));
        tinfo_details = 0;
        v21 = v114;
      }
      else
      {
LABEL_24:
        v18 = v113 & 0xF0;
        if ( (v113 & 0xF0) == 0xC0 )
          v18 = HIDWORD(v107);
        if ( v18 <= 0x10 )
          v18 = getinf(99);
        v19 = v18 & 0xFFFFFFF0;
        v20 = *(_QWORD *)(v17 + 32);
        v21 = *(_QWORD *)(v17 + 24);
        v22 = v114;
        if ( v19 == 64 || v19 == 208 )
        {
          v78 = *(int *)(v17 + 8);
          if ( v78 < v20 )
          {
            v79 = 80 * (v20 - v78);
            v80 = 0xCCCCCCCCCCCCCCCDLL * (v79 >> 4);
            v93 = v80;
            if ( v80 )
            {
              v81 = 0;
              v82 = 80 * v115.m128i_i64[0];
              if ( v115.m128i_i64[1] < v80 + v115.m128i_i64[0] )
              {
                v114 = qvector_reserve(&v114, v114, v80 + v115.m128i_i64[0], 80);
                v22 = v114;
                v79 = 80 * (v20 - v78);
                v81 = 80 * v115.m128i_i64[0] - v82;
              }
              v83 = v22 + v82;
              v84 = 80 * v20;
              v85 = 80 * v78;
              memmove((void *)(v83 + v79), (const void *)v83, v81);
              if ( v84 != v85 )
              {
                v86 = v21 + v84;
                v87 = v21 + v85;
                do
                {
                  sub_123480(v83, v87);
                  v89 = *(_QWORD *)(v87 + 16);
                  *(_QWORD *)(v83 + 24) = 0;
                  *(_QWORD *)(v83 + 16) = v89;
                  copy_tinfo_t(v83 + 24, v87 + 24);
                  *(_QWORD *)(v83 + 32) = 0;
                  *(_OWORD *)(v83 + 40) = 0;
                  if ( *(_QWORD *)(v87 + 40) )
                  {
                    na = *(_QWORD *)(v87 + 40);
                    v90 = (void *)qalloc_or_throw(na);
                    *(_QWORD *)(v83 + 32) = v90;
                    *(_QWORD *)(v83 + 48) = na;
                    memcpy(v90, *(const void **)(v87 + 32), na);
                    *(_QWORD *)(v83 + 40) = na;
                  }
                  *(_DWORD *)(v83 + 56) = 0;
                  copy_argloc(v83 + 56, v87 + 56);
                  v88 = *(_DWORD *)(v87 + 72);
                  v87 += 80;
                  v83 += 80;
                  *(_DWORD *)(v83 - 8) = v88;
                }
                while ( v86 != v87 );
              }
              v22 = v114;
              v115.m128i_i64[0] += v93;
              v21 = *(_QWORD *)(v17 + 24);
            }
          }
        }
        v23 = v106;
        *(_QWORD *)(v17 + 24) = v22;
        v24 = _mm_loadh_ps((const double *)(v17 + 40));
        *(_DWORD *)(v17 + 8) = v23;
        *(__m128i *)(v17 + 32) = _mm_loadu_si128(&v115);
        v114 = v21;
        v115 = (__m128i)v24;
        v25 = v113 & 0xF0;
        if ( (v113 & 0xF0) == 0xC0 )
          v25 = HIDWORD(v107);
        *(_DWORD *)(v17 + 20) = v25;
      }
      if ( v21 )
      {
        v26 = v115.m128i_i64[0];
        if ( v115.m128i_i64[0] )
        {
          v27 = 0;
          do
          {
            v28 = 80 * v27 + v21;
            cleanup_argloc(v28 + 56);
            v29 = *(_QWORD *)(v28 + 32);
            if ( v29 )
            {
              *(_QWORD *)(v28 + 40) = 0;
              qfree(v29);
            }
            ++v27;
            clear_tinfo_t(v28 + 24);
            sub_11C7E0(v28);
            v21 = v114;
          }
          while ( v26 != v27 );
        }
        v115.m128i_i64[0] = 0;
        qfree(v21);
      }
    }
  }
  else
  {
    tinfo_details = 0;
  }
  clear_tinfo_t(&v104);
  v10 = *(_DWORD *)(v101 + 20) & 0xFFFFFFF0;
  if ( v10 != 64 && v10 != 208 || (unsigned __int8)sub_2B7FD0(v102, *(_QWORD *)(v5 + 24)) )
  {
LABEL_10:
    if ( v111 )
    {
      *(_QWORD *)&v112 = 0;
      qfree(v111);
    }
    cleanup_argloc(&v109);
    clear_tinfo_t(&v108);
    v11 = v105;
    if ( v105 )
    {
      v12 = v106;
      if ( (_QWORD)v106 )
      {
        v13 = 0;
        do
        {
          v14 = (_QWORD *)(v11 + 80 * v13);
          clear_tinfo_t(v14 + 8);
          v15 = v14[5];
          if ( v15 )
          {
            v14[6] = 0;
            qfree(v15);
          }
          v16 = v14[2];
          if ( v16 )
          {
            v14[3] = 0;
            qfree(v16);
          }
          ++v13;
          cleanup_argloc(v14);
          v11 = v105;
        }
        while ( v12 != v13 );
      }
LABEL_20:
      *(_QWORD *)&v106 = 0;
      qfree(v11);
      return v155 - __readfsqword(0x28u);
    }
    return v155 - __readfsqword(0x28u);
  }
  v30 = *(_QWORD *)(a1 + 64);
  v31 = *(_QWORD *)(a1 + 480);
  v123 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)v30);
  v32 = *(_QWORD *)(v30 + 1496);
  v125 = 0;
  v124 = v32;
  v128 = 0;
  v129 = 0;
  memset(v126, 0, sizeof(v126));
  v127 = 0;
  sub_D0AF0((__int64)v130, v31, 0);
  v147 = 0;
  v145 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F900);
  v150 = 0;
  v139 = a1;
  v140 = 0;
  v141 = 0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v146 = -1;
  v152 = 0;
  v153 = 0;
  v154 = 0;
  v149 = -1;
  v151 = 0;
  v33 = sub_D6DA0(v123.m128i_i64[0], *(_QWORD *)(v123.m128i_i64[0] + 56));
  v150 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)(unsigned __int64)v33);
  v150.m128i_i64[0] = *(int *)(v101 + 12);
  sub_E90C0(&v123, v5, 0);
  v114 = 0;
  v116 = 0;
  v117 = 0;
  v118 = 0;
  v120 = 0;
  v122 = 16;
  v115 = 0;
  v119 = 0;
  v121 = 0;
  if ( !si128.m128i_i8[0] )
  {
LABEL_42:
    cleanup_argloc(&v118);
    clear_tinfo_t(&v117);
    v34 = v114;
    if ( v114 )
    {
      v35 = v115.m128i_i64[0];
      if ( v115.m128i_i64[0] )
      {
        v36 = 0;
        do
        {
          v37 = (_QWORD *)(v34 + 80 * v36);
          clear_tinfo_t(v37 + 8);
          v38 = v37[5];
          if ( v38 )
          {
            v37[6] = 0;
            qfree(v38);
          }
          v39 = v37[2];
          if ( v39 )
          {
            v37[3] = 0;
            qfree(v39);
          }
          ++v36;
          cleanup_argloc(v37);
          v34 = v114;
        }
        while ( v35 != v36 );
      }
      v115.m128i_i64[0] = 0;
      qfree(v34);
    }
    clear_tinfo_t(&si128);
    if ( v144 )
    {
      *(_QWORD *)&v145 = 0;
      qfree(v144);
    }
    qfree(v142);
    qfree(v140);
    if ( v137 )
    {
      v138 = 0;
      qfree(v137);
    }
    if ( v135 )
    {
      v136 = 0;
      qfree(v135);
    }
    if ( v133 )
    {
      v134 = 0;
      qfree(v133);
    }
    if ( v131 )
    {
      v132 = 0;
      qfree(v131);
    }
    qfree(v128);
    v40 = *(_QWORD *)&v126[16];
    if ( *(_QWORD *)&v126[16] )
    {
      v41 = v127;
      if ( (_QWORD)v127 )
      {
        v42 = 0;
        do
        {
          v43 = (__int64 *)(v40 + 48 * v42);
          v44 = v43[3];
          if ( v44 )
          {
            v43[4] = 0;
            qfree(v44);
          }
          v45 = *v43;
          if ( *v43 )
          {
            v43[1] = 0;
            qfree(v45);
          }
          ++v42;
          v40 = *(_QWORD *)&v126[16];
        }
        while ( v41 != v42 );
      }
      *(_QWORD *)&v127 = 0;
      qfree(v40);
    }
    if ( v125 )
    {
      *(_QWORD *)v126 = 0;
      qfree(v125);
    }
    goto LABEL_10;
  }
  if ( !(unsigned __int8)get_tinfo_details(si128.m128i_i64[0], 12, &v114) || v115.m128i_i32[0] < 0 )
  {
LABEL_143:
    if ( v120 )
    {
      *(_QWORD *)&v121 = 0;
      qfree(v120);
    }
    goto LABEL_42;
  }
  if ( sub_E35B0(v123.m128i_i64[1], v101, &v114, SDWORD1(v151)) )
    goto LABEL_79;
  v104 = 0;
  copy_tinfo_t(&v104, &si128);
  sub_E90C0(&v123, v5, 1);
  if ( si128.m128i_i8[0] )
  {
    if ( (unsigned int)lexcompare_tinfo(si128.m128i_i64[0], v104, 0)
      && (unsigned __int8)get_tinfo_details(si128.m128i_i64[0], 12, &v114)
      && v115.m128i_i32[0] >= 0
      && sub_E35B0(v123.m128i_i64[1], v101, &v114, SDWORD1(v151)) )
    {
      goto LABEL_78;
    }
    clear_tinfo_t(&v104);
    goto LABEL_143;
  }
  if ( *((_QWORD *)&v149 + 1) != -1 && (*(_BYTE *)(v5 + 6) & 0x10) == 0 )
  {
    if ( !under_debugger )
      sub_3835A0(52781);
    goto LABEL_161;
  }
LABEL_78:
  clear_tinfo_t(&v104);
LABEL_79:
  copy_tinfo_t(&v117, *(_QWORD *)(a1 + 480) + 232LL);
  v46 = (__m128i *)&v105;
  if ( !tinfo_details )
    v46 = (__m128i *)&v114;
  v47 = sub_ED960((__int64)&v123, a1, a2, v46, 0);
  if ( (unsigned __int8)sub_ED960((__int64)&v123, a3, a4, (__m128i *)&v114, v47) == 1 && !(tinfo_details | v47) )
    sub_ED960((__int64)&v123, a1, a2, (__m128i *)&v114, 1u);
  if ( v120 )
  {
    *(_QWORD *)&v121 = 0;
    qfree(v120);
  }
  cleanup_argloc(&v118);
  clear_tinfo_t(&v117);
  v48 = v114;
  if ( v114 )
  {
    v49 = v115.m128i_i64[0];
    v50 = 0;
    if ( v115.m128i_i64[0] )
    {
      do
      {
        v51 = (_QWORD *)(v48 + 80 * v50);
        clear_tinfo_t(v51 + 8);
        v52 = v51[5];
        if ( v52 )
        {
          v51[6] = 0;
          qfree(v52);
        }
        v53 = v51[2];
        if ( v53 )
        {
          v51[3] = 0;
          qfree(v53);
        }
        ++v50;
        cleanup_argloc(v51);
        v48 = v114;
      }
      while ( v49 != v50 );
    }
    v115.m128i_i64[0] = 0;
    qfree(v48);
  }
  clear_tinfo_t(&si128);
  if ( v144 )
  {
    *(_QWORD *)&v145 = 0;
    qfree(v144);
  }
  qfree(v142);
  qfree(v140);
  if ( v137 )
  {
    v138 = 0;
    qfree(v137);
  }
  if ( v135 )
  {
    v136 = 0;
    qfree(v135);
  }
  if ( v133 )
  {
    v134 = 0;
    qfree(v133);
  }
  if ( v131 )
  {
    v132 = 0;
    qfree(v131);
  }
  qfree(v128);
  v54 = *(_QWORD *)&v126[16];
  if ( *(_QWORD *)&v126[16] )
  {
    v55 = v127;
    v56 = 0;
    if ( (_QWORD)v127 )
    {
      do
      {
        v57 = (__int64 *)(v54 + 48 * v56);
        v58 = v57[3];
        if ( v58 )
        {
          v57[4] = 0;
          qfree(v58);
        }
        v59 = *v57;
        if ( *v57 )
        {
          v57[1] = 0;
          qfree(v59);
        }
        ++v56;
        v54 = *(_QWORD *)&v126[16];
      }
      while ( v55 != v56 );
    }
    *(_QWORD *)&v127 = 0;
    qfree(v54);
  }
  if ( v125 )
  {
    *(_QWORD *)v126 = 0;
    qfree(v125);
  }
  if ( v111 )
  {
    *(_QWORD *)&v112 = 0;
    qfree(v111);
  }
  cleanup_argloc(&v109);
  clear_tinfo_t(&v108);
  v11 = v105;
  if ( v105 )
  {
    v60 = v106;
    v61 = 0;
    if ( (_QWORD)v106 )
    {
      do
      {
        v62 = (_QWORD *)(v11 + 80 * v61);
        clear_tinfo_t(v62 + 8);
        v63 = v62[5];
        if ( v63 )
        {
          v62[6] = 0;
          qfree(v63);
        }
        v64 = v62[2];
        if ( v64 )
        {
          v62[3] = 0;
          qfree(v64);
        }
        ++v61;
        cleanup_argloc(v62);
        v11 = v105;
      }
      while ( v60 != v61 );
    }
    goto LABEL_20;
  }
  return v155 - __readfsqword(0x28u);
}
