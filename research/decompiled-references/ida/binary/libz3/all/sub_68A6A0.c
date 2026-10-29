__int64 __fastcall sub_68A6A0(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rbp
  _QWORD *i; // r14
  _QWORD *v11; // r14
  _QWORD *v12; // rbp
  __int64 v13; // r13
  _QWORD *v14; // rbp
  _QWORD *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 *v19; // rbx
  unsigned __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  _QWORD *v29; // r12
  void (__fastcall *v30)(__int64, _QWORD *, __int64, _QWORD); // r8
  __int64 v31; // rdx
  __int64 (__fastcall *v32)(__int64); // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  _QWORD *v35; // rbp
  _QWORD *j; // r14
  _QWORD *v37; // r14
  _QWORD *v38; // rbp
  __int64 v39; // r13
  _QWORD *v40; // rbp
  _QWORD *v41; // r13
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 *v44; // rbx
  unsigned __int64 v45; // rbp
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 (__fastcall *v55)(__int64); // rax
  __int64 v56; // rsi
  __int64 v57; // rax
  _QWORD *v58; // rbp
  _QWORD *k; // r14
  _QWORD *v60; // r14
  _QWORD *v61; // rbp
  __int64 v62; // r13
  _QWORD *v63; // rbp
  _QWORD *v64; // r13
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 *v67; // rbx
  unsigned __int64 v68; // rbp
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rdx
  __int64 (__fastcall *v78)(__int64); // rax
  __int64 v79; // rsi
  __int64 v80; // rax
  _QWORD *v81; // rbp
  _QWORD *m; // r14
  _QWORD *v83; // r14
  _QWORD *v84; // rbp
  __int64 v85; // r13
  _QWORD *v86; // rbp
  _QWORD *v87; // r13
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 *v90; // rbx
  unsigned __int64 v91; // rbp
  __int64 v92; // rsi
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rdi
  __int64 v100; // rdx
  __int64 (__fastcall *v101)(__int64); // rax
  __int64 v102; // rsi
  __int64 v103; // rax
  _QWORD *v104; // rbp
  _QWORD *n; // r14
  _QWORD *v106; // r14
  _QWORD *v107; // rbp
  __int64 v108; // r13
  _QWORD *v109; // rbp
  _QWORD *v110; // r13
  __int64 v111; // rsi
  __int64 v112; // rdi
  __int64 *v113; // rbx
  unsigned __int64 v114; // rbp
  __int64 v115; // rsi
  __int64 v116; // rdi
  __int64 v117; // rsi
  __int64 v118; // rdi
  __int64 v119; // rsi
  __int64 v120; // rdi
  __int64 v121; // rsi
  __int64 v122; // rdi
  __int64 v123; // rdx
  __int64 (__fastcall *v124)(__int64); // rax
  __int64 v125; // rsi
  __int64 v126; // rax
  _QWORD *v127; // rbp
  _QWORD *ii; // r14
  _QWORD *v129; // r14
  _QWORD *v130; // rbp
  __int64 v131; // r13
  _QWORD *v132; // rbp
  _QWORD *v133; // r13
  __int64 v134; // rsi
  __int64 v135; // rdi
  __int64 *v136; // rbx
  unsigned __int64 v137; // rbp
  __int64 v138; // rsi
  __int64 v139; // rdi
  __int64 v140; // rsi
  __int64 v141; // rdi
  __int64 v142; // rsi
  __int64 v143; // rdi
  __int64 v144; // rsi
  __int64 v145; // rdi
  __int64 v146; // rdx
  __int64 (__fastcall *v147)(__int64); // rax
  __int64 v148; // rsi
  __int64 v149; // rax
  _QWORD *v150; // rbp
  _QWORD *jj; // r14
  _QWORD *v152; // r14
  _QWORD *v153; // rbp
  __int64 v154; // r13
  _QWORD *v155; // rbp
  _QWORD *v156; // r13
  __int64 v157; // rsi
  __int64 v158; // rdi
  __int64 *v159; // rbx
  __int64 v160; // rsi
  __int64 v161; // rdi
  __int64 v162; // rsi
  __int64 v163; // rdi
  __int64 v164; // rsi
  __int64 v165; // rdi
  __int64 v166; // rdx
  __int64 v168; // rdx
  __int64 (__fastcall *v169)(__int64); // rax
  __int64 v170; // rsi
  __int64 v171; // rax
  _QWORD *v172; // rbp
  _QWORD *mm; // r14
  _QWORD *v174; // r14
  _QWORD *v175; // rbp
  __int64 v176; // r13
  _QWORD *v177; // rbp
  _QWORD *v178; // r13
  __int64 v179; // rsi
  __int64 v180; // rdi
  __int64 (__fastcall *v181)(__int64); // rax
  __int64 v182; // rsi
  __int64 v183; // rax
  _QWORD *v184; // rbp
  _QWORD *kk; // r14
  _QWORD *v186; // r14
  _QWORD *v187; // rbp
  __int64 v188; // r13
  _QWORD *v189; // rbp
  _QWORD *v190; // r13
  __int64 v191; // rsi
  __int64 v192; // rdi
  __int64 *v193; // rbx
  __int64 v194; // rsi
  __int64 v195; // rdi
  __int64 v196; // rsi
  __int64 v197; // rdi
  __int64 v198; // rsi
  __int64 v199; // rdi
  unsigned __int64 v200; // rbp
  __int64 v201; // rsi
  __int64 v202; // rdi
  __int64 *v203; // rbx
  unsigned __int64 v204; // rbp
  __int64 v205; // rsi
  __int64 v206; // rdi
  __int64 v207; // rsi
  __int64 v208; // rdi
  __int64 v209; // rsi
  __int64 v210; // rdi
  __int64 v211; // rsi
  __int64 v212; // rdi
  unsigned __int64 v213; // rbp
  __int64 v214; // rsi
  __int64 v215; // rdi
  _QWORD *v216; // [rsp+8h] [rbp-A0h]
  _QWORD *v217; // [rsp+8h] [rbp-A0h]
  _QWORD *v218; // [rsp+8h] [rbp-A0h]
  _QWORD *v219; // [rsp+8h] [rbp-A0h]
  _QWORD *v220; // [rsp+8h] [rbp-A0h]
  _QWORD *v221; // [rsp+8h] [rbp-A0h]
  _QWORD *v222; // [rsp+8h] [rbp-A0h]
  _QWORD *v223; // [rsp+8h] [rbp-A0h]
  _QWORD *v224; // [rsp+8h] [rbp-A0h]
  __int64 v228; // [rsp+30h] [rbp-78h] BYREF
  __int64 v229; // [rsp+38h] [rbp-70h]
  __int64 v230; // [rsp+40h] [rbp-68h] BYREF
  __int64 v231; // [rsp+48h] [rbp-60h]
  __int64 v232; // [rsp+50h] [rbp-58h] BYREF
  __int64 v233; // [rsp+58h] [rbp-50h]
  __int64 v234; // [rsp+60h] [rbp-48h] BYREF
  _QWORD *v235; // [rsp+68h] [rbp-40h]

  v5 = a2[17];
  if ( v5 && *(_DWORD *)(v5 - 4) )
  {
    v216 = a2 + 21;
    v6 = *(__int64 (__fastcall **)(__int64))(*a2 + 104LL);
    if ( v6 == sub_2B1DE0 )
      v7 = (__int64)(a2 + 10);
    else
      v7 = v6((__int64)a2);
    sub_1473C20(v216, v7);
    v8 = a2[15];
    v9 = (_QWORD *)a2[17];
    v228 = 0;
    v230 = 0;
    v229 = v8;
    v231 = v8;
    v232 = 0;
    v233 = v8;
    v234 = v8;
    v235 = nullptr;
    if ( v9 )
    {
      for ( i = &v9[*((unsigned int *)v9 - 1)]; i != v9; ++v9 )
      {
        sub_14BB8A0(a2 + 19, *v9, &v230, &v228);
        sub_1475DD0(v216, 0, v230, &v232, &v228);
        sub_E5EBF0(a2[18], v232);
      }
    }
    sub_1474200(v216, &v234);
    v11 = v235;
    if ( v235 )
    {
      v12 = &v235[*((unsigned int *)v235 - 1)];
      if ( v235 != v12 )
      {
        v13 = a2[18];
        do
          sub_E5EBF0(v13, *v11++);
        while ( v12 != v11 );
      }
    }
    v14 = (_QWORD *)a2[17];
    if ( v14 )
    {
      v15 = &v14[*((unsigned int *)v14 - 1)];
      if ( v14 >= v15 )
        goto LABEL_20;
      do
      {
        while ( 1 )
        {
          v16 = *v14;
          if ( *v14 )
          {
            v17 = a2[16];
            v18 = (*(_DWORD *)(v16 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( ++v14 >= v15 )
            goto LABEL_19;
        }
        sub_15D7BC0(v17, v16);
        ++v14;
      }
      while ( v14 < v15 );
LABEL_19:
      v14 = (_QWORD *)a2[17];
      if ( v14 )
LABEL_20:
        *((_DWORD *)v14 - 1) = 0;
    }
    v19 = v235;
    if ( v235 )
    {
      v20 = (unsigned __int64)&v235[*((unsigned int *)v235 - 1)];
      if ( (unsigned __int64)v235 >= v20 )
        goto LABEL_29;
      do
      {
        while ( 1 )
        {
          v21 = *v19;
          if ( *v19 )
          {
            v22 = v234;
            v18 = (*(_DWORD *)(v21 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v19 >= v20 )
            goto LABEL_28;
        }
        sub_15D7BC0(v22, v21);
        ++v19;
      }
      while ( (unsigned __int64)v19 < v20 );
LABEL_28:
      v19 = v235;
      if ( v235 )
LABEL_29:
        sub_186B220(v19 - 1);
    }
    v23 = v232;
    if ( v232 )
    {
      v24 = v233;
      v18 = (*(_DWORD *)(v232 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v24, v23);
    }
    v25 = v230;
    if ( v230 )
    {
      v26 = v231;
      v18 = (*(_DWORD *)(v230 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v26, v25);
    }
    v27 = v228;
    if ( v228 )
    {
      v28 = v229;
      v18 = (*(_DWORD *)(v228 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v28, v27);
    }
  }
  v29 = (_QWORD *)a2[18];
  v30 = *(void (__fastcall **)(__int64, _QWORD *, __int64, _QWORD))(*v29 + 288LL);
  if ( (char *)v30 != (char *)sub_68A6A0 )
    goto LABEL_267;
  v31 = v29[17];
  if ( v31 && *(_DWORD *)(v31 - 4) )
  {
    v32 = *(__int64 (__fastcall **)(__int64))(*v29 + 104LL);
    v217 = v29 + 21;
    if ( v32 == sub_2B1DE0 )
      v33 = (__int64)(v29 + 10);
    else
      v33 = v32((__int64)v29);
    sub_1473C20(v217, v33);
    v34 = v29[15];
    v235 = nullptr;
    v35 = (_QWORD *)v29[17];
    v228 = 0;
    v229 = v34;
    v230 = 0;
    v231 = v34;
    v232 = 0;
    v233 = v34;
    v234 = v34;
    if ( v35 )
    {
      for ( j = &v35[*((unsigned int *)v35 - 1)]; j != v35; ++v35 )
      {
        sub_14BB8A0(v29 + 19, *v35, &v230, &v228);
        sub_1475DD0(v217, 0, v230, &v232, &v228);
        sub_E5EBF0(v29[18], v232);
      }
    }
    sub_1474200(v217, &v234);
    v37 = v235;
    if ( v235 )
    {
      v38 = &v235[*((unsigned int *)v235 - 1)];
      if ( v235 != v38 )
      {
        v39 = v29[18];
        do
          sub_E5EBF0(v39, *v37++);
        while ( v38 != v37 );
      }
    }
    v40 = (_QWORD *)v29[17];
    if ( v40 )
    {
      v41 = &v40[*((unsigned int *)v40 - 1)];
      if ( v40 >= v41 )
        goto LABEL_59;
      do
      {
        while ( 1 )
        {
          v42 = *v40;
          if ( *v40 )
          {
            v43 = v29[16];
            v18 = (*(_DWORD *)(v42 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( ++v40 >= v41 )
            goto LABEL_58;
        }
        sub_15D7BC0(v43, v42);
        ++v40;
      }
      while ( v40 < v41 );
LABEL_58:
      v40 = (_QWORD *)v29[17];
      if ( v40 )
LABEL_59:
        *((_DWORD *)v40 - 1) = 0;
    }
    v44 = v235;
    if ( v235 )
    {
      v45 = (unsigned __int64)&v235[*((unsigned int *)v235 - 1)];
      if ( (unsigned __int64)v235 >= v45 )
        goto LABEL_68;
      do
      {
        while ( 1 )
        {
          v46 = *v44;
          if ( *v44 )
          {
            v47 = v234;
            v18 = (*(_DWORD *)(v46 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v44 >= v45 )
            goto LABEL_67;
        }
        sub_15D7BC0(v47, v46);
        ++v44;
      }
      while ( (unsigned __int64)v44 < v45 );
LABEL_67:
      v44 = v235;
      if ( v235 )
LABEL_68:
        sub_186B220(v44 - 1);
    }
    v48 = v232;
    if ( v232 )
    {
      v49 = v233;
      v18 = (*(_DWORD *)(v232 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v49, v48);
    }
    v50 = v230;
    if ( v230 )
    {
      v51 = v231;
      v18 = (*(_DWORD *)(v230 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v51, v50);
    }
    v52 = v228;
    if ( v228 )
    {
      v53 = v229;
      v18 = (*(_DWORD *)(v228 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v53, v52);
    }
  }
  v29 = (_QWORD *)v29[18];
  v30 = *(void (__fastcall **)(__int64, _QWORD *, __int64, _QWORD))(*v29 + 288LL);
  if ( (char *)v30 != (char *)sub_68A6A0 )
    goto LABEL_267;
  v54 = v29[17];
  if ( v54 && *(_DWORD *)(v54 - 4) )
  {
    v55 = *(__int64 (__fastcall **)(__int64))(*v29 + 104LL);
    v218 = v29 + 21;
    if ( v55 == sub_2B1DE0 )
      v56 = (__int64)(v29 + 10);
    else
      v56 = v55((__int64)v29);
    sub_1473C20(v218, v56);
    v57 = v29[15];
    v235 = nullptr;
    v58 = (_QWORD *)v29[17];
    v228 = 0;
    v229 = v57;
    v230 = 0;
    v231 = v57;
    v232 = 0;
    v233 = v57;
    v234 = v57;
    if ( v58 )
    {
      for ( k = &v58[*((unsigned int *)v58 - 1)]; k != v58; ++v58 )
      {
        sub_14BB8A0(v29 + 19, *v58, &v230, &v228);
        sub_1475DD0(v218, 0, v230, &v232, &v228);
        sub_E5EBF0(v29[18], v232);
      }
    }
    sub_1474200(v218, &v234);
    v60 = v235;
    if ( v235 )
    {
      v61 = &v235[*((unsigned int *)v235 - 1)];
      if ( v235 != v61 )
      {
        v62 = v29[18];
        do
          sub_E5EBF0(v62, *v60++);
        while ( v61 != v60 );
      }
    }
    v63 = (_QWORD *)v29[17];
    if ( v63 )
    {
      v64 = &v63[*((unsigned int *)v63 - 1)];
      if ( v63 >= v64 )
        goto LABEL_98;
      do
      {
        while ( 1 )
        {
          v65 = *v63;
          if ( *v63 )
          {
            v66 = v29[16];
            v18 = (*(_DWORD *)(v65 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( ++v63 >= v64 )
            goto LABEL_97;
        }
        sub_15D7BC0(v66, v65);
        ++v63;
      }
      while ( v63 < v64 );
LABEL_97:
      v63 = (_QWORD *)v29[17];
      if ( v63 )
LABEL_98:
        *((_DWORD *)v63 - 1) = 0;
    }
    v67 = v235;
    if ( v235 )
    {
      v68 = (unsigned __int64)&v235[*((unsigned int *)v235 - 1)];
      if ( (unsigned __int64)v235 >= v68 )
        goto LABEL_107;
      do
      {
        while ( 1 )
        {
          v69 = *v67;
          if ( *v67 )
          {
            v70 = v234;
            v18 = (*(_DWORD *)(v69 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v67 >= v68 )
            goto LABEL_106;
        }
        sub_15D7BC0(v70, v69);
        ++v67;
      }
      while ( (unsigned __int64)v67 < v68 );
LABEL_106:
      v67 = v235;
      if ( v235 )
LABEL_107:
        sub_186B220(v67 - 1);
    }
    v71 = v232;
    if ( v232 )
    {
      v72 = v233;
      v18 = (*(_DWORD *)(v232 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v72, v71);
    }
    v73 = v230;
    if ( v230 )
    {
      v74 = v231;
      v18 = (*(_DWORD *)(v230 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v74, v73);
    }
    v75 = v228;
    if ( v228 )
    {
      v76 = v229;
      v18 = (*(_DWORD *)(v228 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v76, v75);
    }
  }
  v29 = (_QWORD *)v29[18];
  v30 = *(void (__fastcall **)(__int64, _QWORD *, __int64, _QWORD))(*v29 + 288LL);
  if ( (char *)v30 != (char *)sub_68A6A0 )
    goto LABEL_267;
  v77 = v29[17];
  if ( v77 && *(_DWORD *)(v77 - 4) )
  {
    v78 = *(__int64 (__fastcall **)(__int64))(*v29 + 104LL);
    v219 = v29 + 21;
    if ( v78 == sub_2B1DE0 )
      v79 = (__int64)(v29 + 10);
    else
      v79 = v78((__int64)v29);
    sub_1473C20(v219, v79);
    v80 = v29[15];
    v235 = nullptr;
    v81 = (_QWORD *)v29[17];
    v228 = 0;
    v229 = v80;
    v230 = 0;
    v231 = v80;
    v232 = 0;
    v233 = v80;
    v234 = v80;
    if ( v81 )
    {
      for ( m = &v81[*((unsigned int *)v81 - 1)]; m != v81; ++v81 )
      {
        sub_14BB8A0(v29 + 19, *v81, &v230, &v228);
        sub_1475DD0(v219, 0, v230, &v232, &v228);
        sub_E5EBF0(v29[18], v232);
      }
    }
    sub_1474200(v219, &v234);
    v83 = v235;
    if ( v235 )
    {
      v84 = &v235[*((unsigned int *)v235 - 1)];
      if ( v235 != v84 )
      {
        v85 = v29[18];
        do
          sub_E5EBF0(v85, *v83++);
        while ( v84 != v83 );
      }
    }
    v86 = (_QWORD *)v29[17];
    if ( v86 )
    {
      v87 = &v86[*((unsigned int *)v86 - 1)];
      if ( v86 >= v87 )
        goto LABEL_137;
      do
      {
        while ( 1 )
        {
          v88 = *v86;
          if ( *v86 )
          {
            v89 = v29[16];
            v18 = (*(_DWORD *)(v88 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( ++v86 >= v87 )
            goto LABEL_136;
        }
        sub_15D7BC0(v89, v88);
        ++v86;
      }
      while ( v86 < v87 );
LABEL_136:
      v86 = (_QWORD *)v29[17];
      if ( v86 )
LABEL_137:
        *((_DWORD *)v86 - 1) = 0;
    }
    v90 = v235;
    if ( v235 )
    {
      v91 = (unsigned __int64)&v235[*((unsigned int *)v235 - 1)];
      if ( (unsigned __int64)v235 >= v91 )
        goto LABEL_146;
      do
      {
        while ( 1 )
        {
          v92 = *v90;
          if ( *v90 )
          {
            v93 = v234;
            v18 = (*(_DWORD *)(v92 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v90 >= v91 )
            goto LABEL_145;
        }
        sub_15D7BC0(v93, v92);
        ++v90;
      }
      while ( (unsigned __int64)v90 < v91 );
LABEL_145:
      v90 = v235;
      if ( v235 )
LABEL_146:
        sub_186B220(v90 - 1);
    }
    v94 = v232;
    if ( v232 )
    {
      v95 = v233;
      v18 = (*(_DWORD *)(v232 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v95, v94);
    }
    v96 = v230;
    if ( v230 )
    {
      v97 = v231;
      v18 = (*(_DWORD *)(v230 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v97, v96);
    }
    v98 = v228;
    if ( v228 )
    {
      v99 = v229;
      v18 = (*(_DWORD *)(v228 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v99, v98);
    }
  }
  v29 = (_QWORD *)v29[18];
  v30 = *(void (__fastcall **)(__int64, _QWORD *, __int64, _QWORD))(*v29 + 288LL);
  if ( (char *)v30 != (char *)sub_68A6A0 )
    goto LABEL_267;
  v100 = v29[17];
  if ( v100 && *(_DWORD *)(v100 - 4) )
  {
    v101 = *(__int64 (__fastcall **)(__int64))(*v29 + 104LL);
    v220 = v29 + 21;
    if ( v101 == sub_2B1DE0 )
      v102 = (__int64)(v29 + 10);
    else
      v102 = v101((__int64)v29);
    sub_1473C20(v220, v102);
    v103 = v29[15];
    v235 = nullptr;
    v104 = (_QWORD *)v29[17];
    v228 = 0;
    v229 = v103;
    v230 = 0;
    v231 = v103;
    v232 = 0;
    v233 = v103;
    v234 = v103;
    if ( v104 )
    {
      for ( n = &v104[*((unsigned int *)v104 - 1)]; n != v104; ++v104 )
      {
        sub_14BB8A0(v29 + 19, *v104, &v230, &v228);
        sub_1475DD0(v220, 0, v230, &v232, &v228);
        sub_E5EBF0(v29[18], v232);
      }
    }
    sub_1474200(v220, &v234);
    v106 = v235;
    if ( v235 )
    {
      v107 = &v235[*((unsigned int *)v235 - 1)];
      if ( v235 != v107 )
      {
        v108 = v29[18];
        do
          sub_E5EBF0(v108, *v106++);
        while ( v107 != v106 );
      }
    }
    v109 = (_QWORD *)v29[17];
    if ( v109 )
    {
      v110 = &v109[*((unsigned int *)v109 - 1)];
      if ( v109 >= v110 )
        goto LABEL_176;
      do
      {
        while ( 1 )
        {
          v111 = *v109;
          if ( *v109 )
          {
            v112 = v29[16];
            v18 = (*(_DWORD *)(v111 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( ++v109 >= v110 )
            goto LABEL_175;
        }
        sub_15D7BC0(v112, v111);
        ++v109;
      }
      while ( v109 < v110 );
LABEL_175:
      v109 = (_QWORD *)v29[17];
      if ( v109 )
LABEL_176:
        *((_DWORD *)v109 - 1) = 0;
    }
    v113 = v235;
    if ( v235 )
    {
      v114 = (unsigned __int64)&v235[*((unsigned int *)v235 - 1)];
      if ( (unsigned __int64)v235 >= v114 )
        goto LABEL_185;
      do
      {
        while ( 1 )
        {
          v115 = *v113;
          if ( *v113 )
          {
            v116 = v234;
            v18 = (*(_DWORD *)(v115 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v113 >= v114 )
            goto LABEL_184;
        }
        sub_15D7BC0(v116, v115);
        ++v113;
      }
      while ( (unsigned __int64)v113 < v114 );
LABEL_184:
      v113 = v235;
      if ( v235 )
LABEL_185:
        sub_186B220(v113 - 1);
    }
    v117 = v232;
    if ( v232 )
    {
      v118 = v233;
      v18 = (*(_DWORD *)(v232 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v118, v117);
    }
    v119 = v230;
    if ( v230 )
    {
      v120 = v231;
      v18 = (*(_DWORD *)(v230 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v120, v119);
    }
    v121 = v228;
    if ( v228 )
    {
      v122 = v229;
      v18 = (*(_DWORD *)(v228 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v122, v121);
    }
  }
  v29 = (_QWORD *)v29[18];
  v30 = *(void (__fastcall **)(__int64, _QWORD *, __int64, _QWORD))(*v29 + 288LL);
  if ( (char *)v30 != (char *)sub_68A6A0 )
    goto LABEL_267;
  v123 = v29[17];
  if ( v123 && *(_DWORD *)(v123 - 4) )
  {
    v124 = *(__int64 (__fastcall **)(__int64))(*v29 + 104LL);
    v221 = v29 + 21;
    if ( v124 == sub_2B1DE0 )
      v125 = (__int64)(v29 + 10);
    else
      v125 = v124((__int64)v29);
    sub_1473C20(v221, v125);
    v126 = v29[15];
    v235 = nullptr;
    v127 = (_QWORD *)v29[17];
    v228 = 0;
    v229 = v126;
    v230 = 0;
    v231 = v126;
    v232 = 0;
    v233 = v126;
    v234 = v126;
    if ( v127 )
    {
      for ( ii = &v127[*((unsigned int *)v127 - 1)]; ii != v127; ++v127 )
      {
        sub_14BB8A0(v29 + 19, *v127, &v230, &v228);
        sub_1475DD0(v221, 0, v230, &v232, &v228);
        sub_E5EBF0(v29[18], v232);
      }
    }
    sub_1474200(v221, &v234);
    v129 = v235;
    if ( v235 )
    {
      v130 = &v235[*((unsigned int *)v235 - 1)];
      if ( v235 != v130 )
      {
        v131 = v29[18];
        do
          sub_E5EBF0(v131, *v129++);
        while ( v130 != v129 );
      }
    }
    v132 = (_QWORD *)v29[17];
    if ( v132 )
    {
      v133 = &v132[*((unsigned int *)v132 - 1)];
      if ( v132 >= v133 )
        goto LABEL_215;
      do
      {
        while ( 1 )
        {
          v134 = *v132;
          if ( *v132 )
          {
            v135 = v29[16];
            v18 = (*(_DWORD *)(v134 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( ++v132 >= v133 )
            goto LABEL_214;
        }
        sub_15D7BC0(v135, v134);
        ++v132;
      }
      while ( v132 < v133 );
LABEL_214:
      v132 = (_QWORD *)v29[17];
      if ( v132 )
LABEL_215:
        *((_DWORD *)v132 - 1) = 0;
    }
    v136 = v235;
    if ( v235 )
    {
      v137 = (unsigned __int64)&v235[*((unsigned int *)v235 - 1)];
      if ( (unsigned __int64)v235 >= v137 )
        goto LABEL_224;
      do
      {
        while ( 1 )
        {
          v138 = *v136;
          if ( *v136 )
          {
            v139 = v234;
            v18 = (*(_DWORD *)(v138 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v136 >= v137 )
            goto LABEL_223;
        }
        sub_15D7BC0(v139, v138);
        ++v136;
      }
      while ( (unsigned __int64)v136 < v137 );
LABEL_223:
      v136 = v235;
      if ( v235 )
LABEL_224:
        sub_186B220(v136 - 1);
    }
    v140 = v232;
    if ( v232 )
    {
      v141 = v233;
      v18 = (*(_DWORD *)(v232 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v141, v140);
    }
    v142 = v230;
    if ( v230 )
    {
      v143 = v231;
      v18 = (*(_DWORD *)(v230 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v143, v142);
    }
    v144 = v228;
    if ( v228 )
    {
      v145 = v229;
      v18 = (*(_DWORD *)(v228 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v145, v144);
    }
  }
  v29 = (_QWORD *)v29[18];
  v30 = *(void (__fastcall **)(__int64, _QWORD *, __int64, _QWORD))(*v29 + 288LL);
  if ( (char *)v30 != (char *)sub_68A6A0 )
    goto LABEL_267;
  v146 = v29[17];
  if ( v146 && *(_DWORD *)(v146 - 4) )
  {
    v147 = *(__int64 (__fastcall **)(__int64))(*v29 + 104LL);
    v222 = v29 + 21;
    if ( v147 == sub_2B1DE0 )
      v148 = (__int64)(v29 + 10);
    else
      v148 = v147((__int64)v29);
    sub_1473C20(v222, v148);
    v149 = v29[15];
    v235 = nullptr;
    v150 = (_QWORD *)v29[17];
    v228 = 0;
    v229 = v149;
    v230 = 0;
    v231 = v149;
    v232 = 0;
    v233 = v149;
    v234 = v149;
    if ( v150 )
    {
      for ( jj = &v150[*((unsigned int *)v150 - 1)]; jj != v150; ++v150 )
      {
        sub_14BB8A0(v29 + 19, *v150, &v230, &v228);
        sub_1475DD0(v222, 0, v230, &v232, &v228);
        sub_E5EBF0(v29[18], v232);
      }
    }
    sub_1474200(v222, &v234);
    v152 = v235;
    if ( v235 )
    {
      v153 = &v235[*((unsigned int *)v235 - 1)];
      if ( v235 != v153 )
      {
        v154 = v29[18];
        do
          sub_E5EBF0(v154, *v152++);
        while ( v153 != v152 );
      }
    }
    v155 = (_QWORD *)v29[17];
    if ( v155 )
    {
      v156 = &v155[*((unsigned int *)v155 - 1)];
      if ( v155 >= v156 )
        goto LABEL_317;
      do
      {
        v157 = *v155;
        if ( *v155 )
        {
          v158 = v29[16];
          v18 = (*(_DWORD *)(v157 + 8))-- == 1;
          if ( v18 )
            sub_15D7BC0(v158, v157);
        }
        ++v155;
      }
      while ( v155 < v156 );
      v155 = (_QWORD *)v29[17];
      if ( v155 )
LABEL_317:
        *((_DWORD *)v155 - 1) = 0;
    }
    v159 = v235;
    if ( v235 )
    {
      v200 = (unsigned __int64)&v235[*((unsigned int *)v235 - 1)];
      if ( (unsigned __int64)v235 >= v200 )
        goto LABEL_254;
      do
      {
        v201 = *v159;
        if ( *v159 )
        {
          v202 = v234;
          v18 = (*(_DWORD *)(v201 + 8))-- == 1;
          if ( v18 )
            sub_15D7BC0(v202, v201);
        }
        ++v159;
      }
      while ( (unsigned __int64)v159 < v200 );
      v159 = v235;
      if ( v235 )
LABEL_254:
        sub_186B220(v159 - 1);
    }
    v160 = v232;
    if ( v232 )
    {
      v161 = v233;
      v18 = (*(_DWORD *)(v232 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v161, v160);
    }
    v162 = v230;
    if ( v230 )
    {
      v163 = v231;
      v18 = (*(_DWORD *)(v230 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v163, v162);
    }
    v164 = v228;
    if ( v228 )
    {
      v165 = v229;
      v18 = (*(_DWORD *)(v228 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v165, v164);
    }
  }
  v29 = (_QWORD *)v29[18];
  v30 = *(void (__fastcall **)(__int64, _QWORD *, __int64, _QWORD))(*v29 + 288LL);
  if ( (char *)v30 != (char *)sub_68A6A0 )
    goto LABEL_267;
  v166 = v29[17];
  if ( v166 && *(_DWORD *)(v166 - 4) )
  {
    v181 = *(__int64 (__fastcall **)(__int64))(*v29 + 104LL);
    v224 = v29 + 21;
    if ( v181 == sub_2B1DE0 )
      v182 = (__int64)(v29 + 10);
    else
      v182 = v181((__int64)v29);
    sub_1473C20(v224, v182);
    v183 = v29[15];
    v235 = nullptr;
    v184 = (_QWORD *)v29[17];
    v228 = 0;
    v229 = v183;
    v230 = 0;
    v231 = v183;
    v232 = 0;
    v233 = v183;
    v234 = v183;
    if ( v184 )
    {
      for ( kk = &v184[*((unsigned int *)v184 - 1)]; kk != v184; ++v184 )
      {
        sub_14BB8A0(v29 + 19, *v184, &v230, &v228);
        sub_1475DD0(v224, 0, v230, &v232, &v228);
        sub_E5EBF0(v29[18], v232);
      }
    }
    sub_1474200(v224, &v234);
    v186 = v235;
    if ( v235 )
    {
      v187 = &v235[*((unsigned int *)v235 - 1)];
      if ( v235 != v187 )
      {
        v188 = v29[18];
        do
          sub_E5EBF0(v188, *v186++);
        while ( v187 != v186 );
      }
    }
    v189 = (_QWORD *)v29[17];
    if ( v189 )
    {
      v190 = &v189[*((unsigned int *)v189 - 1)];
      if ( v189 >= v190 )
        goto LABEL_326;
      do
      {
        v191 = *v189;
        if ( *v189 )
        {
          v192 = v29[16];
          v18 = (*(_DWORD *)(v191 + 8))-- == 1;
          if ( v18 )
            sub_15D7BC0(v192, v191);
        }
        ++v189;
      }
      while ( v189 < v190 );
      v189 = (_QWORD *)v29[17];
      if ( v189 )
LABEL_326:
        *((_DWORD *)v189 - 1) = 0;
    }
    v203 = v235;
    if ( v235 )
    {
      v204 = (unsigned __int64)&v235[*((unsigned int *)v235 - 1)];
      if ( (unsigned __int64)v235 >= v204 )
        goto LABEL_335;
      do
      {
        v205 = *v203;
        if ( *v203 )
        {
          v206 = v234;
          v18 = (*(_DWORD *)(v205 + 8))-- == 1;
          if ( v18 )
            sub_15D7BC0(v206, v205);
        }
        ++v203;
      }
      while ( (unsigned __int64)v203 < v204 );
      v203 = v235;
      if ( v235 )
LABEL_335:
        sub_186B220(v203 - 1);
    }
    v207 = v232;
    if ( v232 )
    {
      v208 = v233;
      v18 = (*(_DWORD *)(v232 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v208, v207);
    }
    v209 = v230;
    if ( v230 )
    {
      v210 = v231;
      v18 = (*(_DWORD *)(v230 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v210, v209);
    }
    v211 = v228;
    if ( v228 )
    {
      v212 = v229;
      v18 = (*(_DWORD *)(v228 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v212, v211);
    }
  }
  v29 = (_QWORD *)v29[18];
  v30 = *(void (__fastcall **)(__int64, _QWORD *, __int64, _QWORD))(*v29 + 288LL);
  if ( (char *)v30 == (char *)sub_68A6A0 )
  {
    v168 = v29[17];
    if ( v168 && *(_DWORD *)(v168 - 4) )
    {
      v169 = *(__int64 (__fastcall **)(__int64))(*v29 + 104LL);
      v223 = v29 + 21;
      if ( v169 == sub_2B1DE0 )
        v170 = (__int64)(v29 + 10);
      else
        v170 = v169((__int64)v29);
      sub_1473C20(v223, v170);
      v171 = v29[15];
      v235 = nullptr;
      v172 = (_QWORD *)v29[17];
      v228 = 0;
      v229 = v171;
      v230 = 0;
      v231 = v171;
      v232 = 0;
      v233 = v171;
      v234 = v171;
      if ( v172 )
      {
        for ( mm = &v172[*((unsigned int *)v172 - 1)]; mm != v172; ++v172 )
        {
          sub_14BB8A0(v29 + 19, *v172, &v230, &v228);
          sub_1475DD0(v223, 0, v230, &v232, &v228);
          sub_E5EBF0(v29[18], v232);
        }
      }
      sub_1474200(v223, &v234);
      v174 = v235;
      if ( v235 )
      {
        v175 = &v235[*((unsigned int *)v235 - 1)];
        if ( v235 != v175 )
        {
          v176 = v29[18];
          do
            sub_E5EBF0(v176, *v174++);
          while ( v175 != v174 );
        }
      }
      v177 = (_QWORD *)v29[17];
      if ( v177 )
      {
        v178 = &v177[*((unsigned int *)v177 - 1)];
        if ( v177 >= v178 )
          goto LABEL_350;
        do
        {
          v179 = *v177;
          if ( *v177 )
          {
            v180 = v29[16];
            v18 = (*(_DWORD *)(v179 + 8))-- == 1;
            if ( v18 )
              sub_15D7BC0(v180, v179);
          }
          ++v177;
        }
        while ( v177 < v178 );
        v177 = (_QWORD *)v29[17];
        if ( v177 )
LABEL_350:
          *((_DWORD *)v177 - 1) = 0;
      }
      v193 = v235;
      if ( v235 )
      {
        v213 = (unsigned __int64)&v235[*((unsigned int *)v235 - 1)];
        if ( (unsigned __int64)v235 >= v213 )
          goto LABEL_305;
        do
        {
          v214 = *v193;
          if ( *v193 )
          {
            v215 = v234;
            v18 = (*(_DWORD *)(v214 + 8))-- == 1;
            if ( v18 )
              sub_15D7BC0(v215, v214);
          }
          ++v193;
        }
        while ( (unsigned __int64)v193 < v213 );
        v193 = v235;
        if ( v235 )
LABEL_305:
          sub_186B220(v193 - 1);
      }
      v194 = v232;
      if ( v232 )
      {
        v195 = v233;
        v18 = (*(_DWORD *)(v232 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v195, v194);
      }
      v196 = v230;
      if ( v230 )
      {
        v197 = v231;
        v18 = (*(_DWORD *)(v230 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v197, v196);
      }
      v198 = v228;
      if ( v228 )
      {
        v199 = v229;
        v18 = (*(_DWORD *)(v228 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v199, v198);
      }
    }
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v29[18] + 288LL))(a1, v29[18], a3, a4);
  }
  else
  {
LABEL_267:
    v30(a1, v29, a3, a4);
  }
  return a1;
}

