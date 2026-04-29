__int64 __fastcall sub_3D7AD0(
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
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  _DWORD *v23; // rbx
  __int64 v24; // rsi
  int v25; // r14d
  __int64 v26; // r8
  unsigned int v27; // r11d
  double v28; // rax
  __int64 v29; // rcx
  double v30; // xmm1_8
  char *v31; // rsi
  __int64 v32; // rdi
  char *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // eax
  __m128i v38; // xmm2
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rsi
  const char *v42; // rdi
  unsigned int v43; // eax
  unsigned int v44; // ecx
  const char *v45; // rdi
  int v46; // esi
  __int64 *v47; // rdi
  int v48; // ebp
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rbp
  unsigned __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 *v55; // rax
  char **v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rbx
  _BYTE *v67; // rax
  __int64 v68; // rax
  const char *v69; // rcx
  __int64 ash; // rax
  __int64 func; // r14
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  const char *v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rsi
  __int64 v81; // r14
  _BYTE *v82; // rax
  __int64 v83; // rdi
  int v84; // ebx
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rsi
  __int64 v90; // rbp
  unsigned __int64 v91; // rbx
  __int64 v92; // rax
  unsigned int *v93; // r14
  unsigned int *v94; // rbx
  const char *i; // rdx
  __int64 v96; // rdi
  __int64 v97; // rdx
  __int64 v98; // rsi
  __int64 v99; // rbx
  _BYTE *v100; // rax
  _DWORD *v101; // rdx
  __int64 v102; // rsi
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  const char *v106; // rbx
  __int64 v107; // rax
  __int64 *v108; // rdi
  int v109; // edx
  int v110; // ebp
  __int64 v111; // r8
  unsigned __int64 v112; // rdx
  __int64 v113; // rsi
  const char *v114; // rcx
  __int64 v115; // rax
  __int64 *v116; // rdi
  int v117; // ebp
  unsigned __int64 v118; // rbx
  const char *v119; // r14
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rbp
  __int64 v123; // rbx
  __int64 *v124; // rax
  __int64 v125; // rdi
  const char *v126; // rdx
  const char *v127; // rdx
  unsigned int **v128; // rcx
  unsigned int v129; // r8d
  unsigned int v130; // r8d
  __int64 v131; // rcx
  const char *v132; // rax
  __int64 v133; // r8
  __int64 v134; // rax
  __int64 v135; // rsi
  __int64 v136; // rax
  void *v137; // r14
  __int64 v138; // rax
  size_t v139; // r11
  __int64 v140; // rbx
  __int64 v141; // r14
  __int64 *v142; // rdx
  __int64 v143; // rdi
  __int64 v144; // rsi
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // [rsp+8h] [rbp-170h]
  __int64 v151; // [rsp+10h] [rbp-168h]
  const char *v152; // [rsp+18h] [rbp-160h]
  _DWORD *v153; // [rsp+18h] [rbp-160h]
  const char *v154; // [rsp+20h] [rbp-158h]
  __int64 v155; // [rsp+20h] [rbp-158h]
  int n; // [rsp+28h] [rbp-150h]
  size_t nb; // [rsp+28h] [rbp-150h]
  size_t na; // [rsp+28h] [rbp-150h]
  unsigned __int64 v159; // [rsp+30h] [rbp-148h]
  const void **v160; // [rsp+30h] [rbp-148h]
  __int64 v161; // [rsp+30h] [rbp-148h]
  const char *v162; // [rsp+38h] [rbp-140h]
  unsigned __int64 v163; // [rsp+38h] [rbp-140h]
  int v164; // [rsp+40h] [rbp-138h]
  int v165; // [rsp+48h] [rbp-130h]
  int v166; // [rsp+54h] [rbp-124h]
  __int64 v167; // [rsp+58h] [rbp-120h]
  __m128i v168; // [rsp+60h] [rbp-118h] BYREF
  __int64 v169; // [rsp+70h] [rbp-108h]
  char *v170; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v171; // [rsp+88h] [rbp-F0h]
  __int64 v172; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v173; // [rsp+A8h] [rbp-D0h]
  __int64 v174; // [rsp+C0h] [rbp-B8h] BYREF
  __int128 v175; // [rsp+C8h] [rbp-B0h]
  char v176[32]; // [rsp+D8h] [rbp-A0h] BYREF
  _QWORD v177[2]; // [rsp+F8h] [rbp-80h] BYREF
  _QWORD v178[2]; // [rsp+108h] [rbp-70h] BYREF
  _QWORD v179[2]; // [rsp+118h] [rbp-60h] BYREF
  int v180; // [rsp+128h] [rbp-50h]
  unsigned __int64 v181; // [rsp+138h] [rbp-40h]

  v181 = __readfsqword(0x28u);
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
      v62 = qvector_reserve(a2, v19, v18 + 1, 24);
      v18 = a2[1];
      *a2 = v62;
      v19 = v62;
    }
    sub_7DF40(v19 + 24 * v18, "Empty model");
    v16 = a2[1] + 1;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(v12 + 72) != a11[4] )
  {
    v20 = a2[1];
    v21 = *a2;
    if ( a2[2] < (unsigned __int64)(v20 + 1) )
    {
      v68 = qvector_reserve(a2, v21, v20 + 1, 24);
      v20 = a2[1];
      *a2 = v68;
      v21 = v68;
    }
    sub_7DF40(v21 + 24 * v20, "Inconsistent place for model");
    v16 = a2[1] + 1;
    goto LABEL_9;
  }
  v13 = (unsigned int)a11[5];
  if ( (int)v13 < 0 || (int)v13 >= *(_DWORD *)(*(_QWORD *)(v12 + 64) + 64LL) )
  {
    v14 = a2[1];
    v15 = *a2;
    if ( a2[2] < (unsigned __int64)(v14 + 1) )
    {
      v61 = qvector_reserve(a2, v15, v14 + 1, 24);
      v14 = a2[1];
      *a2 = v61;
      v15 = v61;
    }
    sub_7DF40(v15 + 24 * v14, "Invalid block index");
    v16 = a2[1] + 1;
LABEL_9:
    a2[1] = v16;
    return 1;
  }
  v23 = a3;
  v151 = sub_3CE9A0(*(_QWORD *)(a1 + 64), v13, a6);
  v24 = (unsigned int)a11[5];
  v25 = a11[6];
  v150 = sub_3CE9E0(v12, v24, v25);
  v28 = *(double *)(v12 + 64);
  v29 = v27 | (unsigned int)v26;
  v169 = v12 + 160;
  v30 = v28;
  v168 = _mm_unpacklo_epi64(
           _mm_loadl_epi64((const __m128i *)(*(_QWORD *)&v28 + 1496LL)),
           (__m128i)*(unsigned __int64 *)&v28);
  if ( !(v27 | (unsigned int)v26) )
  {
    if ( (**(_DWORD **)&v28 & 0x400000) != 0 )
      goto LABEL_68;
    v170 = nullptr;
    v171 = 0;
    switch ( *(_DWORD *)(v12 + 56) )
    {
      case 0:
        v69 = "MMAT_ZERO";
        break;
      case 1:
        v69 = "MMAT_GENERATED";
        break;
      case 2:
        v69 = "MMAT_PREOPTIMIZED";
        break;
      case 3:
        v69 = "MMAT_LOCOPT";
        break;
      case 4:
        v69 = "MMAT_CALLS";
        break;
      case 5:
        v69 = "MMAT_GLBOPT1";
        break;
      case 6:
        v69 = "MMAT_GLBOPT2";
        break;
      case 7:
        v69 = "MMAT_GLBOPT3";
        break;
      case 8:
        v69 = "MMAT_LVARS";
        break;
      case 9:
        v69 = "MMAT_FINAL";
        break;
      default:
        v69 = "???";
        break;
    }
    v152 = v69;
    ash = get_ash(v12, v24, v12 + 160, v69, v26);
    sub_67E30((__int64 *)&v170, (__int64)&unk_409736, *(_QWORD *)(ash + 48), v152);
    sub_3D33E0(a2, (__int64)&v170);
    func = get_func(*(_QWORD *)(v12 + 8));
    if ( func )
    {
      v174 = 0;
      v175 = 0;
      if ( get_func_cmt(&v174, func, 0) > 0 )
        sub_3D78B0(a2, &v174, v72, v73, v74);
      if ( v174 )
      {
        *(_QWORD *)&v175 = 0;
        qfree(v174);
      }
    }
    v172 = 0;
    v173 = 0;
    if ( !(unsigned __int8)print_type(&v172, *(_QWORD *)(v12 + 8), 264192) )
    {
      *(_QWORD *)&v173 = 0;
      if ( get_ea_name(&v172, *(_QWORD *)(v12 + 8), 22, 0) < 0 )
        goto LABEL_82;
      v75 = s1;
      if ( (_QWORD)v173 )
        v75 = (const char *)v172;
      if ( !tag_strlen(v75) )
      {
LABEL_82:
        *(_QWORD *)&v173 = 0;
        get_ea_name(&v172, *(_QWORD *)(v12 + 8), 86, 0);
      }
    }
    sub_3D33E0(a2, (__int64)&v172);
    if ( func )
    {
      v175 = 0;
      v174 = 0;
      if ( get_func_cmt(&v174, func, 1) > 0 )
        sub_3D78B0(a2, &v174, v76, v77, v78);
      if ( v174 )
      {
        *(_QWORD *)&v175 = 0;
        qfree(v174);
      }
    }
    v79 = a2[1];
    v80 = *a2;
    if ( a2[2] < (unsigned __int64)(v79 + 1) )
    {
      v145 = qvector_reserve(a2, v80, v79 + 1, 24);
      *a2 = v145;
      v79 = a2[1];
      v80 = v145;
    }
    v81 = v80 + 24 * v79;
    *(_QWORD *)v81 = 0;
    *(_OWORD *)(v81 + 8) = 0;
    v82 = (_BYTE *)qvector_reserve(v81, 0, 1, 1);
    *(_QWORD *)v81 = v82;
    *(_QWORD *)(v81 + 8) = 1;
    *v82 = 0;
    v83 = v172;
    ++a2[1];
    if ( v83 )
    {
      *(_QWORD *)&v173 = 0;
      qfree(v83);
    }
    if ( v170 )
    {
      *(_QWORD *)&v171 = 0;
      qfree(v170);
    }
    LODWORD(v26) = a11[6];
    v25 = v26;
  }
  if ( !(_DWORD)v26 )
  {
    if ( (**(_DWORD **)(v12 + 64) & 0x400000) == 0 )
    {
      v172 = 0;
      v173 = 0;
      sub_67E30(&v172, (__int64)&unk_40974A, *(unsigned int *)(v151 + 72), v29);
      switch ( *(_DWORD *)(v151 + 76) )
      {
        case 0:
          v126 = "BLT_NONE";
          break;
        case 1:
          v126 = "BLT_STOP";
          break;
        case 2:
          v126 = "BLT_0WAY";
          break;
        case 3:
          v126 = "BLT_1WAY";
          break;
        case 4:
          v126 = "BLT_2WAY";
          break;
        case 5:
          v126 = "BLT_NWAY";
          break;
        case 6:
          v126 = "BLT_XTRN";
          break;
        default:
          v126 = "???";
          break;
      }
      sub_F7090(&v172, (__int64)".%s", v126);
      v127 = "Predecessors";
      v128 = (unsigned int **)(v151 + 344);
      if ( !*(_DWORD *)(v151 + 72) )
      {
        v128 = (unsigned int **)(v151 + 368);
        v127 = "Successors";
      }
      v129 = 0;
      if ( *(_DWORD *)(v12 + 80) - 1 >= 0 )
        v129 = *(_DWORD *)(v12 + 80) - 1;
      sub_3D5690(&v172, (__int64)&v168, v127, v128, v129);
      sub_3D33E0(a2, (__int64)&v172);
      if ( (**(_DWORD **)(v12 + 64) & 0x400000) == 0 )
      {
        v174 = 0;
        v175 = 0;
        sub_1B30E0(v151, &v174, 0.0, v30, a8, a9);
        v133 = v174;
        v155 = v174 + 24 * v175;
        if ( v174 != v155 )
        {
          do
          {
            v139 = *(_QWORD *)(v133 + 8);
            v137 = nullptr;
            if ( v139 )
            {
              v160 = (const void **)v133;
              nb = *(_QWORD *)(v133 + 8);
              v137 = (void *)qalloc_or_throw(nb);
              memcpy(v137, *v160, nb);
              v133 = (__int64)v160;
              v139 = nb;
            }
            v134 = a2[1];
            v135 = *a2;
            if ( a2[2] < (unsigned __int64)(v134 + 1) )
            {
              v161 = v133;
              na = v139;
              v138 = qvector_reserve(a2, v135, v134 + 1, 24);
              *a2 = v138;
              v135 = v138;
              v133 = v161;
              v134 = a2[1];
              v139 = na;
            }
            v133 += 24;
            v136 = v135 + 24 * v134;
            *(_QWORD *)v136 = v137;
            *(__m128i *)(v136 + 8) = _mm_unpacklo_epi64((__m128i)v139, (__m128i)v139);
            ++a2[1];
          }
          while ( v155 != v133 );
          v133 = v174;
        }
        if ( v133 )
        {
          if ( (_QWORD)v175 )
          {
            v153 = v23;
            v140 = 0;
            v141 = v175;
            do
            {
              v142 = (__int64 *)(v133 + 24 * v140);
              v143 = *v142;
              if ( *v142 )
              {
                v142[1] = 0;
                qfree(v143);
                v133 = v174;
              }
              ++v140;
            }
            while ( v141 != v140 );
            v23 = v153;
          }
          *(_QWORD *)&v175 = 0;
          qfree(v133);
        }
      }
      if ( v172 )
      {
        *(_QWORD *)&v173 = 0;
        qfree(v172);
      }
      v25 = a11[6];
      goto LABEL_19;
    }
    v27 = a11[5];
LABEL_68:
    v25 = v26;
    goto LABEL_20;
  }
LABEL_19:
  v27 = a11[5];
LABEL_20:
  v31 = (char *)v27;
  v32 = v12;
  v33 = (char *)sub_3CECA0((_QWORD *)v12, v27, v25, 1);
  if ( v33 && *((_QWORD *)v33 + 1) > 1u )
  {
    v31 = v33;
    v32 = (__int64)a2;
    sub_3D78B0(a2, v33, v34, v35, v36);
  }
  if ( !v150 )
  {
    result = a2[1];
    if ( !a11[6] )
    {
      if ( !result )
      {
        v144 = *a2;
        if ( !a2[2] )
        {
          v148 = qvector_reserve(a2, v144, 1, 24);
          *a2 = v148;
          v144 = v148;
          result = a2[1];
        }
        v32 = v144 + 24 * result;
        v31 = "; empty block";
        sub_7DF40(v32, "; empty block");
        ++a2[1];
      }
      if ( *(_QWORD *)(v151 + 48) || (**(_DWORD **)(v12 + 64) & 0x400000) != 0 )
        return a2[1];
      if ( !*(_QWORD *)(v151 + 376) )
      {
        v174 = 0;
        v175 = 0;
        v63 = get_ash(v32, v31, v34, v35, v36);
        sub_67E30(
          &v174,
          (__int64)&unk_409575,
          *(_QWORD *)(v63 + 48),
          "---------------------------------------------------------------------------");
        sub_3D33E0(a2, (__int64)&v174);
        if ( v174 )
        {
          *(_QWORD *)&v175 = 0;
          qfree(v174);
        }
      }
      v64 = a2[1];
      v65 = *a2;
      if ( a2[2] < (unsigned __int64)(v64 + 1) )
      {
        v149 = qvector_reserve(a2, v65, v64 + 1, 24);
        *a2 = v149;
        v65 = v149;
        v64 = a2[1];
      }
      v66 = v65 + 24 * v64;
      *(_QWORD *)v66 = 0;
      *(_OWORD *)(v66 + 8) = 0;
      v67 = (_BYTE *)qvector_reserve(v66, 0, 1, 1);
      *(_QWORD *)v66 = v67;
      *(_QWORD *)(v66 + 8) = 1;
      *v67 = 0;
      result = a2[1] + 1;
      a2[1] = result;
    }
    return result;
  }
  v174 = -1;
  v177[0] = 0xFFFFFFFF00000000LL;
  *(_QWORD *)&v175 = 0;
  DWORD2(v175) = -1;
  v177[1] = 0;
  v178[0] = 0xFFFFFFFF00000000LL;
  v178[1] = 0;
  v179[0] = 0xFFFFFFFF00000000LL;
  v179[1] = 0;
  sub_32C520((__int64)v176, -1);
  v180 = 0;
  v37 = sub_133CD0(*(_QWORD *)(v12 + 64), v150, *(unsigned int *)(v151 + 72));
  v38 = _mm_cvtsi32_si128(*(_DWORD *)(v151 + 72));
  v39 = *(_QWORD *)(v150 + 24);
  LODWORD(v175) = *(_DWORD *)v150;
  v174 = v39;
  *(_QWORD *)((char *)&v175 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v37), v38).m128i_u64[0];
  v154 = "DELETED";
  if ( !sub_134350(*(_QWORD *)(v12 + 64), (__int64)&v174, 9u) )
  {
    v131 = sub_3CAE00(*(_QWORD *)(v12 + 64), (__int64)&v174, (_DWORD *)v150);
    v132 = "ADDED BY USER";
    if ( !v131 )
      v132 = nullptr;
    v154 = v132;
  }
  sub_119360((__int64)v179);
  sub_119360((__int64)v178);
  sub_119360((__int64)v177);
  v40 = a11[6];
  v170 = nullptr;
  v171 = 0;
  n = v40;
  if ( *(_BYTE *)(v12 + 84) )
  {
    sub_67E30((__int64 *)&v170, (__int64)byte_409024, *(unsigned int *)(v151 + 72), (unsigned int)(v40 + 1));
    if ( **(int **)(v12 + 64) < 0 && *(_QWORD *)(v150 + 24) != -1 )
      sub_F7090((__int64 *)&v170, (__int64)&unk_409751);
    *a4 = 6;
    v41 = *(int *)(v12 + 76);
    if ( v41 <= 0 )
    {
LABEL_28:
      v42 = v170;
      if ( (_QWORD)v171 )
        goto LABEL_29;
      goto LABEL_65;
    }
LABEL_27:
    sub_3CBCC0((__int64)&v170, v41);
    goto LABEL_28;
  }
  v41 = *(int *)(v12 + 76);
  if ( v41 > 0 )
    goto LABEL_27;
LABEL_65:
  v42 = s1;
LABEL_29:
  v164 = tag_strlen(v42);
  v43 = **(_DWORD **)(v12 + 64);
  v44 = (v43 >> 20) & 4;
  if ( (v43 & 0x40000000) != 0 )
    v44 = (**(_DWORD **)(v12 + 64) >> 20) & 4 | 2;
  if ( (v43 & 0x20000000) != 0 )
    v44 |= 1u;
  sub_1B0990((int *)v150, (__int64 *)&v170, (__int64)&v168, v44, 0.0);
  v45 = s1;
  if ( (_QWORD)v171 )
    v45 = v170;
  v165 = tag_strlen(v45);
  v166 = *(_DWORD *)(v12 + 76);
  if ( v154 )
  {
    v46 = 0;
    v47 = (__int64 *)s1;
    v48 = *(_DWORD *)(v12 + 80) - 1;
    if ( v48 >= 0 )
      v46 = *(_DWORD *)(v12 + 80) - 1;
    if ( (_QWORD)v171 )
      v47 = (__int64 *)v170;
    if ( v46 > (int)tag_strlen(v47) && v48 > 0 )
    {
      v47 = (__int64 *)&v170;
      sub_3CBCC0((__int64)&v170, v46);
    }
    v51 = v171;
    v52 = 2;
    if ( (_QWORD)v171 )
    {
      v52 = v171 + 1;
      v51 = v171 - 1;
    }
    v53 = (__int64)v170;
    if ( *((_QWORD *)&v171 + 1) < v52 )
    {
      v47 = (__int64 *)&v170;
      v159 = v52;
      v170 = (char *)qvector_reserve(&v170, v170, v52, 1);
      v52 = v159;
      v53 = (__int64)v170;
    }
    *(_QWORD *)&v171 = v52;
    *(_BYTE *)(v53 + v51) = 32;
    v170[v51 + 1] = 0;
    v54 = get_ash(v47, v53, v52, v49, v50);
    sub_F7090((__int64 *)&v170, (__int64)&unk_409575, *(_QWORD *)(v54 + 48), v154);
  }
  else if ( v150 == *(_QWORD *)(v151 + 56) && *(_QWORD *)(v151 + 376) )
  {
    v130 = 0;
    if ( *(_DWORD *)(v12 + 80) - 1 >= 0 )
      v130 = *(_DWORD *)(v12 + 80) - 1;
    sub_3D5690((__int64 *)&v170, (__int64)&v168, "Successors", (unsigned int **)(v151 + 368), v130);
  }
  v55 = (__int64 *)sub_3CECA0((_QWORD *)v12, *(_DWORD *)(v151 + 72), n, 0);
  if ( v55 && (unsigned __int64)v55[1] > 1 )
  {
    v108 = v55;
    v172 = 0;
    v173 = 0;
    sub_3CD370(v55, &v172, "\n", 0);
    if ( (_QWORD)v173 )
    {
      v109 = 0;
      if ( *(_DWORD *)(v12 + 80) - 1 >= 0 )
        v109 = *(_DWORD *)(v12 + 80) - 1;
      v110 = v109;
      if ( *(_DWORD *)(v12 + 80) - 1 > 0 )
      {
        v108 = (__int64 *)&v170;
        sub_3CBCC0((__int64)&v170, v109);
      }
      v111 = v171;
      v112 = 2;
      if ( (_QWORD)v171 )
      {
        v112 = v171 + 1;
        v111 = v171 - 1;
      }
      v113 = (__int64)v170;
      if ( *((_QWORD *)&v171 + 1) < v112 )
      {
        v108 = (__int64 *)&v170;
        v167 = v111;
        v163 = v112;
        v170 = (char *)qvector_reserve(&v170, v170, v112, 1);
        v111 = v167;
        v113 = (__int64)v170;
        v112 = v163;
      }
      *(_QWORD *)&v171 = v112;
      v114 = s1;
      *(_BYTE *)(v113 + v111) = 32;
      v170[v111 + 1] = 0;
      if ( *(_QWORD *)(v172 + 8) )
        v114 = *(const char **)v172;
      v162 = v114;
      v115 = get_ash(v108, v113, v112, v114, v111);
      sub_F7090((__int64 *)&v170, (__int64)&unk_409575, *(_QWORD *)(v115 + 48), v162);
      v56 = &v170;
      v116 = a2;
      *v23 = a2[1];
      sub_3D33E0(a2, (__int64)&v170);
      if ( (unsigned __int64)v173 > 1 )
      {
        v117 = v110 + 1;
        v118 = 1;
        do
        {
          v174 = 0;
          v175 = 0;
          if ( *(_BYTE *)(v12 + 84) )
          {
            v56 = (char **)byte_409024;
            v116 = &v174;
            sub_67E30(&v174, (__int64)byte_409024, *(unsigned int *)(v151 + 72), (unsigned int)(n + 1));
            if ( **(int **)(v12 + 64) < 0 && *(_QWORD *)(v150 + 24) != -1 )
            {
              v56 = (char **)&unk_409751;
              v116 = &v174;
              sub_F7090(&v174, (__int64)&unk_409751);
            }
          }
          if ( v117 > 0 )
          {
            v56 = (char **)v117;
            v116 = &v174;
            sub_3CBCC0((__int64)&v174, v117);
          }
          v119 = s1;
          v120 = v172 + 24 * v118;
          if ( *(_QWORD *)(v120 + 8) )
            v119 = *(const char **)v120;
          v121 = get_ash(v116, v56, v172, v58, v59);
          sub_F7090(&v174, (__int64)&unk_409575, *(_QWORD *)(v121 + 48), v119);
          v56 = (char **)&v174;
          sub_3D33E0(a2, (__int64)&v174);
          v116 = (__int64 *)v174;
          if ( v174 )
          {
            *(_QWORD *)&v175 = 0;
            qfree(v174);
          }
          ++v118;
        }
        while ( v118 < (unsigned __int64)v173 );
      }
    }
    else
    {
      v56 = &v170;
      *v23 = a2[1];
      sub_3D33E0(a2, (__int64)&v170);
    }
    v57 = v172;
    if ( v172 )
    {
      v122 = v173;
      if ( (_QWORD)v173 )
      {
        v123 = 0;
        do
        {
          v124 = (__int64 *)(v57 + 24 * v123);
          v125 = *v124;
          if ( *v124 )
          {
            v124[1] = 0;
            qfree(v125);
            v57 = v172;
          }
          ++v123;
        }
        while ( v122 != v123 );
      }
      *(_QWORD *)&v173 = 0;
      qfree(v57);
    }
  }
  else
  {
    v56 = &v170;
    *v23 = a2[1];
    sub_3D33E0(a2, (__int64)&v170);
  }
  v60 = (__int64)v170;
  if ( v170 )
  {
    *(_QWORD *)&v171 = 0;
    qfree(v170);
  }
  if ( *(_QWORD *)(v151 + 56) != v150 || (**(_DWORD **)(v12 + 64) & 0x400000) != 0 )
    return a2[1];
  if ( *(_QWORD *)(v151 + 376) )
  {
    if ( !v154 )
      goto LABEL_121;
    v174 = 0;
    v175 = 0;
    v84 = v165 + v166 - v164;
    if ( *(_BYTE *)(v12 + 84) )
    {
      sub_67E30(&v174, (__int64)byte_409024, *(unsigned int *)(v151 + 72), (unsigned int)(a11[6] + 1));
      v86 = 0;
      v85 = *(_DWORD *)(v12 + 80) - 1;
      if ( v85 < 0 )
        v85 = 0;
      if ( v85 < v84 )
        v85 = v165 + v166 - v164;
      if ( !v85 )
      {
LABEL_114:
        v89 = v174;
        if ( (_QWORD)v175 )
        {
          v90 = v175 - 1;
          v91 = v175 + 1;
        }
        else
        {
          v90 = 0;
          v91 = 2;
        }
        if ( *((_QWORD *)&v175 + 1) >= v91 )
        {
LABEL_117:
          *(_QWORD *)&v175 = v91;
          *(_BYTE *)(v89 + v90) = 32;
          *(_BYTE *)(v174 + v90 + 1) = 0;
          v92 = get_ash(&v174, v89, v86, v87, v88);
          sub_F7090(&v174, (__int64)&unk_409768, *(_QWORD *)(v92 + 48));
          v93 = *(unsigned int **)(v151 + 368);
          v94 = &v93[*(_QWORD *)(v151 + 376)];
          for ( i = (const char *)&unk_405793; v94 != v93; i = ", " )
            sub_F7090(&v174, (__int64)&unk_40977C, i, *v93++);
          sub_3D33E0(a2, (__int64)&v174);
          v96 = v174;
          if ( v174 )
            goto LABEL_120;
          goto LABEL_121;
        }
LABEL_216:
        v174 = qvector_reserve(&v174, v89, v91, 1);
        v89 = v174;
        goto LABEL_117;
      }
    }
    else
    {
      v85 = *(_DWORD *)(v12 + 80) - 1;
      if ( v85 < 0 )
        v85 = 0;
      if ( v85 < v84 )
        v85 = v165 + v166 - v164;
      if ( !v85 )
      {
        v89 = 0;
        v91 = 2;
        v90 = 0;
        goto LABEL_216;
      }
    }
    sub_3CBCC0((__int64)&v174, v85);
    goto LABEL_114;
  }
  v174 = 0;
  v175 = 0;
  v146 = get_ash(v60, v56, v57, v58, v59);
  sub_67E30(
    &v174,
    (__int64)&unk_409575,
    *(_QWORD *)(v146 + 48),
    "---------------------------------------------------------------------------");
  sub_3D33E0(a2, (__int64)&v174);
  v96 = v174;
  if ( v174 )
  {
LABEL_120:
    *(_QWORD *)&v175 = 0;
    qfree(v96);
  }
LABEL_121:
  v97 = a2[1];
  v98 = *a2;
  if ( a2[2] < (unsigned __int64)(v97 + 1) )
  {
    v147 = qvector_reserve(a2, v98, v97 + 1, 24);
    v97 = a2[1];
    *a2 = v147;
    v98 = v147;
  }
  v99 = v98 + 24 * v97;
  *(_QWORD *)v99 = 0;
  *(_OWORD *)(v99 + 8) = 0;
  v100 = (_BYTE *)qvector_reserve(v99, 0, 1, 1);
  *(_QWORD *)v99 = v100;
  *(_QWORD *)(v99 + 8) = 1;
  *v100 = 0;
  result = a2[1] + 1;
  a2[1] = result;
  if ( *(_QWORD *)(v151 + 56) == v150 )
  {
    v101 = *(_DWORD **)(v12 + 64);
    if ( a11[5] == v101[16] - 1 && (*v101 & 0x400000) == 0 )
    {
      v102 = *(_QWORD *)(v12 + 8);
      v173 = 0;
      v172 = 0;
      v174 = 0;
      v175 = 0;
      get_ea_name(&v174, v102, 21, 0);
      v106 = s1;
      if ( (_QWORD)v175 )
        v106 = (const char *)v174;
      v107 = get_ash(&v174, v102, v103, v104, v105);
      sub_67E30(&v172, (__int64)&unk_409785, *(_QWORD *)(v107 + 48), v106);
      if ( v174 )
      {
        *(_QWORD *)&v175 = 0;
        qfree(v174);
      }
      sub_3D33E0(a2, (__int64)&v172);
      if ( v172 )
      {
        *(_QWORD *)&v173 = 0;
        qfree(v172);
      }
    }
    return a2[1];
  }
  return result;
}
