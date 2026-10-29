void __fastcall sub_17E3C00(__int64 a1, _BYTE *a2, __int64 a3)
{
  bool v3; // sf
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _BYTE *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 *v24; // rsi
  __int64 *v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  __int64 v30; // r8
  char v31; // cl
  _BYTE *v32; // r9
  _BYTE *v33; // r8
  char v34; // cl
  unsigned int v35; // r13d
  __int64 v36; // rsi
  _BYTE *v37; // rcx
  unsigned int v38; // ebp
  char v39; // al
  char v40; // al
  __int64 v41; // rax
  __int64 v42; // rdx
  _BYTE *v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _BYTE *v48; // rdi
  __int64 *v49; // rsi
  unsigned int v50; // ecx
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // eax
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rsi
  unsigned __int64 v69; // rax
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rbp
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rdx
  _BYTE *v77; // rcx
  char v78; // si
  unsigned int v79; // edx
  __int64 *v80; // rbx
  __int64 v81; // rax
  __int64 v82; // r12
  _QWORD *v83; // rdi
  __int64 v84; // rdi
  __int64 v85; // rdi
  unsigned __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  _BYTE *v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  char v96; // al
  char v97; // al
  __int64 *v98; // rbx
  unsigned int v99; // ecx
  unsigned int v100; // edx
  unsigned __int64 *v101; // rax
  __int64 *v102; // rax
  __int64 **v103; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // rcx
  __int64 *v106; // rax
  _BYTE *v107; // r13
  __int64 **v108; // rax
  __int64 *v109; // r10
  char *v110; // rsi
  __int64 *v111; // rdi
  __int64 *v112; // rax
  __int64 v113; // rax
  char *v114; // r9
  char *v115; // rax
  unsigned __int64 *v116; // rax
  __int64 *v117; // rax
  __int64 *v118; // rax
  __int64 v119; // rcx
  unsigned __int64 v120; // r13
  char v121; // al
  unsigned __int64 *v122; // rax
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // rdx
  unsigned __int64 v125; // rax
  _BYTE *v126; // r13
  __int64 *v127; // rax
  __int64 v128; // rdi
  __int64 v129; // rax
  __int64 *v130; // rdi
  signed __int64 v131; // r10
  void *v132; // rax
  __int64 v133; // rax
  unsigned __int64 v134; // rdx
  bool v135; // zf
  unsigned int v136; // edx
  _QWORD *v137; // rax
  __int64 v138; // rsi
  __int64 *v139; // rax
  __int64 v140; // rax
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rcx
  __int64 v144; // rdx
  __int64 v145; // rax
  _QWORD *v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  unsigned __int64 v149; // rax
  __int64 v150; // rsi
  __int64 v151; // rsi
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  unsigned int v156; // [rsp+8h] [rbp-100h]
  __int64 v157; // [rsp+8h] [rbp-100h]
  unsigned int v158; // [rsp+8h] [rbp-100h]
  int v159; // [rsp+8h] [rbp-100h]
  __int64 *v160; // [rsp+8h] [rbp-100h]
  _BYTE *v161; // [rsp+8h] [rbp-100h]
  _BYTE *v162; // [rsp+8h] [rbp-100h]
  __int64 v163; // [rsp+8h] [rbp-100h]
  __int64 v164; // [rsp+8h] [rbp-100h]
  __int64 **v165; // [rsp+8h] [rbp-100h]
  _BYTE *v166; // [rsp+8h] [rbp-100h]
  unsigned __int64 v167; // [rsp+10h] [rbp-F8h]
  char *v168; // [rsp+10h] [rbp-F8h]
  __int64 *v169; // [rsp+10h] [rbp-F8h]
  __int64 v170; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v171; // [rsp+10h] [rbp-F8h]
  __int64 v172; // [rsp+10h] [rbp-F8h]
  __int64 v173; // [rsp+18h] [rbp-F0h]
  __int64 v174; // [rsp+18h] [rbp-F0h]
  __int64 v175; // [rsp+18h] [rbp-F0h]
  _BYTE *v176; // [rsp+28h] [rbp-E0h] BYREF
  bool v177; // [rsp+37h] [rbp-D1h] BYREF
  __int64 v178; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v179; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v180; // [rsp+50h] [rbp-B8h]
  int v181; // [rsp+58h] [rbp-B0h]
  unsigned __int8 *v182; // [rsp+60h] [rbp-A8h] BYREF
  char v183; // [rsp+B8h] [rbp-50h]
  unsigned int v184; // [rsp+C0h] [rbp-48h]
  char v185; // [rsp+C4h] [rbp-44h]

  v3 = (char)a2[28] < 0;
  v176 = a2;
  if ( v3 || !(unsigned __int8)sub_1A424A0(a1, a3, a2) )
    return;
  v6 = sub_B73BE0((__int64)v176);
  if ( *(_DWORD *)a3 != 2 )
    goto LABEL_86;
  v7 = **(_QWORD **)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  v156 = (*(_BYTE *)(v7 + 28) & 0x7F) - 53;
  v8 = sub_16C47B0(v7);
  v9 = v8;
  if ( !v6 )
  {
    v21 = v176;
    if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 40 > 6 )
    {
      if ( v156 > 1 )
        goto LABEL_87;
      v9 = 0;
    }
    else if ( v156 > 1 )
    {
      v10 = v8;
      v9 = 0;
      sub_179BF20((__int64)v176, v8);
      goto LABEL_18;
    }
    v82 = *(_QWORD *)(v7 + 64);
    if ( (*(_BYTE *)(v82 + 28) & 0x7Fu) - 40 <= 6 )
    {
      v83 = (_QWORD *)(*(_QWORD *)(v82 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v82 + 16) & 4) != 0 )
        v83 = (_QWORD *)*v83;
      v167 = sub_B8EAA0((__int64)v83);
      v84 = *((_QWORD *)v176 + 2);
      v85 = (v84 & 4) != 0 ? *(_QWORD *)(v84 & 0xFFFFFFFFFFFFFFF8LL) : v84 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v86 = sub_B8EAA0(v85), v90 = v176, v86)
        && (v173 = v86,
            v163 = sub_B91570(v167, a3, (__int64)v176, v87, v88, v89),
            v95 = sub_B91570(v173, v173, v91, v92, v93, v94),
            v90 = v176,
            v163 == v95)
        || (v164 = (__int64)v90, v96 = sub_B82160(v82), v21 = (_BYTE *)v164, v96)
        && (v97 = sub_B82160(v164), v21 = (_BYTE *)v164, v97) )
      {
        v10 = v9;
        v9 = 0;
        goto LABEL_15;
      }
    }
    v80 = (__int64 *)(a1 + 8);
    v79 = *((_DWORD *)v21 + 6);
LABEL_89:
    sub_168B9F0((__int64)&v179, v80, v79, 0x1515u, 0);
    sub_15F7200(&v179);
    sub_168B9F0((__int64)&v179, v80, *(_DWORD *)(*(_QWORD *)(v7 + 64) + 24LL), 0x193Au, 0);
    sub_15F7200(&v179);
    v81 = sub_B9A040(v7);
    sub_168B9F0((__int64)&v179, v80, *(_DWORD *)(v81 + 24), 0x1937u, 0);
    LODWORD(v178) = 0;
    sub_1587D10((__int64)&v179, (int *)&v178);
    sub_15F7200(&v179);
    sub_B88650((__int64)v176, 1);
    return;
  }
  if ( (*(_BYTE *)(v8 + 28) & 0x7F) != 0x45 )
  {
    if ( v156 <= 1 )
    {
      v9 = 0;
      v10 = 0;
      goto LABEL_8;
    }
LABEL_86:
    v21 = v176;
    goto LABEL_87;
  }
  v10 = *(_QWORD *)(v8 + 48);
  if ( v156 > 1 )
    goto LABEL_15;
LABEL_8:
  v11 = *(_QWORD *)(v7 + 64);
  if ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x45 )
    goto LABEL_88;
  v12 = (_QWORD *)(*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v11 + 16) & 4) != 0 )
    v12 = (_QWORD *)*v12;
  v13 = sub_B8EAA0((__int64)v12);
  v14 = *(_QWORD *)(v6 + 16);
  v157 = v13;
  v15 = (v14 & 4) != 0 ? *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL) : v14 & 0xFFFFFFFFFFFFFFF8LL;
  v16 = sub_B8EAA0(v15);
  if ( !v16 || !sub_179A7B0(v157, v16, v17, v18, v19, v20) )
  {
LABEL_88:
    v79 = *(_DWORD *)(v6 + 24);
    v80 = (__int64 *)(a1 + 8);
    goto LABEL_89;
  }
LABEL_15:
  v21 = v176;
  if ( !v10 )
  {
LABEL_87:
    sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), *((_DWORD *)v21 + 6), 0x1328u, 0);
    v178 = *((_QWORD *)v176 + 5);
    sub_15894B0((__int64)&v179, &v178);
    sub_15F7200(&v179);
    sub_17AE800(a1, **(_QWORD **)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL, *((_DWORD *)v176 + 6));
    sub_B88650((__int64)v176, 1);
    return;
  }
  sub_179BF20((__int64)v176, v10);
  if ( v6 )
  {
    v22 = *(_QWORD *)(v6 + 56);
    v23 = *(_QWORD *)(v9 + 56);
    v179 = 0;
    v180 = nullptr;
    v181 = 0;
    if ( !(unsigned __int8)sub_1CD38B0(a1, (unsigned int)&v179, v22, 0, v23, 1, 0, 0) )
      goto LABEL_112;
  }
LABEL_18:
  v24 = (__int64 *)v176;
  if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x2B && sub_179A810(v10) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v176 + 24LL))(v176) )
    {
      sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), *((_DWORD *)v176 + 6), 0xE83u, 0);
      v123 = 0;
      if ( (*((_QWORD *)v176 + 5) & 7) == 0 )
        v123 = *((_QWORD *)v176 + 5) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v183 )
      {
        sub_AE9DF0(&v182, v123, 5u);
      }
      else if ( v185 )
      {
        v171 = v123;
        v140 = sub_168B9E0(&v179);
        v143 = v171;
        v144 = v140;
        v145 = (__int64)v180;
        if ( v180 )
        {
          v175 = v144;
          v145 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, unsigned __int64))(*v180 + 32LL))(
                   v180,
                   *v180,
                   v144,
                   v171);
          v144 = v175;
          v143 = v171;
        }
        v172 = v143;
        v178 = v145;
        v146 = sub_1587BC0(v144, &v178, v144, v143, v141, v142);
        sub_AE9DF0((unsigned __int8 **)(*v146 + 32LL * v184 + 8), v172, 5u);
      }
      sub_15F7200(&v179);
      sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), *(_DWORD *)(v10 + 24), 0x70u, 0);
      sub_15F7200(&v179);
      sub_B88650((__int64)v176, 1);
    }
    v24 = (__int64 *)v176;
  }
  sub_17C44D0((__int64 *)a1, v24, v10, 1u);
  if ( (v176[29] & 1) == 0 )
    goto LABEL_21;
  v101 = sub_B8C3D0((__int64)v176, (__int64)v24, (__int64)v25, v26, v27, v28);
  v25 = (__int64 *)*v101;
  v26 = *v101 + 8LL * *((unsigned int *)v101 + 2);
  if ( *v101 < v26 )
  {
    v102 = (__int64 *)*v101;
    while ( 1 )
    {
      v25 = (__int64 *)*v102;
      if ( *(_WORD *)(*v102 + 36) == 400 )
        break;
      if ( (__int64 *)v26 == ++v102 )
        goto LABEL_117;
    }
    if ( (__int64 *)v26 == v102 )
      goto LABEL_117;
LABEL_176:
    v120 = v10;
    while ( 1 )
    {
      v24 = (__int64 *)sub_B8C330(v120);
      if ( (unsigned int)sub_B74100(v120, (__int64)v24) )
        break;
      v120 = sub_AEADC0((__int64 *)(v120 + 72));
      if ( !v120 )
        goto LABEL_117;
    }
    sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), *((_DWORD *)v176 + 6), 0x1D8Eu, 0);
    v178 = *((_QWORD *)v176 + 5);
    sub_15894B0((__int64)&v179, &v178);
    sub_15F7200(&v179);
    sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), *(_DWORD *)(v120 + 24), 0x71u, 0);
    sub_15F7200(&v179);
    v126 = v176;
    if ( (v176[29] & 1) == 0 )
      goto LABEL_21;
    v127 = sub_B8C3D0((__int64)v176, a1 + 8, (__int64)v25, v26, v27, v28);
    v28 = *v127;
    v27 = (__int64)v127;
    v128 = 8LL * *((unsigned int *)v127 + 2);
    v26 = *v127;
    v24 = (__int64 *)(*v127 + v128);
    if ( v128 >> 5 )
    {
      if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 400 )
      {
        if ( *(_WORD *)(*(_QWORD *)(v28 + 8) + 36LL) == 400 )
        {
          v26 = v28 + 8;
        }
        else if ( *(_WORD *)(*(_QWORD *)(v28 + 16) + 36LL) == 400 )
        {
          v26 = v28 + 16;
        }
        else if ( *(_WORD *)(*(_QWORD *)(v28 + 24) + 36LL) == 400 )
        {
          v26 = v28 + 24;
        }
        else
        {
          while ( 1 )
          {
            if ( v28 + 32 * (v128 >> 5) == v26 + 32 )
            {
              v26 = v28 + 32 * (v128 >> 5);
              goto LABEL_220;
            }
            v25 = *(__int64 **)(v26 + 32);
            if ( *((_WORD *)v25 + 18) == 400 )
            {
              v26 += 32LL;
              goto LABEL_263;
            }
            v25 = *(__int64 **)(v26 + 40);
            if ( *((_WORD *)v25 + 18) == 400 )
              break;
            v25 = *(__int64 **)(v26 + 48);
            if ( *((_WORD *)v25 + 18) == 400 )
            {
              v26 += 48LL;
              goto LABEL_263;
            }
            v25 = *(__int64 **)(v26 + 56);
            if ( *((_WORD *)v25 + 18) == 400 )
            {
              v26 += 56LL;
              goto LABEL_263;
            }
            v26 += 32LL;
          }
          v26 += 40LL;
        }
      }
      goto LABEL_263;
    }
LABEL_220:
    v129 = (__int64)((__int64)v24 - v26) >> 3;
    if ( v129 != 2 )
    {
      if ( v129 != 3 )
      {
        if ( v129 != 1 )
        {
LABEL_223:
          v26 = (unsigned __int64)v24;
LABEL_224:
          v130 = (__int64 *)(v28 + v128);
          v131 = (char *)v130 - (char *)v24;
          if ( v24 != v130 )
          {
            v169 = (__int64 *)v27;
            v132 = memmove((void *)v26, v24, (char *)v130 - (char *)v24);
            v27 = (__int64)v169;
            v131 = (char *)v130 - (char *)v24;
            v26 = (unsigned __int64)v132;
            v28 = *v169;
          }
          v133 = (__int64)(v26 + v131 - v28) >> 3;
          *(_DWORD *)(v27 + 8) = v133;
          if ( !(_DWORD)v133 )
            v126[29] &= ~1u;
          goto LABEL_117;
        }
LABEL_298:
        if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) != 400 )
          goto LABEL_223;
LABEL_263:
        if ( v24 != (__int64 *)v26 )
        {
          v139 = (__int64 *)(v26 + 8);
          if ( v24 != (__int64 *)(v26 + 8) )
          {
            do
            {
              v25 = (__int64 *)*v139;
              if ( *(_WORD *)(*v139 + 36) != 400 )
              {
                *(_QWORD *)v26 = v25;
                v26 += 8LL;
              }
              ++v139;
            }
            while ( v24 != v139 );
            v28 = *(_QWORD *)v27;
          }
        }
        goto LABEL_224;
      }
      if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) == 400 )
        goto LABEL_263;
      v26 += 8LL;
    }
    if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) == 400 )
      goto LABEL_263;
    v26 += 8LL;
    goto LABEL_298;
  }
  if ( v25 != (__int64 *)v26 )
  {
    if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) != 400 )
    {
      v118 = (__int64 *)(v26 + 8);
      while ( 1 )
      {
        v26 = (unsigned __int64)v118;
        if ( v25 == v118 )
          goto LABEL_117;
        v119 = *v118++;
        if ( *(_WORD *)(v119 + 36) == 400 )
          goto LABEL_176;
      }
    }
    goto LABEL_176;
  }
LABEL_117:
  if ( (v176[29] & 1) == 0 )
    goto LABEL_21;
  v103 = (__int64 **)sub_B8C3D0((__int64)v176, (__int64)v24, (__int64)v25, v26, v27, v28);
  v25 = *v103;
  v104 = (unsigned __int64)&(*v103)[*((unsigned int *)v103 + 2)];
  if ( (unsigned __int64)v25 >= v104 )
  {
    if ( v25 == (__int64 *)v104 )
      goto LABEL_21;
    while ( 1 )
    {
      v26 = *(_QWORD *)v104;
      if ( *(_WORD *)(*(_QWORD *)v104 + 36LL) == 238 )
        break;
      v104 += 8LL;
      if ( v25 == (__int64 *)v104 )
        goto LABEL_21;
    }
  }
  else
  {
    v26 = (unsigned __int64)v25;
    while ( 1 )
    {
      v24 = *(__int64 **)v26;
      if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) == 238 )
        break;
      v26 += 8LL;
      if ( v104 == v26 )
        goto LABEL_21;
    }
    if ( v104 == v26 )
      goto LABEL_21;
  }
  v105 = *v25;
  if ( *(_WORD *)(*v25 + 36) != 238 )
  {
    v106 = v25 + 1;
    do
      v105 = *v106++;
    while ( *(_WORD *)(v105 + 36) != 238 );
  }
  v178 = v105;
  if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
    goto LABEL_127;
  v116 = sub_B8C3D0(v10, (__int64)v24, (__int64)v25, v105, v27, v28);
  v25 = (__int64 *)*v116;
  v26 = *v116 + 8LL * *((unsigned int *)v116 + 2);
  if ( *v116 >= v26 )
  {
    if ( v25 != (__int64 *)v26 )
    {
      if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) == 238 )
        goto LABEL_21;
      v122 = (unsigned __int64 *)(v26 + 8);
      while ( v25 != (__int64 *)v122 )
      {
        v26 = *v122++;
        if ( *(_WORD *)(v26 + 36) == 238 )
          goto LABEL_21;
      }
    }
LABEL_127:
    sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), *((_DWORD *)v176 + 6), 0xC7Du, 0);
    sub_17B0E30((__int64)&v179, &v178);
    sub_15F7200(&v179);
    sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), *(_DWORD *)(v10 + 24), 0x70u, 0);
    sub_15F7200(&v179);
    v107 = v176;
    if ( (v176[29] & 1) == 0 )
      goto LABEL_21;
    v108 = (__int64 **)sub_B8C3D0((__int64)v176, a1 + 8, (__int64)v25, v26, v27, v28);
    v109 = *v108;
    v26 = (unsigned __int64)v108;
    v27 = 8LL * *((unsigned int *)v108 + 2);
    v110 = (char *)*v108 + v27;
    if ( v27 >> 5 )
    {
      if ( *(_WORD *)(*v109 + 36) == 238 )
      {
        v111 = *v108;
        goto LABEL_153;
      }
      v111 = v109 + 1;
      if ( *(_WORD *)(v109[1] + 36) == 238
        || (v111 = v109 + 2, *(_WORD *)(v109[2] + 36) == 238)
        || (v25 = (__int64 *)v109[3], v112 = *v108, v111 = v109 + 3, *((_WORD *)v25 + 18) == 238) )
      {
LABEL_153:
        if ( v110 != (char *)v111 )
        {
          v115 = (char *)(v111 + 1);
          if ( v110 == (char *)(v111 + 1) )
          {
            v114 = (char *)v111;
          }
          else
          {
            do
            {
              if ( *(_WORD *)(*(_QWORD *)v115 + 36LL) != 238 )
                *v111++ = *(_QWORD *)v115;
              v115 += 8;
            }
            while ( v110 != v115 );
            v109 = *(__int64 **)v26;
            v27 += *(_QWORD *)v26;
            v25 = (__int64 *)(v27 - (_QWORD)v110);
            v114 = (char *)v111 + v27 - (_QWORD)v110;
            if ( v110 != (char *)v27 )
            {
              v168 = (char *)v111 + v27 - (_QWORD)v110;
              v165 = (__int64 **)v26;
              memmove(v111, v110, (size_t)v25);
              v26 = (unsigned __int64)v165;
              v114 = v168;
              v109 = *v165;
            }
          }
          goto LABEL_144;
        }
        goto LABEL_143;
      }
      while ( 1 )
      {
        v111 = v112 + 4;
        if ( v112 + 4 == &v109[4 * (v27 >> 5)] )
          break;
        v25 = (__int64 *)v112[4];
        if ( *((_WORD *)v25 + 18) == 238 )
          goto LABEL_153;
        v25 = (__int64 *)v112[5];
        if ( *((_WORD *)v25 + 18) == 238 )
        {
          v111 = v112 + 5;
          goto LABEL_153;
        }
        v25 = (__int64 *)v112[6];
        if ( *((_WORD *)v25 + 18) == 238 )
        {
          v111 = v112 + 6;
          goto LABEL_153;
        }
        v25 = (__int64 *)v112[7];
        if ( *((_WORD *)v25 + 18) == 238 )
        {
          v111 = v112 + 7;
          goto LABEL_153;
        }
        v112 += 4;
      }
    }
    else
    {
      v111 = *v108;
    }
    v113 = (v110 - (char *)v111) >> 3;
    if ( v113 != 2 )
    {
      if ( v113 != 3 )
      {
        if ( v113 != 1 )
        {
LABEL_143:
          v114 = v110;
          goto LABEL_144;
        }
        goto LABEL_257;
      }
      if ( *(_WORD *)(*v111 + 36) == 238 )
        goto LABEL_153;
      ++v111;
    }
    if ( *(_WORD *)(*v111 + 36) == 238 )
      goto LABEL_153;
    ++v111;
LABEL_257:
    v114 = v110;
    if ( *(_WORD *)(*v111 + 36) != 238 )
    {
LABEL_144:
      v28 = (v114 - (char *)v109) >> 3;
      *(_DWORD *)(v26 + 8) = v28;
      if ( !(_DWORD)v28 )
        v107[29] &= ~1u;
      goto LABEL_21;
    }
    goto LABEL_153;
  }
  v117 = (__int64 *)*v116;
  while ( 1 )
  {
    v25 = (__int64 *)*v117;
    if ( *(_WORD *)(*v117 + 36) == 238 )
      break;
    if ( (__int64 *)v26 == ++v117 )
      goto LABEL_127;
  }
  if ( (__int64 *)v26 == v117 )
    goto LABEL_127;
LABEL_21:
  v29 = sub_705340((__int64 *)(*(_QWORD *)(v10 + 80) + 72LL), *(_QWORD *)(v10 + 80), (__int64)v25, v26, v27, v28);
  v30 = (__int64)v29;
  if ( v29 == (_QWORD *)v10 )
  {
    v33 = v176;
  }
  else
  {
    v31 = 0;
    v32 = v176;
    if ( !*(_BYTE *)(a3 + 166) )
      v31 = sub_179AAC0(a1, (__int64)v176, (__int64)v29);
    sub_17D5630(a1, (__int64)v32, v30, v31);
    v33 = v176;
    if ( (char)v176[28] < 0 )
      return;
  }
  v34 = 0;
  if ( !*(_BYTE *)(a3 + 166) )
    v34 = sub_179AAC0(a1, (__int64)v33, v10);
  sub_17D5630(a1, (__int64)v33, v10, v34);
  if ( (char)v176[28] < 0 )
    return;
  v35 = 113;
  v158 = *(_DWORD *)(v10 + 24);
  v36 = sub_B8C330(v10);
  if ( !(unsigned int)sub_B74100(v10, v36) )
  {
    v35 = 112;
    if ( (*(_BYTE *)(v10 + 29) & 2) != 0 )
    {
      if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 > 5 || (v36 = 0, v35 = 6282, !(unsigned int)sub_B75A50(v10, 0)) )
        v35 = 114;
      if ( !v158 )
        v158 = *((_DWORD *)v176 + 6);
    }
  }
  v37 = v176;
  v38 = v158;
  v39 = v176[96] & 7;
  if ( v39 != 2 )
  {
LABEL_36:
    if ( (v39 & 5) == 1 )
    {
      v40 = sub_B843B0((_BYTE *)v10);
      v37 = v176;
      if ( v40 )
        goto LABEL_43;
    }
    goto LABEL_38;
  }
  if ( (v176[28] & 0x7F) == 0x2B || !sub_179A810((__int64)v176) )
  {
    v121 = sub_B81B70(v10);
    v37 = v176;
    if ( v121 == 3 || v121 == 6 )
    {
      v136 = *((_DWORD *)v176 + 6);
      if ( **(char **)(a1 + 232) >= 0 )
      {
        sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), v136, 0x139Fu, 0);
        v178 = *((_QWORD *)v176 + 5);
        sub_15894B0((__int64)&v179, &v178);
        sub_15F7200(&v179);
        sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), v158, v35, 0);
        sub_15F7200(&v179);
        sub_B88650((__int64)v176, 1);
        return;
      }
      sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), v136, 0x1628u, 0);
      v178 = *((_QWORD *)v176 + 5);
      sub_15894B0((__int64)&v179, &v178);
      sub_15F7200(&v179);
      v36 = a1 + 8;
      sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), v158, v35, 0);
      sub_15F7200(&v179);
      v37 = v176;
    }
    v39 = v37[96] & 7;
    goto LABEL_36;
  }
LABEL_38:
  v41 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v37 + 32LL))(v37);
  v37 = v176;
  if ( (*(_BYTE *)(v41 + 96) & 7) != 2 && ((v176[28] & 0x7F) == 0x2B || !sub_179A810((__int64)v176)) )
  {
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v10 + 32LL))(
                       v10,
                       v36,
                       v42,
                       v37)
                   + 96)
        & 7) == 2 )
    {
      v98 = (__int64 *)(a1 + 8);
      v99 = 4302;
      v100 = *((_DWORD *)v176 + 6);
      goto LABEL_110;
    }
    v37 = v176;
  }
LABEL_43:
  if ( (v37[96] & 5) == 1 && !(unsigned __int8)sub_B843B0((_BYTE *)v10) && sub_17A02A0(v10) )
  {
    v98 = (__int64 *)(a1 + 8);
    v99 = 3803;
    v100 = *((_DWORD *)v176 + 6);
LABEL_110:
    sub_168B9F0((__int64)&v179, v98, v100, v99, 0);
    v178 = *((_QWORD *)v176 + 5);
    sub_15894B0((__int64)&v179, &v178);
LABEL_111:
    sub_15F7200(&v179);
    sub_168B9F0((__int64)&v179, v98, v38, v35, 0);
    sub_15F7200(&v179);
LABEL_112:
    sub_B88650((__int64)v176, 1);
    return;
  }
  if ( (unsigned __int8)sub_B843B0((_BYTE *)v10) )
  {
    v43 = v176;
    if ( sub_17A02A0((__int64)v176) && (v176[96] & 5) != 1 )
    {
      v98 = (__int64 *)(a1 + 8);
      v100 = *((_DWORD *)v176 + 6);
      v99 = 4297;
      goto LABEL_110;
    }
  }
  else
  {
    v43 = v176;
  }
  if ( (unsigned __int8)sub_17CF9C0((__int64 *)a1, (__int64)v43, v10) )
    return;
  v48 = v176;
  if ( (v176[96] & 5) != 1 )
  {
    if ( sub_A5EB90((__int64)v176) )
    {
      v48 = v176;
    }
    else
    {
      v134 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v10 + 16) & 4) != 0 )
        v134 = *(_QWORD *)(v134 + 8);
      v48 = v176;
      if ( ((*(_BYTE *)(v134 + 8) + 70) & 0x7Fu) > 3 )
        goto LABEL_236;
      v149 = *((_QWORD *)v176 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      v44 = *((_QWORD *)v176 + 2) & 4LL;
      if ( (*((_QWORD *)v176 + 2) & 4) != 0 )
        v149 = *(_QWORD *)(v149 + 8);
      if ( ((*(_BYTE *)(v149 + 8) + 70) & 0x7Fu) <= 3 )
      {
LABEL_236:
        v98 = (__int64 *)(a1 + 8);
        v100 = *((_DWORD *)v176 + 6);
        v99 = 4902;
        goto LABEL_110;
      }
    }
  }
  if ( (v48[28] & 0x7F) == 0x2B )
  {
    if ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x2B )
      goto LABEL_57;
LABEL_230:
    if ( (*(_BYTE *)(v10 + 97) & 0x20) != 0 )
      goto LABEL_57;
    goto LABEL_231;
  }
  if ( (v48[97] & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x2B || (*(_BYTE *)(v10 + 97) & 0x20) != 0 )
      goto LABEL_57;
    goto LABEL_54;
  }
  v137 = sub_705340((__int64 *)(*(_QWORD *)(v10 + 80) + 72LL), *(_QWORD *)(v10 + 80), v44, v45, v46, v47);
  if ( (*((_BYTE *)v137 + 28) & 0x7F) == 0x2B || (*((_BYTE *)v137 + 97) & 0x20) == 0 )
  {
    v138 = sub_B8C330(v10);
    v170 = sub_B7D8D0(v10, v138);
    if ( v170 )
    {
      sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), *((_DWORD *)v176 + 6), 0xF9Eu, 0);
      sub_17B9080((__int64)&v179, (__int64 *)&v176);
      sub_15F7200(&v179);
      sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), *(_DWORD *)(v170 + 24), 0x71u, 0);
      sub_15F7200(&v179);
    }
  }
  v48 = v176;
  if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x2B )
    goto LABEL_230;
LABEL_231:
  if ( (v48[28] & 0x7F) == 0x2B )
    goto LABEL_57;
LABEL_54:
  if ( (v48[97] & 0x20) != 0 )
  {
    if ( sub_B8C400(v10, 0) )
    {
      v150 = sub_B8C330(v10);
      if ( !sub_B7D8D0(v10, v150) )
      {
        v166 = v176;
        v151 = sub_B8C330((__int64)v176);
        if ( !(unsigned int)sub_B74100((__int64)v166, v151) && !sub_B8D690(v10) )
        {
          v152 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
          DWORD2(v179) = 0;
          *(_QWORD *)&v179 = v152;
          sub_17E3890(a1 + 4216, (__int64 *)&v179, (__int64)&v179 + 8, v153, v154, v155);
        }
      }
    }
    v48 = v176;
  }
LABEL_57:
  v159 = sub_B73370((__int64)v48);
  if ( v159 != (unsigned int)sub_B73370(v10) )
  {
    v49 = (__int64 *)(a1 + 8);
    v160 = (__int64 *)(a1 + 8);
    if ( (unsigned int)sub_B73370(v10) )
    {
      v135 = (unsigned int)sub_B73370((__int64)v176) == 0;
      v51 = *((_DWORD *)v176 + 6);
      if ( !v135 )
      {
        sub_168B9F0((__int64)&v179, v160, v51, 0x1439u, 0);
        v178 = *((_QWORD *)v176 + 5);
        v174 = sub_15894B0((__int64)&v179, &v178);
        v177 = (unsigned int)sub_B73370((__int64)v176) == 2;
        sub_1588420(v174, (unsigned __int8 *)&v177);
        goto LABEL_61;
      }
      v50 = 4308;
      v49 = (__int64 *)(a1 + 8);
    }
    else
    {
      v50 = 5175;
      v51 = *((_DWORD *)v176 + 6);
    }
    sub_168B9F0((__int64)&v179, v49, v51, v50, 0);
    v178 = *((_QWORD *)v176 + 5);
    sub_15894B0((__int64)&v179, &v178);
LABEL_61:
    sub_15F7200(&v179);
    sub_168B9F0((__int64)&v179, v160, v38, v35, 0);
    sub_15F7200(&v179);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
  {
    if ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x2B
      || !sub_179A810(v10)
      || (v52 = (*(__int64 (**)(void))(*(_QWORD *)v10 + 32LL))(), (*(_BYTE *)(v52 + 28) & 0x7F) == 0x2B)
      || (*(_BYTE *)(v52 + 97) & 0x20) == 0
      || (v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10), (*(_BYTE *)(v53 + 28) & 0x7F) == 0x2B)
      || *(char *)(v53 + 97) >= 0 )
    {
      v161 = v176;
      v54 = sub_B8C330((__int64)v176);
      if ( (unsigned int)sub_B74100((__int64)v161, v54) == 2 )
      {
        v147 = sub_B8C330(v10);
        v148 = sub_B7D8D0(v10, v147);
        if ( v148 )
        {
          if ( (unsigned __int8)sub_17B9130(a1, v148, v176) )
            return;
        }
      }
    }
    else
    {
      sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), *((_DWORD *)v176 + 6), 0x1AB6u, 0);
      sub_15F7200(&v179);
    }
  }
  else if ( (*(_BYTE *)(v10 + 96) & 7) != 1 || sub_B735C0(v10) )
  {
    sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), *((_DWORD *)v176 + 6), 0x1A84u, 0);
    sub_17B9080((__int64)&v179, (__int64 *)&v176);
    sub_15F7200(&v179);
    sub_168B9F0((__int64)&v179, (__int64 *)(a1 + 8), *(_DWORD *)(v10 + 24), 0x70u, 0);
    sub_15F7200(&v179);
  }
  v58 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  v59 = *(_QWORD *)(v10 + 16) & 4LL;
  if ( (*(_QWORD *)(v10 + 16) & 4) != 0 )
    v58 = *(_QWORD *)v58;
  if ( ((*(_BYTE *)(v58 + 8) + 70) & 0x7Fu) > 3 )
  {
    v162 = v176;
    v60 = sub_B842A0(v10);
    if ( v60 == 1 )
    {
      if ( (unsigned __int8)sub_B73580((__int64)v162) )
      {
LABEL_244:
        v98 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)&v179, v98, *((_DWORD *)v176 + 6), 0xE72u, 0);
        sub_17B9080((__int64)&v179, (__int64 *)&v176);
        goto LABEL_111;
      }
    }
    else if ( !v60 && (unsigned __int8)sub_B735A0((__int64)v162) )
    {
      goto LABEL_244;
    }
  }
  v61 = sub_705340((__int64 *)(*(_QWORD *)(v10 + 80) + 72LL), *(_QWORD *)(v10 + 80), v59, v55, v56, v57);
  if ( sub_B8C400((__int64)v61, 0) )
  {
    v66 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v176 + 32LL))(v176);
    *(_BYTE *)(v66 + 29) |= 4u;
  }
  v67 = (__int64)v176;
  v68 = *(_QWORD *)(v10 + 80);
  *((_QWORD *)v176 + 10) = v68;
  v69 = (unsigned __int64)sub_705340((__int64 *)(v68 + 72), v68, v62, v63, v64, v65);
  v72 = *(_QWORD *)(v67 + 80);
  *(_QWORD *)(v67 + 72) = v69 & 0xFFFFFFFFFFFFFFFCLL;
  v73 = *(_WORD *)(v67 + 30) & 0x3FFF;
  v74 = (unsigned int)v73 | *(_WORD *)(v69 + 30) & 0x26;
  *(_WORD *)(v67 + 30) = v73 | *(_WORD *)(v69 + 30) & 0x26 | *(_WORD *)(v67 + 30) & 0xC000;
  v75 = *(_QWORD *)(v72 + 72);
  if ( (v75 & 1) != 0 || (v75 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v124 = v75 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v75 & 0xFFFFFFFFFFFFFFFELL) != 0 && (v75 & 4) != 0 && (v125 = v75 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      *(_QWORD *)(v125 + 16) = v67;
    else
      v124 = v67 & 0xFFFFFFFFFFFFFFFALL;
    v76 = v124 | 1;
    *(_QWORD *)(v72 + 72) = v76;
  }
  else
  {
    *(_QWORD *)(v72 + 72) = sub_6E2500((_QWORD *)(v75 & 0xFFFFFFFFFFFFFFFCLL), v67, v74, v73, v70, v71) | 1;
  }
  if ( v6 )
  {
    sub_AEABB0((_QWORD *)(v6 + 64), v9, v76, v73, v70, v71);
    v77 = v176;
    v78 = *(_BYTE *)(v10 + 29) & 0x60;
    v176[29] = v78 | v176[29] & 0x9F;
    *(_BYTE *)(v6 + 29) = v78 | *(_BYTE *)(v6 + 29) & 0x9F;
  }
  else
  {
    v77 = v176;
    v176[29] = *(_BYTE *)(v10 + 29) & 0x60 | v176[29] & 0x9F;
  }
  if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x2B && (*(_BYTE *)(v10 + 97) & 0x20) != 0 )
    v77[97] |= 0x20u;
}
