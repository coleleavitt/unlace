__int64 __fastcall sub_47F910(_QWORD *a1, __int64 *a2, char a3)
{
  char **exception; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  void *v11; // rax
  unsigned int v12; // ebp
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  int v22; // edi
  __int64 v23; // rsi
  bool v24; // zf
  unsigned int v25; // ebp
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rsi
  void *v29; // rdi
  _QWORD *v30; // rbx
  __int64 v31; // rax
  _QWORD *v32; // r12
  void *v33; // rdi
  __int64 *v34; // rbx
  unsigned __int64 v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rdi
  _QWORD *v38; // rbx
  __int64 v39; // rax
  _QWORD *v40; // r12
  void *v41; // rdi
  __int64 *v42; // rbx
  unsigned __int64 v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v47; // rdx
  unsigned int v48; // ecx
  _QWORD **v49; // r14
  _QWORD **v50; // r15
  __int64 v51; // rbx
  __int64 v52; // rdx
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  __int64 v56; // rbx
  unsigned int v57; // r14d
  size_t v58; // rsi
  unsigned int *v59; // rax
  unsigned int v60; // ecx
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  _DWORD *v65; // rax
  _QWORD *v66; // r14
  _QWORD *v67; // r12
  __int64 v68; // rax
  _QWORD *v69; // rbx
  _QWORD *v70; // r13
  void *v71; // rdi
  _QWORD *v72; // r15
  unsigned __int64 v73; // r13
  __int64 v74; // r12
  __int64 *v75; // rbx
  __int64 v76; // rsi
  _QWORD *v77; // r12
  __int64 v78; // rax
  _QWORD *v79; // rbx
  _QWORD *v80; // r13
  void *v81; // rdi
  _QWORD *v82; // r15
  unsigned __int64 v83; // r13
  __int64 v84; // r12
  __int64 *v85; // rbx
  __int64 v86; // rsi
  void (__fastcall ***v87)(void *); // rbx
  _QWORD *v88; // rbx
  __int64 *v89; // rbx
  __int64 *v90; // r12
  __int64 v91; // rsi
  __int64 v92; // rdi
  char *v93; // r12
  _DWORD *v94; // rax
  _QWORD *v95; // rbx
  __int64 v96; // rax
  char *v97; // r13
  char *v98; // r15
  void *v99; // rdi
  __int64 *v100; // r13
  __int64 *v101; // rdx
  __int64 *v102; // r15
  __int64 v103; // rsi
  __int64 v104; // rax
  char *v105; // r13
  char *v106; // r15
  void *v107; // rdi
  __int64 *v108; // r13
  __int64 *v109; // rdx
  __int64 *v110; // r15
  __int64 v111; // rsi
  void (__fastcall ***v112)(void *); // r13
  _QWORD *v113; // r13
  __int64 *v114; // r13
  __int64 *v115; // r15
  __int64 v116; // rsi
  __int64 v117; // rdi
  __int64 *v118; // r13
  __int64 *v119; // r15
  __int64 v120; // rsi
  __int64 v121; // rdi
  __int64 *v122; // r13
  __int64 *v123; // r15
  __int64 v124; // rsi
  __int64 v125; // rdi
  __int64 v126; // rsi
  __int64 v127; // rdi
  __int64 *v128; // rbx
  __int64 *v129; // r12
  __int64 v130; // rsi
  __int64 v131; // rdi
  __int64 *v132; // rbx
  __int64 *v133; // r12
  __int64 v134; // rsi
  __int64 v135; // rdi
  __int64 v136; // rsi
  __int64 v137; // rdi
  char *v139; // [rsp+8h] [rbp-230h]
  __int64 *v140; // [rsp+8h] [rbp-230h]
  char *v141; // [rsp+8h] [rbp-230h]
  __int64 *v142; // [rsp+8h] [rbp-230h]
  __int64 v143; // [rsp+18h] [rbp-220h]
  __int64 v144; // [rsp+18h] [rbp-220h]
  char *v145; // [rsp+28h] [rbp-210h]
  void *v146; // [rsp+48h] [rbp-1F0h] BYREF
  __int64 v147; // [rsp+50h] [rbp-1E8h] BYREF
  void *v148; // [rsp+58h] [rbp-1E0h]
  int v149; // [rsp+60h] [rbp-1D8h] BYREF
  _QWORD *v150; // [rsp+68h] [rbp-1D0h]
  int v151; // [rsp+70h] [rbp-1C8h]
  unsigned int v152; // [rsp+74h] [rbp-1C4h]
  int v153; // [rsp+78h] [rbp-1C0h]
  __int64 v154; // [rsp+80h] [rbp-1B8h]
  __int64 v155; // [rsp+88h] [rbp-1B0h]
  __int64 *v156; // [rsp+90h] [rbp-1A8h]
  __int64 v157; // [rsp+98h] [rbp-1A0h]
  __int64 v158; // [rsp+A0h] [rbp-198h]
  _QWORD *v159; // [rsp+A8h] [rbp-190h]
  __int64 v160; // [rsp+B8h] [rbp-180h]
  __int64 *v161; // [rsp+C0h] [rbp-178h]
  _QWORD *v162; // [rsp+C8h] [rbp-170h]
  void *v163; // [rsp+E0h] [rbp-158h] BYREF
  char v164[8]; // [rsp+E8h] [rbp-150h] BYREF
  __int64 v165; // [rsp+F0h] [rbp-148h]
  __int64 v166; // [rsp+108h] [rbp-130h]
  __int64 v167; // [rsp+110h] [rbp-128h]
  _QWORD *v168; // [rsp+118h] [rbp-120h]
  __int64 v169; // [rsp+120h] [rbp-118h]
  __int64 v170; // [rsp+128h] [rbp-110h]
  _QWORD *v171; // [rsp+130h] [rbp-108h]
  __int64 v172; // [rsp+140h] [rbp-F8h]
  _QWORD *v173; // [rsp+148h] [rbp-F0h]
  _QWORD *v174; // [rsp+150h] [rbp-E8h]
  void *ptr; // [rsp+170h] [rbp-C8h] BYREF
  char v176[8]; // [rsp+178h] [rbp-C0h] BYREF
  __int64 v177; // [rsp+180h] [rbp-B8h]
  __int64 v178; // [rsp+198h] [rbp-A0h]
  __int64 v179; // [rsp+1A0h] [rbp-98h]
  __int64 *v180; // [rsp+1A8h] [rbp-90h]
  __int64 v181; // [rsp+1B0h] [rbp-88h]
  __int64 v182; // [rsp+1B8h] [rbp-80h]
  char *v183; // [rsp+1C0h] [rbp-78h]
  __int64 v184; // [rsp+1D0h] [rbp-68h]
  __int64 *v185; // [rsp+1D8h] [rbp-60h]
  char *v186; // [rsp+1E0h] [rbp-58h]

  v6 = *a1;
  sub_FA3A80(&v149, *a1);
  v11 = (void *)*a1;
  v12 = *((_DWORD *)a1 + 18);
  v147 = 0;
  v148 = v11;
  if ( !v151 )
  {
    v7 = (__int64)v150;
    if ( v150 )
    {
LABEL_64:
      v56 = *(unsigned int *)(v7 - 4);
      if ( (unsigned int)v56 >= v12 )
      {
        *(_DWORD *)(v7 - 4) = v12;
        v152 = v12;
        v151 = 1;
        goto LABEL_77;
      }
      goto LABEL_69;
    }
    if ( !v12 )
    {
LABEL_76:
      v152 = v12;
      v151 = 1;
LABEL_77:
      if ( ++v153 != -1 )
        goto LABEL_4;
      goto LABEL_78;
    }
LABEL_90:
    v64 = (_QWORD *)sub_186B270(0x38u);
    v7 = (__int64)(v64 + 1);
    *v64 = 2;
    v56 = 0;
    v150 = v64 + 1;
LABEL_69:
    while ( 1 )
    {
      v60 = *(_DWORD *)(v7 - 8);
      if ( v60 >= v12 )
        break;
      v57 = (3 * v60 + 1) >> 1;
      v58 = 8 * (v57 + ((3 * v60 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * v60 + 8 >= (unsigned int)v58 || v60 >= v57 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &ptr);
        sub_233E40((__int64)&ptr);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v59 = (unsigned int *)sub_186B300((void *)(v7 - 8), v58);
      v7 = (__int64)(v59 + 2);
      *v59 = v57;
      v150 = v59 + 2;
    }
    *(_DWORD *)(v7 - 4) = v12;
    v6 = 24 * v56;
    v61 = 24LL * v12;
    v8 = v7 + 24 * v56;
    v7 += v61;
    if ( 24 * v56 != v61 )
    {
      v62 = (_QWORD *)v8;
      do
      {
        *v62 = 0;
        v62 += 3;
        *((_DWORD *)v62 - 2) = 0;
      }
      while ( (_QWORD *)v7 != v62 );
      if ( (((_BYTE)v7 - (_BYTE)v8) & 8) == 0 || (*(_DWORD *)(v8 + 8) = 0, v8 += 24, v7 != v8) )
      {
        do
        {
          *(_DWORD *)(v8 + 8) = 0;
          v8 += 48;
          *(_DWORD *)(v8 - 16) = 0;
        }
        while ( v7 != v8 );
      }
    }
    goto LABEL_76;
  }
  if ( v152 < v12 )
  {
    v7 = (__int64)v150;
    if ( v150 )
      goto LABEL_64;
    goto LABEL_90;
  }
  if ( ++v153 != -1 )
    goto LABEL_4;
LABEL_78:
  v63 = v150;
  if ( v150 )
  {
    v7 = (__int64)&v150[3 * *((unsigned int *)v150 - 1)];
    if ( v150 != (_QWORD *)v7 )
    {
      LODWORD(v8) = (24 * (unsigned __int8)*((_DWORD *)v150 - 1)) & 8;
      if ( ((24 * (unsigned __int8)*((_DWORD *)v150 - 1)) & 8) == 0
        || (*((_DWORD *)v150 + 4) = 0, v63 += 3, (_QWORD *)v7 != v63) )
      {
        do
        {
          *((_DWORD *)v63 + 4) = 0;
          v63 += 6;
          *((_DWORD *)v63 - 2) = 0;
        }
        while ( (_QWORD *)v7 != v63 );
      }
    }
  }
  v153 = 1;
LABEL_4:
  v13 = (_QWORD *)sub_4095A0(*a2, v6, v7, v8, v9, v10);
  v14 = v13[1];
  v15 = *v13;
  if ( v14 )
    v16 = *(unsigned int *)(v14 - 4);
  else
    v16 = 0;
  v17 = sub_15EC1C0(*v13, v16);
  v22 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v23 = v147;
  v147 = v17;
  if ( v23 )
  {
    v24 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v24 )
    {
      sub_15D7BC0(v15, v23);
      v22 = v147;
    }
  }
  sub_491EC0(v22, (unsigned int)&v147, v18, v19, v20, v21);
  v25 = sub_47AE60((__int64)a1, &v147, (__int64)&v149);
  if ( !(_BYTE)v25 )
  {
LABEL_12:
    v25 = 0;
    goto LABEL_13;
  }
  v47 = a1[10];
  if ( v47 )
  {
    v48 = *(_DWORD *)(v47 - 4);
    v49 = (_QWORD **)(v47 + 136LL * v48);
    if ( (_QWORD **)v47 != v49 )
    {
      v50 = (_QWORD **)a1[10];
      do
      {
        v51 = sub_407E90((_QWORD *)*a2, (__int64)&v147, v47, v48, v26, v27);
        if ( v51 == sub_407E90(*v50, (__int64)&v147, v52, v53, v54, v55) )
          goto LABEL_12;
        v50 += 17;
      }
      while ( v49 != v50 );
    }
  }
  v65 = (_DWORD *)*a2;
  if ( *a2 )
    ++*v65;
  v163 = v65;
  sub_482680(v164, &v149);
  v66 = v163;
  sub_47D180((const __m128i **)a1 + 10, (__int64 *)&v163);
  if ( a3 )
  {
    v146 = nullptr;
    sub_47DFA0(a1, (const __m128i **)&v146);
    v93 = (char *)v146;
    if ( !v146 || (v145 = (char *)v146 + 136 * *((unsigned int *)v146 - 1), v145 == v146) )
    {
LABEL_187:
      sub_482EA0(&v146);
    }
    else
    {
      while ( 1 )
      {
        v94 = *(_DWORD **)v93;
        if ( *(_QWORD *)v93 )
          ++*v94;
        ptr = v94;
        sub_482680(v176, v93 + 8);
        v95 = ptr;
        if ( ptr == v66 )
          break;
        v139 = v186;
        if ( v186 )
        {
          v96 = *((unsigned int *)v186 - 1);
          if ( (_DWORD)v96 )
          {
            v97 = v186;
            v98 = &v186[8 * v96];
            do
            {
              while ( *(_QWORD *)v97 )
              {
                v99 = (void *)(*(_QWORD *)v97 - 8LL);
                v97 += 8;
                sub_186B220(v99);
                if ( v98 == v97 )
                  goto LABEL_153;
              }
              v97 += 8;
            }
            while ( v97 != v98 );
          }
LABEL_153:
          sub_186B220(v139 - 8);
        }
        v100 = v185;
        if ( v185 )
        {
          v101 = &v185[*((unsigned int *)v185 - 1)];
          if ( v185 < v101 )
          {
            v102 = v185;
            v143 = v184;
            do
            {
              while ( 1 )
              {
                v103 = *v102;
                if ( *v102 )
                {
                  v24 = (*(_DWORD *)(v103 + 8))-- == 1;
                  if ( v24 )
                    break;
                }
                if ( ++v102 >= v101 )
                  goto LABEL_161;
              }
              v140 = v101;
              ++v102;
              sub_15D7BC0(v143, v103);
              v101 = v140;
            }
            while ( v102 < v140 );
          }
LABEL_161:
          sub_186B220(v100 - 1);
        }
        v141 = v183;
        if ( v183 )
        {
          v104 = *((unsigned int *)v183 - 1);
          if ( (_DWORD)v104 )
          {
            v105 = v183;
            v106 = &v183[8 * v104];
            do
            {
              while ( *(_QWORD *)v105 )
              {
                v107 = (void *)(*(_QWORD *)v105 - 8LL);
                v105 += 8;
                sub_186B220(v107);
                if ( v106 == v105 )
                  goto LABEL_167;
              }
              v105 += 8;
            }
            while ( v105 != v106 );
          }
LABEL_167:
          sub_186B220(v141 - 8);
        }
        if ( v182 )
          sub_186B220((void *)(v182 - 8));
        if ( v181 )
          sub_186B220((void *)(v181 - 8));
        v108 = v180;
        if ( v180 )
        {
          v109 = &v180[*((unsigned int *)v180 - 1)];
          if ( v180 < v109 )
          {
            v110 = v180;
            v144 = v179;
            do
            {
              while ( 1 )
              {
                v111 = *v110;
                if ( *v110 )
                {
                  v24 = (*(_DWORD *)(v111 + 8))-- == 1;
                  if ( v24 )
                    break;
                }
                if ( ++v110 >= v109 )
                  goto LABEL_179;
              }
              v142 = v109;
              ++v110;
              sub_15D7BC0(v144, v111);
              v109 = v142;
            }
            while ( v110 < v142 );
          }
LABEL_179:
          sub_186B220(v108 - 1);
        }
        if ( v178 )
          sub_186B220((void *)(v178 - 8));
        if ( v177 )
          sub_186B220((void *)(v177 - 8));
        if ( v95 )
        {
          v24 = (*(_DWORD *)v95)-- == 1;
          if ( v24 )
          {
            v112 = (void (__fastcall ***)(void *))v95[11];
            if ( v112 )
            {
              v24 = (*((_DWORD *)v112 + 4))-- == 1;
              if ( v24 )
              {
                (**v112)(v112);
                sub_186B220(v112);
              }
            }
            v113 = (_QWORD *)v95[10];
            if ( v113 )
            {
              v24 = (*(_DWORD *)v113)-- == 1;
              if ( v24 )
              {
                sub_41CB00(v113);
                sub_186B220(v113);
              }
            }
            v114 = (__int64 *)v95[9];
            if ( v114 )
            {
              v115 = &v114[*((unsigned int *)v114 - 1)];
              if ( v114 >= v115 )
                goto LABEL_211;
              do
              {
                while ( 1 )
                {
                  v116 = *v114;
                  if ( *v114 )
                  {
                    v117 = v95[8];
                    v24 = (*(_DWORD *)(v116 + 8))-- == 1;
                    if ( v24 )
                      break;
                  }
                  if ( ++v114 >= v115 )
                    goto LABEL_210;
                }
                sub_15D7BC0(v117, v116);
                ++v114;
              }
              while ( v114 < v115 );
LABEL_210:
              v114 = (__int64 *)v95[9];
              if ( v114 )
LABEL_211:
                sub_186B220(v114 - 1);
            }
            v118 = (__int64 *)v95[7];
            if ( v118 )
            {
              v119 = &v118[*((unsigned int *)v118 - 1)];
              if ( v118 >= v119 )
                goto LABEL_220;
              do
              {
                while ( 1 )
                {
                  v120 = *v118;
                  if ( *v118 )
                  {
                    v121 = v95[6];
                    v24 = (*(_DWORD *)(v120 + 8))-- == 1;
                    if ( v24 )
                      break;
                  }
                  if ( ++v118 >= v119 )
                    goto LABEL_219;
                }
                sub_15D7BC0(v121, v120);
                ++v118;
              }
              while ( v118 < v119 );
LABEL_219:
              v118 = (__int64 *)v95[7];
              if ( v118 )
LABEL_220:
                sub_186B220(v118 - 1);
            }
            v122 = (__int64 *)v95[5];
            if ( v122 )
            {
              v123 = &v122[*((unsigned int *)v122 - 1)];
              if ( v122 >= v123 )
                goto LABEL_229;
              do
              {
                while ( 1 )
                {
                  v124 = *v122;
                  if ( *v122 )
                  {
                    v125 = v95[4];
                    v24 = (*(_DWORD *)(v124 + 8))-- == 1;
                    if ( v24 )
                      break;
                  }
                  if ( ++v122 >= v123 )
                    goto LABEL_228;
                }
                sub_15D7BC0(v125, v124);
                ++v122;
              }
              while ( v122 < v123 );
LABEL_228:
              v122 = (__int64 *)v95[5];
              if ( v122 )
LABEL_229:
                sub_186B220(v122 - 1);
            }
            v126 = v95[2];
            if ( v126 )
            {
              v127 = v95[3];
              v24 = (*(_DWORD *)(v126 + 8))-- == 1;
              if ( v24 )
                sub_15D7BC0(v127, v126);
            }
            sub_186B220(v95);
          }
        }
        v93 += 136;
        if ( v145 == v93 )
          goto LABEL_187;
      }
      v25 = 0;
      sub_482240(&ptr);
      sub_482EA0(&v146);
    }
  }
  v67 = v174;
  if ( v174 )
  {
    v68 = *((unsigned int *)v174 - 1);
    v69 = v174;
    v70 = &v174[v68];
    if ( (_DWORD)v68 )
    {
      do
      {
        while ( *v69 )
        {
          v71 = (void *)(*v69++ - 8LL);
          sub_186B220(v71);
          if ( v70 == v69 )
            goto LABEL_98;
        }
        ++v69;
      }
      while ( v69 != v70 );
    }
LABEL_98:
    sub_186B220(v67 - 1);
  }
  v72 = v173;
  if ( v173 )
  {
    v73 = (unsigned __int64)&v173[*((unsigned int *)v173 - 1)];
    if ( (unsigned __int64)v173 < v73 )
    {
      v74 = v172;
      v75 = v173;
      do
      {
        while ( 1 )
        {
          v76 = *v75;
          if ( *v75 )
          {
            v24 = (*(_DWORD *)(v76 + 8))-- == 1;
            if ( v24 )
              break;
          }
          if ( (unsigned __int64)++v75 >= v73 )
            goto LABEL_106;
        }
        ++v75;
        sub_15D7BC0(v74, v76);
      }
      while ( (unsigned __int64)v75 < v73 );
    }
LABEL_106:
    sub_186B220(v72 - 1);
  }
  v77 = v171;
  if ( v171 )
  {
    v78 = *((unsigned int *)v171 - 1);
    v79 = v171;
    v80 = &v171[v78];
    if ( (_DWORD)v78 )
    {
      do
      {
        while ( *v79 )
        {
          v81 = (void *)(*v79++ - 8LL);
          sub_186B220(v81);
          if ( v79 == v80 )
            goto LABEL_111;
        }
        ++v79;
      }
      while ( v79 != v80 );
    }
LABEL_111:
    sub_186B220(v77 - 1);
  }
  if ( v170 )
    sub_186B220((void *)(v170 - 8));
  if ( v169 )
    sub_186B220((void *)(v169 - 8));
  v82 = v168;
  if ( v168 )
  {
    v83 = (unsigned __int64)&v168[*((unsigned int *)v168 - 1)];
    if ( (unsigned __int64)v168 < v83 )
    {
      v84 = v167;
      v85 = v168;
      do
      {
        while ( 1 )
        {
          v86 = *v85;
          if ( *v85 )
          {
            v24 = (*(_DWORD *)(v86 + 8))-- == 1;
            if ( v24 )
              break;
          }
          if ( (unsigned __int64)++v85 >= v83 )
            goto LABEL_123;
        }
        ++v85;
        sub_15D7BC0(v84, v86);
      }
      while ( (unsigned __int64)v85 < v83 );
    }
LABEL_123:
    sub_186B220(v82 - 1);
  }
  if ( v166 )
    sub_186B220((void *)(v166 - 8));
  if ( v165 )
    sub_186B220((void *)(v165 - 8));
  if ( v66 )
  {
    v24 = (*(_DWORD *)v66)-- == 1;
    if ( v24 )
    {
      v87 = (void (__fastcall ***)(void *))v66[11];
      if ( v87 )
      {
        v24 = (*((_DWORD *)v87 + 4))-- == 1;
        if ( v24 )
        {
          (**v87)(v87);
          sub_186B220(v87);
        }
      }
      v88 = (_QWORD *)v66[10];
      if ( v88 )
      {
        v24 = (*(_DWORD *)v88)-- == 1;
        if ( v24 )
        {
          sub_41CB00(v88);
          sub_186B220(v88);
        }
      }
      v89 = (__int64 *)v66[9];
      if ( v89 )
      {
        v90 = &v89[*((unsigned int *)v89 - 1)];
        if ( v89 >= v90 )
          goto LABEL_235;
        do
        {
          v91 = *v89;
          if ( *v89 )
          {
            v92 = v66[8];
            v24 = (*(_DWORD *)(v91 + 8))-- == 1;
            if ( v24 )
              sub_15D7BC0(v92, v91);
          }
          ++v89;
        }
        while ( v89 < v90 );
        v89 = (__int64 *)v66[9];
        if ( v89 )
LABEL_235:
          sub_186B220(v89 - 1);
      }
      v128 = (__int64 *)v66[7];
      if ( v128 )
      {
        v129 = &v128[*((unsigned int *)v128 - 1)];
        if ( v128 >= v129 )
          goto LABEL_244;
        do
        {
          v130 = *v128;
          if ( *v128 )
          {
            v131 = v66[6];
            v24 = (*(_DWORD *)(v130 + 8))-- == 1;
            if ( v24 )
              sub_15D7BC0(v131, v130);
          }
          ++v128;
        }
        while ( v128 < v129 );
        v128 = (__int64 *)v66[7];
        if ( v128 )
LABEL_244:
          sub_186B220(v128 - 1);
      }
      v132 = (__int64 *)v66[5];
      if ( v132 )
      {
        v133 = &v132[*((unsigned int *)v132 - 1)];
        if ( v132 >= v133 )
          goto LABEL_253;
        do
        {
          v134 = *v132;
          if ( *v132 )
          {
            v135 = v66[4];
            v24 = (*(_DWORD *)(v134 + 8))-- == 1;
            if ( v24 )
              sub_15D7BC0(v135, v134);
          }
          ++v132;
        }
        while ( v132 < v133 );
        v132 = (__int64 *)v66[5];
        if ( v132 )
LABEL_253:
          sub_186B220(v132 - 1);
      }
      v136 = v66[2];
      if ( v136 )
      {
        v137 = v66[3];
        v24 = (*(_DWORD *)(v136 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v137, v136);
      }
      sub_186B220(v66);
    }
  }
LABEL_13:
  v28 = v147;
  if ( v147 )
  {
    v29 = v148;
    v24 = (*(_DWORD *)(v147 + 8))-- == 1;
    if ( v24 )
      sub_15D7BC0(v29, v28);
  }
  v30 = v162;
  if ( v162 )
  {
    v31 = *((unsigned int *)v162 - 1);
    if ( (_DWORD)v31 )
    {
      v32 = &v162[v31];
      do
      {
        while ( *v30 )
        {
          v33 = (void *)(*v30++ - 8LL);
          sub_186B220(v33);
          if ( v32 == v30 )
          {
            v30 = v162;
            goto LABEL_22;
          }
        }
        ++v30;
      }
      while ( v30 != v32 );
      v30 = v162;
    }
LABEL_22:
    sub_186B220(v30 - 1);
  }
  v34 = v161;
  if ( v161 )
  {
    v35 = (unsigned __int64)&v161[*((unsigned int *)v161 - 1)];
    if ( (unsigned __int64)v161 >= v35 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        v36 = *v34;
        if ( *v34 )
        {
          v37 = v160;
          v24 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v24 )
            break;
        }
        if ( (unsigned __int64)++v34 >= v35 )
          goto LABEL_30;
      }
      sub_15D7BC0(v37, v36);
      ++v34;
    }
    while ( (unsigned __int64)v34 < v35 );
LABEL_30:
    v34 = v161;
    if ( v161 )
LABEL_31:
      sub_186B220(v34 - 1);
  }
  v38 = v159;
  if ( v159 )
  {
    v39 = *((unsigned int *)v159 - 1);
    if ( (_DWORD)v39 )
    {
      v40 = &v159[v39];
      do
      {
        while ( *v38 )
        {
          v41 = (void *)(*v38++ - 8LL);
          sub_186B220(v41);
          if ( v38 == v40 )
          {
            v38 = v159;
            goto LABEL_38;
          }
        }
        ++v38;
      }
      while ( v38 != v40 );
      v38 = v159;
    }
LABEL_38:
    sub_186B220(v38 - 1);
  }
  if ( v158 )
    sub_186B220((void *)(v158 - 8));
  if ( v157 )
    sub_186B220((void *)(v157 - 8));
  v42 = v156;
  if ( v156 )
  {
    v43 = (unsigned __int64)&v156[*((unsigned int *)v156 - 1)];
    if ( (unsigned __int64)v156 >= v43 )
      goto LABEL_51;
    do
    {
      while ( 1 )
      {
        v44 = *v42;
        if ( *v42 )
        {
          v45 = v155;
          v24 = (*(_DWORD *)(v44 + 8))-- == 1;
          if ( v24 )
            break;
        }
        if ( (unsigned __int64)++v42 >= v43 )
          goto LABEL_50;
      }
      sub_15D7BC0(v45, v44);
      ++v42;
    }
    while ( (unsigned __int64)v42 < v43 );
LABEL_50:
    v42 = v156;
    if ( v156 )
LABEL_51:
      sub_186B220(v42 - 1);
  }
  if ( v154 )
    sub_186B220((void *)(v154 - 8));
  if ( v150 )
    sub_186B220(v150 - 1);
  return v25;
}

