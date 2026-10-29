const double *__fastcall sub_5EEBC0(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v5; // rbx
  const double *result; // rax
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  _DWORD *v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rax
  _QWORD *v13; // r15
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdi
  _QWORD *v17; // r15
  unsigned __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdi
  _DWORD *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 *v24; // r15
  unsigned __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 *v28; // r15
  unsigned __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdi
  struct _Unwind_Exception *v32; // r15
  struct _Unwind_Exception *v33; // r14
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  _QWORD *v41; // rax
  __int64 v42; // rdx
  _DWORD *v43; // r13
  _DWORD *v44; // rsi
  __int64 v45; // rdi
  int v46; // ecx
  __int64 v47; // rsi
  __int64 v48; // rdi
  _QWORD *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rax
  char **exception; // rbp
  const char *v56; // rax
  struct _Unwind_Exception *v57; // [rsp+10h] [rbp-4C8h]
  __int64 v58; // [rsp+18h] [rbp-4C0h]
  _DWORD *v59; // [rsp+30h] [rbp-4A8h] BYREF
  __int64 v60; // [rsp+38h] [rbp-4A0h]
  __int64 v61; // [rsp+40h] [rbp-498h] BYREF
  __int64 v62; // [rsp+48h] [rbp-490h]
  _QWORD v63[4]; // [rsp+60h] [rbp-478h] BYREF
  int v64; // [rsp+80h] [rbp-458h]
  __int16 v65; // [rsp+84h] [rbp-454h]
  __int64 (__fastcall **v66)(); // [rsp+90h] [rbp-448h] BYREF
  int v67[2]; // [rsp+98h] [rbp-440h]
  char v68; // [rsp+A0h] [rbp-438h]
  char v69; // [rsp+A1h] [rbp-437h]
  _QWORD *v70; // [rsp+A8h] [rbp-430h]
  __int64 v71; // [rsp+B0h] [rbp-428h]
  __int64 v72; // [rsp+B8h] [rbp-420h]
  __int64 v73; // [rsp+C0h] [rbp-418h]
  _QWORD *v74; // [rsp+C8h] [rbp-410h]
  __int64 v75; // [rsp+E0h] [rbp-3F8h]
  _QWORD *v76; // [rsp+E8h] [rbp-3F0h]
  _DWORD *v77; // [rsp+108h] [rbp-3D0h]
  int v78; // [rsp+110h] [rbp-3C8h]
  __int64 v79; // [rsp+118h] [rbp-3C0h]
  int v80; // [rsp+128h] [rbp-3B0h]
  __int64 v81; // [rsp+130h] [rbp-3A8h]
  int *v82; // [rsp+138h] [rbp-3A0h] BYREF
  int *v83; // [rsp+1D8h] [rbp-300h] BYREF
  __int64 v84; // [rsp+270h] [rbp-268h]
  __int64 v85; // [rsp+278h] [rbp-260h]
  __int64 v86; // [rsp+280h] [rbp-258h]
  __int64 v87; // [rsp+288h] [rbp-250h]
  __int64 v88; // [rsp+290h] [rbp-248h]
  __int64 v89; // [rsp+298h] [rbp-240h]
  __int64 v90; // [rsp+2A0h] [rbp-238h]
  __int64 v91; // [rsp+2C0h] [rbp-218h]
  void *v92; // [rsp+2C8h] [rbp-210h]
  __int64 v93; // [rsp+2E0h] [rbp-1F8h]
  __int64 v94; // [rsp+2E8h] [rbp-1F0h]
  void *v95; // [rsp+2F0h] [rbp-1E8h]
  struct _Unwind_Exception *v96; // [rsp+320h] [rbp-1B8h]
  unsigned int v97; // [rsp+328h] [rbp-1B0h]
  __int64 v98; // [rsp+338h] [rbp-1A0h]
  __int64 *v99; // [rsp+340h] [rbp-198h]
  __int64 v100; // [rsp+348h] [rbp-190h]
  __int64 v101; // [rsp+350h] [rbp-188h]
  __int64 v102; // [rsp+358h] [rbp-180h]
  void *v103; // [rsp+380h] [rbp-158h]
  __int64 v104; // [rsp+398h] [rbp-140h]
  __int64 v105; // [rsp+3A0h] [rbp-138h]
  __int64 v106; // [rsp+3B8h] [rbp-120h]
  __int64 v107; // [rsp+3C0h] [rbp-118h]
  __int64 v108; // [rsp+3C8h] [rbp-110h]
  __int64 v109; // [rsp+3D8h] [rbp-100h]
  __int64 *v110; // [rsp+3E0h] [rbp-F8h]
  __int64 v111; // [rsp+3E8h] [rbp-F0h]
  __int64 v112; // [rsp+3F0h] [rbp-E8h]
  __int64 v113; // [rsp+3F8h] [rbp-E0h]
  __int64 v114; // [rsp+400h] [rbp-D8h]
  __int64 v115; // [rsp+408h] [rbp-D0h]
  void *ptr; // [rsp+410h] [rbp-C8h]
  char v117; // [rsp+420h] [rbp-B8h] BYREF

  v60 = *(_QWORD *)(a1 + 24);
  if ( a2 )
    ++a2[2];
  v59 = a2;
  sub_14EA2A0(a1 + 40, a2, &v59);
  v5 = v59;
  LODWORD(result) = v59[18];
  if ( (_DWORD)result )
  {
LABEL_4:
    v7 = 0;
    v8 = 8LL * (unsigned int)result;
    do
    {
      result = sub_5EEAB0(a1, (__int64)v5, *(_QWORD *)&v5[4 * (unsigned int)v5[5] + 20 + v7 / 4], a3);
      v7 += 8LL;
    }
    while ( v7 != v8 );
    goto LABEL_6;
  }
  v12 = *(_QWORD *)(a1 + 24);
  v66 = nullptr;
  v65 = 1;
  v58 = v12;
  v63[0] = 0x100000001LL;
  v64 = -1;
  sub_15B6DB0(v63, &v66);
  sub_18572D0(&v66);
  sub_DB2A00(&v66, *(_QWORD *)(a1 + 24), v63);
  if ( v72 )
  {
    if ( !*(_DWORD *)(v72 - 4) && v71 == *v70 )
      goto LABEL_34;
    *(_DWORD *)(v72 - 4) = 0;
  }
  else if ( v71 == *v70 )
  {
    goto LABEL_34;
  }
  v13 = v74;
  if ( v74 )
  {
    v14 = (unsigned __int64)&v74[*((unsigned int *)v74 - 1)];
    if ( (unsigned __int64)v74 >= v14 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = v73;
          v11 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v13 >= v14 )
          goto LABEL_20;
      }
      sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( (unsigned __int64)v13 < v14 );
LABEL_20:
    v13 = v74;
    if ( v74 )
LABEL_21:
      *((_DWORD *)v13 - 1) = 0;
  }
  v17 = v76;
  if ( v76 )
  {
    v18 = (unsigned __int64)&v76[*((unsigned int *)v76 - 1)];
    if ( (unsigned __int64)v76 >= v18 )
      goto LABEL_30;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = v75;
          v11 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v17 >= v18 )
          goto LABEL_29;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( (unsigned __int64)v17 < v18 );
LABEL_29:
    v17 = v76;
    if ( v76 )
LABEL_30:
      *((_DWORD *)v17 - 1) = 0;
  }
  if ( v79 )
    *(_DWORD *)(v79 - 4) = 0;
  sub_15843E0(&v66);
LABEL_34:
  if ( !v68 )
  {
    v61 = 0;
    v62 = v58;
    sub_5F7D40(&v66, v5, &v59, &v61);
LABEL_129:
    v23 = v61;
    v58 = v62;
    goto LABEL_130;
  }
  if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)v67) )
  {
    if ( v69 )
    {
      sub_5F1F10(&v66);
      exception = (char **)__cxa_allocate_exception(0x28u);
      v56 = (const char *)sub_1829130(*(_QWORD *)v67);
      sub_24ABB0(&v61, v56);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v61);
      *exception = (char *)off_1C650D8;
      sub_233E40((__int64)&v61);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
    }
    v21 = v59;
    ++v5[2];
    if ( v21 )
    {
      v22 = v60;
      v11 = v21[2]-- == 1;
      if ( v11 )
        sub_15D7BC0(v22, v21);
    }
    v59 = v5;
    v23 = 0;
    goto LABEL_41;
  }
  v77 = v5;
  v78 = 0;
  v80 = 0;
  if ( !(unsigned __int8)sub_5F2580(&v66, v5, 3) )
  {
    v61 = 0;
    v62 = v58;
    sub_5F4F40(&v66, &v59, &v61);
    goto LABEL_129;
  }
  v41 = v74;
  v42 = 0xFFFFFFFFLL;
  if ( v74 )
    v42 = (unsigned int)(*((_DWORD *)v74 - 1) - 1);
  v43 = (_DWORD *)v74[v42];
  if ( v43 )
    ++v43[2];
  v44 = v59;
  if ( v59 )
  {
    v45 = v60;
    v11 = v59[2]-- == 1;
    if ( v11 )
    {
      sub_15D7BC0(v45, v44);
      v41 = v74;
    }
  }
  v46 = *((_DWORD *)v41 - 1);
  v59 = v43;
  v47 = v41[v46 - 1];
  *((_DWORD *)v41 - 1) = v46 - 1;
  if ( v47 )
  {
    v48 = v73;
    v11 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v48, v47);
  }
  v49 = v76;
  if ( !v76 )
  {
    v23 = MEMORY[0x7FFFFFFF8];
    if ( MEMORY[0x7FFFFFFF8] )
    {
      ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
      v52 = MEMORY[0x7FFFFFFF8];
      --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_147:
      v53 = v75;
      v11 = (*(_DWORD *)(v52 + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v53, v52);
      goto LABEL_130;
    }
    --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_151:
    v54 = sub_15DE1B0(v67[0]);
    v23 = v54;
    if ( v54 )
      ++*(_DWORD *)(v54 + 8);
    goto LABEL_130;
  }
  v50 = (unsigned int)(*((_DWORD *)v76 - 1) - 1);
  v23 = v76[v50];
  if ( !v23 )
  {
    *((_DWORD *)v76 - 1) = v50;
    goto LABEL_151;
  }
  ++*(_DWORD *)(v23 + 8);
  v51 = (unsigned int)(*((_DWORD *)v49 - 1) - 1);
  v52 = v49[v51];
  *((_DWORD *)v49 - 1) = v51;
  if ( v52 )
    goto LABEL_147;
LABEL_130:
  v5 = v59;
LABEL_41:
  v66 = &off_1C52718;
  if ( ptr && ptr != &v117 )
    sub_186B220(ptr);
  if ( v115 )
    sub_186B220((void *)(v115 - 8));
  if ( v114 )
    sub_186B220((void *)(v114 - 8));
  if ( v113 )
    sub_186B220((void *)(v113 - 8));
  if ( v112 )
    sub_186B220((void *)(v112 - 8));
  if ( v111 )
    sub_186B220((void *)(v111 - 8));
  v24 = v110;
  if ( v110 )
  {
    v25 = (unsigned __int64)&v110[*((unsigned int *)v110 - 1)];
    if ( (unsigned __int64)v110 >= v25 )
      goto LABEL_62;
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v27 = v109;
          v11 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v24 >= v25 )
          goto LABEL_61;
      }
      sub_15D7BC0(v27, v26);
      ++v24;
    }
    while ( (unsigned __int64)v24 < v25 );
LABEL_61:
    v24 = v110;
    if ( v110 )
LABEL_62:
      sub_186B220(v24 - 1);
  }
  if ( v108 )
    sub_186B220((void *)(v108 - 8));
  if ( v107 )
    sub_186B220((void *)(v107 - 8));
  if ( v106 )
    sub_186B220((void *)(v106 - 8));
  if ( v105 )
    sub_186B220((void *)(v105 - 8));
  if ( v104 )
    sub_186B220((void *)(v104 - 8));
  if ( v103 )
    sub_186B220(v103);
  if ( v102 )
    sub_186B220((void *)(v102 - 8));
  if ( v101 )
    sub_186B220((void *)(v101 - 8));
  if ( v100 )
    sub_186B220((void *)(v100 - 8));
  v28 = v99;
  if ( v99 )
  {
    v29 = (unsigned __int64)&v99[*((unsigned int *)v99 - 1)];
    if ( (unsigned __int64)v99 >= v29 )
      goto LABEL_89;
    do
    {
      while ( 1 )
      {
        v30 = *v28;
        if ( *v28 )
        {
          v31 = v98;
          v11 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v28 >= v29 )
          goto LABEL_88;
      }
      sub_15D7BC0(v31, v30);
      ++v28;
    }
    while ( (unsigned __int64)v28 < v29 );
LABEL_88:
    v28 = v99;
    if ( v99 )
LABEL_89:
      sub_186B220(v28 - 1);
  }
  v57 = v96;
  if ( v96 )
  {
    if ( v97 )
    {
      v32 = v96;
      v33 = (struct _Unwind_Exception *)((char *)v96 + 24 * v97);
      do
      {
        while ( 1 )
        {
          exception_cleanup = v32->exception_cleanup;
          if ( !exception_cleanup )
            break;
          v32 = (struct _Unwind_Exception *)((char *)v32 + 24);
          sub_186B220((char *)exception_cleanup - 8);
          if ( v32 == v33 )
            goto LABEL_95;
        }
        v32 = (struct _Unwind_Exception *)((char *)v32 + 24);
      }
      while ( v32 != v33 );
    }
LABEL_95:
    sub_186B220(v57);
  }
  if ( v95 )
    sub_186B220(v95);
  if ( v94 )
    sub_186B220((void *)(v94 - 8));
  if ( v93 )
    sub_186B220((void *)(v93 - 8));
  if ( v92 )
    sub_186B220(v92);
  if ( v91 )
    sub_186B220((void *)(v91 - 8));
  v66 = &off_1C526F8;
  if ( v90 )
    sub_186B220((void *)(v90 - 8));
  v35 = v88;
  if ( v88 )
  {
    v36 = v89;
    v11 = (*(_DWORD *)(v88 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v36, v35);
  }
  v37 = v86;
  if ( v86 )
  {
    v38 = v87;
    v11 = (*(_DWORD *)(v86 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v38, v37);
  }
  v39 = v84;
  if ( v84 )
  {
    v40 = v85;
    v11 = (*(_DWORD *)(v84 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v40, v39);
  }
  v83 = &qword_1C637E8;
  sub_15841B0(&v83);
  v82 = &qword_1C637E8;
  sub_15841B0(&v82);
  if ( v81 )
    sub_186B220((void *)(v81 - 8));
  sub_15841B0(&v66);
  if ( v23 )
  {
    v11 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v58, v23);
  }
  result = (const double *)(unsigned int)v5[18];
  if ( (_DWORD)result )
    goto LABEL_4;
LABEL_6:
  v9 = v59;
  if ( v59 )
  {
    v10 = v60;
    v11 = v59[2]-- == 1;
    if ( v11 )
      return (const double *)sub_15D7BC0(v10, v9);
  }
  return result;
}

