__int64 __fastcall sub_802BE0(__int64 a1, __int64 a2, double a3)
{
  unsigned int *v3; // r9
  __int64 v4; // rbp
  char *v5; // r15
  int v6; // ecx
  unsigned int v7; // edi
  char *v8; // rdx
  char *v9; // rax
  void *v10; // rdi
  unsigned int *v11; // r9
  unsigned int v12; // edx
  __int64 v13; // rsi
  _QWORD *v14; // r15
  int v15; // ecx
  unsigned int v16; // edi
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  char *v19; // r12
  unsigned int *v20; // r13
  char *v21; // r14
  void *v22; // rbp
  _QWORD *v23; // rsi
  unsigned int v24; // edi
  __int64 v25; // rax
  int *v26; // rdi
  __int64 *v27; // rsi
  __int64 v28; // r9
  unsigned int *v29; // r15
  __int64 v30; // rdx
  int *v31; // r12
  int *v32; // r13
  __int64 v33; // rax
  int *v34; // rbp
  int *v35; // r12
  void *v36; // r14
  unsigned int *v37; // r15
  __int64 v38; // rdx
  int *v39; // r12
  int *v40; // r13
  __int64 v41; // rax
  int *v42; // rbp
  int *v43; // r12
  void *v44; // r14
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  unsigned int v49; // ebx
  char *v51; // r12
  unsigned int *v52; // r13
  void *v53; // rbp
  char *v54; // rsi
  unsigned int v55; // edi
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 *v60; // r12
  int v61; // r13d
  __int64 v62; // r15
  unsigned int *v63; // rax
  unsigned int v64; // eax
  __int64 v65; // rbx
  __int64 v66; // rax
  char v67; // al
  __int64 v68; // rbx
  __int64 v69; // rax
  int *v70; // rax
  int v71; // r8d
  char v72; // cl
  unsigned __int64 v73; // r13
  unsigned __int64 v74; // rcx
  char v75; // al
  char v76; // dl
  int v77; // eax
  __int64 *v78; // r13
  __int64 v79; // rbx
  __int64 v80; // rax
  char v81; // al
  char v82; // r8
  int *v83; // r15
  __int64 v84; // rbx
  __int64 v85; // rax
  unsigned int *v86; // [rsp+8h] [rbp-D0h]
  void *v87; // [rsp+8h] [rbp-D0h]
  unsigned int *v88; // [rsp+8h] [rbp-D0h]
  unsigned int *v89; // [rsp+8h] [rbp-D0h]
  unsigned int *v90; // [rsp+8h] [rbp-D0h]
  unsigned int *v91; // [rsp+8h] [rbp-D0h]
  _QWORD *v92; // [rsp+8h] [rbp-D0h]
  unsigned int *v94; // [rsp+8h] [rbp-D0h]
  char v95; // [rsp+8h] [rbp-D0h]
  _QWORD *v96; // [rsp+8h] [rbp-D0h]
  char v97; // [rsp+8h] [rbp-D0h]
  _QWORD *v98; // [rsp+8h] [rbp-D0h]
  void *v99; // [rsp+8h] [rbp-D0h]
  unsigned int *v100; // [rsp+10h] [rbp-C8h]
  _QWORD *v101; // [rsp+10h] [rbp-C8h]
  int v102[2]; // [rsp+18h] [rbp-C0h]
  int v103[2]; // [rsp+18h] [rbp-C0h]
  int v104[2]; // [rsp+18h] [rbp-C0h]
  int v105; // [rsp+24h] [rbp-B4h]
  int v106; // [rsp+24h] [rbp-B4h]
  int v107[2]; // [rsp+28h] [rbp-B0h]
  __int64 *v108; // [rsp+28h] [rbp-B0h]
  int v109[2]; // [rsp+28h] [rbp-B0h]
  unsigned int *v110; // [rsp+28h] [rbp-B0h]
  int v111[2]; // [rsp+30h] [rbp-A8h]
  __int64 v112; // [rsp+30h] [rbp-A8h]
  int v113[2]; // [rsp+30h] [rbp-A8h]
  char v114; // [rsp+30h] [rbp-A8h]
  char v115; // [rsp+30h] [rbp-A8h]
  char v116; // [rsp+38h] [rbp-A0h]
  __int64 *v117; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v118; // [rsp+38h] [rbp-A0h]
  char v119; // [rsp+38h] [rbp-A0h]
  __int64 v120; // [rsp+38h] [rbp-A0h]
  __int64 v121; // [rsp+38h] [rbp-A0h]
  void *v122; // [rsp+40h] [rbp-98h]
  void *v123; // [rsp+40h] [rbp-98h]
  void *v124; // [rsp+40h] [rbp-98h]
  void *v125; // [rsp+40h] [rbp-98h]
  __int64 v126; // [rsp+48h] [rbp-90h]
  int v127[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v128; // [rsp+58h] [rbp-80h]
  __int64 v129; // [rsp+60h] [rbp-78h]
  __int64 v130; // [rsp+68h] [rbp-70h]
  int v131[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v132; // [rsp+78h] [rbp-60h]
  __int64 v133; // [rsp+80h] [rbp-58h] BYREF
  __int64 v134; // [rsp+88h] [rbp-50h]

  v3 = (unsigned int *)a1;
  v4 = a2;
  if ( *(_DWORD *)(a1 + 60) || *(_DWORD *)(a1 + 64) )
  {
    v5 = *(char **)(a1 + 48);
    v6 = 0;
    v7 = *(_DWORD *)(a1 + 56);
    v8 = &v5[40 * v7];
    v9 = *((char **)v3 + 6);
    if ( v5 != v8 )
    {
      do
      {
        while ( *(_QWORD *)v9 )
        {
          *(_QWORD *)v9 = 0;
          v9 += 40;
          if ( v8 == v9 )
            goto LABEL_8;
        }
        v9 += 40;
        ++v6;
      }
      while ( v8 != v9 );
LABEL_8:
      if ( v7 > 0x10 && 3 * v7 < 4 * v6 )
      {
        if ( v5 )
        {
          v51 = v5;
          v52 = v3;
          do
          {
            v53 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v51 + 8);
            v54 = v51 + 24;
            v51 += 40;
            sub_182CBA0(v53, v54);
          }
          while ( v51 != &v5[40 * v7] );
          v4 = a2;
          sub_186B220(v5);
          v3 = v52;
          v7 = v52[14];
        }
        v55 = v7 >> 1;
        *((_QWORD *)v3 + 6) = 0;
        v3[14] = v55;
        v94 = v3;
        v56 = sub_7FF080(v55);
        v3 = v94;
        *((_QWORD *)v94 + 6) = v56;
      }
    }
    *(_QWORD *)(v3 + 15) = 0;
  }
  *((_BYTE *)v3 + 76) &= ~1u;
  v10 = qword_1C7F2C0;
  v3[18] = 0;
  v86 = v3;
  sub_182CBA0(v10, v3 + 22);
  v11 = v86;
  v12 = v86[29];
  *((_BYTE *)v86 + 92) &= ~1u;
  v86[22] = 1;
  if ( v12 || v86[30] )
  {
    v13 = v86[28];
    v14 = *((_QWORD **)v86 + 13);
    v15 = 0;
    v16 = v86[28];
    v17 = &v14[5 * v13];
    v18 = v14;
    if ( v14 != v17 )
    {
      do
      {
        while ( *v18 )
        {
          *v18 = 0;
          v18 += 5;
          if ( v17 == v18 )
            goto LABEL_17;
        }
        v18 += 5;
        ++v15;
      }
      while ( v17 != v18 );
LABEL_17:
      if ( v16 > 0x10 && 3 * v16 < 4 * v15 )
      {
        if ( v14 )
        {
          v87 = (void *)v4;
          v19 = (char *)v14;
          v20 = v11;
          v21 = (char *)&v14[5 * v13];
          do
          {
            v22 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v19 + 8);
            v23 = v19 + 24;
            v19 += 40;
            sub_182CBA0(v22, v23);
          }
          while ( v19 != v21 );
          v4 = (__int64)v87;
          sub_186B220(v14);
          v11 = v20;
          v16 = v20[28];
        }
        v24 = v16 >> 1;
        *((_QWORD *)v11 + 13) = 0;
        v11[28] = v24;
        v88 = v11;
        v25 = sub_7FF080(v24);
        v11 = v88;
        *((_QWORD *)v88 + 13) = v25;
      }
    }
    *(_QWORD *)(v11 + 29) = 0;
  }
  v26 = (int *)qword_1C7F2C0;
  *((_BYTE *)v11 + 132) &= ~1u;
  v27 = (__int64 *)(v11 + 36);
  v11[32] = 0;
  v89 = v11;
  sub_182CBA0(v26, v11 + 36);
  v28 = (__int64)v89;
  v29 = *((unsigned int **)v89 + 20);
  *((_BYTE *)v89 + 148) &= ~1u;
  v89[36] = 1;
  if ( v29 )
  {
    v30 = *(v29 - 1);
    if ( (_DWORD)v30 )
    {
      v100 = v89;
      *(_QWORD *)v102 = v4;
      v90 = &v29[14 * v30];
      do
      {
        v31 = (int *)qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v29 + 6);
        v27 = (__int64 *)(v29 + 10);
        v26 = v31;
        sub_182CBA0(v31, v29 + 10);
        v32 = *(int **)v29;
        if ( *(_QWORD *)v29 )
        {
          v33 = v29[2];
          if ( (_DWORD)v33 )
          {
            v34 = *(int **)v29;
            v35 = &v32[10 * v33];
            do
            {
              v36 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v34 + 2);
              v27 = (__int64 *)(v34 + 6);
              v34 += 10;
              sub_182CBA0(v36, v27);
            }
            while ( v35 != v34 );
          }
          v26 = v32;
          sub_186B220(v32);
        }
        v29 += 14;
      }
      while ( v29 != v90 );
      v28 = (__int64)v100;
      v4 = *(_QWORD *)v102;
      v29 = *((unsigned int **)v100 + 20);
    }
    *(v29 - 1) = 0;
  }
  v37 = *(unsigned int **)(v28 + 168);
  if ( v37 )
  {
    v38 = *(v37 - 1);
    if ( (_DWORD)v38 )
    {
      v101 = (_QWORD *)v28;
      *(_QWORD *)v103 = v4;
      v91 = &v37[14 * v38];
      do
      {
        v39 = (int *)qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v37 + 6);
        v27 = (__int64 *)(v37 + 10);
        v26 = v39;
        sub_182CBA0(v39, v37 + 10);
        v40 = *(int **)v37;
        if ( *(_QWORD *)v37 )
        {
          v41 = v37[2];
          if ( (_DWORD)v41 )
          {
            v42 = *(int **)v37;
            v43 = &v40[10 * v41];
            do
            {
              v44 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v42 + 2);
              v27 = (__int64 *)(v42 + 6);
              v42 += 10;
              sub_182CBA0(v44, v27);
            }
            while ( v42 != v43 );
          }
          v26 = v40;
          sub_186B220(v40);
        }
        v37 += 14;
      }
      while ( v91 != v37 );
      v28 = (__int64)v101;
      v4 = *(_QWORD *)v103;
      v37 = (unsigned int *)v101[21];
    }
    *(v37 - 1) = 0;
  }
  v45 = *(_QWORD *)(v4 + 16);
  *(_BYTE *)(v28 + 40) = 0;
  v46 = *(_QWORD *)(v45 + 16);
  if ( v46 == *(_QWORD *)(v28 + 200) )
    return 0;
  if ( *(_QWORD *)(v28 + 192) == v46 )
  {
    v105 = 3;
  }
  else if ( *(_QWORD *)(v28 + 184) == v46 )
  {
    v105 = 2;
  }
  else
  {
    if ( *(_QWORD *)(v28 + 176) != v46 )
    {
      v92 = (_QWORD *)v28;
      sub_180B130(v26);
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v47 = sub_180B150(v26, v27);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v131, v4, v92[1], 0, 0, 0);
        v48 = sub_160E8B0(v47, v131);
        sub_7F5300(v48, "\n");
        sub_18572D0(&v133);
        sub_186A500(&v133, "\n");
      }
      else
      {
        v57 = sub_180B150(v26, v27);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v131, v4, v92[1], 0, 0, 0);
        v58 = sub_160E8B0(v57, v131);
        sub_7F5300(v58, "\n");
        sub_18572D0(&v133);
      }
      return 0;
    }
    v105 = 1;
  }
  *(_QWORD *)v127 = 0;
  v59 = *(unsigned int *)(v4 + 24);
  v60 = (__int64 *)(v4 + 32);
  v128 = 0;
  v129 = 1;
  v59 *= 8;
  v130 = 0;
  *(_QWORD *)v104 = v4 + 32 + v59;
  if ( !v59 )
  {
    if ( v105 == 2 )
      goto LABEL_139;
    if ( v105 != 3 )
    {
LABEL_85:
      v49 = sub_7FF6B0(v28, a3);
      goto LABEL_80;
    }
LABEL_104:
    v49 = sub_7FF800(v28);
    goto LABEL_80;
  }
  if ( v105 == 3 )
  {
    v106 = 1;
    v97 = 1;
    while ( 1 )
    {
      v62 = *v60;
      if ( !v97 )
        break;
      v26 = (int *)(v28 + 16);
      v27 = (__int64 *)*v60;
      *(_QWORD *)v113 = v28;
      v75 = sub_1666AE0(v28 + 16, *v60, v127, v131);
      v28 = *(_QWORD *)v113;
      if ( !v75 )
      {
LABEL_136:
        v98 = (_QWORD *)v28;
        sub_180B130(v26);
        if ( !(unsigned __int8)sub_186A530(a3) )
        {
          v84 = sub_180B150(v26, v27);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(v131, v4, v98[1], 0, 0, 0);
          v85 = sub_160E8B0(v84, v131);
          sub_7F5300(v85, "\n");
          goto LABEL_87;
        }
        sub_186A4C0(a3);
        v79 = sub_180B150(v26, v27);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v131, v4, v98[1], 0, 0, 0);
        v80 = sub_160E8B0(v79, v131);
        sub_7F5300(v80, "\n");
        goto LABEL_78;
      }
LABEL_103:
      v97 ^= 1u;
      ++v60;
      ++v106;
      if ( *(__int64 **)v104 == v60 )
        goto LABEL_104;
    }
    if ( *(_WORD *)(v62 + 4) || (v70 = *(int **)(*(_QWORD *)(v62 + 16) + 24LL)) == nullptr )
    {
LABEL_76:
      v96 = (_QWORD *)v28;
      sub_180B130(v26);
      if ( (unsigned __int8)sub_186A530(a3) )
        goto LABEL_77;
LABEL_86:
      v68 = sub_180B150(v26, v27);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v131, v62, v96[1], 0, 0, 0);
      v69 = sub_160E8B0(v68, v131);
      sub_7F5300(v69, "\n");
LABEL_87:
      sub_18572D0(&v133);
LABEL_79:
      v49 = 0;
      goto LABEL_80;
    }
    v71 = *v70;
    v72 = 0;
    if ( *v70 )
    {
      LOBYTE(v71) = 0;
    }
    else
    {
      if ( v70[1] != 8 || *(_DWORD *)(v62 + 24) != 1 )
        goto LABEL_96;
      v62 = *(_QWORD *)(v62 + 32);
      if ( *(_WORD *)(v62 + 4) )
        goto LABEL_76;
      v70 = *(int **)(*(_QWORD *)(v62 + 16) + 24LL);
      if ( !v70 )
        goto LABEL_76;
      LOBYTE(v71) = 1;
      v72 = 1;
    }
    if ( *v70 == 5 )
    {
      v77 = v70[1];
      if ( v77 != 2 && v77 != 4 && v77 != 3 && v77 != 5 )
        goto LABEL_76;
      if ( *(_DWORD *)(v4 + 24) == v106 )
      {
        v121 = v28;
        LOBYTE(v131[1]) &= 0xFCu;
        BYTE4(v133) &= 0xFCu;
        v115 = v71;
        v131[0] = 0;
        v132 = 0;
        LODWORD(v133) = 1;
        v134 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v131, v127);
        sub_1831690(qword_1C7F2C0, v131);
        sub_8028E0(v121, (__int64 *)(v121 + 104), v131, v62, v115);
        v83 = (int *)qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v131);
        v27 = &v133;
        v26 = v83;
        sub_182CBA0(v83, &v133);
        v28 = v121;
        goto LABEL_103;
      }
      v119 = v71;
      v78 = (__int64 *)(v28 + 48);
      v112 = v28;
      sub_3EC020((__int64)v131, (__int64)v127);
      v27 = v78;
      sub_8028E0(v112, v78, v131, v62, v119);
      goto LABEL_101;
    }
    if ( *v70 )
      goto LABEL_76;
LABEL_96:
    if ( v70[1] != 2 || *(_DWORD *)(v62 + 24) != 2 )
      goto LABEL_76;
    v73 = *(_QWORD *)(v62 + 32);
    *(_QWORD *)v111 = *(_QWORD *)(v62 + 40);
    if ( *(_DWORD *)(v4 + 24) == v106 )
    {
      v120 = v28;
      LOBYTE(v131[1]) &= 0xFCu;
      BYTE4(v133) &= 0xFCu;
      v114 = v71;
      v131[0] = 0;
      v132 = 0;
      LODWORD(v133) = 1;
      v134 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v131, v127);
      sub_1831690(qword_1C7F2C0, v131);
      v82 = v114;
      v27 = (__int64 *)(v120 + 104);
      v112 = v120;
      sub_8028E0(v120, (__int64 *)(v120 + 104), v131, v62, v82);
    }
    else
    {
      if ( v72 )
      {
LABEL_140:
        v96 = (_QWORD *)v28;
        sub_180B130(v26);
        if ( !(unsigned __int8)sub_186A530(a3) )
          goto LABEL_86;
LABEL_77:
        sub_186A4C0(a3);
        v65 = sub_180B150(v26, v27);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v131, v62, v96[1], 0, 0, 0);
        v66 = sub_160E8B0(v65, v131);
        sub_7F5300(v66, "\n");
LABEL_78:
        sub_18572D0(&v133);
        sub_186A500(&v133, "\n");
        goto LABEL_79;
      }
      v122 = (void *)v28;
      v117 = (__int64 *)sub_7FE5F0((unsigned int **)(v28 + 160));
      *(_QWORD *)v131 = 1;
      v132 = 0;
      v133 = 1;
      v134 = 0;
      sub_182CBA0(qword_1C7F2C0, &v133);
      BYTE4(v133) &= ~1u;
      LODWORD(v133) = 1;
      sub_801BE0((__int64)v122, v117, v131, v73);
      sub_25A130((char *)v131);
      *(_QWORD *)v131 = 0xFFFFFFFFLL;
      v132 = 0;
      v133 = 1;
      v134 = 0;
      sub_182CBA0(qword_1C7F2C0, &v133);
      v74 = *(_QWORD *)v111;
      v27 = v117;
      BYTE4(v133) &= ~1u;
      v112 = (__int64)v122;
      LODWORD(v133) = 1;
      sub_801BE0((__int64)v122, v117, v131, v74);
    }
LABEL_101:
    v26 = v131;
    sub_25A130((char *)v131);
    v28 = v112;
    goto LABEL_103;
  }
  v95 = 1;
  v61 = 1;
  while ( 1 )
  {
    v62 = *v60;
    if ( v95 )
    {
      v26 = (int *)(v28 + 16);
      v27 = (__int64 *)*v60;
      *(_QWORD *)v107 = v28;
      v67 = sub_1666AE0(v28 + 16, *v60, v127, v131);
      v28 = *(_QWORD *)v107;
      if ( !v67 )
        goto LABEL_136;
      goto LABEL_83;
    }
    if ( *(_WORD *)(v62 + 4) )
      goto LABEL_76;
    v63 = *(unsigned int **)(*(_QWORD *)(v62 + 16) + 24LL);
    if ( !v63 )
      goto LABEL_76;
    v27 = (__int64 *)*v63;
    if ( (_DWORD)v27 )
    {
      if ( (_DWORD)v27 != 5 )
        goto LABEL_76;
      v116 = 0;
      goto LABEL_72;
    }
    v76 = 0;
    if ( v63[1] == 8 && *(_DWORD *)(v62 + 24) == 1 )
    {
      v62 = *(_QWORD *)(v62 + 32);
      if ( *(_WORD *)(v62 + 4) )
        goto LABEL_76;
      v63 = *(unsigned int **)(*(_QWORD *)(v62 + 16) + 24LL);
      if ( !v63 )
        goto LABEL_76;
      if ( *v63 == 5 )
      {
        v116 = 1;
LABEL_72:
        v64 = v63[1];
        if ( v64 != 2 && v64 != 4 && v64 != 3 && v64 != 5 )
          goto LABEL_76;
        v110 = (unsigned int *)(v28 + 48);
        if ( v105 == 2 )
        {
          v125 = (void *)v28;
          v110 = sub_7FE5F0((unsigned int **)(v28 + 168));
          v28 = (__int64)v125;
        }
        v124 = (void *)v28;
        sub_3EC020((__int64)v131, (__int64)v127);
        v27 = (__int64 *)v110;
        *(_QWORD *)v109 = v124;
        sub_8028E0((__int64)v124, v27, v131, v62, v116);
        goto LABEL_114;
      }
      if ( *v63 )
        goto LABEL_76;
      v76 = 1;
      v27 = (_QWORD *)(&dword_0 + 1);
    }
    if ( v63[1] != 2 || *(_DWORD *)(v62 + 24) != 2 )
      goto LABEL_76;
    v123 = *(void **)(v62 + 32);
    v118 = *(_QWORD *)(v62 + 40);
    if ( v105 == 2 && v61 == *(_DWORD *)(v4 + 24) )
      break;
    if ( v76 )
      goto LABEL_140;
    v126 = v28;
    v108 = (__int64 *)sub_7FE5F0((unsigned int **)(v28 + 160));
    *(_QWORD *)v131 = 1;
    v132 = 0;
    v133 = 1;
    v134 = 0;
    sub_182CBA0(qword_1C7F2C0, &v133);
    LODWORD(v133) = 1;
    BYTE4(v133) &= ~1u;
    sub_801BE0(v126, v108, v131, (unsigned __int64)v123);
    sub_25A130((char *)v131);
    *(_QWORD *)v131 = 0xFFFFFFFFLL;
    v132 = 0;
    v133 = 1;
    v134 = 0;
    sub_182CBA0(qword_1C7F2C0, &v133);
    v27 = v108;
    LODWORD(v133) = 1;
    BYTE4(v133) &= ~1u;
    *(_QWORD *)v109 = v126;
    sub_801BE0(v126, v27, v131, v118);
LABEL_114:
    v26 = v131;
    sub_25A130((char *)v131);
    v28 = *(_QWORD *)v109;
LABEL_83:
    v95 ^= 1u;
    ++v60;
    ++v61;
    if ( *(__int64 **)v104 == v60 )
    {
      if ( v105 == 2 )
        goto LABEL_139;
      goto LABEL_85;
    }
  }
  v99 = (void *)v28;
  v81 = sub_802750(v28, (char)v27, v4);
  v28 = (__int64)v99;
  if ( !v81 )
    goto LABEL_79;
LABEL_139:
  v49 = sub_800520(v28);
LABEL_80:
  sub_25A130((char *)v127);
  return v49;
}

