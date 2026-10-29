__int64 __fastcall sub_42D210(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r11d
  __int64 v6; // r14
  int v7; // r15d
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // r12
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  int v14; // r13d
  __int64 v15; // rax
  _DWORD *v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // r15
  int v26; // ebx
  __int64 v27; // rax
  _BYTE *v28; // rsi
  __int64 v29; // r14
  _BYTE *v30; // rsi
  _BYTE *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rdi
  bool v36; // zf
  _BYTE *v37; // rsi
  int v38; // edx
  _BYTE *v39; // rsi
  _BYTE *v40; // rsi
  _BYTE *v41; // rsi
  _BYTE *v42; // rsi
  int v43; // eax
  int v44; // edx
  __int64 v45; // rax
  __int64 v46; // r12
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned int v49; // r12d
  int v50; // eax
  int v51; // r12d
  int v52; // ebx
  _BYTE *v53; // r10
  __int64 v54; // r12
  _DWORD *v55; // rbx
  unsigned __int64 v56; // rdx
  __int64 v57; // rdi
  _BYTE *v58; // rsi
  __int64 v59; // rax
  _BYTE *v60; // rsi
  _BYTE *v61; // rsi
  _BYTE *v62; // rsi
  _BYTE *v63; // rsi
  int v64; // eax
  int v65; // edx
  __int64 v66; // r15
  void *v67; // r14
  int v68; // ebx
  __int64 v69; // rax
  int v70; // edx
  _BYTE *v71; // rsi
  int v72; // ecx
  int v73; // eax
  int v74; // eax
  _BYTE *v75; // rsi
  int v76; // eax
  int v77; // edx
  int v78; // ebx
  _BYTE *v79; // rsi
  _BYTE *v80; // rsi
  int v81; // eax
  int v82; // edx
  bool i; // cc
  __int64 v84; // rbx
  int v85; // edx
  int v86; // eax
  int v87; // eax
  int v88; // edx
  int v89; // edx
  __int64 v90; // rax
  __int64 v91; // r12
  _BYTE *v92; // rsi
  _BYTE *v93; // rsi
  _BYTE *v94; // rsi
  _BYTE *v95; // rsi
  _BYTE *v96; // rsi
  int v97; // ecx
  __int64 v98; // rax
  int v99; // edx
  unsigned __int64 v100; // rax
  _BYTE *v101; // rsi
  int v102; // ecx
  int v103; // eax
  int v104; // edx
  int v105; // edx
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rax
  _BYTE *v109; // rsi
  _BYTE *v110; // rsi
  _BYTE *v111; // rsi
  _BYTE *v112; // rsi
  _BYTE *v113; // rsi
  int v114; // eax
  __int64 v115; // rcx
  int v116; // edx
  int v117; // ebx
  _BYTE *v118; // rsi
  _BYTE *v119; // rsi
  int v120; // eax
  int v121; // edx
  bool j; // cc
  _BYTE *v123; // rsi
  int v124; // edx
  _BYTE *v125; // rsi
  _BYTE *v126; // rsi
  _BYTE *v127; // rsi
  __int64 v128; // rdx
  _BYTE *v129; // rsi
  int v130; // ebx
  _BYTE *v131; // rsi
  _BYTE *v132; // rsi
  _BYTE *v133; // rsi
  _BYTE *v134; // rsi
  __int64 v135; // rdx
  _BYTE *v136; // rsi
  __int64 v137; // rdx
  _BYTE *v138; // rsi
  _BYTE *v139; // rsi
  int v140; // ebx
  _BYTE *v141; // rsi
  _BYTE *v142; // rsi
  int v143; // ecx
  int v144; // edx
  _BYTE *v145; // rsi
  _BYTE *v146; // rsi
  _BYTE *v147; // rsi
  __int64 v148; // rdx
  _BYTE *v149; // rsi
  _BYTE *v150; // rsi
  _BYTE *v151; // rsi
  _BYTE *v152; // rsi
  __int64 v153; // rdx
  _BYTE *v154; // rsi
  _BYTE *v155; // [rsp+18h] [rbp-2D0h]
  __int64 v156; // [rsp+30h] [rbp-2B8h]
  int v157; // [rsp+3Ch] [rbp-2ACh]
  int v158; // [rsp+48h] [rbp-2A0h]
  int v159; // [rsp+4Ch] [rbp-29Ch]
  int v160; // [rsp+50h] [rbp-298h]
  int v161; // [rsp+54h] [rbp-294h]
  __int64 v162; // [rsp+58h] [rbp-290h]
  int v163; // [rsp+60h] [rbp-288h]
  int v164; // [rsp+6Ch] [rbp-27Ch]
  int v165; // [rsp+70h] [rbp-278h]
  int v166; // [rsp+74h] [rbp-274h]
  int v167; // [rsp+74h] [rbp-274h]
  int v168; // [rsp+74h] [rbp-274h]
  int v169; // [rsp+74h] [rbp-274h]
  int v170; // [rsp+74h] [rbp-274h]
  int v171; // [rsp+74h] [rbp-274h]
  int v172; // [rsp+78h] [rbp-270h]
  int v173; // [rsp+7Ch] [rbp-26Ch]
  int v174; // [rsp+80h] [rbp-268h]
  int v175; // [rsp+84h] [rbp-264h]
  int v176; // [rsp+88h] [rbp-260h]
  int v177; // [rsp+8Ch] [rbp-25Ch]
  int v178; // [rsp+8Ch] [rbp-25Ch]
  __int64 v179; // [rsp+90h] [rbp-258h]
  __int64 v180; // [rsp+98h] [rbp-250h]
  __int64 v181; // [rsp+A0h] [rbp-248h]
  __int64 v182; // [rsp+A8h] [rbp-240h]
  int v183; // [rsp+B4h] [rbp-234h]
  __int64 v184; // [rsp+B8h] [rbp-230h]
  int v186; // [rsp+C8h] [rbp-220h] BYREF
  int v187; // [rsp+CCh] [rbp-21Ch] BYREF
  int *v188; // [rsp+D0h] [rbp-218h] BYREF
  int v189; // [rsp+DCh] [rbp-20Ch] BYREF
  unsigned __int64 v190; // [rsp+E0h] [rbp-208h] BYREF
  int v191; // [rsp+ECh] [rbp-1FCh] BYREF
  __int64 v192; // [rsp+F0h] [rbp-1F8h] BYREF
  unsigned int v193; // [rsp+F8h] [rbp-1F0h]
  _QWORD v194[29]; // [rsp+1D0h] [rbp-118h] BYREF

  v4 = 0;
  v6 = *(_QWORD *)(a4 + 3264);
  v7 = 1;
  v172 = 0;
  v183 = 0;
  v173 = *(_DWORD *)(a4 + 48);
  v8 = *(_DWORD *)(a2 + 28) - 1;
  v165 = *(_DWORD *)(v6 + 28) - 1;
  v9 = *(_QWORD *)(a2 + 32);
  v188 = *(int **)(a4 + 3288);
  v10 = v9 + 24LL * *(int *)(v9 + 20) + 24;
  if ( v8 == 2 )
    goto LABEL_25;
  if ( v8 <= 2 )
    return 1;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v10 + 40);
    if ( *(_DWORD *)v10 != 2 || v11 <= 1 )
      return 1;
    if ( v11 > 6 || memcmp(*(const void **)(v10 + 32), "-exact", v11) )
      break;
    if ( v4 )
      return 1;
    v183 = 0;
LABEL_8:
    LOBYTE(v4) = 1;
LABEL_9:
    --v8;
    ++v7;
    v10 += 24LL * *(int *)(v10 + 20) + 24;
    if ( v8 <= 2 )
      return 1;
  }
  if ( v11 <= 5 && !memcmp(*(const void **)(v10 + 32), "-glob", v11) )
  {
    if ( v4 )
      return 1;
    v183 = 1;
    goto LABEL_8;
  }
  if ( v11 > 7 )
    goto LABEL_22;
  if ( !memcmp(*(const void **)(v10 + 32), "-regexp", v11) )
  {
    if ( v4 )
      return 1;
    v183 = 2;
    goto LABEL_8;
  }
  if ( !memcmp(*(const void **)(v10 + 32), "-nocase", v11) )
  {
    v172 = 1;
    goto LABEL_9;
  }
LABEL_22:
  if ( v11 != 2 || memcmp(*(const void **)(v10 + 32), "--", 2u) )
    return 1;
  ++v7;
  --v8;
  v12 = 1;
  v10 += 24LL * *(int *)(v10 + 20) + 24;
  if ( v183 == 0 && v172 != 0 )
    return v12;
LABEL_25:
  v14 = v8 - 1;
  v184 = v10;
  v15 = v10 + 24LL * *(int *)(v10 + 20);
  v16 = (_DWORD *)(v15 + 24);
  if ( v14 == 1 )
  {
    v12 = 1;
    if ( *(_DWORD *)(v15 + 24) != 2 )
      return v12;
    v49 = *(_DWORD *)(v15 + 64);
    v190 = *(_QWORD *)(v15 + 56);
    v164 = v49;
    v50 = sub_49D110(v190, v49, 0, 1);
    v12 = 1;
    if ( v50 <= 1 )
      return v12;
    LOBYTE(v14) = 0;
    v51 = 8 * v50;
    v52 = 4 * v50;
    v182 = sub_40FB00(24 * v50);
    v181 = sub_40FB00(v51);
    v180 = sub_40FB00(v52);
    v179 = sub_40FB00(v51);
    v189 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 24LL * v165 + 8) + 4LL * v7 + 4);
    if ( v164 <= 0 )
    {
LABEL_70:
      v156 = v14;
      if ( (v14 & 1) == 0 )
        goto LABEL_31;
    }
    else
    {
      v53 = (_BYTE *)v190;
      while ( 1 )
      {
        v54 = v14;
        v163 = (int)v53;
        v155 = v53;
        v55 = (_DWORD *)(v182 + 24LL * v14);
        v162 = 24LL * v14;
        if ( (unsigned int)sub_49D1E0(
                             0,
                             (_DWORD)v53,
                             v164,
                             (int)v55 + 8,
                             (unsigned int)&v190,
                             (int)v55 + 16,
                             (__int64)&v191)
          || !v191 )
        {
          break;
        }
        *v55 = 4;
        ++v14;
        *(_DWORD *)(v162 + v182 + 20) = 0;
        *(_QWORD *)(v181 + 8 * v54) = v55;
        sub_409C10(&v189, v155, *(_QWORD *)(v162 + v182 + 8));
        sub_409C30(&v189, &v188, *(_QWORD *)(v162 + v182 + 8) - *(_DWORD *)(a4 + 8));
        *(_DWORD *)(v180 + 4 * v54) = v189;
        v56 = v190;
        *(_QWORD *)(v179 + 8 * v54) = v188;
        sub_409C10(&v189, *(_BYTE **)(v162 + v182 + 8), v56);
        sub_409C30(&v189, &v188, v190 - *(_DWORD *)(a4 + 8));
        v53 = (_BYTE *)v190;
        v164 -= v190 - v163;
        if ( v164 <= 0 )
          goto LABEL_70;
      }
    }
    Tcl_Free(v181);
    v57 = v182;
    goto LABEL_72;
  }
  v12 = 1;
  if ( (v14 & 1) != 0 || v14 == 0 )
    return v12;
  v156 = v14;
  v181 = sub_40FB00(8 * v14);
  v180 = sub_40FB00(4 * v14);
  v166 = 0;
  v179 = sub_40FB00(8 * v14);
  v182 = 0;
  if ( v14 > 0 )
  {
    v17 = 24LL * v165;
    while ( *v16 == 2 )
    {
      v18 = v166;
      v19 = *(_QWORD *)(v6 + 16);
      *(_QWORD *)(v181 + 8LL * v166) = v16 + 6;
      v20 = v166++;
      *(_DWORD *)(v180 + 4 * v18) = *(_DWORD *)(*(_QWORD *)(v17 + v19 + 8) + 4LL * (v7 + v20) + 4);
      *(_QWORD *)(v179 + 8 * v18) = *(_QWORD *)(*(_QWORD *)(v17 + v19 + 16) + 8LL * (v7 + v20) + 8);
      v16 += 6 * v16[5] + 6;
      if ( v166 >= v14 )
        goto LABEL_31;
    }
    v57 = v181;
LABEL_72:
    Tcl_Free(v57);
    Tcl_Free(v180);
    Tcl_Free(v179);
    return 1;
  }
LABEL_31:
  v21 = *(_QWORD *)(v181 + 8 * v156 - 8);
  if ( *(_DWORD *)(v21 + 16) == 1 && **(_BYTE **)(v21 + 8) == 45 )
  {
    Tcl_Free(v181);
    Tcl_Free(v180);
    Tcl_Free(v179);
    if ( v182 )
      Tcl_Free(v182);
    return 1;
  }
  v22 = *(_QWORD *)(v6 + 16);
  v23 = 24LL * v165;
  v24 = *(_DWORD *)(*(_QWORD *)(v23 + v22 + 8) + 4LL * v7);
  *(_QWORD *)(a4 + 3288) = *(_QWORD *)(*(_QWORD *)(v23 + v22 + 16) + 8LL * v7);
  *(_DWORD *)(a4 + 3272) = v24;
  sub_4399D0(a1, v184 + 24, *(unsigned int *)(v184 + 20), a4);
  if ( v183 )
  {
    v175 = -1;
    v174 = 0;
    v66 = sub_40FB00(16 * (int)v156);
    v67 = (void *)sub_40FB00(4 * (int)v156);
    memset(v67, 0, 4 * v156);
    v168 = 0;
    v176 = 0;
    v178 = 0;
    if ( v14 <= 0 )
    {
LABEL_103:
      Tcl_Free(v181);
      Tcl_Free(v180);
      Tcl_Free(v179);
      if ( v182 )
        Tcl_Free(v182);
      if ( !v178 )
      {
        v75 = *(_BYTE **)(a4 + 120);
        if ( v75 == *(_BYTE **)(a4 + 128) )
        {
          sub_439150(a4);
          v75 = *(_BYTE **)(a4 + 120);
        }
        *v75 = 3;
        *(_DWORD *)(a4 + 3276) = 0;
        v76 = dword_65446C;
        ++*(_QWORD *)(a4 + 120);
        if ( v76 )
        {
          if ( v76 == 0x80000000 )
          {
            v77 = *(_DWORD *)(a4 + 48);
            v76 = 1;
          }
          else if ( v76 < 0 )
          {
            v77 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v77 )
              *(_DWORD *)(a4 + 44) = v77;
          }
          else
          {
            v77 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v76 + v77;
        }
        v78 = sub_471010(a4, "", 0, 0);
        if ( v78 > 255 )
        {
          v132 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v132 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v132 = *(_BYTE **)(a4 + 120);
          }
          *v132 = 2;
          v133 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v133;
          *v133 = HIBYTE(v78);
          v134 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v134;
          *v134 = BYTE2(v78);
          v135 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v135 + 1;
          *(_BYTE *)(v135 + 1) = BYTE1(v78);
          v136 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v136;
          *v136 = v78;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v81 = dword_65444C;
        }
        else
        {
          v79 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v79 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v79 = *(_BYTE **)(a4 + 120);
          }
          *v79 = 1;
          v80 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v80;
          *v80 = v78;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v81 = dword_65442C;
        }
        if ( v81 )
        {
          if ( v81 == 0x80000000 )
            v81 = 1 - v78;
          if ( v81 < 0 )
          {
            v82 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v82 )
              *(_DWORD *)(a4 + 44) = v82;
          }
          else
          {
            v82 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v81 + v82;
        }
      }
      v169 = 0;
      for ( i = v176 > 0; i; i = v169 < v176 )
      {
        if ( !*((_DWORD *)v67 + v169) )
          *((_DWORD *)v67 + v169) = *(_QWORD *)(a4 + 120) - *(_DWORD *)(a4 + 112);
        ++v169;
      }
      v170 = v176 - 1;
      if ( v176 - 1 >= 0 )
      {
        v84 = 16LL * v170;
        do
        {
          if ( (unsigned int)sub_43C6D0(
                               a4,
                               v84 + v66,
                               (unsigned int)(*((_DWORD *)v67 + v170) - *(_DWORD *)(v84 + v66 + 4)),
                               127) )
          {
            v85 = v170;
            while ( --v85 >= 0 )
            {
              while ( 1 )
              {
                v86 = *((_DWORD *)v67 + v85);
                if ( v86 <= *(_DWORD *)(v84 + v66 + 4) )
                  break;
                *((_DWORD *)v67 + v85--) = v86 + 3;
                if ( v85 < 0 )
                  goto LABEL_135;
              }
            }
          }
LABEL_135:
          v84 -= 16;
          --v170;
        }
        while ( v170 >= 0 );
      }
      Tcl_Free(v66);
      Tcl_Free((__int64)v67);
      *(_DWORD *)(a4 + 48) = v173 + 1;
      return 0;
    }
    while ( 1 )
    {
      v68 = -1;
      *(_DWORD *)(a4 + 48) = v173 + 1;
      if ( v14 - 2 == v168 )
      {
        v90 = *(_QWORD *)(v181 + 8 * v156 - 16);
        if ( *(_DWORD *)(v90 + 16) == 7 && !memcmp(*(const void **)(v90 + 8), "default", 7u) )
        {
          v91 = v168;
          v178 = 1;
          goto LABEL_90;
        }
      }
      if ( v183 == 1 )
      {
        v91 = v168;
        sub_4399D0(a1, *(_QWORD *)(v181 + 8LL * v168), 1, a4);
        v92 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v92 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v92 = *(_BYTE **)(a4 + 120);
        }
        *v92 = 95;
        v93 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v93;
        *v93 = 0;
        v94 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v94;
        *v94 = 0;
        v95 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v95;
        *v95 = 0;
        v96 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v96;
        *v96 = 1;
        *(_DWORD *)(a4 + 3276) = 0;
        v97 = dword_654FEC;
        v98 = *(_QWORD *)(a4 + 120) + 1LL;
        v36 = dword_654FEC == 0;
        v123 = (_BYTE *)v98;
        *(_QWORD *)(a4 + 120) = v98;
        if ( v36 )
          goto LABEL_165;
        if ( v97 == 0x80000000 )
        {
          v99 = *(_DWORD *)(a4 + 48);
          v97 = 0;
        }
        else
        {
          if ( v97 >= 0 )
          {
            v99 = *(_DWORD *)(a4 + 48);
            goto LABEL_164;
          }
          v99 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v99 )
          {
            *(_DWORD *)(a4 + 44) = v99;
            *(_DWORD *)(a4 + 48) = v97 + v99;
            goto LABEL_165;
          }
        }
LABEL_164:
        *(_DWORD *)(a4 + 48) = v97 + v99;
LABEL_165:
        v100 = v98 + 2;
        goto LABEL_166;
      }
      v91 = v168;
      v186 = 0;
      v157 = 0;
      v108 = *(_QWORD *)(v181 + 8LL * v168);
      if ( *(_DWORD *)v108 != 4 )
        goto LABEL_181;
      v137 = *(unsigned int *)(v108 + 16);
      if ( !(_DWORD)v137 )
      {
        LODWORD(v137) = 1;
        v130 = sub_471010(a4, "1", v137, 0);
        if ( v130 > 255 )
        {
          v145 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v145 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v145 = *(_BYTE **)(a4 + 120);
          }
          *v145 = 2;
          v146 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v146;
          *v146 = HIBYTE(v130);
          v147 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v147;
          *v147 = BYTE2(v130);
          v148 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v148 + 1;
          *(_BYTE *)(v148 + 1) = BYTE1(v130);
          v149 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v149;
          *v149 = v130;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v102 = dword_65444C;
        }
        else
        {
          v138 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v138 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v138 = *(_BYTE **)(a4 + 120);
          }
          *v138 = 1;
          v139 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v139;
          *v139 = v130;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v102 = dword_65442C;
        }
        goto LABEL_220;
      }
      if ( (unsigned int)sub_4A0150(0, *(_QWORD *)(v108 + 8), v137, &v192, &v186) )
      {
LABEL_181:
        sub_4399D0(a1, *(_QWORD *)(v181 + 8LL * v168), 1, a4);
      }
      else
      {
        v157 = 1;
        v140 = sub_471010(a4, v192, v193, 0);
        if ( v140 > 255 )
        {
          v150 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v150 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v150 = *(_BYTE **)(a4 + 120);
          }
          *v150 = 2;
          v151 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v151;
          *v151 = HIBYTE(v140);
          v152 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v152;
          *v152 = BYTE2(v140);
          v153 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v153 + 1;
          *(_BYTE *)(v153 + 1) = BYTE1(v140);
          v154 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v154;
          *v154 = v140;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v143 = dword_65444C;
        }
        else
        {
          v141 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v141 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v141 = *(_BYTE **)(a4 + 120);
          }
          *v141 = 1;
          v142 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v142;
          *v142 = v140;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v143 = dword_65442C;
        }
        if ( v143 )
        {
          if ( v143 == 0x80000000 )
            v143 = 1 - v140;
          if ( v143 < 0 )
          {
            v144 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v144 )
              *(_DWORD *)(a4 + 44) = v144;
          }
          else
          {
            v144 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v143 + v144;
        }
        sub_49F100(&v192);
      }
      v109 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v109 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v109 = *(_BYTE **)(a4 + 120);
      }
      *v109 = 95;
      v110 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v110;
      *v110 = 0;
      v111 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v111;
      *v111 = 0;
      v112 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v112;
      *v112 = 0;
      v113 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v113;
      *v113 = 1;
      *(_DWORD *)(a4 + 3276) = 0;
      v114 = dword_654FEC;
      v115 = *(_QWORD *)(a4 + 120) + 1LL;
      v36 = dword_654FEC == 0;
      v123 = (_BYTE *)v115;
      *(_QWORD *)(a4 + 120) = v115;
      if ( !v36 )
      {
        if ( v114 == 0x80000000 )
        {
          v116 = *(_DWORD *)(a4 + 48);
          v114 = 0;
        }
        else if ( v114 < 0 )
        {
          v116 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v116 )
            *(_DWORD *)(a4 + 44) = v116;
        }
        else
        {
          v116 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v114 + v116;
      }
      if ( v157 )
      {
        if ( v172 == 0 && v186 != 0 )
        {
          if ( v115 == *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v123 = *(_BYTE **)(a4 + 120);
          }
          *v123 = 73;
          *(_DWORD *)(a4 + 3276) = 0;
          v87 = dword_654D2C;
          ++*(_QWORD *)(a4 + 120);
          if ( !v87 )
            goto LABEL_87;
          if ( v87 == 0x80000000 )
          {
            v88 = *(_DWORD *)(a4 + 48);
            v87 = 1;
          }
          else
          {
            if ( v87 >= 0 )
            {
              v88 = *(_DWORD *)(a4 + 48);
              goto LABEL_146;
            }
            v88 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v88 )
            {
              *(_DWORD *)(a4 + 44) = v88;
              v89 = v87 + v88;
              goto LABEL_147;
            }
          }
LABEL_146:
          v89 = v87 + v88;
LABEL_147:
          *(_DWORD *)(a4 + 48) = v89;
          goto LABEL_87;
        }
        v100 = v115 + 2;
LABEL_166:
        if ( v100 > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v123 = *(_BYTE **)(a4 + 120);
        }
        *v123 = 78;
        v101 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v101;
        *v101 = v172;
        *(_DWORD *)(a4 + 3276) = 0;
        v102 = dword_654DCC;
        ++*(_QWORD *)(a4 + 120);
        if ( !v102 )
          goto LABEL_87;
        v103 = 1 - v172;
LABEL_170:
        if ( v102 == 0x80000000 )
          v102 = v103;
        if ( v102 >= 0 )
        {
          v104 = *(_DWORD *)(a4 + 48);
          goto LABEL_174;
        }
        v104 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) >= v104 )
        {
LABEL_174:
          v105 = v102 + v104;
        }
        else
        {
          *(_DWORD *)(a4 + 44) = v104;
          v105 = v102 + v104;
        }
        *(_DWORD *)(a4 + 48) = v105;
        goto LABEL_87;
      }
      v130 = v172 == 0 ? 3 : 11;
      if ( (unsigned __int64)(v115 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v123 = *(_BYTE **)(a4 + 120);
      }
      *v123 = 127;
      v131 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v131;
      *v131 = v130;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v102 = dword_6553EC;
LABEL_220:
      if ( v102 )
      {
        v103 = 1 - v130;
        goto LABEL_170;
      }
LABEL_87:
      v69 = *(_QWORD *)(v181 + 8 * v91 + 8);
      if ( *(_DWORD *)(v69 + 16) == 1 && **(_BYTE **)(v69 + 8) == 45 )
      {
        if ( v175 == -1 )
        {
          v174 = 0;
          v175 = v176;
        }
        sub_43C580(a4, 1, v66 + 16 * (v174 + (__int64)v175));
        ++v176;
        ++v174;
        goto LABEL_102;
      }
      sub_43C580(a4, 2, v66 + 16LL * v176);
      v68 = v176++;
LABEL_90:
      if ( v175 == -1 )
      {
        v71 = *(_BYTE **)(a4 + 120);
      }
      else
      {
        v70 = 0;
        if ( v174 <= 0 )
        {
          v71 = *(_BYTE **)(a4 + 120);
        }
        else
        {
          v71 = *(_BYTE **)(a4 + 120);
          v72 = (_DWORD)v71 - *(_DWORD *)(a4 + 112);
          do
          {
            v73 = v70 + v175;
            ++v70;
            *((_DWORD *)v67 + v73) = v72;
          }
          while ( v70 < v174 );
        }
        v175 = -1;
      }
      if ( v71 == *(_BYTE **)(a4 + 128) )
      {
        sub_439150(a4);
        v71 = *(_BYTE **)(a4 + 120);
      }
      *v71 = 3;
      *(_DWORD *)(a4 + 3276) = 0;
      v74 = dword_65446C;
      ++*(_QWORD *)(a4 + 120);
      if ( v74 )
      {
        if ( v74 != 0x80000000 && v74 < 0 )
        {
          v124 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v124 )
            *(_DWORD *)(a4 + 44) = v124;
        }
      }
      *(_DWORD *)(a4 + 48) = v173 + 1;
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v180 + 4 * v91 + 4);
      *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v179 + 8 * v91 + 8);
      sub_43BFD0(a1, *(_QWORD *)(v181 + 8 * v91 + 8), 1, a4);
      if ( !v178 )
      {
        sub_43C580(a4, 0, v66 + 16LL * v176++);
        *((_DWORD *)v67 + v68) = *(_QWORD *)(a4 + 120) - *(_DWORD *)(a4 + 112);
      }
LABEL_102:
      v168 += 2;
      if ( v168 >= v14 )
        goto LABEL_103;
    }
  }
  v161 = 0;
  v25 = sub_40FB00(88);
  sub_457B90(v25, 0);
  v26 = sub_43C390(v25, &off_654380, a4);
  v27 = sub_40FB00(4 * (v14 / 2));
  v28 = *(_BYTE **)(a4 + 120);
  v29 = v27;
  v177 = 0;
  v159 = 1;
  v160 = (_DWORD)v28 - *(_DWORD *)(a4 + 112);
  if ( (unsigned __int64)(v28 + 5) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v28 = *(_BYTE **)(a4 + 120);
  }
  *v28 = 121;
  v30 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v30;
  *v30 = HIBYTE(v26);
  v31 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v31;
  *v31 = BYTE2(v26);
  v32 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a4 + 120) = v32 + 1;
  *(_BYTE *)(v32 + 1) = BYTE1(v26);
  v33 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a4 + 120) = v33 + 1;
  *(_BYTE *)(v33 + 1) = v26;
  *(_DWORD *)(a4 + 3276) = 0;
  v34 = dword_65532C;
  v35 = *(_QWORD *)(a4 + 120) + 1LL;
  v36 = dword_65532C == 0;
  v37 = (_BYTE *)v35;
  *(_QWORD *)(a4 + 120) = v35;
  if ( !v36 )
  {
    if ( v34 == 0x80000000 )
      v34 = 1 - v26;
    if ( v34 < 0 )
    {
      v38 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v38 )
        *(_DWORD *)(a4 + 44) = v38;
    }
    else
    {
      v38 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v34 + v38;
  }
  v158 = v35 - *(_DWORD *)(a4 + 112);
  if ( (unsigned __int64)(v35 + 5) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v37 = *(_BYTE **)(a4 + 120);
  }
  *v37 = 35;
  v39 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v39;
  *v39 = 0;
  v40 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v40;
  *v40 = 0;
  v41 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v41;
  *v41 = 0;
  v42 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v42;
  *v42 = 0;
  *(_DWORD *)(a4 + 3276) = 0;
  v43 = dword_65486C;
  ++*(_QWORD *)(a4 + 120);
  if ( v43 )
  {
    if ( v43 == 0x80000000 )
    {
      v44 = *(_DWORD *)(a4 + 48);
      v43 = 1;
    }
    else if ( v43 < 0 )
    {
      v44 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v44 )
        *(_DWORD *)(a4 + 44) = v44;
    }
    else
    {
      v44 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v43 + v44;
  }
  v167 = 0;
  if ( v14 <= 0 )
  {
LABEL_195:
    *(_BYTE *)(*(_QWORD *)(a4 + 112) + v158 + 1LL) = ((unsigned int)*(_QWORD *)(a4 + 120)
                                                    - (unsigned int)*(_QWORD *)(a4 + 112)
                                                    - v158) >> 24;
    *(_BYTE *)(*(_QWORD *)(a4 + 112) + v158 + 2LL) = ((unsigned int)*(_QWORD *)(a4 + 120)
                                                    - (unsigned int)*(_QWORD *)(a4 + 112)
                                                    - v158) >> 16;
    *(_BYTE *)(*(_QWORD *)(a4 + 112) + v158 + 3LL) = (unsigned __int16)(*(_QWORD *)(a4 + 120)
                                                                      - *(_QWORD *)(a4 + 112)
                                                                      - v158) >> 8;
    *(_BYTE *)(*(_QWORD *)(a4 + 112) + v158 + 4LL) = *(_QWORD *)(a4 + 120) - *(_QWORD *)(a4 + 112) - v158;
    v117 = sub_471010(a4, "", 0, 0);
    if ( v117 > 255 )
    {
      v125 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v125 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v125 = *(_BYTE **)(a4 + 120);
      }
      *v125 = 2;
      v126 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v126;
      *v126 = HIBYTE(v117);
      v127 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v127;
      *v127 = BYTE2(v117);
      v128 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v128 + 1;
      *(_BYTE *)(v128 + 1) = BYTE1(v117);
      v129 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v129;
      *v129 = v117;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v120 = dword_65444C;
    }
    else
    {
      v118 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v118 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v118 = *(_BYTE **)(a4 + 120);
      }
      *v118 = 1;
      v119 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v119;
      *v119 = v117;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v120 = dword_65442C;
    }
    if ( v120 )
    {
      if ( v120 == 0x80000000 )
        v120 = 1 - v117;
      if ( v120 < 0 )
      {
        v121 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v121 )
          *(_DWORD *)(a4 + 44) = v121;
      }
      else
      {
        v121 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v120 + v121;
    }
    goto LABEL_205;
  }
  while ( 2 )
  {
    if ( v14 - 2 == v167
      && (v45 = *(_QWORD *)(v181 + 8 * v156 - 16), *(_DWORD *)(v45 + 16) == 7)
      && !memcmp(*(const void **)(v45 + 8), "default", 7u) )
    {
      v106 = *(_QWORD *)(a4 + 112);
      v107 = *(_QWORD *)(a4 + 120);
      v177 = 1;
      v187 = 1;
      *(_BYTE *)(v106 + v158 + 1) = (unsigned int)(v107 - v106 - v158) >> 24;
      *(_BYTE *)(*(_QWORD *)(a4 + 112) + v158 + 2LL) = ((unsigned int)*(_QWORD *)(a4 + 120)
                                                      - (unsigned int)*(_QWORD *)(a4 + 112)
                                                      - v158) >> 16;
      *(_BYTE *)(*(_QWORD *)(a4 + 112) + v158 + 3LL) = (unsigned __int16)(*(_QWORD *)(a4 + 120)
                                                                        - *(_QWORD *)(a4 + 112)
                                                                        - v158) >> 8;
      *(_BYTE *)(*(_QWORD *)(a4 + 112) + v158 + 4LL) = *(_QWORD *)(a4 + 120) - *(_QWORD *)(a4 + 112) - v158;
      v46 = v167;
    }
    else
    {
      sub_49EDC0(v194);
      v46 = v167;
      sub_49EDE0(
        v194,
        *(_QWORD *)(*(_QWORD *)(v181 + 8LL * v167) + 8LL),
        *(unsigned int *)(*(_QWORD *)(v181 + 8LL * v167) + 16LL));
      v47 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v25 + 72))(v25, v194[0], &v187);
      if ( v187 )
        *(_QWORD *)(v47 + 24) = *(_QWORD *)(a4 + 120) - *(_QWORD *)(a4 + 112) - v160;
      sub_49F100(v194);
    }
    v48 = *(_QWORD *)(v181 + 8 * v46 + 8);
    if ( *(_DWORD *)(v48 + 16) == 1 && **(_BYTE **)(v48 + 8) == 45 )
    {
      v159 = 1;
      goto LABEL_52;
    }
    if ( v187 | v159 )
    {
      v159 = 0;
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v180 + 4 * v46 + 4);
      *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v179 + 8 * v46 + 8);
      sub_43BFD0(a1, *(_QWORD *)(v181 + 8 * v46 + 8), 1, a4);
      if ( v167 + 2 < v14 || v177 == 0 )
      {
        v58 = *(_BYTE **)(a4 + 120);
        v59 = v161++;
        *(_DWORD *)(v29 + 4 * v59) = (_DWORD)v58 - *(_DWORD *)(a4 + 112);
        if ( (unsigned __int64)(v58 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v58 = *(_BYTE **)(a4 + 120);
        }
        *v58 = 35;
        v60 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v60;
        *v60 = 0;
        v61 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v61;
        *v61 = 0;
        v62 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v62;
        *v62 = 0;
        v63 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v63;
        *v63 = 0;
        *(_DWORD *)(a4 + 3276) = 0;
        v64 = dword_65486C;
        ++*(_QWORD *)(a4 + 120);
        if ( v64 )
        {
          if ( v64 == 0x80000000 )
          {
            v65 = *(_DWORD *)(a4 + 48);
            v64 = 1;
          }
          else
          {
            if ( v64 >= 0 )
            {
              v65 = *(_DWORD *)(a4 + 48);
              goto LABEL_80;
            }
            v65 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v65 )
            {
              *(_DWORD *)(a4 + 44) = v65;
              *(_DWORD *)(a4 + 48) = v64 + v65;
              goto LABEL_52;
            }
          }
LABEL_80:
          *(_DWORD *)(a4 + 48) = v64 + v65;
        }
      }
    }
LABEL_52:
    v167 += 2;
    if ( v167 < v14 )
      continue;
    break;
  }
  if ( !v177 )
    goto LABEL_195;
LABEL_205:
  v171 = 0;
  for ( j = v161 > 0; j; j = v171 < v161 )
  {
    *(_BYTE *)(*(_QWORD *)(a4 + 112) + *(int *)(v29 + 4LL * v171) + 1LL) = ((unsigned int)*(_QWORD *)(a4 + 120)
                                                                          - (unsigned int)*(_QWORD *)(a4 + 112)
                                                                          - *(_DWORD *)(v29 + 4LL * v171)) >> 24;
    *(_BYTE *)(*(_QWORD *)(a4 + 112) + *(int *)(v29 + 4LL * v171) + 2LL) = ((unsigned int)*(_QWORD *)(a4 + 120)
                                                                          - (unsigned int)*(_QWORD *)(a4 + 112)
                                                                          - *(_DWORD *)(v29 + 4LL * v171)) >> 16;
    *(_BYTE *)(*(_QWORD *)(a4 + 112) + *(int *)(v29 + 4LL * v171) + 3LL) = (unsigned __int16)(*(_QWORD *)(a4 + 120)
                                                                                            - *(_QWORD *)(a4 + 112)
                                                                                            - *(_DWORD *)(v29 + 4LL * v171)) >> 8;
    *(_BYTE *)(*(_QWORD *)(a4 + 112) + *(int *)(v29 + 4LL * v171) + 4LL) = *(_QWORD *)(a4 + 120)
                                                                         - *(_QWORD *)(a4 + 112)
                                                                         - *(_DWORD *)(v29 + 4LL * v171);
    ++v171;
  }
  Tcl_Free(v29);
  Tcl_Free(v181);
  Tcl_Free(v180);
  Tcl_Free(v179);
  if ( v182 )
  {
    Tcl_Free(v182);
    return 0;
  }
  return 0;
}

