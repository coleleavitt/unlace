void __fastcall sub_18CE000(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  __int64 v8; // r15
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  _WORD *v15; // rcx
  _WORD **v16; // rax
  __int64 v17; // rbp
  __int64 *v18; // rdx
  unsigned __int8 v19; // al
  unsigned int v20; // eax
  int v21; // r12d
  int v22; // r10d
  unsigned int v23; // ecx
  unsigned int v24; // edx
  __int64 v25; // rax
  _DWORD *v26; // r13
  int v27; // eax
  __int64 *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // rbx
  __int64 *v32; // r12
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdx
  size_t v36; // rax
  __int64 *v37; // rdx
  __int64 v38; // r9
  __int64 v39; // r11
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  bool v44; // zf
  unsigned __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r11
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  unsigned __int64 v54; // r10
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  _QWORD *v58; // r13
  size_t v59; // rax
  __int64 v60; // rax
  __int64 v61; // r9
  int v62; // r10d
  __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned int v65; // esi
  __int64 v66; // r10
  __int64 *v67; // rax
  __int64 v68; // rdi
  unsigned __int64 *v69; // rdi
  __int64 v70; // rax
  unsigned __int64 *v71; // rdx
  __int64 v72; // rcx
  unsigned int v73; // esi
  _QWORD *v74; // r11
  unsigned int i; // r13d
  _QWORD *v76; // rdx
  __int64 v77; // rdi
  unsigned __int64 *v78; // rax
  unsigned __int64 v79; // r11
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 v82; // rdx
  unsigned __int64 v83; // r10
  __int64 v84; // rax
  __int64 v85; // r9
  __int64 v86; // rax
  __int64 v87; // rdx
  unsigned __int64 v88; // r10
  __int64 v89; // rax
  __int64 v90; // rdx
  unsigned __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  unsigned __int64 v94; // rdx
  __int64 v95; // rcx
  unsigned __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rdx
  int v99; // eax
  __int64 v100; // rdx
  _QWORD *v101; // rax
  __int64 v102; // rdx
  __int64 *v103; // rax
  unsigned int v104; // r13d
  unsigned int v105; // [rsp+0h] [rbp-1A8h]
  __int64 v106; // [rsp+0h] [rbp-1A8h]
  int v107; // [rsp+8h] [rbp-1A0h]
  int v108; // [rsp+8h] [rbp-1A0h]
  _QWORD *v109; // [rsp+10h] [rbp-198h]
  _QWORD *v110; // [rsp+10h] [rbp-198h]
  unsigned int v111; // [rsp+1Ch] [rbp-18Ch]
  unsigned __int64 *v112; // [rsp+20h] [rbp-188h]
  __int64 v113; // [rsp+20h] [rbp-188h]
  __int64 *v114; // [rsp+20h] [rbp-188h]
  __int64 v115; // [rsp+20h] [rbp-188h]
  __int64 v116; // [rsp+20h] [rbp-188h]
  __int64 *v117; // [rsp+20h] [rbp-188h]
  __int64 *v118; // [rsp+20h] [rbp-188h]
  __int64 v119; // [rsp+28h] [rbp-180h]
  __int64 v120; // [rsp+28h] [rbp-180h]
  unsigned __int64 v121; // [rsp+28h] [rbp-180h]
  __int64 v122; // [rsp+28h] [rbp-180h]
  unsigned __int8 v123; // [rsp+28h] [rbp-180h]
  __int64 v124; // [rsp+28h] [rbp-180h]
  __int64 v125; // [rsp+28h] [rbp-180h]
  __int64 v126; // [rsp+28h] [rbp-180h]
  unsigned __int64 v127; // [rsp+28h] [rbp-180h]
  __int64 v128; // [rsp+28h] [rbp-180h]
  int v129; // [rsp+28h] [rbp-180h]
  unsigned __int64 v130; // [rsp+30h] [rbp-178h]
  unsigned __int64 v131; // [rsp+30h] [rbp-178h]
  char v132; // [rsp+30h] [rbp-178h]
  _QWORD *v133; // [rsp+30h] [rbp-178h]
  __int64 v134; // [rsp+30h] [rbp-178h]
  _QWORD *v135; // [rsp+30h] [rbp-178h]
  unsigned __int64 v136; // [rsp+30h] [rbp-178h]
  _QWORD *v137; // [rsp+30h] [rbp-178h]
  unsigned __int64 v138; // [rsp+30h] [rbp-178h]
  __int64 v139; // [rsp+30h] [rbp-178h]
  _QWORD *v140; // [rsp+30h] [rbp-178h]
  __int64 v141; // [rsp+30h] [rbp-178h]
  unsigned __int8 v142; // [rsp+38h] [rbp-170h]
  _QWORD *v143; // [rsp+38h] [rbp-170h]
  unsigned __int64 v144; // [rsp+38h] [rbp-170h]
  char v145; // [rsp+38h] [rbp-170h]
  _QWORD *v146; // [rsp+38h] [rbp-170h]
  unsigned __int64 v147; // [rsp+40h] [rbp-168h]
  unsigned __int64 v148; // [rsp+40h] [rbp-168h]
  unsigned __int64 v149; // [rsp+48h] [rbp-160h]
  int v150; // [rsp+5Ch] [rbp-14Ch] BYREF
  void *v151; // [rsp+60h] [rbp-148h] BYREF
  unsigned __int64 v152; // [rsp+68h] [rbp-140h]
  _BYTE v153[16]; // [rsp+70h] [rbp-138h] BYREF
  void *v154[2]; // [rsp+80h] [rbp-128h] BYREF
  __int64 v155; // [rsp+90h] [rbp-118h] BYREF
  __int64 v156[3]; // [rsp+A0h] [rbp-108h] BYREF
  void *v157; // [rsp+B8h] [rbp-F0h]
  __int64 v158; // [rsp+C8h] [rbp-E0h] BYREF
  _QWORD v159[25]; // [rsp+E0h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return;
  v8 = a2;
  v105 = a3;
  v12 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v13 = *v12;
  v14 = *v12 + 8LL * *((unsigned int *)v12 + 2);
  if ( v13 < v14 )
  {
    v15 = (_WORD *)v13;
    a2 = *(_QWORD *)v13;
    if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 358 )
    {
      do
      {
        v15 += 4;
        if ( (_WORD *)v14 == v15 )
          return;
        a2 = *(_QWORD *)v15;
      }
      while ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 358 );
    }
    if ( (_WORD *)v14 == v15 )
      return;
  }
  else
  {
    if ( v13 == v14 )
      return;
    v15 = *(_WORD **)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 358 )
    {
      v16 = (_WORD **)(v14 + 8);
      while ( (_WORD **)v13 != v16 )
      {
        v15 = *v16++;
        if ( v15[18] == 358 )
          goto LABEL_13;
      }
      return;
    }
  }
LABEL_13:
  v17 = *(_QWORD *)v13;
  if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 358 )
  {
    v18 = (__int64 *)(v13 + 8);
    do
      v17 = *v18++;
    while ( *(_WORD *)(v17 + 36) != 358 );
  }
  v19 = *(_BYTE *)(v8 + 28) & 0x7F;
  if ( v19 == 18 )
  {
    v20 = *(_DWORD *)(v8 + 104);
    v21 = 1;
    v22 = 1;
    goto LABEL_18;
  }
  v30 = (unsigned int)v19 - 34;
  if ( (unsigned int)v30 <= 5 )
  {
    v21 = 0;
    v20 = sub_B76070(v8, a2, v30, (__int64)v15);
    v22 = 0;
    goto LABEL_18;
  }
  if ( (unsigned int)v19 - 40 > 6 )
    return;
  v32 = (__int64 *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v33 = *v32;
  if ( *(_BYTE *)(*v32 + 16) == 42 || (v33 = sub_18BBDD0(*v32, a2, v30, (__int64)v15)) != 0 )
  {
    v21 = 0;
    v22 = 0;
    v34 = *(_QWORD *)(*(_QWORD *)(v33 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v35 = *(unsigned __int8 *)(v34 + 16);
    if ( (unsigned int)(v35 - 25) <= 1 )
      goto LABEL_38;
    v108 = 0;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
      return;
    v34 = sub_F63050(v34, a2, v35, v15);
    if ( !v34 )
      return;
  }
  else
  {
    v42 = *v32;
    if ( *(_BYTE *)(*v32 + 16) != 11 )
    {
      v42 = sub_18BBE60(*v32, a2, v41, (__int64)v15);
      if ( !v42 )
        return;
    }
    v21 = 2;
    v22 = 2;
    v34 = *(_QWORD *)(*(_QWORD *)(v42 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v35 = *(unsigned __int8 *)(v34 + 16);
    if ( (unsigned int)(v35 - 25) <= 1 )
      goto LABEL_38;
    v108 = 2;
    v34 = sub_F63050(v34, a2, v35, v15);
  }
  LOBYTE(v35) = *(_BYTE *)(v34 + 16);
  v22 = v108;
LABEL_38:
  v20 = 0;
  if ( (_BYTE)v35 == 26 )
    v20 = *(unsigned __int16 *)(v34 + 22);
LABEL_18:
  v23 = *(_DWORD *)(v17 + 44);
  v24 = v20 - v23;
  if ( v20 < v23 )
    v24 = 0;
  v25 = *(unsigned int *)(v17 + 40);
  if ( v24 + (unsigned int)v25 + 1 > a5 )
  {
    v31 = a1 + 1;
    sub_168B9F0((__int64)v159, v31, v105, 0x1BF0u, 0);
    v156[0] = *(_QWORD *)(v8 + 40);
    sub_15894B0((__int64)v159, v156);
    sub_15F7200(v159);
    sub_168B9F0((__int64)v159, v31, *(_DWORD *)(v8 + 24), 0x18D8u, 0);
    LODWORD(v156[0]) = v21;
    sub_1587D10((__int64)v159, (int *)v156);
    sub_15F7200(v159);
    return;
  }
  v107 = v22;
  v26 = *(_DWORD **)(a4 + 8 * (a5 - 1 - v25));
  if ( v26 && (*v26 & 0x20000) == 0 && !sub_A62F70(a1[31], (__int64)v26) )
  {
    v27 = sub_EEC140((unsigned __int64)v26);
    v153[0] = 0;
    v111 = sub_15F0EF0((__int64)a1, v27, 0, a7, a8);
    v151 = v153;
    v152 = 0;
    if ( v107 != 1 )
      goto LABEL_25;
    v58 = (_QWORD *)a1[30];
    v110 = v58;
    v59 = j__strlen("nil");
    v60 = sub_6F3470((__int64)(v58 + 69), "nil", v59);
    v62 = 1;
    if ( (*(_BYTE *)(v60 + 3) & 2) == 0 )
      goto LABEL_25;
    v63 = v58[7];
    if ( (*(_BYTE *)(v63 + 21) & 2) == 0 )
    {
LABEL_94:
      sub_99BDC0(&v151, 0, v152, "nil", 3u);
      goto LABEL_27;
    }
    v156[0] = v60;
    v72 = v58[213];
    v73 = *(_DWORD *)(v72 + 16);
    if ( v73 )
    {
      v61 = v73 - 1;
      v74 = nullptr;
      for ( i = v61 & (((unsigned int)v60 >> 9) ^ ((unsigned int)v60 >> 4)); ; i = v61 & v104 )
      {
        v76 = (_QWORD *)(*(_QWORD *)v72 + 16LL * i);
        v77 = *v76;
        if ( v60 == *v76 )
        {
          v114 = v76 + 1;
          goto LABEL_111;
        }
        if ( v77 == -4096 )
          break;
        if ( v77 != -8192 || v74 )
          v76 = v74;
        v104 = v62 + i;
        v74 = v76;
        ++v62;
      }
      if ( v74 )
        v76 = v74;
      v99 = *(_DWORD *)(v72 + 8) + 1;
      v159[0] = v76;
      v63 = 3 * v73;
      if ( 4 * v99 < (unsigned int)v63 )
      {
        v100 = v73 >> 3;
        if ( v73 - *(_DWORD *)(v72 + 12) - v99 <= (unsigned int)v100 )
        {
          v117 = (__int64 *)v72;
          sub_12F12D0(v72, v73, v100, v72, 0, v61);
          sub_12EC520(v117, v156, v159);
          v72 = (__int64)v117;
        }
        goto LABEL_186;
      }
    }
    else
    {
      v159[0] = 0;
    }
    v118 = (__int64 *)v72;
    sub_12F12D0(v72, 2 * v73, v63, v72, 0, v61);
    sub_12EC520(v118, v156, v159);
    v72 = (__int64)v118;
LABEL_186:
    v101 = (_QWORD *)v159[0];
    ++*(_DWORD *)(v72 + 8);
    if ( *v101 != -4096 )
      --*(_DWORD *)(v72 + 12);
    v102 = v156[0];
    v103 = v101 + 1;
    *v103 = 0;
    *(v103 - 1) = v102;
    v114 = v103;
LABEL_111:
    v78 = (unsigned __int64 *)(*v114 & 0xFFFFFFFFFFFFFFF8LL);
    v79 = (unsigned __int64)v78;
    if ( *v114 && (*v114 & 4) != 0 )
    {
      v79 = 0;
      if ( !v78 )
        goto LABEL_118;
      v79 = *v78;
    }
    while ( v79 && (*(_BYTE *)(v79 + 12) & 3) == 2 )
      v79 = *(_QWORD *)v79;
LABEL_118:
    v80 = v156[0];
    if ( (*(_BYTE *)(v156[0] + 4) & 0x10) != 0 )
    {
      v137 = (_QWORD *)v79;
      v125 = v156[0];
      sub_145CD30((__int64)v110);
      v80 = v125;
      v79 = (unsigned __int64)v137;
      if ( (*(_BYTE *)(v125 + 3) & 2) == 0 )
        goto LABEL_171;
    }
    else if ( (*(_BYTE *)(v156[0] + 3) & 2) == 0 )
    {
      v123 = 0;
      goto LABEL_169;
    }
    v81 = v110[7];
    if ( (*(_BYTE *)(v81 + 21) & 2) != 0 || *(char *)(v81 + 22) < 0 )
    {
      v82 = v110[213];
      if ( *(_DWORD *)(v82 + 48) )
      {
        v83 = *v114 & 0xFFFFFFFFFFFFFFF8LL;
        v84 = v83;
        if ( !*v114 || (*v114 & 4) == 0 || !v83 )
        {
          v98 = v110[16];
          v110[26] += 32LL;
          v84 = (v98 + 15) & 0xFFFFFFFFFFFFFFF0LL;
          if ( v110[17] >= (unsigned __int64)(v84 + 32) && v98 )
          {
            v110[16] = v84 + 32;
          }
          else
          {
            v148 = v83;
            v140 = (_QWORD *)v79;
            v128 = v80;
            v84 = sub_986170((__int64)(v110 + 16), 32, 32, 4, 0, v80);
            v83 = v148;
            v79 = (unsigned __int64)v140;
            v80 = v128;
          }
          *(_QWORD *)v84 = v83;
          *(_QWORD *)(v84 + 8) = 0;
          *(_DWORD *)(v84 + 16) = 0;
          *(_BYTE *)(v84 + 20) = 0;
          *(_QWORD *)(v84 + 24) = 0;
          *v114 = v84 | 4;
          v82 = v110[213];
        }
        if ( *(_DWORD *)(v82 + 48) != *(_DWORD *)(v84 + 16) )
        {
          v133 = (_QWORD *)v79;
          v122 = v84;
          sub_14476F0((__int64)v110, v80, v84);
          v84 = v122;
          v79 = (unsigned __int64)v133;
        }
        v123 = *(_BYTE *)(v84 + 20);
LABEL_129:
        v85 = v156[0];
        if ( (*(_BYTE *)(v156[0] + 4) & 0x10) != 0 )
        {
          v143 = (_QWORD *)v79;
          v134 = v156[0];
          sub_145CD30((__int64)v110);
          v79 = (unsigned __int64)v143;
          v85 = v134;
        }
        if ( (*(_BYTE *)(v85 + 3) & 2) != 0 )
        {
          v86 = v110[7];
          if ( (*(_BYTE *)(v86 + 21) & 2) != 0 || *(char *)(v86 + 22) < 0 )
          {
            v87 = v110[213];
            if ( *(_DWORD *)(v87 + 48) )
            {
              v88 = *v114 & 0xFFFFFFFFFFFFFFF8LL;
              v89 = v88;
              if ( !*v114 || (*v114 & 4) == 0 || !v88 )
              {
                v97 = v110[16];
                v110[26] += 32LL;
                v89 = (v97 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                if ( v110[17] >= (unsigned __int64)(v89 + 32) && v97 )
                {
                  v110[16] = v89 + 32;
                }
                else
                {
                  v149 = v88;
                  v146 = (_QWORD *)v79;
                  v141 = v85;
                  v89 = sub_986170((__int64)(v110 + 16), 32, 32, 4, 0, v85);
                  v88 = v149;
                  v79 = (unsigned __int64)v146;
                  v85 = v141;
                }
                *(_QWORD *)v89 = v88;
                *(_QWORD *)(v89 + 8) = 0;
                *(_DWORD *)(v89 + 16) = 0;
                *(_BYTE *)(v89 + 20) = 0;
                *(_QWORD *)(v89 + 24) = 0;
                *v114 = v89 | 4;
                v87 = v110[213];
              }
              if ( *(_DWORD *)(v87 + 48) != *(_DWORD *)(v89 + 16) )
              {
                v135 = (_QWORD *)v79;
                v115 = v89;
                sub_14476F0((__int64)v110, v85, v89);
                v89 = v115;
                v79 = (unsigned __int64)v135;
              }
              v90 = *(_QWORD *)(v89 + 8);
              v91 = v90 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v90 & 4) != 0 )
                v92 = *(unsigned int *)(v91 + 8);
              else
                v92 = v91 != 0;
LABEL_142:
              if ( v79
                && (*(_BYTE *)(v79 + 12) & 3) == 0
                && (unsigned __int16)(4 * v123) & 0xFFF8 | v79 & 0xFFFFFFFFFFFFFFF8LL
                || v92 )
              {
                goto LABEL_94;
              }
LABEL_25:
              if ( (*(_BYTE *)(a1[29] + 1) & 0x10) != 0 )
              {
                sub_99BDC0(&v151, 0, v152, "nullptr", 7u);
LABEL_27:
                v28 = a1 + 1;
                if ( v111 )
                {
                  sub_168B9F0((__int64)v159, v28, v111, 0x1BC7u, 0);
                  v150 = v21;
                  v106 = sub_1587D10((__int64)v159, &v150);
                  sub_C05100((__int64)v154, ", ", (__int64)&v151);
                  sub_9EC740((__int64)v156, v111, (_BYTE *)v154[0], (__int64)v154[1], 0);
                  sub_1589170(v106, v156);
                  if ( v157 != &v158 )
                    operator delete(v157);
                  if ( v154[0] != &v155 )
                    operator delete(v154[0]);
                  sub_15F7200(v159);
                }
                else
                {
                  sub_168B9F0((__int64)v159, v28, v105, 0x1BC7u, 0);
                  LODWORD(v156[0]) = v21;
                  sub_1587D10((__int64)v159, (int *)v156);
                  sub_15F7200(v159);
                }
                sub_168B9F0((__int64)v159, a1 + 1, *(_DWORD *)(v8 + 24), 0x18D8u, 0);
                LODWORD(v154[0]) = v21;
                v29 = sub_1587D10((__int64)v159, (int *)v154);
                v156[0] = *(_QWORD *)(v17 + 24);
                sub_1587DB0(v29, v156);
                sub_15F7200(v159);
                if ( v151 != v153 )
                  operator delete(v151);
                return;
              }
              v109 = (_QWORD *)a1[30];
              v36 = j__strlen("NULL");
              v39 = sub_6F3470((__int64)(v109 + 69), "NULL", v36);
              if ( (*(_BYTE *)(v39 + 3) & 2) == 0 )
                goto LABEL_88;
              v40 = 0;
              if ( (*(_BYTE *)(v109[7] + 21LL) & 2) == 0 )
              {
LABEL_47:
                sub_99BDC0(&v151, 0, v152, "NULL", 4u);
                goto LABEL_27;
              }
              v156[0] = v39;
              v64 = v109[213];
              v65 = *(_DWORD *)(v64 + 16);
              if ( v65 )
              {
                v66 = (v65 - 1) & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
                v67 = (__int64 *)(*(_QWORD *)v64 + 16 * v66);
                v68 = *v67;
                if ( v39 == *v67 )
                {
LABEL_99:
                  v69 = (unsigned __int64 *)(v67 + 1);
                  v70 = v67[1];
                  v112 = v69;
                  v71 = (unsigned __int64 *)(v70 & 0xFFFFFFFFFFFFFFF8LL);
                  v45 = v70 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v70 && (v70 & 4) != 0 )
                  {
                    v45 = 0;
                    if ( !v71 )
                      goto LABEL_60;
                    v45 = *v71;
                  }
                  while ( v45 && (*(_BYTE *)(v45 + 12) & 3) == 2 )
                    v45 = *(_QWORD *)v45;
LABEL_60:
                  if ( (*(_BYTE *)(v39 + 4) & 0x10) != 0 )
                  {
                    v136 = v45;
                    v124 = v39;
                    sub_145CD30((__int64)v109);
                    v39 = v124;
                    v45 = v136;
                    v40 = 0;
                    if ( (*(_BYTE *)(v124 + 3) & 2) == 0 )
                    {
LABEL_71:
                      v50 = v156[0];
                      if ( (*(_BYTE *)(v156[0] + 4) & 0x10) != 0 )
                      {
                        v142 = v40;
                        v131 = v45;
                        v120 = v156[0];
                        sub_145CD30((__int64)v109);
                        v40 = v142;
                        v45 = v131;
                        v50 = v120;
                      }
                      if ( (*(_BYTE *)(v50 + 3) & 2) != 0 )
                      {
                        v51 = v109[7];
                        if ( (*(_BYTE *)(v51 + 21) & 2) == 0 )
                        {
                          v52 = 0;
                          if ( *(char *)(v51 + 22) >= 0 )
                            goto LABEL_84;
                        }
                        v53 = v109[213];
                        if ( *(_DWORD *)(v53 + 48) )
                        {
                          v54 = *v112 & 0xFFFFFFFFFFFFFFF8LL;
                          if ( !*v112 || (*v112 & 4) == 0 || (v55 = *v112 & 0xFFFFFFFFFFFFFFF8LL, !v54) )
                          {
                            v95 = v109[16];
                            v109[26] += 32LL;
                            v96 = (v95 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                            if ( v109[17] >= v96 + 32 && v95 )
                            {
                              v109[16] = v96 + 32;
                              v55 = (v95 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                            }
                            else
                            {
                              v147 = v54;
                              v145 = v40;
                              v139 = v50;
                              v127 = v45;
                              v55 = sub_986170((__int64)(v109 + 16), 32, 32, 4, v40, v45);
                              v54 = v147;
                              LOBYTE(v40) = v145;
                              v50 = v139;
                              v45 = v127;
                              v96 = v55 & 0xFFFFFFFFFFFFFFFBLL;
                            }
                            *(_QWORD *)v55 = v54;
                            *(_QWORD *)(v55 + 8) = 0;
                            *(_DWORD *)(v55 + 16) = 0;
                            *(_BYTE *)(v55 + 20) = 0;
                            *(_QWORD *)(v55 + 24) = 0;
                            *v112 = v96 | 4;
                            v53 = v109[213];
                          }
                          if ( *(_DWORD *)(v53 + 48) != *(_DWORD *)(v55 + 16) )
                          {
                            v132 = v40;
                            v121 = v45;
                            v113 = v55;
                            sub_14476F0((__int64)v109, v50, v55);
                            v55 = v113;
                            v45 = v121;
                            LOBYTE(v40) = v132;
                          }
                          v56 = *(_QWORD *)(v55 + 8);
                          v57 = v56 & 0xFFFFFFFFFFFFFFF8LL;
                          if ( (v56 & 4) != 0 )
                            v52 = *(unsigned int *)(v57 + 8);
                          else
                            v52 = v57 != 0;
LABEL_84:
                          if ( v45
                            && (*(_BYTE *)(v45 + 12) & 3) == 0
                            && (unsigned __int16)(4 * (unsigned __int8)v40) & 0xFFF8 | v45 & 0xFFFFFFFFFFFFFFF8LL
                            || v52 )
                          {
                            goto LABEL_47;
                          }
LABEL_88:
                          sub_99BDC0(&v151, 0, v152, "(void*) 0", 9u);
                          goto LABEL_27;
                        }
                      }
LABEL_158:
                      v52 = 0;
                      goto LABEL_84;
                    }
                  }
                  else if ( (*(_BYTE *)(v39 + 3) & 2) == 0 )
                  {
                    goto LABEL_158;
                  }
                  v46 = v109[7];
                  if ( (*(_BYTE *)(v46 + 21) & 2) != 0 || *(char *)(v46 + 22) < 0 )
                  {
                    v47 = v109[213];
                    if ( *(_DWORD *)(v47 + 48) )
                    {
                      v48 = *v112 & 0xFFFFFFFFFFFFFFF8LL;
                      if ( !*v112 || (*v112 & 4) == 0 || (v49 = *v112 & 0xFFFFFFFFFFFFFFF8LL, !v48) )
                      {
                        v93 = v109[16];
                        v109[26] += 32LL;
                        v94 = (v93 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                        if ( v109[17] >= v94 + 32 && v93 )
                        {
                          v109[16] = v94 + 32;
                          v49 = (v93 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                        }
                        else
                        {
                          v144 = v48;
                          v138 = v45;
                          v126 = v39;
                          v49 = sub_986170((__int64)(v109 + 16), 32, 32, 4, v48, v45);
                          v48 = v144;
                          v45 = v138;
                          v39 = v126;
                          v94 = v49 & 0xFFFFFFFFFFFFFFFBLL;
                        }
                        *(_QWORD *)v49 = v48;
                        *(_QWORD *)(v49 + 8) = 0;
                        *(_DWORD *)(v49 + 16) = 0;
                        *(_BYTE *)(v49 + 20) = 0;
                        *(_QWORD *)(v49 + 24) = 0;
                        *v112 = v94 | 4;
                        v47 = v109[213];
                      }
                      if ( *(_DWORD *)(v47 + 48) != *(_DWORD *)(v49 + 16) )
                      {
                        v130 = v45;
                        v119 = v49;
                        sub_14476F0((__int64)v109, v39, v49);
                        v49 = v119;
                        v45 = v130;
                      }
                      v40 = *(unsigned __int8 *)(v49 + 20);
                    }
                  }
                  goto LABEL_71;
                }
                if ( v68 != -4096 )
                {
                  v129 = 1;
                  v37 = nullptr;
                  while ( 1 )
                  {
                    if ( v68 == -8192 && !v37 )
                      v37 = v67;
                    LODWORD(v66) = (v65 - 1) & (v129 + v66);
                    v67 = (__int64 *)(*(_QWORD *)v64 + 16LL * (unsigned int)v66);
                    v68 = *v67;
                    if ( v39 == *v67 )
                      goto LABEL_99;
                    if ( v68 == -4096 )
                    {
                      if ( v37 )
                        goto LABEL_55;
                      break;
                    }
                    ++v129;
                  }
                }
                v37 = v67;
LABEL_55:
                v43 = *(_DWORD *)(v64 + 8);
                v159[0] = v37;
                v38 = (unsigned int)(v43 + 1);
                if ( 4 * (int)v38 < 3 * v65 )
                {
                  if ( v65 - *(_DWORD *)(v64 + 12) - (unsigned int)v38 > v65 >> 3 )
                  {
LABEL_57:
                    v44 = *v37 == -4096;
                    *(_DWORD *)(v64 + 8) = v38;
                    if ( !v44 )
                      --*(_DWORD *)(v64 + 12);
                    *v37 = v39;
                    v45 = 0;
                    v112 = (unsigned __int64 *)(v37 + 1);
                    v37[1] = 0;
                    v39 = v156[0];
                    goto LABEL_60;
                  }
LABEL_176:
                  v116 = v64;
                  sub_12F12D0(v64, v65, (__int64)v37, v64, 0, v38);
                  sub_12EC520((__int64 *)v116, v156, v159);
                  v64 = v116;
                  v39 = v156[0];
                  v37 = (__int64 *)v159[0];
                  v40 = 0;
                  LODWORD(v38) = *(_DWORD *)(v116 + 8) + 1;
                  goto LABEL_57;
                }
              }
              else
              {
                v159[0] = 0;
              }
              v65 *= 2;
              goto LABEL_176;
            }
          }
        }
LABEL_169:
        v92 = 0;
        goto LABEL_142;
      }
    }
LABEL_171:
    v123 = 0;
    goto LABEL_129;
  }
}
