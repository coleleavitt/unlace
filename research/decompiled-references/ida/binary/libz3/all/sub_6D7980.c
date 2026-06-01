void __fastcall sub_6D7980(char *a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // r9
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v9; // rbp
  char *v10; // rbx
  bool v11; // al
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  char *v19; // r9
  __int64 v20; // r10
  unsigned int **v21; // r11
  unsigned int *v22; // r8
  char *v23; // rcx
  __int64 v24; // r11
  _DWORD *v25; // rdi
  unsigned int *v26; // rax
  unsigned int *v27; // rsi
  _DWORD *v28; // rdx
  __int64 v29; // rdx
  _DWORD *v30; // rdx
  __int64 v31; // r10
  _DWORD *v32; // r10
  _DWORD *v33; // r10
  unsigned int *v34; // rsi
  _DWORD *v35; // r11
  unsigned int *v36; // rdx
  unsigned int *v37; // rdi
  __int64 v38; // rsi
  _DWORD *v39; // rsi
  unsigned int v40; // esi
  unsigned int *v41; // rdx
  _DWORD *v42; // rdi
  __int64 v43; // rdi
  _DWORD *v44; // rdi
  unsigned int *v45; // rdi
  _DWORD *v46; // r8
  __int64 v47; // r8
  _DWORD *v48; // r8
  __int64 v49; // r11
  _DWORD *v50; // r11
  __int64 v51; // r10
  __int64 v52; // r8
  __int64 v53; // r11
  unsigned int *v54; // rbx
  bool v55; // bp
  __int64 v56; // rcx
  __int64 v57; // r12
  bool v58; // al
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rax
  char *v62; // rsi
  __int64 v63; // rdx
  unsigned int v64; // edi
  char *v65; // rax
  __int64 v66; // rcx
  char *v67; // rsi
  unsigned int *v68; // rcx
  unsigned int *v69; // r12
  _DWORD *v70; // r14
  __int64 v71; // r14
  _DWORD *v72; // r14
  __int64 v73; // rcx
  __int64 v74; // r10
  char *v75; // rdx
  __int64 v76; // r10
  __int64 v77; // r10
  _DWORD *v78; // rdi
  unsigned int *v79; // r12
  __int64 v80; // rcx
  unsigned int *v81; // rcx
  unsigned int *v82; // r14
  _DWORD *v83; // r12
  __int64 v84; // r12
  _DWORD *v85; // r12
  __int64 v86; // r15
  _DWORD *v87; // r15
  __int64 v88; // rcx
  __int64 v89; // rax
  unsigned int *v90; // rsi
  __int64 v91; // r12
  __int64 v92; // rbx
  __int64 i; // r10
  __int64 v94; // rdx
  char *v95; // r8
  __int64 v96; // rcx
  _DWORD *v97; // rax
  _DWORD *v98; // r11
  _DWORD *v99; // r14
  _DWORD *v100; // r14
  __int64 v101; // rcx
  __int64 v102; // r14
  _DWORD *v103; // r14
  __int64 v104; // r14
  _DWORD *v105; // r14
  __int64 v106; // rax
  unsigned int v107; // r11d
  char *v108; // r8
  unsigned int *v109; // rcx
  unsigned int *v110; // r10
  _DWORD *v111; // rbx
  __int64 v112; // rbx
  _DWORD *v113; // rbx
  _DWORD *v114; // r11
  unsigned int *v115; // r10
  unsigned int *v116; // rcx
  unsigned int *v117; // rbx
  _DWORD *v118; // r10
  __int64 v119; // r10
  _DWORD *v120; // r10
  __int64 v121; // rbp
  _DWORD *v122; // rbp
  __int64 v123; // rax
  __int64 v124; // rax

  if ( a2 - a1 <= 128 )
    return;
  v4 = a2;
  v5 = (a2 - a1) >> 4;
  v6 = (a2 - a1) >> 3;
  v9 = a3;
  if ( !a3 )
    goto LABEL_81;
  do
  {
    --v9;
    v10 = a1 + 8;
    v11 = sub_6BFEB0(*((_QWORD *)a1 + 1), *(_QWORD *)&a1[8 * v5]);
    v15 = *(unsigned int **)a1;
    v16 = *(_QWORD *)(v14 - 8);
    if ( v11 )
    {
      if ( !sub_6BFEB0(v12, v16) )
      {
        if ( sub_6BFEB0(v18, v20) )
        {
          *(_QWORD *)a1 = v76;
          *((_QWORD *)v19 - 1) = v15;
          v22 = *(unsigned int **)a1;
          goto LABEL_6;
        }
LABEL_103:
        *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v15);
        goto LABEL_6;
      }
    }
    else
    {
      if ( sub_6BFEB0(v13, v16) )
        goto LABEL_103;
      if ( sub_6BFEB0(v73, v74) )
      {
        *(_QWORD *)a1 = v77;
        *((_QWORD *)v19 - 1) = v15;
        v22 = *(unsigned int **)a1;
        goto LABEL_6;
      }
    }
    *(_QWORD *)a1 = v17;
    *v21 = v15;
    v22 = *(unsigned int **)a1;
LABEL_6:
    v23 = v19;
    while ( 1 )
    {
      if ( *((_WORD *)v22 + 2) )
      {
        v40 = *v22;
        while ( 1 )
        {
          v26 = *(unsigned int **)v10;
          v41 = *(unsigned int **)v10;
          if ( !*(_WORD *)(*(_QWORD *)v10 + 4LL) )
          {
            v42 = *(_DWORD **)(*((_QWORD *)v26 + 2) + 24LL);
            if ( v42 )
            {
              if ( *v42 == 5 && v42[1] == 9 && v26[6] == 2 )
              {
                v43 = *((_QWORD *)v26 + 4);
                if ( !*(_WORD *)(v43 + 4) )
                {
                  v44 = *(_DWORD **)(*(_QWORD *)(v43 + 16) + 24LL);
                  if ( v44 )
                  {
                    if ( *v44 == 5 && !v44[1] )
                      v41 = *((unsigned int **)v26 + 5);
                  }
                }
              }
            }
          }
          if ( *v41 >= v40 )
            break;
          v10 += 8;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v36 = *((unsigned int **)v23 - 1);
            v23 -= 8;
            v45 = v36;
            if ( !*((_WORD *)v36 + 2) )
            {
              v46 = *(_DWORD **)(*((_QWORD *)v36 + 2) + 24LL);
              if ( v46 )
                break;
            }
LABEL_59:
            if ( v40 >= *v45 )
              goto LABEL_64;
          }
          if ( *v46 == 5 )
          {
            if ( v46[1] == 9 && v36[6] == 2 )
            {
              v47 = *((_QWORD *)v36 + 4);
              if ( !*(_WORD *)(v47 + 4) )
              {
                v48 = *(_DWORD **)(*(_QWORD *)(v47 + 16) + 24LL);
                if ( v48 )
                {
                  if ( *v48 == 5 && !v48[1] )
                    v45 = *((unsigned int **)v36 + 5);
                }
              }
            }
            goto LABEL_59;
          }
          if ( v40 >= *v36 )
            goto LABEL_64;
        }
      }
      v24 = *((_QWORD *)v22 + 2);
      v25 = *(_DWORD **)(v24 + 24);
      while ( 1 )
      {
        v26 = *(unsigned int **)v10;
        v27 = *(unsigned int **)v10;
        if ( !*(_WORD *)(*(_QWORD *)v10 + 4LL) )
        {
          v28 = *(_DWORD **)(*((_QWORD *)v26 + 2) + 24LL);
          if ( v28 )
          {
            if ( *v28 == 5 && v28[1] == 9 && v26[6] == 2 )
            {
              v29 = *((_QWORD *)v26 + 4);
              if ( !*(_WORD *)(v29 + 4) )
              {
                v30 = *(_DWORD **)(*(_QWORD *)(v29 + 16) + 24LL);
                if ( v30 )
                {
                  if ( *v30 == 5 && !v30[1] )
                    v27 = *((unsigned int **)v26 + 5);
                }
              }
            }
          }
        }
        if ( v25 )
        {
          if ( *v25 == 5 && v25[1] == 9 && v22[6] == 2 )
          {
            v31 = *((_QWORD *)v22 + 4);
            if ( !*(_WORD *)(v31 + 4) )
            {
              v32 = *(_DWORD **)(*(_QWORD *)(v31 + 16) + 24LL);
              if ( v32 )
              {
                if ( *v32 == 5 && !v32[1] )
                  break;
              }
            }
          }
        }
        if ( *v27 >= *v22 )
          goto LABEL_30;
LABEL_12:
        v10 += 8;
      }
      if ( *v27 < **((_DWORD **)v22 + 5) )
        goto LABEL_12;
LABEL_30:
      v33 = *(_DWORD **)(v24 + 24);
      for ( v23 -= 8; ; v23 -= 8 )
      {
        v36 = *(unsigned int **)v23;
        v37 = v22;
        if ( v33 )
        {
          if ( *v33 == 5 && v33[1] == 9 && v22[6] == 2 )
          {
            v38 = *((_QWORD *)v22 + 4);
            if ( !*(_WORD *)(v38 + 4) )
            {
              v39 = *(_DWORD **)(*(_QWORD *)(v38 + 16) + 24LL);
              if ( v39 )
              {
                if ( *v39 == 5 && !v39[1] )
                  v37 = *((unsigned int **)v22 + 5);
              }
            }
          }
        }
        v34 = *(unsigned int **)v23;
        if ( !*((_WORD *)v36 + 2) )
        {
          v35 = *(_DWORD **)(*((_QWORD *)v36 + 2) + 24LL);
          if ( v35 )
          {
            if ( *v35 == 5 && v35[1] == 9 && v36[6] == 2 )
            {
              v49 = *((_QWORD *)v36 + 4);
              if ( !*(_WORD *)(v49 + 4) )
              {
                v50 = *(_DWORD **)(*(_QWORD *)(v49 + 16) + 24LL);
                if ( v50 )
                {
                  if ( *v50 == 5 && !v50[1] )
                    v34 = *((unsigned int **)v36 + 5);
                }
              }
            }
          }
        }
        if ( *v37 >= *v34 )
          break;
      }
LABEL_64:
      if ( v10 >= v23 )
        break;
      *(_QWORD *)v10 = v36;
      v10 += 8;
      *(_QWORD *)v23 = v26;
      v22 = *(unsigned int **)a1;
    }
    sub_6D7980(v10, v19, v9, a4);
    if ( v10 - a1 <= 128 )
      return;
    v4 = v10;
    v5 = (v10 - a1) >> 4;
    v6 = (v10 - a1) >> 3;
  }
  while ( v9 );
LABEL_81:
  v51 = v5 - 1;
  v52 = v51;
  v53 = (v6 - 1) >> 1;
  v54 = *(unsigned int **)&a1[8 * v51];
  v55 = (v6 & 1) == 0;
  if ( v51 < v53 )
    goto LABEL_82;
LABEL_114:
  v62 = &a1[8 * v52];
  if ( v51 != v52 || !v55 )
  {
LABEL_116:
    *(_QWORD *)v62 = v54;
    goto LABEL_113;
  }
  v56 = v52;
LABEL_141:
  v88 = 2 * v56 + 2;
  v89 = *(_QWORD *)&a1[8 * v88 - 8];
  v56 = v88 - 1;
  *(_QWORD *)v62 = v89;
  v61 = 8 * v56;
  v62 = &a1[8 * v56];
  while ( 1 )
  {
    v63 = (v56 - 1) >> 1;
    if ( v52 >= v56 )
      goto LABEL_116;
    if ( *((_WORD *)v54 + 2) )
    {
      v64 = *v54;
      while ( 1 )
      {
        v67 = &a1[8 * v63];
        v68 = *(unsigned int **)v67;
        v69 = *(unsigned int **)v67;
        if ( !*(_WORD *)(*(_QWORD *)v67 + 4LL) )
        {
          v70 = *(_DWORD **)(*((_QWORD *)v68 + 2) + 24LL);
          if ( v70 )
          {
            if ( *v70 == 5 && v70[1] == 9 && v68[6] == 2 )
            {
              v71 = *((_QWORD *)v68 + 4);
              if ( !*(_WORD *)(v71 + 4) )
              {
                v72 = *(_DWORD **)(*(_QWORD *)(v71 + 16) + 24LL);
                if ( v72 )
                {
                  if ( *v72 == 5 && !v72[1] )
                    v69 = *((unsigned int **)v68 + 5);
                }
              }
            }
          }
        }
        v65 = &a1[v61];
        if ( *v69 >= v64 )
          break;
        *(_QWORD *)v65 = v68;
        v66 = v63;
        if ( v52 >= v63 )
          goto LABEL_111;
        v63 = (v63 - 1) / 2;
        v61 = 8 * v66;
      }
    }
    else
    {
      v78 = *(_DWORD **)(*((_QWORD *)v54 + 2) + 24LL);
      while ( 1 )
      {
        v67 = &a1[8 * v63];
        v81 = *(unsigned int **)v67;
        v82 = *(unsigned int **)v67;
        if ( !*(_WORD *)(*(_QWORD *)v67 + 4LL) )
        {
          v83 = *(_DWORD **)(*((_QWORD *)v81 + 2) + 24LL);
          if ( v83 )
          {
            if ( *v83 == 5 && v83[1] == 9 && v81[6] == 2 )
            {
              v84 = *((_QWORD *)v81 + 4);
              if ( !*(_WORD *)(v84 + 4) )
              {
                v85 = *(_DWORD **)(*(_QWORD *)(v84 + 16) + 24LL);
                if ( v85 )
                {
                  if ( *v85 == 5 && !v85[1] )
                    v82 = *((unsigned int **)v81 + 5);
                }
              }
            }
          }
        }
        v79 = v54;
        if ( v78 )
        {
          if ( *v78 == 5 && v78[1] == 9 && v54[6] == 2 )
          {
            v86 = *((_QWORD *)v54 + 4);
            if ( !*(_WORD *)(v86 + 4) )
            {
              v87 = *(_DWORD **)(*(_QWORD *)(v86 + 16) + 24LL);
              if ( v87 )
              {
                if ( *v87 == 5 && !v87[1] )
                  v79 = *((unsigned int **)v54 + 5);
              }
            }
          }
        }
        v65 = &a1[v61];
        if ( *v82 >= *v79 )
          break;
        *(_QWORD *)v65 = v81;
        v80 = v63;
        if ( v52 >= v63 )
        {
LABEL_111:
          v65 = v67;
          break;
        }
        v63 = (v63 - 1) / 2;
        v61 = 8 * v80;
      }
    }
    *(_QWORD *)v65 = v54;
    if ( !v52 )
      break;
LABEL_113:
    --v52;
    v54 = *(unsigned int **)&a1[8 * v52];
    if ( v52 >= v53 )
      goto LABEL_114;
LABEL_82:
    v56 = v52;
    do
    {
      v57 = 2 * (v56 + 1);
      v58 = sub_6BFEB0(*(_QWORD *)&a1[16 * v56 + 16], *(_QWORD *)&a1[16 * v56 + 8]);
      v60 = v59;
      v56 = v57 - v58;
      v61 = 8 * v56;
      v62 = &a1[8 * v56];
      *(_QWORD *)&a1[8 * v60] = *(_QWORD *)v62;
    }
    while ( v56 < v53 );
    if ( v51 == v56 && v55 )
      goto LABEL_141;
  }
  for ( ; v4 - a1 > 8; *(_QWORD *)v75 = v90 )
  {
    while ( 1 )
    {
      v4 -= 8;
      v90 = *(unsigned int **)v4;
      *(_QWORD *)v4 = *(_QWORD *)a1;
      v91 = (v4 - a1) >> 3;
      v92 = (v91 - 1) / 2;
      if ( v4 - a1 <= 16 )
        break;
      for ( i = 0; ; i = 2 * (i + 1) )
      {
        while ( 1 )
        {
          v94 = 2 * (i + 1);
          v95 = &a1[16 * i + 16];
          v96 = *((_QWORD *)v95 - 1);
          v97 = *(_DWORD **)v95;
          v98 = *(_DWORD **)v95;
          if ( !*(_WORD *)(*(_QWORD *)v95 + 4LL) )
          {
            v99 = *(_DWORD **)(*((_QWORD *)v97 + 2) + 24LL);
            if ( v99 )
            {
              if ( *v99 == 5 && v99[1] == 9 && v97[6] == 2 )
              {
                v104 = *((_QWORD *)v97 + 4);
                if ( !*(_WORD *)(v104 + 4) )
                {
                  v105 = *(_DWORD **)(*(_QWORD *)(v104 + 16) + 24LL);
                  if ( v105 )
                  {
                    if ( *v105 == 5 && !v105[1] )
                      v98 = *((_DWORD **)v97 + 5);
                  }
                }
              }
            }
          }
          if ( !*(_WORD *)(v96 + 4) )
          {
            v100 = *(_DWORD **)(*(_QWORD *)(v96 + 16) + 24LL);
            if ( v100 )
            {
              if ( *v100 == 5 && v100[1] == 9 && *(_DWORD *)(v96 + 24) == 2 )
              {
                v102 = *(_QWORD *)(v96 + 32);
                if ( !*(_WORD *)(v102 + 4) )
                {
                  v103 = *(_DWORD **)(*(_QWORD *)(v102 + 16) + 24LL);
                  if ( v103 )
                  {
                    if ( *v103 == 5 && !v103[1] )
                      v96 = *(_QWORD *)(v96 + 40);
                  }
                }
              }
            }
          }
          if ( *v98 >= *(_DWORD *)v96 )
            break;
          v101 = v94 - 1;
          v95 = &a1[8 * v94 - 8];
          *(_QWORD *)&a1[8 * i] = *(_QWORD *)v95;
          if ( v94 - 1 >= v92 )
          {
            if ( (v91 & 1) != 0 )
            {
              v124 = v94 - 2;
              --v94;
              v106 = v124 >> 1;
              goto LABEL_173;
            }
            --v94;
            if ( (v91 - 2) >> 1 == v101 )
              goto LABEL_213;
            goto LABEL_172;
          }
          i = v94 - 1;
        }
        *(_QWORD *)&a1[8 * i] = v97;
        if ( v94 >= v92 )
          break;
      }
      if ( (v91 & 1) == 0 && (v91 - 2) >> 1 == v94 )
        goto LABEL_213;
LABEL_172:
      v106 = (v94 - 1) / 2;
      if ( v94 )
        goto LABEL_173;
      *(_QWORD *)v95 = v90;
    }
    v75 = a1;
    if ( (v91 & 1) == 0 && (unsigned __int64)(v91 - 1) <= 2 )
    {
      v95 = a1;
      v94 = 0;
LABEL_213:
      v123 = 2 * v94 + 2;
      *(_QWORD *)v95 = *(_QWORD *)&a1[8 * v123 - 8];
      v94 = 2 * v94 + 1;
      v106 = (v123 >> 1) - 1;
LABEL_173:
      if ( *((_WORD *)v90 + 2) )
      {
        v107 = *v90;
        while ( 1 )
        {
          v108 = &a1[8 * v106];
          v109 = *(unsigned int **)v108;
          v110 = *(unsigned int **)v108;
          if ( !*(_WORD *)(*(_QWORD *)v108 + 4LL) )
          {
            v111 = *(_DWORD **)(*((_QWORD *)v109 + 2) + 24LL);
            if ( v111 )
            {
              if ( *v111 == 5 && v111[1] == 9 && v109[6] == 2 )
              {
                v112 = *((_QWORD *)v109 + 4);
                if ( !*(_WORD *)(v112 + 4) )
                {
                  v113 = *(_DWORD **)(*(_QWORD *)(v112 + 16) + 24LL);
                  if ( v113 )
                  {
                    if ( *v113 == 5 && !v113[1] )
                      v110 = *((unsigned int **)v109 + 5);
                  }
                }
              }
            }
          }
          v75 = &a1[8 * v94];
          if ( *v110 >= v107 )
            break;
          *(_QWORD *)v75 = v109;
          v94 = v106;
          if ( !v106 )
            goto LABEL_104;
          v106 = (v106 - 1) / 2;
        }
      }
      else
      {
        v114 = *(_DWORD **)(*((_QWORD *)v90 + 2) + 24LL);
        while ( 1 )
        {
          v108 = &a1[8 * v106];
          v116 = *(unsigned int **)v108;
          v117 = *(unsigned int **)v108;
          if ( !*(_WORD *)(*(_QWORD *)v108 + 4LL) )
          {
            v118 = *(_DWORD **)(*((_QWORD *)v116 + 2) + 24LL);
            if ( v118 )
            {
              if ( *v118 == 5 && v118[1] == 9 && v116[6] == 2 )
              {
                v119 = *((_QWORD *)v116 + 4);
                if ( !*(_WORD *)(v119 + 4) )
                {
                  v120 = *(_DWORD **)(*(_QWORD *)(v119 + 16) + 24LL);
                  if ( v120 )
                  {
                    if ( *v120 == 5 && !v120[1] )
                      v117 = *((unsigned int **)v116 + 5);
                  }
                }
              }
            }
          }
          v115 = v90;
          if ( v114 )
          {
            if ( *v114 == 5 && v114[1] == 9 && v90[6] == 2 )
            {
              v121 = *((_QWORD *)v90 + 4);
              if ( !*(_WORD *)(v121 + 4) )
              {
                v122 = *(_DWORD **)(*(_QWORD *)(v121 + 16) + 24LL);
                if ( v122 )
                {
                  if ( *v122 == 5 && !v122[1] )
                    v115 = *((unsigned int **)v90 + 5);
                }
              }
            }
          }
          v75 = &a1[8 * v94];
          if ( *v117 >= *v115 )
            break;
          *(_QWORD *)v75 = v116;
          v94 = v106;
          if ( !v106 )
          {
LABEL_104:
            v75 = v108;
            break;
          }
          v106 = (v106 - 1) / 2;
        }
      }
    }
  }
}

