_QWORD *__fastcall sub_26CAE0(_QWORD *a1, unsigned int a2, int a3)
{
  _QWORD *v5; // rdx
  unsigned int v6; // r13d
  unsigned int v7; // ebx
  _DWORD *v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int **v15; // r14
  unsigned int *v16; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rdx
  unsigned int v21; // r8d
  size_t v22; // rsi
  unsigned int *v23; // rax
  unsigned __int64 v24; // r14
  __int64 v25; // rcx
  int v26; // eax
  _QWORD *v27; // r12
  __int64 v28; // r14
  unsigned int v29; // r15d
  unsigned __int64 v30; // r13
  _QWORD *v31; // rax
  unsigned int *v32; // rax
  unsigned int *v33; // rcx
  int v34; // r9d
  __int64 v35; // rax
  unsigned int v36; // edi
  unsigned __int64 v37; // r15
  __int64 v38; // rcx
  unsigned int **v39; // r14
  __int64 v40; // r15
  unsigned __int64 v41; // r12
  unsigned int v42; // r13d
  __int64 v43; // r12
  _QWORD *v44; // rax
  unsigned int *v45; // rax
  unsigned int *v46; // rcx
  int v47; // r9d
  __int64 v48; // rax
  unsigned int v49; // edi
  unsigned int v50; // r15d
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 *v53; // r14
  __int64 *v54; // rdx
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 *v57; // r10
  unsigned __int64 v58; // rdi
  __int64 *v59; // rax
  unsigned __int64 v60; // rdi
  __int64 v61; // r11
  __int64 *v62; // r12
  void *v63; // rdi
  unsigned int v64; // r14d
  unsigned int v65; // edx
  __int64 v66; // rax
  __int64 *v67; // r15
  __int64 *v68; // rdx
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 *v71; // r10
  unsigned __int64 v72; // rdi
  __int64 *v73; // rax
  unsigned __int64 v74; // rdi
  __int64 v75; // r11
  __int64 *v76; // r12
  void *v77; // rdi
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rdi
  __m128i v80; // xmm0
  unsigned __int64 v81; // rax
  __int64 v82; // r10
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rdi
  __m128i v85; // xmm0
  unsigned __int64 v86; // rax
  __int64 v87; // r10
  unsigned int v88; // edx
  size_t v89; // rsi
  unsigned int *v90; // rax
  unsigned int v91; // edx
  size_t v92; // rsi
  unsigned int *v93; // rax
  int v94; // r12d
  __int64 v95; // rax
  int v96; // ebx
  _QWORD *result; // rax
  unsigned int v98; // r14d
  size_t v99; // rsi
  unsigned int *v100; // rax
  __int64 v101; // rax
  int v102; // ebx
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  unsigned int *v105; // rax
  unsigned __int64 v106; // r14
  __int64 v107; // rcx
  int v108; // eax
  _QWORD *v109; // r12
  __int64 v110; // r15
  unsigned __int64 v111; // r14
  __int64 v112; // r13
  __int64 v113; // r14
  _QWORD *v114; // rax
  _QWORD *v115; // rsi
  unsigned int v116; // eax
  _DWORD *v117; // rcx
  __int64 v118; // rsi
  unsigned int v119; // edx
  size_t v120; // rsi
  unsigned int *v121; // rax
  unsigned int v122; // r12d
  unsigned int v123; // eax
  __int64 v124; // rax
  __int64 *v125; // rdx
  __int64 *v126; // r14
  __int64 v127; // rax
  __int64 v128; // rdi
  __int64 *v129; // r15
  unsigned __int64 v130; // rax
  __int64 v131; // r8
  __int64 v132; // rax
  __int64 *v133; // r12
  void *v134; // rdi
  unsigned __int64 v135; // r9
  unsigned __int64 v136; // rax
  __m128i v137; // xmm0
  unsigned __int64 v138; // r9
  __int64 *v139; // rax
  __int64 v140; // rdx
  _QWORD *v141; // rax
  _QWORD *v142; // rax
  _QWORD *v143; // rax
  unsigned int v144; // r14d
  unsigned int v145; // edx
  __int64 v146; // rax
  __int64 *v147; // r15
  __int64 *v148; // rdx
  __int64 v149; // r9
  __int64 *v150; // r10
  unsigned __int64 v151; // rax
  unsigned __int64 v152; // r10
  unsigned __int64 v153; // rax
  __m128i v154; // xmm0
  unsigned __int64 v155; // rax
  __int64 v156; // r10
  __int64 *v157; // r12
  __int64 v158; // rax
  _QWORD *v159; // rax
  __int64 *v160; // rax
  unsigned __int64 v161; // rdi
  __int64 v162; // r11
  char **exception; // rbp
  __int64 v164; // rdx
  __int64 v165; // rdx
  __int64 v166; // rdx
  __int64 v167; // rdx
  __int64 v168; // [rsp+8h] [rbp-70h]
  unsigned __int64 v169; // [rsp+10h] [rbp-68h]
  __int64 *v170; // [rsp+10h] [rbp-68h]
  __int64 *v171; // [rsp+10h] [rbp-68h]
  __int64 *v172; // [rsp+10h] [rbp-68h]
  __int64 *v173; // [rsp+10h] [rbp-68h]
  unsigned int v174; // [rsp+10h] [rbp-68h]
  unsigned __int64 v175; // [rsp+10h] [rbp-68h]
  __int64 *v176; // [rsp+10h] [rbp-68h]
  __int64 *v177; // [rsp+10h] [rbp-68h]
  unsigned int v178; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v179; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v180; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v181; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v182; // [rsp+1Ch] [rbp-5Ch]
  __int64 v183[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = (_QWORD *)a1[17];
  if ( v5 )
  {
    v6 = *((_DWORD *)v5 - 1);
    if ( v6 >= a2 )
    {
      v7 = v6 - a2;
      v8 = &v5[2 * (v6 - a2)];
      v9 = (unsigned __int64)&v5[2 * (v6 - a2) + 2 + 2 * (unsigned __int64)(a2 - 1)];
      while ( *v8 == a3 )
      {
        v8 += 4;
        if ( (_DWORD *)v9 == v8 )
          goto LABEL_6;
      }
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_ACE4E(v183, "invalid array: mixed value types", v165);
LABEL_167:
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v183);
      sub_233E40((__int64)v183);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
LABEL_178:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_ACE4E(v183, "invalid array size", v167);
    goto LABEL_167;
  }
  if ( a2 )
    goto LABEL_178;
  v6 = 0;
  v7 = 0;
LABEL_6:
  if ( a3 == 1 )
  {
    v37 = a1[21];
    if ( v37 )
    {
      v38 = *(unsigned int *)(v37 - 4);
      v168 = v38;
      if ( (_DWORD)v38 == *(_DWORD *)(v37 - 8) )
      {
        v50 = (unsigned int)(3 * v38 + 1) >> 1;
        v51 = 8 * v50 + 8;
        v179 = v50;
        if ( 8 * (int)v38 + 8 >= v51 || (unsigned int)v38 >= v50 )
          goto LABEL_166;
        v52 = sub_186B270(v51);
        v53 = (__int64 *)a1[21];
        v54 = (__int64 *)v52;
        v37 = v52 + 8;
        if ( v53 )
        {
          v55 = *((unsigned int *)v53 - 1);
          *(_DWORD *)(v52 + 4) = v55;
          v56 = 8 * v55;
          v57 = &v53[v55];
          if ( v53 != v57 )
          {
            v58 = v56 - 8;
            if ( (unsigned __int64)(v56 - 8) > 8 && (v37 >= (unsigned __int64)(v53 + 2) || v53 >= v54 + 3) )
            {
              v78 = 0;
              v79 = (v58 >> 3) + 1;
              do
              {
                v80 = _mm_loadu_si128((const __m128i *)&v53[v78]);
                *(_OWORD *)&v53[v78] = 0;
                *(__m128i *)&v54[v78 + 1] = v80;
                v78 += 2LL;
              }
              while ( v78 != 2 * (v79 >> 1) );
              if ( (v79 & 1) != 0 )
              {
                v81 = v79 & 0xFFFFFFFFFFFFFFFELL;
                v82 = v53[v81];
                v53[v81] = 0;
                v54[v81 + 1] = v82;
              }
            }
            else
            {
              v59 = v53;
              v60 = v37;
              do
              {
                v61 = *v59;
                *v59++ = 0;
                v60 += 8LL;
                *(_QWORD *)(v60 - 8) = v61;
              }
              while ( v59 != v57 );
            }
          }
          v62 = &v53[v55];
          if ( (_DWORD)v55 )
          {
            do
            {
              while ( *v53 )
              {
                v63 = (void *)(*v53++ - 8);
                v170 = v54;
                sub_186B220(v63);
                v54 = v170;
                if ( v62 == v53 )
                  goto LABEL_51;
              }
              ++v53;
            }
            while ( v53 != v62 );
LABEL_51:
            v53 = (__int64 *)a1[21];
          }
          v171 = v54;
          sub_186B220(v53 - 1);
          v54 = v171;
          v39 = (unsigned int **)(v37 + 8LL * *((unsigned int *)v171 + 1));
          a3 = *((_DWORD *)v171 + 1) + 1;
        }
        else
        {
          *(_DWORD *)(v52 + 4) = 0;
          v39 = (unsigned int **)(v52 + 8);
        }
        a1[21] = v37;
        *(_DWORD *)v54 = v179;
        v5 = (_QWORD *)a1[17];
      }
      else
      {
        a3 = *(_DWORD *)(v37 - 4) + 1;
        v39 = (unsigned int **)(v37 + 8LL * (unsigned int)v38);
      }
    }
    else
    {
      v141 = (_QWORD *)sub_186B270(0x18u);
      v5 = (_QWORD *)a1[17];
      v168 = 0;
      v37 = (unsigned __int64)(v141 + 1);
      *v141 = 2;
      a1[21] = v141 + 1;
      v39 = (unsigned int **)(v141 + 1);
    }
    *v39 = nullptr;
    *(_DWORD *)(v37 - 4) = a3;
    if ( v7 < v6 )
    {
      v40 = 16LL * v7;
      v41 = v7 + (unsigned __int64)(v6 - 1 - v7) + 1;
      v42 = v5[(unsigned __int64)v40 / 8 + 1];
      v43 = 16 * v41;
      v44 = (_QWORD *)sub_186B270(0x10u);
      v5 = (_QWORD *)a1[17];
      *v44 = 2;
      v45 = (unsigned int *)(v44 + 1);
      *v39 = v45;
      v46 = v45;
      while ( 1 )
      {
        *v45 = v42;
        v47 = *(v46 - 1);
        v40 += 16;
        v48 = (unsigned int)(v47 + 1);
        *(v46 - 1) = v48;
        if ( v43 == v40 )
          break;
        v49 = *(v46 - 2);
        v42 = v5[(unsigned __int64)v40 / 8 + 1];
        if ( v49 == (_DWORD)v48 )
        {
          v88 = (3 * v49 + 1) >> 1;
          v89 = 4 * v88 + 8;
          if ( 4 * v47 + 12 >= (unsigned int)v89 || v49 >= v88 )
            goto LABEL_166;
          v90 = (unsigned int *)sub_186B300(v46 - 2, v89);
          v46 = v90 + 2;
          *v39 = v90 + 2;
          *v90 = (3 * v49 + 1) >> 1;
          v5 = (_QWORD *)a1[17];
          v45 = &v90[v90[1] + 2];
        }
        else
        {
          v45 = &v46[v48];
        }
      }
    }
    v94 = 6;
    goto LABEL_84;
  }
  if ( a3 )
  {
    if ( a3 == 4 )
    {
      v106 = a1[20];
      if ( v106 )
      {
        v107 = *(unsigned int *)(v106 - 4);
        v168 = v107;
        if ( (_DWORD)v107 == *(_DWORD *)(v106 - 8) )
        {
          v144 = (unsigned int)(3 * v107 + 1) >> 1;
          v145 = 8 * v144 + 8;
          v182 = v144;
          if ( 8 * (int)v107 + 8 >= v145 || (unsigned int)v107 >= v144 )
            goto LABEL_166;
          v146 = sub_186B270(v145);
          v147 = (__int64 *)a1[20];
          v148 = (__int64 *)v146;
          v106 = v146 + 8;
          if ( v147 )
          {
            v149 = *((unsigned int *)v147 - 1);
            *(_DWORD *)(v146 + 4) = v149;
            v150 = &v147[v149];
            if ( v147 != v150 )
            {
              v151 = 8 * v149 - 8;
              if ( v151 <= 8 || v106 < (unsigned __int64)(v147 + 2) && v147 < v148 + 3 )
              {
                v160 = v147;
                v161 = v106;
                do
                {
                  v162 = *v160;
                  *v160++ = 0;
                  v161 += 8LL;
                  *(_QWORD *)(v161 - 8) = v162;
                }
                while ( v150 != v160 );
              }
              else
              {
                v152 = (v151 >> 3) + 1;
                v153 = 0;
                do
                {
                  v154 = _mm_loadu_si128((const __m128i *)&v147[v153]);
                  *(_OWORD *)&v147[v153] = 0;
                  *(__m128i *)&v148[v153 + 1] = v154;
                  v153 += 2LL;
                }
                while ( v153 != 2 * (v152 >> 1) );
                if ( (v152 & 1) != 0 )
                {
                  v155 = v152 & 0xFFFFFFFFFFFFFFFELL;
                  v156 = v147[v155];
                  v147[v155] = 0;
                  v148[v155 + 1] = v156;
                }
              }
            }
            v157 = &v147[v149];
            if ( (_DWORD)v149 )
            {
              do
              {
                while ( 1 )
                {
                  v158 = *v147;
                  if ( !*v147 )
                    break;
                  ++v147;
                  v176 = v148;
                  sub_186B220((void *)(v158 - 8));
                  v148 = v176;
                  if ( v157 == v147 )
                    goto LABEL_153;
                }
                ++v147;
              }
              while ( v157 != v147 );
LABEL_153:
              v147 = (__int64 *)a1[20];
            }
            v177 = v148;
            sub_186B220(v147 - 1);
            v148 = v177;
            v109 = (_QWORD *)(v106 + 8LL * *((unsigned int *)v177 + 1));
            v108 = *((_DWORD *)v177 + 1) + 1;
          }
          else
          {
            *(_DWORD *)(v146 + 4) = 0;
            v109 = (_QWORD *)(v146 + 8);
            v108 = 1;
          }
          a1[20] = v106;
          *(_DWORD *)v148 = v182;
          v5 = (_QWORD *)a1[17];
        }
        else
        {
          v108 = *(_DWORD *)(v106 - 4) + 1;
          v109 = (_QWORD *)(v106 + 8LL * (unsigned int)v107);
        }
      }
      else
      {
        v159 = (_QWORD *)sub_186B270(0x18u);
        v5 = (_QWORD *)a1[17];
        v168 = 0;
        v106 = (unsigned __int64)(v159 + 1);
        *v159 = 2;
        v108 = 1;
        a1[20] = v106;
        v109 = (_QWORD *)v106;
      }
      *v109 = 0;
      *(_DWORD *)(v106 - 4) = v108;
      if ( v7 < v6 )
      {
        v110 = 16LL * v7;
        v111 = v7 + (unsigned __int64)(v6 - 1 - v7) + 1;
        v112 = v5[(unsigned __int64)v110 / 8 + 1];
        v113 = 16 * v111;
        v114 = (_QWORD *)sub_186B270(0x18u);
        v5 = (_QWORD *)a1[17];
        v115 = v114 + 1;
        *v114 = 2;
        v116 = 1;
        *v109 = v115;
        v117 = v115;
        while ( 1 )
        {
          v110 += 16;
          *v115 = v112;
          *(v117 - 1) = v116;
          if ( v113 == v110 )
            break;
          while ( 1 )
          {
            v112 = v5[(unsigned __int64)v110 / 8 + 1];
            if ( *(v117 - 2) == v116 )
              break;
            v118 = v116;
            v110 += 16;
            ++v116;
            *(_QWORD *)&v117[2 * v118] = v112;
            *(v117 - 1) = v116;
            if ( v113 == v110 )
              goto LABEL_108;
          }
          v119 = (3 * v116 + 1) >> 1;
          v120 = 8 * v119 + 8;
          if ( 8 * v116 + 8 >= (unsigned int)v120 || v116 >= v119 )
            goto LABEL_166;
          v174 = (3 * v116 + 1) >> 1;
          v121 = (unsigned int *)sub_186B300(v117 - 2, v120);
          v117 = v121 + 2;
          *v109 = v121 + 2;
          *v121 = v174;
          LODWORD(v121) = v121[1];
          v115 = &v117[2 * (unsigned int)v121];
          v5 = (_QWORD *)a1[17];
          v116 = (_DWORD)v121 + 1;
        }
      }
LABEL_108:
      v94 = 8;
    }
    else
    {
      if ( a3 != 5 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_ACE4E(v183, "unsupported array type", v166);
        goto LABEL_167;
      }
      v10 = a1[19];
      if ( v10 )
      {
        v11 = *(unsigned int *)(v10 - 4);
        v168 = v11;
        if ( (_DWORD)v11 == *(_DWORD *)(v10 - 8) )
        {
          v122 = (unsigned int)(3 * v11 + 1) >> 1;
          v123 = 8 * v122 + 8;
          v181 = v122;
          if ( 8 * (int)v11 + 8 >= v123 || (unsigned int)v11 >= v122 )
            goto LABEL_166;
          v124 = sub_186B270(v123);
          v125 = (__int64 *)a1[19];
          v126 = (__int64 *)v124;
          v12 = (_QWORD *)(v124 + 8);
          v175 = (unsigned __int64)v12;
          if ( v125 )
          {
            v127 = *((unsigned int *)v125 - 1);
            v128 = 8 * v127;
            *((_DWORD *)v126 + 1) = v127;
            v129 = &v125[v127];
            if ( v125 == v129 )
              goto LABEL_122;
            if ( (unsigned __int64)(v128 - 8) > 8 && (v175 >= (unsigned __int64)(v125 + 2) || v125 >= v126 + 3) )
            {
              v135 = ((unsigned __int64)(v128 - 8) >> 3) + 1;
              v136 = 0;
              do
              {
                v137 = _mm_loadu_si128((const __m128i *)&v125[v136]);
                *(_OWORD *)&v125[v136] = 0;
                *(__m128i *)&v126[v136 + 1] = v137;
                v136 += 2LL;
              }
              while ( v136 != 2 * (v135 >> 1) );
              if ( (v135 & 1) != 0 )
              {
                v138 = v135 & 0xFFFFFFFFFFFFFFFELL;
                v139 = &v125[v138];
                v140 = *v139;
                *v139 = 0;
                *(_QWORD *)(v175 + 8 * v138) = v140;
              }
            }
            else
            {
              v130 = v175;
              do
              {
                v131 = *v125;
                *v125++ = 0;
                v130 += 8LL;
                *(_QWORD *)(v130 - 8) = v131;
              }
              while ( v129 != v125 );
            }
            v129 = (__int64 *)a1[19];
            if ( v129 )
            {
LABEL_122:
              v132 = *((unsigned int *)v129 - 1);
              if ( (_DWORD)v132 )
              {
                v133 = &v129[v132];
                do
                {
                  while ( *v129 )
                  {
                    v134 = (void *)(*v129++ - 8);
                    sub_186B220(v134);
                    if ( v129 == v133 )
                      goto LABEL_126;
                  }
                  ++v129;
                }
                while ( v129 != v133 );
LABEL_126:
                v129 = (__int64 *)a1[19];
              }
              sub_186B220(v129 - 1);
              v12 = (_QWORD *)(v175 + 8LL * *((unsigned int *)v126 + 1));
            }
            else
            {
              v12 = (_QWORD *)(v128 + v175);
            }
          }
          else
          {
            *((_DWORD *)v126 + 1) = 0;
          }
          a1[19] = v175;
          *(_DWORD *)v126 = v181;
        }
        else
        {
          v12 = (_QWORD *)(v10 + 8 * v11);
        }
      }
      else
      {
        v143 = (_QWORD *)sub_186B270(0x18u);
        v168 = 0;
        *v143 = 2;
        v12 = v143 + 1;
        a1[19] = v12;
      }
      *v12 = 0;
      v13 = a1[19];
      v14 = *(unsigned int *)(v13 - 4);
      v15 = (unsigned int **)(v13 + 8 * v14);
      *(_DWORD *)(v13 - 4) = v14 + 1;
      if ( v7 < v6 )
      {
        v16 = *v15;
        v17 = 16LL * v7;
        v18 = 16 * (v7 + (unsigned __int64)(v6 - 1 - v7) + 1);
        v19 = v17 + a1[17];
        if ( *v15 )
          goto LABEL_19;
        v104 = (_QWORD *)sub_186B270(0x18u);
        v18 = 16 * (v7 + (unsigned __int64)(v6 - 1 - v7) + 1);
        *v104 = 2;
        v105 = (unsigned int *)(v104 + 1);
        *v15 = v105;
        while ( 1 )
        {
          v17 += 16;
          *(_QWORD *)v105 = *(_QWORD *)(v19 + 8);
          v16 = *v15;
          ++*(*v15 - 1);
          if ( v18 == v17 )
            break;
          v19 = v17 + a1[17];
LABEL_19:
          v20 = *(v16 - 1);
          if ( (_DWORD)v20 == *(v16 - 2) )
          {
            v21 = (unsigned int)(3 * v20 + 1) >> 1;
            v22 = 8 * v21 + 8;
            if ( 8 * (int)v20 + 8 >= (unsigned int)v22 || (unsigned int)v20 >= v21 )
              goto LABEL_166;
            v178 = (unsigned int)(3 * v20 + 1) >> 1;
            v169 = v18;
            v23 = (unsigned int *)sub_186B300(v16 - 2, v22);
            v18 = v169;
            *v15 = v23 + 2;
            *v23 = v178;
            v105 = &v23[2 * v23[1] + 2];
          }
          else
          {
            v105 = &v16[2 * v20];
          }
        }
      }
      v5 = (_QWORD *)a1[17];
      v94 = 9;
    }
LABEL_84:
    if ( v5 )
      goto LABEL_85;
LABEL_92:
    v96 = 1;
    v103 = (_QWORD *)sub_186B270(0x28u);
    v5 = v103 + 1;
    *v103 = 2;
    a1[17] = v103 + 1;
    result = v103 + 1;
    goto LABEL_87;
  }
  v24 = a1[22];
  if ( v24 )
  {
    v25 = *(unsigned int *)(v24 - 4);
    v168 = v25;
    if ( (_DWORD)v25 == *(_DWORD *)(v24 - 8) )
    {
      v64 = (unsigned int)(3 * v25 + 1) >> 1;
      v65 = 8 * v64 + 8;
      v180 = v64;
      if ( 8 * (int)v25 + 8 >= v65 || (unsigned int)v25 >= v64 )
        goto LABEL_166;
      v66 = sub_186B270(v65);
      v67 = (__int64 *)a1[22];
      v68 = (__int64 *)v66;
      v24 = v66 + 8;
      if ( v67 )
      {
        v69 = *((unsigned int *)v67 - 1);
        *(_DWORD *)(v66 + 4) = v69;
        v70 = 8 * v69;
        v71 = &v67[v69];
        if ( v71 != v67 )
        {
          v72 = v70 - 8;
          if ( (unsigned __int64)(v70 - 8) > 8 && (v24 >= (unsigned __int64)(v67 + 2) || v67 >= v68 + 3) )
          {
            v83 = 0;
            v84 = (v72 >> 3) + 1;
            do
            {
              v85 = _mm_loadu_si128((const __m128i *)&v67[v83]);
              *(_OWORD *)&v67[v83] = 0;
              *(__m128i *)&v68[v83 + 1] = v85;
              v83 += 2LL;
            }
            while ( v83 != 2 * (v84 >> 1) );
            if ( (v84 & 1) != 0 )
            {
              v86 = v84 & 0xFFFFFFFFFFFFFFFELL;
              v87 = v67[v86];
              v67[v86] = 0;
              v68[v86 + 1] = v87;
            }
          }
          else
          {
            v73 = v67;
            v74 = v24;
            do
            {
              v75 = *v73;
              *v73++ = 0;
              v74 += 8LL;
              *(_QWORD *)(v74 - 8) = v75;
            }
            while ( v71 != v73 );
          }
        }
        v76 = &v67[v69];
        if ( (_DWORD)v69 )
        {
          do
          {
            while ( *v67 )
            {
              v77 = (void *)(*v67++ - 8);
              v172 = v68;
              sub_186B220(v77);
              v68 = v172;
              if ( v76 == v67 )
                goto LABEL_66;
            }
            ++v67;
          }
          while ( v76 != v67 );
LABEL_66:
          v67 = (__int64 *)a1[22];
        }
        v173 = v68;
        sub_186B220(v67 - 1);
        v68 = v173;
        v27 = (_QWORD *)(v24 + 8LL * *((unsigned int *)v173 + 1));
        v26 = *((_DWORD *)v173 + 1) + 1;
      }
      else
      {
        *(_DWORD *)(v66 + 4) = 0;
        v27 = (_QWORD *)(v66 + 8);
        v26 = 1;
      }
      a1[22] = v24;
      *(_DWORD *)v68 = v180;
      v5 = (_QWORD *)a1[17];
    }
    else
    {
      v26 = v25 + 1;
      v27 = (_QWORD *)(v24 + 8LL * (unsigned int)v25);
    }
  }
  else
  {
    v142 = (_QWORD *)sub_186B270(0x18u);
    v5 = (_QWORD *)a1[17];
    v168 = 0;
    v24 = (unsigned __int64)(v142 + 1);
    *v142 = 2;
    v26 = 1;
    a1[22] = v24;
    v27 = (_QWORD *)v24;
  }
  *v27 = 0;
  *(_DWORD *)(v24 - 4) = v26;
  if ( v7 < v6 )
  {
    v28 = 16LL * v7;
    v29 = v5[(unsigned __int64)v28 / 8 + 1];
    v30 = 16 * (v7 + (unsigned __int64)(v6 - 1 - v7) + 1);
    v31 = (_QWORD *)sub_186B270(0x10u);
    v5 = (_QWORD *)a1[17];
    *v31 = 2;
    v32 = (unsigned int *)(v31 + 1);
    *v27 = v32;
    v33 = v32;
    while ( 1 )
    {
      *v32 = v29;
      v34 = *(v33 - 1);
      v28 += 16;
      v35 = (unsigned int)(v34 + 1);
      *(v33 - 1) = v35;
      if ( v28 == v30 )
        break;
      v36 = *(v33 - 2);
      v29 = v5[(unsigned __int64)v28 / 8 + 1];
      if ( v36 == (_DWORD)v35 )
      {
        v91 = (3 * v36 + 1) >> 1;
        v92 = 4 * v91 + 8;
        if ( 4 * v34 + 12 >= (unsigned int)v92 || v36 >= v91 )
          goto LABEL_166;
        v93 = (unsigned int *)sub_186B300(v33 - 2, v92);
        v33 = v93 + 2;
        *v27 = v93 + 2;
        *v93 = (3 * v36 + 1) >> 1;
        v5 = (_QWORD *)a1[17];
        v32 = &v93[v93[1] + 2];
      }
      else
      {
        v32 = &v33[v35];
      }
    }
  }
  v94 = 7;
  if ( !v5 )
    goto LABEL_92;
LABEL_85:
  *((_DWORD *)v5 - 1) = v7;
  if ( v7 == *((_DWORD *)v5 - 2) )
  {
    v98 = (3 * v7 + 1) >> 1;
    v99 = 16 * v98 + 8;
    if ( 16 * v7 + 8 < (unsigned int)v99 && v7 < v98 )
    {
      v100 = (unsigned int *)sub_186B300(v5 - 1, v99);
      v5 = v100 + 2;
      *v100 = v98;
      v101 = v100[1];
      a1[17] = v5;
      v102 = v101;
      result = &v5[2 * v101];
      v96 = v102 + 1;
      goto LABEL_87;
    }
LABEL_166:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_ACE4E(v183, "Overflow encountered when expanding vector", v164);
    goto LABEL_167;
  }
  v95 = v7;
  v96 = v7 + 1;
  result = &v5[2 * v95];
LABEL_87:
  *(_DWORD *)result = v94;
  result[1] = v168;
  *((_DWORD *)v5 - 1) = v96;
  return result;
}

