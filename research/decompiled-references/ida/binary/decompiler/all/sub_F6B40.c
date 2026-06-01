unsigned __int64 __fastcall sub_F6B40(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
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
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbp
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rdi
  __int64 v34; // r13
  __int64 v35; // r12
  _QWORD *v36; // rbp
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // rbp
  _QWORD *v40; // rbx
  __m128i *v41; // rax
  unsigned __int8 v42; // bp
  __int64 v43; // rdi
  __int64 v44; // r12
  __int64 v45; // rbp
  _QWORD *v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // r12
  __int64 v49; // rbp
  _QWORD *v50; // rbx
  __int64 v51; // rdi
  __int64 v52; // r12
  __int64 v53; // rbp
  _QWORD *v54; // rbx
  int v55; // r12d
  __int64 v56; // rbp
  __int64 v57; // rax
  size_t v58; // r13
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rbp
  __int64 v62; // rax
  __m128i v63; // xmm0
  __int64 v64; // rax
  unsigned __int64 v65; // r14
  __int64 v66; // r8
  unsigned __int64 v67; // rcx
  size_t v68; // rdx
  __int64 v69; // rbp
  __int64 v70; // rbp
  __int64 v71; // r13
  __int64 v72; // r14
  __int64 v73; // r13
  __int64 v74; // r14
  int v75; // eax
  __int64 v76; // rax
  void *v77; // rax
  bool v78; // al
  int v79; // [rsp+8h] [rbp-300h]
  unsigned __int64 v80; // [rsp+10h] [rbp-2F8h]
  size_t n; // [rsp+40h] [rbp-2C8h]
  size_t na; // [rsp+40h] [rbp-2C8h]
  unsigned __int64 v86; // [rsp+48h] [rbp-2C0h]
  __int64 v87; // [rsp+58h] [rbp-2B0h]
  __int64 v88; // [rsp+68h] [rbp-2A0h]
  unsigned __int8 tinfo_details; // [rsp+7Fh] [rbp-289h]
  __int64 v90; // [rsp+90h] [rbp-278h] BYREF
  __int128 v91; // [rsp+98h] [rbp-270h]
  __int64 v92; // [rsp+A8h] [rbp-260h]
  __int64 v93; // [rsp+B0h] [rbp-258h]
  __int64 v94; // [rsp+B8h] [rbp-250h]
  __int128 v95; // [rsp+C0h] [rbp-248h]
  __int64 v96; // [rsp+D0h] [rbp-238h]
  __int128 v97; // [rsp+D8h] [rbp-230h]
  char v98; // [rsp+E8h] [rbp-220h]
  __int64 v99; // [rsp+F0h] [rbp-218h] BYREF
  __m128i v100; // [rsp+F8h] [rbp-210h] BYREF
  __int64 v101; // [rsp+108h] [rbp-200h]
  __int64 v102; // [rsp+110h] [rbp-1F8h]
  __int64 v103; // [rsp+118h] [rbp-1F0h]
  __int128 v104; // [rsp+120h] [rbp-1E8h]
  __int64 v105; // [rsp+130h] [rbp-1D8h]
  __int128 v106; // [rsp+138h] [rbp-1D0h]
  char v107; // [rsp+148h] [rbp-1C0h]
  __m128i v108; // [rsp+150h] [rbp-1B8h] BYREF
  __int64 v109; // [rsp+160h] [rbp-1A8h]
  __int64 v110; // [rsp+168h] [rbp-1A0h]
  _BYTE v111[24]; // [rsp+170h] [rbp-198h] BYREF
  __int128 v112; // [rsp+188h] [rbp-180h]
  __int64 v113; // [rsp+198h] [rbp-170h]
  __int64 v114; // [rsp+1A0h] [rbp-168h]
  __int64 v115; // [rsp+1A8h] [rbp-160h]
  __int64 v116; // [rsp+1B0h] [rbp-158h]
  __int128 v117; // [rsp+1B8h] [rbp-150h]
  __int64 v118; // [rsp+1C8h] [rbp-140h]
  __int128 v119; // [rsp+1D0h] [rbp-138h]
  __int128 v120; // [rsp+1E0h] [rbp-128h]
  __int64 v121; // [rsp+1F0h] [rbp-118h]
  __int64 v122; // [rsp+1F8h] [rbp-110h]
  __int64 v123; // [rsp+200h] [rbp-108h]
  __int128 v124; // [rsp+208h] [rbp-100h]
  __int64 v125; // [rsp+218h] [rbp-F0h]
  __int128 v126; // [rsp+220h] [rbp-E8h]
  _QWORD *v127; // [rsp+230h] [rbp-D8h]
  __int64 v128; // [rsp+238h] [rbp-D0h]
  __int64 v129; // [rsp+240h] [rbp-C8h]
  __int64 v130; // [rsp+248h] [rbp-C0h]
  __int64 v131; // [rsp+250h] [rbp-B8h]
  __int64 v132; // [rsp+258h] [rbp-B0h]
  __int128 v133; // [rsp+260h] [rbp-A8h]
  int v134; // [rsp+270h] [rbp-98h]
  __int16 v135; // [rsp+274h] [rbp-94h]
  __m128i si128; // [rsp+278h] [rbp-90h]
  __int128 v137; // [rsp+288h] [rbp-80h]
  __m128i v138; // [rsp+298h] [rbp-70h]
  __int128 v139; // [rsp+2A8h] [rbp-60h]
  int v140; // [rsp+2B8h] [rbp-50h]
  __int16 v141; // [rsp+2BCh] [rbp-4Ch]
  char v142; // [rsp+2BEh] [rbp-4Ah]
  unsigned __int64 v143; // [rsp+2C8h] [rbp-40h]

  v143 = __readfsqword(0x28u);
  v4 = sub_11DF40(a4, 0);
  if ( !v4 )
    return v143 - __readfsqword(0x28u);
  v5 = v4;
  if ( *(_BYTE *)(v4 + 64) != 8 )
    return v143 - __readfsqword(0x28u);
  v7 = *(_QWORD *)(v4 + 72);
  v90 = 0;
  v87 = v7;
  v92 = 0;
  v8 = a1[8];
  v93 = 0;
  v94 = 0;
  v88 = v8;
  v96 = 0;
  v98 = 16;
  v91 = 0;
  v95 = 0;
  v97 = 0;
  v9 = sub_11DF40(a2, 0);
  n = v9;
  if ( !v9 || *(_BYTE *)(v9 + 64) != 8 )
  {
    if ( !under_debugger )
      sub_37EA20(52541);
LABEL_165:
    BUG();
  }
  if ( (unsigned __int8)get_op_tinfo()
    && (v108.m128i_i64[0] = get_tinfo_property(),
        copy_tinfo_t(),
        clear_tinfo_t(),
        (tinfo_details = get_tinfo_details()) != 0) )
  {
    v15 = *(_QWORD *)(n + 72);
    v86 = v91;
    if ( (_QWORD)v91 == *(_QWORD *)(v15 + 32) && (v78 = sub_CF280(v88, v15, &v90, v91)) )
    {
      tinfo_details = v78;
    }
    else
    {
      v99 = 0;
      v100 = 0;
      if ( v86 )
      {
        v79 = 0;
        v99 = qvector_reserve();
        while ( *(_QWORD *)(v15 + 32) )
        {
          v55 = 0;
          while ( (unsigned int)compare_arglocs() )
          {
            if ( (unsigned __int64)++v55 >= *(_QWORD *)(v15 + 32) )
              goto LABEL_141;
          }
          v56 = *(_QWORD *)(v15 + 24) + 80LL * v55;
          sub_121540(&v108, v56);
          v57 = *(_QWORD *)(v56 + 16);
          v110 = 0;
          v109 = v57;
          copy_tinfo_t();
          memset(v111, 0, sizeof(v111));
          v58 = *(_QWORD *)(v56 + 40);
          if ( v58 )
          {
            *(_QWORD *)v111 = qalloc_or_throw();
            *(_QWORD *)&v111[16] = v58;
            memcpy(*(void **)v111, *(const void **)(v56 + 32), v58);
            *(_QWORD *)&v111[8] = v58;
          }
          LODWORD(v112) = 0;
          copy_argloc();
          v59 = v100.m128i_i64[0];
          v60 = v99;
          LODWORD(v113) = *(_DWORD *)(v56 + 72);
          if ( v100.m128i_i64[1] < (unsigned __int64)(v100.m128i_i64[0] + 1) )
          {
            v99 = qvector_reserve();
            v59 = v100.m128i_i64[0];
            v60 = v99;
          }
          v61 = v60 + 80 * v59;
          sub_121540(v61, &v108);
          v62 = v109;
          *(_QWORD *)(v61 + 24) = 0;
          *(_QWORD *)(v61 + 16) = v62;
          copy_tinfo_t();
          v63 = _mm_loadu_si128((const __m128i *)&v111[8]);
          v64 = *(_QWORD *)v111;
          *(_QWORD *)v111 = 0;
          *(__m128i *)(v61 + 40) = v63;
          *(_OWORD *)&v111[8] = 0;
          *(_QWORD *)(v61 + 32) = v64;
          *(_DWORD *)(v61 + 56) = 0;
          copy_argloc();
          *(_DWORD *)(v61 + 72) = v113;
          ++v100.m128i_i64[0];
          cleanup_argloc();
          if ( *(_QWORD *)v111 )
          {
            *(_QWORD *)&v111[8] = 0;
            qfree();
          }
          clear_tinfo_t();
          sub_11A960(&v108);
          if ( ++v79 >= v86 )
            goto LABEL_24;
        }
LABEL_141:
        dstr_tinfo();
        sub_6C720(
          (__int64)"%a: argument #%d in a user-defined function type can not be applied to unmerged function: user-define"
                   "d type '%s' will be ignored\n",
          0.0,
          *(_QWORD *)(n + 24),
          (const char *)(unsigned int)(v79 + 1));
        tinfo_details = 0;
        v19 = v99;
      }
      else
      {
LABEL_24:
        v16 = v98 & 0xF0;
        if ( (v98 & 0xF0) == 0xC0 )
          v16 = HIDWORD(v92);
        if ( v16 <= 0x10 )
          v16 = getinf();
        v17 = v16 & 0xFFFFFFF0;
        v18 = *(_QWORD *)(v15 + 32);
        v19 = *(_QWORD *)(v15 + 24);
        v20 = v99;
        if ( v17 == 64 || v17 == 208 )
        {
          v65 = *(int *)(v15 + 8);
          if ( v65 < v18 )
          {
            v66 = 80 * (v18 - v65);
            v67 = 0xCCCCCCCCCCCCCCCDLL * (v66 >> 4);
            v80 = v67;
            if ( v67 )
            {
              v68 = 0;
              v69 = 80 * v100.m128i_i64[0];
              if ( v100.m128i_i64[1] < v67 + v100.m128i_i64[0] )
              {
                v99 = qvector_reserve();
                v20 = v99;
                v66 = 80 * (v18 - v65);
                v68 = 80 * v100.m128i_i64[0] - v69;
              }
              v70 = v20 + v69;
              v71 = 80 * v18;
              v72 = 80 * v65;
              memmove((void *)(v70 + v66), (const void *)v70, v68);
              if ( v71 != v72 )
              {
                v73 = v19 + v71;
                v74 = v19 + v72;
                do
                {
                  sub_121540(v70, v74);
                  v76 = *(_QWORD *)(v74 + 16);
                  *(_QWORD *)(v70 + 24) = 0;
                  *(_QWORD *)(v70 + 16) = v76;
                  copy_tinfo_t();
                  *(_QWORD *)(v70 + 32) = 0;
                  *(_OWORD *)(v70 + 40) = 0;
                  if ( *(_QWORD *)(v74 + 40) )
                  {
                    na = *(_QWORD *)(v74 + 40);
                    v77 = (void *)qalloc_or_throw();
                    *(_QWORD *)(v70 + 32) = v77;
                    *(_QWORD *)(v70 + 48) = na;
                    memcpy(v77, *(const void **)(v74 + 32), na);
                    *(_QWORD *)(v70 + 40) = na;
                  }
                  *(_DWORD *)(v70 + 56) = 0;
                  copy_argloc();
                  v75 = *(_DWORD *)(v74 + 72);
                  v74 += 80;
                  v70 += 80;
                  *(_DWORD *)(v70 - 8) = v75;
                }
                while ( v73 != v74 );
              }
              v20 = v99;
              v100.m128i_i64[0] += v80;
              v19 = *(_QWORD *)(v15 + 24);
            }
          }
        }
        v21 = v91;
        *(_QWORD *)(v15 + 24) = v20;
        v22 = _mm_loadh_ps((const double *)(v15 + 40));
        *(_DWORD *)(v15 + 8) = v21;
        *(__m128i *)(v15 + 32) = _mm_loadu_si128(&v100);
        v99 = v19;
        v100 = (__m128i)v22;
        v23 = v98 & 0xF0;
        if ( (v98 & 0xF0) == 0xC0 )
          v23 = HIDWORD(v92);
        *(_DWORD *)(v15 + 20) = v23;
      }
      if ( v19 )
      {
        v24 = v100.m128i_i64[0];
        if ( v100.m128i_i64[0] )
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
            sub_11A960(v26);
            v19 = v99;
          }
          while ( v24 != v25 );
        }
        v100.m128i_i64[0] = 0;
        qfree();
      }
    }
  }
  else
  {
    tinfo_details = 0;
  }
  clear_tinfo_t();
  v10 = *(_DWORD *)(v87 + 20) & 0xFFFFFFF0;
  if ( v10 != 64 && v10 != 208 || (unsigned __int8)sub_2B4D40(v88, *(_QWORD *)(v5 + 24)) )
  {
LABEL_10:
    if ( v96 )
    {
      *(_QWORD *)&v97 = 0;
      qfree();
    }
    cleanup_argloc();
    clear_tinfo_t();
    v11 = v90;
    if ( v90 )
    {
      v12 = v91;
      if ( (_QWORD)v91 )
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
          v11 = v90;
        }
        while ( v12 != v13 );
      }
LABEL_20:
      *(_QWORD *)&v91 = 0;
      qfree();
      return v143 - __readfsqword(0x28u);
    }
    return v143 - __readfsqword(0x28u);
  }
  v27 = a1[8];
  v108 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)v27);
  v28 = *(_QWORD *)(v27 + 1496);
  v110 = 0;
  v109 = v28;
  v29 = a1[60];
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v118 = 0;
  v121 = 0;
  v122 = v29;
  v123 = 0;
  v125 = 0;
  v127 = a1;
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v134 = -1;
  memset(v111, 0, sizeof(v111));
  v112 = 0;
  v117 = 0;
  v119 = 0;
  v120 = 0;
  v124 = 0;
  v126 = 0;
  v133 = 0;
  v135 = 0;
  v30 = a1[7];
  v141 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_425BA0);
  v140 = 0;
  v142 = 0;
  v137 = -1;
  v138 = 0;
  v139 = 0;
  v31 = sub_1CD070(v27, *(_QWORD *)(v30 + 24));
  v32 = *(_DWORD *)(v30 + 4);
  if ( (v32 & 0x20) != 0 )
    v31 += *(int *)(*(_QWORD *)(v27 + 1504) + 80LL);
  if ( (v32 & 0x40) != 0 )
    v31 += *(int *)(a1[8] + 116LL);
  v138 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
  v138.m128i_i64[0] = *(int *)(v87 + 12);
  sub_F55C0(&v108, v5, 0);
  v99 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v105 = 0;
  v107 = 16;
  v100 = 0;
  v104 = 0;
  v106 = 0;
  if ( !si128.m128i_i8[0] )
  {
LABEL_46:
    cleanup_argloc();
    clear_tinfo_t();
    v33 = v99;
    if ( v99 )
    {
      v34 = v100.m128i_i64[0];
      if ( v100.m128i_i64[0] )
      {
        v35 = 0;
        do
        {
          v36 = (_QWORD *)(v33 + 80 * v35);
          clear_tinfo_t();
          if ( v36[5] )
          {
            v36[6] = 0;
            qfree();
          }
          if ( v36[2] )
          {
            v36[3] = 0;
            qfree();
          }
          ++v35;
          cleanup_argloc();
          v33 = v99;
        }
        while ( v34 != v35 );
      }
      v100.m128i_i64[0] = 0;
      qfree();
    }
    clear_tinfo_t();
    if ( v132 )
    {
      *(_QWORD *)&v133 = 0;
      qfree();
    }
    qfree();
    qfree();
    if ( v125 )
    {
      *(_QWORD *)&v126 = 0;
      qfree();
    }
    if ( v123 )
    {
      *(_QWORD *)&v124 = 0;
      qfree();
    }
    if ( v118 )
    {
      *(_QWORD *)&v119 = 0;
      qfree();
    }
    if ( v116 )
    {
      *(_QWORD *)&v117 = 0;
      qfree();
    }
    qfree();
    v37 = *(_QWORD *)&v111[16];
    if ( *(_QWORD *)&v111[16] )
    {
      v38 = v112;
      if ( (_QWORD)v112 )
      {
        v39 = 0;
        do
        {
          v40 = (_QWORD *)(v37 + 48 * v39);
          if ( v40[3] )
          {
            v40[4] = 0;
            qfree();
          }
          if ( *v40 )
          {
            v40[1] = 0;
            qfree();
          }
          ++v39;
          v37 = *(_QWORD *)&v111[16];
        }
        while ( v38 != v39 );
      }
      *(_QWORD *)&v112 = 0;
      qfree();
    }
    if ( v110 )
    {
      *(_QWORD *)v111 = 0;
      qfree();
    }
    goto LABEL_10;
  }
  if ( !(unsigned __int8)get_tinfo_details() || v100.m128i_i32[0] < 0 )
  {
LABEL_153:
    if ( v105 )
    {
      *(_QWORD *)&v106 = 0;
      qfree();
    }
    goto LABEL_46;
  }
  if ( sub_CF280(v108.m128i_i64[1], v87, &v99, SDWORD1(v139)) )
    goto LABEL_83;
  copy_tinfo_t();
  sub_F55C0(&v108, v5, 1);
  if ( si128.m128i_i8[0] )
  {
    if ( (unsigned int)lexcompare_tinfo()
      && (unsigned __int8)get_tinfo_details()
      && v100.m128i_i32[0] >= 0
      && sub_CF280(v108.m128i_i64[1], v87, &v99, SDWORD1(v139)) )
    {
      goto LABEL_82;
    }
    clear_tinfo_t();
    goto LABEL_153;
  }
  if ( *((_QWORD *)&v137 + 1) != -1 && (*(_BYTE *)(v5 + 6) & 0x10) == 0 )
  {
    if ( !under_debugger )
      sub_37EA20(52781);
    goto LABEL_165;
  }
LABEL_82:
  clear_tinfo_t();
LABEL_83:
  copy_tinfo_t();
  v41 = (__m128i *)&v90;
  if ( !tinfo_details )
    v41 = (__m128i *)&v99;
  v42 = sub_EFAC0((__int64)&v108, (__int64)a1, a2, v41, 0);
  if ( (unsigned __int8)sub_EFAC0((__int64)&v108, a3, a4, (__m128i *)&v99, v42) == 1 && !(tinfo_details | v42) )
    sub_EFAC0((__int64)&v108, (__int64)a1, a2, (__m128i *)&v99, 1u);
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v43 = v99;
  if ( v99 )
  {
    v44 = v100.m128i_i64[0];
    v45 = 0;
    if ( v100.m128i_i64[0] )
    {
      do
      {
        v46 = (_QWORD *)(v43 + 80 * v45);
        clear_tinfo_t();
        if ( v46[5] )
        {
          v46[6] = 0;
          qfree();
        }
        if ( v46[2] )
        {
          v46[3] = 0;
          qfree();
        }
        ++v45;
        cleanup_argloc();
        v43 = v99;
      }
      while ( v44 != v45 );
    }
    v100.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( v132 )
  {
    *(_QWORD *)&v133 = 0;
    qfree();
  }
  qfree();
  qfree();
  if ( v125 )
  {
    *(_QWORD *)&v126 = 0;
    qfree();
  }
  if ( v123 )
  {
    *(_QWORD *)&v124 = 0;
    qfree();
  }
  if ( v118 )
  {
    *(_QWORD *)&v119 = 0;
    qfree();
  }
  if ( v116 )
  {
    *(_QWORD *)&v117 = 0;
    qfree();
  }
  qfree();
  v47 = *(_QWORD *)&v111[16];
  if ( *(_QWORD *)&v111[16] )
  {
    v48 = v112;
    v49 = 0;
    if ( (_QWORD)v112 )
    {
      do
      {
        v50 = (_QWORD *)(v47 + 48 * v49);
        if ( v50[3] )
        {
          v50[4] = 0;
          qfree();
        }
        if ( *v50 )
        {
          v50[1] = 0;
          qfree();
        }
        ++v49;
        v47 = *(_QWORD *)&v111[16];
      }
      while ( v48 != v49 );
    }
    *(_QWORD *)&v112 = 0;
    qfree();
  }
  if ( v110 )
  {
    *(_QWORD *)v111 = 0;
    qfree();
  }
  if ( v96 )
  {
    *(_QWORD *)&v97 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v51 = v90;
  if ( v90 )
  {
    v52 = v91;
    v53 = 0;
    if ( (_QWORD)v91 )
    {
      do
      {
        v54 = (_QWORD *)(v51 + 80 * v53);
        clear_tinfo_t();
        if ( v54[5] )
        {
          v54[6] = 0;
          qfree();
        }
        if ( v54[2] )
        {
          v54[3] = 0;
          qfree();
        }
        ++v53;
        cleanup_argloc();
        v51 = v90;
      }
      while ( v52 != v53 );
    }
    goto LABEL_20;
  }
  return v143 - __readfsqword(0x28u);
}
