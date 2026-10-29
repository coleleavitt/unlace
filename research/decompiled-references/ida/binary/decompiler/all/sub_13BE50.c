__int64 __fastcall sub_13BE50(__int128 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 *v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // r10
  int **v14; // r13
  char v15; // si
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int64 v18; // r12
  bool v19; // r11
  int v20; // ecx
  __int64 v21; // rax
  char *v22; // rax
  char v23; // dl
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  int *v26; // r12
  __int64 v27; // r15
  unsigned __int64 *v28; // rdi
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _DWORD *v32; // r9
  __int64 v33; // r10
  int v34; // r8d
  _DWORD *v35; // rcx
  _DWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 *v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // r13
  char *v46; // rbx
  char *v47; // rdx
  int v48; // eax
  int v49; // eax
  int *v50; // r12
  __int64 i; // r13
  _DWORD *v52; // rcx
  int v53; // r15d
  _DWORD *v54; // rax
  unsigned __int64 v55; // rdx
  _QWORD *v56; // rcx
  char *v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  unsigned int *v60; // rbx
  unsigned int *v61; // rax
  int v62; // r9d
  __int64 v63; // rdx
  __int64 v64; // r8
  _DWORD *v65; // rcx
  _DWORD *v66; // rax
  _DWORD *v67; // rdx
  _DWORD *v68; // rax
  _DWORD *v69; // rax
  __int64 *v70; // rdi
  int *v71; // rcx
  __int64 v72; // r8
  __int64 *v73; // rsi
  __int64 v74; // r9
  __int64 *v75; // r15
  char v76; // al
  _QWORD *v77; // rdx
  unsigned int *v78; // rbx
  unsigned int *v79; // r13
  unsigned int *v80; // rbx
  unsigned int *v81; // r15
  __int64 v82; // rax
  __int64 v83; // r12
  unsigned int *v84; // r13
  __int64 *v85; // rbx
  __int64 v86; // rsi
  int v87; // eax
  __int64 v88; // rdx
  unsigned int *v89; // rcx
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  int v94; // eax
  __int64 v95; // rax
  __int64 v96; // r15
  size_t v97; // r14
  _QWORD *v98; // rbx
  _DWORD *v99; // rdx
  char v100; // r15
  __int64 v101; // r14
  int v102; // r13d
  __int64 v103; // rax
  char *v104; // rax
  char v105; // r12
  unsigned __int64 v106; // r14
  __int64 v107; // rax
  _DWORD *v108; // r13
  __int64 v109; // r14
  _DWORD *v110; // rax
  _QWORD *v111; // r12
  _QWORD *v112; // rax
  __int64 v113; // r12
  unsigned __int64 v114; // r13
  __int64 v115; // rax
  _QWORD *v116; // rdi
  int v117; // eax
  __int64 v118; // r12
  __int64 *v119; // rsi
  __int64 *v120; // rdi
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // r14
  __int64 *v126; // rax
  _DWORD **v127; // [rsp+8h] [rbp-278h]
  _QWORD *v128; // [rsp+10h] [rbp-270h]
  char v129; // [rsp+2Eh] [rbp-252h]
  unsigned __int8 v130; // [rsp+2Fh] [rbp-251h]
  __int64 v131; // [rsp+30h] [rbp-250h]
  unsigned int *v132; // [rsp+30h] [rbp-250h]
  __int64 v133; // [rsp+30h] [rbp-250h]
  __int64 v134; // [rsp+38h] [rbp-248h]
  unsigned int *v135; // [rsp+40h] [rbp-240h]
  _DWORD *v136; // [rsp+40h] [rbp-240h]
  unsigned __int64 v137; // [rsp+40h] [rbp-240h]
  int v138; // [rsp+48h] [rbp-238h]
  unsigned __int64 v139; // [rsp+48h] [rbp-238h]
  size_t na; // [rsp+50h] [rbp-230h]
  size_t nb; // [rsp+50h] [rbp-230h]
  unsigned int nc; // [rsp+50h] [rbp-230h]
  bool n; // [rsp+50h] [rbp-230h]
  __int64 nd; // [rsp+50h] [rbp-230h]
  __int64 v145; // [rsp+58h] [rbp-228h]
  __int64 v146; // [rsp+60h] [rbp-220h]
  int v147; // [rsp+68h] [rbp-218h]
  int v148; // [rsp+68h] [rbp-218h]
  int v149; // [rsp+68h] [rbp-218h]
  unsigned int v150; // [rsp+68h] [rbp-218h]
  unsigned int *v151; // [rsp+68h] [rbp-218h]
  __int64 *v152; // [rsp+68h] [rbp-218h]
  __int64 v153; // [rsp+70h] [rbp-210h]
  __int128 v154; // [rsp+78h] [rbp-208h]
  _DWORD *v155; // [rsp+90h] [rbp-1F0h]
  __int128 v156; // [rsp+98h] [rbp-1E8h]
  __int64 v157[2]; // [rsp+B0h] [rbp-1D0h] BYREF
  void *v158; // [rsp+C0h] [rbp-1C0h]
  __int128 v159; // [rsp+C8h] [rbp-1B8h]
  __int64 v160[2]; // [rsp+E0h] [rbp-1A0h] BYREF
  void *src; // [rsp+F0h] [rbp-190h] BYREF
  __int128 v162; // [rsp+F8h] [rbp-188h]
  __int64 v163[2]; // [rsp+110h] [rbp-170h] BYREF
  void *v164; // [rsp+120h] [rbp-160h] BYREF
  __int128 v165; // [rsp+128h] [rbp-158h]
  __int64 v166; // [rsp+140h] [rbp-140h] BYREF
  __int128 v167; // [rsp+148h] [rbp-138h] BYREF
  __int128 v168; // [rsp+158h] [rbp-128h]
  unsigned __int64 v169; // [rsp+168h] [rbp-118h]
  char v170; // [rsp+170h] [rbp-110h]
  _QWORD v171[3]; // [rsp+180h] [rbp-100h] BYREF
  char v172; // [rsp+198h] [rbp-E8h]
  __int64 v173; // [rsp+1A0h] [rbp-E0h]
  char v174; // [rsp+1A8h] [rbp-D8h]
  __int64 (__fastcall **v175)(); // [rsp+1B0h] [rbp-D0h] BYREF
  __int64 v176; // [rsp+1B8h] [rbp-C8h]
  __int64 v177; // [rsp+1C0h] [rbp-C0h]
  __int64 v178; // [rsp+1C8h] [rbp-B8h]
  __int64 v179; // [rsp+1D0h] [rbp-B0h]
  char v180; // [rsp+1D8h] [rbp-A8h]
  unsigned __int8 *v181; // [rsp+1E0h] [rbp-A0h]
  unsigned __int8 *v182; // [rsp+1E8h] [rbp-98h]
  _QWORD *v183; // [rsp+1F0h] [rbp-90h]
  __int64 v184; // [rsp+1F8h] [rbp-88h] BYREF
  __int128 v185; // [rsp+200h] [rbp-80h]
  __int64 v186; // [rsp+210h] [rbp-70h]
  __int128 v187; // [rsp+218h] [rbp-68h]
  char *v188; // [rsp+228h] [rbp-58h]
  __int64 v189; // [rsp+230h] [rbp-50h]
  char v190; // [rsp+238h] [rbp-48h]
  unsigned __int64 v191; // [rsp+248h] [rbp-38h]

  v146 = a1;
  v191 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 14 || *(_BYTE *)a3 != 1 || *(_DWORD *)(a3 + 4) != *(_DWORD *)(a2 + 4) )
  {
    if ( !under_debugger )
      sub_37EA20(50435);
LABEL_239:
    BUG();
  }
  if ( (**(_DWORD **)(a1 + 64) & 0x100000) != 0 )
    return 0;
  v6 = *((_QWORD *)&a1 + 1);
  v130 = sub_11C8F0(a2);
  if ( v130 )
    return 0;
  v171[1] = 0;
  v171[0] = off_4DD2D0;
  v175 = off_4DD2A8;
  v183 = v171;
  v171[2] = 0;
  v177 = a1;
  v7 = *(_QWORD *)(a1 + 64);
  v172 = 0;
  v173 = 0;
  v174 = 0;
  v178 = 0;
  v179 = 0;
  v180 = 0;
  v181 = (unsigned __int8 *)a2;
  v182 = (unsigned __int8 *)a3;
  v184 = 0;
  v186 = 0;
  v188 = 0;
  v189 = 0;
  v176 = v7;
  v185 = 0;
  v187 = 0;
  sub_132250(&v184, a2);
  v190 = 0;
  v153 = 0;
  v154 = 0;
  v8 = sub_667E0(*(_QWORD **)(a1 + 64));
  v134 = sub_10F6E0(v8, 0);
  if ( !v134 )
  {
    if ( !under_debugger )
      sub_37EA20(50446);
    goto LABEL_239;
  }
  ++*(_DWORD *)(v134 + 24);
  v9 = sub_667E0(*(_QWORD **)(a1 + 64));
  v145 = sub_10EF10(v9, 0);
  if ( !v145 )
  {
    if ( !under_debugger )
      sub_37EA20(50446);
    goto LABEL_239;
  }
  ++*(_DWORD *)(v145 + 24);
  v147 = *(_DWORD *)(a1 + 72);
  v10 = *(_QWORD *)v134;
  sub_122C80(*((_QWORD *)&a1 + 1) + 64LL, (unsigned __int8 *)a3);
  v157[0] = 0;
  *((_QWORD *)&a1 + 1) = v157;
  v157[1] = 0;
  v158 = 0;
  v159 = 0;
  sub_1219A0(a1, a2, 1u, 0xFFFF0000);
  if ( (unsigned int)sub_127730((_QWORD *)a1, v157, *(_QWORD *)(v6 + 8), 0, (__int64)v171) )
    goto LABEL_56;
  v11 = (__int64 *)(v10 + 24LL * v147);
  v131 = *v11;
  if ( !*v11 )
    goto LABEL_49;
  if ( !v11[1] )
    goto LABEL_49;
  v12 = *(_QWORD *)(v131 + 8);
  if ( v12 == v131 )
    goto LABEL_49;
  do
  {
    v13 = *(_QWORD *)(v12 + 32);
    v14 = (int **)(v12 + 24);
    if ( !v13 )
      goto LABEL_80;
    v15 = *(_BYTE *)(v12 + 56);
    if ( v15 == 1 )
    {
      v16 = *(int *)(v12 + 48);
      goto LABEL_17;
    }
    if ( v15 != 5 )
    {
      if ( !under_debugger )
        sub_37EA20(51893);
      goto LABEL_239;
    }
    v16 = *(_QWORD *)(v12 + 48);
LABEL_17:
    v17 = *(int *)(v12 + 64);
    if ( !(_QWORD)v185 )
      goto LABEL_80;
    v18 = v16 + v17 - 1;
    v19 = v17 != 0;
    v20 = 0;
    v21 = 0;
    while ( 1 )
    {
      v22 = (char *)(v184 + 16 * v21);
      v23 = *v22;
      if ( *v22 == 1 )
      {
        v24 = *((int *)v22 + 2);
        goto LABEL_23;
      }
      if ( v23 == 5 )
        break;
LABEL_20:
      v21 = ++v20;
      if ( v20 >= (unsigned __int64)v185 )
        goto LABEL_80;
    }
    v24 = *(_QWORD *)(*((_QWORD *)v22 + 1) + 8LL);
LABEL_23:
    if ( v15 != v23 )
      goto LABEL_20;
    v25 = *((int *)v22 + 1);
    if ( !v25 || !v19 || v18 < v24 || v24 + v25 - 1 < v16 )
      goto LABEL_20;
    if ( v16 != v24 || v20 == -2 )
      goto LABEL_56;
    v26 = *v14;
    v27 = (__int64)&(*v14)[v13];
    if ( *v14 != (int *)v27 )
    {
      while ( 1 )
      {
        v28 = (unsigned __int64 *)(*(_QWORD *)v145 + 24LL * *v26);
        v29 = *(_QWORD *)(v12 + 48);
        BYTE8(v168) = v15;
        v166 = 0;
        *(_QWORD *)&v168 = v29;
        v170 = 1;
        v169 = 0xFFFFFFFF00000001LL;
        v167 = 0;
        v30 = sub_1038F0(v28, (__int64)&v166);
        if ( v166 )
        {
          na = (size_t)v30;
          *(_QWORD *)&v167 = 0;
          qfree();
          v30 = (_QWORD *)na;
        }
        if ( !v30 )
          goto LABEL_56;
        v31 = v30[1];
        if ( !v31 )
          goto LABEL_56;
        v32 = (_DWORD *)*v30;
        v33 = *v30 + 4 * v31;
        if ( *v30 != v33 )
        {
          do
          {
            v34 = *v32;
            if ( !*v32 )
              goto LABEL_56;
            if ( v34 != *(_DWORD *)(v177 + 72) )
            {
              v35 = (_DWORD *)(v186 + 4 * v187);
              if ( (_DWORD *)v186 == v35 )
                goto LABEL_69;
              v36 = (_DWORD *)v186;
              while ( v34 != *v36 )
              {
                if ( v35 == ++v36 )
                  goto LABEL_69;
              }
              if ( v35 == v36 )
              {
LABEL_69:
                if ( *((_QWORD *)&v187 + 1) < (unsigned __int64)(v187 + 1) )
                {
                  v136 = v32;
                  v138 = *v32;
                  nb = v33;
                  v186 = qvector_reserve();
                  v32 = v136;
                  v34 = v138;
                  v33 = nb;
                  v35 = (_DWORD *)(v186 + 4 * v187);
                }
                *v35 = v34;
                *(_QWORD *)&v187 = v187 + 1;
              }
            }
            ++v32;
          }
          while ( (_DWORD *)v33 != v32 );
        }
        if ( (int *)v27 == ++v26 )
          break;
        v15 = *(_BYTE *)(v12 + 56);
      }
      v50 = *v14;
      for ( i = (__int64)&(*v14)[*(_QWORD *)(v12 + 32)]; (int *)i != v50; ++v50 )
      {
        v52 = (_DWORD *)(v153 + 4 * v154);
        v53 = *v50;
        if ( (_DWORD *)v153 == v52 )
        {
LABEL_85:
          if ( *((_QWORD *)&v154 + 1) < (unsigned __int64)(v154 + 1) )
          {
            v153 = qvector_reserve();
            v52 = (_DWORD *)(v153 + 4 * v154);
          }
          *v52 = v53;
          *(_QWORD *)&v154 = v154 + 1;
        }
        else
        {
          v54 = (_DWORD *)v153;
          while ( *v50 != *v54 )
          {
            if ( v52 == ++v54 )
            {
              v53 = *v50;
              goto LABEL_85;
            }
          }
          v53 = *v50;
          if ( v52 == v54 )
            goto LABEL_85;
        }
      }
    }
LABEL_80:
    if ( (*(_QWORD *)v12 & 2) == 0 )
    {
      v55 = *(_QWORD *)(v12 + 16);
      if ( (*(_BYTE *)v55 & 2) != 0 )
      {
        v37 = (_QWORD *)(*(_QWORD *)v12 & 0xFFFFFFFFFFFFFFFCLL);
        v38 = *v37;
        if ( (*v37 & 2) != 0 || v37[2] != v12 )
        {
LABEL_47:
          v12 = (unsigned __int64)v37;
        }
        else
        {
          while ( 1 )
          {
            v12 = v38 & 0xFFFFFFFFFFFFFFFCLL;
            v38 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v38 & 2) != 0 )
              break;
            v56 = v37;
            v37 = (_QWORD *)v12;
            if ( *(_QWORD **)(v12 + 16) != v56 )
              goto LABEL_47;
          }
        }
      }
      else
      {
        do
        {
          v12 = v55;
          v55 = *(_QWORD *)(v55 + 8);
        }
        while ( (*(_BYTE *)v55 & 2) == 0 );
      }
    }
  }
  while ( v131 != v12 );
LABEL_49:
  v39 = v177;
  v40 = v160;
  v160[0] = 0;
  v160[1] = 0;
  src = 0;
  v162 = 0;
  sub_125AC0(v177, v160, (__int64)v181, 0);
  v132 = (unsigned int *)(v186 + 4 * v187);
  if ( (unsigned int *)v186 == v132 )
    goto LABEL_139;
  v135 = (unsigned int *)v186;
  do
  {
    v44 = *v135;
    if ( (unsigned int)v44 >= *(_DWORD *)(v176 + 64) )
      sub_132180(v39, v40, v176, v41, v42, v43);
    v45 = *(_QWORD *)(*(_QWORD *)(v176 + 528) + 8 * v44);
    if ( !(unsigned __int8)sub_63F20(v160, (_QWORD *)(v45 + 200)) || !(unsigned __int8)sub_3149F0(v45 + 216, &src) )
      goto LABEL_53;
    v60 = *(unsigned int **)(v45 + 56);
    sub_63700(v163, (__int64)v160);
    v164 = 0;
    v165 = 0;
    if ( (_QWORD)v162 )
    {
      v96 = v162;
      v97 = 16 * v162;
      v164 = (void *)qalloc_or_throw();
      *((_QWORD *)&v165 + 1) = v96;
      memcpy(v164, src, v97);
      *(_QWORD *)&v165 = v96;
    }
    v155 = 0;
    v156 = 0;
    do
    {
      v168 = 0;
      v166 = 0;
      v167 = 0u;
      v61 = (unsigned int *)sub_126C30(v45, v163, (__int64)v60, 0, &v166, 0, 0x101u);
      v60 = v61;
      if ( !v61 )
      {
        if ( !under_debugger )
          sub_37EA20(52819);
        goto LABEL_239;
      }
      if ( v61 == *(unsigned int **)(v45 + 56) && (unsigned __int8)sub_32B8E0(*v61, 0)
        || !(unsigned __int8)sub_63F20(&v166, v163)
        || !(unsigned __int8)sub_3149F0(&v164, (char *)&v167 + 8) )
      {
        if ( *((_QWORD *)&v167 + 1) )
        {
          *(_QWORD *)&v168 = 0;
          qfree();
        }
        qfree();
LABEL_110:
        if ( v155 )
          qfree();
        if ( v164 )
        {
          *(_QWORD *)&v165 = 0;
          qfree();
        }
        qfree();
LABEL_53:
        if ( src )
        {
          *(_QWORD *)&v162 = 0;
          qfree();
        }
        qfree();
        goto LABEL_56;
      }
      v63 = v156;
      v64 = *v60;
      v65 = &v155[v156];
      if ( v155 == v65 )
        goto LABEL_161;
      v66 = v155;
      while ( (_DWORD)v64 != *v66 )
      {
        if ( v65 == ++v66 )
          goto LABEL_161;
      }
      if ( v66 == v65 )
      {
LABEL_161:
        v63 = v156 + 1;
        if ( *((_QWORD *)&v156 + 1) < (unsigned __int64)(v156 + 1) )
        {
          nc = *v60;
          v95 = qvector_reserve();
          v63 = v156;
          v155 = (_DWORD *)v95;
          v64 = nc;
          v65 = (_DWORD *)(v95 + 4 * v156);
        }
        *v65 = v64;
        *(_QWORD *)&v156 = v156 + 1;
      }
      sub_63D40(v163, &v166, v63, (__int64)v65, v64, v62);
      v40 = (__int64 *)&v167 + 1;
      sub_314710(&v164, (char *)&v167 + 8);
      if ( *((_QWORD *)&v167 + 1) )
      {
        *(_QWORD *)&v168 = 0;
        qfree();
      }
      qfree();
    }
    while ( !(unsigned __int8)sub_63F80(v163) || (_QWORD)v165 );
    v67 = &v155[v156];
    v68 = v155;
    if ( v155 != v67 )
    {
      while ( *v68 != 12 )
      {
        if ( v67 == ++v68 )
          goto LABEL_134;
      }
      if ( v68 != v67 )
      {
        v69 = v155;
        while ( *v69 != 13 )
        {
          if ( v67 == ++v69 )
            goto LABEL_134;
        }
        if ( v69 != v67 )
          goto LABEL_110;
      }
    }
LABEL_134:
    if ( v155 )
      qfree();
    if ( v164 )
    {
      *(_QWORD *)&v165 = 0;
      qfree();
    }
    v39 = v163[0];
    qfree();
    ++v135;
  }
  while ( v132 != v135 );
LABEL_139:
  if ( src )
  {
    *(_QWORD *)&v162 = 0;
    qfree();
  }
  v70 = (__int64 *)v160[0];
  qfree();
  v73 = (__int64 *)v187;
  v74 = v186 + 4 * v187;
  if ( v74 == v186 )
  {
    v78 = (unsigned int *)v153;
    v88 = v154;
    v79 = (unsigned int *)(v153 + 4 * v154);
    if ( v79 == (unsigned int *)v153 )
      goto LABEL_155;
    while ( 1 )
    {
LABEL_214:
      v118 = *v78;
      if ( *(_DWORD *)(*(_QWORD *)(v146 + 64) + 64LL) - 1 == (_DWORD)v118 )
      {
        v130 = 1;
      }
      else
      {
        if ( v172 )
          v190 = 1;
        v119 = v157;
        v120 = &v166;
        sub_63700(&v166, (__int64)v157);
        v125 = v159;
        *((_QWORD *)&v167 + 1) = 0;
        v168 = 0;
        if ( (_QWORD)v159 )
        {
          nd = 16 * v159;
          v126 = (__int64 *)qalloc_or_throw();
          v119 = (__int64 *)v158;
          v120 = v126;
          *((_QWORD *)&v167 + 1) = v126;
          *((_QWORD *)&v168 + 1) = v125;
          memcpy(v126, v158, nd);
          *(_QWORD *)&v168 = v125;
        }
        v115 = *(_QWORD *)(v146 + 64);
        if ( (unsigned int)v118 >= *(_DWORD *)(v115 + 64) )
          sub_132180(v120, v119, v121, v122, v123, v124);
        v73 = &v166;
        v116 = *(_QWORD **)(*(_QWORD *)(v115 + 528) + 8 * v118);
        v117 = sub_127730(v116, &v166, v116[6], 0, (__int64)v171);
        v70 = &v166;
        if ( v117 )
        {
          sub_92DA0((__int64)&v166);
LABEL_56:
          if ( v188 )
          {
            if ( v189 )
            {
              v46 = (char *)*((_QWORD *)v188 + 1);
              while ( v188 != v46 )
              {
                sub_11A5D0(*((char **)v46 + 3), v46 + 32);
                if ( (*(_QWORD *)v46 & 2) == 0 )
                {
                  v47 = (char *)*((_QWORD *)v46 + 2);
                  if ( (*v47 & 2) != 0 )
                  {
                    v57 = (char *)(*(_QWORD *)v46 & 0xFFFFFFFFFFFFFFFCLL);
                    v58 = *(_QWORD *)v57;
                    if ( (*(_QWORD *)v57 & 2) == 0 )
                    {
                      while ( v46 == *((char **)v57 + 2) )
                      {
                        v46 = v57;
                        v59 = v58 & 0xFFFFFFFFFFFFFFFCLL;
                        v58 = *(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v58 & 2) != 0 )
                        {
                          v46 = (char *)v59;
                          goto LABEL_62;
                        }
                        v57 = (char *)v59;
                      }
                    }
                    v46 = v57;
                  }
                  else
                  {
                    do
                    {
                      v46 = v47;
                      v47 = (char *)*((_QWORD *)v47 + 1);
                    }
                    while ( (*v47 & 2) == 0 );
                  }
                }
LABEL_62:
                ;
              }
            }
          }
          v48 = 0;
          goto LABEL_64;
        }
        sub_92DA0((__int64)&v166);
      }
      if ( v79 == ++v78 )
      {
        v80 = (unsigned int *)v186;
        v81 = (unsigned int *)(v186 + 4 * v187);
        if ( (unsigned int *)v186 != v81 )
          goto LABEL_149;
        goto LABEL_154;
      }
    }
  }
  v71 = (int *)v186;
  v75 = (__int64 *)v187;
  v74 = v186;
  v76 = 1;
  while ( 2 )
  {
    v77 = (_QWORD *)(*(_QWORD *)v134 + 24LL * *v71);
    v128 = (_QWORD *)*v77;
    if ( *v77 )
    {
      if ( v77[1] )
      {
        v98 = *(_QWORD **)(*v77 + 8LL);
        if ( (_QWORD *)*v77 != v98 )
        {
          v129 = v76;
          v152 = v75;
          v70 = (__int64 *)v185;
          v72 = v184;
          v99 = (_DWORD *)(v153 + 4 * v154);
          while ( 1 )
          {
            v133 = v98[4];
            if ( !v133 )
              goto LABEL_196;
            v100 = *((_BYTE *)v98 + 56);
            if ( v100 == 1 )
            {
              v139 = *((int *)v98 + 12);
            }
            else
            {
              if ( v100 != 5 )
              {
                if ( !under_debugger )
                  sub_37EA20(51893);
                goto LABEL_239;
              }
              v139 = v98[6];
            }
            v101 = *((int *)v98 + 16);
            if ( !(_QWORD)v185 )
              goto LABEL_196;
            v127 = (_DWORD **)(v98 + 3);
            n = v101 != 0;
            v102 = 0;
            v137 = v139 + v101 - 1;
            v103 = 0;
            while ( 1 )
            {
              v104 = (char *)(v184 + 16 * v103);
              v105 = *v104;
              if ( *v104 == 1 )
                break;
              if ( v105 == 5 )
              {
                v106 = *(_QWORD *)(*((_QWORD *)v104 + 1) + 8LL);
                goto LABEL_178;
              }
LABEL_175:
              v103 = ++v102;
              if ( v102 >= (unsigned __int64)v185 )
                goto LABEL_196;
            }
            v106 = *((int *)v104 + 2);
LABEL_178:
            if ( v100 != v105 )
              goto LABEL_175;
            v107 = *((int *)v104 + 1);
            if ( !v107 || !n || v137 < v106 || v106 + v107 - 1 < v139 )
              goto LABEL_175;
            v75 = v152;
            if ( v139 != v106 )
              goto LABEL_184;
            if ( v102 == -2 )
            {
LABEL_185:
              v76 = 0;
              break;
            }
            v108 = *v127;
            v109 = (__int64)&(*v127)[v133];
            if ( (_DWORD *)v109 != *v127 )
            {
              v75 = v152;
              while ( (_DWORD *)v153 != v99 )
              {
                v110 = (_DWORD *)v153;
                while ( *v108 != *v110 )
                {
                  if ( v99 == ++v110 )
                    goto LABEL_185;
                }
                if ( (_DWORD *)v109 == ++v108 )
                  goto LABEL_195;
              }
              goto LABEL_185;
            }
LABEL_195:
            if ( !v129 )
            {
LABEL_184:
              v75 = v152;
              goto LABEL_185;
            }
LABEL_196:
            if ( (*v98 & 2) == 0 )
            {
              v111 = (_QWORD *)v98[2];
              if ( (*(_BYTE *)v111 & 2) != 0 )
              {
                v112 = (_QWORD *)(*v98 & 0xFFFFFFFFFFFFFFFCLL);
                v113 = *v112;
                if ( (*v112 & 2) == 0 )
                {
                  while ( (_QWORD *)v112[2] == v98 )
                  {
                    v98 = v112;
                    v114 = v113 & 0xFFFFFFFFFFFFFFFCLL;
                    v113 = *(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v113 & 2) != 0 )
                    {
                      v98 = (_QWORD *)v114;
                      goto LABEL_199;
                    }
                    v112 = (_QWORD *)v114;
                  }
                }
                v98 = v112;
              }
              else
              {
                do
                {
                  v98 = v111;
                  v111 = (_QWORD *)v111[1];
                }
                while ( (*(_BYTE *)v111 & 2) == 0 );
              }
            }
LABEL_199:
            if ( v128 == v98 )
            {
              v76 = v129;
              v75 = v152;
              break;
            }
          }
        }
      }
    }
    if ( (int *)(v186 + 4 * v187) != ++v71 )
      continue;
    break;
  }
  v73 = v75;
  if ( !v76 )
    goto LABEL_56;
  v78 = (unsigned int *)v153;
  v79 = (unsigned int *)(v153 + 4 * v154);
  if ( (unsigned int *)v153 != v79 )
    goto LABEL_214;
  v80 = (unsigned int *)v186;
  v81 = (unsigned int *)(v186 + 4LL * (_QWORD)v75);
LABEL_149:
  v151 = v80;
  do
  {
    v82 = *v151;
    if ( (unsigned int)v82 >= *(_DWORD *)(v176 + 64) )
      sub_132180(v70, v73, v176, v71, v72, v74);
    v83 = *(_QWORD *)(*(_QWORD *)(v176 + 528) + 8 * v82);
    v84 = *(unsigned int **)(v83 + 56);
    if ( (unsigned __int8)sub_32B8E0(*v84, 0) )
      v84 = (unsigned int *)*((_QWORD *)v84 + 2);
    v85 = (__int64 *)j__qalloc_or_throw();
    v86 = *(_QWORD *)(*(_QWORD *)(v83 + 56) + 24LL);
    v85[4] = 0xFFFFFFFF00000000LL;
    v85[5] = 0;
    v85[6] = 0xFFFFFFFF00000000LL;
    v85[7] = 0;
    v85[8] = 0xFFFFFFFF00000000LL;
    v85[9] = 0;
    sub_32D4D0(v85, v86);
    *(_DWORD *)v85 = 4;
    sub_122C80((__int64)(v85 + 4), v181);
    sub_122C80((__int64)(v85 + 8), v182);
    v73 = v85;
    v70 = (__int64 *)v83;
    sub_A23D0(v83, v85, (__int64)v84);
    v87 = *(_DWORD *)(v83 + 24);
    ++v151;
    BYTE1(v87) &= ~2u;
    LOBYTE(v87) = v87 | 0x80;
    *(_DWORD *)(v83 + 24) = v87;
  }
  while ( v81 != v151 );
LABEL_154:
  v88 = v154;
  v78 = (unsigned int *)v153;
LABEL_155:
  v89 = &v78[v88];
  v90 = *(_DWORD *)(v146 + 24);
  BYTE1(v90) &= ~2u;
  LOBYTE(v90) = v90 | 0x80;
  for ( *(_DWORD *)(v146 + 24) = v90; v89 != v78; ++v78 )
  {
    v91 = *(_QWORD *)(v146 + 64);
    v92 = *v78;
    if ( (unsigned int)v92 >= *(_DWORD *)(v91 + 64) )
      sub_132180(v70, v146, v91, v89, v72, v74);
    v93 = *(_QWORD *)(*(_QWORD *)(v91 + 528) + 8 * v92);
    if ( *(_DWORD *)(v93 + 76) != 1 )
    {
      v94 = *(_DWORD *)(v93 + 24);
      BYTE1(v94) &= ~2u;
      LOBYTE(v94) = v94 | 0x80;
      *(_DWORD *)(v93 + 24) = v94;
    }
  }
  v48 = v130 + 1;
LABEL_64:
  if ( v158 )
  {
    v148 = v48;
    *(_QWORD *)&v159 = 0;
    qfree();
    v48 = v148;
  }
  v149 = v48;
  qfree();
  sub_103910(v145);
  sub_103910(v134);
  v49 = v149;
  if ( v153 )
  {
    qfree();
    v49 = v149;
  }
  v150 = v49;
  v171[0] = off_4DD2D0;
  sub_134120(&v175);
  return v150;
}
