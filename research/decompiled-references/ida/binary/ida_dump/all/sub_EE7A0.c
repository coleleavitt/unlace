unsigned __int64 __fastcall sub_EE7A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v15; // rbx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // rsi
  int v21; // eax
  __m128 v22; // xmm0
  int v23; // eax
  __int64 v24; // r13
  __int64 v25; // rbp
  __int64 v26; // r12
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r13
  __int64 v33; // r12
  _QWORD *v34; // rbp
  __int64 v35; // rdi
  __int64 v36; // r12
  __int64 v37; // rbp
  _QWORD *v38; // rbx
  __m128i *v39; // rax
  unsigned __int8 v40; // r12
  __int64 v41; // rdi
  __int64 v42; // r13
  __int64 v43; // r12
  _QWORD *v44; // rbp
  __int64 v45; // rdi
  __int64 v46; // r12
  __int64 v47; // rbp
  _QWORD *v48; // rbx
  __int64 v49; // rdi
  __int64 v50; // r12
  __int64 v51; // rbp
  _QWORD *v52; // rbx
  int v53; // r12d
  __int64 v54; // rbp
  __int64 v55; // rax
  size_t v56; // r13
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rbp
  __int64 v60; // rax
  __m128i v61; // xmm0
  __int64 v62; // rax
  unsigned __int64 v63; // r14
  __int64 v64; // r8
  unsigned __int64 v65; // rcx
  size_t v66; // rdx
  __int64 v67; // rbp
  __int64 v68; // rbp
  __int64 v69; // r13
  __int64 v70; // r14
  __int64 v71; // r13
  __int64 v72; // r14
  int v73; // eax
  __int64 v74; // rax
  void *v75; // rax
  bool v76; // al
  int v77; // [rsp+8h] [rbp-300h]
  unsigned __int64 v78; // [rsp+10h] [rbp-2F8h]
  size_t n; // [rsp+40h] [rbp-2C8h]
  size_t na; // [rsp+40h] [rbp-2C8h]
  unsigned __int64 v84; // [rsp+48h] [rbp-2C0h]
  __int64 v85; // [rsp+58h] [rbp-2B0h]
  __int64 v86; // [rsp+68h] [rbp-2A0h]
  unsigned __int8 tinfo_details; // [rsp+7Fh] [rbp-289h]
  __int64 v88; // [rsp+90h] [rbp-278h] BYREF
  __int128 v89; // [rsp+98h] [rbp-270h]
  __int64 v90; // [rsp+A8h] [rbp-260h]
  __int64 v91; // [rsp+B0h] [rbp-258h]
  __int64 v92; // [rsp+B8h] [rbp-250h]
  __int128 v93; // [rsp+C0h] [rbp-248h]
  __int64 v94; // [rsp+D0h] [rbp-238h]
  __int128 v95; // [rsp+D8h] [rbp-230h]
  char v96; // [rsp+E8h] [rbp-220h]
  __int64 v97; // [rsp+F0h] [rbp-218h] BYREF
  __m128i v98; // [rsp+F8h] [rbp-210h] BYREF
  __int64 v99; // [rsp+108h] [rbp-200h]
  __int64 v100; // [rsp+110h] [rbp-1F8h]
  __int64 v101; // [rsp+118h] [rbp-1F0h]
  __int128 v102; // [rsp+120h] [rbp-1E8h]
  __int64 v103; // [rsp+130h] [rbp-1D8h]
  __int128 v104; // [rsp+138h] [rbp-1D0h]
  char v105; // [rsp+148h] [rbp-1C0h]
  __m128i v106; // [rsp+150h] [rbp-1B8h] BYREF
  __int64 v107; // [rsp+160h] [rbp-1A8h]
  __int64 v108; // [rsp+168h] [rbp-1A0h]
  _BYTE v109[24]; // [rsp+170h] [rbp-198h] BYREF
  __int128 v110; // [rsp+188h] [rbp-180h]
  __int64 v111; // [rsp+198h] [rbp-170h]
  __int64 v112; // [rsp+1A0h] [rbp-168h]
  char v113[8]; // [rsp+1A8h] [rbp-160h] BYREF
  __int64 v114; // [rsp+1B0h] [rbp-158h]
  __int64 v115; // [rsp+1B8h] [rbp-150h]
  __int64 v116; // [rsp+1C8h] [rbp-140h]
  __int64 v117; // [rsp+1D0h] [rbp-138h]
  __int64 v118; // [rsp+200h] [rbp-108h]
  __int64 v119; // [rsp+208h] [rbp-100h]
  __int64 v120; // [rsp+218h] [rbp-F0h]
  __int64 v121; // [rsp+220h] [rbp-E8h]
  __int64 v122; // [rsp+230h] [rbp-D8h]
  __int64 v123; // [rsp+238h] [rbp-D0h]
  __int64 v124; // [rsp+240h] [rbp-C8h]
  __int64 v125; // [rsp+248h] [rbp-C0h]
  __int64 v126; // [rsp+250h] [rbp-B8h]
  __int64 v127; // [rsp+258h] [rbp-B0h]
  __int128 v128; // [rsp+260h] [rbp-A8h]
  int v129; // [rsp+270h] [rbp-98h]
  __int16 v130; // [rsp+274h] [rbp-94h]
  __m128i si128; // [rsp+278h] [rbp-90h]
  __int128 v132; // [rsp+288h] [rbp-80h]
  __m128i v133; // [rsp+298h] [rbp-70h]
  __int128 v134; // [rsp+2A8h] [rbp-60h]
  int v135; // [rsp+2B8h] [rbp-50h]
  __int16 v136; // [rsp+2BCh] [rbp-4Ch]
  char v137; // [rsp+2BEh] [rbp-4Ah]
  unsigned __int64 v138; // [rsp+2C8h] [rbp-40h]

  v138 = __readfsqword(0x28u);
  v4 = sub_120380(a4, 0);
  if ( !v4 )
    return v138 - __readfsqword(0x28u);
  v5 = v4;
  if ( *(_BYTE *)(v4 + 64) != 8 )
    return v138 - __readfsqword(0x28u);
  v7 = *(_QWORD *)(v4 + 72);
  v88 = 0;
  v85 = v7;
  v90 = 0;
  v8 = *(_QWORD *)(a1 + 64);
  v91 = 0;
  v92 = 0;
  v86 = v8;
  v94 = 0;
  v96 = 16;
  v89 = 0;
  v93 = 0;
  v95 = 0;
  v9 = sub_120380(a2, 0);
  n = v9;
  if ( !v9 || *(_BYTE *)(v9 + 64) != 8 )
  {
    if ( !under_debugger )
      sub_383060(52541);
LABEL_161:
    BUG();
  }
  if ( (unsigned __int8)get_op_tinfo()
    && (v106.m128i_i64[0] = get_tinfo_property(),
        copy_tinfo_t(),
        clear_tinfo_t(),
        (tinfo_details = get_tinfo_details()) != 0) )
  {
    v15 = *(_QWORD *)(n + 72);
    v84 = v89;
    if ( (_QWORD)v89 == *(_QWORD *)(v15 + 32) && (v76 = sub_E3B70(v86, v15, &v88, v89)) )
    {
      tinfo_details = v76;
    }
    else
    {
      v97 = 0;
      v98 = 0;
      if ( v84 )
      {
        v77 = 0;
        v97 = qvector_reserve();
        while ( *(_QWORD *)(v15 + 32) )
        {
          v53 = 0;
          while ( (unsigned int)compare_arglocs() )
          {
            if ( (unsigned __int64)++v53 >= *(_QWORD *)(v15 + 32) )
              goto LABEL_137;
          }
          v54 = *(_QWORD *)(v15 + 24) + 80LL * v53;
          sub_123A40(&v106, v54);
          v55 = *(_QWORD *)(v54 + 16);
          v108 = 0;
          v107 = v55;
          copy_tinfo_t();
          memset(v109, 0, sizeof(v109));
          v56 = *(_QWORD *)(v54 + 40);
          if ( v56 )
          {
            *(_QWORD *)v109 = qalloc_or_throw();
            *(_QWORD *)&v109[16] = v56;
            memcpy(*(void **)v109, *(const void **)(v54 + 32), v56);
            *(_QWORD *)&v109[8] = v56;
          }
          LODWORD(v110) = 0;
          copy_argloc();
          v57 = v98.m128i_i64[0];
          v58 = v97;
          LODWORD(v111) = *(_DWORD *)(v54 + 72);
          if ( v98.m128i_i64[1] < (unsigned __int64)(v98.m128i_i64[0] + 1) )
          {
            v97 = qvector_reserve();
            v57 = v98.m128i_i64[0];
            v58 = v97;
          }
          v59 = v58 + 80 * v57;
          sub_123A40(v59, &v106);
          v60 = v107;
          *(_QWORD *)(v59 + 24) = 0;
          *(_QWORD *)(v59 + 16) = v60;
          copy_tinfo_t();
          v61 = _mm_loadu_si128((const __m128i *)&v109[8]);
          v62 = *(_QWORD *)v109;
          *(_QWORD *)v109 = 0;
          *(__m128i *)(v59 + 40) = v61;
          *(_OWORD *)&v109[8] = 0;
          *(_QWORD *)(v59 + 32) = v62;
          *(_DWORD *)(v59 + 56) = 0;
          copy_argloc();
          *(_DWORD *)(v59 + 72) = v111;
          ++v98.m128i_i64[0];
          cleanup_argloc();
          if ( *(_QWORD *)v109 )
          {
            *(_QWORD *)&v109[8] = 0;
            qfree();
          }
          clear_tinfo_t();
          sub_11CDA0(&v106);
          if ( ++v77 >= v84 )
            goto LABEL_24;
        }
LABEL_137:
        dstr_tinfo();
        sub_6D0A0(
          (__int64)"%a: argument #%d in a user-defined function type can not be applied to unmerged function: user-define"
                   "d type '%s' will be ignored\n",
          0.0,
          *(_QWORD *)(n + 24),
          (const char *)(unsigned int)(v77 + 1));
        tinfo_details = 0;
        v19 = v97;
      }
      else
      {
LABEL_24:
        v16 = v96 & 0xF0;
        if ( (v96 & 0xF0) == 0xC0 )
          v16 = HIDWORD(v90);
        if ( v16 <= 0x10 )
          v16 = getinf();
        v17 = v16 & 0xFFFFFFF0;
        v18 = *(_QWORD *)(v15 + 32);
        v19 = *(_QWORD *)(v15 + 24);
        v20 = v97;
        if ( v17 == 64 || v17 == 208 )
        {
          v63 = *(int *)(v15 + 8);
          if ( v63 < v18 )
          {
            v64 = 80 * (v18 - v63);
            v65 = 0xCCCCCCCCCCCCCCCDLL * (v64 >> 4);
            v78 = v65;
            if ( v65 )
            {
              v66 = 0;
              v67 = 80 * v98.m128i_i64[0];
              if ( v98.m128i_i64[1] < v65 + v98.m128i_i64[0] )
              {
                v97 = qvector_reserve();
                v20 = v97;
                v64 = 80 * (v18 - v63);
                v66 = 80 * v98.m128i_i64[0] - v67;
              }
              v68 = v20 + v67;
              v69 = 80 * v18;
              v70 = 80 * v63;
              memmove((void *)(v68 + v64), (const void *)v68, v66);
              if ( v69 != v70 )
              {
                v71 = v19 + v69;
                v72 = v19 + v70;
                do
                {
                  sub_123A40(v68, v72);
                  v74 = *(_QWORD *)(v72 + 16);
                  *(_QWORD *)(v68 + 24) = 0;
                  *(_QWORD *)(v68 + 16) = v74;
                  copy_tinfo_t();
                  *(_QWORD *)(v68 + 32) = 0;
                  *(_OWORD *)(v68 + 40) = 0;
                  if ( *(_QWORD *)(v72 + 40) )
                  {
                    na = *(_QWORD *)(v72 + 40);
                    v75 = (void *)qalloc_or_throw();
                    *(_QWORD *)(v68 + 32) = v75;
                    *(_QWORD *)(v68 + 48) = na;
                    memcpy(v75, *(const void **)(v72 + 32), na);
                    *(_QWORD *)(v68 + 40) = na;
                  }
                  *(_DWORD *)(v68 + 56) = 0;
                  copy_argloc();
                  v73 = *(_DWORD *)(v72 + 72);
                  v72 += 80;
                  v68 += 80;
                  *(_DWORD *)(v68 - 8) = v73;
                }
                while ( v71 != v72 );
              }
              v20 = v97;
              v98.m128i_i64[0] += v78;
              v19 = *(_QWORD *)(v15 + 24);
            }
          }
        }
        v21 = v89;
        *(_QWORD *)(v15 + 24) = v20;
        v22 = _mm_loadh_ps((const double *)(v15 + 40));
        *(_DWORD *)(v15 + 8) = v21;
        *(__m128i *)(v15 + 32) = _mm_loadu_si128(&v98);
        v97 = v19;
        v98 = (__m128i)v22;
        v23 = v96 & 0xF0;
        if ( (v96 & 0xF0) == 0xC0 )
          v23 = HIDWORD(v90);
        *(_DWORD *)(v15 + 20) = v23;
      }
      if ( v19 )
      {
        v24 = v98.m128i_i64[0];
        if ( v98.m128i_i64[0] )
        {
          v25 = 0;
          do
          {
            v26 = 80 * v25 + v19;
            cleanup_argloc();
            if ( *(_QWORD *)(v26 + 32) )
            {
              *(_QWORD *)(v26 + 40) = 0;
              qfree();
            }
            ++v25;
            clear_tinfo_t();
            sub_11CDA0(v26);
            v19 = v97;
          }
          while ( v24 != v25 );
        }
        v98.m128i_i64[0] = 0;
        qfree();
      }
    }
  }
  else
  {
    tinfo_details = 0;
  }
  clear_tinfo_t();
  v10 = *(_DWORD *)(v85 + 20) & 0xFFFFFFF0;
  if ( v10 != 64 && v10 != 208 || (unsigned __int8)sub_2B7C10(v86, *(_QWORD *)(v5 + 24)) )
  {
LABEL_10:
    if ( v94 )
    {
      *(_QWORD *)&v95 = 0;
      qfree();
    }
    cleanup_argloc();
    clear_tinfo_t();
    v11 = v88;
    if ( v88 )
    {
      v12 = v89;
      if ( (_QWORD)v89 )
      {
        v13 = 0;
        do
        {
          v14 = (_QWORD *)(v11 + 80 * v13);
          clear_tinfo_t();
          if ( v14[5] )
          {
            v14[6] = 0;
            qfree();
          }
          if ( v14[2] )
          {
            v14[3] = 0;
            qfree();
          }
          ++v13;
          cleanup_argloc();
          v11 = v88;
        }
        while ( v12 != v13 );
      }
LABEL_20:
      *(_QWORD *)&v89 = 0;
      qfree();
      return v138 - __readfsqword(0x28u);
    }
    return v138 - __readfsqword(0x28u);
  }
  v27 = *(_QWORD *)(a1 + 64);
  v28 = *(_QWORD *)(a1 + 480);
  v106 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)v27);
  v29 = *(_QWORD *)(v27 + 1496);
  v108 = 0;
  v107 = v29;
  v111 = 0;
  v112 = 0;
  memset(v109, 0, sizeof(v109));
  v110 = 0;
  sub_D10B0((__int64)v113, v28, 0);
  v130 = 0;
  v128 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  v133 = 0;
  v122 = a1;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v129 = -1;
  v135 = 0;
  v136 = 0;
  v137 = 0;
  v132 = -1;
  v134 = 0;
  v30 = sub_D7360(v106.m128i_i64[0], *(_QWORD *)(v106.m128i_i64[0] + 56));
  v133 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
  v133.m128i_i64[0] = *(int *)(v85 + 12);
  sub_E9680(&v106, v5, 0);
  v97 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v103 = 0;
  v105 = 16;
  v98 = 0;
  v102 = 0;
  v104 = 0;
  if ( !si128.m128i_i8[0] )
  {
LABEL_42:
    cleanup_argloc();
    clear_tinfo_t();
    v31 = v97;
    if ( v97 )
    {
      v32 = v98.m128i_i64[0];
      if ( v98.m128i_i64[0] )
      {
        v33 = 0;
        do
        {
          v34 = (_QWORD *)(v31 + 80 * v33);
          clear_tinfo_t();
          if ( v34[5] )
          {
            v34[6] = 0;
            qfree();
          }
          if ( v34[2] )
          {
            v34[3] = 0;
            qfree();
          }
          ++v33;
          cleanup_argloc();
          v31 = v97;
        }
        while ( v32 != v33 );
      }
      v98.m128i_i64[0] = 0;
      qfree();
    }
    clear_tinfo_t();
    if ( v127 )
    {
      *(_QWORD *)&v128 = 0;
      qfree();
    }
    qfree();
    qfree();
    if ( v120 )
    {
      v121 = 0;
      qfree();
    }
    if ( v118 )
    {
      v119 = 0;
      qfree();
    }
    if ( v116 )
    {
      v117 = 0;
      qfree();
    }
    if ( v114 )
    {
      v115 = 0;
      qfree();
    }
    qfree();
    v35 = *(_QWORD *)&v109[16];
    if ( *(_QWORD *)&v109[16] )
    {
      v36 = v110;
      if ( (_QWORD)v110 )
      {
        v37 = 0;
        do
        {
          v38 = (_QWORD *)(v35 + 48 * v37);
          if ( v38[3] )
          {
            v38[4] = 0;
            qfree();
          }
          if ( *v38 )
          {
            v38[1] = 0;
            qfree();
          }
          ++v37;
          v35 = *(_QWORD *)&v109[16];
        }
        while ( v36 != v37 );
      }
      *(_QWORD *)&v110 = 0;
      qfree();
    }
    if ( v108 )
    {
      *(_QWORD *)v109 = 0;
      qfree();
    }
    goto LABEL_10;
  }
  if ( !(unsigned __int8)get_tinfo_details() || v98.m128i_i32[0] < 0 )
  {
LABEL_143:
    if ( v103 )
    {
      *(_QWORD *)&v104 = 0;
      qfree();
    }
    goto LABEL_42;
  }
  if ( sub_E3B70(v106.m128i_i64[1], v85, &v97, SDWORD1(v134)) )
    goto LABEL_79;
  copy_tinfo_t();
  sub_E9680(&v106, v5, 1);
  if ( si128.m128i_i8[0] )
  {
    if ( (unsigned int)lexcompare_tinfo()
      && (unsigned __int8)get_tinfo_details()
      && v98.m128i_i32[0] >= 0
      && sub_E3B70(v106.m128i_i64[1], v85, &v97, SDWORD1(v134)) )
    {
      goto LABEL_78;
    }
    clear_tinfo_t();
    goto LABEL_143;
  }
  if ( *((_QWORD *)&v132 + 1) != -1 && (*(_BYTE *)(v5 + 6) & 0x10) == 0 )
  {
    if ( !under_debugger )
      sub_383060(52781);
    goto LABEL_161;
  }
LABEL_78:
  clear_tinfo_t();
LABEL_79:
  copy_tinfo_t();
  v39 = (__m128i *)&v88;
  if ( !tinfo_details )
    v39 = (__m128i *)&v97;
  v40 = sub_EDF20((__int64)&v106, a1, a2, v39, 0);
  if ( (unsigned __int8)sub_EDF20((__int64)&v106, a3, a4, (__m128i *)&v97, v40) == 1 && !(tinfo_details | v40) )
    sub_EDF20((__int64)&v106, a1, a2, (__m128i *)&v97, 1u);
  if ( v103 )
  {
    *(_QWORD *)&v104 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v41 = v97;
  if ( v97 )
  {
    v42 = v98.m128i_i64[0];
    v43 = 0;
    if ( v98.m128i_i64[0] )
    {
      do
      {
        v44 = (_QWORD *)(v41 + 80 * v43);
        clear_tinfo_t();
        if ( v44[5] )
        {
          v44[6] = 0;
          qfree();
        }
        if ( v44[2] )
        {
          v44[3] = 0;
          qfree();
        }
        ++v43;
        cleanup_argloc();
        v41 = v97;
      }
      while ( v42 != v43 );
    }
    v98.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( v127 )
  {
    *(_QWORD *)&v128 = 0;
    qfree();
  }
  qfree();
  qfree();
  if ( v120 )
  {
    v121 = 0;
    qfree();
  }
  if ( v118 )
  {
    v119 = 0;
    qfree();
  }
  if ( v116 )
  {
    v117 = 0;
    qfree();
  }
  if ( v114 )
  {
    v115 = 0;
    qfree();
  }
  qfree();
  v45 = *(_QWORD *)&v109[16];
  if ( *(_QWORD *)&v109[16] )
  {
    v46 = v110;
    v47 = 0;
    if ( (_QWORD)v110 )
    {
      do
      {
        v48 = (_QWORD *)(v45 + 48 * v47);
        if ( v48[3] )
        {
          v48[4] = 0;
          qfree();
        }
        if ( *v48 )
        {
          v48[1] = 0;
          qfree();
        }
        ++v47;
        v45 = *(_QWORD *)&v109[16];
      }
      while ( v46 != v47 );
    }
    *(_QWORD *)&v110 = 0;
    qfree();
  }
  if ( v108 )
  {
    *(_QWORD *)v109 = 0;
    qfree();
  }
  if ( v94 )
  {
    *(_QWORD *)&v95 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v49 = v88;
  if ( v88 )
  {
    v50 = v89;
    v51 = 0;
    if ( (_QWORD)v89 )
    {
      do
      {
        v52 = (_QWORD *)(v49 + 80 * v51);
        clear_tinfo_t();
        if ( v52[5] )
        {
          v52[6] = 0;
          qfree();
        }
        if ( v52[2] )
        {
          v52[3] = 0;
          qfree();
        }
        ++v51;
        cleanup_argloc();
        v49 = v88;
      }
      while ( v50 != v51 );
    }
    goto LABEL_20;
  }
  return v138 - __readfsqword(0x28u);
}
