__int64 __fastcall sub_387480(__int64 a1, __int64 a2)
{
  _QWORD *exception; // rbp
  _QWORD *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // r13
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // rbp
  _QWORD *v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rbp
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
  _QWORD *v26; // r13
  _QWORD *v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // r13
  _QWORD *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rdx
  _QWORD *v34; // rbp
  _QWORD *v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // r14
  _QWORD *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbp
  unsigned int *v46; // rax
  unsigned int *v47; // r13
  _DWORD *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rbp
  unsigned int v51; // eax
  __int64 v52; // rax
  __int64 v53; // r12
  unsigned int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r12
  unsigned int v57; // eax
  __int64 v58; // rax
  __int64 v59; // r12
  unsigned int v60; // eax
  __int64 v61; // rax
  __int64 v62; // r12
  unsigned int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rbp
  unsigned int v66; // eax
  __int64 v67; // rax
  __int64 v68; // r14
  unsigned int v69; // eax
  __int64 v70; // rbp
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rbp
  unsigned int v75; // eax
  unsigned int v76; // r13d
  __int64 v77; // rax
  __int64 v78; // r14
  unsigned int v79; // eax
  unsigned int v80; // ecx
  size_t v81; // rsi
  unsigned int *v82; // rax
  __int64 v83; // rax
  unsigned int v84; // edi
  __int64 v85; // r13
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 v88; // rbp
  unsigned int v90; // r12d
  unsigned int v91; // edx
  unsigned int *v92; // rax
  unsigned int v93; // r14d
  unsigned int v94; // eax
  unsigned int *v95; // rax
  unsigned int v96; // r14d
  unsigned int v97; // edx
  unsigned int *v98; // rax
  unsigned int v99; // edx
  unsigned int v100; // ecx
  unsigned int v101; // edx
  unsigned int v102; // ecx
  unsigned int v103; // edx
  unsigned int v104; // ecx
  unsigned int v105; // edx
  unsigned int v106; // ecx
  unsigned int v107; // r8d
  unsigned int v108; // edx
  unsigned int v109; // r14d
  unsigned int v110; // edx
  unsigned int *v111; // rax
  unsigned int v113; // [rsp+10h] [rbp-C8h]
  unsigned int v114; // [rsp+10h] [rbp-C8h]
  unsigned int v115; // [rsp+18h] [rbp-C0h]
  unsigned int v116; // [rsp+28h] [rbp-B0h]
  unsigned int v117; // [rsp+3Ch] [rbp-9Ch]
  unsigned int v118; // [rsp+3Ch] [rbp-9Ch]
  char v119[8]; // [rsp+50h] [rbp-88h] BYREF
  char v120[8]; // [rsp+58h] [rbp-80h] BYREF
  char v121[8]; // [rsp+60h] [rbp-78h] BYREF
  char v122[8]; // [rsp+68h] [rbp-70h] BYREF
  char v123[8]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v124; // [rsp+78h] [rbp-60h] BYREF
  _QWORD *v125; // [rsp+80h] [rbp-58h] BYREF
  __int64 v126; // [rsp+88h] [rbp-50h]
  _QWORD v127[9]; // [rsp+90h] [rbp-48h] BYREF

  sub_1858590(&v125, a2);
  sub_1862300(&v125, "simple_check", 1);
  v42 = sub_EE4EC0(&v125, "simple_check");
  v43 = sub_77C950(a1, (unsigned int)&v125);
  v44 = sub_EE7A70(v43, v42);
  v45 = sub_EE8DB0(v44, 30000);
  v46 = (unsigned int *)sub_186B270(0x18u);
  *((_QWORD *)v46 + 1) = v45;
  v47 = v46;
  v48 = v46 + 2;
  *(_QWORD *)v46 = 0x100000002LL;
  sub_18572D0(&v125);
  sub_1858590(v119, a2);
  v49 = sub_77C950(a1, (unsigned int)v119);
  v50 = sub_EE8DB0(v49, 10000);
  v51 = v47[1];
  if ( v51 == *v47 )
  {
    v90 = (3 * v51 + 1) >> 1;
    v91 = 8 * v90 + 8;
    if ( 8 * v51 + 8 >= v91 || v51 >= v90 )
    {
      exception = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v125, "Overflow encountered when expanding vector");
      v3 = v125;
      exception[1] = exception + 3;
      v4 = v126;
      *exception = off_1C63128;
      if ( v3 == v127 )
      {
        qmemcpy(exception + 3, v127, (unsigned int)(v4 + 1));
      }
      else
      {
        v8 = v127[0];
        exception[1] = v3;
        exception[3] = v8;
      }
      exception[2] = v4;
      v125 = v127;
      v126 = 0;
      LOBYTE(v127[0]) = 0;
      sub_233E40((__int64)&v125);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v92 = (unsigned int *)sub_186B300(v47, v91);
    *v92 = v90;
    v47 = v92;
    v48 = v92 + 2;
    v51 = v92[1];
  }
  *(_QWORD *)&v48[2 * v51] = v50;
  *(v48 - 1) = v51 + 1;
  sub_1858590(v120, a2);
  sub_1862370(v120, "variable_ordering_strategy", 4);
  v52 = sub_77C950(a1, (unsigned int)v120);
  v53 = sub_EE8DB0(v52, 15000);
  v54 = *(v48 - 1);
  if ( v54 == *(v48 - 2) )
  {
    v109 = (3 * v54 + 1) >> 1;
    v110 = 8 * v109 + 8;
    if ( 8 * v54 + 8 >= v110 || v54 >= v109 )
    {
      v34 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v125, "Overflow encountered when expanding vector");
      v35 = v125;
      v34[1] = v34 + 3;
      v36 = v126;
      *v34 = off_1C63128;
      if ( v35 == v127 )
      {
        qmemcpy(v34 + 3, v127, (unsigned int)(v36 + 1));
      }
      else
      {
        v41 = v127[0];
        v34[1] = v35;
        v34[3] = v41;
      }
      v34[2] = v36;
      v125 = v127;
      v126 = 0;
      LOBYTE(v127[0]) = 0;
      sub_233E40((__int64)&v125);
      __cxa_throw(v34, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v111 = (unsigned int *)sub_186B300(v47, v110);
    *v111 = v109;
    v47 = v111;
    v48 = v111 + 2;
    v54 = v111[1];
  }
  *(_QWORD *)&v48[2 * v54] = v53;
  *(v48 - 1) = v54 + 1;
  sub_1858590(v121, a2);
  sub_1862370(v121, "variable_ordering_strategy", 3);
  v55 = sub_77C950(a1, (unsigned int)v121);
  v56 = sub_EE8DB0(v55, 15000);
  v57 = *(v48 - 1);
  if ( v57 == *(v48 - 2) )
  {
    v107 = (3 * v57 + 1) >> 1;
    v108 = 8 * v107 + 8;
    if ( 8 * v57 + 8 >= v108 || v57 >= v107 )
    {
      v21 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v125, "Overflow encountered when expanding vector");
      v22 = v125;
      v21[1] = v21 + 3;
      v23 = v126;
      *v21 = off_1C63128;
      if ( v22 == v127 )
      {
        qmemcpy(v21 + 3, v127, (unsigned int)(v23 + 1));
      }
      else
      {
        v25 = v127[0];
        v21[1] = v22;
        v21[3] = v25;
      }
      v21[2] = v23;
      v125 = v127;
      v126 = 0;
      LOBYTE(v127[0]) = 0;
      sub_233E40((__int64)&v125);
      __cxa_throw(v21, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v114 = (3 * v57 + 1) >> 1;
    v47 = (unsigned int *)sub_186B300(v47, v108);
    v48 = v47 + 2;
    *v47 = v114;
    v57 = v47[1];
  }
  *(_QWORD *)&v48[2 * v57] = v56;
  *(v48 - 1) = v57 + 1;
  sub_1858590(v122, a2);
  sub_1862370(v122, "variable_ordering_strategy", 1);
  v58 = sub_77C950(a1, (unsigned int)v122);
  v59 = sub_EE8DB0(v58, 20000);
  v60 = *(v48 - 1);
  if ( v60 == *(v48 - 2) )
  {
    v105 = (3 * v60 + 1) >> 1;
    v106 = 8 * v105 + 8;
    if ( 8 * v60 + 8 >= v106 || v60 >= v105 )
    {
      v18 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v125, "Overflow encountered when expanding vector");
      v19 = v125;
      v18[1] = v18 + 3;
      v20 = v126;
      *v18 = off_1C63128;
      if ( v19 == v127 )
      {
        qmemcpy(v18 + 3, v127, (unsigned int)(v20 + 1));
      }
      else
      {
        v24 = v127[0];
        v18[1] = v19;
        v18[3] = v24;
      }
      v18[2] = v20;
      v125 = v127;
      v126 = 0;
      LOBYTE(v127[0]) = 0;
      sub_233E40((__int64)&v125);
      __cxa_throw(v18, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v115 = (3 * v60 + 1) >> 1;
    v47 = (unsigned int *)sub_186B300(v47, v106);
    v48 = v47 + 2;
    *v47 = v115;
    v60 = v47[1];
  }
  *(_QWORD *)&v48[2 * v60] = v59;
  *(v48 - 1) = v60 + 1;
  sub_1858590(v123, a2);
  sub_1862370(v123, "variable_ordering_strategy", 5);
  v61 = sub_77C950(a1, (unsigned int)v123);
  v62 = sub_EE8DB0(v61, 20000);
  v63 = *(v48 - 1);
  if ( v63 == *(v48 - 2) )
  {
    v103 = (3 * v63 + 1) >> 1;
    v104 = 8 * v103 + 8;
    if ( 8 * v63 + 8 >= v104 || v63 >= v103 )
    {
      v13 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v125, "Overflow encountered when expanding vector");
      v14 = v125;
      v13[1] = v13 + 3;
      v15 = v126;
      *v13 = off_1C63128;
      if ( v14 == v127 )
      {
        qmemcpy(v13 + 3, v127, (unsigned int)(v15 + 1));
      }
      else
      {
        v17 = v127[0];
        v13[1] = v14;
        v13[3] = v17;
      }
      v13[2] = v15;
      v125 = v127;
      v126 = 0;
      LOBYTE(v127[0]) = 0;
      sub_233E40((__int64)&v125);
      __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v118 = (3 * v63 + 1) >> 1;
    v47 = (unsigned int *)sub_186B300(v47, v104);
    v48 = v47 + 2;
    *v47 = v118;
    v63 = v47[1];
  }
  *(_QWORD *)&v48[2 * v63] = v62;
  *(v48 - 1) = v63 + 1;
  sub_1858590(&v124, a2);
  sub_1862370(&v124, "variable_ordering_strategy", 2);
  v64 = sub_77C950(a1, (unsigned int)&v124);
  v65 = sub_EE8DB0(v64, 25000);
  v66 = *(v48 - 1);
  if ( v66 == *(v48 - 2) )
  {
    v101 = (3 * v66 + 1) >> 1;
    v102 = 8 * v101 + 8;
    if ( 8 * v66 + 8 >= v102 || v66 >= v101 )
    {
      v10 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v125, "Overflow encountered when expanding vector");
      v11 = v125;
      v10[1] = v10 + 3;
      v12 = v126;
      *v10 = off_1C63128;
      if ( v11 == v127 )
      {
        qmemcpy(v10 + 3, v127, (unsigned int)(v12 + 1));
      }
      else
      {
        v16 = v127[0];
        v10[1] = v11;
        v10[3] = v16;
      }
      v10[2] = v12;
      v126 = 0;
      v125 = v127;
      LOBYTE(v127[0]) = 0;
      sub_233E40((__int64)&v125);
      __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v117 = (3 * v66 + 1) >> 1;
    v47 = (unsigned int *)sub_186B300(v47, v102);
    v48 = v47 + 2;
    *v47 = v117;
    v66 = v47[1];
  }
  *(_QWORD *)&v48[2 * v66] = v65;
  *(v48 - 1) = v66 + 1;
  sub_18572D0(&v124);
  sub_18572D0(v123);
  sub_18572D0(v122);
  sub_18572D0(v121);
  sub_18572D0(v120);
  sub_18572D0(v119);
  sub_1858590(&v124, a2);
  sub_1862300(&v124, "use_ls", 1);
  sub_1862370(&v124, "ls_time", 80);
  v125 = nullptr;
  v67 = sub_388500(a1, &v125);
  v68 = sub_EE8E00(v67, &v124);
  sub_18572D0(&v125);
  sub_18572D0(&v124);
  v69 = *(v48 - 1);
  if ( v69 == *(v48 - 2) )
  {
    v99 = (3 * v69 + 1) >> 1;
    v100 = 8 * v99 + 8;
    if ( 8 * v69 + 8 >= v100 || v69 >= v99 )
    {
      v29 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v125, "Overflow encountered when expanding vector");
      v30 = v125;
      v29[1] = v29 + 3;
      v31 = v126;
      *v29 = off_1C63128;
      if ( v30 == v127 )
      {
        qmemcpy(v29 + 3, v127, (unsigned int)(v31 + 1));
      }
      else
      {
        v33 = v127[0];
        v29[1] = v30;
        v29[3] = v33;
      }
      v29[2] = v31;
      v126 = 0;
      v125 = v127;
      LOBYTE(v127[0]) = 0;
      sub_233E40((__int64)&v125);
      __cxa_throw(v29, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v116 = (3 * v69 + 1) >> 1;
    v47 = (unsigned int *)sub_186B300(v47, v100);
    v48 = v47 + 2;
    *v47 = v116;
    v69 = v47[1];
  }
  *(_QWORD *)&v48[2 * v69] = v68;
  *(v48 - 1) = v69 + 1;
  sub_1858590(v123, a2);
  sub_1862300(v123, "arith.greatest_error_pivot", 1);
  v70 = sub_EE4EC0(v123, "arith.greatest_error_pivot");
  v124 = 0;
  v71 = sub_388500(a1, &v124);
  v72 = sub_EE8E00(v71, v123);
  v73 = sub_EE8DB0(v72, 375000);
  v74 = sub_EE7A70(v73, v70);
  v75 = *(v48 - 1);
  if ( v75 == *(v48 - 2) )
  {
    v96 = (3 * v75 + 1) >> 1;
    v97 = 8 * v96 + 8;
    if ( 8 * v75 + 8 >= v97 || v75 >= v96 )
    {
      v26 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v125, "Overflow encountered when expanding vector");
      v27 = v125;
      v26[1] = v26 + 3;
      v28 = v126;
      *v26 = off_1C63128;
      if ( v27 == v127 )
      {
        qmemcpy(v26 + 3, v127, (unsigned int)(v28 + 1));
      }
      else
      {
        v32 = v127[0];
        v26[1] = v27;
        v26[3] = v32;
      }
      v26[2] = v28;
      v125 = v127;
      v126 = 0;
      LOBYTE(v127[0]) = 0;
      sub_233E40((__int64)&v125);
      __cxa_throw(v26, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v98 = (unsigned int *)sub_186B300(v47, v97);
    *v98 = v96;
    v48 = v98 + 2;
    v75 = v98[1];
  }
  v76 = 0;
  *(_QWORD *)&v48[2 * v75] = v74;
  *(v48 - 1) = v75 + 1;
  sub_18572D0(&v124);
  sub_18572D0(v123);
  do
  {
    sub_1858590(&v124, a2);
    sub_1862370(&v124, "seed", v76);
    sub_1862300(&v124, "shuffle_vars", 1);
    v77 = sub_77C950(a1, (unsigned int)&v124);
    v78 = sub_EE8DB0(v77, 10000);
    v79 = *(v48 - 1);
    if ( v79 == *(v48 - 2) )
    {
      v80 = (3 * v79 + 1) >> 1;
      v81 = 8 * v80 + 8;
      if ( 8 * v79 + 8 >= (unsigned int)v81 || v79 >= v80 )
      {
        v37 = __cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v125, "Overflow encountered when expanding vector");
        v38 = v125;
        v37[1] = v37 + 3;
        v39 = v126;
        *v37 = off_1C63128;
        if ( v38 == v127 )
        {
          qmemcpy(v37 + 3, v127, (unsigned int)(v39 + 1));
        }
        else
        {
          v40 = v127[0];
          v37[1] = v38;
          v37[3] = v40;
        }
        v37[2] = v39;
        v126 = 0;
        v125 = v127;
        LOBYTE(v127[0]) = 0;
        sub_233E40((__int64)&v125);
        __cxa_throw(v37, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v113 = (3 * v79 + 1) >> 1;
      v82 = (unsigned int *)sub_186B300(v48 - 2, v81);
      v48 = v82 + 2;
      *v82 = v113;
      v79 = v82[1];
    }
    ++v76;
    *(_QWORD *)&v48[2 * v79] = v78;
    *(v48 - 1) = v79 + 1;
    sub_18572D0(&v124);
  }
  while ( v76 != 40 );
  v83 = sub_77C950(a1, a2);
  v84 = *(v48 - 1);
  v85 = v83;
  if ( v84 == *(v48 - 2) )
  {
    v93 = (3 * v84 + 1) >> 1;
    v94 = 8 * v93 + 8;
    if ( 8 * v84 + 8 >= v94 || v84 >= v93 )
    {
      v5 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v125, "Overflow encountered when expanding vector");
      v6 = v125;
      v5[1] = v5 + 3;
      v7 = v126;
      *v5 = off_1C63128;
      if ( v6 == v127 )
      {
        qmemcpy(v5 + 3, v127, (unsigned int)(v7 + 1));
      }
      else
      {
        v9 = v127[0];
        v5[1] = v6;
        v5[3] = v9;
      }
      v5[2] = v7;
      v125 = v127;
      v126 = 0;
      LOBYTE(v127[0]) = 0;
      sub_233E40((__int64)&v125);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v95 = (unsigned int *)sub_186B300(v48 - 2, v94);
    *v95 = v93;
    v84 = v95[1];
    v48 = v95 + 2;
  }
  v86 = v84;
  v87 = v84 + 1;
  *(_QWORD *)&v48[2 * v86] = v85;
  *(v48 - 1) = v87;
  v88 = sub_EEA210(v87, v48);
  sub_186B220(v48 - 2);
  return v88;
}

