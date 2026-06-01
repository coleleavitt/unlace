unsigned __int64 __fastcall sub_1C3BDD0(__int64 a1, __int64 a2, __int64 a3, const void *a4, __int64 a5)
{
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // bp
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbp
  _QWORD *v24; // rax
  __int64 v25; // r12
  void **v26; // rdx
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64 *, __int64, __int64, __int64, __int64); // rsi
  __int64 v29; // rdx
  char v30; // al
  __int64 *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  int v36; // esi
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdi
  void ***v40; // r12
  void ***v41; // rdi
  void **v42; // rbp
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 *v50; // rax
  __int64 v51; // rdi
  int v52; // r12d
  unsigned int i; // eax
  __int64 v54; // rdx
  __int64 v55; // rbp
  unsigned int v56; // eax
  unsigned int v57; // eax
  __int64 v58; // rax
  unsigned int v59; // edx
  unsigned __int64 v60; // rbx
  bool v62; // al
  unsigned int v63; // eax
  unsigned int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdi
  __int64 v69; // rsi
  char v70; // al
  int v71; // eax
  int v72; // ebp
  __int64 v73; // r10
  __int64 v74; // rax
  unsigned __int64 v75; // rdx
  _QWORD *v76; // rcx
  __int64 v77; // r8
  unsigned __int64 v78; // rdx
  __int64 v79; // rax
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // rax
  _DWORD *v82; // rax
  __int64 v83; // rdi
  int v84; // edx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r12
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // r12
  __int64 v97; // rax
  _QWORD *v98; // rax
  int v99; // ebp
  __int64 *v100; // r10
  int v101; // eax
  __int64 v102; // rax
  unsigned int v103; // eax
  __int64 v105; // [rsp+8h] [rbp-310h]
  unsigned __int64 v106; // [rsp+10h] [rbp-308h]
  __int64 v107; // [rsp+18h] [rbp-300h]
  __int64 v108; // [rsp+18h] [rbp-300h]
  __int64 v109; // [rsp+18h] [rbp-300h]
  __int64 v110; // [rsp+28h] [rbp-2F0h]
  unsigned int v111; // [rsp+30h] [rbp-2E8h]
  __int64 v113; // [rsp+40h] [rbp-2D8h]
  __int64 v115; // [rsp+58h] [rbp-2C0h]
  __int64 v116; // [rsp+58h] [rbp-2C0h]
  __int64 v117; // [rsp+78h] [rbp-2A0h] BYREF
  __int64 v118; // [rsp+80h] [rbp-298h] BYREF
  __int64 v119; // [rsp+88h] [rbp-290h]
  unsigned int v120; // [rsp+90h] [rbp-288h]
  __int64 v121; // [rsp+A0h] [rbp-278h] BYREF
  __int64 v122; // [rsp+A8h] [rbp-270h]
  unsigned int v123; // [rsp+B0h] [rbp-268h]
  __int64 *v124; // [rsp+C0h] [rbp-258h] BYREF
  __int64 v125; // [rsp+C8h] [rbp-250h]
  __int64 (__fastcall *v126)(__int64 *, __int64, __int64, __int64, __int64); // [rsp+D0h] [rbp-248h]
  unsigned __int64 v127; // [rsp+D8h] [rbp-240h]
  __int64 v128[18]; // [rsp+E0h] [rbp-238h] BYREF
  unsigned __int64 v129; // [rsp+170h] [rbp-1A8h] BYREF
  void *v130; // [rsp+178h] [rbp-1A0h] BYREF
  void **v131; // [rsp+180h] [rbp-198h]
  __int64 v132; // [rsp+188h] [rbp-190h]
  unsigned __int8 *v133; // [rsp+190h] [rbp-188h] BYREF
  __int64 v134; // [rsp+198h] [rbp-180h] BYREF
  unsigned int v135; // [rsp+1A0h] [rbp-178h]
  char v136; // [rsp+1E8h] [rbp-130h]
  unsigned int v137; // [rsp+1F0h] [rbp-128h]
  char v138; // [rsp+1F4h] [rbp-124h]
  void *v139[2]; // [rsp+218h] [rbp-100h] BYREF
  int v140; // [rsp+228h] [rbp-F0h]
  char v141; // [rsp+22Ch] [rbp-ECh]
  _QWORD v142[5]; // [rsp+230h] [rbp-E8h] BYREF
  void *ptr; // [rsp+258h] [rbp-C0h]
  __int64 v144; // [rsp+260h] [rbp-B8h]
  _DWORD v145[26]; // [rsp+268h] [rbp-B0h] BYREF
  __int64 v146; // [rsp+2D0h] [rbp-48h]
  __int16 v147; // [rsp+2D8h] [rbp-40h]
  char v148; // [rsp+2DAh] [rbp-3Eh]

  v111 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 68LL) & 8) == 0
    || (v6 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL), v7 = *(_DWORD *)(v6 + 248), (unsigned int)(v7 - 41) > 1)
    && v7 != 26 )
  {
    a2 = (unsigned int)a2;
    sub_1C3BC60((_QWORD *)a1, a2, 1);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) == 0 )
      goto LABEL_5;
    goto LABEL_81;
  }
  sub_1C3BC60((_QWORD *)a1, a2, 1);
  a2 = a1;
  sub_1606D30((__int64)&v129, (_QWORD *)a1, v111, 158, 0);
  if ( v136 )
  {
    a2 = *(_QWORD *)(v6 + 216);
    sub_AEC220(&v133, (_BYTE *)a2, *(_QWORD *)(v6 + 224));
    sub_15F7200(&v129);
  }
  else
  {
    if ( v138 )
    {
      v96 = sub_168B9E0(&v129);
      v97 = (__int64)v131;
      if ( v131 )
        v97 = (*((__int64 (__fastcall **)(void **))*v131 + 4))(v131);
      v128[0] = v97;
      v98 = sub_1587BC0(v96, v128, v92, v93, v94, v95);
      a2 = *(_QWORD *)(v6 + 216);
      sub_AEC220((unsigned __int8 **)(*v98 + 32LL * v137 + 8), (_BYTE *)a2, *(_QWORD *)(v6 + 224));
    }
    sub_15F7200(&v129);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
  {
LABEL_81:
    sub_178F5D0((__int64)&v129, *(__int64 **)(a1 + 664), v111, 0xDEBu);
    if ( v136 )
    {
      sub_AE9DF0(&v133, (__int64)"try", 1u);
    }
    else if ( v138 )
    {
      sub_1C39890((__int64)&v129, (__int64)"try");
    }
    v68 = *(_QWORD *)(a1 + 664);
    v69 = *(_QWORD *)(*(_QWORD *)v68 + 544LL);
    v70 = *(_BYTE *)(v69 + 8);
    a2 = v69 - 72;
    if ( (v70 & 0x7Fu) - 34 >= 6 )
      a2 = 0;
    v71 = sub_178EA20(v68, a2, nullptr, v65, v66, v67);
    v72 = v71;
    if ( v136 )
    {
      a2 = v71;
      sub_1C2FE50(&v133, v71);
      sub_15F7200(&v129);
    }
    else
    {
      if ( v138 )
      {
        v89 = sub_168B9E0(&v129);
        v90 = (__int64)v131;
        if ( v131 )
          v90 = (*((__int64 (__fastcall **)(void **))*v131 + 4))(v131);
        v128[0] = v90;
        v91 = sub_1587BC0(v89, v128, v85, v86, v87, v88);
        a2 = v72;
        sub_1C2FE50((unsigned __int8 **)(*v91 + 32LL * v137 + 8), v72);
      }
      sub_15F7200(&v129);
    }
  }
LABEL_5:
  v9 = *(_QWORD *)(a1 + 608);
  if ( v9 && (*(_BYTE *)(v9 + 10) & 2) != 0 )
  {
    a2 = a1 + 8;
    sub_168B9F0((__int64)&v129, (__int64 *)(a1 + 8), v111, 0x1207u, 0);
    if ( v136 )
    {
      a2 = (__int64)"try";
      sub_AE9DF0(&v133, (__int64)"try", 1u);
    }
    else if ( v138 )
    {
      a2 = (__int64)"try";
      sub_1C39890((__int64)&v129, (__int64)"try");
    }
    sub_15F7200(&v129);
  }
  v110 = 0;
  v10 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v10 )
    v110 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v10 - 8);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 4) == 0 && *(_DWORD *)(v110 + 28) )
  {
    sub_168B9F0((__int64)&v129, (__int64 *)(a1 + 8), v111, 0x1063u, 0);
    LODWORD(v128[0]) = 0;
    sub_1587D10((__int64)&v129, (int *)v128);
    sub_15F7200(&v129);
    a2 = a1 + 8;
    sub_168B9F0((__int64)&v129, (__int64 *)(a1 + 8), *(_DWORD *)(v110 + 28), 0x16D1u, 0);
    if ( v136 )
    {
      a2 = (__int64)"'__try'";
      sub_AE9DF0(&v133, (__int64)"'__try'", 1u);
    }
    else if ( v138 )
    {
      a2 = (__int64)"'__try'";
      sub_1C39890((__int64)&v129, (__int64)"'__try'");
    }
    sub_15F7200(&v129);
  }
  v11 = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v105 = (unsigned int)(a5 - 1);
  if ( !(_DWORD)a5 )
  {
LABEL_65:
    *(_BYTE *)(v110 + 8) |= 8u;
    *(_QWORD *)(v110 + 20) = v111;
    v60 = sub_EF2680(*(_QWORD **)(a1 + 248), v111, a3, a4, a5, v8);
    goto LABEL_55;
  }
  while ( 1 )
  {
    v12 = *((_QWORD *)a4 + v11);
    v13 = *(_QWORD *)(v12 + 16);
    if ( !v13 )
      break;
    if ( *(char *)(v13 + 28) < 0 )
      goto LABEL_51;
    v14 = sub_EF2290(*((_QWORD *)a4 + v11));
    v17 = *(_QWORD *)(*(_QWORD *)&byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42;
    v19 = *(_QWORD *)(v17 + 8) & 0xFLL;
    if ( (*(_QWORD *)(v17 + 8) & 0xF) != 0 )
      v20 = sub_F64F00(
              *(_QWORD *)&byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v14) & 7,
              a2,
              v19,
              v15,
              v16)
          & 0xFFFFFFFFFFFFFFF0LL;
    else
      v20 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    v21 = *(_QWORD *)v20;
    v22 = v18 | v106 & 0xFFFFFFFFFFFFFFFELL;
    v23 = v20;
    v106 = v22;
    if ( (v22 & 1) != 0
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
    {
      v20 = sub_F68450(v21, a2, v19, v15, v16);
      v23 = v20 & 0xFFFFFFFFFFFFFFF0LL;
      v21 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v107 = v20;
    v24 = sub_F63270(v21, a2, v19, v15, v16, v20);
    v25 = (__int64)v24;
    if ( v24 )
    {
      v8 = v107;
      if ( !v24[16] )
      {
        v73 = v24[13];
        v74 = *(_QWORD *)(v73 + 96);
        v75 = v74 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v74 & 1) == 0 )
        {
          v76 = (_QWORD *)(v74 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v74 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            if ( (v74 & 2) == 0 )
              goto LABEL_51;
            v77 = v76[2295];
            v78 = v73 & 0xFFFFFFFFFFFFFFFBLL;
            if ( v77 )
            {
              v79 = v76[294];
              v76[304] += 24LL;
              v80 = (v79 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              a2 = v80 + 24;
              if ( v76[295] >= v80 + 24 && v79 )
              {
                v76[294] = a2;
                v81 = (v79 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                a2 = 24;
                v116 = v77;
                v113 = v73;
                v81 = sub_986170((__int64)(v76 + 294), 24, 24, 3, v77, v107);
                v77 = v116;
                v73 = v113;
                v8 = v107;
                v80 = v81 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v81 = v77;
              v78 = v80 | 4;
              *(_DWORD *)(v81 + 8) = 0;
              *(_QWORD *)(v81 + 16) = v73;
            }
            v75 = v78 & 0xFFFFFFFFFFFFFFFELL;
            v74 = v75 | 1;
            *(_QWORD *)(v73 + 96) = v75 | 1;
          }
        }
        if ( v75 )
        {
          if ( (v75 & 4) != 0 )
          {
            v82 = (_DWORD *)(v74 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v82 )
            {
              v83 = *(_QWORD *)v82;
              v84 = *(_DWORD *)(*(_QWORD *)v82 + 12LL);
              if ( v82[2] != v84 )
              {
                v82[2] = v84;
                a2 = v73;
                v109 = v8;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v83 + 152LL))(v83, v73);
                v8 = v109;
              }
            }
          }
        }
        if ( !*(_QWORD *)(v25 + 128) )
          goto LABEL_51;
      }
      v131 = &v130;
      v26 = (void **)&v134;
      v130 = &v130;
      v132 = 0;
      v133 = (_BYTE *)(&dword_0 + 1);
      do
      {
        *v26 = nullptr;
        v26 += 2;
      }
      while ( v139 != v26 );
      v108 = v8;
      v139[0] = v142;
      ptr = v145;
      v144 = 0x400000000LL;
      v139[1] = &byte_4;
      v140 = 0;
      v141 = 1;
      v142[4] = 0;
      v145[24] = 0;
      v146 = 0;
      v147 = 257;
      v148 = 1;
      v129 = v25;
      v27 = sub_EF2290(v12);
      v28 = sub_1C38B00;
      v124 = &v118;
      v29 = *(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL];
      v125 = 0;
      v126 = nullptr;
      v127 = v29 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v29 | (unsigned __int8)v27) & 7;
      v30 = sub_B6EFE0(v25, (__int64 *)sub_1C38B00, (__int64)&v124, (__int64)&v129, 0);
      v34 = v108;
      if ( v30 )
      {
        v28 = v126;
        v115 = v125;
        v62 = sub_B65DB0((__int64)&v129, (__int64)v126);
        v34 = v108;
        if ( !v62 )
        {
          v63 = sub_B72FF0(*(_QWORD *)(v12 + 16));
          sub_168B9F0((__int64)v128, (__int64 *)(a1 + 8), v63, 0x1ADBu, 0);
          v117 = sub_EF2290(v12);
          sub_162B6D0((__int64)v128, &v117);
          sub_15F7200(v128);
          v64 = sub_B72FF0(*(_QWORD *)(v115 + 16));
          sub_168B9F0((__int64)v128, (__int64 *)(a1 + 8), v64, 0x188Du, 0);
          v117 = sub_EF2290(v115);
          v28 = (__int64 (__fastcall *)(__int64 *, __int64, __int64, __int64, __int64))&v117;
          sub_162B6D0((__int64)v128, &v117);
          sub_15F7200(v128);
          v34 = v108;
        }
      }
      v35 = *(_QWORD *)v23;
      if ( (*(_BYTE *)(*(_QWORD *)v23 + 8LL) & 0xF) != 0 )
        v35 = sub_F64F00(v34, (__int64)v28, (__int64)v31, v32, v33);
      v36 = v120;
      v37 = v35 & 0xFFFFFFFFFFFFFFF0LL;
      v117 = v37;
      if ( v120 )
      {
        v34 = v120 - 1;
        v33 = v118;
        LODWORD(v38) = v34 & (v37 ^ (v37 >> 9));
        v31 = (__int64 *)(v118 + 16LL * (unsigned int)v38);
        v39 = *v31;
        if ( v37 == *v31 )
          goto LABEL_27;
        v99 = 1;
        v100 = nullptr;
        if ( v39 )
        {
          while ( 1 )
          {
            if ( !v100 && v39 == -1 )
              v100 = v31;
            v38 = (unsigned int)v34 & ((_DWORD)v38 + v99);
            v31 = (__int64 *)(v118 + 16 * v38);
            v39 = *v31;
            if ( *v31 == v37 )
              goto LABEL_27;
            if ( !v39 )
            {
              if ( v100 )
                v31 = v100;
              break;
            }
            ++v99;
          }
        }
        v32 = 3 * v120;
        v128[0] = (__int64)v31;
        v101 = v119 + 1;
        if ( 4 * ((int)v119 + 1) < (unsigned int)v32 )
        {
          v32 = v120 - HIDWORD(v119) - v101;
          if ( (unsigned int)v32 > v120 >> 3 )
          {
LABEL_125:
            LODWORD(v119) = v101;
            if ( *v31 )
              --HIDWORD(v119);
            v102 = v117;
            v31[1] = 0;
            *v31 = v102;
LABEL_27:
            v31[1] = v12;
            if ( ptr != v145 )
              free(ptr);
            if ( !v141 )
              free(v139[0]);
            if ( ((unsigned __int8)v133 & 1) == 0 )
              operator delete(v134, 16LL * v135, 8);
            v40 = (void ***)v130;
            if ( v130 != &v130 )
            {
              while ( 1 )
              {
                v41 = (void ***)v40[2];
                v42 = *v40;
                if ( v41 == v40 + 4 )
                {
                  operator delete(v40);
                  if ( v42 == &v130 )
                    goto LABEL_39;
                }
                else
                {
                  free(v41);
                  operator delete(v40);
                  if ( v42 == &v130 )
                    goto LABEL_39;
                }
                v40 = (void ***)v42;
              }
            }
            goto LABEL_39;
          }
LABEL_130:
          sub_1C394E0((__int64)&v118, v36, (__int64)v31, v32, v33, v34);
          sub_1C38500(&v118, (unsigned __int64 *)&v117, v128);
          v31 = (__int64 *)v128[0];
          v101 = v119 + 1;
          goto LABEL_125;
        }
      }
      else
      {
        v128[0] = 0;
      }
      v36 = 2 * v120;
      goto LABEL_130;
    }
LABEL_39:
    v43 = sub_EF2290(v12);
    v45 = (unsigned __int8)v130 & 0xFE;
    v46 = *(_QWORD *)&byte_8[v43 & 0xFFFFFFFFFFFFFFF0LL];
    LOBYTE(v130) = (unsigned __int8)v130 & 0xFE;
    v129 = v46 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v46 | (unsigned __int8)v43) & 7;
    v47 = (__int64 *)(v46 & 0xFFFFFFFFFFFFFFF0LL);
    v48 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL);
    v49 = *(_QWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v49 + 16) == 42 )
    {
      v45 = (unsigned int)v45 | 1;
      LOBYTE(v130) = v45;
      v48 = *v47;
    }
    if ( (*(_BYTE *)(v48 + 8) & 0xF) != 0 )
      v50 = (__int64 *)(sub_F64F00(v129, v49, v48, v45, v44) & 0xFFFFFFFFFFFFFFF0LL);
    else
      v50 = (__int64 *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
    v129 = (unsigned __int64)v50;
    v51 = *v50;
    if ( ((unsigned __int8)v130 & 1) != 0
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v51 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
    {
      v129 = sub_F68450(v51, v49, v48, v45, v44);
    }
    a2 = v123;
    v131 = (void **)v12;
    if ( v123 )
    {
      v45 = 0;
      v52 = 1;
      for ( i = (v123 - 1) & (v129 ^ (v129 >> 9)); ; i = (v123 - 1) & v103 )
      {
        v54 = v121 + 24LL * i;
        v44 = *(unsigned __int8 *)(v54 + 8);
        v8 = ((unsigned __int8)v44 ^ (unsigned __int8)v130) & 1;
        if ( (((unsigned __int8)v44 ^ (unsigned __int8)v130) & 1) == 0 && v129 == *(_QWORD *)v54 )
        {
          v55 = *(_QWORD *)(v54 + 16);
          v56 = sub_B72FF0(*(_QWORD *)(v12 + 16));
          sub_168B9F0((__int64)&v129, (__int64 *)(a1 + 8), v56, 0x1ADBu, 0);
          v128[0] = sub_EF2290(v12);
          sub_162B6D0((__int64)&v129, v128);
          sub_15F7200(&v129);
          v57 = sub_B72FF0(*(_QWORD *)(v55 + 16));
          sub_168B9F0((__int64)&v129, (__int64 *)(a1 + 8), v57, 0x188Du, 0);
          a2 = (__int64)v128;
          v128[0] = sub_EF2290(v55);
          sub_162B6D0((__int64)&v129, v128);
          sub_15F7200(&v129);
          goto LABEL_51;
        }
        if ( (v44 & 1) == 0 && !*(_QWORD *)v54 )
          break;
        if ( (v44 & 1) == 0 && *(_QWORD *)v54 == -1 && !v45 )
          v45 = v121 + 24LL * i;
        v103 = v52 + i;
        ++v52;
      }
      if ( !v45 )
        v45 = v121 + 24LL * i;
      v48 = (unsigned int)(v122 + 1);
      v128[0] = v45;
      if ( 4 * (int)v48 < 3 * v123 )
      {
        if ( v123 - HIDWORD(v122) - (unsigned int)v48 > v123 >> 3 )
          goto LABEL_61;
        goto LABEL_60;
      }
    }
    else
    {
      v128[0] = 0;
    }
    LODWORD(a2) = 2 * v123;
LABEL_60:
    sub_1C33650(&v121, a2, v48, v45, v44, v8);
    a2 = (__int64)&v129;
    sub_1C2FC00(&v121, (__int64 *)&v129, v128);
    v45 = v128[0];
    LODWORD(v48) = v122 + 1;
LABEL_61:
    LODWORD(v122) = v48;
    if ( (*(_BYTE *)(v45 + 8) & 1) != 0 || *(_QWORD *)v45 )
      --HIDWORD(v122);
    *(_QWORD *)v45 = v129;
    *(_BYTE *)(v45 + 8) = (_BYTE)v130;
    *(_QWORD *)(v45 + 16) = v131;
    v58 = v11 + 1;
    if ( v11 == v105 )
      goto LABEL_65;
LABEL_52:
    v11 = v58;
  }
  if ( (int)a5 - 1 <= (unsigned int)v11 )
  {
LABEL_51:
    v58 = v11 + 1;
    if ( v11 == v105 )
      goto LABEL_65;
    goto LABEL_52;
  }
  v59 = *(_DWORD *)(v12 + 8);
  v60 = 1;
  sub_168B9F0((__int64)&v129, (__int64 *)(a1 + 8), v59, 0xE8Au, 0);
  sub_15F7200(&v129);
LABEL_55:
  operator delete(v121, 24LL * v123, 8);
  operator delete(v118, 16LL * v120, 8);
  return v60;
}
