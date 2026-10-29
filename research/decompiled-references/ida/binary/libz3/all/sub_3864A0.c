__int64 __fastcall sub_3864A0(__int64 a1, __int64 a2)
{
  _QWORD *exception; // rbp
  _QWORD *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // r13
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // r13
  _QWORD *v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // r13
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rbp
  _QWORD *v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rbp
  _QWORD *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rdx
  _QWORD *v26; // rbp
  _QWORD *v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // r14
  _QWORD *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  _QWORD *v33; // rbp
  _QWORD *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbp
  unsigned int *v43; // rax
  unsigned int *v44; // r13
  _DWORD *v45; // rbx
  __int64 v46; // rax
  __int64 v47; // r12
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // r12
  unsigned int v51; // eax
  __int64 v52; // rax
  __int64 v53; // r12
  unsigned int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r12
  unsigned int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rbp
  unsigned int v60; // eax
  __int64 v61; // rax
  unsigned int v62; // eax
  __int64 v63; // rbp
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rbp
  unsigned int v68; // eax
  unsigned int v69; // r13d
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned int v72; // eax
  unsigned int v73; // ecx
  size_t v74; // rsi
  unsigned int *v75; // rax
  __int64 v76; // rax
  unsigned int v77; // edi
  __int64 v78; // r13
  __int64 v79; // rax
  __int64 v80; // rdi
  __int64 v81; // rbp
  unsigned int v83; // edx
  size_t v84; // rsi
  unsigned int v85; // r14d
  size_t v86; // rsi
  unsigned int *v87; // rax
  unsigned int v88; // edx
  size_t v89; // rsi
  unsigned int *v90; // rax
  unsigned int v91; // edx
  size_t v92; // rsi
  unsigned int v93; // edx
  size_t v94; // rsi
  unsigned int v95; // edx
  size_t v96; // rsi
  unsigned int v97; // edx
  size_t v98; // rsi
  unsigned int v99; // edx
  size_t v100; // rsi
  void *v101; // [rsp+0h] [rbp-B8h]
  unsigned int v102; // [rsp+0h] [rbp-B8h]
  unsigned int v103; // [rsp+0h] [rbp-B8h]
  unsigned int v104; // [rsp+0h] [rbp-B8h]
  void *v105; // [rsp+8h] [rbp-B0h]
  unsigned int v106; // [rsp+8h] [rbp-B0h]
  unsigned int v107; // [rsp+10h] [rbp-A8h]
  unsigned int v108; // [rsp+20h] [rbp-98h]
  unsigned int v109; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v110; // [rsp+2Ch] [rbp-8Ch]
  char v111[8]; // [rsp+38h] [rbp-80h] BYREF
  char v112[8]; // [rsp+40h] [rbp-78h] BYREF
  char v113[8]; // [rsp+48h] [rbp-70h] BYREF
  char v114[8]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v115; // [rsp+58h] [rbp-60h] BYREF
  _QWORD *v116; // [rsp+60h] [rbp-58h] BYREF
  __int64 v117; // [rsp+68h] [rbp-50h]
  _QWORD v118[9]; // [rsp+70h] [rbp-48h] BYREF

  sub_1858590(&v116, a2);
  sub_1862300(&v116, "simple_check", 1);
  v39 = sub_EE4EC0(&v116, "simple_check");
  v40 = sub_77C950(a1, (unsigned int)&v116);
  v41 = sub_EE7A70(v40, v39);
  v42 = sub_EE8DB0(v41, 50000);
  v43 = (unsigned int *)sub_186B270(0x18u);
  *((_QWORD *)v43 + 1) = v42;
  v44 = v43;
  v45 = v43 + 2;
  *(_QWORD *)v43 = 0x100000002LL;
  sub_18572D0(&v116);
  sub_1858590(v111, a2);
  sub_1862370(v111, "variable_ordering_strategy", 4);
  v46 = sub_77C950(a1, (unsigned int)v111);
  v47 = sub_EE8DB0(v46, 15000);
  v48 = v44[1];
  if ( v48 == *v44 )
  {
    v83 = (3 * v48 + 1) >> 1;
    v84 = 8 * v83 + 8;
    if ( 8 * v48 + 8 >= (unsigned int)v84 || v48 >= v83 )
    {
      exception = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v116, "Overflow encountered when expanding vector");
      v3 = v116;
      exception[1] = exception + 3;
      v4 = v117;
      *exception = off_1C63128;
      if ( v3 == v118 )
      {
        qmemcpy(exception + 3, v118, (unsigned int)(v4 + 1));
      }
      else
      {
        v8 = v118[0];
        exception[1] = v3;
        exception[3] = v8;
      }
      exception[2] = v4;
      v116 = v118;
      v117 = 0;
      LOBYTE(v118[0]) = 0;
      sub_233E40((__int64)&v116);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v102 = (3 * v48 + 1) >> 1;
    v44 = (unsigned int *)sub_186B300(v44, v84);
    v45 = v44 + 2;
    *v44 = v102;
    v48 = v44[1];
  }
  *(_QWORD *)&v45[2 * v48] = v47;
  *(v45 - 1) = v48 + 1;
  sub_1858590(v112, a2);
  sub_1862370(v112, "variable_ordering_strategy", 3);
  v49 = sub_77C950(a1, (unsigned int)v112);
  v50 = sub_EE8DB0(v49, 30000);
  v51 = *(v45 - 1);
  if ( v51 == *(v45 - 2) )
  {
    v99 = (3 * v51 + 1) >> 1;
    v100 = 8 * v99 + 8;
    if ( 8 * v51 + 8 >= (unsigned int)v100 || v51 >= v99 )
    {
      v33 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v116, "Overflow encountered when expanding vector");
      v34 = v116;
      v33[1] = v33 + 3;
      v35 = v117;
      *v33 = off_1C63128;
      if ( v34 == v118 )
      {
        qmemcpy(v33 + 3, v118, (unsigned int)(v35 + 1));
      }
      else
      {
        v36 = v118[0];
        v33[1] = v34;
        v33[3] = v36;
      }
      v33[2] = v35;
      v116 = v118;
      v117 = 0;
      LOBYTE(v118[0]) = 0;
      sub_233E40((__int64)&v116);
      __cxa_throw(v33, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v104 = (3 * v51 + 1) >> 1;
    v44 = (unsigned int *)sub_186B300(v44, v100);
    v45 = v44 + 2;
    *v44 = v104;
    v51 = v44[1];
  }
  *(_QWORD *)&v45[2 * v51] = v50;
  *(v45 - 1) = v51 + 1;
  sub_1858590(v113, a2);
  sub_1862370(v113, "variable_ordering_strategy", 1);
  v52 = sub_77C950(a1, (unsigned int)v113);
  v53 = sub_EE8DB0(v52, 40000);
  v54 = *(v45 - 1);
  if ( v54 == *(v45 - 2) )
  {
    v97 = (3 * v54 + 1) >> 1;
    v98 = 8 * v97 + 8;
    if ( 8 * v54 + 8 >= (unsigned int)v98 || v54 >= v97 )
    {
      v26 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v116, "Overflow encountered when expanding vector");
      v27 = v116;
      v26[1] = v26 + 3;
      v28 = v117;
      *v26 = off_1C63128;
      if ( v27 == v118 )
      {
        qmemcpy(v26 + 3, v118, (unsigned int)(v28 + 1));
      }
      else
      {
        v37 = v118[0];
        v26[1] = v27;
        v26[3] = v37;
      }
      v26[2] = v28;
      v116 = v118;
      v117 = 0;
      LOBYTE(v118[0]) = 0;
      sub_233E40((__int64)&v116);
      __cxa_throw(v26, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v107 = (3 * v54 + 1) >> 1;
    v44 = (unsigned int *)sub_186B300(v44, v98);
    v45 = v44 + 2;
    *v44 = v107;
    v54 = v44[1];
  }
  *(_QWORD *)&v45[2 * v54] = v53;
  *(v45 - 1) = v54 + 1;
  sub_1858590(v114, a2);
  sub_1862370(v114, "variable_ordering_strategy", 5);
  v55 = sub_77C950(a1, (unsigned int)v114);
  v56 = sub_EE8DB0(v55, 40000);
  v57 = *(v45 - 1);
  if ( v57 == *(v45 - 2) )
  {
    v95 = (3 * v57 + 1) >> 1;
    v96 = 8 * v95 + 8;
    if ( 8 * v57 + 8 >= (unsigned int)v96 || v57 >= v95 )
    {
      v21 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v116, "Overflow encountered when expanding vector");
      v22 = v116;
      v21[1] = v21 + 3;
      v23 = v117;
      *v21 = off_1C63128;
      if ( v22 == v118 )
      {
        qmemcpy(v21 + 3, v118, (unsigned int)(v23 + 1));
      }
      else
      {
        v25 = v118[0];
        v21[1] = v22;
        v21[3] = v25;
      }
      v21[2] = v23;
      v116 = v118;
      v117 = 0;
      LOBYTE(v118[0]) = 0;
      sub_233E40((__int64)&v116);
      __cxa_throw(v21, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v110 = (3 * v57 + 1) >> 1;
    v44 = (unsigned int *)sub_186B300(v44, v96);
    v45 = v44 + 2;
    *v44 = v110;
    v57 = v44[1];
  }
  *(_QWORD *)&v45[2 * v57] = v56;
  *(v45 - 1) = v57 + 1;
  sub_1858590(&v115, a2);
  sub_1862370(&v115, "variable_ordering_strategy", 2);
  v58 = sub_77C950(a1, (unsigned int)&v115);
  v59 = sub_EE8DB0(v58, 50000);
  v60 = *(v45 - 1);
  if ( v60 == *(v45 - 2) )
  {
    v93 = (3 * v60 + 1) >> 1;
    v94 = 8 * v93 + 8;
    if ( 8 * v60 + 8 >= (unsigned int)v94 || v60 >= v93 )
    {
      v18 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v116, "Overflow encountered when expanding vector");
      v19 = v116;
      v18[1] = v18 + 3;
      v20 = v117;
      *v18 = off_1C63128;
      if ( v19 == v118 )
      {
        qmemcpy(v18 + 3, v118, (unsigned int)(v20 + 1));
      }
      else
      {
        v24 = v118[0];
        v18[1] = v19;
        v18[3] = v24;
      }
      v18[2] = v20;
      v117 = 0;
      v116 = v118;
      LOBYTE(v118[0]) = 0;
      sub_233E40((__int64)&v116);
      __cxa_throw(v18, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v109 = (3 * v60 + 1) >> 1;
    v44 = (unsigned int *)sub_186B300(v44, v94);
    v45 = v44 + 2;
    *v44 = v109;
    v60 = v44[1];
  }
  *(_QWORD *)&v45[2 * v60] = v59;
  *(v45 - 1) = v60 + 1;
  sub_18572D0(&v115);
  sub_18572D0(v114);
  sub_18572D0(v113);
  sub_18572D0(v112);
  sub_18572D0(v111);
  sub_1858590(&v115, a2);
  sub_1862300(&v115, "use_ls", 1);
  sub_1862370(&v115, "ls_time", 90);
  v116 = nullptr;
  v61 = sub_388500(a1, &v116);
  v105 = (void *)sub_EE8E00(v61, &v115);
  sub_18572D0(&v116);
  sub_18572D0(&v115);
  v62 = *(v45 - 1);
  if ( v62 == *(v45 - 2) )
  {
    v91 = (3 * v62 + 1) >> 1;
    v92 = 8 * v91 + 8;
    if ( 8 * v62 + 8 >= (unsigned int)v92 || v62 >= v91 )
    {
      v13 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v116, "Overflow encountered when expanding vector");
      v14 = v116;
      v13[1] = v13 + 3;
      v15 = v117;
      *v13 = off_1C63128;
      if ( v14 == v118 )
      {
        qmemcpy(v13 + 3, v118, (unsigned int)(v15 + 1));
      }
      else
      {
        v17 = v118[0];
        v13[1] = v14;
        v13[3] = v17;
      }
      v13[2] = v15;
      v117 = 0;
      v116 = v118;
      LOBYTE(v118[0]) = 0;
      sub_233E40((__int64)&v116);
      __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v108 = (3 * v62 + 1) >> 1;
    v44 = (unsigned int *)sub_186B300(v44, v92);
    v45 = v44 + 2;
    *v44 = v108;
    v62 = v44[1];
  }
  *(_QWORD *)&v45[2 * v62] = v105;
  *(v45 - 1) = v62 + 1;
  sub_1858590(v114, a2);
  sub_1862300(v114, "arith.greatest_error_pivot", 1);
  v63 = sub_EE4EC0(v114, "arith.greatest_error_pivot");
  v115 = 0;
  v64 = sub_388500(a1, &v115);
  v65 = sub_EE8E00(v64, v114);
  v66 = sub_EE8DB0(v65, 400000);
  v67 = sub_EE7A70(v66, v63);
  v68 = *(v45 - 1);
  if ( v68 == *(v45 - 2) )
  {
    v88 = (3 * v68 + 1) >> 1;
    v89 = 8 * v88 + 8;
    if ( 8 * v68 + 8 >= (unsigned int)v89 || v68 >= v88 )
    {
      v10 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v116, "Overflow encountered when expanding vector");
      v11 = v116;
      v10[1] = v10 + 3;
      v12 = v117;
      *v10 = off_1C63128;
      if ( v11 == v118 )
      {
        qmemcpy(v10 + 3, v118, (unsigned int)(v12 + 1));
      }
      else
      {
        v16 = v118[0];
        v10[1] = v11;
        v10[3] = v16;
      }
      v10[2] = v12;
      v116 = v118;
      v117 = 0;
      LOBYTE(v118[0]) = 0;
      sub_233E40((__int64)&v116);
      __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v103 = (3 * v68 + 1) >> 1;
    v90 = (unsigned int *)sub_186B300(v44, v89);
    v45 = v90 + 2;
    *v90 = v103;
    v68 = v90[1];
  }
  v69 = 0;
  *(_QWORD *)&v45[2 * v68] = v67;
  *(v45 - 1) = v68 + 1;
  sub_18572D0(&v115);
  sub_18572D0(v114);
  do
  {
    sub_1858590(&v115, a2);
    sub_1862370(&v115, "seed", v69);
    sub_1862300(&v115, "shuffle_vars", 1);
    v70 = sub_77C950(a1, (unsigned int)&v115);
    v71 = sub_EE8DB0(v70, 20000);
    v72 = *(v45 - 1);
    if ( v72 == *(v45 - 2) )
    {
      v73 = (3 * v72 + 1) >> 1;
      v74 = 8 * v73 + 8;
      if ( 8 * v72 + 8 >= (unsigned int)v74 || v72 >= v73 )
      {
        v29 = __cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v116, "Overflow encountered when expanding vector");
        v30 = v116;
        v29[1] = v29 + 3;
        v31 = v117;
        *v29 = off_1C63128;
        if ( v30 == v118 )
        {
          qmemcpy(v29 + 3, v118, (unsigned int)(v31 + 1));
        }
        else
        {
          v32 = v118[0];
          v29[1] = v30;
          v29[3] = v32;
        }
        v29[2] = v31;
        v117 = 0;
        v116 = v118;
        LOBYTE(v118[0]) = 0;
        sub_233E40((__int64)&v116);
        __cxa_throw(v29, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v106 = (3 * v72 + 1) >> 1;
      v101 = (void *)v71;
      v75 = (unsigned int *)sub_186B300(v45 - 2, v74);
      v45 = v75 + 2;
      v71 = (__int64)v101;
      *v75 = v106;
      v72 = v75[1];
    }
    ++v69;
    *(_QWORD *)&v45[2 * v72] = v71;
    *(v45 - 1) = v72 + 1;
    sub_18572D0(&v115);
  }
  while ( v69 != 10 );
  v76 = sub_77C950(a1, a2);
  v77 = *(v45 - 1);
  v78 = v76;
  if ( v77 == *(v45 - 2) )
  {
    v85 = (3 * v77 + 1) >> 1;
    v86 = 8 * v85 + 8;
    if ( 8 * v77 + 8 >= (unsigned int)v86 || v77 >= v85 )
    {
      v5 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v116, "Overflow encountered when expanding vector");
      v6 = v116;
      v5[1] = v5 + 3;
      v7 = v117;
      *v5 = off_1C63128;
      if ( v6 == v118 )
      {
        qmemcpy(v5 + 3, v118, (unsigned int)(v7 + 1));
      }
      else
      {
        v9 = v118[0];
        v5[1] = v6;
        v5[3] = v9;
      }
      v5[2] = v7;
      v116 = v118;
      v117 = 0;
      LOBYTE(v118[0]) = 0;
      sub_233E40((__int64)&v116);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v87 = (unsigned int *)sub_186B300(v45 - 2, v86);
    *v87 = v85;
    v77 = v87[1];
    v45 = v87 + 2;
  }
  v79 = v77;
  v80 = v77 + 1;
  *(_QWORD *)&v45[2 * v79] = v78;
  *(v45 - 1) = v80;
  v81 = sub_EEA210(v80, v45);
  sub_186B220(v45 - 2);
  return v81;
}

