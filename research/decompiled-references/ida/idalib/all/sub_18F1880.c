__int64 __fastcall sub_18F1880(__int64 *a1, __int64 a2, __int64 a3, double a4, double a5)
{
  int v7; // eax
  __m128i si128; // xmm0
  unsigned __int64 v9; // rbp
  char *v11; // rdi
  _BYTE *v12; // rdx
  char *v13; // rdx
  __int64 v14; // rdx
  unsigned __int8 *v15; // r10
  __int64 v16; // r12
  char *v18; // rax
  __int64 v19; // rdx
  char v20; // dl
  unsigned __int8 v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  char v25; // r14
  __int64 v26; // rdx
  unsigned int v27; // ecx
  _BYTE *v28; // rax
  int v29; // ecx
  unsigned int v30; // eax
  unsigned __int8 v31; // dl
  void **v32; // rsi
  bool v33; // al
  unsigned int v34; // r12d
  __int64 v35; // r9
  unsigned int v36; // r12d
  int v37; // r12d
  __int64 v38; // rdi
  unsigned __int64 (__fastcall *v39)(__int64); // rax
  unsigned __int64 v40; // r14
  __int64 v41; // rdi
  char v42; // r14
  int v43; // eax
  unsigned int v44; // edx
  _QWORD *v45; // r8
  unsigned __int64 v46; // rsi
  int v47; // eax
  unsigned int v48; // edx
  __int64 v49; // r8
  unsigned __int64 v50; // rax
  int v51; // eax
  __int64 *v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rdi
  void *v55; // rdi
  size_t v56; // rax
  __int64 v57; // r12
  __int64 v58; // r14
  __int64 v59; // rax
  __int64 v60; // r14
  unsigned int v61; // ecx
  _BYTE *v62; // rax
  __int64 v63; // rax
  int v64; // r14d
  unsigned int v65; // r14d
  __int64 v66; // rdi
  __int64 v67; // rax
  unsigned int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rdi
  __int64 v73; // rsi
  unsigned int v74; // r12d
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  char v79; // al
  __int64 v80; // r9
  unsigned __int8 *v81; // r10
  __int64 v82; // r14
  char *v83; // rbx
  void *v84; // rdx
  __m128i v85; // xmm1
  unsigned int v86; // eax
  __int64 v87; // rdx
  _QWORD *v88; // rdi
  unsigned __int64 v89; // r12
  _BOOL4 v90; // r14d
  bool v91; // r14
  char v92; // al
  __int64 v93; // rcx
  __int32 v94; // r14d
  bool v95; // r14
  unsigned int v96; // ecx
  void *v97; // rdx
  char v98; // al
  char v99; // r14
  unsigned int v100; // edx
  int v101; // eax
  _QWORD *v102; // rax
  __int64 v103; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // r14
  unsigned int v107; // r12d
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rax
  unsigned __int8 *v110; // r10
  __int64 v111; // r9
  __int64 v112; // rax
  size_t v113; // rax
  _BYTE *v114; // rcx
  char v115; // di
  unsigned int v116; // ecx
  unsigned int v117; // r14d
  int v118; // eax
  unsigned __int64 v119; // rsi
  _BYTE *v120; // rcx
  char v121; // dl
  unsigned __int64 v122; // r14
  unsigned __int64 v123; // rsi
  unsigned __int8 *v124; // [rsp+10h] [rbp-3E8h]
  unsigned int v125; // [rsp+10h] [rbp-3E8h]
  __int64 v126; // [rsp+10h] [rbp-3E8h]
  __int64 v127; // [rsp+10h] [rbp-3E8h]
  __int64 v128; // [rsp+10h] [rbp-3E8h]
  unsigned __int64 v129; // [rsp+10h] [rbp-3E8h]
  __int64 v130; // [rsp+10h] [rbp-3E8h]
  unsigned int v131; // [rsp+10h] [rbp-3E8h]
  unsigned int v132; // [rsp+10h] [rbp-3E8h]
  bool v133; // [rsp+18h] [rbp-3E0h]
  __int64 v134; // [rsp+18h] [rbp-3E0h]
  __int64 v135; // [rsp+18h] [rbp-3E0h]
  unsigned __int64 v136; // [rsp+18h] [rbp-3E0h]
  char v137; // [rsp+18h] [rbp-3E0h]
  unsigned int v138; // [rsp+20h] [rbp-3D8h]
  bool v139; // [rsp+20h] [rbp-3D8h]
  _QWORD *v140; // [rsp+28h] [rbp-3D0h]
  _QWORD *v141; // [rsp+28h] [rbp-3D0h]
  __int64 v142; // [rsp+28h] [rbp-3D0h]
  unsigned int v143; // [rsp+28h] [rbp-3D0h]
  __int64 v144; // [rsp+28h] [rbp-3D0h]
  __int64 v145; // [rsp+28h] [rbp-3D0h]
  __int64 v146; // [rsp+28h] [rbp-3D0h]
  __int64 v147; // [rsp+30h] [rbp-3C8h]
  __int64 v148; // [rsp+30h] [rbp-3C8h]
  unsigned int v149; // [rsp+30h] [rbp-3C8h]
  char v150; // [rsp+30h] [rbp-3C8h]
  unsigned int v151; // [rsp+38h] [rbp-3C0h]
  void *v152; // [rsp+38h] [rbp-3C0h]
  char v153; // [rsp+43h] [rbp-3B5h] BYREF
  int v154; // [rsp+44h] [rbp-3B4h] BYREF
  __int64 v155; // [rsp+48h] [rbp-3B0h] BYREF
  void *v156; // [rsp+50h] [rbp-3A8h] BYREF
  unsigned int v157; // [rsp+58h] [rbp-3A0h]
  char v158; // [rsp+5Ch] [rbp-39Ch]
  __int64 v159; // [rsp+60h] [rbp-398h] BYREF
  unsigned int v160; // [rsp+68h] [rbp-390h]
  __int64 v161; // [rsp+70h] [rbp-388h] BYREF
  __m128i v162; // [rsp+80h] [rbp-378h] BYREF
  __int64 v163; // [rsp+90h] [rbp-368h]
  void *v164[2]; // [rsp+A0h] [rbp-358h] BYREF
  __int64 v165; // [rsp+B0h] [rbp-348h]
  __int64 v166; // [rsp+B8h] [rbp-340h]
  __m128 v167; // [rsp+C0h] [rbp-338h] BYREF
  __int64 v168; // [rsp+D8h] [rbp-320h]
  __int64 v169; // [rsp+E8h] [rbp-310h]
  __int64 v170; // [rsp+F0h] [rbp-308h]
  int v171; // [rsp+100h] [rbp-2F8h]
  char v172; // [rsp+104h] [rbp-2F4h]
  char v173; // [rsp+105h] [rbp-2F3h]
  char v174; // [rsp+106h] [rbp-2F2h]
  char v175; // [rsp+107h] [rbp-2F1h]
  void *v176; // [rsp+108h] [rbp-2F0h]
  size_t v177; // [rsp+110h] [rbp-2E8h]
  __int64 v178; // [rsp+120h] [rbp-2D8h] BYREF
  char v179; // [rsp+140h] [rbp-2B8h]
  char v180; // [rsp+141h] [rbp-2B7h]
  unsigned __int8 v181; // [rsp+142h] [rbp-2B6h]
  void *ptr; // [rsp+150h] [rbp-2A8h] BYREF
  __m128i v183; // [rsp+158h] [rbp-2A0h]
  _BYTE v184[136]; // [rsp+168h] [rbp-290h] BYREF
  void *v185; // [rsp+1F0h] [rbp-208h] BYREF
  unsigned int v186; // [rsp+1F8h] [rbp-200h]
  void *v187; // [rsp+2A0h] [rbp-158h] BYREF
  __int64 v188; // [rsp+2A8h] [rbp-150h]
  _BYTE v189[3]; // [rsp+2B0h] [rbp-148h] BYREF
  char v190; // [rsp+2B3h] [rbp-145h]
  __int64 v191; // [rsp+3B0h] [rbp-48h]

  v7 = *(_DWORD *)(a2 + 4);
  if ( v7 == 1 )
  {
    v18 = *(char **)(a2 + 8);
    v19 = a1[30];
    if ( !v18 )
      goto LABEL_15;
    v20 = *v18;
    if ( *(_WORD *)(a2 + 16) != 8 )
      goto LABEL_18;
    goto LABEL_96;
  }
  if ( *(_WORD *)(a2 + 16) == 8 )
  {
    v18 = *(char **)(a2 + 8);
    v19 = a1[30];
    if ( !v18 )
    {
LABEL_15:
      v20 = *sub_1021A70(*(_QWORD *)(v19 + 88), *(_DWORD *)a2, nullptr);
LABEL_18:
      v21 = v20 - 48;
      return sub_18C1B30((__int64)a1, *(_DWORD *)a2, v21);
    }
LABEL_96:
    v21 = *v18;
    return sub_18C1B30((__int64)a1, *(_DWORD *)a2, v21);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v9 = (unsigned int)(v7 + 1);
  v11 = v184;
  ptr = v184;
  v183 = si128;
  if ( v7 != -1 )
  {
    v12 = v184;
    if ( v9 > 0x80 )
    {
      sub_2236E10(&ptr, v184, (unsigned int)(v7 + 1), 1);
      v12 = ptr;
      v11 = (char *)ptr + v183.m128i_i64[0];
    }
    v13 = &v12[v9];
    if ( v13 != v11 )
      memset(v11, 0, v13 - v11);
    v183.m128i_i64[0] = v9;
  }
  v153 = 0;
  v15 = (unsigned __int8 *)sub_145C740(a1[30], a2, (__int64 *)&ptr, &v153);
  if ( !v153 )
  {
    v124 = v15;
    sub_13E2260(
      &v167,
      v15,
      v14,
      *(_DWORD *)a2,
      *(_QWORD *)(a1[30] + 88),
      *(char **)(a1[30] + 56),
      *(_QWORD *)(a1[30] + 64),
      *(_QWORD *)(a1[30] + 48));
    v25 = v179;
    if ( (v179 & 1) != 0 )
    {
LABEL_99:
      v16 = 1;
      goto LABEL_100;
    }
    if ( !v174 )
    {
LABEL_22:
      if ( !v173 && !v172 )
      {
        if ( (v25 & 0x10) != 0 )
        {
          v26 = a1[29];
          v27 = 9;
          if ( (*(_BYTE *)(v26 + 1) & 8) != 0 )
            v27 = (*(_BYTE *)(v26 + 2) & 1) == 0 ? 91 : 133;
          sub_168B9F0((__int64)&v187, a1 + 1, *(_DWORD *)a2, v27, 0);
          sub_15F7200(&v187);
        }
        if ( (v180 & 0x10) != 0 )
        {
          v28 = (_BYTE *)a1[29];
          v29 = 92;
          if ( (v28[1] & 8) == 0 )
            v29 = (*v28 & 8) == 0 ? 85 : 128;
          sub_FC70B0((__int64)&v187, *(_QWORD *)(a1[30] + 48), *(_DWORD *)a2, v29);
          sub_AEA040((__int64)&v187);
        }
        v30 = sub_102DB30(*(unsigned __int8 **)(a1[31] + 17448), *(_DWORD *)(*(_QWORD *)(a1[31] + 17448) + 140LL));
        if ( (v180 & 0x10) != 0 )
          v30 = sub_22064F0(v169, v170 - v169, (unsigned __int8)v171);
        v31 = v181;
        if ( v181 )
        {
          if ( v181 == 0x80 )
          {
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1[31] + 17448) + 56LL))(*(_QWORD *)(a1[31] + 17448)) )
            {
              sub_FC70B0((__int64)&v187, *(_QWORD *)(a1[30] + 48), *(_DWORD *)a2, 23);
              sub_AE9DF0((unsigned __int8 **)&v187, (v179 & 2) != 0, 2u);
              sub_AEA040((__int64)&v187);
            }
            v31 = v181;
          }
          v30 = v31;
        }
        v186 = v30;
        if ( v30 > 0x40 )
          sub_2205470(&v185, 0, 0);
        else
          v185 = nullptr;
        v32 = &v185;
        if ( (unsigned __int8)sub_13E3040((__int64)&v167, &v185) )
        {
          sub_168B9F0((__int64)&v187, a1 + 1, *(_DWORD *)a2, 0x17u, 0);
          LODWORD(v164[0]) = 1;
          sub_1587D10((__int64)&v187, (int *)v164);
          sub_15F7200(&v187);
          v54 = (_QWORD *)a1[31];
          v35 = v54[2348];
          goto LABEL_93;
        }
        v33 = (v179 & 2) != 0;
        v133 = v33;
        if ( (v179 & 2) == 0 )
          v133 = v171 != 10;
        if ( (*(_BYTE *)(a1[29] + 89) & 1) != 0 && (v179 & 4) == 0 && (v179 & 8) != 0 )
          v179 = v179 & 0xF3 | 4;
        v34 = v181;
        if ( v181 )
        {
          if ( v181 == 8 && !v33 )
          {
            v35 = *(_QWORD *)(a1[31] + 18648);
            v34 = 8;
          }
          else
          {
            v32 = (void **)v181;
            v35 = sub_A64980(a1[31], v181, !v33);
          }
        }
        else
        {
          v35 = 0;
          v34 = 0;
        }
        if ( (v180 & 0x10) != 0 )
        {
          v36 = v186;
          v37 = v36 - sub_C16760((__int64)&v185);
          if ( !v37 )
            v37 = 1;
          v34 = ((v179 & 2) == 0) + v37;
          v38 = *(_QWORD *)(a1[31] + 17448);
          v39 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 72LL);
          if ( v39 == sub_102B7C0 )
          {
            LODWORD(v40) = 128;
            if ( *(_BYTE *)(v38 + 404) )
            {
              v40 = *(unsigned int *)(v38 + 400);
              if ( v40 > (unsigned __int64)&loc_800000 )
                v40 = (unsigned __int64)&loc_800000;
            }
          }
          else
          {
            LODWORD(v40) = ((__int64 (__fastcall *)(__int64, void **, unsigned __int64 (__fastcall *)(__int64)))v39)(
                             v38,
                             v32,
                             sub_102B7C0);
          }
          if ( v34 > (unsigned int)v40 )
          {
            sub_168B9F0((__int64)&v187, a1 + 1, *(_DWORD *)a2, 0x17u, 0);
            LOBYTE(v164[0]) = (v179 & 2) != 0;
            sub_15890D0((__int64)&v187, (unsigned __int8 *)v164);
            v34 = v40;
            sub_15F7200(&v187);
          }
          sub_2206D90(&v187, &v185, v34);
          if ( v186 > 0x40 && v185 )
            operator delete[](v185);
          v41 = a1[31];
          v185 = v187;
          v186 = v188;
          v35 = sub_A70200(v41, (v179 & 2) != 0, v34);
        }
        if ( (v179 & 0x10) != 0 )
        {
          v144 = v35;
          v117 = sub_102DB30(*(unsigned __int8 **)(a1[31] + 17448), *(_DWORD *)(*(_QWORD *)(a1[31] + 17448) + 136LL));
          v132 = v186;
          v118 = sub_C16760((__int64)&v185);
          v35 = v144;
          if ( v117 >= v132 - v118 )
          {
            if ( (v179 & 2) != 0 )
              goto LABEL_243;
            v119 = (unsigned __int64)v185;
            if ( v132 > 0x40 )
              v119 = *((_QWORD *)v185 + ((v117 - 1) >> 6));
            if ( (v119 & (1LL << ((unsigned __int8)v117 - 1))) != 0 )
            {
LABEL_243:
              if ( v133 )
                v35 = sub_A63CE0((_QWORD *)a1[31]);
              v34 = v117;
            }
            else
            {
              v34 = v117;
              v35 = sub_A63C80((_QWORD *)a1[31]);
            }
          }
        }
        if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_87;
        v42 = v179;
        if ( (v179 & 4) != 0 )
        {
          if ( (v179 & 8) != 0 )
            goto LABEL_232;
        }
        else
        {
          if ( (v179 & 8) != 0 )
            goto LABEL_232;
          if ( (v179 & 0x10) == 0 )
          {
            v147 = v35;
            v140 = (_QWORD *)a1[31];
            v125 = v186;
            v34 = *(unsigned __int8 *)(v140[2181] + 14LL);
            v43 = sub_C16760((__int64)&v185);
            v44 = v125;
            v35 = v147;
            if ( v125 - v43 <= v34 )
            {
              v45 = v140;
              if ( (v42 & 2) == 0 )
              {
                v46 = (unsigned __int64)v185;
                if ( v125 > 0x40 )
                  v46 = *((_QWORD *)v185 + ((v34 - 1) >> 6));
                if ( (v46 & (1LL << ((unsigned __int8)v34 - 1))) == 0 )
                {
                  v35 = v140[2340];
                  goto LABEL_74;
                }
              }
              if ( v133 )
              {
                v35 = v140[2346];
LABEL_74:
                if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
                  goto LABEL_87;
LABEL_75:
                v151 = v44;
                v148 = v35;
                v141 = v45;
                v34 = *(unsigned __int8 *)(v45[2181] + 30LL);
                v126 = v45[2181];
                v47 = sub_C16760((__int64)&v185);
                v48 = v151;
                v49 = (__int64)v141;
                v35 = v148;
                if ( v151 - v47 > v34 )
                  goto LABEL_82;
                if ( (v42 & 2) == 0 )
                {
                  v50 = (unsigned __int64)v185;
                  if ( v151 > 0x40 )
                    v50 = *((_QWORD *)v185 + ((v34 - 1) >> 6));
                  if ( (v50 & (1LL << ((unsigned __int8)v34 - 1))) == 0 )
                  {
                    v35 = v141[2341];
                    goto LABEL_81;
                  }
                }
                if ( v133 )
                {
                  v35 = v141[2347];
LABEL_81:
                  if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
                    goto LABEL_82;
LABEL_87:
                  if ( v34 != v186 )
                  {
                    v128 = v35;
                    sub_2206A40(&v187, &v185);
                    v35 = v128;
                    if ( v186 > 0x40 && v185 )
                    {
                      operator delete[](v185);
                      v35 = v128;
                    }
                    v185 = v187;
                    v186 = v188;
                  }
                  v54 = (_QWORD *)a1[31];
LABEL_93:
                  v16 = sub_C0C5D0(v54, (__int64)&v185, v35, *(_DWORD *)a2);
                  if ( v186 > 0x40 )
                  {
                    v55 = v185;
                    if ( v185 )
LABEL_95:
                      operator delete[](v55);
                  }
LABEL_107:
                  if ( v179 < 0 )
                  {
                    v129 = sub_A74CE0(a1[31], *(_QWORD *)(v16 + 8));
                    v60 = sub_EEE9A0(24, (_QWORD *)a1[31], 8u);
                    *(_WORD *)v60 = *(_WORD *)v60 & 0xFE00 | 0x37;
                    if ( unk_2CD7484 )
                      sub_EE9B50(55);
                    *(_QWORD *)(v60 + 16) = v16;
                    v61 = 5569;
                    *(_WORD *)(v60 + 1) &= 0xF801u;
                    *(_QWORD *)(v60 + 8) = v129;
                    v62 = (_BYTE *)a1[29];
                    if ( (v62[1] & 8) == 0 )
                      v61 = (*v62 & 0x10) == 0 ? 5504 : 6642;
                    sub_168B9F0((__int64)&v187, a1 + 1, *(_DWORD *)a2, v61, 0);
                    v16 = v60;
                    sub_15F7200(&v187);
                  }
                  goto LABEL_100;
                }
                v114 = (_BYTE *)a1[29];
                if ( (*v114 & 1) != 0 || (v115 = v114[1], (v115 & 0x10) != 0) )
                {
LABEL_82:
                  v149 = v48;
                  v142 = v35;
                  v127 = v49;
                  v34 = *(unsigned __int8 *)(*(_QWORD *)(v49 + 17448) + 32LL);
                  v51 = sub_C16760((__int64)&v185);
                  v35 = v142;
                  if ( v149 - v51 > v34 )
                  {
                    v52 = a1 + 1;
LABEL_84:
                    if ( (v42 & 0x10) == 0 )
                    {
LABEL_85:
                      sub_168B9F0((__int64)&v187, v52, *(_DWORD *)a2, 0x5Eu, 0);
                      sub_15F7200(&v187);
LABEL_86:
                      v53 = a1[31];
                      v35 = *(_QWORD *)(v53 + 18784);
                      v34 = *(unsigned __int8 *)(*(_QWORD *)(v53 + 17448) + 32LL);
                      goto LABEL_87;
                    }
LABEL_234:
                    sub_168B9F0((__int64)&v187, v52, *(_DWORD *)a2, 0x3Eu, 0);
                    LOBYTE(v164[0]) = (v179 & 2) != 0;
                    sub_15890D0((__int64)&v187, (unsigned __int8 *)v164);
                    sub_15F7200(&v187);
                    goto LABEL_86;
                  }
                  if ( (v42 & 2) != 0 )
                  {
                    v120 = (_BYTE *)a1[29];
                  }
                  else
                  {
                    v123 = (unsigned __int64)v185;
                    if ( v149 > 0x40 )
                      v123 = *((_QWORD *)v185 + ((v34 - 1) >> 6));
                    v120 = (_BYTE *)a1[29];
                    if ( (v123 & (1LL << ((unsigned __int8)v34 - 1))) == 0 || (*v120 & 0x20) != 0 && (v42 & 8) != 0 )
                    {
                      v35 = *(_QWORD *)(v127 + 18736);
LABEL_261:
                      v121 = v120[1];
                      v122 = v35 & 0xFFFFFFFFFFFFFFF0LL;
                      if ( (v121 & 8) != 0 )
                      {
                        v145 = v35;
                        sub_168B9F0((__int64)&v187, a1 + 1, *(_DWORD *)a2, (v121 & 0x10) == 0 ? 90 : 134, 0);
                        sub_15F7200(&v187);
                        v52 = a1 + 1;
                        v35 = v145;
                      }
                      else
                      {
                        if ( (*v120 & 1) != 0 )
                        {
                          if ( v122 )
                            goto LABEL_87;
                          v52 = a1 + 1;
                          goto LABEL_85;
                        }
                        v146 = v35;
                        sub_168B9F0((__int64)&v187, a1 + 1, *(_DWORD *)a2, 0x56u, 0);
                        sub_15F7200(&v187);
                        v35 = v146;
                        v52 = a1 + 1;
                      }
                      if ( v122 )
                        goto LABEL_87;
                      v42 = v179;
                      goto LABEL_84;
                    }
                  }
                  if ( v133 )
                    v35 = *(_QWORD *)(v127 + 18784);
                  goto LABEL_261;
                }
                v116 = 146;
                v131 = *(unsigned __int8 *)(v126 + 32);
                if ( (v115 & 8) != 0 )
                  v116 = (v42 & 4) == 0 ? 95 : 147;
                sub_168B9F0((__int64)&v187, a1 + 1, *(_DWORD *)a2, v116, 0);
                LODWORD(v164[0]) = v34 >= v131;
                sub_1587D10((__int64)&v187, (int *)v164);
                sub_15F7200(&v187);
                v35 = *(_QWORD *)(a1[31] + 18776);
                if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
                  goto LABEL_87;
                v42 = v179;
LABEL_232:
                if ( (v42 & 0x10) != 0 )
                {
                  v52 = a1 + 1;
                  goto LABEL_234;
                }
                v49 = a1[31];
                v48 = v186;
                goto LABEL_82;
              }
            }
          }
        }
        if ( (v42 & 0x10) != 0 )
          goto LABEL_232;
        v45 = (_QWORD *)a1[31];
        v44 = v186;
        goto LABEL_75;
      }
      if ( v175 )
      {
        v88 = (_QWORD *)a1[31];
        if ( (v180 & 8) != 0 )
        {
          if ( (v25 & 0x20) != 0 )
          {
            v89 = v88[2355];
          }
          else if ( (v25 & 4) != 0 )
          {
            v89 = v88[2357];
          }
          else
          {
            v89 = v88[2356];
          }
        }
        else
        {
          v89 = 0;
          if ( (v180 & 4) != 0 )
          {
            if ( (v25 & 0x20) != 0 )
            {
              v89 = v88[2361];
            }
            else if ( (v25 & 4) != 0 )
            {
              v89 = v88[2363];
            }
            else
            {
              v89 = v88[2362];
            }
          }
        }
        v90 = (v25 & 2) != 0;
        if ( v90 )
        {
          v104 = sub_A70710(v88, v89, v22, v23, v24);
          v88 = (_QWORD *)a1[31];
          v89 = v104;
          LOBYTE(v90) = (v179 & 2) != 0;
        }
        v91 = !v90;
        v143 = (unsigned __int8)sub_A68560((__int64)v88, v89);
        v162.m128i_i32[2] = sub_A97D20(a1[31], *(_QWORD *)(v89 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v162.m128i_i32[2] > 0x40u )
        {
          sub_2205470(&v162, 0, v91);
        }
        else
        {
          v162.m128i_i64[0] = 0;
          if ( v91 )
            sub_CF8100((unsigned __int64 *)&v162);
        }
        v92 = sub_13E3430((__int64)&v167, (__int64)&v162, v143);
        v94 = v162.m128i_i32[2];
        v150 = v92;
        if ( v162.m128i_i32[2] <= 0x40u )
          v95 = v162.m128i_i64[0] == 0;
        else
          v95 = v94 == (unsigned int)sub_2206780(&v162);
        sub_AAE300((__int64)&v187, a1[31], v89, v93);
        v186 = v188;
        if ( (unsigned int)v188 > 0x40 )
        {
          v139 = (v190 & 0x20) == 0;
          sub_2205510(&v185);
          LODWORD(v164[1]) = v186;
          BYTE4(v164[1]) = v139;
          v164[0] = v185;
          if ( (unsigned int)v188 > 0x40 && v187 )
            operator delete[](v187);
        }
        else
        {
          LODWORD(v164[1]) = v188;
          BYTE4(v164[1]) = (v190 & 0x20) == 0;
          v164[0] = v187;
        }
        if ( (v180 & 4) == 0 )
          goto LABEL_164;
        v186 = (unsigned int)v164[1];
        if ( LODWORD(v164[1]) > 0x40 )
          sub_2205510(&v185);
        else
          v185 = v164[0];
        sub_2205A20(&v185, 1);
        v96 = v186;
        v186 = 0;
        v97 = v185;
        LODWORD(v188) = v96;
        v187 = v185;
        if ( v162.m128i_i32[2] <= 0x40u )
        {
          v98 = v162.m128i_i64[0] == (_QWORD)v185;
        }
        else
        {
          v152 = v185;
          v138 = v96;
          v98 = sub_2205D70(&v162, &v187);
          v97 = v152;
          v96 = v138;
        }
        v99 = v98 & (v150 | !v95);
        if ( v96 > 0x40 )
        {
          if ( v97 )
          {
            operator delete[](v97);
            if ( v186 > 0x40 )
            {
              if ( v185 )
                operator delete[](v185);
            }
          }
        }
        if ( v99 )
        {
          sub_2205950(&v162);
          v100 = *(_DWORD *)a2;
        }
        else
        {
LABEL_164:
          v101 = sub_2205DB0(&v162, v164);
          v100 = *(_DWORD *)a2;
          if ( v101 > 0 || v150 )
          {
            sub_168B9F0((__int64)&v187, a1 + 1, v100, 0x4Du, 0);
            sub_15F7200(&v187);
            v100 = *(_DWORD *)a2;
          }
        }
        v16 = sub_C0C700((_QWORD *)a1[31], (__int64)&v162, v89, v100, v143);
        if ( LODWORD(v164[1]) > 0x40 && v164[0] )
          operator delete[](v164[0]);
        if ( v162.m128i_i32[2] <= 0x40u )
          goto LABEL_107;
        v55 = (void *)v162.m128i_i64[0];
        if ( !v162.m128i_i64[0] )
          goto LABEL_107;
        goto LABEL_95;
      }
      if ( (v25 & 0x20) != 0 )
      {
        v57 = a1[29];
        if ( (*(_BYTE *)(v57 + 89) & 1) == 0 )
        {
          v56 = j__strlen("cl_khr_fp16");
          if ( !sub_FF8450((__int64)(a1 + 25), (__int64)"cl_khr_fp16", v56, v57) )
          {
            sub_168B9F0((__int64)&v187, a1 + 1, *(_DWORD *)a2, 0xF28u, 0);
            sub_15F7200(&v187);
            goto LABEL_99;
          }
        }
        v58 = *(_QWORD *)(a1[31] + 19032);
LABEL_106:
        v16 = sub_18F1340((__int64)a1, &v167, v58, *(_DWORD *)a2);
        v59 = a1[31];
        if ( v58 != *(_QWORD *)(v59 + 18808) )
          goto LABEL_107;
        v105 = a1[29];
        if ( (*(_BYTE *)(v105 + 106) & 4) != 0 )
        {
          if ( ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                          + 18LL) >> 3)
              & 0x1FF) == 0x1E1 )
            goto LABEL_107;
        }
        else
        {
          if ( (*(_BYTE *)(v105 + 47) & 0x20) == 0 )
            goto LABEL_107;
          v130 = a1[29];
          v113 = j__strlen("cl_khr_fp64");
          if ( sub_FF8450((__int64)(a1 + 25), (__int64)"cl_khr_fp64", v113, v130) )
            goto LABEL_107;
          sub_168B9F0((__int64)&v187, a1 + 1, *(_DWORD *)a2, 0x1AC9u, 0);
          LOBYTE(v185) = (unsigned int)sub_FEAA90(a1[29]) > 0x12B;
          sub_1588420((__int64)&v187, (unsigned __int8 *)&v185);
          sub_15F7200(&v187);
          v59 = a1[31];
        }
        v16 = sub_160A600((__int64)a1, v16, *(_QWORD *)(v59 + 18800), 0x27u, 0, 0, *(double *)si128.m128i_i64, a5, 0)
            & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_107;
      }
      v102 = (_QWORD *)a1[31];
      if ( (v25 & 0x40) == 0 )
      {
        if ( (v25 & 4) != 0 )
        {
          if ( (*(_BYTE *)(a1[29] + 89) & 1) != 0 )
            v103 = v102[2351];
          else
            v103 = v102[2352];
          v58 = v103;
          goto LABEL_106;
        }
        if ( (v180 & 1) != 0 )
        {
          v58 = v102[2381];
          goto LABEL_106;
        }
        if ( (v180 & 2) != 0 )
        {
          v58 = v102[2353];
          goto LABEL_106;
        }
        if ( (*(_BYTE *)(a1[29] + 89) & 1) == 0 )
        {
          v58 = v102[2351];
          goto LABEL_106;
        }
      }
      v58 = v102[2350];
      goto LABEL_106;
    }
    v63 = sub_6F3470(*(_QWORD *)(a1[31] + 17504), v176, v177);
    v64 = *(_DWORD *)a2;
    v134 = v63;
    v65 = sub_13D1C70(*(_DWORD *)a2, (int)v170 - (int)v168, a1[34], a1[29]) + v64;
    if ( !a3 )
    {
      v16 = 1;
      sub_168B9F0((__int64)&v187, a1 + 1, v65, 0x1Bu, 0);
      sub_15F7200(&v187);
LABEL_100:
      if ( v176 != &v178 )
        free(v176);
      goto LABEL_11;
    }
    v66 = a1[31];
    v155 = 0;
    if ( (v173 || v172) && !v175 )
      v155 = *(_QWORD *)(v66 + 18816);
    else
      v155 = *(_QWORD *)(v66 + 18784);
    v67 = sub_B87830(v66 + 17536, v134);
    v160 = v65;
    v159 = v67;
    v135 = v67;
    sub_B85890(&v161, v67);
    v187 = (void *)v65;
    v161 = v65;
    v154 = *(_DWORD *)a2;
    sub_18BBF60((__int64)&v185, (__int64)a1, v135, v65, 0);
    v68 = sub_1A5BB50(
            (_DWORD)a1,
            a3,
            (unsigned int)&v185,
            (unsigned int)&v155,
            1,
            1,
            1,
            0,
            !((unsigned __int8)v179 >> 7),
            0);
    if ( v68 == 2 )
    {
      if ( (v173 || v172) && !v175 )
      {
        v187 = (void *)sub_18F1340((__int64)a1, &v167, v155, *(_DWORD *)a2);
      }
      else
      {
        LODWORD(v164[1]) = *(unsigned __int8 *)(*(_QWORD *)(a1[31] + 17448) + 32LL);
        if ( LODWORD(v164[1]) > 0x40 )
          sub_2205470(v164, 0, 0);
        else
          v164[0] = nullptr;
        if ( (unsigned __int8)sub_13E3040((__int64)&v167, v164) )
        {
          sub_168B9F0((__int64)&v187, a1 + 1, *(_DWORD *)a2, 0x17u, 0);
          v162.m128i_i32[0] = 1;
          sub_1587D10((__int64)&v187, v162.m128i_i32);
          sub_15F7200(&v187);
        }
        v187 = (void *)sub_C0C5D0((_QWORD *)a1[31], (__int64)v164, v155, *(_DWORD *)a2);
        if ( LODWORD(v164[1]) > 0x40 && v164[0] )
          operator delete[](v164[0]);
      }
      v112 = sub_1C03D10((_DWORD)a1, (unsigned int)&v185, (unsigned int)&v159, (unsigned int)&v187, 1, v154, 0);
    }
    else
    {
      if ( v68 <= 2 )
      {
        v16 = 1;
        if ( v68 )
          goto LABEL_193;
LABEL_133:
        sub_169D230((__int64)&v185);
        goto LABEL_100;
      }
      if ( v68 != 3 )
      {
        if ( v68 == 4 )
        {
          v72 = a1[31];
          v191 = 0;
          v187 = v189;
          v188 = 0x800000000LL;
          v73 = *(_QWORD *)(v72 + 18648);
          v74 = sub_AAC1F0(v72, v73, v69, v70, v71);
          v79 = sub_F65360(*(_QWORD *)(*(_QWORD *)(a1[31] + 18648) & 0xFFFFFFFFFFFFFFF0LL), v73, v75, v76, v77, v78);
          v157 = v74;
          v81 = v124;
          if ( v74 > 0x40 )
          {
            v137 = v79;
            sub_2205470(&v156, 0, 0);
            v81 = v124;
            v79 = v137;
          }
          else
          {
            v156 = nullptr;
          }
          v158 = v79;
          if ( (_DWORD)v170 != (_DWORD)v168 )
          {
            v82 = (__int64)&v81[(unsigned int)(v170 - v168 - 1) + 1];
            v83 = (char *)v81;
            do
            {
              v86 = v157;
              v87 = *v83;
              if ( v157 <= 0x40 )
              {
                v84 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v157) & v87);
                if ( !v157 )
                  v84 = nullptr;
                v156 = v84;
              }
              else
              {
                *(_QWORD *)v156 = v87;
                memset((char *)v156 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v86 + 63) >> 6) + 0x1FFFFFFF));
              }
              ++v83;
              sub_F1F190((__int64)&v162, (_QWORD *)a1[31], (void ***)&v156, *(_QWORD *)(a1[31] + 18648), 0, v80);
              v85 = _mm_load_si128(&v162);
              v166 = 0;
              *(__m128i *)v164 = v85;
              v165 = v163;
              sub_17429A0((__int64)&v187, (const __m128i *)v164);
            }
            while ( v83 != (char *)v82 );
          }
          v16 = sub_1C03D10((_DWORD)a1, (unsigned int)&v185, (unsigned int)&v159, 0, 0, v154, (__int64)&v187);
          if ( v157 > 0x40 && v156 )
            operator delete[](v156);
          if ( v187 != v189 )
            free(v187);
          goto LABEL_133;
        }
LABEL_193:
        sub_169D230((__int64)&v185);
        v25 = v179;
        goto LABEL_22;
      }
      v106 = a1[31];
      v107 = v170 - v168;
      LODWORD(v188) = 32;
      v187 = (void *)(unsigned int)(v170 - v168 + 1);
      v108 = sub_A70EF0(v106, *(_QWORD *)(v106 + 18648) | 1LL);
      v109 = sub_A70F70(v106, v108, (__int64)&v187, nullptr, 0, 0);
      v110 = v124;
      v111 = v109;
      if ( (unsigned int)v188 > 0x40 && v187 )
      {
        v136 = v109;
        operator delete[](v187);
        v110 = v124;
        v111 = v136;
      }
      v187 = (void *)sub_C09810((_QWORD *)a1[31], v110, v107, 0, 0, v111, (__int64)&v154, 1);
      v112 = sub_1C03D10((_DWORD)a1, (unsigned int)&v185, (unsigned int)&v159, (unsigned int)&v187, 1, v154, 0);
    }
    v16 = v112;
    goto LABEL_133;
  }
  v16 = 1;
LABEL_11:
  if ( ptr != v184 )
    free(ptr);
  return v16;
}
