__int64 __fastcall sub_43ADB0(__int64 a1, const char *a2, int a3, __int64 a4)
{
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // r12d
  __int64 v11; // rax
  int v12; // r9d
  int v13; // edx
  _BYTE *v14; // r8
  int v15; // edx
  __int64 v16; // rdi
  bool v17; // zf
  int v18; // eax
  const void *v19; // rsi
  __int64 v20; // rcx
  _DWORD *v21; // r12
  int v22; // r14d
  bool v23; // cc
  int v24; // r8d
  int v25; // r14d
  int v26; // eax
  __int64 v27; // r12
  int v28; // r13d
  int v29; // eax
  size_t v30; // r12
  __int64 v31; // rcx
  int *v32; // rax
  _BYTE *v33; // r8
  int v34; // edx
  int v35; // eax
  __int64 v36; // r13
  int v37; // r15d
  int v38; // r12d
  int v39; // eax
  int v40; // edx
  __int64 v41; // rax
  int v42; // ebx
  int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // r14
  int v46; // r9d
  int v47; // r12d
  _BYTE *v48; // rsi
  __int64 v49; // rbx
  int v50; // eax
  int v51; // edx
  _BYTE *v52; // rcx
  int v53; // r14d
  int v54; // edx
  __int64 v55; // r12
  __int64 v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rbx
  unsigned int (__fastcall *v60)(__int64, __int64, __int64, __int64); // rax
  _BYTE *v61; // r8
  unsigned int v62; // r13d
  unsigned __int8 v63; // di
  int v64; // edx
  int v65; // ecx
  int v66; // eax
  unsigned int v67; // eax
  int v68; // edx
  __int64 v69; // rcx
  unsigned __int8 v70; // r8
  int v71; // edx
  int v72; // esi
  int v73; // eax
  unsigned int v74; // eax
  __int64 v75; // rax
  int v76; // eax
  int v77; // r13d
  _BYTE *v78; // r8
  _BYTE *v79; // r8
  int v80; // ecx
  int v81; // eax
  int v82; // eax
  _BYTE *v83; // r8
  __int64 v84; // r8
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // ebx
  __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rax
  _BYTE *v93; // rsi
  int v94; // edx
  int **v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // rdx
  int v98; // eax
  _BYTE *v99; // r8
  _BYTE *v100; // r8
  _BYTE *v101; // r8
  __int64 v102; // rdx
  _BYTE *v103; // r8
  _BYTE *v104; // r8
  char v105; // al
  _BYTE *v106; // r8
  __int16 v107; // ax
  _BYTE *v108; // r8
  _BYTE *v109; // r8
  int v110; // eax
  int v111; // eax
  _BYTE *v112; // r8
  int v113; // edx
  int v114; // eax
  int v115; // eax
  void *v116; // rax
  __int64 v117; // rbx
  _BYTE *v118; // r8
  _BYTE *v119; // r8
  _BYTE *v120; // r8
  __int64 v121; // rax
  int v122; // edx
  __int64 v123; // rcx
  _BYTE *v124; // r8
  int v125; // eax
  _BYTE *v126; // r8
  _BYTE *v127; // r8
  _BYTE *v128; // r8
  _BYTE *v130; // r8
  __int64 v131; // rax
  __int64 v132; // r8
  int v133; // eax
  __int64 v134; // rdx
  unsigned int v135; // eax
  _BYTE *v136; // r8
  _BYTE *v137; // r8
  _BYTE *v138; // r8
  _BYTE *v139; // r8
  __int64 v140; // rax
  __int64 v141; // r8
  __int64 v142; // rax
  int v143; // ebx
  _BYTE *v144; // r8
  _BYTE *v145; // r8
  _BYTE *v146; // r8
  _BYTE *v147; // r8
  _BYTE *v148; // r8
  int v149; // edx
  int v150; // eax
  _BYTE *v151; // r8
  _BYTE *v152; // r8
  __int64 v153; // [rsp+10h] [rbp-1D8h]
  int v154; // [rsp+28h] [rbp-1C0h]
  int v155; // [rsp+2Ch] [rbp-1BCh]
  __int64 v156; // [rsp+30h] [rbp-1B8h]
  int *v157; // [rsp+38h] [rbp-1B0h]
  int v158; // [rsp+44h] [rbp-1A4h]
  _BYTE *v159; // [rsp+48h] [rbp-1A0h]
  int v160; // [rsp+50h] [rbp-198h]
  int v161; // [rsp+54h] [rbp-194h]
  __int64 v162; // [rsp+58h] [rbp-190h]
  __int64 v163; // [rsp+60h] [rbp-188h]
  int v164; // [rsp+68h] [rbp-180h]
  int v165; // [rsp+6Ch] [rbp-17Ch]
  __int64 v166; // [rsp+70h] [rbp-178h]
  char *v167; // [rsp+78h] [rbp-170h]
  __int64 v168; // [rsp+80h] [rbp-168h]
  int v169; // [rsp+88h] [rbp-160h]
  int v170; // [rsp+8Ch] [rbp-15Ch]
  char v173[4]; // [rsp+A4h] [rbp-144h] BYREF
  int *v174; // [rsp+A8h] [rbp-140h] BYREF
  int i; // [rsp+B4h] [rbp-134h] BYREF
  __int64 v176; // [rsp+B8h] [rbp-130h]
  int *v177; // [rsp+C0h] [rbp-128h] BYREF
  int v178; // [rsp+CCh] [rbp-11Ch] BYREF
  _QWORD v179[35]; // [rsp+D0h] [rbp-118h] BYREF

  v169 = -1;
  v170 = -1;
  v168 = *(_QWORD *)(a4 + 120);
  v163 = *(_QWORD *)(a4 + 3264);
  v162 = sub_4495F0(a1, 576);
  if ( !*(_QWORD *)a4 )
  {
    sub_47D740((unsigned int)"TclCompileScript() called on uninitialized CompileEnv", 576, v6, v7, v8, v9);
    sub_49EDC0(v179);
    if ( a3 >= 0 )
      goto LABEL_3;
LABEL_139:
    a3 = strlen(a2);
    goto LABEL_3;
  }
  sub_49EDC0(v179);
  if ( a3 < 0 )
    goto LABEL_139;
LABEL_3:
  v10 = 1;
  sub_48B350(a1);
  v11 = *(_QWORD *)(a4 + 24);
  v166 = 0;
  if ( v11 )
    v166 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8LL);
  v165 = a3;
  v167 = (char *)a2;
  v178 = *(_DWORD *)(a4 + 3272);
  v177 = *(int **)(a4 + 3288);
  while ( !(unsigned int)sub_47E270(a1, v167, (unsigned int)v165, 0, v162) )
  {
    v13 = *(_DWORD *)(v162 + 28);
    if ( v13 > 0 )
    {
      v161 = 0;
      if ( v10 )
      {
        v14 = *(_BYTE **)(a4 + 120);
        v19 = *(const void **)(a4 + 112);
      }
      else
      {
        v14 = *(_BYTE **)(a4 + 120);
        if ( v14 == *(_BYTE **)(a4 + 128) )
        {
          sub_439150(a4);
          v14 = *(_BYTE **)(a4 + 120);
        }
        *v14 = 3;
        *(_DWORD *)(a4 + 3276) = 0;
        v15 = dword_65446C;
        v16 = *(_QWORD *)(a4 + 120) + 1LL;
        v17 = dword_65446C == 0;
        LODWORD(v14) = *(_DWORD *)(a4 + 120) + 1;
        *(_QWORD *)(a4 + 120) = v16;
        if ( !v17 )
        {
          if ( v15 == 0x80000000 )
          {
            v18 = *(_DWORD *)(a4 + 48);
            v15 = 1;
          }
          else if ( v15 < 0 )
          {
            v18 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v18 )
              *(_DWORD *)(a4 + 44) = v18;
          }
          else
          {
            v18 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v15 + v18;
        }
        v19 = *(const void **)(a4 + 112);
        *(_DWORD *)(16LL * v170 + *(_QWORD *)(a4 + 192) + 4) = v16 - (_DWORD)v19 - v169;
        v13 = *(_DWORD *)(v162 + 28);
      }
      v20 = *(_QWORD *)(v162 + 16);
      v21 = *(_DWORD **)(v162 + 32);
      v22 = 0;
      v164 = *(_DWORD *)(v162 + 24) - (*(_QWORD *)(v162 + 80) == v20 + *(int *)(v162 + 24) - 1);
      v23 = v13 <= 0;
      while ( !v23 )
      {
        if ( *v21 == 256 )
        {
          v161 = 1;
          break;
        }
        v23 = v13 <= ++v22;
        v21 += 6 * v21[5] + 6;
      }
      v24 = (_DWORD)v14 - (_DWORD)v19;
      v25 = v20 - *(_DWORD *)(a4 + 8);
      v169 = v24;
      v160 = *(_DWORD *)(a4 + 32);
      *(_DWORD *)(a4 + 32) = v160 + 1;
      v170 = v160;
      if ( v160 < 0 || v160 + 1 <= v160 )
      {
        LODWORD(v19) = v160;
        sub_47D740((unsigned int)"EnterCmdStartData: bad command index %d", v160, v160, v20, v24, v12);
      }
      v26 = *(_DWORD *)(a4 + 200);
      if ( v26 > v160 )
      {
        v31 = *(_QWORD *)(a4 + 192);
      }
      else
      {
        v27 = v26;
        v28 = 2 * v26;
        v29 = 32 * v26;
        v30 = 16 * v27;
        if ( *(_DWORD *)(a4 + 204) )
        {
          LODWORD(v19) = v29;
          v31 = sub_40FC10(*(void **)(a4 + 192), v29);
          *(_QWORD *)(a4 + 192) = v31;
        }
        else
        {
          v116 = (void *)sub_40FB00(v29);
          v19 = *(const void **)(a4 + 192);
          v117 = (__int64)v116;
          memcpy(v116, v19, v30);
          v31 = v117;
          *(_QWORD *)(a4 + 192) = v117;
          *(_DWORD *)(a4 + 204) = 1;
        }
        *(_DWORD *)(a4 + 200) = v28;
      }
      if ( v160 > 0 && *(_DWORD *)(16LL * v160 + v31 - 16) > v169 )
      {
        sub_47D740(
          (unsigned int)"EnterCmdStartData: cmd map not sorted by code offset",
          (_DWORD)v19,
          v169,
          v31,
          v24,
          v12);
        v31 = *(_QWORD *)(a4 + 192);
      }
      v32 = (int *)(v31 + 16LL * v160);
      v32[2] = v25;
      v32[3] = -1;
      *v32 = v169;
      v32[1] = -1;
      if ( v161 )
      {
        v33 = *(_BYTE **)(a4 + 120);
        if ( v33 == *(_BYTE **)(a4 + 128) )
        {
          sub_439150(a4);
          v33 = *(_BYTE **)(a4 + 120);
        }
        *v33 = 100;
        *(_DWORD *)(a4 + 3276) = 0;
        v34 = dword_65508C;
        ++*(_QWORD *)(a4 + 120);
        if ( v34 )
        {
          if ( v34 == 0x80000000 )
          {
            v35 = *(_DWORD *)(a4 + 48);
            v34 = 1;
          }
          else if ( v34 < 0 )
          {
            v35 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v35 )
              *(_DWORD *)(a4 + 44) = v35;
          }
          else
          {
            v35 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v34 + v35;
        }
      }
      sub_409C10(&v178, v167, *(_QWORD *)(v162 + 16));
      sub_409C30(&v178, &v177, *(_QWORD *)(v162 + 16) - *(_DWORD *)(a4 + 8));
      v36 = *(_QWORD *)(v162 + 32);
      v37 = *(_DWORD *)(v162 + 28);
      v159 = *(_BYTE **)(v162 + 16);
      v158 = v178;
      v38 = (_DWORD)v159 - *(_DWORD *)(a4 + 8);
      v39 = *(_DWORD *)(v163 + 28);
      v40 = *(_DWORD *)(v163 + 24);
      v157 = v177;
      if ( v39 < v40 )
      {
        v44 = *(_QWORD *)(v163 + 16);
      }
      else
      {
        v41 = v40;
        v42 = 1;
        v43 = 2 * v40;
        if ( v41 )
          v42 = v43;
        v44 = sub_40FC10(*(void **)(v163 + 16), 24 * v42);
        *(_QWORD *)(v163 + 16) = v44;
        v39 = *(_DWORD *)(v163 + 28);
        *(_DWORD *)(v163 + 24) = v42;
      }
      v45 = v44 + 24LL * v39;
      *(_DWORD *)v45 = v38;
      *(_QWORD *)(v45 + 8) = sub_40FB00(4 * v37);
      *(_QWORD *)(v45 + 16) = sub_40FB00(8 * v37);
      *(_DWORD *)(v45 + 4) = v37;
      v156 = sub_40FB00(4 * v37);
      v47 = 0;
      v48 = v159;
      v174 = v157;
      for ( i = v158; v47 < v37; v36 += 24LL * *(int *)(v36 + 20) + 24 )
      {
        v49 = v47;
        sub_409C10(&i, v48, *(_QWORD *)(v36 + 8));
        sub_409C30(&i, &v174, *(_QWORD *)(v36 + 8) - *(_DWORD *)(a4 + 8));
        v50 = sub_439010(v36, 0);
        v51 = -1;
        if ( v50 )
          v51 = i;
        v48 = *(_BYTE **)(v36 + 8);
        ++v47;
        *(_DWORD *)(v156 + 4 * v49) = v51;
        *(_DWORD *)(*(_QWORD *)(v45 + 8) + 4 * v49) = i;
        *(_QWORD *)(*(_QWORD *)(v45 + 16) + 8 * v49) = v174;
      }
      LODWORD(v52) = v163;
      v53 = 0;
      v54 = *(_DWORD *)(v163 + 28);
      v176 = v156;
      v55 = *(_QWORD *)(v162 + 32);
      *(_DWORD *)(v163 + 28) = v54 + 1;
      if ( *(int *)(v162 + 28) > 0 )
      {
        v153 = v54;
        v56 = 24LL * v54;
        while ( 2 )
        {
          while ( 1 )
          {
            v57 = *(_QWORD *)(v163 + 16);
            *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v56 + v57 + 8) + 4LL * v53);
            v17 = *(_DWORD *)v55 == 2;
            *(_QWORD *)(a4 + 3288) = *(_QWORD *)(*(_QWORD *)(v56 + v57 + 16) + 8LL * v53);
            if ( v17 )
              break;
            sub_4399D0(a1, (_DWORD *)(v55 + 24), *(_DWORD *)(v55 + 20), a4);
            if ( *(_DWORD *)v55 == 256 )
            {
              v104 = *(_BYTE **)(a4 + 120);
              if ( (unsigned __int64)(v104 + 5) > *(_QWORD *)(a4 + 128) )
              {
                sub_439150(a4);
                v104 = *(_BYTE **)(a4 + 120);
              }
              *v104 = 101;
              v105 = *(_BYTE *)(a4 + 51);
              v106 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v106;
              *v106 = v105;
              v107 = *(_WORD *)(a4 + 50);
              v108 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v108;
              *v108 = v107;
              v109 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              v110 = *(_DWORD *)(a4 + 48) >> 8;
              *(_QWORD *)(a4 + 120) = v109;
              *v109 = v110;
              v111 = *(_DWORD *)(a4 + 48);
              v112 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
              *(_QWORD *)(a4 + 120) = v112;
              *v112 = v111;
              *(_DWORD *)(a4 + 3276) = 0;
              v113 = dword_6550AC;
              ++*(_QWORD *)(a4 + 120);
              if ( v113 )
              {
                v114 = *(_DWORD *)(a4 + 48);
                if ( v113 == 0x80000000 )
                  v113 = 1 - v114;
                if ( v113 >= 0 || *(_DWORD *)(a4 + 44) >= v114 )
                {
                  v115 = v113 + v114;
                }
                else
                {
                  *(_DWORD *)(a4 + 44) = v114;
                  v115 = v113 + v114;
                }
                *(_DWORD *)(a4 + 48) = v115;
                goto LABEL_81;
              }
            }
LABEL_50:
            LODWORD(v52) = v162;
            ++v53;
            v55 += 24LL * *(int *)(v55 + 20) + 24;
            if ( *(_DWORD *)(v162 + 28) <= v53 )
              goto LABEL_82;
          }
          if ( v53 | v161 )
          {
            v98 = sub_471010(a4, *(_QWORD *)(v55 + 32), *(unsigned int *)(v55 + 40), 0);
            v77 = v98;
            if ( !*(_QWORD *)(a4 + 3288) )
              goto LABEL_70;
            sub_47AD50(
              *(_QWORD *)(32LL * v98 + *(_QWORD *)(a4 + 144) + 8),
              (unsigned int)*(_QWORD *)(v55 + 32) - *(_DWORD *)(a4 + 8));
            if ( v77 > 255 )
              goto LABEL_104;
LABEL_71:
            v78 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v78 + 2) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v78 = *(_BYTE **)(a4 + 120);
            }
            *v78 = 1;
            v79 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v79;
            *v79 = v77;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v80 = dword_65442C;
          }
          else
          {
            sub_49F040(v179, 0);
            sub_49EDE0(v179, *(_QWORD *)(v55 + 32), *(unsigned int *)(v55 + 40));
            v58 = sub_474D60(a1, v179[0], v166, 0);
            v59 = v58;
            if ( v58 )
            {
              v60 = *(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64))(v58 + 24);
              if ( v60 )
              {
                if ( (*(_BYTE *)(v59 + 80) & 4) == 0 && (*(_BYTE *)(a1 + 424) & 0x20) == 0 )
                {
                  v61 = *(_BYTE **)(a4 + 120);
                  v154 = 0;
                  v62 = (_DWORD)v61 - *(_DWORD *)(a4 + 112);
                  v155 = *(_DWORD *)(a4 + 32);
                  if ( *(_DWORD *)(a4 + 3276) )
                  {
                    if ( v62 )
                    {
                      v63 = *(v61 - 1);
                      v64 = (unsigned __int8)*(v61 - 3) << 16;
                      v65 = (unsigned __int8)*(v61 - 2) << 8;
                      v66 = v63 | v65 | v64 | ((unsigned __int8)*(v61 - 4) << 24);
                      *(v61 - 1) = v63 + 1;
                      v67 = (unsigned int)(v66 + 1) >> 24;
                      *(v61 - 4) = v67;
                      v67 <<= 24;
                      *(v61 - 3) = ((v63 | v65 | v67 | v64) + 1) >> 16;
                      *(v61 - 2) = (unsigned __int16)((v63 | v65 | v67) + 1) >> 8;
                      goto LABEL_60;
                    }
                    goto LABEL_61;
                  }
                  if ( (unsigned __int64)(v61 + 5) > *(_QWORD *)(a4 + 128) )
                  {
                    sub_439150(a4);
                    v61 = *(_BYTE **)(a4 + 120);
                  }
                  *v61 = 105;
                  v118 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  *(_QWORD *)(a4 + 120) = v118;
                  *v118 = 0;
                  v119 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  *(_QWORD *)(a4 + 120) = v119;
                  *v119 = 0;
                  v120 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  *(_QWORD *)(a4 + 120) = v120;
                  *v120 = 0;
                  v121 = *(_QWORD *)(a4 + 120);
                  *(_QWORD *)(a4 + 120) = v121 + 1;
                  *(_BYTE *)(v121 + 1) = 0;
                  *(_DWORD *)(a4 + 3276) = 1;
                  v122 = dword_65512C;
                  v123 = *(_QWORD *)(a4 + 120) + 1LL;
                  v17 = dword_65512C == 0;
                  v124 = (_BYTE *)v123;
                  *(_QWORD *)(a4 + 120) = v123;
                  if ( !v17 )
                  {
                    if ( v122 == 0x80000000 )
                    {
                      v125 = *(_DWORD *)(a4 + 48);
                      v122 = 1;
                    }
                    else
                    {
                      if ( v122 >= 0 )
                      {
                        v125 = *(_DWORD *)(a4 + 48);
                        goto LABEL_129;
                      }
                      v125 = *(_DWORD *)(a4 + 48);
                      if ( *(_DWORD *)(a4 + 44) < v125 )
                      {
                        *(_DWORD *)(a4 + 44) = v125;
                        *(_DWORD *)(a4 + 48) = v122 + v125;
                        goto LABEL_130;
                      }
                    }
LABEL_129:
                    *(_DWORD *)(a4 + 48) = v122 + v125;
                  }
LABEL_130:
                  if ( (unsigned __int64)(v123 + 4) > *(_QWORD *)(a4 + 128) )
                  {
                    sub_439150(a4);
                    v124 = *(_BYTE **)(a4 + 120);
                  }
                  *v124 = 0;
                  v126 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  *(_QWORD *)(a4 + 120) = v126;
                  *v126 = 0;
                  v127 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  *(_QWORD *)(a4 + 120) = v127;
                  *v127 = 0;
                  v128 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  *(_QWORD *)(a4 + 120) = v128;
                  *v128 = 1;
                  ++*(_QWORD *)(a4 + 120);
                  v154 = 1;
LABEL_60:
                  v60 = *(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64))(v59 + 24);
LABEL_61:
                  if ( !v60(a1, v162, v59, a4) )
                  {
                    if ( v154 )
                    {
                      v134 = *(_QWORD *)(a4 + 112);
                      v52 = (_BYTE *)(v134 + v62);
                      v135 = *(_QWORD *)(a4 + 120) - v134 - v62;
                      v52[1] = HIBYTE(v135);
                      v52[4] = v135;
                      v52[2] = BYTE2(v135);
                      v68 = v135 >> 8;
                      v52[3] = BYTE1(v135);
                    }
LABEL_163:
                    v84 = *(_QWORD *)(a4 + 120);
                    goto LABEL_93;
                  }
                  if ( v62 != 0 && *(_DWORD *)(a4 + 3276) != 0 )
                  {
                    v69 = *(_QWORD *)(a4 + 120);
                    v70 = *(_BYTE *)(v69 - 1);
                    v71 = *(unsigned __int8 *)(v69 - 3) << 16;
                    v72 = *(unsigned __int8 *)(v69 - 2) << 8;
                    v73 = v70 | v72 | v71 | (*(unsigned __int8 *)(v69 - 4) << 24);
                    *(_BYTE *)(v69 - 1) = v70 - 1;
                    v74 = (unsigned int)(v73 - 1) >> 24;
                    *(_BYTE *)(v69 - 4) = v74;
                    v74 <<= 24;
                    *(_BYTE *)(v69 - 3) = ((v70 | v72 | v74 | v71) - 1) >> 16;
                    *(_BYTE *)(v69 - 2) = (unsigned __int16)((v70 | v72 | v74) - 1) >> 8;
                  }
                  v75 = *(_QWORD *)(a4 + 112) + v62;
                  *(_DWORD *)(a4 + 32) = v155;
                  *(_QWORD *)(a4 + 120) = v75;
                }
              }
            }
            v76 = sub_471010(a4, *(_QWORD *)(v55 + 32), *(unsigned int *)(v55 + 40), 2);
            v77 = v76;
            if ( v59 )
              sub_47D1B0(a1, *(_QWORD *)(32LL * v76 + *(_QWORD *)(a4 + 144) + 8), v59);
            if ( !v53 && *(_DWORD *)(v162 + 28) == 1 )
              sub_470D80(a1, a4, (unsigned int)v77);
LABEL_70:
            if ( v77 <= 255 )
              goto LABEL_71;
LABEL_104:
            v99 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v99 + 5) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v99 = *(_BYTE **)(a4 + 120);
            }
            *v99 = 2;
            v100 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v100;
            *v100 = HIBYTE(v77);
            v101 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v101;
            *v101 = BYTE2(v77);
            v102 = *(_QWORD *)(a4 + 120);
            *(_QWORD *)(a4 + 120) = v102 + 1;
            *(_BYTE *)(v102 + 1) = BYTE1(v77);
            v103 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v103;
            *v103 = v77;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v80 = dword_65444C;
          }
          if ( !v80 )
            goto LABEL_50;
          if ( v80 == 0x80000000 )
            v80 = 1 - v77;
          if ( v80 < 0 )
          {
            v81 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v81 )
            {
              *(_DWORD *)(a4 + 44) = v81;
              v82 = v80 + v81;
              goto LABEL_80;
            }
          }
          else
          {
            v81 = *(_DWORD *)(a4 + 48);
          }
          v82 = v80 + v81;
LABEL_80:
          *(_DWORD *)(a4 + 48) = v82;
LABEL_81:
          LODWORD(v52) = v162;
          ++v53;
          v55 += 24LL * *(int *)(v55 + 20) + 24;
          if ( *(_DWORD *)(v162 + 28) <= v53 )
            goto LABEL_82;
          continue;
        }
      }
      v153 = v54;
LABEL_82:
      v68 = v161;
      if ( v161 )
      {
        v83 = *(_BYTE **)(a4 + 120);
        if ( v83 == *(_BYTE **)(a4 + 128) )
        {
          sub_439150(a4);
          v83 = *(_BYTE **)(a4 + 120);
        }
        *v83 = 102;
        *(_DWORD *)(a4 + 3276) = 0;
        v68 = dword_6550CC;
        v84 = *(_QWORD *)(a4 + 120) + 1LL;
        v17 = dword_6550CC == 0;
        *(_QWORD *)(a4 + 120) = v84;
        if ( v17 )
        {
          v86 = *(_DWORD *)(a4 + 48);
        }
        else
        {
          if ( v68 == 0x80000000 )
          {
            v85 = *(_DWORD *)(a4 + 48);
            v68 = 1;
          }
          else if ( v68 < 0 )
          {
            v85 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v85 )
              *(_DWORD *)(a4 + 44) = v85;
          }
          else
          {
            v85 = *(_DWORD *)(a4 + 48);
          }
          v86 = v68 + v85;
        }
        if ( 1 - v53 >= 0 || *(_DWORD *)(a4 + 44) >= v86 )
        {
          v87 = v86 - v53 + 1;
        }
        else
        {
          *(_DWORD *)(a4 + 44) = v86;
          v87 = v86 - v53 + 1;
        }
        goto LABEL_92;
      }
      if ( v53 <= 0 )
        goto LABEL_163;
      *(_QWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD, char *))(v163 + 104))(
                    v163 + 32,
                    *(_QWORD *)(a4 + 120) - *(_QWORD *)(a4 + 112),
                    v173)
                + 24) = v153;
      if ( v53 > 255 )
      {
        v136 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v136 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v136 = *(_BYTE **)(a4 + 120);
        }
        *v136 = 7;
        v137 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v137;
        *v137 = HIBYTE(v53);
        v138 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v138;
        *v138 = BYTE2(v53);
        v139 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v139;
        *v139 = BYTE1(v53);
        v140 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v140 + 1;
        *(_BYTE *)(v140 + 1) = v53;
        v141 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v68 = dword_6544EC;
        v84 = v141 + 1;
        *(_QWORD *)(a4 + 120) = v84;
      }
      else
      {
        v130 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v130 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v130 = *(_BYTE **)(a4 + 120);
        }
        *v130 = 6;
        v131 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v131 + 1;
        *(_BYTE *)(v131 + 1) = v53;
        v132 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v68 = dword_6544CC;
        v84 = v132 + 1;
        *(_QWORD *)(a4 + 120) = v84;
      }
      if ( v68 )
      {
        if ( v68 == 0x80000000 )
          v68 = 1 - v53;
        if ( v68 >= 0 )
        {
          v133 = *(_DWORD *)(a4 + 48);
          goto LABEL_159;
        }
        v133 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) >= v133 )
        {
LABEL_159:
          v87 = v68 + v133;
        }
        else
        {
          *(_DWORD *)(a4 + 44) = v133;
          v87 = v68 + v133;
        }
LABEL_92:
        *(_DWORD *)(a4 + 48) = v87;
      }
LABEL_93:
      v88 = v84 - *(_DWORD *)(a4 + 112) - v169;
      if ( v160 < 0 || (LODWORD(v52) = v160, *(_DWORD *)(a4 + 32) <= v160) )
        sub_47D740((unsigned int)"EnterCmdExtentData: bad command index %d", v160, v68, (_DWORD)v52, v84, v46);
      if ( *(_DWORD *)(a4 + 200) < v160 )
        sub_47D740(
          (unsigned int)"EnterCmdExtentData: missing start data for command %d",
          v160,
          v68,
          (_DWORD)v52,
          v84,
          v46);
      v10 = 0;
      v89 = *(_QWORD *)(a4 + 192) + 16LL * v160;
      *(_DWORD *)(v89 + 12) = v164;
      *(_DWORD *)(v89 + 4) = v88;
      v90 = 24 * v153;
      Tcl_Free(*(_QWORD *)(24 * v153 + *(_QWORD *)(v163 + 16) + 8));
      Tcl_Free(*(_QWORD *)(24 * v153 + *(_QWORD *)(v163 + 16) + 16));
      v91 = *(_QWORD *)(v163 + 16);
      v92 = v176;
      *(_QWORD *)(v90 + v91 + 16) = 0;
      *(_QWORD *)(v90 + v91 + 8) = v92;
    }
    v93 = *(_BYTE **)(v162 + 16);
    v94 = (_DWORD)v93 + *(_DWORD *)(v162 + 24) - (_DWORD)v167;
    v167 = &v93[*(int *)(v162 + 24)];
    v165 -= v94;
    sub_409C10(&v178, v93, (unsigned __int64)v167);
    v95 = &v177;
    sub_409C30(&v178, &v177, (_DWORD)v167 - *(_DWORD *)(a4 + 8));
    v96 = v162;
    sub_47DCE0(v162);
    if ( v165 <= 0 )
      goto LABEL_136;
  }
  sub_479E00(
    a1,
    a2,
    *(_QWORD *)(v162 + 16),
    *(_DWORD *)(v162 + 24)
  - (unsigned int)(*(_QWORD *)(v162 + 80) == *(_QWORD *)(v162 + 16) + *(int *)(v162 + 24) - 1LL));
  v96 = a1;
  v95 = (int **)a4;
  sub_42BC50(a1, a4);
LABEL_136:
  if ( *(_QWORD *)(a4 + 120) == v168 )
  {
    v142 = sub_47B0B0(v96, v95, v97);
    v143 = sub_470E40(a4, v142, 0);
    if ( v143 <= 255 )
    {
      v151 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v151 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v151 = *(_BYTE **)(a4 + 120);
      }
      *v151 = 1;
      v152 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v152;
      *v152 = v143;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v149 = dword_65442C;
    }
    else
    {
      v144 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v144 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v144 = *(_BYTE **)(a4 + 120);
      }
      *v144 = 2;
      v145 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v145;
      *v145 = HIBYTE(v143);
      v146 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v146;
      *v146 = BYTE2(v143);
      v147 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v147;
      *v147 = BYTE1(v143);
      v148 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v148;
      *v148 = v143;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v149 = dword_65444C;
    }
    if ( v149 )
    {
      if ( v149 == 0x80000000 )
        v149 = 1 - v143;
      if ( v149 < 0 )
      {
        v150 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v150 )
        {
          *(_DWORD *)(a4 + 44) = v150;
          *(_DWORD *)(a4 + 48) = v149 + v150;
          goto LABEL_137;
        }
      }
      else
      {
        v150 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v149 + v150;
    }
  }
LABEL_137:
  sub_449510(a1, v162);
  return sub_49F100(v179);
}

