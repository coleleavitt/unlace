void __fastcall sub_1E90C40(_QWORD *a1, unsigned int a2, unsigned __int64 a3, __m128 a4, __m128 a5)
{
  __int64 *v6; // r13
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  char v14; // cl
  __int64 v15; // rcx
  _BYTE *v16; // rax
  __int64 v17; // rsi
  char v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbp
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rax
  char *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rbp
  __int64 v44; // rsi
  __int64 *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdi
  __int64 v51; // r12
  __int64 *v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdi
  __int64 v62; // r12
  unsigned __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r15
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  unsigned __int64 v72; // rax
  unsigned int v73; // edx
  unsigned int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  int *v78; // r12
  unsigned __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // r12
  __int64 v91; // rdi
  __int64 (__fastcall *v92)(__int64); // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // r15
  __int64 v96; // rcx
  __int64 v97; // r15
  __int64 v98; // rdx
  unsigned __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 *v103; // rsi
  __int64 v104; // rax
  _QWORD *v105; // r12
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rbp
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rax
  _QWORD *v112; // rax
  int *v113; // rsi
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r15
  __int64 v118; // r8
  char v119; // al
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // r9
  __int64 v123; // r8
  __int64 v124; // rdx
  __int64 v125; // rax
  _QWORD *v126; // rax
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // r9
  __int64 v130; // r8
  __int64 v131; // rdx
  _QWORD *v132; // rax
  _QWORD *v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rax
  _QWORD *v139; // rax
  unsigned __int64 *v140; // rax
  __int64 *v141; // rdx
  unsigned __int64 v142; // rax
  __int64 v143; // rsi
  __int64 v144; // rax
  __int64 v145; // r12
  unsigned __int64 v146; // rax
  __int64 v147; // rsi
  __int64 *v148; // rax
  __int64 v149; // rcx
  __int64 v150; // r15
  __int64 v151; // r15
  bool v152; // r12
  __int64 v153; // rax
  __int64 v154; // rbp
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // r13
  __int64 v160; // rax
  _QWORD *v161; // rax
  __int64 v163; // [rsp+10h] [rbp-118h]
  __int64 v164; // [rsp+20h] [rbp-108h]
  __int64 v165; // [rsp+20h] [rbp-108h]
  __int64 v166; // [rsp+20h] [rbp-108h]
  __int64 v167; // [rsp+20h] [rbp-108h]
  __int64 v168; // [rsp+28h] [rbp-100h]
  unsigned __int64 v169; // [rsp+28h] [rbp-100h]
  __int64 v170; // [rsp+28h] [rbp-100h]
  __int64 v171; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v172; // [rsp+38h] [rbp-F0h] BYREF
  int v173; // [rsp+48h] [rbp-E0h] BYREF
  int v174; // [rsp+4Ch] [rbp-DCh] BYREF
  char *v175; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD *v176; // [rsp+58h] [rbp-D0h] BYREF
  _QWORD v177[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v178; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v179[11]; // [rsp+80h] [rbp-A8h] BYREF
  char v180; // [rsp+D8h] [rbp-50h]
  unsigned int v181; // [rsp+E0h] [rbp-48h]
  char v182; // [rsp+E4h] [rbp-44h]

  v6 = a1 + 1;
  v172 = a3;
  v8 = a1 + 1;
  sub_168B9F0((__int64)v177, a1 + 1, a2, 0x192Du, 0);
  if ( v180 )
  {
    v8 = (__int64 *)v172;
    sub_AE9DF0(v179, v172, 8u);
    if ( v180 )
    {
LABEL_21:
      v8 = (_QWORD *)(&dword_0 + 1);
      sub_AE9DF0(v179, 1, 2u);
      goto LABEL_3;
    }
  }
  else
  {
    if ( !v182 )
      goto LABEL_3;
    v33 = sub_168B9E0(v177);
    v36 = v178;
    if ( v178 )
      v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v178 + 32LL))(v178);
    v176 = (_QWORD *)v36;
    v37 = sub_1587BC0(v33, (__int64 *)&v176, v31, v32, v34, v35);
    v8 = (__int64 *)v172;
    sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * v181 + 8), v172, 8u);
    if ( v180 )
      goto LABEL_21;
  }
  if ( v182 )
  {
    v108 = sub_168B9E0(v177);
    v111 = v178;
    if ( v178 )
      v111 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v178 + 32LL))(v178);
    v176 = (_QWORD *)v111;
    v112 = sub_1587BC0(v108, (__int64 *)&v176, v106, v107, v109, v110);
    v8 = (_QWORD *)(&dword_0 + 1);
    sub_AE9DF0((unsigned __int8 **)(*v112 + 32LL * v181 + 8), 1, 2u);
  }
LABEL_3:
  sub_15F7200(v177);
  v11 = *(_QWORD *)(v172 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v11 + 17) & 8) != 0 )
  {
    sub_168B9F0((__int64)v177, v6, a2, 0x192Eu, 0);
    v8 = (__int64 *)&v176;
    LODWORD(v176) = 4;
    sub_1E889E0((__int64)v177, (int *)&v176);
    sub_15F7200(v177);
    v11 = *(_QWORD *)(v172 & 0xFFFFFFFFFFFFFFF0LL);
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
  {
    sub_168B9F0((__int64)v177, v6, a2, 0x192Eu, 0);
    v8 = (__int64 *)&v176;
    LODWORD(v176) = 0;
    sub_1E889E0((__int64)v177, (int *)&v176);
    sub_15F7200(v177);
  }
  v12 = sub_C1BEF0((__int64)&v172, (__int64)v8, v9, v10);
  v172 = v12;
  v14 = v12 & 7;
  if ( (v12 & 1) != 0 || (byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
  {
    sub_168B9F0((__int64)v177, v6, a2, 0x192Eu, 0);
    LODWORD(v176) = 1;
    sub_1E889E0((__int64)v177, (int *)&v176);
    sub_15F7200(v177);
    v12 = v172;
    v14 = v172 & 7;
  }
  v15 = v14 & 4;
  if ( (_DWORD)v15 || (v16 = (_BYTE *)(v12 & 0xFFFFFFFFFFFFFFF0LL), (v16[8] & 4) != 0) )
  {
    sub_168B9F0((__int64)v177, v6, a2, 0x192Eu, 0);
    LODWORD(v176) = 2;
    sub_1E889E0((__int64)v177, (int *)&v176);
    sub_15F7200(v177);
    v16 = (_BYTE *)(v172 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v17 = *(_QWORD *)v16;
  v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v19 = a1[31];
  v20 = *(_QWORD *)(*(_QWORD *)v16 + 8LL);
  v21 = v20 & 7;
  if ( v21 | (v20 >> 3) & 1 )
    v22 = sub_F64F00(v172, v17, v21, v15, v13) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v22 = v17 & 0xFFFFFFFFFFFFFFF0LL;
  v172 = sub_A71450(v19, v22);
  if ( !sub_F61140(*(_QWORD *)(v172 & 0xFFFFFFFFFFFFFFF0LL), v22, v23, v24, v25, v26) )
  {
    v38 = (char *)sub_F63270(*(_QWORD *)(v172 & 0xFFFFFFFFFFFFFFF0LL), v22, v27, v28, v29, v30);
    v43 = (__int64)v38;
    v175 = v38;
    if ( !v38 )
    {
      v152 = (unsigned __int8)(v18 - 2) <= 4u;
      sub_168B9F0((__int64)v177, v6, a2, 0x192Eu, 0);
      v174 = 6;
      v153 = sub_1E889E0((__int64)v177, &v174);
      v154 = v153;
      if ( *(_BYTE *)(v153 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v153 + 32), v152, 2u);
      }
      else if ( *(_BYTE *)(v153 + 132) )
      {
        v159 = sub_168B9E0((_QWORD *)v153);
        v160 = *(_QWORD *)(v154 + 16);
        if ( v160 )
          v160 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v160 + 32LL))(*(_QWORD *)(v154 + 16));
        v176 = (_QWORD *)v160;
        v161 = sub_1587BC0(v159, (__int64 *)&v176, v155, v156, v157, v158);
        sub_AE9DF0((unsigned __int8 **)(*v161 + 32LL * *(unsigned int *)(v154 + 128) + 8), v152, 2u);
      }
      goto LABEL_60;
    }
    if ( v38[28] < 0 )
      return;
    v44 = *((_QWORD *)v38 + 13);
    v45 = (__int64 *)(v44 + 96);
    if ( !*((_QWORD *)v38 + 16) )
    {
      sub_7052B0(v45, v44, v39, v40, v41, v42);
      if ( !*(_QWORD *)(v43 + 128) )
        goto LABEL_59;
      v43 = (__int64)v175;
      v44 = *((_QWORD *)v175 + 13);
      v45 = (__int64 *)(v44 + 96);
    }
    sub_7052B0(v45, v44, v39, v40, v41, v42);
    v50 = *(_QWORD *)(v43 + 128);
    if ( (*(_BYTE *)(v50 + 24) & 1) != 0 )
      v51 = sub_B96980(v50);
    else
      v51 = *(_QWORD *)(v50 + 24);
    sub_7052B0((__int64 *)(*(_QWORD *)(v43 + 104) + 96LL), *(_QWORD *)(v43 + 104), v46, v47, v48, v49);
    v52 = *(__int64 **)(v43 + 104);
    v163 = v51 + 24LL * *(unsigned int *)(*(_QWORD *)(v43 + 128) + 16LL);
    sub_7052B0(v52 + 12, (__int64)v52, v53, v54, v55, v56);
    v61 = *(_QWORD *)(v43 + 128);
    if ( (*(_BYTE *)(v61 + 24) & 1) != 0 )
      v62 = sub_B96980(v61);
    else
      v62 = *(_QWORD *)(v61 + 24);
    if ( v163 == v62 )
    {
LABEL_38:
      v78 = (int *)sub_B7E900(v43, (__int64)v52, v57, v58, v59, v60);
      if ( !v78 )
      {
LABEL_43:
        if ( sub_B97400(v43) )
        {
          sub_168B9F0((__int64)v177, v6, a2, 0x192Eu, 0);
          v174 = 23;
          v144 = sub_1E889E0((__int64)v177, &v174);
          v173 = 0;
          v145 = sub_1587D10(v144, &v173);
          v146 = sub_B97300(v43);
          v176 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v146 + 16LL))(v146);
          sub_1587DB0(v145, (__int64 *)&v176);
          sub_15F7200(v177);
        }
        sub_7052B0((__int64 *)(*(_QWORD *)(v43 + 104) + 96LL), *(_QWORD *)(v43 + 104), v80, v81, v82, v83);
        if ( (**(_BYTE **)(v43 + 128) & 8) != 0
          || (v147 = *(_QWORD *)(v43 + 104),
              sub_7052B0((__int64 *)(v147 + 96), v147, v84, v85, v86, v87),
              (*(_BYTE *)(*(_QWORD *)(v43 + 128) + 9LL) & 4) == 0)
          && !(unsigned __int8)sub_B9C060(v43, v147, v84, v85, v86, v87)
          || (sub_7052B0((__int64 *)(*(_QWORD *)(v43 + 104) + 96LL), *(_QWORD *)(v43 + 104), v84, v85, v86, v87),
              (*(_BYTE *)(*(_QWORD *)(v43 + 128) + 4LL) & 8) != 0) )
        {
          sub_7052B0((__int64 *)(*(_QWORD *)(v43 + 104) + 96LL), *(_QWORD *)(v43 + 104), v84, v85, v86, v87);
          if ( (**(_BYTE **)(v43 + 128) & 4) != 0
            || (sub_7052B0((__int64 *)(*(_QWORD *)(v43 + 104) + 96LL), *(_QWORD *)(v43 + 104), v88, v85, v86, v87),
                (*(_BYTE *)(*(_QWORD *)(v43 + 128) + 4LL) & 4) != 0) )
          {
            v89 = sub_1E86DC0(a1, v43, 0, v85, v86, v87, a4, a5);
            v90 = v89;
            if ( v89 )
            {
              v91 = v89;
              v92 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 32LL);
              v93 = v92 == sub_B94CC0 ? sub_B709C0(v91) : v92(v91);
              if ( (*(_BYTE *)(v93 + 82) & 0x40) != 0 )
              {
                sub_168B9F0((__int64)v177, v6, a2, 0x192Eu, 0);
                v174 = 25;
                v94 = sub_1E889E0((__int64)v177, &v174);
                LODWORD(v176) = 0;
                v95 = v94;
                LOBYTE(v173) = sub_B99060(v90, &v176, (__int64)&v176, v96);
                v97 = sub_1588420(v95, (unsigned __int8 *)&v173);
                v176 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v90 + 16LL))(v90);
                sub_1587DB0(v97, (__int64 *)&v176);
                sub_15F7200(v177);
              }
            }
          }
        }
        sub_7052B0((__int64 *)(*(_QWORD *)(v43 + 104) + 96LL), *(_QWORD *)(v43 + 104), v84, v85, v86, v87);
        if ( (**(_BYTE **)(v43 + 128) & 0x20) != 0
          || (v143 = *(_QWORD *)(v43 + 104),
              sub_7052B0((__int64 *)(v143 + 96), v143, v98, v99, v100, v101),
              (*(_BYTE *)(*(_QWORD *)(v43 + 128) + 9LL) & 0x10) == 0)
          && !(unsigned __int8)sub_B9C100(v43, v143, v98, v99, v100, v101)
          || (v103 = *(__int64 **)(v43 + 104),
              sub_7052B0(v103 + 12, (__int64)v103, v98, v99, v100, v101),
              (*(_BYTE *)(*(_QWORD *)(v43 + 128) + 4LL) & 0x20) != 0) )
        {
          sub_7052B0((__int64 *)(*(_QWORD *)(v43 + 104) + 96LL), *(_QWORD *)(v43 + 104), v98, v99, v100, v101);
          if ( (**(_BYTE **)(v43 + 128) & 0x10) != 0
            || (v103 = *(__int64 **)(v43 + 104),
                sub_7052B0(v103 + 12, (__int64)v103, v102, v99, v100, v101),
                (*(_BYTE *)(*(_QWORD *)(v43 + 128) + 4LL) & 0x10) != 0) )
          {
            v103 = (__int64 *)v43;
            v104 = sub_1E86DC0(a1, v43, 1, v99, v100, v101, a4, a5);
            v105 = (_QWORD *)v104;
            if ( v104 )
            {
              if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v104 + 32LL))(v104) + 82) & 0x40) != 0 )
              {
                sub_168B9F0((__int64)v177, v6, a2, 0x192Eu, 0);
                v174 = 27;
                v150 = sub_1E889E0((__int64)v177, &v174);
                LOBYTE(v173) = sub_B98360(v105, (__int64)&v174);
                v151 = sub_1588420(v150, (unsigned __int8 *)&v173);
                v103 = (__int64 *)&v176;
                v176 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v105 + 16LL))(v105);
                sub_1587DB0(v151, (__int64 *)&v176);
                sub_15F7200(v177);
              }
            }
          }
        }
        if ( (*(_BYTE *)(v43 + 29) & 1) != 0 )
        {
          v140 = sub_B8C3D0(v43, (__int64)v103, v98, v99, v100, v101);
          v141 = (__int64 *)*v140;
          v99 = *v140 + 8LL * *((unsigned int *)v140 + 2);
          if ( *v140 >= v99 )
          {
            if ( v141 != (__int64 *)v99 )
            {
              if ( *(_WORD *)(*(_QWORD *)v99 + 36LL) == 345 )
                goto LABEL_59;
              v148 = (__int64 *)(v99 + 8);
              while ( 1 )
              {
                v99 = (unsigned __int64)v148;
                if ( v141 == v148 )
                  break;
                v149 = *v148++;
                if ( *(_WORD *)(v149 + 36) == 345 )
                  goto LABEL_59;
              }
            }
          }
          else
          {
            v142 = *v140;
            while ( *(_WORD *)(*(_QWORD *)v142 + 36LL) != 345 )
            {
              v142 += 8LL;
              if ( v99 == v142 )
                goto LABEL_58;
            }
            if ( v99 != v142 )
              goto LABEL_59;
          }
        }
LABEL_58:
        sub_1E8FF10((__int64)a1, a2, v43, v99, v100, v101, a4, a5);
LABEL_59:
        sub_168B9F0((__int64)v177, v6, *((_DWORD *)v175 + 6), 0x170Bu, 0);
        sub_184B8A0((__int64)v177, (__int64 *)&v175);
LABEL_60:
        sub_15F7200(v177);
        return;
      }
LABEL_39:
      if ( sub_1E8BFD0(a1, *((_QWORD *)v78 + 6), a4, a5, v75, v76, v77) )
        goto LABEL_42;
      sub_168B9F0((__int64)v177, v6, a2, 0x192Eu, 0);
      v113 = &v174;
      v174 = 10;
      v114 = sub_1E889E0((__int64)v177, &v174);
      v117 = v114;
      if ( *(_BYTE *)(v114 + 120) )
      {
        v113 = v78;
        sub_AE9DF0((unsigned __int8 **)(v114 + 32), (__int64)v78, 0xAu);
        v119 = *(_BYTE *)(v117 + 120);
      }
      else
      {
        if ( !*(_BYTE *)(v114 + 132) )
        {
          v118 = *((_QWORD *)v78 + 6);
          goto LABEL_69;
        }
        v134 = sub_168B9E0((_QWORD *)v114);
        v138 = *(_QWORD *)(v117 + 16);
        if ( v138 )
        {
          v167 = v134;
          v138 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v138 + 32LL))(v138);
          v134 = v167;
        }
        v176 = (_QWORD *)v138;
        v139 = sub_1587BC0(v134, (__int64 *)&v176, v134, v135, v136, v137);
        v113 = v78;
        sub_AE9DF0((unsigned __int8 **)(*v139 + 32LL * *(unsigned int *)(v117 + 128) + 8), (__int64)v78, 0xAu);
        v119 = *(_BYTE *)(v117 + 120);
      }
      v118 = *((_QWORD *)v78 + 6);
      if ( v119 )
      {
        v113 = *((int **)v78 + 6);
        sub_AE9DF0((unsigned __int8 **)(v117 + 32), (__int64)v113, 8u);
        goto LABEL_70;
      }
LABEL_69:
      if ( *(_BYTE *)(v117 + 132) )
      {
        v164 = v118;
        v120 = sub_168B9E0((_QWORD *)v117);
        v123 = v164;
        v124 = v120;
        v125 = *(_QWORD *)(v117 + 16);
        if ( v125 )
        {
          v168 = v164;
          v165 = v124;
          v125 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v125 + 32LL))(v125);
          v123 = v168;
          v124 = v165;
        }
        v166 = v123;
        v176 = (_QWORD *)v125;
        v126 = sub_1587BC0(v124, (__int64 *)&v176, v124, v121, v123, v122);
        v113 = (int *)v166;
        sub_AE9DF0((unsigned __int8 **)(*v126 + 32LL * *(unsigned int *)(v117 + 128) + 8), v166, 8u);
      }
LABEL_70:
      v176 = (_QWORD *)(*(__int64 (__fastcall **)(int *, int *, __int64, __int64, __int64))(*(_QWORD *)v78 + 16LL))(
                         v78,
                         v113,
                         v115,
                         v116,
                         v118);
      sub_1587DB0(v117, (__int64 *)&v176);
      sub_15F7200(v177);
LABEL_42:
      while ( 1 )
      {
        v79 = *((_QWORD *)v78 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v78 = (int *)v79;
        if ( !v79 )
          goto LABEL_43;
        if ( (*(_BYTE *)(v79 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_39;
      }
    }
    while ( 1 )
    {
      v63 = **(_QWORD **)(v62 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      v64 = *(_QWORD *)v63;
      if ( (*(_BYTE *)(*(_QWORD *)v63 + 8LL) & 0xF) != 0 )
      {
        v52 = (__int64 *)(sub_F64F00(**(_QWORD **)(v62 + 16), v64, v57, v58, v59) & 0xFFFFFFFFFFFFFFF0LL);
        if ( !sub_1E8BFD0(a1, (__int64)v52, a4, a5, v65, v66, v67) )
          goto LABEL_35;
LABEL_32:
        v62 += 24;
        if ( v163 == v62 )
          goto LABEL_38;
      }
      else
      {
        v52 = (__int64 *)(v64 & 0xFFFFFFFFFFFFFFF0LL);
        if ( sub_1E8BFD0(a1, (__int64)v52, a4, a5, v57, v58, v59) )
          goto LABEL_32;
LABEL_35:
        sub_168B9F0((__int64)v177, v6, a2, 0x192Eu, 0);
        v174 = 9;
        v68 = sub_1E889E0((__int64)v177, &v174);
        v72 = sub_1E85C80(*(__int64 **)(v62 + 16), (__int64)&v174, v69, v70, v71);
        if ( *(_BYTE *)(v68 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v68 + 32), v72, 8u);
        }
        else if ( *(_BYTE *)(v68 + 132) )
        {
          v169 = v72;
          v127 = sub_168B9E0((_QWORD *)v68);
          v130 = v169;
          v131 = v127;
          v132 = *(_QWORD **)(v68 + 16);
          if ( v132 )
          {
            v171 = v131;
            v132 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, unsigned __int64))(*v132 + 32LL))(
                               v132,
                               *v132,
                               v131,
                               v128,
                               v169);
            v131 = v171;
            v130 = v169;
          }
          v170 = v130;
          v176 = v132;
          v133 = sub_1587BC0(v131, (__int64 *)&v176, v131, v128, v130, v129);
          sub_AE9DF0((unsigned __int8 **)(*v133 + 32LL * *(unsigned int *)(v68 + 128) + 8), v170, 8u);
        }
        v73 = *(_DWORD *)v62;
        v74 = *(_DWORD *)(v62 + 4);
        v62 += 24;
        v52 = (__int64 *)&v176;
        v176 = (_QWORD *)__PAIR64__(v74, v73);
        sub_1587DB0(v68, (__int64 *)&v176);
        sub_15F7200(v177);
        if ( v163 == v62 )
          goto LABEL_38;
      }
    }
  }
}
