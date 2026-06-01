__int64 __fastcall sub_385F70(__int64 a1, __int64 a2)
{
  _QWORD *exception; // r12
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
  _QWORD *v13; // r12
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // r13
  _QWORD *v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // r13
  _QWORD *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r12
  unsigned int *v31; // rax
  unsigned int *v32; // rbp
  _DWORD *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r12
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 v38; // r12
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rax
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // eax
  __int64 v50; // rax
  unsigned int v51; // edi
  __int64 v52; // r13
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rbx
  unsigned int v57; // r15d
  size_t v58; // rsi
  unsigned int *v59; // rax
  unsigned int v60; // r14d
  size_t v61; // rsi
  unsigned int *v62; // rax
  unsigned int v63; // ecx
  size_t v64; // rsi
  unsigned int v65; // edx
  size_t v66; // rsi
  unsigned int v67; // ecx
  size_t v68; // rsi
  unsigned int v69; // edx
  size_t v70; // rsi
  __int64 v71; // [rsp+8h] [rbp-90h]
  __int64 v72; // [rsp+8h] [rbp-90h]
  __int64 v73; // [rsp+8h] [rbp-90h]
  __int64 v74; // [rsp+8h] [rbp-90h]
  unsigned int v75; // [rsp+8h] [rbp-90h]
  unsigned int v76; // [rsp+10h] [rbp-88h]
  unsigned int v77; // [rsp+1Ch] [rbp-7Ch]
  unsigned int v78; // [rsp+1Ch] [rbp-7Ch]
  char v79[8]; // [rsp+28h] [rbp-70h] BYREF
  char v80[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v81; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v82; // [rsp+40h] [rbp-58h] BYREF
  __int64 v83; // [rsp+48h] [rbp-50h]
  _QWORD v84[9]; // [rsp+50h] [rbp-48h] BYREF

  sub_1858590(&v82, a2);
  sub_1862300(&v82, "simple_check", 1);
  v27 = sub_EE4EC0(&v82, "simple_check");
  v28 = sub_77C950(a1, (unsigned int)&v82);
  v29 = sub_EE7A70(v28, v27);
  v30 = sub_EE8DB0(v29, 100000);
  v31 = (unsigned int *)sub_186B270(0x18u);
  *((_QWORD *)v31 + 1) = v30;
  v32 = v31;
  v33 = v31 + 2;
  *(_QWORD *)v31 = 0x100000002LL;
  sub_18572D0(&v82);
  sub_1858590(v79, a2);
  sub_1862370(v79, "variable_ordering_strategy", 1);
  v34 = sub_77C950(a1, (unsigned int)v79);
  v35 = sub_EE8DB0(v34, &stru_13880);
  v36 = v32[1];
  if ( v36 == *v32 )
  {
    v57 = (3 * v36 + 1) >> 1;
    v58 = 8 * v57 + 8;
    if ( 8 * v36 + 8 >= (unsigned int)v58 || v36 >= v57 )
    {
      exception = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v82, "Overflow encountered when expanding vector");
      v3 = v82;
      v4 = v83;
      exception[1] = exception + 3;
      *exception = off_1C63128;
      if ( v3 == v84 )
      {
        qmemcpy(exception + 3, v84, (unsigned int)(v4 + 1));
      }
      else
      {
        v8 = v84[0];
        exception[1] = v3;
        exception[3] = v8;
      }
      exception[2] = v4;
      v82 = v84;
      v83 = 0;
      LOBYTE(v84[0]) = 0;
      sub_233E40((__int64)&v82);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v59 = (unsigned int *)sub_186B300(v32, v58);
    *v59 = v57;
    v32 = v59;
    v33 = v59 + 2;
    v36 = v59[1];
  }
  *(_QWORD *)&v33[2 * v36] = v35;
  *(v33 - 1) = v36 + 1;
  sub_1858590(v80, a2);
  sub_1862370(v80, "variable_ordering_strategy", 5);
  v37 = sub_77C950(a1, (unsigned int)v80);
  v38 = sub_EE8DB0(v37, &stru_13880);
  v39 = *(v33 - 1);
  if ( v39 == *(v33 - 2) )
  {
    v69 = (3 * v39 + 1) >> 1;
    v70 = 8 * v69 + 8;
    if ( 8 * v39 + 8 >= (unsigned int)v70 || v39 >= v69 )
    {
      v13 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v82, "Overflow encountered when expanding vector");
      v14 = v82;
      v15 = v83;
      v13[1] = v13 + 3;
      *v13 = off_1C63128;
      if ( v14 == v84 )
      {
        qmemcpy(v13 + 3, v84, (unsigned int)(v15 + 1));
      }
      else
      {
        v17 = v84[0];
        v13[1] = v14;
        v13[3] = v17;
      }
      v13[2] = v15;
      v83 = 0;
      v82 = v84;
      LOBYTE(v84[0]) = 0;
      sub_233E40((__int64)&v82);
      __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v75 = (3 * v39 + 1) >> 1;
    v32 = (unsigned int *)sub_186B300(v32, v70);
    v33 = v32 + 2;
    *v32 = v75;
    v39 = v32[1];
  }
  *(_QWORD *)&v33[2 * v39] = v38;
  *(v33 - 1) = v39 + 1;
  sub_1858590(&v81, a2);
  sub_1862370(&v81, "variable_ordering_strategy", 2);
  v40 = sub_77C950(a1, (unsigned int)&v81);
  v41 = sub_EE8DB0(v40, 100000);
  v42 = *(v33 - 1);
  if ( v42 == *(v33 - 2) )
  {
    v67 = (3 * v42 + 1) >> 1;
    v68 = 8 * v67 + 8;
    if ( 8 * v42 + 8 >= (unsigned int)v68 || v42 >= v67 )
    {
      v10 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v82, "Overflow encountered when expanding vector");
      v11 = v82;
      v10[1] = v10 + 3;
      v12 = v83;
      *v10 = off_1C63128;
      if ( v11 == v84 )
      {
        qmemcpy(v10 + 3, v84, (unsigned int)(v12 + 1));
      }
      else
      {
        v16 = v84[0];
        v10[1] = v11;
        v10[3] = v16;
      }
      v10[2] = v12;
      v83 = 0;
      v82 = v84;
      LOBYTE(v84[0]) = 0;
      sub_233E40((__int64)&v82);
      __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v78 = (3 * v42 + 1) >> 1;
    v74 = v41;
    v32 = (unsigned int *)sub_186B300(v32, v68);
    v33 = v32 + 2;
    v41 = v74;
    *v32 = v78;
    v42 = v32[1];
  }
  *(_QWORD *)&v33[2 * v42] = v41;
  *(v33 - 1) = v42 + 1;
  sub_18572D0(&v81);
  sub_18572D0(v80);
  sub_18572D0(v79);
  sub_1858590(&v81, a2);
  sub_1862300(&v81, "use_ls", 1);
  sub_1862370(&v81, "ls_time", 100);
  v82 = nullptr;
  v43 = sub_388500(a1, &v82);
  v71 = sub_EE8E00(v43, &v81);
  sub_18572D0(&v82);
  sub_18572D0(&v81);
  v44 = *(v33 - 1);
  if ( v44 == *(v33 - 2) )
  {
    v65 = (3 * v44 + 1) >> 1;
    v66 = 8 * v65 + 8;
    if ( 8 * v44 + 8 >= (unsigned int)v66 || v44 >= v65 )
    {
      v21 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v82, "Overflow encountered when expanding vector");
      v22 = v82;
      v21[1] = v21 + 3;
      v23 = v83;
      *v21 = off_1C63128;
      if ( v22 == v84 )
      {
        qmemcpy(v21 + 3, v84, (unsigned int)(v23 + 1));
      }
      else
      {
        v25 = v84[0];
        v21[1] = v22;
        v21[3] = v25;
      }
      v21[2] = v23;
      v82 = v84;
      v83 = 0;
      LOBYTE(v84[0]) = 0;
      sub_233E40((__int64)&v82);
      __cxa_throw(v21, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v77 = (3 * v44 + 1) >> 1;
    v32 = (unsigned int *)sub_186B300(v32, v66);
    v33 = v32 + 2;
    *v32 = v77;
    v44 = v32[1];
  }
  *(_QWORD *)&v33[2 * v44] = v71;
  *(v33 - 1) = v44 + 1;
  sub_1858590(v80, a2);
  sub_1862300(v80, "arith.greatest_error_pivot", 1);
  v72 = sub_EE4EC0(v80, "arith.greatest_error_pivot");
  v81 = 0;
  v45 = sub_388500(a1, &v81);
  v46 = sub_EE8E00(v45, v80);
  v47 = sub_EE8DB0(v46, &stru_67C28);
  v48 = sub_EE7A70(v47, v72);
  v49 = *(v33 - 1);
  if ( v49 == *(v33 - 2) )
  {
    v63 = (3 * v49 + 1) >> 1;
    v64 = 8 * v63 + 8;
    if ( 8 * v49 + 8 >= (unsigned int)v64 || v49 >= v63 )
    {
      v18 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v82, "Overflow encountered when expanding vector");
      v19 = v82;
      v18[1] = v18 + 3;
      v20 = v83;
      *v18 = off_1C63128;
      if ( v19 == v84 )
      {
        qmemcpy(v18 + 3, v84, (unsigned int)(v20 + 1));
      }
      else
      {
        v24 = v84[0];
        v18[1] = v19;
        v18[3] = v24;
      }
      v18[2] = v20;
      v83 = 0;
      v82 = v84;
      LOBYTE(v84[0]) = 0;
      sub_233E40((__int64)&v82);
      __cxa_throw(v18, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v76 = (3 * v49 + 1) >> 1;
    v73 = v48;
    v32 = (unsigned int *)sub_186B300(v32, v64);
    v33 = v32 + 2;
    v48 = v73;
    *v32 = v76;
    v49 = v32[1];
  }
  *(_QWORD *)&v33[2 * v49] = v48;
  *(v33 - 1) = v49 + 1;
  sub_18572D0(&v81);
  sub_18572D0(v80);
  v50 = sub_77C950(a1, a2);
  v51 = *(v33 - 1);
  v52 = v50;
  if ( v51 == *(v33 - 2) )
  {
    v60 = (3 * v51 + 1) >> 1;
    v61 = 8 * v60 + 8;
    if ( 8 * v51 + 8 >= (unsigned int)v61 || v51 >= v60 )
    {
      v5 = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v82, "Overflow encountered when expanding vector");
      v6 = v82;
      v5[1] = v5 + 3;
      v7 = v83;
      *v5 = off_1C63128;
      if ( v6 == v84 )
      {
        qmemcpy(v5 + 3, v84, (unsigned int)(v7 + 1));
      }
      else
      {
        v9 = v84[0];
        v5[1] = v6;
        v5[3] = v9;
      }
      v5[2] = v7;
      v82 = v84;
      v83 = 0;
      LOBYTE(v84[0]) = 0;
      sub_233E40((__int64)&v82);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v62 = (unsigned int *)sub_186B300(v32, v61);
    *v62 = v60;
    v51 = v62[1];
    v32 = v62;
    v33 = v62 + 2;
  }
  v53 = v51;
  v54 = v51 + 1;
  *(_QWORD *)&v33[2 * v53] = v52;
  *(v33 - 1) = v54;
  v55 = sub_EEA210(v54, v33);
  sub_186B220(v32);
  return v55;
}

