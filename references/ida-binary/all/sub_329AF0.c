__int64 __fastcall sub_329AF0(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 (__fastcall *a4)(__int64 **, _QWORD *, __m256i *, __int64),
        __int64 **a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 v14; // rbx
  __int64 **v15; // rbp
  __int64 **v16; // r14
  __int64 **v17; // r12
  __int64 **v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  unsigned int v25; // r14d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  const char *v33; // rdx
  __int64 v34; // rax
  const char *v35; // rbp
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // eax
  unsigned int v44; // eax
  __int64 **v45; // rdi
  unsigned int v46; // ebp
  __int64 v47; // rdx
  unsigned __int64 suspop; // rbx
  __int64 v49; // rcx
  unsigned int v50; // eax
  __int64 **v51; // rdi
  unsigned int v52; // r12d
  unsigned __int8 v53; // bp
  __int64 v54; // rdx
  unsigned __int64 imm; // rbx
  int v56; // ebp
  __int64 v57; // rcx
  char v59; // al
  int v60; // r12d
  int v61; // r14d
  __int64 **v62; // rdi
  __int64 not_tail; // rbx
  __int64 v64; // rdx
  __int64 v65; // r14
  __int64 v66; // r12
  __int64 *v67; // rbp
  __int64 v68; // rdi
  __int64 v69; // rdi
  __int64 v70; // rdi
  const char *v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __m128 v76; // xmm4
  __m128 v77; // xmm5
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __m128 v82; // xmm4
  __m128 v83; // xmm5
  unsigned __int64 v84; // rbx
  __int64 *v85; // rdi
  __int64 v86; // r12
  __int64 v87; // rbp
  __int64 *v88; // rbx
  __int64 v89; // rdi
  __int64 v90; // rdi
  __int64 v91; // rdi
  __int64 **v92; // rdi
  unsigned int v93; // ebp
  __int64 v94; // rdx
  unsigned __int64 notype; // rbx
  __int64 v96; // rcx
  __int64 **v97; // rdi
  unsigned int v98; // ebp
  __int64 v99; // rdx
  unsigned __int64 error; // rbx
  __int64 v101; // rcx
  __int64 entry_qty; // rax
  __int64 v103; // rdx
  __int64 v104; // r15
  unsigned __int64 v105; // r14
  __int64 entry_ordinal; // rbx
  __int64 entry; // rax
  __int16 flags; // ax
  unsigned int v109; // ebx
  __int64 problem; // rbp
  __int64 v111; // rdx
  __int64 v112; // rcx
  unsigned int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rbp
  __int64 *v117; // rdi
  const __m128i *v118; // rax
  __int64 v119; // rdi
  int v120; // eax
  bool v121; // r15
  bool v122; // al
  char v123; // [rsp+0h] [rbp-148h]
  __int64 *v124; // [rsp+0h] [rbp-148h]
  unsigned int v125; // [rsp+0h] [rbp-148h]
  unsigned __int8 v128; // [rsp+18h] [rbp-130h]
  unsigned int v129; // [rsp+18h] [rbp-130h]
  char v130; // [rsp+20h] [rbp-128h]
  int v131; // [rsp+20h] [rbp-128h]
  __int64 v132; // [rsp+20h] [rbp-128h]
  unsigned __int64 v133; // [rsp+20h] [rbp-128h]
  __int64 v134; // [rsp+20h] [rbp-128h]
  unsigned int v135; // [rsp+28h] [rbp-120h]
  char v136; // [rsp+34h] [rbp-114h]
  char v137; // [rsp+38h] [rbp-110h]
  bool v138; // [rsp+4Bh] [rbp-FDh] BYREF
  int v139; // [rsp+4Ch] [rbp-FCh] BYREF
  __int64 v140; // [rsp+50h] [rbp-F8h] BYREF
  __int32 v141; // [rsp+58h] [rbp-F0h]
  __int64 v142; // [rsp+60h] [rbp-E8h] BYREF
  int v143; // [rsp+68h] [rbp-E0h]
  __int64 *v144; // [rsp+70h] [rbp-D8h] BYREF
  int v145; // [rsp+78h] [rbp-D0h]
  __int64 v146; // [rsp+80h] [rbp-C8h]
  __int64 *v147; // [rsp+90h] [rbp-B8h] BYREF
  int v148; // [rsp+98h] [rbp-B0h]
  __int64 v149; // [rsp+A0h] [rbp-A8h]
  __int64 *v150; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v151; // [rsp+B8h] [rbp-90h]
  __m256i v152; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v153; // [rsp+F0h] [rbp-58h]
  __int64 *v154; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v155; // [rsp+108h] [rbp-40h]

  v136 = a2;
  v155 = __readfsqword(0x28u);
  if ( !a1 )
    return (unsigned int)-1;
  v140 = 0;
  v14 = a3;
  v15 = (__int64 **)a1[115];
  v141 = 0;
  v16 = (__int64 **)a1[116];
  v142 = 0;
  v143 = 0;
  if ( (_BYTE)a2 )
  {
    a2 = (__int64)&v140;
    v130 = sub_1F07A0((__int64)a1, (__int64)&v140, (__int64)&v142, &v138);
    if ( v130 )
    {
      v18 = (__int64 **)v140;
      v17 = (__int64 **)v142;
      if ( !v138 || *(_DWORD *)(v140 + 8) != *(_DWORD *)(v142 + 8) )
      {
        a6 = 0;
        v150 = nullptr;
        memset(&v152, 0, 24);
        v27 = a1[91];
        v151 = 0;
        (**(void (__fastcall ***)(__int64, __int64 **, __int64))v140)(v140, &v150, v27);
        ((void (__fastcall *)(__int64 **, __m256i *, _QWORD))**v17)(v17, &v152, a1[91]);
        v33 = &s1;
        if ( v152.m256i_i64[1] )
          v33 = (const char *)v152.m256i_i64[0];
        a2 = (__int64)&s1;
        if ( (_QWORD)v151 )
          a2 = (__int64)v150;
        sub_169700(
          (int)"Searching in the selection range: %s .. %s.\n",
          a2,
          (__int64)v33,
          v28,
          v29,
          v30,
          (__m128)0LL,
          a7,
          a8,
          a9,
          v31,
          v32,
          a12,
          a13,
          v123);
        if ( v152.m256i_i64[0] )
        {
          v152.m256i_i64[1] = 0;
          *(double *)a6.m128_u64 = qfree(v152.m256i_i64[0], (const char *)a2);
        }
        if ( v150 )
        {
          *(_QWORD *)&v151 = 0;
          *(double *)a6.m128_u64 = qfree(v150, (const char *)a2, *(double *)a6.m128_u64);
        }
        v128 = 0;
        if ( (v14 & 0xFFFFFFFB) != 2 )
        {
          v128 = sub_331080(a1);
          if ( !v128 )
            return (unsigned int)-1;
        }
        v34 = ((__int64 (__fastcall *)(__int64 **, double))(*v18)[16])(v18, *(double *)a6.m128_u64);
        v20 = (__int64)v17;
        v145 = 0;
        v144 = &idaplace_t___vtable;
        v146 = v34;
        v124 = &idaplace_t___vtable;
        v21 = ((__int64 (__fastcall *)(__int64 **))(*v17)[16])(v17);
        goto LABEL_6;
      }
    }
  }
  if ( (v14 & 0xFFFFFFFB) != 2 )
  {
    if ( (unsigned __int8)sub_331080(a1) )
    {
      v128 = 1;
      goto LABEL_5;
    }
    return (unsigned int)-1;
  }
  v128 = 0;
LABEL_5:
  v17 = v16;
  v18 = v15;
  v19 = getinf(19);
  v20 = 20;
  v145 = 0;
  v124 = &idaplace_t___vtable;
  v144 = &idaplace_t___vtable;
  v146 = v19;
  v21 = getinf(20);
  v130 = 0;
LABEL_6:
  v148 = 0;
  v149 = v21;
  v147 = &idaplace_t___vtable;
  if ( v128 )
  {
    switch ( v14 )
    {
      case 0LL:
        entry_qty = get_entry_qty(*(double *)a6.m128_u64);
        v104 = 0;
        if ( !entry_qty )
          goto LABEL_11;
        v105 = entry_qty;
        while ( !(unsigned __int8)sub_541EF0(v20, a2, v103) )
        {
          entry_ordinal = get_entry_ordinal(v104);
          entry = get_entry(entry_ordinal);
          a2 = (__int64)&v152;
          v20 = (__int64)a1;
          v152.m256i_i32[2] = -1;
          v152.m256i_i64[0] = (__int64)&idaplace_t___vtable;
          v152.m256i_i64[2] = entry;
          if ( (int)sub_1F0900((__int64)a1, v152.m256i_i64, (__int64)&v144) < 0
            || (a2 = (__int64)&v152, v20 = (__int64)a1,
                                     (int)sub_1F0900((__int64)a1, v152.m256i_i64, (__int64)&v147) >= 0) )
          {
            v103 = v128;
            v50 = 0;
          }
          else
          {
            v20 = (__int64)a5;
            a2 = (__int64)a1;
            v50 = a4(a5, a1, &v152, (unsigned int)entry_ordinal);
            LOBYTE(v103) = v50 == 0;
          }
          if ( ++v104 >= v105 || !(_BYTE)v103 )
            goto LABEL_56;
        }
        goto LABEL_11;
      case 1LL:
        v60 = -1;
        v61 = BYTE2(xmmword_8BCDC0) | 0x11;
        v137 = BYTE2(xmmword_8BCDC0) | 0x11;
        v62 = &v147;
        not_tail = ((__int64 (__fastcall *)(__int64 **))v144[16])(&v144);
        v129 = 0;
        a6.m128_u64[0] = 0;
        v133 = ((__int64 (__fastcall *)(__int64 **))v147[16])(&v147);
        v151 = 0;
        v150 = nullptr;
        v135 = (v61 >> 2) & 1;
        while ( !(unsigned __int8)sub_541EF0(v62, a2, v64) )
        {
          if ( (unsigned int)nbits(not_tail) == v60 )
            goto LABEL_93;
          v65 = v151;
          a6 = 0;
          v66 = 0;
          memset(&v152, 0, 24);
          if ( (_QWORD)v151 )
          {
            do
            {
              v67 = &v150[10 * v66];
              v68 = v67[6];
              if ( v68 )
              {
                v67[7] = 0;
                *(double *)a6.m128_u64 = qfree(v68, (const char *)a2);
              }
              v69 = v67[3];
              if ( v69 )
              {
                v67[4] = 0;
                *(double *)a6.m128_u64 = qfree(v69, (const char *)a2);
              }
              v70 = *v67;
              if ( *v67 )
              {
                v67[1] = 0;
                *(double *)a6.m128_u64 = qfree(v70, (const char *)a2);
              }
              ++v66;
            }
            while ( v65 != v66 );
          }
          *(_QWORD *)&v151 = 0;
          v71 = &s1;
          if ( (_QWORD)xmmword_8D0AC8 )
            v71 = (const char *)qword_8D0AC0;
          if ( (unsigned __int8)parse_binpat_str(
                                  &v150,
                                  not_tail,
                                  v71,
                                  (unsigned __int16)xmmword_8BCDC0,
                                  DWORD2(xmmword_8BCDC0),
                                  &v152) )
            goto LABEL_91;
          a2 = (__int64)&s1;
          if ( v152.m256i_i64[1] )
            a2 = v152.m256i_i64[0];
          sub_169700((int)"%s\n", a2, v72, v73, v74, v75, a6, a7, a8, a9, v76, v77, a12, a13, (char)v124);
          if ( (_QWORD)v151 )
          {
LABEL_91:
            v60 = nbits(not_tail);
            sub_3292B0(v137, &v150, *(double *)a6.m128_u64, a7, a8, a9, v82, v83, a12, a13, v78, v79, v80, v81);
            if ( v152.m256i_i64[0] )
            {
              v152.m256i_i64[1] = 0;
              *(double *)a6.m128_u64 = qfree(v152.m256i_i64[0], (const char *)&v150);
            }
LABEL_93:
            a2 = v133;
            v84 = bin_search(not_tail, v133, &v150, v135, 0);
            if ( v84 < v133 )
            {
              v152.m256i_i64[2] = v84;
              a2 = (__int64)a1;
              v152.m256i_i32[2] = -1;
              v152.m256i_i64[0] = (__int64)v124;
              v62 = (__int64 **)v84;
              v25 = a4(a5, a1, &v152, v129);
              not_tail = next_not_tail(v84);
              if ( not_tail == -1 )
                goto LABEL_96;
              ++v129;
              if ( v25 )
                goto LABEL_96;
              continue;
            }
          }
          else if ( v152.m256i_i64[0] )
          {
            v152.m256i_i64[1] = 0;
            *(double *)a6.m128_u64 = qfree(v152.m256i_i64[0], (const char *)a2);
          }
          break;
        }
        v25 = 0;
LABEL_96:
        v85 = v150;
        if ( v150 )
        {
          v86 = v151;
          if ( (_QWORD)v151 )
          {
            v87 = 0;
            do
            {
              v88 = &v85[10 * v87];
              v89 = v88[6];
              if ( v89 )
              {
                v88[7] = 0;
                qfree(v89, (const char *)a2);
              }
              v90 = v88[3];
              if ( v90 )
              {
                v88[4] = 0;
                qfree(v90, (const char *)a2);
              }
              v91 = *v88;
              if ( *v88 )
              {
                v88[1] = 0;
                qfree(v91, (const char *)a2);
              }
              ++v87;
              v85 = v150;
            }
            while ( v86 != v87 );
          }
          *(_QWORD *)&v151 = 0;
          *(double *)a6.m128_u64 = qfree(v85, (const char *)a2);
        }
        goto LABEL_12;
      case 2LL:
        v17 = &v147;
        v18 = &v144;
        goto LABEL_34;
      case 3LL:
        v132 = *((_QWORD *)&xmmword_8BCDB0 + 1);
        do
        {
LABEL_63:
          if ( (unsigned __int8)sub_541EF0(v20, a2, v22) )
            break;
          if ( (unsigned __int8)xrefblk_t_first_to(&v150, v132, 1) )
          {
            while ( 1 )
            {
              v152.m256i_i32[2] = -1;
              v152.m256i_i64[0] = (__int64)&idaplace_t___vtable;
              v152.m256i_i64[2] = (__int64)v150;
              if ( (int)sub_1F0900((__int64)a1, v152.m256i_i64, (__int64)&v144) < 0
                || (int)sub_1F0900((__int64)a1, v152.m256i_i64, (__int64)&v147) >= 0 )
              {
                v25 = 0;
                v59 = xrefblk_t_next_to(&v150);
              }
              else
              {
                v25 = a4(a5, a1, &v152, BYTE9(v151));
                v59 = xrefblk_t_next_to(&v150);
                if ( v25 )
                {
LABEL_71:
                  ++v132;
                  a2 = 4;
                  v20 = v132;
                  if ( (get_flags_ex(v132, 4) & 0x600) != 0x200 || v25 )
                    goto LABEL_12;
                  goto LABEL_63;
                }
              }
              if ( !v59 )
                goto LABEL_71;
            }
          }
          ++v132;
          a2 = 4;
          v20 = v132;
          flags = get_flags_ex(v132, 4);
        }
        while ( (flags & 0x600) == 0x200 );
        goto LABEL_11;
      case 4LL:
        v51 = &v144;
        v52 = 0;
        v53 = BYTE2(xmmword_8BCDC0);
        imm = ((__int64 (__fastcall *)(__int64 **))v144[16])(&v144);
        v56 = v53 | 1;
        while ( !(unsigned __int8)sub_541EF0(v51, a2, v54) )
        {
          a2 = v56 | 0x100u;
          imm = find_imm(imm, a2, *((_QWORD *)&xmmword_8BCDB0 + 1), 0);
          if ( imm >= ((__int64 (__fastcall *)(__int64 **))v147[16])(&v147) )
            break;
          v57 = v52;
          a2 = (__int64)a1;
          v51 = a5;
          v56 |= 2u;
          v152.m256i_i32[2] = -1;
          ++v52;
          v152.m256i_i64[0] = (__int64)&idaplace_t___vtable;
          v152.m256i_i64[2] = imm;
          v50 = a4(a5, a1, &v152, v57);
          if ( v50 )
            goto LABEL_56;
        }
        goto LABEL_11;
      case 5LL:
        v45 = &v144;
        v46 = 0;
        suspop = ((__int64 (__fastcall *)(__int64 **))v144[16])(&v144);
        while ( !(unsigned __int8)sub_541EF0(v45, a2, v47) )
        {
          a2 = 1;
          suspop = find_suspop(suspop, 1, 0);
          if ( suspop >= ((__int64 (__fastcall *)(__int64 **))v147[16])(&v147) )
            break;
          v49 = v46;
          v45 = a5;
          v152.m256i_i32[2] = -1;
          v152.m256i_i64[0] = (__int64)&idaplace_t___vtable;
          a2 = (__int64)a1;
          ++v46;
          v152.m256i_i64[2] = suspop;
          v50 = a4(a5, a1, &v152, v49);
          if ( v50 )
            goto LABEL_56;
        }
        goto LABEL_11;
      case 6LL:
        v17 = &v147;
        v18 = &v144;
        goto LABEL_10;
      case 7LL:
        v109 = 1;
        while ( !(unsigned __int8)sub_541EF0(v20, a2, v22) )
        {
          a2 = 0;
          v20 = v109;
          problem = get_problem(v109, 0);
          if ( problem == -1 )
          {
            v121 = v128;
            v25 = 0;
          }
          else
          {
            do
            {
              v152.m256i_i32[2] = -1;
              v152.m256i_i64[0] = (__int64)&idaplace_t___vtable;
              v152.m256i_i64[2] = problem;
              if ( (int)sub_1F0900((__int64)a1, v152.m256i_i64, (__int64)&v144) < 0
                || (int)sub_1F0900((__int64)a1, v152.m256i_i64, (__int64)&v147) >= 0 )
              {
                v121 = v128;
                v25 = 0;
              }
              else
              {
                v25 = a4(a5, a1, &v152, v109);
                v121 = v25 == 0;
              }
              a2 = problem + 1;
              v20 = v109;
              problem = get_problem(v109, problem + 1);
            }
            while ( problem != -1 && v121 );
          }
          v122 = (_BYTE)v109++ != 16;
          if ( !v121 || !v122 )
            goto LABEL_12;
        }
        goto LABEL_11;
      case 8LL:
        v97 = &v144;
        v98 = 0;
        error = j__idaplace_t__toea(&v144);
        while ( !(unsigned __int8)sub_541EF0(v97, a2, v99) )
        {
          a2 = 1;
          error = find_error(error, 1, 0);
          if ( error >= j__idaplace_t__toea(&v147) )
            break;
          v101 = v98;
          v97 = a5;
          v152.m256i_i32[2] = -1;
          v152.m256i_i64[0] = (__int64)&idaplace_t___vtable;
          a2 = (__int64)a1;
          ++v98;
          v152.m256i_i64[2] = error;
          v50 = a4(a5, a1, &v152, v101);
          if ( v50 )
            goto LABEL_56;
        }
        goto LABEL_11;
      case 9LL:
        v92 = &v144;
        v93 = 0;
        notype = ((__int64 (__fastcall *)(__int64 **))v144[16])(&v144);
        break;
      default:
        goto LABEL_11;
    }
    do
    {
      if ( (unsigned __int8)sub_541EF0(v92, a2, v94)
        || (a2 = 1, notype = find_notype(notype, 1, 0), notype >= ((__int64 (__fastcall *)(__int64 **))v147[16])(&v147)) )
      {
LABEL_11:
        v25 = 0;
        goto LABEL_12;
      }
      v96 = v93;
      v92 = a5;
      v152.m256i_i32[2] = -1;
      v152.m256i_i64[0] = (__int64)&idaplace_t___vtable;
      a2 = (__int64)a1;
      ++v93;
      v152.m256i_i64[2] = notype;
      v50 = a4(a5, a1, &v152, v96);
    }
    while ( !v50 );
LABEL_56:
    v25 = v50;
    goto LABEL_12;
  }
  switch ( v14 )
  {
    case 0LL:
    case 1LL:
    case 3LL:
    case 4LL:
    case 5LL:
    case 7LL:
    case 8LL:
    case 9LL:
      return (unsigned int)-1;
    case 2LL:
LABEL_34:
      v152.m256i_i32[0] = 0;
      if ( v130 )
      {
        v18 = (__int64 **)v140;
        v17 = (__int64 **)v142;
        v152.m256i_i32[0] = v141;
      }
      v35 = &s1;
      v36 = ((__int64 (__fastcall *)(__int64 **))(*v18)[2])(v18);
      v37 = a1[91];
      v38 = v36;
      v125 = BYTE2(xmmword_8BCDC0) | 1;
      if ( (_QWORD)xmmword_8D0AA8 )
        v35 = (const char *)qword_8D0AA0;
      v131 = 0;
      while ( 2 )
      {
        a2 = v38;
        if ( (int)sub_1F0900((__int64)a1, (__int64 *)v38, (__int64)v17) >= 0 )
          goto LABEL_47;
        if ( (unsigned __int8)sub_541EF0(a1, v38, v39)
          || (a2 = v38, v43 = search(v37, v38, v17, &v152, v35, v125), v25 = v43, v43 == 2) )
        {
          sub_169700((int)"Search aborted\n", a2, v39, v40, v41, v42, a6, a7, a8, a9, v23, v24, a12, a13, v125);
          v25 = 2;
          break;
        }
        if ( v43 > 2 )
        {
          if ( v43 == 3 )
          {
            a2 = (__int64)v35;
            sub_169700(
              (int)"Bad regular expression: \"%s\"\n",
              (__int64)v35,
              v39,
              v40,
              v41,
              v42,
              a6,
              a7,
              a8,
              a9,
              v23,
              v24,
              a12,
              a13,
              v125);
          }
        }
        else
        {
          if ( !v43 )
          {
            if ( v131 )
            {
              if ( v131 > 0 )
              {
LABEL_48:
                v25 = 0;
LABEL_49:
                sub_169700((int)"Search completed\n", a2, v39, v40, v41, v42, a6, a7, a8, a9, v23, v24, a12, a13, v125);
                break;
              }
            }
            else
            {
              a2 = (__int64)v35;
              sub_169700(
                (int)"Pattern \"%s\" was not found\n",
                (__int64)v35,
                v39,
                v40,
                v41,
                v42,
                a6,
                a7,
                a8,
                a9,
                v23,
                v24,
                a12,
                a13,
                v125);
            }
            goto LABEL_162;
          }
          if ( v43 != 1 )
            break;
          a2 = (__int64)a1;
          v44 = a4(a5, a1, (__m256i *)v38, *(unsigned int *)(v38 + 8));
          v25 = v44;
          if ( !v44 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 64LL))(v38, v37) )
            {
              ++v131;
              v152.m256i_i32[0] = 0;
              continue;
            }
LABEL_47:
            a2 = (unsigned int)v131;
            if ( v131 > 0 )
              goto LABEL_48;
LABEL_162:
            v25 = 0;
            break;
          }
          if ( v44 == 1 )
            goto LABEL_49;
        }
        break;
      }
      if ( v38 )
        *(double *)a6.m128_u64 = qfree(v38, (const char *)a2);
LABEL_12:
      if ( v136 && qword_8CD7E8 )
        sub_1FDA50(
          qword_8CD7E8 + 216LL,
          (const char *)a2,
          *(double *)a6.m128_u64,
          a7,
          a8,
          a9,
          *(double *)v23.m128_u64,
          *(double *)v24.m128_u64,
          a12,
          a13);
      return v25;
    case 6LL:
LABEL_10:
      if ( !qword_8CC7C0 )
        goto LABEL_11;
      if ( !(unsigned __int8)sub_331080(qword_8CC7C0) )
        goto LABEL_11;
      v113 = sub_1F96C0((__int64 *)qword_8CC7C0, a2, v111, v112);
      v134 = v113;
      if ( !v113 )
        goto LABEL_11;
      v116 = 0;
      v25 = 0;
      break;
    default:
      goto LABEL_11;
  }
  while ( 1 )
  {
    v139 = v116;
    v118 = (const __m128i *)sub_1EA680(qword_8CC7C0 + 384, a2, v114, v115, *(double *)a6.m128_u64);
    a7 = 0;
    v152.m256i_i64[3] = -1;
    v153 = 0;
    v154 = nullptr;
    memset(&v152, 0, 24);
    if ( v118 != (const __m128i *)&v152 )
    {
      *(__m128i *)v152.m256i_i8 = _mm_loadu_si128(v118);
      a6 = (__m128)_mm_loadu_si128(v118 + 1);
      *(__m128 *)&v152.m256i_u64[2] = a6;
      LODWORD(v153) = v118[2].m128i_i32[0];
      v119 = v118[2].m128i_i64[1];
      if ( v119 )
        v154 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v119 + 16LL))(v119);
    }
    a2 = (__int64)&v152;
    if ( (unsigned __int8)sub_1F9960((_QWORD *)qword_8CC7C0, (__m128i *)&v152, nullptr, (__int64)&v139) )
    {
      a2 = (__int64)v154;
      if ( (int)sub_1F0900((__int64)a1, v154, (__int64)v18) >= 0 )
      {
        v120 = sub_1F0900((__int64)a1, (__int64 *)a2, (__int64)v17);
        v117 = v154;
        if ( v120 >= 0 )
          goto LABEL_142;
        *((_QWORD *)&v151 + 1) = (*(__int64 (__fastcall **)(__int64 *))(*v154 + 128))(v154);
        a2 = (__int64)a1;
        LODWORD(v151) = -1;
        v150 = &idaplace_t___vtable;
        v25 = a4(a5, a1, (__m256i *)&v150, (unsigned int)v116);
      }
    }
    v117 = v154;
LABEL_142:
    if ( v117 )
      *(double *)a6.m128_u64 = qfree(v117, (const char *)a2);
    if ( v134 == ++v116 )
      goto LABEL_12;
  }
}
