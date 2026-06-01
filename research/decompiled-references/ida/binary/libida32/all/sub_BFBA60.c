__int64 __fastcall sub_BFBA60(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // edx
  __int64 v8; // rbx
  int *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r12
  char v14; // al
  __int64 v15; // r12
  int *v16; // rbp
  int v17; // r13d
  unsigned __int64 v18; // r14
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  char *v21; // rdx
  char *v22; // rax
  __int64 v23; // r12
  int *v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // r12d
  int *v27; // rbp
  int *v28; // rbx
  unsigned int v30; // r12d
  char v31; // al
  __int64 v32; // rdx
  char v33; // r13
  char v34; // r13
  __int64 v35; // rax
  void *v36; // rdi
  int v37; // ecx
  int *v38; // rax
  char v39; // dl
  bool v40; // cc
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // r13
  int *v46; // r15
  _QWORD *v47; // rax
  __int64 v48; // rax
  _QWORD **v49; // rdx
  _QWORD **v50; // rdx
  bool v51; // si
  bool v52; // al
  __int64 v53; // r13
  int *v54; // r14
  int *v55; // r12
  __int64 v56; // r15
  __int64 v57; // rsi
  __int64 v58; // rdi
  int *v59; // r14
  int v60; // r14d
  __int64 v61; // r15
  __int64 v62; // rsi
  __int64 i; // rbx
  __int64 v64; // rdi
  __int64 v65; // rax
  int v66; // r12d
  _QWORD *v67; // rax
  bool v68; // r13
  int v69; // r12d
  _QWORD *v70; // rax
  bool v71; // al
  bool v72; // al
  unsigned int v73; // r12d
  int v74; // eax
  __int64 v75; // rsi
  unsigned int v76; // edx
  void *v77; // rax
  bool v78; // zf
  int v79; // eax
  int v80; // eax
  unsigned int v81; // eax
  int v82; // eax
  char v83; // al
  unsigned int v84; // eax
  __int64 v85; // r12
  int *v86; // r15
  int *v87; // r13
  __int64 v88; // rsi
  __int64 v89; // rdi
  int *v90; // r15
  int v91; // r15d
  _QWORD *v92; // rax
  _QWORD *v93; // [rsp+8h] [rbp-270h]
  __int64 v97; // [rsp+30h] [rbp-248h]
  __int64 v99; // [rsp+40h] [rbp-238h]
  unsigned int v101; // [rsp+50h] [rbp-228h]
  void **v102; // [rsp+58h] [rbp-220h]
  __int64 v103; // [rsp+58h] [rbp-220h]
  int *v104; // [rsp+58h] [rbp-220h]
  __int64 v105; // [rsp+60h] [rbp-218h]
  _QWORD v106[4]; // [rsp+70h] [rbp-208h] BYREF
  void *v107; // [rsp+90h] [rbp-1E8h] BYREF
  unsigned int v108; // [rsp+98h] [rbp-1E0h]
  char v109; // [rsp+9Ch] [rbp-1DCh]
  void *v110; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v111; // [rsp+B8h] [rbp-1C0h]
  unsigned int v112; // [rsp+D0h] [rbp-1A8h] BYREF
  _QWORD *v113; // [rsp+D8h] [rbp-1A0h] BYREF
  _QWORD **v114; // [rsp+E0h] [rbp-198h]
  unsigned int v115; // [rsp+110h] [rbp-168h] BYREF
  char v116; // [rsp+114h] [rbp-164h]
  _QWORD *v117; // [rsp+118h] [rbp-160h] BYREF
  _QWORD **v118; // [rsp+120h] [rbp-158h]
  int *v119; // [rsp+150h] [rbp-128h] BYREF
  __int64 v120; // [rsp+158h] [rbp-120h]
  _BYTE v121[280]; // [rsp+160h] [rbp-118h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = (unsigned int)*(unsigned __int8 *)(v5 + 16) - 57;
  if ( (unsigned int)v6 > 1 )
    v5 = sub_F3F310(v5, a2, v6, a4);
  v7 = *(_DWORD *)(v5 + 20);
  v99 = *(_QWORD *)(v5 + 32);
  if ( *(_DWORD *)a4 == 8 )
  {
    v119 = (int *)v121;
    v120 = 0x400000000LL;
    if ( !v7 )
    {
      v116 &= ~1u;
      v115 = 8;
      v92 = (_QWORD *)operator new[](8u);
      LODWORD(v118) = 0;
      *v92 = 0;
      v117 = v92 + 1;
      sub_A2BFE0(a4, (__int64)&v115);
LABEL_20:
      if ( v115 > 1 )
        sub_A2BBA0((int *)&v115);
      v26 = 1;
      goto LABEL_23;
    }
    v8 = 0;
    v101 = a3 - 19;
    v93 = (_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL);
    v97 = 56 * ((unsigned int)(v7 - 1) + 1LL);
LABEL_6:
    sub_A2FF00((__int64)&v112, (int *)(v8 + *(_QWORD *)(a4 + 8)));
    v9 = (int *)(v8 + *(_QWORD *)(a5 + 8));
    sub_A2FF00((__int64)&v115, v9);
    v13 = *(_QWORD *)(*(_QWORD *)(*v93 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v14 = *(_BYTE *)(v13 + 16);
    if ( v14 == 13 )
    {
      if ( (((*(_WORD *)(v13 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
        goto LABEL_31;
LABEL_8:
      if ( !(unsigned __int8)sub_F34320(*v93) )
        goto LABEL_9;
      goto LABEL_54;
    }
    if ( v14 != 47 )
    {
      if ( v14 == 10 )
        goto LABEL_31;
      goto LABEL_8;
    }
    v41 = sub_F3D1D0(*(_QWORD *)(*(_QWORD *)(*v93 + 8LL) & 0xFFFFFFFFFFFFFFF0LL), v9, v10, v11, v12);
    if ( (*(_BYTE *)(v41 + 74) & 1) == 0 && (*(_QWORD *)(v41 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0
      || *(char *)(sub_F3D1D0(v13, v9, v42, v43, v44) + 76) < 0 )
    {
      if ( !(unsigned __int8)sub_F34320(*v93) )
        goto LABEL_9;
LABEL_54:
      v45 = (_QWORD *)sub_21D5390();
      if ( v113 == v45 )
        sub_21DC120(v106, &v113);
      else
        sub_21D5A60(v106, &v113);
      if ( !(unsigned __int8)sub_BEE430(a1, a2, v106, a3, &v117) )
      {
        sub_E0FED0(a1, a2, 108, 0);
        sub_971860(v106);
        goto LABEL_180;
      }
      if ( (unsigned int)v120 >= HIDWORD(v120) )
      {
        v85 = sub_22136C0(&v119, v121, 0, 56, &v107);
        v104 = (int *)v85;
        sub_9718E0((__int64)&v110, v106);
        sub_BF4E50(v85 + 56LL * (unsigned int)v120, &v110);
        sub_971860(&v110);
        v86 = v119;
        v87 = &v119[14 * (unsigned int)v120];
        if ( v119 != v87 )
        {
          do
          {
            v88 = (__int64)v86;
            v89 = v85;
            v86 += 14;
            v85 += 56;
            sub_A2BB60(v89, v88);
          }
          while ( v87 != v86 );
          v90 = v119;
          v87 = &v119[14 * (unsigned int)v120];
          if ( v119 != v87 )
          {
            do
            {
              while ( 1 )
              {
                v87 -= 14;
                if ( (unsigned int)*v87 > 1 )
                  break;
                if ( v90 == v87 )
                  goto LABEL_190;
              }
              sub_A2BBA0(v87);
            }
            while ( v90 != v87 );
LABEL_190:
            v87 = v119;
          }
        }
        v91 = (int)v107;
        if ( v87 != (int *)v121 )
          free(v87);
        HIDWORD(v120) = v91;
        LODWORD(v120) = v120 + 1;
        v119 = v104;
        goto LABEL_67;
      }
      if ( v45 == (_QWORD *)v106[0] )
        sub_21DC120(&v107, v106);
      else
        sub_21D5A60(&v107, v106);
      v46 = &v119[14 * (unsigned int)v120];
      *((_BYTE *)v46 + 4) &= ~1u;
      *v46 = 0;
      v102 = (void **)(v46 + 2);
      v105 = sub_21D5370();
      sub_21D8290(&v110, 0.0);
      sub_21DE690(v46 + 2, &v110, v105);
      sub_21D5AF0(&v110);
      *v46 = 3;
      if ( v45 == v107 )
      {
        sub_21DC190(&v110, &v107);
        v47 = v110;
        if ( v45 != *((_QWORD **)v46 + 1) )
        {
LABEL_62:
          if ( v45 != v47 )
          {
            sub_21D5850(v102, &v110);
            goto LABEL_64;
          }
          if ( v102 != &v110 )
          {
LABEL_101:
            sub_971860(v102);
            if ( v45 != v110 )
            {
              sub_21D5A90(v102, &v110);
              if ( v45 != v110 )
                goto LABEL_65;
              goto LABEL_103;
            }
            sub_21DC190(v102, &v110);
            goto LABEL_64;
          }
          goto LABEL_103;
        }
      }
      else
      {
        sub_21D5A90(&v110, &v107);
        v47 = v110;
        if ( v45 != *((_QWORD **)v46 + 1) )
          goto LABEL_62;
      }
      if ( v45 != v47 )
      {
        if ( v102 == &v110 )
        {
LABEL_65:
          sub_21D5AF0(&v110);
          goto LABEL_66;
        }
        goto LABEL_101;
      }
      if ( v102 != &v110 )
      {
        sub_A2B2D0((__int64)v102);
        sub_21DC190(v102, &v110);
LABEL_64:
        if ( v45 != v110 )
          goto LABEL_65;
      }
LABEL_103:
      v61 = v111;
      if ( !v111 )
        goto LABEL_66;
      v62 = 24LL * *(_QWORD *)(v111 - 8);
      if ( v111 == v111 + v62 )
        goto LABEL_111;
      v103 = v8;
      for ( i = v111 + v62; ; i -= 24 )
      {
        v61 = i - 24;
        v64 = i - 24;
        if ( v45 == *(_QWORD **)(i - 24) )
        {
          sub_A2B2D0(v64);
          if ( v111 == v61 )
          {
LABEL_110:
            v65 = i;
            v8 = v103;
            v62 = 24LL * *(_QWORD *)(v65 - 32);
LABEL_111:
            operator delete[]((void *)(v61 - 8), v62 + 8);
LABEL_66:
            sub_971860(&v107);
            LODWORD(v120) = v120 + 1;
LABEL_67:
            sub_971860(v106);
LABEL_9:
            if ( v115 > 1 )
              sub_A2BBA0((int *)&v115);
            if ( v112 > 1 )
            {
              v8 += 56;
              sub_A2BBA0((int *)&v112);
              if ( v8 == v97 )
              {
LABEL_13:
                v15 = (unsigned int)v120;
                v16 = v119;
                v117 = nullptr;
                v116 &= ~1u;
                v17 = v120;
                LODWORD(v118) = 0;
                v115 = 8;
                v18 = 56LL * (unsigned int)v120 + 8;
                v19 = (_QWORD *)operator new[](v18);
                *v19 = v15;
                v20 = v19 + 1;
                if ( v15 )
                {
                  v21 = (char *)(v19 + 1);
                  v22 = (char *)v19 + v18;
                  do
                  {
                    *(_DWORD *)v21 = 0;
                    v21[4] &= ~1u;
                    v21 += 56;
                  }
                  while ( v22 != v21 );
                }
                v117 = v20;
                LODWORD(v118) = v17;
                if ( v17 )
                {
                  v23 = (__int64)&v20[7 * (unsigned int)(v17 - 1) + 7];
                  do
                  {
                    v24 = v16;
                    v25 = (__int64)v20;
                    v20 += 7;
                    v16 += 14;
                    sub_A30FE0(v25, v24);
                  }
                  while ( v20 != (_QWORD *)v23 );
                }
                sub_A2BFE0(a4, (__int64)&v115);
                goto LABEL_20;
              }
            }
            else
            {
              v8 += 56;
              if ( v97 == v8 )
                goto LABEL_13;
            }
            goto LABEL_6;
          }
        }
        else
        {
          sub_21D5AF0(v64);
          if ( v111 == v61 )
            goto LABEL_110;
        }
      }
    }
LABEL_31:
    v30 = sub_A884B0(*(_QWORD *)(a1 + 16), v99, v10, v11, v12);
    v31 = sub_F41620(*v93);
    v108 = v30;
    v33 = v31;
    if ( v30 <= 0x40 )
    {
      v109 = v31;
      v107 = nullptr;
      if ( v101 > 1 )
        goto LABEL_33;
LABEL_73:
      if ( v112 != 2 )
      {
        v48 = sub_21D5390();
        v49 = &v113;
        if ( v113 == (_QWORD *)v48 )
          v49 = v114;
        v78 = (*((_BYTE *)v49 + 20) & 7) == 3;
        v50 = &v117;
        v51 = !v78;
        if ( (_QWORD *)v48 == v117 )
          v50 = v118;
        v52 = (*((_BYTE *)v50 + 20) & 7) != 3;
        if ( a3 != 19 )
        {
          sub_BF2840(&v107, v52 | (unsigned __int8)v51);
          v35 = (unsigned int)v120;
          if ( (unsigned int)v120 >= HIDWORD(v120) )
          {
LABEL_80:
            v53 = sub_22136C0(&v119, v121, 0, 56, v106);
            LODWORD(v111) = v108;
            if ( v108 > 0x40 )
              sub_21E17D0(&v110);
            else
              v110 = v107;
            BYTE4(v111) = v109;
            sub_B72A30(v53 + 56LL * (unsigned int)v120, (__int64 *)&v110);
            if ( (unsigned int)v111 > 0x40 && v110 )
              operator delete[](v110);
            v54 = v119;
            v55 = &v119[14 * (unsigned int)v120];
            if ( v119 != v55 )
            {
              v56 = v53;
              do
              {
                v57 = (__int64)v54;
                v58 = v56;
                v54 += 14;
                v56 += 56;
                sub_A2BB60(v58, v57);
              }
              while ( v55 != v54 );
              v59 = v119;
              v55 = &v119[14 * (unsigned int)v120];
              if ( v119 != v55 )
              {
                do
                {
                  while ( 1 )
                  {
                    v55 -= 14;
                    if ( (unsigned int)*v55 > 1 )
                      break;
                    if ( v59 == v55 )
                      goto LABEL_91;
                  }
                  sub_A2BBA0(v55);
                }
                while ( v59 != v55 );
LABEL_91:
                v55 = v119;
              }
            }
            v60 = v106[0];
            if ( v55 != (int *)v121 )
              free(v55);
            v119 = (int *)v53;
            HIDWORD(v120) = v60;
            LODWORD(v120) = v120 + 1;
LABEL_47:
            if ( v108 > 0x40 && v107 )
              operator delete[](v107);
            goto LABEL_9;
          }
LABEL_41:
          LODWORD(v111) = v108;
          if ( v108 > 0x40 )
          {
            sub_21E17D0(&v110);
            v35 = (unsigned int)v120;
            v36 = v110;
          }
          else
          {
            v36 = v107;
            v110 = v107;
          }
          v37 = v111;
          BYTE4(v111) = v109;
          v38 = &v119[14 * v35];
          v39 = v109;
          *((_BYTE *)v38 + 4) &= ~1u;
          *v38 = 2;
          LODWORD(v111) = 0;
          *((_QWORD *)v38 + 1) = v36;
          v38[4] = v37;
          v40 = (unsigned int)v111 <= 0x40;
          *((_BYTE *)v38 + 20) = v39;
          if ( !v40 && v36 )
            operator delete[](v36);
          LODWORD(v120) = v120 + 1;
          goto LABEL_47;
        }
        sub_BF2840(&v107, v52 & (unsigned __int8)v51);
LABEL_40:
        v35 = (unsigned int)v120;
        if ( (unsigned int)v120 >= HIDWORD(v120) )
          goto LABEL_80;
        goto LABEL_41;
      }
      v66 = (int)v114;
      if ( (unsigned int)v114 <= 0x40 )
      {
        v67 = v113;
        goto LABEL_118;
      }
      v68 = 0;
      if ( v66 - (unsigned int)sub_21E2A40(&v113) <= 0x40 )
      {
        v67 = (_QWORD *)*v113;
LABEL_118:
        v68 = v67 == nullptr;
      }
      v69 = (int)v118;
      if ( (unsigned int)v118 <= 0x40 )
      {
        v70 = v117;
        goto LABEL_121;
      }
      v73 = v69 - sub_21E2A40(&v117);
      v71 = 0;
      if ( v73 <= 0x40 )
      {
        v70 = (_QWORD *)*v117;
LABEL_121:
        v71 = v70 == nullptr;
      }
      if ( a3 == 19 )
        v72 = v68 || v71;
      else
        v72 = v68 && v71;
      sub_BF2840(&v107, !v72);
      goto LABEL_40;
    }
    sub_21E1730(&v107, 0, 0);
    v109 = v33;
    if ( v101 <= 1 )
      goto LABEL_73;
LABEL_33:
    if ( a3 - 9 <= 6 )
    {
      if ( v112 != 2 )
      {
        switch ( a3 )
        {
          case 0xAu:
            if ( v113 == (_QWORD *)sub_21D5390() )
              v78 = (unsigned int)sub_21DD2E0(&v113, &v117) == 0;
            else
              v78 = (unsigned int)sub_21D6700(&v113, &v117) == 0;
            goto LABEL_151;
          case 0xBu:
            if ( v113 == (_QWORD *)sub_21D5390() )
              v79 = sub_21DD2E0(&v113, &v117);
            else
              v79 = sub_21D6700(&v113, &v117);
            v78 = v79 == 2;
            goto LABEL_151;
          case 0xCu:
            if ( v113 == (_QWORD *)sub_21D5390() )
              v81 = sub_21DD2E0(&v113, &v117);
            else
              v81 = sub_21D6700(&v113, &v117);
            goto LABEL_156;
          case 0xDu:
            if ( v113 == (_QWORD *)sub_21D5390() )
              v80 = sub_21DD2E0(&v113, &v117);
            else
              v80 = sub_21D6700(&v113, &v117);
            v81 = v80 - 1;
LABEL_156:
            LOBYTE(v75) = v81 <= 1;
            goto LABEL_157;
          case 0xEu:
            if ( v113 == (_QWORD *)sub_21D5390() )
              v82 = sub_21DD2E0(&v113, &v117);
            else
              v82 = sub_21D6700(&v113, &v117);
            v78 = v82 == 1;
LABEL_151:
            v75 = v78;
            sub_BF2840(&v107, v78);
            v76 = v108;
            if ( v108 > 0x40 )
              goto LABEL_152;
            goto LABEL_142;
          case 0xFu:
            if ( v113 == (_QWORD *)sub_21D5390() )
              v74 = sub_21DD2E0(&v113, &v117);
            else
              v74 = sub_21D6700(&v113, &v117);
            v75 = v74 != 1;
            sub_BF2840(&v107, v75);
            goto LABEL_141;
          default:
            *(_QWORD *)&dword_0 = v32;
            BUG();
        }
      }
      switch ( a3 )
      {
        case 0xAu:
          if ( BYTE4(v114) )
            v84 = (unsigned int)sub_21E2070(&v113, &v117) >> 31;
          else
            v84 = (unsigned int)sub_21E20E0(&v113, &v117) >> 31;
          goto LABEL_168;
        case 0xBu:
          if ( BYTE4(v114) )
            LOBYTE(v75) = (int)sub_21E2070(&v113, &v117) > 0;
          else
            LOBYTE(v75) = (int)sub_21E20E0(&v113, &v117) > 0;
          goto LABEL_157;
        case 0xCu:
          if ( BYTE4(v114) )
            LOBYTE(v75) = (int)sub_21E2070(&v113, &v117) <= 0;
          else
            LOBYTE(v75) = (int)sub_21E20E0(&v113, &v117) <= 0;
          goto LABEL_157;
        case 0xDu:
          if ( BYTE4(v114) )
            LOBYTE(v75) = (int)sub_21E2070(&v113, &v117) >= 0;
          else
            LOBYTE(v75) = (int)sub_21E20E0(&v113, &v117) >= 0;
LABEL_157:
          v75 = (unsigned __int8)v75;
          sub_BF2840(&v107, (unsigned __int8)v75);
          goto LABEL_141;
        case 0xEu:
          if ( (unsigned int)v114 <= 0x40 )
            LOBYTE(v84) = v113 == v117;
          else
            LOBYTE(v84) = sub_21E2030(&v113, &v117);
          goto LABEL_168;
        case 0xFu:
          if ( (unsigned int)v114 <= 0x40 )
            v83 = v113 == v117;
          else
            v83 = sub_21E2030(&v113, &v117);
          LOBYTE(v84) = v83 ^ 1;
LABEL_168:
          v75 = (unsigned __int8)v84;
          sub_BF2840(&v107, (unsigned __int8)v84);
LABEL_141:
          v76 = v108;
          if ( v108 > 0x40 )
          {
LABEL_152:
            sub_21E2280(&v107, v75);
          }
          else
          {
LABEL_142:
            v77 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v76) & ~(unsigned __int64)v107);
            if ( !v76 )
              v77 = nullptr;
            v107 = v77;
          }
          sub_21E1BC0(&v107);
          break;
      }
      goto LABEL_40;
    }
    LODWORD(v111) = (_DWORD)v118;
    if ( (unsigned int)v118 > 0x40 )
      sub_21E17D0(&v110);
    else
      v110 = v117;
    BYTE4(v111) = BYTE4(v118);
    v34 = sub_BFA6A0(a1, a2, (__int64)&v113, a3, (__int64)&v110, (__int64)&v107);
    if ( (unsigned int)v111 > 0x40 && v110 )
      operator delete[](v110);
    if ( v34 )
      goto LABEL_40;
    sub_E0FED0(a1, a2, 108, 0);
    if ( v108 > 0x40 && v107 )
      operator delete[](v107);
LABEL_180:
    if ( v115 > 1 )
      sub_A2BBA0((int *)&v115);
    if ( v112 > 1 )
      sub_A2BBA0((int *)&v112);
    v26 = 0;
LABEL_23:
    v27 = v119;
    v28 = &v119[14 * (unsigned int)v120];
    if ( v119 != v28 )
    {
      do
      {
        while ( 1 )
        {
          v28 -= 14;
          if ( (unsigned int)*v28 > 1 )
            break;
          if ( v27 == v28 )
            goto LABEL_26;
        }
        sub_A2BBA0(v28);
      }
      while ( v27 != v28 );
LABEL_26:
      v28 = v119;
    }
    if ( v28 != (int *)v121 )
      free(v28);
  }
  else
  {
    v26 = 0;
    sub_E0FED0(a1, a2, 108, 0);
  }
  return v26;
}

