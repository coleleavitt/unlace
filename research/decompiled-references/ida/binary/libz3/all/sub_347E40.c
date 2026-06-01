__int64 __fastcall sub_347E40(__int64 a1)
{
  _OWORD *v1; // rdx
  int v2; // r9d
  __int64 v3; // r8
  int v4; // ecx
  _QWORD *v5; // r13
  unsigned int v6; // esi
  _QWORD *v7; // rax
  char *v8; // r12
  char *v9; // r14
  void *v10; // rbx
  _QWORD *v11; // rsi
  unsigned int v12; // ecx
  unsigned int v13; // ebp
  __int64 v14; // r12
  __int64 v15; // rax
  size_t v16; // rsi
  unsigned int v17; // ecx
  _QWORD *v18; // rdi
  _QWORD *v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // r12d
  size_t v22; // rbp
  _OWORD *v23; // rax
  _OWORD *v24; // rcx
  size_t *v25; // rbp
  size_t *v26; // r12
  __int64 v27; // rdi
  bool v28; // zf
  size_t *v29; // rbp
  size_t *v30; // r12
  __int64 v31; // rdi
  __int64 *v32; // rbp
  __int64 *i; // r12
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // r12
  void *v37; // r13
  int v38; // eax
  void *v39; // rdi
  void *v40; // r13
  void *v41; // r13
  void *v42; // r12
  unsigned int v43; // r12d
  __int64 v44; // rax
  __int64 v45; // rax
  void *v46; // rdi
  __int64 v47; // r13
  int v48; // eax
  void *v49; // rdi
  void *v50; // r13
  unsigned int v51; // eax
  std::ios_base *v52; // rax
  char v53; // r13
  __int64 v54; // rax
  __int64 v55; // rax
  void *v56; // r13
  __int64 v57; // rax
  int v58; // eax
  void *v59; // r13
  int v60; // eax
  void *v61; // r13
  void *v62; // r13
  char v63; // cl
  void *v64; // r13
  int v65; // eax
  __int64 v66; // rax
  char v67; // dl
  char v68; // si
  int v69; // edx
  __int64 v70; // rax
  char v71; // cl
  __int64 v72; // rdx
  void *v73; // r13
  _QWORD *v74; // r13
  __int64 v75; // rdi
  int v76; // eax
  int v77; // edx
  int v78; // ecx
  int v79; // r8d
  int v80; // r9d
  __int64 v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rdi
  _QWORD *v85; // rdx
  _QWORD *v86; // rbx
  _QWORD *v87; // r14
  unsigned __int8 v88; // al
  void *v90; // rbp
  bool v91; // al
  __int64 v92; // rsi
  void *v93; // rbp
  int v94; // eax
  int v95; // eax
  unsigned int v96; // esi
  __int64 v97; // [rsp+0h] [rbp-F8h]
  __int64 v98; // [rsp+8h] [rbp-F0h]
  int *v99; // [rsp+10h] [rbp-E8h]
  __int64 v100; // [rsp+18h] [rbp-E0h]
  __int64 *v101; // [rsp+20h] [rbp-D8h]
  void *v102; // [rsp+28h] [rbp-D0h]
  void *v103; // [rsp+28h] [rbp-D0h]
  int *v104; // [rsp+30h] [rbp-C8h]
  __int64 v105; // [rsp+38h] [rbp-C0h]
  int *v106; // [rsp+40h] [rbp-B8h]
  __int64 v107; // [rsp+48h] [rbp-B0h]
  __int64 v108; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v109; // [rsp+58h] [rbp-A0h] BYREF
  int v110; // [rsp+60h] [rbp-98h] BYREF
  char v111; // [rsp+64h] [rbp-94h]
  int v112; // [rsp+70h] [rbp-88h] BYREF
  char v113; // [rsp+74h] [rbp-84h]
  int v114; // [rsp+80h] [rbp-78h] BYREF
  char v115; // [rsp+84h] [rbp-74h]
  __int64 v116; // [rsp+88h] [rbp-70h]
  int v117; // [rsp+90h] [rbp-68h] BYREF
  char v118; // [rsp+94h] [rbp-64h]
  __int64 v119; // [rsp+98h] [rbp-60h]
  __int64 v120; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v121; // [rsp+A8h] [rbp-50h]
  __int64 v122; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v123; // [rsp+B8h] [rbp-40h]

  v98 = a1;
  sub_2FFB40(&v108, a1);
  LODWORD(v3) = *(_DWORD *)(a1 + 172);
  if ( (_DWORD)v3 || *(_DWORD *)(a1 + 176) )
  {
    v4 = 0;
    v3 = *(unsigned int *)(a1 + 168);
    v5 = *(_QWORD **)(a1 + 160);
    v6 = *(_DWORD *)(a1 + 168);
    v1 = &v5[5 * v3];
    v7 = v5;
    if ( v5 == (_QWORD *)v1 )
      goto LABEL_17;
    do
    {
      while ( *v7 )
      {
        *v7 = 0;
        v7 += 5;
        if ( v1 == (_OWORD *)v7 )
          goto LABEL_8;
      }
      v7 += 5;
      ++v4;
    }
    while ( v1 != (_OWORD *)v7 );
LABEL_8:
    if ( v6 <= 0x10 || 3 * v6 >= 4 * v4 )
      goto LABEL_17;
    if ( v5 )
    {
      v8 = (char *)v5;
      v9 = (char *)&v5[5 * v3];
      do
      {
        v10 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v8 + 8);
        v11 = v8 + 24;
        v8 += 40;
        sub_182CBA0(v10, v11);
      }
      while ( v8 != v9 );
      sub_186B220(v5);
      v12 = *(_DWORD *)(a1 + 168);
      *(_QWORD *)(a1 + 160) = 0;
      v13 = v12 >> 1;
      v14 = v12 >> 1;
      *(_DWORD *)(a1 + 168) = v12 >> 1;
      v15 = sub_186B270(40 * v14);
      if ( !v13 )
        goto LABEL_16;
    }
    else
    {
      v96 = v6 >> 1;
      v14 = v96;
      *(_QWORD *)(a1 + 160) = 0;
      *(_DWORD *)(a1 + 168) = v96;
      v15 = sub_186B270(40LL * v96);
    }
    v1 = (_OWORD *)v15;
    do
    {
      *(_OWORD *)((char *)v1 + 24) = 0;
      v1 = (_OWORD *)((char *)v1 + 40);
      *(v1 - 2) = 0;
      *((_QWORD *)v1 - 5) = 0;
      *((_BYTE *)v1 - 28) = 0;
      *((_DWORD *)v1 - 4) = 1;
      *((_BYTE *)v1 - 12) = 0;
    }
    while ( (_OWORD *)(v15 + 40 * v14) != v1 );
LABEL_16:
    *(_QWORD *)(a1 + 160) = v15;
LABEL_17:
    *(_QWORD *)(a1 + 172) = 0;
  }
  LODWORD(v16) = *(_DWORD *)(a1 + 196);
  if ( !(_DWORD)v16 )
  {
    v17 = *(_DWORD *)(a1 + 200);
    if ( !v17 )
      goto LABEL_34;
  }
  v17 = 0;
  v18 = *(_QWORD **)(a1 + 184);
  v16 = *(unsigned int *)(v98 + 192);
  v19 = v18;
  v1 = &v18[2 * v16];
  if ( v18 != (_QWORD *)v1 )
  {
    do
    {
      while ( *v19 )
      {
        *v19 = 0;
        v19 += 2;
        if ( v1 == (_OWORD *)v19 )
          goto LABEL_25;
      }
      v19 += 2;
      ++v17;
    }
    while ( v1 != (_OWORD *)v19 );
LABEL_25:
    if ( (unsigned int)v16 > 0x10 )
    {
      v17 *= 4;
      if ( 3 * (int)v16 < v17 )
      {
        if ( v18 )
        {
          sub_186B220(v18);
          v20 = *(_DWORD *)(v98 + 192);
          *(_QWORD *)(v98 + 184) = 0;
          v21 = v20 >> 1;
          *(_DWORD *)(v98 + 192) = v20 >> 1;
          v22 = 16LL * (v20 >> 1);
          v23 = (_OWORD *)sub_186B270(v22);
          if ( !v21 )
          {
LABEL_32:
            v17 = v98;
            *(_QWORD *)(v98 + 184) = v23;
            goto LABEL_33;
          }
        }
        else
        {
          v92 = (unsigned int)v16 >> 1;
          *(_DWORD *)(v98 + 192) = v92;
          v16 = 16 * v92;
          *(_QWORD *)(v98 + 184) = 0;
          v22 = v16;
          v23 = (_OWORD *)sub_186B270(v16);
        }
        v24 = (_OWORD *)((char *)v23 + v22);
        v1 = v23;
        if ( (v22 & 0x10) == 0 || (v1 = v23 + 1, *v23 = 0, v23 + 1 != v24) )
        {
          do
          {
            *v1 = 0;
            v1 += 2;
            *(v1 - 1) = 0;
          }
          while ( v1 != v24 );
        }
        goto LABEL_32;
      }
    }
  }
LABEL_33:
  *(_QWORD *)(v98 + 196) = 0;
LABEL_34:
  v25 = *(size_t **)(v98 + 216);
  if ( v25 )
  {
    v26 = &v25[*((unsigned int *)v25 - 1)];
    if ( v25 >= v26 )
      goto LABEL_42;
    do
    {
      while ( 1 )
      {
        v16 = *v25;
        if ( *v25 )
        {
          v27 = *(_QWORD *)(v98 + 208);
          v28 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v28 )
            break;
        }
        if ( ++v25 >= v26 )
          goto LABEL_41;
      }
      sub_15D7BC0(v27, v16);
      ++v25;
    }
    while ( v25 < v26 );
LABEL_41:
    v25 = *(size_t **)(v98 + 216);
    if ( v25 )
LABEL_42:
      *((_DWORD *)v25 - 1) = 0;
  }
  v29 = *(size_t **)(v98 + 232);
  if ( v29 )
  {
    v30 = &v29[*((unsigned int *)v29 - 1)];
    if ( v29 >= v30 )
      goto LABEL_51;
    do
    {
      while ( 1 )
      {
        v16 = *v29;
        if ( *v29 )
        {
          v31 = *(_QWORD *)(v98 + 224);
          v28 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v28 )
            break;
        }
        if ( ++v29 >= v30 )
          goto LABEL_50;
      }
      sub_15D7BC0(v31, v16);
      ++v29;
    }
    while ( v29 < v30 );
LABEL_50:
    v29 = *(size_t **)(v98 + 232);
    if ( v29 )
LABEL_51:
      *((_DWORD *)v29 - 1) = 0;
  }
  if ( !(unsigned __int8)sub_300830(v98, v16, (_DWORD)v1, v17, v3, v2) )
  {
LABEL_134:
    v43 = 0;
    goto LABEL_129;
  }
  v32 = **(__int64 ***)(v98 + 32);
  if ( v32 )
  {
    for ( i = &v32[7 * *((unsigned int *)v32 - 1)]; i != v32; v32 += 7 )
    {
      v34 = *v32;
      v35 = sub_2FFB90((__int64)&v108);
      sub_343E80(v98, v35, v34, (__int64)(v32 + 2));
    }
  }
  v36 = sub_2FFB90((__int64)&v108);
  v120 = 0;
  v121 = 0;
  v37 = qword_1C7F2C0;
  v122 = 1;
  v123 = 0;
  v105 = v98 + 104;
  if ( (*(_BYTE *)(v98 + 108) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v120, v98 + 104);
  else
    LODWORD(v120) = *(_DWORD *)(v98 + 104);
  v107 = v98 + 120;
  if ( (*(_BYTE *)(v98 + 124) & 1) != 0 )
  {
    sub_182C690(v37, &v122, v98 + 120);
  }
  else
  {
    v38 = *(_DWORD *)(v98 + 120);
    BYTE4(v122) &= ~1u;
    LODWORD(v122) = v38;
  }
  v39 = qword_1C7F2C0;
  v100 = v98 + 72;
  if ( (v122 & 0x100000000LL) != 0 || (_DWORD)v122 != 1 || (*(_BYTE *)(v98 + 92) & 1) != 0 || *(_DWORD *)(v98 + 88) != 1 )
  {
    sub_1852000(qword_1C7F2C0, &v120, v100);
  }
  else
  {
    sub_1832A70(qword_1C7F2C0, &v120, v100);
    sub_182CBA0(v39, &v122);
    BYTE4(v122) &= ~1u;
    LODWORD(v122) = 1;
  }
  v115 &= 0xFCu;
  v40 = qword_1C7F2C0;
  v118 &= 0xFCu;
  v114 = 0;
  v116 = 0;
  v117 = 1;
  v119 = 0;
  if ( (v120 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v114, &v120);
  else
    v114 = v120;
  if ( (v122 & 0x100000000LL) != 0 )
  {
    v101 = &v122;
    sub_182C690(v40, &v117, &v122);
  }
  else
  {
    v118 &= ~1u;
    v117 = v122;
    v101 = &v122;
  }
  v41 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v120);
  sub_182CBA0(v41, &v122);
  v99 = &v114;
  sub_97C460(v36, &v114);
  v42 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v114);
  v104 = &v117;
  sub_182CBA0(v42, &v117);
  sub_302130(v98, "wmax");
  v43 = 1;
  v106 = &v110;
  while ( (unsigned __int8)sub_18290A0(*(_QWORD *)(v98 + 8)) )
  {
    if ( (*(_BYTE *)(v98 + 92) & 1) != 0
      || *(_DWORD *)(v98 + 88) != 1
      || (*(_BYTE *)(v98 + 124) & 1) != 0
      || *(_DWORD *)(v98 + 120) != 1 )
    {
      LOBYTE(v51) = sub_1848D40(qword_1C7F2C0, v100, v105);
    }
    else if ( (*(_BYTE *)(v98 + 76) & 1) != 0 || (*(_BYTE *)(v98 + 108) & 1) != 0 )
    {
      v51 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v100, v105) >> 31;
    }
    else
    {
      LOBYTE(v51) = *(_DWORD *)(v98 + 72) < *(_DWORD *)(v98 + 104);
    }
    if ( !(_BYTE)v51 )
      break;
    v52 = (std::ios_base *)sub_2FF8B0(v98);
    v43 = sub_E60CB0(v52, 0, 0);
    v53 = (v43 == 0) | sub_18290A0(*(_QWORD *)(v98 + 8)) ^ 1;
    if ( v53 )
    {
      v43 = 0;
      goto LABEL_120;
    }
    if ( v43 == -1 )
      goto LABEL_120;
    if ( v43 == 1 )
    {
      v54 = sub_2FFB90((__int64)&v108);
      if ( (unsigned __int8)sub_97CB30(v54) )
      {
        v55 = sub_2FFB90((__int64)&v108);
        sub_97C100(v106, v55);
        v56 = qword_1C7F2C0;
        v120 = 0;
        v121 = 0;
        v122 = 1;
        v123 = 0;
        if ( (*(_BYTE *)(v98 + 76) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v120, v100);
          v57 = v98;
          if ( (*(_BYTE *)(v98 + 92) & 1) != 0 )
            goto LABEL_136;
LABEL_91:
          v58 = *(_DWORD *)(v57 + 88);
          BYTE4(v122) &= ~1u;
          v59 = qword_1C7F2C0;
          LODWORD(v122) = v58;
          v60 = v110;
          if ( v110 )
            goto LABEL_92;
LABEL_137:
          if ( (v120 & 0x100000000LL) != 0 )
            sub_182C690(v59, &v120, &v120);
          else
            BYTE4(v120) &= ~1u;
          if ( (v122 & 0x100000000LL) != 0 )
            sub_182C690(v59, v101, v101);
          else
            BYTE4(v122) &= ~1u;
        }
        else
        {
          LODWORD(v120) = *(_DWORD *)(v98 + 72);
          v57 = v98;
          if ( (*(_BYTE *)(v98 + 92) & 1) == 0 )
            goto LABEL_91;
LABEL_136:
          sub_182C690(v56, v101, v57 + 88);
          v60 = v110;
          v59 = qword_1C7F2C0;
          if ( !v110 )
            goto LABEL_137;
LABEL_92:
          if ( (_DWORD)v120 )
          {
            if ( (v122 & 0x100000000LL) != 0 || (_DWORD)v122 != 1 || (v113 & 1) != 0 || v112 != 1 )
            {
              sub_1851D20(v59, &v120, v106, &v120);
            }
            else
            {
              sub_1831A80(v59, &v120, v106, &v120);
              sub_182CBA0(v59, v101);
              BYTE4(v122) &= ~1u;
              LODWORD(v122) = 1;
            }
          }
          else
          {
            if ( (v111 & 1) != 0 )
            {
              sub_182C690(v59, &v120, v106);
            }
            else
            {
              BYTE4(v120) &= ~1u;
              LODWORD(v120) = v60;
            }
            if ( (v113 & 1) != 0 )
            {
              sub_182C690(v59, v101, &v112);
            }
            else
            {
              BYTE4(v122) &= ~1u;
              LODWORD(v122) = v112;
            }
          }
        }
        v115 &= 0xFCu;
        v61 = qword_1C7F2C0;
        v118 &= 0xFCu;
        v114 = 0;
        v116 = 0;
        v117 = 1;
        v119 = 0;
        if ( (v120 & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, v99, &v120);
        else
          v114 = v120;
        if ( (v122 & 0x100000000LL) != 0 )
        {
          sub_182C690(v61, v104, v101);
        }
        else
        {
          v118 &= ~1u;
          v117 = v122;
        }
        v62 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v120);
        sub_182CBA0(v62, v101);
        v63 = v115;
        v64 = qword_1C7F2C0;
        v65 = *(_DWORD *)(v98 + 104);
        *(_DWORD *)(v98 + 104) = v114;
        v114 = v65;
        v66 = *(_QWORD *)(v98 + 112);
        *(_QWORD *)(v98 + 112) = v116;
        v67 = v63;
        v63 &= ~2u;
        v116 = v66;
        v68 = *(_BYTE *)(v98 + 108);
        LOBYTE(v66) = v68 & 2;
        v68 &= ~2u;
        v115 = v68 & 1 | (v63 | v66) & 0xFE;
        LODWORD(v66) = *(_DWORD *)(v98 + 120);
        *(_BYTE *)(v98 + 108) = v63 & 1 | v68 & 0xFE | v67 & 2;
        v69 = v117;
        v117 = v66;
        v70 = *(_QWORD *)(v98 + 128);
        v71 = v118;
        *(_DWORD *)(v98 + 120) = v69;
        v72 = v119;
        v119 = v70;
        LOBYTE(v70) = *(_BYTE *)(v98 + 124);
        *(_QWORD *)(v98 + 128) = v72;
        LOBYTE(v72) = v71;
        v71 &= ~2u;
        v118 = v70 & 1 | v71 & 0xFE | v70 & 2;
        *(_BYTE *)(v98 + 124) = v71 & 1 | v70 & 0xFC | v72 & 2;
        sub_182CBA0(v64, v99);
        sub_182CBA0(v64, v104);
        v73 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v106);
        sub_182CBA0(v73, &v112);
        v74 = (_QWORD *)sub_2FF8B0(v98);
        LODWORD(v102) = v98 + 136;
        (*(void (__fastcall **)(_QWORD *))(*v74 + 32LL))(v74);
        if ( *(_QWORD *)(v98 + 136) )
        {
          v75 = v74[7];
          if ( v75 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v75 + 32LL))(v75, v98 + 136);
        }
      }
      v76 = sub_2FFB90((__int64)&v108);
      sub_97F400(
        (unsigned int)&v120,
        v76,
        v77,
        v78,
        v79,
        v80,
        v97,
        v98,
        (_DWORD)v99,
        v100,
        (_DWORD)v101,
        (_DWORD)v102,
        (_DWORD)v104,
        v105,
        (_DWORD)v106,
        v107,
        v108,
        v109);
      v81 = sub_2FF8B0(v98);
      sub_E5EBF0(v81, v120);
      v82 = v120;
      if ( v120 )
      {
        v83 = v121;
        v28 = (*(_DWORD *)(v120 + 8))-- == 1;
        if ( v28 )
          sub_15D7BC0(v83, v82);
      }
    }
    v44 = sub_2FFB90((__int64)&v108);
    v109 = 0;
    sub_346EE0(v98, v44, &v109);
    v45 = sub_2FFB90((__int64)&v108);
    v120 = 0;
    v46 = qword_1C7F2C0;
    v47 = v45;
    v121 = 0;
    v122 = 1;
    v123 = 0;
    if ( (*(_BYTE *)(v98 + 108) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v120, v105);
    else
      LODWORD(v120) = *(_DWORD *)(v98 + 104);
    if ( (*(_BYTE *)(v98 + 124) & 1) != 0 )
    {
      sub_182C690(v46, v101, v107);
    }
    else
    {
      v48 = *(_DWORD *)(v98 + 120);
      BYTE4(v122) &= ~1u;
      LODWORD(v122) = v48;
    }
    if ( (v122 & 0x100000000LL) != 0
      || (_DWORD)v122 != 1
      || (*(_BYTE *)(v98 + 92) & 1) != 0
      || *(_DWORD *)(v98 + 88) != 1 )
    {
      sub_1852000(qword_1C7F2C0, &v120, v100);
    }
    else
    {
      v103 = qword_1C7F2C0;
      sub_1832A70(qword_1C7F2C0, &v120, v100);
      sub_182CBA0(v103, v101);
      BYTE4(v122) &= ~1u;
      LODWORD(v122) = 1;
    }
    v115 &= 0xFCu;
    v49 = qword_1C7F2C0;
    v118 &= 0xFCu;
    v114 = 0;
    v116 = 0;
    v117 = 1;
    v119 = 0;
    if ( (v120 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v99, &v120);
    else
      v114 = v120;
    if ( (v122 & 0x100000000LL) != 0 )
    {
      sub_182C690(v49, v104, v101);
    }
    else
    {
      v118 &= ~1u;
      v117 = v122;
    }
    v102 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v120);
    sub_182CBA0(v102, v101);
    sub_97C460(v47, v99);
    v50 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v99);
    sub_182CBA0(v50, v104);
    sub_302130(v98, "wmax");
  }
  v53 = 0;
LABEL_120:
  v84 = *(_QWORD *)(v98 + 136);
  if ( v84 )
  {
    v85 = **(_QWORD ***)(v98 + 32);
    if ( v85 )
    {
      v86 = &v85[7 * *((unsigned int *)v85 - 1)];
      if ( v85 != v86 )
      {
        v87 = **(_QWORD ***)(v98 + 32);
        while ( 1 )
        {
          v88 = sub_1374270(v84, *v87);
          v87 += 7;
          *((_DWORD *)v87 - 2) = v88;
          if ( v86 == v87 )
            break;
          v84 = *(_QWORD *)(v98 + 136);
        }
      }
    }
  }
  if ( (unsigned __int8)sub_18290A0(*(_QWORD *)(v98 + 8)) && v53 )
  {
    v90 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v98 + 76) & 1) != 0 || (*(_BYTE *)(v98 + 108) & 1) != 0 )
      v91 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v100, v105) == 0;
    else
      v91 = *(_DWORD *)(v98 + 72) == *(_DWORD *)(v98 + 104);
    if ( v91 )
    {
      if ( (*(_BYTE *)(v98 + 92) & 1) != 0 || (*(_BYTE *)(v98 + 124) & 1) != 0 )
        LOBYTE(v43) = (unsigned int)sub_182C7B0(v90, v98 + 88, v107) == 0;
      else
        LOBYTE(v43) = *(_DWORD *)(v98 + 88) == *(_DWORD *)(v98 + 120);
      v43 = (unsigned __int8)v43;
      goto LABEL_129;
    }
    goto LABEL_134;
  }
  if ( v43 == -1 )
  {
    v93 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v98 + 108) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v100, v105);
    }
    else
    {
      v94 = *(_DWORD *)(v98 + 104);
      *(_BYTE *)(v98 + 76) &= ~1u;
      *(_DWORD *)(v98 + 72) = v94;
    }
    if ( (*(_BYTE *)(v98 + 124) & 1) != 0 )
    {
      sub_182C690(v93, v98 + 88, v107);
    }
    else
    {
      v95 = *(_DWORD *)(v98 + 120);
      *(_BYTE *)(v98 + 92) &= ~1u;
      *(_DWORD *)(v98 + 88) = v95;
    }
    v43 = 1;
  }
LABEL_129:
  sub_2FFB60(&v108);
  return v43;
}

