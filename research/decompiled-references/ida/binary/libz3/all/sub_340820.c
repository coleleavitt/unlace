__int64 __fastcall sub_340820(_QWORD *a1, __int64 a2)
{
  char **v2; // rbp
  __int64 v3; // rdx
  char **v4; // rbp
  __int64 v5; // rdx
  char **v6; // rbp
  __int64 v7; // rdx
  char **exception; // rbp
  __int64 v9; // rdx
  char *v12; // rax
  unsigned int v13; // eax
  _QWORD *v14; // rdi
  unsigned int v15; // r14d
  __int64 v16; // rax
  unsigned int *v17; // rax
  void *v18; // r15
  _QWORD *v19; // r15
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  void *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdx
  void *v29; // rbp
  _QWORD *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  _QWORD *v34; // rcx
  _QWORD *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  _QWORD *v39; // rcx
  unsigned int v41; // ebx
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rax
  unsigned int v45; // ebp
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // ebp
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // ebx
  unsigned int v54; // edi
  unsigned int v55; // ebx
  size_t v56; // rdi
  __int64 v57; // rax
  int *v58; // rbx
  __int64 v59; // rsi
  __int64 v60; // rax
  _QWORD *v61; // rdx
  __int64 v62; // rsi
  int *v63; // rax
  int *v64; // rsi
  int v65; // ecx
  char v66; // di
  __int64 v67; // rcx
  char v68; // di
  __int64 v69; // rcx
  char v70; // di
  __int64 v71; // rcx
  char v72; // di
  __int64 v73; // rcx
  char v74; // di
  __int64 v75; // rcx
  char v76; // di
  __int64 v77; // rcx
  __int64 v78; // rax
  int *v79; // rsi
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  _QWORD *v83; // rax
  void *v84; // [rsp+0h] [rbp-128h]
  void *v85; // [rsp+0h] [rbp-128h]
  void *v86; // [rsp+0h] [rbp-128h]
  void *v87; // [rsp+0h] [rbp-128h]
  void *v88; // [rsp+0h] [rbp-128h]
  void *v89; // [rsp+0h] [rbp-128h]
  int *v90; // [rsp+18h] [rbp-110h]
  _DWORD *v91; // [rsp+20h] [rbp-108h]
  unsigned int v92; // [rsp+2Ch] [rbp-FCh]
  __int64 v93[4]; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v94[2]; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v95[2]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v96[2]; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v97[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v98; // [rsp+90h] [rbp-98h] BYREF
  __int64 v99; // [rsp+98h] [rbp-90h]
  __int64 v100; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v101; // [rsp+A8h] [rbp-80h]
  __int64 v102; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-70h]
  _QWORD v104[2]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v105; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v106; // [rsp+D8h] [rbp-50h]
  __int64 v107; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v108; // [rsp+E8h] [rbp-40h]

  v12 = sub_33D9C0((__int64)a1);
  v13 = (*(__int64 (__fastcall **)(char *, __int64))(*(_QWORD *)v12 + 32LL))(v12, a2);
  v14 = (_QWORD *)a1[116];
  v15 = v13;
  if ( v14 )
  {
    v16 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v16 == *((_DWORD *)v14 - 2) )
    {
      v41 = (unsigned int)(3 * v16 + 1) >> 1;
      v42 = 4 * v41 + 8;
      if ( 4 * (int)v16 + 8 >= (unsigned int)v42 || (unsigned int)v16 >= v41 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_BFCE0(&v98, "Overflow encountered when expanding vector", v9);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v98);
        sub_233E40((__int64)&v98);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v43 = (unsigned int *)sub_186B300(v14 - 1, v42);
      v14 = v43 + 2;
      *v43 = v41;
      v44 = v43[1];
      a1[116] = v14;
      v17 = (unsigned int *)v14 + v44;
    }
    else
    {
      v17 = (unsigned int *)v14 + v16;
    }
  }
  else
  {
    v83 = (_QWORD *)sub_186B270(0x10u);
    v14 = v83 + 1;
    *v83 = 2;
    a1[116] = v83 + 1;
    v17 = (unsigned int *)(v83 + 1);
  }
  *v17 = v15;
  ++*((_DWORD *)v14 - 1);
  v94[0] = 0;
  v18 = qword_1C7F2C0;
  v94[1] = 0;
  v95[0] = 1;
  v95[1] = 0;
  v96[0] = 0;
  v96[1] = 0;
  v97[0] = 1;
  v97[1] = 0;
  v98 = 0;
  v99 = 0;
  v100 = 1;
  v101 = 0;
  if ( (qword_1C7F260 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v98, &qword_1C7F260);
  else
    LODWORD(v98) = qword_1C7F260;
  if ( (qword_1C7F270 & 0x100000000LL) != 0 )
  {
    sub_182C690(v18, &v100, &qword_1C7F270);
  }
  else
  {
    BYTE4(v100) &= ~1u;
    LODWORD(v100) = qword_1C7F270;
  }
  v103 = 0;
  v102 = LODWORD(v94[0]);
  memset((char *)v104 + 4, 0, 12);
  LODWORD(v104[0]) = v95[0];
  v106 = 0;
  v107 = 1;
  v108 = 0;
  v105 = LODWORD(v96[0]);
  v19 = (_QWORD *)a1[117];
  LODWORD(v107) = v97[0];
  if ( v19 )
  {
    v20 = *((unsigned int *)v19 - 1);
    if ( (_DWORD)v20 == *((_DWORD *)v19 - 2) )
    {
      v53 = 3 * v20 + 1;
      v54 = v53 & 0xFFFFFFFE;
      v55 = v53 >> 1;
      v92 = v55;
      v56 = 32 * (v55 + v54) + 8;
      if ( 96 * (int)v20 + 8 >= (unsigned int)v56 || (unsigned int)v20 >= v55 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_BFCE0(v93, "Overflow encountered when expanding vector", v7);
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v93);
        sub_233E40((__int64)v93);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v57 = sub_186B270(v56);
      v58 = (int *)a1[117];
      v91 = (_DWORD *)v57;
      v19 = (_QWORD *)(v57 + 8);
      if ( v58 )
      {
        v59 = v57;
        v60 = (unsigned int)*(v58 - 1);
        v61 = v19;
        *(_DWORD *)(v59 + 4) = v60;
        v62 = 3 * v60;
        v63 = v58;
        v64 = &v58[8 * v62];
        if ( v58 != v64 )
        {
          do
          {
            v65 = *v63;
            v66 = *((_BYTE *)v63 + 4);
            v63 += 24;
            v61 += 12;
            *((_DWORD *)v61 - 24) = v65;
            *((_BYTE *)v61 - 92) = v66 & 3 | *((_BYTE *)v61 - 92) & 0xFC;
            v67 = *((_QWORD *)v63 - 11);
            *((_QWORD *)v63 - 11) = 0;
            *(v61 - 11) = v67;
            v68 = *((_BYTE *)v63 - 76);
            *((_DWORD *)v61 - 20) = *(v63 - 20);
            *((_BYTE *)v61 - 76) = v68 & 3 | *((_BYTE *)v61 - 76) & 0xFC;
            v69 = *((_QWORD *)v63 - 9);
            *((_QWORD *)v63 - 9) = 0;
            *(v61 - 9) = v69;
            v70 = *((_BYTE *)v63 - 60);
            *((_DWORD *)v61 - 16) = *(v63 - 16);
            *((_BYTE *)v61 - 60) = v70 & 3 | *((_BYTE *)v61 - 60) & 0xFC;
            v71 = *((_QWORD *)v63 - 7);
            *((_QWORD *)v63 - 7) = 0;
            *(v61 - 7) = v71;
            v72 = *((_BYTE *)v63 - 44);
            *((_DWORD *)v61 - 12) = *(v63 - 12);
            *((_BYTE *)v61 - 44) = v72 & 3 | *((_BYTE *)v61 - 44) & 0xFC;
            v73 = *((_QWORD *)v63 - 5);
            *((_QWORD *)v63 - 5) = 0;
            *(v61 - 5) = v73;
            v74 = *((_BYTE *)v63 - 28);
            *((_DWORD *)v61 - 8) = *(v63 - 8);
            *((_BYTE *)v61 - 28) = v74 & 3 | *((_BYTE *)v61 - 28) & 0xFC;
            v75 = *((_QWORD *)v63 - 3);
            *((_QWORD *)v63 - 3) = 0;
            *(v61 - 3) = v75;
            v76 = *((_BYTE *)v63 - 12);
            *((_DWORD *)v61 - 4) = *(v63 - 4);
            *((_BYTE *)v61 - 12) = v76 & 3 | *((_BYTE *)v61 - 12) & 0xFC;
            v77 = *((_QWORD *)v63 - 1);
            *((_QWORD *)v63 - 1) = 0;
            *(v61 - 1) = v77;
          }
          while ( v64 != v63 );
        }
        v78 = (unsigned int)*(v58 - 1);
        if ( (_DWORD)v78 )
        {
          v90 = &v58[24 * v78];
          do
          {
            v87 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v58 + 16);
            sub_182CBA0(v87, v58 + 20);
            v88 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v58 + 8);
            sub_182CBA0(v88, v58 + 12);
            v89 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v58);
            v79 = v58 + 4;
            v58 += 24;
            sub_182CBA0(v89, v79);
          }
          while ( v58 != v90 );
          v58 = (int *)a1[117];
        }
        sub_186B220(v58 - 2);
        v21 = &v19[12 * (unsigned int)v91[1]];
      }
      else
      {
        *(_DWORD *)(v57 + 4) = 0;
        v21 = (_QWORD *)(v57 + 8);
      }
      a1[117] = v19;
      *v91 = v92;
    }
    else
    {
      v21 = &v19[12 * v20];
    }
  }
  else
  {
    v80 = (_QWORD *)sub_186B270(0xC8u);
    v19 = v80 + 1;
    *v80 = 2;
    a1[117] = v80 + 1;
    v21 = v80 + 1;
  }
  *(_DWORD *)v21 = v98;
  *((_BYTE *)v21 + 4) = BYTE4(v98) & 3 | *((_BYTE *)v21 + 4) & 0xFC;
  v22 = v99;
  v99 = 0;
  v21[1] = v22;
  *((_DWORD *)v21 + 4) = v100;
  *((_BYTE *)v21 + 20) = BYTE4(v100) & 3 | *((_BYTE *)v21 + 20) & 0xFC;
  v23 = v101;
  v101 = 0;
  v21[3] = v23;
  *((_DWORD *)v21 + 8) = v102;
  *((_BYTE *)v21 + 36) = BYTE4(v102) & 3 | *((_BYTE *)v21 + 36) & 0xFC;
  v24 = v103;
  v103 = 0;
  v21[5] = v24;
  *((_DWORD *)v21 + 12) = v104[0];
  *((_BYTE *)v21 + 52) = BYTE4(v104[0]) & 3 | *((_BYTE *)v21 + 52) & 0xFC;
  v25 = v104[1];
  v104[1] = 0;
  v21[7] = v25;
  v26 = qword_1C7F2C0;
  *((_DWORD *)v21 + 16) = v105;
  *((_BYTE *)v21 + 68) = BYTE4(v105) & 3 | *((_BYTE *)v21 + 68) & 0xFC;
  v27 = v106;
  v106 = 0;
  v21[9] = v27;
  *((_DWORD *)v21 + 20) = v107;
  *((_BYTE *)v21 + 84) = BYTE4(v107) & 3 | *((_BYTE *)v21 + 84) & 0xFC;
  v28 = v108;
  v108 = 0;
  v21[11] = v28;
  ++*((_DWORD *)v19 - 1);
  sub_182CBA0(v26, &v105);
  sub_182CBA0(v26, &v107);
  v84 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v102);
  sub_182CBA0(v84, v104);
  v85 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v98);
  sub_182CBA0(v85, &v100);
  v86 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v96);
  sub_182CBA0(v86, v97);
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v94);
  sub_182CBA0(v29, v95);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v30 = (_QWORD *)a1[120];
  if ( v30 )
  {
    v31 = *((_DWORD *)v30 - 1);
    if ( v31 == *((_DWORD *)v30 - 2) )
    {
      v49 = (3 * v31 + 1) >> 1;
      v50 = 8 * v49 + 8;
      if ( 8 * v31 + 8 >= (unsigned int)v50 || v31 >= v49 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_BFCE0(&v98, "Overflow encountered when expanding vector", v5);
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, &v98);
        sub_233E40((__int64)&v98);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v51 = (unsigned int *)sub_186B300(v30 - 1, v50);
      v52 = v51[1];
      v30 = v51 + 2;
      *v51 = v49;
      a1[120] = v51 + 2;
      LODWORD(v51) = v52;
      v34 = &v30[v52];
      v33 = (_DWORD)v51 + 1;
    }
    else
    {
      v32 = v31;
      v33 = v31 + 1;
      v34 = &v30[v32];
    }
  }
  else
  {
    v81 = (_QWORD *)sub_186B270(0x18u);
    v30 = v81 + 1;
    *v81 = 2;
    v33 = 1;
    a1[120] = v30;
    v34 = v30;
  }
  *v34 = a2;
  *((_DWORD *)v30 - 1) = v33;
  v35 = (_QWORD *)a1[118];
  if ( v35 )
  {
    v36 = *((_DWORD *)v35 - 1);
    if ( v36 == *((_DWORD *)v35 - 2) )
    {
      v45 = (3 * v36 + 1) >> 1;
      v46 = 8 * v45 + 8;
      if ( 8 * v36 + 8 >= (unsigned int)v46 || v36 >= v45 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_BFCE0(&v98, "Overflow encountered when expanding vector", v3);
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, &v98);
        sub_233E40((__int64)&v98);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v47 = (unsigned int *)sub_186B300(v35 - 1, v46);
      v48 = v47[1];
      v35 = v47 + 2;
      *v47 = v45;
      a1[118] = v47 + 2;
      LODWORD(v47) = v48;
      v39 = &v35[v48];
      v38 = (_DWORD)v47 + 1;
    }
    else
    {
      v37 = v36;
      v38 = v36 + 1;
      v39 = &v35[v37];
    }
  }
  else
  {
    v82 = (_QWORD *)sub_186B270(0x18u);
    v35 = v82 + 1;
    *v82 = 2;
    v38 = 1;
    a1[118] = v35;
    v39 = v35;
  }
  *v39 = 0;
  *((_DWORD *)v35 - 1) = v38;
  return v15;
}

