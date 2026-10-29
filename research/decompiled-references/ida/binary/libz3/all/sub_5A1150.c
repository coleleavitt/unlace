__int64 __fastcall sub_5A1150(_QWORD *a1, __int64 *a2)
{
  char **v2; // r12
  char **exception; // r12
  char **v4; // r12
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 *v9; // rbx
  void *v10; // rbp
  __int64 (__fastcall *v11)(__int64, __int64); // rdx
  char v12; // al
  __int64 v13; // rax
  __int64 *v14; // rbp
  unsigned __int64 v15; // r14
  __int64 v16; // rsi
  bool v17; // zf
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rdx
  int v21; // eax
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r14
  unsigned int v25; // eax
  unsigned int v26; // edx
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rbp
  unsigned int v30; // ecx
  __int64 v31; // rax
  int v32; // ecx
  __int64 *v33; // rax
  size_t v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rbp
  _QWORD *v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  __int64 *v41; // rdx
  void *v42; // rdi
  _QWORD *v43; // rax
  unsigned int v44; // r14d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rax
  int v48; // ecx
  unsigned int v49; // r14d
  unsigned int *v50; // rax
  __int64 v51; // rdx
  int v52; // r8d
  int v53; // r9d
  int v54; // r15d
  _BYTE *v55; // rdi
  char *v56; // rcx
  char *v57; // rax
  __int64 v58; // rdx
  __int64 result; // rax
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 *v62; // rbp
  unsigned __int64 v63; // r13
  __int64 v64; // rsi
  __int64 *v65; // rbx
  unsigned __int64 v66; // rbp
  __int64 v67; // rsi
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rbp
  int v72; // [rsp+0h] [rbp-278h]
  __int64 v73; // [rsp+8h] [rbp-270h]
  int v74; // [rsp+18h] [rbp-260h]
  unsigned int v75; // [rsp+1Ch] [rbp-25Ch]
  int v76[2]; // [rsp+20h] [rbp-258h]
  int v77[2]; // [rsp+20h] [rbp-258h]
  int *v78; // [rsp+28h] [rbp-250h]
  int *v79; // [rsp+30h] [rbp-248h]
  void *v80; // [rsp+38h] [rbp-240h]
  __int64 v81; // [rsp+40h] [rbp-238h]
  __int64 *v82; // [rsp+48h] [rbp-230h]
  int v83[2]; // [rsp+50h] [rbp-228h] BYREF
  void *v84; // [rsp+58h] [rbp-220h] BYREF
  void *v85; // [rsp+60h] [rbp-218h] BYREF
  int v86[2]; // [rsp+68h] [rbp-210h] BYREF
  int v87[2]; // [rsp+70h] [rbp-208h]
  int v88; // [rsp+78h] [rbp-200h]
  int v89[2]; // [rsp+80h] [rbp-1F8h]
  int v90; // [rsp+88h] [rbp-1F0h]
  int v91[2]; // [rsp+90h] [rbp-1E8h] BYREF
  int v92[2]; // [rsp+98h] [rbp-1E0h]
  int v93; // [rsp+A0h] [rbp-1D8h] BYREF
  void *v94; // [rsp+A8h] [rbp-1D0h]
  void *v95; // [rsp+B0h] [rbp-1C8h]
  int v96; // [rsp+B8h] [rbp-1C0h]
  int v97[2]; // [rsp+C0h] [rbp-1B8h] BYREF
  char v98; // [rsp+C8h] [rbp-1B0h]
  int v99; // [rsp+D0h] [rbp-1A8h]
  int v100; // [rsp+D8h] [rbp-1A0h]
  int v101; // [rsp+E0h] [rbp-198h]
  int v102; // [rsp+E8h] [rbp-190h]
  int v103; // [rsp+F0h] [rbp-188h]
  int v104; // [rsp+F8h] [rbp-180h]
  int v105; // [rsp+100h] [rbp-178h]
  int v106; // [rsp+108h] [rbp-170h]
  int v107; // [rsp+110h] [rbp-168h]
  int v108; // [rsp+118h] [rbp-160h]
  int v109; // [rsp+120h] [rbp-158h]
  int v110; // [rsp+128h] [rbp-150h]
  int v111; // [rsp+130h] [rbp-148h]
  int v112; // [rsp+138h] [rbp-140h]
  int v113; // [rsp+140h] [rbp-138h]
  int v114; // [rsp+148h] [rbp-130h]
  int v115[2]; // [rsp+150h] [rbp-128h]
  char v116[8]; // [rsp+158h] [rbp-120h]
  int v117[2]; // [rsp+160h] [rbp-118h] BYREF
  int v118; // [rsp+168h] [rbp-110h]
  __int16 v119; // [rsp+16Ch] [rbp-10Ch]
  int v120; // [rsp+17Ch] [rbp-FCh]
  __int128 v121; // [rsp+188h] [rbp-F0h]
  __int128 v122; // [rsp+198h] [rbp-E0h]
  void *v123; // [rsp+1A8h] [rbp-D0h]
  __int64 v124; // [rsp+1B0h] [rbp-C8h]
  _BYTE v125[192]; // [rsp+1B8h] [rbp-C0h] BYREF

  v6 = a2[1];
  v82 = a2;
  *(_QWORD *)v87 = v6;
  *(_QWORD *)v89 = v6;
  *(_QWORD *)v91 = 0;
  *(_QWORD *)v92 = v6;
  sub_1624F90(&v93, v6);
  v79 = v97;
  sub_1584DD0(v97, v6, 0);
  v7 = a1[13];
  *(_QWORD *)v115 = 0;
  *(_DWORD *)v116 = 0;
  *(_QWORD *)v83 = 0;
  *(_QWORD *)v97 = &off_1C61DB8;
  (*(void (__fastcall **)(void **))(*(_QWORD *)v7 + 200LL))(&v84);
  (*(void (__fastcall **)(void **))(*(_QWORD *)a1[13] + 208LL))(&v85);
  v8 = a1[4];
  if ( v8 )
  {
    LODWORD(v80) = *(_DWORD *)(v8 - 4);
    HIDWORD(v80) = (_DWORD)v80 - 1;
    v81 = 8LL * (unsigned int)((_DWORD)v80 - 1);
  }
  else
  {
    v81 = 0x7FFFFFFF8LL;
    v80 = (void *)0xFFFFFFFF00000000LL;
  }
  *(_QWORD *)v76 = 0;
  v9 = nullptr;
  while ( 1 )
  {
    v10 = v85;
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v84 + 40LL);
    if ( v11 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v84 + 16LL))() )
        goto LABEL_8;
      v12 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else
    {
      v12 = v11((__int64)v84, (__int64)v85);
    }
    if ( v12 )
      break;
LABEL_8:
    v13 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v84 + 24LL))(v84);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 24LL))(v13, v83);
    if ( v9 )
    {
      v14 = v9;
      v15 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
      if ( (unsigned __int64)v9 < v15 )
      {
        do
        {
          while ( 1 )
          {
            v16 = *v14;
            if ( *v14 )
            {
              v17 = (*(_DWORD *)(v16 + 8))-- == 1;
              if ( v17 )
                break;
            }
            if ( (unsigned __int64)++v14 >= v15 )
              goto LABEL_15;
          }
          sub_15D7BC0(v6, v16);
          ++v14;
        }
        while ( (unsigned __int64)v14 < v15 );
      }
LABEL_15:
      *((_DWORD *)v9 - 1) = 0;
    }
    v18 = *(_QWORD *)(a1[14] + 8LL * *(unsigned int *)(*(_QWORD *)v83 + v81));
    v78 = v91;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 144LL))(v18, v91);
    if ( (unsigned int)v80 > 1 )
    {
      v19 = 0;
      v73 = (unsigned int)((_DWORD)v80 - 1);
      do
      {
        sub_1625BE0(&v93, *(_QWORD *)(*(_QWORD *)v83 + 8 * v19), *(_QWORD *)(a1[2] + 8 * v19));
        sub_15DB5C0(v6, (unsigned int)v19, *(_QWORD *)(a1[2] + 8 * v19));
        v23 = sub_15E1B70(v6);
        v24 = v23;
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
        if ( v9 )
        {
          v25 = *((_DWORD *)v9 - 1);
          if ( v25 == *((_DWORD *)v9 - 2) )
          {
            v26 = (3 * v25 + 1) >> 1;
            v27 = 8 * v26 + 8;
            if ( 8 * v25 + 8 >= (unsigned int)v27 || v25 >= v26 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v117, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v117);
              sub_233E40((__int64)v117);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v75 = (3 * v25 + 1) >> 1;
            v28 = (unsigned int *)sub_186B300(v9 - 1, v27);
            v9 = (__int64 *)(v28 + 2);
            *v28 = v75;
            LODWORD(v28) = v28[1];
            v22 = &v9[(unsigned int)v28];
            v21 = (_DWORD)v28 + 1;
          }
          else
          {
            v20 = v25;
            v21 = v25 + 1;
            v22 = &v9[v20];
          }
        }
        else
        {
          v43 = (_QWORD *)sub_186B270(0x18u);
          v9 = v43 + 1;
          v22 = v43 + 1;
          *v43 = 2;
          v21 = 1;
        }
        *v22 = v24;
        ++v19;
        *((_DWORD *)v9 - 1) = v21;
      }
      while ( v73 != v19 );
    }
    sub_1585D20(v97, *(_QWORD *)v91, 0, HIDWORD(v80), 0, v91);
    v29 = *(_QWORD *)v91;
    if ( *(_QWORD *)v91 )
      ++*(_DWORD *)(*(_QWORD *)v91 + 8LL);
    if ( v9 )
    {
      v30 = *((_DWORD *)v9 - 1);
      if ( v30 == *((_DWORD *)v9 - 2) )
      {
        v44 = (3 * v30 + 1) >> 1;
        v45 = 8 * v44 + 8;
        if ( 8 * v30 + 8 >= (unsigned int)v45 || v30 >= v44 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v117, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v117);
          sub_233E40((__int64)v117);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v46 = (unsigned int *)sub_186B300(v9 - 1, v45);
        v9 = (__int64 *)(v46 + 2);
        *v46 = v44;
        v47 = v46[1];
        v48 = v47;
        v33 = &v9[v47];
        v32 = v48 + 1;
      }
      else
      {
        v31 = v30;
        v32 = v30 + 1;
        v33 = &v9[v31];
      }
    }
    else
    {
      v68 = (_QWORD *)sub_186B270(0x18u);
      v9 = v68 + 1;
      *v68 = 2;
      v32 = 1;
      v33 = v68 + 1;
    }
    *v33 = v29;
    v34 = 0;
    *((_DWORD *)v9 - 1) = v32;
    v35 = sub_15E1AF0(v6);
    v36 = v35;
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    v37 = *(_QWORD **)v76;
    if ( *(_QWORD *)v76 )
    {
      v38 = *(_DWORD *)(*(_QWORD *)v76 - 4LL);
      if ( v38 == *(_DWORD *)(*(_QWORD *)v76 - 8LL) )
      {
        v49 = (3 * v38 + 1) >> 1;
        v34 = 8 * v49 + 8;
        if ( 8 * v38 + 8 >= (unsigned int)v34 || v38 >= v49 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v117, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v117);
          sub_233E40((__int64)v117);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v50 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v76 - 8LL), v34);
        v51 = v50[1];
        v37 = v50 + 2;
        *v50 = v49;
        *(_QWORD *)v76 = v37;
        LODWORD(v50) = v51;
        v41 = &v37[v51];
        v40 = (_DWORD)v50 + 1;
      }
      else
      {
        v39 = v38;
        v40 = v38 + 1;
        v41 = (__int64 *)(*(_QWORD *)v76 + 8 * v39);
      }
    }
    else
    {
      v69 = (_QWORD *)sub_186B270(0x18u);
      *v69 = 2;
      *(_QWORD *)v76 = v69 + 1;
      v41 = v69 + 1;
      v37 = v69 + 1;
      v40 = 1;
    }
    v42 = v84;
    *v41 = v36;
    *((_DWORD *)v37 - 1) = v40;
    (*(void (__fastcall **)(void *, size_t))(*(_QWORD *)v42 + 32LL))(v42, v34);
  }
  *(_QWORD *)v86 = 0;
  *(_QWORD *)v117 = v6;
  v118 = 256;
  v119 = 0;
  v120 = 0;
  v123 = v125;
  v124 = 0x1000000000LL;
  v121 = 0;
  v122 = 0;
  sub_14DC230(v117, v86);
  if ( *(_QWORD *)v76 )
    v54 = *(_DWORD *)(*(_QWORD *)v76 - 4LL);
  else
    v54 = 0;
  if ( (_BYTE)v118 )
  {
    if ( (unsigned int)sub_14E0E20((int)v117, v54, v76[0], (int)v82, v52, v53, v72, v73, (int)&v93, v74, v76[0], v78) != 5 )
      goto LABEL_49;
LABEL_92:
    v70 = sub_15E1AF0(v117[0]);
    v71 = v70;
    if ( v70 )
      ++*(_DWORD *)(v70 + 8);
    sub_5A00F0(*v82, v82[1]);
    *v82 = v71;
  }
  else if ( (unsigned int)sub_14E03D0(
                            (int)v117,
                            v72,
                            v73,
                            (int)&v93,
                            v74,
                            v76[0],
                            (int)v78,
                            (int)v97,
                            v80,
                            v81,
                            (int)v82,
                            v83[0],
                            (int)v84,
                            (int)v85,
                            v86[0],
                            v87[0],
                            v88,
                            v89[0],
                            v90,
                            v91[0],
                            v92[0],
                            v93,
                            (int)v94,
                            (int)v95,
                            v96,
                            v97[0],
                            v98,
                            v99,
                            v100,
                            v101,
                            v102,
                            v103,
                            v104,
                            v105,
                            v106,
                            v107,
                            v108,
                            v109,
                            v110,
                            v111,
                            v112,
                            v113,
                            v114,
                            v115[0],
                            v116[0]) == 5 )
  {
    goto LABEL_92;
  }
LABEL_49:
  v55 = v123;
  v56 = (char *)v123 + 8 * (unsigned int)v124;
  v57 = (char *)v123;
  if ( v123 != v56 )
  {
    do
    {
      v58 = *(_QWORD *)v57;
      v57 += 8;
      *(_BYTE *)(v58 + 6) &= ~1u;
    }
    while ( v56 != v57 );
  }
  LODWORD(v124) = 0;
  if ( v55 != v125 && v55 )
    sub_186B220(v55);
  if ( *((_QWORD *)&v122 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v122 + 1) - 8LL));
  if ( (_QWORD)v122 )
    sub_186B220((void *)(v122 - 8));
  if ( *((_QWORD *)&v121 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v121 + 1) - 8LL));
  if ( (_QWORD)v121 )
    sub_186B220((void *)(v121 - 8));
  sub_18572D0(v86);
  sub_59FDF0((void (__fastcall ***)(_QWORD))v85);
  sub_59FDF0((void (__fastcall ***)(_QWORD))v84);
  if ( *(_QWORD *)v83 )
    sub_186B220((void *)(*(_QWORD *)v83 - 8LL));
  *(_QWORD *)v97 = &qword_1C637E8;
  result = sub_15841B0(v79);
  if ( v95 )
    result = sub_186B220(v95);
  if ( v94 )
    result = sub_186B220(v94);
  v60 = *(_QWORD *)v91;
  if ( *(_QWORD *)v91 )
  {
    v61 = *(_QWORD *)v92;
    v17 = (*(_DWORD *)(*(_QWORD *)v91 + 8LL))-- == 1;
    if ( v17 )
      result = sub_15D7BC0(v61, v60);
  }
  if ( v9 )
  {
    v62 = v9;
    v63 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
    if ( (unsigned __int64)v9 < v63 )
    {
      do
      {
        while ( 1 )
        {
          v64 = *v62;
          if ( *v62 )
          {
            v17 = (*(_DWORD *)(v64 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( (unsigned __int64)++v62 >= v63 )
            goto LABEL_78;
        }
        ++v62;
        sub_15D7BC0(v6, v64);
      }
      while ( (unsigned __int64)v62 < v63 );
    }
LABEL_78:
    result = sub_186B220(v9 - 1);
  }
  v65 = *(__int64 **)v77;
  if ( *(_QWORD *)v77 )
  {
    v66 = *(_QWORD *)v77 + 8LL * *(unsigned int *)(*(_QWORD *)v77 - 4LL);
    if ( *(_QWORD *)v77 < v66 )
    {
      do
      {
        while ( 1 )
        {
          v67 = *v65;
          if ( *v65 )
          {
            v17 = (*(_DWORD *)(v67 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( (unsigned __int64)++v65 >= v66 )
            return sub_186B220((void *)(*(_QWORD *)v77 - 8LL));
        }
        ++v65;
        sub_15D7BC0(v6, v67);
      }
      while ( (unsigned __int64)v65 < v66 );
    }
    return sub_186B220((void *)(*(_QWORD *)v77 - 8LL));
  }
  return result;
}

