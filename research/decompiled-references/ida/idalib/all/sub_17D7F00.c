__int64 __fastcall sub_17D7F00(
        __int64 *a1,
        void **a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        double a7,
        double a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11,
        unsigned int a12)
{
  __int64 *v12; // r14
  __int64 v14; // rbx
  unsigned __int8 v15; // al
  __int64 v16; // r15
  unsigned __int8 v17; // al
  char v18; // dl
  unsigned int v19; // edx
  __int64 *v20; // rsi
  unsigned int v21; // edx
  __int64 v22; // r8
  __int64 v23; // r9
  char *v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  char v36; // si
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // edx
  unsigned int v41; // ecx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  int v44; // edx
  unsigned __int8 v45; // di
  unsigned int v46; // ebp
  int v47; // r15d
  char v48; // di
  char v49; // al
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 *v53; // rbp
  __int64 *v54; // r15
  __int64 *v55; // rbx
  __int64 v56; // r14
  unsigned int v57; // ecx
  char v58; // dl
  __int64 *v59; // rbp
  __int64 *v60; // r15
  __int64 *v61; // r14
  __int64 v62; // r13
  unsigned int v63; // ecx
  char v64; // dl
  __int64 v65; // r13
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // r14
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  char *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rdx
  unsigned __int64 v80; // rcx
  __int64 v81; // rdx
  unsigned __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  char *v93; // rax
  _QWORD *v94; // rax
  unsigned __int8 v95; // cl
  _QWORD *v96; // r13
  __int64 v97; // rax
  __int64 v98; // rax
  char v99; // [rsp+8h] [rbp-210h]
  __int64 v101; // [rsp+10h] [rbp-208h]
  __int64 v102; // [rsp+10h] [rbp-208h]
  __int64 *v104; // [rsp+18h] [rbp-200h]
  __int64 *v105; // [rsp+18h] [rbp-200h]
  __int64 v107; // [rsp+20h] [rbp-1F8h]
  __int64 v108; // [rsp+20h] [rbp-1F8h]
  __int64 v109; // [rsp+20h] [rbp-1F8h]
  int v110[36]; // [rsp+30h] [rbp-1E8h] BYREF
  char *v111; // [rsp+C0h] [rbp-158h] BYREF
  char v112; // [rsp+C8h] [rbp-150h]
  _BYTE v113[12]; // [rsp+CCh] [rbp-14Ch]
  void *v114; // [rsp+D8h] [rbp-140h]
  unsigned __int8 *v115; // [rsp+E0h] [rbp-138h] BYREF
  _BYTE v116[80]; // [rsp+E8h] [rbp-130h] BYREF
  char v117; // [rsp+138h] [rbp-E0h]
  unsigned int v118; // [rsp+140h] [rbp-D8h]
  char v119; // [rsp+144h] [rbp-D4h]
  __int64 v120[2]; // [rsp+150h] [rbp-C8h] BYREF
  char *v121; // [rsp+160h] [rbp-B8h]
  unsigned __int8 *v122[11]; // [rsp+170h] [rbp-A8h] BYREF
  char v123; // [rsp+1C8h] [rbp-50h]
  unsigned int v124; // [rsp+1D0h] [rbp-48h]
  char v125; // [rsp+1D4h] [rbp-44h]

  v12 = a1;
  if ( (((unsigned __int8)(*(_DWORD *)a4 >> 12) + 105) & 0x7Fu) > 4 )
  {
    v14 = 0;
    v16 = 0;
    goto LABEL_6;
  }
  v14 = *(_QWORD *)(a4 + 8);
  if ( !v14 )
    return 0;
  v15 = *(_BYTE *)(v14 + 28) & 0x7F;
  if ( (unsigned int)v15 - 58 <= 4 )
  {
    v16 = *(_QWORD *)(a4 + 8);
LABEL_17:
    sub_17A3D60((__int64)a1, v16, (__int64)a2);
    *(_BYTE *)(v16 + 74) |= 8u;
    if ( *(char *)(v16 + 28) < 0 )
      return v16;
    goto LABEL_6;
  }
  if ( v15 != 72 )
  {
    v16 = 0;
    goto LABEL_6;
  }
  v16 = *(_QWORD *)(v14 + 48);
  if ( v16 )
    goto LABEL_17;
LABEL_6:
  v17 = *(_BYTE *)(a4 + 3);
  if ( ((v17 >> 2) & 0x1F) != 0 && ((*(_BYTE *)(a4 + 3) >> 2) & 2) != 0 )
  {
    sub_168B9F0((__int64)v120, a1 + 1, *(_DWORD *)(a4 + 224), 0x14A7u, 0);
    v111 = *(char **)(a4 + 160);
    sub_1587DB0((__int64)v120, (__int64 *)&v111);
    sub_15F7200(v120);
    v17 = *(_BYTE *)(a4 + 3);
  }
  v18 = *(_BYTE *)(a4 + 4);
  if ( (v17 >> 7) | v18 & 1 )
  {
    if ( *(char *)(a4 + 3) < 0 )
      v19 = *(_DWORD *)(a4 + 240);
    else
      v19 = *(_DWORD *)(a4 + 260);
    sub_168B9F0((__int64)v120, a1 + 1, v19, 0xFA3u, 0);
    LODWORD(v111) = (*(_BYTE *)(a1[29] + 1) & 0x40) != 0;
    sub_1588370((__int64)v120, (unsigned int *)&v111);
    sub_15F7200(v120);
    v18 = *(_BYTE *)(a4 + 4);
  }
  if ( (v18 & 0x30) != 0 )
  {
    v20 = a1 + 1;
    v21 = *(_DWORD *)(a4 + 272);
    if ( v16 )
    {
      sub_168B9F0((__int64)v110, v20, v21, 0xD9Fu, 0);
      __asm { jmp     rax }
    }
    if ( (*(_BYTE *)a1[29] & 8) != 0 )
    {
      sub_168B9F0((__int64)v120, v20, v21, 0xD30u, 0);
    }
    else
    {
      sub_168B9F0((__int64)v120, v20, v21, 0xDA6u, 0);
      LODWORD(v111) = (*(_BYTE *)(a4 + 4) >> 4) & 3;
      sub_1587D10((__int64)v120, (int *)&v111);
    }
    sub_15F7200(v120);
    return v14;
  }
  sub_17A3FF0((__int64)a1, a4);
  if ( *(_DWORD *)(a4 + 264) )
  {
    if ( v16 || !v14 )
      return sub_1851AB0(a1, a2, a4, a9, a10, a12);
    return 0;
  }
  v25 = (char *)a1[29];
  v26 = v25[1] & 8;
  if ( !v16
    || (*(_BYTE *)(v16 + 28) & 0x7Fu) - 58 > 3
    || *(_QWORD *)(v16 + 40)
    || (*(_BYTE *)(v16 + 74) & 1) == 0
    || (*(_BYTE *)a4 & 7) == 1 )
  {
    if ( (_BYTE)v26 )
    {
      v99 = 1;
      v27 = (*(_DWORD *)a4 >> 12) & 0x7F;
      goto LABEL_31;
    }
    v99 = 1;
  }
  else
  {
    if ( (_BYTE)v26 )
      goto LABEL_171;
    v26 = *(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v16 + 16) & 4) != 0 )
      v26 = *(_QWORD *)v26;
    v99 = 0;
    if ( ((*(_BYTE *)(v26 + 8) + 70) & 0x7Fu) <= 3 )
    {
LABEL_171:
      v95 = *(_BYTE *)(a1[68] + 8) & 0x7F;
      if ( v95 > 0x12u )
      {
        if ( ((v95 + 94) & 0x7Fu) > 5 )
          return sub_17D6BC0(a1, a2, a4, a3, v16, a1[31] + 17464, a7, a8);
      }
      else if ( ((1LL << v95) & 0x40182) == 0 )
      {
        return sub_17D6BC0(a1, a2, a4, a3, v16, a1[31] + 17464, a7, a8);
      }
      *a11 = v16;
      return sub_17D6BC0(a1, a2, a4, a3, v16, a1[31] + 17464, a7, a8);
    }
  }
  if ( ((*(_BYTE *)(a1[68] + 8) + 70) & 0x7Fu) > 3 || (*(_BYTE *)a4 & 7) != 0 )
  {
    v27 = (*(_DWORD *)a4 >> 12) & 0x7F;
    goto LABEL_31;
  }
  if ( v16 )
  {
    if ( *(_QWORD *)(v16 + 40) )
    {
      v96 = (_QWORD *)v16;
      if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 58 <= 3 )
        goto LABEL_179;
      goto LABEL_180;
    }
    v27 = (*(_DWORD *)a4 >> 12) & 0x7F;
    if ( ((*(_DWORD *)a4 >> 12) & 0x7F) == 0x1C )
    {
      if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 58 > 3 )
      {
        v99 = 0;
        goto LABEL_32;
      }
      v96 = (_QWORD *)v16;
      goto LABEL_179;
    }
  }
  else
  {
    v27 = (*(_DWORD *)a4 >> 12) & 0x7F;
    if ( ((*(_DWORD *)a4 >> 12) & 0x7F) == 0x1C )
    {
      v97 = sub_F63660(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL), a4, (__int64)v25, v26, v22, v23);
      if ( v97
        || (v97 = sub_F63600(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL), a4, (__int64)v25, v26, v22, v23)) != 0 )
      {
        v96 = sub_F60F10(v97, a4, (__int64)v25, v26, v22, v23);
        if ( v96 )
        {
          v25 = (char *)a1[29];
LABEL_179:
          if ( *v25 < 0 )
          {
            sub_168B9F0((__int64)v120, a1 + 1, *(_DWORD *)(a4 + 160), 0x15EEu, 0);
            LOBYTE(v110[0]) = *((_BYTE *)v96 + 73) >> 5 == 2;
            v98 = sub_1588420((__int64)v120, (unsigned __int8 *)v110);
            v111 = *(char **)(a4 + 160);
            sub_1587DB0(v98, (__int64 *)&v111);
            sub_15F7200(v120);
            return sub_17B8230((__int64)a1, (__int64 *)a2, a4, (__int64)v96);
          }
        }
      }
LABEL_180:
      v99 = 0;
      v27 = (*(_DWORD *)a4 >> 12) & 0x7F;
    }
  }
LABEL_31:
  if ( (_BYTE)v27 == 69 )
    return v14;
LABEL_32:
  if ( v14 && *(char *)(v14 + 28) < 0 )
    return v14;
  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
  {
    LOBYTE(v25) = v16 == 0 || (*(_BYTE *)a4 & 7) == 1;
    if ( !(_BYTE)v25 && (*(_BYTE *)(v16 + 28) & 0x7F) == 0x3E )
    {
      sub_B7E870(v16, a4, (__int64)v25, v26, v22, v23);
      v32 = sub_B7E870(v16, a4, v28, v29, v30, v31);
      if ( !v32 )
        v32 = (_QWORD *)v16;
      v33 = sub_B8E970((__int64)(v32 + 8));
      if ( v33 )
      {
        if ( (*(_BYTE *)(v33 + 28) & 0x7F) == 0x21 )
          goto LABEL_49;
        while ( 1 )
        {
          v34 = *(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v33 = v34;
          if ( !v34 )
            break;
          if ( (*(_BYTE *)(v34 + 28) & 0x7F) == 0x21 )
            goto LABEL_49;
        }
      }
      v35 = *(_QWORD *)(v16 + 40);
      if ( (v35 & 7) != 0 || (v35 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        v36 = v99;
        if ( *(char *)(v16 + 28) >= 0 )
          v36 = 0;
        v99 = v36;
      }
    }
  }
LABEL_49:
  if ( sub_15AFAB0(a4) )
  {
LABEL_66:
    v40 = *(_DWORD *)(a4 + 268);
    if ( !v40 || !v16 )
      goto LABEL_75;
    goto LABEL_68;
  }
  if ( (*(_BYTE *)a4 & 7) == 1 )
  {
    sub_168B9F0((__int64)v120, a1 + 1, *(_DWORD *)(a4 + 160), 0x1651u, 0);
    v111 = *(char **)(a4 + 160);
    sub_1587DB0((__int64)v120, (__int64 *)&v111);
    sub_15F7200(v120);
    goto LABEL_66;
  }
  v40 = *(_DWORD *)(a4 + 268);
  if ( !v40 || !v16 )
  {
    v120[0] = v14;
    sub_179B290(a1, v120, 1, v37, v38, v39);
LABEL_53:
    v41 = 4269;
    if ( !a6 )
      v41 = a10 == 0 ? 5629 : 4269;
    sub_168B9F0((__int64)v120, a1 + 1, *(_DWORD *)(a4 + 160), v41, 0);
    v111 = *(char **)(a4 + 160);
    sub_1587DB0((__int64)v120, (__int64 *)&v111);
    sub_15F7200(v120);
    return v14;
  }
  v99 = 0;
LABEL_68:
  v42 = *(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v16 + 16) & 4) != 0 )
    v42 = *(_QWORD *)v42;
  v37 = *(_BYTE *)(v42 + 8) & 0x7F;
  if ( (unsigned __int8)v37 > 0x12u )
  {
    v37 = ((_BYTE)v37 + 94) & 0x7F;
    if ( (unsigned __int8)v37 > 5u )
      goto LABEL_75;
  }
  else if ( ((1LL << v37) & 0x40182) == 0 )
  {
    goto LABEL_75;
  }
  sub_168B9F0((__int64)v120, a1 + 1, v40, 0x1071u, 0);
  v110[0] = *(_BYTE *)(v16 + 73) >> 5;
  v43 = sub_17B3D20((__int64)v120, v110);
  v44 = *(_DWORD *)(a4 + 268);
  *(_QWORD *)v113 = 0;
  v113[8] = 0;
  v114 = v116;
  v115 = nullptr;
  v116[0] = 0;
  v116[16] = 0;
  LODWORD(v111) = v44;
  HIDWORD(v111) = v44;
  v112 = 1;
  sub_1589170(v43, &v111);
  if ( v114 != v116 )
    operator delete(v114);
  sub_15F7200(v120);
LABEL_75:
  v120[0] = v14;
  sub_179B290(a1, v120, 1, v37, v38, v39);
  if ( !v99 )
    goto LABEL_53;
  v45 = *(_BYTE *)a4;
  v46 = (*(_BYTE *)(v12[29] + 1) & 8) == 0 ? 7379 : 5670;
  v47 = *(_BYTE *)a4 & 7;
  if ( (*(_BYTE *)a4 & 7) != 0 )
  {
    if ( v47 == 7 )
    {
      sub_168B9F0((__int64)v120, v12 + 1, *(_DWORD *)(a4 + 168), 0x109Bu, 0);
      sub_15F7200(v120);
      v45 = *(_BYTE *)a4;
    }
    else if ( (v45 & 0x20) == 0 && v47 != 1 )
    {
      sub_168B9F0((__int64)v120, v12 + 1, *(_DWORD *)(a4 + 168), v46, 0);
      v111 = sub_15AC850(v47);
      sub_15AFC70((__int64)v120, &v111);
      sub_15F7200(v120);
      v45 = *(_BYTE *)a4;
    }
  }
  v48 = v45 >> 3;
  if ( (v48 & 3) != 0 )
  {
    sub_168B9F0((__int64)v120, v12 + 1, *(_DWORD *)(a4 + 172), v46, 0);
    v111 = sub_15AC8E0(v48 & 3);
    sub_15AFC70((__int64)v120, &v111);
    sub_15F7200(v120);
  }
  v49 = (*(_BYTE *)(a4 + 3) >> 2) & 0x1F;
  if ( v49 )
  {
    if ( (*(_BYTE *)(a4 + 3) & 4) != 0 )
    {
      sub_168B9F0((__int64)v120, v12 + 1, *(_DWORD *)(a4 + 220), v46, 0);
      sub_162C0B0((__int64)v120, (__int64)"const");
      sub_15F7200(v120);
      v49 = (*(_BYTE *)(a4 + 3) >> 2) & 0x1F;
    }
    if ( (v49 & 4) != 0 )
    {
      sub_168B9F0((__int64)v120, v12 + 1, *(_DWORD *)(a4 + 220), v46, 0);
      sub_17CAFB0((__int64)v120, (__int64)"volatile");
      sub_15F7200(v120);
      v49 = (*(_BYTE *)(a4 + 3) >> 2) & 0x1F;
    }
    if ( (v49 & 0x10) != 0 )
    {
      sub_168B9F0((__int64)v120, v12 + 1, *(_DWORD *)(a4 + 232), v46, 0);
      if ( v123 )
      {
        sub_AE9DF0(v122, (__int64)"_Atomic", 1u);
      }
      else if ( v125 )
      {
        sub_17B29E0((__int64)v120, (__int64)"_Atomic");
      }
      sub_15F7200(v120);
      v49 = (*(_BYTE *)(a4 + 3) >> 2) & 0x1F;
    }
    if ( (v49 & 8) != 0 )
    {
      sub_168B9F0((__int64)v120, v12 + 1, *(_DWORD *)(a4 + 236), v46, 0);
      if ( v123 )
      {
        sub_AE9DF0(v122, (__int64)"__unaligned", 1u);
      }
      else if ( v125 )
      {
        sub_17B29E0((__int64)v120, (__int64)"__unaligned");
      }
      sub_15F7200(v120);
    }
  }
  v50 = *(unsigned int *)(a4 + 48);
  if ( (_DWORD)v50 )
  {
    if ( ((*(_DWORD *)a4 >> 12) & 0x7Fu) - 23 > 4 )
      return v14;
    v59 = *(__int64 **)(a4 + 40);
    v60 = v12 + 1;
    v105 = v12;
    v61 = &v59[v50];
    do
    {
      v62 = *v59;
      if ( *(_WORD *)(*v59 + 32) != 19
        || (((*(_BYTE *)(v62 + 34) & 0xF) - 6) & 0xFD) != 0
        || (v63 = 127, (*(_BYTE *)(v105[29] + 1) & 8) != 0) )
      {
        v63 = (*(_BYTE *)(v62 + 35) & 2) == 0 ? 6805 : 3579;
      }
      sub_168B9F0((__int64)&v111, v60, *(_DWORD *)(v62 + 24), v63, 0);
      if ( v117 )
      {
        sub_AE9DF0(&v115, v62, 0x10u);
      }
      else
      {
        v64 = v119;
        if ( !v119 )
        {
          switch ( ((unsigned __int8)(*(_DWORD *)a4 >> 12) + 105) & 0x7F )
          {
            case 0:
              goto LABEL_134;
            case 1:
              goto LABEL_133;
            case 2:
            case 3:
              goto LABEL_119;
            case 4:
              goto LABEL_113;
            default:
              goto LABEL_205;
          }
        }
        v83 = sub_168B9E0(&v111);
        v87 = *(_QWORD *)&v113[4];
        if ( *(_QWORD *)&v113[4] )
        {
          v109 = v83;
          v87 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v113[4] + 32LL))(*(_QWORD *)&v113[4]);
          v83 = v109;
        }
        v120[0] = v87;
        v88 = sub_1587BC0(v83, v120, v83, v84, v85, v86);
        sub_AE9DF0((unsigned __int8 **)(*v88 + 32LL * v118 + 8), v62, 0x10u);
      }
      switch ( ((unsigned __int8)(*(_DWORD *)a4 >> 12) + 105) & 0x7F )
      {
        case 0:
LABEL_134:
          v79 = *(_QWORD *)(a4 + 8);
          if ( (*(_BYTE *)(v79 + 28) & 0x7F) == 0x3E )
          {
            v80 = *(_QWORD *)(v79 + 72);
            v65 = 5;
            v64 = v117;
            if ( (v80 & 0x10000000000LL) == 0 )
              v65 = ((v80 >> 38) & 2) + 4;
          }
          else
          {
            v64 = v117;
            v65 = 4;
          }
          break;
        case 1:
          v64 = v117;
LABEL_133:
          v65 = 3;
          break;
        case 2:
          v64 = v117;
          v65 = 1;
          break;
        case 3:
          v64 = v117;
          v65 = 0;
          break;
        case 4:
          v64 = v117;
LABEL_113:
          v65 = 2;
          break;
        default:
LABEL_205:
          BUG();
      }
      if ( v64 )
      {
        sub_AE9DF0(&v115, v65, 3u);
      }
      else if ( v119 )
      {
        v66 = sub_168B9E0(&v111);
        v70 = *(_QWORD *)&v113[4];
        if ( *(_QWORD *)&v113[4] )
        {
          v108 = v66;
          v70 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v113[4] + 32LL))(*(_QWORD *)&v113[4]);
          v66 = v108;
        }
        v120[0] = v70;
        v71 = sub_1587BC0(v66, v120, v66, v67, v68, v69);
        sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * v118 + 8), v65, 3u);
      }
LABEL_119:
      ++v59;
      sub_15F7200(&v111);
    }
    while ( v61 != v59 );
    v52 = a5;
    v12 = v105;
    v51 = *(unsigned int *)(a5 + 16);
  }
  else
  {
    v51 = *(unsigned int *)(a5 + 16);
    if ( !(_DWORD)v51 || ((*(_DWORD *)a4 >> 12) & 0x7Fu) - 23 > 4 )
      return v14;
    v52 = a5;
  }
  v53 = *(__int64 **)(v52 + 8);
  v54 = &v53[v51];
  if ( v53 != v54 )
  {
    v104 = v12;
    v107 = v14;
    v55 = v12 + 1;
    while ( 2 )
    {
      v56 = *v53;
      if ( *(_WORD *)(*v53 + 32) != 19
        || (((*(_BYTE *)(v56 + 34) & 0xF) - 6) & 0xFD) != 0
        || (v57 = 127, (*(_BYTE *)(v104[29] + 1) & 8) != 0) )
      {
        v57 = (*(_BYTE *)(v56 + 35) & 2) == 0 ? 6805 : 3579;
      }
      sub_168B9F0((__int64)v120, v55, *(_DWORD *)(v56 + 24), v57, 0);
      if ( v123 )
      {
        sub_AE9DF0(v122, v56, 0x10u);
      }
      else
      {
        v58 = v125;
        if ( !v125 )
        {
          switch ( ((unsigned __int8)(*(_DWORD *)a4 >> 12) + 105) & 0x7F )
          {
            case 0:
              goto LABEL_137;
            case 1:
              goto LABEL_143;
            case 2:
              goto LABEL_124;
            case 3:
              goto LABEL_130;
            case 4:
              goto LABEL_141;
            default:
              goto LABEL_205;
          }
        }
        v89 = sub_168B9E0(v120);
        v93 = v121;
        if ( v121 )
        {
          v102 = v89;
          v93 = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v121 + 32LL))(v121);
          v89 = v102;
        }
        v111 = v93;
        v94 = sub_1587BC0(v89, (__int64 *)&v111, v89, v90, v91, v92);
        sub_AE9DF0((unsigned __int8 **)(*v94 + 32LL * v124 + 8), v56, 0x10u);
      }
      switch ( ((unsigned __int8)(*(_DWORD *)a4 >> 12) + 105) & 0x7F )
      {
        case 0:
LABEL_137:
          v81 = *(_QWORD *)(a4 + 8);
          if ( (*(_BYTE *)(v81 + 28) & 0x7F) == 0x3E )
          {
            v82 = *(_QWORD *)(v81 + 72);
            v72 = 5;
            v58 = v123;
            if ( (v82 & 0x10000000000LL) == 0 )
              v72 = ((v82 >> 38) & 2) + 4;
          }
          else
          {
            v58 = v123;
            v72 = 4;
          }
          goto LABEL_125;
        case 1:
          v58 = v123;
LABEL_143:
          v72 = 3;
          goto LABEL_125;
        case 2:
          v58 = v123;
LABEL_124:
          v72 = 1;
          goto LABEL_125;
        case 3:
          v58 = v123;
          v72 = 0;
          goto LABEL_125;
        case 4:
          v58 = v123;
LABEL_141:
          v72 = 2;
LABEL_125:
          if ( v58 )
          {
            sub_AE9DF0(v122, v72, 3u);
          }
          else if ( v125 )
          {
            v73 = sub_168B9E0(v120);
            v77 = v121;
            if ( v121 )
            {
              v101 = v73;
              v77 = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v121 + 32LL))(v121);
              v73 = v101;
            }
            v111 = v77;
            v78 = sub_1587BC0(v73, (__int64 *)&v111, v73, v74, v75, v76);
            sub_AE9DF0((unsigned __int8 **)(*v78 + 32LL * v124 + 8), v72, 3u);
          }
LABEL_130:
          ++v53;
          sub_15F7200(v120);
          if ( v54 != v53 )
            continue;
          v14 = v107;
          break;
        default:
          goto LABEL_205;
      }
      break;
    }
  }
  return v14;
}
