__int64 __fastcall sub_13DD10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  __int128 v13; // rdi
  __int64 *v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // r10
  int **v17; // r13
  char v18; // si
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  unsigned __int64 v21; // r12
  bool v22; // r11
  int v23; // ecx
  __int64 v24; // rax
  char *v25; // rax
  char v26; // dl
  unsigned __int64 v27; // r9
  __int64 v28; // rax
  int *v29; // r12
  __int64 v30; // r15
  unsigned __int64 *v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _DWORD *v35; // r9
  __int64 v36; // r10
  int v37; // r8d
  _DWORD *v38; // rcx
  _DWORD *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 *v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // r13
  char *v49; // rbx
  char *v50; // rdx
  int v51; // eax
  int v52; // eax
  int *v53; // r12
  __int64 i; // r13
  _DWORD *v55; // rcx
  int v56; // r15d
  _DWORD *v57; // rax
  unsigned __int64 v58; // rdx
  _QWORD *v59; // rcx
  char *v60; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  unsigned int *v63; // rbx
  unsigned int *v64; // rax
  int v65; // r9d
  __int64 v66; // rdx
  __int64 v67; // r8
  _DWORD *v68; // rcx
  _DWORD *v69; // rax
  _DWORD *v70; // rdx
  _DWORD *v71; // rax
  _DWORD *v72; // rax
  __int64 v73; // rdi
  int *v74; // rcx
  __int64 v75; // r8
  __int64 *v76; // rsi
  __int64 v77; // r9
  __int64 *v78; // r15
  char v79; // al
  _QWORD *v80; // rdx
  unsigned int *v81; // rbx
  unsigned int *v82; // r13
  unsigned int *v83; // rbx
  unsigned int *v84; // r15
  __int64 v85; // rax
  __int64 v86; // r15
  size_t v87; // r14
  _QWORD *v88; // rbx
  _DWORD *v89; // rdx
  char v90; // r15
  __int64 v91; // r14
  int v92; // r13d
  __int64 v93; // rax
  char *v94; // rax
  char v95; // r12
  unsigned __int64 v96; // r14
  __int64 v97; // rax
  _DWORD *v98; // r13
  __int64 v99; // r14
  _DWORD *v100; // rax
  _QWORD *v101; // r12
  _QWORD *v102; // rax
  __int64 v103; // r12
  unsigned __int64 v104; // r13
  __int64 v105; // rdx
  __int64 v106; // rax
  _QWORD *v107; // rdi
  __int64 v108; // r12
  __int64 *v109; // rsi
  __int64 *v110; // rdi
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // r14
  __int64 *v116; // rax
  __int64 v117; // rax
  __int64 v118; // r12
  unsigned int *v119; // r13
  __int64 *v120; // rbx
  __int64 v121; // rsi
  int v122; // eax
  unsigned int *v123; // rcx
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rax
  __int64 v127; // rdx
  int v128; // eax
  _DWORD **v129; // [rsp+8h] [rbp-278h]
  _QWORD *v130; // [rsp+10h] [rbp-270h]
  char v131; // [rsp+2Eh] [rbp-252h]
  unsigned __int8 v132; // [rsp+2Fh] [rbp-251h]
  __int64 v133; // [rsp+30h] [rbp-250h]
  unsigned int *v134; // [rsp+30h] [rbp-250h]
  __int64 v135; // [rsp+30h] [rbp-250h]
  __int64 v136; // [rsp+38h] [rbp-248h]
  unsigned int *v137; // [rsp+40h] [rbp-240h]
  _DWORD *v138; // [rsp+40h] [rbp-240h]
  unsigned __int64 v139; // [rsp+40h] [rbp-240h]
  int v140; // [rsp+48h] [rbp-238h]
  unsigned __int64 v141; // [rsp+48h] [rbp-238h]
  size_t na; // [rsp+50h] [rbp-230h]
  size_t nb; // [rsp+50h] [rbp-230h]
  unsigned int nc; // [rsp+50h] [rbp-230h]
  bool n; // [rsp+50h] [rbp-230h]
  __int64 nd; // [rsp+50h] [rbp-230h]
  __int64 v147; // [rsp+58h] [rbp-228h]
  int v149; // [rsp+68h] [rbp-218h]
  int v150; // [rsp+68h] [rbp-218h]
  int v151; // [rsp+68h] [rbp-218h]
  unsigned int v152; // [rsp+68h] [rbp-218h]
  __int64 *v153; // [rsp+68h] [rbp-218h]
  unsigned int *v154; // [rsp+68h] [rbp-218h]
  __int64 v155; // [rsp+70h] [rbp-210h] BYREF
  __int128 v156; // [rsp+78h] [rbp-208h]
  _DWORD *v157; // [rsp+90h] [rbp-1F0h] BYREF
  __int128 v158; // [rsp+98h] [rbp-1E8h]
  __int64 v159[2]; // [rsp+B0h] [rbp-1D0h] BYREF
  void *v160; // [rsp+C0h] [rbp-1C0h]
  __int128 v161; // [rsp+C8h] [rbp-1B8h]
  __int64 v162[2]; // [rsp+E0h] [rbp-1A0h] BYREF
  void *src; // [rsp+F0h] [rbp-190h] BYREF
  __int128 v164; // [rsp+F8h] [rbp-188h]
  __int64 v165[2]; // [rsp+110h] [rbp-170h] BYREF
  void *v166; // [rsp+120h] [rbp-160h] BYREF
  __int128 v167; // [rsp+128h] [rbp-158h]
  __int64 v168; // [rsp+140h] [rbp-140h] BYREF
  __int128 v169; // [rsp+148h] [rbp-138h] BYREF
  __int128 v170; // [rsp+158h] [rbp-128h]
  unsigned __int64 v171; // [rsp+168h] [rbp-118h]
  char v172; // [rsp+170h] [rbp-110h]
  _QWORD v173[3]; // [rsp+180h] [rbp-100h] BYREF
  char v174; // [rsp+198h] [rbp-E8h]
  __int64 v175; // [rsp+1A0h] [rbp-E0h]
  char v176; // [rsp+1A8h] [rbp-D8h]
  __int64 (__fastcall **v177)(); // [rsp+1B0h] [rbp-D0h] BYREF
  __int64 v178; // [rsp+1B8h] [rbp-C8h]
  __int64 v179; // [rsp+1C0h] [rbp-C0h]
  __int64 v180; // [rsp+1C8h] [rbp-B8h]
  __int64 v181; // [rsp+1D0h] [rbp-B0h]
  char v182; // [rsp+1D8h] [rbp-A8h]
  unsigned __int8 *v183; // [rsp+1E0h] [rbp-A0h]
  unsigned __int8 *v184; // [rsp+1E8h] [rbp-98h]
  _QWORD *v185; // [rsp+1F0h] [rbp-90h]
  __int64 v186; // [rsp+1F8h] [rbp-88h] BYREF
  __int128 v187; // [rsp+200h] [rbp-80h]
  __int64 v188; // [rsp+210h] [rbp-70h] BYREF
  __int128 v189; // [rsp+218h] [rbp-68h]
  char *v190; // [rsp+228h] [rbp-58h]
  __int64 v191; // [rsp+230h] [rbp-50h]
  char v192; // [rsp+238h] [rbp-48h]
  unsigned __int64 v193; // [rsp+248h] [rbp-38h]

  v193 = __readfsqword(0x28u);
  if ( *(_BYTE *)a3 != 14 || *(_BYTE *)a4 != 1 || *(_DWORD *)(a4 + 4) != *(_DWORD *)(a3 + 4) )
  {
    if ( !under_debugger )
      sub_3835A0(50435);
LABEL_240:
    BUG();
  }
  if ( (**(_DWORD **)(a1 + 64) & 0x100000) != 0 )
    return 0;
  v132 = sub_11E770(a3);
  if ( v132 )
    return 0;
  v173[1] = 0;
  v173[0] = off_4D8258;
  v177 = off_4D8230;
  v185 = v173;
  v173[2] = 0;
  v179 = a1;
  v8 = *(_QWORD *)(a1 + 64);
  v174 = 0;
  v175 = 0;
  v176 = 0;
  v180 = 0;
  v181 = 0;
  v182 = 0;
  v183 = (unsigned __int8 *)a3;
  v184 = (unsigned __int8 *)a4;
  v186 = 0;
  v188 = 0;
  v190 = nullptr;
  v191 = 0;
  v178 = v8;
  v187 = 0;
  v189 = 0;
  sub_1341C0(&v186, a3);
  v192 = 0;
  v155 = 0;
  v9 = *(_QWORD **)(a1 + 64);
  v156 = 0;
  v10 = sub_66AE0(v9);
  v136 = sub_110320(v10, 0);
  if ( !v136 )
  {
    if ( !under_debugger )
      sub_3835A0(50446);
    goto LABEL_240;
  }
  ++*(_DWORD *)(v136 + 24);
  v11 = sub_66AE0(*(_QWORD **)(a1 + 64));
  v147 = sub_10FD80(v11, 0);
  if ( !v147 )
  {
    if ( !under_debugger )
      sub_3835A0(50446);
    goto LABEL_240;
  }
  ++*(_DWORD *)(v147 + 24);
  v149 = *(_DWORD *)(a1 + 72);
  v12 = *(_QWORD *)v136;
  sub_124BC0(a2 + 64, (unsigned __int8 *)a4);
  *(_QWORD *)&v13 = a1;
  v159[0] = 0;
  *((_QWORD *)&v13 + 1) = v159;
  v159[1] = 0;
  v160 = nullptr;
  v161 = 0;
  sub_1238E0(v13, a3, 1u, 0xFFFF0000);
  if ( (unsigned int)sub_129690((_QWORD *)a1, v159, *(_QWORD *)(a2 + 8), 0, (__int64)v173) )
    goto LABEL_56;
  v14 = (__int64 *)(v12 + 24LL * v149);
  v133 = *v14;
  if ( !*v14 )
    goto LABEL_49;
  if ( !v14[1] )
    goto LABEL_49;
  v15 = *(_QWORD *)(v133 + 8);
  if ( v15 == v133 )
    goto LABEL_49;
  do
  {
    v16 = *(_QWORD *)(v15 + 32);
    v17 = (int **)(v15 + 24);
    if ( !v16 )
      goto LABEL_80;
    v18 = *(_BYTE *)(v15 + 56);
    if ( v18 == 1 )
    {
      v19 = *(int *)(v15 + 48);
      goto LABEL_17;
    }
    if ( v18 != 5 )
    {
      if ( !under_debugger )
        sub_3835A0(51893);
      goto LABEL_240;
    }
    v19 = *(_QWORD *)(v15 + 48);
LABEL_17:
    v20 = *(int *)(v15 + 64);
    if ( !(_QWORD)v187 )
      goto LABEL_80;
    v21 = v19 + v20 - 1;
    v22 = v20 != 0;
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      v25 = (char *)(v186 + 16 * v24);
      v26 = *v25;
      if ( *v25 == 1 )
      {
        v27 = *((int *)v25 + 2);
        goto LABEL_23;
      }
      if ( v26 == 5 )
        break;
LABEL_20:
      v24 = ++v23;
      if ( v23 >= (unsigned __int64)v187 )
        goto LABEL_80;
    }
    v27 = *(_QWORD *)(*((_QWORD *)v25 + 1) + 8LL);
LABEL_23:
    if ( v18 != v26 )
      goto LABEL_20;
    v28 = *((int *)v25 + 1);
    if ( !v28 || !v22 || v21 < v27 || v27 + v28 - 1 < v19 )
      goto LABEL_20;
    if ( v19 != v27 || v23 == -2 )
      goto LABEL_56;
    v29 = *v17;
    v30 = (__int64)&(*v17)[v16];
    if ( *v17 != (int *)v30 )
    {
      while ( 1 )
      {
        v31 = (unsigned __int64 *)(*(_QWORD *)v147 + 24LL * *v29);
        v32 = *(_QWORD *)(v15 + 48);
        BYTE8(v170) = v18;
        v168 = 0;
        *(_QWORD *)&v170 = v32;
        v172 = 1;
        v171 = 0xFFFFFFFF00000001LL;
        v169 = 0;
        v33 = sub_104830(v31, (__int64)&v168);
        if ( v168 )
        {
          na = (size_t)v33;
          *(_QWORD *)&v169 = 0;
          qfree(v168);
          v33 = (_QWORD *)na;
        }
        if ( !v33 )
          goto LABEL_56;
        v34 = v33[1];
        if ( !v34 )
          goto LABEL_56;
        v35 = (_DWORD *)*v33;
        v36 = *v33 + 4 * v34;
        if ( *v33 != v36 )
        {
          do
          {
            v37 = *v35;
            if ( !*v35 )
              goto LABEL_56;
            if ( v37 != *(_DWORD *)(v179 + 72) )
            {
              v38 = (_DWORD *)(v188 + 4 * v189);
              if ( (_DWORD *)v188 == v38 )
                goto LABEL_69;
              v39 = (_DWORD *)v188;
              while ( v37 != *v39 )
              {
                if ( v38 == ++v39 )
                  goto LABEL_69;
              }
              if ( v38 == v39 )
              {
LABEL_69:
                if ( *((_QWORD *)&v189 + 1) < (unsigned __int64)(v189 + 1) )
                {
                  v138 = v35;
                  v140 = *v35;
                  nb = v36;
                  v188 = qvector_reserve(&v188, v188, v189 + 1, 4);
                  v35 = v138;
                  v37 = v140;
                  v36 = nb;
                  v38 = (_DWORD *)(v188 + 4 * v189);
                }
                *v38 = v37;
                *(_QWORD *)&v189 = v189 + 1;
              }
            }
            ++v35;
          }
          while ( (_DWORD *)v36 != v35 );
        }
        if ( (int *)v30 == ++v29 )
          break;
        v18 = *(_BYTE *)(v15 + 56);
      }
      v53 = *v17;
      for ( i = (__int64)&(*v17)[*(_QWORD *)(v15 + 32)]; (int *)i != v53; ++v53 )
      {
        v55 = (_DWORD *)(v155 + 4 * v156);
        v56 = *v53;
        if ( (_DWORD *)v155 == v55 )
        {
LABEL_85:
          if ( *((_QWORD *)&v156 + 1) < (unsigned __int64)(v156 + 1) )
          {
            v155 = qvector_reserve(&v155, v155, v156 + 1, 4);
            v55 = (_DWORD *)(v155 + 4 * v156);
          }
          *v55 = v56;
          *(_QWORD *)&v156 = v156 + 1;
        }
        else
        {
          v57 = (_DWORD *)v155;
          while ( *v53 != *v57 )
          {
            if ( v55 == ++v57 )
            {
              v56 = *v53;
              goto LABEL_85;
            }
          }
          v56 = *v53;
          if ( v55 == v57 )
            goto LABEL_85;
        }
      }
    }
LABEL_80:
    if ( (*(_QWORD *)v15 & 2) == 0 )
    {
      v58 = *(_QWORD *)(v15 + 16);
      if ( (*(_BYTE *)v58 & 2) != 0 )
      {
        v40 = (_QWORD *)(*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL);
        v41 = *v40;
        if ( (*v40 & 2) != 0 || v40[2] != v15 )
        {
LABEL_47:
          v15 = (unsigned __int64)v40;
        }
        else
        {
          while ( 1 )
          {
            v15 = v41 & 0xFFFFFFFFFFFFFFFCLL;
            v41 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v41 & 2) != 0 )
              break;
            v59 = v40;
            v40 = (_QWORD *)v15;
            if ( *(_QWORD **)(v15 + 16) != v59 )
              goto LABEL_47;
          }
        }
      }
      else
      {
        do
        {
          v15 = v58;
          v58 = *(_QWORD *)(v58 + 8);
        }
        while ( (*(_BYTE *)v58 & 2) == 0 );
      }
    }
  }
  while ( v133 != v15 );
LABEL_49:
  v42 = v179;
  v43 = v162;
  v162[0] = 0;
  v162[1] = 0;
  src = nullptr;
  v164 = 0;
  sub_127A20(v179, v162, (__int64)v183, 0);
  v134 = (unsigned int *)(v188 + 4 * v189);
  if ( (unsigned int *)v188 == v134 )
    goto LABEL_139;
  v137 = (unsigned int *)v188;
  do
  {
    v47 = *v137;
    if ( (unsigned int)v47 >= *(_DWORD *)(v178 + 64) )
      sub_1340F0(v42, v43, v178, v44, v45, v46);
    v48 = *(_QWORD *)(*(_QWORD *)(v178 + 528) + 8 * v47);
    if ( !(unsigned __int8)sub_64220(v162, (_QWORD *)(v48 + 200)) || !(unsigned __int8)sub_318300(v48 + 216, &src) )
      goto LABEL_53;
    v63 = *(unsigned int **)(v48 + 56);
    sub_63A00(v165, (__int64)v162);
    v166 = nullptr;
    v167 = 0;
    if ( (_QWORD)v164 )
    {
      v86 = v164;
      v87 = 16 * v164;
      v166 = (void *)qalloc_or_throw(16 * v164);
      *((_QWORD *)&v167 + 1) = v86;
      memcpy(v166, src, v87);
      *(_QWORD *)&v167 = v86;
    }
    v157 = nullptr;
    v158 = 0;
    do
    {
      v170 = 0;
      v168 = 0;
      v169 = 0u;
      v64 = (unsigned int *)sub_128B90(v48, v165, (__int64)v63, 0, &v168, 0, 0x101u);
      v63 = v64;
      if ( !v64 )
      {
        if ( !under_debugger )
          sub_3835A0(52819);
        goto LABEL_240;
      }
      if ( v64 == *(unsigned int **)(v48 + 56) && (unsigned __int8)sub_32F060(*v64, 0)
        || !(unsigned __int8)sub_64220(&v168, v165)
        || !(unsigned __int8)sub_318300(&v166, (char *)&v169 + 8) )
      {
        if ( *((_QWORD *)&v169 + 1) )
        {
          *(_QWORD *)&v170 = 0;
          qfree(*((_QWORD *)&v169 + 1));
        }
        qfree(v168);
LABEL_110:
        if ( v157 )
        {
          *(_QWORD *)&v158 = 0;
          qfree(v157);
        }
        if ( v166 )
        {
          *(_QWORD *)&v167 = 0;
          qfree(v166);
        }
        qfree(v165[0]);
LABEL_53:
        if ( src )
        {
          *(_QWORD *)&v164 = 0;
          qfree(src);
        }
        qfree(v162[0]);
        goto LABEL_56;
      }
      v66 = v158;
      v67 = *v63;
      v68 = &v157[v158];
      if ( v157 == v68 )
        goto LABEL_149;
      v69 = v157;
      while ( (_DWORD)v67 != *v69 )
      {
        if ( v68 == ++v69 )
          goto LABEL_149;
      }
      if ( v69 == v68 )
      {
LABEL_149:
        v66 = v158 + 1;
        if ( *((_QWORD *)&v158 + 1) < (unsigned __int64)(v158 + 1) )
        {
          nc = *v63;
          v85 = qvector_reserve(&v157, v157, v66, 4);
          v66 = v158;
          v157 = (_DWORD *)v85;
          v67 = nc;
          v68 = (_DWORD *)(v85 + 4 * v158);
        }
        *v68 = v67;
        *(_QWORD *)&v158 = v158 + 1;
      }
      sub_64040(v165, &v168, v66, (__int64)v68, v67, v65);
      v43 = (__int64 *)&v169 + 1;
      sub_318020(&v166, (char *)&v169 + 8);
      if ( *((_QWORD *)&v169 + 1) )
      {
        *(_QWORD *)&v170 = 0;
        qfree(*((_QWORD *)&v169 + 1));
      }
      qfree(v168);
    }
    while ( !(unsigned __int8)sub_64280(v165) || (_QWORD)v167 );
    v70 = &v157[v158];
    v71 = v157;
    if ( v157 != v70 )
    {
      while ( *v71 != 12 )
      {
        if ( v70 == ++v71 )
          goto LABEL_134;
      }
      if ( v71 != v70 )
      {
        v72 = v157;
        while ( *v72 != 13 )
        {
          if ( v70 == ++v72 )
            goto LABEL_134;
        }
        if ( v72 != v70 )
          goto LABEL_110;
      }
    }
LABEL_134:
    if ( v157 )
    {
      *(_QWORD *)&v158 = 0;
      qfree(v157);
    }
    if ( v166 )
    {
      *(_QWORD *)&v167 = 0;
      qfree(v166);
    }
    v42 = v165[0];
    qfree(v165[0]);
    ++v137;
  }
  while ( v134 != v137 );
LABEL_139:
  if ( src )
  {
    *(_QWORD *)&v164 = 0;
    qfree(src);
  }
  v73 = v162[0];
  qfree(v162[0]);
  v76 = (__int64 *)v189;
  v77 = v188 + 4 * v189;
  if ( v77 == v188 )
  {
    v81 = (unsigned int *)v155;
    v105 = v156;
    v82 = (unsigned int *)(v155 + 4 * v156);
    if ( v82 == (unsigned int *)v155 )
      goto LABEL_218;
    while ( 1 )
    {
LABEL_204:
      v108 = *v81;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 == (_DWORD)v108 )
      {
        v132 = 1;
      }
      else
      {
        if ( v174 )
          v192 = 1;
        v109 = v159;
        v110 = &v168;
        sub_63A00(&v168, (__int64)v159);
        v115 = v161;
        *((_QWORD *)&v169 + 1) = 0;
        v170 = 0;
        if ( (_QWORD)v161 )
        {
          nd = 16 * v161;
          v116 = (__int64 *)qalloc_or_throw(16 * v161);
          v109 = (__int64 *)v160;
          v110 = v116;
          *((_QWORD *)&v169 + 1) = v116;
          *((_QWORD *)&v170 + 1) = v115;
          memcpy(v116, v160, nd);
          *(_QWORD *)&v170 = v115;
        }
        v106 = *(_QWORD *)(a1 + 64);
        if ( (unsigned int)v108 >= *(_DWORD *)(v106 + 64) )
          sub_1340F0(v110, v109, v111, v112, v113, v114);
        v76 = &v168;
        v107 = *(_QWORD **)(*(_QWORD *)(v106 + 528) + 8 * v108);
        if ( (unsigned int)sub_129690(v107, &v168, v107[6], 0, (__int64)v173) )
        {
          sub_93580(&v168);
LABEL_56:
          if ( v190 )
          {
            if ( v191 )
            {
              v49 = *((char **)v190 + 1);
              while ( v190 != v49 )
              {
                sub_11C450(*((char **)v49 + 3), v49 + 32);
                if ( (*(_QWORD *)v49 & 2) == 0 )
                {
                  v50 = *((char **)v49 + 2);
                  if ( (*v50 & 2) != 0 )
                  {
                    v60 = (char *)(*(_QWORD *)v49 & 0xFFFFFFFFFFFFFFFCLL);
                    v61 = *(_QWORD *)v60;
                    if ( (*(_QWORD *)v60 & 2) == 0 )
                    {
                      while ( v49 == *((char **)v60 + 2) )
                      {
                        v49 = v60;
                        v62 = v61 & 0xFFFFFFFFFFFFFFFCLL;
                        v61 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v61 & 2) != 0 )
                        {
                          v49 = (char *)v62;
                          goto LABEL_62;
                        }
                        v60 = (char *)v62;
                      }
                    }
                    v49 = v60;
                  }
                  else
                  {
                    do
                    {
                      v49 = v50;
                      v50 = *((char **)v50 + 1);
                    }
                    while ( (*v50 & 2) == 0 );
                  }
                }
LABEL_62:
                ;
              }
            }
          }
          v51 = 0;
          goto LABEL_64;
        }
        if ( *((_QWORD *)&v169 + 1) )
        {
          *(_QWORD *)&v170 = 0;
          qfree(*((_QWORD *)&v169 + 1));
        }
        v73 = v168;
        qfree(v168);
      }
      if ( v82 == ++v81 )
      {
        v83 = (unsigned int *)v188;
        v84 = (unsigned int *)(v188 + 4 * v189);
        if ( (unsigned int *)v188 != v84 )
          goto LABEL_212;
        goto LABEL_217;
      }
    }
  }
  v74 = (int *)v188;
  v78 = (__int64 *)v189;
  v77 = v188;
  v79 = 1;
  while ( 2 )
  {
    v80 = (_QWORD *)(*(_QWORD *)v136 + 24LL * *v74);
    v130 = (_QWORD *)*v80;
    if ( *v80 )
    {
      if ( v80[1] )
      {
        v88 = *(_QWORD **)(*v80 + 8LL);
        if ( (_QWORD *)*v80 != v88 )
        {
          v131 = v79;
          v153 = v78;
          v73 = v187;
          v75 = v186;
          v89 = (_DWORD *)(v155 + 4 * v156);
          while ( 1 )
          {
            v135 = v88[4];
            if ( !v135 )
              goto LABEL_184;
            v90 = *((_BYTE *)v88 + 56);
            if ( v90 == 1 )
            {
              v141 = *((int *)v88 + 12);
            }
            else
            {
              if ( v90 != 5 )
              {
                if ( !under_debugger )
                  sub_3835A0(51893);
                goto LABEL_240;
              }
              v141 = v88[6];
            }
            v91 = *((int *)v88 + 16);
            if ( !(_QWORD)v187 )
              goto LABEL_184;
            v129 = (_DWORD **)(v88 + 3);
            n = v91 != 0;
            v92 = 0;
            v139 = v141 + v91 - 1;
            v93 = 0;
            while ( 1 )
            {
              v94 = (char *)(v186 + 16 * v93);
              v95 = *v94;
              if ( *v94 == 1 )
                break;
              if ( v95 == 5 )
              {
                v96 = *(_QWORD *)(*((_QWORD *)v94 + 1) + 8LL);
                goto LABEL_166;
              }
LABEL_163:
              v93 = ++v92;
              if ( v92 >= (unsigned __int64)v187 )
                goto LABEL_184;
            }
            v96 = *((int *)v94 + 2);
LABEL_166:
            if ( v90 != v95 )
              goto LABEL_163;
            v97 = *((int *)v94 + 1);
            if ( !v97 || !n || v139 < v96 || v96 + v97 - 1 < v141 )
              goto LABEL_163;
            v78 = v153;
            if ( v141 != v96 )
              goto LABEL_172;
            if ( v92 == -2 )
            {
LABEL_173:
              v79 = 0;
              break;
            }
            v98 = *v129;
            v99 = (__int64)&(*v129)[v135];
            if ( (_DWORD *)v99 != *v129 )
            {
              v78 = v153;
              while ( (_DWORD *)v155 != v89 )
              {
                v100 = (_DWORD *)v155;
                while ( *v98 != *v100 )
                {
                  if ( v89 == ++v100 )
                    goto LABEL_173;
                }
                if ( (_DWORD *)v99 == ++v98 )
                  goto LABEL_183;
              }
              goto LABEL_173;
            }
LABEL_183:
            if ( !v131 )
            {
LABEL_172:
              v78 = v153;
              goto LABEL_173;
            }
LABEL_184:
            if ( (*v88 & 2) == 0 )
            {
              v101 = (_QWORD *)v88[2];
              if ( (*(_BYTE *)v101 & 2) != 0 )
              {
                v102 = (_QWORD *)(*v88 & 0xFFFFFFFFFFFFFFFCLL);
                v103 = *v102;
                if ( (*v102 & 2) == 0 )
                {
                  while ( (_QWORD *)v102[2] == v88 )
                  {
                    v88 = v102;
                    v104 = v103 & 0xFFFFFFFFFFFFFFFCLL;
                    v103 = *(_QWORD *)(v103 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v103 & 2) != 0 )
                    {
                      v88 = (_QWORD *)v104;
                      goto LABEL_187;
                    }
                    v102 = (_QWORD *)v104;
                  }
                }
                v88 = v102;
              }
              else
              {
                do
                {
                  v88 = v101;
                  v101 = (_QWORD *)v101[1];
                }
                while ( (*(_BYTE *)v101 & 2) == 0 );
              }
            }
LABEL_187:
            if ( v130 == v88 )
            {
              v79 = v131;
              v78 = v153;
              break;
            }
          }
        }
      }
    }
    if ( (int *)(v188 + 4 * v189) != ++v74 )
      continue;
    break;
  }
  v76 = v78;
  if ( !v79 )
    goto LABEL_56;
  v81 = (unsigned int *)v155;
  v82 = (unsigned int *)(v155 + 4 * v156);
  if ( (unsigned int *)v155 != v82 )
    goto LABEL_204;
  v83 = (unsigned int *)v188;
  v84 = (unsigned int *)(v188 + 4LL * (_QWORD)v78);
LABEL_212:
  v154 = v83;
  do
  {
    v117 = *v154;
    if ( (unsigned int)v117 >= *(_DWORD *)(v178 + 64) )
      sub_1340F0(v73, v76, v178, v74, v75, v77);
    v118 = *(_QWORD *)(*(_QWORD *)(v178 + 528) + 8 * v117);
    v119 = *(unsigned int **)(v118 + 56);
    if ( (unsigned __int8)sub_32F060(*v119, 0) )
      v119 = *((unsigned int **)v119 + 2);
    v120 = (__int64 *)j__qalloc_or_throw(80);
    v121 = *(_QWORD *)(*(_QWORD *)(v118 + 56) + 24LL);
    v120[4] = 0xFFFFFFFF00000000LL;
    v120[5] = 0;
    v120[6] = 0xFFFFFFFF00000000LL;
    v120[7] = 0;
    v120[8] = 0xFFFFFFFF00000000LL;
    v120[9] = 0;
    sub_330C90(v120, v121);
    *(_DWORD *)v120 = 4;
    sub_124BC0((__int64)(v120 + 4), v183);
    sub_124BC0((__int64)(v120 + 8), v184);
    v76 = v120;
    v73 = v118;
    sub_A2BA0(v118, v120, (__int64)v119);
    v122 = *(_DWORD *)(v118 + 24);
    ++v154;
    BYTE1(v122) &= ~2u;
    LOBYTE(v122) = v122 | 0x80;
    *(_DWORD *)(v118 + 24) = v122;
  }
  while ( v84 != v154 );
LABEL_217:
  v105 = v156;
  v81 = (unsigned int *)v155;
LABEL_218:
  v123 = &v81[v105];
  v124 = *(_DWORD *)(a1 + 24);
  BYTE1(v124) &= ~2u;
  LOBYTE(v124) = v124 | 0x80;
  for ( *(_DWORD *)(a1 + 24) = v124; v123 != v81; ++v81 )
  {
    v125 = *(_QWORD *)(a1 + 64);
    v126 = *v81;
    if ( (unsigned int)v126 >= *(_DWORD *)(v125 + 64) )
      sub_1340F0(v73, a1, v125, v123, v75, v77);
    v127 = *(_QWORD *)(*(_QWORD *)(v125 + 528) + 8 * v126);
    if ( *(_DWORD *)(v127 + 76) != 1 )
    {
      v128 = *(_DWORD *)(v127 + 24);
      BYTE1(v128) &= ~2u;
      LOBYTE(v128) = v128 | 0x80;
      *(_DWORD *)(v127 + 24) = v128;
    }
  }
  v51 = v132 + 1;
LABEL_64:
  if ( v160 )
  {
    v150 = v51;
    *(_QWORD *)&v161 = 0;
    qfree(v160);
    v51 = v150;
  }
  v151 = v51;
  qfree(v159[0]);
  sub_104850(v147);
  sub_104850(v136);
  v52 = v151;
  if ( v155 )
  {
    *(_QWORD *)&v156 = 0;
    qfree(v155);
    v52 = v151;
  }
  v152 = v52;
  v173[0] = off_4D8258;
  sub_136080(&v177);
  return v152;
}
