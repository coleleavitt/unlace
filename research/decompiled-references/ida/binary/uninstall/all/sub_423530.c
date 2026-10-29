__int64 __fastcall sub_423530(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edx
  __int64 v7; // r13
  int v8; // eax
  int v9; // ecx
  int v10; // r14d
  int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  _BYTE *v15; // rdi
  int v16; // r13d
  _BYTE *v17; // rdi
  _BYTE *v18; // rdi
  __int64 v19; // rdx
  _BYTE *v20; // rdi
  int v21; // eax
  __int64 v22; // rdi
  bool v23; // zf
  int v24; // esi
  int v25; // eax
  __int64 v26; // r12
  __int64 v27; // rcx
  int v28; // edx
  int v29; // edx
  int v30; // ebp
  _BYTE *v31; // rdi
  _BYTE *v32; // rdi
  int v33; // eax
  int v34; // esi
  _BYTE *v35; // rdi
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  _BYTE *v39; // rdi
  int v40; // esi
  int v41; // eax
  __int64 v42; // rdx
  int v43; // esi
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  _BYTE *v48; // rdi
  int v49; // eax
  _BYTE *v50; // rdi
  int v51; // esi
  __int64 v52; // rcx
  int v53; // edx
  __int64 v54; // rax
  _BYTE *v55; // rdi
  int v56; // esi
  _BYTE *v57; // rdi
  _BYTE *v58; // rdi
  _BYTE *v59; // rdi
  _BYTE *v60; // rdi
  int v61; // eax
  _BYTE *v62; // rdi
  int v63; // esi
  _BYTE *v64; // rdi
  __int64 v65; // rdi
  int v66; // eax
  int v67; // esi
  int v68; // edx
  __int64 v69; // rax
  _BYTE *v70; // rdi
  int v71; // esi
  _BYTE *v72; // rdi
  _BYTE *v73; // rdi
  _BYTE *v74; // rdi
  _BYTE *v75; // rdi
  int v76; // edx
  __int64 v77; // rax
  _BYTE *v78; // rdi
  int v79; // esi
  _BYTE *v80; // rdi
  __int64 v81; // rdi
  int v82; // eax
  _BYTE *v83; // rdi
  int v84; // esi
  int v85; // eax
  int v86; // esi
  _BYTE *v87; // rdi
  _BYTE *v88; // rdi
  _BYTE *v89; // rdi
  _BYTE *v90; // rdi
  int v91; // eax
  __int64 v92; // rdx
  _BYTE *v93; // rdi
  int v94; // esi
  int v95; // eax
  int v96; // esi
  int v97; // esi
  __int64 v99; // r12
  _BYTE *v100; // rdi
  _BYTE *v101; // rdi
  _BYTE *v102; // rdi
  __int64 v103; // rdx
  _BYTE *v104; // rdi
  int v105; // eax
  __int64 v106; // r8
  _BYTE *v107; // rdi
  int v108; // esi
  int v109; // eax
  __int64 v110; // rcx
  int v111; // edx
  int v112; // edx
  int v113; // eax
  __int64 v114; // rdx
  _BYTE *v115; // rdi
  int v116; // esi
  int v117; // eax
  int v118; // esi
  _BYTE *v119; // rdi
  _BYTE *v120; // rdi
  _BYTE *v121; // rdi
  __int64 v122; // rdx
  _BYTE *v123; // rdi
  _BYTE *v124; // rdi
  _BYTE *v125; // rdi
  _BYTE *v126; // rdi
  _BYTE *v127; // rdi
  __int64 v128; // rdi
  _BYTE *v129; // rdi
  _BYTE *v130; // rdi
  _BYTE *v131; // rdi
  _BYTE *v132; // rdi
  __int64 v133; // rdi
  _BYTE *v134; // rdi
  _BYTE *v135; // rdi
  _BYTE *v136; // rdi
  _BYTE *v137; // rdi
  int v138; // [rsp+Ch] [rbp-5Ch]
  int v139; // [rsp+10h] [rbp-58h]
  int v140; // [rsp+14h] [rbp-54h]
  _DWORD *v141; // [rsp+18h] [rbp-50h]
  _BYTE v142[4]; // [rsp+20h] [rbp-48h] BYREF
  int v143; // [rsp+24h] [rbp-44h]

  v4 = 1;
  v7 = *(_QWORD *)(a4 + 3264);
  v8 = *(_DWORD *)(a4 + 48);
  v9 = *(_DWORD *)(a2 + 28);
  v138 = v8;
  v10 = *(_DWORD *)(v7 + 28) - 1;
  if ( (unsigned int)(v9 - 2) > 2 )
    return v4;
  v139 = -1;
  v140 = -1;
  v141 = (_DWORD *)(*(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24);
  if ( v9 > 2 )
  {
    v99 = (__int64)&v141[6 * *(int *)(*(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 44) + 6];
    v140 = sub_41FD20(v99, a4);
    v4 = 1;
    if ( v140 < 0 )
      return v4;
    if ( *(_DWORD *)(a2 + 28) == 4 )
    {
      v139 = sub_41FD20(v99 + 24LL * *(int *)(v99 + 20) + 24, a4);
      v4 = 1;
      if ( v139 < 0 )
        return v4;
    }
  }
  v11 = sub_43C240(1, a4);
  v12 = *(_QWORD *)(v7 + 16);
  v13 = 24LL * v10;
  v14 = *(_DWORD *)(*(_QWORD *)(v13 + v12 + 8) + 4LL);
  *(_QWORD *)(a4 + 3288) = *(_QWORD *)(*(_QWORD *)(v13 + v12 + 16) + 8LL);
  *(_DWORD *)(a4 + 3272) = v14;
  if ( *v141 == 2 )
  {
    v15 = *(_BYTE **)(a4 + 120);
    v16 = *(_DWORD *)(a4 + 48);
    if ( (unsigned __int64)(v15 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v15 = *(_BYTE **)(a4 + 120);
    }
    *v15 = 69;
    v17 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v17;
    *v17 = HIBYTE(v11);
    v18 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v18;
    *v18 = BYTE2(v11);
    v19 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v19 + 1;
    *(_BYTE *)(v19 + 1) = BYTE1(v11);
    v20 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v20;
    *v20 = v11;
    *(_DWORD *)(a4 + 3276) = 0;
    v21 = dword_654CAC;
    v22 = *(_QWORD *)(a4 + 120) + 1LL;
    v23 = dword_654CAC == 0;
    *(_QWORD *)(a4 + 120) = v22;
    if ( !v23 )
    {
      if ( v21 == 0x80000000 )
        v21 = 1 - v11;
      if ( v21 < 0 )
      {
        v24 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v24 )
          *(_DWORD *)(a4 + 44) = v24;
      }
      else
      {
        v24 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v21 + v24;
    }
    v25 = *(_DWORD *)(a4 + 40);
    v26 = v11;
    v27 = *(_QWORD *)(a4 + 168);
    v28 = *(_DWORD *)(a4 + 36) + 1;
    *(_DWORD *)(a4 + 36) = v28;
    if ( v25 < v28 )
      v25 = v28;
    v29 = v22 - *(_DWORD *)(a4 + 112);
    *(_DWORD *)(a4 + 40) = v25;
    *(_DWORD *)(v27 + 28LL * v11 + 8) = v29;
    sub_43BFD0(a1, v141 + 6, (unsigned int)v141[5], a4);
  }
  else
  {
    sub_4399D0(a1, v141 + 6, (unsigned int)v141[5], a4);
    v100 = *(_BYTE **)(a4 + 120);
    v16 = *(_DWORD *)(a4 + 48);
    if ( (unsigned __int64)(v100 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v100 = *(_BYTE **)(a4 + 120);
    }
    *v100 = 69;
    v101 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v101;
    *v101 = HIBYTE(v11);
    v102 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v102;
    *v102 = BYTE2(v11);
    v103 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v103 + 1;
    *(_BYTE *)(v103 + 1) = BYTE1(v11);
    v104 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v104;
    *v104 = v11;
    *(_DWORD *)(a4 + 3276) = 0;
    v105 = dword_654CAC;
    v106 = *(_QWORD *)(a4 + 120) + 1LL;
    v23 = dword_654CAC == 0;
    v107 = (_BYTE *)v106;
    *(_QWORD *)(a4 + 120) = v106;
    if ( !v23 )
    {
      if ( v105 == 0x80000000 )
        v105 = 1 - v11;
      if ( v105 < 0 )
      {
        v108 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v108 )
          *(_DWORD *)(a4 + 44) = v108;
      }
      else
      {
        v108 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v105 + v108;
    }
    v109 = *(_DWORD *)(a4 + 40);
    v26 = v11;
    v110 = *(_QWORD *)(a4 + 168);
    v111 = *(_DWORD *)(a4 + 36) + 1;
    *(_DWORD *)(a4 + 36) = v111;
    if ( v109 < v111 )
      v109 = v111;
    v112 = v106 - *(_DWORD *)(a4 + 112);
    *(_DWORD *)(a4 + 40) = v109;
    v23 = v106 == *(_QWORD *)(a4 + 128);
    *(_DWORD *)(v110 + 28LL * v11 + 8) = v112;
    if ( v23 )
    {
      sub_439150(a4);
      v107 = *(_BYTE **)(a4 + 120);
    }
    *v107 = 4;
    *(_DWORD *)(a4 + 3276) = 0;
    v113 = dword_65448C;
    v114 = *(_QWORD *)(a4 + 120) + 1LL;
    v23 = dword_65448C == 0;
    v115 = (_BYTE *)v114;
    *(_QWORD *)(a4 + 120) = v114;
    if ( !v23 )
    {
      if ( v113 == 0x80000000 )
      {
        v116 = *(_DWORD *)(a4 + 48);
        v113 = 1;
      }
      else if ( v113 < 0 )
      {
        v116 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v116 )
          *(_DWORD *)(a4 + 44) = v116;
      }
      else
      {
        v116 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v113 + v116;
    }
    if ( v114 == *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v115 = *(_BYTE **)(a4 + 120);
    }
    *v115 = 8;
    *(_DWORD *)(a4 + 3276) = 0;
    v117 = dword_65450C;
    ++*(_QWORD *)(a4 + 120);
    if ( v117 )
    {
      if ( v117 == 0x80000000 )
      {
        v118 = *(_DWORD *)(a4 + 48);
        v117 = 1;
      }
      else if ( v117 < 0 )
      {
        v118 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v118 )
        {
          *(_DWORD *)(a4 + 44) = v118;
          *(_DWORD *)(a4 + 48) = v117 + v118;
          goto LABEL_15;
        }
      }
      else
      {
        v118 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v117 + v118;
    }
  }
LABEL_15:
  v30 = sub_471010(a4, "0", 1, 0);
  if ( v30 > 255 )
  {
    v119 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v119 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v119 = *(_BYTE **)(a4 + 120);
    }
    *v119 = 2;
    v120 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v120;
    *v120 = HIBYTE(v30);
    v121 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v121;
    *v121 = BYTE2(v30);
    v122 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v122 + 1;
    *(_BYTE *)(v122 + 1) = BYTE1(v30);
    v123 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v123;
    *v123 = v30;
    ++*(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v33 = dword_65444C;
  }
  else
  {
    v31 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v31 + 2) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v31 = *(_BYTE **)(a4 + 120);
    }
    *v31 = 1;
    v32 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v32;
    *v32 = v30;
    ++*(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v33 = dword_65442C;
  }
  if ( v33 )
  {
    if ( v33 == 0x80000000 )
      v33 = 1 - v30;
    if ( v33 < 0 )
    {
      v34 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v34 )
        *(_DWORD *)(a4 + 44) = v34;
    }
    else
    {
      v34 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v33 + v34;
  }
  sub_43C580(a4, 0, v142);
  v35 = *(_BYTE **)(a4 + 120);
  v36 = *(_QWORD *)(a4 + 168);
  *(_DWORD *)(a4 + 48) = v16;
  v23 = v35 == *(_BYTE **)(a4 + 128);
  *(_DWORD *)(v36 + 28 * v26 + 24) = (_DWORD)v35 - *(_DWORD *)(a4 + 112);
  if ( v23 )
  {
    sub_439150(a4);
    v35 = *(_BYTE **)(a4 + 120);
  }
  *v35 = 71;
  *(_DWORD *)(a4 + 3276) = 0;
  v37 = dword_654CEC;
  v38 = *(_QWORD *)(a4 + 120) + 1LL;
  v23 = dword_654CEC == 0;
  v39 = (_BYTE *)v38;
  *(_QWORD *)(a4 + 120) = v38;
  if ( !v23 )
  {
    if ( v37 == 0x80000000 )
    {
      v40 = *(_DWORD *)(a4 + 48);
      v37 = 1;
    }
    else if ( v37 < 0 )
    {
      v40 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v40 )
        *(_DWORD *)(a4 + 44) = v40;
    }
    else
    {
      v40 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v37 + v40;
  }
  if ( v38 == *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v39 = *(_BYTE **)(a4 + 120);
  }
  *v39 = 72;
  *(_DWORD *)(a4 + 3276) = 0;
  v41 = dword_654D0C;
  v42 = *(_QWORD *)(a4 + 120) + 1LL;
  v23 = dword_654D0C == 0;
  *(_QWORD *)(a4 + 120) = v42;
  if ( !v23 )
  {
    if ( v41 == 0x80000000 )
    {
      v43 = *(_DWORD *)(a4 + 48);
      v41 = 1;
    }
    else if ( v41 < 0 )
    {
      v43 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v43 )
        *(_DWORD *)(a4 + 44) = v43;
    }
    else
    {
      v43 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v41 + v43;
  }
  if ( (unsigned int)sub_43C6D0(a4, v142, (unsigned int)(v42 - *(_DWORD *)(a4 + 112) - v143), 127) )
  {
    sub_47D740(
      (unsigned int)"TclCompileCatchCmd: bad jump distance %d",
      *(_QWORD *)(a4 + 120) - *(_DWORD *)(a4 + 112) - v143,
      v44,
      v45,
      v46,
      v47);
    if ( v139 != -1 )
      goto LABEL_41;
LABEL_164:
    v50 = *(_BYTE **)(a4 + 120);
    goto LABEL_48;
  }
  if ( v139 == -1 )
    goto LABEL_164;
LABEL_41:
  v48 = *(_BYTE **)(a4 + 120);
  if ( v48 == *(_BYTE **)(a4 + 128) )
  {
    sub_439150(a4);
    v48 = *(_BYTE **)(a4 + 120);
  }
  *v48 = 108;
  *(_DWORD *)(a4 + 3276) = 0;
  v49 = dword_65518C;
  v50 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  v23 = dword_65518C == 0;
  *(_QWORD *)(a4 + 120) = v50;
  if ( !v23 )
  {
    if ( v49 == 0x80000000 )
    {
      v51 = *(_DWORD *)(a4 + 48);
      v49 = 1;
    }
    else if ( v49 < 0 )
    {
      v51 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v51 )
        *(_DWORD *)(a4 + 44) = v51;
    }
    else
    {
      v51 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v49 + v51;
  }
LABEL_48:
  v52 = *(_QWORD *)(a4 + 168);
  --*(_DWORD *)(a4 + 36);
  v23 = v50 == *(_BYTE **)(a4 + 128);
  *(_DWORD *)(28 * v26 + v52 + 12) = (_DWORD)v50 - *(_DWORD *)(a4 + 112) - *(_DWORD *)(28 * v26 + v52 + 8);
  if ( v23 )
  {
    sub_439150(a4);
    v50 = *(_BYTE **)(a4 + 120);
  }
  *v50 = 70;
  *(_DWORD *)(a4 + 3276) = 0;
  v53 = dword_654CCC;
  v54 = *(_QWORD *)(a4 + 120) + 1LL;
  v23 = dword_654CCC == 0;
  v55 = (_BYTE *)v54;
  *(_QWORD *)(a4 + 120) = v54;
  if ( !v23 )
  {
    if ( v53 == 0x80000000 )
    {
      v56 = *(_DWORD *)(a4 + 48);
      v53 = 1;
    }
    else if ( v53 < 0 )
    {
      v56 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v56 )
        *(_DWORD *)(a4 + 44) = v56;
    }
    else
    {
      v56 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v53 + v56;
  }
  if ( v139 == -1 )
  {
    if ( (unsigned __int64)(v54 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v55 = *(_BYTE **)(a4 + 120);
    }
    *v55 = 126;
    v134 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v134;
    *v134 = 0;
    v135 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v135;
    *v135 = 0;
    v136 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v136;
    *v136 = 0;
    v137 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v137;
    *v137 = 2;
    *(_DWORD *)(a4 + 3276) = 0;
    v61 = dword_6553CC;
    v62 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    v23 = dword_6553CC == 0;
    *(_QWORD *)(a4 + 120) = v62;
    if ( !v23 )
    {
      if ( v61 == 0x80000000 )
      {
        v61 = -1;
        goto LABEL_170;
      }
      goto LABEL_60;
    }
  }
  else
  {
    if ( (unsigned __int64)(v54 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v55 = *(_BYTE **)(a4 + 120);
    }
    *v55 = 126;
    v57 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v57;
    *v57 = 0;
    v58 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v58;
    *v58 = 0;
    v59 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v59;
    *v59 = 0;
    v60 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v60;
    *v60 = 3;
    *(_DWORD *)(a4 + 3276) = 0;
    v61 = dword_6553CC;
    v62 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    v23 = dword_6553CC == 0;
    *(_QWORD *)(a4 + 120) = v62;
    if ( !v23 )
    {
      if ( v61 == 0x80000000 )
      {
        v61 = -2;
        goto LABEL_170;
      }
LABEL_60:
      if ( v61 >= 0 )
      {
        v63 = *(_DWORD *)(a4 + 48);
LABEL_62:
        *(_DWORD *)(a4 + 48) = v61 + v63;
        goto LABEL_63;
      }
LABEL_170:
      v63 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v63 )
        *(_DWORD *)(a4 + 44) = v63;
      goto LABEL_62;
    }
  }
LABEL_63:
  if ( v140 != -1 )
  {
    if ( v140 > 255 )
    {
      if ( (unsigned __int64)(v62 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v62 = *(_BYTE **)(a4 + 120);
      }
      *v62 = 18;
      v129 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v129;
      *v129 = HIBYTE(v140);
      v130 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v130;
      *v130 = BYTE2(v140);
      v131 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v131;
      *v131 = BYTE1(v140);
      v132 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v132;
      *v132 = v140;
      v133 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v66 = dword_65464C;
      v62 = (_BYTE *)(v133 + 1);
      *(_QWORD *)(a4 + 120) = v62;
    }
    else
    {
      if ( (unsigned __int64)(v62 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v62 = *(_BYTE **)(a4 + 120);
      }
      *v62 = 17;
      v64 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v64;
      *v64 = v140;
      v65 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v66 = dword_65462C;
      v62 = (_BYTE *)(v65 + 1);
      *(_QWORD *)(a4 + 120) = v62;
    }
    if ( v66 )
    {
      if ( v66 == 0x80000000 )
        v66 = 1 - v140;
      if ( v66 < 0 )
      {
        v67 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v67 )
          *(_DWORD *)(a4 + 44) = v67;
      }
      else
      {
        v67 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v66 + v67;
    }
  }
  if ( v62 == *(_BYTE **)(a4 + 128) )
  {
    sub_439150(a4);
    v62 = *(_BYTE **)(a4 + 120);
  }
  *v62 = 3;
  *(_DWORD *)(a4 + 3276) = 0;
  v68 = dword_65446C;
  v69 = *(_QWORD *)(a4 + 120) + 1LL;
  v23 = dword_65446C == 0;
  v70 = (_BYTE *)v69;
  *(_QWORD *)(a4 + 120) = v69;
  if ( !v23 )
  {
    if ( v68 == 0x80000000 )
    {
      v71 = *(_DWORD *)(a4 + 48);
      v68 = 1;
    }
    else if ( v68 < 0 )
    {
      v71 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v71 )
        *(_DWORD *)(a4 + 44) = v71;
    }
    else
    {
      v71 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v68 + v71;
  }
  if ( v139 != -1 )
  {
    if ( (unsigned __int64)(v69 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v70 = *(_BYTE **)(a4 + 120);
    }
    *v70 = 126;
    v72 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v72;
    *v72 = 0;
    v73 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v73;
    *v73 = 0;
    v74 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v74;
    *v74 = 0;
    v75 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v75;
    *v75 = 2;
    *(_DWORD *)(a4 + 3276) = 0;
    v76 = dword_6553CC;
    v77 = *(_QWORD *)(a4 + 120) + 1LL;
    v23 = dword_6553CC == 0;
    v78 = (_BYTE *)v77;
    *(_QWORD *)(a4 + 120) = v77;
    if ( v23 )
      goto LABEL_89;
    if ( v76 == 0x80000000 )
    {
      v76 = -1;
    }
    else if ( v76 >= 0 )
    {
      v79 = *(_DWORD *)(a4 + 48);
LABEL_88:
      *(_DWORD *)(a4 + 48) = v76 + v79;
LABEL_89:
      if ( v139 > 255 )
      {
        if ( (unsigned __int64)(v77 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v78 = *(_BYTE **)(a4 + 120);
        }
        *v78 = 18;
        v124 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v124;
        *v124 = HIBYTE(v139);
        v125 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v125;
        *v125 = BYTE2(v139);
        v126 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v126;
        *v126 = BYTE1(v139);
        v127 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v127;
        *v127 = v139;
        v128 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v82 = dword_65464C;
        v83 = (_BYTE *)(v128 + 1);
        *(_QWORD *)(a4 + 120) = v83;
      }
      else
      {
        if ( (unsigned __int64)(v77 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v78 = *(_BYTE **)(a4 + 120);
        }
        *v78 = 17;
        v80 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v80;
        *v80 = v139;
        v81 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v82 = dword_65462C;
        v83 = (_BYTE *)(v81 + 1);
        *(_QWORD *)(a4 + 120) = v83;
      }
      if ( v82 )
      {
        if ( v82 == 0x80000000 )
          v82 = 1 - v139;
        if ( v82 < 0 )
        {
          v84 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v84 )
            *(_DWORD *)(a4 + 44) = v84;
        }
        else
        {
          v84 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v82 + v84;
      }
      if ( v83 == *(_BYTE **)(a4 + 128) )
      {
        sub_439150(a4);
        v83 = *(_BYTE **)(a4 + 120);
      }
      *v83 = 3;
      *(_DWORD *)(a4 + 3276) = 0;
      v85 = dword_65446C;
      v70 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      v23 = dword_65446C == 0;
      *(_QWORD *)(a4 + 120) = v70;
      if ( !v23 )
      {
        if ( v85 == 0x80000000 )
        {
          v86 = *(_DWORD *)(a4 + 48);
          v85 = 1;
        }
        else if ( v85 < 0 )
        {
          v86 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v86 )
            *(_DWORD *)(a4 + 44) = v86;
        }
        else
        {
          v86 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v85 + v86;
      }
      goto LABEL_106;
    }
    v79 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) < v79 )
      *(_DWORD *)(a4 + 44) = v79;
    goto LABEL_88;
  }
LABEL_106:
  if ( *v141 == 2 )
    goto LABEL_153;
  if ( (unsigned __int64)(v70 + 5) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v70 = *(_BYTE **)(a4 + 120);
  }
  *v70 = 126;
  v87 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v87;
  *v87 = 0;
  v88 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v88;
  *v88 = 0;
  v89 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v89;
  *v89 = 0;
  v90 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v90;
  *v90 = 2;
  *(_DWORD *)(a4 + 3276) = 0;
  v91 = dword_6553CC;
  v92 = *(_QWORD *)(a4 + 120) + 1LL;
  v23 = dword_6553CC == 0;
  v93 = (_BYTE *)v92;
  *(_QWORD *)(a4 + 120) = v92;
  if ( !v23 )
  {
    if ( v91 == 0x80000000 )
    {
      v91 = -1;
    }
    else if ( v91 >= 0 )
    {
      v94 = *(_DWORD *)(a4 + 48);
LABEL_113:
      *(_DWORD *)(a4 + 48) = v91 + v94;
      goto LABEL_114;
    }
    v94 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) < v94 )
      *(_DWORD *)(a4 + 44) = v94;
    goto LABEL_113;
  }
LABEL_114:
  if ( v92 == *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v93 = *(_BYTE **)(a4 + 120);
  }
  *v93 = 3;
  *(_DWORD *)(a4 + 3276) = 0;
  v95 = dword_65446C;
  ++*(_QWORD *)(a4 + 120);
  if ( v95 )
  {
    if ( v95 == 0x80000000 )
    {
      v96 = *(_DWORD *)(a4 + 48);
      v95 = 1;
    }
    else if ( v95 < 0 )
    {
      v96 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v96 )
        *(_DWORD *)(a4 + 44) = v96;
    }
    else
    {
      v96 = *(_DWORD *)(a4 + 48);
    }
    v97 = v95 + v96;
    *(_DWORD *)(a4 + 48) = v97;
    goto LABEL_121;
  }
LABEL_153:
  v97 = *(_DWORD *)(a4 + 48);
LABEL_121:
  if ( v97 != v138 + 1 )
    sub_47D740((unsigned int)"in TclCompileCatchCmd, currStackDepth = %d should be %d", v97, v138 + 1, v52, v46, v47);
  return 0;
}

