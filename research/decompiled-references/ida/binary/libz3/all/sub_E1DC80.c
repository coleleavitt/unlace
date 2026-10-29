__int64 __fastcall sub_E1DC80(__int64 a1, struct _Unwind_Exception *a2, _DWORD *a3, double a4, double a5)
{
  char **v5; // rax
  char *v6; // rbp
  char **v7; // rbx
  __int64 v8; // rdx
  char **v9; // rax
  char *v10; // rbp
  char **v11; // rbx
  __int64 v12; // rdx
  char **v13; // rax
  char *v14; // rbp
  char **v15; // rbx
  __int64 v16; // rdx
  char **v17; // rax
  char *v18; // rbp
  char **v19; // rbx
  __int64 v20; // rdx
  void *exception; // rax
  int v22; // r14d
  int v23; // ebp
  void *v24; // rbx
  char **v25; // rax
  char *v26; // rbp
  char **v27; // rbx
  __int64 v28; // rdx
  _DWORD *v30; // rdi
  const char *v31; // rax
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  const char *v36; // r14
  __int64 v37; // rbx
  __m128i *v38; // r14
  unsigned int v39; // ebp
  __m128i si128; // xmm0
  __m128i *v41; // r15
  int v42; // eax
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rax
  __int64 v47; // r13
  const __m128i *v48; // r14
  __int64 v49; // rbp
  void (__fastcall *v50)(__int64, const __m128i *, __int64); // rax
  _QWORD *v51; // rax
  __m128i *v52; // rbp
  __m128i v53; // xmm0
  void (__fastcall *v54)(__m128i *, __m128i *, __int64); // rax
  __m128i *v55; // rsi
  __m128i *v56; // rdi
  __int64 v58; // rax
  __int64 v59; // rdx
  bool v60; // cf
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rdi
  __int64 v63; // r8
  __m128i v64; // xmm0
  __int64 v65; // rax
  __int64 v66; // rdx
  const __m128i *v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rcx
  unsigned int v71; // eax
  __int64 (__fastcall *v72)(__int64); // rax
  __int64 exception_cleanup; // rbx
  int v74; // eax
  int v75; // ecx
  int v76; // r8d
  int v77; // r9d
  void *v78; // rbx
  __int64 v79; // r13
  __m128i v80; // xmm0
  __int64 v81; // rax
  __m128i v82; // xmm0
  __m128i v83; // xmm1
  __int64 v84; // rax
  __m128i v85; // xmm0
  __int64 *v86; // rbx
  unsigned __int64 v87; // rbp
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 v91; // rax
  const __m128i *v92; // rbx
  void (__fastcall *v93)(__int64, const __m128i *, __int64); // rax
  int v94; // eax
  int v95; // ecx
  int v96; // r8d
  int v97; // r9d
  void *v98; // rbp
  int v99; // edx
  int v100; // ecx
  int v101; // r8d
  int v102; // r9d
  void *v103; // rdi
  int v104; // edx
  int v105; // ecx
  int v106; // r8d
  int v107; // r9d
  int v108; // edx
  int v109; // ecx
  int v110; // r8d
  int v111; // r9d
  char *v112; // rdi
  int v113; // edx
  int v114; // ecx
  int v115; // r8d
  int v116; // r9d
  void *v117; // [rsp+0h] [rbp-198h]
  __m128i *v118; // [rsp+0h] [rbp-198h]
  struct _Unwind_Exception *v119; // [rsp+8h] [rbp-190h]
  struct _Unwind_Exception *v120; // [rsp+8h] [rbp-190h]
  struct _Unwind_Exception *v121; // [rsp+8h] [rbp-190h]
  __int64 v122; // [rsp+10h] [rbp-188h]
  __int64 v123; // [rsp+10h] [rbp-188h]
  __int64 v124; // [rsp+18h] [rbp-180h]
  __int64 v125; // [rsp+20h] [rbp-178h]
  __m128i *v126; // [rsp+28h] [rbp-170h]
  char v127[8]; // [rsp+30h] [rbp-168h] BYREF
  __int64 v128; // [rsp+38h] [rbp-160h] BYREF
  int v129; // [rsp+40h] [rbp-158h] BYREF
  __int64 v130; // [rsp+48h] [rbp-150h] BYREF
  int v131; // [rsp+50h] [rbp-148h] BYREF
  __int64 v132; // [rsp+58h] [rbp-140h]
  __m128i v133; // [rsp+60h] [rbp-138h] BYREF
  __m128i v134; // [rsp+70h] [rbp-128h] BYREF
  __m128i v135; // [rsp+80h] [rbp-118h]
  _BYTE v136[24]; // [rsp+90h] [rbp-108h] BYREF
  __m128i v137; // [rsp+A8h] [rbp-F0h]
  __int64 v138; // [rsp+B8h] [rbp-E0h]
  void *v139[2]; // [rsp+C0h] [rbp-D8h] BYREF
  char v140[16]; // [rsp+D0h] [rbp-C8h] BYREF
  int v141[2]; // [rsp+E0h] [rbp-B8h]
  int v142; // [rsp+E8h] [rbp-B0h]
  int v143[2]; // [rsp+F0h] [rbp-A8h]
  void *v144; // [rsp+F8h] [rbp-A0h]
  int v145; // [rsp+100h] [rbp-98h]
  int v146[2]; // [rsp+108h] [rbp-90h]
  void *ptr; // [rsp+110h] [rbp-88h]
  int v148[2]; // [rsp+118h] [rbp-80h]
  __int64 v149; // [rsp+120h] [rbp-78h]
  __int64 v150; // [rsp+128h] [rbp-70h]
  __int64 v151; // [rsp+130h] [rbp-68h]
  __int64 v152[12]; // [rsp+138h] [rbp-60h] BYREF

  v124 = a1;
  v119 = a2;
  if ( *a3 == 5 )
  {
    v139[0] = (void *)sub_17F7170(a3);
    v91 = sub_DEC500((__int64)&a2->exception_cleanup, (unsigned __int64 *)v139);
    v92 = (const __m128i *)v91;
    if ( !v91 )
    {
      exception = __cxa_allocate_exception(0x30u);
      v22 = a3[3];
      v23 = a3[2];
      v24 = exception;
      v139[0] = (void *)sub_17F7170(a3);
      sub_DF2170((__int64)v24, "invalid tactic, unknown tactic ", (const char **)v139, v23, v22);
      __cxa_throw(v24, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    v93 = *(void (__fastcall **)(__int64, const __m128i *, __int64))(v91 + 32);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_OWORD *)a1 = 0;
    if ( v93 )
    {
      v93(a1, v92 + 1, 2);
      *(__m128i *)(a1 + 16) = _mm_loadu_si128(v92 + 2);
    }
    return v124;
  }
  if ( *a3 )
  {
    v9 = (char **)__cxa_allocate_exception(0x30u);
    v10 = *((char **)a3 + 1);
    v11 = v9;
    sub_17FDF6((__int64 *)v139, "invalid tactic, unexpected input", v12);
    *v11 = (char *)off_1C63128;
    sub_2333C0(v11 + 1, v139);
    v11[5] = v10;
    *v11 = (char *)off_1C64218;
    sub_233E40((__int64)v139);
    __cxa_throw(v11, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( !(unsigned int)sub_17F7190(a3) )
  {
    v13 = (char **)__cxa_allocate_exception(0x30u);
    v14 = *((char **)a3 + 1);
    v15 = v13;
    sub_17FDF6((__int64 *)v139, "invalid tactic, arguments expected", v16);
    *v15 = (char *)off_1C63128;
    sub_2333C0(v15 + 1, v139);
    v15[5] = v14;
    *v15 = (char *)off_1C64218;
    sub_233E40((__int64)v139);
    __cxa_throw(v15, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v30 = (_DWORD *)sub_17F71A0(a3, 0);
  if ( *v30 != 5 )
  {
    v17 = (char **)__cxa_allocate_exception(0x30u);
    v18 = *((char **)a3 + 1);
    v19 = v17;
    sub_17FDF6((__int64 *)v139, "invalid tactic, symbol expected", v20);
    *v19 = (char *)off_1C63128;
    sub_2333C0(v19 + 1, v139);
    v19[5] = v18;
    *v19 = (char *)off_1C64218;
    sub_233E40((__int64)v139);
    __cxa_throw(v19, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v31 = (const char *)sub_17F7170(v30);
  *(_QWORD *)v127 = v31;
  v36 = v31;
  if ( !v31 )
    goto LABEL_89;
  if ( ((unsigned __int8)v31 & 7) != 1 )
  {
    if ( !strcmp(v31, "and-then") )
      goto LABEL_8;
    goto LABEL_51;
  }
  sub_180CE20(
    (int)v139,
    (int)v127,
    v32,
    v33,
    v34,
    v35,
    (int)v117,
    a2,
    v122,
    v124,
    v125,
    (int)v126,
    *(int *)v127,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133.m128i_i32[0],
    v133.m128i_i32[2],
    v134.m128i_i32[0],
    v134.m128i_i32[2],
    v135.m128i_i32[0],
    v135.m128i_i32[2],
    *(int *)v136,
    *(int *)&v136[8],
    *(int *)&v136[16],
    (void *)v137.m128i_i64[0],
    v137.m128i_i32[2],
    v138);
  v103 = v139[0];
  if ( v139[1] == &byte_8 && *(_QWORD *)v139[0] == 0x6E6568742D646E61LL )
  {
    if ( v139[0] == v140 )
      goto LABEL_8;
    goto LABEL_116;
  }
  if ( v139[0] != v140 )
    operator delete(v139[0], *(_QWORD *)v140 + 1LL);
  v36 = *(const char **)v127;
  if ( !*(_QWORD *)v127 )
    goto LABEL_89;
  if ( (v127[0] & 7) != 1 )
  {
LABEL_51:
    if ( strcmp(v36, "then") )
      goto LABEL_52;
    goto LABEL_8;
  }
  sub_180CE20(
    (int)v139,
    (int)v127,
    v99,
    v100,
    v101,
    v102,
    (int)v117,
    v119,
    v122,
    v124,
    v125,
    (int)v126,
    *(int *)v127,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133.m128i_i32[0],
    v133.m128i_i32[2],
    v134.m128i_i32[0],
    v134.m128i_i32[2],
    v135.m128i_i32[0],
    v135.m128i_i32[2],
    *(int *)v136,
    *(int *)&v136[8],
    *(int *)&v136[16],
    (void *)v137.m128i_i64[0],
    v137.m128i_i32[2],
    v138);
  v103 = v139[0];
  if ( v139[1] != byte_4 || *(_DWORD *)v139[0] != 1852139636 )
  {
    if ( v139[0] != v140 )
      operator delete(v139[0], *(_QWORD *)v140 + 1LL);
    v36 = *(const char **)v127;
    if ( !*(_QWORD *)v127 )
      goto LABEL_89;
    if ( (v127[0] & 7) == 1 )
    {
      sub_180CE20(
        (int)v139,
        (int)v127,
        v104,
        v105,
        v106,
        v107,
        (int)v117,
        v119,
        v122,
        v124,
        v125,
        (int)v126,
        *(int *)v127,
        v128,
        v129,
        v130,
        v131,
        v132,
        v133.m128i_i32[0],
        v133.m128i_i32[2],
        v134.m128i_i32[0],
        v134.m128i_i32[2],
        v135.m128i_i32[0],
        v135.m128i_i32[2],
        *(int *)v136,
        *(int *)&v136[8],
        *(int *)&v136[16],
        (void *)v137.m128i_i64[0],
        v137.m128i_i32[2],
        v138);
      v112 = (char *)v139[0];
      if ( v139[1] != (char *)&dword_0 + 1 || *(_BYTE *)v139[0] != 33 )
      {
        if ( v139[0] != v140 )
          operator delete(v139[0], *(_QWORD *)v140 + 1LL);
        v36 = *(const char **)v127;
        if ( !*(_QWORD *)v127 )
          goto LABEL_89;
        if ( (v127[0] & 7) != 1 )
          goto LABEL_87;
        sub_180CE20(
          (int)v139,
          (int)v127,
          v108,
          v109,
          v110,
          v111,
          (int)v117,
          v119,
          v122,
          v124,
          v125,
          (int)v126,
          *(int *)v127,
          v128,
          v129,
          v130,
          v131,
          v132,
          v133.m128i_i32[0],
          v133.m128i_i32[2],
          v134.m128i_i32[0],
          v134.m128i_i32[2],
          v135.m128i_i32[0],
          v135.m128i_i32[2],
          *(int *)v136,
          *(int *)&v136[8],
          *(int *)&v136[16],
          (void *)v137.m128i_i64[0],
          v137.m128i_i32[2],
          v138);
        v112 = (char *)v139[0];
        if ( v139[1] != &byte_9[3]
          || *(_QWORD *)v139[0] != 0x61702D676E697375LL
          || *((_DWORD *)v139[0] + 2) != 1936548210 )
        {
          if ( v139[0] != v140 )
            operator delete(v139[0], *(_QWORD *)v140 + 1LL);
          v36 = *(const char **)v127;
          if ( !*(_QWORD *)v127 )
            goto LABEL_89;
          if ( (v127[0] & 7) != 1 )
            goto LABEL_88;
          sub_180CE20(
            (int)v139,
            (int)v127,
            v113,
            v114,
            v115,
            v116,
            (int)v117,
            v119,
            v122,
            v124,
            v125,
            (int)v126,
            *(int *)v127,
            v128,
            v129,
            v130,
            v131,
            v132,
            v133.m128i_i32[0],
            v133.m128i_i32[2],
            v134.m128i_i32[0],
            v134.m128i_i32[2],
            v135.m128i_i32[0],
            v135.m128i_i32[2],
            *(int *)v136,
            *(int *)&v136[8],
            *(int *)&v136[16],
            (void *)v137.m128i_i64[0],
            v137.m128i_i32[2],
            v138);
          v112 = (char *)v139[0];
          if ( v139[1] != byte_4 || *(_DWORD *)v139[0] != 1752459639 )
          {
            if ( v139[0] != v140 )
              operator delete(v139[0], *(_QWORD *)v140 + 1LL);
            goto LABEL_89;
          }
        }
      }
      if ( v112 != v140 )
        operator delete(v112, *(_QWORD *)v140 + 1LL);
LABEL_54:
      v71 = sub_17F7190(a3);
      if ( v71 <= 1 )
      {
        v25 = (char **)__cxa_allocate_exception(0x30u);
        v26 = *((char **)a3 + 1);
        v27 = v25;
        sub_17FDF6((__int64 *)v139, "invalid using-params combinator, at least one argument expected", v28);
        *v27 = (char *)off_1C63128;
        sub_2333C0(v27 + 1, v139);
        v27[5] = v26;
        *v27 = (char *)off_1C64218;
        sub_233E40((__int64)v139);
        __cxa_throw(v27, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      if ( v71 != 2 )
      {
        v72 = *(__int64 (__fastcall **)(__int64))(v119->exception_class + 32);
        if ( v72 == sub_E0F550 )
        {
          sub_DFBCB0(v119);
          exception_cleanup = (__int64)v119[9].exception_cleanup;
        }
        else
        {
          exception_cleanup = v72((__int64)v119);
        }
        LODWORD(v139[1]) = 0;
        v139[0] = qword_1C63778;
        BYTE4(v139[1]) = 0;
        *(_QWORD *)v140 = 0;
        *(_QWORD *)v141 = &off_1C62200;
        *(_DWORD *)&v140[8] = 0;
        *(_QWORD *)v143 = 0;
        v144 = nullptr;
        *(_QWORD *)v146 = 0;
        ptr = nullptr;
        *(_QWORD *)v148 = exception_cleanup;
        v149 = 0;
        v150 = 0;
        v151 = 0;
        sub_180C0A0(v152);
        v139[0] = &off_1C4C830;
        v74 = sub_17F71A0(a3, 1);
        sub_E1DC80(
          (int)&v131,
          (int)v119,
          v74,
          v75,
          v76,
          v77,
          v117,
          v119,
          (__int64)v152,
          v124,
          v125,
          (int)v126,
          v127[0],
          v128,
          v129,
          v130,
          v131,
          v132,
          v133.m128i_i32[0],
          v133.m128i_i8[8],
          v134.m128i_i32[0],
          v134.m128i_i64[1],
          v135.m128i_i32[0],
          v135.m128i_i32[2],
          *(__int64 *)v136,
          *(int *)&v136[8],
          *(__int64 *)&v136[16],
          v137.m128i_i32[0],
          v137.m128i_i32[2],
          v138,
          (int)v139[0],
          (int)v139[1],
          *(int *)v140,
          v140[8],
          v141[0],
          v142,
          v143[0],
          (int)v144,
          v145,
          v146[0],
          (char)ptr,
          v148[0],
          v149,
          v150);
        v128 = 0;
        sub_1857380(&v129);
        if ( !v133.m128i_i64[0] )
          std::__throw_bad_function_call();
        v78 = (void *)((__int64 (__fastcall *)(int *, __int64, __int64 *, void **))v133.m128i_i64[1])(
                        &v131,
                        exception_cleanup,
                        &v128,
                        v139);
        (*(void (__fastcall **)(void *, int *))(*(_QWORD *)v78 + 72LL))(v78, &v129);
        sub_DEDDD0(&v130, (__int64)v121, (__int64)a3, (__int64)&v129);
        sub_1858590(v136, &v130);
        v137 = 0u;
        *(_OWORD *)&v136[8] = 0;
        if ( v133.m128i_i64[0] )
        {
          ((void (__fastcall *)(_BYTE *, int *, __int64))v133.m128i_i64[0])(&v136[8], &v131, 2);
          v137 = _mm_load_si128(&v133);
        }
        v135 = 0u;
        v134 = 0;
        v79 = operator new(0x28u);
        sub_1858590(v79, v136);
        v80 = _mm_loadl_epi64((const __m128i *)&off_1C5CC78);
        *(_QWORD *)(v79 + 24) = 0;
        v81 = v137.m128i_i64[1];
        *(_OWORD *)(v79 + 8) = 0;
        v82 = _mm_unpacklo_epi64(v80, (__m128i)(unsigned __int64)sub_E1CCC0);
        *(_QWORD *)(v79 + 32) = v81;
        if ( v137.m128i_i64[0] )
        {
          v83 = _mm_loadu_si128((const __m128i *)&v136[8]);
          v134.m128i_i64[0] = v79;
          *(_QWORD *)(v79 + 24) = v137.m128i_i64[0];
          *(__m128i *)(v79 + 8) = v83;
        }
        else
        {
          v134.m128i_i64[0] = v79;
        }
        v135 = v82;
        sub_18572D0(v136);
        *(_QWORD *)(v124 + 24) = v135.m128i_i64[1];
        v84 = v135.m128i_i64[0];
        *(_QWORD *)(v124 + 16) = 0;
        *(_OWORD *)v124 = 0;
        if ( v84 )
        {
          v85 = _mm_load_si128(&v134);
          *(_QWORD *)(v124 + 16) = v84;
          *(__m128i *)v124 = v85;
        }
        sub_18572D0(&v130);
        (**(void (__fastcall ***)(void *))v78)(v78);
        sub_186B220(v78);
        sub_1857540(&v129);
        sub_18572D0(&v128);
        if ( v133.m128i_i64[0] )
          ((void (__fastcall *)(int *, int *, __int64))v133.m128i_i64[0])(&v131, &v131, 3);
        v139[0] = qword_1C63778;
        sub_180C0E0(v123);
        if ( v151 )
          sub_186B220((void *)(v151 - 8));
        if ( v150 )
          sub_186B220((void *)(v150 - 8));
        v86 = (__int64 *)v149;
        if ( v149 )
        {
          v87 = v149 + 8LL * *(unsigned int *)(v149 - 4);
          if ( v149 >= v87 )
            goto LABEL_118;
          do
          {
            v88 = *v86;
            if ( *v86 )
            {
              v89 = *(_QWORD *)v148;
              if ( (*(_DWORD *)(v88 + 8))-- == 1 )
                sub_15D7BC0(v89, v88);
            }
            ++v86;
          }
          while ( (unsigned __int64)v86 < v87 );
          v86 = (__int64 *)v149;
          if ( v149 )
LABEL_118:
            sub_186B220(v86 - 1);
        }
        *(_QWORD *)v141 = &off_1C62200;
        if ( ptr )
          sub_186B220(ptr);
        if ( v144 )
          sub_186B220(v144);
        return v124;
      }
LABEL_86:
      v94 = sub_17F71A0(a3, 1);
      sub_E1DC80(
        v124,
        (int)v119,
        v94,
        v95,
        v96,
        v97,
        v117,
        v119,
        v122,
        v124,
        v125,
        (int)v126,
        v127[0],
        v128,
        v129,
        v130,
        v131,
        v132,
        v133.m128i_i32[0],
        v133.m128i_i8[8],
        v134.m128i_i32[0],
        v134.m128i_i64[1],
        v135.m128i_i32[0],
        v135.m128i_i32[2],
        *(__int64 *)v136,
        *(int *)&v136[8],
        *(__int64 *)&v136[16],
        v137.m128i_i32[0],
        v137.m128i_i32[2],
        v138,
        (int)v139[0],
        (int)v139[1],
        *(int *)v140,
        v140[8],
        v141[0],
        v142,
        v143[0],
        (int)v144,
        v145,
        v146[0],
        (char)ptr,
        v148[0],
        v149,
        v150);
      return v124;
    }
LABEL_52:
    if ( *v36 == 33 && !v36[1] )
      goto LABEL_54;
LABEL_87:
    if ( !strcmp(v36, "using-params") )
      goto LABEL_54;
LABEL_88:
    if ( !strcmp(v36, "with") )
      goto LABEL_54;
LABEL_89:
    v98 = __cxa_allocate_exception(0x30u);
    sub_DF2170((__int64)v98, "invalid tactic, unknown tactic combinator ", (const char **)v127, a3[2], a3[3]);
    __cxa_throw(v98, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( v139[0] != v140 )
LABEL_116:
    operator delete(v103, *(_QWORD *)v140 + 1LL);
LABEL_8:
  LODWORD(v122) = sub_17F7190(a3);
  if ( (unsigned int)v122 <= 1 )
  {
    v5 = (char **)__cxa_allocate_exception(0x30u);
    v6 = *((char **)a3 + 1);
    v7 = v5;
    sub_17FDF6((__int64 *)v139, "invalid and-then combinator, at least one argument expected", v8);
    *v7 = (char *)off_1C63128;
    sub_2333C0(v7 + 1, v139);
    v7[5] = v6;
    *v7 = (char *)off_1C64218;
    sub_233E40((__int64)v139);
    __cxa_throw(v7, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( (_DWORD)v122 == 2 )
    goto LABEL_86;
  v118 = nullptr;
  v37 = 0;
  v38 = nullptr;
  v39 = 1;
  while ( 1 )
  {
    v42 = sub_17F71A0(a3, v39);
    sub_E1DC80(
      (int)v139,
      (int)v119,
      v42,
      v43,
      v44,
      v45,
      v118,
      v119,
      v122,
      v124,
      v125,
      (int)v126,
      v127[0],
      v128,
      v129,
      v130,
      v131,
      v132,
      v133.m128i_i32[0],
      v133.m128i_i8[8],
      v134.m128i_i32[0],
      v134.m128i_i64[1],
      v135.m128i_i32[0],
      v135.m128i_i32[2],
      *(__int64 *)v136,
      *(int *)&v136[8],
      *(__int64 *)&v136[16],
      v137.m128i_i32[0],
      v137.m128i_i32[2],
      v138,
      (int)v139[0],
      (int)v139[1],
      *(int *)v140,
      v140[8],
      v141[0],
      v142,
      v143[0],
      (int)v144,
      v145,
      v146[0],
      (char)ptr,
      v148[0],
      v149,
      v150);
    if ( v118 == (__m128i *)v37 )
      break;
    v46 = *(_QWORD *)&v140[8];
    *(_QWORD *)(v37 + 16) = 0;
    *(_OWORD *)v37 = 0;
    *(_QWORD *)(v37 + 24) = v46;
    if ( *(_QWORD *)v140 )
    {
      si128 = _mm_load_si128((const __m128i *)v139);
      *(_QWORD *)(v37 + 16) = *(_QWORD *)v140;
      v37 += 32;
      *(__m128i *)(v37 - 32) = si128;
      goto LABEL_12;
    }
    v37 += 32;
    ++v39;
    v41 = v38;
    if ( (_DWORD)v122 == v39 )
      goto LABEL_17;
LABEL_13:
    v38 = v41;
  }
  v58 = ((char *)v118 - (char *)v38) >> 5;
  if ( v58 == 0x3FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v59 = 1;
  if ( v58 )
    v59 = ((char *)v118 - (char *)v38) >> 5;
  v60 = __CFADD__(v59, v58);
  v61 = v59 + v58;
  if ( v60 )
  {
    v125 = 0x7FFFFFFFFFFFFFE0LL;
    v62 = 0x7FFFFFFFFFFFFFE0LL;
  }
  else
  {
    if ( v61 > 0x3FFFFFFFFFFFFFFLL )
      v61 = 0x3FFFFFFFFFFFFFFLL;
    v125 = 32 * v61;
    v62 = 32 * v61;
  }
  LODWORD(v126) = (_DWORD)v118 - (_DWORD)v38;
  v63 = operator new(v62);
  v41 = (__m128i *)v63;
  v64.m128i_i64[0] = 0;
  v65 = v63 + (char *)v118 - (char *)v38;
  *(_QWORD *)(v65 + 24) = *(_QWORD *)&v140[8];
  v66 = *(_QWORD *)v140;
  *(_QWORD *)(v65 + 16) = 0;
  *(_OWORD *)v65 = 0;
  if ( v66 )
  {
    v64 = _mm_load_si128((const __m128i *)v139);
    *(_QWORD *)(v65 + 16) = v66;
    *(__m128i *)v65 = v64;
    v64.m128i_i64[0] = 0;
    *(_OWORD *)v140 = 0;
    if ( (__m128i *)v37 != v38 )
      goto LABEL_40;
  }
  else if ( (__m128i *)v37 != v38 )
  {
LABEL_40:
    v67 = v38;
    v68 = v63;
    a5 = 0.0;
    do
    {
      while ( 1 )
      {
        v69 = v67[1].m128i_i64[1];
        *(_QWORD *)(v68 + 16) = 0;
        *(_OWORD *)v68 = 0;
        *(_QWORD *)(v68 + 24) = v69;
        v70 = v67[1].m128i_i64[0];
        if ( !v70 )
          break;
        v64 = _mm_loadu_si128(v67);
        v67 += 2;
        *(_QWORD *)(v68 + 16) = v70;
        v68 += 32;
        *(__m128i *)(v68 - 32) = v64;
        if ( (const __m128i *)v37 == v67 )
        {
          v37 = v63 + v37 - (_QWORD)v38 + 32;
          if ( !v38 )
            goto LABEL_82;
          goto LABEL_44;
        }
      }
      v67 += 2;
      v68 += 32;
    }
    while ( v67 != (const __m128i *)v37 );
    v37 = v63 + v37 - (_QWORD)v38 + 32;
    if ( v38 )
      goto LABEL_44;
    goto LABEL_82;
  }
  v37 = v63 + 32;
  if ( !v38 )
  {
LABEL_82:
    v38 = (__m128i *)v63;
    v118 = (__m128i *)(v63 + v125);
    goto LABEL_12;
  }
LABEL_44:
  v126 = (__m128i *)v63;
  operator delete(v38, (char *)v118 - (char *)v38);
  v118 = &v126[(unsigned __int64)v125 / 0x10];
  if ( !*(_QWORD *)v140 )
  {
    v38 = v126;
LABEL_12:
    ++v39;
    v41 = v38;
    if ( (_DWORD)v122 == v39 )
      goto LABEL_17;
    goto LABEL_13;
  }
  ++v39;
  (*(void (__fastcall **)(void **, void **, __int64, double, double))v140)(v139, v139, 3, *(double *)v64.m128i_i64, a5);
  if ( (_DWORD)v122 != v39 )
    goto LABEL_13;
LABEL_17:
  memset(v136, 0, sizeof(v136));
  v120 = (struct _Unwind_Exception *)(v37 - (_QWORD)v41);
  if ( (__m128i *)v37 == v41 )
  {
    v47 = 0;
  }
  else
  {
    if ( (unsigned __int64)(v37 - (_QWORD)v41) > 0x7FFFFFFFFFFFFFE0LL )
      std::__throw_bad_array_new_length();
    v47 = operator new(v37 - (_QWORD)v41);
  }
  *(__m128i *)v136 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v47, (__m128i)(unsigned __int64)v47);
  *(_QWORD *)&v136[16] = (char *)v120 + v47;
  if ( v41 == (__m128i *)v37 )
  {
    v49 = v47;
  }
  else
  {
    v48 = v41;
    v49 = v47;
    do
    {
      v50 = (void (__fastcall *)(__int64, const __m128i *, __int64))v48[1].m128i_i64[0];
      *(_QWORD *)(v49 + 16) = 0;
      *(_QWORD *)(v49 + 24) = 0;
      *(_OWORD *)v49 = 0;
      if ( v50 )
      {
        v50(v49, v48, 2);
        *(__m128i *)(v49 + 16) = _mm_loadu_si128(v48 + 1);
      }
      v48 += 2;
      v49 += 32;
    }
    while ( v48 != (const __m128i *)v37 );
  }
  *(_QWORD *)&v136[8] = v49;
  memset(v140, 0, sizeof(v140));
  *(_OWORD *)v139 = 0;
  v51 = (_QWORD *)operator new(0x18u);
  v51[1] = v49;
  v52 = v41;
  *v51 = v47;
  v51[2] = (char *)v120 + v47;
  v139[0] = v51;
  v53 = _mm_load_si128((const __m128i *)v139);
  *(_QWORD *)(v124 + 24) = sub_E1D0E0;
  *(_QWORD *)(v124 + 16) = sub_E1CE50;
  *(__m128i *)v124 = v53;
  if ( v41 == (__m128i *)v37 )
    goto LABEL_29;
  do
  {
    while ( 1 )
    {
      v54 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v52[1].m128i_i64[0];
      if ( !v54 )
        break;
      v55 = v52;
      v56 = v52;
      v52 += 2;
      v54(v56, v55, 3);
      if ( (__m128i *)v37 == v52 )
        goto LABEL_28;
    }
    v52 += 2;
  }
  while ( v52 != (__m128i *)v37 );
LABEL_28:
  if ( v41 )
LABEL_29:
    operator delete(v41, (char *)v118 - (char *)v41);
  return v124;
}

