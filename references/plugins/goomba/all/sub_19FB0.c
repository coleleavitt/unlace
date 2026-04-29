_QWORD *__fastcall sub_19FB0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 si128,
        __m128 a11)
{
  unsigned int v11; // r13d
  _QWORD *exception; // rbp
  const char *error_msg; // rax
  _QWORD *v14; // rbp
  const char *v15; // rax
  _QWORD *v16; // rbp
  const char *v17; // rax
  _QWORD *v18; // rbp
  const char *v19; // rax
  _QWORD *v20; // rbp
  const char *v21; // rax
  _QWORD *v22; // rbp
  const char *v23; // rax
  _QWORD *v24; // rbp
  const char *v25; // rax
  _QWORD *v26; // rbp
  const char *v27; // rax
  _QWORD *v28; // rbp
  const char *v29; // rax
  _QWORD *v30; // rbp
  const char *v31; // rax
  _QWORD *v32; // rbp
  const char *v33; // rax
  _QWORD *v34; // rbp
  const char *v35; // rax
  _QWORD *v36; // rbp
  const char *v37; // rax
  _QWORD *v38; // rbp
  const char *v39; // rax
  _QWORD *v40; // rbp
  const char *v41; // rax
  _QWORD *v42; // rbp
  const char *v43; // rax
  _QWORD *v44; // rbp
  const char *v45; // rax
  _QWORD *v46; // rbp
  const char *v47; // rax
  _QWORD *v48; // rbp
  const char *v49; // rax
  _QWORD *v50; // rbp
  const char *v51; // rax
  int v52; // eax
  __int64 v53; // r12
  __int64 v54; // rdi
  __int64 v56; // rbp
  unsigned int error_code; // eax
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // r12
  unsigned int v61; // r13d
  __int64 v62; // rdi
  __int64 v63; // r15
  __int64 v64; // r12
  unsigned int v65; // r13d
  __m128i v66; // xmm0
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r12
  unsigned int v70; // r13d
  __int64 v71; // rdi
  __m128 v72; // xmm0
  unsigned __int64 v73; // r13
  __int64 v74; // rdi
  __m128i v75; // xmm0
  __int64 v76; // rsi
  __int64 v77; // rdx
  __m128 v78; // xmm1
  int v79; // eax
  unsigned __int64 v80; // r13
  __int64 v81; // rdi
  __int64 v82; // rdi
  __int64 sort; // r12
  unsigned int v84; // r14d
  __m128i v85; // xmm0
  unsigned int bv_sort_size; // r14d
  unsigned int v87; // eax
  __int64 v88; // rdi
  __int64 v89; // r12
  unsigned int v90; // r14d
  __m128i v91; // xmm0
  int v92; // r14d
  unsigned int v93; // eax
  __int64 v94; // rdi
  unsigned int v95; // r12d
  __int64 v96; // rdi
  __int64 v97; // r13
  __int64 v98; // r12
  unsigned int v99; // r14d
  __int64 v100; // rdi
  __int64 v101; // rdi
  __int64 v102; // r14
  unsigned int v103; // r13d
  __int64 v104; // rdi
  __int64 v105; // r12
  unsigned int v106; // r13d
  __int64 v107; // rdi
  __int64 v108; // rdi
  __int64 v109; // r12
  unsigned int v110; // r13d
  __int64 v111; // rdi
  __int64 v112; // rdi
  int sort_kind; // r13d
  __int64 v114; // r12
  unsigned int v115; // r13d
  __m128i v116; // xmm0
  int v117; // r13d
  __int64 v118; // r12
  unsigned int v119; // r13d
  __int64 v120; // rdi
  __int64 v121; // rdi
  int v122; // r13d
  __int64 v123; // r12
  unsigned int v124; // r14d
  __m128i v125; // xmm0
  int v126; // r14d
  unsigned int v127; // eax
  __int64 v128; // rdi
  unsigned int v129; // r12d
  __int64 v130; // rdi
  unsigned int v131; // r12d
  __int64 v132; // r12
  unsigned int v133; // r13d
  __m128i v134; // xmm0
  int v135; // r13d
  __int64 v136; // rdi
  __int64 v138; // rax
  __int64 v139; // r13
  unsigned int v140; // [rsp+8h] [rbp-180h]
  unsigned int v141; // [rsp+8h] [rbp-180h]
  unsigned int v142; // [rsp+8h] [rbp-180h]
  __int64 v143; // [rsp+8h] [rbp-180h]
  unsigned int v144; // [rsp+10h] [rbp-178h]
  __int64 v145; // [rsp+10h] [rbp-178h]
  __m128 v147; // [rsp+20h] [rbp-168h] BYREF
  __int64 v148; // [rsp+30h] [rbp-158h]
  __int64 v149; // [rsp+38h] [rbp-150h]
  __int64 (__fastcall ***v150)(); // [rsp+40h] [rbp-148h]
  __int64 v151; // [rsp+48h] [rbp-140h]
  __int64 v152; // [rsp+50h] [rbp-138h]
  __m128i v153; // [rsp+58h] [rbp-130h]
  __int64 (__fastcall ***v154)(); // [rsp+68h] [rbp-120h]
  __int64 (__fastcall **v155)(); // [rsp+70h] [rbp-118h] BYREF
  __m128i v156; // [rsp+78h] [rbp-110h] BYREF
  __int64 (__fastcall **v157)(); // [rsp+90h] [rbp-F8h]
  __int64 (__fastcall **v158)(); // [rsp+B0h] [rbp-D8h]
  __m128 v159; // [rsp+B8h] [rbp-D0h]
  _UNKNOWN **v160; // [rsp+D0h] [rbp-B8h]
  __int64 v161; // [rsp+D8h] [rbp-B0h]
  __int64 v162; // [rsp+E0h] [rbp-A8h]
  _UNKNOWN **v163; // [rsp+F0h] [rbp-98h] BYREF
  __m128 v164; // [rsp+F8h] [rbp-90h]
  __int64 (__fastcall **v165)(); // [rsp+110h] [rbp-78h] BYREF
  __m128i v166; // [rsp+118h] [rbp-70h] BYREF
  _QWORD v167[11]; // [rsp+130h] [rbp-58h] BYREF

  v52 = *(_DWORD *)(a2 + 16);
  v53 = *(_QWORD *)(a2 + 8);
  v54 = *(_QWORD *)(a3 + 32);
  v149 = a2;
  v167[3] = __readfsqword(0x28u);
  v143 = a3 + 24;
  v56 = Z3_mk_bv_sort(v54, (unsigned int)(8 * v52));
  error_code = Z3_get_error_code(*(_QWORD *)(a3 + 32));
  if ( error_code && *(_BYTE *)(a3 + 24) )
  {
    v11 = error_code;
    exception = __cxa_allocate_exception(0x10u);
    error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(a3 + 32), v11);
    sub_105D0(exception, error_msg);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v58 = *(_QWORD *)(a3 + 32);
  v166.m128i_i64[1] = v56;
  v166.m128i_i64[0] = v143;
  Z3_inc_ref(v58, v56);
  v59 = *(_QWORD *)(a3 + 32);
  v165 = (__int64 (__fastcall **)())&off_4D870;
  v60 = Z3_mk_unsigned_int64(v59, v53, v56);
  v61 = Z3_get_error_code(*(_QWORD *)(a3 + 32));
  if ( v61 && *(_BYTE *)(a3 + 24) )
  {
    v14 = __cxa_allocate_exception(0x10u);
    v15 = (const char *)Z3_get_error_msg(*(_QWORD *)(a3 + 32), v61);
    sub_105D0(v14, v15);
    __cxa_throw(v14, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  a1[1] = v143;
  v62 = *(_QWORD *)(a3 + 32);
  *a1 = &off_4D850;
  a1[2] = v60;
  Z3_inc_ref(v62, v60);
  *a1 = &off_4D890;
  if ( v56 )
    Z3_dec_ref(*(_QWORD *)(a3 + 32));
  v150 = &v155;
  v63 = *(_QWORD *)(v149 + 48);
  v151 = v149 + 32;
  v152 = v149 + 72;
  if ( v149 + 32 != v63 )
  {
    while ( 1 )
    {
      sub_151B0(v150, a3, v63 + 32);
      v148 = sub_19B50(v152, v63 + 32, v77);
      v78 = (__m128)_mm_loadu_si128(&v156);
      v79 = *(_DWORD *)(v149 + 16);
      a11 = _mm_movehl_ps(a11, v78);
      v147 = v78;
      v80 = a11.m128_u64[0];
      v159 = v78;
      v81 = *(_QWORD *)(v78.m128_u64[0] + 8);
      v144 = 8 * v79;
      v153 = v156;
      Z3_inc_ref(v81, a11.m128_u64[0]);
      v82 = *(_QWORD *)(v78.m128_u64[0] + 8);
      v158 = (__int64 (__fastcall **)())&off_4D890;
      sort = Z3_get_sort(v82, a11.m128_u64[0]);
      v84 = Z3_get_error_code(*(_QWORD *)(v78.m128_u64[0] + 8));
      v85 = _mm_unpacklo_epi64((__m128i)v78.m128_u64[0], (__m128i)(unsigned __int64)sort);
      if ( v84 && *(_BYTE *)v78.m128_u64[0] )
      {
        v46 = __cxa_allocate_exception(0x10u);
        v47 = (const char *)Z3_get_error_msg(*(_QWORD *)(v153.m128i_i64[0] + 8), v84);
        sub_105D0(v46, v47);
        __cxa_throw(v46, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v166 = v85;
      Z3_inc_ref(*(_QWORD *)(v78.m128_u64[0] + 8), sort);
      v165 = (__int64 (__fastcall **)())&off_4D870;
      bv_sort_size = Z3_get_bv_sort_size(*(_QWORD *)(v78.m128_u64[0] + 8), sort);
      v87 = Z3_get_error_code(*(_QWORD *)(v78.m128_u64[0] + 8));
      if ( v87 && *(_BYTE *)v78.m128_u64[0] )
      {
        v142 = v87;
        v50 = __cxa_allocate_exception(0x10u);
        v51 = (const char *)Z3_get_error_msg(*(_QWORD *)(v153.m128i_i64[0] + 8), v142);
        sub_105D0(v50, v51);
        __cxa_throw(v50, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      if ( sort )
        Z3_dec_ref(*(_QWORD *)(v78.m128_u64[0] + 8));
      v88 = *(_QWORD *)(v78.m128_u64[0] + 8);
      if ( v144 == bv_sort_size )
        break;
      if ( v144 < bv_sort_size )
      {
        v145 = Z3_mk_extract(v88, v144 - 1, 0, a11.m128_u64[0]);
        v131 = Z3_get_error_code(*(_QWORD *)(v78.m128_u64[0] + 8));
        if ( v131 && *(_BYTE *)v78.m128_u64[0] )
        {
          v30 = __cxa_allocate_exception(0x10u);
          v31 = (const char *)Z3_get_error_msg(*(_QWORD *)(v153.m128i_i64[0] + 8), v131);
          sub_105D0(v30, v31);
          __cxa_throw(v30, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
        Z3_inc_ref(*(_QWORD *)(v78.m128_u64[0] + 8), v145);
        v157 = (__int64 (__fastcall **)())&off_4D890;
LABEL_98:
        v158 = &off_4D850;
        if ( !a11.m128_u64[0] )
          goto LABEL_55;
        goto LABEL_54;
      }
      if ( v148 == v149 + 80 )
      {
        si128 = (__m128)_mm_load_si128((const __m128i *)&v147);
        v164 = si128;
        Z3_inc_ref(v88, a11.m128_u64[0]);
        v163 = &off_4D890;
        v123 = Z3_get_sort(*(_QWORD *)(v78.m128_u64[0] + 8), a11.m128_u64[0]);
        a11 = (__m128)(unsigned __int64)v123;
        v124 = Z3_get_error_code(*(_QWORD *)(v78.m128_u64[0] + 8));
        v125 = _mm_unpacklo_epi64((__m128i)v78.m128_u64[0], (__m128i)(unsigned __int64)v123);
        if ( v124 && *(_BYTE *)v78.m128_u64[0] )
        {
          v36 = __cxa_allocate_exception(0x10u);
          v37 = (const char *)Z3_get_error_msg(*(_QWORD *)(v153.m128i_i64[0] + 8), v124);
          sub_105D0(v36, v37);
          __cxa_throw(v36, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
        v166 = v125;
        Z3_inc_ref(*(_QWORD *)(v78.m128_u64[0] + 8), v123);
        v165 = (__int64 (__fastcall **)())&off_4D870;
        v126 = Z3_get_bv_sort_size(*(_QWORD *)(v78.m128_u64[0] + 8), v123);
        v127 = Z3_get_error_code(*(_QWORD *)(v78.m128_u64[0] + 8));
        if ( v127 && *(_BYTE *)v78.m128_u64[0] )
        {
          v140 = v127;
          v24 = __cxa_allocate_exception(0x10u);
          v25 = (const char *)Z3_get_error_msg(*(_QWORD *)(v153.m128i_i64[0] + 8), v140);
          sub_105D0(v24, v25);
          __cxa_throw(v24, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
        if ( v123 )
          Z3_dec_ref(*(_QWORD *)(v78.m128_u64[0] + 8));
        v128 = *(_QWORD *)(v78.m128_u64[0] + 8);
        if ( v144 == v126 )
        {
          v157 = &off_4D850;
          Z3_inc_ref(v128, v80);
          v145 = v80;
          v157 = (__int64 (__fastcall **)())&off_4D890;
        }
        else
        {
          v145 = Z3_mk_zero_ext(v128, v144 - v126, v80);
          v129 = Z3_get_error_code(*(_QWORD *)(v78.m128_u64[0] + 8));
          if ( v129 && *(_BYTE *)v78.m128_u64[0] )
          {
            v22 = __cxa_allocate_exception(0x10u);
            v23 = (const char *)Z3_get_error_msg(*(_QWORD *)(v153.m128i_i64[0] + 8), v129);
            sub_105D0(v22, v23);
            __cxa_throw(v22, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
          }
          v130 = *(_QWORD *)(v78.m128_u64[0] + 8);
          v157 = &off_4D850;
          Z3_inc_ref(v130, v145);
          v157 = (__int64 (__fastcall **)())&off_4D890;
        }
        if ( v80 )
        {
LABEL_53:
          Z3_dec_ref(*(_QWORD *)(v78.m128_u64[0] + 8));
LABEL_54:
          Z3_dec_ref(*(_QWORD *)(v78.m128_u64[0] + 8));
        }
      }
      else
      {
        Z3_inc_ref(v88, a11.m128_u64[0]);
        v160 = &off_4D890;
        v89 = Z3_get_sort(*(_QWORD *)(v78.m128_u64[0] + 8), a11.m128_u64[0]);
        v90 = Z3_get_error_code(*(_QWORD *)(v78.m128_u64[0] + 8));
        v91 = _mm_unpacklo_epi64((__m128i)v78.m128_u64[0], (__m128i)(unsigned __int64)v89);
        if ( v90 && *(_BYTE *)v78.m128_u64[0] )
        {
          v18 = __cxa_allocate_exception(0x10u);
          v19 = (const char *)Z3_get_error_msg(*(_QWORD *)(v153.m128i_i64[0] + 8), v90);
          sub_105D0(v18, v19);
          __cxa_throw(v18, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
        v166 = v91;
        Z3_inc_ref(*(_QWORD *)(v78.m128_u64[0] + 8), v89);
        v165 = (__int64 (__fastcall **)())&off_4D870;
        v92 = Z3_get_bv_sort_size(*(_QWORD *)(v78.m128_u64[0] + 8), v89);
        v93 = Z3_get_error_code(*(_QWORD *)(v78.m128_u64[0] + 8));
        if ( v93 && *(_BYTE *)v78.m128_u64[0] )
        {
          v141 = v93;
          v32 = __cxa_allocate_exception(0x10u);
          v33 = (const char *)Z3_get_error_msg(*(_QWORD *)(v153.m128i_i64[0] + 8), v141);
          sub_105D0(v32, v33);
          __cxa_throw(v32, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
        if ( v89 )
          Z3_dec_ref(*(_QWORD *)(v78.m128_u64[0] + 8));
        v94 = *(_QWORD *)(v78.m128_u64[0] + 8);
        if ( v144 == v92 )
        {
          v157 = &off_4D850;
          Z3_inc_ref(v94, a11.m128_u64[0]);
          v145 = a11.m128_u64[0];
          v157 = (__int64 (__fastcall **)())&off_4D890;
        }
        else
        {
          v145 = Z3_mk_sign_ext(v94, v144 - v92, a11.m128_u64[0]);
          v95 = Z3_get_error_code(*(_QWORD *)(v78.m128_u64[0] + 8));
          if ( v95 && *(_BYTE *)v78.m128_u64[0] )
          {
            v26 = __cxa_allocate_exception(0x10u);
            v27 = (const char *)Z3_get_error_msg(*(_QWORD *)(v153.m128i_i64[0] + 8), v95);
            sub_105D0(v26, v27);
            __cxa_throw(v26, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
          }
          v96 = *(_QWORD *)(v78.m128_u64[0] + 8);
          v157 = &off_4D850;
          Z3_inc_ref(v96, v145);
          v157 = (__int64 (__fastcall **)())&off_4D890;
        }
        if ( a11.m128_u64[0] )
          goto LABEL_53;
      }
LABEL_55:
      v97 = *(_QWORD *)(v63 + 48);
      v98 = Z3_mk_bv_sort(*(_QWORD *)(a3 + 32), (unsigned int)(8 * *(_DWORD *)(v63 + 56)));
      v99 = Z3_get_error_code(*(_QWORD *)(a3 + 32));
      if ( v99 && *(_BYTE *)(a3 + 24) )
      {
        v44 = __cxa_allocate_exception(0x10u);
        v45 = (const char *)Z3_get_error_msg(*(_QWORD *)(a3 + 32), v99);
        sub_105D0(v44, v45);
        __cxa_throw(v44, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v100 = *(_QWORD *)(a3 + 32);
      v166.m128i_i64[1] = v98;
      v166.m128i_i64[0] = v143;
      Z3_inc_ref(v100, v98);
      v101 = *(_QWORD *)(a3 + 32);
      v165 = (__int64 (__fastcall **)())&off_4D870;
      v102 = Z3_mk_unsigned_int64(v101, v97, v98);
      v103 = Z3_get_error_code(*(_QWORD *)(a3 + 32));
      if ( v103 && *(_BYTE *)(a3 + 24) )
      {
        v42 = __cxa_allocate_exception(0x10u);
        v43 = (const char *)Z3_get_error_msg(*(_QWORD *)(a3 + 32), v103);
        sub_105D0(v42, v43);
        __cxa_throw(v42, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v104 = *(_QWORD *)(a3 + 32);
      v162 = v102;
      v161 = v143;
      Z3_inc_ref(v104, v102);
      v160 = &off_4D890;
      if ( v98 )
        Z3_dec_ref(*(_QWORD *)(a3 + 32));
      v105 = Z3_get_sort(*(_QWORD *)(a3 + 32), v102);
      v106 = Z3_get_error_code(*(_QWORD *)(a3 + 32));
      if ( v106 && *(_BYTE *)(a3 + 24) )
      {
        v40 = __cxa_allocate_exception(0x10u);
        v41 = (const char *)Z3_get_error_msg(*(_QWORD *)(a3 + 32), v106);
        sub_105D0(v40, v41);
        __cxa_throw(v40, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v107 = *(_QWORD *)(a3 + 32);
      v166.m128i_i64[1] = v105;
      v166.m128i_i64[0] = v143;
      Z3_inc_ref(v107, v105);
      v108 = *(_QWORD *)(a3 + 32);
      v165 = (__int64 (__fastcall **)())&off_4D870;
      if ( (unsigned int)Z3_get_sort_kind(v108, v105) == 2
        || (unsigned int)Z3_get_sort_kind(*(_QWORD *)(a3 + 32), v105) == 3 )
      {
        if ( v105 )
          Z3_dec_ref(*(_QWORD *)(a3 + 32));
        v64 = Z3_get_sort(*(_QWORD *)(v78.m128_u64[0] + 8), v145);
        v65 = Z3_get_error_code(*(_QWORD *)(v78.m128_u64[0] + 8));
        v66 = _mm_unpacklo_epi64((__m128i)v78.m128_u64[0], (__m128i)(unsigned __int64)v64);
        if ( v65 && *(_BYTE *)v78.m128_u64[0] )
        {
          v38 = __cxa_allocate_exception(0x10u);
          v39 = (const char *)Z3_get_error_msg(*(_QWORD *)(v153.m128i_i64[0] + 8), v65);
          sub_105D0(v38, v39);
          __cxa_throw(v38, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
        v166 = v66;
        Z3_inc_ref(*(_QWORD *)(v78.m128_u64[0] + 8), v64);
        v165 = (__int64 (__fastcall **)())&off_4D870;
        if ( (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v78.m128_u64[0] + 8), v64) == 2
          || (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v78.m128_u64[0] + 8), v64) == 3 )
        {
          if ( v64 )
            Z3_dec_ref(*(_QWORD *)(v78.m128_u64[0] + 8));
          v67 = *(_QWORD *)(a3 + 32);
          v167[0] = v102;
          v167[1] = v145;
          v68 = Z3_mk_mul(v67, 2, v167);
          goto LABEL_17;
        }
        if ( v64 )
          Z3_dec_ref(*(_QWORD *)(v78.m128_u64[0] + 8));
      }
      else if ( v105 )
      {
        Z3_dec_ref(*(_QWORD *)(a3 + 32));
      }
      v109 = Z3_get_sort(*(_QWORD *)(a3 + 32), v102);
      v110 = Z3_get_error_code(*(_QWORD *)(a3 + 32));
      if ( v110 && *(_BYTE *)(a3 + 24) )
      {
        v20 = __cxa_allocate_exception(0x10u);
        v21 = (const char *)Z3_get_error_msg(*(_QWORD *)(a3 + 32), v110);
        sub_105D0(v20, v21);
        __cxa_throw(v20, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v111 = *(_QWORD *)(a3 + 32);
      v166.m128i_i64[1] = v109;
      v166.m128i_i64[0] = v143;
      Z3_inc_ref(v111, v109);
      v112 = *(_QWORD *)(a3 + 32);
      v165 = (__int64 (__fastcall **)())&off_4D870;
      sort_kind = Z3_get_sort_kind(v112, v109);
      if ( v109 )
        Z3_dec_ref(*(_QWORD *)(a3 + 32));
      if ( sort_kind != 4 )
        goto LABEL_77;
      v114 = Z3_get_sort(*(_QWORD *)(v78.m128_u64[0] + 8), v145);
      v115 = Z3_get_error_code(*(_QWORD *)(v78.m128_u64[0] + 8));
      v116 = _mm_unpacklo_epi64((__m128i)v78.m128_u64[0], (__m128i)(unsigned __int64)v114);
      if ( v115 && *(_BYTE *)v78.m128_u64[0] )
      {
        v16 = __cxa_allocate_exception(0x10u);
        v17 = (const char *)Z3_get_error_msg(*(_QWORD *)(v153.m128i_i64[0] + 8), v115);
        sub_105D0(v16, v17);
        __cxa_throw(v16, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v166 = v116;
      Z3_inc_ref(*(_QWORD *)(v78.m128_u64[0] + 8), v114);
      v165 = (__int64 (__fastcall **)())&off_4D870;
      v117 = Z3_get_sort_kind(*(_QWORD *)(v78.m128_u64[0] + 8), v114);
      if ( v114 )
        Z3_dec_ref(*(_QWORD *)(v78.m128_u64[0] + 8));
      if ( v117 != 4 )
      {
LABEL_77:
        v118 = Z3_get_sort(*(_QWORD *)(a3 + 32), v102);
        v119 = Z3_get_error_code(*(_QWORD *)(a3 + 32));
        if ( v119 && *(_BYTE *)(a3 + 24) )
        {
          v34 = __cxa_allocate_exception(0x10u);
          v35 = (const char *)Z3_get_error_msg(*(_QWORD *)(a3 + 32), v119);
          sub_105D0(v34, v35);
          __cxa_throw(v34, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
        v120 = *(_QWORD *)(a3 + 32);
        v166.m128i_i64[1] = v118;
        v166.m128i_i64[0] = v143;
        Z3_inc_ref(v120, v118);
        v121 = *(_QWORD *)(a3 + 32);
        v165 = (__int64 (__fastcall **)())&off_4D870;
        v122 = Z3_get_sort_kind(v121, v118);
        if ( v118 )
          Z3_dec_ref(*(_QWORD *)(a3 + 32));
        if ( v122 != 9 )
          goto LABEL_82;
        v132 = Z3_get_sort(*(_QWORD *)(v78.m128_u64[0] + 8), v145);
        v133 = Z3_get_error_code(*(_QWORD *)(v78.m128_u64[0] + 8));
        v134 = _mm_unpacklo_epi64((__m128i)v78.m128_u64[0], (__m128i)(unsigned __int64)v132);
        if ( v133 && *(_BYTE *)v78.m128_u64[0] )
        {
          v28 = __cxa_allocate_exception(0x10u);
          v29 = (const char *)Z3_get_error_msg(*(_QWORD *)(v153.m128i_i64[0] + 8), v133);
          sub_105D0(v28, v29);
          __cxa_throw(v28, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
        v166 = v134;
        Z3_inc_ref(*(_QWORD *)(v78.m128_u64[0] + 8), v132);
        v165 = (__int64 (__fastcall **)())&off_4D870;
        v135 = Z3_get_sort_kind(*(_QWORD *)(v78.m128_u64[0] + 8), v132);
        if ( v132 )
          Z3_dec_ref(*(_QWORD *)(v78.m128_u64[0] + 8));
        if ( v135 == 9 )
        {
          v136 = *(_QWORD *)(a3 + 32);
          switch ( *(_DWORD *)(a3 + 28) )
          {
            case 0:
              v138 = Z3_mk_fpa_rna(v136);
              break;
            case 1:
              v138 = Z3_mk_fpa_rne(v136);
              break;
            case 2:
              v138 = Z3_mk_fpa_rtp(v136);
              break;
            case 3:
              v138 = Z3_mk_fpa_rtn(v136);
              break;
            case 4:
              v138 = Z3_mk_fpa_rtz(v136);
              break;
            default:
              v68 = Z3_mk_fpa_mul(v136, 0, v102, v145);
              goto LABEL_17;
          }
          v139 = v138;
          v165 = &off_4D850;
          Z3_inc_ref(*(_QWORD *)(a3 + 32), v138);
          v69 = Z3_mk_fpa_mul(*(_QWORD *)(a3 + 32), v139, v102, v145);
          if ( v139 )
            Z3_dec_ref(*(_QWORD *)(a3 + 32));
        }
        else
        {
LABEL_82:
          v69 = 0;
        }
        goto LABEL_18;
      }
      v68 = Z3_mk_bvmul(*(_QWORD *)(a3 + 32), v102, v145);
LABEL_17:
      v69 = v68;
LABEL_18:
      v70 = Z3_get_error_code(*(_QWORD *)(a3 + 32));
      if ( v70 && *(_BYTE *)(a3 + 24) )
      {
        v48 = __cxa_allocate_exception(0x10u);
        v49 = (const char *)Z3_get_error_msg(*(_QWORD *)(a3 + 32), v70);
        sub_105D0(v48, v49);
        __cxa_throw(v48, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v71 = *(_QWORD *)(a3 + 32);
      v164.m128_u64[1] = v69;
      v164.m128_u64[0] = v143;
      Z3_inc_ref(v71, v69);
      v163 = &off_4D890;
      v154 = &v165;
      v153.m128i_i64[1] = (__int64)&v163;
      sub_129B0(&v165, (__int64)a1, (__int64)&v163);
      v72 = (__m128)_mm_loadu_si128(&v166);
      v73 = v72.m128_u64[0];
      si128 = _mm_movehl_ps(si128, v72);
      v147 = v72;
      v74 = *(_QWORD *)(v72.m128_u64[0] + 8);
      v148 = si128.m128_u64[0];
      Z3_inc_ref(v74, si128.m128_u64[0]);
      v75 = _mm_load_si128((const __m128i *)&v147);
      if ( a1[2] )
      {
        Z3_dec_ref(*(_QWORD *)(a1[1] + 8LL));
        v75 = _mm_load_si128((const __m128i *)&v147);
      }
      v76 = v148;
      *(__m128i *)(a1 + 1) = v75;
      if ( v76 )
        Z3_dec_ref(*(_QWORD *)(v73 + 8));
      if ( v69 )
        Z3_dec_ref(*(_QWORD *)(a3 + 32));
      if ( v102 )
        Z3_dec_ref(*(_QWORD *)(a3 + 32));
      if ( v145 )
        Z3_dec_ref(*(_QWORD *)(v78.m128_u64[0] + 8));
      v155 = &off_4D850;
      if ( v156.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v156.m128i_i64[0] + 8));
      v63 = std::_Rb_tree_increment(v63);
      if ( v151 == v63 )
        return a1;
    }
    Z3_inc_ref(v88, a11.m128_u64[0]);
    v145 = a11.m128_u64[0];
    v157 = (__int64 (__fastcall **)())&off_4D890;
    goto LABEL_98;
  }
  return a1;
}
