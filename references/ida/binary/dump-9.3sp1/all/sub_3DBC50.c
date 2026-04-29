__int64 __fastcall sub_3DBC50(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3,
        _BYTE *a4,
        _DWORD *a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __int64 a10,
        _DWORD *a11)
{
  __int64 v12; // r15
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  _DWORD *v23; // rbx
  int v24; // r14d
  int v25; // r8d
  int v26; // r11d
  double v27; // rax
  double v28; // xmm1_8
  _QWORD *v29; // rax
  unsigned int v30; // eax
  __m128i v31; // xmm2
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rsi
  unsigned int v35; // eax
  unsigned int v36; // ecx
  int v37; // esi
  int v38; // ebp
  __int64 v39; // rbp
  unsigned __int64 v40; // rdx
  __int64 v41; // rsi
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rbx
  _BYTE *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 func; // r14
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // r14
  _BYTE *v62; // rax
  __int64 v63; // rdi
  int v64; // ebx
  int v65; // eax
  __int64 v66; // rsi
  __int64 v67; // rbp
  unsigned __int64 v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // r14
  __int64 v71; // rbx
  const char *i; // rdx
  __int64 v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // rsi
  __int64 v76; // rbx
  _BYTE *v77; // rax
  _DWORD *v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  int v83; // edx
  int v84; // ebp
  __int64 v85; // r8
  unsigned __int64 v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rcx
  int v90; // ebp
  unsigned __int64 v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rbp
  __int64 v96; // rbx
  __int64 *v97; // rax
  __int64 v98; // rdi
  const char *v99; // rdx
  unsigned int **v100; // rcx
  int v101; // r8d
  __int64 v102; // rdx
  __int64 v103; // rcx
  int v104; // r8d
  __int64 v105; // rcx
  const char *v106; // rax
  __int64 *v107; // rsi
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rax
  __int64 *v112; // rax
  void *v113; // r14
  __int64 v114; // rax
  size_t v115; // r11
  __int64 v116; // rbx
  __int64 v117; // r14
  __int64 *v118; // rdx
  __int64 v119; // rdi
  __int64 v120; // rsi
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // [rsp+8h] [rbp-170h]
  __int64 v128; // [rsp+10h] [rbp-168h]
  _DWORD *v129; // [rsp+18h] [rbp-160h]
  const char *v130; // [rsp+20h] [rbp-158h]
  __int64 v131; // [rsp+20h] [rbp-158h]
  int n; // [rsp+28h] [rbp-150h]
  size_t nb; // [rsp+28h] [rbp-150h]
  size_t na; // [rsp+28h] [rbp-150h]
  unsigned __int64 v135; // [rsp+30h] [rbp-148h]
  const void **v136; // [rsp+30h] [rbp-148h]
  __int64 v137; // [rsp+30h] [rbp-148h]
  unsigned __int64 v138; // [rsp+38h] [rbp-140h]
  int v139; // [rsp+40h] [rbp-138h]
  int v140; // [rsp+48h] [rbp-130h]
  int v141; // [rsp+54h] [rbp-124h]
  __int64 v142; // [rsp+58h] [rbp-120h]
  __m128i v143; // [rsp+60h] [rbp-118h] BYREF
  __int64 v144; // [rsp+70h] [rbp-108h]
  __int64 v145; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v146; // [rsp+88h] [rbp-F0h]
  __int64 v147; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v148; // [rsp+A8h] [rbp-D0h]
  __int64 v149; // [rsp+C0h] [rbp-B8h] BYREF
  __int128 v150; // [rsp+C8h] [rbp-B0h]
  _BYTE v151[32]; // [rsp+D8h] [rbp-A0h] BYREF
  _QWORD v152[2]; // [rsp+F8h] [rbp-80h] BYREF
  _QWORD v153[2]; // [rsp+108h] [rbp-70h] BYREF
  _QWORD v154[2]; // [rsp+118h] [rbp-60h] BYREF
  int v155; // [rsp+128h] [rbp-50h]
  unsigned __int64 v156; // [rsp+138h] [rbp-40h]

  v156 = __readfsqword(0x28u);
  *a3 = 0;
  *a4 = 1;
  *a5 = -1;
  v12 = *(_QWORD *)(a1 + 64);
  if ( !v12 || (unsigned int)(*(_DWORD *)(v12 + 60) - 1) > 1 )
  {
    v18 = a2[1];
    v19 = *a2;
    if ( a2[2] < (unsigned __int64)(v18 + 1) )
    {
      v46 = qvector_reserve((__int64)a2, v19, v18 + 1, 24);
      v18 = a2[1];
      *a2 = v46;
      v19 = v46;
    }
    sub_81980(v19 + 24 * v18, "Empty model");
    v16 = a2[1] + 1;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(v12 + 72) != a11[4] )
  {
    v20 = a2[1];
    v21 = *a2;
    if ( a2[2] < (unsigned __int64)(v20 + 1) )
    {
      v53 = qvector_reserve((__int64)a2, v21, v20 + 1, 24);
      v20 = a2[1];
      *a2 = v53;
      v21 = v53;
    }
    sub_81980(v21 + 24 * v20, "Inconsistent place for model");
    v16 = a2[1] + 1;
    goto LABEL_9;
  }
  v13 = a11[5];
  if ( v13 < 0 || v13 >= *(_DWORD *)(*(_QWORD *)(v12 + 64) + 64LL) )
  {
    v14 = a2[1];
    v15 = *a2;
    if ( a2[2] < (unsigned __int64)(v14 + 1) )
    {
      v45 = qvector_reserve((__int64)a2, v15, v14 + 1, 24);
      v14 = a2[1];
      *a2 = v45;
      v15 = v45;
    }
    sub_81980(v15 + 24 * v14, "Invalid block index");
    v16 = a2[1] + 1;
LABEL_9:
    a2[1] = v16;
    return 1;
  }
  v23 = a3;
  v128 = sub_3D2B20(*(_QWORD *)(a1 + 64), v13, a6);
  v24 = a11[6];
  v127 = sub_3D2B60(v12, a11[5], v24);
  v27 = *(double *)(v12 + 64);
  v144 = v12 + 160;
  v28 = v27;
  v143 = _mm_unpacklo_epi64(
           _mm_loadl_epi64((const __m128i *)(*(_QWORD *)&v27 + 1496LL)),
           (__m128i)*(unsigned __int64 *)&v27);
  if ( !(v26 | v25) )
  {
    if ( (**(_DWORD **)&v27 & 0x400000) != 0 )
      goto LABEL_63;
    v145 = 0;
    v146 = 0;
    get_ash();
    sub_6B870(&v145);
    sub_3D7560(a2, (__int64)&v145, v54, v55);
    func = get_func();
    if ( func )
    {
      v149 = 0;
      v150 = 0;
      if ( get_func_cmt() > 0 )
        sub_3DBA30(a2, &v149);
      if ( v149 )
      {
        *(_QWORD *)&v150 = 0;
        qfree(v149);
      }
    }
    v147 = 0;
    v148 = 0;
    if ( !(unsigned __int8)print_type() )
    {
      *(_QWORD *)&v148 = 0;
      if ( get_ea_name() < 0 || !tag_strlen() )
      {
        *(_QWORD *)&v148 = 0;
        get_ea_name();
      }
    }
    sub_3D7560(a2, (__int64)&v147, v57, v58);
    if ( func )
    {
      v150 = 0;
      v149 = 0;
      if ( get_func_cmt() > 0 )
        sub_3DBA30(a2, &v149);
      if ( v149 )
      {
        *(_QWORD *)&v150 = 0;
        qfree(v149);
      }
    }
    v59 = a2[1];
    v60 = *a2;
    if ( a2[2] < (unsigned __int64)(v59 + 1) )
    {
      v121 = qvector_reserve((__int64)a2, v60, v59 + 1, 24);
      *a2 = v121;
      v59 = a2[1];
      v60 = v121;
    }
    v61 = v60 + 24 * v59;
    *(_QWORD *)v61 = 0;
    *(_OWORD *)(v61 + 8) = 0;
    v62 = (_BYTE *)qvector_reserve(v61, 0, 1, 1);
    *(_QWORD *)v61 = v62;
    *(_QWORD *)(v61 + 8) = 1;
    *v62 = 0;
    v63 = v147;
    ++a2[1];
    if ( v63 )
    {
      *(_QWORD *)&v148 = 0;
      qfree(v63);
    }
    if ( v145 )
    {
      *(_QWORD *)&v146 = 0;
      qfree(v145);
    }
    v25 = a11[6];
    v24 = v25;
  }
  if ( !v25 )
  {
    if ( (**(_DWORD **)(v12 + 64) & 0x400000) == 0 )
    {
      v147 = 0;
      v148 = 0;
      sub_6B870(&v147);
      sub_FAAD0(&v147);
      v99 = "Predecessors";
      v100 = (unsigned int **)(v128 + 344);
      if ( !*(_DWORD *)(v128 + 72) )
      {
        v100 = (unsigned int **)(v128 + 368);
        v99 = "Successors";
      }
      v101 = 0;
      if ( *(_DWORD *)(v12 + 80) - 1 >= 0 )
        v101 = *(_DWORD *)(v12 + 80) - 1;
      sub_3D9810(&v147, (__int64)&v143, v99, v100, v101);
      sub_3D7560(a2, (__int64)&v147, v102, v103);
      if ( (**(_DWORD **)(v12 + 64) & 0x400000) == 0 )
      {
        v149 = 0;
        v107 = &v149;
        v150 = 0;
        sub_1B6B20(v128, &v149, 0.0, v28, a8, a9);
        v110 = v149;
        v131 = v149 + 24 * v150;
        if ( v149 != v131 )
        {
          do
          {
            v115 = *(_QWORD *)(v110 + 8);
            v113 = nullptr;
            if ( v115 )
            {
              v136 = (const void **)v110;
              nb = *(_QWORD *)(v110 + 8);
              v113 = (void *)qalloc_or_throw(nb, (__int64)v107, v108, v109);
              memcpy(v113, *v136, nb);
              v110 = (__int64)v136;
              v115 = nb;
            }
            v111 = a2[1];
            v107 = (__int64 *)*a2;
            v108 = v111 + 1;
            if ( a2[2] < (unsigned __int64)(v111 + 1) )
            {
              v137 = v110;
              na = v115;
              v114 = qvector_reserve((__int64)a2, (__int64)v107, v108, 24);
              *a2 = v114;
              v107 = (__int64 *)v114;
              v110 = v137;
              v111 = a2[1];
              v115 = na;
            }
            v110 += 24;
            v112 = &v107[3 * v111];
            *v112 = (__int64)v113;
            *(__m128i *)(v112 + 1) = _mm_unpacklo_epi64((__m128i)v115, (__m128i)v115);
            ++a2[1];
          }
          while ( v131 != v110 );
          v110 = v149;
        }
        if ( v110 )
        {
          if ( (_QWORD)v150 )
          {
            v129 = v23;
            v116 = 0;
            v117 = v150;
            do
            {
              v118 = (__int64 *)(v110 + 24 * v116);
              v119 = *v118;
              if ( *v118 )
              {
                v118[1] = 0;
                qfree(v119);
                v110 = v149;
              }
              ++v116;
            }
            while ( v117 != v116 );
            v23 = v129;
          }
          *(_QWORD *)&v150 = 0;
          qfree(v110);
        }
      }
      if ( v147 )
      {
        *(_QWORD *)&v148 = 0;
        qfree(v147);
      }
      v24 = a11[6];
      goto LABEL_19;
    }
    v26 = a11[5];
LABEL_63:
    v24 = v25;
    goto LABEL_20;
  }
LABEL_19:
  v26 = a11[5];
LABEL_20:
  v29 = (_QWORD *)sub_3D2E20((_QWORD *)v12, v26, v24, 1);
  if ( v29 && v29[1] > 1u )
    sub_3DBA30(a2, v29);
  if ( !v127 )
  {
    result = a2[1];
    if ( !a11[6] )
    {
      if ( !result )
      {
        v120 = *a2;
        if ( !a2[2] )
        {
          v125 = qvector_reserve((__int64)a2, v120, 1, 24);
          *a2 = v125;
          v120 = v125;
          result = a2[1];
        }
        sub_81980(v120 + 24 * result, "; empty block");
        ++a2[1];
      }
      if ( *(_QWORD *)(v128 + 48) || (**(_DWORD **)(v12 + 64) & 0x400000) != 0 )
        return a2[1];
      if ( !*(_QWORD *)(v128 + 376) )
      {
        v149 = 0;
        v150 = 0;
        get_ash();
        sub_6B870(&v149);
        sub_3D7560(a2, (__int64)&v149, v47, v48);
        if ( v149 )
        {
          *(_QWORD *)&v150 = 0;
          qfree(v149);
        }
      }
      v49 = a2[1];
      v50 = *a2;
      if ( a2[2] < (unsigned __int64)(v49 + 1) )
      {
        v126 = qvector_reserve((__int64)a2, v50, v49 + 1, 24);
        *a2 = v126;
        v50 = v126;
        v49 = a2[1];
      }
      v51 = v50 + 24 * v49;
      *(_QWORD *)v51 = 0;
      *(_OWORD *)(v51 + 8) = 0;
      v52 = (_BYTE *)qvector_reserve(v51, 0, 1, 1);
      *(_QWORD *)v51 = v52;
      *(_QWORD *)(v51 + 8) = 1;
      *v52 = 0;
      result = a2[1] + 1;
      a2[1] = result;
    }
    return result;
  }
  v149 = -1;
  v152[0] = 0xFFFFFFFF00000000LL;
  *(_QWORD *)&v150 = 0;
  DWORD2(v150) = -1;
  v152[1] = 0;
  v153[0] = 0xFFFFFFFF00000000LL;
  v153[1] = 0;
  v154[0] = 0xFFFFFFFF00000000LL;
  v154[1] = 0;
  sub_330970((__int64)v151, -1);
  v155 = 0;
  v30 = sub_137710(*(_QWORD *)(v12 + 64), v127, *(unsigned int *)(v128 + 72));
  v31 = _mm_cvtsi32_si128(*(_DWORD *)(v128 + 72));
  v32 = *(_QWORD *)(v127 + 24);
  LODWORD(v150) = *(_DWORD *)v127;
  v149 = v32;
  *(_QWORD *)((char *)&v150 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), v31).m128i_u64[0];
  v130 = "DELETED";
  if ( !sub_137D90(*(_QWORD *)(v12 + 64), (__int64)&v149, 9u) )
  {
    v105 = sub_3CEF80(*(_QWORD *)(v12 + 64), (__int64)&v149, (_DWORD *)v127);
    v106 = "ADDED BY USER";
    if ( !v105 )
      v106 = nullptr;
    v130 = v106;
  }
  sub_11CDA0((__int64)v154);
  sub_11CDA0((__int64)v153);
  sub_11CDA0((__int64)v152);
  v33 = a11[6];
  v145 = 0;
  v146 = 0;
  n = v33;
  if ( *(_BYTE *)(v12 + 84) )
  {
    sub_6B870(&v145);
    if ( **(int **)(v12 + 64) < 0 && *(_QWORD *)(v127 + 24) != -1 )
      sub_FAAD0(&v145);
    *a4 = 6;
    v34 = *(int *)(v12 + 76);
    if ( v34 > 0 )
      goto LABEL_27;
  }
  else
  {
    v34 = *(int *)(v12 + 76);
    if ( v34 > 0 )
LABEL_27:
      sub_3CFE40(&v145, v34);
  }
  v139 = tag_strlen();
  v35 = **(_DWORD **)(v12 + 64);
  v36 = (v35 >> 20) & 4;
  if ( (v35 & 0x40000000) != 0 )
    v36 = (**(_DWORD **)(v12 + 64) >> 20) & 4 | 2;
  if ( (v35 & 0x20000000) != 0 )
    v36 |= 1u;
  sub_1B43D0((int *)v127, (__int64)&v145, (__int64)&v143, v36);
  v140 = tag_strlen();
  v141 = *(_DWORD *)(v12 + 76);
  if ( v130 )
  {
    v37 = 0;
    v38 = *(_DWORD *)(v12 + 80) - 1;
    if ( v38 >= 0 )
      v37 = *(_DWORD *)(v12 + 80) - 1;
    if ( v37 > (int)tag_strlen() && v38 > 0 )
      sub_3CFE40(&v145, v37);
    v39 = v146;
    v40 = 2;
    if ( (_QWORD)v146 )
    {
      v40 = v146 + 1;
      v39 = v146 - 1;
    }
    v41 = v145;
    if ( *((_QWORD *)&v146 + 1) < v40 )
    {
      v135 = v40;
      v145 = qvector_reserve((__int64)&v145, v145, v40, 1);
      v40 = v135;
      v41 = v145;
    }
    *(_QWORD *)&v146 = v40;
    *(_BYTE *)(v41 + v39) = 32;
    *(_BYTE *)(v145 + v39 + 1) = 0;
    get_ash();
    sub_FAAD0(&v145);
  }
  else if ( v127 == *(_QWORD *)(v128 + 56) && *(_QWORD *)(v128 + 376) )
  {
    v104 = 0;
    if ( *(_DWORD *)(v12 + 80) - 1 >= 0 )
      v104 = *(_DWORD *)(v12 + 80) - 1;
    sub_3D9810(&v145, (__int64)&v143, "Successors", (unsigned int **)(v128 + 368), v104);
  }
  v42 = (_QWORD *)sub_3D2E20((_QWORD *)v12, *(_DWORD *)(v128 + 72), n, 0);
  if ( v42 && v42[1] > 1u )
  {
    v147 = 0;
    v148 = 0;
    sub_3D14F0(v42, &v147, "\n", 0);
    if ( (_QWORD)v148 )
    {
      v83 = 0;
      if ( *(_DWORD *)(v12 + 80) - 1 >= 0 )
        v83 = *(_DWORD *)(v12 + 80) - 1;
      v84 = v83;
      if ( *(_DWORD *)(v12 + 80) - 1 > 0 )
        sub_3CFE40(&v145, v83);
      v85 = v146;
      v86 = 2;
      if ( (_QWORD)v146 )
      {
        v86 = v146 + 1;
        v85 = v146 - 1;
      }
      v87 = v145;
      if ( *((_QWORD *)&v146 + 1) < v86 )
      {
        v142 = v85;
        v138 = v86;
        v145 = qvector_reserve((__int64)&v145, v145, v86, 1);
        v85 = v142;
        v87 = v145;
        v86 = v138;
      }
      *(_QWORD *)&v146 = v86;
      *(_BYTE *)(v87 + v85) = 32;
      *(_BYTE *)(v145 + v85 + 1) = 0;
      get_ash();
      sub_FAAD0(&v145);
      *v23 = a2[1];
      sub_3D7560(a2, (__int64)&v145, v88, v89);
      if ( (unsigned __int64)v148 > 1 )
      {
        v90 = v84 + 1;
        v91 = 1;
        do
        {
          v149 = 0;
          v150 = 0;
          if ( *(_BYTE *)(v12 + 84) )
          {
            sub_6B870(&v149);
            if ( **(int **)(v12 + 64) < 0 && *(_QWORD *)(v127 + 24) != -1 )
              sub_FAAD0(&v149);
          }
          if ( v90 > 0 )
            sub_3CFE40(&v149, v90);
          get_ash();
          sub_FAAD0(&v149);
          sub_3D7560(a2, (__int64)&v149, v92, v93);
          if ( v149 )
          {
            *(_QWORD *)&v150 = 0;
            qfree(v149);
          }
          ++v91;
        }
        while ( v91 < (unsigned __int64)v148 );
      }
    }
    else
    {
      *v23 = a2[1];
      sub_3D7560(a2, (__int64)&v145, v81, v82);
    }
    v94 = v147;
    if ( v147 )
    {
      v95 = v148;
      if ( (_QWORD)v148 )
      {
        v96 = 0;
        do
        {
          v97 = (__int64 *)(v94 + 24 * v96);
          v98 = *v97;
          if ( *v97 )
          {
            v97[1] = 0;
            qfree(v98);
            v94 = v147;
          }
          ++v96;
        }
        while ( v95 != v96 );
      }
      *(_QWORD *)&v148 = 0;
      qfree(v94);
    }
  }
  else
  {
    *v23 = a2[1];
    sub_3D7560(a2, (__int64)&v145, v43, v44);
  }
  if ( v145 )
  {
    *(_QWORD *)&v146 = 0;
    qfree(v145);
  }
  if ( *(_QWORD *)(v128 + 56) != v127 || (**(_DWORD **)(v12 + 64) & 0x400000) != 0 )
    return a2[1];
  if ( *(_QWORD *)(v128 + 376) )
  {
    if ( !v130 )
      goto LABEL_103;
    v149 = 0;
    v150 = 0;
    v64 = v140 + v141 - v139;
    if ( *(_BYTE *)(v12 + 84) )
    {
      sub_6B870(&v149);
      v65 = *(_DWORD *)(v12 + 80) - 1;
      if ( v65 < 0 )
        v65 = 0;
      if ( v65 < v64 )
        v65 = v140 + v141 - v139;
      if ( !v65 )
      {
LABEL_96:
        v66 = v149;
        if ( (_QWORD)v150 )
        {
          v67 = v150 - 1;
          v68 = v150 + 1;
        }
        else
        {
          v67 = 0;
          v68 = 2;
        }
        if ( *((_QWORD *)&v150 + 1) >= v68 )
        {
LABEL_99:
          *(_QWORD *)&v150 = v68;
          *(_BYTE *)(v66 + v67) = 32;
          *(_BYTE *)(v149 + v67 + 1) = 0;
          get_ash();
          sub_FAAD0(&v149);
          v70 = *(_QWORD *)(v128 + 368);
          v71 = v70 + 4LL * *(_QWORD *)(v128 + 376);
          for ( i = (const char *)&unk_418793; v71 != v70; i = ", " )
          {
            sub_FAAD0(&v149);
            v70 += 4;
          }
          sub_3D7560(a2, (__int64)&v149, (__int64)i, v69);
          v73 = v149;
          if ( v149 )
            goto LABEL_102;
          goto LABEL_103;
        }
LABEL_183:
        v149 = qvector_reserve((__int64)&v149, v66, v68, 1);
        v66 = v149;
        goto LABEL_99;
      }
    }
    else
    {
      v65 = *(_DWORD *)(v12 + 80) - 1;
      if ( v65 < 0 )
        v65 = 0;
      if ( v65 < v64 )
        v65 = v140 + v141 - v139;
      if ( !v65 )
      {
        v66 = 0;
        v68 = 2;
        v67 = 0;
        goto LABEL_183;
      }
    }
    sub_3CFE40(&v149, v65);
    goto LABEL_96;
  }
  v149 = 0;
  v150 = 0;
  get_ash();
  sub_6B870(&v149);
  sub_3D7560(a2, (__int64)&v149, v122, v123);
  v73 = v149;
  if ( v149 )
  {
LABEL_102:
    *(_QWORD *)&v150 = 0;
    qfree(v73);
  }
LABEL_103:
  v74 = a2[1];
  v75 = *a2;
  if ( a2[2] < (unsigned __int64)(v74 + 1) )
  {
    v124 = qvector_reserve((__int64)a2, v75, v74 + 1, 24);
    v74 = a2[1];
    *a2 = v124;
    v75 = v124;
  }
  v76 = v75 + 24 * v74;
  *(_QWORD *)v76 = 0;
  *(_OWORD *)(v76 + 8) = 0;
  v77 = (_BYTE *)qvector_reserve(v76, 0, 1, 1);
  *(_QWORD *)v76 = v77;
  *(_QWORD *)(v76 + 8) = 1;
  *v77 = 0;
  result = a2[1] + 1;
  a2[1] = result;
  if ( *(_QWORD *)(v128 + 56) == v127 )
  {
    v78 = *(_DWORD **)(v12 + 64);
    if ( a11[5] == v78[16] - 1 && (*v78 & 0x400000) == 0 )
    {
      v148 = 0;
      v147 = 0;
      v149 = 0;
      v150 = 0;
      get_ea_name();
      get_ash();
      sub_6B870(&v147);
      if ( v149 )
      {
        *(_QWORD *)&v150 = 0;
        qfree(v149);
      }
      sub_3D7560(a2, (__int64)&v147, v79, v80);
      if ( v147 )
      {
        *(_QWORD *)&v148 = 0;
        qfree(v147);
      }
    }
    return a2[1];
  }
  return result;
}
