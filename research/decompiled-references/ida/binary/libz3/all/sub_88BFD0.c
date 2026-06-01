__int64 __fastcall sub_88BFD0(__int64 a1, int a2, unsigned int a3, int a4, __int64 a5)
{
  char **v5; // rbp
  char **v6; // rbp
  char **exception; // rbx
  _QWORD *v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rdx
  int v12; // ecx
  _QWORD *v13; // r15
  _QWORD *v14; // rbp
  _QWORD *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r13
  void *v22; // rbx
  __int64 v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // esi
  __int64 v28; // rax
  _QWORD *v29; // rax
  void *v30; // r14
  int v31; // edx
  _DWORD *v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rdx
  unsigned int v36; // r13d
  char v37; // r14
  __int64 v38; // rbx
  void *v39; // rbp
  int v40; // eax
  __int64 v42; // rdi
  __int64 v43; // rsi
  unsigned int v44; // r14d
  size_t v45; // rdi
  __int64 v46; // rax
  int *v47; // r14
  _DWORD *v48; // r9
  __int64 v49; // r10
  __int64 v50; // rax
  __int64 v51; // rdx
  int *v52; // rsi
  int *i; // rax
  int v54; // ecx
  char v55; // di
  __int64 v56; // rcx
  char v57; // di
  __int64 v58; // rcx
  __int64 v59; // rax
  int *v60; // r13
  int *v61; // rbx
  __int64 v62; // r14
  void *v63; // r12
  int *v64; // rsi
  int v65; // r13d
  void *v66; // r14
  int v67; // eax
  void *v68; // rdi
  void *v69; // rdi
  void *v70; // r13
  unsigned int v71; // eax
  void *v72; // r15
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rbp
  __int64 v77; // rax
  unsigned int v78; // eax
  __int64 v79; // rcx
  int v80; // eax
  _QWORD *v81; // rcx
  void *v82; // r13
  int v83; // eax
  void *v84; // rdi
  void *v85; // rdi
  void *v86; // r13
  unsigned int v87; // r13d
  unsigned int v88; // ecx
  unsigned int *v89; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rdx
  int v93[2]; // [rsp+10h] [rbp-D8h]
  unsigned int v94; // [rsp+10h] [rbp-D8h]
  unsigned int v95; // [rsp+10h] [rbp-D8h]
  int v96[2]; // [rsp+10h] [rbp-D8h]
  unsigned int v97; // [rsp+18h] [rbp-D0h]
  _DWORD *v98; // [rsp+18h] [rbp-D0h]
  _DWORD *v99; // [rsp+18h] [rbp-D0h]
  _QWORD *v102; // [rsp+28h] [rbp-C0h]
  __int64 v103; // [rsp+28h] [rbp-C0h]
  unsigned int v104; // [rsp+28h] [rbp-C0h]
  void *v105; // [rsp+28h] [rbp-C0h]
  __int64 v106; // [rsp+30h] [rbp-B8h]
  void *v107; // [rsp+38h] [rbp-B0h]
  void *v108; // [rsp+38h] [rbp-B0h]
  void *v109; // [rsp+38h] [rbp-B0h]
  int v110[2]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD *v111; // [rsp+48h] [rbp-A0h]
  int v112; // [rsp+50h] [rbp-98h] BYREF
  char v113; // [rsp+54h] [rbp-94h]
  __int64 v114; // [rsp+58h] [rbp-90h]
  int v115; // [rsp+60h] [rbp-88h] BYREF
  char v116; // [rsp+64h] [rbp-84h]
  __int64 v117; // [rsp+68h] [rbp-80h]
  __int64 v118; // [rsp+70h] [rbp-78h] BYREF
  __int64 v119; // [rsp+78h] [rbp-70h]
  __int64 v120; // [rsp+80h] [rbp-68h] BYREF
  __int64 v121; // [rsp+88h] [rbp-60h]
  __int64 v122; // [rsp+90h] [rbp-58h] BYREF
  __int64 v123; // [rsp+98h] [rbp-50h]
  __int64 v124; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v125; // [rsp+A8h] [rbp-40h]

  v9 = (_QWORD *)a1;
  v10 = *(unsigned int *)(a1 + 168);
  v11 = *(_QWORD **)(a1 + 160);
  *(_QWORD *)v110 = a1;
  if ( v11 )
    v12 = *((_DWORD *)v11 - 1);
  else
    v12 = 0;
  if ( (_DWORD)v10 == v12 )
  {
    v75 = sub_186B270(0x30u);
    v11 = *(_QWORD **)(a1 + 160);
    v76 = (_QWORD *)v75;
    v77 = *(_QWORD *)(a1 + 72);
    v76[1] = 0;
    *v76 = v77;
    v76[2] = 0;
    v76[3] = 0;
    v76[4] = 0;
    v76[5] = 0;
    if ( v11 )
    {
      v78 = *((_DWORD *)v11 - 1);
      if ( v78 == *((_DWORD *)v11 - 2) )
      {
        v87 = (3 * v78 + 1) >> 1;
        v88 = 8 * v87 + 8;
        if ( 8 * v78 + 8 >= v88 || v78 >= v87 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v122, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v122);
          sub_233E40((__int64)&v122);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v89 = (unsigned int *)sub_186B300(v11 - 1, v88);
        v90 = v89[1];
        v11 = v89 + 2;
        *v89 = v87;
        *(_QWORD *)(a1 + 160) = v89 + 2;
        LODWORD(v89) = v90;
        v81 = &v11[v90];
        v80 = (_DWORD)v89 + 1;
      }
      else
      {
        v79 = v78;
        v80 = v78 + 1;
        v81 = &v11[v79];
      }
    }
    else
    {
      v91 = (_QWORD *)sub_186B270(0x18u);
      *v91 = 2;
      v80 = 1;
      v11 = v91 + 1;
      *(_QWORD *)(a1 + 160) = v11;
      v81 = v11;
    }
    *v81 = v76;
    *((_DWORD *)v11 - 1) = v80;
    v10 = *(unsigned int *)(a1 + 168);
  }
  v13 = (_QWORD *)v11[v10];
  *(_DWORD *)(a1 + 168) = v10 + 1;
  v14 = (_QWORD *)v13[1];
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = *v13;
          if ( (*(_DWORD *)(v16 + 8))-- == 1 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_11;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_11:
    v14 = (_QWORD *)v13[1];
    if ( v14 )
LABEL_12:
      *((_DWORD *)v14 - 1) = 0;
  }
  v19 = v13[2];
  if ( v19 )
  {
    v20 = *(unsigned int *)(v19 - 4);
    if ( (_DWORD)v20 )
    {
      *(_QWORD *)v93 = v9;
      v21 = v19 + 32 * v20;
      do
      {
        v22 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v19);
        v23 = v19 + 16;
        v19 += 32;
        sub_182CBA0(v22, v23);
      }
      while ( v19 != v21 );
      v9 = *(_QWORD **)v93;
      v19 = v13[2];
    }
    *(_DWORD *)(v19 - 4) = 0;
  }
  v24 = (unsigned int *)v13[3];
  v25 = v13[5];
  v26 = v13[4];
  if ( !v24 )
  {
    if ( v26 )
      *(_DWORD *)(v26 - 4) = 0;
    if ( v25 )
      *(_DWORD *)(v25 - 4) = 0;
    v111 = v13;
    v73 = (_QWORD *)sub_186B270(0x10u);
    *v73++ = 2;
    v13[3] = v73;
    v13 = v111;
    v19 = v111[2];
    ++*((_DWORD *)v73 - 1);
    *(_DWORD *)v73 = a3;
    if ( v19 )
      goto LABEL_26;
LABEL_85:
    v74 = (_QWORD *)sub_186B270(0x48u);
    *v74 = 2;
    v29 = v74 + 1;
    v13[2] = v29;
    goto LABEL_28;
  }
  *(v24 - 1) = 0;
  if ( v26 )
    *(_DWORD *)(v26 - 4) = 0;
  if ( v25 )
    *(_DWORD *)(v25 - 4) = 0;
  v27 = *(v24 - 2);
  v111 = v13;
  if ( !v27 )
  {
    v5 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(&v122, "Overflow encountered when expanding vector");
    *v5 = (char *)off_1C63128;
    sub_2333C0(v5 + 1, &v122);
    sub_233E40((__int64)&v122);
    __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  ++*(v24 - 1);
  *v24 = a3;
  if ( !v19 )
    goto LABEL_85;
LABEL_26:
  v28 = *(unsigned int *)(v19 - 4);
  if ( (_DWORD)v28 == *(_DWORD *)(v19 - 8) )
  {
    v44 = (unsigned int)(3 * v28 + 1) >> 1;
    v95 = v44;
    v45 = 32 * v44 + 8;
    if ( 32 * (int)v28 + 8 >= (unsigned int)v45 || (unsigned int)v28 >= v44 )
    {
      v6 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v122, "Overflow encountered when expanding vector");
      *v6 = (char *)off_1C63128;
      sub_2333C0(v6 + 1, &v122);
      sub_233E40((__int64)&v122);
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v46 = sub_186B270(v45);
    v47 = (int *)v13[2];
    v48 = (_DWORD *)v46;
    v49 = v46 + 8;
    if ( v47 )
    {
      v50 = (unsigned int)*(v47 - 1);
      v51 = v49;
      v48[1] = v50;
      v52 = &v47[8 * v50];
      for ( i = v47; i != v52; *(_QWORD *)(v51 - 8) = v58 )
      {
        v54 = *i;
        v55 = *((_BYTE *)i + 4);
        i += 8;
        v51 += 32;
        *(_DWORD *)(v51 - 32) = v54;
        *(_BYTE *)(v51 - 28) = v55 & 3 | *(_BYTE *)(v51 - 28) & 0xFC;
        v56 = *((_QWORD *)i - 3);
        *((_QWORD *)i - 3) = 0;
        *(_QWORD *)(v51 - 24) = v56;
        v57 = *((_BYTE *)i - 12);
        *(_DWORD *)(v51 - 16) = *(i - 4);
        *(_BYTE *)(v51 - 12) = v57 & 3 | *(_BYTE *)(v51 - 12) & 0xFC;
        v58 = *((_QWORD *)i - 1);
        *((_QWORD *)i - 1) = 0;
      }
      v59 = (unsigned int)*(v47 - 1);
      if ( (_DWORD)v59 )
      {
        v98 = v48;
        v106 = a5;
        v60 = &v47[8 * v59];
        v102 = v9;
        v61 = v47;
        v62 = v49;
        do
        {
          v63 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v61);
          v64 = v61 + 4;
          v61 += 8;
          sub_182CBA0(v63, v64);
        }
        while ( v61 != v60 );
        v49 = v62;
        v48 = v98;
        v9 = v102;
        a5 = v106;
        v47 = (int *)v13[2];
      }
      v103 = v49;
      v99 = v48;
      sub_186B220(v47 - 2);
      v48 = v99;
      v49 = v103;
      v29 = (_QWORD *)(v103 + 32LL * (unsigned int)v99[1]);
    }
    else
    {
      *(_DWORD *)(v46 + 4) = 0;
      v29 = (_QWORD *)(v46 + 8);
    }
    v13[2] = v49;
    *v48 = v95;
  }
  else
  {
    v29 = (_QWORD *)(v19 + 32 * v28);
  }
LABEL_28:
  *v29 = 0;
  v29[1] = 0;
  v29[2] = 1;
  v30 = qword_1C7F2C0;
  v29[3] = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
    *(_QWORD *)v96 = v29;
    sub_182C690(v30, v29, &qword_1C7F280);
    v29 = *(_QWORD **)v96;
  }
  else
  {
    *(_DWORD *)v29 = qword_1C7F280;
  }
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
  {
    sub_182C690(v30, v29 + 2, &qword_1C7F290);
  }
  else
  {
    v31 = qword_1C7F290;
    *((_BYTE *)v29 + 20) &= ~1u;
    *((_DWORD *)v29 + 4) = v31;
  }
  ++*(_DWORD *)(v13[2] - 4LL);
  sub_854190(v9, (__int64)v110);
  v32 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(v9[11] + 8LL * a3)) + 24);
  if ( !v32 || *v32 != 5 )
  {
    v33 = sub_852640((__int64)v9, a3);
    v94 = v33;
    if ( a4 )
    {
      if ( a4 == 1 )
      {
        v34 = v9[62];
LABEL_37:
        v97 = sub_FFFA80(v34, v94, 4294967294LL, a5);
        v35 = 1;
LABEL_38:
        v36 = sub_FFFA80(v9[62], v94, v35, a5);
        v37 = 0;
        goto LABEL_39;
      }
LABEL_60:
      sub_1872CE0("");
      sub_1873130(114, 542);
    }
    v42 = v9[62];
    v43 = v33;
LABEL_44:
    v97 = sub_FFFA80(v42, v43, 2, a5);
    v35 = 0xFFFFFFFFLL;
    goto LABEL_38;
  }
  v65 = v32[1];
  v94 = sub_852640((__int64)v9, a3);
  if ( a4 )
  {
    if ( a4 != 1 )
      goto LABEL_60;
    v34 = v9[62];
    if ( v65 != 1 )
      goto LABEL_37;
    v97 = sub_FFFA80(v34, v94, 4294967294LL, a5);
    v104 = 2;
    v118 = 1;
    v119 = 0;
    v120 = 1;
    v121 = 0;
    sub_182CBA0(qword_1C7F2C0, &v120);
    BYTE4(v120) &= ~1u;
    v66 = qword_1C7F2C0;
    LODWORD(v120) = 1;
    v122 = 0;
    v123 = 0;
    v124 = 1;
    v125 = 0;
    if ( (*(_BYTE *)(a5 + 4) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v122, a5);
    else
      LODWORD(v122) = *(_DWORD *)a5;
    if ( (*(_BYTE *)(a5 + 20) & 1) != 0 )
    {
      sub_182C690(v66, &v124, a5 + 16);
    }
    else
    {
      v67 = *(_DWORD *)(a5 + 16);
      BYTE4(v124) &= ~1u;
      LODWORD(v124) = v67;
    }
    v68 = qword_1C7F2C0;
    if ( (_DWORD)v118 )
    {
      if ( (_DWORD)v122 )
      {
        if ( (v124 & 0x100000000LL) != 0 || (_DWORD)v124 != 1 || (v120 & 0x100000000LL) != 0 || (_DWORD)v120 != 1 )
        {
          sub_1851D20(qword_1C7F2C0, &v122, &v118, &v122);
        }
        else
        {
          sub_1831A80(qword_1C7F2C0, &v122, &v118, &v122);
          sub_182CBA0(v68, &v124);
          BYTE4(v124) &= ~1u;
          LODWORD(v124) = 1;
        }
      }
      else
      {
        if ( (v118 & 0x100000000LL) != 0 )
        {
          v108 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, &v122, &v118);
          v68 = v108;
        }
        else
        {
          BYTE4(v122) &= ~1u;
          LODWORD(v122) = v118;
        }
        if ( (v120 & 0x100000000LL) != 0 )
        {
          sub_182C690(v68, &v124, &v120);
        }
        else
        {
          BYTE4(v124) &= ~1u;
          LODWORD(v124) = v120;
        }
      }
    }
    else
    {
      if ( (v122 & 0x100000000LL) != 0 )
      {
        v109 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, &v122, &v122);
        v68 = v109;
      }
      else
      {
        BYTE4(v122) &= ~1u;
      }
      if ( (v124 & 0x100000000LL) != 0 )
        sub_182C690(v68, &v124, &v124);
      else
        BYTE4(v124) &= ~1u;
    }
    v113 &= 0xFCu;
    v69 = qword_1C7F2C0;
    v116 &= 0xFCu;
    v112 = 0;
    v114 = 0;
    v115 = 1;
    v117 = 0;
    if ( (v122 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v112, &v122);
    else
      v112 = v122;
    if ( (v124 & 0x100000000LL) != 0 )
    {
      sub_182C690(v69, &v115, &v124);
    }
    else
    {
      v116 &= ~1u;
      v115 = v124;
    }
    v107 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v122);
    sub_182CBA0(v107, &v124);
    v70 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v118);
    sub_182CBA0(v70, &v120);
  }
  else
  {
    v42 = v9[62];
    v43 = v94;
    if ( v65 != 1 )
      goto LABEL_44;
    v97 = sub_FFFA80(v42, v94, 2, a5);
    v118 = 1;
    v119 = 0;
    v120 = 1;
    v121 = 0;
    sub_182CBA0(qword_1C7F2C0, &v120);
    BYTE4(v120) &= ~1u;
    v82 = qword_1C7F2C0;
    LODWORD(v120) = 1;
    v122 = 0;
    v123 = 0;
    v124 = 1;
    v125 = 0;
    if ( (*(_BYTE *)(a5 + 4) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v122, a5);
    else
      LODWORD(v122) = *(_DWORD *)a5;
    if ( (*(_BYTE *)(a5 + 20) & 1) != 0 )
    {
      sub_182C690(v82, &v124, a5 + 16);
    }
    else
    {
      v83 = *(_DWORD *)(a5 + 16);
      BYTE4(v124) &= ~1u;
      LODWORD(v124) = v83;
    }
    v84 = qword_1C7F2C0;
    if ( (v124 & 0x100000000LL) != 0 || (_DWORD)v124 != 1 || (v120 & 0x100000000LL) != 0 || (_DWORD)v120 != 1 )
    {
      sub_1852000(qword_1C7F2C0, &v122, &v118);
    }
    else
    {
      sub_1832A70(qword_1C7F2C0, &v122, &v118);
      sub_182CBA0(v84, &v124);
      BYTE4(v124) &= ~1u;
      LODWORD(v124) = 1;
    }
    v113 &= 0xFCu;
    v85 = qword_1C7F2C0;
    v116 &= 0xFCu;
    v112 = 0;
    v114 = 0;
    v115 = 1;
    v117 = 0;
    if ( (v122 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v112, &v122);
    else
      v112 = v122;
    if ( (v124 & 0x100000000LL) != 0 )
    {
      sub_182C690(v85, &v115, &v124);
    }
    else
    {
      v116 &= ~1u;
      v115 = v124;
    }
    v105 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v122);
    sub_182CBA0(v105, &v124);
    v86 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v118);
    sub_182CBA0(v86, &v120);
    v104 = -2;
  }
  v71 = sub_FFFA80(v9[62], v94, v104, &v112);
  v72 = qword_1C7F2C0;
  v36 = v71;
  v37 = 1;
  sub_182CBA0(qword_1C7F2C0, &v112);
  sub_182CBA0(v72, &v115);
LABEL_39:
  sub_853690((__int64)v9, v97, a2);
  sub_853690((__int64)v9, v36, a2 ^ 1);
  v38 = sub_186B270(0x48u);
  v39 = qword_1C7F2C0;
  *(_QWORD *)v38 = &off_1C55220;
  *(_DWORD *)(v38 + 8) = a2;
  *(_DWORD *)(v38 + 12) = a3;
  *(_BYTE *)(v38 + 20) = v37;
  *(_DWORD *)(v38 + 16) = v94;
  *(_QWORD *)(v38 + 24) = 0;
  *(_QWORD *)(v38 + 32) = 0;
  *(_QWORD *)(v38 + 40) = 1;
  *(_QWORD *)(v38 + 48) = 0;
  if ( (*(_BYTE *)(a5 + 4) & 1) != 0 )
  {
    sub_182C690(v39, v38 + 24, a5);
    if ( (*(_BYTE *)(a5 + 20) & 1) == 0 )
      goto LABEL_41;
LABEL_77:
    sub_182C690(v39, v38 + 40, a5 + 16);
    goto LABEL_42;
  }
  *(_DWORD *)(v38 + 24) = *(_DWORD *)a5;
  if ( (*(_BYTE *)(a5 + 20) & 1) != 0 )
    goto LABEL_77;
LABEL_41:
  v40 = *(_DWORD *)(a5 + 16);
  *(_BYTE *)(v38 + 44) &= ~1u;
  *(_DWORD *)(v38 + 40) = v40;
LABEL_42:
  *(_DWORD *)(v38 + 60) = v36;
  *(_DWORD *)(v38 + 56) = a4;
  *(_DWORD *)(v38 + 64) = v97;
  --*(_DWORD *)(*(_QWORD *)v110 + 168LL);
  return v38;
}

