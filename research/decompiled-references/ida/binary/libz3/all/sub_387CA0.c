__int64 __fastcall sub_387CA0(__int64 a1, __int64 a2)
{
  _QWORD *exception; // r12
  _QWORD *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // r12
  _QWORD *v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // r12
  _QWORD *v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // r12
  _QWORD *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // r12
  _QWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  _QWORD *v20; // r13
  _QWORD *v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // r12
  _QWORD *v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rbp
  _QWORD *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rdx
  _QWORD *v31; // r12
  _QWORD *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  _QWORD *v37; // r12
  _QWORD *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbp
  unsigned int *v46; // rax
  unsigned int *v47; // r12
  _DWORD *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rbp
  unsigned int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rbp
  unsigned int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rbp
  unsigned int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rbp
  unsigned int v60; // eax
  __int64 v61; // rax
  __int64 v62; // r15
  unsigned int v63; // eax
  __int64 v64; // rax
  __int64 v65; // r13
  unsigned int v66; // eax
  __int64 v67; // rax
  __int64 v68; // r14
  unsigned int v69; // eax
  __int64 v70; // r13
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // r13
  unsigned int v75; // eax
  unsigned int v76; // r12d
  __m128i v77; // xmm2
  __m128i si128; // xmm1
  int v79; // ecx
  int v80; // r8d
  int v81; // r9d
  __int64 v82; // r14
  unsigned int v83; // eax
  unsigned int v84; // ecx
  size_t v85; // rsi
  _DWORD *v86; // rax
  __int64 v87; // rbp
  unsigned int v88; // eax
  __int64 v89; // rdi
  __int64 v90; // rbp
  unsigned int v92; // r13d
  unsigned int v93; // edx
  unsigned int *v94; // rax
  unsigned int v95; // r12d
  unsigned int v96; // edx
  unsigned int *v97; // rax
  unsigned int v98; // r14d
  unsigned int v99; // edx
  unsigned int *v100; // rax
  unsigned int v101; // r8d
  unsigned int v102; // edx
  unsigned int v103; // edx
  unsigned int v104; // ecx
  unsigned int v105; // ecx
  size_t v106; // rsi
  unsigned int v107; // edx
  unsigned int v108; // ecx
  unsigned int v109; // r15d
  unsigned int *v110; // rax
  unsigned int v111; // edx
  unsigned int v112; // ecx
  unsigned int v113; // r15d
  unsigned int *v114; // rax
  unsigned int v115; // r14d
  unsigned int v116; // edx
  unsigned int *v117; // rax
  void *v119[2]; // [rsp+10h] [rbp-D8h] BYREF
  void *v120; // [rsp+20h] [rbp-C8h]
  void *v121; // [rsp+28h] [rbp-C0h]
  void *v122; // [rsp+30h] [rbp-B8h]
  unsigned int v123; // [rsp+3Ch] [rbp-ACh]
  char v124[8]; // [rsp+48h] [rbp-A0h] BYREF
  char v125[8]; // [rsp+50h] [rbp-98h] BYREF
  char v126[8]; // [rsp+58h] [rbp-90h] BYREF
  char v127[8]; // [rsp+60h] [rbp-88h] BYREF
  char v128[8]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v129; // [rsp+70h] [rbp-78h] BYREF
  __m128i v130; // [rsp+80h] [rbp-68h]
  _QWORD *v131; // [rsp+90h] [rbp-58h] BYREF
  __int64 v132; // [rsp+98h] [rbp-50h]
  _QWORD v133[9]; // [rsp+A0h] [rbp-48h] BYREF

  v121 = &v131;
  sub_1858590(&v131, a2);
  sub_1862300(&v131, "simple_check", 1);
  v42 = sub_EE4EC0(&v131, "simple_check");
  v43 = sub_77C950(a1, (unsigned int)&v131);
  v44 = sub_EE7A70(v43, v42);
  v45 = sub_EE8DB0(v44, 10000);
  v46 = (unsigned int *)sub_186B270(0x18u);
  *((_QWORD *)v46 + 1) = v45;
  v47 = v46;
  v48 = v46 + 2;
  *(_QWORD *)v46 = 0x100000002LL;
  sub_18572D0(&v131);
  v120 = v124;
  sub_1858590(v124, a2);
  v49 = sub_77C950(a1, (unsigned int)v124);
  v50 = sub_EE8DB0(v49, 4000);
  v51 = v47[1];
  if ( v51 == *v47 )
  {
    v92 = (3 * v51 + 1) >> 1;
    v93 = 8 * v92 + 8;
    if ( 8 * v51 + 8 >= v93 || v51 >= v92 )
    {
      exception = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v121, "Overflow encountered when expanding vector");
      v3 = v131;
      exception[1] = exception + 3;
      v4 = v132;
      *exception = off_1C63128;
      if ( v3 == v133 )
      {
        qmemcpy(exception + 3, v133, (unsigned int)(v4 + 1));
      }
      else
      {
        v34 = v133[0];
        exception[1] = v3;
        exception[3] = v34;
      }
      exception[2] = v4;
      v131 = v133;
      v132 = 0;
      LOBYTE(v133[0]) = 0;
      sub_233E40((__int64)v121);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v94 = (unsigned int *)sub_186B300(v47, v93);
    *v94 = v92;
    v47 = v94;
    v48 = v94 + 2;
    v51 = v94[1];
  }
  *(_QWORD *)&v48[2 * v51] = v50;
  *(v48 - 1) = v51 + 1;
  v119[0] = v125;
  sub_1858590(v125, a2);
  sub_1862370(v125, "variable_ordering_strategy", 4);
  v52 = sub_77C950(a1, (unsigned int)v125);
  v53 = sub_EE8DB0(v52, 4000);
  v54 = *(v48 - 1);
  if ( v54 == *(v48 - 2) )
  {
    v115 = (3 * v54 + 1) >> 1;
    v116 = 8 * v115 + 8;
    if ( 8 * v54 + 8 >= v116 || v54 >= v115 )
    {
      v31 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v121, "Overflow encountered when expanding vector");
      v32 = v131;
      v31[1] = v31 + 3;
      v33 = v132;
      *v31 = off_1C63128;
      if ( v32 == v133 )
      {
        qmemcpy(v31 + 3, v133, (unsigned int)(v33 + 1));
      }
      else
      {
        v36 = v133[0];
        v31[1] = v32;
        v31[3] = v36;
      }
      v31[2] = v33;
      v131 = v133;
      v132 = 0;
      LOBYTE(v133[0]) = 0;
      sub_233E40((__int64)v121);
      __cxa_throw(v31, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v117 = (unsigned int *)sub_186B300(v47, v116);
    *v117 = v115;
    v47 = v117;
    v48 = v117 + 2;
    v54 = v117[1];
  }
  *(_QWORD *)&v48[2 * v54] = v53;
  *(v48 - 1) = v54 + 1;
  sub_1858590(v126, a2);
  sub_1862370(v126, "variable_ordering_strategy", 3);
  v55 = sub_77C950(a1, (unsigned int)v126);
  v56 = sub_EE8DB0(v55, 6000);
  v57 = *(v48 - 1);
  if ( v57 == *(v48 - 2) )
  {
    v111 = (3 * v57 + 1) >> 1;
    v112 = 8 * v111 + 8;
    v113 = v111;
    if ( 8 * v57 + 8 >= v112 || v57 >= v111 )
    {
      v23 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v121, "Overflow encountered when expanding vector");
      v24 = v131;
      v23[1] = v23 + 3;
      v25 = v132;
      *v23 = off_1C63128;
      if ( v24 == v133 )
      {
        qmemcpy(v23 + 3, v133, (unsigned int)(v25 + 1));
      }
      else
      {
        v29 = v133[0];
        v23[1] = v24;
        v23[3] = v29;
      }
      v23[2] = v25;
      v131 = v133;
      v132 = 0;
      LOBYTE(v133[0]) = 0;
      sub_233E40((__int64)v121);
      __cxa_throw(v23, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v114 = (unsigned int *)sub_186B300(v47, v112);
    *v114 = v113;
    v47 = v114;
    v48 = v114 + 2;
    v57 = v114[1];
  }
  *(_QWORD *)&v48[2 * v57] = v56;
  *(v48 - 1) = v57 + 1;
  v122 = v127;
  sub_1858590(v127, a2);
  sub_1862370(v127, "variable_ordering_strategy", 1);
  v58 = sub_77C950(a1, (unsigned int)v127);
  v59 = sub_EE8DB0(v58, 8000);
  v60 = *(v48 - 1);
  if ( v60 == *(v48 - 2) )
  {
    v107 = (3 * v60 + 1) >> 1;
    v108 = 8 * v107 + 8;
    v109 = v107;
    if ( 8 * v60 + 8 >= v108 || v60 >= v107 )
    {
      v26 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v121, "Overflow encountered when expanding vector");
      v27 = v131;
      v26[1] = v26 + 3;
      v28 = v132;
      *v26 = off_1C63128;
      if ( v27 == v133 )
      {
        qmemcpy(v26 + 3, v133, (unsigned int)(v28 + 1));
      }
      else
      {
        v30 = v133[0];
        v26[1] = v27;
        v26[3] = v30;
      }
      v26[2] = v28;
      v131 = v133;
      v132 = 0;
      LOBYTE(v133[0]) = 0;
      sub_233E40((__int64)v121);
      __cxa_throw(v26, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v110 = (unsigned int *)sub_186B300(v47, v108);
    *v110 = v109;
    v47 = v110;
    v48 = v110 + 2;
    v60 = v110[1];
  }
  *(_QWORD *)&v48[2 * v60] = v59;
  *(v48 - 1) = v60 + 1;
  sub_1858590(v128, a2);
  sub_1862370(v128, "variable_ordering_strategy", 5);
  v61 = sub_77C950(a1, (unsigned int)v128);
  v62 = sub_EE8DB0(v61, 8000);
  v63 = *(v48 - 1);
  if ( v63 == *(v48 - 2) )
  {
    v105 = (3 * v63 + 1) >> 1;
    v106 = 8 * v105 + 8;
    if ( 8 * v63 + 8 >= (unsigned int)v106 || v63 >= v105 )
    {
      v14 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v121, "Overflow encountered when expanding vector");
      v15 = v131;
      v14[1] = v14 + 3;
      v16 = v132;
      *v14 = off_1C63128;
      if ( v15 == v133 )
      {
        qmemcpy(v14 + 3, v133, (unsigned int)(v16 + 1));
      }
      else
      {
        v41 = v133[0];
        v14[1] = v15;
        v14[3] = v41;
      }
      v14[2] = v16;
      v131 = v133;
      v132 = 0;
      LOBYTE(v133[0]) = 0;
      sub_233E40((__int64)v121);
      __cxa_throw(v14, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v123 = (3 * v63 + 1) >> 1;
    v47 = (unsigned int *)sub_186B300(v47, v106);
    v48 = v47 + 2;
    *v47 = v123;
    v63 = v47[1];
  }
  *(_QWORD *)&v48[2 * v63] = v62;
  *(v48 - 1) = v63 + 1;
  sub_1858590(&v129, a2);
  sub_1862370(&v129, "variable_ordering_strategy", 2);
  v64 = sub_77C950(a1, (unsigned int)&v129);
  v65 = sub_EE8DB0(v64, 10000);
  v66 = *(v48 - 1);
  if ( v66 == *(v48 - 2) )
  {
    v103 = (3 * v66 + 1) >> 1;
    v104 = 8 * v103 + 8;
    if ( 8 * v66 + 8 >= v104 || v66 >= v103 )
    {
      v11 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v121, "Overflow encountered when expanding vector");
      v12 = v131;
      v11[1] = v11 + 3;
      v13 = v132;
      *v11 = off_1C63128;
      if ( v12 == v133 )
      {
        qmemcpy(v11 + 3, v133, (unsigned int)(v13 + 1));
      }
      else
      {
        v19 = v133[0];
        v11[1] = v12;
        v11[3] = v19;
      }
      v11[2] = v13;
      v132 = 0;
      v131 = v133;
      LOBYTE(v133[0]) = 0;
      sub_233E40((__int64)v121);
      __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v123 = (3 * v66 + 1) >> 1;
    v47 = (unsigned int *)sub_186B300(v47, v104);
    v48 = v47 + 2;
    *v47 = v123;
    v66 = v47[1];
  }
  *(_QWORD *)&v48[2 * v66] = v65;
  *(v48 - 1) = v66 + 1;
  sub_18572D0(&v129);
  sub_18572D0(v128);
  sub_18572D0(v122);
  sub_18572D0(v126);
  sub_18572D0(v119[0]);
  sub_18572D0(v120);
  sub_1858590(&v129, a2);
  sub_1862300(&v129, "use_ls", 1);
  sub_1862370(&v129, "ls_time", 60);
  v131 = nullptr;
  v67 = sub_388500(a1, v121);
  v68 = sub_EE8E00(v67, &v129);
  sub_18572D0(v121);
  sub_18572D0(&v129);
  v69 = *(v48 - 1);
  if ( v69 == *(v48 - 2) )
  {
    v101 = (3 * v69 + 1) >> 1;
    v102 = 8 * v101 + 8;
    if ( 8 * v69 + 8 >= v102 || v69 >= v101 )
    {
      v8 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v121, "Overflow encountered when expanding vector");
      v9 = v131;
      v8[1] = v8 + 3;
      v10 = v132;
      *v8 = off_1C63128;
      if ( v9 == v133 )
      {
        qmemcpy(v8 + 3, v133, (unsigned int)(v10 + 1));
      }
      else
      {
        v18 = v133[0];
        v8[1] = v9;
        v8[3] = v18;
      }
      v8[2] = v10;
      v132 = 0;
      v131 = v133;
      LOBYTE(v133[0]) = 0;
      sub_233E40((__int64)v121);
      __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    LODWORD(v119[0]) = (3 * v69 + 1) >> 1;
    v47 = (unsigned int *)sub_186B300(v47, v102);
    v48 = v47 + 2;
    *v47 = (unsigned int)v119[0];
    v69 = v47[1];
  }
  *(_QWORD *)&v48[2 * v69] = v68;
  *(v48 - 1) = v69 + 1;
  sub_1858590(v128, a2);
  sub_1862300(v128, "arith.greatest_error_pivot", 1);
  v70 = sub_EE4EC0(v128, "arith.greatest_error_pivot");
  *(_QWORD *)&v129 = 0;
  v71 = sub_388500(a1, &v129);
  v72 = sub_EE8E00(v71, v128);
  v73 = sub_EE8DB0(v72, 300000);
  v74 = sub_EE7A70(v73, v70);
  v75 = *(v48 - 1);
  if ( v75 == *(v48 - 2) )
  {
    v98 = (3 * v75 + 1) >> 1;
    v99 = 8 * v98 + 8;
    if ( 8 * v75 + 8 >= v99 || v75 >= v98 )
    {
      v20 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v121, "Overflow encountered when expanding vector");
      v21 = v131;
      v20[1] = v20 + 3;
      v22 = v132;
      *v20 = off_1C63128;
      if ( v21 == v133 )
      {
        qmemcpy(v20 + 3, v133, (unsigned int)(v22 + 1));
      }
      else
      {
        v35 = v133[0];
        v20[1] = v21;
        v20[3] = v35;
      }
      v20[2] = v22;
      v131 = v133;
      v132 = 0;
      LOBYTE(v133[0]) = 0;
      sub_233E40((__int64)v121);
      __cxa_throw(v20, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v100 = (unsigned int *)sub_186B300(v47, v99);
    *v100 = v98;
    v48 = v100 + 2;
    v75 = v100[1];
  }
  v76 = 0;
  v77 = _mm_loadl_epi64((const __m128i *)&off_1C4DD38);
  *(_QWORD *)&v48[2 * v75] = v74;
  *(v48 - 1) = v75 + 1;
  *(__m128i *)v119 = _mm_unpacklo_epi64(v77, (__m128i)(unsigned __int64)sub_385BA0);
  sub_18572D0(&v129);
  sub_18572D0(v128);
  do
  {
    sub_1858590(v128, a2);
    sub_1862370(v128, "seed", v76);
    sub_1862300(v128, "shuffle_vars", 1);
    si128 = _mm_load_si128((const __m128i *)v119);
    v129 = 0;
    v130 = si128;
    v82 = sub_EE4D00(a1, (unsigned int)v128, (unsigned int)&v129, v79, v80, v81);
    v83 = *(v48 - 1);
    if ( v83 == *(v48 - 2) )
    {
      v84 = (3 * v83 + 1) >> 1;
      v85 = 8 * v84 + 8;
      if ( 8 * v83 + 8 >= (unsigned int)v85 || v83 >= v84 )
      {
        v37 = __cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v121, "Overflow encountered when expanding vector");
        v38 = v131;
        v37[1] = v37 + 3;
        v39 = v132;
        *v37 = off_1C63128;
        if ( v38 == v133 )
        {
          qmemcpy(v37 + 3, v133, (unsigned int)(v39 + 1));
        }
        else
        {
          v40 = v133[0];
          v37[1] = v38;
          v37[3] = v40;
        }
        v37[2] = v39;
        v132 = 0;
        v131 = v133;
        LOBYTE(v133[0]) = 0;
        sub_233E40((__int64)v121);
        __cxa_throw(v37, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v120) = (3 * v83 + 1) >> 1;
      v86 = (_DWORD *)sub_186B300(v48 - 2, v85);
      v48 = v86 + 2;
      *v86 = (_DWORD)v120;
      v83 = v86[1];
    }
    *(_QWORD *)&v48[2 * v83] = v82;
    *(v48 - 1) = v83 + 1;
    if ( v130.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v130.m128i_i64[0])(&v129, &v129, 3);
    ++v76;
    sub_18572D0(v128);
  }
  while ( v76 != 200 );
  v87 = sub_77C950(a1, a2);
  v88 = *(v48 - 1);
  if ( v88 == *(v48 - 2) )
  {
    v95 = (3 * v88 + 1) >> 1;
    v96 = 8 * v95 + 8;
    if ( 8 * v88 + 8 >= v96 || v88 >= v95 )
    {
      v5 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v121, "Overflow encountered when expanding vector");
      v6 = v131;
      v5[1] = v5 + 3;
      v7 = v132;
      *v5 = off_1C63128;
      if ( v6 == v133 )
      {
        qmemcpy(v5 + 3, v133, (unsigned int)(v7 + 1));
      }
      else
      {
        v17 = v133[0];
        v5[1] = v6;
        v5[3] = v17;
      }
      v5[2] = v7;
      v131 = v133;
      v132 = 0;
      LOBYTE(v133[0]) = 0;
      sub_233E40((__int64)v121);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v97 = (unsigned int *)sub_186B300(v48 - 2, v96);
    *v97 = v95;
    v48 = v97 + 2;
    v88 = v97[1];
  }
  v89 = v88 + 1;
  *(_QWORD *)&v48[2 * v88] = v87;
  *(v48 - 1) = v89;
  v90 = sub_EEA210(v89, v48);
  sub_186B220(v48 - 2);
  return v90;
}

