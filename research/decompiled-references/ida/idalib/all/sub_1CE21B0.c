unsigned __int64 __fastcall sub_1CE21B0(
        unsigned __int64 a1,
        double a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        unsigned __int8 a11)
{
  __int64 *v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rbp
  unsigned __int64 v28; // rbp
  _BYTE *v30; // rax
  unsigned __int64 v31; // r13
  void *v32; // rsi
  __int64 v33; // rdx
  _QWORD *v34; // rax
  unsigned __int8 v35; // cl
  __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r15
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  char *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned int v50; // edx
  __int64 v51; // r15
  __int64 *v52; // rax
  signed __int64 v53; // r13
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rbp
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdi
  int v80; // r13d
  _QWORD *v81; // rax
  _QWORD *v82; // rsi
  _QWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  unsigned __int64 v88; // rax
  __int64 v89; // rbp
  __int64 *v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rbx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  _QWORD *v97; // rax
  unsigned __int64 v98; // rax
  __int64 v99; // r10
  _QWORD *v100; // rsi
  _QWORD *v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned __int64 v106; // rax
  __int64 v107; // rdx
  _QWORD *v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rax
  char *v111; // rsi
  __int64 v112; // rbx
  char *v113; // r13
  int v114; // r15d
  __int64 v115; // r12
  int v116; // r14d
  __int64 v117; // rdx
  __int64 v118; // rcx
  unsigned __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rbp
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rax
  _QWORD *v128; // rax
  bool v129; // [rsp+8h] [rbp-3A0h]
  unsigned __int64 v130; // [rsp+8h] [rbp-3A0h]
  __int64 v131; // [rsp+8h] [rbp-3A0h]
  char *v132; // [rsp+10h] [rbp-398h]
  __int64 v133; // [rsp+10h] [rbp-398h]
  unsigned int v134; // [rsp+18h] [rbp-390h]
  unsigned __int8 v135; // [rsp+1Fh] [rbp-389h]
  unsigned int v139; // [rsp+34h] [rbp-374h]
  unsigned __int64 v140; // [rsp+38h] [rbp-370h]
  _BYTE *v141; // [rsp+40h] [rbp-368h]
  __int64 v142; // [rsp+48h] [rbp-360h]
  __int64 v143; // [rsp+48h] [rbp-360h]
  __int64 v144; // [rsp+48h] [rbp-360h]
  int v145; // [rsp+48h] [rbp-360h]
  __int64 v146; // [rsp+50h] [rbp-358h]
  __int64 v147; // [rsp+58h] [rbp-350h]
  __int64 *v148; // [rsp+60h] [rbp-348h]
  void *v149; // [rsp+78h] [rbp-330h] BYREF
  __int64 v150; // [rsp+80h] [rbp-328h] BYREF
  __int64 v151; // [rsp+88h] [rbp-320h] BYREF
  unsigned __int64 v152; // [rsp+90h] [rbp-318h] BYREF
  char v153; // [rsp+98h] [rbp-310h]
  __int64 v154; // [rsp+9Ch] [rbp-30Ch]
  char v155; // [rsp+A4h] [rbp-304h]
  void *v156; // [rsp+A8h] [rbp-300h]
  __int64 v157; // [rsp+B0h] [rbp-2F8h]
  _BYTE v158[24]; // [rsp+B8h] [rbp-2F0h] BYREF
  __int128 v159; // [rsp+D0h] [rbp-2D8h] BYREF
  __int64 v160; // [rsp+E0h] [rbp-2C8h]
  unsigned __int8 *v161; // [rsp+F0h] [rbp-2B8h] BYREF
  char v162; // [rsp+148h] [rbp-260h]
  unsigned int v163; // [rsp+150h] [rbp-258h]
  char v164; // [rsp+154h] [rbp-254h]
  void *v165; // [rsp+160h] [rbp-248h] BYREF
  __int64 v166; // [rsp+168h] [rbp-240h]
  _QWORD v167[2]; // [rsp+170h] [rbp-238h] BYREF
  unsigned __int8 *v168[10]; // [rsp+180h] [rbp-228h] BYREF
  void *v169; // [rsp+1D0h] [rbp-1D8h]
  __int64 v170; // [rsp+1D8h] [rbp-1D0h]
  unsigned int v171; // [rsp+1E0h] [rbp-1C8h] BYREF
  char v172; // [rsp+1E4h] [rbp-1C4h]
  __int16 v173; // [rsp+240h] [rbp-168h]
  char v174; // [rsp+242h] [rbp-166h]
  void *ptr; // [rsp+250h] [rbp-158h] BYREF
  __int64 v176; // [rsp+258h] [rbp-150h]
  _BYTE v177[256]; // [rsp+260h] [rbp-148h] BYREF
  __int64 v178; // [rsp+360h] [rbp-48h]

  v12 = (__int64 *)a1;
  v13 = *(_QWORD *)(a5 + 64);
  ptr = v177;
  v135 = a11;
  v14 = *(_QWORD *)(v13 + 36);
  v176 = 0x800000000LL;
  v178 = v14;
  v15 = *(unsigned int *)(v13 + 44);
  v165 = (void *)(v13 + 56);
  v166 = v15;
  sub_1CB4530(a1, &v165, (__int64 *)&ptr);
  v134 = *(_DWORD *)(a5 + 80);
  v139 = *(_DWORD *)(v13 + 40);
  v140 = *(_QWORD *)(v13 + 36);
  sub_F22A90(&v165, *(_QWORD *)(v13 + 24));
  v149 = v165;
  v16 = sub_F22BD0((__int64 *)&v149, 0);
  if ( !v16 || (v21 = v16, (*(_BYTE *)(v16 + 28) & 0x7F) != 0x45) )
  {
    v30 = sub_F22E60((__int64 *)&v149);
    if ( v30 )
    {
      v31 = *((_QWORD *)v30 + 1);
      if ( !v31 )
      {
LABEL_20:
        sub_168B9F0((__int64)&v165, (__int64 *)(a1 + 8), *(_DWORD *)(a5 + 80), 0x1534u, 0);
        if ( (_BYTE)v170 )
        {
          sub_AE9DF0(v168, a11, 2u);
        }
        else if ( v172 )
        {
          v93 = sub_168B9E0(&v165);
          v96 = v167[0];
          if ( v167[0] )
            v96 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v167[0] + 32LL))(v167[0]);
          *(_QWORD *)&v159 = v96;
          v97 = sub_1587BC0(v93, (__int64 *)&v159, v91, v92, v94, v95);
          sub_AE9DF0((unsigned __int8 **)(*v97 + 32LL * v171 + 8), a11, 2u);
        }
        v28 = 0;
        sub_15F7200(&v165);
        goto LABEL_15;
      }
    }
    else
    {
      v49 = sub_F22BD0((__int64 *)&v149, 0);
      v31 = v49;
      if ( !v49 || (*(_BYTE *)(v49 + 28) & 0x7F) != 0x47 )
        goto LABEL_20;
    }
    v50 = *(_DWORD *)(a5 + 80);
    v28 = 0;
    sub_168B9F0((__int64)&v165, (__int64 *)(a1 + 8), v50, 0x1535u, 0);
    *(_QWORD *)&v159 = *(_QWORD *)(v31 + 40);
    sub_15894B0((__int64)&v165, (__int64 *)&v159);
    sub_15F7200(&v165);
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(v16 + 29) & 1) == 0 )
    goto LABEL_10;
  v22 = sub_B8C3D0(v16, 0, v17, v18, v19, v20);
  v17 = *v22;
  v23 = *v22 + 8LL * *((unsigned int *)v22 + 2);
  if ( v17 >= v23 )
  {
    if ( v17 == v23 )
      goto LABEL_10;
    if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 281 )
    {
      v24 = (__int64 *)(v23 + 8);
      do
      {
        LODWORD(v18) = (_DWORD)v24;
        if ( (__int64 *)v17 == v24 )
          goto LABEL_10;
        v25 = *v24++;
      }
      while ( *(_WORD *)(v25 + 36) != 281 );
    }
LABEL_56:
    v51 = *(_QWORD *)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 281 )
    {
      v52 = (__int64 *)(v17 + 8);
      do
        v51 = *v52++;
      while ( *(_WORD *)(v51 + 36) != 281 );
    }
    v53 = *(unsigned int *)(v51 + 40);
    v141 = *(_BYTE **)(v51 + 48);
    sub_168B9F0((__int64)&v165, (__int64 *)(a1 + 8), v134, 0x1B99u, 0);
    if ( (_BYTE)v170 )
    {
      sub_AE9DF0(v168, v21, 0xAu);
    }
    else if ( v172 )
    {
      v62 = sub_168B9E0(&v165);
      v66 = v167[0];
      if ( v167[0] )
      {
        v144 = v62;
        v66 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v167[0] + 32LL))(v167[0]);
        v62 = v144;
      }
      *(_QWORD *)&v159 = v66;
      v67 = sub_1587BC0(v62, (__int64 *)&v159, v62, v63, v64, v65);
      sub_AE9DF0((unsigned __int8 **)(*v67 + 32LL * v171 + 8), v21, 0xAu);
    }
    LOBYTE(v152) = v53 != 0;
    v54 = sub_1588420((__int64)&v165, (unsigned __int8 *)&v152);
    if ( *(_BYTE *)(v54 + 120) )
    {
      sub_AEC220((unsigned __int8 **)(v54 + 32), v141, v53);
    }
    else if ( *(_BYTE *)(v54 + 132) )
    {
      v142 = v54;
      v55 = sub_168B9E0((_QWORD *)v54);
      v58 = v142;
      v59 = v55;
      v60 = *(_QWORD *)(v142 + 16);
      if ( v60 )
      {
        v146 = v59;
        v60 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
        v59 = v146;
        v58 = v142;
      }
      v143 = v58;
      *(_QWORD *)&v159 = v60;
      v61 = sub_1587BC0(v59, (__int64 *)&v159, v58, v59, v56, v57);
      sub_AEC220((unsigned __int8 **)(*v61 + 32LL * *(unsigned int *)(v143 + 128) + 8), v141, v53);
    }
    sub_15F7200(&v165);
    sub_168B9F0((__int64)&v165, (__int64 *)(a1 + 8), *(_DWORD *)(v51 + 24), 0x17BFu, 0);
    if ( (_BYTE)v170 )
    {
      sub_AE9DF0(v168, v51, 0xEu);
    }
    else if ( v172 )
    {
      v70 = sub_168B9E0(&v165);
      v73 = v167[0];
      if ( v167[0] )
        v73 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v167[0] + 32LL))(v167[0]);
      *(_QWORD *)&v159 = v73;
      v74 = sub_1587BC0(v70, (__int64 *)&v159, v68, v69, v71, v72);
      sub_AE9DF0((unsigned __int8 **)(*v74 + 32LL * v171 + 8), v51, 0xEu);
    }
    sub_15F7200(&v165);
    goto LABEL_10;
  }
  v18 = v17;
  while ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 281 )
  {
    v18 += 8;
    if ( v23 == v18 )
      goto LABEL_10;
  }
  if ( v23 != v18 )
    goto LABEL_56;
LABEL_10:
  if ( !(_DWORD)v176 )
  {
LABEL_23:
    v165 = v167;
    v166 = 0x400000000LL;
    v169 = &v171;
    v170 = 0x400000000LL;
    v173 = 0;
    v174 = 0;
    v159 = 0;
    v160 = 0;
    if ( (unsigned __int8)sub_1CCEE60(
                            a1,
                            v21,
                            v134,
                            (__int64)&ptr,
                            (__int64)&v159,
                            0,
                            (__m128)0LL,
                            a3,
                            (__int64)&v165,
                            1,
                            nullptr) )
      goto LABEL_43;
    v32 = v169;
    v33 = (unsigned int)v170;
    if ( a11 )
    {
      v129 = sub_1CCBDE0(a1, v134, v21, v176, (__int64)v169, (__m128)0LL);
      if ( v129 )
        goto LABEL_43;
      if ( !sub_F235A0((__int64 *)&v149, v134, v75, v76, v77, v78)
        && !sub_F5E540((__int64)&ptr, (__int64)v169, (unsigned int)v170) )
      {
        sub_168B9F0((__int64)&v159, (__int64 *)(a1 + 8), v134, 0x12BFu, 0);
        v152 = *(_QWORD *)(v21 + 40);
        sub_15894B0((__int64)&v159, (__int64 *)&v152);
        sub_15F7200(&v159);
        v135 = 0;
      }
      v33 = (unsigned int)v170;
      v32 = v169;
      v79 = *(_QWORD *)(v21 + 56);
      v80 = v170;
      if ( (_DWORD)v170 == (*(_DWORD *)(v79 + 20) & 0x1FFFFFFF) )
      {
        v132 = (char *)v169;
        v145 = sub_BBD7B0(v79);
        if ( v80 )
        {
          v111 = v132;
          v133 = (unsigned int)(v80 - 1);
          v147 = v21;
          v148 = v12;
          v112 = 0;
          v113 = v111;
          while ( 1 )
          {
            v114 = *((_DWORD *)v113 + 1);
            v115 = *((_QWORD *)v113 + 1);
            v116 = *(_DWORD *)v113 & 0x7FFFFFFF;
            if ( sub_B8BED0(*(_QWORD *)(v79 + 8 * v112 + 24)) )
            {
              if ( v116 != 9 || v114 != 1 || !sub_F1D570(v115) )
              {
LABEL_134:
                v21 = v147;
                v12 = v148;
                v32 = v169;
                v33 = (unsigned int)v170;
                goto LABEL_81;
              }
              sub_F1DF30((__int64)&v159, (__int64 *)v115, v117, v118);
              v115 = *((_QWORD *)&v159 + 1);
              v116 = v159 & 0x7FFFFFFF;
            }
            switch ( v116 )
            {
              case 0:
              case 2:
              case 3:
              case 4:
              case 5:
              case 7:
              case 9:
                goto LABEL_134;
              case 1:
                v121 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v115 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(v121 + 16) != 50
                  || (v115 & 0xF) != 0
                  || (byte_8[v115 & 0xFFFFFFFFFFFFFFF0LL] & 0xF) != 0
                  || v145 != (*(_WORD *)(v121 + 20) & 0x7FFF)
                  || *(unsigned __int16 *)(v121 + 22) != (_DWORD)v112 )
                {
                  goto LABEL_134;
                }
                break;
              case 6:
                sub_F22A90(&v152, v115);
                v119 = sub_F22BD0((__int64 *)&v152, 0);
                if ( !v119
                  || (*(_BYTE *)(v119 + 28) & 0x7F) != 0x44
                  || v145 != (*(_DWORD *)(v119 + 64) & 0xFFFFF)
                  || *(_WORD *)(v119 + 66) >> 4 != (_DWORD)v112 )
                {
                  goto LABEL_134;
                }
                break;
              case 8:
                if ( (*(_WORD *)v115 & 0x1FF) != 0x47 )
                  goto LABEL_134;
                v120 = *(_QWORD *)(v115 + 16);
                if ( !v120
                  || (*(_BYTE *)(v120 + 28) & 0x7F) != 0x2F
                  || v145 != (*(_DWORD *)(v120 + 68) & 0xFFFFF)
                  || *(_WORD *)(v120 + 70) >> 4 != (_DWORD)v112 )
                {
                  goto LABEL_134;
                }
                break;
            }
            v113 += 24;
            if ( v112 == v133 )
            {
              v21 = v147;
              v12 = v148;
              break;
            }
            ++v112;
          }
        }
        if ( *(char *)(*(_QWORD *)(v12[31] + 2320) + 1LL) >= 0 || !sub_BBDA40(a9) )
        {
          sub_168B9F0((__int64)&v159, v12 + 1, v134, 0x12BEu, 0);
          LODWORD(v151) = 1;
          v47 = sub_1587D10((__int64)&v159, (int *)&v151);
          if ( a10 != 1 )
            v129 = ((*(_BYTE *)(v12[68] + 8) + 70) & 0x7Fu) > 3;
          LOBYTE(v150) = v129;
          v48 = sub_1588420(v47, (unsigned __int8 *)&v150);
          v154 = 0;
          v155 = 0;
          v156 = v158;
          v157 = 0;
          v158[0] = 0;
          v158[16] = 0;
          v152 = v140;
          v153 = 1;
          sub_1589170(v48, &v152);
          if ( v156 != v158 )
            operator delete(v156);
          sub_15F7200(&v159);
          goto LABEL_43;
        }
        v32 = v169;
        v33 = (unsigned int)v170;
      }
LABEL_81:
      v150 = 0;
      if ( v135 )
      {
        v81 = sub_BC3C90((_QWORD *)v21, (__int64)v32, v33, a9, (__int64)&v150);
        v35 = 1;
        v36 = (__int64)v81;
LABEL_27:
        if ( !sub_1CC0680(v12, v21, v134, v35) )
        {
          if ( v36 )
          {
            if ( (*(_BYTE *)(v36 + 140) & 7) == 0 )
            {
              *(_DWORD *)(v36 + 24) = v134;
              v28 = v36;
              v41 = v36;
              v36 = 0;
LABEL_31:
              sub_B90130(v41, v12[68], v37, v38, v39, v40);
              sub_B94AD0((__m128i *)v12[68], v28, v42, v43, v44, v45);
              *(_BYTE *)(v28 + 140) = *(_BYTE *)(v28 + 140) & 0xF8 | 2;
              v46 = *(char **)(a7 + 88);
              *(_DWORD *)a7 = 0;
              *(_DWORD *)(a7 + 16) = 0;
              if ( v46 )
                sub_1A39780(v46);
              *(_OWORD *)(a7 + 88) = 0;
              *(_BYTE *)(a7 + 166) = 0;
              if ( v36 )
              {
                *(_QWORD *)&v159 = v36 | (*(_BYTE *)(v36 + 29) >> 5) & 3;
                sub_1743080(a7 + 8, v159);
                *(_DWORD *)a7 = 2;
              }
              else if ( (*(_BYTE *)(v28 + 28) & 0x7F) != 0x2B )
              {
                v98 = *(_QWORD *)(v28 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(v28 + 16) & 4) != 0 )
                  v98 = *(_QWORD *)v98;
                if ( ((*(_BYTE *)(v98 + 8) + 70) & 0x7Fu) <= 3
                  && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 24LL))(v41) )
                {
                  *(_BYTE *)(v28 + 29) = *(_BYTE *)(v21 + 29) & 0x60 | *(_BYTE *)(v28 + 29) & 0x9F;
                }
              }
              goto LABEL_44;
            }
            v99 = v36;
            if ( v135 )
              goto LABEL_109;
          }
          else if ( v135 )
          {
            v99 = 0;
LABEL_109:
            v100 = (_QWORD *)(*(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v21 + 16) & 4) != 0 )
              v100 = (_QWORD *)*v100;
            v131 = v99;
            v28 = sub_BC1FB0(
                    (_QWORD *)v12[31],
                    (__int64)v100,
                    a8,
                    v134,
                    a9,
                    v21,
                    *a6,
                    (__int64)a6,
                    a10,
                    (const __m128i *)v169,
                    (unsigned int)v170);
            v41 = v28;
            v101 = (_QWORD *)sub_B8C330(v28);
            v106 = sub_F1ED40(v101, (__int64 *)&ptr, v102, v103, v104, v105);
            v107 = *(_QWORD *)(v28 + 120);
            if ( v107 && (v107 & 4) != 0 && (v108 = (_QWORD *)(v107 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr )
              *v108 = v106;
            else
              *(_QWORD *)(v28 + 120) = v106 & 0xFFFFFFFFFFFFFFFBLL;
            if ( v131 )
            {
              v109 = *(_QWORD *)(v131 + 80);
              v110 = *(_QWORD *)(v109 + 152);
              if ( (v110 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                *(_QWORD *)(v109 + 152) = v110 | 4;
            }
            else
            {
              sub_BC41D0((_QWORD *)v21, v28, v150);
            }
            sub_1CE14D0((__int64)v12, v28);
            if ( !v36 )
              goto LABEL_31;
            goto LABEL_92;
          }
          v82 = (_QWORD *)(*(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v21 + 16) & 4) != 0 )
            v82 = (_QWORD *)*v82;
          v28 = sub_BC1E30(
                  (_QWORD *)v12[31],
                  (__int64)v82,
                  a8,
                  v134,
                  v21,
                  *a6,
                  (__int64)a6,
                  a10,
                  (const __m128i *)v169,
                  (unsigned int)v170);
          v41 = v28;
          v83 = (_QWORD *)sub_B8C330(v28);
          v88 = sub_F1ED40(v83, (__int64 *)&ptr, v84, v85, v86, v87);
          v37 = *(_QWORD *)(v28 + 120);
          if ( v37 && (v37 & 4) != 0 && (v37 &= 0xFFFFFFFFFFFFFFF8LL) != 0 )
            *(_QWORD *)v37 = v88;
          else
            *(_QWORD *)(v28 + 120) = v88 & 0xFFFFFFFFFFFFFFFBLL;
          if ( !v36 )
          {
            sub_BC36A0((_QWORD *)v21, v28, v150);
            goto LABEL_31;
          }
LABEL_92:
          if ( *(_DWORD *)(v36 + 136) )
          {
            v130 = v28;
            v89 = v36;
            do
            {
              if ( (unsigned int)sub_1CAF7B0(v89) == 2 )
              {
                v28 = v130;
                goto LABEL_31;
              }
              v89 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 48LL))(v89);
            }
            while ( v89 );
            v90 = v12 + 1;
            v152 = __PAIR64__(v139, v134);
            sub_168B9F0((__int64)&v159, v90, v134, 0x138Au, 0);
            if ( v162 )
            {
              sub_F23A70(&v161, (__int64)v149);
            }
            else if ( v164 )
            {
              v124 = sub_168B9E0(&v159);
              v127 = v160;
              if ( v160 )
                v127 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v160 + 32LL))(v160);
              v151 = v127;
              v128 = sub_1587BC0(v124, &v151, v122, v123, v125, v126);
              sub_F23A70((unsigned __int8 **)(*v128 + 32LL * v163 + 8), (__int64)v149);
            }
            sub_15884C0((__int64)&v159, (__int64 *)&v152);
            sub_15F7200(&v159);
            sub_168B9F0((__int64)&v159, v90, *(_DWORD *)(v36 + 136), 0x17A4u, 0);
            LOBYTE(v151) = (unsigned int)sub_B740B0(v36) != 1;
            v28 = 0;
            sub_1588420((__int64)&v159, (unsigned __int8 *)&v151);
            sub_15F7200(&v159);
            goto LABEL_44;
          }
          goto LABEL_31;
        }
LABEL_43:
        v28 = 0;
LABEL_44:
        if ( v169 != &v171 )
          free(v169);
        if ( v165 != v167 )
          free(v165);
        goto LABEL_15;
      }
    }
    else
    {
      v150 = 0;
    }
    v34 = sub_BC3BE0((_QWORD *)v21, (__int64)v32, v33, (__int64)&v150);
    v135 = 0;
    v35 = 0;
    v36 = (__int64)v34;
    goto LABEL_27;
  }
  v26 = 0;
  v27 = 32 * ((unsigned int)(v176 - 1) + 1LL);
  while ( !(unsigned __int8)sub_1E52D80(
                              a1,
                              16 - (unsigned int)(a11 == 0),
                              v17,
                              v18,
                              v19,
                              v20,
                              *(_QWORD *)((char *)ptr + v26),
                              *(_QWORD *)((char *)ptr + v26 + 8),
                              *(_QWORD *)((char *)ptr + v26 + 16),
                              *(_QWORD *)((char *)ptr + v26 + 24)) )
  {
    v26 += 32;
    if ( v27 == v26 )
      goto LABEL_23;
  }
  v28 = 0;
LABEL_15:
  if ( ptr != v177 )
    free(ptr);
  return v28;
}
