__int64 __fastcall sub_87AE60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char **exception; // rbx
  __int64 *v8; // rax
  __int64 v9; // rsi
  void *v10; // rbp
  void *v11; // r14
  int v12; // edx
  void *v13; // r14
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rax
  void *v17; // rdi
  int v18; // r14d
  void *v19; // r15
  int v20; // edx
  void *v21; // r15
  __int64 v22; // rdx
  char v23; // cl
  __int64 v24; // rax
  void *v25; // r15
  void *v26; // r15
  void *v27; // r15
  void *v28; // r15
  int v29; // edx
  void *v30; // r15
  __int64 v31; // rdx
  char v32; // cl
  __int64 v33; // rax
  void *v34; // rdi
  int v35; // r15d
  int v36; // edx
  __int64 v37; // rdx
  char v38; // cl
  __int64 v39; // rax
  void *v40; // r12
  void *v41; // r12
  __int64 v42; // rax
  unsigned int v43; // r12d
  void *v44; // rbp
  void *v45; // rbx
  unsigned int *v47; // rsi
  unsigned int *v48; // rsi
  __int64 *v49; // r14
  int v50; // r12d
  __int64 v51; // rax
  unsigned int *v52; // r15
  bool v53; // zf
  __int64 v54; // rax
  __int64 v55; // r12
  unsigned int v56; // edx
  __int64 v57; // rax
  unsigned int v58; // ecx
  size_t v59; // rsi
  unsigned int *v60; // rax
  unsigned int v61; // r14d
  int v62; // r15d
  unsigned int *v63; // rsi
  unsigned int *v64; // rsi
  unsigned int v65; // r12d
  unsigned int v66; // r15d
  int v67; // ebp
  int v68; // eax
  unsigned int v69; // esi
  __int64 *v70; // rbp
  unsigned __int64 v71; // r12
  __int64 v72; // rsi
  __int64 *v73; // rbp
  unsigned __int64 v74; // r12
  __int64 v75; // rsi
  void *v76; // [rsp+10h] [rbp-158h]
  void *v77; // [rsp+10h] [rbp-158h]
  unsigned int v78; // [rsp+10h] [rbp-158h]
  __int64 v80; // [rsp+28h] [rbp-140h]
  __int64 i; // [rsp+28h] [rbp-140h]
  _QWORD *v83; // [rsp+30h] [rbp-138h]
  _QWORD *v84; // [rsp+40h] [rbp-128h]
  __int64 v86; // [rsp+50h] [rbp-118h]
  __int64 v87; // [rsp+58h] [rbp-110h]
  unsigned int v88; // [rsp+60h] [rbp-108h]
  unsigned int v89; // [rsp+64h] [rbp-104h]
  unsigned int v90; // [rsp+7Ch] [rbp-ECh] BYREF
  __int64 v91; // [rsp+80h] [rbp-E8h] BYREF
  _QWORD *v92; // [rsp+88h] [rbp-E0h]
  _QWORD v93[2]; // [rsp+90h] [rbp-D8h] BYREF
  _QWORD v94[2]; // [rsp+A0h] [rbp-C8h] BYREF
  _QWORD v95[2]; // [rsp+B0h] [rbp-B8h] BYREF
  _QWORD v96[2]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v97; // [rsp+D0h] [rbp-98h] BYREF
  __int64 *v98; // [rsp+D8h] [rbp-90h]
  __int64 v99; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v100; // [rsp+E8h] [rbp-80h]
  __int64 v101; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v102; // [rsp+F8h] [rbp-70h]
  __int64 v103; // [rsp+100h] [rbp-68h] BYREF
  __int64 v104; // [rsp+108h] [rbp-60h]
  __int64 v105; // [rsp+110h] [rbp-58h] BYREF
  __int64 v106; // [rsp+118h] [rbp-50h]
  int v107; // [rsp+120h] [rbp-48h] BYREF
  char v108; // [rsp+124h] [rbp-44h]
  __int64 v109; // [rsp+128h] [rbp-40h]

  v8 = *(__int64 **)(a3 + 8);
  v93[0] = 0;
  v94[0] = 1;
  v95[0] = 0;
  v96[0] = 1;
  v9 = *v8;
  v93[1] = 0;
  v94[1] = 0;
  v95[1] = 0;
  v96[1] = 0;
  if ( !(unsigned __int8)sub_1673B50((int)a1 + 128, v9, (unsigned int)v93, (unsigned int)&v90, a5, a6) )
  {
    sub_1872CE0("");
    sub_1873130(114, 340);
  }
  if ( !(unsigned __int8)sub_1673C40(a1 + 128, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), v95) )
  {
    sub_1872CE0("");
    sub_1873130(114, 341);
  }
  v97 = 2;
  v98 = nullptr;
  v99 = 1;
  v100 = 0;
  sub_182CBA0(qword_1C7F2C0, &v99);
  BYTE4(v99) &= ~1u;
  v10 = qword_1C7F2C0;
  LODWORD(v99) = 1;
  v101 = 0;
  v102 = 0;
  v103 = 1;
  v104 = 0;
  if ( (v93[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v101, v93);
  else
    LODWORD(v101) = v93[0];
  if ( (v94[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v10, &v103, v94);
  }
  else
  {
    BYTE4(v103) &= ~1u;
    LODWORD(v103) = v94[0];
  }
  v11 = qword_1C7F2C0;
  BYTE4(v105) &= 0xFCu;
  v108 &= 0xFCu;
  LODWORD(v105) = 0;
  v106 = 0;
  v107 = 1;
  v109 = 0;
  sub_1833EB0(qword_1C7F2C0, &v101, &v97, &v105);
  sub_182CBA0(v11, &v107);
  v12 = v105;
  v13 = qword_1C7F2C0;
  LODWORD(v105) = v101;
  LODWORD(v101) = v12;
  v14 = v106;
  v106 = v102;
  v102 = v14;
  v15 = BYTE4(v105) & 1;
  LOBYTE(v14) = BYTE4(v101) & 0xFC | BYTE4(v105) & 2;
  BYTE4(v105) = BYTE4(v101) & 1 | BYTE4(v105) & 0xFC | BYTE4(v101) & 2;
  BYTE4(v101) = v15 | v14;
  v107 = v103;
  v16 = v104;
  v104 = v109;
  v109 = v16;
  LODWORD(v103) = 1;
  LOBYTE(v16) = BYTE4(v103) & 1 | BYTE4(v103) & 2 | v108 & 0xFC;
  BYTE4(v103) = BYTE4(v103) & 0xFC | v108 & 2;
  v108 = v16;
  sub_182CBA0(qword_1C7F2C0, &v105);
  v17 = v13;
  v18 = 1;
  sub_182CBA0(v17, &v107);
  while ( (int)v101 > 0 )
  {
    v19 = qword_1C7F2C0;
    BYTE4(v105) &= 0xFCu;
    ++v18;
    v108 &= 0xFCu;
    LODWORD(v105) = 0;
    v106 = 0;
    v107 = 1;
    v109 = 0;
    sub_1833EB0(qword_1C7F2C0, &v101, &v97, &v105);
    sub_182CBA0(v19, &v107);
    v20 = v105;
    v21 = qword_1C7F2C0;
    LODWORD(v105) = v101;
    LODWORD(v101) = v20;
    v22 = v106;
    v106 = v102;
    v102 = v22;
    v23 = BYTE4(v105) & 1;
    LOBYTE(v22) = BYTE4(v101) & 0xFC | BYTE4(v105) & 2;
    BYTE4(v105) = BYTE4(v101) & 1 | BYTE4(v105) & 0xFC | BYTE4(v101) & 2;
    BYTE4(v101) = v23 | v22;
    v107 = v103;
    v24 = v104;
    v104 = v109;
    v109 = v24;
    LODWORD(v103) = 1;
    LOBYTE(v24) = BYTE4(v103) & 1 | BYTE4(v103) & 2 | v108 & 0xFC;
    BYTE4(v103) = BYTE4(v103) & 0xFC | v108 & 2;
    v108 = v24;
    sub_182CBA0(qword_1C7F2C0, &v105);
    sub_182CBA0(v21, &v107);
  }
  v25 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v101);
  sub_182CBA0(v25, &v103);
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v97);
  sub_182CBA0(v26, &v99);
  v97 = 2;
  v98 = nullptr;
  v99 = 1;
  v100 = 0;
  sub_182CBA0(qword_1C7F2C0, &v99);
  BYTE4(v99) &= ~1u;
  v27 = qword_1C7F2C0;
  LODWORD(v99) = 1;
  v101 = 0;
  v102 = 0;
  v103 = 1;
  v104 = 0;
  if ( (v95[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v101, v95);
  else
    LODWORD(v101) = v95[0];
  if ( (v96[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v27, &v103, v96);
  }
  else
  {
    BYTE4(v103) &= ~1u;
    LODWORD(v103) = v96[0];
  }
  v28 = qword_1C7F2C0;
  BYTE4(v105) &= 0xFCu;
  v108 &= 0xFCu;
  LODWORD(v105) = 0;
  v106 = 0;
  v107 = 1;
  v109 = 0;
  sub_1833EB0(qword_1C7F2C0, &v101, &v97, &v105);
  sub_182CBA0(v28, &v107);
  v29 = v105;
  v30 = qword_1C7F2C0;
  LODWORD(v105) = v101;
  LODWORD(v101) = v29;
  v31 = v106;
  v106 = v102;
  v102 = v31;
  v32 = BYTE4(v105) & 1;
  LOBYTE(v31) = BYTE4(v101) & 0xFC | BYTE4(v105) & 2;
  BYTE4(v105) = BYTE4(v101) & 1 | BYTE4(v105) & 0xFC | BYTE4(v101) & 2;
  BYTE4(v101) = v32 | v31;
  v107 = v103;
  v33 = v104;
  v104 = v109;
  v109 = v33;
  LODWORD(v103) = 1;
  LOBYTE(v33) = BYTE4(v103) & 1 | BYTE4(v103) & 2 | v108 & 0xFC;
  BYTE4(v103) = BYTE4(v103) & 0xFC | v108 & 2;
  v108 = v33;
  sub_182CBA0(qword_1C7F2C0, &v105);
  v34 = v30;
  v35 = 1;
  sub_182CBA0(v34, &v107);
  while ( (int)v101 > 0 )
  {
    BYTE4(v105) &= 0xFCu;
    ++v35;
    v108 &= 0xFCu;
    LODWORD(v105) = 0;
    v106 = 0;
    v107 = 1;
    v109 = 0;
    v76 = qword_1C7F2C0;
    sub_1833EB0(qword_1C7F2C0, &v101, &v97, &v105);
    sub_182CBA0(v76, &v107);
    v36 = v105;
    LODWORD(v105) = v101;
    LODWORD(v101) = v36;
    v37 = v106;
    v106 = v102;
    v102 = v37;
    v77 = qword_1C7F2C0;
    v38 = BYTE4(v105) & 1;
    LOBYTE(v37) = BYTE4(v101) & 0xFC | BYTE4(v105) & 2;
    BYTE4(v105) = BYTE4(v101) & 1 | BYTE4(v105) & 0xFC | BYTE4(v101) & 2;
    BYTE4(v101) = v38 | v37;
    v107 = v103;
    v39 = v104;
    v104 = v109;
    v109 = v39;
    LODWORD(v103) = 1;
    LOBYTE(v39) = BYTE4(v103) & 1 | BYTE4(v103) & 2 | v108 & 0xFC;
    BYTE4(v103) = BYTE4(v103) & 0xFC | v108 & 2;
    v108 = v39;
    sub_182CBA0(qword_1C7F2C0, &v105);
    sub_182CBA0(v77, &v107);
  }
  v40 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v101);
  sub_182CBA0(v40, &v103);
  v41 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v97);
  sub_182CBA0(v41, &v99);
  v102 = 0;
  v42 = *(_QWORD *)(a1 + 72);
  v80 = v42;
  v101 = v42;
  if ( a4 == *(_QWORD *)(v42 + 856) )
  {
    v61 = v35 + v18;
    if ( v90 >= v61 )
    {
      if ( a4 == *(_QWORD *)(v42 + 864) && v61 < v90 )
        goto LABEL_22;
    }
    else if ( LODWORD(v93[0]) && LODWORD(v95[0]) )
    {
      v62 = sub_7E4F30(a1, (unsigned int *)a2);
      v63 = *(unsigned int **)(a2 + 32);
      v92 = nullptr;
      v91 = v80;
      sub_87ABE0(a1, v63, (__int64)&v91);
      v98 = nullptr;
      v87 = v91;
      v83 = v92;
      v64 = *(unsigned int **)(a2 + 40);
      v97 = v80;
      sub_87ABE0(a1, v64, (__int64)&v97);
      v49 = v98;
      v65 = 1;
      v66 = v62 ^ 1;
      for ( i = v97; v90 >= v65; ++v65 )
      {
        v67 = sub_7E58C0(a1, v83[v65 - 1]);
        v68 = sub_7E58C0(a1, v49[v90 - v65]);
        sub_7E5420(a1, v66, v67 ^ 1, v68 ^ 1, nullptr);
      }
      goto LABEL_49;
    }
LABEL_19:
    v43 = 1;
    goto LABEL_20;
  }
  if ( a4 != *(_QWORD *)(v42 + 864) || v35 + v18 >= v90 )
    goto LABEL_19;
LABEL_22:
  v92 = nullptr;
  v47 = *(unsigned int **)(a2 + 32);
  v91 = v42;
  sub_87ABE0(a1, v47, (__int64)&v91);
  v98 = nullptr;
  v87 = v91;
  v83 = v92;
  v48 = *(unsigned int **)(a2 + 40);
  v97 = v80;
  sub_87ABE0(a1, v48, (__int64)&v97);
  v49 = v98;
  i = v97;
  v50 = sub_7E4F30(a1, (unsigned int *)a2);
  v51 = sub_186B270(0x10u);
  *(_DWORD *)(v51 + 8) = v50;
  v52 = (unsigned int *)(v51 + 8);
  *(_QWORD *)v51 = 0x100000002LL;
  if ( v90 <= 1 )
  {
    v69 = 1;
  }
  else
  {
    v78 = 1;
    v84 = v83;
    do
    {
      v86 = *(_QWORD *)(a1 + 72);
      v54 = sub_15E1B70(v86);
      v55 = v54;
      if ( v54 )
        ++*(_DWORD *)(v54 + 8);
      v56 = sub_7E58C0(a1, v54);
      v57 = *(v52 - 1);
      if ( (_DWORD)v57 == *(v52 - 2) )
      {
        v58 = (unsigned int)(3 * v57 + 1) >> 1;
        v59 = 4 * v58 + 8;
        if ( 4 * (int)v57 + 8 >= (unsigned int)v59 || (unsigned int)v57 >= v58 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v105, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v105);
          sub_233E40((__int64)&v105);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v89 = v56;
        v88 = (unsigned int)(3 * v57 + 1) >> 1;
        v60 = (unsigned int *)sub_186B300(v52 - 2, v59);
        v52 = v60 + 2;
        v56 = v89;
        *v60 = v88;
        v57 = v60[1];
      }
      v52[v57] = v56;
      ++*(v52 - 1);
      if ( v55 )
      {
        v53 = (*(_DWORD *)(v55 + 8))-- == 1;
        if ( v53 )
          sub_15D7BC0(v86, v55);
      }
      ++v78;
      ++v84;
    }
    while ( v78 < v90 );
    v69 = *(v52 - 1);
  }
  sub_7E56B0(a1, v69, v52, nullptr, 0);
  sub_186B220(v52 - 2);
LABEL_49:
  if ( v49 )
  {
    v70 = v49;
    v71 = (unsigned __int64)&v49[*((unsigned int *)v49 - 1)];
    if ( (unsigned __int64)v49 < v71 )
    {
      do
      {
        while ( 1 )
        {
          v72 = *v70;
          if ( *v70 )
          {
            v53 = (*(_DWORD *)(v72 + 8))-- == 1;
            if ( v53 )
              break;
          }
          if ( (unsigned __int64)++v70 >= v71 )
            goto LABEL_56;
        }
        ++v70;
        sub_15D7BC0(i, v72);
      }
      while ( (unsigned __int64)v70 < v71 );
    }
LABEL_56:
    sub_186B220(v49 - 1);
  }
  if ( v83 )
  {
    v73 = v83;
    v74 = (unsigned __int64)&v83[*((unsigned int *)v83 - 1)];
    if ( (unsigned __int64)v83 < v74 )
    {
      do
      {
        while ( 1 )
        {
          v75 = *v73;
          if ( *v73 )
          {
            v53 = (*(_DWORD *)(v75 + 8))-- == 1;
            if ( v53 )
              break;
          }
          if ( (unsigned __int64)++v73 >= v74 )
            goto LABEL_64;
        }
        ++v73;
        sub_15D7BC0(v87, v75);
      }
      while ( (unsigned __int64)v73 < v74 );
    }
LABEL_64:
    sub_186B220(v83 - 1);
  }
  v43 = 0;
LABEL_20:
  v44 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v95);
  sub_182CBA0(v44, v96);
  v45 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v93);
  sub_182CBA0(v45, v94);
  return v43;
}

