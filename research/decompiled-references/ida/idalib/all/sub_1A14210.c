void __fastcall sub_1A14210(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5, char a6, double a7)
{
  void **v7; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // al
  char v20; // r13
  int v21; // eax
  unsigned __int64 v22; // rbp
  __int64 v23; // rax
  __int16 v24; // dx
  __int64 i; // r15
  unsigned int v26; // eax
  __int64 v27; // r13
  __int64 v28; // rdx
  void *v29; // rax
  void **v30; // r15
  unsigned int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rdi
  unsigned __int64 v34; // rax
  __int16 v35; // dx
  __int16 v36; // dx
  char *v37; // rax
  void *v38; // rcx
  __int16 v39; // ax
  __int16 v40; // ax
  __int16 v41; // dx
  _QWORD *v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rsi
  _WORD *v45; // rcx
  unsigned int v46; // r8d
  int v47; // r15d
  char v48; // r15
  int v49; // eax
  _WORD *v50; // rdx
  unsigned int v51; // eax
  int v52; // eax
  __int64 v53; // rax
  int v54; // eax
  int v55; // eax
  int v56; // edx
  __int64 v57; // rcx
  int v58; // eax
  __int64 *v59; // r12
  unsigned int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r12
  void *v66; // rax
  _QWORD *v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned int v73; // eax
  __int64 v74; // rsi
  void *v75; // rax
  unsigned __int64 *v76; // rax
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rbp
  __int64 v83; // r8
  __int64 v84; // r9
  void *v85; // rax
  _QWORD *v86; // rax
  void *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rbp
  __int64 v91; // r8
  __int64 v92; // r9
  void *v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // r13
  void *v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // r13
  void *v107; // rax
  _QWORD *v108; // rax
  char *v109; // [rsp+0h] [rbp-168h]
  char v110; // [rsp+0h] [rbp-168h]
  unsigned __int64 *v112; // [rsp+10h] [rbp-158h]
  __int64 v113; // [rsp+18h] [rbp-150h]
  void **v114; // [rsp+20h] [rbp-148h]
  unsigned int v115; // [rsp+2Ch] [rbp-13Ch]
  __int64 *v117; // [rsp+38h] [rbp-130h]
  void **v118; // [rsp+40h] [rbp-128h]
  void **v119; // [rsp+48h] [rbp-120h]
  void **v120; // [rsp+48h] [rbp-120h]
  unsigned int v121; // [rsp+48h] [rbp-120h]
  unsigned int v122; // [rsp+48h] [rbp-120h]
  unsigned int v123; // [rsp+48h] [rbp-120h]
  unsigned int v124; // [rsp+48h] [rbp-120h]
  __int64 v125; // [rsp+58h] [rbp-110h] BYREF
  void *v126; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v127; // [rsp+68h] [rbp-100h]
  char v128; // [rsp+6Ch] [rbp-FCh]
  void *v129; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v130; // [rsp+78h] [rbp-F0h]
  char v131; // [rsp+7Ch] [rbp-ECh]
  void *v132; // [rsp+80h] [rbp-E8h] BYREF
  unsigned int v133; // [rsp+88h] [rbp-E0h]
  char v134; // [rsp+8Ch] [rbp-DCh]
  void *v135; // [rsp+90h] [rbp-D8h] BYREF
  unsigned int v136; // [rsp+98h] [rbp-D0h]
  char v137; // [rsp+9Ch] [rbp-CCh]
  void *v138; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned int v139; // [rsp+A8h] [rbp-C0h]
  void *v140; // [rsp+B0h] [rbp-B8h]
  unsigned __int8 *v141[11]; // [rsp+C0h] [rbp-A8h] BYREF
  char v142; // [rsp+118h] [rbp-50h]
  unsigned int v143; // [rsp+120h] [rbp-48h]
  char v144; // [rsp+124h] [rbp-44h]

  v7 = (void **)a1;
  v112 = (unsigned __int64 *)a2;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(v9 + 16) - 2) > 4u )
  {
    v110 = a6;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      BUG();
    v9 = sub_F63050(
           v9,
           a2,
           (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2,
           a4);
    a6 = v110;
  }
  v10 = *(_QWORD *)(v9 + 40);
  v109 = (char *)v10;
  if ( (*(_BYTE *)(v9 + 19) & 2) != 0 )
  {
    v37 = *(char **)v10;
    if ( *(_DWORD *)(v10 + 8) > 0x40u )
      v37 = *(char **)v37;
    v109 = v37;
  }
  if ( !a6 )
    goto LABEL_31;
  v10 = sub_BFB9F0(a1);
  if ( (*(_WORD *)v10 & 0x1FF) != 9 )
    goto LABEL_31;
  v11 = sub_A72040((_QWORD *)a4[31], *(_QWORD *)a2);
  v12 = a4[31];
  v125 = *(_QWORD *)(v11 + 32);
  v13 = *(_QWORD *)(v125 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = sub_A97D20(v12, v13);
  v19 = sub_F65360(*(_QWORD *)(v125 & 0xFFFFFFFFFFFFFFF0LL), v13, v15, v16, v17, v18);
  v127 = v14;
  v20 = v19;
  if ( v14 > 0x40 )
    sub_2205470(&v126, 0, 0);
  else
    v126 = nullptr;
  v21 = *(_DWORD *)(v10 + 16);
  v128 = v20;
  v22 = 0;
  a2 = (unsigned int)(v21 - 1);
  v113 = a2;
  if ( !v21 )
    goto LABEL_28;
  v118 = v7;
  v114 = &v129;
  v7 = &v138;
  v117 = (__int64 *)&v132;
LABEL_9:
  v115 = v22;
  LODWORD(v23) = sub_A97D20(a4[31], *(_QWORD *)(*(_QWORD *)(a4[31] + 18648) & 0xFFFFFFFFFFFFFFF0LL));
  v24 = (*(_WORD *)(v10 + 2) >> 6) & 7;
  if ( ((*(_WORD *)(v10 + 2) >> 6) & 7) != 2 )
  {
    if ( (_BYTE)v24 == 4 )
    {
      i = *(unsigned int *)(v10 + 4 * (v22 + *(unsigned int *)(v10 + 4)) + 20);
      goto LABEL_12;
    }
    goto LABEL_80;
  }
  for ( i = *(unsigned __int16 *)(v10 + 2 * v22 + 4LL * *(unsigned int *)(v10 + 4) + 20);
        ;
        i = *(unsigned __int8 *)(v22 + v10 + 4LL * *(unsigned int *)(v10 + 4) + 20) )
  {
LABEL_12:
    if ( ((*(_BYTE *)(v10 + 2) >> 3) & 7u) > 1 )
      goto LABEL_17;
    v26 = (unsigned __int8)v24 * (_DWORD)v23;
    v139 = v26;
    if ( v26 > 0x40 )
    {
      sub_2205470(v7, (unsigned int)i, 0);
      v26 = v139;
      if ( v139 > 0x40 )
      {
        v27 = *(_QWORD *)v138;
        i = *(_QWORD *)v138;
        operator delete[](v138);
        goto LABEL_18;
      }
    }
    else
    {
      v138 = (void *)(unsigned int)i;
    }
    if ( v26 )
    {
      i = (__int64)((_QWORD)v138 << (64 - (unsigned __int8)v26)) >> (64 - (unsigned __int8)v26);
LABEL_17:
      v27 = i;
      goto LABEL_18;
    }
    v27 = 0;
    i = 0;
LABEL_18:
    v28 = v127;
    if ( v127 > 0x40 )
    {
      *(_QWORD *)v126 = v27;
      memset((char *)v126 + 8, 0, 8 * ((unsigned int)((unsigned __int64)(v28 + 63) >> 6) + 0x1FFFFFFF));
      v129 = (void *)v27;
      v130 = 64;
      v131 = 0;
      if ( v127 == 64 )
        goto LABEL_22;
      if ( v127 > 0x40 )
      {
        v119 = v7;
        sub_2206B70(v7, v114, v127);
        v46 = v139;
        v134 = 0;
        v133 = v139;
        v132 = v138;
        if ( v127 == v139 )
        {
          if ( !v128 )
          {
            a2 = (__int64)v117;
            v124 = v139;
            v55 = sub_2205E20(&v126, v117);
            v46 = v124;
            v47 = v55;
            goto LABEL_117;
          }
        }
        else
        {
          if ( v127 > v139 )
          {
            sub_2206B70(v7, v117, v127);
            v137 = 0;
            v136 = v139;
            v135 = v138;
            a2 = (__int64)&v135;
            v47 = sub_98E2D0((__int64 *)&v126, (__int64 *)&v135);
            if ( v136 <= 0x40 )
              goto LABEL_116;
            goto LABEL_143;
          }
          if ( v127 < v139 )
          {
            if ( v128 )
            {
              sub_2206CD0(v7, &v126, v139);
              v137 = 1;
            }
            else
            {
              sub_2206B70(v7, &v126, v139);
              v137 = 0;
            }
            v136 = v139;
            v135 = v138;
            a2 = (__int64)v117;
LABEL_115:
            v47 = sub_98E2D0((__int64 *)&v135, (__int64 *)a2);
            if ( v136 <= 0x40 )
            {
LABEL_116:
              v46 = v133;
              goto LABEL_117;
            }
LABEL_143:
            if ( v135 )
              operator delete[](v135);
            goto LABEL_116;
          }
          if ( !v128 )
          {
            a2 = (__int64)v126;
            if ( v127 > 0x40 )
              a2 = *((_QWORD *)v126 + ((v127 - 1) >> 6));
            v47 = -1;
            if ( (a2 & (1LL << ((unsigned __int8)v127 - 1))) == 0 )
              goto LABEL_150;
LABEL_117:
            if ( v46 <= 0x40 )
            {
LABEL_120:
              if ( v130 > 0x40 && v129 )
                operator delete[](v129);
              goto LABEL_96;
            }
LABEL_118:
            if ( v132 )
              operator delete[](v132);
            goto LABEL_120;
          }
        }
        a2 = 1LL << ((unsigned __int8)v139 - 1);
        if ( v139 > 0x40 )
        {
          v47 = 1;
          if ( (a2 & *((_QWORD *)v138 + ((v139 - 1) >> 6))) != 0 )
            goto LABEL_118;
          goto LABEL_150;
        }
        if ( (a2 & (unsigned __int64)v138) == 0 )
        {
LABEL_150:
          a2 = (__int64)v117;
          v122 = v139;
          v52 = sub_2205DB0(&v126, v117);
          v46 = v122;
          v47 = v52;
          goto LABEL_117;
        }
        v7 = v118;
        v30 = v119;
        if ( v130 <= 0x40 )
          goto LABEL_25;
LABEL_198:
        if ( v129 )
          operator delete[](v129);
        goto LABEL_25;
      }
LABEL_107:
      v48 = v128;
      v120 = v7;
      if ( v128 )
      {
        sub_2206CD0(v7, &v126, 64);
        v46 = v139;
        a2 = (__int64)v138;
        v134 = 1;
      }
      else
      {
        sub_2206B70(v7, &v126, 64);
        v46 = v139;
        a2 = (__int64)v138;
        v134 = 0;
      }
      v133 = v139;
      v132 = v138;
      if ( v130 == v46 )
      {
        if ( v131 == v48 )
        {
          if ( !v48 )
          {
            a2 = (__int64)v114;
            v123 = v46;
            v54 = sub_2205E20(v117, v114);
            v46 = v123;
            v47 = v54;
            goto LABEL_117;
          }
          goto LABEL_129;
        }
      }
      else
      {
        if ( v130 < v46 )
        {
          if ( v131 )
          {
            sub_2206CD0(v7, v114, v46);
            v137 = 1;
          }
          else
          {
            sub_2206B70(v7, v114, v46);
            v137 = 0;
          }
          v136 = v139;
          v135 = v138;
          a2 = (__int64)&v135;
          v47 = sub_98E2D0(v117, (__int64 *)&v135);
          if ( v136 <= 0x40 )
            goto LABEL_116;
          goto LABEL_143;
        }
        if ( v130 > v46 )
        {
          if ( v48 )
          {
            sub_2206CD0(v7, v117, v130);
            v137 = 1;
          }
          else
          {
            sub_2206B70(v7, v117, v130);
            v137 = 0;
          }
          v136 = v139;
          v135 = v138;
          a2 = (__int64)v114;
          goto LABEL_115;
        }
      }
      if ( v48 )
      {
        if ( !v131 )
        {
          a2 = (__int64)v129;
          if ( v130 > 0x40 )
            a2 = *((_QWORD *)v129 + ((v130 - 1) >> 6));
          v47 = 1;
          if ( (a2 & (1LL << ((unsigned __int8)v130 - 1))) != 0 )
            goto LABEL_117;
        }
      }
      else
      {
        v53 = 1LL << ((unsigned __int8)v46 - 1);
        if ( v46 <= 0x40 )
        {
          if ( (a2 & v53) != 0 )
          {
            v7 = v118;
            v30 = v120;
            if ( v130 <= 0x40 )
              goto LABEL_25;
            goto LABEL_198;
          }
        }
        else
        {
          v47 = -1;
          if ( (v53 & *(_QWORD *)(a2 + 8LL * ((v46 - 1) >> 6))) != 0 )
            goto LABEL_118;
        }
      }
LABEL_129:
      a2 = (__int64)v114;
      v121 = v46;
      v49 = sub_2205DB0(v117, v114);
      v46 = v121;
      v47 = v49;
      goto LABEL_117;
    }
    v129 = (void *)v27;
    v130 = 64;
    v131 = 0;
    v29 = (void *)(v27 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v127));
    if ( !v127 )
      v29 = nullptr;
    v126 = v29;
    if ( v127 != 64 )
      goto LABEL_107;
LABEL_22:
    if ( v128 )
    {
      if ( i < 0 )
        goto LABEL_24;
      a2 = (__int64)v114;
      v47 = sub_2205DB0(&v126, v114);
    }
    else
    {
      a2 = (__int64)v114;
      v47 = sub_2205E20(&v126, v114);
    }
LABEL_96:
    if ( v47 )
    {
LABEL_24:
      v7 = v118;
      v30 = &v138;
LABEL_25:
      v31 = sub_16C5380(a4, v10, v115);
      sub_168B9F0((__int64)v30, a4 + 1, v31, 0xD2Du, 0);
      if ( v142 )
      {
        sub_AE9DF0((unsigned __int8 **)v30 + 4, v27, 2u);
      }
      else if ( v144 )
      {
        v90 = sub_168B9E0(v30);
        v93 = v140;
        if ( v140 )
          v93 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v140 + 32LL))(v140);
        v10 = (__int64)&v135;
        v135 = v93;
        v94 = sub_1587BC0(v90, (__int64 *)&v135, v88, v89, v91, v92);
        sub_AE9DF0((unsigned __int8 **)(*v94 + 32LL * v143 + 8), v27, 2u);
      }
      a2 = (__int64)&v125;
      sub_1605D30((__int64)v30, &v125);
      sub_15F7200(v30);
      goto LABEL_28;
    }
    if ( v22 != v113 )
    {
      ++v22;
      goto LABEL_9;
    }
    v7 = v118;
LABEL_28:
    if ( v127 > 0x40 && v126 )
      operator delete[](v126);
LABEL_31:
    if ( *(_BYTE *)(a3 + 16) == 5 )
    {
      v32 = *(_QWORD *)(a3 + 32);
      v33 = a4[31];
      v139 = 32;
      v138 = v109;
      v34 = sub_A70F70(v33, v32, (__int64)&v138, nullptr, 0, 0);
      *v112 = v34;
      v35 = *(_WORD *)v7;
      v7[1] = (void *)v34;
      v36 = v35 & 0x1FF;
      *((_BYTE *)v7 + 1) &= 0xF9u;
      if ( v36 == 9 )
        goto LABEL_60;
LABEL_36:
      if ( v36 != 37 )
      {
        while ( 1 )
        {
          switch ( v36 )
          {
            case 20:
              goto LABEL_34;
            case 4:
              if ( *((_BYTE *)v7 + 2) >> 3 == 12 )
              {
                v7 = (void **)v7[2];
                v36 = *(_WORD *)v7 & 0x1FF;
                goto LABEL_35;
              }
              break;
            case 57:
              if ( ((_DWORD)v7[2] & 0x3FFF8000) != 0x3FFF8000 )
              {
                v7 = (void **)*(&v7[((*((_DWORD *)v7 + 4) >> 15) & 0x7FFFu) + 4] + ((*((_BYTE *)v7 + 19) & 0x40) != 0));
                v41 = *(_WORD *)v7;
                v7[1] = (void *)v34;
                *((_BYTE *)v7 + 1) &= 0xF9u;
                v36 = v41 & 0x1FF;
                if ( v36 != 9 )
                  goto LABEL_36;
                goto LABEL_60;
              }
              break;
            case 77:
              if ( ((*(_DWORD *)v7[2] >> 14) & 0xC) == 0 )
              {
                if ( (*((_BYTE *)v7 + 2) & 8) != 0 )
                {
LABEL_34:
                  v7 = (void **)v7[3];
                  v36 = *(_WORD *)v7 & 0x1FF;
                }
                else
                {
                  v7 = (void **)v7[4];
                  v36 = *(_WORD *)v7 & 0x1FF;
                }
LABEL_35:
                v7[1] = (void *)v34;
                *((_BYTE *)v7 + 1) &= 0xF9u;
                if ( v36 == 9 )
                  goto LABEL_60;
                goto LABEL_36;
              }
              break;
            case 18:
              if ( ((unsigned int)*v7 & 0x1000000) != 0 && (BYTE2(*v7) & 0x80u) != 0 )
              {
                v45 = v7[2];
                if ( v45 )
                {
                  v7 = (void **)v7[2];
                  v36 = *v45 & 0x1FF;
                  goto LABEL_35;
                }
              }
              break;
            default:
              goto LABEL_35;
          }
          v7[1] = (void *)v34;
          *((_BYTE *)v7 + 1) &= 0xF9u;
        }
      }
LABEL_60:
      if ( v139 > 0x40 )
      {
        if ( v138 )
          operator delete[](v138);
      }
      return;
    }
    v22 = *(_QWORD *)(a3 + 40);
    if ( (*(_BYTE *)(a3 + 19) & 2) != 0 )
    {
      if ( *(_DWORD *)(v22 + 8) <= 0x40u )
        v22 = *(_QWORD *)v22;
      else
        v22 = **(_QWORD **)v22;
    }
    if ( (*(_BYTE *)(a4[29] + 1) & 8) != 0 )
    {
      v42 = (_QWORD *)sub_BFB9F0((__int64)v7);
      if ( (*(_WORD *)v42 & 0x1FF) == 9 )
        v109 = &v109[((*v42 & 0x2000000LL) == 0) - 1];
      if ( v22 >= (unsigned __int64)v109 )
        goto LABEL_50;
      v43 = sub_EEB7E0((unsigned __int64)v7, a2, a7);
      v44 = (__int64)(a4 + 1);
      sub_168B9F0((__int64)&v138, a4 + 1, v43, 0xF9Du, 0);
      if ( !v142 )
      {
        if ( !v144 )
          goto LABEL_73;
        v65 = sub_168B9E0(&v138);
        v87 = v140;
        if ( v140 )
          v87 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v140 + 32LL))(v140);
        v135 = v87;
LABEL_182:
        v67 = sub_1587BC0(v65, (__int64 *)&v135, v61, v62, v63, v64);
        v44 = v22;
        sub_AE9DF0((unsigned __int8 **)(*v67 + 32LL * v143 + 8), v22, 3u);
        goto LABEL_163;
      }
LABEL_162:
      v44 = v22;
      sub_AE9DF0(v141, v22, 3u);
LABEL_163:
      if ( v142 )
      {
        v44 = (__int64)v109;
        sub_AE9DF0(v141, (__int64)v109, 3u);
      }
      else if ( v144 )
      {
        v82 = sub_168B9E0(&v138);
        v85 = v140;
        if ( v140 )
          v85 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v140 + 32LL))(v140);
        v135 = v85;
        v86 = sub_1587BC0(v82, (__int64 *)&v135, v80, v81, v83, v84);
        v44 = (__int64)v109;
        sub_AE9DF0((unsigned __int8 **)(*v86 + 32LL * v143 + 8), (__int64)v109, 3u);
      }
      goto LABEL_73;
    }
    if ( (unsigned __int64)(v109 - 1) > v22 )
    {
      v51 = sub_EEB7E0((unsigned __int64)v7, a2, a7);
      sub_168B9F0((__int64)&v138, a4 + 1, v51, 0x15DAu, 0);
      v135 = (void *)sub_EEC8C0((unsigned __int64)v7, (__int64)(a4 + 1), a7);
      sub_1587DB0((__int64)&v138, (__int64 *)&v135);
      sub_15F7200(&v138);
      goto LABEL_50;
    }
    if ( v109 - 1 != (char *)v22 )
      goto LABEL_50;
    v23 = sub_BFB9F0((__int64)v7);
    if ( (*(_WORD *)v23 & 0x1FF) != 9 )
      goto LABEL_183;
    v56 = *(_DWORD *)(v23 + 16);
    if ( !v56 )
      goto LABEL_183;
    v57 = (unsigned int)(v56 - 1);
    v24 = (*(_WORD *)(v23 + 2) >> 6) & 7;
    if ( ((*(_WORD *)(v23 + 2) >> 6) & 7) == 2 )
      break;
    if ( (_BYTE)v24 == 4 )
    {
      v58 = *(_DWORD *)(v23 + 4 * (*(unsigned int *)(v23 + 4) + v57) + 20);
      goto LABEL_175;
    }
    if ( (_BYTE)v24 == 1 )
    {
      v58 = *(unsigned __int8 *)(v57 + v23 + 4LL * *(unsigned int *)(v23 + 4) + 20);
      goto LABEL_175;
    }
LABEL_80:
    ;
  }
  v58 = *(unsigned __int16 *)(v23 + 2 * v57 + 4LL * *(unsigned int *)(v23 + 4) + 20);
LABEL_175:
  if ( !v58 )
  {
    v59 = a4 + 1;
    goto LABEL_177;
  }
LABEL_183:
  v59 = a4 + 1;
  a2 = (__int64)a5;
  while ( 1 )
  {
    v68 = sub_1A0B620(a2);
    if ( v68 )
      break;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 2) <= 4u )
    {
      a2 = *(_QWORD *)(a2 + 8);
      if ( a2 )
        continue;
    }
    goto LABEL_187;
  }
  if ( (*(_BYTE *)(v68 + 29) & 1) == 0 )
  {
LABEL_187:
    v73 = sub_EEB7E0((unsigned __int64)v7, a2, a7);
    v74 = (__int64)v59;
    sub_168B9F0((__int64)&v138, v59, v73, 0x1B8Bu, 0);
    if ( v142 )
    {
      v74 = v22;
      sub_AE9DF0(v141, v22, 3u);
    }
    else
    {
      if ( !v144 )
      {
LABEL_189:
        v75 = (void *)sub_EEC8C0((unsigned __int64)v7, v74, a7);
        a2 = (__int64)&v135;
        v135 = v75;
        sub_1587DB0((__int64)&v138, (__int64 *)&v135);
        sub_15F7200(&v138);
        goto LABEL_177;
      }
      v99 = sub_168B9E0(&v138);
      v100 = v140;
      if ( v140 )
        v100 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v140 + 32LL))(v140);
      v135 = v100;
      v101 = sub_1587BC0(v99, (__int64 *)&v135, v95, v96, v97, v98);
      v74 = v22;
      sub_AE9DF0((unsigned __int8 **)(*v101 + 32LL * v143 + 8), v22, 3u);
    }
    if ( v142 )
    {
      v74 = (__int64)v109;
      sub_AE9DF0(v141, (__int64)v109, 3u);
    }
    else if ( v144 )
    {
      v106 = sub_168B9E0(&v138);
      v107 = v140;
      if ( v140 )
        v107 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v140 + 32LL))(v140);
      v135 = v107;
      v108 = sub_1587BC0(v106, (__int64 *)&v135, v102, v103, v104, v105);
      v74 = (__int64)v109;
      sub_AE9DF0((unsigned __int8 **)(*v108 + 32LL * v143 + 8), (__int64)v109, 3u);
    }
    goto LABEL_189;
  }
  v76 = sub_B8C3D0(v68, a2, v69, v70, v71, v72);
  v77 = *v76;
  v78 = *v76 + 8LL * *((unsigned int *)v76 + 2);
  if ( *v76 >= v78 )
  {
    if ( v77 == v78 )
      goto LABEL_187;
    while ( *(_WORD *)(*(_QWORD *)v78 + 36LL) != 290 )
    {
      v78 += 8LL;
      if ( v77 == v78 )
        goto LABEL_187;
    }
  }
  else
  {
    v79 = *v76;
    while ( *(_WORD *)(*(_QWORD *)v79 + 36LL) != 290 )
    {
      v79 += 8LL;
      if ( v78 == v79 )
        goto LABEL_187;
    }
    if ( v79 == v78 )
      goto LABEL_187;
  }
LABEL_177:
  v60 = sub_EEB7E0((unsigned __int64)v7, a2, a7);
  v44 = (__int64)v59;
  sub_168B9F0((__int64)&v138, v59, v60, 0x1B8Au, 0);
  if ( v142 )
    goto LABEL_162;
  if ( v144 )
  {
    v65 = sub_168B9E0(&v138);
    v66 = v140;
    if ( v140 )
      v66 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v140 + 32LL))(v140);
    v135 = v66;
    goto LABEL_182;
  }
LABEL_73:
  v135 = (void *)sub_EEC8C0((unsigned __int64)v7, v44, a7);
  sub_1587DB0((__int64)&v138, (__int64 *)&v135);
  sub_15F7200(&v138);
LABEL_50:
  v38 = (void *)*v112;
  v39 = *(_WORD *)v7;
  *((_BYTE *)v7 + 1) &= 0xF9u;
  v40 = v39 & 0x1FF;
  v7[1] = v38;
  if ( v40 != 9 && v40 != 37 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        switch ( v40 )
        {
          case 20:
            goto LABEL_53;
          case 4:
            if ( *((_BYTE *)v7 + 2) >> 3 != 12 )
              goto LABEL_83;
            v7 = (void **)v7[2];
            v40 = *(_WORD *)v7 & 0x1FF;
            break;
          case 57:
            if ( ((_DWORD)v7[2] & 0x3FFF8000) == 0x3FFF8000 )
              goto LABEL_83;
            v7 = (void **)*(&v7[((*((_DWORD *)v7 + 4) >> 15) & 0x7FFFu) + 4] + ((*((_BYTE *)v7 + 19) & 0x40) != 0));
            v40 = *(_WORD *)v7 & 0x1FF;
            break;
          case 77:
            if ( ((*(_DWORD *)v7[2] >> 14) & 0xC) != 0 )
              goto LABEL_83;
            if ( (*((_BYTE *)v7 + 2) & 8) != 0 )
            {
LABEL_53:
              v7 = (void **)v7[3];
              v40 = *(_WORD *)v7 & 0x1FF;
            }
            else
            {
              v7 = (void **)v7[4];
              v40 = *(_WORD *)v7 & 0x1FF;
            }
            break;
          case 18:
            if ( ((unsigned int)*v7 & 0x1000000) == 0 || (BYTE2(*v7) & 0x80u) == 0 || (v50 = v7[2]) == nullptr )
            {
LABEL_83:
              v7[1] = v38;
              *((_BYTE *)v7 + 1) &= 0xF9u;
              continue;
            }
            v7 = (void **)v7[2];
            v40 = *v50 & 0x1FF;
            break;
        }
        break;
      }
      v7[1] = v38;
      *((_BYTE *)v7 + 1) &= 0xF9u;
      if ( v40 == 37 || v40 == 9 )
        return;
      continue;
    }
  }
}
