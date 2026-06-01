__int64 __fastcall sub_3C2300(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rsi
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rsi
  _DWORD *v12; // rax
  __int64 v13; // rdi
  bool v14; // zf
  void *v15; // rax
  __int64 v16; // r13
  _DWORD *v17; // rax
  __int64 v18; // rdi
  __int64 *v19; // rcx
  __int64 v20; // rsi
  void *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned int i; // r15d
  void *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 *v28; // rbx
  __int64 v29; // rsi
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v38; // r9
  _WORD *v39; // r8
  _BYTE *v40; // rdi
  _DWORD *v41; // r8
  char *v42; // rcx
  char *v43; // rax
  __int64 v44; // r9
  __int64 v45; // rdx
  _QWORD *v46; // rdx
  unsigned int v47; // esi
  unsigned int *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 *v52; // rax
  int v53; // edx
  __int64 v54; // r13
  __int64 v55; // rdi
  __int64 *v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // r13
  __int64 *v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // r14
  _QWORD *v66; // rdx
  __int64 v67; // r13
  unsigned int v68; // r15d
  size_t v69; // rsi
  unsigned int *v70; // rax
  unsigned int v71; // ecx
  __int64 v72; // rax
  _QWORD *v73; // rcx
  _QWORD *v74; // rdx
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rdx
  size_t v79; // rdi
  __int64 v80; // rax
  _QWORD *v81; // rdi
  _DWORD *v82; // rsi
  __int64 v83; // r9
  unsigned __int64 v84; // rax
  __int64 v85; // r9
  _QWORD *v86; // rax
  char **v87; // r14
  char **exception; // r14
  void *v89; // [rsp+0h] [rbp-2A0h]
  __int64 v90; // [rsp+0h] [rbp-2A0h]
  int v91; // [rsp+8h] [rbp-298h]
  _DWORD *v92; // [rsp+10h] [rbp-290h]
  __int64 v93; // [rsp+18h] [rbp-288h]
  __int64 v94; // [rsp+20h] [rbp-280h]
  _DWORD *v95; // [rsp+20h] [rbp-280h]
  __int64 v96; // [rsp+20h] [rbp-280h]
  unsigned int v97; // [rsp+20h] [rbp-280h]
  _DWORD *v98; // [rsp+20h] [rbp-280h]
  __int64 v99; // [rsp+28h] [rbp-278h]
  _QWORD *v100; // [rsp+30h] [rbp-270h]
  __int64 *v101; // [rsp+38h] [rbp-268h]
  __int64 *v102; // [rsp+40h] [rbp-260h]
  __int64 v103; // [rsp+48h] [rbp-258h]
  int *v104; // [rsp+50h] [rbp-250h]
  int *v105; // [rsp+60h] [rbp-240h]
  __int64 *v106; // [rsp+68h] [rbp-238h]
  int v107; // [rsp+70h] [rbp-230h]
  int v108; // [rsp+78h] [rbp-228h]
  int v109; // [rsp+7Ch] [rbp-224h] BYREF
  int v110[4]; // [rsp+80h] [rbp-220h] BYREF
  __int64 v111; // [rsp+90h] [rbp-210h] BYREF
  int v112[2]; // [rsp+98h] [rbp-208h]
  __int64 v113; // [rsp+A0h] [rbp-200h] BYREF
  __int64 v114; // [rsp+A8h] [rbp-1F8h]
  __int64 v115; // [rsp+B0h] [rbp-1F0h] BYREF
  int v116; // [rsp+B8h] [rbp-1E8h]
  __int64 v117; // [rsp+C0h] [rbp-1E0h] BYREF
  int v118; // [rsp+C8h] [rbp-1D8h]
  __int64 v119; // [rsp+D0h] [rbp-1D0h] BYREF
  __int64 v120; // [rsp+D8h] [rbp-1C8h]
  __int64 v121; // [rsp+E0h] [rbp-1C0h] BYREF
  int v122; // [rsp+E8h] [rbp-1B8h]
  __int64 v123; // [rsp+F0h] [rbp-1B0h] BYREF
  int v124[6]; // [rsp+F8h] [rbp-1A8h] BYREF
  int v125; // [rsp+110h] [rbp-190h] BYREF
  _QWORD *v126; // [rsp+118h] [rbp-188h]
  int v127; // [rsp+120h] [rbp-180h]
  unsigned int v128; // [rsp+124h] [rbp-17Ch]
  int v129; // [rsp+128h] [rbp-178h]
  _QWORD *v130; // [rsp+130h] [rbp-170h]
  int v131; // [rsp+138h] [rbp-168h]
  __int64 v132; // [rsp+140h] [rbp-160h] BYREF
  unsigned int *v133; // [rsp+148h] [rbp-158h] BYREF
  int v134; // [rsp+188h] [rbp-118h]
  void *ptr; // [rsp+190h] [rbp-110h] BYREF
  __int64 v136; // [rsp+198h] [rbp-108h]
  _BYTE v137[256]; // [rsp+1A0h] [rbp-100h] BYREF

  v6 = *(_QWORD *)(a1 + 8);
  v106 = (__int64 *)a1;
  ptr = nullptr;
  v100 = (_QWORD *)v6;
  v104 = v110;
  sub_14B7810((int)v110, v6, (int)&ptr, a4, a5, a6, v89);
  sub_18572D0(&ptr);
  v109 = 0;
  v111 = v6;
  *(_QWORD *)v112 = 0;
  v113 = 0;
  v114 = v6;
  v105 = &v125;
  sub_FA3A80(&v125, v6);
  v7 = *(_DWORD *)(a1 + 56);
  if ( v127 )
  {
    if ( v128 >= v7 )
      goto LABEL_3;
    v66 = v126;
    if ( v126 )
      goto LABEL_73;
LABEL_88:
    v76 = (_QWORD *)sub_186B270(0x38u);
    v66 = v76 + 1;
    *v76 = 2;
    v67 = 0;
    v126 = v76 + 1;
LABEL_78:
    while ( 1 )
    {
      v71 = *((_DWORD *)v66 - 2);
      if ( v71 >= v7 )
        break;
      v68 = (3 * v71 + 1) >> 1;
      v69 = 8 * (v68 + ((3 * v71 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * v71 + 8 >= (unsigned int)v69 || v71 >= v68 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_3BCB70((__int64 *)&ptr, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &ptr);
        sub_233E40((__int64)&ptr);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v70 = (unsigned int *)sub_186B300(v66 - 1, v69);
      v66 = v70 + 2;
      *v70 = v68;
      v126 = v70 + 2;
    }
    *((_DWORD *)v66 - 1) = v7;
    v72 = 3LL * v7;
    v73 = &v66[3 * v67];
    v74 = &v66[v72];
    if ( 3 * v67 != v72 )
    {
      v75 = v73;
      do
      {
        *v75 = 0;
        v75 += 3;
        *((_DWORD *)v75 - 2) = 0;
      }
      while ( v74 != v75 );
      if ( (((_BYTE)v74 - (_BYTE)v73) & 8) == 0 || (*((_DWORD *)v73 + 2) = 0, v73 += 3, v74 != v73) )
      {
        do
        {
          *((_DWORD *)v73 + 2) = 0;
          v73 += 6;
          *((_DWORD *)v73 - 4) = 0;
        }
        while ( v74 != v73 );
        v106 = (__int64 *)a1;
      }
    }
    goto LABEL_85;
  }
  v66 = v126;
  if ( !v126 )
  {
    if ( !v7 )
      goto LABEL_85;
    goto LABEL_88;
  }
LABEL_73:
  v67 = *((unsigned int *)v66 - 1);
  if ( (unsigned int)v67 < v7 )
    goto LABEL_78;
  *((_DWORD *)v66 - 1) = v7;
LABEL_85:
  v128 = v7;
  v127 = 1;
LABEL_3:
  if ( ++v129 == -1 )
  {
    v77 = v126;
    if ( v126 )
    {
      v78 = &v126[3 * *((unsigned int *)v126 - 1)];
      if ( v126 != v78 )
      {
        if ( ((24 * (unsigned __int8)*((_DWORD *)v126 - 1)) & 8) == 0
          || (*((_DWORD *)v126 + 4) = 0, v77 += 3, v78 != v77) )
        {
          do
          {
            *((_DWORD *)v77 + 4) = 0;
            v77 += 6;
            *((_DWORD *)v77 - 2) = 0;
          }
          while ( v78 != v77 );
        }
      }
    }
    v129 = 1;
  }
  v101 = &v111;
  sub_15EEF60(v106[4]);
  v8 = *(_QWORD *)v112;
  if ( *(_QWORD *)v112 )
  {
    v9 = *(unsigned int *)(*(_QWORD *)v112 - 4LL);
    if ( (_DWORD)v9 )
    {
      v102 = &v121;
      v103 = 8 * v9;
      v10 = 0;
      while ( 1 )
      {
        v15 = *(void **)(v8 + v10);
        LODWORD(v117) = 0;
        ptr = v15;
        v16 = v106[1];
        v119 = 0;
        LODWORD(v136) = 0;
        v120 = v16;
        v121 = 0;
        v122 = 0;
        v123 = 0;
        v124[0] = 0;
        sub_FA4800(
          (unsigned int)&v125,
          1,
          (unsigned int)&v117,
          (unsigned int)&ptr,
          (unsigned int)&v123,
          (unsigned int)&v121,
          (__int64)&v119);
        sub_14B9B80(v110, &v119);
        v17 = (_DWORD *)v119;
        v18 = v111;
        v19 = (__int64 *)(v10 + *(_QWORD *)v112);
        if ( v119 )
          ++*(_DWORD *)(v119 + 8);
        v20 = *v19;
        if ( *v19 )
        {
          v14 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v14 )
          {
            v94 = (__int64)v19;
            v99 = (__int64)v17;
            sub_15D7BC0(v18, v20);
            v19 = (__int64 *)v94;
            v17 = (_DWORD *)v99;
          }
        }
        *v19 = (__int64)v17;
        v11 = v119;
        if ( !*(_WORD *)(v119 + 4) )
        {
          v12 = *(_DWORD **)(*(_QWORD *)(v119 + 16) + 24LL);
          if ( v12 )
          {
            if ( !*v12 && v12[1] == 2 && *(_DWORD *)(v119 + 24) == 2 )
            {
              v38 = *(_QWORD *)(v119 + 32);
              v39 = *(_WORD **)(v119 + 40);
              if ( *(_WORD *)(v38 + 4) != 1 )
              {
                if ( v39[2] != 1 )
                  goto LABEL_10;
                v38 = *(_QWORD *)(v119 + 40);
                v39 = *(_WORD **)(v119 + 32);
              }
              v99 = (__int64)v39;
              v93 = v38;
              v123 = v16;
              sub_15F01E0(v124, v16);
              ptr = v137;
              v136 = 0x1000000000LL;
              sub_3C1B00(&v123, (char **)&ptr, v99);
              v40 = ptr;
              v41 = (_DWORD *)v99;
              v42 = (char *)ptr + 8 * (unsigned int)v136;
              v43 = (char *)ptr;
              v44 = v93;
              if ( ptr != v42 )
              {
                do
                {
                  v45 = *(_QWORD *)v43;
                  v43 += 8;
                  *(_BYTE *)(v45 + 6) &= ~1u;
                }
                while ( v43 != v42 );
              }
              LODWORD(v136) = 0;
              if ( v40 && v40 != v137 )
              {
                v95 = (_DWORD *)v99;
                HIDWORD(v99) = HIDWORD(v93);
                sub_186B220(v40);
                v41 = v95;
                v44 = v93;
              }
              v46 = v130;
              if ( v130 )
                v47 = *((_DWORD *)v130 - 1);
              else
                v47 = 0;
              v48 = v133;
              if ( !v133 || (v49 = *(v133 - 1), (_DWORD)v49 == *(v133 - 2)) )
              {
                v93 = (__int64)v41;
                v96 = v44;
                sub_2FD3F0(&v133);
                v48 = v133;
                v46 = v130;
                v41 = (_DWORD *)v93;
                v44 = v96;
                v49 = *(v133 - 1);
              }
              v48[v49] = v47;
              ++*(v48 - 1);
              LODWORD(v99) = *(_DWORD *)(v44 + 16);
              if ( v46 )
              {
                v50 = *((unsigned int *)v46 - 1);
                if ( (_DWORD)v50 == *((_DWORD *)v46 - 2) )
                {
                  v97 = (unsigned int)(3 * v50 + 1) >> 1;
                  v79 = 8 * v97 + 8;
                  if ( 8 * (int)v50 + 8 >= (unsigned int)v79 || (unsigned int)v50 >= (unsigned int)(3 * v50 + 1) >> 1 )
                  {
                    v87 = (char **)__cxa_allocate_exception(0x28u);
                    sub_3BCB70((__int64 *)&ptr, "Overflow encountered when expanding vector");
                    *v87 = (char *)off_1C63128;
                    sub_2333C0(v87 + 1, &ptr);
                    sub_233E40((__int64)&ptr);
                    __cxa_throw(v87, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v93 = (__int64)v41;
                  v80 = sub_186B270(v79);
                  v81 = v130;
                  v41 = (_DWORD *)v93;
                  v82 = (_DWORD *)v80;
                  v46 = (_QWORD *)(v80 + 8);
                  if ( v130 )
                  {
                    v83 = *((unsigned int *)v130 - 1);
                    *(_DWORD *)(v80 + 4) = v83;
                    v84 = 0;
                    v85 = 8 * v83;
                    if ( v85 )
                    {
                      do
                      {
                        *(_QWORD *)&v82[v84 / 4 + 2] = v81[v84 / 8];
                        v84 += 8LL;
                      }
                      while ( v85 != v84 );
                    }
                    v91 = (int)v82;
                    v92 = (_DWORD *)v93;
                    v93 = (__int64)v46;
                    sub_186B220(v81 - 1);
                    v46 = (_QWORD *)v93;
                    v41 = v92;
                    v51 = (_QWORD *)(v93 + 8LL * (unsigned int)v82[1]);
                  }
                  else
                  {
                    *(_DWORD *)(v80 + 4) = 0;
                    v51 = (_QWORD *)(v80 + 8);
                  }
                  v130 = v46;
                  *v82 = v97;
                }
                else
                {
                  v51 = &v46[v50];
                }
              }
              else
              {
                v98 = v41;
                v86 = (_QWORD *)sub_186B270(0x18u);
                v46 = v86 + 1;
                *v86 = 2;
                v41 = v98;
                v130 = v86 + 1;
                v51 = v86 + 1;
              }
              *v51 = (unsigned int)v99;
              ++*((_DWORD *)v46 - 1);
              ptr = v41;
              if ( v41 )
                ++v41[2];
              v94 = (__int64)v41;
              sub_3BD3D0(&v132, &ptr);
              v52 = &v126[3 * (unsigned int)v99];
              v53 = v129;
              *v52 = v94;
              *((_DWORD *)v52 + 2) = 0;
              *((_DWORD *)v52 + 4) = v53;
              v134 = 2;
              if ( (unsigned __int8)sub_FA44B0(&v125) )
              {
                v54 = *(_QWORD *)(v16 + 856);
                v55 = v111;
                v56 = (__int64 *)(v10 + *(_QWORD *)v112);
                if ( v54 )
                  ++*(_DWORD *)(v54 + 8);
                v57 = *v56;
                if ( *v56 )
                {
                  v14 = (*(_DWORD *)(v57 + 8))-- == 1;
                  if ( v14 )
                  {
                    v99 = (__int64)v56;
                    sub_15D7BC0(v55, v57);
                    v56 = (__int64 *)v99;
                  }
                }
                *v56 = v54;
                v58 = v119;
                if ( v119 )
                {
                  v59 = v120;
                  v14 = (*(_DWORD *)(v119 + 8))-- == 1;
                  if ( v14 )
                    sub_15D7BC0(v59, v58);
                }
                v60 = v111;
                v61 = v100[107];
                v62 = (__int64 *)(v10 + *(_QWORD *)v112);
                if ( v61 )
                  ++*(_DWORD *)(v61 + 8);
                v63 = *v62;
                if ( *v62 )
                {
                  v14 = (*(_DWORD *)(v63 + 8))-- == 1;
                  if ( v14 )
                  {
                    v99 = (__int64)v62;
                    sub_15D7BC0(v60, v63);
                    v62 = (__int64 *)v99;
                  }
                }
                *v62 = v61;
LABEL_11:
                v10 += 8;
                if ( v10 == v103 )
                  break;
                goto LABEL_12;
              }
              sub_FA3D10(&v125, 1);
              v11 = v119;
              if ( !v119 )
                goto LABEL_11;
            }
          }
        }
LABEL_10:
        v13 = v120;
        v14 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( !v14 )
          goto LABEL_11;
        sub_15D7BC0(v13, v11);
        v10 += 8;
        if ( v10 == v103 )
          break;
LABEL_12:
        v8 = *(_QWORD *)v112;
      }
    }
  }
  LODWORD(v136) = 0;
  v117 = 0;
  v21 = (void *)*v106;
  v118 = 0;
  v115 = 0;
  ptr = v21;
  v116 = 0;
  sub_FA4800(
    (unsigned int)&v125,
    1,
    (unsigned int)&v109,
    (unsigned int)&ptr,
    (unsigned int)&v115,
    (unsigned int)&v117,
    (__int64)&v113);
  v22 = v113;
  if ( v113 )
    ++*(_DWORD *)(v113 + 8);
  sub_3BCB30(*v106, v106[1]);
  v23 = v106[3];
  *v106 = v22;
  for ( i = 0; v23; ++i )
  {
    if ( i >= *(_DWORD *)(v23 - 4) )
      break;
    v25 = *(void **)(v23 + 8LL * i);
    LODWORD(v136) = 0;
    v121 = 0;
    ptr = v25;
    v122 = 0;
    v119 = 0;
    LODWORD(v120) = 0;
    sub_FA4800(
      (unsigned int)&v125,
      1,
      (unsigned int)&v109,
      (unsigned int)&ptr,
      (unsigned int)&v119,
      (unsigned int)&v121,
      (__int64)&v113);
    v26 = v113;
    v27 = v106[2];
    v23 = v106[3];
    v28 = (__int64 *)(v23 + 8LL * i);
    if ( v113 )
      ++*(_DWORD *)(v113 + 8);
    v29 = *v28;
    if ( *v28 )
    {
      v14 = (*(_DWORD *)(v29 + 8))-- == 1;
      if ( v14 )
      {
        v103 = v26;
        sub_15D7BC0(v27, v29);
        v26 = v103;
        v23 = v106[3];
      }
    }
    *v28 = v26;
  }
  v123 = 0;
  sub_39A6C0((__int64)&ptr, (__int64)v100, (__int64)&v123);
  v32 = (__int64)(v106 + 4);
  if ( *(_QWORD *)v112 )
  {
    v33 = *(unsigned int *)(*(_QWORD *)v112 - 4LL);
    v34 = v106 + 4;
    v35 = *(_QWORD *)v112;
    if ( !BYTE3(v136) )
      goto LABEL_31;
LABEL_110:
    sub_14E1930((int)&ptr, v90, v91, (int)v92, v93, v94, v99, v100, (int)&v111);
    goto LABEL_33;
  }
  v33 = 0;
  v34 = v106 + 4;
  v35 = 0;
  if ( BYTE3(v136) )
    goto LABEL_110;
LABEL_31:
  if ( (_BYTE)v136 )
  {
    if ( (unsigned int)sub_14DD000(&ptr, v33, v35, v34) != 5 )
      goto LABEL_33;
  }
  else if ( (unsigned int)sub_14DC740(
                            (int)&ptr,
                            v33,
                            v35,
                            (int)v34,
                            v30,
                            v31,
                            v90,
                            v91,
                            (int)v92,
                            v93,
                            v94,
                            (void *)v99,
                            (int)v100,
                            (int)&v111,
                            (int)v102,
                            v103,
                            (int)v110,
                            v33,
                            (int)&v125,
                            (int)v106,
                            v107,
                            v108,
                            v110[0],
                            v110[2],
                            v111,
                            v112[0],
                            v113,
                            v114,
                            v115,
                            v116,
                            v117,
                            v118,
                            v119,
                            v120,
                            v121,
                            v122,
                            v123,
                            v124[0],
                            v124[2],
                            v124[4],
                            v125,
                            (int)v126,
                            v127,
                            v129,
                            (int)v130,
                            v131,
                            v132,
                            (char)v133) != 5 )
  {
    goto LABEL_33;
  }
  v64 = sub_15E1AF0((int)ptr);
  v65 = v64;
  if ( v64 )
    ++*(_DWORD *)(v64 + 8);
  sub_3BCB50(v106[4], v106[5]);
  v106[4] = v65;
LABEL_33:
  sub_39A7A0((__int64)&ptr);
  sub_18572D0(&v123);
  v122 = 0;
  ptr = nullptr;
  LODWORD(v136) = 0;
  v36 = v106[4];
  v123 = 0;
  v121 = v36;
  v124[0] = 0;
  sub_FA4800((_DWORD)v105, 1, (unsigned int)&v109, (unsigned int)&v121, (unsigned int)&v123, (unsigned int)&ptr, v32);
  sub_14B9B80(v104, v32);
  sub_3BEED0(v105);
  sub_3BCB50(v113, v114);
  sub_2334C0(v101);
  return sub_14B63F0(v104);
}

