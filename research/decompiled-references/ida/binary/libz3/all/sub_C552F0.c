__int64 __fastcall sub_C552F0(__int64 *a1, void *a2, __int64 a3, int *a4, int *a5)
{
  char **exception; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // r13
  int v12; // eax
  int v13; // eax
  void *v14; // r12
  int v15; // eax
  int v16; // eax
  void *v17; // r15
  void *v18; // r12
  int v19; // r12d
  int v20; // r12d
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 *v26; // r8
  __int64 v27; // r9
  int v28; // eax
  bool v29; // al
  void *v30; // r12
  void *v31; // r12
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // r13
  __int64 v35; // rdi
  __int64 v36; // rax
  void *v37; // r12
  __int64 v38; // r14
  void *v39; // rbx
  void *v41; // r15
  void *v42; // r15
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // r15
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 *v50; // rcx
  void *v51; // rdi
  __int64 v52; // rax
  unsigned int v53; // r9d
  int v54; // r10d
  unsigned __int64 *v55; // rcx
  unsigned __int64 *v56; // r8
  unsigned __int64 v57; // r9
  int v58; // edi
  __int64 v59; // rax
  unsigned __int64 *v60; // r10
  unsigned __int64 *v61; // rax
  unsigned __int64 *v62; // rsi
  unsigned __int64 v63; // rdx
  int v64; // eax
  bool v65; // al
  unsigned __int64 v66; // rax
  unsigned int v67; // r12d
  unsigned int v68; // ecx
  unsigned int *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r12
  __int64 v72; // rax
  int v73; // r9d
  __int64 v74; // rdx
  char *v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // r12
  char *v78; // rax
  unsigned __int64 v79; // rsi
  size_t v80; // r11
  __int64 v81; // rdx
  unsigned __int64 *v82; // rdi
  unsigned __int64 *v83; // rdx
  char *v84; // r12
  void *v85; // r13
  void *v86; // r13
  _QWORD *v87; // rdx
  int v88; // [rsp-8h] [rbp-178h]
  int v89; // [rsp+0h] [rbp-170h]
  int v90; // [rsp+8h] [rbp-168h]
  int v91; // [rsp+Ch] [rbp-164h]
  unsigned __int64 *v92; // [rsp+10h] [rbp-160h]
  int v93; // [rsp+18h] [rbp-158h]
  int v94; // [rsp+20h] [rbp-150h]
  char *v95; // [rsp+20h] [rbp-150h]
  unsigned __int64 *v96; // [rsp+28h] [rbp-148h]
  unsigned __int64 *v97; // [rsp+28h] [rbp-148h]
  char *v98; // [rsp+30h] [rbp-140h]
  int v99; // [rsp+30h] [rbp-140h]
  __int64 v100; // [rsp+38h] [rbp-138h]
  __int64 *v101; // [rsp+40h] [rbp-130h]
  int v102; // [rsp+40h] [rbp-130h]
  void *v103; // [rsp+48h] [rbp-128h]
  __int64 v104; // [rsp+58h] [rbp-118h]
  char *v105; // [rsp+60h] [rbp-110h]
  int *v106; // [rsp+68h] [rbp-108h]
  char *v107; // [rsp+70h] [rbp-100h]
  size_t v108; // [rsp+70h] [rbp-100h]
  char *v109; // [rsp+70h] [rbp-100h]
  unsigned __int64 *v110; // [rsp+70h] [rbp-100h]
  int *v111; // [rsp+78h] [rbp-F8h]
  int v112; // [rsp+80h] [rbp-F0h] BYREF
  int v113; // [rsp+88h] [rbp-E8h] BYREF
  int v114[2]; // [rsp+90h] [rbp-E0h] BYREF
  __int64 v115; // [rsp+98h] [rbp-D8h]
  __int64 v116; // [rsp+A0h] [rbp-D0h]
  void *v117; // [rsp+A8h] [rbp-C8h] BYREF
  __int64 v118; // [rsp+B0h] [rbp-C0h]
  __int64 v119[2]; // [rsp+B8h] [rbp-B8h] BYREF
  _QWORD v120[2]; // [rsp+C8h] [rbp-A8h] BYREF
  _QWORD v121[3]; // [rsp+D8h] [rbp-98h] BYREF
  int v122[2]; // [rsp+F0h] [rbp-80h] BYREF
  __int64 v123; // [rsp+F8h] [rbp-78h] BYREF
  __int64 v124; // [rsp+100h] [rbp-70h] BYREF
  __int64 v125; // [rsp+108h] [rbp-68h] BYREF
  __int64 v126; // [rsp+110h] [rbp-60h]
  __int64 v127; // [rsp+118h] [rbp-58h] BYREF
  __int64 v128; // [rsp+120h] [rbp-50h] BYREF
  __int64 v129; // [rsp+128h] [rbp-48h] BYREF
  __int64 v130; // [rsp+130h] [rbp-40h]
  __int64 v131; // [rsp+138h] [rbp-38h]

  v103 = a2;
  v104 = a3;
  v117 = nullptr;
  v118 = 0;
  v119[0] = 1;
  v119[1] = 0;
  v120[0] = 0;
  v120[1] = 0;
  v121[0] = 1;
  v121[1] = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(a2) + 24) + 8LL);
  if ( *(_BYTE *)(v9 + 8) )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  LODWORD(v116) = *(_DWORD *)v9;
  v10 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v104) + 24) + 8LL);
  if ( *(_BYTE *)(v10 + 8) )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  HIDWORD(v116) = *(_DWORD *)v10;
  v11 = qword_1C7F2C0;
  if ( (a4[1] & 1) != 0 )
  {
    v106 = (int *)&v117;
    sub_182C690(qword_1C7F2C0, &v117, a4);
  }
  else
  {
    v12 = *a4;
    BYTE4(v117) &= ~1u;
    LODWORD(v117) = v12;
    v106 = (int *)&v117;
  }
  if ( (a4[5] & 1) != 0 )
  {
    sub_182C690(v11, v119, a4 + 4);
  }
  else
  {
    v13 = a4[4];
    BYTE4(v119[0]) &= ~1u;
    LODWORD(v119[0]) = v13;
  }
  v14 = qword_1C7F2C0;
  if ( (a5[1] & 1) != 0 )
  {
    v111 = (int *)v120;
    sub_182C690(qword_1C7F2C0, v120, a5);
  }
  else
  {
    v15 = *a5;
    BYTE4(v120[0]) &= ~1u;
    LODWORD(v120[0]) = v15;
    v111 = (int *)v120;
  }
  if ( (a5[5] & 1) != 0 )
  {
    sub_182C690(v14, v121, a5 + 4);
  }
  else
  {
    v16 = a5[4];
    BYTE4(v121[0]) &= ~1u;
    LODWORD(v121[0]) = v16;
  }
  v131 = 0;
  v123 = 0;
  v17 = qword_1C7F2C0;
  *(_QWORD *)v122 = v116;
  v124 = 0;
  v125 = 1;
  v126 = 0;
  if ( (BYTE4(v117) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v123, &v117);
  else
    LODWORD(v123) = (_DWORD)v117;
  if ( (v119[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v17, &v125, v119);
  }
  else
  {
    BYTE4(v125) &= ~1u;
    LODWORD(v125) = v119[0];
  }
  v127 = 0;
  v18 = qword_1C7F2C0;
  v128 = 0;
  v129 = 1;
  v130 = 0;
  if ( (v120[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v127, v120);
  else
    LODWORD(v127) = v120[0];
  if ( (v121[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v18, &v129, v121);
  }
  else
  {
    BYTE4(v129) &= ~1u;
    LODWORD(v129) = v121[0];
  }
  *(_QWORD *)v114 = *(_QWORD *)v122;
  v19 = sub_182DB30(&v123);
  LODWORD(v115) = v19 + 3 * sub_182DB30(&v125);
  v20 = sub_182DB30(&v127);
  v21 = sub_182DB30(&v129);
  v22 = sub_17E8B20(v114, 12, (unsigned int)(v20 + 3 * v21));
  v23 = *((unsigned int *)a1 + 30);
  v24 = a1[14];
  v25 = 88LL * (v22 & (unsigned int)(v23 - 1));
  v23 *= 88;
  v26 = (__int64 *)(v24 + v25);
  v27 = v24 + v23;
  if ( v25 != v23 )
  {
    v24 += v25;
    do
    {
      v28 = *(_DWORD *)(v24 + 4);
      if ( v28 == 2 )
      {
        if ( *(_DWORD *)v24 == v22 && *(_QWORD *)(v24 + 8) == *(_QWORD *)v122 )
        {
          LODWORD(v98) = v22;
          v100 = v27;
          v101 = v26;
          v29 = sub_3ED680((__int64)qword_1C7F2C0, v24 + 16, (__int64)&v123);
          v26 = v101;
          v27 = v100;
          v22 = (int)v98;
          if ( v29 )
          {
            if ( sub_3ED680((__int64)qword_1C7F2C0, v24 + 48, (__int64)&v127) )
            {
LABEL_28:
              v30 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v127);
              sub_182CBA0(v30, &v129);
              v31 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v123);
              sub_182CBA0(v31, &v125);
              v34 = *(_QWORD *)(v24 + 80);
              goto LABEL_29;
            }
            v26 = v101;
            v27 = v100;
            v22 = (int)v98;
          }
        }
      }
      else if ( !v28 )
      {
        goto LABEL_30;
      }
      v24 += 88;
    }
    while ( v27 != v24 );
    v24 = a1[14];
  }
  for ( ; v26 != (__int64 *)v24; v24 += 88 )
  {
    v64 = *(_DWORD *)(v24 + 4);
    if ( v64 == 2 )
    {
      if ( *(_DWORD *)v24 == v22 && *(_QWORD *)(v24 + 8) == *(_QWORD *)v122 )
      {
        LODWORD(v100) = v22;
        v101 = v26;
        v65 = sub_3ED680((__int64)qword_1C7F2C0, v24 + 16, (__int64)&v123);
        v26 = v101;
        v22 = v100;
        if ( v65 )
        {
          if ( sub_3ED680((__int64)qword_1C7F2C0, v24 + 48, (__int64)&v127) )
            goto LABEL_28;
          v26 = v101;
          v22 = v100;
        }
      }
    }
    else if ( !v64 )
    {
      break;
    }
  }
LABEL_30:
  v41 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v127);
  sub_182CBA0(v41, &v129);
  v42 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v123);
  sub_182CBA0(v42, &v125);
  *(_QWORD *)v114 = sub_15D1F10(a2);
  v43 = sub_15D1F10(v104);
  v44 = a1[1];
  v115 = v43;
  v102 = sub_15D2CD0(v44, 5, 0, 0, 0);
  v45 = *a1;
  sub_180C5A0(&v113, "");
  sub_180C5A0(&v112, "bv2real");
  v34 = sub_15E3D10(
          v45,
          (int)&v112,
          (int)&v113,
          2,
          (int)v114,
          v102,
          1,
          v88,
          v89,
          v90,
          (int)v92,
          v93,
          v94,
          (int)v96,
          (char)v98,
          v100,
          v102,
          (int)a2,
          (int)&v113,
          v104,
          (int)&v123,
          (int)&v117,
          (int)&v127,
          (int)v120,
          v112,
          v113,
          v114[0],
          v115,
          v116,
          v117,
          v118,
          v119[0]);
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  v46 = (_QWORD *)a1[7];
  if ( v46 )
  {
    v47 = *((_DWORD *)v46 - 1);
    if ( v47 == *((_DWORD *)v46 - 2) )
    {
      v67 = (3 * v47 + 1) >> 1;
      v68 = 8 * v67 + 8;
      if ( 8 * v47 + 8 >= v68 || v47 >= v67 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v122, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v122);
        sub_233E40((__int64)v122);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v69 = (unsigned int *)sub_186B300(v46 - 1, v68);
      v70 = v69[1];
      v46 = v69 + 2;
      *v69 = v67;
      a1[7] = (__int64)(v69 + 2);
      LODWORD(v69) = v70;
      v50 = &v46[v70];
      v49 = (_DWORD)v69 + 1;
    }
    else
    {
      v48 = v47;
      v49 = v47 + 1;
      v50 = &v46[v48];
    }
  }
  else
  {
    v87 = (_QWORD *)sub_186B270(0x18u);
    *v87 = 2;
    v49 = 1;
    v46 = v87 + 1;
    a1[7] = (__int64)v46;
    v50 = v46;
  }
  *v50 = v34;
  v51 = qword_1C7F2C0;
  *((_DWORD *)v46 - 1) = v49;
  v123 = 0;
  v124 = 0;
  *(_QWORD *)v122 = v116;
  v125 = 1;
  v126 = 0;
  sub_27B950((__int64)v51, (__int64)v105, v106);
  v127 = 0;
  v128 = 0;
  v129 = 1;
  v130 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v107, v111);
  v131 = v34;
  sub_C5AFC0(a1 + 14, v122);
  sub_25A130(v107);
  sub_25A130(v105);
  *(_QWORD *)v122 = v34;
  v124 = 0;
  v123 = v116;
  v125 = 0;
  v126 = 1;
  v127 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v124, v106);
  v128 = 0;
  v129 = 0;
  v130 = 1;
  v131 = 0;
  v101 = &v128;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v128, v111);
  v52 = *((unsigned int *)a1 + 36);
  v53 = 2 * v52;
  if ( 3 * (int)v52 < (unsigned int)(4 * (*((_DWORD *)a1 + 37) + *((_DWORD *)a1 + 38))) )
  {
    v71 = v53;
    LODWORD(v98) = 2 * v52;
    v108 = 80LL * v53;
    v100 = v108;
    v72 = sub_186B270(v108);
    v73 = (int)v98;
    v55 = (unsigned __int64 *)v72;
    if ( (_DWORD)v98 )
    {
      v74 = v72 + 80 * v71;
      do
      {
        *(_OWORD *)(v72 + 24) = 0;
        v72 += 80;
        *(_OWORD *)(v72 - 16) = 0;
        *(_OWORD *)(v72 - 72) = 0;
        *(_OWORD *)(v72 - 32) = 0;
        *(_QWORD *)(v72 - 80) = 0;
        *(_BYTE *)(v72 - 60) = 0;
        *(_DWORD *)(v72 - 48) = 1;
        *(_BYTE *)(v72 - 44) = 0;
        *(_QWORD *)(v72 - 40) = 0;
        *(_BYTE *)(v72 - 28) = 0;
        *(_DWORD *)(v72 - 16) = 1;
        *(_BYTE *)(v72 - 12) = 0;
      }
      while ( v74 != v72 );
    }
    v75 = (char *)a1[17];
    v54 = (_DWORD)v98 - 1;
    v76 = *((unsigned int *)a1 + 36);
    v77 = (__int64)(v75 + 8);
    v56 = (unsigned __int64 *)((char *)v55 + v108);
    v78 = &v75[80 * v76];
    if ( v75 != v78 )
    {
      while ( 1 )
      {
        v79 = *(_QWORD *)(v77 - 8);
        if ( v79 > 1 )
        {
          v80 = v108;
          v81 = 80LL * (*(_DWORD *)(v79 + 12) & (unsigned int)v54);
          v82 = &v55[(unsigned __int64)v81 / 8];
          if ( v108 == v81 )
          {
LABEL_89:
            if ( v55 == v82 )
            {
LABEL_105:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v80 = v108;
            v83 = v55;
            while ( *v83 )
            {
              v83 += 10;
              if ( v82 == v83 )
                goto LABEL_105;
            }
          }
          else
          {
            v83 = &v55[(unsigned __int64)v81 / 8];
            while ( *v83 )
            {
              v83 += 10;
              if ( v56 == v83 )
                goto LABEL_89;
            }
          }
          v96 = v55;
          v98 = v78;
          v108 = v80;
          *v83 = v79;
          sub_C4E060((__int64)(v83 + 1), v77);
          v78 = v98;
          v55 = v96;
        }
        if ( v78 == (char *)(v77 + 72) )
          break;
        v77 += 80;
      }
      v76 = *((unsigned int *)a1 + 36);
      v78 = (char *)a1[17];
    }
    if ( v78 )
    {
      if ( (_DWORD)v76 )
      {
        v99 = v34;
        v97 = v55;
        v109 = v78;
        v84 = &v78[80 * v76];
        v95 = v78;
        v93 = v54;
        v92 = v56;
        v91 = v73;
        do
        {
          v85 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v109 + 48);
          sub_182CBA0(v85, v109 + 64);
          v86 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v109 + 16);
          sub_182CBA0(v86, v109 + 32);
          v109 += 80;
        }
        while ( v109 != v84 );
        LODWORD(v34) = v99;
        v55 = v97;
        v78 = v95;
        v54 = v93;
        v56 = v92;
        v73 = v91;
      }
      v94 = v73;
      v96 = v56;
      LODWORD(v98) = v54;
      v110 = v55;
      sub_186B220(v78);
      v55 = v110;
      v54 = (int)v98;
      v56 = v96;
      v73 = v94;
    }
    a1[17] = (__int64)v55;
    *((_DWORD *)a1 + 36) = v73;
    *((_DWORD *)a1 + 38) = 0;
  }
  else
  {
    v54 = v52 - 1;
    v55 = (unsigned __int64 *)a1[17];
    v100 = 80 * v52;
    v56 = &v55[10 * v52];
  }
  v57 = *(_QWORD *)v122;
  v58 = *(_DWORD *)(*(_QWORD *)v122 + 12LL);
  v59 = 80LL * (v58 & (unsigned int)v54);
  v60 = &v55[(unsigned __int64)v59 / 8];
  if ( v59 != v100 )
  {
    v61 = &v55[(unsigned __int64)v59 / 8];
    v62 = nullptr;
    while ( 1 )
    {
      v63 = *v61;
      if ( *v61 > 1 )
      {
        if ( *(_DWORD *)(v63 + 12) == v58 && *(_QWORD *)v122 == v63 )
        {
          *v61 = *(_QWORD *)v122;
          sub_C4E060((__int64)(v61 + 1), (__int64)v105);
          goto LABEL_75;
        }
      }
      else
      {
        if ( !v63 )
        {
          if ( v62 )
            goto LABEL_103;
          v62 = v61;
          goto LABEL_104;
        }
        v62 = v61;
      }
      v61 += 10;
      if ( v61 == v56 )
        goto LABEL_67;
    }
  }
  v62 = nullptr;
  while ( 1 )
  {
LABEL_67:
    if ( v60 == v55 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v66 = *v55;
    if ( *v55 <= 1 )
      break;
    if ( *(_DWORD *)(v66 + 12) == v58 && *(_QWORD *)v122 == v66 )
    {
      *v55 = *(_QWORD *)v122;
      sub_C4E060((__int64)(v55 + 1), (__int64)v105);
      goto LABEL_75;
    }
LABEL_66:
    v55 += 10;
  }
  if ( v66 )
  {
    v62 = v55;
    goto LABEL_66;
  }
  if ( v62 )
LABEL_103:
    --*((_DWORD *)a1 + 38);
  else
    v62 = v55;
LABEL_104:
  *v62 = v57;
  sub_C4E060((__int64)(v62 + 1), (__int64)v105);
  ++*((_DWORD *)a1 + 37);
LABEL_75:
  sub_25A130((char *)&v128);
  sub_25A130((char *)&v124);
LABEL_29:
  v35 = *a1;
  *(_QWORD *)v122 = v103;
  v123 = v104;
  v36 = sub_15DC610(
          v35,
          v34,
          2,
          (int)v122,
          v32,
          v33,
          v89,
          v90,
          (int)v92,
          v93,
          v94,
          (char)v96,
          (int)v98,
          v100,
          (int)v101,
          v103);
  v37 = qword_1C7F2C0;
  v38 = v36;
  sub_182CBA0(qword_1C7F2C0, v111);
  sub_182CBA0(v37, v121);
  v39 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v106);
  sub_182CBA0(v39, v119);
  return v38;
}

