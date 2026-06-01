__int64 __fastcall sub_BC8BF0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  int v4; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  __m128i v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  _QWORD *v19; // r12
  __int64 v20; // r13
  _QWORD *v21; // rbp
  __int64 v22; // r12
  __int64 v23; // rax
  _QWORD *v24; // r12
  __int64 v25; // r13
  _QWORD *v26; // rbp
  __int64 v27; // r12
  _QWORD *v28; // r12
  __int64 v29; // r13
  _QWORD *v30; // rbp
  __int64 v31; // r12
  _QWORD *v32; // rbp
  __int64 v33; // r12
  __int64 v34; // r12
  _QWORD *v35; // rbp
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdi
  _QWORD *v43; // r12
  __int64 v44; // r13
  _QWORD *v45; // rbp
  __int64 v46; // r12
  _QWORD *v47; // rbp
  __int64 v48; // r12
  _QWORD *v49; // r12
  __int64 v50; // r13
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdi
  _QWORD *v58; // r12
  __int64 v59; // r13
  _QWORD *v60; // rbp
  __int64 v61; // r12
  __int64 v62; // r12
  _QWORD *v63; // rbp
  __int64 v64; // rax
  _QWORD *v65; // r12
  __int64 v66; // r13
  _QWORD *v67; // rbp
  __int64 v68; // r12
  _QWORD *v69; // rbp
  __int64 v70; // r12
  _QWORD *v71; // rbp
  __int64 v72; // r12
  _QWORD *v73; // rbp
  __int64 v74; // r12
  __int64 v75; // rax
  _QWORD *v76; // r12
  __int64 v77; // r13
  __int64 v78; // r12
  _QWORD *v79; // rbp
  _QWORD *v80; // r12
  __int64 v81; // r13
  _QWORD *v82; // r12
  __int64 v83; // r13
  _QWORD *v84; // r12
  __int64 v85; // r13
  _QWORD *v86; // rbp
  __int64 v87; // r12
  int v88; // r13d
  unsigned int v89; // r12d
  double v90; // xmm0_8
  _QWORD *v91; // rbp
  __int64 v92; // r12
  _QWORD *v93; // r12
  __int64 v94; // r13
  _QWORD *v95; // rbp
  __int64 v96; // r12
  __int64 v97; // r12
  _QWORD *v98; // rbp
  __int64 v99; // r12
  _QWORD *v100; // rbp
  _QWORD *v101; // r12
  _QWORD *v102; // r13
  __int64 v103; // rax
  _QWORD *v104; // rbp
  _QWORD *v105; // r12
  __int64 v106; // rax
  _QWORD *v107; // r12
  _QWORD *v108; // r13
  _QWORD *v109; // r12
  _QWORD *v110; // r13
  __int64 v111; // rax
  _QWORD *v112; // r12
  _QWORD *v113; // r13
  _QWORD *v114; // r12
  _QWORD *v115; // r13
  _QWORD *v116; // r12
  _QWORD *v117; // r13
  __int64 v118; // rax
  _QWORD *v119; // r12
  _QWORD *v120; // r13
  __int64 v121; // rax
  _QWORD *v122; // r12
  _QWORD *v123; // r13
  __int64 v124; // rax
  _QWORD *v125; // r12
  _QWORD *v126; // r13
  __int64 v127; // rax
  _QWORD *v128; // r12
  _QWORD *v129; // r13
  _QWORD *v130; // rbp
  _QWORD *v131; // r12
  _QWORD *v132; // rbp
  _QWORD *v133; // r12
  _QWORD *v134; // rbp
  _QWORD *v135; // r12
  _QWORD *v136; // r12
  _QWORD *v137; // r13
  _QWORD *v138; // r12
  _QWORD *v139; // r13
  _QWORD *v140; // r12
  _QWORD *v141; // r13
  _QWORD *v142; // r12
  _QWORD *v143; // r13
  _QWORD *v144; // r12
  _QWORD *v145; // r13
  _QWORD *v146; // r12
  _QWORD *v147; // r13
  _QWORD *v148; // rbp
  _QWORD *v149; // r12
  __int64 v150; // rax
  _QWORD *v151; // r12
  _QWORD *v152; // r13
  _QWORD *v153; // r12
  _QWORD *v154; // r13
  _QWORD *v155; // r12
  _QWORD *v156; // r13
  _QWORD *v157; // r12
  _QWORD *v158; // r13
  _QWORD *v159; // r12
  _QWORD *v160; // r13
  _QWORD *v161; // r12
  _QWORD *v162; // r13
  _QWORD *v163; // rbp
  _QWORD *v164; // r12
  _QWORD *v165; // rbp
  _QWORD *v166; // r12
  __int64 *v167; // r12
  __int64 *v168; // r13
  __int64 v169; // rsi
  __int64 *v170; // r12
  __int64 *v171; // r13
  __int64 v172; // rsi
  __int64 v173; // rax
  __int64 *v174; // rbp
  __int64 *v175; // r12
  __int64 v176; // rsi
  _QWORD *v177; // rbp
  _QWORD *v178; // r12
  __m128i v179; // [rsp+0h] [rbp-48h] BYREF
  __int64 v180; // [rsp+10h] [rbp-38h]
  __int64 v181; // [rsp+20h] [rbp-28h]
  __int64 v182; // [rsp+28h] [rbp-20h]

  if ( !a2 )
    return 1;
  v4 = *(_DWORD *)(a2 + 8) - 4;
  v182 = v3;
  v181 = v2;
  switch ( v4 )
  {
    case 0:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(
              *a1,
              *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24)) )
        return 0;
      v78 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      v79 = (_QWORD *)(a2 + 24);
      if ( v78 == a2 + 24 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v79) )
      {
        if ( (_QWORD *)v78 == ++v79 )
          return 1;
      }
      return 0;
    case 1:
    case 4:
    case 11:
    case 19:
    case 21:
    case 38:
    case 55:
    case 73:
    case 75:
    case 85:
    case 92:
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 16));
    case 2:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(
              *a1,
              *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24)) )
        return 0;
      v99 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      v100 = (_QWORD *)(a2 + 24);
      if ( v99 == a2 + 24 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v100) )
      {
        if ( (_QWORD *)v99 == ++v100 )
          return 1;
      }
      return 0;
    case 3:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 24)) )
        return 0;
      v97 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 72;
      v98 = (_QWORD *)(a2 + 72);
      if ( v97 == a2 + 72 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v98) )
      {
        if ( (_QWORD *)v97 == ++v98 )
          return 1;
      }
      return 0;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 12:
    case 13:
    case 16:
    case 17:
    case 23:
    case 26:
    case 27:
    case 29:
    case 35:
    case 39:
    case 42:
    case 44:
    case 46:
    case 50:
    case 52:
    case 53:
    case 54:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 64:
    case 69:
    case 70:
    case 72:
    case 74:
    case 79:
    case 80:
    case 82:
    case 83:
    case 84:
    case 87:
    case 88:
    case 89:
    case 91:
    case 96:
    case 97:
    case 99:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
      return 1;
    case 14:
      v64 = *(unsigned int *)(a2 + 16);
      v65 = (_QWORD *)(a2 + 24);
      v66 = a2 + 8 * v64 + 24;
      if ( v66 == a2 + 24 )
        goto LABEL_213;
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v65) )
          return 0;
        ++v65;
      }
      while ( (_QWORD *)v66 != v65 );
      v64 = *(unsigned int *)(a2 + 16);
LABEL_213:
      v109 = (_QWORD *)(a2 + 8 * v64 + 24);
      v110 = &v109[v64];
      if ( v109 != v110 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v109) )
            return 0;
          ++v109;
        }
        while ( v110 != v109 );
        v64 = *(unsigned int *)(a2 + 16);
      }
      v116 = (_QWORD *)(a2 + 16 * v64 + 24);
      v117 = &v116[v64];
      if ( v116 != v117 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v116) )
            return 0;
          ++v116;
        }
        while ( v117 != v116 );
        v64 = *(unsigned int *)(a2 + 16);
      }
      v132 = (_QWORD *)(a2 + 8 * (3 * v64 + 3));
      v133 = &v132[v64];
      if ( v132 == v133 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v132) )
      {
        if ( v133 == ++v132 )
          return 1;
      }
      return 0;
    case 15:
      v75 = *(unsigned int *)(a2 + 16);
      v76 = (_QWORD *)(a2 + 24);
      v77 = a2 + 8 * v75 + 24;
      if ( v77 == a2 + 24 )
        goto LABEL_195;
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v76) )
          return 0;
        ++v76;
      }
      while ( (_QWORD *)v77 != v76 );
      v75 = *(unsigned int *)(a2 + 16);
LABEL_195:
      v101 = (_QWORD *)(a2 + 8 * v75 + 24);
      v102 = &v101[v75];
      if ( v101 != v102 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v101) )
            return 0;
          ++v101;
        }
        while ( v102 != v101 );
        v75 = *(unsigned int *)(a2 + 16);
      }
      v114 = (_QWORD *)(a2 + 16 * v75 + 24);
      v115 = &v114[v75];
      if ( v114 != v115 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v114) )
            return 0;
          ++v114;
        }
        while ( v115 != v114 );
        v75 = *(unsigned int *)(a2 + 16);
      }
      v134 = (_QWORD *)(a2 + 8 * (3 * v75 + 3));
      v135 = &v134[v75];
      if ( v134 == v135 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v134) )
      {
        if ( v135 == ++v134 )
          return 1;
      }
      return 0;
    case 18:
      v69 = (_QWORD *)(a2 + 40);
      v70 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v70 == a2 + 40 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v69) )
      {
        if ( (_QWORD *)v70 == ++v69 )
          return 1;
      }
      return 0;
    case 20:
    case 105:
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 24));
    case 22:
    case 36:
    case 66:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 16)) )
        return 0;
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 40));
    case 24:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 16)) )
        return 0;
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 48));
    case 25:
      v26 = (_QWORD *)(a2 + 40);
      v27 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v27 == a2 + 40 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v26) )
      {
        if ( (_QWORD *)v27 == ++v26 )
          return 1;
      }
      return 0;
    case 28:
      v30 = (_QWORD *)(a2 + 24);
      v31 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v31 == a2 + 24 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v30) )
      {
        if ( (_QWORD *)v31 == ++v30 )
          return 1;
      }
      return 0;
    case 30:
    case 31:
    case 62:
    case 65:
    case 68:
    case 71:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 24)) )
        return 0;
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 16));
    case 32:
      v49 = (_QWORD *)(a2 + 40);
      v50 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v50 == a2 + 40 )
        goto LABEL_206;
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v49) )
          return 0;
        ++v49;
      }
      while ( (_QWORD *)v50 != v49 );
LABEL_206:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 24)) )
        return 0;
      v106 = *(unsigned int *)(a2 + 16);
      v107 = (_QWORD *)(a2 + 8 * v106 + 40);
      v108 = &v107[v106];
      if ( v107 != v108 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v107) )
            return 0;
          ++v107;
        }
        while ( v108 != v107 );
        v106 = *(unsigned int *)(a2 + 16);
      }
      v130 = (_QWORD *)(a2 + 16 * v106 + 40);
      v131 = &v130[v106];
      if ( v130 == v131 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v130) )
      {
        if ( v131 == ++v130 )
          return 1;
      }
      return 0;
    case 33:
      v47 = (_QWORD *)(a2 + 24);
      v48 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v48 == a2 + 24 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v47) )
      {
        if ( (_QWORD *)v48 == ++v47 )
          return 1;
      }
      return 0;
    case 34:
      v45 = (_QWORD *)(a2 + 104);
      v46 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 104;
      if ( v46 == a2 + 104 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v45) )
      {
        if ( (_QWORD *)v46 == ++v45 )
          return 1;
      }
      return 0;
    case 37:
      v91 = (_QWORD *)(a2 + 80);
      v92 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
      if ( v92 == a2 + 80 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v91) )
      {
        if ( (_QWORD *)v92 == ++v91 )
          return 1;
      }
      return 0;
    case 40:
    case 77:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 16)) )
        return 0;
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 32));
    case 41:
      v12 = *(_QWORD *)(a2 + 64);
      v13 = *(_QWORD *)(a2 + 56);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 88LL))(*a1, v13, v12) )
        return 0;
      v18 = *a1;
      v180 = *(_QWORD *)(a2 + 88);
      v179 = _mm_loadu_si128((const __m128i *)(a2 + 72));
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v18 + 64LL))(
              v18,
              v13,
              v14,
              v15,
              v16,
              v17,
              v179.m128i_i64[0],
              v179.m128i_i64[1],
              v180) )
        return 0;
      v19 = (_QWORD *)(a2 + 96);
      v20 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 96;
      if ( v20 == a2 + 96 )
        goto LABEL_242;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v19) )
      {
        if ( (_QWORD *)v20 == ++v19 )
        {
LABEL_242:
          if ( !(unsigned __int8)sub_BA54B0(a1, (_QWORD *)(a2 + 24)) )
            return 0;
          v121 = *(unsigned int *)(a2 + 16);
          v122 = (_QWORD *)(a2 + 8 * v121 + 96);
          v123 = &v122[v121];
          if ( v122 != v123 )
          {
            do
            {
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v122) )
                return 0;
              ++v122;
            }
            while ( v123 != v122 );
            v121 = *(unsigned int *)(a2 + 16);
          }
          v142 = (_QWORD *)(a2 + 16 * v121 + 96);
          v143 = &v142[v121];
          if ( v142 != v143 )
          {
            do
            {
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v142) )
                return 0;
              ++v142;
            }
            while ( v143 != v142 );
            v121 = *(unsigned int *)(a2 + 16);
          }
          v157 = (_QWORD *)(a2 + 24 * v121 + 96);
          v158 = &v157[v121];
          if ( v157 != v158 )
          {
            do
            {
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v157) )
                return 0;
              ++v157;
            }
            while ( v158 != v157 );
            v121 = *(unsigned int *)(a2 + 16);
          }
          v161 = (_QWORD *)(a2 + 32 * v121 + 96);
          v162 = &v161[v121];
          if ( v161 != v162 )
          {
            do
            {
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v161) )
                return 0;
              ++v161;
            }
            while ( v162 != v161 );
            v121 = *(unsigned int *)(a2 + 16);
          }
          v177 = (_QWORD *)(a2 + 40 * v121 + 96);
          v178 = &v177[v121];
          if ( v177 != v178 )
          {
            while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v177) )
            {
              if ( v178 == ++v177 )
                return 1;
            }
            return 0;
          }
          return 1;
        }
      }
      return 0;
    case 43:
      v71 = (_QWORD *)(a2 + 24);
      v72 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v72 == a2 + 24 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v71) )
      {
        if ( (_QWORD *)v72 == ++v71 )
          return 1;
      }
      return 0;
    case 45:
      v67 = (_QWORD *)(a2 + 32);
      v68 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 32;
      if ( v68 == a2 + 32 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v67) )
      {
        if ( (_QWORD *)v68 == ++v67 )
          return 1;
      }
      return 0;
    case 47:
      v73 = (_QWORD *)(a2 + 80);
      v74 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
      if ( v74 == a2 + 80 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v73) )
      {
        if ( (_QWORD *)v74 == ++v73 )
          return 1;
      }
      return 0;
    case 48:
      v80 = (_QWORD *)(a2 + 64);
      v81 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 64;
      if ( v81 == a2 + 64 )
        goto LABEL_218;
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v80) )
          return 0;
        ++v80;
      }
      while ( (_QWORD *)v81 != v80 );
LABEL_218:
      if ( !(unsigned __int8)sub_BA54B0(a1, (_QWORD *)(a2 + 24)) )
        return 0;
      v111 = *(unsigned int *)(a2 + 16);
      v112 = (_QWORD *)(a2 + 8 * v111 + 64);
      v113 = &v112[v111];
      if ( v112 != v113 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v112) )
            return 0;
          ++v112;
        }
        while ( v113 != v112 );
        v111 = *(unsigned int *)(a2 + 16);
      }
      v136 = (_QWORD *)(a2 + 16 * v111 + 64);
      v137 = &v136[v111];
      if ( v136 != v137 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v136) )
            return 0;
          ++v136;
        }
        while ( v137 != v136 );
        v111 = *(unsigned int *)(a2 + 16);
      }
      v138 = (_QWORD *)(a2 + 24 * v111 + 64);
      v139 = &v138[v111];
      if ( v138 != v139 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v138) )
            return 0;
          ++v138;
        }
        while ( v139 != v138 );
        v111 = *(unsigned int *)(a2 + 16);
      }
      v148 = (_QWORD *)(a2 + 32 * v111 + 64);
      v149 = &v148[v111];
      if ( v148 == v149 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v148) )
      {
        if ( v149 == ++v148 )
          return 1;
      }
      return 0;
    case 49:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(
              *a1,
              *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64))
        || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(
              *a1,
              *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 72)) )
      {
        return 0;
      }
      v93 = (_QWORD *)(a2 + 64);
      v94 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 64;
      if ( v94 == a2 + 64 )
        goto LABEL_236;
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v93) )
          return 0;
        ++v93;
      }
      while ( (_QWORD *)v94 != v93 );
LABEL_236:
      if ( !(unsigned __int8)sub_BA54B0(a1, (_QWORD *)(a2 + 24)) )
        return 0;
      v118 = *(unsigned int *)(a2 + 16);
      v119 = (_QWORD *)(a2 + 8 * v118 + 64);
      v120 = &v119[v118];
      if ( v119 != v120 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v119) )
            return 0;
          ++v119;
        }
        while ( v120 != v119 );
        v118 = *(unsigned int *)(a2 + 16);
      }
      v140 = (_QWORD *)(a2 + 16 * v118 + 64);
      v141 = &v140[v118];
      if ( v140 != v141 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v140) )
            return 0;
          ++v140;
        }
        while ( v141 != v140 );
        v118 = *(unsigned int *)(a2 + 16);
      }
      v153 = (_QWORD *)(a2 + 24 * v118 + 64);
      v154 = &v153[v118];
      if ( v153 != v154 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v153) )
            return 0;
          ++v153;
        }
        while ( v154 != v153 );
        v118 = *(unsigned int *)(a2 + 16);
      }
      v163 = (_QWORD *)(a2 + 32 * v118 + 64);
      v164 = &v163[v118];
      if ( v163 == v164 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v163) )
      {
        if ( v164 == ++v163 )
          return 1;
      }
      return 0;
    case 51:
      v86 = (_QWORD *)(a2 + 152);
      v87 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 152;
      if ( v87 == a2 + 152 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v86) )
      {
        if ( (_QWORD *)v87 == ++v86 )
          return 1;
      }
      return 0;
    case 63:
      v8 = *(unsigned int *)(a2 + 16);
      v82 = (_QWORD *)(a2 + 24);
      v83 = a2 + 8 * v8 + 24;
      if ( v83 == a2 + 24 )
        goto LABEL_6;
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v82) )
          return 0;
        ++v82;
      }
      while ( (_QWORD *)v83 != v82 );
      v8 = *(unsigned int *)(a2 + 16);
LABEL_6:
      v9 = 8 * v8;
      v11.m128i_i64[0] = a2 + 8 * v8 + 24;
      v10 = v11.m128i_i64[0] + v9;
      v179 = (__m128i)v11.m128i_u64[0];
      v11.m128i_i64[1] = 0;
      while ( *(_OWORD *)&v11 != v10 )
      {
        if ( (v11.m128i_i8[8] & 3) != 0 )
          v11.m128i_i64[0] = sub_ECEDF0(&v179);
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(
                *a1,
                *(_QWORD *)v11.m128i_i64[0]) )
          return 0;
        sub_BC8020(&v179);
        v11 = v179;
      }
      return 1;
    case 67:
      v28 = (_QWORD *)(a2 + 40);
      v29 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v29 == a2 + 40 )
        return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 24));
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v28) )
      {
        if ( (_QWORD *)v29 == ++v28 )
          return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 24));
      }
      return 0;
    case 76:
      v62 = a2 + 24 + 8LL * *(unsigned int *)(a2 + 16);
      if ( v62 == a2 + 24 )
        return 1;
      v63 = (_QWORD *)(a2 + 24);
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v63) )
      {
        if ( (_QWORD *)v62 == ++v63 )
          return 1;
      }
      return 0;
    case 78:
      v23 = *(unsigned int *)(a2 + 16);
      v24 = (_QWORD *)(a2 + 24);
      v25 = a2 + 8 * v23 + 24;
      if ( v25 == a2 + 24 )
        goto LABEL_201;
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v24) )
          return 0;
        ++v24;
      }
      while ( (_QWORD *)v25 != v24 );
      v23 = *(unsigned int *)(a2 + 16);
LABEL_201:
      v103 = v23;
      v104 = (_QWORD *)(a2 + v103 * 8 + 24);
      v105 = &v104[v103];
      if ( v104 == &v104[v103] )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v104) )
      {
        if ( v105 == ++v104 )
          return 1;
      }
      return 0;
    case 81:
      v51 = *(_QWORD *)(a2 + 72);
      v52 = *(_QWORD *)(a2 + 64);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 88LL))(*a1, v52, v51) )
        return 0;
      v57 = *a1;
      v180 = *(_QWORD *)(a2 + 96);
      v179 = _mm_loadu_si128((const __m128i *)(a2 + 80));
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v57 + 64LL))(
              v57,
              v52,
              v53,
              v54,
              v55,
              v56,
              v179.m128i_i64[0],
              v179.m128i_i64[1],
              v180) )
        return 0;
      v58 = (_QWORD *)(a2 + 104);
      v59 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 104;
      if ( v59 == a2 + 104 )
        goto LABEL_248;
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v58) )
          return 0;
        ++v58;
      }
      while ( (_QWORD *)v59 != v58 );
LABEL_248:
      if ( !(unsigned __int8)sub_BA54B0(a1, (_QWORD *)(a2 + 24)) )
        return 0;
      v124 = *(unsigned int *)(a2 + 16);
      v125 = (_QWORD *)(a2 + 8 * v124 + 104);
      v126 = &v125[v124];
      if ( v125 != v126 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v125) )
            return 0;
          ++v125;
        }
        while ( v126 != v125 );
        v124 = *(unsigned int *)(a2 + 16);
      }
      v144 = (_QWORD *)(a2 + 16 * v124 + 104);
      v145 = &v144[v124];
      if ( v144 == v145 )
      {
LABEL_321:
        v150 = *(unsigned int *)(a2 + 16);
        v151 = (_QWORD *)(a2 + 24 * v150 + 104);
        v152 = &v151[v150];
        if ( v151 != v152 )
        {
          do
          {
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v151) )
              return 0;
            ++v151;
          }
          while ( v152 != v151 );
          v150 = *(unsigned int *)(a2 + 16);
        }
        v159 = (_QWORD *)(a2 + 32 * v150 + 104);
        v160 = &v159[v150];
        if ( v159 == v160 )
        {
LABEL_368:
          if ( *(_DWORD *)(a2 + 48) == 1 )
          {
            v167 = (__int64 *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 104);
            v168 = &v167[*(unsigned int *)(a2 + 16)];
            while ( v168 != v167 )
            {
              v169 = *v167++;
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 96LL))(*a1, v169) )
                return 0;
            }
            v170 = (__int64 *)(a2 + 48LL * *(unsigned int *)(a2 + 16) + 104);
            v171 = &v170[*(unsigned int *)(a2 + 16)];
            while ( v171 != v170 )
            {
              v172 = *v170++;
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 96LL))(*a1, v172) )
                return 0;
            }
            v173 = *(unsigned int *)(a2 + 16);
            v174 = (__int64 *)(a2 + 56 * v173 + 104);
            v175 = &v174[v173];
            while ( v175 != v174 )
            {
              v176 = *v174++;
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 96LL))(*a1, v176) )
                return 0;
            }
          }
          return 1;
        }
        while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v159) )
        {
          if ( v160 == ++v159 )
            goto LABEL_368;
        }
        return 0;
      }
      else
      {
        while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v144) )
        {
          if ( v145 == ++v144 )
            goto LABEL_321;
        }
        return 0;
      }
    case 86:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 16)) )
        return 0;
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 64));
    case 90:
      v21 = (_QWORD *)(a2 + 24);
      v22 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v22 == a2 + 24 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v21) )
      {
        if ( (_QWORD *)v22 == ++v21 )
          return 1;
      }
      return 0;
    case 93:
      v34 = a2 + 24 + 8LL * *(unsigned int *)(a2 + 16);
      if ( v34 == a2 + 24 )
        return 1;
      v35 = (_QWORD *)(a2 + 24);
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v35) )
      {
        if ( (_QWORD *)v34 == ++v35 )
          return 1;
      }
      return 0;
    case 94:
      v36 = *(_QWORD *)(a2 + 64);
      v37 = *(_QWORD *)(a2 + 56);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 88LL))(*a1, v37, v36) )
        return 0;
      v42 = *a1;
      v180 = *(_QWORD *)(a2 + 88);
      v179 = _mm_loadu_si128((const __m128i *)(a2 + 72));
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v42 + 64LL))(
              v42,
              v37,
              v38,
              v39,
              v40,
              v41,
              v179.m128i_i64[0],
              v179.m128i_i64[1],
              v180) )
        return 0;
      v43 = (_QWORD *)(a2 + 96);
      v44 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 96;
      if ( v44 == a2 + 96 )
        goto LABEL_254;
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v43) )
          return 0;
        ++v43;
      }
      while ( (_QWORD *)v44 != v43 );
LABEL_254:
      if ( !(unsigned __int8)sub_BA54B0(a1, (_QWORD *)(a2 + 24)) )
        return 0;
      v127 = *(unsigned int *)(a2 + 16);
      v128 = (_QWORD *)(a2 + 8 * v127 + 96);
      v129 = &v128[v127];
      if ( v128 != v129 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v128) )
            return 0;
          ++v128;
        }
        while ( v129 != v128 );
        v127 = *(unsigned int *)(a2 + 16);
      }
      v146 = (_QWORD *)(a2 + 16 * v127 + 96);
      v147 = &v146[v127];
      if ( v146 != v147 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v146) )
            return 0;
          ++v146;
        }
        while ( v147 != v146 );
        v127 = *(unsigned int *)(a2 + 16);
      }
      v155 = (_QWORD *)(a2 + 24 * v127 + 96);
      v156 = &v155[v127];
      if ( v155 != v156 )
      {
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v155) )
            return 0;
          ++v155;
        }
        while ( v156 != v155 );
        v127 = *(unsigned int *)(a2 + 16);
      }
      v165 = (_QWORD *)(a2 + 32 * v127 + 96);
      v166 = &v165[v127];
      if ( v165 == v166 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v165) )
      {
        if ( v166 == ++v165 )
          return 1;
      }
      return 0;
    case 95:
      v84 = (_QWORD *)(a2 + 40);
      v85 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v85 == a2 + 40 )
        return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 24));
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v84) )
      {
        if ( (_QWORD *)v85 == ++v84 )
          return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *(_QWORD *)(a2 + 24));
      }
      return 0;
    case 98:
      v60 = (_QWORD *)(a2 + 104);
      v61 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 104;
      if ( v61 == a2 + 104 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v60) )
      {
        if ( (_QWORD *)v61 == ++v60 )
          return 1;
      }
      return 0;
    case 106:
      v95 = (_QWORD *)(a2 + 80);
      v96 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
      if ( v96 == a2 + 80 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v95) )
      {
        if ( (_QWORD *)v96 == ++v95 )
          return 1;
      }
      return 0;
    case 107:
      v32 = (_QWORD *)(a2 + 80);
      v33 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
      if ( v33 == a2 + 80 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 96LL))(*a1, *v32) )
      {
        if ( (_QWORD *)v33 == ++v32 )
          return 1;
      }
      return 0;
    case 108:
      v88 = *(_DWORD *)(a2 + 16);
      if ( !v88 )
        return 1;
      v89 = 0;
      break;
    default:
      return 1;
  }
  while ( 1 )
  {
    v90 = sub_E91EB0(&v179, a2, v89);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, double))(*(_QWORD *)*a1 + 96LL))(
            *a1,
            v179.m128i_i64[0],
            v90) )
      break;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 96LL))(*a1, v179.m128i_i64[1]) )
      return 0;
    if ( v88 == ++v89 )
      return 1;
  }
  return 0;
}

