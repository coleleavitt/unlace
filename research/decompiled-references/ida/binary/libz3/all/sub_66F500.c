__int64 __fastcall sub_66F500(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // r15d
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  bool v12; // zf
  __int64 v13; // r10
  _DWORD *v14; // rax
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // rcx
  void *v20; // r12
  __int64 v21; // rax
  unsigned int v22; // r14d
  __int64 v23; // rcx
  _DWORD *v24; // rax
  __int64 v25; // rax
  int v26; // edi
  __int64 *v27; // rcx
  unsigned int v28; // edx
  __int64 *v29; // rsi
  __int64 v30; // rdx
  __int64 *v31; // r9
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdi
  _DWORD *v37; // rax
  void *v38; // r15
  void *v39; // r13
  __int64 *v40; // rbx
  unsigned __int64 v41; // rbp
  __int64 v42; // rsi
  unsigned int v44; // ecx
  size_t v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rsi
  int v52; // eax
  __int64 *v53; // rsi
  unsigned int v54; // r8d
  size_t v55; // rsi
  unsigned int v56; // r12d
  unsigned int *v57; // rax
  __int64 v58; // rsi
  __int64 v59; // r13
  __int64 v60; // r15
  _DWORD *v61; // rax
  __int64 v62; // rax
  int v63; // r11d
  __int64 *v64; // rsi
  unsigned int v65; // edx
  __int64 *v66; // r8
  __int64 v67; // rdx
  __int64 *v68; // rbp
  __int64 *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  _QWORD *v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdi
  char *v75; // rdx
  int v76; // ecx
  __int64 v77; // rax
  unsigned int v78; // esi
  char *v79; // r8
  __int64 v80; // r11
  char *v81; // rsi
  char *i; // r15
  __int64 v83; // rax
  void *v84; // r13
  void *v85; // rax
  void *v86; // rdi
  void *v87; // rdi
  __int64 v88; // r10
  void *v89; // rdi
  int v90; // ecx
  int v91; // r8d
  int v92; // r9d
  __int64 v93; // rdi
  __int64 v94; // r10
  int v95; // r8d
  int v96; // r9d
  __int64 v97; // rax
  __int64 v98; // r15
  void *v99; // rsi
  __int64 v100; // rax
  __int64 v101; // rdi
  __int64 *v102; // r10
  __int64 v103; // rsi
  __int64 v104; // rax
  void *v105; // r13
  void *v106; // rdi
  int v107; // eax
  int v108; // eax
  char **v109; // rbp
  __int64 v110; // rdx
  char **exception; // rbp
  __int64 v112; // rdx
  int v113; // [rsp+0h] [rbp-148h]
  __int64 *v114; // [rsp+8h] [rbp-140h]
  __int64 v115; // [rsp+10h] [rbp-138h]
  _QWORD *v116; // [rsp+10h] [rbp-138h]
  int v117; // [rsp+18h] [rbp-130h]
  unsigned int v118; // [rsp+1Ch] [rbp-12Ch]
  int v119; // [rsp+20h] [rbp-128h]
  __int64 *v120; // [rsp+20h] [rbp-128h]
  char v121; // [rsp+28h] [rbp-120h]
  void *v122; // [rsp+28h] [rbp-120h]
  void *v123; // [rsp+28h] [rbp-120h]
  void *v124; // [rsp+28h] [rbp-120h]
  void *v125; // [rsp+28h] [rbp-120h]
  void *v126; // [rsp+28h] [rbp-120h]
  void *v127; // [rsp+28h] [rbp-120h]
  void *v128; // [rsp+28h] [rbp-120h]
  int v129; // [rsp+30h] [rbp-118h]
  int v130[2]; // [rsp+30h] [rbp-118h]
  int v131[2]; // [rsp+30h] [rbp-118h]
  int v132; // [rsp+38h] [rbp-110h]
  __int64 v133; // [rsp+38h] [rbp-110h]
  int v134; // [rsp+40h] [rbp-108h]
  int v135; // [rsp+40h] [rbp-108h]
  __int64 v136; // [rsp+40h] [rbp-108h]
  void *ptr; // [rsp+48h] [rbp-100h]
  void *ptra; // [rsp+48h] [rbp-100h]
  int ptrb; // [rsp+48h] [rbp-100h]
  __int64 v140; // [rsp+50h] [rbp-F8h]
  __int64 v141; // [rsp+50h] [rbp-F8h]
  __int64 v142; // [rsp+50h] [rbp-F8h]
  __int64 v143; // [rsp+50h] [rbp-F8h]
  __int64 v144; // [rsp+50h] [rbp-F8h]
  __int64 v145; // [rsp+50h] [rbp-F8h]
  __int64 v146; // [rsp+50h] [rbp-F8h]
  __int64 v147; // [rsp+50h] [rbp-F8h]
  char v148; // [rsp+6Ch] [rbp-DCh] BYREF
  __int64 v149; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD *v150; // [rsp+78h] [rbp-D0h]
  _QWORD v151[2]; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD v152[2]; // [rsp+90h] [rbp-B8h] BYREF
  _QWORD v153[2]; // [rsp+A0h] [rbp-A8h] BYREF
  _QWORD v154[2]; // [rsp+B0h] [rbp-98h] BYREF
  char v155[8]; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v156; // [rsp+C8h] [rbp-80h]
  __int64 v157; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v158; // [rsp+D8h] [rbp-70h]
  __int64 v159; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v160; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v161; // [rsp+F0h] [rbp-58h] BYREF
  _QWORD v162[10]; // [rsp+F8h] [rbp-50h] BYREF

  v4 = 0;
  v114 = a4;
  sub_66E8A0(a1);
  v9 = *(_QWORD *)(a1 + 120);
  v150 = nullptr;
  v149 = v9;
  v10 = *(_QWORD *)(a3 + 8);
  if ( !v10 )
    goto LABEL_12;
  do
  {
    if ( v4 >= *(_DWORD *)(v10 - 4) )
      break;
    v11 = *(_QWORD *)(v10 + 8LL * v4);
    *(_QWORD *)v155 = 0;
    v157 = 1;
    v12 = *(_WORD *)(v11 + 4) == 0;
    v156 = 0;
    v158 = 0;
    if ( !v12 )
      goto LABEL_7;
    if ( *(_DWORD *)(v11 + 24) )
      goto LABEL_7;
    v13 = *(_QWORD *)(v11 + 16);
    v14 = *(_DWORD **)(v13 + 24);
    if ( v14 )
    {
      if ( *v14 != -1 )
        goto LABEL_7;
    }
    v25 = *(unsigned int *)(a1 + 248);
    v26 = *(_DWORD *)(v13 + 12);
    v27 = *(__int64 **)(a1 + 240);
    v28 = v25 - 1;
    v25 *= 16;
    v29 = (__int64 *)((char *)v27 + v25);
    v30 = 16LL * (v26 & v28);
    v31 = &v27[(unsigned __int64)v30 / 8];
    if ( v30 != v25 )
    {
      v32 = &v27[(unsigned __int64)v30 / 8];
      do
      {
        while ( 1 )
        {
          v33 = *v32;
          if ( (unsigned __int64)*v32 <= 1 )
            break;
          if ( *(_DWORD *)(v33 + 12) == v26 && v13 == v33 )
          {
LABEL_55:
            v47 = sub_15DC610(
                    *(_QWORD *)(a1 + 120),
                    v32[1],
                    0,
                    0,
                    v8,
                    (int)v31,
                    v113,
                    (int)v114,
                    v115,
                    v117,
                    v119,
                    v121,
                    v129,
                    v132,
                    v134,
                    ptr);
            v48 = v47;
            if ( v47 )
              ++*(_DWORD *)(v47 + 8);
            v49 = v150;
            if ( v150 )
            {
              v50 = *((_DWORD *)v150 - 1);
              if ( v50 == *((_DWORD *)v150 - 2) )
              {
                v54 = (3 * v50 + 1) >> 1;
                v55 = 8 * v54 + 8;
                v56 = v54;
                if ( 8 * v50 + 8 >= (unsigned int)v55 || v50 >= v54 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_107D5E(&v159, "Overflow encountered when expanding vector", v112);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v159);
                  sub_233E40((__int64)&v159);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v115 = v48;
                v57 = (unsigned int *)sub_186B300(v150 - 1, v55);
                v58 = v57[1];
                v49 = v57 + 2;
                v48 = v115;
                *v57 = v56;
                v150 = v49;
                LODWORD(v57) = v58;
                v53 = &v49[v58];
                v52 = (_DWORD)v57 + 1;
              }
              else
              {
                v51 = v50;
                v52 = v50 + 1;
                v53 = &v150[v51];
              }
            }
            else
            {
              v115 = v47;
              v72 = (_QWORD *)sub_186B270(0x18u);
              *v72 = 2;
              v48 = v115;
              v52 = 1;
              v49 = v72 + 1;
              v150 = v49;
              v53 = v49;
            }
            *v53 = v48;
            *((_DWORD *)v49 - 1) = v52;
            goto LABEL_11;
          }
          v32 += 2;
          if ( v29 == v32 )
            goto LABEL_26;
        }
        if ( !v33 )
          goto LABEL_7;
        v32 += 2;
      }
      while ( v29 != v32 );
    }
LABEL_26:
    if ( v27 == v31 )
    {
LABEL_7:
      v15 = v150;
      ++*(_DWORD *)(v11 + 8);
      if ( !v15 )
        goto LABEL_34;
LABEL_8:
      v16 = *((_DWORD *)v15 - 1);
      if ( v16 == *((_DWORD *)v15 - 2) )
      {
        v44 = (3 * v16 + 1) >> 1;
        v45 = 8 * v44 + 8;
        if ( 8 * v16 + 8 >= (unsigned int)v45 || v16 >= v44 )
        {
          v109 = (char **)__cxa_allocate_exception(0x28u);
          sub_107D5E(&v159, "Overflow encountered when expanding vector", v110);
          *v109 = (char *)off_1C63128;
          sub_2333C0(v109 + 1, &v159);
          sub_233E40((__int64)&v159);
          __cxa_throw(v109, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v115) = (3 * v16 + 1) >> 1;
        v46 = sub_186B300(v15 - 1, v45);
        v15 = (_QWORD *)(v46 + 8);
        v150 = (_QWORD *)(v46 + 8);
        *(_DWORD *)v46 = v115;
        LODWORD(v46) = *(_DWORD *)(v46 + 4);
        v19 = &v15[(unsigned int)v46];
        v18 = v46 + 1;
      }
      else
      {
        v17 = v16;
        v18 = v16 + 1;
        v19 = &v15[v17];
      }
      goto LABEL_10;
    }
    while ( 1 )
    {
      v34 = *v27;
      if ( (unsigned __int64)*v27 <= 1 )
        break;
      if ( *(_DWORD *)(v34 + 12) == v26 && v13 == v34 )
      {
        v32 = v27;
        goto LABEL_55;
      }
LABEL_30:
      v27 += 2;
      if ( v31 == v27 )
        goto LABEL_7;
    }
    if ( v34 )
      goto LABEL_30;
    v15 = v150;
    ++*(_DWORD *)(v11 + 8);
    if ( v15 )
      goto LABEL_8;
LABEL_34:
    v35 = (_QWORD *)sub_186B270(0x18u);
    v15 = v35 + 1;
    *v35 = 2;
    v18 = 1;
    v150 = v15;
    v19 = v15;
LABEL_10:
    *v19 = v11;
    *((_DWORD *)v15 - 1) = v18;
LABEL_11:
    ++v4;
    v20 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v155);
    sub_182CBA0(v20, &v157);
    v10 = *(_QWORD *)(a3 + 8);
  }
  while ( v10 );
LABEL_12:
  v120 = &v149;
  v118 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64 *))(**(_QWORD **)(a1 + 184) + 264LL))(
           *(_QWORD *)(a1 + 184),
           a2,
           &v149,
           v114);
  v21 = v114[1];
  v22 = 0;
  v116 = v154;
  if ( !v21 )
    goto LABEL_41;
  while ( v22 < *(_DWORD *)(v21 - 4) )
  {
    v151[0] = 0;
    v152[0] = 1;
    v153[0] = 0;
    v154[0] = 1;
    v23 = *(_QWORD *)(v21 + 8LL * v22);
    v151[1] = 0;
    v12 = *(_WORD *)(v23 + 4) == 0;
    v152[1] = 0;
    v153[1] = 0;
    v154[1] = 0;
    if ( !v12
      || (v24 = *(_DWORD **)(*(_QWORD *)(v23 + 16) + 24LL)) == nullptr
      || *v24
      || v24[1] != 9
      || *(_DWORD *)(v23 + 24) != 2 )
    {
      sub_1872CE0("");
      sub_1873130(114, 241);
    }
    v36 = *(_QWORD *)(v23 + 40);
    if ( *(_WORD *)(v36 + 4) )
      goto LABEL_40;
    v37 = *(_DWORD **)(*(_QWORD *)(v36 + 16) + 24LL);
    if ( !v37 )
      goto LABEL_40;
    if ( *v37 )
      goto LABEL_40;
    if ( v37[1] != 2 )
      goto LABEL_40;
    if ( *(_DWORD *)(v36 + 24) != 2 )
      goto LABEL_40;
    v59 = *(_QWORD *)(v36 + 32);
    if ( *(_WORD *)(v59 + 4) )
      goto LABEL_40;
    if ( *(_DWORD *)(v59 + 24) )
      goto LABEL_40;
    v60 = *(_QWORD *)(v59 + 16);
    v61 = *(_DWORD **)(v60 + 24);
    if ( v61 )
    {
      if ( *v61 != -1 )
        goto LABEL_40;
    }
    v62 = *(unsigned int *)(a1 + 272);
    v63 = *(_DWORD *)(v60 + 12);
    v64 = *(__int64 **)(a1 + 264);
    v65 = v62 - 1;
    v62 *= 16;
    v66 = (__int64 *)((char *)v64 + v62);
    v67 = 16LL * (v63 & v65);
    v68 = &v64[(unsigned __int64)v67 / 8];
    if ( v67 == v62 )
    {
LABEL_78:
      if ( v64 == v68 )
        goto LABEL_40;
      while ( 1 )
      {
        v71 = *v64;
        if ( (unsigned __int64)*v64 > 1 )
        {
          if ( *(_DWORD *)(v71 + 12) == v63 && v60 == v71 )
          {
            v69 = v64;
            goto LABEL_87;
          }
        }
        else if ( !v71 )
        {
          goto LABEL_40;
        }
        v64 += 2;
        if ( v68 == v64 )
          goto LABEL_40;
      }
    }
    v69 = &v64[(unsigned __int64)v67 / 8];
    while ( 1 )
    {
      while ( 1 )
      {
        v70 = *v69;
        if ( (unsigned __int64)*v69 > 1 )
          break;
        if ( !v70 )
          goto LABEL_40;
        v69 += 2;
        if ( v66 == v69 )
          goto LABEL_78;
      }
      if ( *(_DWORD *)(v70 + 12) == v63 && v60 == v70 )
        break;
      v69 += 2;
      if ( v66 == v69 )
        goto LABEL_78;
    }
LABEL_87:
    v133 = *(_QWORD *)(v23 + 32);
    *(_QWORD *)v130 = v69[1];
    if ( !(unsigned __int8)sub_1673B50(
                             (int)a1 + 128,
                             *(_QWORD *)(v36 + 40),
                             (unsigned int)v151,
                             (unsigned int)&v148,
                             (_DWORD)v66,
                             0) )
      goto LABEL_40;
    v73 = *(_QWORD *)(a1 + 120);
    v74 = *(_QWORD *)(v59 + 16);
    v160 = 0;
    v162[0] = 1;
    v75 = *(char **)(a1 + 288);
    v135 = v73;
    v76 = *(_DWORD *)(v74 + 12);
    v77 = *(unsigned int *)(a1 + 296);
    v159 = v74;
    v161 = 0;
    v162[1] = 0;
    v78 = v77 - 1;
    v77 *= 40;
    v79 = &v75[v77];
    v80 = 40LL * (v76 & v78);
    v81 = &v75[v80];
    if ( v80 != v77 )
    {
      for ( i = &v75[v80]; v79 != i; i += 40 )
      {
        v83 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(v83 + 12) == v76 && v74 == v83 )
            goto LABEL_133;
        }
        else if ( !v83 )
        {
          goto LABEL_97;
        }
      }
    }
    if ( v75 == v81 )
    {
LABEL_97:
      v84 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v160);
      sub_182CBA0(v84, v162);
      sub_1872CE0("");
      sub_1873130(114, 245);
    }
    while ( 2 )
    {
      v104 = *(_QWORD *)v75;
      if ( *(_QWORD *)v75 <= 1u )
      {
        if ( !v104 )
          goto LABEL_97;
        goto LABEL_128;
      }
      if ( *(_DWORD *)(v104 + 12) != v76 || v74 != v104 )
      {
LABEL_128:
        v75 += 40;
        if ( v81 == v75 )
          goto LABEL_97;
        continue;
      }
      break;
    }
    i = v75;
LABEL_133:
    v105 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v160);
    sub_182CBA0(v105, v162);
    v106 = qword_1C7F2C0;
    v88 = 8LL * v22;
    if ( (i[12] & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v153, i + 8);
      v88 = 8LL * v22;
    }
    else
    {
      v107 = *((_DWORD *)i + 2);
      BYTE4(v153[0]) &= ~1u;
      LODWORD(v153[0]) = v107;
    }
    if ( (i[28] & 1) != 0 )
    {
      v128 = (void *)v88;
      sub_182C690(v106, v154, i + 24);
      v88 = (__int64)v128;
    }
    else
    {
      v108 = *((_DWORD *)i + 6);
      BYTE4(v154[0]) &= ~1u;
      LODWORD(v154[0]) = v108;
    }
    v85 = *(void **)(a1 + 120);
    v86 = qword_1C7F2C0;
    v159 = 0;
    v160 = 0;
    ptra = v85;
    v161 = 1;
    v162[0] = 0;
    if ( (v151[0] & 0x100000000LL) != 0 )
    {
      v144 = v88;
      sub_182C690(qword_1C7F2C0, &v159, v151);
      v88 = v144;
    }
    else
    {
      LODWORD(v159) = v151[0];
    }
    if ( (v152[0] & 0x100000000LL) != 0 )
    {
      v126 = (void *)v88;
      sub_182C690(v86, &v161, v152);
      v88 = (__int64)v126;
    }
    else
    {
      BYTE4(v161) &= ~1u;
      LODWORD(v161) = v152[0];
    }
    v87 = qword_1C7F2C0;
    if ( !LODWORD(v153[0]) )
    {
      if ( (v159 & 0x100000000LL) != 0 )
      {
        v145 = v88;
        sub_182C690(qword_1C7F2C0, &v159, &v159);
        v88 = v145;
      }
      else
      {
        BYTE4(v159) &= ~1u;
      }
      if ( (v161 & 0x100000000LL) == 0 )
      {
        BYTE4(v161) &= ~1u;
        goto LABEL_108;
      }
      v122 = (void *)v88;
      sub_182C690(v87, &v161, &v161);
      goto LABEL_107;
    }
    if ( !(_DWORD)v159 )
    {
      if ( (v153[0] & 0x100000000LL) != 0 )
      {
        v147 = v88;
        sub_182C690(qword_1C7F2C0, &v159, v153);
        v88 = v147;
      }
      else
      {
        BYTE4(v159) &= ~1u;
        LODWORD(v159) = v153[0];
      }
      if ( (v154[0] & 0x100000000LL) == 0 )
      {
        BYTE4(v161) &= ~1u;
        LODWORD(v161) = v154[0];
        goto LABEL_108;
      }
      v122 = (void *)v88;
      sub_182C690(v87, &v161, v154);
LABEL_107:
      v88 = (__int64)v122;
      goto LABEL_108;
    }
    if ( (v161 & 0x100000000LL) != 0 || (_DWORD)v161 != 1 || (v154[0] & 0x100000000LL) != 0 || LODWORD(v154[0]) != 1 )
    {
      v122 = (void *)v88;
      sub_1851D20(qword_1C7F2C0, &v159, v153, &v159);
      goto LABEL_107;
    }
    v146 = v88;
    sub_1831A80(qword_1C7F2C0, &v159, v153, &v159);
    sub_182CBA0(v87, &v161);
    BYTE4(v161) &= ~1u;
    v88 = v146;
    LODWORD(v161) = 1;
LABEL_108:
    v155[4] &= 0xFCu;
    v89 = qword_1C7F2C0;
    BYTE4(v157) &= 0xFCu;
    *(_DWORD *)v155 = 0;
    v156 = 0;
    LODWORD(v157) = 1;
    v158 = 0;
    if ( (v159 & 0x100000000LL) != 0 )
    {
      v143 = v88;
      sub_182C690(qword_1C7F2C0, v155, &v159);
      v88 = v143;
    }
    else
    {
      *(_DWORD *)v155 = v159;
    }
    if ( (v161 & 0x100000000LL) != 0 )
    {
      v142 = v88;
      sub_182C690(v89, &v157, &v161);
      v88 = v142;
    }
    else
    {
      BYTE4(v157) &= ~1u;
      LODWORD(v157) = v161;
    }
    v140 = v88;
    v123 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v159);
    sub_182CBA0(v123, &v161);
    v93 = *(_QWORD *)(a1 + 160);
    v94 = v140;
    if ( !v93 )
    {
      sub_16669E0(a1 + 152);
      v93 = *(_QWORD *)(a1 + 160);
      v94 = v140;
    }
    v141 = v94;
    sub_166A700(v93, (unsigned int)v155, 1, v90, v91, v92);
    sub_15DC610(
      *(_QWORD *)(a1 + 120),
      v130[0],
      0,
      0,
      v95,
      v96,
      v113,
      (int)v114,
      (int)v116,
      v117,
      (int)v120,
      (char)v155,
      v130[0],
      v133,
      v135,
      ptra);
    v97 = sub_15E1B70(ptrb);
    v98 = v97;
    if ( v97 )
      ++*(_DWORD *)(v97 + 8);
    v99 = v124;
    v125 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v99);
    sub_182CBA0(v125, &v157);
    v100 = sub_15E1B70(*(_QWORD *)(a1 + 120));
    v101 = *v114;
    v102 = (__int64 *)(v114[1] + v141);
    if ( v100 )
      ++*(_DWORD *)(v100 + 8);
    v103 = *v102;
    if ( *v102 )
    {
      v12 = (*(_DWORD *)(v103 + 8))-- == 1;
      if ( v12 )
      {
        *(_QWORD *)v131 = v102;
        v127 = (void *)v100;
        sub_15D7BC0(v101, v103);
        v102 = *(__int64 **)v131;
        v100 = (__int64)v127;
      }
    }
    *v102 = v100;
    if ( v98 )
    {
      v12 = (*(_DWORD *)(v98 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v136, v98);
    }
LABEL_40:
    v38 = qword_1C7F2C0;
    ++v22;
    sub_182CBA0(qword_1C7F2C0, v153);
    sub_182CBA0(v38, v116);
    v39 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v151);
    sub_182CBA0(v39, v152);
    v21 = v114[1];
    if ( v21 )
      continue;
    break;
  }
LABEL_41:
  v40 = v150;
  if ( v150 )
  {
    v41 = (unsigned __int64)&v150[*((unsigned int *)v150 - 1)];
    if ( (unsigned __int64)v150 >= v41 )
      goto LABEL_49;
    do
    {
      while ( 1 )
      {
        v42 = *v40;
        if ( *v40 )
        {
          v12 = (*(_DWORD *)(v42 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( (unsigned __int64)++v40 >= v41 )
          goto LABEL_48;
      }
      sub_15D7BC0(v149, v42);
      ++v40;
    }
    while ( (unsigned __int64)v40 < v41 );
LABEL_48:
    v40 = v150;
    if ( v150 )
LABEL_49:
      sub_186B220(v40 - 1);
  }
  return v118;
}

