bool __fastcall sub_1C63F60(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r13
  signed __int64 v10; // rdx
  _QWORD *v11; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // r13
  _QWORD *v14; // r15
  bool result; // al
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 *v27; // rax
  unsigned __int64 *v28; // rax
  __int64 *v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rsi
  unsigned __int8 *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // eax
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 *v41; // rax
  __int64 v42; // rcx
  unsigned __int64 *v43; // rax
  __int64 *v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 *v46; // rax
  unsigned __int8 *v47; // rax
  _BOOL8 v48; // rcx
  unsigned __int8 *v49; // rdx
  __int64 v50; // rax
  unsigned __int8 *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rax
  _QWORD *v59; // rax
  _BOOL8 v60; // rcx
  __int64 v61; // rdx
  unsigned __int8 *v62; // rax
  _BYTE *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rdx
  unsigned __int8 *v73; // rax
  __int64 *v74; // rax
  unsigned int v75; // eax
  bool v76; // al
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // rbx
  __int64 v84; // r15
  void *v85; // rdi
  __int64 v86; // rdx
  int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rbx
  __int64 v93; // r13
  _QWORD *v94; // r12
  __int64 v95; // rbp
  __int64 v96; // r15
  void *v97; // rdi
  __int64 v98; // rsi
  int v99; // eax
  __int64 v100; // rcx
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rbp
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // rax
  __int64 v110; // rsi
  __int64 v111; // r8
  __int64 v112; // rsi
  __int64 v113; // rbx
  __int64 v114; // r13
  _QWORD *v115; // r12
  __int64 v116; // rbp
  __int64 v117; // r15
  void *v118; // rdi
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rsi
  __int64 v122; // rcx
  __int64 v123; // rbx
  __int64 v124; // r15
  void *v125; // rdi
  bool v126; // [rsp+7h] [rbp-199h]
  bool v127; // [rsp+7h] [rbp-199h]
  bool v128; // [rsp+7h] [rbp-199h]
  bool v129; // [rsp+7h] [rbp-199h]
  __int64 v130; // [rsp+18h] [rbp-188h]
  __int64 v133; // [rsp+30h] [rbp-170h]
  __int64 v134; // [rsp+30h] [rbp-170h]
  __int64 v135; // [rsp+30h] [rbp-170h]
  _BOOL4 v136; // [rsp+30h] [rbp-170h]
  __int64 v137; // [rsp+30h] [rbp-170h]
  _BOOL8 v138; // [rsp+30h] [rbp-170h]
  unsigned __int8 *v139; // [rsp+30h] [rbp-170h]
  __int64 v140; // [rsp+30h] [rbp-170h]
  __int64 v141; // [rsp+30h] [rbp-170h]
  __int64 v142; // [rsp+30h] [rbp-170h]
  __int64 v143; // [rsp+30h] [rbp-170h]
  __int64 v145; // [rsp+40h] [rbp-160h]
  __int64 v146; // [rsp+40h] [rbp-160h]
  __int64 v147; // [rsp+40h] [rbp-160h]
  unsigned __int8 *v148; // [rsp+40h] [rbp-160h]
  _QWORD *v149; // [rsp+40h] [rbp-160h]
  _BOOL8 v150; // [rsp+40h] [rbp-160h]
  __int64 v151; // [rsp+40h] [rbp-160h]
  __int64 v152; // [rsp+40h] [rbp-160h]
  _BOOL8 v153; // [rsp+40h] [rbp-160h]
  unsigned __int8 *v154; // [rsp+40h] [rbp-160h]
  __int64 v155; // [rsp+48h] [rbp-158h]
  _QWORD *v156; // [rsp+48h] [rbp-158h]
  _QWORD *v157; // [rsp+48h] [rbp-158h]
  _BOOL8 v158; // [rsp+48h] [rbp-158h]
  unsigned __int8 *v159; // [rsp+48h] [rbp-158h]
  _QWORD *v160; // [rsp+48h] [rbp-158h]
  _QWORD *v161; // [rsp+50h] [rbp-150h]
  _QWORD *v162; // [rsp+50h] [rbp-150h]
  _QWORD *v163; // [rsp+58h] [rbp-148h]
  _QWORD *v164; // [rsp+58h] [rbp-148h]
  _QWORD *v165; // [rsp+58h] [rbp-148h]
  _QWORD *v166; // [rsp+60h] [rbp-140h]
  __int64 v167; // [rsp+70h] [rbp-130h] BYREF
  __int64 v168; // [rsp+78h] [rbp-128h] BYREF
  char v169; // [rsp+80h] [rbp-120h]
  void *v170[2]; // [rsp+88h] [rbp-118h]
  __int64 v171; // [rsp+98h] [rbp-108h]
  __int64 v172; // [rsp+A8h] [rbp-F8h] BYREF
  char v173; // [rsp+B0h] [rbp-F0h]
  void *v174[2]; // [rsp+B8h] [rbp-E8h]
  __int64 v175; // [rsp+C8h] [rbp-D8h]
  _QWORD v176[2]; // [rsp+D8h] [rbp-C8h] BYREF
  _QWORD *v177; // [rsp+E8h] [rbp-B8h]
  unsigned __int8 *v178; // [rsp+F8h] [rbp-A8h] BYREF
  __int64 v179; // [rsp+100h] [rbp-A0h]
  bool v180; // [rsp+150h] [rbp-50h]
  unsigned int v181; // [rsp+158h] [rbp-48h]
  bool v182; // [rsp+15Ch] [rbp-44h]

  v6 = *(_QWORD *)(a1 + 248);
  v168 = v6;
  v169 = 0;
  *(_OWORD *)v170 = 0;
  v171 = 0;
  if ( a2 )
  {
    sub_1C63C20((__int64)&v168, a2);
    v7 = *(_QWORD *)(a1 + 248);
    v173 = 0;
    *(_OWORD *)v174 = 0;
    v172 = v7;
    v175 = 0;
    if ( a3 )
    {
      a2 = a3;
      sub_1C63C20((__int64)&v172, a3);
      v8 = v174[1];
      v9 = v174[0];
      v10 = (char *)v174[1] - (char *)v174[0];
    }
    else
    {
      v8 = nullptr;
      v9 = nullptr;
      v10 = 0;
    }
    v126 = (char *)v170[1] - (char *)v170[0] == v10;
  }
  else
  {
    v172 = v6;
    v173 = 0;
    *(_OWORD *)v174 = 0;
    v175 = 0;
    if ( !a3 )
      goto LABEL_84;
    a2 = a3;
    sub_1C63C20((__int64)&v172, a3);
    v8 = v174[1];
    v126 = 0;
    v9 = v174[0];
  }
  if ( v8 != v9 )
  {
    v11 = v170[1];
    v12 = v9;
    v13 = v170[0];
    v14 = v12;
LABEL_13:
    v16 = *v14;
    while ( 1 )
    {
      if ( v11 != v13 )
        v4 = *v13;
      if ( v126 && sub_BFBC70(*(_QWORD *)(v4 + 32)) )
        goto LABEL_8;
      v17 = sub_BFBC70(*(_QWORD *)(v16 + 32));
      if ( !v17 || (*(_BYTE *)(v17 + 29) & 1) == 0 )
        goto LABEL_8;
      v130 = v17;
      v22 = sub_B8C3D0(v17, a2, v18, v19, v20, v21);
      v24 = v130;
      v25 = *v22;
      v26 = *v22 + 8LL * *((unsigned int *)v22 + 2);
      if ( *v22 >= v26 )
      {
        if ( v25 != v26 )
        {
          if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) == 53 )
            goto LABEL_29;
          v39 = (__int64 *)(v26 + 8);
          while ( 1 )
          {
            v26 = (unsigned __int64)v39;
            if ( (__int64 *)v25 == v39 )
              break;
            v40 = *v39++;
            if ( *(_WORD *)(v40 + 36) == 53 )
              goto LABEL_29;
          }
        }
      }
      else
      {
        v27 = (__int64 *)*v22;
        while ( 1 )
        {
          v25 = *v27;
          if ( *(_WORD *)(*v27 + 36) == 53 )
            break;
          if ( (__int64 *)v26 == ++v27 )
            goto LABEL_23;
        }
        if ( (__int64 *)v26 != v27 )
          goto LABEL_29;
      }
LABEL_23:
      if ( (*(_BYTE *)(v130 + 29) & 1) == 0 )
        goto LABEL_8;
      v28 = sub_B8C3D0(v130, a2, v25, v26, v23, v130);
      v24 = v130;
      v29 = (__int64 *)*v28;
      v30 = *v28 + 8LL * *((unsigned int *)v28 + 2);
      if ( *v28 >= v30 )
      {
        if ( v29 == (__int64 *)v30 )
          goto LABEL_8;
        if ( *(_WORD *)(*(_QWORD *)v30 + 36LL) != 216 )
        {
          v41 = (__int64 *)(v30 + 8);
          while ( v29 != v41 )
          {
            v42 = *v41++;
            if ( *(_WORD *)(v42 + 36) == 216 )
              goto LABEL_29;
          }
LABEL_8:
          if ( v8 != v14 )
            goto LABEL_9;
          goto LABEL_33;
        }
      }
      else
      {
        v31 = *v28;
        while ( *(_WORD *)(*(_QWORD *)v31 + 36LL) != 216 )
        {
          v31 += 8LL;
          if ( v30 == v31 )
            goto LABEL_8;
        }
        if ( v30 == v31 )
          goto LABEL_8;
      }
LABEL_29:
      v133 = v24;
      v32 = sub_EEB7E0(a3, a2, 0.0);
      v33 = a1 + 8;
      sub_168B9F0((__int64)v176, (__int64 *)(a1 + 8), v32, 0x1B2Au, 0);
      v37 = v133;
      if ( v180 )
      {
        v51 = v178;
        if ( !v178 )
        {
          v86 = v179;
          v87 = *(_DWORD *)(v179 + 14976);
          if ( v87 )
          {
            v88 = (unsigned int)(v87 - 1);
            *(_DWORD *)(v179 + 14976) = v88;
            v51 = *(unsigned __int8 **)(v86 + 8 * v88 + 14848);
            v89 = *((unsigned int *)v51 + 134);
            *v51 = 0;
            v90 = *((_QWORD *)v51 + 66);
            *((_DWORD *)v51 + 106) = 0;
            v91 = v90 + (v89 << 6);
            if ( v90 != v91 )
            {
              v149 = v8;
              v92 = v91;
              v157 = v13;
              v93 = v16;
              v94 = v11;
              v95 = v90;
              v161 = v14;
              v96 = v133;
              do
              {
                while ( 1 )
                {
                  v92 -= 64;
                  v97 = *(void **)(v92 + 24);
                  if ( v97 == (void *)(v92 + 40) )
                    break;
                  v139 = v51;
                  operator delete(v97);
                  v51 = v139;
                  if ( v95 == v92 )
                    goto LABEL_99;
                }
              }
              while ( v95 != v92 );
LABEL_99:
              v11 = v94;
              v37 = v96;
              v16 = v93;
              v8 = v149;
              v13 = v157;
              v14 = v161;
            }
            *((_DWORD *)v51 + 134) = 0;
          }
          else
          {
            v51 = (unsigned __int8 *)operator new(0x3A0u);
            *v51 = 0;
            *((_QWORD *)v51 + 12) = v51 + 112;
            *((_QWORD *)v51 + 16) = v51 + 144;
            *((_QWORD *)v51 + 20) = v51 + 176;
            *((_QWORD *)v51 + 24) = v51 + 208;
            *((_QWORD *)v51 + 28) = v51 + 240;
            *((_QWORD *)v51 + 32) = v51 + 272;
            *((_QWORD *)v51 + 36) = v51 + 304;
            *((_QWORD *)v51 + 40) = v51 + 336;
            *((_QWORD *)v51 + 44) = v51 + 368;
            *((_QWORD *)v51 + 48) = v51 + 400;
            *((_QWORD *)v51 + 52) = v51 + 432;
            *((_QWORD *)v51 + 13) = 0;
            v51[112] = 0;
            *((_QWORD *)v51 + 17) = 0;
            v51[144] = 0;
            *((_QWORD *)v51 + 21) = 0;
            v51[176] = 0;
            *((_QWORD *)v51 + 25) = 0;
            v51[208] = 0;
            *((_QWORD *)v51 + 29) = 0;
            v51[240] = 0;
            *((_QWORD *)v51 + 33) = 0;
            v51[272] = 0;
            *((_QWORD *)v51 + 37) = 0;
            v51[304] = 0;
            *((_QWORD *)v51 + 41) = 0;
            v51[336] = 0;
            *((_QWORD *)v51 + 45) = 0;
            v51[368] = 0;
            *((_QWORD *)v51 + 49) = 0;
            v51[400] = 0;
            *((_QWORD *)v51 + 53) = 0x800000000LL;
            v37 = v133;
            *((_QWORD *)v51 + 66) = v51 + 544;
            *((_QWORD *)v51 + 67) = 0x600000000LL;
          }
          v178 = v51;
        }
        v51[*v51 + 1] = 16;
        v34 = v178;
LABEL_65:
        v52 = *v34;
        v35 = (unsigned int)(v52 + 1);
        *v34 = v52 + 1;
        v33 = a4;
        *(_QWORD *)&v34[8 * v52 + 16] = a4;
        if ( (*(_BYTE *)(v37 + 29) & 1) == 0 )
          goto LABEL_66;
        goto LABEL_54;
      }
      if ( v182 )
      {
        v65 = sub_168B9E0(v176);
        v68 = v133;
        v69 = v65;
        v70 = (__int64)v177;
        if ( v177 )
        {
          v147 = v69;
          v70 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, __int64, __int64))(*v177 + 32LL))(
                  v177,
                  v33,
                  v69,
                  *v177,
                  v67,
                  v133);
          v69 = v147;
          v68 = v133;
        }
        v137 = v68;
        v167 = v70;
        v71 = sub_1587BC0(v69, &v167, v69, v66, v67, v68);
        v37 = v137;
        v72 = *v71 + 32LL * v181;
        v73 = *(unsigned __int8 **)(v72 + 8);
        if ( !v73 )
        {
          v100 = *(_QWORD *)(v72 + 16);
          v101 = *(_DWORD *)(v100 + 14976);
          if ( v101 )
          {
            v119 = (unsigned int)(v101 - 1);
            *(_DWORD *)(v100 + 14976) = v119;
            v73 = *(unsigned __int8 **)(v100 + 8 * v119 + 14848);
            v120 = *((unsigned int *)v73 + 134);
            *v73 = 0;
            v121 = *((_QWORD *)v73 + 66);
            *((_DWORD *)v73 + 106) = 0;
            v122 = v121 + (v120 << 6);
            if ( v121 != v122 )
            {
              v160 = v8;
              v123 = v122;
              v165 = v14;
              v124 = v137;
              do
              {
                while ( 1 )
                {
                  v123 -= 64;
                  v125 = *(void **)(v123 + 24);
                  if ( v125 == (void *)(v123 + 40) )
                    break;
                  v154 = v73;
                  v143 = v72;
                  operator delete(v125);
                  v72 = v143;
                  v73 = v154;
                  if ( v121 == v123 )
                    goto LABEL_131;
                }
              }
              while ( v121 != v123 );
LABEL_131:
              v37 = v124;
              v8 = v160;
              v14 = v165;
            }
            *((_DWORD *)v73 + 134) = 0;
          }
          else
          {
            v152 = v72;
            v73 = (unsigned __int8 *)operator new(0x3A0u);
            *v73 = 0;
            *((_QWORD *)v73 + 12) = v73 + 112;
            *((_QWORD *)v73 + 16) = v73 + 144;
            *((_QWORD *)v73 + 20) = v73 + 176;
            *((_QWORD *)v73 + 24) = v73 + 208;
            *((_QWORD *)v73 + 28) = v73 + 240;
            *((_QWORD *)v73 + 32) = v73 + 272;
            *((_QWORD *)v73 + 36) = v73 + 304;
            *((_QWORD *)v73 + 40) = v73 + 336;
            *((_QWORD *)v73 + 44) = v73 + 368;
            *((_QWORD *)v73 + 48) = v73 + 400;
            *((_QWORD *)v73 + 52) = v73 + 432;
            *((_QWORD *)v73 + 13) = 0;
            v73[112] = 0;
            *((_QWORD *)v73 + 17) = 0;
            v73[144] = 0;
            *((_QWORD *)v73 + 21) = 0;
            v73[176] = 0;
            *((_QWORD *)v73 + 25) = 0;
            v73[208] = 0;
            *((_QWORD *)v73 + 29) = 0;
            v73[240] = 0;
            *((_QWORD *)v73 + 33) = 0;
            v73[272] = 0;
            *((_QWORD *)v73 + 37) = 0;
            v73[304] = 0;
            *((_QWORD *)v73 + 41) = 0;
            v73[336] = 0;
            *((_QWORD *)v73 + 45) = 0;
            v73[368] = 0;
            *((_QWORD *)v73 + 49) = 0;
            v73[400] = 0;
            *((_QWORD *)v73 + 53) = 0x800000000LL;
            v37 = v137;
            *((_QWORD *)v73 + 66) = v73 + 544;
            v72 = v152;
            *((_QWORD *)v73 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v72 + 8) = v73;
        }
        v73[*v73 + 1] = 16;
        v34 = *(unsigned __int8 **)(v72 + 8);
        goto LABEL_65;
      }
      if ( (*(_BYTE *)(v133 + 29) & 1) == 0 )
        goto LABEL_32;
LABEL_54:
      v135 = v37;
      v43 = sub_B8C3D0(v37, v33, (__int64)v34, v35, v36, v37);
      v37 = v135;
      v44 = (__int64 *)*v43;
      v45 = *v43 + 8LL * *((unsigned int *)v43 + 2);
      if ( *v43 < v45 )
      {
        v74 = (__int64 *)*v43;
        while ( 1 )
        {
          v33 = *v74;
          v44 = v74;
          if ( *(_WORD *)(*v74 + 36) == 53 )
            break;
          if ( (__int64 *)v45 == ++v74 )
            goto LABEL_66;
        }
LABEL_60:
        v136 = v44 == (__int64 *)v45;
        if ( v180 )
          goto LABEL_61;
        goto LABEL_67;
      }
      if ( v44 != (__int64 *)v45 )
      {
        if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) == 53 )
          goto LABEL_60;
        v46 = (__int64 *)(v45 + 8);
        while ( 1 )
        {
          v45 = (unsigned __int64)v46;
          if ( v44 == v46 )
            break;
          v33 = *v46++;
          if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) == 53 )
            goto LABEL_60;
        }
      }
LABEL_66:
      v136 = 1;
      if ( v180 )
      {
LABEL_61:
        v47 = v178;
        v48 = v136;
        if ( !v178 )
        {
          v77 = v179;
          v78 = *(_DWORD *)(v179 + 14976);
          if ( v78 )
          {
            v79 = (unsigned int)(v78 - 1);
            *(_DWORD *)(v179 + 14976) = v79;
            v47 = *(unsigned __int8 **)(v77 + 8 * v79 + 14848);
            v80 = *((unsigned int *)v47 + 134);
            *v47 = 0;
            v81 = *((_QWORD *)v47 + 66);
            *((_DWORD *)v47 + 106) = 0;
            v82 = v81 + (v80 << 6);
            if ( v81 != v82 )
            {
              v156 = v8;
              v83 = v82;
              v163 = v14;
              v84 = v37;
              do
              {
                while ( 1 )
                {
                  v83 -= 64;
                  v85 = *(void **)(v83 + 24);
                  if ( v85 == (void *)(v83 + 40) )
                    break;
                  v148 = v47;
                  v138 = v48;
                  operator delete(v85);
                  v48 = v138;
                  v47 = v148;
                  if ( v81 == v83 )
                    goto LABEL_92;
                }
              }
              while ( v81 != v83 );
LABEL_92:
              v37 = v84;
              v8 = v156;
              v14 = v163;
            }
            *((_DWORD *)v47 + 134) = 0;
          }
          else
          {
            v150 = v136;
            v140 = v37;
            v47 = (unsigned __int8 *)operator new(0x3A0u);
            *v47 = 0;
            *((_QWORD *)v47 + 12) = v47 + 112;
            *((_QWORD *)v47 + 16) = v47 + 144;
            *((_QWORD *)v47 + 20) = v47 + 176;
            *((_QWORD *)v47 + 24) = v47 + 208;
            *((_QWORD *)v47 + 28) = v47 + 240;
            *((_QWORD *)v47 + 32) = v47 + 272;
            *((_QWORD *)v47 + 36) = v47 + 304;
            *((_QWORD *)v47 + 40) = v47 + 336;
            *((_QWORD *)v47 + 44) = v47 + 368;
            *((_QWORD *)v47 + 48) = v47 + 400;
            *((_QWORD *)v47 + 52) = v47 + 432;
            *((_QWORD *)v47 + 13) = 0;
            v47[112] = 0;
            *((_QWORD *)v47 + 17) = 0;
            v47[144] = 0;
            *((_QWORD *)v47 + 21) = 0;
            v47[176] = 0;
            *((_QWORD *)v47 + 25) = 0;
            v47[208] = 0;
            *((_QWORD *)v47 + 29) = 0;
            v47[240] = 0;
            *((_QWORD *)v47 + 33) = 0;
            v47[272] = 0;
            *((_QWORD *)v47 + 37) = 0;
            v47[304] = 0;
            *((_QWORD *)v47 + 41) = 0;
            v47[336] = 0;
            *((_QWORD *)v47 + 45) = 0;
            v47[368] = 0;
            *((_QWORD *)v47 + 49) = 0;
            v47[400] = 0;
            *((_QWORD *)v47 + 53) = 0x800000000LL;
            v37 = v140;
            *((_QWORD *)v47 + 66) = v47 + 544;
            v48 = v150;
            *((_QWORD *)v47 + 67) = 0x600000000LL;
          }
          v178 = v47;
        }
        v47[*v47 + 1] = 2;
        v49 = v178;
        v50 = *v178;
        *v178 = v50 + 1;
        *(_QWORD *)&v49[8 * v50 + 16] = v48;
        goto LABEL_32;
      }
LABEL_67:
      if ( v182 )
      {
        v145 = v37;
        v53 = sub_168B9E0(v176);
        v56 = v145;
        v57 = v53;
        v58 = (__int64)v177;
        if ( v177 )
        {
          v155 = v57;
          v58 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, __int64, __int64))(*v177 + 32LL))(
                  v177,
                  v33,
                  v57,
                  *v177,
                  v55,
                  v145);
          v57 = v155;
          v56 = v145;
        }
        v146 = v56;
        v167 = v58;
        v59 = sub_1587BC0(v57, &v167, v57, v54, v55, v56);
        v60 = v136;
        v37 = v146;
        v61 = *v59 + 32LL * v181;
        v62 = *(unsigned __int8 **)(v61 + 8);
        if ( !v62 )
        {
          v98 = *(_QWORD *)(v61 + 16);
          v99 = *(_DWORD *)(v98 + 14976);
          if ( v99 )
          {
            v109 = (unsigned int)(v99 - 1);
            *(_DWORD *)(v98 + 14976) = v109;
            v62 = *(unsigned __int8 **)(v98 + 8 * v109 + 14848);
            v110 = *((unsigned int *)v62 + 134);
            *v62 = 0;
            v111 = *((_QWORD *)v62 + 66);
            *((_DWORD *)v62 + 106) = 0;
            v112 = v111 + (v110 << 6);
            if ( v111 != v112 )
            {
              v162 = v8;
              v113 = v112;
              v164 = v13;
              v114 = v16;
              v115 = v11;
              v116 = v111;
              v166 = v14;
              v117 = v146;
              do
              {
                while ( 1 )
                {
                  v113 -= 64;
                  v118 = *(void **)(v113 + 24);
                  if ( v118 == (void *)(v113 + 40) )
                    break;
                  v159 = v62;
                  v153 = v60;
                  v142 = v61;
                  operator delete(v118);
                  v61 = v142;
                  v60 = v153;
                  v62 = v159;
                  if ( v116 == v113 )
                    goto LABEL_123;
                }
              }
              while ( v116 != v113 );
LABEL_123:
              v11 = v115;
              v37 = v117;
              v16 = v114;
              v8 = v162;
              v13 = v164;
              v14 = v166;
            }
            *((_DWORD *)v62 + 134) = 0;
          }
          else
          {
            v158 = v136;
            v151 = v61;
            v141 = v37;
            v62 = (unsigned __int8 *)operator new(0x3A0u);
            *v62 = 0;
            *((_QWORD *)v62 + 12) = v62 + 112;
            *((_QWORD *)v62 + 16) = v62 + 144;
            *((_QWORD *)v62 + 20) = v62 + 176;
            *((_QWORD *)v62 + 24) = v62 + 208;
            *((_QWORD *)v62 + 28) = v62 + 240;
            *((_QWORD *)v62 + 32) = v62 + 272;
            *((_QWORD *)v62 + 36) = v62 + 304;
            *((_QWORD *)v62 + 40) = v62 + 336;
            *((_QWORD *)v62 + 44) = v62 + 368;
            *((_QWORD *)v62 + 48) = v62 + 400;
            *((_QWORD *)v62 + 52) = v62 + 432;
            *((_QWORD *)v62 + 13) = 0;
            v62[112] = 0;
            *((_QWORD *)v62 + 17) = 0;
            v62[144] = 0;
            *((_QWORD *)v62 + 21) = 0;
            v62[176] = 0;
            *((_QWORD *)v62 + 25) = 0;
            v62[208] = 0;
            *((_QWORD *)v62 + 29) = 0;
            v62[240] = 0;
            *((_QWORD *)v62 + 33) = 0;
            v62[272] = 0;
            *((_QWORD *)v62 + 37) = 0;
            v62[304] = 0;
            *((_QWORD *)v62 + 41) = 0;
            v62[336] = 0;
            *((_QWORD *)v62 + 45) = 0;
            v62[368] = 0;
            *((_QWORD *)v62 + 49) = 0;
            v62[400] = 0;
            *((_QWORD *)v62 + 53) = 0x800000000LL;
            v37 = v141;
            *((_QWORD *)v62 + 66) = v62 + 544;
            v61 = v151;
            *((_QWORD *)v62 + 67) = 0x600000000LL;
            v60 = v158;
          }
          *(_QWORD *)(v61 + 8) = v62;
        }
        v62[*v62 + 1] = 2;
        v63 = *(_BYTE **)(v61 + 8);
        v64 = (unsigned __int8)*v63;
        *v63 = v64 + 1;
        *(_QWORD *)&v63[8 * v64 + 16] = v60;
      }
LABEL_32:
      v134 = v37;
      sub_15F7200(v176);
      v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v134 + 16LL))(v134);
      a2 = a1 + 8;
      sub_168B9F0((__int64)v176, (__int64 *)(a1 + 8), v38, 0x16CFu, 0);
      sub_15F7200(v176);
      if ( v8 != v14 )
      {
LABEL_9:
        ++v14;
        if ( v11 == v13 )
          goto LABEL_11;
        goto LABEL_10;
      }
LABEL_33:
      if ( v11 == v13 )
      {
        result = 0;
        goto LABEL_35;
      }
LABEL_10:
      ++v13;
LABEL_11:
      result = v8 != v14 || v11 != v13;
      if ( !result )
        goto LABEL_35;
      if ( v8 != v14 )
        goto LABEL_13;
      v14 = v8;
    }
  }
LABEL_84:
  v75 = sub_EEB7E0(a3, a2, 0.0);
  sub_168B9F0((__int64)v176, (__int64 *)(a1 + 8), v75, 0x19AAu, 0);
  if ( v180 )
  {
    sub_AE9DF0(&v178, a4, 0x10u);
    v76 = v180;
  }
  else
  {
    v76 = v182;
    if ( v182 )
    {
      v104 = sub_168B9E0(v176);
      v107 = (__int64)v177;
      if ( v177 )
        v107 = (*(__int64 (__fastcall **)(_QWORD *))(*v177 + 32LL))(v177);
      v167 = v107;
      v108 = sub_1587BC0(v104, &v167, v102, v103, v105, v106);
      sub_AE9DF0((unsigned __int8 **)(*v108 + 32LL * v181 + 8), a4, 0x10u);
      v76 = v180;
    }
  }
  v129 = v76;
  sub_15F7200(v176);
  result = v129;
LABEL_35:
  if ( v174[0] )
  {
    v127 = result;
    operator delete(v174[0]);
    result = v127;
  }
  if ( v170[0] )
  {
    v128 = result;
    operator delete(v170[0]);
    return v128;
  }
  return result;
}
