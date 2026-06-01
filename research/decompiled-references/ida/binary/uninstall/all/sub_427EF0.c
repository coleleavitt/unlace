__int64 __fastcall sub_427EF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r13
  int v7; // r14d
  int v8; // r15d
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // ebp
  __int64 v17; // r15
  _BYTE *v18; // rcx
  int v19; // edx
  __int64 v20; // rsi
  bool v21; // zf
  _BYTE *v22; // rcx
  int v23; // eax
  _BYTE *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rsi
  _BYTE *v30; // rcx
  int v31; // eax
  char v32; // al
  _BYTE *v33; // rcx
  __int64 v34; // rcx
  int v35; // edx
  _BYTE *v36; // rcx
  int v37; // eax
  int v38; // edx
  _BYTE *v39; // rcx
  int v40; // eax
  _BYTE *v41; // rcx
  _BYTE *v42; // rcx
  _BYTE *v43; // rcx
  __int64 v44; // rax
  int v45; // edx
  __int64 v46; // rsi
  _BYTE *v47; // rcx
  int v48; // eax
  _BYTE *v49; // rcx
  _BYTE *v50; // rcx
  _BYTE *v51; // rcx
  _BYTE *v52; // rcx
  _BYTE *v53; // rcx
  _BYTE *v54; // rcx
  _BYTE *v55; // rcx
  __int64 v56; // rax
  int v57; // edx
  __int64 v58; // rsi
  _BYTE *v59; // rcx
  int v60; // eax
  _BYTE *v61; // rcx
  _BYTE *v62; // rcx
  _BYTE *v63; // rcx
  __int64 v64; // rax
  int v65; // edx
  __int64 v66; // rsi
  _BYTE *v67; // rcx
  int v68; // eax
  __int64 v69; // rcx
  _BYTE *v70; // rcx
  _BYTE *v71; // rcx
  _BYTE *v72; // rcx
  _BYTE *v73; // rcx
  __int64 v74; // rax
  int v75; // edx
  __int64 v76; // rsi
  _BYTE *v77; // rcx
  int v78; // eax
  _BYTE *v79; // rcx
  _BYTE *v80; // rcx
  _BYTE *v81; // rcx
  __int64 v82; // rax
  int v83; // edx
  __int64 v84; // rsi
  _BYTE *v85; // rcx
  int v86; // eax
  char v87; // al
  _BYTE *v88; // rcx
  __int64 v89; // rcx
  char v90; // al
  _BYTE *v91; // rcx
  char v92; // al
  _BYTE *v93; // rcx
  _BYTE *v94; // rcx
  unsigned int v95; // eax
  _BYTE *v96; // rcx
  __int64 v97; // rcx
  char v98; // al
  _BYTE *v99; // rcx
  char v100; // al
  _BYTE *v101; // rcx
  _BYTE *v102; // rcx
  unsigned int v103; // eax
  _BYTE *v104; // rcx
  __int64 v105; // rcx
  _BYTE *v106; // rcx
  _BYTE *v107; // rcx
  _BYTE *v108; // rcx
  _BYTE *v109; // rcx
  __int64 v110; // rax
  int v111; // edx
  __int64 v112; // rsi
  _BYTE *v113; // rcx
  int v114; // eax
  _BYTE *v115; // rcx
  _BYTE *v116; // rcx
  _BYTE *v117; // rcx
  __int64 v118; // rax
  int v119; // edx
  __int64 v120; // rsi
  _BYTE *v121; // rcx
  int v122; // eax
  __int64 v123; // rcx
  _BYTE *v124; // rcx
  _BYTE *v125; // rcx
  _BYTE *v126; // rcx
  _BYTE *v127; // rcx
  __int64 v128; // rax
  int v129; // edx
  __int64 v130; // rsi
  _BYTE *v131; // rcx
  int v132; // eax
  _BYTE *v133; // rcx
  _BYTE *v134; // rcx
  _BYTE *v135; // rcx
  __int64 v136; // rax
  int v137; // edx
  __int64 v138; // rsi
  _BYTE *v139; // rcx
  int v140; // eax
  __int64 v141; // rcx
  int v142; // ebp
  _BYTE *v143; // rcx
  _BYTE *v144; // rcx
  int v145; // edx
  int v146; // eax
  _BYTE *v147; // rcx
  _BYTE *v148; // rcx
  _BYTE *v149; // rcx
  _BYTE *v150; // rcx
  _BYTE *v151; // rcx
  int v152; // [rsp+2Ch] [rbp-3Ch] BYREF
  int v153; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v154[13]; // [rsp+34h] [rbp-34h] BYREF

  result = 1;
  v6 = *(_QWORD *)(a4 + 3264);
  v7 = *(_DWORD *)(a2 + 28);
  v8 = *(_DWORD *)(v6 + 28) - 1;
  if ( v7 <= 2 )
    return result;
  v9 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL);
  v10 = v9 + 24;
  if ( *(_DWORD *)(v9 + 24) == 2 )
  {
    v142 = sub_471010(a4, *(_QWORD *)(v9 + 56), *(unsigned int *)(v9 + 64), 0);
    if ( v142 > 255 )
    {
      v147 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v147 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v147 = *(_BYTE **)(a4 + 120);
      }
      *v147 = 2;
      v148 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v148;
      *v148 = HIBYTE(v142);
      v149 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v149;
      *v149 = BYTE2(v142);
      v150 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v150;
      *v150 = BYTE1(v142);
      v151 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v151;
      *v151 = v142;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v145 = dword_65444C;
    }
    else
    {
      v143 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v143 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v143 = *(_BYTE **)(a4 + 120);
      }
      *v143 = 1;
      v144 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v144;
      *v144 = v142;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v145 = dword_65442C;
    }
    if ( !v145 )
      goto LABEL_4;
    if ( v145 == 0x80000000 )
      v145 = 1 - v142;
    if ( v145 < 0 )
    {
      v146 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v146 )
      {
        *(_DWORD *)(a4 + 44) = v146;
        *(_DWORD *)(a4 + 48) = v145 + v146;
        goto LABEL_4;
      }
    }
    else
    {
      v146 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v145 + v146;
  }
  else
  {
    v11 = *(_QWORD *)(v6 + 16);
    v12 = 24LL * v8;
    v13 = *(_QWORD *)(v12 + v11 + 8);
    v14 = *(_QWORD *)(*(_QWORD *)(v12 + v11 + 16) + 8LL);
    *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v13 + 4);
    v15 = *(unsigned int *)(v9 + 44);
    *(_QWORD *)(a4 + 3288) = v14;
    sub_4399D0(a1, v9 + 48, v15, a4);
  }
LABEL_4:
  v16 = 0;
  v17 = 24LL * v8;
  do
  {
    v10 += 24LL * *(int *)(v10 + 20) + 24;
    sub_41F660(
      a1,
      v10,
      a4,
      1u,
      (unsigned int *)&v152,
      &v153,
      v154,
      *(_DWORD *)(*(_QWORD *)(v17 + *(_QWORD *)(v6 + 16) + 8) + 4LL * v16 + 8),
      *(_QWORD *)(*(_QWORD *)(v17 + *(_QWORD *)(v6 + 16) + 16) + 8LL * v16 + 16));
    if ( !v153 )
    {
      v52 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v52 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v52 = *(_BYTE **)(a4 + 120);
      }
      *v52 = 95;
      v53 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v53;
      *v53 = 0;
      v54 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v54;
      *v54 = 0;
      v55 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v55;
      *v55 = 0;
      v56 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v56 + 1;
      *(_BYTE *)(v56 + 1) = 1;
      *(_DWORD *)(a4 + 3276) = 0;
      v57 = dword_654FEC;
      v58 = *(_QWORD *)(a4 + 120) + 1LL;
      v21 = dword_654FEC == 0;
      v59 = (_BYTE *)v58;
      *(_QWORD *)(a4 + 120) = v58;
      if ( !v21 )
      {
        if ( v57 == 0x80000000 )
        {
          v60 = *(_DWORD *)(a4 + 48);
          v57 = 0;
        }
        else if ( v57 < 0 )
        {
          v60 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v60 )
            *(_DWORD *)(a4 + 44) = v60;
        }
        else
        {
          v60 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v57 + v60;
      }
      if ( (unsigned __int64)(v58 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v59 = *(_BYTE **)(a4 + 120);
      }
      *v59 = 103;
      v61 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v61;
      *v61 = HIBYTE(v16);
      v62 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v62;
      *v62 = BYTE2(v16);
      v63 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v63;
      *v63 = BYTE1(v16);
      v64 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v64 + 1;
      *(_BYTE *)(v64 + 1) = v16;
      *(_DWORD *)(a4 + 3276) = 0;
      v65 = dword_6550EC;
      v66 = *(_QWORD *)(a4 + 120) + 1LL;
      v21 = dword_6550EC == 0;
      v67 = (_BYTE *)v66;
      *(_QWORD *)(a4 + 120) = v66;
      if ( !v21 )
      {
        if ( v65 == 0x80000000 )
          v65 = 1 - v16;
        if ( v65 < 0 )
        {
          v68 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v68 )
            *(_DWORD *)(a4 + 44) = v68;
        }
        else
        {
          v68 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v65 + v68;
      }
      if ( v66 == *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v67 = *(_BYTE **)(a4 + 120);
      }
      *v67 = 23;
      v69 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v35 = dword_6546EC;
      v36 = (_BYTE *)(v69 + 1);
      *(_QWORD *)(a4 + 120) = v36;
      goto LABEL_75;
    }
    if ( !v154[0] )
    {
      if ( v152 >= 0 )
      {
        v70 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v70 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v70 = *(_BYTE **)(a4 + 120);
        }
        *v70 = 95;
        v71 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v71;
        *v71 = 0;
        v72 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v72;
        *v72 = 0;
        v73 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v73;
        *v73 = 0;
        v74 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v74 + 1;
        *(_BYTE *)(v74 + 1) = 1;
        *(_DWORD *)(a4 + 3276) = 0;
        v75 = dword_654FEC;
        v76 = *(_QWORD *)(a4 + 120) + 1LL;
        v21 = dword_654FEC == 0;
        v77 = (_BYTE *)v76;
        *(_QWORD *)(a4 + 120) = v76;
        if ( !v21 )
        {
          if ( v75 == 0x80000000 )
          {
            v78 = *(_DWORD *)(a4 + 48);
            v75 = 0;
          }
          else if ( v75 < 0 )
          {
            v78 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v78 )
              *(_DWORD *)(a4 + 44) = v78;
          }
          else
          {
            v78 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v75 + v78;
        }
        if ( (unsigned __int64)(v76 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v77 = *(_BYTE **)(a4 + 120);
        }
        *v77 = 103;
        v79 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v79;
        *v79 = HIBYTE(v16);
        v80 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v80;
        *v80 = BYTE2(v16);
        v81 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v81;
        *v81 = BYTE1(v16);
        v82 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v82 + 1;
        *(_BYTE *)(v82 + 1) = v16;
        *(_DWORD *)(a4 + 3276) = 0;
        v83 = dword_6550EC;
        v84 = *(_QWORD *)(a4 + 120) + 1LL;
        v21 = dword_6550EC == 0;
        v85 = (_BYTE *)v84;
        *(_QWORD *)(a4 + 120) = v84;
        if ( !v21 )
        {
          if ( v83 == 0x80000000 )
            v83 = 1 - v16;
          if ( v83 < 0 )
          {
            v86 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v86 )
              *(_DWORD *)(a4 + 44) = v86;
          }
          else
          {
            v86 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v83 + v86;
        }
        if ( v152 > 255 )
        {
          if ( (unsigned __int64)(v84 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v85 = *(_BYTE **)(a4 + 120);
          }
          *v85 = 21;
          v90 = HIBYTE(v152);
          v91 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v91;
          *v91 = v90;
          v92 = BYTE2(v152);
          v93 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v93;
          *v93 = v92;
          v94 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          v95 = (unsigned int)v152 >> 8;
          *(_QWORD *)(a4 + 120) = v94;
          *v94 = v95;
          LOBYTE(v95) = v152;
          v96 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v96;
          *v96 = v95;
          v97 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v35 = dword_6546AC;
          v36 = (_BYTE *)(v97 + 1);
          *(_QWORD *)(a4 + 120) = v36;
        }
        else
        {
          if ( (unsigned __int64)(v84 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v85 = *(_BYTE **)(a4 + 120);
          }
          *v85 = 20;
          v87 = v152;
          v88 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v88;
          *v88 = v87;
          v89 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v35 = dword_65468C;
          v36 = (_BYTE *)(v89 + 1);
          *(_QWORD *)(a4 + 120) = v36;
        }
        goto LABEL_27;
      }
      v106 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v106 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v106 = *(_BYTE **)(a4 + 120);
      }
      *v106 = 95;
      v107 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v107;
      *v107 = 0;
      v108 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v108;
      *v108 = 0;
      v109 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v109;
      *v109 = 0;
      v110 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v110 + 1;
      *(_BYTE *)(v110 + 1) = 2;
      *(_DWORD *)(a4 + 3276) = 0;
      v111 = dword_654FEC;
      v112 = *(_QWORD *)(a4 + 120) + 1LL;
      v21 = dword_654FEC == 0;
      v113 = (_BYTE *)v112;
      *(_QWORD *)(a4 + 120) = v112;
      if ( v21 )
        goto LABEL_113;
      if ( v111 == 0x80000000 )
      {
        v111 = -1;
      }
      else if ( v111 >= 0 )
      {
        v114 = *(_DWORD *)(a4 + 48);
LABEL_112:
        *(_DWORD *)(a4 + 48) = v111 + v114;
LABEL_113:
        if ( (unsigned __int64)(v112 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v113 = *(_BYTE **)(a4 + 120);
        }
        *v113 = 103;
        v115 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v115;
        *v115 = HIBYTE(v16);
        v116 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v116;
        *v116 = BYTE2(v16);
        v117 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v117;
        *v117 = BYTE1(v16);
        v118 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v118 + 1;
        *(_BYTE *)(v118 + 1) = v16;
        *(_DWORD *)(a4 + 3276) = 0;
        v119 = dword_6550EC;
        v120 = *(_QWORD *)(a4 + 120) + 1LL;
        v21 = dword_6550EC == 0;
        v121 = (_BYTE *)v120;
        *(_QWORD *)(a4 + 120) = v120;
        if ( !v21 )
        {
          if ( v119 == 0x80000000 )
            v119 = 1 - v16;
          if ( v119 < 0 )
          {
            v122 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v122 )
              *(_DWORD *)(a4 + 44) = v122;
          }
          else
          {
            v122 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v119 + v122;
        }
        if ( v120 == *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v121 = *(_BYTE **)(a4 + 120);
        }
        *v121 = 22;
        v123 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v35 = dword_6546CC;
        v36 = (_BYTE *)(v123 + 1);
        *(_QWORD *)(a4 + 120) = v36;
        goto LABEL_75;
      }
      v114 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v114 )
        *(_DWORD *)(a4 + 44) = v114;
      goto LABEL_112;
    }
    if ( v152 >= 0 )
    {
      v18 = *(_BYTE **)(a4 + 120);
      if ( v18 == *(_BYTE **)(a4 + 128) )
      {
        sub_439150(a4);
        v18 = *(_BYTE **)(a4 + 120);
      }
      *v18 = 4;
      *(_DWORD *)(a4 + 3276) = 0;
      v19 = dword_65448C;
      v20 = *(_QWORD *)(a4 + 120) + 1LL;
      v21 = dword_65448C == 0;
      v22 = (_BYTE *)v20;
      *(_QWORD *)(a4 + 120) = v20;
      if ( !v21 )
      {
        if ( v19 == 0x80000000 )
        {
          v23 = *(_DWORD *)(a4 + 48);
          v19 = 1;
        }
        else if ( v19 < 0 )
        {
          v23 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v23 )
            *(_DWORD *)(a4 + 44) = v23;
        }
        else
        {
          v23 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v19 + v23;
      }
      if ( (unsigned __int64)(v20 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v22 = *(_BYTE **)(a4 + 120);
      }
      *v22 = 103;
      v24 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v24;
      *v24 = HIBYTE(v16);
      v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v25;
      *v25 = BYTE2(v16);
      v26 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v26;
      *v26 = BYTE1(v16);
      v27 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v27 + 1;
      *(_BYTE *)(v27 + 1) = v16;
      *(_DWORD *)(a4 + 3276) = 0;
      v28 = dword_6550EC;
      v29 = *(_QWORD *)(a4 + 120) + 1LL;
      v21 = dword_6550EC == 0;
      v30 = (_BYTE *)v29;
      *(_QWORD *)(a4 + 120) = v29;
      if ( !v21 )
      {
        if ( v28 == 0x80000000 )
          v28 = 1 - v16;
        if ( v28 < 0 )
        {
          v31 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v31 )
            *(_DWORD *)(a4 + 44) = v31;
        }
        else
        {
          v31 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v28 + v31;
      }
      if ( v152 > 255 )
      {
        if ( (unsigned __int64)(v29 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v30 = *(_BYTE **)(a4 + 120);
        }
        *v30 = 18;
        v98 = HIBYTE(v152);
        v99 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v99;
        *v99 = v98;
        v100 = BYTE2(v152);
        v101 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v101;
        *v101 = v100;
        v102 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        v103 = (unsigned int)v152 >> 8;
        *(_QWORD *)(a4 + 120) = v102;
        *v102 = v103;
        LOBYTE(v103) = v152;
        v104 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v104;
        *v104 = v103;
        v105 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v35 = dword_65464C;
        v36 = (_BYTE *)(v105 + 1);
        *(_QWORD *)(a4 + 120) = v36;
      }
      else
      {
        if ( (unsigned __int64)(v29 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v30 = *(_BYTE **)(a4 + 120);
        }
        *v30 = 17;
        v32 = v152;
        v33 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v33;
        *v33 = v32;
        v34 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v35 = dword_65462C;
        v36 = (_BYTE *)(v34 + 1);
        *(_QWORD *)(a4 + 120) = v36;
      }
LABEL_27:
      if ( !v35 )
        goto LABEL_33;
      if ( v35 == 0x80000000 )
        v35 = 1 - v152;
      goto LABEL_30;
    }
    v124 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v124 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v124 = *(_BYTE **)(a4 + 120);
    }
    *v124 = 95;
    v125 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v125;
    *v125 = 0;
    v126 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v126;
    *v126 = 0;
    v127 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v127;
    *v127 = 0;
    v128 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v128 + 1;
    *(_BYTE *)(v128 + 1) = 1;
    *(_DWORD *)(a4 + 3276) = 0;
    v129 = dword_654FEC;
    v130 = *(_QWORD *)(a4 + 120) + 1LL;
    v21 = dword_654FEC == 0;
    v131 = (_BYTE *)v130;
    *(_QWORD *)(a4 + 120) = v130;
    if ( !v21 )
    {
      if ( v129 == 0x80000000 )
      {
        v132 = *(_DWORD *)(a4 + 48);
        v129 = 0;
      }
      else if ( v129 < 0 )
      {
        v132 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v132 )
          *(_DWORD *)(a4 + 44) = v132;
      }
      else
      {
        v132 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v129 + v132;
    }
    if ( (unsigned __int64)(v130 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v131 = *(_BYTE **)(a4 + 120);
    }
    *v131 = 103;
    v133 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v133;
    *v133 = HIBYTE(v16);
    v134 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v134;
    *v134 = BYTE2(v16);
    v135 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v135;
    *v135 = BYTE1(v16);
    v136 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v136 + 1;
    *(_BYTE *)(v136 + 1) = v16;
    *(_DWORD *)(a4 + 3276) = 0;
    v137 = dword_6550EC;
    v138 = *(_QWORD *)(a4 + 120) + 1LL;
    v21 = dword_6550EC == 0;
    v139 = (_BYTE *)v138;
    *(_QWORD *)(a4 + 120) = v138;
    if ( !v21 )
    {
      if ( v137 == 0x80000000 )
        v137 = 1 - v16;
      if ( v137 < 0 )
      {
        v140 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v140 )
          *(_DWORD *)(a4 + 44) = v140;
      }
      else
      {
        v140 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v137 + v140;
    }
    if ( v138 == *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v139 = *(_BYTE **)(a4 + 120);
    }
    *v139 = 19;
    v141 = *(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v35 = dword_65466C;
    v36 = (_BYTE *)(v141 + 1);
    *(_QWORD *)(a4 + 120) = v36;
LABEL_75:
    if ( v35 )
    {
      if ( v35 == 0x80000000 )
      {
        v37 = *(_DWORD *)(a4 + 48);
        v35 = 1;
LABEL_32:
        *(_DWORD *)(a4 + 48) = v35 + v37;
        goto LABEL_33;
      }
LABEL_30:
      if ( v35 < 0 )
      {
        v37 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v37 )
          *(_DWORD *)(a4 + 44) = v37;
      }
      else
      {
        v37 = *(_DWORD *)(a4 + 48);
      }
      goto LABEL_32;
    }
LABEL_33:
    if ( v36 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v36 = *(_BYTE **)(a4 + 120);
    }
    *v36 = 3;
    *(_DWORD *)(a4 + 3276) = 0;
    v38 = dword_65446C;
    v39 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    v21 = dword_65446C == 0;
    *(_QWORD *)(a4 + 120) = v39;
    if ( !v21 )
    {
      if ( v38 == 0x80000000 )
      {
        v40 = *(_DWORD *)(a4 + 48);
        v38 = 1;
      }
      else if ( v38 < 0 )
      {
        v40 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v40 )
          *(_DWORD *)(a4 + 44) = v40;
      }
      else
      {
        v40 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v38 + v40;
    }
    ++v16;
  }
  while ( v7 - 2 > v16 );
  if ( (unsigned __int64)(v39 + 5) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v39 = *(_BYTE **)(a4 + 120);
  }
  *v39 = 104;
  v41 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v41;
  *v41 = HIBYTE(v16);
  v42 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v42;
  *v42 = BYTE2(v16);
  v43 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v43;
  *v43 = BYTE1(v16);
  v44 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a4 + 120) = v44 + 1;
  *(_BYTE *)(v44 + 1) = v16;
  *(_DWORD *)(a4 + 3276) = 0;
  v45 = dword_65510C;
  v46 = *(_QWORD *)(a4 + 120) + 1LL;
  v21 = dword_65510C == 0;
  v47 = (_BYTE *)v46;
  *(_QWORD *)(a4 + 120) = v46;
  if ( !v21 )
  {
    if ( v45 == 0x80000000 )
      v45 = 1 - v16;
    if ( v45 < 0 )
    {
      v48 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v48 )
        *(_DWORD *)(a4 + 44) = v48;
    }
    else
    {
      v48 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v45 + v48;
  }
  if ( (unsigned __int64)(v46 + 4) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v47 = *(_BYTE **)(a4 + 120);
  }
  *v47 = -1;
  v49 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v49;
  *v49 = -1;
  v50 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v50;
  *v50 = -1;
  v51 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v51;
  *v51 = -2;
  result = 0;
  ++*(_QWORD *)(a4 + 120);
  return result;
}

