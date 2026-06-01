__int64 __fastcall sub_5DA880(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  char **v4; // rbx
  char **v5; // r13
  char **exception; // rbx
  char **v7; // r13
  char **v8; // r13
  __int64 v10; // rax
  void *v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  _DWORD *v15; // rdx
  char *v16; // r12
  unsigned int v17; // ebx
  _QWORD *v18; // rax
  unsigned int v19; // r13d
  size_t v20; // rsi
  unsigned int *v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // ebx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  unsigned int v26; // ebp
  size_t v27; // rsi
  unsigned int *v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rax
  _QWORD *v31; // rbx
  unsigned int v32; // r13d
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rax
  __int64 *v38; // rdx
  _BYTE *v39; // r14
  __int64 v40; // rcx
  int v41; // eax
  bool v42; // zf
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r14
  unsigned int v46; // eax
  __int64 v47; // rdx
  int v48; // eax
  __int64 *v49; // rdx
  unsigned int v50; // ebp
  __int64 v51; // rax
  __int64 *v52; // r13
  int v53; // r8d
  int v54; // r9d
  unsigned int v55; // r13d
  __int64 v56; // rdx
  int v57; // eax
  __int64 *v58; // rdx
  __int64 v59; // r15
  __int64 v60; // rsi
  __int64 v61; // rdi
  unsigned int v62; // eax
  unsigned int v63; // edx
  unsigned int v64; // ecx
  size_t v65; // rsi
  unsigned int v66; // r14d
  unsigned int *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rdx
  int v70; // eax
  __int64 *v71; // rdx
  __int64 v72; // r15
  __int64 v73; // rsi
  __int64 v74; // rdi
  unsigned int v75; // eax
  unsigned int v76; // edx
  size_t v77; // rsi
  __int64 v78; // rax
  unsigned int v79; // edx
  size_t v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rax
  unsigned int v83; // ebp
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 *v90; // rbp
  unsigned __int64 v91; // r13
  __int64 v92; // rsi
  char *v93; // rbx
  char *v94; // rbp
  __int64 v95; // rsi
  int *v96; // rdi
  char *v97; // rcx
  char *v98; // rax
  __int64 v99; // rdx
  _QWORD *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rbp
  __int64 v104; // rsi
  __int64 v105; // rdi
  _QWORD *v106; // rax
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // rax
  __int64 v110; // r14
  __int64 v111; // rsi
  _QWORD *v112; // rax
  _DWORD *s; // [rsp+0h] [rbp-3F8h]
  __int64 v114; // [rsp+8h] [rbp-3F0h]
  __int64 *v115; // [rsp+10h] [rbp-3E8h]
  __int64 *v116; // [rsp+18h] [rbp-3E0h]
  __int64 v117; // [rsp+20h] [rbp-3D8h]
  void *v118; // [rsp+28h] [rbp-3D0h]
  void *v119; // [rsp+30h] [rbp-3C8h]
  __int64 *v120; // [rsp+38h] [rbp-3C0h]
  __int64 v121; // [rsp+40h] [rbp-3B8h]
  _DWORD *ptr; // [rsp+48h] [rbp-3B0h]
  int *v123; // [rsp+58h] [rbp-3A0h]
  int v124; // [rsp+60h] [rbp-398h]
  _DWORD *v125; // [rsp+68h] [rbp-390h] BYREF
  void *v126; // [rsp+70h] [rbp-388h]
  __int64 v127; // [rsp+78h] [rbp-380h]
  void *v128; // [rsp+80h] [rbp-378h]
  __int64 v129; // [rsp+88h] [rbp-370h]
  int v130[2]; // [rsp+90h] [rbp-368h] BYREF
  __int64 v131; // [rsp+98h] [rbp-360h]
  int v132; // [rsp+A0h] [rbp-358h]
  int v133; // [rsp+A8h] [rbp-350h]
  int v134[2]; // [rsp+B0h] [rbp-348h] BYREF
  int v135; // [rsp+B8h] [rbp-340h]
  __int16 v136; // [rsp+BCh] [rbp-33Ch]
  int v137; // [rsp+C0h] [rbp-338h]
  int v138; // [rsp+C8h] [rbp-330h]
  int v139; // [rsp+CCh] [rbp-32Ch]
  int v140; // [rsp+D0h] [rbp-328h]
  __int128 v141; // [rsp+D8h] [rbp-320h]
  __int128 v142; // [rsp+E8h] [rbp-310h]
  void *v143; // [rsp+F8h] [rbp-300h]
  __int64 v144; // [rsp+100h] [rbp-2F8h]
  int v145[16]; // [rsp+108h] [rbp-2F0h] BYREF
  char v146; // [rsp+148h] [rbp-2B0h]
  __int64 v147[20]; // [rsp+190h] [rbp-268h] BYREF
  __int64 v148; // [rsp+230h] [rbp-1C8h]
  int *v149; // [rsp+238h] [rbp-1C0h] BYREF
  int *v150; // [rsp+2D8h] [rbp-120h] BYREF
  __int64 v151; // [rsp+370h] [rbp-88h]
  __int64 v152; // [rsp+378h] [rbp-80h]
  __int64 v153; // [rsp+380h] [rbp-78h]
  __int64 v154; // [rsp+388h] [rbp-70h]
  __int64 v155; // [rsp+390h] [rbp-68h]
  __int64 v156; // [rsp+398h] [rbp-60h]
  __int64 v157; // [rsp+3A0h] [rbp-58h]
  _BYTE v158[80]; // [rsp+3A8h] [rbp-50h] BYREF

  v117 = a2;
  v114 = a3;
  v115 = a4;
  v147[0] = 0;
  ptr = (_DWORD *)sub_186B270(0x80u);
  *(_QWORD *)ptr = 0;
  ptr[2] = 0;
  *((_QWORD *)ptr + 2) = 0;
  ptr[6] = 0;
  *((_QWORD *)ptr + 4) = 0;
  ptr[10] = 0;
  *((_QWORD *)ptr + 6) = 0;
  ptr[14] = 0;
  *((_QWORD *)ptr + 8) = 0;
  ptr[18] = 0;
  *((_QWORD *)ptr + 10) = 0;
  ptr[22] = 0;
  *((_QWORD *)ptr + 12) = 0;
  ptr[26] = 0;
  *((_QWORD *)ptr + 14) = 0;
  ptr[30] = 0;
  v10 = *(_QWORD *)(a1 + 32);
  v135 = 256;
  *(_QWORD *)v134 = v10;
  v136 = 0;
  v123 = v145;
  v143 = v145;
  v139 = 0;
  v144 = 0x1000000000LL;
  v116 = v147;
  v141 = 0;
  v142 = 0;
  sub_14DC230(v134, v147);
  sub_18572D0(v147);
  v121 = *(_QWORD *)(a1 + 40);
  sub_62A000(v121, v114);
  v11 = *(void **)(a1 + 32);
  v125 = nullptr;
  v119 = v11;
  v126 = v11;
  v128 = v11;
  sub_62B3F0(v114, (_DWORD)v11, (unsigned int)&v125, v12, v13, v14);
  v15 = v125;
  v16 = (char *)v125;
  if ( !v125 )
    goto LABEL_158;
  v17 = *(v125 - 1);
  if ( v17 )
  {
    v18 = (_QWORD *)sub_186B270(0x18u);
    v16 = (char *)(v18 + 1);
    *v18 = 2;
    while ( 1 )
    {
      v22 = *((_DWORD *)v16 - 2);
      if ( v22 >= v17 )
        break;
      v19 = (3 * v22 + 1) >> 1;
      v20 = 8 * v19 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v20 || v22 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v147, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v147);
        sub_233E40((__int64)v147);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v21 = (unsigned int *)sub_186B300(v16 - 8, v20);
      *v21 = v19;
      v16 = (char *)(v21 + 2);
    }
    *((_DWORD *)v16 - 1) = v17;
    memset(v16, 0, 8LL * v17);
    v15 = v125;
    if ( v125 )
    {
      v23 = *(v125 - 1);
      if ( v23 )
      {
        v24 = (_QWORD *)sub_186B270(0xAu);
        *v24 = 2;
        v25 = v24 + 1;
        s = v25;
        while ( 1 )
        {
          v29 = *((_DWORD *)v25 - 2);
          if ( v29 >= v23 )
            break;
          v26 = (3 * v29 + 1) >> 1;
          v27 = v26 + 8;
          if ( v29 + 8 >= (unsigned int)v27 || v29 >= v26 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v147, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v147);
            sub_233E40((__int64)v147);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v28 = (unsigned int *)sub_186B300(s - 2, v27);
          *v28 = v26;
          s = v28 + 2;
          v25 = v28 + 2;
        }
        *(s - 1) = v23;
        memset(s, 1, v23);
        v30 = *(_QWORD *)(v117 + 8);
        if ( !v30 )
        {
          v15 = v125;
          v31 = nullptr;
          if ( v125 )
            goto LABEL_39;
          goto LABEL_45;
        }
        goto LABEL_16;
      }
      goto LABEL_156;
    }
LABEL_158:
    v30 = *(_QWORD *)(v117 + 8);
    if ( !v30 )
    {
      s = nullptr;
      v31 = nullptr;
      goto LABEL_45;
    }
    goto LABEL_157;
  }
  v16 = nullptr;
LABEL_156:
  v30 = *(_QWORD *)(v117 + 8);
  if ( !v30 )
  {
    s = nullptr;
    v31 = nullptr;
    goto LABEL_39;
  }
LABEL_157:
  s = nullptr;
LABEL_16:
  v31 = nullptr;
  v32 = 0;
  while ( v32 < *(_DWORD *)(v30 - 4) )
  {
    v33 = *(_QWORD *)(v30 + 8LL * v32);
    v34 = sub_15D1F10(v33);
    v118 = *(void **)(a1 + 32);
    v35 = sub_15DB5C0(v118, v32, v34);
    v36 = v35;
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    if ( *(_WORD *)(v33 + 4) != 1 )
    {
      v44 = sub_15E1B70(*(_QWORD *)(a1 + 32));
      v45 = v44;
      if ( v44 )
        ++*(_DWORD *)(v44 + 8);
      if ( !v31 )
        goto LABEL_147;
      v46 = *((_DWORD *)v31 - 1);
      if ( v46 != *((_DWORD *)v31 - 2) )
        goto LABEL_32;
      v79 = (3 * v46 + 1) >> 1;
      v80 = 8 * v79 + 8;
      if ( 8 * v46 + 8 >= (unsigned int)v80 || v46 >= v79 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v147, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v147);
        sub_233E40((__int64)v147);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
LABEL_74:
      LODWORD(v120) = v79;
      v81 = sub_186B300(v31 - 1, v80);
      v31 = (_QWORD *)(v81 + 8);
      *(_DWORD *)v81 = (_DWORD)v120;
      LODWORD(v81) = *(_DWORD *)(v81 + 4);
      v49 = &v31[(unsigned int)v81];
      v48 = v81 + 1;
LABEL_33:
      *v49 = v45;
      *((_DWORD *)v31 - 1) = v48;
LABEL_34:
      if ( !v36 )
        goto LABEL_37;
      goto LABEL_35;
    }
    v37 = *(unsigned int *)(v33 + 16);
    if ( !*(_QWORD *)&v125[2 * v37] )
      goto LABEL_34;
    v38 = (__int64 *)&v16[8 * v37];
    v39 = (char *)s + v37;
    v40 = *v38;
    if ( !*((_BYTE *)s + v37) )
    {
      v82 = sub_15E1B70(*(_QWORD *)(a1 + 32));
      v45 = v82;
      if ( v82 )
        ++*(_DWORD *)(v82 + 8);
      if ( v31 )
      {
        v46 = *((_DWORD *)v31 - 1);
        if ( v46 == *((_DWORD *)v31 - 2) )
        {
          v79 = (3 * v46 + 1) >> 1;
          v80 = 8 * v79 + 8;
          if ( 8 * v46 + 8 >= (unsigned int)v80 || v46 >= v79 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v147, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v147);
            sub_233E40((__int64)v147);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          goto LABEL_74;
        }
LABEL_32:
        v47 = v46;
        v48 = v46 + 1;
        v49 = &v31[v47];
        goto LABEL_33;
      }
LABEL_147:
      v106 = (_QWORD *)sub_186B270(0x18u);
      v31 = v106 + 1;
      *v106 = 2;
      v48 = 1;
      v49 = v31;
      goto LABEL_33;
    }
    if ( !v36 )
    {
      if ( v40 )
      {
        v42 = (*(_DWORD *)(v40 + 8))-- == 1;
        if ( v42 )
        {
          v120 = (__int64 *)&v16[8 * v37];
          sub_15D7BC0(v119, v40);
          v38 = v120;
        }
        *v38 = 0;
      }
      *v39 = 0;
      goto LABEL_37;
    }
    v41 = *(_DWORD *)(v36 + 8);
    *(_DWORD *)(v36 + 8) = v41 + 1;
    if ( !v40 )
    {
      *v38 = v36;
      *v39 = 0;
LABEL_36:
      *(_DWORD *)(v36 + 8) = v41;
      if ( v41 )
        goto LABEL_37;
LABEL_27:
      sub_15D7BC0(v118, v36);
      goto LABEL_37;
    }
    v42 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v42 )
    {
      v120 = v38;
      sub_15D7BC0(v119, v40);
      *v120 = v36;
      *v39 = 0;
LABEL_35:
      v41 = *(_DWORD *)(v36 + 8) - 1;
      goto LABEL_36;
    }
    v43 = *(_DWORD *)(v36 + 8);
    *v38 = v36;
    *v39 = 0;
    *(_DWORD *)(v36 + 8) = --v43;
    if ( !v43 )
      goto LABEL_27;
LABEL_37:
    ++v32;
    v30 = *(_QWORD *)(v117 + 8);
    if ( !v30 )
      break;
  }
  v15 = v125;
  if ( v125 )
  {
LABEL_39:
    v50 = 0;
    do
    {
      if ( v50 >= *(v15 - 1) )
        break;
      if ( *((_BYTE *)s + v50) )
      {
        v51 = *(_QWORD *)&v15[2 * v50];
        if ( v51 )
        {
          v52 = (__int64 *)&v16[8 * v50];
          if ( !*v52 )
          {
            v107 = *(unsigned int *)(a1 + 80);
            v108 = *(_QWORD *)(a1 + 32);
            *(_DWORD *)(a1 + 80) = v107 + 1;
            v109 = sub_15DB5C0(v108, v107, v51);
            v110 = v109;
            if ( v109 )
              ++*(_DWORD *)(v109 + 8);
            v111 = *v52;
            if ( *v52 )
            {
              v42 = (*(_DWORD *)(v111 + 8))-- == 1;
              if ( v42 )
                sub_15D7BC0(v119, v111);
            }
            *v52 = v110;
            v15 = v125;
          }
        }
      }
      ++v50;
    }
    while ( v15 );
  }
LABEL_45:
  sub_633760(v147, *(_QWORD *)(a1 + 32), 0, v158);
  v158[8] = 0;
  v147[0] = (__int64)&off_1C4CA80;
  v55 = *(_DWORD *)(v114 + 68);
  if ( v55 >= *(_DWORD *)(v114 + 56) )
  {
    if ( v31 )
      goto LABEL_82;
    v83 = 0;
  }
  else
  {
    if ( !v16 )
    {
      while ( 1 )
      {
        sub_157BE40(
          (int)v130,
          (int)v116,
          *(_DWORD *)(v114 + 8LL * v55 + 80) & 0xFFFFFFF8,
          0,
          0,
          v54,
          (int)s,
          v114,
          (int)v115,
          (int)v116,
          v117,
          (int)v118,
          (__int64)v119,
          v120);
        v72 = *(_QWORD *)v130;
        v73 = *v115;
        *v115 = *(_QWORD *)v130;
        *(_QWORD *)v130 = v73;
        if ( v73 )
        {
          v74 = v131;
          v42 = (*(_DWORD *)(v73 + 8))-- == 1;
          if ( v42 )
          {
            sub_15D7BC0(v74, v73);
            v72 = *v115;
          }
        }
        if ( v72 )
          ++*(_DWORD *)(v72 + 8);
        if ( v31 )
        {
          v75 = *((_DWORD *)v31 - 1);
          if ( v75 == *((_DWORD *)v31 - 2) )
          {
            v76 = (3 * v75 + 1) >> 1;
            v77 = 8 * v76 + 8;
            if ( 8 * v75 + 8 >= (unsigned int)v77 || v75 >= v76 )
              goto LABEL_171;
            LODWORD(v117) = (3 * v75 + 1) >> 1;
            v78 = sub_186B300(v31 - 1, v77);
            v31 = (_QWORD *)(v78 + 8);
            *(_DWORD *)v78 = v117;
            LODWORD(v78) = *(_DWORD *)(v78 + 4);
            v71 = &v31[(unsigned int)v78];
            v70 = v78 + 1;
          }
          else
          {
            v69 = v75;
            v70 = v75 + 1;
            v71 = &v31[v69];
          }
        }
        else
        {
          v112 = (_QWORD *)sub_186B270(0x18u);
          v31 = v112 + 1;
          *v112 = 2;
          v70 = 1;
          v71 = v31;
        }
        *v71 = v72;
        ++v55;
        *((_DWORD *)v31 - 1) = v70;
        if ( v55 >= *(_DWORD *)(v114 + 56) )
          goto LABEL_82;
      }
    }
    do
    {
      sub_157BE40(
        (int)v130,
        (int)v116,
        *(_DWORD *)(v114 + 8LL * v55 + 80) & 0xFFFFFFF8,
        *((_DWORD *)v16 - 1),
        (int)v16,
        v54,
        (int)s,
        v114,
        (int)v115,
        (int)v116,
        v117,
        (int)v118,
        (__int64)v119,
        v120);
      v59 = *(_QWORD *)v130;
      v60 = *v115;
      *v115 = *(_QWORD *)v130;
      *(_QWORD *)v130 = v60;
      if ( v60 )
      {
        v61 = v131;
        v42 = (*(_DWORD *)(v60 + 8))-- == 1;
        if ( v42 )
        {
          sub_15D7BC0(v61, v60);
          v59 = *v115;
        }
      }
      if ( v59 )
        ++*(_DWORD *)(v59 + 8);
      if ( v31 )
      {
        v62 = *((_DWORD *)v31 - 1);
        v63 = *((_DWORD *)v31 - 2);
        if ( v63 == v62 )
        {
          v64 = (3 * v63 + 1) >> 1;
          v65 = 8 * v64 + 8;
          v66 = v64;
          if ( 8 * v63 + 8 >= (unsigned int)v65 || v63 >= v64 )
          {
LABEL_171:
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v130, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v130);
            sub_233E40((__int64)v130);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v67 = (unsigned int *)sub_186B300(v31 - 1, v65);
          v68 = v67[1];
          v31 = v67 + 2;
          *v67 = v66;
          LODWORD(v67) = v68;
          v58 = &v31[v68];
          v57 = (_DWORD)v67 + 1;
        }
        else
        {
          v56 = v62;
          v57 = v62 + 1;
          v58 = &v31[v56];
        }
      }
      else
      {
        v101 = (_QWORD *)sub_186B270(0x18u);
        v31 = v101 + 1;
        *v101 = 2;
        v57 = 1;
        v58 = v31;
      }
      *v58 = v59;
      ++v55;
      *((_DWORD *)v31 - 1) = v57;
    }
    while ( v55 < *(_DWORD *)(v114 + 56) );
LABEL_82:
    v83 = *((_DWORD *)v31 - 1);
  }
  if ( HIBYTE(v135) )
  {
    sub_14E1930((int)v134, (__int64)s, v114, (int)v115, (__int64)v116, v117, (__int64)v118, v119, (int)v120);
  }
  else if ( (_BYTE)v135 )
  {
    if ( (unsigned int)sub_14DD000(v134, v83, v31, v115) == 5 )
      goto LABEL_135;
  }
  else
  {
    if ( (unsigned int)sub_14DC740(
                         (int)v134,
                         v83,
                         (int)v31,
                         (int)v115,
                         v53,
                         v54,
                         (int)s,
                         v114,
                         (int)v115,
                         (int)v116,
                         v117,
                         v118,
                         (int)v119,
                         (int)v120,
                         v121,
                         (int)ptr,
                         (int)v134,
                         (int)v145,
                         v124,
                         (int)v125,
                         (int)v126,
                         v127,
                         (int)v128,
                         v129,
                         v130[0],
                         v131,
                         v132,
                         v133,
                         v134[0],
                         0,
                         v137,
                         v138,
                         v140,
                         v141,
                         SDWORD2(v141),
                         v142,
                         SDWORD2(v142),
                         (int)v143,
                         v144,
                         v145[0],
                         v145[2],
                         v145[4],
                         v145[6],
                         v145[8],
                         v145[10],
                         v145[12],
                         v145[14],
                         v146) != 5 )
      goto LABEL_86;
LABEL_135:
    v102 = sub_15E1AF0(v134[0]);
    v103 = v102;
    if ( v102 )
      ++*(_DWORD *)(v102 + 8);
    v104 = *v115;
    if ( *v115 )
    {
      v105 = v115[1];
      v42 = (*(_DWORD *)(v104 + 8))-- == 1;
      if ( v42 )
        sub_15D7BC0(v105, v104);
    }
    *v115 = v103;
  }
LABEL_86:
  v147[0] = (__int64)&off_1C4CA60;
  if ( v157 )
    sub_186B220((void *)(v157 - 8));
  v84 = v155;
  if ( v155 )
  {
    v85 = v156;
    v42 = (*(_DWORD *)(v155 + 8))-- == 1;
    if ( v42 )
      sub_15D7BC0(v85, v84);
  }
  v86 = v153;
  if ( v153 )
  {
    v87 = v154;
    v42 = (*(_DWORD *)(v153 + 8))-- == 1;
    if ( v42 )
      sub_15D7BC0(v87, v86);
  }
  v88 = v151;
  if ( v151 )
  {
    v89 = v152;
    v42 = (*(_DWORD *)(v151 + 8))-- == 1;
    if ( v42 )
      sub_15D7BC0(v89, v88);
  }
  v150 = &qword_1C637E8;
  sub_15841B0(&v150);
  v149 = &qword_1C637E8;
  sub_15841B0(&v149);
  if ( v148 )
    sub_186B220((void *)(v148 - 8));
  sub_15841B0(v116);
  if ( s )
    sub_186B220(s - 2);
  if ( v31 )
  {
    v90 = v31;
    v91 = (unsigned __int64)&v31[*((unsigned int *)v31 - 1)];
    if ( (unsigned __int64)v31 < v91 )
    {
      do
      {
        while ( 1 )
        {
          v92 = *v90;
          if ( *v90 )
          {
            v42 = (*(_DWORD *)(v92 + 8))-- == 1;
            if ( v42 )
              break;
          }
          if ( (unsigned __int64)++v90 >= v91 )
            goto LABEL_108;
        }
        ++v90;
        sub_15D7BC0(v119, v92);
      }
      while ( (unsigned __int64)v90 < v91 );
    }
LABEL_108:
    sub_186B220(v31 - 1);
  }
  if ( v16 )
  {
    v93 = v16;
    v94 = &v16[8 * *((unsigned int *)v16 - 1)];
    if ( v16 < v94 )
    {
      do
      {
        while ( 1 )
        {
          v95 = *(_QWORD *)v93;
          if ( *(_QWORD *)v93 )
          {
            v42 = (*(_DWORD *)(v95 + 8))-- == 1;
            if ( v42 )
              break;
          }
          v93 += 8;
          if ( v93 >= v94 )
            goto LABEL_116;
        }
        v93 += 8;
        sub_15D7BC0(v119, v95);
      }
      while ( v93 < v94 );
    }
LABEL_116:
    sub_186B220(v16 - 8);
  }
  if ( v125 )
    sub_186B220(v125 - 2);
  sub_62A410(v121, v114);
  v96 = (int *)v143;
  v97 = (char *)v143 + 8 * (unsigned int)v144;
  v98 = (char *)v143;
  if ( v143 != v97 )
  {
    do
    {
      v99 = *(_QWORD *)v98;
      v98 += 8;
      *(_BYTE *)(v99 + 6) &= ~1u;
    }
    while ( v97 != v98 );
  }
  LODWORD(v144) = 0;
  if ( v96 != v123 && v96 )
    sub_186B220(v96);
  if ( *((_QWORD *)&v142 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v142 + 1) - 8LL));
  if ( (_QWORD)v142 )
    sub_186B220((void *)(v142 - 8));
  if ( *((_QWORD *)&v141 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v141 + 1) - 8LL));
  if ( (_QWORD)v141 )
    sub_186B220((void *)(v141 - 8));
  return sub_186B220(ptr);
}

