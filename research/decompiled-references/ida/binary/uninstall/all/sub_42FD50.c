__int64 __fastcall sub_42FD50(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  int v21; // edx
  int v22; // eax
  int v23; // ebp
  _BYTE *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  _BYTE *v28; // rcx
  _BYTE *v29; // rcx
  _BYTE *v30; // rcx
  int v31; // ebp
  _BYTE *v32; // rcx
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  _BYTE *v36; // rcx
  int v37; // edx
  int v38; // eax
  int v39; // r12d
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // r13
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  _BYTE *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // edx
  _BYTE *v57; // rcx
  int v58; // eax
  _BYTE *v59; // rcx
  int v60; // edx
  int v61; // eax
  int v62; // r14d
  _BYTE *v63; // rcx
  int v64; // edx
  int v65; // eax
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  _BYTE *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  int v73; // edx
  int v74; // eax
  int v75; // edx
  int v76; // eax
  int v77; // edx
  bool v78; // zf
  int v79; // eax
  int v80; // ebp
  _BYTE *v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rcx
  int v84; // edx
  _BYTE *v85; // rcx
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rcx
  int v89; // edx
  _BYTE *v90; // rcx
  int v91; // eax
  _BYTE *v92; // rcx
  _BYTE *v93; // rcx
  _BYTE *v94; // rcx
  _BYTE *v95; // rcx
  int v96; // ebp
  _BYTE *v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rcx
  int v100; // edx
  int v101; // eax
  _BYTE *v102; // rcx
  _BYTE *v103; // rcx
  _BYTE *v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rcx
  _BYTE *v107; // rcx
  _BYTE *v108; // rcx
  _BYTE *v109; // rcx
  _BYTE *v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rcx
  _BYTE *v113; // rcx
  _BYTE *v114; // rcx
  _BYTE *v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rcx
  _BYTE *v118; // rcx
  _BYTE *v119; // rcx
  _BYTE *v120; // rcx
  _BYTE *v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rcx
  _BYTE *v124; // rcx
  _BYTE *v125; // rcx
  _BYTE *v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  int v129; // ebp
  _BYTE *v130; // rcx
  _BYTE *v131; // rcx
  _BYTE *v132; // rcx
  _BYTE *v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rcx
  int v136; // edx
  int v137; // eax
  _BYTE *v138; // rcx
  _BYTE *v139; // rcx
  _BYTE *v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rcx
  int v143; // ebp
  _BYTE *v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rcx
  int v147; // edx
  int v148; // eax
  int v149; // ebp
  _BYTE *v150; // rcx
  _BYTE *v151; // rcx
  int v152; // edx
  int v153; // eax
  _BYTE *v154; // rcx
  _BYTE *v155; // rcx
  _BYTE *v156; // rcx
  _BYTE *v157; // rcx
  __int64 v158; // rax
  __int64 v159; // rcx
  _BYTE *v160; // rcx
  _BYTE *v161; // rcx
  _BYTE *v162; // rcx
  _BYTE *v163; // rcx
  _BYTE *v164; // rcx
  __int64 v165; // [rsp+10h] [rbp-58h]
  int v166; // [rsp+1Ch] [rbp-4Ch]
  __int64 v167; // [rsp+20h] [rbp-48h]

  v167 = *(_QWORD *)(a4 + 3264);
  v6 = *(_DWORD *)(a2 + 28);
  v166 = *(_DWORD *)(v167 + 28) - 1;
  if ( v6 <= 2 )
  {
    v23 = sub_471010(a4, "1", 1, 0);
    if ( v23 <= 255 )
    {
      v29 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v29 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v29 = *(_BYTE **)(a4 + 120);
      }
      *v29 = 1;
      v30 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v30;
      *v30 = v23;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v21 = dword_65442C;
    }
    else
    {
      v24 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v24 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v24 = *(_BYTE **)(a4 + 120);
      }
      *v24 = 2;
      v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v25;
      *v25 = HIBYTE(v23);
      v26 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v26;
      *v26 = BYTE2(v23);
      v27 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v27;
      *v27 = BYTE1(v23);
      v28 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v28;
      *v28 = v23;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v21 = dword_65444C;
    }
    if ( v21 )
    {
      if ( v21 == 0x80000000 )
        v21 = 1 - v23;
      goto LABEL_25;
    }
    return 0;
  }
  if ( v6 == 3 )
  {
    v8 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL);
    if ( *(_DWORD *)(v8 + 24) != 2 )
    {
      v9 = *(_QWORD *)(v167 + 16);
      v10 = 24LL * v166;
      v11 = *(_QWORD *)(v10 + v9 + 8);
      v12 = *(_QWORD *)(*(_QWORD *)(v10 + v9 + 16) + 8LL);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v11 + 4);
      v13 = *(unsigned int *)(v8 + 44);
      *(_QWORD *)(a4 + 3288) = v12;
      sub_4399D0(a1, v8 + 48, v13, a4);
      goto LABEL_7;
    }
    v31 = sub_471010(a4, *(_QWORD *)(v8 + 56), *(unsigned int *)(v8 + 64), 0);
    if ( v31 <= 255 )
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
      *v139 = v31;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v37 = dword_65442C;
    }
    else
    {
      v32 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v32 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v32 = *(_BYTE **)(a4 + 120);
      }
      *v32 = 2;
      v33 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v33;
      *v33 = HIBYTE(v31);
      v34 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v34;
      *v34 = BYTE2(v31);
      v35 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v35;
      *v35 = BYTE1(v31);
      v36 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v36;
      *v36 = v31;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v37 = dword_65444C;
    }
    if ( v37 )
    {
      if ( v37 == 0x80000000 )
        v37 = 1 - v31;
      if ( v37 >= 0 )
      {
        v38 = *(_DWORD *)(a4 + 48);
LABEL_40:
        *(_DWORD *)(a4 + 48) = v37 + v38;
        goto LABEL_7;
      }
      v38 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) >= v38 )
        goto LABEL_40;
      *(_DWORD *)(a4 + 44) = v38;
      *(_DWORD *)(a4 + 48) = v37 + v38;
    }
LABEL_7:
    v14 = v8 + 24 + 24LL * *(int *)(v8 + 44);
    if ( *(_DWORD *)(v14 + 24) == 2 )
    {
      v129 = sub_471010(a4, *(_QWORD *)(v14 + 56), *(unsigned int *)(v14 + 64), 0);
      if ( v129 <= 255 )
      {
        v140 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v140 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v140 = *(_BYTE **)(a4 + 120);
        }
        *v140 = 1;
        v141 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v141 + 1;
        *(_BYTE *)(v141 + 1) = v129;
        v142 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v136 = dword_65442C;
        v20 = (_BYTE *)(v142 + 1);
        *(_QWORD *)(a4 + 120) = v20;
      }
      else
      {
        v130 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v130 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v130 = *(_BYTE **)(a4 + 120);
        }
        *v130 = 2;
        v131 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v131;
        *v131 = HIBYTE(v129);
        v132 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v132;
        *v132 = BYTE2(v129);
        v133 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v133;
        *v133 = BYTE1(v129);
        v134 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v134 + 1;
        *(_BYTE *)(v134 + 1) = v129;
        v135 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v136 = dword_65444C;
        v20 = (_BYTE *)(v135 + 1);
        *(_QWORD *)(a4 + 120) = v20;
      }
      if ( !v136 )
        goto LABEL_9;
      if ( v136 == 0x80000000 )
        v136 = 1 - v129;
      if ( v136 < 0 )
      {
        v137 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v137 )
        {
          *(_DWORD *)(a4 + 44) = v137;
          *(_DWORD *)(a4 + 48) = v136 + v137;
          goto LABEL_9;
        }
      }
      else
      {
        v137 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v136 + v137;
    }
    else
    {
      v15 = *(_QWORD *)(v167 + 16);
      v16 = 24LL * v166;
      v17 = *(_QWORD *)(v16 + v15 + 8);
      v18 = *(_QWORD *)(*(_QWORD *)(v16 + v15 + 16) + 16LL);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v17 + 8);
      v19 = *(unsigned int *)(v14 + 44);
      *(_QWORD *)(a4 + 3288) = v18;
      sub_4399D0(a1, v14 + 48, v19, a4);
      v20 = *(_BYTE **)(a4 + 120);
    }
LABEL_9:
    if ( v20 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v20 = *(_BYTE **)(a4 + 120);
    }
    *v20 = a3;
    ++*(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = a3 == 105;
    v21 = *((_DWORD *)&off_654400 + 8 * a3 + 3);
    goto LABEL_12;
  }
  result = 1;
  if ( *(_QWORD *)(a4 + 24) )
  {
    v39 = sub_439880(nullptr);
    v40 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL);
    if ( *(_DWORD *)(v40 + 24) != 2 )
    {
      v41 = *(_QWORD *)(v167 + 16);
      v42 = 24LL * v166;
      v43 = *(_QWORD *)(v42 + v41 + 8);
      v44 = *(_QWORD *)(*(_QWORD *)(v42 + v41 + 16) + 8LL);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v43 + 4);
      v45 = *(unsigned int *)(v40 + 44);
      *(_QWORD *)(a4 + 3288) = v44;
      sub_4399D0(a1, v40 + 48, v45, a4);
      goto LABEL_43;
    }
    v149 = sub_471010(a4, *(_QWORD *)(v40 + 56), *(unsigned int *)(v40 + 64), 0);
    if ( v149 > 255 )
    {
      v160 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v160 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v160 = *(_BYTE **)(a4 + 120);
      }
      *v160 = 2;
      v161 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v161;
      *v161 = HIBYTE(v149);
      v162 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v162;
      *v162 = BYTE2(v149);
      v163 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v163;
      *v163 = BYTE1(v149);
      v164 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v164;
      *v164 = v149;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v152 = dword_65444C;
    }
    else
    {
      v150 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v150 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v150 = *(_BYTE **)(a4 + 120);
      }
      *v150 = 1;
      v151 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v151;
      *v151 = v149;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v152 = dword_65442C;
    }
    if ( v152 )
    {
      if ( v152 == 0x80000000 )
        v152 = 1 - v149;
      if ( v152 >= 0 )
      {
        v153 = *(_DWORD *)(a4 + 48);
LABEL_202:
        *(_DWORD *)(a4 + 48) = v152 + v153;
        goto LABEL_43;
      }
      v153 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) >= v153 )
        goto LABEL_202;
      *(_DWORD *)(a4 + 44) = v153;
      *(_DWORD *)(a4 + 48) = v152 + v153;
    }
LABEL_43:
    v46 = v40 + 24 + 24LL * *(int *)(v40 + 44);
    v47 = v46 + 24;
    if ( *(_DWORD *)(v46 + 24) != 2 )
    {
      v48 = *(_QWORD *)(v167 + 16);
      v49 = 24LL * v166;
      v50 = *(_QWORD *)(v49 + v48 + 8);
      v51 = *(_QWORD *)(*(_QWORD *)(v49 + v48 + 16) + 16LL);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v50 + 8);
      v52 = *(unsigned int *)(v46 + 44);
      *(_QWORD *)(a4 + 3288) = v51;
      sub_4399D0(a1, v46 + 48, v52, a4);
      v53 = *(_BYTE **)(a4 + 120);
      goto LABEL_45;
    }
    v143 = sub_471010(a4, *(_QWORD *)(v46 + 56), *(unsigned int *)(v46 + 64), 0);
    if ( v143 > 255 )
    {
      v154 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v154 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v154 = *(_BYTE **)(a4 + 120);
      }
      *v154 = 2;
      v155 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v155;
      *v155 = HIBYTE(v143);
      v156 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v156;
      *v156 = BYTE2(v143);
      v157 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v157;
      *v157 = BYTE1(v143);
      v158 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v158 + 1;
      *(_BYTE *)(v158 + 1) = v143;
      v159 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v147 = dword_65444C;
      v53 = (_BYTE *)(v159 + 1);
      *(_QWORD *)(a4 + 120) = v53;
    }
    else
    {
      v144 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v144 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v144 = *(_BYTE **)(a4 + 120);
      }
      *v144 = 1;
      v145 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v145 + 1;
      *(_BYTE *)(v145 + 1) = v143;
      v146 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v147 = dword_65442C;
      v53 = (_BYTE *)(v146 + 1);
      *(_QWORD *)(a4 + 120) = v53;
    }
    if ( v147 )
    {
      if ( v147 == 0x80000000 )
        v147 = 1 - v143;
      if ( v147 >= 0 )
      {
        v148 = *(_DWORD *)(a4 + 48);
LABEL_192:
        *(_DWORD *)(a4 + 48) = v147 + v148;
        goto LABEL_45;
      }
      v148 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) >= v148 )
        goto LABEL_192;
      *(_DWORD *)(a4 + 44) = v148;
      *(_DWORD *)(a4 + 48) = v147 + v148;
    }
LABEL_45:
    if ( v39 > 255 )
    {
      if ( (unsigned __int64)(v53 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v53 = *(_BYTE **)(a4 + 120);
      }
      *v53 = 18;
      v124 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v124;
      *v124 = HIBYTE(v39);
      v125 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v125;
      *v125 = BYTE2(v39);
      v126 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v126;
      *v126 = BYTE1(v39);
      v127 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v127 + 1;
      *(_BYTE *)(v127 + 1) = v39;
      v128 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v56 = dword_65464C;
      v57 = (_BYTE *)(v128 + 1);
      *(_QWORD *)(a4 + 120) = v57;
    }
    else
    {
      if ( (unsigned __int64)(v53 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v53 = *(_BYTE **)(a4 + 120);
      }
      *v53 = 17;
      v54 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v54 + 1;
      *(_BYTE *)(v54 + 1) = v39;
      v55 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v56 = dword_65462C;
      v57 = (_BYTE *)(v55 + 1);
      *(_QWORD *)(a4 + 120) = v57;
    }
    if ( v56 )
    {
      if ( v56 == 0x80000000 )
        v56 = 1 - v39;
      if ( v56 < 0 )
      {
        v58 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v58 )
          *(_DWORD *)(a4 + 44) = v58;
      }
      else
      {
        v58 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v56 + v58;
    }
    if ( v57 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v57 = *(_BYTE **)(a4 + 120);
    }
    *v57 = a3;
    v59 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v59;
    *(_DWORD *)(a4 + 3276) = a3 == 105;
    v60 = *((_DWORD *)&off_654400 + 8 * a3 + 3);
    if ( !v60 )
      goto LABEL_62;
    if ( v60 == 0x80000000 )
    {
      v61 = *(_DWORD *)(a4 + 48);
      v60 = 1;
    }
    else if ( v60 < 0 )
    {
      v61 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v61 )
      {
        *(_DWORD *)(a4 + 44) = v61;
        *(_DWORD *)(a4 + 48) = v60 + v61;
        goto LABEL_62;
      }
    }
    else
    {
      v61 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v60 + v61;
LABEL_62:
    v62 = 3;
    if ( *(int *)(a2 + 28) <= 3 )
      goto LABEL_104;
    v165 = 24LL * v166;
    while ( 1 )
    {
      if ( v39 > 255 )
      {
        if ( (unsigned __int64)(v59 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v59 = *(_BYTE **)(a4 + 120);
        }
        *v59 = 11;
        v92 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v92;
        *v92 = HIBYTE(v39);
        v93 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v93;
        *v93 = BYTE2(v39);
        v94 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v94;
        *v94 = BYTE1(v39);
        v95 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v95;
        *v95 = v39;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v64 = dword_65456C;
      }
      else
      {
        if ( (unsigned __int64)(v59 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v59 = *(_BYTE **)(a4 + 120);
        }
        *v59 = 10;
        v63 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v63;
        *v63 = v39;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v64 = dword_65454C;
      }
      if ( v64 )
      {
        if ( v64 == 0x80000000 )
          v64 = 1 - v39;
        if ( v64 < 0 )
        {
          v65 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v65 )
            *(_DWORD *)(a4 + 44) = v65;
        }
        else
        {
          v65 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v64 + v65;
      }
      v66 = v47 + 24LL * *(int *)(v47 + 20);
      v47 = v66 + 24;
      if ( *(_DWORD *)(v66 + 24) == 2 )
      {
        v96 = sub_471010(a4, *(_QWORD *)(v66 + 56), *(unsigned int *)(v66 + 64), 0);
        if ( v96 > 255 )
        {
          v107 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v107 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v107 = *(_BYTE **)(a4 + 120);
          }
          *v107 = 2;
          v108 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v108;
          *v108 = HIBYTE(v96);
          v109 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v109;
          *v109 = BYTE2(v96);
          v110 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v110;
          *v110 = BYTE1(v96);
          v111 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v111 + 1;
          *(_BYTE *)(v111 + 1) = v96;
          v112 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v100 = dword_65444C;
          v70 = (_BYTE *)(v112 + 1);
          *(_QWORD *)(a4 + 120) = v70;
        }
        else
        {
          v97 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v97 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v97 = *(_BYTE **)(a4 + 120);
          }
          *v97 = 1;
          v98 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v98 + 1;
          *(_BYTE *)(v98 + 1) = v96;
          v99 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v100 = dword_65442C;
          v70 = (_BYTE *)(v99 + 1);
          *(_QWORD *)(a4 + 120) = v70;
        }
        if ( !v100 )
          goto LABEL_76;
        if ( v100 == 0x80000000 )
          v100 = 1 - v96;
        if ( v100 < 0 )
        {
          v101 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v101 )
          {
            *(_DWORD *)(a4 + 44) = v101;
            *(_DWORD *)(a4 + 48) = v100 + v101;
            goto LABEL_76;
          }
        }
        else
        {
          v101 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v100 + v101;
      }
      else
      {
        v67 = *(_QWORD *)(v167 + 16);
        *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v165 + v67 + 8) + 4LL * v62);
        v68 = *(_QWORD *)(v165 + v67 + 16);
        v69 = *(unsigned int *)(v66 + 44);
        *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v68 + 8LL * v62);
        sub_4399D0(a1, v66 + 48, v69, a4);
        v70 = *(_BYTE **)(a4 + 120);
      }
LABEL_76:
      if ( ++v62 < *(_DWORD *)(a2 + 28) )
      {
        if ( v39 > 255 )
        {
          if ( (unsigned __int64)(v70 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v70 = *(_BYTE **)(a4 + 120);
          }
          *v70 = 18;
          v102 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v102;
          *v102 = HIBYTE(v39);
          v103 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v103;
          *v103 = BYTE2(v39);
          v104 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v104;
          *v104 = BYTE1(v39);
          v105 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v105 + 1;
          *(_BYTE *)(v105 + 1) = v39;
          v106 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v73 = dword_65464C;
          v70 = (_BYTE *)(v106 + 1);
          *(_QWORD *)(a4 + 120) = v70;
        }
        else
        {
          if ( (unsigned __int64)(v70 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v70 = *(_BYTE **)(a4 + 120);
          }
          *v70 = 17;
          v71 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v71 + 1;
          *(_BYTE *)(v71 + 1) = v39;
          v72 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v73 = dword_65462C;
          v70 = (_BYTE *)(v72 + 1);
          *(_QWORD *)(a4 + 120) = v70;
        }
        if ( v73 )
        {
          if ( v73 == 0x80000000 )
            v73 = 1 - v39;
          if ( v73 < 0 )
          {
            v74 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v74 )
              *(_DWORD *)(a4 + 44) = v74;
          }
          else
          {
            v74 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v73 + v74;
        }
      }
      if ( v70 == *(_BYTE **)(a4 + 128) )
      {
        sub_439150(a4);
        v70 = *(_BYTE **)(a4 + 120);
      }
      *v70 = a3;
      v59 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v59;
      *(_DWORD *)(a4 + 3276) = a3 == 105;
      v75 = *((_DWORD *)&off_654400 + 8 * a3 + 3);
      if ( v75 )
      {
        if ( v75 == 0x80000000 )
        {
          v76 = *(_DWORD *)(a4 + 48);
          v75 = 1;
        }
        else if ( v75 < 0 )
        {
          v76 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v76 )
            *(_DWORD *)(a4 + 44) = v76;
        }
        else
        {
          v76 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v75 + v76;
      }
      if ( *(_DWORD *)(a2 + 28) <= v62 )
      {
        for ( ; v62 > 3; --v62 )
        {
          if ( v59 == *(_BYTE **)(a4 + 128) )
          {
            sub_439150(a4);
            v59 = *(_BYTE **)(a4 + 120);
          }
          *v59 = 44;
          *(_DWORD *)(a4 + 3276) = 0;
          v77 = dword_65498C;
          v59 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          v78 = dword_65498C == 0;
          *(_QWORD *)(a4 + 120) = v59;
          if ( v78 )
            continue;
          if ( v77 == 0x80000000 )
          {
            v79 = *(_DWORD *)(a4 + 48);
            v77 = 1;
          }
          else if ( v77 < 0 )
          {
            v79 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v79 )
            {
              *(_DWORD *)(a4 + 44) = v79;
              *(_DWORD *)(a4 + 48) = v77 + v79;
              continue;
            }
          }
          else
          {
            v79 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v77 + v79;
        }
LABEL_104:
        v80 = sub_471010(a4, "", 0, 0);
        if ( v80 > 255 )
        {
          v118 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v118 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v118 = *(_BYTE **)(a4 + 120);
          }
          *v118 = 2;
          v119 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v119;
          *v119 = HIBYTE(v80);
          v120 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v120;
          *v120 = BYTE2(v80);
          v121 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v121;
          *v121 = BYTE1(v80);
          v122 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v122 + 1;
          *(_BYTE *)(v122 + 1) = v80;
          v123 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v84 = dword_65444C;
          v85 = (_BYTE *)(v123 + 1);
          *(_QWORD *)(a4 + 120) = v85;
        }
        else
        {
          v81 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v81 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v81 = *(_BYTE **)(a4 + 120);
          }
          *v81 = 1;
          v82 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v82 + 1;
          *(_BYTE *)(v82 + 1) = v80;
          v83 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v84 = dword_65442C;
          v85 = (_BYTE *)(v83 + 1);
          *(_QWORD *)(a4 + 120) = v85;
        }
        if ( v84 )
        {
          if ( v84 == 0x80000000 )
            v84 = 1 - v80;
          if ( v84 < 0 )
          {
            v86 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v86 )
              *(_DWORD *)(a4 + 44) = v86;
          }
          else
          {
            v86 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v84 + v86;
        }
        if ( v39 > 255 )
        {
          if ( (unsigned __int64)(v85 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v85 = *(_BYTE **)(a4 + 120);
          }
          *v85 = 18;
          v113 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v113;
          *v113 = HIBYTE(v39);
          v114 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v114;
          *v114 = BYTE2(v39);
          v115 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v115;
          *v115 = BYTE1(v39);
          v116 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v116 + 1;
          *(_BYTE *)(v116 + 1) = v39;
          v117 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v89 = dword_65464C;
          v90 = (_BYTE *)(v117 + 1);
          *(_QWORD *)(a4 + 120) = v90;
        }
        else
        {
          if ( (unsigned __int64)(v85 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v85 = *(_BYTE **)(a4 + 120);
          }
          *v85 = 17;
          v87 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v87 + 1;
          *(_BYTE *)(v87 + 1) = v39;
          v88 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v89 = dword_65462C;
          v90 = (_BYTE *)(v88 + 1);
          *(_QWORD *)(a4 + 120) = v90;
        }
        if ( v89 )
        {
          if ( v89 == 0x80000000 )
            v89 = 1 - v39;
          if ( v89 < 0 )
          {
            v91 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v91 )
              *(_DWORD *)(a4 + 44) = v91;
          }
          else
          {
            v91 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v89 + v91;
        }
        if ( v90 == *(_BYTE **)(a4 + 128) )
        {
          sub_439150(a4);
          v90 = *(_BYTE **)(a4 + 120);
        }
        *v90 = 3;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v21 = dword_65446C;
LABEL_12:
        if ( v21 )
        {
          if ( v21 == 0x80000000 )
          {
            v21 = 1;
            goto LABEL_15;
          }
LABEL_25:
          if ( v21 >= 0 )
          {
LABEL_15:
            v22 = *(_DWORD *)(a4 + 48);
          }
          else
          {
            v22 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v22 )
            {
              *(_DWORD *)(a4 + 44) = v22;
              *(_DWORD *)(a4 + 48) = v21 + v22;
              return 0;
            }
          }
          *(_DWORD *)(a4 + 48) = v21 + v22;
        }
        return 0;
      }
    }
  }
  return result;
}

