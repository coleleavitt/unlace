__int64 __fastcall sub_548940(_QWORD *a1, __int64 a2)
{
  char **v2; // r12
  char **v3; // r12
  char **v4; // r14
  char **exception; // r12
  char **v6; // r12
  _QWORD *v7; // rax
  _OWORD *v8; // rax
  int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // r14
  _QWORD *v12; // r15
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  int v15; // eax
  __int64 *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  int v20; // eax
  _BYTE *v21; // rdx
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // r13
  unsigned int v25; // eax
  unsigned int v26; // edx
  size_t v27; // rsi
  unsigned int *v28; // rax
  unsigned int v29; // edx
  size_t v30; // rsi
  unsigned int *v31; // rax
  unsigned int v32; // eax
  __int64 v33; // r15
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // r13
  _QWORD *v37; // rax
  int v38; // eax
  unsigned __int64 *v39; // rcx
  unsigned __int64 v40; // rdx
  bool v41; // cl
  unsigned int v42; // eax
  __int64 v43; // rdx
  int v44; // eax
  bool *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rcx
  unsigned int v48; // edx
  size_t v49; // rsi
  unsigned int *v50; // rax
  _DWORD *v51; // rdi
  unsigned int v52; // edx
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r13
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rdx
  _QWORD *v60; // r15
  _QWORD *v61; // r12
  unsigned int v62; // ecx
  unsigned int v63; // r14d
  size_t v64; // rsi
  unsigned int *v65; // rax
  __int64 v66; // rax
  int v67; // r14d
  __int64 v68; // rdi
  __int64 v69; // r15
  __int64 v70; // rax
  __int64 v71; // r14
  unsigned int v72; // eax
  __int64 *v73; // rcx
  int v74; // edx
  unsigned int v75; // eax
  __int64 v76; // rax
  __int64 v77; // r13
  bool v78; // zf
  __int64 *v79; // r14
  unsigned __int64 v80; // r15
  __int64 v81; // rsi
  unsigned __int64 v82; // r12
  __int64 *v83; // r15
  __int64 v84; // rsi
  _BYTE *v85; // rdi
  char *v86; // rcx
  char *v87; // rax
  __int64 v88; // rdx
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  unsigned int v93; // edx
  size_t v94; // rsi
  unsigned int *v95; // rax
  __int64 v96; // rcx
  unsigned int v97; // r13d
  size_t v98; // rsi
  unsigned int *v99; // rax
  __int64 v100; // rdx
  _QWORD *v101; // rax
  __int64 v102; // rax
  __int64 v103; // [rsp+0h] [rbp-1B0h]
  __int64 v104; // [rsp+10h] [rbp-1A0h]
  unsigned int v105; // [rsp+1Ch] [rbp-194h]
  __int64 v106; // [rsp+20h] [rbp-190h]
  unsigned int v108; // [rsp+30h] [rbp-180h]
  unsigned int v109; // [rsp+30h] [rbp-180h]
  unsigned int v110; // [rsp+30h] [rbp-180h]
  __int64 v111; // [rsp+30h] [rbp-180h]
  int v112; // [rsp+38h] [rbp-178h]
  bool v113; // [rsp+38h] [rbp-178h]
  unsigned int v114; // [rsp+38h] [rbp-178h]
  _QWORD *v115; // [rsp+38h] [rbp-178h]
  bool v116; // [rsp+38h] [rbp-178h]
  unsigned int v117; // [rsp+38h] [rbp-178h]
  char **v118; // [rsp+40h] [rbp-170h]
  char **v119; // [rsp+40h] [rbp-170h]
  _DWORD *v121; // [rsp+48h] [rbp-168h]
  int v122; // [rsp+48h] [rbp-168h]
  int v123; // [rsp+54h] [rbp-15Ch] BYREF
  _QWORD v124[4]; // [rsp+58h] [rbp-158h] BYREF
  __int64 v125[4]; // [rsp+80h] [rbp-130h] BYREF
  void *v126[2]; // [rsp+A0h] [rbp-110h] BYREF
  int v127; // [rsp+B0h] [rbp-100h]
  void *v128; // [rsp+B8h] [rbp-F8h]
  __int64 v129; // [rsp+C0h] [rbp-F0h]
  _BYTE v130[128]; // [rsp+C8h] [rbp-E8h] BYREF
  void *ptr; // [rsp+148h] [rbp-68h]
  __int64 v132; // [rsp+150h] [rbp-60h]
  int v133; // [rsp+158h] [rbp-58h]
  __int128 v134; // [rsp+160h] [rbp-50h]
  __int128 v135; // [rsp+170h] [rbp-40h]

  v7 = (_QWORD *)sub_186B270(0x80u);
  v127 = 0;
  *v7 = 0;
  v7[2] = 0;
  v7[4] = 0;
  v7[6] = 0;
  v7[8] = 0;
  v7[10] = 0;
  v7[12] = 0;
  v7[14] = 0;
  v126[0] = v7;
  v128 = v130;
  v126[1] = &byte_8;
  v129 = 0x1000000000LL;
  v8 = (_OWORD *)sub_186B270(0x40u);
  v132 = 8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  ptr = v8;
  v133 = 0;
  v134 = 0;
  v135 = 0;
  sub_6462F0(v126, a2, 1);
  if ( (unsigned __int8)sub_148BA40(v126, &v123) )
  {
    v9 = v123 + 2;
    v105 = v123 + 1;
  }
  else
  {
    v105 = 0;
    v9 = 1;
  }
  v103 = a1[3];
  v10 = sub_5486E0((__int64)a1, *(_QWORD *)(a2 + 40), v105);
  v106 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v104 = a1[3];
  v124[1] = v104;
  v11 = *(unsigned int *)(a2 + 64);
  if ( (_DWORD)v11 )
  {
    v12 = (_QWORD *)(a2 + 80);
    v13 = nullptr;
    v121 = nullptr;
    v112 = v11 + v9;
    do
    {
      v22 = v9++;
      v23 = sub_5486E0((__int64)a1, *v12 & 0xFFFFFFFFFFFFFFF8LL, v22);
      v24 = v23;
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      if ( v13 )
      {
        v25 = *((_DWORD *)v13 - 1);
        if ( v25 == *((_DWORD *)v13 - 2) )
        {
          v26 = (3 * v25 + 1) >> 1;
          v27 = 8 * v26 + 8;
          if ( 8 * v25 + 8 >= (unsigned int)v27 || v25 >= v26 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v125, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v125);
            sub_233E40((__int64)v125);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v108 = (3 * v25 + 1) >> 1;
          v28 = (unsigned int *)sub_186B300(v13 - 1, v27);
          v13 = v28 + 2;
          *v28 = v108;
          LODWORD(v28) = v28[1];
          v16 = &v13[(unsigned int)v28];
          v15 = (_DWORD)v28 + 1;
        }
        else
        {
          v14 = v25;
          v15 = v25 + 1;
          v16 = &v13[v14];
        }
      }
      else
      {
        v91 = (_QWORD *)sub_186B270(0x18u);
        v13 = v91 + 1;
        *v91 = 2;
        v15 = 1;
        v16 = v13;
      }
      *v16 = v24;
      *((_DWORD *)v13 - 1) = v15;
      if ( v121 )
      {
        v17 = *(v121 - 1);
        if ( v17 == *(v121 - 2) )
        {
          v29 = (3 * v17 + 1) >> 1;
          v30 = v29 + 8;
          if ( v17 + 8 >= (unsigned int)v30 || v17 >= v29 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v125, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v125);
            sub_233E40((__int64)v125);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v109 = (3 * v17 + 1) >> 1;
          v31 = (unsigned int *)sub_186B300(v121 - 2, v30);
          v19 = v31 + 2;
          v121 = v31 + 2;
          *v31 = v109;
          LODWORD(v31) = v31[1];
          v21 = (char *)v19 + (unsigned int)v31;
          v20 = (_DWORD)v31 + 1;
        }
        else
        {
          v18 = v17;
          v19 = v121;
          v20 = v17 + 1;
          v21 = (char *)v121 + v18;
        }
      }
      else
      {
        v92 = (_QWORD *)sub_186B270(0xAu);
        *v92 = 2;
        v121 = v92 + 1;
        v21 = v92 + 1;
        v19 = v92 + 1;
        v20 = 1;
      }
      *v21 = 0;
      ++v12;
      *((_DWORD *)v19 - 1) = v20;
    }
    while ( v9 != v112 );
  }
  else
  {
    v121 = nullptr;
    v13 = nullptr;
  }
  v32 = *(_DWORD *)(a2 + 56);
  if ( (unsigned int)v11 < v32 )
  {
    v33 = a2 + 8LL * (unsigned int)v11;
    v34 = *(_QWORD *)(v33 + 80);
    v35 = a2 + 8 * ((unsigned int)v11 + (unsigned __int64)(v32 - 1 - (unsigned int)v11)) + 8;
    v36 = v34 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v34 > 7 )
      ++*(_DWORD *)(v36 + 8);
    if ( v13 )
      goto LABEL_34;
    v37 = (_QWORD *)sub_186B270(0x18u);
    v13 = v37 + 1;
    v34 = *(_QWORD *)(v33 + 80);
    *v37 = 2;
    v38 = 1;
    v39 = v13;
    while ( 1 )
    {
      v40 = v34 & 7;
      *v39 = v36;
      *((_DWORD *)v13 - 1) = v38;
      v41 = v40 == 1;
      if ( v121 )
      {
        v42 = *(v121 - 1);
        if ( v42 == *(v121 - 2) )
        {
          v48 = (3 * v42 + 1) >> 1;
          v49 = v48 + 8;
          if ( v42 + 8 >= (unsigned int)v49 || v42 >= v48 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v125, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v125);
            sub_233E40((__int64)v125);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v110 = (3 * v42 + 1) >> 1;
          v113 = v41;
          v50 = (unsigned int *)sub_186B300(v121 - 2, v49);
          v51 = v50 + 2;
          v41 = v113;
          v121 = v50 + 2;
          *v50 = v110;
          LODWORD(v50) = v50[1];
          v45 = (bool *)v51 + (unsigned int)v50;
          v44 = (_DWORD)v50 + 1;
        }
        else
        {
          v43 = v42;
          v44 = v42 + 1;
          v45 = (bool *)v121 + v43;
        }
      }
      else
      {
        v116 = v40 == 1;
        v90 = (_QWORD *)sub_186B270(0xAu);
        *v90 = 2;
        v41 = v116;
        v121 = v90 + 1;
        v45 = (bool *)(v90 + 1);
        v44 = 1;
      }
      *v45 = v41;
      v33 += 8;
      *(v121 - 1) = v44;
      if ( v33 == v35 )
        break;
      v34 = *(_QWORD *)(v33 + 80);
      v36 = 0;
      if ( v34 > 7 )
      {
        v36 = v34 & 0xFFFFFFFFFFFFFFF8LL;
        ++*(_DWORD *)((v34 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      }
LABEL_34:
      v46 = *((_DWORD *)v13 - 1);
      if ( v46 == *((_DWORD *)v13 - 2) )
      {
        v52 = (3 * v46 + 1) >> 1;
        v53 = 8 * v52 + 8;
        if ( 8 * v46 + 8 >= (unsigned int)v53 || v46 >= v52 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v125, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v125);
          sub_233E40((__int64)v125);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v114 = (3 * v46 + 1) >> 1;
        v54 = (unsigned int *)sub_186B300(v13 - 1, v53);
        v55 = v54[1];
        v13 = v54 + 2;
        *v54 = v114;
        LODWORD(v54) = v55;
        v34 = *(_QWORD *)(v33 + 80);
        v39 = &v13[v55];
        v38 = (_DWORD)v54 + 1;
      }
      else
      {
        v47 = v46;
        v38 = v46 + 1;
        v39 = &v13[v47];
      }
    }
  }
  v124[0] = sub_546620((__int64)a1, a2);
  v111 = a1[3];
  v124[3] = v111;
  if ( (_DWORD)v11 )
  {
    v56 = *(_QWORD *)(*v13 + 8LL * (unsigned int)(*(_DWORD *)(*v13 + 24LL) - 1) + 32);
    if ( v56 )
      ++*(_DWORD *)(v56 + 8);
    v57 = (_QWORD *)sub_186B270(0x18u);
    *v57 = 2;
    v58 = v57 + 1;
    v59 = &v13[v11];
    v60 = v13;
    v61 = v58;
    LODWORD(v11) = 1;
    while ( 1 )
    {
      ++v60;
      *v58 = v56;
      *((_DWORD *)v61 - 1) = v11;
      if ( v59 == v60 )
        break;
      v56 = *(_QWORD *)(*v60 + 8LL * (unsigned int)(*(_DWORD *)(*v60 + 24LL) - 1) + 32);
      if ( v56 )
        ++*(_DWORD *)(v56 + 8);
      v62 = *((_DWORD *)v61 - 1);
      if ( v62 == *((_DWORD *)v61 - 2) )
      {
        v63 = (3 * v62 + 1) >> 1;
        v64 = 8 * v63 + 8;
        if ( 8 * v62 + 8 >= (unsigned int)v64 || v62 >= v63 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v125, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v125);
          sub_233E40((__int64)v125);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v115 = v59;
        v65 = (unsigned int *)sub_186B300(v61 - 1, v64);
        *v65 = v63;
        v61 = v65 + 2;
        v66 = v65[1];
        v59 = v115;
        v67 = v66;
        v58 = &v61[v66];
        LODWORD(v11) = v67 + 1;
      }
      else
      {
        LODWORD(v11) = v62 + 1;
        v58 = &v61[v62];
      }
    }
    v68 = a1[5];
  }
  else
  {
    v61 = nullptr;
    v68 = a1[5];
  }
  sub_1625860(v68, v124, (unsigned int)v11, v61);
  v69 = a1[3];
  sub_15DB5C0(v69, v105, a1[10]);
  v70 = sub_15E1B70(v69);
  v71 = v70;
  if ( v70 )
    *(_DWORD *)(v70 + 8) += 2;
  if ( v13 )
  {
    v72 = *((_DWORD *)v13 - 1);
    if ( v72 == *((_DWORD *)v13 - 2) )
    {
      v97 = (3 * v72 + 1) >> 1;
      v98 = 8 * v97 + 8;
      if ( 8 * v72 + 8 >= (unsigned int)v98 || v72 >= v97 )
      {
        v119 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v125, "Overflow encountered when expanding vector");
        *v119 = (char *)off_1C63128;
        sub_2333C0(v119 + 1, v125);
        sub_233E40((__int64)v125);
        __cxa_throw(v119, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v99 = (unsigned int *)sub_186B300(v13 - 1, v98);
      v100 = v99[1];
      v13 = v99 + 2;
      *v99 = v97;
      v73 = (__int64 *)&v99[2 * v100 + 2];
      v74 = v100 + 1;
    }
    else
    {
      v73 = &v13[v72];
      v74 = v72 + 1;
    }
  }
  else
  {
    v101 = (_QWORD *)sub_186B270(0x18u);
    v73 = v101 + 1;
    *v101 = 2;
    v74 = 1;
    v13 = v101 + 1;
  }
  *v73 = v71;
  *((_DWORD *)v13 - 1) = v74;
  if ( v121 )
  {
    v75 = *(v121 - 1);
    if ( v75 == *(v121 - 2) )
    {
      v93 = (3 * v75 + 1) >> 1;
      v94 = v93 + 8;
      if ( v75 + 8 >= (unsigned int)v94 || v75 >= v93 )
      {
        v118 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v125, "Overflow encountered when expanding vector");
        *v118 = (char *)off_1C63128;
        sub_2333C0(v118 + 1, v125);
        sub_233E40((__int64)v125);
        __cxa_throw(v118, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v117 = (3 * v75 + 1) >> 1;
      v95 = (unsigned int *)sub_186B300(v121 - 2, v94);
      v121 = v95 + 2;
      v96 = v95[1];
      *v95 = v117;
      *((_BYTE *)v95 + v96 + 8) = 0;
      v95[1] = v96 + 1;
      v76 = sub_62C680(
              (unsigned int)a1[4] + 656,
              v106,
              *((_DWORD *)v13 - 1),
              (_DWORD)v13,
              (int)v95 + 8,
              (unsigned int)&qword_18D6CD0,
              1);
    }
    else
    {
      *((_BYTE *)v121 + v75) = 0;
      *(v121 - 1) = v75 + 1;
      v76 = sub_62C680((unsigned int)a1[4] + 656, v106, v74, (_DWORD)v13, (_DWORD)v121, (unsigned int)&qword_18D6CD0, 1);
    }
  }
  else
  {
    v102 = sub_186B270(0xAu);
    *(_BYTE *)(v102 + 8) = 0;
    v121 = (_DWORD *)(v102 + 8);
    *(_QWORD *)v102 = 0x100000002LL;
    v76 = sub_62C680(
            (unsigned int)a1[4] + 656,
            v106,
            *((_DWORD *)v13 - 1),
            (_DWORD)v13,
            (int)v102 + 8,
            (unsigned int)&qword_18D6CD0,
            1);
  }
  v77 = v76;
  if ( v71 )
  {
    v78 = (*(_DWORD *)(v71 + 8))-- == 1;
    if ( v78 )
      sub_15D7BC0(v69, v71);
  }
  if ( v61 )
  {
    v79 = v61;
    v80 = (unsigned __int64)&v61[*((unsigned int *)v61 - 1)];
    if ( (unsigned __int64)v61 < v80 )
    {
      do
      {
        while ( 1 )
        {
          v81 = *v79;
          if ( *v79 )
          {
            v78 = (*(_DWORD *)(v81 + 8))-- == 1;
            if ( v78 )
              break;
          }
          if ( (unsigned __int64)++v79 >= v80 )
            goto LABEL_73;
        }
        ++v79;
        sub_15D7BC0(v111, v81);
      }
      while ( (unsigned __int64)v79 < v80 );
    }
LABEL_73:
    sub_186B220(v61 - 1);
  }
  sub_186B220(v121 - 2);
  v82 = (unsigned __int64)&v13[*((unsigned int *)v13 - 1)];
  if ( (unsigned __int64)v13 < v82 )
  {
    v83 = v13;
    do
    {
      while ( 1 )
      {
        v84 = *v83;
        if ( *v83 )
        {
          v78 = (*(_DWORD *)(v84 + 8))-- == 1;
          if ( v78 )
            break;
        }
        if ( (unsigned __int64)++v83 >= v82 )
          goto LABEL_80;
      }
      sub_15D7BC0(v104, v84);
      ++v83;
    }
    while ( (unsigned __int64)v83 < v82 );
  }
LABEL_80:
  sub_186B220(v13 - 1);
  if ( v106 )
  {
    v122 = *(_DWORD *)(v106 + 8);
    *(_DWORD *)(v106 + 8) = v122 - 1;
    if ( v122 == 1 )
      sub_15D7BC0(v103, v106);
  }
  if ( *((_QWORD *)&v135 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v135 + 1) - 8LL));
  if ( (_QWORD)v135 )
    sub_186B220((void *)(v135 - 8));
  if ( *((_QWORD *)&v134 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v134 + 1) - 8LL));
  if ( (_QWORD)v134 )
    sub_186B220((void *)(v134 - 8));
  if ( ptr )
    sub_186B220(ptr);
  v85 = v128;
  v86 = (char *)v128 + 8 * (unsigned int)v129;
  v87 = (char *)v128;
  if ( v128 != v86 )
  {
    do
    {
      v88 = *(_QWORD *)v87;
      v87 += 8;
      *(_BYTE *)(v88 + 6) &= ~1u;
    }
    while ( v87 != v86 );
  }
  LODWORD(v129) = 0;
  if ( v85 && v85 != v130 )
    sub_186B220(v85);
  if ( v126[0] )
    sub_186B220(v126[0]);
  return v77;
}

