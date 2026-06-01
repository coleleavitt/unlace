void __fastcall sub_1657880(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  _QWORD *v9; // r13
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r13
  bool v18; // bl
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r12
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // r14
  unsigned __int8 *v27; // r12
  _BYTE *v28; // rdx
  __int64 v29; // rax
  unsigned __int8 *v30; // rbx
  unsigned __int8 *v31; // rdx
  __int64 v32; // rax
  _BOOL8 v33; // r12
  unsigned __int8 *v34; // rbx
  unsigned __int8 *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // r12
  unsigned __int8 *v45; // rbx
  _BYTE *v46; // rdx
  __int64 v47; // rax
  _BYTE *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 (*v52)(void); // rax
  __int64 *v53; // r15
  __int64 *v54; // r12
  __int64 v55; // r14
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // r14
  __int64 v60; // r15
  __int64 v61; // r14
  void *v62; // rdi
  __int64 v63; // rdx
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // r12
  __int64 v67; // r14
  __int64 v68; // r12
  void *v69; // rdi
  __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rdx
  int v73; // eax
  char v74; // al
  __int64 v75; // r9
  _QWORD *v76; // rax
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  char v84; // r13
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rbx
  unsigned __int64 v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r12
  __int64 v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rax
  __int64 v99; // r14
  __int64 v100; // r15
  __int64 v101; // r14
  void *v102; // rdi
  __int64 v103; // rax
  __int64 v104; // r15
  __int64 v105; // rdx
  __int64 v106; // r15
  void *v107; // rdi
  __int64 v108; // rsi
  __int64 v109; // rdi
  __int64 (__fastcall *v110)(__int64); // rax
  __int64 v111; // r15
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // r13
  __int64 v117; // rax
  _QWORD *v118; // rax
  __int64 v119; // r14
  unsigned __int8 *v120; // rdx
  __int64 v121; // rax
  unsigned __int8 *v122; // r13
  __int64 v123; // rdx
  int v124; // eax
  __int64 v125; // r13
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rdx
  int v129; // eax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // r12
  void *v134; // rdi
  __int64 v135; // rax
  __int64 v136; // r14
  __int64 v137; // r12
  __int64 v138; // r14
  void *v139; // rdi
  __int64 v140; // [rsp+0h] [rbp-E8h]
  __int64 v141; // [rsp+0h] [rbp-E8h]
  __int64 v142; // [rsp+0h] [rbp-E8h]
  __int64 v143; // [rsp+8h] [rbp-E0h]
  __int64 v144; // [rsp+8h] [rbp-E0h]
  __int64 v145; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v146; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v147[16]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v148; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v149; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v150; // [rsp+48h] [rbp-A0h]
  char v151; // [rsp+98h] [rbp-50h]
  unsigned int v152; // [rsp+A0h] [rbp-48h]
  char v153; // [rsp+A4h] [rbp-44h]

  v4 = *(_QWORD *)(a3 + 8);
  if ( ((*(_BYTE *)(v4 + 29) >> 5) & 3) != 1
    || (*(_BYTE *)a3 & 4) == 0
    || !(unsigned __int8)sub_B72F20(*(_QWORD *)(a3 + 8)) )
  {
    goto LABEL_2;
  }
  v49 = *(_BYTE **)(a3 + 16);
  if ( (v49[75] & 1) != 0 )
  {
    while ( 1 )
    {
      v50 = *(_QWORD *)(sub_B8C1B0((__int64)(v49 + 64)) + 16);
      v51 = (v50 & 4) != 0 ? *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF8LL) : v50 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v51 )
        break;
      v49 = (_BYTE *)(v51 - 64);
      if ( (*(_BYTE *)(v51 + 11) & 1) == 0 )
        goto LABEL_64;
    }
    v49 = nullptr;
  }
LABEL_64:
  v52 = *(__int64 (**)(void))(*(_QWORD *)v49 + 32LL);
  v141 = (char *)v52 == (char *)sub_A01140 ? sub_B70A60((__int64)v49) : v52();
  v53 = *(__int64 **)(a2 + 56);
  v54 = &v53[*(unsigned int *)(a2 + 64)];
  if ( v53 == v54 )
  {
LABEL_2:
    v140 = a1 + 8;
    goto LABEL_3;
  }
  while ( 1 )
  {
    v55 = *v53;
    if ( *v53 != v141 )
      break;
    v74 = *(_BYTE *)(a3 + 56);
    if ( (v74 & 1) != 0 )
    {
      v75 = *(_QWORD *)(a3 + 8);
      goto LABEL_96;
    }
LABEL_69:
    if ( v54 == ++v53 )
      goto LABEL_2;
  }
  if ( (unsigned int)sub_16562A0((_QWORD *)*v53, v141) - 1 <= 1 )
    goto LABEL_69;
  v74 = *(_BYTE *)(a3 + 56);
  v75 = *(_QWORD *)(a3 + 8);
  if ( (v74 & 1) == 0 )
  {
    sub_168B9F0(v147, a1 + 8, *(unsigned int *)(v75 + 24), 5756, 0);
    v89 = *(_QWORD *)(v55 + 48);
    if ( v89 )
      v90 = v89 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v90 = sub_A7AA70(*(_QWORD *)(a1 + 248), v55, v85, v86, v87, v88);
    if ( v151 )
    {
      sub_AE9DF0(&v149, v90, 8u);
    }
    else if ( v153 )
    {
      v95 = sub_168B9E0(v147);
      v96 = v148;
      if ( v148 )
        v96 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v148 + 32LL))(v148);
      v146 = v96;
      v97 = sub_1587BC0(v95, (__int64 *)&v146, v91, v92, v93, v94);
      sub_AE9DF0((unsigned __int8 **)(*v97 + 32LL * v152 + 8), v90, 8u);
    }
    goto LABEL_29;
  }
LABEL_96:
  if ( (v74 & 2) != 0 )
  {
    v76 = *(_QWORD **)(a3 + 64);
  }
  else
  {
    v108 = *(_QWORD *)(a3 + 24);
    v144 = v75;
    *(_BYTE *)(a3 + 56) = v74 | 2;
    v76 = (_QWORD *)sub_169D2C0(a1, v108);
    v75 = v144;
    if ( v76 )
    {
      v109 = (__int64)(v76 - 8);
      v110 = *(__int64 (__fastcall **)(__int64))(*(v76 - 8) + 32LL);
      if ( v110 == sub_A01140 )
        v76 = (_QWORD *)sub_B70A60(v109);
      else
        v76 = (_QWORD *)v110(v109);
      v75 = v144;
    }
    *(_QWORD *)(a3 + 64) = v76;
  }
  v143 = v75;
  if ( (_QWORD *)v55 == v76 )
    goto LABEL_69;
  v77 = sub_16562A0(v76, v55);
  if ( !v77 || v77 == 2 )
    goto LABEL_69;
  if ( (*(_BYTE *)(v143 + 28) & 0x7D) == 0x24
    || (*(_BYTE *)(v143 + 28) & 0x7F) == 0x47 && (*(_BYTE *)(*(_QWORD *)(v143 + 48) + 28LL) & 0x7F) == 0x26 )
  {
    v140 = a1 + 8;
    sub_168B9F0(v147, a1 + 8, *(unsigned int *)(v143 + 24), 5755, 0);
    LOBYTE(v111) = (*(_BYTE *)(sub_B8BF30(v143) + 28) & 0x7F) == 36;
    if ( v151 )
    {
      v122 = v149;
      v111 = (unsigned __int8)v111;
      if ( !v149 )
      {
        v128 = v150;
        v129 = *(_DWORD *)(v150 + 14976);
        if ( v129 )
        {
          v135 = (unsigned int)(v129 - 1);
          *(_DWORD *)(v150 + 14976) = v135;
          v122 = *(unsigned __int8 **)(v128 + 8 * v135 + 14848);
          v136 = *((unsigned int *)v122 + 134);
          *v122 = 0;
          v137 = *((_QWORD *)v122 + 66);
          *((_DWORD *)v122 + 106) = 0;
          v138 = v137 + (v136 << 6);
          while ( v137 != v138 )
          {
            while ( 1 )
            {
              v138 -= 64;
              v139 = *(void **)(v138 + 24);
              if ( v139 == (void *)(v138 + 40) )
                break;
              operator delete(v139);
              if ( v137 == v138 )
                goto LABEL_164;
            }
          }
LABEL_164:
          *((_DWORD *)v122 + 134) = 0;
        }
        else
        {
          v122 = (unsigned __int8 *)operator new(0x3A0u);
          *v122 = 0;
          *((_QWORD *)v122 + 12) = v122 + 112;
          *((_QWORD *)v122 + 16) = v122 + 144;
          *((_QWORD *)v122 + 20) = v122 + 176;
          *((_QWORD *)v122 + 24) = v122 + 208;
          *((_QWORD *)v122 + 28) = v122 + 240;
          *((_QWORD *)v122 + 32) = v122 + 272;
          *((_QWORD *)v122 + 36) = v122 + 304;
          *((_QWORD *)v122 + 40) = v122 + 336;
          *((_QWORD *)v122 + 44) = v122 + 368;
          *((_QWORD *)v122 + 48) = v122 + 400;
          *((_QWORD *)v122 + 52) = v122 + 432;
          v122[112] = 0;
          *((_QWORD *)v122 + 13) = 0;
          *((_QWORD *)v122 + 17) = 0;
          v122[144] = 0;
          *((_QWORD *)v122 + 21) = 0;
          v122[176] = 0;
          *((_QWORD *)v122 + 25) = 0;
          v122[208] = 0;
          *((_QWORD *)v122 + 29) = 0;
          v122[240] = 0;
          *((_QWORD *)v122 + 33) = 0;
          v122[272] = 0;
          *((_QWORD *)v122 + 37) = 0;
          v122[304] = 0;
          *((_QWORD *)v122 + 41) = 0;
          v122[336] = 0;
          *((_QWORD *)v122 + 45) = 0;
          v122[368] = 0;
          *((_QWORD *)v122 + 49) = 0;
          v122[400] = 0;
          *((_QWORD *)v122 + 53) = 0x800000000LL;
          *((_QWORD *)v122 + 66) = v122 + 544;
          *((_QWORD *)v122 + 67) = 0x600000000LL;
        }
        v149 = v122;
      }
      v122[*v122 + 1] = 2;
      v120 = v149;
    }
    else
    {
      if ( !v153 )
      {
        sub_15F7200(v147);
        goto LABEL_3;
      }
      v116 = sub_168B9E0(v147);
      v117 = v148;
      if ( v148 )
        v117 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v148 + 32LL))(v148);
      v146 = v117;
      v111 = (unsigned __int8)v111;
      v118 = sub_1587BC0(v116, (__int64 *)&v146, v112, v113, v114, v115);
      v119 = *v118 + 32LL * v152;
      if ( !*(_QWORD *)(v119 + 8) )
      {
        v123 = *(_QWORD *)(v119 + 16);
        v124 = *(_DWORD *)(v123 + 14976);
        if ( v124 )
        {
          v130 = (unsigned int)(v124 - 1);
          *(_DWORD *)(v123 + 14976) = v130;
          v125 = *(_QWORD *)(v123 + 8 * v130 + 14848);
          v131 = *(unsigned int *)(v125 + 536);
          *(_BYTE *)v125 = 0;
          v132 = *(_QWORD *)(v125 + 528);
          *(_DWORD *)(v125 + 424) = 0;
          v133 = v132 + (v131 << 6);
          while ( v132 != v133 )
          {
            v133 -= 64;
            v134 = *(void **)(v133 + 24);
            if ( v134 != (void *)(v133 + 40) )
            {
              v145 = v132;
              operator delete(v134);
              v132 = v145;
            }
          }
          *(_DWORD *)(v125 + 536) = 0;
        }
        else
        {
          v125 = operator new(0x3A0u);
          *(_BYTE *)v125 = 0;
          v126 = v125 + 96;
          do
          {
            v127 = v126 + 16;
            *(_QWORD *)(v126 + 8) = 0;
            v126 += 32;
            *(_QWORD *)(v126 - 32) = v127;
            *(_BYTE *)(v126 - 16) = 0;
          }
          while ( v126 != v125 + 416 );
          *(_QWORD *)(v125 + 416) = v125 + 432;
          *(_QWORD *)(v125 + 424) = 0x800000000LL;
          *(_QWORD *)(v125 + 528) = v125 + 544;
          *(_QWORD *)(v125 + 536) = 0x600000000LL;
        }
        *(_QWORD *)(v119 + 8) = v125;
      }
      *(_BYTE *)(*(_QWORD *)(v119 + 8) + **(unsigned __int8 **)(v119 + 8) + 1LL) = 2;
      v120 = *(unsigned __int8 **)(v119 + 8);
    }
    v121 = *v120;
    *v120 = v121 + 1;
    *(_QWORD *)&v120[8 * v121 + 16] = v111;
    v84 = v151;
  }
  else
  {
    v140 = a1 + 8;
    sub_168B9F0(v147, a1 + 8, *(unsigned int *)(v143 + 24), 5757, 0);
    v82 = *(_QWORD *)(v55 + 48);
    if ( v82 )
      v83 = v82 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v83 = sub_A7AA70(*(_QWORD *)(a1 + 248), v55, v78, v79, v80, v81);
    v146 = v83;
    v84 = *(_BYTE *)(sub_162B6D0((__int64)v147, (__int64 *)&v146) + 120);
  }
  sub_15F7200(v147);
  if ( v84 )
    return;
LABEL_3:
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) )
  {
    while ( 1 )
    {
      v5 = *(_BYTE *)(v4 + 28) & 0x7F;
      if ( (unsigned int)(v5 - 40) > 6 )
      {
        if ( (unsigned int)(v5 - 34) > 5 )
        {
          if ( (unsigned int)(v5 - 64) > 2 )
          {
            if ( (unsigned int)(v5 - 58) > 4 || (unsigned int)(v5 - 59) <= 2 && sub_B97450(v4) )
              break;
            v6 = *(_QWORD *)(v4 + 96);
            if ( (v6 & 3) != 0 )
              break;
          }
          else
          {
            v6 = *(_QWORD *)(v4 + 64);
            if ( (v6 & 3) != 0 )
              break;
          }
        }
        else
        {
          v6 = *(_QWORD *)(v4 + 104);
          if ( (v6 & 3) != 0 )
            break;
        }
      }
      else
      {
        v6 = *(_QWORD *)(v4 + 72);
        if ( (v6 & 3) != 0 )
          break;
      }
      v7 = v6 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v7 )
      {
        v4 = v7;
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 24LL))(v7) )
          continue;
      }
      break;
    }
  }
  v8 = sub_1654A20(v4);
  v9 = (_QWORD *)(*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
    v9 = (_QWORD *)*v9;
  v10 = v8 + 64;
  v11 = v4;
  if ( v8 )
    v8 += 64LL;
  if ( (_QWORD *)v8 != v9 )
  {
LABEL_13:
    v12 = *(_QWORD *)(sub_B8C1B0((__int64)v9) + 16);
    if ( (v12 & 4) != 0 )
    {
      while ( 1 )
      {
        v13 = (__int64)v9;
        if ( v8 == *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL) )
          break;
LABEL_15:
        v14 = *(_QWORD *)(sub_B8C1B0(v13) + 16);
        if ( (v14 & 4) != 0 )
        {
          v9 = *(_QWORD **)(v14 & 0xFFFFFFFFFFFFFFF8LL);
          goto LABEL_13;
        }
        v9 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
        v12 = *(_QWORD *)(sub_B8C1B0((__int64)v9) + 16);
        if ( (v12 & 4) == 0 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      v13 = (__int64)v9;
      if ( v8 != (v12 & 0xFFFFFFFFFFFFFFF8LL) )
        goto LABEL_15;
    }
    v11 = sub_B8C1B0(v13);
  }
  v15 = sub_B8E970(v10);
  if ( !v15 || v11 == v15 )
  {
LABEL_26:
    v17 = 1;
    goto LABEL_27;
  }
  if ( (*(_BYTE *)(v15 + 28) & 0x7F) != 0x59 )
  {
    do
    {
      v16 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v15 = v16;
      if ( !v16 || v11 == v16 )
        goto LABEL_26;
    }
    while ( (*(_BYTE *)(v16 + 28) & 0x7F) != 0x59 );
  }
  v17 = 0;
LABEL_27:
  sub_168B9F0(v147, v140, *(unsigned int *)(v4 + 24), 5754, 0);
  v18 = ((*(_BYTE *)(v4 + 29) >> 5) & 3) == 1;
  if ( v151 )
  {
    v33 = v18;
    v34 = v149;
    if ( !v149 )
    {
      v56 = v150;
      v57 = *(_DWORD *)(v150 + 14976);
      if ( v57 )
      {
        v58 = (unsigned int)(v57 - 1);
        *(_DWORD *)(v150 + 14976) = v58;
        v34 = *(unsigned __int8 **)(v56 + 8 * v58 + 14848);
        v59 = *((unsigned int *)v34 + 134);
        *v34 = 0;
        v60 = *((_QWORD *)v34 + 66);
        *((_DWORD *)v34 + 106) = 0;
        v61 = v60 + (v59 << 6);
        while ( v60 != v61 )
        {
          while ( 1 )
          {
            v61 -= 64;
            v62 = *(void **)(v61 + 24);
            if ( v62 == (void *)(v61 + 40) )
              break;
            operator delete(v62);
            if ( v60 == v61 )
              goto LABEL_76;
          }
        }
LABEL_76:
        *((_DWORD *)v34 + 134) = 0;
      }
      else
      {
        v34 = (unsigned __int8 *)operator new(0x3A0u);
        *v34 = 0;
        *((_QWORD *)v34 + 12) = v34 + 112;
        *((_QWORD *)v34 + 16) = v34 + 144;
        *((_QWORD *)v34 + 20) = v34 + 176;
        *((_QWORD *)v34 + 24) = v34 + 208;
        *((_QWORD *)v34 + 28) = v34 + 240;
        *((_QWORD *)v34 + 32) = v34 + 272;
        *((_QWORD *)v34 + 36) = v34 + 304;
        *((_QWORD *)v34 + 40) = v34 + 336;
        *((_QWORD *)v34 + 44) = v34 + 368;
        *((_QWORD *)v34 + 48) = v34 + 400;
        *((_QWORD *)v34 + 52) = v34 + 432;
        *((_QWORD *)v34 + 13) = 0;
        v34[112] = 0;
        *((_QWORD *)v34 + 17) = 0;
        v34[144] = 0;
        *((_QWORD *)v34 + 21) = 0;
        v34[176] = 0;
        *((_QWORD *)v34 + 25) = 0;
        v34[208] = 0;
        *((_QWORD *)v34 + 29) = 0;
        v34[240] = 0;
        *((_QWORD *)v34 + 33) = 0;
        v34[272] = 0;
        *((_QWORD *)v34 + 37) = 0;
        v34[304] = 0;
        *((_QWORD *)v34 + 41) = 0;
        v34[336] = 0;
        *((_QWORD *)v34 + 45) = 0;
        v34[368] = 0;
        *((_QWORD *)v34 + 49) = 0;
        v34[400] = 0;
        *((_QWORD *)v34 + 53) = 0x800000000LL;
        *((_QWORD *)v34 + 66) = v34 + 544;
        *((_QWORD *)v34 + 67) = 0x600000000LL;
      }
      v149 = v34;
    }
    v34[*v34 + 1] = 3;
    v35 = v149;
    v36 = *v149;
    *v149 = v36 + 1;
    *(_QWORD *)&v35[8 * v36 + 16] = v33;
    if ( v151 )
      goto LABEL_42;
    goto LABEL_51;
  }
  if ( v153 )
  {
    v23 = sub_168B9E0(v147);
    v24 = v148;
    if ( v148 )
      v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v148 + 32LL))(v148);
    v146 = v24;
    v25 = sub_1587BC0(v23, (__int64 *)&v146, v19, v20, v21, v22);
    v26 = *v25 + 32LL * v152;
    v27 = *(unsigned __int8 **)(v26 + 8);
    if ( !v27 )
    {
      v72 = *(_QWORD *)(v26 + 16);
      v73 = *(_DWORD *)(v72 + 14976);
      if ( v73 )
      {
        v103 = (unsigned int)(v73 - 1);
        *(_DWORD *)(v72 + 14976) = v103;
        v27 = *(unsigned __int8 **)(v72 + 8 * v103 + 14848);
        v104 = *((unsigned int *)v27 + 134);
        v105 = *((_QWORD *)v27 + 66);
        *v27 = 0;
        *((_DWORD *)v27 + 106) = 0;
        v106 = v105 + (v104 << 6);
        while ( v105 != v106 )
        {
          while ( 1 )
          {
            v106 -= 64;
            v107 = *(void **)(v106 + 24);
            if ( v107 == (void *)(v106 + 40) )
              break;
            v142 = v105;
            operator delete(v107);
            v105 = v142;
            if ( v142 == v106 )
              goto LABEL_127;
          }
        }
LABEL_127:
        *((_DWORD *)v27 + 134) = 0;
      }
      else
      {
        v27 = (unsigned __int8 *)operator new(0x3A0u);
        *v27 = 0;
        *((_QWORD *)v27 + 12) = v27 + 112;
        *((_QWORD *)v27 + 16) = v27 + 144;
        *((_QWORD *)v27 + 20) = v27 + 176;
        *((_QWORD *)v27 + 24) = v27 + 208;
        *((_QWORD *)v27 + 28) = v27 + 240;
        *((_QWORD *)v27 + 32) = v27 + 272;
        *((_QWORD *)v27 + 36) = v27 + 304;
        *((_QWORD *)v27 + 40) = v27 + 336;
        *((_QWORD *)v27 + 44) = v27 + 368;
        *((_QWORD *)v27 + 48) = v27 + 400;
        *((_QWORD *)v27 + 52) = v27 + 432;
        *((_QWORD *)v27 + 13) = 0;
        v27[112] = 0;
        *((_QWORD *)v27 + 17) = 0;
        v27[144] = 0;
        *((_QWORD *)v27 + 21) = 0;
        v27[176] = 0;
        *((_QWORD *)v27 + 25) = 0;
        v27[208] = 0;
        *((_QWORD *)v27 + 29) = 0;
        v27[240] = 0;
        *((_QWORD *)v27 + 33) = 0;
        v27[272] = 0;
        *((_QWORD *)v27 + 37) = 0;
        v27[304] = 0;
        *((_QWORD *)v27 + 41) = 0;
        v27[336] = 0;
        *((_QWORD *)v27 + 45) = 0;
        v27[368] = 0;
        *((_QWORD *)v27 + 49) = 0;
        v27[400] = 0;
        *((_QWORD *)v27 + 53) = 0x800000000LL;
        *((_QWORD *)v27 + 66) = v27 + 544;
        *((_QWORD *)v27 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v26 + 8) = v27;
    }
    v27[*v27 + 1] = 3;
    v28 = *(_BYTE **)(v26 + 8);
    v29 = (unsigned __int8)*v28;
    *v28 = v29 + 1;
    *(_QWORD *)&v28[8 * v29 + 16] = v18;
    if ( v151 )
    {
LABEL_42:
      v30 = v149;
      if ( !v149 )
      {
        v63 = v150;
        v64 = *(_DWORD *)(v150 + 14976);
        if ( v64 )
        {
          v65 = (unsigned int)(v64 - 1);
          *(_DWORD *)(v150 + 14976) = v65;
          v30 = *(unsigned __int8 **)(v63 + 8 * v65 + 14848);
          v66 = *((unsigned int *)v30 + 134);
          *v30 = 0;
          v67 = *((_QWORD *)v30 + 66);
          *((_DWORD *)v30 + 106) = 0;
          v68 = v67 + (v66 << 6);
          while ( v67 != v68 )
          {
            while ( 1 )
            {
              v68 -= 64;
              v69 = *(void **)(v68 + 24);
              if ( v69 == (void *)(v68 + 40) )
                break;
              operator delete(v69);
              if ( v67 == v68 )
                goto LABEL_82;
            }
          }
LABEL_82:
          *((_DWORD *)v30 + 134) = 0;
        }
        else
        {
          v30 = (unsigned __int8 *)operator new(0x3A0u);
          *v30 = 0;
          *((_QWORD *)v30 + 12) = v30 + 112;
          *((_QWORD *)v30 + 16) = v30 + 144;
          *((_QWORD *)v30 + 20) = v30 + 176;
          *((_QWORD *)v30 + 24) = v30 + 208;
          *((_QWORD *)v30 + 28) = v30 + 240;
          *((_QWORD *)v30 + 32) = v30 + 272;
          *((_QWORD *)v30 + 36) = v30 + 304;
          *((_QWORD *)v30 + 40) = v30 + 336;
          *((_QWORD *)v30 + 44) = v30 + 368;
          *((_QWORD *)v30 + 48) = v30 + 400;
          *((_QWORD *)v30 + 52) = v30 + 432;
          *((_QWORD *)v30 + 13) = 0;
          v30[112] = 0;
          *((_QWORD *)v30 + 17) = 0;
          v30[144] = 0;
          *((_QWORD *)v30 + 21) = 0;
          v30[176] = 0;
          *((_QWORD *)v30 + 25) = 0;
          v30[208] = 0;
          *((_QWORD *)v30 + 29) = 0;
          v30[240] = 0;
          *((_QWORD *)v30 + 33) = 0;
          v30[272] = 0;
          *((_QWORD *)v30 + 37) = 0;
          v30[304] = 0;
          *((_QWORD *)v30 + 41) = 0;
          v30[336] = 0;
          *((_QWORD *)v30 + 45) = 0;
          v30[368] = 0;
          *((_QWORD *)v30 + 49) = 0;
          v30[400] = 0;
          *((_QWORD *)v30 + 53) = 0x800000000LL;
          *((_QWORD *)v30 + 66) = v30 + 544;
          *((_QWORD *)v30 + 67) = 0x600000000LL;
        }
        v149 = v30;
      }
      v30[*v30 + 1] = 2;
      v31 = v149;
      v32 = *v149;
      *v149 = v32 + 1;
      *(_QWORD *)&v31[8 * v32 + 16] = v17;
      goto LABEL_29;
    }
LABEL_51:
    if ( v153 )
    {
      v39 = sub_168B9E0(v147);
      v42 = v148;
      if ( v148 )
        v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v148 + 32LL))(v148);
      v146 = v42;
      v43 = sub_1587BC0(v39, (__int64 *)&v146, v37, v38, v40, v41);
      v44 = *v43 + 32LL * v152;
      v45 = *(unsigned __int8 **)(v44 + 8);
      if ( !v45 )
      {
        v70 = *(_QWORD *)(v44 + 16);
        v71 = *(_DWORD *)(v70 + 14976);
        if ( v71 )
        {
          v98 = (unsigned int)(v71 - 1);
          *(_DWORD *)(v70 + 14976) = v98;
          v45 = *(unsigned __int8 **)(v70 + 8 * v98 + 14848);
          v99 = *((unsigned int *)v45 + 134);
          *v45 = 0;
          v100 = *((_QWORD *)v45 + 66);
          *((_DWORD *)v45 + 106) = 0;
          v101 = v100 + (v99 << 6);
          while ( v100 != v101 )
          {
            while ( 1 )
            {
              v101 -= 64;
              v102 = *(void **)(v101 + 24);
              if ( v102 == (void *)(v101 + 40) )
                break;
              operator delete(v102);
              if ( v100 == v101 )
                goto LABEL_122;
            }
          }
LABEL_122:
          *((_DWORD *)v45 + 134) = 0;
        }
        else
        {
          v45 = (unsigned __int8 *)operator new(0x3A0u);
          *v45 = 0;
          *((_QWORD *)v45 + 12) = v45 + 112;
          *((_QWORD *)v45 + 16) = v45 + 144;
          *((_QWORD *)v45 + 20) = v45 + 176;
          *((_QWORD *)v45 + 24) = v45 + 208;
          *((_QWORD *)v45 + 28) = v45 + 240;
          *((_QWORD *)v45 + 32) = v45 + 272;
          *((_QWORD *)v45 + 36) = v45 + 304;
          *((_QWORD *)v45 + 40) = v45 + 336;
          *((_QWORD *)v45 + 44) = v45 + 368;
          *((_QWORD *)v45 + 48) = v45 + 400;
          *((_QWORD *)v45 + 52) = v45 + 432;
          *((_QWORD *)v45 + 13) = 0;
          v45[112] = 0;
          *((_QWORD *)v45 + 17) = 0;
          v45[144] = 0;
          *((_QWORD *)v45 + 21) = 0;
          v45[176] = 0;
          *((_QWORD *)v45 + 25) = 0;
          v45[208] = 0;
          *((_QWORD *)v45 + 29) = 0;
          v45[240] = 0;
          *((_QWORD *)v45 + 33) = 0;
          v45[272] = 0;
          *((_QWORD *)v45 + 37) = 0;
          v45[304] = 0;
          *((_QWORD *)v45 + 41) = 0;
          v45[336] = 0;
          *((_QWORD *)v45 + 45) = 0;
          v45[368] = 0;
          *((_QWORD *)v45 + 49) = 0;
          v45[400] = 0;
          *((_QWORD *)v45 + 53) = 0x800000000LL;
          *((_QWORD *)v45 + 66) = v45 + 544;
          *((_QWORD *)v45 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v44 + 8) = v45;
      }
      v45[*v45 + 1] = 2;
      v46 = *(_BYTE **)(v44 + 8);
      v47 = (unsigned __int8)*v46;
      *v46 = v47 + 1;
      *(_QWORD *)&v46[8 * v47 + 16] = v17;
    }
  }
LABEL_29:
  sub_15F7200(v147);
}
