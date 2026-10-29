__int64 __fastcall sub_421EF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v6; // ecx
  int v7; // edx
  int v8; // r12d
  __int64 v9; // rbx
  int v10; // r15d
  _DWORD *v11; // rax
  __int64 v12; // r13
  _DWORD *v13; // r14
  __int64 v14; // r14
  int v15; // eax
  int v17; // r15d
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rsi
  int v23; // ebx
  _BYTE *v24; // rsi
  _BYTE *v25; // rsi
  int v26; // edx
  int v27; // eax
  _BYTE *v28; // rsi
  _BYTE *v29; // rsi
  _BYTE *v30; // rsi
  _BYTE *v31; // rsi
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rcx
  bool v35; // zf
  _BYTE *v36; // rsi
  int v37; // eax
  _BYTE *v38; // rsi
  _BYTE *v39; // rsi
  _BYTE *v40; // rsi
  __int64 v41; // rax
  int v42; // edx
  __int64 v43; // rcx
  _BYTE *v44; // rsi
  int v45; // eax
  _BYTE *v46; // rsi
  _BYTE *v47; // rsi
  __int64 v48; // rax
  int v49; // eax
  _BYTE *v50; // rsi
  int v51; // ebx
  _BYTE *v52; // rsi
  _BYTE *v53; // rsi
  _BYTE *v54; // rsi
  _BYTE *v55; // rsi
  int v56; // edx
  __int64 v57; // rcx
  int v58; // eax
  int v59; // eax
  __int64 v60; // r12
  __int64 v61; // rbx
  int v62; // edx
  __int64 v63; // rdx
  __int64 v64; // rbx
  __int64 v65; // rsi
  __int64 v66; // rdx
  _BYTE *v67; // rsi
  __int64 v68; // rdx
  int v69; // edx
  __int64 v70; // rcx
  _BYTE *v71; // rsi
  int v72; // eax
  _BYTE *v73; // rsi
  _BYTE *v74; // rsi
  _BYTE *v75; // rsi
  __int64 v76; // rax
  int v77; // edx
  __int64 v78; // rcx
  _BYTE *v79; // rsi
  int v80; // eax
  _BYTE *v81; // rsi
  _BYTE *v82; // rsi
  _BYTE *v83; // rsi
  __int64 v84; // rax
  int v85; // edx
  __int64 v86; // rcx
  _BYTE *v87; // rsi
  int v88; // eax
  _BYTE *v89; // rsi
  _BYTE *v90; // rsi
  __int64 v91; // rax
  _BYTE *v92; // rsi
  int v93; // edx
  __int64 v94; // rcx
  _BYTE *v95; // rsi
  int v96; // eax
  int v97; // edx
  __int64 v98; // rcx
  _BYTE *v99; // rsi
  int v100; // eax
  int v101; // edx
  __int64 v102; // rcx
  _BYTE *v103; // rsi
  int v104; // eax
  _BYTE *v105; // rsi
  _BYTE *v106; // rsi
  _BYTE *v107; // rsi
  __int64 v108; // rax
  int v109; // edx
  __int64 v110; // rcx
  _BYTE *v111; // rsi
  int v112; // eax
  _BYTE *v113; // rsi
  _BYTE *v114; // rsi
  _BYTE *v115; // rsi
  __int64 v116; // rax
  int v117; // edx
  __int64 v118; // rcx
  _BYTE *v119; // rsi
  int v120; // eax
  _BYTE *v121; // rsi
  _BYTE *v122; // rsi
  __int64 v123; // rax
  _BYTE *v124; // rsi
  int v125; // ecx
  __int64 v126; // rdx
  int v127; // eax
  int v128; // edx
  int v129; // ecx
  int v130; // r8d
  int v131; // r9d
  _BYTE *v132; // rsi
  _BYTE *v133; // rsi
  _BYTE *v134; // rsi
  _BYTE *v135; // rsi
  _BYTE *v136; // rsi
  int v137; // [rsp+14h] [rbp-74h]
  __int64 v138; // [rsp+18h] [rbp-70h]
  __int64 v139; // [rsp+20h] [rbp-68h]
  int v140; // [rsp+28h] [rbp-60h]
  int v141; // [rsp+2Ch] [rbp-5Ch]
  _BYTE v143[4]; // [rsp+40h] [rbp-48h] BYREF
  int v144; // [rsp+44h] [rbp-44h]

  v5 = *(_QWORD *)(a4 + 3264);
  v6 = 1;
  v138 = v5;
  v137 = *(_DWORD *)(v5 + 28) - 1;
  v7 = *(_DWORD *)(a2 + 28);
  if ( (((_BYTE)v7 - 1) & 1) != 0 )
    return v6;
  v8 = (v7 - 3) / 2;
  if ( v8 <= 0 )
    return v6;
  v9 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24;
  v141 = sub_41FD20(v9, a4);
  v6 = 1;
  if ( v141 < 0 )
    return v6;
  v10 = 0;
  v11 = (_DWORD *)sub_40FB00(4 * v8 + 4);
  *v11 = v8;
  v12 = (__int64)v11;
  v139 = sub_4495F0(a1, 8LL * v8);
  v13 = (_DWORD *)(v9 + 24LL * *(int *)(v9 + 20) + 24);
  do
  {
    *(_QWORD *)(v139 + 8LL * v10) = v13;
    v14 = (__int64)&v13[6 * v13[5] + 6];
    v15 = sub_41FD20(v14, a4);
    if ( v15 < 0 )
      goto LABEL_8;
    *(_DWORD *)(v12 + 4LL * v10++ + 4) = v15;
    v13 = (_DWORD *)(v14 + 24LL * *(int *)(v14 + 20) + 24);
  }
  while ( v10 < v8 );
  if ( *v13 != 2 )
  {
LABEL_8:
    Tcl_Free(v12);
    sub_449510(a1, v139);
    return 1;
  }
  v17 = 0;
  v140 = sub_43C390(v12, &off_654360, a4);
  v18 = 24LL * v137;
  do
  {
    v22 = *(_QWORD *)(v139 + 8LL * v17);
    if ( *(_DWORD *)v22 != 2 )
    {
      v19 = *(_QWORD *)(v138 + 16);
      v20 = *(_QWORD *)(v18 + v19 + 16) + 16LL * v17;
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v18 + v19 + 8) + 8LL * v17 + 8);
      v21 = *(unsigned int *)(v22 + 20);
      *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v20 + 16);
      sub_4399D0(a1, v22 + 24, v21, a4);
      goto LABEL_12;
    }
    v23 = sub_471010(a4, *(_QWORD *)(v22 + 32), *(unsigned int *)(v22 + 40), 0);
    if ( v23 > 255 )
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
      *v133 = HIBYTE(v23);
      v134 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v134;
      *v134 = BYTE2(v23);
      v135 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v135;
      *v135 = BYTE1(v23);
      v136 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v136;
      *v136 = v23;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v26 = dword_65444C;
    }
    else
    {
      v24 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v24 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v24 = *(_BYTE **)(a4 + 120);
      }
      *v24 = 1;
      v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v25;
      *v25 = v23;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v26 = dword_65442C;
    }
    if ( v26 )
    {
      if ( v26 == 0x80000000 )
        v26 = 1 - v23;
      if ( v26 >= 0 )
      {
        v27 = *(_DWORD *)(a4 + 48);
LABEL_23:
        *(_DWORD *)(a4 + 48) = v26 + v27;
        goto LABEL_12;
      }
      v27 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) >= v27 )
        goto LABEL_23;
      *(_DWORD *)(a4 + 44) = v27;
      *(_DWORD *)(a4 + 48) = v26 + v27;
    }
LABEL_12:
    ++v17;
  }
  while ( v17 < v8 );
  v28 = *(_BYTE **)(a4 + 120);
  if ( (unsigned __int64)(v28 + 5) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v28 = *(_BYTE **)(a4 + 120);
  }
  *v28 = 79;
  v29 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v29;
  *v29 = HIBYTE(v8);
  v30 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v30;
  *v30 = BYTE2(v8);
  v31 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v31;
  *v31 = BYTE1(v8);
  v32 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a4 + 120) = v32 + 1;
  *(_BYTE *)(v32 + 1) = v8;
  *(_DWORD *)(a4 + 3276) = 0;
  v33 = dword_654DEC;
  v34 = *(_QWORD *)(a4 + 120) + 1LL;
  v35 = dword_654DEC == 0;
  v36 = (_BYTE *)v34;
  *(_QWORD *)(a4 + 120) = v34;
  if ( !v35 )
  {
    if ( v33 == 0x80000000 )
      v33 = 1 - v8;
    if ( v33 < 0 )
    {
      v37 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v37 )
        *(_DWORD *)(a4 + 44) = v37;
    }
    else
    {
      v37 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v33 + v37;
  }
  if ( (unsigned __int64)(v34 + 5) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v36 = *(_BYTE **)(a4 + 120);
  }
  *v36 = 119;
  v38 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v38;
  *v38 = HIBYTE(v141);
  v39 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v39;
  *v39 = BYTE2(v141);
  v40 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v40;
  *v40 = BYTE1(v141);
  v41 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a4 + 120) = v41 + 1;
  *(_BYTE *)(v41 + 1) = v141;
  *(_DWORD *)(a4 + 3276) = 0;
  v42 = dword_6552EC;
  v43 = *(_QWORD *)(a4 + 120) + 1LL;
  v35 = dword_6552EC == 0;
  v44 = (_BYTE *)v43;
  *(_QWORD *)(a4 + 120) = v43;
  if ( !v35 )
  {
    if ( v42 == 0x80000000 )
      v42 = 1 - v141;
    if ( v42 < 0 )
    {
      v45 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v45 )
        *(_DWORD *)(a4 + 44) = v45;
    }
    else
    {
      v45 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v42 + v45;
  }
  if ( (unsigned __int64)(v43 + 4) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v44 = *(_BYTE **)(a4 + 120);
  }
  *v44 = HIBYTE(v140);
  v46 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v46;
  *v46 = BYTE2(v140);
  v47 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v47;
  *v47 = BYTE1(v140);
  v48 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a4 + 120) = v48 + 1;
  *(_BYTE *)(v48 + 1) = v140;
  ++*(_QWORD *)(a4 + 120);
  v49 = sub_43C240(1, a4);
  v50 = *(_BYTE **)(a4 + 120);
  v51 = v49;
  if ( (unsigned __int64)(v50 + 5) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v50 = *(_BYTE **)(a4 + 120);
  }
  *v50 = 69;
  v52 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v52;
  *v52 = HIBYTE(v51);
  v53 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v53;
  *v53 = BYTE2(v51);
  v54 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v54;
  *v54 = BYTE1(v51);
  v55 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v55;
  *v55 = v51;
  *(_DWORD *)(a4 + 3276) = 0;
  v56 = dword_654CAC;
  v57 = *(_QWORD *)(a4 + 120) + 1LL;
  v35 = dword_654CAC == 0;
  *(_QWORD *)(a4 + 120) = v57;
  if ( !v35 )
  {
    if ( v56 == 0x80000000 )
      v56 = 1 - v51;
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
  v59 = *(_DWORD *)(a4 + 40);
  v60 = v51;
  v61 = 8LL * v51;
  v62 = *(_DWORD *)(a4 + 36) + 1;
  *(_DWORD *)(a4 + 36) = v62;
  if ( v59 < v62 )
    v59 = v62;
  v63 = *(_QWORD *)(a4 + 168);
  *(_DWORD *)(a4 + 40) = v59;
  v64 = 4 * (v61 - v60);
  *(_DWORD *)(v64 + v63 + 8) = v57 - *(_DWORD *)(a4 + 112);
  v65 = *(_QWORD *)(v138 + 16);
  *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(24LL * v137 + v65 + 8) + 4LL * *(int *)(a2 + 28) - 4);
  v66 = (unsigned int)v13[5];
  *(_QWORD *)(a4 + 3288) = *(_QWORD *)(*(_QWORD *)(24LL * v137 + v65 + 16) + 8LL * *(int *)(a2 + 28) - 8);
  sub_43BFD0(a1, v13 + 6, v66, a4);
  v67 = *(_BYTE **)(a4 + 120);
  v68 = *(_QWORD *)(a4 + 168);
  --*(_DWORD *)(a4 + 36);
  v35 = v67 == *(_BYTE **)(a4 + 128);
  *(_DWORD *)(v64 + v68 + 12) = (_DWORD)v67 - *(_DWORD *)(a4 + 112) - *(_DWORD *)(v64 + v68 + 8);
  if ( v35 )
  {
    sub_439150(a4);
    v67 = *(_BYTE **)(a4 + 120);
  }
  *v67 = 70;
  *(_DWORD *)(a4 + 3276) = 0;
  v69 = dword_654CCC;
  v70 = *(_QWORD *)(a4 + 120) + 1LL;
  v35 = dword_654CCC == 0;
  v71 = (_BYTE *)v70;
  *(_QWORD *)(a4 + 120) = v70;
  if ( !v35 )
  {
    if ( v69 == 0x80000000 )
    {
      v72 = *(_DWORD *)(a4 + 48);
      v69 = 1;
    }
    else if ( v69 < 0 )
    {
      v72 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v72 )
        *(_DWORD *)(a4 + 44) = v72;
    }
    else
    {
      v72 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v69 + v72;
  }
  if ( (unsigned __int64)(v70 + 5) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v71 = *(_BYTE **)(a4 + 120);
  }
  *v71 = 126;
  v73 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v73;
  *v73 = 0;
  v74 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v74;
  *v74 = 0;
  v75 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v75;
  *v75 = 0;
  v76 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a4 + 120) = v76 + 1;
  *(_BYTE *)(v76 + 1) = 2;
  *(_DWORD *)(a4 + 3276) = 0;
  v77 = dword_6553CC;
  v78 = *(_QWORD *)(a4 + 120) + 1LL;
  v35 = dword_6553CC == 0;
  v79 = (_BYTE *)v78;
  *(_QWORD *)(a4 + 120) = v78;
  if ( !v35 )
  {
    if ( v77 == 0x80000000 )
    {
      v77 = -1;
    }
    else if ( v77 >= 0 )
    {
      v80 = *(_DWORD *)(a4 + 48);
      goto LABEL_65;
    }
    v80 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) < v80 )
      *(_DWORD *)(a4 + 44) = v80;
LABEL_65:
    *(_DWORD *)(a4 + 48) = v77 + v80;
  }
  if ( (unsigned __int64)(v78 + 5) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v79 = *(_BYTE **)(a4 + 120);
  }
  *v79 = 120;
  v81 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v81;
  *v81 = HIBYTE(v141);
  v82 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v82;
  *v82 = BYTE2(v141);
  v83 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v83;
  *v83 = BYTE1(v141);
  v84 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a4 + 120) = v84 + 1;
  *(_BYTE *)(v84 + 1) = v141;
  *(_DWORD *)(a4 + 3276) = 0;
  v85 = dword_65530C;
  v86 = *(_QWORD *)(a4 + 120) + 1LL;
  v35 = dword_65530C == 0;
  v87 = (_BYTE *)v86;
  *(_QWORD *)(a4 + 120) = v86;
  if ( !v35 )
  {
    if ( v85 == 0x80000000 )
      v85 = 1 - v141;
    if ( v85 < 0 )
    {
      v88 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v88 )
        *(_DWORD *)(a4 + 44) = v88;
    }
    else
    {
      v88 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v85 + v88;
  }
  if ( (unsigned __int64)(v86 + 4) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v87 = *(_BYTE **)(a4 + 120);
  }
  *v87 = HIBYTE(v140);
  v89 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v89;
  *v89 = BYTE2(v140);
  v90 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v90;
  *v90 = BYTE1(v140);
  v91 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a4 + 120) = v91 + 1;
  *(_BYTE *)(v91 + 1) = v140;
  ++*(_QWORD *)(a4 + 120);
  sub_43C580(a4, 0, v143);
  v92 = *(_BYTE **)(a4 + 120);
  v35 = v92 == *(_BYTE **)(a4 + 128);
  *(_DWORD *)(*(_QWORD *)(a4 + 168) + 28 * v60 + 24) = (_DWORD)v92 - *(_DWORD *)(a4 + 112);
  if ( v35 )
  {
    sub_439150(a4);
    v92 = *(_BYTE **)(a4 + 120);
  }
  *v92 = 71;
  *(_DWORD *)(a4 + 3276) = 0;
  v93 = dword_654CEC;
  v94 = *(_QWORD *)(a4 + 120) + 1LL;
  v35 = dword_654CEC == 0;
  v95 = (_BYTE *)v94;
  *(_QWORD *)(a4 + 120) = v94;
  if ( !v35 )
  {
    if ( v93 == 0x80000000 )
    {
      v96 = *(_DWORD *)(a4 + 48);
      v93 = 1;
    }
    else if ( v93 < 0 )
    {
      v96 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v96 )
        *(_DWORD *)(a4 + 44) = v96;
    }
    else
    {
      v96 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v93 + v96;
  }
  if ( v94 == *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v95 = *(_BYTE **)(a4 + 120);
  }
  *v95 = 108;
  *(_DWORD *)(a4 + 3276) = 0;
  v97 = dword_65518C;
  v98 = *(_QWORD *)(a4 + 120) + 1LL;
  v35 = dword_65518C == 0;
  v99 = (_BYTE *)v98;
  *(_QWORD *)(a4 + 120) = v98;
  if ( !v35 )
  {
    if ( v97 == 0x80000000 )
    {
      v100 = *(_DWORD *)(a4 + 48);
      v97 = 1;
    }
    else if ( v97 < 0 )
    {
      v100 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v100 )
        *(_DWORD *)(a4 + 44) = v100;
    }
    else
    {
      v100 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v97 + v100;
  }
  if ( v98 == *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v99 = *(_BYTE **)(a4 + 120);
  }
  *v99 = 70;
  *(_DWORD *)(a4 + 3276) = 0;
  v101 = dword_654CCC;
  v102 = *(_QWORD *)(a4 + 120) + 1LL;
  v35 = dword_654CCC == 0;
  v103 = (_BYTE *)v102;
  *(_QWORD *)(a4 + 120) = v102;
  if ( !v35 )
  {
    if ( v101 == 0x80000000 )
    {
      v104 = *(_DWORD *)(a4 + 48);
      v101 = 1;
    }
    else if ( v101 < 0 )
    {
      v104 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v104 )
        *(_DWORD *)(a4 + 44) = v104;
    }
    else
    {
      v104 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v101 + v104;
  }
  if ( (unsigned __int64)(v102 + 5) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v103 = *(_BYTE **)(a4 + 120);
  }
  *v103 = 126;
  v105 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v105;
  *v105 = 0;
  v106 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v106;
  *v106 = 0;
  v107 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v107;
  *v107 = 0;
  v108 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a4 + 120) = v108 + 1;
  *(_BYTE *)(v108 + 1) = 3;
  *(_DWORD *)(a4 + 3276) = 0;
  v109 = dword_6553CC;
  v110 = *(_QWORD *)(a4 + 120) + 1LL;
  v35 = dword_6553CC == 0;
  v111 = (_BYTE *)v110;
  *(_QWORD *)(a4 + 120) = v110;
  if ( !v35 )
  {
    if ( v109 == 0x80000000 )
    {
      v109 = -2;
    }
    else if ( v109 >= 0 )
    {
      v112 = *(_DWORD *)(a4 + 48);
      goto LABEL_103;
    }
    v112 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) < v112 )
      *(_DWORD *)(a4 + 44) = v112;
LABEL_103:
    *(_DWORD *)(a4 + 48) = v109 + v112;
  }
  if ( (unsigned __int64)(v110 + 5) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v111 = *(_BYTE **)(a4 + 120);
  }
  *v111 = 120;
  v113 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v113;
  *v113 = HIBYTE(v141);
  v114 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v114;
  *v114 = BYTE2(v141);
  v115 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v115;
  *v115 = BYTE1(v141);
  v116 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a4 + 120) = v116 + 1;
  *(_BYTE *)(v116 + 1) = v141;
  *(_DWORD *)(a4 + 3276) = 0;
  v117 = dword_65530C;
  v118 = *(_QWORD *)(a4 + 120) + 1LL;
  v35 = dword_65530C == 0;
  v119 = (_BYTE *)v118;
  *(_QWORD *)(a4 + 120) = v118;
  if ( !v35 )
  {
    if ( v117 == 0x80000000 )
      v117 = 1 - v141;
    if ( v117 < 0 )
    {
      v120 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v120 )
        *(_DWORD *)(a4 + 44) = v120;
    }
    else
    {
      v120 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v117 + v120;
  }
  if ( (unsigned __int64)(v118 + 4) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v119 = *(_BYTE **)(a4 + 120);
  }
  *v119 = HIBYTE(v140);
  v121 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v121;
  *v121 = BYTE2(v140);
  v122 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v122;
  *v122 = BYTE1(v140);
  v123 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a4 + 120) = v123 + 1;
  *(_BYTE *)(v123 + 1) = v140;
  v124 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  v35 = v124 == *(_BYTE **)(a4 + 128);
  *(_QWORD *)(a4 + 120) = v124;
  if ( v35 )
  {
    sub_439150(a4);
    v124 = *(_BYTE **)(a4 + 120);
  }
  *v124 = 109;
  *(_DWORD *)(a4 + 3276) = 0;
  v125 = dword_6551AC;
  v126 = *(_QWORD *)(a4 + 120) + 1LL;
  v35 = dword_6551AC == 0;
  *(_QWORD *)(a4 + 120) = v126;
  if ( !v35 )
  {
    if ( v125 == 0x80000000 )
    {
      v127 = *(_DWORD *)(a4 + 48);
      v125 = 1;
    }
    else if ( v125 < 0 )
    {
      v127 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v127 )
        *(_DWORD *)(a4 + 44) = v127;
    }
    else
    {
      v127 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v125 + v127;
  }
  if ( (unsigned int)sub_43C6D0(a4, v143, (unsigned int)(v126 - *(_DWORD *)(a4 + 112) - v144), 127) )
    sub_47D740(
      (unsigned int)"TclCompileDictCmd(update): bad jump distance %d",
      *(_QWORD *)(a4 + 120) - *(_DWORD *)(a4 + 112) - v144,
      v128,
      v129,
      v130,
      v131);
  sub_449510(a1, v139);
  return 0;
}

