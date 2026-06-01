__int64 __fastcall sub_812250(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  unsigned int v5; // r13d
  void *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbp
  _DWORD *v11; // r8
  int v12; // ecx
  void *v14; // rbp
  unsigned int v15; // ebp
  int v16; // r12d
  int v17; // eax
  __int64 v18; // rsi
  int v19; // edx
  int v20; // ebp
  int v21; // r12d
  int v22; // eax
  __int64 v23; // rbp
  int v24; // r12d
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r8
  int v28; // eax
  void *v29; // rdi
  int v30; // eax
  bool v31; // al
  int v32; // eax
  bool v33; // al
  void *v34; // r12
  __int64 v35; // rax
  unsigned int v36; // r14d
  signed int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  void *v41; // r12
  bool v42; // al
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 *v45; // rax
  __int64 v46; // r8
  int v47; // r9d
  void *v48; // rbp
  void *v49; // rbp
  int v50; // edx
  unsigned int v51; // ebp
  unsigned int v52; // r13d
  unsigned int v53; // eax
  int v54; // ebx
  int v55; // eax
  __int64 v56; // rcx
  int v57; // edx
  __int64 v58; // rbx
  int v59; // r12d
  __int64 v60; // rdx
  __int64 v61; // r14
  __int64 v62; // r13
  __int64 v63; // rbp
  int v64; // eax
  void *v65; // rdi
  bool v66; // al
  bool v67; // al
  int v68; // eax
  __int64 v69; // rax
  char v70; // dl
  char v71; // cl
  __int64 v72; // rax
  char v73; // dl
  char v74; // cl
  void *v75; // rbx
  void *v76; // rbx
  void *v77; // rbx
  void *v78; // rbx
  int v80; // eax
  void *v81; // rdi
  bool v82; // al
  bool v83; // al
  int v84; // eax
  __int64 v85; // rax
  char v86; // dl
  char v87; // cl
  __int64 v88; // rax
  char v89; // dl
  char v90; // cl
  int v91; // eax
  void *v92; // r13
  bool v93; // al
  bool v94; // al
  __int64 v95; // rax
  __int64 v96; // r8
  __int64 v97; // r14
  __int64 v98; // rdx
  _DWORD *v99; // rbx
  __int64 v100; // rax
  _DWORD *v101; // rbp
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rax
  int v105; // edx
  int v106; // ecx
  __int64 v107; // rcx
  __int64 v108; // rdx
  char v109; // si
  char v110; // si
  __int64 v111; // rcx
  __int64 v112; // rdx
  char v113; // si
  char v114; // si
  char *v115; // r12
  char *v116; // rbx
  void *v117; // rbp
  _DWORD *v118; // rsi
  void *v119; // [rsp+18h] [rbp-100h]
  __int64 v120; // [rsp+18h] [rbp-100h]
  __int64 v121; // [rsp+30h] [rbp-E8h]
  _DWORD *v122; // [rsp+30h] [rbp-E8h]
  __int64 v123; // [rsp+38h] [rbp-E0h]
  _QWORD v124[2]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v125[2]; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD v126[2]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v127[2]; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD v128[2]; // [rsp+80h] [rbp-98h] BYREF
  _QWORD v129[2]; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v130; // [rsp+A0h] [rbp-78h]
  __int64 v131; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v132; // [rsp+B8h] [rbp-60h]
  __int64 v133; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v134; // [rsp+C8h] [rbp-50h]
  unsigned int v135; // [rsp+D0h] [rbp-48h]
  __int64 v136; // [rsp+D4h] [rbp-44h]
  int v137; // [rsp+DCh] [rbp-3Ch]

  v124[0] = 0;
  v124[1] = 0;
  v125[0] = 1;
  v125[1] = 0;
  v126[0] = 0;
  v126[1] = 0;
  v127[0] = 1;
  v127[1] = 0;
  if ( !(unsigned __int8)sub_811B30(a1, a2, (__int64)v124) )
  {
    sub_1872CE0("");
    sub_1873130(114, 72);
  }
  v121 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8LL * a2);
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v128[0] = 0;
  v128[1] = 0;
  v129[0] = 1;
  v6 = qword_1C7F2C0;
  v129[1] = 0;
  if ( (v124[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v128, v124);
  else
    LODWORD(v128[0]) = v124[0];
  if ( (v125[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v6, v129, v125);
  }
  else
  {
    BYTE4(v129[0]) &= ~1u;
    LODWORD(v129[0]) = v125[0];
  }
  v7 = *(_QWORD *)(a1 + 80);
  v130 = v5;
  if ( (unsigned __int8)sub_7CC980(v7, v121) )
  {
    v8 = *(_QWORD *)(a1 + 72);
    v9 = sub_1674520(a1 + 128, v124, v5);
    v10 = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    v11 = *(_DWORD **)(*(_QWORD *)(a1 + 600) + 8LL * a2);
    if ( v11 )
      v12 = *(v11 - 1);
    else
      v12 = 0;
    sub_7CC9E0(*(_QWORD *)(a1 + 80), v121, v9, v12, v11);
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 8))-- == 1 )
        sub_15D7BC0(v8, v10);
    }
  }
  v131 = 0;
  v132 = 0;
  v133 = 1;
  v14 = qword_1C7F2C0;
  v134 = 0;
  v136 = 0;
  v137 = 0;
  if ( (v128[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v131, v128);
    if ( (v129[0] & 0x100000000LL) == 0 )
      goto LABEL_18;
LABEL_116:
    sub_182C690(v14, &v133, v129);
    goto LABEL_19;
  }
  LODWORD(v131) = v128[0];
  if ( (v129[0] & 0x100000000LL) != 0 )
    goto LABEL_116;
LABEL_18:
  BYTE4(v133) &= ~1u;
  LODWORD(v133) = v129[0];
LABEL_19:
  v15 = v130;
  v135 = v130;
  v16 = sub_182DB30(&v131);
  v17 = sub_182DB30(&v133);
  v18 = *(unsigned int *)(a1 + 648);
  v19 = v16 + 3 * v17;
  v20 = (v19 << 8) ^ (v15 - v19);
  v21 = (v19 - v20) << 10;
  v22 = v20 - v19 + (v20 ^ ((v19 - v20) << 16));
  v23 = *(_QWORD *)(a1 + 640);
  v24 = v22 ^ v21;
  v25 = 56LL * (v24 & (unsigned int)(v18 - 1));
  v26 = v23 + v25;
  v27 = v23 + 56 * v18;
  if ( v25 == 56 * v18 )
  {
LABEL_52:
    while ( v26 != v23 )
    {
      v80 = *(_DWORD *)(v23 + 4);
      if ( v80 == 2 )
      {
        if ( *(_DWORD *)v23 == v24 )
        {
          v81 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v23 + 12) & 1) != 0 || (v131 & 0x100000000LL) != 0 )
          {
            v81 = qword_1C7F2C0;
            v82 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v23 + 8, &v131) == 0;
          }
          else
          {
            v82 = *(_DWORD *)(v23 + 8) == (_DWORD)v131;
          }
          if ( v82 )
          {
            v83 = (*(_BYTE *)(v23 + 28) & 1) != 0 || (v133 & 0x100000000LL) != 0
                ? (unsigned int)sub_182C7B0(v81, v23 + 24, &v133) == 0
                : *(_DWORD *)(v23 + 24) == (_DWORD)v133;
            if ( v83 && *(_DWORD *)(v23 + 40) == v135 )
              goto LABEL_34;
          }
        }
      }
      else if ( !v80 )
      {
        break;
      }
      v23 += 56;
    }
LABEL_53:
    v48 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v131);
    sub_182CBA0(v48, &v133);
    goto LABEL_54;
  }
  v23 += v25;
  while ( 1 )
  {
    v28 = *(_DWORD *)(v23 + 4);
    if ( v28 != 2 )
    {
      if ( !v28 )
        goto LABEL_53;
      goto LABEL_22;
    }
    if ( *(_DWORD *)v23 == v24 )
    {
      v29 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v23 + 12) & 1) != 0 || (v131 & 0x100000000LL) != 0 )
      {
        v123 = v27;
        v119 = qword_1C7F2C0;
        v30 = sub_182C7B0(qword_1C7F2C0, v23 + 8, &v131);
        v29 = v119;
        v27 = v123;
        v31 = v30 == 0;
      }
      else
      {
        v31 = *(_DWORD *)(v23 + 8) == (_DWORD)v131;
      }
      if ( v31 )
      {
        if ( (*(_BYTE *)(v23 + 28) & 1) != 0 || (v133 & 0x100000000LL) != 0 )
        {
          v120 = v27;
          v32 = sub_182C7B0(v29, v23 + 24, &v133);
          v27 = v120;
          v33 = v32 == 0;
        }
        else
        {
          v33 = *(_DWORD *)(v23 + 24) == (_DWORD)v133;
        }
        if ( v33 && *(_DWORD *)(v23 + 40) == v135 )
          break;
      }
    }
LABEL_22:
    v23 += 56;
    if ( v27 == v23 )
    {
      v23 = *(_QWORD *)(a1 + 640);
      goto LABEL_52;
    }
  }
LABEL_34:
  v34 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v131);
  sub_182CBA0(v34, &v133);
  v35 = *(_QWORD *)(a1 + 88);
  v36 = *(_DWORD *)(v23 + 48);
  if ( v35 )
    v37 = *(_DWORD *)(v35 - 4);
  else
    v37 = 0;
  if ( (int)v36 < v37 )
  {
    v38 = sub_15D1F10(**(_QWORD **)(v35 + 8LL * v36));
    if ( (unsigned __int8)sub_1673B10(a1 + 128, v38) )
    {
      v39 = *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8LL * v36);
      v40 = v39 ? *(_DWORD *)(v39 - 4) : 0;
      if ( v5 == v40 && (unsigned __int8)sub_811B30(a1, v36, (__int64)v126) )
      {
        v41 = qword_1C7F2C0;
        if ( (v124[0] & 0x100000000LL) != 0 || (v126[0] & 0x100000000LL) != 0 )
        {
          if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v124, v126) )
            goto LABEL_45;
        }
        else
        {
          if ( LODWORD(v124[0]) != LODWORD(v126[0]) )
            goto LABEL_54;
LABEL_45:
          if ( (v125[0] & 0x100000000LL) != 0 || (v127[0] & 0x100000000LL) != 0 )
            v42 = (unsigned int)sub_182C7B0(v41, v125, v127) == 0;
          else
            v42 = LODWORD(v125[0]) == LODWORD(v127[0]);
          if ( v42 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v36) + 64LL) != *(_QWORD *)(v121 + 64) )
            {
              ++*(_DWORD *)(a1 + 180);
              sub_8799B0(a1 + 200, a2, v36);
              v43 = *(_QWORD *)(a1 + 80);
              v44 = sub_7E4EC0(a1);
              v45 = (__int64 *)sub_180C100(v44, 56);
              *v45 = a1;
              v45[1] = 0xFFFFFFFF00000002LL;
              v45[2] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(v36)).m128i_u64[0];
              v45[3] = 0xFFFFFFFEFFFFFFFELL;
              sub_7CA650(v43, v121, *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v36), (__int64)v45, v46, v47);
            }
            goto LABEL_77;
          }
        }
      }
    }
  }
LABEL_54:
  v131 = 0;
  v132 = 0;
  v133 = 1;
  v49 = qword_1C7F2C0;
  v134 = 0;
  if ( (v128[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v131, v128);
  else
    LODWORD(v131) = v128[0];
  if ( (v129[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v49, &v133, v129);
  }
  else
  {
    BYTE4(v133) &= ~1u;
    LODWORD(v133) = v129[0];
  }
  v50 = *(_DWORD *)(a1 + 648);
  v51 = v130;
  HIDWORD(v136) = a2;
  v52 = 2 * v50;
  v53 = 4 * (*(_DWORD *)(a1 + 652) + *(_DWORD *)(a1 + 656));
  v135 = v130;
  if ( 3 * v50 < v53 )
  {
    v95 = sub_186B270(56LL * v52);
    v96 = 56LL * v52;
    v97 = v95;
    if ( v52 )
    {
      v98 = v95 + 56LL * v52;
      do
      {
        *(_OWORD *)(v95 + 24) = 0;
        v95 += 56;
        *(_OWORD *)(v95 - 48) = 0;
        *(_QWORD *)(v95 - 56) = 0;
        *(_BYTE *)(v95 - 44) = 0;
        *(_DWORD *)(v95 - 32) = 1;
        *(_BYTE *)(v95 - 28) = 0;
        *(_DWORD *)(v95 - 16) = 0;
      }
      while ( v95 != v98 );
    }
    v99 = *(_DWORD **)(a1 + 640);
    v100 = *(unsigned int *)(a1 + 648);
    v101 = &v99[14 * v100];
    if ( v99 != v101 )
    {
      do
      {
        while ( v99[1] != 2 )
        {
          v99 += 14;
          if ( v101 == v99 )
            goto LABEL_131;
        }
        v102 = 56LL * (*v99 & (v52 - 1));
        v103 = v97 + v102;
        if ( v96 == v102 )
        {
LABEL_142:
          if ( v97 == v103 )
          {
LABEL_156:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v104 = v97;
          while ( *(_DWORD *)(v104 + 4) )
          {
            v104 += 56;
            if ( v103 == v104 )
              goto LABEL_156;
          }
        }
        else
        {
          v104 = v97 + v102;
          while ( *(_DWORD *)(v104 + 4) )
          {
            v104 += 56;
            if ( v97 + v96 == v104 )
              goto LABEL_142;
          }
        }
        *(_DWORD *)v104 = *v99;
        v105 = *(_DWORD *)(v104 + 8);
        v99 += 14;
        v106 = *(v99 - 12);
        *(_DWORD *)(v104 + 4) = 2;
        *(_DWORD *)(v104 + 8) = v106;
        v107 = *((_QWORD *)v99 - 5);
        *(v99 - 12) = v105;
        v108 = *(_QWORD *)(v104 + 16);
        *(_QWORD *)(v104 + 16) = v107;
        v109 = *((_BYTE *)v99 - 44);
        *((_QWORD *)v99 - 5) = v108;
        LOBYTE(v108) = *(_BYTE *)(v104 + 12);
        *(_BYTE *)(v104 + 12) = v109 & 2 | v108 & 0xFD;
        LOBYTE(v108) = v108 & 2 | *(_BYTE *)(v99 - 11) & 0xFD;
        *((_BYTE *)v99 - 44) = v108;
        v110 = *(_BYTE *)(v104 + 12);
        *(_BYTE *)(v104 + 12) = v108 & 1 | v110 & 0xFE;
        LODWORD(v107) = *(v99 - 8);
        *((_BYTE *)v99 - 44) = v110 & 1 | *(_BYTE *)(v99 - 11) & 0xFE;
        LODWORD(v108) = *(_DWORD *)(v104 + 24);
        *(_DWORD *)(v104 + 24) = v107;
        v111 = *((_QWORD *)v99 - 3);
        *(v99 - 8) = v108;
        v112 = *(_QWORD *)(v104 + 32);
        *(_QWORD *)(v104 + 32) = v111;
        v113 = *((_BYTE *)v99 - 28);
        *((_QWORD *)v99 - 3) = v112;
        LOBYTE(v112) = *(_BYTE *)(v104 + 28);
        *(_BYTE *)(v104 + 28) = v113 & 2 | v112 & 0xFD;
        LOBYTE(v112) = v112 & 2 | *(_BYTE *)(v99 - 7) & 0xFD;
        *((_BYTE *)v99 - 28) = v112;
        v114 = *(_BYTE *)(v104 + 28) & 1;
        *(_BYTE *)(v104 + 28) = v112 & 1 | *(_BYTE *)(v104 + 28) & 0xFE;
        *((_BYTE *)v99 - 28) = v114 | *(_BYTE *)(v99 - 7) & 0xFE;
        *(_DWORD *)(v104 + 40) = *(v99 - 4);
        *(_DWORD *)(v104 + 48) = *(v99 - 2);
      }
      while ( v101 != v99 );
LABEL_131:
      v100 = *(unsigned int *)(a1 + 648);
      v101 = *(_DWORD **)(a1 + 640);
    }
    if ( v101 )
    {
      if ( (_DWORD)v100 )
      {
        v122 = v101;
        v115 = (char *)v101;
        v116 = (char *)&v101[14 * v100];
        do
        {
          v117 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v115 + 8);
          v118 = v115 + 24;
          v115 += 56;
          sub_182CBA0(v117, v118);
        }
        while ( v115 != v116 );
        v101 = v122;
      }
      sub_186B220(v101);
    }
    *(_QWORD *)(a1 + 640) = v97;
    v51 = v135;
    *(_DWORD *)(a1 + 648) = v52;
    *(_DWORD *)(a1 + 656) = 0;
  }
  v54 = sub_182DB30(&v131);
  v55 = sub_182DB30(&v133);
  v56 = *(unsigned int *)(a1 + 648);
  v57 = v54 + 3 * v55;
  v58 = *(_QWORD *)(a1 + 640);
  v59 = (((v57 << 8) ^ (v51 - v57)) - v57 + ((v57 << 8) ^ (v51 - v57) ^ ((v57 - ((v57 << 8) ^ (v51 - v57))) << 16)))
      ^ ((v57 - ((v57 << 8) ^ (v51 - v57))) << 10);
  v60 = 56LL * (v59 & (unsigned int)(v56 - 1));
  v61 = v58 + v60;
  v62 = v58 + 56 * v56;
  if ( v60 != 56 * v56 )
  {
    v58 += v60;
    v63 = 0;
    while ( 1 )
    {
      v64 = *(_DWORD *)(v58 + 4);
      if ( v64 == 2 )
      {
        if ( *(_DWORD *)v58 == v59 )
        {
          v65 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v58 + 12) & 1) != 0 || (v131 & 0x100000000LL) != 0 )
          {
            v65 = qword_1C7F2C0;
            v66 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v58 + 8, &v131) == 0;
          }
          else
          {
            v66 = *(_DWORD *)(v58 + 8) == (_DWORD)v131;
          }
          if ( v66 )
          {
            v67 = (*(_BYTE *)(v58 + 28) & 1) != 0 || (v133 & 0x100000000LL) != 0
                ? (unsigned int)sub_182C7B0(v65, v58 + 24, &v133) == 0
                : *(_DWORD *)(v58 + 24) == (_DWORD)v133;
            if ( v67 && *(_DWORD *)(v58 + 40) == v135 )
              goto LABEL_75;
          }
        }
      }
      else
      {
        if ( !v64 )
          goto LABEL_94;
        v63 = v58;
      }
      v58 += 56;
      if ( v62 == v58 )
      {
        v58 = *(_QWORD *)(a1 + 640);
        goto LABEL_101;
      }
    }
  }
  v63 = 0;
LABEL_101:
  while ( 2 )
  {
    if ( v61 == v58 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v91 = *(_DWORD *)(v58 + 4);
    if ( v91 == 2 )
    {
      if ( *(_DWORD *)v58 == v59 )
      {
        v92 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v58 + 12) & 1) != 0 || (v131 & 0x100000000LL) != 0 )
          v93 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v58 + 8, &v131) == 0;
        else
          v93 = *(_DWORD *)(v58 + 8) == (_DWORD)v131;
        if ( v93 )
        {
          v94 = (*(_BYTE *)(v58 + 28) & 1) != 0 || (v133 & 0x100000000LL) != 0
              ? (unsigned int)sub_182C7B0(v92, v58 + 24, &v133) == 0
              : *(_DWORD *)(v58 + 24) == (_DWORD)v133;
          if ( v94 && *(_DWORD *)(v58 + 40) == v135 )
          {
LABEL_75:
            v68 = *(_DWORD *)(v58 + 8);
            *(_DWORD *)(v58 + 8) = v131;
            LODWORD(v131) = v68;
            v69 = *(_QWORD *)(v58 + 16);
            *(_QWORD *)(v58 + 16) = v132;
            v132 = v69;
            v70 = *(_BYTE *)(v58 + 12);
            *(_BYTE *)(v58 + 12) = BYTE4(v131) & 2 | v70 & 0xFD;
            BYTE4(v131) = v70 & 2 | BYTE4(v131) & 0xFD;
            v71 = *(_BYTE *)(v58 + 12);
            *(_BYTE *)(v58 + 12) = BYTE4(v131) & 1 | v71 & 0xFE;
            BYTE4(v131) = v71 & 1 | BYTE4(v131) & 0xFE;
            LODWORD(v69) = *(_DWORD *)(v58 + 24);
            *(_DWORD *)(v58 + 24) = v133;
            LODWORD(v133) = v69;
            v72 = *(_QWORD *)(v58 + 32);
            *(_QWORD *)(v58 + 32) = v134;
            v134 = v72;
            v73 = *(_BYTE *)(v58 + 28);
            *(_BYTE *)(v58 + 28) = BYTE4(v133) & 2 | v73 & 0xFD;
            BYTE4(v133) = v73 & 2 | BYTE4(v133) & 0xFD;
            v74 = *(_BYTE *)(v58 + 28) & 1;
            *(_BYTE *)(v58 + 28) = BYTE4(v133) & 1 | *(_BYTE *)(v58 + 28) & 0xFE;
            BYTE4(v133) = v74 | BYTE4(v133) & 0xFE;
            *(_DWORD *)(v58 + 40) = v135;
            LODWORD(v72) = HIDWORD(v136);
            *(_DWORD *)(v58 + 4) = 2;
            *(_DWORD *)(v58 + 48) = v72;
            goto LABEL_76;
          }
        }
      }
      goto LABEL_100;
    }
    if ( v91 )
    {
      v63 = v58;
LABEL_100:
      v58 += 56;
      continue;
    }
    break;
  }
LABEL_94:
  if ( v63 )
    --*(_DWORD *)(a1 + 656);
  else
    v63 = v58;
  v84 = *(_DWORD *)(v63 + 8);
  *(_DWORD *)(v63 + 8) = v131;
  LODWORD(v131) = v84;
  v85 = *(_QWORD *)(v63 + 16);
  *(_QWORD *)(v63 + 16) = v132;
  v132 = v85;
  v86 = *(_BYTE *)(v63 + 12);
  *(_BYTE *)(v63 + 12) = BYTE4(v131) & 2 | v86 & 0xFD;
  BYTE4(v131) = v86 & 2 | BYTE4(v131) & 0xFD;
  v87 = *(_BYTE *)(v63 + 12);
  *(_BYTE *)(v63 + 12) = BYTE4(v131) & 1 | v87 & 0xFE;
  BYTE4(v131) = v87 & 1 | BYTE4(v131) & 0xFE;
  LODWORD(v85) = *(_DWORD *)(v63 + 24);
  *(_DWORD *)(v63 + 24) = v133;
  LODWORD(v133) = v85;
  v88 = *(_QWORD *)(v63 + 32);
  *(_QWORD *)(v63 + 32) = v134;
  v134 = v88;
  v89 = *(_BYTE *)(v63 + 28);
  *(_BYTE *)(v63 + 28) = BYTE4(v133) & 2 | v89 & 0xFD;
  BYTE4(v133) = v89 & 2 | BYTE4(v133) & 0xFD;
  v90 = *(_BYTE *)(v63 + 28) & 1;
  *(_BYTE *)(v63 + 28) = BYTE4(v133) & 1 | *(_BYTE *)(v63 + 28) & 0xFE;
  BYTE4(v133) = v90 | BYTE4(v133) & 0xFE;
  *(_DWORD *)(v63 + 40) = v135;
  LODWORD(v88) = HIDWORD(v136);
  *(_DWORD *)(v63 + 4) = 2;
  *(_DWORD *)(v63 + 48) = v88;
  *(_DWORD *)v63 = v59;
  ++*(_DWORD *)(a1 + 652);
LABEL_76:
  v75 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v131);
  sub_182CBA0(v75, &v133);
LABEL_77:
  v76 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v128);
  sub_182CBA0(v76, v129);
  v77 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v126);
  sub_182CBA0(v77, v127);
  v78 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v124);
  return sub_182CBA0(v78, v125);
}

