__int64 __fastcall sub_C4A9D0(__int64 *a1, int *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // r12d
  int *v12; // rbp
  unsigned int v13; // r14d
  unsigned int v14; // ebx
  void *v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // rsi
  int *v20; // r12
  unsigned __int64 v21; // rdi
  __int64 v22; // rbx
  int *v23; // rbp
  __int64 v24; // r13
  int v25; // r12d
  _QWORD *v26; // rax
  _QWORD *v27; // rbx
  _QWORD *v28; // rdx
  __int64 v29; // r12
  int *v30; // rsi
  __int64 v31; // rdi
  int *v32; // rbp
  int *v33; // rbx
  __int64 v35; // r12
  char v36; // al
  __int64 v37; // r15
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // rcx
  __int64 v41; // rsi
  unsigned int v42; // eax
  _QWORD *v43; // r12
  void *v44; // r15
  int *v45; // r13
  unsigned __int64 v46; // rdi
  __int64 v47; // rdx
  unsigned int v48; // eax
  unsigned int v49; // r12d
  void **v50; // rdx
  int *v51; // r12
  unsigned __int64 v52; // rdi
  signed __int64 v53; // r12
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r12
  char v59; // al
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  unsigned int v63; // eax
  char v64; // r13
  void *v65; // r15
  __int64 v66; // r13
  __int64 v67; // rax
  int *v68; // r13
  __int64 v69; // rax
  int *v70; // r15
  __int64 v71; // rdi
  __int64 v72; // r13
  __int64 v73; // rax
  __int64 v74; // r15
  __int64 v75; // rdi
  __int64 v76; // r13
  __int64 v77; // rax
  __int64 v78; // r15
  __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rbx
  __int64 v85; // rbp
  __int64 v86; // rdi
  __int64 v87; // rdx
  _QWORD *v88; // rax
  unsigned int v89; // [rsp+0h] [rbp-228h]
  unsigned __int64 v90; // [rsp+8h] [rbp-220h]
  int *v91; // [rsp+10h] [rbp-218h]
  int v93; // [rsp+20h] [rbp-208h]
  _QWORD *v94; // [rsp+28h] [rbp-200h]
  __int64 v95; // [rsp+48h] [rbp-1E0h]
  unsigned int v96; // [rsp+50h] [rbp-1D8h]
  unsigned int v97; // [rsp+54h] [rbp-1D4h]
  int *v98; // [rsp+58h] [rbp-1D0h]
  _QWORD *v99; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v100; // [rsp+68h] [rbp-1C0h]
  void *v101; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v102; // [rsp+88h] [rbp-1A0h]
  void *v103; // [rsp+A0h] [rbp-188h] BYREF
  int *v104; // [rsp+A8h] [rbp-180h]
  _QWORD *v105; // [rsp+C0h] [rbp-168h] BYREF
  void **v106; // [rsp+C8h] [rbp-160h] BYREF
  __int64 v107; // [rsp+D0h] [rbp-158h]
  int *v108; // [rsp+100h] [rbp-128h] BYREF
  __int64 v109; // [rsp+108h] [rbp-120h]
  _BYTE v110[280]; // [rsp+110h] [rbp-118h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFF0LL);
  v90 = (unsigned __int64)a2;
  v7 = (unsigned int)*(unsigned __int8 *)(v6 + 16) - 57;
  if ( (unsigned int)v7 > 1 )
    v6 = sub_F3F310(v6, a2, v7, a4);
  v8 = (__int64)(*((_QWORD *)a2 + 3) - *((_QWORD *)a2 + 2)) >> 3;
  v89 = v8;
  v96 = *(_DWORD *)(v6 + 20);
  v9 = *(_QWORD *)(v6 + 32);
  v108 = (int *)v110;
  v95 = v9;
  v109 = 0x400000000LL;
  v94 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) == 13 )
  {
    v11 = 0;
    if ( ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) == 0x68 )
      return v11;
  }
  if ( !v96 )
  {
    BYTE4(v105) &= ~1u;
    LODWORD(v105) = 8;
    v88 = (_QWORD *)operator new[](8u);
    LODWORD(v107) = 0;
    *v88 = 0;
    v106 = (void **)(v88 + 1);
    v91 = (int *)&v105;
    sub_A2BFE0(a1[1], (__int64)&v105);
    goto LABEL_24;
  }
  v12 = (int *)&v105;
  v13 = 0;
  v14 = 0;
  do
  {
    if ( v89 > v14 )
    {
      a4 = v90;
      v8 = *(_QWORD *)(v90 + 16);
      a2 = *(int **)(v8 + 8LL * v14);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 57 <= 1 )
      {
        v91 = v12;
        BYTE4(v105) &= ~1u;
        v15 = (void *)*a1;
        v104 = v12;
        LODWORD(v105) = 0;
        v103 = v15;
        if ( (unsigned __int8)sub_C49020((__int64 **)&v103, (__int64)a2, v8, v90, a5, a6) )
        {
          v93 = v107;
          if ( (_DWORD)v107 )
          {
            v16 = (unsigned int)v109;
            v17 = 0;
            v18 = 56 * ((unsigned int)(v107 - 1) + 1LL);
            do
            {
              v19 = v16 + 1;
              v20 = (int *)&v106[v17 / 8];
              v21 = (unsigned __int64)&v108[14 * v16];
              if ( v16 + 1 > (unsigned __int64)HIDWORD(v109) )
              {
                if ( v108 > v20 || v21 <= (unsigned __int64)v20 )
                {
                  sub_C021C0((__int64)&v108, v19);
                  v21 = (unsigned __int64)&v108[14 * (unsigned int)v109];
                }
                else
                {
                  v53 = (char *)v20 - (char *)v108;
                  sub_C021C0((__int64)&v108, v19);
                  v20 = (int *)((char *)v108 + v53);
                  v21 = (unsigned __int64)&v108[14 * (unsigned int)v109];
                }
              }
              a2 = v20;
              v17 += 56LL;
              sub_A2FF00(v21, v20);
              v16 = (unsigned int)(v109 + 1);
              LODWORD(v109) = v109 + 1;
            }
            while ( v18 != v17 );
          }
          v13 += v93;
          if ( (unsigned int)v105 > 1 )
            sub_A2BBA0(v12);
          goto LABEL_16;
        }
        v11 = sub_BF05D0(*a1, v90);
        if ( (unsigned int)v105 > 1 )
          sub_A2BBA0(v12);
        goto LABEL_27;
      }
    }
    v35 = *(_QWORD *)(*(_QWORD *)(*v94 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v36 = *(_BYTE *)(v35 + 16);
    switch ( v36 )
    {
      case 13:
        if ( (((*(_WORD *)(v35 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
          goto LABEL_56;
        break;
      case 47:
        v54 = sub_F3D1D0(*(_QWORD *)(*(_QWORD *)(*v94 + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v8, a4, a5);
        if ( (*(_BYTE *)(v54 + 74) & 1) == 0 && (*(_QWORD *)(v54 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0
          || *(char *)(sub_F3D1D0(v35, a2, v55, v56, v57) + 76) < 0 )
        {
          break;
        }
LABEL_56:
        BYTE4(v102) = 1;
        LODWORD(v102) = 32;
        v101 = nullptr;
        v47 = *a1;
        if ( v89 <= v14 )
        {
          v58 = *(_QWORD *)(v47 + 16);
          v59 = sub_F41500(*v94);
          LODWORD(v104) = 64;
          v103 = nullptr;
          BYTE4(v104) = v59 ^ 1;
          v63 = sub_A884B0(v58, v95, v60, v61, v62);
          v49 = (unsigned int)v104;
          if ( v63 == (_DWORD)v104 )
          {
            v65 = v103;
            v91 = v12;
            v64 = BYTE4(v104);
          }
          else
          {
            v64 = BYTE4(v104);
            v91 = v12;
            if ( BYTE4(v104) )
              sub_21E3050(v12, &v103, v63);
            else
              sub_21E30A0(v12, &v103, v63);
            v49 = (unsigned int)v106;
            v65 = v105;
            if ( (unsigned int)v104 > 0x40 && v103 )
              operator delete[](v103);
          }
          if ( (unsigned int)v102 > 0x40 && v101 )
            operator delete[](v101);
          v101 = v65;
          LODWORD(v102) = v49;
          BYTE4(v102) = v64;
          LODWORD(v104) = v49;
          if ( v49 <= 0x40 )
          {
LABEL_59:
            v50 = (void **)v101;
            v103 = v101;
LABEL_60:
            v106 = v50;
            a2 = v12;
            LODWORD(v107) = v49;
            BYTE4(v104) = BYTE4(v102);
            v51 = v108;
            BYTE4(v107) = BYTE4(v102);
            BYTE4(v105) &= ~1u;
            LODWORD(v105) = 2;
            v52 = (unsigned __int64)&v108[14 * (unsigned int)v109];
            LODWORD(v104) = 0;
            if ( (unsigned __int64)(unsigned int)v109 + 1 > HIDWORD(v109) )
            {
              v80 = (unsigned int)v109 + 1LL;
              if ( v108 > v12 || v52 <= (unsigned __int64)v12 )
              {
                sub_C021C0((__int64)&v108, v80);
                a2 = v12;
                v52 = (unsigned __int64)&v108[14 * (unsigned int)v109];
              }
              else
              {
                sub_C021C0((__int64)&v108, v80);
                a2 = (int *)((char *)v108 + (char *)v12 - (char *)v51);
                v52 = (unsigned __int64)&v108[14 * (unsigned int)v109];
              }
            }
            sub_A2BB60(v52, (__int64)a2);
            LODWORD(v109) = v109 + 1;
            if ( (unsigned int)v105 > 1 )
              sub_A2BBA0(v12);
            if ( (unsigned int)v104 > 0x40 && v103 )
              operator delete[](v103);
            ++v13;
            if ( (unsigned int)v102 > 0x40 && v101 )
              operator delete[](v101);
            goto LABEL_16;
          }
        }
        else
        {
          v48 = sub_C23520(
                  *(_QWORD *)(*(_QWORD *)(v90 + 16) + 8LL * v14),
                  (__int64)&v101,
                  v47,
                  *(_QWORD *)(v90 + 16),
                  a5,
                  a6);
          if ( !(_BYTE)v48 )
          {
            v11 = v48;
            if ( (unsigned int)v102 > 0x40 && v101 )
              operator delete[](v101);
            goto LABEL_27;
          }
          v49 = v102;
          v91 = v12;
          LODWORD(v104) = v102;
          if ( (unsigned int)v102 <= 0x40 )
            goto LABEL_59;
        }
        sub_21E17D0(&v103);
        v49 = (unsigned int)v104;
        v50 = (void **)v103;
        goto LABEL_60;
      case 10:
        goto LABEL_56;
    }
    v37 = sub_21D5370();
    v91 = v12;
    sub_21D8290(v12, 0.0);
    sub_21DE690(&v99, v12, v37);
    sub_21D5AF0(v12);
    if ( v89 > v14 )
    {
      v40 = *(_QWORD *)(v90 + 16);
      v41 = *(_QWORD *)(v40 + 8LL * v14);
      v105 = (_QWORD *)*a1;
      v106 = (void **)&v99;
      v42 = sub_C46FB0((__int64 **)v12, v41, (__int64)v105, v40, v38, v39);
      if ( !(_BYTE)v42 )
      {
        v11 = v42;
        sub_971860(&v99);
        goto LABEL_27;
      }
      v43 = (_QWORD *)sub_21D5390();
      goto LABEL_39;
    }
    v66 = sub_A3EFE0(*(_QWORD **)(*a1 + 16), v95);
    v67 = sub_21D5390();
    v43 = (_QWORD *)v67;
    if ( v66 == v67 )
      sub_21DBF00(v12, v67, 0);
    else
      sub_21D94B0(v12, v66, 0);
    if ( v105 == v43 )
      sub_21DC510(v12, 0);
    else
      sub_21D7C60(v12, 0);
    if ( v99 == v43 )
    {
      if ( v43 != v105 )
      {
LABEL_98:
        sub_971860(&v99);
        if ( v43 == v105 )
          sub_21DC190(&v99, v12);
        else
          sub_21D5A90(&v99, v12);
        goto LABEL_100;
      }
      sub_A2B2D0((__int64)&v99);
      sub_21DC190(&v99, v12);
    }
    else
    {
      if ( v43 == v105 )
        goto LABEL_98;
      sub_21D5850(&v99, v12);
    }
LABEL_100:
    sub_971860(v12);
LABEL_39:
    if ( v99 == v43 )
      sub_21DC120(&v101, &v99);
    else
      sub_21D5A60(&v101, &v99);
    LODWORD(v105) = 0;
    BYTE4(v105) &= ~1u;
    sub_21D8290(&v103, 0.0);
    sub_21DE690(&v106, &v103, v37);
    sub_21D5AF0(&v103);
    LODWORD(v105) = 3;
    if ( v101 == v43 )
      sub_21DC190(&v103, &v101);
    else
      sub_21D5A90(&v103, &v101);
    v44 = v103;
    if ( v106 != v43 )
    {
      if ( v43 != v103 )
      {
        sub_21D5850(&v106, &v103);
        goto LABEL_46;
      }
LABEL_102:
      sub_971860(&v106);
      if ( v103 == v43 )
        goto LABEL_157;
      sub_21D5A90(&v106, &v103);
      if ( v103 != v43 )
        goto LABEL_47;
      goto LABEL_104;
    }
    if ( v43 != v103 )
      goto LABEL_102;
    v82 = v107;
    if ( !v107 )
      goto LABEL_157;
    v83 = 24LL * *(_QWORD *)(v107 - 8);
    if ( v107 == v107 + v83 )
      goto LABEL_156;
    v97 = v14;
    v84 = v107 + v83;
    v98 = v12;
    while ( 1 )
    {
      v85 = v84 - 24;
      v86 = v84 - 24;
      if ( *(void **)(v84 - 24) == v44 )
        break;
      sub_21D5AF0(v86);
      if ( v85 == v107 )
        goto LABEL_155;
LABEL_152:
      v84 -= 24;
    }
    sub_A2B2D0(v86);
    if ( v107 != v85 )
      goto LABEL_152;
LABEL_155:
    v87 = v84;
    v82 = v84 - 24;
    v14 = v97;
    v12 = v98;
    v83 = 24LL * *(_QWORD *)(v87 - 32);
LABEL_156:
    operator delete[]((void *)(v82 - 8), v83 + 8);
LABEL_157:
    sub_21DC190(&v106, &v103);
LABEL_46:
    if ( v103 != v43 )
    {
LABEL_47:
      sub_21D5AF0(&v103);
      goto LABEL_48;
    }
LABEL_104:
    v68 = v104;
    if ( v104 )
    {
      v69 = 6LL * *((_QWORD *)v104 - 1);
      v70 = &v104[v69];
      if ( v104 != &v104[v69] )
      {
        while ( 1 )
        {
          v68 = v70 - 6;
          v71 = (__int64)(v70 - 6);
          if ( *((_QWORD **)v70 - 3) == v43 )
          {
            sub_A2B2D0(v71);
            if ( v104 == v68 )
            {
LABEL_111:
              v69 = 6LL * *((_QWORD *)v70 - 4);
              break;
            }
          }
          else
          {
            sub_21D5AF0(v71);
            if ( v68 == v104 )
              goto LABEL_111;
          }
          v70 -= 6;
        }
      }
      operator delete[](v68 - 2, v69 * 4 + 8);
    }
LABEL_48:
    v45 = v108;
    a2 = v12;
    v46 = (unsigned __int64)&v108[14 * (unsigned int)v109];
    if ( (unsigned __int64)(unsigned int)v109 + 1 > HIDWORD(v109) )
    {
      v81 = (unsigned int)v109 + 1LL;
      if ( v108 > v12 || v46 <= (unsigned __int64)v12 )
      {
        sub_C021C0((__int64)&v108, v81);
        a2 = v12;
        v46 = (unsigned __int64)&v108[14 * (unsigned int)v109];
      }
      else
      {
        sub_C021C0((__int64)&v108, v81);
        a2 = (int *)((char *)v108 + (char *)v12 - (char *)v45);
        v46 = (unsigned __int64)&v108[14 * (unsigned int)v109];
      }
    }
    sub_A2BB60(v46, (__int64)a2);
    LODWORD(v109) = v109 + 1;
    if ( (unsigned int)v105 > 1 )
      sub_A2BBA0(v12);
    if ( v101 == v43 )
    {
      v76 = v102;
      if ( v102 )
      {
        v77 = 24LL * *(_QWORD *)(v102 - 8);
        v78 = v102 + v77;
        if ( v102 != v102 + v77 )
        {
          while ( 1 )
          {
            v76 = v78 - 24;
            v79 = v78 - 24;
            if ( *(_QWORD **)(v78 - 24) == v43 )
            {
              sub_A2B2D0(v79);
              if ( v102 == v76 )
              {
LABEL_130:
                v77 = 24LL * *(_QWORD *)(v78 - 32);
                break;
              }
            }
            else
            {
              sub_21D5AF0(v79);
              if ( v76 == v102 )
                goto LABEL_130;
            }
            v78 -= 24;
          }
        }
        a2 = (int *)(v77 + 8);
        operator delete[]((void *)(v76 - 8), v77 + 8);
      }
    }
    else
    {
      sub_21D5AF0(&v101);
    }
    ++v13;
    if ( v99 == v43 )
    {
      v72 = v100;
      if ( v100 )
      {
        v73 = 24LL * *(_QWORD *)(v100 - 8);
        v74 = v100 + v73;
        if ( v100 != v100 + v73 )
        {
          while ( 1 )
          {
            v72 = v74 - 24;
            v75 = v74 - 24;
            if ( *(_QWORD **)(v74 - 24) == v43 )
            {
              sub_A2B2D0(v75);
              if ( v100 == v72 )
              {
LABEL_120:
                v73 = 24LL * *(_QWORD *)(v74 - 32);
                break;
              }
            }
            else
            {
              sub_21D5AF0(v75);
              if ( v72 == v100 )
                goto LABEL_120;
            }
            v74 -= 24;
          }
        }
        a2 = (int *)(v73 + 8);
        operator delete[]((void *)(v72 - 8), v73 + 8);
      }
    }
    else
    {
      sub_21D5AF0(&v99);
    }
LABEL_16:
    ++v14;
  }
  while ( v13 < v96 );
  v22 = (unsigned int)v109;
  v23 = v108;
  v106 = nullptr;
  BYTE4(v105) &= ~1u;
  v24 = (unsigned int)v109 - 1LL;
  LODWORD(v107) = 0;
  v25 = v109;
  LODWORD(v105) = 8;
  v26 = (_QWORD *)operator new[](56LL * (unsigned int)v109 + 8);
  *v26 = v22;
  v27 = v26 + 1;
  if ( v24 != -1 )
  {
    v28 = v26 + 1;
    do
    {
      *(_DWORD *)v28 = 0;
      *((_BYTE *)v28 + 4) &= ~1u;
      v28 += 7;
    }
    while ( &v26[7 * v24 + 8] != v28 );
  }
  v106 = (void **)(v26 + 1);
  LODWORD(v107) = v25;
  if ( v25 )
  {
    v29 = (__int64)&v26[7 * (unsigned int)(v25 - 1) + 8];
    do
    {
      v30 = v23;
      v31 = (__int64)v27;
      v27 += 7;
      v23 += 14;
      sub_A30FE0(v31, v30);
    }
    while ( v27 != (_QWORD *)v29 );
  }
  sub_A2BFE0(a1[1], (__int64)v91);
LABEL_24:
  if ( (unsigned int)v105 > 1 )
    sub_A2BBA0(v91);
  v11 = 1;
LABEL_27:
  v32 = v108;
  v33 = &v108[14 * (unsigned int)v109];
  if ( v108 != v33 )
  {
    do
    {
      while ( 1 )
      {
        v33 -= 14;
        if ( (unsigned int)*v33 > 1 )
          break;
        if ( v32 == v33 )
          goto LABEL_30;
      }
      sub_A2BBA0(v33);
    }
    while ( v32 != v33 );
LABEL_30:
    v33 = v108;
  }
  if ( v33 != (int *)v110 )
    free(v33);
  return v11;
}

