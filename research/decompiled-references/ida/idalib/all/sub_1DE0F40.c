__int64 __fastcall sub_1DE0F40(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v10; // r14
  __int64 v11; // rbp
  unsigned __int16 *v12; // rax
  _DWORD *v13; // r13
  int v14; // eax
  __int64 v15; // rbp
  __int64 v16; // rax
  char v17; // al
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // r15
  int v24; // r13d
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  _DWORD *v27; // rsi
  __int64 v28; // r8
  unsigned __int64 v29; // r9
  _DWORD *v30; // rax
  int v31; // eax
  __int64 *v32; // rcx
  int v33; // r13d
  int v34; // edx
  __int64 v35; // r15
  unsigned __int64 v36; // rdx
  int v37; // r14d
  __int64 v38; // rax
  __m128 *v39; // r10
  const void *v40; // rbp
  __int64 v41; // rax
  __int64 *v42; // rdi
  __int32 v43; // edx
  size_t v44; // r9
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  int v47; // ebp
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  char v50; // cl
  unsigned int v51; // eax
  unsigned int v52; // ecx
  int v53; // eax
  unsigned __int64 v54; // rax
  int v55; // eax
  __int64 v56; // r15
  int v57; // eax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rsi
  unsigned int v67; // r9d
  _DWORD *v68; // rax
  unsigned int v69; // eax
  unsigned int v70; // edx
  unsigned __int64 v71; // rcx
  int v72; // r8d
  int v73; // ebp
  _DWORD *v74; // rdi
  unsigned int v75; // eax
  __int64 v76; // rsi
  unsigned int v77; // r13d
  unsigned __int64 v78; // rbp
  unsigned __int16 *v79; // rax
  __int64 v80; // r12
  unsigned __int64 v81; // rcx
  int v82; // ecx
  int v83; // r9d
  _DWORD *v84; // rax
  int v85; // eax
  unsigned __int64 v86; // rbp
  int v87; // r8d
  unsigned __int64 *v88; // rax
  int v89; // edx
  _DWORD *v90; // rdi
  int v91; // eax
  __int64 v92; // rsi
  unsigned int v93; // r9d
  _DWORD *v94; // rax
  unsigned int v95; // eax
  unsigned int v96; // edx
  int v97; // r8d
  _DWORD *v98; // rdi
  unsigned int v99; // eax
  unsigned __int64 v100; // rdx
  unsigned int v101; // eax
  char *v102; // rax
  __int64 v103; // rdx
  int v104; // eax
  unsigned __int64 v105; // rdx
  unsigned __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned __int16 *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 *v113; // r10
  __int64 v114; // rcx
  __int64 v115; // rsi
  unsigned int v116; // r9d
  _DWORD *v117; // rax
  unsigned int v118; // eax
  unsigned int v119; // edx
  unsigned __int64 v120; // rbp
  int v121; // r8d
  int v122; // ecx
  _DWORD *v123; // rdi
  unsigned int v124; // eax
  __int64 v125; // rax
  unsigned int v126; // r13d
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // r15
  __int64 v132; // rax
  _QWORD *v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // r15
  __int64 v139; // rax
  _QWORD *v140; // rax
  __int64 v141; // [rsp-10h] [rbp-198h]
  __int64 *v142; // [rsp-10h] [rbp-198h]
  __int64 v143; // [rsp-8h] [rbp-190h]
  char v144; // [rsp+0h] [rbp-188h]
  int v145; // [rsp+0h] [rbp-188h]
  unsigned __int64 v146; // [rsp+0h] [rbp-188h]
  int v147; // [rsp+0h] [rbp-188h]
  int v148; // [rsp+0h] [rbp-188h]
  int v149; // [rsp+14h] [rbp-174h]
  unsigned int v150; // [rsp+14h] [rbp-174h]
  unsigned __int64 v151; // [rsp+18h] [rbp-170h]
  __int64 v152; // [rsp+18h] [rbp-170h]
  int v153; // [rsp+18h] [rbp-170h]
  int v154; // [rsp+18h] [rbp-170h]
  int v155; // [rsp+18h] [rbp-170h]
  __int64 *v156; // [rsp+18h] [rbp-170h]
  unsigned __int64 v157; // [rsp+20h] [rbp-168h]
  unsigned int v158; // [rsp+20h] [rbp-168h]
  unsigned __int64 v159; // [rsp+20h] [rbp-168h]
  unsigned int v160; // [rsp+20h] [rbp-168h]
  int v161; // [rsp+20h] [rbp-168h]
  unsigned int dest; // [rsp+28h] [rbp-160h]
  unsigned int desta; // [rsp+28h] [rbp-160h]
  int destb; // [rsp+28h] [rbp-160h]
  unsigned __int64 v165; // [rsp+30h] [rbp-158h]
  __m128 *v166; // [rsp+30h] [rbp-158h]
  int v167; // [rsp+30h] [rbp-158h]
  __int64 *v168; // [rsp+30h] [rbp-158h]
  __m128 *v169; // [rsp+38h] [rbp-150h]
  __m128 *v170; // [rsp+38h] [rbp-150h]
  unsigned int v171; // [rsp+38h] [rbp-150h]
  int v172; // [rsp+38h] [rbp-150h]
  int v173; // [rsp+38h] [rbp-150h]
  __int64 v174; // [rsp+38h] [rbp-150h]
  __int64 *v175; // [rsp+38h] [rbp-150h]
  unsigned int v176; // [rsp+38h] [rbp-150h]
  int v177; // [rsp+48h] [rbp-140h]
  __m128 *v178; // [rsp+48h] [rbp-140h]
  int v179; // [rsp+48h] [rbp-140h]
  __m128 *v180; // [rsp+48h] [rbp-140h]
  unsigned int v181; // [rsp+50h] [rbp-138h]
  int v182; // [rsp+50h] [rbp-138h]
  size_t v183; // [rsp+50h] [rbp-138h]
  char v184; // [rsp+60h] [rbp-128h]
  char v185; // [rsp+67h] [rbp-121h]
  __int64 v186; // [rsp+68h] [rbp-120h]
  char v187; // [rsp+7Ah] [rbp-10Eh] BYREF
  char v188; // [rsp+7Bh] [rbp-10Dh] BYREF
  int v189; // [rsp+7Ch] [rbp-10Ch] BYREF
  unsigned __int64 v190; // [rsp+80h] [rbp-108h] BYREF
  __int64 v191; // [rsp+88h] [rbp-100h]
  void *ptr; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v193; // [rsp+98h] [rbp-F0h]
  _BYTE v194[32]; // [rsp+A0h] [rbp-E8h] BYREF
  void *v195; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v196; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v197; // [rsp+D8h] [rbp-B0h]
  unsigned __int8 *v198[11]; // [rsp+E0h] [rbp-A8h] BYREF
  char v199; // [rsp+138h] [rbp-50h]
  unsigned int v200; // [rsp+140h] [rbp-48h]
  char v201; // [rsp+144h] [rbp-44h]

  v10 = *(_QWORD *)(a2 + 32);
  if ( v10 )
  {
    v11 = 1;
    v12 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 32), a3, a4, a5, a6, a7, a8);
    v10 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFELL;
    if ( v12 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      return v11;
  }
  v13 = *(_DWORD **)(a2 + 40);
  if ( !v13 || (*v13 & 0x4000) == 0 )
    v13 = *(_DWORD **)(a2 + 48);
  ptr = v194;
  v193 = 0x200000000LL;
  sub_1E4CA90(v13);
  v14 = *(_DWORD *)(a2 + 28);
  v187 = 1;
  v188 = 0;
  v15 = (unsigned int)v193;
  v149 = v14;
  v189 = v14;
  v16 = sub_EEC8C0((unsigned __int64)v13, (__int64)&ptr, *(double *)a7.m128_u64);
  v17 = sub_1DDBB60(
          a1,
          *(_DWORD *)(a2 + 20),
          v16,
          (__int64)ptr,
          v15,
          (__int64)&v187,
          a7,
          a8,
          (__int64)&v188,
          (__int64)&v189);
  v20 = v141;
  v21 = v143;
  if ( v17 )
  {
LABEL_6:
    v11 = 1;
    goto LABEL_7;
  }
  v184 = v187;
  if ( !v187 )
  {
    v23 = *a1;
    v24 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = 0;
    v25 = *(_QWORD *)(a2 + 40);
    if ( v25 )
    {
      v26 = (unsigned __int64)sub_1DC71F0(a1, v25, v18, v19, v141, v143, a7, a8);
      if ( v26 == 1 )
      {
LABEL_14:
        v11 = 1;
LABEL_15:
        *(_DWORD *)(v23 + 12632) = v24;
        goto LABEL_7;
      }
    }
    else
    {
      v26 = 0;
    }
    v78 = *(_QWORD *)(a2 + 48);
    if ( v78 )
    {
      v146 = v26;
      v79 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 48), v18, v26, v20, v21, a7, a8);
      v26 = v146;
      if ( v79 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_14;
      v78 = (unsigned __int64)v79 & 0xFFFFFFFFFFFFFFFELL;
    }
    v80 = *a1;
    v81 = v26 & 0xFFFFFFFFFFFFFFFELL;
    if ( !*(_DWORD *)(*a1 + 12632) && v81 == *(_QWORD *)(a2 + 40) && v78 == *(_QWORD *)(a2 + 48) )
    {
      v11 = a2;
    }
    else
    {
      v92 = *(unsigned int *)(a2 + 24);
      v93 = *(_DWORD *)(a2 + 20);
      if ( !(_DWORD)v92 )
      {
        v94 = *(_DWORD **)(a2 + 40);
        if ( !v94 || (v92 = v93, (*v94 & 0x4000) == 0) )
        {
          v150 = *(_DWORD *)(a2 + 20);
          v147 = v81;
          v95 = sub_EEC140(*(_QWORD *)(a2 + 48));
          v93 = v150;
          LODWORD(v81) = v147;
          v92 = v95;
        }
      }
      v96 = *(_DWORD *)(a2 + 16);
      v97 = *(_DWORD *)(a2 + 4);
      if ( !v96 )
      {
        v98 = *(_DWORD **)(a2 + 40);
        v96 = v93;
        if ( v98 )
        {
          if ( (*v98 & 0x4000) != 0 )
          {
            v160 = v93;
            v154 = *(_DWORD *)(a2 + 4);
            v148 = v81;
            v99 = sub_EEB7E0((unsigned __int64)v98, v92, *(double *)a7.m128_u64);
            v93 = v160;
            v97 = v154;
            LODWORD(v81) = v148;
            v96 = v99;
          }
        }
      }
      v11 = sub_1E4D400(v80, v10, v96, v81, v97, v93, v78, v92, v189);
    }
    goto LABEL_15;
  }
  if ( v189 )
  {
    v18 = *(_QWORD *)(*a1 + 232);
    if ( *(_DWORD *)(v18 + 144) < (unsigned int)(v189 - 1) )
    {
      v76 = *a1 + 8;
      sub_168B9F0((__int64)&v195, (__int64 *)v76, *(_DWORD *)(a2 + 20), 0xEF7u, 0);
      v77 = v189 - 1;
      if ( v199 )
      {
        v76 = v77;
        sub_AE9DF0(v198, v77, 3u);
      }
      else
      {
        if ( !v201 )
        {
LABEL_67:
          v190 = sub_EEC8C0(a2, v76, *(double *)a7.m128_u64);
          sub_1587DB0((__int64)&v195, (__int64 *)&v190);
          sub_15F7200(&v195);
          sub_168B9F0((__int64)&v195, (__int64 *)(*a1 + 8), *(_DWORD *)(a2 + 20), 0x7ECu, 0);
          sub_15F7200(&v195);
          goto LABEL_6;
        }
        v131 = sub_168B9E0(&v195);
        v132 = *((_QWORD *)&v196 + 1);
        if ( *((_QWORD *)&v196 + 1) )
          v132 = (*(__int64 (__fastcall **)(__int64))(**((_QWORD **)&v196 + 1) + 32LL))(*((_QWORD *)&v196 + 1));
        v190 = v132;
        v133 = sub_1587BC0(v131, (__int64 *)&v190, v127, v128, v129, v130);
        v76 = v77;
        sub_AE9DF0((unsigned __int8 **)(*v133 + 32LL * v200 + 8), v77, 3u);
      }
      v126 = *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 144LL);
      if ( v199 )
      {
        v76 = v126;
        sub_AE9DF0(v198, v126, 3u);
      }
      else if ( v201 )
      {
        v138 = sub_168B9E0(&v195);
        v139 = *((_QWORD *)&v196 + 1);
        if ( *((_QWORD *)&v196 + 1) )
          v139 = (*(__int64 (__fastcall **)(__int64))(**((_QWORD **)&v196 + 1) + 32LL))(*((_QWORD *)&v196 + 1));
        v190 = v139;
        v140 = sub_1587BC0(v138, (__int64 *)&v190, v134, v135, v136, v137);
        v76 = v126;
        sub_AE9DF0((unsigned __int8 **)(*v140 + 32LL * v200 + 8), v126, 3u);
      }
      goto LABEL_67;
    }
  }
  v27 = *(_DWORD **)(a2 + 40);
  if ( v27 && (*v27 & 0x4000) != 0 )
    v27 = *(_DWORD **)(a2 + 48);
  v11 = (__int64)sub_1DC71F0(a1, (unsigned __int64)v27, v18, v19, v141, v143, a7, a8);
  if ( v11 == 1 )
    goto LABEL_6;
  v30 = *(_DWORD **)(a2 + 40);
  if ( v30 && (*v30 & 0x4000) != 0 )
  {
    v144 = v188;
    if ( v188 )
    {
      v56 = *a1;
      v104 = *(_DWORD *)(*a1 + 12632);
      *(_DWORD *)(*a1 + 12632) = 0;
      v145 = v104;
      sub_1DB8420((__m128i *)&v196, a1);
      v109 = sub_1DC71F0(a1, (unsigned __int64)v13, v105, v106, v107, v108, a7, a8);
      v113 = a1 + 4;
      v114 = (__int64)v109;
      if ( v109 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_127;
      v115 = *(unsigned int *)(a2 + 24);
      v116 = *(_DWORD *)(a2 + 20);
      if ( !(_DWORD)v115 )
      {
        v117 = *(_DWORD **)(a2 + 40);
        if ( !v117 || (v115 = v116, (*v117 & 0x4000) == 0) )
        {
          desta = *(_DWORD *)(a2 + 20);
          v155 = v114;
          v118 = sub_EEC140(*(_QWORD *)(a2 + 48));
          v116 = desta;
          v113 = a1 + 4;
          LODWORD(v114) = v155;
          v115 = v118;
        }
      }
      v119 = *(_DWORD *)(a2 + 16);
      v120 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v121 = *(_DWORD *)(a2 + 4);
      v122 = v114 & 0xFFFFFFFE;
      if ( !v119 )
      {
        v123 = *(_DWORD **)(a2 + 40);
        v119 = v116;
        if ( v123 )
        {
          if ( (*v123 & 0x4000) != 0 )
          {
            v176 = v116;
            v168 = v113;
            destb = v122;
            v161 = *(_DWORD *)(a2 + 4);
            v124 = sub_EEB7E0((unsigned __int64)v123, v115, *(double *)a7.m128_u64);
            v116 = v176;
            v113 = v168;
            v122 = destb;
            v121 = v161;
            v119 = v124;
          }
        }
      }
      v156 = v113;
      v125 = sub_1E4D400(*a1, v10, v119, v122, v121, v116, v120, v115, v149);
      v113 = v156;
      v11 = v125;
      if ( v125 == 1 )
      {
LABEL_127:
        v11 = 1;
        sub_1DB8040((__int64)a1, v113, v110, v114, v111, v112, v196, v197);
        goto LABEL_128;
      }
      sub_1DB8040((__int64)a1, v156, v110, v114, v111, v112, v196, v197);
      *(_DWORD *)(v56 + 12632) = v145;
      v144 = 0;
      v31 = v189 - 1;
      if ( v189 == 1 )
        goto LABEL_102;
    }
    else
    {
      v31 = v189 - 1;
      if ( v189 == 1 )
        goto LABEL_102;
    }
  }
  else
  {
    v144 = v184;
    v31 = v189 - 1;
    if ( v189 == 1 )
      goto LABEL_52;
  }
  v185 = 0;
  v32 = (__int64 *)&v196 + 1;
  v157 = v10;
  v151 = (unsigned __int64)v13;
  v33 = 0;
  do
  {
    v34 = v33;
    if ( !v144 )
      v34 = v31 - 1 - v33;
    v35 = *a1;
    v36 = (unsigned int)(v34 + 1);
    v37 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = v36;
    v38 = (__int64)sub_1DC71F0(a1, v151, v36, (unsigned __int64)v32, v28, v29, a7, a8);
    if ( v38 == 1 )
    {
LABEL_97:
      v11 = 1;
      *(_DWORD *)(v35 + 12632) = v37;
      goto LABEL_7;
    }
    v39 = (__m128 *)(v38 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*(_DWORD *)(v38 & 0xFFFFFFFFFFFFFFFELL) & 0x4000) != 0 )
    {
      v82 = *(_DWORD *)(a2 + 24);
      v83 = *(_DWORD *)(a2 + 20);
      if ( !v82 )
      {
        v84 = *(_DWORD **)(a2 + 40);
        if ( !v84 || (v82 = *(_DWORD *)(a2 + 20), (*v84 & 0x4000) == 0) )
        {
          v172 = *(_DWORD *)(a2 + 20);
          v166 = v39;
          v85 = sub_EEC140(*(_QWORD *)(a2 + 48));
          v83 = v172;
          v39 = v166;
          v82 = v85;
        }
      }
      v86 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v87 = *(_DWORD *)(a2 + 4);
      if ( v144 )
      {
        v88 = (unsigned __int64 *)v39;
        LODWORD(v39) = v86;
        v86 = (unsigned __int64)v88;
      }
      v89 = *(_DWORD *)(a2 + 16);
      if ( !v89 )
      {
        v90 = *(_DWORD **)(a2 + 40);
        v89 = v83;
        if ( v90 )
        {
          if ( (*v90 & 0x4000) != 0 )
          {
            v182 = v83;
            v179 = *(_DWORD *)(a2 + 4);
            v173 = v82;
            v167 = (int)v39;
            v91 = sub_EEB7E0((unsigned __int64)v90, v151, *(double *)a7.m128_u64);
            v83 = v182;
            v87 = v179;
            v82 = v173;
            LODWORD(v39) = v167;
            v89 = v91;
          }
        }
      }
      v11 = sub_1E4D400(*a1, v157, v89, (_DWORD)v39, v87, v83, v86, v82, v149);
LABEL_49:
      if ( v11 == 1 )
        goto LABEL_97;
      goto LABEL_50;
    }
    if ( !v11 )
    {
      v11 = v38;
      goto LABEL_50;
    }
    v165 = v11 & 0xFFFFFFFFFFFFFFFELL;
    if ( !v144 )
    {
      v39 = (__m128 *)(v11 & 0xFFFFFFFFFFFFFFFELL);
      v165 = v38 & 0xFFFFFFFFFFFFFFFELL;
    }
    if ( v157 )
    {
      v195 = (char *)&v196 + 8;
      *(_QWORD *)&v196 = 0x1000000000LL;
      if ( (*(_WORD *)v157 & 0x1FF) == 0x18 )
      {
        v40 = (const void *)(v157 + 64);
        v41 = v157 + 64 + 8LL * *(unsigned int *)(v157 + 4);
      }
      else
      {
        v40 = (const void *)(v157 + 80);
        v41 = v157 + 80 + 8LL * *(unsigned int *)(v157 + 4);
      }
      v42 = (__int64 *)&v196 + 1;
      v43 = 0;
      v44 = v41 - (_QWORD)v40;
      v45 = (v41 - (__int64)v40) >> 3;
      if ( v45 > 0x10 )
      {
        v186 = v41;
        v183 = v41 - (_QWORD)v40;
        v180 = v39;
        v174 = (v41 - (__int64)v40) >> 3;
        sub_2237220(&v195, (char *)&v196 + 8, v174, 8);
        v41 = v186;
        v44 = v183;
        v43 = v196;
        v39 = v180;
        LODWORD(v45) = v174;
        v42 = (__int64 *)((char *)v195 + 8 * (unsigned int)v196);
      }
      if ( v40 != (const void *)v41 )
      {
        v177 = v45;
        v169 = v39;
        memcpy(v42, v40, v44);
        LODWORD(v45) = v177;
        v39 = v169;
        v43 = v196;
      }
      LODWORD(v196) = v43 + v45;
      v46 = *(_QWORD *)(v157 + 40);
      v47 = (*(_DWORD *)v157 >> 20) & 1;
      if ( v46 )
      {
        v48 = *(_QWORD *)(v157 + 48);
        v190 = *(_QWORD *)(v157 + 40);
        v191 = v48;
        v49 = *(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v49 )
        {
          v190 = v49;
          v50 = 0;
          while ( (*(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v50 = v184;
            v49 = *(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( v50 )
            v190 = v49;
        }
        v170 = v39;
        v51 = sub_E90530((__int64 *)&v190);
        v39 = v170;
        v52 = v51;
      }
      else
      {
        v52 = *(_DWORD *)(v157 + 24);
      }
      v181 = v52;
      v178 = v39;
      v171 = *(_DWORD *)(a2 + 20);
      v53 = sub_BFAD70(*(_DWORD *)(a2 + 4));
      v54 = sub_1DB9100(a1, v53, v171, v181, v47, (__int64)&v195, a7, a8, v165, v178);
      v32 = v142;
      v11 = v54;
      if ( v195 != (char *)&v196 + 8 )
        free(v195);
      goto LABEL_49;
    }
    v11 = sub_1929BB0(*a1, 0, *(unsigned int *)(a2 + 20), *(_DWORD *)(a2 + 4), v165, v39, a7, a8, 1u);
    if ( v185 )
      goto LABEL_49;
    if ( v11 == 1 )
      goto LABEL_97;
    if ( v11 )
    {
      v29 = v11 & 0xFFFFFFFFFFFFFFFELL;
      if ( ((*(_WORD *)(v11 & 0xFFFFFFFFFFFFFFFELL) + 394) & 0x1FFu) <= 1
        && ((*(_WORD *)(v29 + 2) >> 3) & 0x3Fu) - 9 <= 6 )
      {
        v175 = (__int64 *)(*a1 + 8);
        v101 = sub_EEB7E0(*(_QWORD *)(v29 + 16), (__int64)v175, *(double *)a7.m128_u64);
        sub_168B9F0((__int64)&v195, v175, v101, 0x1A16u, 0);
        v102 = sub_BFA720((*(_WORD *)((v11 & 0xFFFFFFFFFFFFFFFELL) + 2) >> 3) & 0x3F);
        v191 = v103;
        v190 = (unsigned __int64)v102;
        sub_166BAF0((__int64)&v195, (__int64)&v190);
        sub_15F7200(&v195);
        v185 = v184;
      }
    }
LABEL_50:
    v55 = v189;
    ++v33;
    *(_DWORD *)(v35 + 12632) = v37;
    v31 = v55 - 1;
  }
  while ( v33 != v31 );
  LODWORD(v10) = v157;
  v13 = (_DWORD *)v151;
  if ( !v144 )
    goto LABEL_102;
LABEL_52:
  if ( v188 )
  {
    v56 = *a1;
    v57 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = 0;
    v145 = v57;
    sub_1DB8420((__m128i *)&v196, a1);
    v63 = (__int64)sub_1DC71F0(a1, (unsigned __int64)v13, v58, v59, v60, v61, a7, a8);
    if ( v63 != 1 )
    {
      v66 = *(unsigned int *)(a2 + 24);
      v67 = *(_DWORD *)(a2 + 20);
      if ( !(_DWORD)v66 )
      {
        v68 = *(_DWORD **)(a2 + 40);
        if ( !v68 || (v66 = v67, (*v68 & 0x4000) == 0) )
        {
          v158 = *(_DWORD *)(a2 + 20);
          v152 = v63;
          v69 = sub_EEC140(*(_QWORD *)(a2 + 48));
          v67 = v158;
          v63 = v152;
          v66 = v69;
        }
      }
      v70 = *(_DWORD *)(a2 + 16);
      v71 = v63 & 0xFFFFFFFFFFFFFFFELL;
      v72 = *(_DWORD *)(a2 + 4);
      v73 = v11 & 0xFFFFFFFE;
      if ( !v70 )
      {
        v74 = *(_DWORD **)(a2 + 40);
        v70 = v67;
        if ( v74 )
        {
          if ( (*v74 & 0x4000) != 0 )
          {
            dest = v67;
            v159 = v71;
            v153 = *(_DWORD *)(a2 + 4);
            v75 = sub_EEB7E0((unsigned __int64)v74, v66, *(double *)a7.m128_u64);
            v67 = dest;
            v71 = v159;
            v72 = v153;
            v70 = v75;
          }
        }
      }
      v11 = sub_1E4D400(*a1, v10, v70, v73, v72, v67, v71, v66, v149);
      if ( v11 != 1 )
      {
        sub_1DB8040((__int64)a1, a1 + 4, v62, v63, v64, v65, v196, v197);
        *(_DWORD *)(v56 + 12632) = v145;
        goto LABEL_102;
      }
    }
    v11 = 1;
    sub_1DB8040((__int64)a1, a1 + 4, v62, v63, v64, v65, v196, v197);
LABEL_128:
    *(_DWORD *)(v56 + 12632) = v145;
  }
  else
  {
LABEL_102:
    v100 = v11 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v11 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    {
      if ( (*(_WORD *)v100 & 0x1FF) == 0x14 )
        *(_BYTE *)(v100 + 2) |= 8u;
    }
    else
    {
      v11 = sub_1E4E540(*a1, *(unsigned int *)(a2 + 20), *(unsigned int *)(a2 + 4));
    }
  }
LABEL_7:
  if ( ptr != v194 )
    free(ptr);
  return v11;
}
