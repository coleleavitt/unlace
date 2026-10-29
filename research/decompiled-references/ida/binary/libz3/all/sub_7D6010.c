__int64 __fastcall sub_7D6010(__int64 a1, _QWORD *a2)
{
  char **v2; // r12
  char **v3; // r12
  char **v4; // r12
  char **v5; // r12
  char **exception; // r12
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rdx
  void *v11; // r14
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // edi
  __int64 v16; // rax
  void *v17; // rbp
  int i; // ebp
  __int64 v19; // r15
  _QWORD *v20; // rax
  unsigned int v21; // esi
  unsigned int *v22; // rax
  unsigned int v23; // r14d
  unsigned int *v24; // rbx
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // r15
  int v28; // eax
  unsigned int *v29; // rbp
  unsigned __int64 v30; // r14
  __int64 v31; // rsi
  bool v32; // zf
  int v33; // edx
  __int64 v34; // r14
  __int64 v35; // rcx
  unsigned int v36; // eax
  __int64 *v37; // rcx
  __int64 v38; // rbp
  unsigned int v39; // ecx
  __int64 v40; // rax
  char v41; // cl
  unsigned int v42; // eax
  unsigned int v43; // ecx
  size_t v44; // rsi
  unsigned int *v45; // rax
  unsigned int v46; // ebp
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  int v52; // eax
  __int64 *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r13
  unsigned int v56; // eax
  int v57; // eax
  int v58; // r8d
  int v59; // r9d
  __int64 v60; // rax
  __int64 v61; // r12
  unsigned int v62; // edx
  int v63; // ebp
  __int64 v64; // r12
  unsigned int *v65; // rbp
  unsigned __int64 v66; // r13
  __int64 v67; // rsi
  unsigned int v69; // r13d
  size_t v70; // rsi
  unsigned int *v71; // rax
  unsigned int v72; // edx
  size_t v73; // rsi
  unsigned int *v74; // rax
  unsigned int v75; // ebp
  size_t v76; // rsi
  unsigned int *v77; // rax
  __int64 v78; // rdx
  _QWORD *v79; // rax
  _QWORD *v80; // [rsp+0h] [rbp-C8h]
  int v81[2]; // [rsp+0h] [rbp-C8h]
  int v82[2]; // [rsp+0h] [rbp-C8h]
  int v83; // [rsp+0h] [rbp-C8h]
  int v84[2]; // [rsp+0h] [rbp-C8h]
  int v85; // [rsp+8h] [rbp-C0h]
  int v86[2]; // [rsp+8h] [rbp-C0h]
  unsigned int v87; // [rsp+8h] [rbp-C0h]
  int v88; // [rsp+8h] [rbp-C0h]
  int v89; // [rsp+8h] [rbp-C0h]
  int v90; // [rsp+10h] [rbp-B8h]
  int v91; // [rsp+10h] [rbp-B8h]
  int v92; // [rsp+10h] [rbp-B8h]
  int v93; // [rsp+10h] [rbp-B8h]
  unsigned int v94; // [rsp+14h] [rbp-B4h]
  char v95[8]; // [rsp+18h] [rbp-B0h]
  int v96; // [rsp+18h] [rbp-B0h]
  char v97[8]; // [rsp+18h] [rbp-B0h]
  int v98; // [rsp+18h] [rbp-B0h]
  int v99[2]; // [rsp+20h] [rbp-A8h]
  int v100; // [rsp+20h] [rbp-A8h]
  int v101; // [rsp+20h] [rbp-A8h]
  int v102; // [rsp+20h] [rbp-A8h]
  int v103[2]; // [rsp+20h] [rbp-A8h]
  __int64 *ptr; // [rsp+28h] [rbp-A0h]
  __int64 *ptra; // [rsp+28h] [rbp-A0h]
  __int64 *ptrb; // [rsp+28h] [rbp-A0h]
  int v107; // [rsp+30h] [rbp-98h]
  int v108; // [rsp+38h] [rbp-90h]
  int v109[2]; // [rsp+40h] [rbp-88h] BYREF
  void *v110[2]; // [rsp+48h] [rbp-80h] BYREF
  char v111[8]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v112; // [rsp+68h] [rbp-60h]
  __int64 v113[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v114[9]; // [rsp+80h] [rbp-48h] BYREF

  v9 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v9 == sub_79EFD0 )
    v80 = (_QWORD *)a2[18];
  else
    v80 = (_QWORD *)v9((__int64)a2);
  v110[1] = v80;
  sub_16669D0(v111, v80);
  v10 = *(unsigned int *)(a1 + 16);
  v113[0] = 0;
  v113[1] = 0;
  v114[0] = 1;
  v11 = qword_1C7F2C0;
  v114[1] = 0;
  if ( (int)v10 < 0 )
    sub_1830C40(qword_1C7F2C0, v113, v10);
  else
    LODWORD(v113[0]) = v10;
  sub_182CBA0(v11, v114);
  v15 = v112;
  BYTE4(v114[0]) &= ~1u;
  LODWORD(v114[0]) = 1;
  if ( !v112 )
  {
    sub_16669E0(v111);
    v15 = v112;
  }
  v16 = sub_166A700(v15, (unsigned int)v113, 1, v12, v13, v14);
  v17 = qword_1C7F2C0;
  *(_QWORD *)v99 = v16;
  sub_182CBA0(qword_1C7F2C0, v113);
  sub_182CBA0(v17, v114);
  if ( *(_QWORD *)v99 )
    ++*(_DWORD *)(*(_QWORD *)v99 + 8LL);
  i = *(_DWORD *)(a1 + 20);
  *(_QWORD *)v109 = *(_QWORD *)v99;
  *(_QWORD *)v95 = v80[106];
  if ( i )
  {
    v19 = *(_QWORD *)(a1 + 40);
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    v20 = (_QWORD *)sub_186B270(0x18u);
    *v20 = 2;
    v21 = *(_DWORD *)(a1 + 20);
    v22 = (unsigned int *)(v20 + 1);
    v23 = 0;
    v24 = v22;
    for ( i = 1; ; i = v49 + 1 )
    {
      ++v23;
      *(_QWORD *)v22 = v19;
      *(v24 - 1) = i;
      if ( v23 >= v21 )
        break;
      while ( 1 )
      {
        v19 = *(_QWORD *)(a1 + 8LL * v23 + 40);
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        v25 = *(v24 - 1);
        if ( v25 == *(v24 - 2) )
          break;
        i = v25 + 1;
        ++v23;
        *(_QWORD *)&v24[2 * v25] = v19;
        *(v24 - 1) = v25 + 1;
        if ( v23 >= v21 )
          goto LABEL_18;
      }
      v46 = (3 * v25 + 1) >> 1;
      v47 = 8 * v46 + 8;
      if ( 8 * v25 + 8 >= (unsigned int)v47 || v25 >= v46 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v113, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v113);
        sub_233E40((__int64)v113);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = (unsigned int *)sub_186B300(v24 - 2, v47);
      *v48 = v46;
      v24 = v48 + 2;
      v21 = *(_DWORD *)(a1 + 20);
      v49 = v48[1];
      v22 = &v48[2 * v49 + 2];
    }
  }
  else
  {
    v24 = nullptr;
  }
LABEL_18:
  sub_180C5A0(v113, "bind");
  v26 = sub_15E3760((int)v80, (int)v113, i, (int)v24, v95[0], (int)v80, v85, v90, *(int *)v95, v99[0], v113);
  v27 = v26;
  if ( v26 )
  {
    v28 = *(_DWORD *)(v26 + 8);
    *(_DWORD *)(v27 + 8) = v28 + 1;
    if ( v24 )
    {
LABEL_20:
      v29 = v24;
      v30 = (unsigned __int64)&v24[2 * *(v24 - 1)];
      if ( (unsigned __int64)v24 < v30 )
      {
        do
        {
          while ( 1 )
          {
            v31 = *(_QWORD *)v29;
            if ( *(_QWORD *)v29 )
            {
              v32 = (*(_DWORD *)(v31 + 8))-- == 1;
              if ( v32 )
                break;
            }
            v29 += 2;
            if ( (unsigned __int64)v29 >= v30 )
              goto LABEL_26;
          }
          sub_15D7BC0(*(_QWORD *)v81, v31);
          v29 += 2;
        }
        while ( (unsigned __int64)v29 < v30 );
      }
LABEL_26:
      v33 = *(_DWORD *)(a1 + 24);
      *(v24 - 1) = 0;
      if ( !v33 )
      {
        if ( v27 )
        {
LABEL_49:
          ++*(_DWORD *)(v27 + 8);
          v36 = *(v24 - 1);
          goto LABEL_50;
        }
        if ( *(v24 - 2) )
        {
          v36 = 0;
          goto LABEL_51;
        }
        goto LABEL_92;
      }
      goto LABEL_27;
    }
    if ( !*(_DWORD *)(a1 + 24) )
    {
      *(_DWORD *)(v27 + 8) = v28 + 2;
      goto LABEL_82;
    }
LABEL_27:
    v34 = 0;
    while ( 1 )
    {
      v38 = a2[291];
      v39 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v34);
      v40 = v39 >> 1;
      v41 = v39 ^ 1;
      if ( !v38 )
        break;
      if ( (unsigned int)v40 < *(_DWORD *)(v38 - 4) )
      {
        v38 = *(_QWORD *)(v38 + 8 * v40);
        *(_QWORD *)v86 = a2[18];
        if ( v38 )
        {
          if ( (v41 & 1) == 0 || (v38 = sub_15EC2C0(a2[18], v38)) != 0 )
            ++*(_DWORD *)(v38 + 8);
        }
LABEL_35:
        if ( v24 )
          goto LABEL_36;
        goto LABEL_44;
      }
      v38 = 0;
      *(_QWORD *)v86 = a2[18];
      if ( v24 )
      {
LABEL_36:
        v42 = *(v24 - 1);
        if ( v42 == *(v24 - 2) )
        {
          v43 = (3 * v42 + 1) >> 1;
          v44 = 8 * v43 + 8;
          if ( 8 * v42 + 8 >= (unsigned int)v44 || v42 >= v43 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(ptr, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, ptr);
            sub_233E40((__int64)ptr);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v94 = (3 * v42 + 1) >> 1;
          v45 = (unsigned int *)sub_186B300(v24 - 2, v44);
          v24 = v45 + 2;
          *v45 = v94;
          LODWORD(v45) = v45[1];
          v37 = (__int64 *)&v24[2 * (unsigned int)v45];
          v36 = (_DWORD)v45 + 1;
        }
        else
        {
          v35 = v42;
          v36 = v42 + 1;
          v37 = (__int64 *)&v24[2 * v35];
        }
        goto LABEL_29;
      }
LABEL_44:
      v50 = (_QWORD *)sub_186B270(0x18u);
      v24 = (unsigned int *)(v50 + 1);
      *v50 = 2;
      v36 = 1;
      v37 = (__int64 *)v24;
LABEL_29:
      *v37 = v38;
      ++v34;
      *(v24 - 1) = v36;
      if ( (unsigned int)v34 >= *(_DWORD *)(a1 + 24) )
      {
        if ( v27 )
          goto LABEL_49;
LABEL_50:
        if ( *(v24 - 2) != v36 )
        {
LABEL_51:
          v51 = v36;
          v52 = v36 + 1;
          v53 = (__int64 *)&v24[2 * v51];
          goto LABEL_52;
        }
        v75 = (3 * v36 + 1) >> 1;
        v76 = 8 * v75 + 8;
        if ( 8 * v36 + 8 < (unsigned int)v76 && v36 < v75 )
        {
          v77 = (unsigned int *)sub_186B300(v24 - 2, v76);
          v78 = v77[1];
          v24 = v77 + 2;
          *v77 = v75;
          LODWORD(v77) = v78;
          v53 = (__int64 *)&v24[2 * v78];
          v52 = (_DWORD)v77 + 1;
          goto LABEL_52;
        }
LABEL_92:
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(ptr, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, ptr);
        sub_233E40((__int64)ptr);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    *(_QWORD *)v86 = a2[18];
    goto LABEL_35;
  }
  if ( v24 )
    goto LABEL_20;
  if ( *(_DWORD *)(a1 + 24) )
    goto LABEL_27;
LABEL_82:
  v79 = (_QWORD *)sub_186B270(0x18u);
  v24 = (unsigned int *)(v79 + 1);
  *v79 = 2;
  v52 = 1;
  v53 = (__int64 *)v24;
LABEL_52:
  *v53 = v27;
  *(v24 - 1) = v52;
  sub_180C5A0(v110, "gen");
  v54 = sub_15E3760(v81[0], (int)v110, 1, (int)v109, v96, v81[0], v86[0], v91, v96, v100, ptr);
  v55 = v54;
  if ( v54 )
    ++*(_DWORD *)(v54 + 8);
  v56 = *(v24 - 1);
  if ( v56 == *(v24 - 2) )
  {
    v72 = (3 * v56 + 1) >> 1;
    v73 = 8 * v72 + 8;
    if ( 8 * v56 + 8 >= (unsigned int)v73 || v56 >= v72 )
    {
      v5 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(ptra, "Overflow encountered when expanding vector");
      *v5 = (char *)off_1C63128;
      sub_2333C0(v5 + 1, ptra);
      sub_233E40((__int64)ptra);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v87 = (3 * v56 + 1) >> 1;
    v74 = (unsigned int *)sub_186B300(v24 - 2, v73);
    v24 = v74 + 2;
    *v74 = v87;
    v56 = v74[1];
  }
  *(_QWORD *)&v24[2 * v56] = v55;
  *(v24 - 1) = v56 + 1;
  v57 = sub_15E3510(*(_QWORD *)v82, a1 + 8, 0, 0, *(_QWORD *)v97, 0);
  v60 = sub_15DC610(
          v82[0],
          v57,
          0,
          0,
          v58,
          v59,
          v82[0],
          v87,
          v92,
          *(int *)v97,
          v101,
          (char)ptra,
          v107,
          v108,
          v109[0],
          v110[0]);
  v61 = v60;
  if ( v60 )
    ++*(_DWORD *)(v60 + 8);
  v62 = *(v24 - 1);
  if ( v62 == *(v24 - 2) )
  {
    v69 = (3 * v62 + 1) >> 1;
    v70 = 8 * v69 + 8;
    if ( 8 * v62 + 8 >= (unsigned int)v70 || v62 >= v69 )
    {
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(ptrb, "Overflow encountered when expanding vector");
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, ptrb);
      sub_233E40((__int64)ptrb);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v71 = (unsigned int *)sub_186B300(v24 - 2, v70);
    *v71 = v69;
    v62 = v71[1];
    v24 = v71 + 2;
  }
  v63 = v62 + 1;
  *(_QWORD *)&v24[2 * v62] = v61;
  *(v24 - 1) = v62 + 1;
  sub_180C5A0(ptrb, "inst");
  v64 = sub_15E3760(v83, (int)ptrb, v63, (int)v24, v98, v83, v88, v93, v98, v102, ptrb);
  if ( *(_QWORD *)v103 )
  {
    v89 = *(_DWORD *)(*(_QWORD *)v103 + 8LL);
    *(_DWORD *)(*(_QWORD *)v103 + 8LL) = v89 - 1;
    if ( v89 == 1 )
      sub_15D7BC0(*(_QWORD *)v84, *(_QWORD *)v103);
  }
  if ( v27 )
  {
    v32 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(*(_QWORD *)v84, v27);
  }
  v65 = v24;
  v66 = (unsigned __int64)&v24[2 * *(v24 - 1)];
  if ( (unsigned __int64)v24 < v66 )
  {
    do
    {
      while ( 1 )
      {
        v67 = *(_QWORD *)v65;
        if ( *(_QWORD *)v65 )
        {
          v32 = (*(_DWORD *)(v67 + 8))-- == 1;
          if ( v32 )
            break;
        }
        v65 += 2;
        if ( (unsigned __int64)v65 >= v66 )
          goto LABEL_70;
      }
      v65 += 2;
      sub_15D7BC0(*(_QWORD *)v84, v67);
    }
    while ( (unsigned __int64)v65 < v66 );
  }
LABEL_70:
  sub_186B220(v24 - 2);
  return v64;
}

