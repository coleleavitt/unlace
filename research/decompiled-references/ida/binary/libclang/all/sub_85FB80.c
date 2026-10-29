__int64 __fastcall sub_85FB80(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r12
  int *v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rbx
  char v15; // al
  __int64 v16; // rax
  unsigned __int8 **v17; // rbx
  unsigned __int8 *v18; // rbp
  unsigned __int8 *v19; // rdx
  __int64 v20; // rax
  unsigned __int8 *v21; // rbp
  unsigned __int8 *v22; // rdx
  __int64 v23; // rax
  int *v24; // rbp
  int *v25; // rbx
  __int64 v27; // rax
  int *v28; // r14
  int *v29; // rbx
  int *v30; // rbp
  __int64 v31; // r13
  __int64 v32; // rdi
  int *v33; // r14
  unsigned int v34; // r14d
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  char v44; // al
  __int64 v45; // rax
  __int64 v46; // r14
  unsigned __int64 v47; // rdx
  int *v48; // rbx
  __int64 v49; // r12
  int v50; // r14d
  __int64 v51; // rbp
  _QWORD *v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rdx
  _QWORD *v55; // r12
  _QWORD *v56; // rax
  int *v57; // rbp
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rbx
  char v62; // al
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 *v65; // r14
  __int64 *v66; // rbp
  __int64 v67; // rsi
  __int64 *v68; // r14
  __int64 *v69; // rbx
  __int64 v70; // rsi
  __int64 v71; // rax
  int *v72; // r15
  int *v73; // rbx
  __int64 v74; // rbp
  int *v75; // rsi
  __int64 v76; // rdi
  int *v77; // rbx
  unsigned int v78; // eax
  __int64 v79; // rbx
  char v80; // al
  unsigned __int8 *v81; // rdx
  int v82; // eax
  __int64 v83; // rax
  __int64 v84; // r12
  __int64 v85; // r14
  __int64 v86; // r12
  void *v87; // rdi
  __int64 v88; // rdx
  int v89; // eax
  __int64 v90; // rax
  __int64 v91; // r14
  __int64 v92; // r15
  __int64 v93; // r14
  void *v94; // rdi
  __int64 v95; // rax
  _QWORD *v96; // rcx
  __int64 v97; // r15
  _QWORD *v98; // rbx
  _QWORD *v99; // rbp
  __int64 *v100; // r12
  __int64 *v101; // r13
  __int64 v102; // rsi
  __int64 v103; // rsi
  __int64 v104; // [rsp+0h] [rbp-2B8h]
  unsigned __int8 v105; // [rsp+0h] [rbp-2B8h]
  _QWORD *v107; // [rsp+10h] [rbp-2A8h]
  _QWORD *v109; // [rsp+20h] [rbp-298h]
  __int64 v110; // [rsp+28h] [rbp-290h]
  __int64 v111; // [rsp+30h] [rbp-288h]
  unsigned int v112; // [rsp+38h] [rbp-280h]
  __int64 v113; // [rsp+40h] [rbp-278h]
  unsigned __int8 v114; // [rsp+57h] [rbp-261h]
  __int64 v115; // [rsp+68h] [rbp-250h]
  __int64 v116; // [rsp+70h] [rbp-248h]
  __int64 v117; // [rsp+78h] [rbp-240h]
  __int64 v118; // [rsp+80h] [rbp-238h]
  __int64 v119; // [rsp+90h] [rbp-228h] BYREF
  __int64 *v120; // [rsp+98h] [rbp-220h]
  __int64 v121; // [rsp+B0h] [rbp-208h] BYREF
  __int64 *v122; // [rsp+B8h] [rbp-200h]
  unsigned int v123; // [rsp+D0h] [rbp-1E8h] BYREF
  char v124; // [rsp+D4h] [rbp-1E4h]
  __int64 v125; // [rsp+D8h] [rbp-1E0h]
  unsigned int v126; // [rsp+E0h] [rbp-1D8h]
  unsigned int v127; // [rsp+110h] [rbp-1A8h] BYREF
  char v128; // [rsp+114h] [rbp-1A4h]
  __int64 v129[7]; // [rsp+118h] [rbp-1A0h] BYREF
  unsigned int v130; // [rsp+150h] [rbp-168h] BYREF
  char v131; // [rsp+154h] [rbp-164h]
  _QWORD *v132; // [rsp+158h] [rbp-160h] BYREF
  _QWORD *v133; // [rsp+160h] [rbp-158h]
  int *v134; // [rsp+190h] [rbp-128h] BYREF
  __int64 v135; // [rsp+198h] [rbp-120h]
  _BYTE v136[280]; // [rsp+1A0h] [rbp-118h] BYREF

  v3 = *a1;
  v4 = *(_QWORD *)(a2 + 16);
  v124 &= ~1u;
  v123 = 0;
  v5 = *(_QWORD *)(v4 + 8);
  v114 = sub_85F8D0(v3, v4, &v123);
  if ( !v114 )
    goto LABEL_26;
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 56 > 1 )
    v6 = sub_B0D320(v6);
  v7 = *(_QWORD *)(v6 + 32);
  v8 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
  v111 = v7;
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 56 > 1 )
    v8 = sub_B0D320(v8);
  v9 = *(_QWORD *)(v8 + 32);
  v10 = *(int **)(*(_QWORD *)(*a1 + 16) + 2160LL);
  sub_8175F0(a2, (__int64)v10);
  v11 = v126;
  v134 = (int *)v136;
  v135 = 0x400000000LL;
  if ( v126 > 4 )
  {
    v10 = (int *)v136;
    v27 = sub_25D5F70(&v134, v136, v126, 56, &v130);
    v28 = v134;
    v29 = (int *)v27;
    v30 = &v134[14 * (unsigned int)v135];
    if ( v134 != v30 )
    {
      v31 = v27;
      do
      {
        v10 = v28;
        v32 = v31;
        v28 += 14;
        v31 += 56;
        sub_69F700(v32, v10);
      }
      while ( v30 != v28 );
      v33 = v134;
      v30 = &v134[14 * (unsigned int)v135];
      if ( v134 != v30 )
      {
        do
        {
          v30 -= 14;
          if ( (unsigned int)*v30 > 1 )
            sub_69F740((__int64)v30);
        }
        while ( v33 != v30 );
        v30 = v134;
      }
    }
    v34 = v130;
    if ( v30 != (int *)v136 )
      free(v30);
    v134 = v29;
    HIDWORD(v135) = v34;
  }
  else if ( !v126 )
  {
    v48 = (int *)v136;
LABEL_59:
    v49 = (unsigned int)v135;
    v131 &= ~1u;
    v132 = nullptr;
    v50 = v135;
    LODWORD(v133) = 0;
    v130 = 8;
    v51 = 14LL * (unsigned int)v135;
    v52 = (_QWORD *)operator new[](v51 * 4 + 8);
    *v52 = v49;
    v53 = (__int64)(v52 + 1);
    if ( v49 )
    {
      v54 = &v52[(unsigned __int64)v51 / 2 + 1];
      v55 = v52 + 1;
      v56 = v52 + 1;
      do
      {
        *((_BYTE *)v56 + 4) &= ~1u;
        v56 += 7;
        *((_DWORD *)v56 - 14) = 0;
      }
      while ( v56 != v54 );
      v132 = (_QWORD *)v53;
      v57 = &v48[v51];
      LODWORD(v133) = v50;
      do
      {
        v58 = (__int64)v48;
        v59 = (__int64)v55;
        v48 += 14;
        v55 += 7;
        sub_6A63E0(v59, v58);
      }
      while ( v48 != v57 );
    }
    else
    {
      v132 = v52 + 1;
      LODWORD(v133) = 0;
    }
    sub_6A63E0(a1[1], (__int64)&v130);
    if ( v130 > 1 )
      sub_69F740((__int64)&v130);
    goto LABEL_19;
  }
  v12 = 0;
  v107 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  v110 = 56 * v11;
  v109 = (_QWORD *)(v111 & 0xFFFFFFFFFFFFFFF0LL);
  while ( 1 )
  {
    v128 &= ~1u;
    v127 = 0;
    v104 = v12 + v125;
    v13 = *a1;
    v14 = *(_QWORD *)(*(_QWORD *)(*v107 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v15 = *(_BYTE *)(v14 + 16);
    switch ( v15 )
    {
      case 13:
        if ( (((*(_WORD *)(v14 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
          goto LABEL_11;
        break;
      case 46:
        v60 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v107 + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
        if ( (*(_BYTE *)(v60 + 74) & 1) == 0 && *(_QWORD *)(v60 + 128) <= 7u || *(char *)(sub_B14A40(v14) + 76) < 0 )
        {
          if ( !(unsigned __int8)sub_B080B0(*v107) )
            goto LABEL_12;
          goto LABEL_70;
        }
        break;
      case 10:
        break;
      default:
LABEL_11:
        if ( !(unsigned __int8)sub_B080B0(*v107) )
          goto LABEL_12;
LABEL_70:
        if ( (unsigned __int8)sub_B080B0(*v109) )
        {
          sub_6A63E0((__int64)&v127, v104);
          v44 = sub_833070(v13, a2, v111, v129);
        }
        else
        {
          v79 = *(_QWORD *)(*(_QWORD *)(*v109 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          v80 = *(_BYTE *)(v79 + 16);
          switch ( v80 )
          {
            case 13:
              if ( (((*(_WORD *)(v79 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
                goto LABEL_12;
              break;
            case 46:
              v95 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v109 + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
              if ( (*(_BYTE *)(v95 + 74) & 1) == 0 && *(_QWORD *)(v95 + 128) <= 7u
                || *(char *)(sub_B14A40(v79) + 76) < 0 )
              {
                goto LABEL_12;
              }
              break;
            case 10:
              break;
            default:
              goto LABEL_12;
          }
          v131 &= ~1u;
          LODWORD(v133) = 1;
          v132 = nullptr;
          v130 = 2;
          BYTE4(v133) = 0;
          sub_6A01B0((__int64)&v127, (__int64)&v130);
          if ( v130 > 1 )
            sub_69F740((__int64)&v130);
          v44 = sub_839180(v13, a2, (_QWORD *)(v104 + 8), v111, (__int64)v129);
        }
LABEL_54:
        if ( !v44 )
          goto LABEL_16;
        goto LABEL_55;
    }
    v35 = *v109;
    if ( (unsigned __int8)sub_B080B0(*v109) )
    {
      v37 = sub_2575D00(v35, v10, v36);
      sub_2580BE0(&v130, 0.0);
      sub_257EDC0(&v119, &v130, v37);
      sub_25769A0(&v130);
      v131 &= ~1u;
      v130 = 0;
      sub_2580BE0(&v121, 0.0);
      sub_257EDC0(&v132, &v121, v37);
      sub_25769A0(&v121);
      v130 = 3;
      v41 = sub_2575D20(&v121, &v121, v38);
      if ( v119 == v41 )
        sub_257D000(&v121, &v119, v39, v40);
      else
        sub_2576960(&v121, &v119);
      if ( v132 == (_QWORD *)v41 )
      {
        if ( v41 == v121 )
        {
          v96 = v133;
          if ( v133 )
          {
            if ( v133 == &v133[3 * *(v133 - 1)] )
            {
              v103 = 0;
            }
            else
            {
              v115 = v13;
              v97 = v121;
              v116 = v41;
              v98 = v133;
              v99 = &v133[3 * *(v133 - 1)];
              v117 = v12;
              v118 = v9;
              do
              {
                v99 -= 3;
                if ( *v99 == v97 )
                {
                  v100 = (__int64 *)v99[1];
                  if ( v100 )
                  {
                    v101 = &v100[3 * *(v100 - 1)];
                    if ( v100 == v101 )
                    {
                      v102 = 0;
                    }
                    else
                    {
                      do
                      {
                        v101 -= 3;
                        sub_5FF3B0(v101);
                      }
                      while ( v100 != v101 );
                      v102 = 24 * *(v100 - 1);
                    }
                    operator delete[](v100 - 1, v102 + 8);
                  }
                  v99[1] = 0;
                }
                else
                {
                  sub_25769A0(v99);
                }
              }
              while ( v98 != v99 );
              v96 = v98;
              v13 = v115;
              v41 = v116;
              v12 = v117;
              v9 = v118;
              v103 = 24LL * *(v96 - 1);
            }
            operator delete[](v96 - 1, v103 + 8);
          }
          v133 = nullptr;
          sub_257D000(&v132, &v121, v42, v96);
          goto LABEL_47;
        }
      }
      else if ( v41 != v121 )
      {
        sub_2576350(&v132, &v121, v42, v43);
        goto LABEL_47;
      }
      sub_5FF3B0((__int64 *)&v132);
      if ( v41 != v121 )
      {
        sub_2576960(&v132, &v121);
        if ( v121 != v41 )
          goto LABEL_48;
        goto LABEL_83;
      }
      sub_257D000(&v132, &v121, v63, v64);
LABEL_47:
      if ( v121 != v41 )
      {
LABEL_48:
        sub_25769A0(&v121);
LABEL_49:
        sub_6A01B0((__int64)&v127, (__int64)&v130);
        if ( v130 > 1 )
          sub_69F740((__int64)&v130);
        if ( v41 == v119 )
        {
          v68 = v120;
          if ( v120 )
          {
            v69 = &v120[3 * *(v120 - 1)];
            if ( v120 == v69 )
            {
              v70 = 0;
            }
            else
            {
              do
              {
                v69 -= 3;
                sub_5FF3B0(v69);
              }
              while ( v68 != v69 );
              v70 = 24 * *(v68 - 1);
            }
            operator delete[](v68 - 1, v70 + 8);
          }
        }
        else
        {
          sub_25769A0(&v119);
        }
        v44 = sub_834DF0(v13, a2, v104 + 8, v111, v129);
        goto LABEL_54;
      }
LABEL_83:
      v65 = v122;
      if ( v122 )
      {
        v66 = &v122[3 * *(v122 - 1)];
        if ( v122 == v66 )
        {
          v67 = 0;
        }
        else
        {
          do
          {
            v66 -= 3;
            sub_5FF3B0(v66);
          }
          while ( v65 != v66 );
          v67 = 24 * *(v65 - 1);
        }
        operator delete[](v65 - 1, v67 + 8);
      }
      goto LABEL_49;
    }
    v61 = *(_QWORD *)(*(_QWORD *)(*v109 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v62 = *(_BYTE *)(v61 + 16);
    if ( v62 == 13 )
    {
      if ( (((*(_WORD *)(v61 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        break;
      goto LABEL_76;
    }
    if ( v62 != 46 )
    {
      if ( v62 != 10 )
        break;
      goto LABEL_76;
    }
    v71 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v109 + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
    if ( (*(_BYTE *)(v71 + 74) & 1) == 0 && *(_QWORD *)(v71 + 128) <= 7u )
      break;
    if ( *(char *)(sub_B14A40(v61) + 76) < 0 )
      break;
LABEL_76:
    sub_8260F0((__int64)&v121, *(_QWORD *)(v13 + 16), v111, v104 + 8);
    v131 &= ~1u;
    v132 = (_QWORD *)v121;
    v130 = 2;
    LODWORD(v133) = (_DWORD)v122;
    BYTE4(v133) = BYTE4(v122);
    sub_6A01B0((__int64)&v127, (__int64)&v130);
    if ( v130 > 1 )
      sub_69F740((__int64)&v130);
LABEL_55:
    v45 = (unsigned int)v135;
    v10 = (int *)&v127;
    v46 = (__int64)v134;
    v47 = (unsigned int)v135 + 1LL;
    if ( HIDWORD(v135) < v47 )
    {
      if ( &v127 >= (unsigned int *)v134 && &v127 < (unsigned int *)&v134[14 * (unsigned int)v135] )
      {
        v105 = v114;
        v113 = 0x6DB6DB6DB6DB6DB7LL * (((char *)&v127 - (char *)v134) >> 3);
      }
      else
      {
        v113 = -1;
        v105 = 0;
      }
      v46 = sub_25D5F70(&v134, v136, v47, 56, &v130);
      v72 = &v134[14 * (unsigned int)v135];
      if ( v134 != v72 )
      {
        v73 = v134;
        v74 = v46;
        do
        {
          v75 = v73;
          v76 = v74;
          v73 += 14;
          v74 += 56;
          sub_69F700(v76, v75);
        }
        while ( v72 != v73 );
        v77 = v134;
        v72 = &v134[14 * (unsigned int)v135];
        if ( v134 != v72 )
        {
          do
          {
            v72 -= 14;
            if ( (unsigned int)*v72 > 1 )
              sub_69F740((__int64)v72);
          }
          while ( v77 != v72 );
          v72 = v134;
        }
      }
      v78 = v130;
      if ( v72 != (int *)v136 )
      {
        v112 = v130;
        free(v72);
        v78 = v112;
      }
      HIDWORD(v135) = v78;
      v10 = (int *)&v127;
      v134 = (int *)v46;
      v45 = (unsigned int)v135;
      if ( v105 )
        v10 = (int *)(v46 + 56 * v113);
    }
    sub_69F700(v46 + 56 * v45, v10);
    LODWORD(v135) = v135 + 1;
    if ( v127 > 1 )
    {
      v12 += 56;
      sub_69F740((__int64)&v127);
      if ( v110 == v12 )
      {
LABEL_58:
        v48 = v134;
        goto LABEL_59;
      }
    }
    else
    {
      v12 += 56;
      if ( v110 == v12 )
        goto LABEL_58;
    }
  }
LABEL_12:
  v16 = sub_A2E130(v13, a2, 3238, 0);
  v17 = (unsigned __int8 **)v16;
  if ( v16 )
  {
    v18 = *(unsigned __int8 **)v16;
    if ( !*(_QWORD *)v16 )
    {
      v88 = *(_QWORD *)(v16 + 8);
      v89 = *(_DWORD *)(v88 + 14976);
      if ( v89 )
      {
        v90 = (unsigned int)(v89 - 1);
        *(_DWORD *)(v88 + 14976) = v90;
        v18 = *(unsigned __int8 **)(v88 + 8 * v90 + 14848);
        v91 = *((unsigned int *)v18 + 134);
        *v18 = 0;
        v92 = *((_QWORD *)v18 + 66);
        *((_DWORD *)v18 + 106) = 0;
        v93 = v92 + (v91 << 6);
        while ( v92 != v93 )
        {
          while ( 1 )
          {
            v93 -= 64;
            v94 = *(void **)(v93 + 24);
            if ( v94 == (void *)(v93 + 40) )
              break;
            operator delete(v94, *(_QWORD *)(v93 + 40) + 1LL);
            if ( v92 == v93 )
              goto LABEL_130;
          }
        }
LABEL_130:
        *((_DWORD *)v18 + 134) = 0;
      }
      else
      {
        v18 = (unsigned __int8 *)operator new(0x3A0u);
        *v18 = 0;
        *((_QWORD *)v18 + 12) = v18 + 112;
        *((_QWORD *)v18 + 16) = v18 + 144;
        *((_QWORD *)v18 + 20) = v18 + 176;
        *((_QWORD *)v18 + 24) = v18 + 208;
        *((_QWORD *)v18 + 28) = v18 + 240;
        *((_QWORD *)v18 + 32) = v18 + 272;
        *((_QWORD *)v18 + 36) = v18 + 304;
        *((_QWORD *)v18 + 40) = v18 + 336;
        *((_QWORD *)v18 + 44) = v18 + 368;
        *((_QWORD *)v18 + 48) = v18 + 400;
        *((_QWORD *)v18 + 13) = 0;
        v18[112] = 0;
        *((_QWORD *)v18 + 17) = 0;
        v18[144] = 0;
        *((_QWORD *)v18 + 21) = 0;
        v18[176] = 0;
        *((_QWORD *)v18 + 25) = 0;
        v18[208] = 0;
        *((_QWORD *)v18 + 29) = 0;
        v18[240] = 0;
        *((_QWORD *)v18 + 33) = 0;
        v18[272] = 0;
        *((_QWORD *)v18 + 37) = 0;
        v18[304] = 0;
        *((_QWORD *)v18 + 41) = 0;
        v18[336] = 0;
        *((_QWORD *)v18 + 45) = 0;
        v18[368] = 0;
        *((_QWORD *)v18 + 49) = 0;
        v18[400] = 0;
        *((_QWORD *)v18 + 52) = v18 + 432;
        *((_QWORD *)v18 + 53) = 0x800000000LL;
        *((_QWORD *)v18 + 66) = v18 + 544;
        *((_QWORD *)v18 + 67) = 0x600000000LL;
      }
      *v17 = v18;
    }
    v18[*v18 + 1] = 8;
    v19 = *v17;
    v20 = **v17;
    *v19 = v20 + 1;
    *(_QWORD *)&v19[8 * v20 + 16] = v9;
    v21 = *v17;
    if ( !*v17 )
    {
      v81 = v17[1];
      v82 = *((_DWORD *)v81 + 3744);
      if ( v82 )
      {
        v83 = (unsigned int)(v82 - 1);
        *((_DWORD *)v81 + 3744) = v83;
        v21 = *(unsigned __int8 **)&v81[8 * v83 + 14848];
        v84 = *((unsigned int *)v21 + 134);
        *v21 = 0;
        v85 = *((_QWORD *)v21 + 66);
        *((_DWORD *)v21 + 106) = 0;
        v86 = v85 + (v84 << 6);
        while ( v85 != v86 )
        {
          while ( 1 )
          {
            v86 -= 64;
            v87 = *(void **)(v86 + 24);
            if ( v87 == (void *)(v86 + 40) )
              break;
            operator delete(v87, *(_QWORD *)(v86 + 40) + 1LL);
            if ( v85 == v86 )
              goto LABEL_123;
          }
        }
LABEL_123:
        *((_DWORD *)v21 + 134) = 0;
      }
      else
      {
        v21 = (unsigned __int8 *)operator new(0x3A0u);
        *v21 = 0;
        *((_QWORD *)v21 + 12) = v21 + 112;
        *((_QWORD *)v21 + 16) = v21 + 144;
        *((_QWORD *)v21 + 20) = v21 + 176;
        *((_QWORD *)v21 + 24) = v21 + 208;
        *((_QWORD *)v21 + 28) = v21 + 240;
        *((_QWORD *)v21 + 32) = v21 + 272;
        *((_QWORD *)v21 + 36) = v21 + 304;
        *((_QWORD *)v21 + 40) = v21 + 336;
        *((_QWORD *)v21 + 44) = v21 + 368;
        *((_QWORD *)v21 + 48) = v21 + 400;
        *((_QWORD *)v21 + 13) = 0;
        v21[112] = 0;
        *((_QWORD *)v21 + 17) = 0;
        v21[144] = 0;
        *((_QWORD *)v21 + 21) = 0;
        v21[176] = 0;
        *((_QWORD *)v21 + 25) = 0;
        v21[208] = 0;
        *((_QWORD *)v21 + 29) = 0;
        v21[240] = 0;
        *((_QWORD *)v21 + 33) = 0;
        v21[272] = 0;
        *((_QWORD *)v21 + 37) = 0;
        v21[304] = 0;
        *((_QWORD *)v21 + 41) = 0;
        v21[336] = 0;
        *((_QWORD *)v21 + 45) = 0;
        v21[368] = 0;
        *((_QWORD *)v21 + 49) = 0;
        v21[400] = 0;
        *((_QWORD *)v21 + 52) = v21 + 432;
        *((_QWORD *)v21 + 53) = 0x800000000LL;
        *((_QWORD *)v21 + 66) = v21 + 544;
        *((_QWORD *)v21 + 67) = 0x600000000LL;
      }
      *v17 = v21;
    }
    v21[*v21 + 1] = 8;
    v22 = *v17;
    v23 = **v17;
    *v22 = v23 + 1;
    *(_QWORD *)&v22[8 * v23 + 16] = v111;
  }
LABEL_16:
  if ( v127 > 1 )
    sub_69F740((__int64)&v127);
  v114 = 0;
LABEL_19:
  v24 = v134;
  v25 = &v134[14 * (unsigned int)v135];
  if ( v134 != v25 )
  {
    do
    {
      v25 -= 14;
      if ( (unsigned int)*v25 > 1 )
        sub_69F740((__int64)v25);
    }
    while ( v24 != v25 );
    v25 = v134;
  }
  if ( v25 != (int *)v136 )
    free(v25);
LABEL_26:
  if ( v123 > 1 )
    sub_69F740((__int64)&v123);
  return v114;
}

