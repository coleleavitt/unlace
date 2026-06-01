__int64 __fastcall sub_17DE740(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE *v14; // rdi
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rcx
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r14
  __int64 (*v26)(); // r15
  size_t v27; // rax
  _BYTE *v28; // r14
  __int64 v29; // rax
  char v30; // al
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // ebx
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  _BYTE *v39; // rdi
  _BYTE *v40; // rax
  __int64 *v41; // rbx
  unsigned int v42; // eax
  __int64 j; // rbx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int8 v46; // al
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 *v54; // r15
  __int64 v55; // rcx
  __int64 *k; // rbx
  unsigned __int64 v57; // r14
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  _BYTE *v63; // rdi
  __int64 v64; // rax
  __int64 *v65; // rax
  __int64 v66; // rdx
  __int64 *v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  _BYTE *v70; // rdi
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  _BYTE *v78; // rbx
  unsigned __int8 v79; // al
  __int64 v80; // rdx
  __int64 result; // rax
  __int64 v82; // rsi
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 *v85; // rbx
  unsigned int v86; // eax
  __int64 v87; // rcx
  __int64 *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  _BYTE *v94; // r14
  _QWORD *v95; // r15
  __int64 *v96; // rax
  __int64 **v97; // rax
  char v98; // al
  __int64 v99; // rcx
  __int64 *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  _BYTE *v106; // r14
  _BYTE *v107; // rdi
  __int64 *v108; // r8
  char *v109; // rax
  __int64 v110; // rcx
  char *v111; // rdx
  __int64 v112; // rdi
  __int64 v113; // rcx
  char *v114; // rcx
  const char *v115; // rax
  const char *v116; // rax
  __int64 *v117; // rax
  __int64 v118; // rcx
  char *v119; // rsi
  char *i; // rax
  __int64 *v121; // rax
  char v122; // al
  char v123; // al
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // [rsp+0h] [rbp-E8h]
  __int64 *v130; // [rsp+0h] [rbp-E8h]
  int v131; // [rsp+Ch] [rbp-DCh]
  int v132; // [rsp+14h] [rbp-D4h] BYREF
  _BYTE *v133; // [rsp+18h] [rbp-D0h] BYREF
  __int64 (__fastcall **v134)(); // [rsp+20h] [rbp-C8h] BYREF
  __int64 v135; // [rsp+28h] [rbp-C0h]
  int *v136; // [rsp+30h] [rbp-B8h]

  v131 = a5;
  if ( !a3 )
  {
    sub_15F1950(a1, a2, 0, (__int64)a4, a5, a6);
    sub_18C74E0(a1, *(unsigned int *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640), 0, 4);
    return 0;
  }
  v7 = a2;
  v8 = (__int64)a3;
  if ( (a3[28] & 0x7F) == 0x47 )
  {
    a3 = *((_BYTE **)a3 + 6);
    v133 = a3;
    if ( !a3 || (a3[80] & 0x7Fu) - 35 > 3 )
      goto LABEL_5;
  }
  else
  {
    v98 = a3[80];
    v133 = a3;
    if ( (v98 & 0x7Fu) - 35 > 3 )
      goto LABEL_5;
  }
  if ( !sub_C1DDA0((__int64)a3) )
  {
    a3 = v133;
LABEL_5:
    a2 = *(unsigned int *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
    sub_18C7FE0(a1, a2, a3);
  }
  v14 = v133;
  if ( (v133[29] & 1) == 0 )
    goto LABEL_19;
  v15 = sub_B8C3D0((__int64)v133, a2, v10, v11, v12, v13);
  v10 = *v15;
  v16 = *v15 + 8LL * *((unsigned int *)v15 + 2);
  if ( v10 >= v16 )
  {
    if ( v10 == v16 )
      goto LABEL_13;
    if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 411 )
    {
      v17 = (__int64 *)(v16 + 8);
      do
      {
        v11 = (__int64)v17;
        if ( (__int64 *)v10 == v17 )
          goto LABEL_13;
        v18 = *v17++;
      }
      while ( *(_WORD *)(v18 + 36) != 411 );
    }
LABEL_91:
    v87 = *(_QWORD *)v10;
    if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 411 )
    {
      v88 = (__int64 *)(v10 + 8);
      do
        v87 = *v88++;
      while ( *(_WORD *)(v87 + 36) != 411 );
    }
    sub_168B9F0((__int64)&v134, (__int64 *)(a1 + 8), *(_DWORD *)(v87 + 24), 0xB98u, 0);
    v89 = sub_1795A40((__int64)&v134, (__int64 *)&v133);
    v132 = 0;
    sub_1587D10(v89, &v132);
    sub_15F7200(&v134);
    v94 = v133;
    if ( (v133[29] & 1) != 0 )
    {
      v95 = sub_B8C3D0((__int64)v133, (__int64)&v132, v90, v91, v92, v93);
      sub_179C6B0((__int64)v95);
      if ( !*((_DWORD *)v95 + 2) )
        v94[29] &= ~1u;
      v94 = v133;
    }
    a2 = 1;
    sub_B88650((__int64)v94, 1);
    goto LABEL_13;
  }
  v11 = v10;
  a2 = *(_QWORD *)v10;
  if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) == 411 )
  {
LABEL_90:
    if ( v16 == v11 )
      goto LABEL_13;
    goto LABEL_91;
  }
  while ( 1 )
  {
    v11 += 8;
    if ( v16 == v11 )
      break;
    a2 = *(_QWORD *)v11;
    if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 411 )
      goto LABEL_90;
  }
LABEL_13:
  v14 = v133;
  if ( (v133[29] & 1) == 0 )
    goto LABEL_19;
  v19 = sub_B8C3D0((__int64)v133, a2, v10, v11, v12, v13);
  v10 = *v19;
  v20 = *v19 + 8LL * *((unsigned int *)v19 + 2);
  if ( v10 < v20 )
  {
    v11 = v10;
    while ( 1 )
    {
      a2 = *(_QWORD *)v11;
      if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 415 )
        break;
      v11 += 8;
      if ( v20 == v11 )
        goto LABEL_18;
    }
    if ( v20 != v11 )
    {
LABEL_118:
      v99 = *(_QWORD *)v10;
      if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 415 )
      {
        v100 = (__int64 *)(v10 + 8);
        do
          v99 = *v100++;
        while ( *(_WORD *)(v99 + 36) != 415 );
      }
      sub_168B9F0((__int64)&v134, (__int64 *)(a1 + 8), *(_DWORD *)(v99 + 24), 0xB98u, 0);
      v101 = sub_1795A40((__int64)&v134, (__int64 *)&v133);
      v132 = 1;
      sub_1587D10(v101, &v132);
      sub_15F7200(&v134);
      v106 = v133;
      v107 = v133;
      if ( (v133[29] & 1) == 0 )
        goto LABEL_142;
      v108 = sub_B8C3D0((__int64)v133, (__int64)&v132, v102, v103, v104, v105);
      v109 = (char *)*v108;
      v110 = 8LL * *((unsigned int *)v108 + 2);
      v111 = (char *)(*v108 + v110);
      v112 = v110 >> 3;
      v113 = v110 >> 5;
      if ( v113 )
      {
        if ( *(_WORD *)(*(_QWORD *)v109 + 36LL) == 415 )
        {
          v119 = (char *)*v108;
        }
        else if ( *(_WORD *)(*((_QWORD *)v109 + 1) + 36LL) == 415 )
        {
          v119 = v109 + 8;
        }
        else if ( *(_WORD *)(*((_QWORD *)v109 + 2) + 36LL) == 415 )
        {
          v119 = v109 + 16;
        }
        else
        {
          v114 = &v109[32 * v113];
          if ( *(_WORD *)(*((_QWORD *)v109 + 3) + 36LL) == 415 )
          {
            v119 = v109 + 24;
          }
          else
          {
            while ( 1 )
            {
              v119 = v109 + 32;
              if ( v114 == v109 + 32 )
              {
                v112 = (v111 - v119) >> 3;
                goto LABEL_135;
              }
              if ( *(_WORD *)(*((_QWORD *)v109 + 4) + 36LL) == 415 )
                goto LABEL_156;
              if ( *(_WORD *)(*((_QWORD *)v109 + 5) + 36LL) == 415 )
              {
                v119 = v109 + 40;
                goto LABEL_156;
              }
              if ( *(_WORD *)(*((_QWORD *)v109 + 6) + 36LL) == 415 )
              {
                v119 = v109 + 48;
                goto LABEL_156;
              }
              if ( *(_WORD *)(*((_QWORD *)v109 + 7) + 36LL) == 415 )
                break;
              v109 += 32;
            }
            v119 = v109 + 56;
          }
        }
        goto LABEL_156;
      }
      v119 = (char *)*v108;
LABEL_135:
      if ( v112 != 2 )
      {
        if ( v112 != 3 )
        {
          if ( v112 != 1 )
          {
LABEL_138:
            v119 = v111;
LABEL_139:
            v130 = v108;
            sub_17A9430(v108, v119, v111);
            if ( !*((_DWORD *)v130 + 2) )
              v106[29] &= ~1u;
            v107 = v133;
LABEL_142:
            a2 = 1;
            sub_B88650((__int64)v107, 1);
            v14 = v133;
            goto LABEL_19;
          }
LABEL_200:
          if ( *(_WORD *)(*(_QWORD *)v119 + 36LL) != 415 )
            goto LABEL_138;
LABEL_156:
          if ( v111 != v119 )
          {
            for ( i = v119 + 8; v111 != i; i += 8 )
            {
              if ( *(_WORD *)(*(_QWORD *)i + 36LL) != 415 )
              {
                *(_QWORD *)v119 = *(_QWORD *)i;
                v119 += 8;
              }
            }
          }
          goto LABEL_139;
        }
        if ( *(_WORD *)(*(_QWORD *)v119 + 36LL) == 415 )
          goto LABEL_156;
        v119 += 8;
      }
      if ( *(_WORD *)(*(_QWORD *)v119 + 36LL) == 415 )
        goto LABEL_156;
      v119 += 8;
      goto LABEL_200;
    }
LABEL_18:
    v14 = v133;
    goto LABEL_19;
  }
  if ( v10 == v20 )
    goto LABEL_18;
  if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) == 415 )
    goto LABEL_118;
  v117 = (__int64 *)(v20 + 8);
  while ( 1 )
  {
    v11 = (__int64)v117;
    if ( (__int64 *)v10 == v117 )
      break;
    v118 = *v117++;
    if ( *(_WORD *)(v118 + 36) == 415 )
      goto LABEL_118;
  }
  v14 = v133;
LABEL_19:
  v25 = sub_17A75A0((__int64)v14, a2, v10, v11, v12, v13);
  if ( !v25
    || (v22 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL), (unsigned int)(v22[62] - 3) > 2)
    || (v129 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL),
        v26 = *(__int64 (**)())(*(_QWORD *)v22 + 584LL),
        v27 = j__strlen("fmv"),
        a2 = (__int64)sub_A55EE0,
        v26 != sub_A55EE0)
    && (a2 = (__int64)"fmv", ((unsigned __int8 (__fastcall *)(__int64, char *, size_t))v26)(v129, "fmv", v27))
    || sub_17A1CC0(v25) )
  {
    v28 = v133;
    if ( (v133[28] & 0x7F) == 0x26 )
    {
      if ( (unsigned int)sub_B77D20((__int64)v133) == 2
        && sub_B98FC0((__int64)v28, a2)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 340LL) == 10 )
      {
        a2 = (__int64)v28;
        sub_1E01910(a1, v28);
      }
      v28 = v133;
    }
    v29 = *((_QWORD *)v28 + 10);
    if ( (v29 & 0x4000000000LL) == 0 && (v29 & 0x40000000) == 0 )
    {
      if ( !(unsigned __int8)sub_B77990((__int64)v28) )
      {
        a2 = (__int64)v133;
        sub_17B9710(a1, (__int64)v133, nullptr, (__int64)a4, v23, v24);
        if ( a4 )
        {
          if ( *a4 )
            return v8;
        }
      }
      v28 = v133;
    }
    v30 = v28[80];
    v28[84] |= 0x40u;
    if ( (v30 & 0x7Fu) - 35 <= 3
      && (v31 = sub_B72690((__int64)(v28 + 72))) != 0
      && v31 != 64
      && sub_B96EF0(v31 - 64)
      && sub_C1DDA0((__int64)v28)
      && (unsigned __int8)sub_B77A80((__int64)v28) )
    {
      if ( ((unsigned int)(*(__int64 *)(sub_B77B20((__int64)v133) + 16) >> 1) & 3) - 1 <= 2 )
      {
        sub_168B9F0((__int64)&v134, (__int64 *)(a1 + 8), *((_DWORD *)v133 + 6), 0xFFBu, 0);
        sub_15F7200(&v134);
        sub_B88650((__int64)v133, 1);
        sub_15F1950(a1, 1, v125, v126, v127, v128);
      }
      else
      {
        sub_17AC8F0(a1, v8);
      }
    }
    else
    {
      sub_15F1950(a1, a2, v21, (__int64)v22, v23, v24);
    }
    v32 = 0;
    v35 = sub_B75A50((__int64)v133, 0);
    if ( v35 )
    {
      v115 = (const char *)sub_FBD4B0(*(__int64 **)(*(_QWORD *)(a1 + 248) + 17520LL), v35);
      v32 = 102;
      if ( !strchr(v115, 102) )
      {
        v116 = (const char *)sub_FBD4B0(*(__int64 **)(*(_QWORD *)(a1 + 248) + 17520LL), v35);
        v32 = 105;
        if ( !strchr(v116, 105) )
        {
          sub_168B9F0((__int64)&v134, (__int64 *)(a1 + 8), *((_DWORD *)v133 + 6), 0xD14u, 0);
          sub_1795A40((__int64)&v134, (__int64 *)&v133);
          sub_15F7200(&v134);
          v32 = 1;
          sub_B88650((__int64)v133, 1);
        }
      }
    }
    v36 = sub_C1D490((__int64)v133, v32, v33, v34);
    v37 = v36 & 0xFFFFFFFFFFFFFFF0LL;
    v38 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v38 + 17) & 4) == 0 )
    {
      v39 = v133;
      v37 = *(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v37 + 16) == 13 )
      {
        v37 = *(unsigned __int16 *)(v37 + 18);
        LOWORD(v37) = ((unsigned __int16)v37 >> 3) & 0x1FF;
        if ( (_WORD)v37 == 435 )
          goto LABEL_35;
      }
      if ( (char)v133[28] < 0 || v131 == 2 )
        goto LABEL_35;
      v82 = *((unsigned int *)v133 + 6);
      if ( (unsigned __int8)sub_1E63CF0(a1, v82, v36, 1, 3858)
        || (v132 = 0,
            v124 = sub_C1D490((__int64)v133, v82, v83, v84),
            v32 = *((unsigned int *)v133 + 6),
            LODWORD(v135) = 2872,
            v134 = off_2BC6948,
            v136 = &v132,
            (unsigned __int8)sub_1866EA0(a1, v32, v124, &v134)) )
      {
        v32 = 1;
        sub_B88650((__int64)v133, 1);
        v39 = v133;
        if ( v7 )
          goto LABEL_36;
        goto LABEL_81;
      }
    }
    v39 = v133;
LABEL_35:
    if ( v7 )
    {
LABEL_36:
      v40 = v39 + 72;
      if ( !v39 )
        v40 = nullptr;
      *(_QWORD *)(a1 + 544) = v40;
      *(_QWORD *)(v7 + 360) = v40;
      if ( v131 != 2 )
      {
        v41 = *((__int64 **)v39 + 15);
        v42 = sub_B76070((__int64)v39, v32, 0, v38);
        v32 = (__int64)v41;
        sub_16D8D40(a1, v41, v42, 1);
        v39 = v133;
      }
      for ( j = sub_B8E970((__int64)(v39 + 72)); j; j = *(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF8LL )
      {
        while ( 1 )
        {
          v46 = *(_BYTE *)(j + 28) & 0x7F;
          v37 = (unsigned int)v46 - 18;
          if ( (unsigned int)v37 <= 0x3F )
          {
            if ( *(_QWORD *)(j + 40) )
            {
              v32 = j;
              sub_17B7670(a1, j, v7, 0, v44, v45);
              v46 = *(_BYTE *)(j + 28) & 0x7F;
            }
            if ( v46 == 62 )
            {
              sub_B7E870(j, v32, v37, v38, v44, v45);
              v51 = sub_B7E870(j, v32, v47, v48, v49, v50);
              if ( !v51 )
                v51 = (_QWORD *)j;
              v52 = sub_B8E970((__int64)(v51 + 8));
              v53 = v52;
              if ( v52 )
                break;
            }
          }
LABEL_52:
          j = *(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !j )
            goto LABEL_53;
        }
        if ( (*(_BYTE *)(v52 + 28) & 0x7F) != 0x21 )
        {
          do
          {
            v37 = *(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v53 = v37;
            if ( !v37 )
              goto LABEL_52;
          }
          while ( (*(_BYTE *)(v37 + 28) & 0x7F) != 0x21 );
        }
LABEL_99:
        v32 = v53;
        sub_17B7670(a1, v53, v7, 0, v44, v45);
        while ( 1 )
        {
          v37 = *(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v53 = v37;
          if ( !v37 )
            break;
          if ( (*(_BYTE *)(v37 + 28) & 0x7F) == 0x21 )
            goto LABEL_99;
        }
      }
LABEL_53:
      v39 = v133;
LABEL_54:
      v54 = *((__int64 **)v39 + 15);
      for ( k = &v54[(unsigned int)sub_B76070((__int64)v39, v32, v37, v38)]; k != v54; ++v54 )
      {
        v32 = (__int64)v133;
        v57 = *v54;
        if ( v133 )
          v32 = (__int64)(v133 + 72);
        sub_B8C080(*v54, v32);
        v60 = *(_QWORD *)(v57 + 40);
        if ( (v60 & 7) == 0 && (v60 & 0xFFFFFFFFFFFFFFF8LL) != 0 && v7 )
        {
          sub_17DE630(a1, v7, v57, v55, v58, v59);
          v32 = v57;
          sub_17B7670(a1, v57, v7, 1, v61, v62);
        }
      }
      v63 = v133;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 21LL) & 4) != 0 )
      {
        v64 = *(unsigned int *)(a1 + 10152);
        if ( (_DWORD)v64 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v64 - 40) + 36LL) == 1
            && (char)v133[28] >= 0
            && (v133[82] & 1) == 0
            && (unsigned int)(v131 - 1) > 1 )
          {
            v122 = sub_B844D0(v133);
            v63 = v133;
            if ( v122 == 6 )
            {
              v123 = sub_B8E340((__int64)v133);
              v63 = v133;
              if ( !v123 )
              {
                if ( !sub_B77D90((__int64)v133) )
                {
                  sub_168B9F0((__int64)&v134, (__int64 *)(a1 + 8), *((_DWORD *)v133 + 6), 0xEDAu, 0);
                  sub_15F7200(&v134);
                  v32 = 1;
                  sub_B88650((__int64)v133, 1);
                }
                v63 = v133;
              }
            }
          }
        }
      }
      v65 = (__int64 *)(*((_QWORD *)v63 + 6) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v65 + 16) == 26 || (v66 = sub_179A8B0(*v65, v32, *v65, v55)) != 0 )
      {
        v32 = *(unsigned int *)(v8 + 24);
        sub_18B0530(a1, v32);
        v70 = v133;
        if ( (v133[29] & 1) == 0 )
          goto LABEL_67;
      }
      else
      {
        v70 = v133;
        if ( (v133[29] & 1) == 0 )
          goto LABEL_67;
      }
      v96 = sub_B8C3D0((__int64)v70, v32, v66, (__int64)v67, v68, v69);
      v66 = *v96;
      v67 = (__int64 *)(*v96 + 8LL * *((unsigned int *)v96 + 2));
      if ( *v96 < (unsigned __int64)v67 )
      {
        v121 = (__int64 *)*v96;
        while ( 1 )
        {
          v66 = *v121;
          if ( *(_WORD *)(*v121 + 36) == 197 )
            break;
          if ( v67 == ++v121 )
            goto LABEL_67;
        }
        if ( v67 == v121 )
          goto LABEL_67;
      }
      else
      {
        if ( (__int64 *)v66 == v67 )
          goto LABEL_67;
        if ( *(_WORD *)(*v67 + 36) != 197 )
        {
          v97 = (__int64 **)(v67 + 1);
          do
          {
            v67 = (__int64 *)v97;
            if ( (__int64 **)v66 == v97 )
              goto LABEL_67;
            v67 = *v97++;
          }
          while ( *((_WORD *)v67 + 18) != 197 );
        }
      }
      if ( (v133[82] & 1) == 0 && !sub_B77D90((__int64)v133) )
      {
        sub_168B9F0((__int64)&v134, (__int64 *)(a1 + 8), *((_DWORD *)v133 + 6), 0xC6Cu, 0);
        sub_15F7200(&v134);
        sub_B88650((__int64)v133, 1);
        return v8;
      }
LABEL_67:
      sub_17A5A20(a1, v8, v66, (__int64)v67, v68, v69);
      v134 = (__int64 (__fastcall **)())v8;
      sub_179B290((__int64 *)a1, (__int64 *)&v134, 1, v71, v72, v73);
      v77 = *(_QWORD *)(a1 + 3032);
      v78 = v133;
      if ( !v77 )
        v77 = *(_QWORD *)(a1 + 544);
      v79 = *(_BYTE *)(v77 + 8) & 0x7F;
      v80 = (v79 + 107) & 0x7F;
      if ( (unsigned __int8)v80 > 1u && (unsigned int)v79 - 19 <= 4 )
      {
        sub_168B9F0((__int64)&v134, (__int64 *)(a1 + 8), *((_DWORD *)v133 + 6), 0x1B29u, 0);
        sub_15F7200(&v134);
        v78 = v133;
      }
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 248) + 17441LL) )
      {
        sub_17AC060(&v134, (__int64)v78, v80, v74, v75, v76);
        if ( v135 )
          sub_19EC360(a1, v78, &v134);
      }
      return v8;
    }
    if ( v131 == 2 )
      goto LABEL_54;
LABEL_81:
    v85 = *((__int64 **)v39 + 15);
    v86 = sub_B76070((__int64)v39, v32, v37, v38);
    v32 = (__int64)v85;
    sub_16D8D40(a1, v85, v86, 1);
    v39 = v133;
    goto LABEL_54;
  }
  result = 0;
  if ( a4 )
    *a4 = 1;
  return result;
}
