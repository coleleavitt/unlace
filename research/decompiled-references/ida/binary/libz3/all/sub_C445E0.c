__m128 *__fastcall sub_C445E0(__m128 *a1, __int64 a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 v6; // rax
  bool v7; // zf
  _QWORD *v8; // r15
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r12
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // r12
  __int64 v25; // rax
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rdi
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rdi
  unsigned int v34; // eax
  void *v35; // r14
  __int64 v36; // rax
  __int64 v37; // r13
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  __int64 *v41; // rdx
  __int64 v42; // r13
  __int64 v43; // r11
  __m128 *v44; // r14
  unsigned int v45; // eax
  __int64 v46; // rdx
  int v47; // eax
  __m128 *v48; // rdx
  unsigned __int64 v49; // rcx
  __m128 v50; // xmm0
  int v51; // eax
  __int64 v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 *v55; // rbx
  __int64 *v56; // r14
  __int64 v57; // rsi
  unsigned int v59; // esi
  size_t v60; // rdi
  __int64 v61; // rax
  __int64 v62; // r11
  unsigned int v63; // esi
  _QWORD *v64; // r12
  __int64 v65; // rdi
  __int64 v66; // rdx
  _QWORD *v67; // rcx
  _QWORD *i; // rax
  __int64 v69; // r10
  __int64 v70; // r10
  __int64 v71; // r10
  __int64 *v72; // rbx
  __int64 v73; // rdx
  unsigned int v74; // r12d
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdi
  unsigned int v79; // r14d
  size_t v80; // rsi
  unsigned int *v81; // rax
  __int64 v82; // rdx
  unsigned int v83; // r13d
  size_t v84; // rsi
  unsigned int *v85; // rax
  _DWORD *v86; // r8
  int v87; // r9d
  void *v88; // rdi
  int v89; // ecx
  int v90; // r8d
  int v91; // r9d
  __int64 v92; // rdi
  __int64 v93; // rax
  void *v94; // rbx
  __int64 v95; // rcx
  _QWORD *v96; // rax
  unsigned int v97; // ebx
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  int v100; // ecx
  int v101; // r8d
  int v102; // r9d
  __int64 v103; // rdi
  __int64 v104; // rax
  void *v105; // r14
  __int64 v106; // rbx
  int v107; // ecx
  int v108; // r8d
  int v109; // r9d
  _QWORD *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rcx
  __m128i *v113; // rbx
  __int64 v114; // rax
  void (__fastcall ***v115)(void *); // r12
  __m128i v116; // xmm0
  __int64 v117; // rbx
  __int64 v118; // rbx
  char **exception; // rbx
  const char *v120; // rax
  char **v121; // r14
  char **v122; // r14
  char **v123; // r14
  int v124; // [rsp-8h] [rbp-D8h]
  __int64 v125; // [rsp+0h] [rbp-D0h]
  int v126; // [rsp+0h] [rbp-D0h]
  __int64 v127; // [rsp+8h] [rbp-C8h]
  int v128; // [rsp+8h] [rbp-C8h]
  __int64 v129; // [rsp+10h] [rbp-C0h]
  int v130; // [rsp+10h] [rbp-C0h]
  _DWORD *v131; // [rsp+18h] [rbp-B8h]
  int v132; // [rsp+18h] [rbp-B8h]
  _DWORD *v133; // [rsp+18h] [rbp-B8h]
  __m128 *v134; // [rsp+20h] [rbp-B0h]
  int v135; // [rsp+20h] [rbp-B0h]
  __int64 v136; // [rsp+28h] [rbp-A8h]
  char v137; // [rsp+28h] [rbp-A8h]
  int v138; // [rsp+30h] [rbp-A0h]
  __int64 v139; // [rsp+30h] [rbp-A0h]
  __int64 v140; // [rsp+38h] [rbp-98h]
  int v141; // [rsp+38h] [rbp-98h]
  unsigned int v142; // [rsp+40h] [rbp-90h]
  int v143; // [rsp+40h] [rbp-90h]
  void *v144; // [rsp+40h] [rbp-90h]
  __int64 v145; // [rsp+40h] [rbp-90h]
  __int64 v146; // [rsp+48h] [rbp-88h]
  void *v147; // [rsp+48h] [rbp-88h]
  int v148[2]; // [rsp+50h] [rbp-80h] BYREF
  unsigned int v149; // [rsp+58h] [rbp-78h]
  int v150; // [rsp+5Ch] [rbp-74h]
  __m128i v151; // [rsp+60h] [rbp-70h] BYREF
  __int64 v152; // [rsp+70h] [rbp-60h]
  __int64 v153; // [rsp+78h] [rbp-58h]
  __int64 v154; // [rsp+80h] [rbp-50h] BYREF
  __int64 v155; // [rsp+88h] [rbp-48h]
  __int64 v156; // [rsp+90h] [rbp-40h] BYREF
  __int64 v157; // [rsp+98h] [rbp-38h]
  int v158; // [rsp+A0h] [rbp-30h]
  void *v159; // [rsp+A8h] [rbp-28h]
  int v160; // [rsp+B0h] [rbp-20h]
  __int64 v161; // [rsp+B8h] [rbp-18h]

  v6 = *(_QWORD *)(a2 + 16);
  v151.m128i_i64[1] = a2;
  v7 = *(_QWORD *)(a2 + 784) == 0;
  v134 = a1;
  LODWORD(v136) = a3;
  v140 = a4;
  v150 = a5;
  v149 = a6;
  v127 = v6;
  v152 = v6;
  if ( v7 )
  {
    v111 = sub_186B270(0x50u);
    v112 = v151.m128i_i64[1];
    v113 = (__m128i *)v111;
    *(_QWORD *)(v111 + 16) = 0;
    v114 = *(_QWORD *)(v112 + 16);
    v115 = *(void (__fastcall ****)(void *))(v112 + 784);
    v113[1].m128i_i8[8] = 1;
    v113[3].m128i_i64[0] = 8;
    v151.m128i_i64[0] = v114;
    v116 = _mm_loadl_epi64(&v151);
    v113[4].m128i_i64[1] = 0;
    v113->m128i_i64[0] = (__int64)&off_1C60CE8;
    v113->m128i_i32[2] = 1;
    strcpy(&v113[3].m128i_i8[8], "lia2card");
    v113[2] = _mm_unpacklo_epi64(v116, (__m128i)(unsigned __int64)&v113[3].m128i_u64[1]);
    if ( v115 )
    {
      v7 = (*((_DWORD *)v115 + 2))-- == 1;
      if ( v7 )
      {
        (**v115)(v115);
        sub_186B220(v115);
      }
    }
    *(_QWORD *)(v151.m128i_i64[1] + 784) = v113;
  }
  if ( !v149 )
  {
    v154 = 0;
    v155 = 0;
    v156 = 1;
    v157 = 0;
    sub_182CBA0(qword_1C7F2C0, &v156);
    BYTE4(v156) &= ~1u;
    LODWORD(v156) = 1;
    v103 = *(_QWORD *)(v151.m128i_i64[1] + 32);
    if ( !v103 )
    {
      v117 = v151.m128i_i64[1];
      sub_16669E0(v151.m128i_i64[1] + 24);
      v103 = *(_QWORD *)(v117 + 32);
    }
    v104 = sub_166A700(v103, (unsigned int)&v154, 1, v100, v101, v102);
    v105 = qword_1C7F2C0;
    v106 = v104;
    sub_182CBA0(qword_1C7F2C0, &v154);
    sub_182CBA0(v105, &v156);
    sub_13333D0(*(_QWORD *)(v151.m128i_i64[1] + 784), *(_QWORD *)(v140 + 16), v106, v107, v108, v109);
    *v134 = _mm_loadh_ps((const double *)(v151.m128i_i64[1] + 16));
    if ( v106 )
      ++*(_DWORD *)(v106 + 8);
    return v134;
  }
  v8 = nullptr;
  if ( v150 )
  {
    v154 = 0;
    v155 = 0;
    v156 = 1;
    v88 = qword_1C7F2C0;
    v157 = 0;
    if ( v150 < 0 )
    {
      v151.m128i_i64[0] = (__int64)qword_1C7F2C0;
      sub_1830C40(qword_1C7F2C0, &v154, (unsigned int)v150);
      v88 = (void *)v151.m128i_i64[0];
    }
    else
    {
      LODWORD(v154) = v150;
    }
    sub_182CBA0(v88, &v156);
    BYTE4(v156) &= ~1u;
    LODWORD(v156) = 1;
    v92 = *(_QWORD *)(v151.m128i_i64[1] + 32);
    if ( !v92 )
    {
      v118 = v151.m128i_i64[1];
      sub_16669E0(v151.m128i_i64[1] + 24);
      v92 = *(_QWORD *)(v118 + 32);
    }
    v93 = sub_166A700(v92, (unsigned int)&v154, 1, v89, v90, v91);
    v94 = qword_1C7F2C0;
    v151.m128i_i64[0] = v93;
    sub_182CBA0(qword_1C7F2C0, &v154);
    sub_182CBA0(v94, &v156);
    v95 = v151.m128i_i64[0];
    if ( v151.m128i_i64[0] )
      ++*(_DWORD *)(v151.m128i_i64[0] + 8);
    v151.m128i_i64[0] = v95;
    v96 = (_QWORD *)sub_186B270(0x18u);
    v53 = v151.m128i_i64[0];
    v8 = v96 + 1;
    v97 = v149;
    v96[1] = v151.m128i_i64[0];
    *v96 = 0x100000002LL;
    if ( v150 >= v97 )
    {
      v16 = 0;
      v52 = *(_QWORD *)(v151.m128i_i64[1] + 24);
LABEL_40:
      if ( *(_WORD *)(v53 + 4) )
        goto LABEL_41;
      goto LABEL_42;
    }
  }
  v151.m128i_i64[0] = 0;
  LODWORD(v125) = v151.m128i_i32[2] + 24;
  while ( 1 )
  {
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(v151.m128i_i64[1] + 16)) )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      v120 = (const char *)sub_1829130(*(_QWORD *)(v151.m128i_i64[1] + 16));
      sub_C418A0(&v154, v120);
      *exception = (char *)off_1C63670;
      sub_2333C0(exception + 1, &v154);
      sub_233E40((__int64)&v154);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    v11 = *(_QWORD *)(v151.m128i_i64[1] + 16);
    v12 = sub_15E3D10(
            v11,
            (unsigned int)*(_QWORD *)(v140 + 16) + 16,
            (int)&qword_18D6CD0,
            0,
            0,
            *(_QWORD *)(v11 + 840),
            1,
            v124,
            v125,
            v127,
            v129,
            (int)v131,
            (int)v134,
            v136,
            v11,
            v140,
            v142,
            v146,
            *(_QWORD *)(v140 + 16),
            v149,
            v151.m128i_i32[0],
            v151.m128i_i32[2],
            v152,
            v153,
            v154,
            v155,
            v156,
            v157,
            v158,
            v159,
            v160,
            v161);
    v15 = sub_15DC610(v11, v12, 0, 0, v13, v14, v126, v128, v130, v132, v135, v137, v138, v141, v143, v147);
    v16 = v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    if ( v151.m128i_i64[0] )
    {
      v17 = sub_15E1B70(*(_QWORD *)(v151.m128i_i64[1] + 16));
      v18 = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      v19 = *(_QWORD **)(v136 + 8);
      if ( v19 )
      {
        v20 = *((_DWORD *)v19 - 1);
        if ( v20 == *((_DWORD *)v19 - 2) )
        {
          v83 = (3 * v20 + 1) >> 1;
          v84 = 8 * v83 + 8;
          if ( 8 * v20 + 8 >= (unsigned int)v84 || v20 >= v83 )
          {
            v122 = (char **)__cxa_allocate_exception(0x28u);
            sub_C418A0(&v154, "Overflow encountered when expanding vector");
            *v122 = (char *)off_1C63128;
            sub_2333C0(v122 + 1, &v154);
            sub_233E40((__int64)&v154);
            __cxa_throw(v122, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v85 = (unsigned int *)sub_186B300(v19 - 1, v84);
          v19 = v85 + 2;
          *v85 = v83;
          *(_QWORD *)(v136 + 8) = v85 + 2;
          LODWORD(v85) = v85[1];
          v23 = &v19[(unsigned int)v85];
          v22 = (_DWORD)v85 + 1;
        }
        else
        {
          v21 = v20;
          v22 = v20 + 1;
          v23 = &v19[v21];
        }
      }
      else
      {
        v110 = (_QWORD *)sub_186B270(0x18u);
        v19 = v110 + 1;
        *v110 = 2;
        v23 = v110 + 1;
        *(_QWORD *)(v136 + 8) = v110 + 1;
        v22 = 1;
      }
      *v23 = v18;
      *((_DWORD *)v19 - 1) = v22;
    }
    v24 = v151.m128i_i64[1];
    v154 = 0;
    v155 = 0;
    v25 = *(_QWORD *)(v151.m128i_i64[1] + 16);
    v156 = 1;
    v157 = 0;
    *(_QWORD *)v148 = v25;
    sub_182CBA0(qword_1C7F2C0, &v156);
    v29 = *(_QWORD *)(v24 + 32);
    BYTE4(v156) &= ~1u;
    LODWORD(v156) = 1;
    if ( !v29 )
    {
      sub_16669E0(v125);
      v29 = *(_QWORD *)(v151.m128i_i64[1] + 32);
    }
    LODWORD(v146) = sub_166A700(v29, (unsigned int)&v154, 1, v26, v27, v28);
    v144 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v154);
    sub_182CBA0(v144, &v156);
    v154 = 1;
    v155 = 0;
    v156 = 1;
    v157 = 0;
    sub_182CBA0(qword_1C7F2C0, &v156);
    BYTE4(v156) &= ~1u;
    LODWORD(v156) = 1;
    v33 = *(_QWORD *)(v151.m128i_i64[1] + 32);
    if ( !v33 )
    {
      sub_16669E0(v125);
      v33 = *(_QWORD *)(v151.m128i_i64[1] + 32);
    }
    v34 = sub_166A700(v33, (unsigned int)&v154, 1, v30, v31, v32);
    v35 = qword_1C7F2C0;
    v142 = v34;
    sub_182CBA0(qword_1C7F2C0, &v154);
    sub_182CBA0(v35, &v156);
    v36 = sub_15E1BF0(v148[0]);
    v37 = v36;
    if ( v36 )
      ++*(_DWORD *)(v36 + 8);
    if ( v8 )
    {
      v38 = *((_DWORD *)v8 - 1);
      if ( v38 == *((_DWORD *)v8 - 2) )
      {
        v79 = (3 * v38 + 1) >> 1;
        v80 = 8 * v79 + 8;
        if ( 8 * v38 + 8 >= (unsigned int)v80 || v38 >= v79 )
        {
          v123 = (char **)__cxa_allocate_exception(0x28u);
          sub_C418A0(&v154, "Overflow encountered when expanding vector");
          *v123 = (char *)off_1C63128;
          sub_2333C0(v123 + 1, &v154);
          sub_233E40((__int64)&v154);
          __cxa_throw(v123, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v81 = (unsigned int *)sub_186B300(v8 - 1, v80);
        v82 = v81[1];
        v8 = v81 + 2;
        *v81 = v79;
        LODWORD(v81) = v82;
        v41 = &v8[v82];
        v40 = (_DWORD)v81 + 1;
      }
      else
      {
        v39 = v38;
        v40 = v38 + 1;
        v41 = &v8[v39];
      }
    }
    else
    {
      v99 = (_QWORD *)sub_186B270(0x18u);
      v8 = v99 + 1;
      *v99 = 2;
      v40 = 1;
      v41 = v8;
    }
    *v41 = v37;
    v42 = *(_QWORD *)(v16 + 16);
    *((_DWORD *)v8 - 1) = v40;
    v43 = *(_QWORD *)(v151.m128i_i64[1] + 784);
    *(_QWORD *)v148 = *(_QWORD *)(v43 + 32);
    if ( v42 )
      ++*(_DWORD *)(v42 + 8);
    v44 = *(__m128 **)(v43 + 72);
    if ( v44 )
    {
      v45 = v44[-1].m128_u32[3];
      if ( v45 == v44[-1].m128_i32[2] )
      {
        v59 = (3 * v45 + 1) >> 1;
        v60 = 40 * v59 + 8;
        if ( 40 * v45 + 8 >= (unsigned int)v60 || v45 >= v59 )
        {
          v121 = (char **)__cxa_allocate_exception(0x28u);
          sub_C418A0(&v154, "Overflow encountered when expanding vector");
          *v121 = (char *)off_1C63128;
          sub_2333C0(v121 + 1, &v154);
          sub_233E40((__int64)&v154);
          __cxa_throw(v121, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v142 = (3 * v45 + 1) >> 1;
        v146 = v43;
        v61 = sub_186B270(v60);
        v62 = v146;
        v63 = v142;
        v86 = (_DWORD *)v61;
        v44 = (__m128 *)(v61 + 8);
        v64 = *(_QWORD **)(v146 + 72);
        if ( v64 )
        {
          v65 = *((unsigned int *)v64 - 1);
          v66 = v61 + 8;
          *(_DWORD *)(v61 + 4) = v65;
          v67 = &v64[5 * v65];
          for ( i = v64; v67 != i; *(_DWORD *)(v66 - 8) = *((_DWORD *)i - 2) )
          {
            v69 = i[1];
            i += 5;
            v66 += 40;
            *(_QWORD *)(v66 - 32) = v69;
            v70 = *(i - 5);
            *(i - 5) = 0;
            *(_QWORD *)(v66 - 40) = v70;
            *(_QWORD *)(v66 - 16) = *(i - 2);
            v71 = *(i - 3);
            *(i - 3) = 0;
            *(_QWORD *)(v66 - 24) = v71;
          }
          if ( (_DWORD)v65 )
          {
            v145 = v16;
            v72 = v64;
            v73 = (__int64)&v64[5 * v65];
            v74 = v63;
            v133 = v86;
            v129 = v151.m128i_i64[1];
            v151.m128i_i64[1] = v73;
            do
            {
              while ( 1 )
              {
                v77 = v72[2];
                if ( v77 )
                {
                  v78 = v72[3];
                  v7 = (*(_DWORD *)(v77 + 8))-- == 1;
                  if ( v7 )
                    sub_15D7BC0(v78, v77);
                }
                v75 = *v72;
                if ( *v72 )
                {
                  v76 = v72[1];
                  v7 = (*(_DWORD *)(v75 + 8))-- == 1;
                  if ( v7 )
                    break;
                }
                v72 += 5;
                if ( v72 == (__int64 *)v151.m128i_i64[1] )
                  goto LABEL_72;
              }
              sub_15D7BC0(v76, v75);
              v72 += 5;
            }
            while ( v72 != (__int64 *)v151.m128i_i64[1] );
LABEL_72:
            v62 = v146;
            v63 = v74;
            v16 = v145;
            v86 = v133;
            v151.m128i_i64[1] = v129;
            v64 = *(_QWORD **)(v146 + 72);
          }
          v131 = v86;
          v142 = v63;
          v146 = v62;
          sub_186B220(v64 - 1);
          v86 = v131;
          v62 = v146;
          v48 = (__m128 *)((char *)v44 + 40 * (unsigned int)v131[1]);
          v47 = v131[1] + 1;
        }
        else
        {
          *(_DWORD *)(v61 + 4) = 0;
          v48 = (__m128 *)(v61 + 8);
          v47 = 1;
        }
        *(_QWORD *)(v62 + 72) = v44;
        *v86 = v63;
      }
      else
      {
        v46 = v45;
        v47 = v45 + 1;
        v48 = (__m128 *)((char *)v44 + 40 * v46);
      }
    }
    else
    {
      v146 = v43;
      v98 = (_QWORD *)sub_186B270(0x58u);
      v44 = (__m128 *)(v98 + 1);
      *v98 = 2;
      v47 = 1;
      v48 = v44;
      *(_QWORD *)(v146 + 72) = v44;
    }
    v49 = *(_QWORD *)v148;
    v48[1].m128_u64[0] = 0;
    v50 = _mm_loadh_ps((const double *)v148);
    v48[2].m128_i32[0] = 0;
    v48[1].m128_u64[1] = v49;
    *v48 = v50;
    v44[-1].m128_i32[3] = v47;
    if ( v16 != v151.m128i_i64[0] )
      break;
    v51 = *(_DWORD *)(v16 + 8) - 1;
    *(_DWORD *)(v16 + 8) = v51;
    if ( !v51 )
      goto LABEL_37;
LABEL_9:
    if ( ++v150 >= v149 )
      goto LABEL_38;
LABEL_10:
    v151.m128i_i64[0] = v16;
  }
  v9 = v151.m128i_i64[0];
  if ( v151.m128i_i64[0] )
  {
    v148[0] = *(_DWORD *)(v151.m128i_i64[0] + 8);
    v7 = v148[0] == 1;
    *(_DWORD *)(v151.m128i_i64[0] + 8) = v148[0] - 1;
    if ( v7 )
      sub_15D7BC0(v127, v9);
  }
  v10 = *(_DWORD *)(v16 + 8);
  *(_DWORD *)(v16 + 8) = v10;
  if ( v10 )
    goto LABEL_9;
LABEL_37:
  sub_15D7BC0(v139, v16);
  if ( ++v150 < v149 )
    goto LABEL_10;
LABEL_38:
  v52 = *(_QWORD *)(v151.m128i_i64[1] + 24);
  if ( *((_DWORD *)v8 - 1) == 1 )
  {
    v53 = *v8;
    goto LABEL_40;
  }
LABEL_41:
  v53 = sub_15E1AF0(v52);
LABEL_42:
  v151.m128i_i64[0] = v53;
  sub_13333D0(*(_QWORD *)(v151.m128i_i64[1] + 784), *(_QWORD *)(v140 + 16), v53, v53, (_DWORD)v86, v87);
  v54 = v151.m128i_i64[0];
  *v134 = _mm_loadh_ps((const double *)(v151.m128i_i64[1] + 16));
  if ( v54 )
    ++*(_DWORD *)(v54 + 8);
  if ( v16 )
  {
    v7 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v127, v16);
  }
  v55 = v8;
  if ( v8 < &v8[*((unsigned int *)v8 - 1)] )
  {
    v56 = &v8[*((unsigned int *)v8 - 1)];
    do
    {
      while ( 1 )
      {
        v57 = *v55;
        if ( *v55 )
        {
          v7 = (*(_DWORD *)(v57 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v55 >= v56 )
          goto LABEL_53;
      }
      ++v55;
      sub_15D7BC0(v127, v57);
    }
    while ( v55 < v56 );
  }
LABEL_53:
  sub_186B220(v8 - 1);
  return v134;
}

