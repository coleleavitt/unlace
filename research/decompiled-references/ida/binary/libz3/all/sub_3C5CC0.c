__int64 __fastcall sub_3C5CC0(__int64 a1, int a2, __int64 a3, __int64 *a4, __int64 *a5, __int64 *a6, __int64 *a7)
{
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r13d
  __int64 v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned int v24; // ebx
  __int64 v25; // r15
  unsigned int v26; // eax
  __int64 v27; // rbx
  int v28; // r14d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // r15
  _QWORD *v34; // rax
  _QWORD *v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  int v43; // r13d
  unsigned int **v44; // rdx
  int v45; // r8d
  __int64 v46; // rax
  int *v47; // rax
  __int64 v48; // rdi
  int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // rbp
  int v52; // eax
  unsigned int **v54; // rdi
  __int64 *v55; // rbx
  __int64 v56; // rbp
  __int64 v57; // rbp
  __int64 *v58; // rdi
  unsigned int v60; // r13d
  size_t v61; // rdi
  __int64 *v62; // r15
  _DWORD *v63; // rsi
  __int64 v64; // r12
  __int64 v65; // rdx
  int v66; // r9d
  __int64 *v67; // rax
  __int64 *v68; // r8
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 *v71; // r12
  __int64 *v72; // rbx
  __int64 *v73; // rdi
  unsigned int v74; // r15d
  size_t v75; // rdi
  __int64 v76; // rax
  unsigned int **v77; // rdi
  int v78; // r8d
  _DWORD *v79; // rsi
  unsigned int **v80; // rdx
  __int64 v81; // r9
  unsigned __int64 v82; // rax
  __int64 v83; // r9
  _QWORD *v84; // rax
  char **exception; // rbx
  char **v86; // rbp
  __int64 v87; // [rsp+0h] [rbp-C8h]
  __int64 v88; // [rsp+0h] [rbp-C8h]
  unsigned int **v89; // [rsp+8h] [rbp-C0h]
  int v90; // [rsp+10h] [rbp-B8h]
  int v94[2]; // [rsp+28h] [rbp-A0h]
  int v95; // [rsp+30h] [rbp-98h]
  int v96[2]; // [rsp+38h] [rbp-90h] BYREF
  int v97[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v98; // [rsp+48h] [rbp-80h] BYREF
  int v99[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v100; // [rsp+58h] [rbp-70h]
  int v101[2]; // [rsp+60h] [rbp-68h] BYREF
  int v102[2]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v103; // [rsp+70h] [rbp-58h] BYREF
  __int64 v104; // [rsp+78h] [rbp-50h]
  char v105; // [rsp+80h] [rbp-48h]
  __int64 v106; // [rsp+88h] [rbp-40h]
  char v107; // [rsp+90h] [rbp-38h]

  v90 = *(_DWORD *)(a3 + 60);
  sub_3C5860((__int64 *)v99, a7);
  *(_QWORD *)v96 = 0;
  *(_QWORD *)v97 = 0;
  v10 = sub_186B270(0x28u);
  v11 = a5[1];
  *(_QWORD *)(v10 + 16) = 0;
  v12 = v10 + 8;
  *(_QWORD *)v10 = 2;
  v13 = *a5;
  *(_QWORD *)v96 = v10 + 8;
  *(_QWORD *)(v10 + 8) = v13;
  if ( !v11 )
  {
    *(_DWORD *)(v10 + 4) = 1;
    LODWORD(v19) = 1;
LABEL_10:
    v20 = v12 + 16LL * (unsigned int)v19;
    goto LABEL_11;
  }
  v14 = 0;
  v15 = 0;
  v89 = (unsigned int **)(v10 + 16);
  do
  {
    if ( v15 >= *(_DWORD *)(v11 - 4) )
      break;
    v16 = *(_QWORD *)(v11 + 8LL * v15);
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    if ( v14 )
    {
      v17 = *(_DWORD *)(v14 - 4);
      if ( v17 != *(_DWORD *)(v14 - 8) )
        continue;
    }
    v87 = v16;
    sub_23A6F0(v89);
    v14 = *(_QWORD *)(v10 + 16);
    v11 = a5[1];
    v16 = v87;
    v17 = *(_DWORD *)(v14 - 4);
    ++v15;
    *(_QWORD *)(v14 + 8LL * v17) = v16;
    *(_DWORD *)(v14 - 4) = v17 + 1;
  }
  while ( v11 );
  v12 = *(_QWORD *)v96;
  v18 = *(_DWORD *)(*(_QWORD *)v96 - 8LL);
  LODWORD(v19) = *(_DWORD *)(*(_QWORD *)v96 - 4LL) + 1;
  *(_DWORD *)(*(_QWORD *)v96 - 4LL) = v19;
  if ( v18 != (_DWORD)v19 )
    goto LABEL_10;
  v60 = (3 * v18 + 1) >> 1;
  v61 = 16 * v60 + 8;
  if ( 16 * v18 + 8 >= (unsigned int)v61 || v18 >= v60 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_3BCB70(&v103, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v103);
    sub_233E40((__int64)&v103);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v19 = sub_186B270(v61);
  v62 = *(__int64 **)v96;
  v63 = (_DWORD *)v19;
  v12 = v19 + 8;
  if ( *(_QWORD *)v96 )
  {
    v64 = *(unsigned int *)(*(_QWORD *)v96 - 4LL);
    v65 = v19 + 8;
    *(_DWORD *)(v19 + 4) = v64;
    v66 = v64;
    v67 = v62;
    v68 = &v62[2 * v64];
    if ( v62 != v68 )
    {
      do
      {
        v69 = *v67;
        v67 += 2;
        v65 += 16;
        *(_QWORD *)(v65 - 16) = v69;
        v70 = *(v67 - 1);
        *(v67 - 1) = 0;
        *(_QWORD *)(v65 - 8) = v70;
      }
      while ( v68 != v67 );
    }
    v71 = &v62[2 * v64];
    if ( v66 )
    {
      v88 = v12;
      v72 = v62;
      do
      {
        v73 = v72;
        v72 += 2;
        sub_2334C0(v73);
      }
      while ( v72 != v71 );
      v12 = v88;
      v62 = *(__int64 **)v96;
    }
    LODWORD(v87) = (_DWORD)v63;
    sub_186B220(v62 - 1);
    v19 = (unsigned int)v63[1];
    v20 = v12 + 16 * v19;
  }
  else
  {
    *(_DWORD *)(v19 + 4) = 0;
    v20 = v19 + 8;
    LODWORD(v19) = 0;
  }
  *(_QWORD *)v96 = v12;
  *v63 = v60;
LABEL_11:
  v21 = *a6;
  *(_QWORD *)(v20 + 8) = 0;
  v22 = a6[1];
  *(_QWORD *)v20 = v21;
  if ( v22 )
  {
    v23 = 0;
    v24 = 0;
    do
    {
      if ( v24 >= *(_DWORD *)(v22 - 4) )
        break;
      v25 = *(_QWORD *)(v22 + 8LL * v24);
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      if ( v23 )
      {
        v26 = *(_DWORD *)(v23 - 4);
        if ( v26 != *(_DWORD *)(v23 - 8) )
          continue;
      }
      sub_23A6F0((unsigned int **)(v20 + 8));
      v23 = *(_QWORD *)(v20 + 8);
      v22 = a6[1];
      v26 = *(_DWORD *)(v23 - 4);
      ++v24;
      *(_QWORD *)(v23 + 8LL * v26) = v25;
      *(_DWORD *)(v23 - 4) = v26 + 1;
    }
    while ( v22 );
    v12 = *(_QWORD *)v96;
    LODWORD(v19) = *(_DWORD *)(*(_QWORD *)v96 - 4LL);
  }
  *(_DWORD *)(v12 - 4) = v19 + 1;
  v27 = *(_QWORD *)(a1 + 8);
  v28 = *(_DWORD *)(v27 + 712);
  *(_QWORD *)v101 = v27;
  *(_DWORD *)(v27 + 712) = 1;
  sub_3C5860(&v103, (__int64 *)a3);
  v32 = sub_15DE060(v27, v103, v29, v30, v31);
  v33 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v34 = (_QWORD *)sub_186B270(0x18u);
  v34[1] = v33;
  v35 = v34 + 1;
  v36 = v104;
  v37 = v103;
  *v34 = 0x100000002LL;
  sub_3BCB50(v37, v36);
  v38 = *(_QWORD *)(a1 + 8);
  sub_3C5860(&v103, a4);
  v42 = sub_15DE060(v38, v103, v39, v40, v41);
  v98 = v42;
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  *(_QWORD *)v102 = v35;
  sub_3BCFC0(v102, &v98);
  v43 = v102[0];
  sub_3BCB50(v103, v104);
  v44 = *(unsigned int ***)v97;
  v45 = v90 + 1;
  if ( *(_QWORD *)v97 )
  {
    v46 = *(unsigned int *)(*(_QWORD *)v97 - 4LL);
    if ( (_DWORD)v46 == *(_DWORD *)(*(_QWORD *)v97 - 8LL) )
    {
      v74 = (unsigned int)(3 * v46 + 1) >> 1;
      v75 = 8 * v74 + 8;
      if ( 8 * (int)v46 + 8 >= (unsigned int)v75 || (unsigned int)v46 >= v74 )
      {
        v86 = (char **)__cxa_allocate_exception(0x28u);
        sub_3BCB70(&v103, "Overflow encountered when expanding vector");
        *v86 = (char *)off_1C63128;
        sub_2333C0(v86 + 1, &v103);
        sub_233E40((__int64)&v103);
        __cxa_throw(v86, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v76 = sub_186B270(v75);
      v77 = *(unsigned int ***)v97;
      v78 = v90 + 1;
      v79 = (_DWORD *)v76;
      v80 = (unsigned int **)(v76 + 8);
      v81 = *(unsigned int *)(*(_QWORD *)v97 - 4LL);
      *(_DWORD *)(v76 + 4) = v81;
      v82 = 0;
      v83 = 8 * v81;
      if ( v83 )
      {
        do
        {
          *(_QWORD *)&v79[v82 / 4 + 2] = v77[v82 / 8];
          v82 += 8LL;
        }
        while ( v83 != v82 );
      }
      v90 = (int)v79;
      v89 = v80;
      LODWORD(v87) = v78;
      sub_186B220(v77 - 1);
      v44 = v89;
      v45 = v87;
      v47 = (int *)&v89[v79[1]];
      *(_QWORD *)v97 = v89;
      *v79 = v74;
    }
    else
    {
      v47 = (int *)(*(_QWORD *)v97 + 8 * v46);
    }
  }
  else
  {
    LODWORD(v87) = v90 + 1;
    v84 = (_QWORD *)sub_186B270(0x18u);
    v44 = (unsigned int **)(v84 + 1);
    v45 = v90 + 1;
    *(_QWORD *)v97 = v84 + 1;
    *v84 = 2;
    v47 = (int *)(v84 + 1);
  }
  *v47 = v45;
  v48 = *(_QWORD *)(a1 + 8);
  v47[1] = 0;
  v49 = v99[0];
  ++*((_DWORD *)v44 - 1);
  v50 = sub_15E9440(
          v48,
          2,
          v43,
          v49,
          (int)v97,
          (int)v96,
          v87,
          (__int64)v89,
          v90,
          (void *)a3,
          (int)a4,
          a2,
          v95,
          v96[0],
          v97[0],
          v98,
          v99[0],
          v100,
          v101[0],
          v102[0],
          v103,
          v104,
          v105,
          v106,
          v107);
  v51 = v50;
  if ( v50 )
  {
    v52 = *(_DWORD *)(v50 + 8);
    v103 = v51;
    *(_DWORD *)(v51 + 8) = v52 + 2;
    sub_3BCFC0((_QWORD *)(*(_QWORD *)v94 + 32LL), &v103);
    sub_2B4F40((__int64 *)v101);
    if ( (*(_DWORD *)(v51 + 8))-- == 1 )
      sub_15D7BC0(v27, v51);
  }
  else
  {
    v103 = 0;
    sub_3BCFC0((_QWORD *)(*(_QWORD *)v94 + 32LL), &v103);
    sub_2B4F40((__int64 *)v101);
  }
  v54 = *(unsigned int ***)v97;
  *(_DWORD *)(v27 + 712) = v28;
  if ( v54 )
    sub_186B220(v54 - 1);
  v55 = *(__int64 **)v96;
  if ( *(_QWORD *)v96 )
  {
    v56 = *(unsigned int *)(*(_QWORD *)v96 - 4LL);
    if ( (_DWORD)v56 )
    {
      v57 = *(_QWORD *)v96 + 16 * v56;
      do
      {
        v58 = v55;
        v55 += 2;
        sub_2334C0(v58);
      }
      while ( (__int64 *)v57 != v55 );
      v55 = *(__int64 **)v96;
    }
    sub_186B220(v55 - 1);
  }
  return sub_3BCB50(*(__int64 *)v99, v100);
}

