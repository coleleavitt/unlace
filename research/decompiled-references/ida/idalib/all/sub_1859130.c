unsigned __int64 __fastcall sub_1859130(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __int64 a8,
        int a9,
        unsigned __int16 *a10,
        unsigned int a11)
{
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r14
  __int64 v19; // r13
  int v21; // eax
  unsigned __int64 v22; // r15
  __int64 *v23; // rdx
  int *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // r12
  int v43; // rax^4
  bool v44; // zf
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // rcx
  _BYTE *v49; // rax
  unsigned __int64 v50; // rdi
  unsigned __int8 v51; // dl
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 **v61; // r9
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r9
  _QWORD *v65; // rdi
  bool v66; // al
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int64 *v70; // r12
  unsigned __int64 *v71; // r15
  __int64 v72; // rax
  __int64 v73; // rax
  void *v74; // rax
  unsigned __int64 v75; // rdi
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // eax
  __int64 v82; // rdx
  int v83; // r8d
  int v84; // r9d
  __int64 v85; // r9
  unsigned __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  int v91; // eax
  int v92; // edx
  __int64 v93; // rax
  __int64 v94; // r8
  __int64 v95; // r9
  _QWORD *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // rax
  unsigned __int64 v101; // rax
  void *v102; // r9
  __int64 v103; // r15
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // [rsp-10h] [rbp-288h]
  int v112[2]; // [rsp+0h] [rbp-278h]
  int v113[2]; // [rsp+0h] [rbp-278h]
  int v114[2]; // [rsp+0h] [rbp-278h]
  int v115[2]; // [rsp+0h] [rbp-278h]
  unsigned __int64 v116; // [rsp+0h] [rbp-278h]
  int v117[2]; // [rsp+0h] [rbp-278h]
  int v118[2]; // [rsp+0h] [rbp-278h]
  int v119[2]; // [rsp+8h] [rbp-270h]
  int *v120; // [rsp+8h] [rbp-270h]
  int v121[2]; // [rsp+8h] [rbp-270h]
  int v122[2]; // [rsp+8h] [rbp-270h]
  __int64 **v123; // [rsp+10h] [rbp-268h]
  unsigned __int64 *v124; // [rsp+10h] [rbp-268h]
  __int64 *v125; // [rsp+10h] [rbp-268h]
  int v126; // [rsp+10h] [rbp-268h]
  void *v127; // [rsp+10h] [rbp-268h]
  void *v128; // [rsp+10h] [rbp-268h]
  void *v129; // [rsp+10h] [rbp-268h]
  int *v130; // [rsp+18h] [rbp-260h]
  int v131[2]; // [rsp+18h] [rbp-260h]
  int v132[2]; // [rsp+18h] [rbp-260h]
  int v133[2]; // [rsp+20h] [rbp-258h] BYREF
  int v134[2]; // [rsp+28h] [rbp-250h] BYREF
  int v135[2]; // [rsp+30h] [rbp-248h] BYREF
  __int64 v136; // [rsp+38h] [rbp-240h] BYREF
  __int64 v137; // [rsp+40h] [rbp-238h] BYREF
  unsigned __int64 v138; // [rsp+48h] [rbp-230h] BYREF
  unsigned __int8 *v139; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int64 v140; // [rsp+58h] [rbp-220h]
  int v141; // [rsp+60h] [rbp-218h]
  int v142; // [rsp+68h] [rbp-210h]
  int v143[2]; // [rsp+70h] [rbp-208h] BYREF
  int v144[2]; // [rsp+78h] [rbp-200h]
  int v145[4]; // [rsp+80h] [rbp-1F8h]
  int v146[2]; // [rsp+90h] [rbp-1E8h]
  int v147; // [rsp+98h] [rbp-1E0h]
  int v148[2]; // [rsp+A0h] [rbp-1D8h] BYREF
  int v149[2]; // [rsp+A8h] [rbp-1D0h]
  int v150[2]; // [rsp+B0h] [rbp-1C8h] BYREF
  int v151[2]; // [rsp+B8h] [rbp-1C0h]
  _DWORD v152[7]; // [rsp+C0h] [rbp-1B8h] BYREF
  __int16 v153; // [rsp+DCh] [rbp-19Ch]
  int v154[4]; // [rsp+E0h] [rbp-198h]
  int v155[2]; // [rsp+F0h] [rbp-188h]
  int v156; // [rsp+F8h] [rbp-180h]
  int v157[2]; // [rsp+100h] [rbp-178h] BYREF
  int v158[2]; // [rsp+108h] [rbp-170h]
  char **v159; // [rsp+110h] [rbp-168h] BYREF
  int v160; // [rsp+118h] [rbp-160h]
  int v161; // [rsp+120h] [rbp-158h]
  int v162[2]; // [rsp+128h] [rbp-150h]
  int v163; // [rsp+130h] [rbp-148h]
  int v164[2]; // [rsp+134h] [rbp-144h]
  __int16 v165; // [rsp+13Ch] [rbp-13Ch]
  int v166[2]; // [rsp+140h] [rbp-138h]
  int v167[2]; // [rsp+148h] [rbp-130h]
  void *ptr; // [rsp+150h] [rbp-128h]
  int v169; // [rsp+158h] [rbp-120h]
  char v170; // [rsp+160h] [rbp-118h]
  int v171; // [rsp+168h] [rbp-110h]
  int v172; // [rsp+170h] [rbp-108h]
  int v173; // [rsp+178h] [rbp-100h]
  int v174; // [rsp+180h] [rbp-F8h]
  int v175; // [rsp+188h] [rbp-F0h]
  int v176; // [rsp+190h] [rbp-E8h] BYREF
  _QWORD *v177; // [rsp+198h] [rbp-E0h]
  int v178; // [rsp+1A0h] [rbp-D8h]
  int v179; // [rsp+1A8h] [rbp-D0h]
  int v180; // [rsp+1B0h] [rbp-C8h]
  int v181; // [rsp+1B8h] [rbp-C0h]
  __int64 v182; // [rsp+1C0h] [rbp-B8h]
  int v183; // [rsp+1C8h] [rbp-B0h]
  char v184; // [rsp+1D0h] [rbp-A8h]
  void *v185[2]; // [rsp+1E8h] [rbp-90h]
  __int64 v186; // [rsp+208h] [rbp-70h] BYREF
  int v187; // [rsp+228h] [rbp-50h]
  __int16 v188; // [rsp+233h] [rbp-45h]
  char v189; // [rsp+236h] [rbp-42h]

  *(_QWORD *)v134 = a2;
  *(_QWORD *)v133 = a5;
  if ( !a2 )
    return 1;
  if ( !a10 )
    return 1;
  sub_1CB44B0(a1, v134);
  if ( (*(_BYTE *)(*(_QWORD *)v134 + 28LL) & 0x7F) != 0x26 )
    return 1;
  v18 = sub_B72690(*(_QWORD *)v134 + 72LL);
  if ( v18 )
    v18 -= 64LL;
  if ( *(_QWORD *)(a4 + 8) )
  {
    *(_QWORD *)v135 = 0;
    if ( !a6 )
      goto LABEL_13;
  }
  else
  {
    if ( !a6 )
    {
      v19 = sub_183C500((__int64)a1, v18, *(__int64 *)v133, v15, v16, v17);
      if ( v19 )
      {
        if ( a11 )
        {
          sub_168B9F0((__int64)&v176, a1 + 1, a11, 0x12ABu, 0);
          v42 = sub_169D880((__int64)&v176, (__int64 *)v133);
          v43 = (unsigned __int64)sub_EEC8C0((unsigned __int64)a10, (__int64)v133, *(double *)a7.m128_u64) >> 32;
          v157[0] = a9;
          v157[1] = v43;
          sub_1587DB0(v42, (__int64 *)v157);
          sub_15F7200(&v176);
        }
        return sub_1840700((__int64)a1, v19, a10, a9, *(double *)a7.m128_u64);
      }
      *(_QWORD *)v135 = 0;
LABEL_13:
      v21 = (*(_DWORD *)a8 >> 12) & 0x7F;
      switch ( v21 )
      {
        case '!':
          v22 = sub_1E5FBF0(a1, *(_QWORD *)(a8 + 8), 1);
          goto LABEL_19;
        case '3':
          sub_168B9F0((__int64)&v176, a1 + 1, *(_DWORD *)(a8 + 192), 0xE01u, 0);
          sub_15F7200(&v176);
          return 1;
        case '7':
          v22 = sub_1E6E600(
                  (_DWORD)a1,
                  *(_QWORD *)(a8 + 8),
                  *(_QWORD *)(a8 + 16),
                  *(_DWORD *)(a8 + 160),
                  *(_DWORD *)(a8 + 204),
                  0,
                  0,
                  0);
          goto LABEL_19;
      }
      sub_1838550((__int64)&v176, (__int64)a1, *(__int64 *)v133, a9, 0);
      v24 = &v176;
      sub_1A5D3E0((_DWORD)a1, (unsigned int)&v176, a3, a4, 0, 0, 0);
      v25 = sub_183EF90((__int64)&v176);
      v28 = v111;
      v29 = v25;
      if ( v25 )
        goto LABEL_24;
      if ( v176 != 5 )
      {
        v44 = *(_QWORD *)(a4 + 8) == 0;
        v188 = 0;
        if ( v44
          || (v24 = (int *)a4, !sub_169D3A0((__int64)a1, a4, v26, v27, v111, 0))
          || (v24 = (int *)a4, (v86 = sub_16A2930((__int64)a1, a4, 0, v45, v46, v47)) != 0)
          && (v87 = (*(_BYTE *)(v86 + 8) & 0x7Fu) - 59, (unsigned int)v87 <= 2)
          && v86 != 64
          && !(unsigned __int8)sub_B96D40(v86 - 64) )
        {
          v48 = 0;
          v22 = 0;
          goto LABEL_38;
        }
        v91 = sub_15AB9E0(a4, (_QWORD *)a1[31], v87, v88, v89, v90);
        v93 = sub_1CD4E00((_DWORD)a1, 6, 0, v91, v92, v133[0], a9, 1);
        v22 = v93;
        if ( (v93 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v24 = (int *)v93;
          v116 = v93 & 0xFFFFFFFFFFFFFFF0LL;
          v96 = sub_A81BC0((_QWORD *)a1[31], v93, 0, v93 & 0xFFFFFFFFFFFFFFF0LL, v94, v95);
          v48 = v116;
          *(_QWORD *)v135 = v96;
          if ( *v96 )
          {
            *((_DWORD *)v96 + 2) = 0;
            *(_QWORD *)v122 = v116;
            *((_DWORD *)v96 + 6) = a9;
            v24 = (int *)a1[31];
            *(_QWORD *)v117 = v96;
            sub_15AB9E0(a4, v24, v97, v48, (__int64)v96, v98);
            v48 = *(_QWORD *)v122;
            *(_QWORD *)(*(_QWORD *)v117 + 16LL) = v99;
          }
          v176 = 0;
          v178 = 0;
          if ( v185[0] )
          {
            *(_QWORD *)v118 = v48;
            sub_1A39780(v185[0]);
            v48 = *(_QWORD *)v118;
          }
          a7.m128_u64[0] = 0;
          v189 = 0;
          *(_OWORD *)v185 = 0;
          v186 = *(_QWORD *)v133;
LABEL_38:
          v49 = (_BYTE *)a1[29];
          v120 = v148;
          if ( (*v49 & 0x20) != 0 && (char)v49[1] >= 0 && v176 == 2 )
          {
            v50 = *v177 & 0xFFFFFFFFFFFFFFF8LL;
            v51 = *(_BYTE *)(v50 + 28) & 0x7F;
            if ( ((v51 + 52) & 0x7Fu) <= 1 || (unsigned int)v51 - 53 <= 1 )
            {
              *(_QWORD *)v112 = v48;
              v52 = sub_B72ED0(v50);
              v48 = *(_QWORD *)v112;
              v50 = v52;
            }
            v120 = v148;
            if ( (*(_BYTE *)(v50 + 28) & 0x7F) == 0x48 )
            {
              *(_QWORD *)v143 = *(_QWORD *)(*(_QWORD *)(sub_BC3930(v50) & 0xFFFFFFFFFFFFFFF0LL) + 32LL);
              v57 = sub_1845530(v18, (__int64)v24, v53, v54, v55, v56);
              v123 = (__int64 **)v58;
              v61 = (__int64 **)v57;
              if ( v57 != v58 )
              {
                v130 = v143;
                while ( 1 )
                {
                  *(_QWORD *)v113 = v61;
                  v62 = sub_1839D10(v61[2], (__int64)v24, v58, v59, v60);
                  v63 = sub_F6A860(*(_QWORD *)(v62 & 0xFFFFFFFFFFFFFFF0LL));
                  v64 = *(_QWORD *)v113;
                  if ( v63 )
                  {
                    v65 = (_QWORD *)a1[31];
                    v24 = v157;
                    *(_QWORD *)v157 = *(_QWORD *)(v63 + 32);
                    v66 = sub_AB7BF0(v65, (__int64 *)v157, (__int64 *)v143, 1u);
                    v64 = *(_QWORD *)v113;
                    if ( v66 )
                      break;
                  }
                  v61 = (__int64 **)(v64 + 24);
                  if ( v61 == v123 )
                  {
                    v120 = v148;
                    goto LABEL_51;
                  }
                }
                sub_168B9F0((__int64)v157, a1 + 1, a9, 0x1657u, 0);
                v148[1] = (unsigned __int64)sub_EEC8C0((unsigned __int64)a10, (__int64)(a1 + 1), *(double *)a7.m128_u64) >> 32;
                v148[0] = a9;
                v120 = v148;
                sub_1587DB0((__int64)v157, (__int64 *)v148);
                sub_15F7200(v157);
                v22 = sub_1839D10(*(__int64 **)(*(_QWORD *)v113 + 16LL), (__int64)v148, v108, v109, v110);
              }
LABEL_51:
              v48 = v22 & 0xFFFFFFFFFFFFFFF0LL;
            }
          }
          *(_QWORD *)v148 = 0;
          *(_QWORD *)v151 = 0x100000000LL;
          *(_QWORD *)v144 = 0x101010101LL;
          *(_QWORD *)v143 = &off_2BC6A80;
          *(_QWORD *)v150 = v152;
          memset(&v152[2], 0, 20);
          a7 = 0;
          *(_QWORD *)v149 = 0;
          v153 = 0;
          *(_OWORD *)v154 = 0;
          *(_QWORD *)v155 = 0;
          *(_OWORD *)v145 = 0;
          *(_QWORD *)v146 = v18;
          if ( v178 )
          {
            if ( v48 )
            {
LABEL_54:
              sub_17A1D90(v148);
LABEL_30:
              sub_169D230((__int64)&v176);
              goto LABEL_19;
            }
            v125 = a1 + 1;
          }
          else
          {
            if ( v48 )
              goto LABEL_54;
            v69 = v18 + 64;
            if ( !v18 )
              v69 = 0;
            sub_1A6BD60(
              (unsigned int)v157,
              (_DWORD)a1,
              (unsigned int)&v186,
              v187,
              a3,
              a4,
              (__int64)v143,
              1,
              v69,
              0,
              0,
              1);
            *(_QWORD *)v148 = *(_QWORD *)v157;
            *(_QWORD *)v149 = *(_QWORD *)v158;
            sub_AEA1F0((char ***)v150, &v159);
            v70 = *(unsigned __int64 **)&v154[2];
            *(_QWORD *)&v152[2] = *(_QWORD *)v162;
            v71 = *(unsigned __int64 **)v154;
            v124 = *(unsigned __int64 **)v154;
            v152[4] = v163;
            *(_QWORD *)&v152[5] = *(_QWORD *)v164;
            v153 = v165;
            v72 = *(_QWORD *)v166;
            *(_QWORD *)v166 = 0;
            *(_QWORD *)v154 = v72;
            v73 = *(_QWORD *)v167;
            *(_QWORD *)v167 = 0;
            *(_QWORD *)&v154[2] = v73;
            v74 = ptr;
            ptr = nullptr;
            *(_QWORD *)v155 = v74;
            if ( v124 != v70 )
            {
              do
              {
                if ( *v71 )
                {
                  v75 = v71[1];
                  if ( v75 )
                    sub_1580C40(v75, *v71);
                }
                v71 += 3;
              }
              while ( v70 != v71 );
            }
            if ( v124 )
              operator delete(v124);
            if ( *(_QWORD *)v148 )
            {
              sub_17A1D90(v157);
              v80 = sub_183AA90((__int64)v148);
              v125 = a1 + 1;
              if ( v80 )
              {
                v81 = *(_BYTE *)(v80 + 28) & 0x7F;
                v82 = (unsigned int)(v81 - 49);
                if ( (unsigned int)v82 <= 2 )
                {
                  v126 = v80;
                  sub_168B9B0((__int64)v157, (__int64)(a1 + 1), 4141);
                  sub_AE9DF0((unsigned __int8 **)v157, *(__int64 *)v133, 5u);
                  sub_AE9DF0((unsigned __int8 **)v157, 1, 2u);
                  sub_1A60AF0(
                    (int)a1,
                    (int)v148,
                    (int)v157,
                    1,
                    v83,
                    v84,
                    (int)v157,
                    (int)v148,
                    v126,
                    (int)v130,
                    v133[0],
                    v134[0],
                    v135[0],
                    v136,
                    v137,
                    v138,
                    (int)v139,
                    v140,
                    v141,
                    v142,
                    v143[0],
                    v144[0],
                    v145[0],
                    v145[2],
                    v146[0],
                    v147,
                    v148[0],
                    v149[0],
                    v150[0],
                    v151[0],
                    v152[0],
                    v152[2],
                    v152[4],
                    v152[6],
                    v154[0],
                    v154[2],
                    v155[0],
                    v156,
                    v157[0],
                    v158[0],
                    (int)v159,
                    v160,
                    v161,
                    v162[0],
                    v163,
                    v164[1],
                    v166[0],
                    v167[0],
                    ptr,
                    v169,
                    v170,
                    v171,
                    v172,
                    v173,
                    v174,
                    v175,
                    v176,
                    (int)v177,
                    v178,
                    v179,
                    v180,
                    v181,
                    v182,
                    v183,
                    v184);
                  v85 = (__int64)v127;
                  if ( *(_QWORD *)v157 && *(_QWORD *)v158 )
                  {
                    sub_1580C40(*(unsigned __int64 *)v158, *(unsigned __int64 *)v157);
                    v85 = (__int64)v127;
                  }
                  v77 = sub_1840700((__int64)a1, v85, a10, a9, 0.0);
                  goto LABEL_75;
                }
                if ( (unsigned int)(v81 - 58) <= 9 )
                {
                  v100 = *(_QWORD *)(v80 + 48);
                  if ( v100 )
                  {
                    v101 = v100 & 0xFFFFFFFFFFFFFFF0LL;
                  }
                  else
                  {
                    *(_QWORD *)v132 = v80;
                    v101 = sub_A7AA70(a1[31], v80, v82, v78, v79, v80);
                    v80 = *(_QWORD *)v132;
                  }
                  *(_QWORD *)v131 = v80;
                  if ( sub_1845DB0((__int64)a1, v18, v101, (__int64)&v136, &v137, v80) )
                  {
                    sub_168B9B0((__int64)v157, (__int64)(a1 + 1), 0);
                    sub_168B9B0((__int64)&v139, (__int64)(a1 + 1), 4141);
                    sub_AE9DF0(&v139, *(__int64 *)v133, 5u);
                    sub_AE9DF0(&v139, 0, 2u);
                    sub_1A5FC70(a1, v148, &v139, v157, 1);
                    v102 = *(void **)v131;
                    if ( v139 && v140 )
                    {
                      sub_1580C40(v140, (unsigned __int64)v139);
                      v102 = *(void **)v131;
                    }
                    if ( *(_QWORD *)v157 && *(_QWORD *)v158 )
                    {
                      v128 = v102;
                      sub_1580C40(*(unsigned __int64 *)v158, *(unsigned __int64 *)v157);
                      v102 = v128;
                    }
                    v103 = v136;
                    if ( !v136 )
                      v103 = v137;
                    v129 = v102;
                    sub_168B9F0((__int64)v157, a1 + 1, *(_DWORD *)v103, 0x16AFu, 0);
                    v138 = sub_1839D10(*(__int64 **)(v103 + 16), (__int64)(a1 + 1), v104, v105, v106);
                    v107 = sub_162B6D0((__int64)v157, (__int64 *)&v138);
                    v139 = *(unsigned __int8 **)v103;
                    sub_1587DB0(v107, (__int64 *)&v139);
                    sub_15F7200(v157);
                    sub_17A1D90(v148);
                    v29 = (__int64)v129;
LABEL_24:
                    v30 = *(_QWORD *)(v29 + 48);
                    if ( v30 )
                    {
                      v31 = v30 & 0xFFFFFFFFFFFFFFF0LL;
                    }
                    else
                    {
                      *(_QWORD *)v121 = v29;
                      v68 = sub_A7AA70(a1[31], v29, v26, 0, v28, v29);
                      v29 = *(_QWORD *)v121;
                      v31 = v68;
                    }
                    *(_QWORD *)v119 = v29;
                    v22 = sub_1E5F850(a1, 6, a4, v31, 0);
                    sub_19116A0(a1, *(unsigned int *)(*(_QWORD *)v119 + 24LL), *(_QWORD *)v119, 0);
                    *(_QWORD *)v135 = sub_A81BC0((_QWORD *)a1[31], v22, 0, v32, v33, v34);
                    v35 = **(_QWORD **)v135;
                    *(_QWORD *)v158 = *(_QWORD *)v135 + 8LL;
                    *(_QWORD *)v157 = v35;
                    sub_1743120((__int64)v157);
                    *v39 = a9;
                    v40 = *(_QWORD *)v157;
                    if ( (unsigned __int8)(*(_WORD *)(*(_QWORD *)v157 + 18LL) >> 3) != 6
                      || *(_QWORD *)(*(_QWORD *)v157 + 32LL) )
                    {
                      **(_DWORD **)v158 = 0;
                    }
                    sub_15AB9E0(a4, (_QWORD *)a1[31], v40, v36, v37, v38);
                    if ( (unsigned __int8)(*(_WORD *)(*(_QWORD *)v157 + 18LL) >> 3) != 6
                      || *(_QWORD *)(*(_QWORD *)v157 + 32LL) )
                    {
                      *(_QWORD *)(*(_QWORD *)v158 + 8LL) = v41;
                    }
                    goto LABEL_30;
                  }
                }
              }
            }
            else
            {
              sub_17A1D90(v157);
              v125 = a1 + 1;
            }
          }
          sub_168B9F0((__int64)v157, v125, a9, 0x102Cu, 0);
          v76 = sub_169D880((__int64)v157, (__int64 *)v133);
          v139 = (unsigned __int8 *)__PAIR64__(
                                      (unsigned __int64)sub_EEC8C0((unsigned __int64)a10, (__int64)v133, 0.0) >> 32,
                                      a9);
          sub_1587DB0(v76, (__int64 *)&v139);
          sub_15F7200(v157);
          v77 = 1;
LABEL_75:
          *(_QWORD *)v115 = v77;
          sub_17A1D90(v120);
          v67 = *(_QWORD *)v115;
          goto LABEL_60;
        }
      }
      v67 = 1;
LABEL_60:
      *(_QWORD *)v114 = v67;
      sub_169D230((__int64)&v176);
      return *(_QWORD *)v114;
    }
    *(_QWORD *)v135 = 0;
  }
  v22 = sub_1E5F010(a6, v135);
  if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
LABEL_19:
  v23 = *(__int64 **)v135;
  if ( !*(_QWORD *)v135 )
  {
    v23 = sub_A81910((_QWORD *)a1[31], v22, a9);
    *(_QWORD *)v135 = v23;
  }
  return sub_184C6E0(a1, v22, v23, a10, v18, a11, a7);
}
