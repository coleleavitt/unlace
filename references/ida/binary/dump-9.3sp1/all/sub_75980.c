__int64 __fastcall sub_75980(
        __int64 *a1,
        _QWORD **a2,
        int a3,
        unsigned __int64 *a4,
        _QWORD *a5,
        __int64 *a6,
        void (__fastcall ***a7)(_QWORD, __int64, _QWORD, __int64),
        __int64 *a8,
        char a9)
{
  __int64 *v10; // r12
  __int64 v11; // rbx
  __int64 *v12; // r9
  __int64 (__fastcall *v13)(__int64, int); // rax
  int v14; // r14d
  _DWORD *v15; // rax
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  _DWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r14
  __int64 (__fastcall *v22)(__int64, int, int); // r9
  __int64 v23; // r15
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, int, int); // rax
  int v26; // ebp
  __int64 v27; // rdx
  _DWORD *v28; // rcx
  _DWORD *v29; // rax
  __int64 result; // rax
  unsigned int v31; // eax
  bool v32; // cl
  __int64 v33; // r10
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // r15
  unsigned int v37; // r12d
  __int64 (__fastcall *v38)(__int64, int, int); // r10
  __int64 (__fastcall *v39)(__int64, int, int); // rax
  int v40; // eax
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rsi
  _QWORD *v44; // rcx
  __int64 (__fastcall *v45)(__int64, int); // rax
  __int64 (__fastcall *v46)(__int64, int); // rcx
  __int64 v47; // rsi
  unsigned __int64 v48; // rax
  _DWORD *v49; // rcx
  unsigned __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // eax
  _QWORD *v55; // rdx
  __int64 (__fastcall *v56)(__int64, int, int); // rax
  unsigned int *v57; // rax
  unsigned int v58; // r14d
  __int64 (__fastcall *v59)(__int64, int); // rax
  __int64 (__fastcall *v60)(__int64, int); // rax
  __int64 v61; // rdx
  int v62; // eax
  int *v63; // rsi
  __int64 v64; // rax
  int *v65; // rcx
  int *v66; // rdx
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rdx
  int v70; // eax
  __int64 (__fastcall *v71)(__int64, int, int); // rax
  int v72; // r13d
  __int64 *v73; // rbx
  int v74; // r12d
  __int64 (__fastcall *v75)(__int64, int); // rax
  char v76; // dl
  __int64 (__fastcall *v77)(__int64, int); // rax
  _DWORD *v78; // rax
  _DWORD *v79; // rsi
  int v80; // eax
  int v81; // eax
  bool v82; // zf
  int v83; // eax
  int v84; // eax
  __int64 *v85; // rax
  __int64 v86; // rdi
  __int64 *v87; // r13
  __int64 *v88; // r12
  _DWORD *v89; // rcx
  _DWORD *v90; // rax
  __int64 v91; // rdx
  __int64 (__fastcall *v92)(__int64, int, int); // rax
  __int64 (__fastcall *v93)(__int64, int); // rax
  bool v94; // cl
  int v95; // eax
  _DWORD *v96; // rax
  _DWORD *v97; // rcx
  __int64 (__fastcall *v98)(__int64, int); // rax
  __int64 v99; // rbx
  __int64 v100; // rbp
  int v101; // eax
  __int64 v102; // rsi
  int v103; // eax
  int v104; // eax
  __int64 v105; // rax
  __int64 v106; // rdx
  _DWORD *v107; // rdx
  __int64 v108; // rax
  __int64 v109; // rax
  unsigned int *v110; // rsi
  __int64 v111; // rax
  unsigned int *v112; // rcx
  unsigned int *v113; // rdx
  __int64 v114; // rdi
  __int64 v115; // r8
  __int64 (__fastcall *v116)(__int64, int, int); // rax
  __int64 v117; // rax
  int v118; // ebp
  int v119; // eax
  __int64 (__fastcall *v120)(__int64, int, int); // rax
  int v121; // eax
  __int64 (__fastcall *v122)(__int64, int, int); // rax
  int v123; // eax
  __int64 (__fastcall *v124)(__int64, int, int); // rax
  int v125; // eax
  int v126; // eax
  __int64 (__fastcall *v127)(__int64); // rax
  int v128; // eax
  int v129; // eax
  __int64 (__fastcall *v130)(__int64, int); // rax
  int v131; // eax
  __int64 (__fastcall *v132)(__int64, int); // rax
  int v133; // eax
  unsigned int v134; // eax
  __int64 v135; // r8
  __int64 (__fastcall *v136)(__int64, int, int); // rax
  int v137; // eax
  __int64 (__fastcall *v138)(__int64); // rax
  int v139; // eax
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 (__fastcall *v142)(__int64, int, int); // rax
  int v143; // eax
  __int64 v144; // rax
  __int64 v145; // rsi
  __int64 v146; // rdi
  __int64 v147; // r8
  _DWORD *v148; // rdx
  _DWORD *v149; // rdx
  __int64 v150; // rcx
  int v151; // eax
  __int64 (__fastcall *v152)(__int64, int, int); // rax
  __int64 (__fastcall *v153)(__int64, int, int); // rax
  int v154; // eax
  __int64 v155; // rax
  _DWORD *v156; // rsi
  __int64 v157; // rcx
  __int64 v158; // r8
  _DWORD *v159; // rdi
  __int64 v160; // rdx
  __int64 v161; // rdi
  _DWORD *v162; // rdi
  __int64 v163; // rax
  __int64 v164; // rdx
  _DWORD *v165; // rcx
  _DWORD *v166; // rsi
  __int64 v167; // rdi
  __int64 (__fastcall *v168)(__int64, int, int); // rax
  int v169; // eax
  __int64 (__fastcall *v170)(__int64, int, int); // rax
  int v171; // eax
  __int64 (__fastcall *v172)(__int64, int, int); // rax
  int v173; // eax
  __int64 v174; // rdx
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rdx
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rdx
  int v191; // [rsp+8h] [rbp-80h]
  int v192; // [rsp+18h] [rbp-70h]
  __int64 v193; // [rsp+18h] [rbp-70h]
  int v194; // [rsp+18h] [rbp-70h]
  __int64 *v195; // [rsp+18h] [rbp-70h]
  __int64 *v196; // [rsp+18h] [rbp-70h]
  bool v197; // [rsp+18h] [rbp-70h]
  bool v198; // [rsp+18h] [rbp-70h]
  __int64 (__fastcall *v199)(__int64, int, int); // [rsp+20h] [rbp-68h]
  __int64 (__fastcall *v200)(__int64, int, int); // [rsp+20h] [rbp-68h]
  char v201; // [rsp+20h] [rbp-68h]
  bool v202; // [rsp+20h] [rbp-68h]
  bool v203; // [rsp+20h] [rbp-68h]
  __int64 (__fastcall *v204)(__int64, int, int); // [rsp+28h] [rbp-60h]
  bool v205; // [rsp+28h] [rbp-60h]
  bool v206; // [rsp+28h] [rbp-60h]
  bool v207; // [rsp+28h] [rbp-60h]
  __int64 v208; // [rsp+28h] [rbp-60h]
  bool v209; // [rsp+28h] [rbp-60h]
  int v211; // [rsp+30h] [rbp-58h]
  __int64 *v212; // [rsp+38h] [rbp-50h]
  int v213; // [rsp+38h] [rbp-50h]
  bool v214; // [rsp+38h] [rbp-50h]
  bool v215; // [rsp+38h] [rbp-50h]
  unsigned __int64 v216; // [rsp+40h] [rbp-48h]
  bool v217; // [rsp+40h] [rbp-48h]
  bool v218; // [rsp+40h] [rbp-48h]
  unsigned int v219; // [rsp+48h] [rbp-40h]
  char v220; // [rsp+48h] [rbp-40h]
  char v221; // [rsp+48h] [rbp-40h]
  int v222; // [rsp+4Ch] [rbp-3Ch]

  v10 = a1;
  v11 = a3;
  v12 = a8;
  a6[1] = 0;
  v13 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
  if ( v13 == sub_65090 )
  {
    v14 = 0;
    if ( a1[7] )
      v14 = *(_DWORD *)(a1[6] + 24LL * a3 + 8);
  }
  else
  {
    v54 = v13((__int64)a1, a3);
    v12 = a8;
    v14 = v54;
  }
  v15 = (_DWORD *)a5[32];
  v16 = &v15[a5[33]];
  if ( v15 != v16 )
  {
    while ( *v15 != (_DWORD)v11 )
    {
      if ( v16 == ++v15 )
        goto LABEL_26;
    }
    if ( v16 != v15 )
    {
      v17 = a6[1];
      v18 = (_DWORD *)(*a6 + 4 * v17);
      if ( (_DWORD *)*a6 == v18 )
        goto LABEL_43;
      v19 = (_DWORD *)*a6;
      while ( *v19 != (_DWORD)v11 )
      {
        if ( v18 == ++v19 )
          goto LABEL_43;
      }
      if ( v18 == v19 )
      {
LABEL_43:
        if ( a6[2] < (unsigned __int64)(v17 + 1) )
        {
          v195 = v12;
          v68 = qvector_reserve((__int64)a6, *a6, v17 + 1, 4);
          v69 = a6[1];
          v12 = v195;
          *a6 = v68;
          v18 = (_DWORD *)(v68 + 4 * v69);
        }
        *v18 = v11;
        ++a6[1];
      }
      if ( v14 > 0 )
      {
        v20 = v14;
        v192 = v11;
        v21 = 0;
        v212 = v12;
        v22 = sub_650D0;
        v23 = v20;
        v24 = 24LL * (int)v11;
        do
        {
          v25 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
          if ( v25 == v22 )
          {
            v26 = *(_DWORD *)(*(_QWORD *)(a1[6] + v24) + 4 * v21);
          }
          else
          {
            v199 = v22;
            v51 = v25((__int64)a1, v192, v21);
            v22 = v199;
            v26 = v51;
          }
          v27 = a6[1];
          v28 = (_DWORD *)(*a6 + 4 * v27);
          if ( (_DWORD *)*a6 == v28 )
            goto LABEL_55;
          v29 = (_DWORD *)*a6;
          while ( v26 != *v29 )
          {
            if ( v28 == ++v29 )
              goto LABEL_55;
          }
          if ( v28 == v29 )
          {
LABEL_55:
            v50 = v27 + 1;
            if ( a6[2] < v50 )
            {
              v200 = v22;
              v52 = qvector_reserve((__int64)a6, *a6, v50, 4);
              v53 = a6[1];
              v22 = v200;
              *a6 = v52;
              v28 = (_DWORD *)(v52 + 4 * v53);
            }
            *v28 = v26;
            ++a6[1];
          }
          ++v21;
        }
        while ( v23 != v21 );
        LODWORD(v11) = v192;
        v12 = v212;
      }
      return sub_751C0(a1, a2, v11, a4, a5, a6, a7, v12);
    }
  }
LABEL_26:
  v31 = sub_6FFE0(a5, v11);
  v32 = 0;
  v219 = v31;
  v216 = v31;
  if ( (unsigned __int64)v31 < a5[36] )
    v32 = (*(_BYTE *)(a5[35] + 4LL * (int)v31) & 8) != 0;
  if ( v14 > 0 )
  {
    v33 = 0;
    v34 = 24LL * (int)v11;
    while ( v32 )
    {
      if ( v14 == ++v33 )
        goto LABEL_47;
    }
    v35 = *a1;
    v36 = v33;
    v37 = v33;
    v38 = sub_650D0;
    while ( 1 )
    {
      v39 = *(__int64 (__fastcall **)(__int64, int, int))(v35 + 112);
      if ( v39 == v38 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1[6] + v34) + 4 * v36) == (_DWORD)v11 )
          goto LABEL_38;
      }
      else
      {
        v204 = v38;
        v193 = v34;
        v40 = v39((__int64)a1, v11, v37);
        v38 = v204;
        v34 = v193;
        if ( v40 == (_DWORD)v11 )
        {
LABEL_38:
          v41 = v37;
          v42 = a6[1];
          v43 = *a6;
          if ( a6[2] < (unsigned __int64)(v42 + 1) )
          {
            v108 = qvector_reserve((__int64)a6, v43, v42 + 1, 4);
            v41 = v37;
            *a6 = v108;
            v43 = v108;
            v42 = a6[1];
          }
          *(_DWORD *)(v43 + 4 * v42) = v11;
          ++a6[1];
          v191 = v41;
          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, _QWORD, __int64), _QWORD, _QWORD, __int64, __int64, __int64))**a7)(
            a7,
            (unsigned int)v11,
            (unsigned int)v11,
            5,
            v41,
            v34);
          result = (unsigned int)(v191 == 0) + 11;
          if ( v14 == 1 )
            return 10;
          return result;
        }
      }
      if ( ++v36 == v14 )
        break;
      v35 = *a1;
      v37 = v36;
    }
    v10 = a1;
    v32 = 0;
    v11 = (int)v11;
LABEL_47:
    if ( v14 == 2 )
    {
      v55 = (_QWORD *)*v10;
      v56 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
      if ( v56 == sub_650D0 )
      {
        v57 = *(unsigned int **)(v10[6] + v34);
        v58 = *v57;
      }
      else
      {
        v208 = v34;
        v198 = v32;
        v134 = v56((__int64)v10, v11, 0);
        v55 = (_QWORD *)*v10;
        v32 = v198;
        v58 = v134;
        v136 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
        if ( v136 != sub_650D0 )
        {
          v137 = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, bool, __int64, __int64))v136)(
                   v10,
                   (unsigned int)v11,
                   1,
                   v198,
                   v135,
                   v208);
          v55 = (_QWORD *)*v10;
          v32 = v198;
          v194 = v137;
LABEL_63:
          v59 = (__int64 (__fastcall *)(__int64, int))v55[12];
          if ( v59 == sub_65090 )
          {
            if ( !v10[7] )
            {
              v213 = 0;
              v211 = 0;
              goto LABEL_66;
            }
            v109 = v10[6];
            v213 = *(_DWORD *)(v109 + 24LL * (int)v58 + 8);
            goto LABEL_156;
          }
          v207 = v32;
          v131 = v59((__int64)v10, v58);
          v55 = (_QWORD *)*v10;
          v32 = v207;
          v213 = v131;
          v132 = *(__int64 (__fastcall **)(__int64, int))(*v10 + 96);
          if ( v132 == sub_65090 )
          {
            if ( v10[7] )
            {
              v109 = v10[6];
LABEL_156:
              v211 = *(_DWORD *)(v109 + 24LL * v194 + 8);
              goto LABEL_66;
            }
            v211 = 0;
          }
          else
          {
            v133 = v132((__int64)v10, v194);
            v55 = (_QWORD *)*v10;
            v32 = v207;
            v211 = v133;
          }
LABEL_66:
          v60 = (__int64 (__fastcall *)(__int64, int))v55[13];
          if ( v60 == sub_650B0 )
          {
            if ( v10[10] )
            {
              v61 = v10[9];
              v222 = *(_DWORD *)(v61 + 24LL * (int)v58 + 8);
LABEL_69:
              v62 = *(_DWORD *)(v61 + 24LL * v194 + 8);
LABEL_70:
              if ( v32 )
              {
                if ( !a9 )
                  return 0;
                if ( v216 >= a5[36] || (~(unsigned __int8)*(_DWORD *)(a5[35] + 4LL * (int)v219) & 0x18) != 0 )
                {
                  if ( v62 != 1 )
                    return 0;
                  if ( v211 == 1 )
                  {
                    v168 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
                    if ( v168 == sub_650D0 )
                      v169 = **(_DWORD **)(v10[6] + 24LL * v194);
                    else
                      v169 = v168((__int64)v10, v194, 0);
                    if ( v169 != v58 )
                      return 0;
                  }
                  else if ( v211 || v58 == (_DWORD)v11 )
                  {
                    return 0;
                  }
LABEL_78:
                  v63 = (int *)*a6;
                  v64 = a6[1];
                  v65 = (int *)(*a6 + 4 * v64);
                  v66 = (int *)*a6;
                  if ( (int *)*a6 != v65 )
                  {
                    while ( *v66 != (_DWORD)v11 )
                    {
                      if ( v65 == ++v66 )
                        goto LABEL_274;
                    }
                    if ( v66 != v65 )
                    {
                      v67 = *a6;
                      goto LABEL_85;
                    }
                  }
LABEL_274:
                  if ( a6[2] < (unsigned __int64)(v64 + 1) )
                  {
                    v185 = qvector_reserve((__int64)a6, (__int64)v63, v64 + 1, 4);
                    v186 = a6[1];
                    *a6 = v185;
                    v65 = (int *)(v185 + 4 * v186);
                  }
                  *v65 = v11;
                  v67 = *a6;
                  v64 = a6[1] + 1;
                  v65 = (int *)(*a6 + 4 * v64);
                  a6[1] = v64;
                  if ( v65 == (int *)v67 )
                    goto LABEL_291;
                  v63 = (int *)v67;
LABEL_85:
                  while ( v194 != *v63 )
                  {
                    if ( v65 == ++v63 )
                      goto LABEL_291;
                  }
                  if ( v63 == v65 )
                  {
LABEL_291:
                    if ( a6[2] < (unsigned __int64)(v64 + 1) )
                    {
                      v182 = qvector_reserve((__int64)a6, v67, v64 + 1, 4);
                      v183 = a6[1];
                      *a6 = v182;
                      v65 = (int *)(v182 + 4 * v183);
                    }
                    *v65 = v194;
                    ++a6[1];
                  }
                  (**a7)(a7, (unsigned int)v11, (unsigned int)v194, 5);
                  return 2;
                }
                goto LABEL_163;
              }
              LOBYTE(v115) = v213 == 1;
              v205 = v211 == 1;
              v32 = v62 == 1;
              if ( v213 != 1 || v211 != 1 )
                goto LABEL_185;
              v55 = (_QWORD *)*v10;
LABEL_181:
              v116 = (__int64 (__fastcall *)(__int64, int, int))v55[14];
              if ( v116 == sub_650D0 )
              {
                v117 = v10[6];
                v118 = **(_DWORD **)(v117 + 24LL * (int)v58);
              }
              else
              {
                v209 = v32;
                v151 = v116((__int64)v10, v58, 0);
                v32 = v209;
                v118 = v151;
                v152 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
                if ( v152 != sub_650D0 )
                {
                  v119 = v152((__int64)v10, v194, 0);
                  v32 = v209;
LABEL_184:
                  v205 = 1;
                  v115 = 1;
                  if ( v119 == v118 )
                  {
                    if ( v222 == 1 && v32 )
                    {
                      v162 = (_DWORD *)*a6;
                      v163 = a6[1];
                      v164 = *a6 + 4 * v163;
                      if ( *a6 != v164 )
                      {
                        v165 = (_DWORD *)*a6;
                        while ( *v165 != (_DWORD)v11 )
                        {
                          if ( (_DWORD *)v164 == ++v165 )
                            goto LABEL_304;
                        }
                        if ( v165 != (_DWORD *)v164 )
                        {
                          v166 = (_DWORD *)*a6;
                          goto LABEL_270;
                        }
                      }
LABEL_304:
                      if ( a6[2] < (unsigned __int64)(v163 + 1) )
                      {
                        v175 = qvector_reserve((__int64)a6, *a6, v163 + 1, 4);
                        *a6 = v175;
                        v162 = (_DWORD *)v175;
                      }
                      v162[a6[1]] = v11;
                      v166 = (_DWORD *)*a6;
                      v163 = a6[1] + 1;
                      v164 = *a6 + 4 * v163;
                      a6[1] = v163;
                      if ( (_DWORD *)v164 != v166 )
                      {
                        v162 = v166;
LABEL_270:
                        while ( v194 != *v162 )
                        {
                          if ( ++v162 == (_DWORD *)v164 )
                            goto LABEL_308;
                        }
                        if ( v162 != (_DWORD *)v164 )
                        {
                          v167 = (__int64)v166;
                          goto LABEL_313;
                        }
                      }
LABEL_308:
                      if ( a6[2] < (unsigned __int64)(v163 + 1) )
                      {
                        v176 = qvector_reserve((__int64)a6, (__int64)v166, v163 + 1, 4);
                        *a6 = v176;
                        v166 = (_DWORD *)v176;
                      }
                      v166[a6[1]] = v194;
                      v167 = *a6;
                      v163 = a6[1] + 1;
                      v164 = *a6 + 4 * v163;
                      a6[1] = v163;
                      if ( v164 == v167 )
                        goto LABEL_316;
                      v166 = (_DWORD *)v167;
LABEL_313:
                      while ( *v166 != v58 )
                      {
                        if ( ++v166 == (_DWORD *)v164 )
                          goto LABEL_316;
                      }
                      if ( (_DWORD *)v164 == v166 )
                      {
LABEL_316:
                        if ( a6[2] < (unsigned __int64)(v163 + 1) )
                        {
                          v177 = qvector_reserve((__int64)a6, v167, v163 + 1, 4);
                          *a6 = v177;
                          v167 = v177;
                        }
                        *(_DWORD *)(v167 + 4 * a6[1]++) = v58;
                      }
                      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, _QWORD, __int64), _QWORD, _QWORD, __int64, __int64))**a7)(
                        a7,
                        (unsigned int)v11,
                        (unsigned int)v194,
                        5,
                        v115);
                      (**a7)(a7, (unsigned int)v11, v58, 5);
                      return 4;
                    }
                    v205 = 1;
                    LOBYTE(v115) = 1;
                  }
LABEL_185:
                  if ( v32 && v205 )
                  {
                    v120 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
                    if ( v120 == sub_650D0 )
                    {
                      v121 = **(_DWORD **)(v10[6] + 24LL * v194);
                    }
                    else
                    {
                      v217 = v32;
                      v220 = v115;
                      v121 = v120((__int64)v10, v194, 0);
                      v32 = v217;
                      LOBYTE(v115) = v220;
                    }
                    if ( v121 == (_DWORD)v11 )
                    {
                      v142 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 120);
                      if ( v142 == sub_650F0 )
                      {
                        v143 = **(_DWORD **)(v10[9] + 24LL * v194);
                      }
                      else
                      {
                        v218 = v32;
                        v221 = v115;
                        v143 = v142((__int64)v10, v194, 0);
                        v32 = v218;
                        LOBYTE(v115) = v221;
                      }
                      if ( v143 == (_DWORD)v11 )
                      {
                        v144 = a6[1];
                        v145 = *a6;
                        v146 = *a6;
                        v147 = *a6 + 4 * v144;
                        if ( *a6 != v147 )
                        {
                          v148 = (_DWORD *)*a6;
                          while ( *v148 != (_DWORD)v11 )
                          {
                            if ( (_DWORD *)v147 == ++v148 )
                              goto LABEL_327;
                          }
                          if ( (_DWORD *)v147 != v148 )
                          {
                            v149 = (_DWORD *)*a6;
                            v150 = v145 + 4 * v144;
                            goto LABEL_238;
                          }
                        }
LABEL_327:
                        if ( a6[2] < (unsigned __int64)(v144 + 1) )
                        {
                          v187 = qvector_reserve((__int64)a6, v145, v144 + 1, 4);
                          *a6 = v187;
                          v146 = v187;
                        }
                        *(_DWORD *)(v146 + 4 * a6[1]) = v11;
                        v145 = *a6;
                        v144 = a6[1] + 1;
                        v150 = *a6 + 4 * v144;
                        a6[1] = v144;
                        if ( v145 == v150 )
                          goto LABEL_240;
                        v149 = (_DWORD *)v145;
LABEL_238:
                        while ( v194 != *v149 )
                        {
                          if ( ++v149 == (_DWORD *)v150 )
                            goto LABEL_240;
                        }
                        if ( v149 == (_DWORD *)v150 )
                        {
LABEL_240:
                          if ( a6[2] < (unsigned __int64)(v144 + 1) )
                          {
                            v180 = qvector_reserve((__int64)a6, v145, v144 + 1, 4);
                            *a6 = v180;
                            v145 = v180;
                          }
                          *(_DWORD *)(v145 + 4 * a6[1]++) = v194;
                        }
                        (**a7)(a7, (unsigned int)v11, (unsigned int)v194, 5);
                        (**a7)(a7, (unsigned int)v194, (unsigned int)v11, 5);
                        return 13;
                      }
                    }
                  }
                  goto LABEL_190;
                }
                v117 = v10[6];
              }
              v119 = **(_DWORD **)(v117 + 24LL * v194);
              goto LABEL_184;
            }
            v222 = 0;
          }
          else
          {
            v206 = v32;
            v129 = v60((__int64)v10, v58);
            v55 = (_QWORD *)*v10;
            v32 = v206;
            v222 = v129;
            v130 = *(__int64 (__fastcall **)(__int64, int))(*v10 + 104);
            if ( v130 != sub_650B0 )
            {
              v62 = v130((__int64)v10, v194);
              v32 = v206;
              goto LABEL_70;
            }
            if ( v10[10] )
            {
              v61 = v10[9];
              goto LABEL_69;
            }
          }
          if ( v32 )
          {
            if ( !a9 || v216 >= a5[36] || (~*(_BYTE *)(a5[35] + 4LL * (int)v219) & 0x18) != 0 )
              return 0;
LABEL_163:
            if ( v222 != 1 )
              return 0;
            if ( v213 == 1 )
            {
              v170 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
              if ( v170 == sub_650D0 )
                v171 = **(_DWORD **)(v10[6] + 24LL * (int)v58);
              else
                v171 = v170((__int64)v10, v58, 0);
              if ( v194 != v171 )
                return 0;
            }
            else if ( v213 || v194 == (_DWORD)v11 )
            {
              return 0;
            }
LABEL_167:
            v110 = (unsigned int *)*a6;
            v111 = a6[1];
            v112 = (unsigned int *)(*a6 + 4 * v111);
            if ( (unsigned int *)*a6 != v112 )
            {
              v113 = (unsigned int *)*a6;
              while ( *v113 != (_DWORD)v11 )
              {
                if ( v112 == ++v113 )
                  goto LABEL_286;
              }
              if ( v112 != v113 )
              {
                v114 = *a6;
                goto LABEL_174;
              }
            }
LABEL_286:
            if ( a6[2] < (unsigned __int64)(v111 + 1) )
            {
              v188 = qvector_reserve((__int64)a6, (__int64)v110, v111 + 1, 4);
              v189 = a6[1];
              *a6 = v188;
              v112 = (unsigned int *)(v188 + 4 * v189);
            }
            *v112 = v11;
            v114 = *a6;
            v111 = a6[1] + 1;
            v112 = (unsigned int *)(*a6 + 4 * v111);
            a6[1] = v111;
            if ( v112 == (unsigned int *)v114 )
              goto LABEL_301;
            v110 = (unsigned int *)v114;
LABEL_174:
            while ( *v110 != v58 )
            {
              if ( ++v110 == v112 )
                goto LABEL_301;
            }
            if ( v110 == v112 )
            {
LABEL_301:
              if ( a6[2] < (unsigned __int64)(v111 + 1) )
              {
                v178 = qvector_reserve((__int64)a6, v114, v111 + 1, 4);
                v179 = a6[1];
                *a6 = v178;
                v112 = (unsigned int *)(v178 + 4 * v179);
              }
              *v112 = v58;
              ++a6[1];
            }
            (**a7)(a7, (unsigned int)v11, v58, 5);
            return 3;
          }
          LOBYTE(v115) = v213 == 1;
          v205 = v211 == 1;
          if ( v213 != 1 || v211 != 1 )
          {
LABEL_190:
            if ( v222 == 1 && (_BYTE)v115 )
            {
              v122 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
              if ( v122 == sub_650D0 )
              {
                v123 = **(_DWORD **)(v10[6] + 24LL * (int)v58);
              }
              else
              {
                v214 = v32;
                v123 = v122((__int64)v10, v58, 0);
                v32 = v214;
              }
              if ( v123 == (_DWORD)v11 )
              {
                v153 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 120);
                if ( v153 == sub_650F0 )
                {
                  v154 = **(_DWORD **)(v10[9] + 24LL * (int)v58);
                }
                else
                {
                  v215 = v32;
                  v154 = v153((__int64)v10, v58, 0);
                  v32 = v215;
                }
                if ( v154 == (_DWORD)v11 )
                {
                  v155 = a6[1];
                  v156 = (_DWORD *)*a6;
                  v157 = *a6;
                  v158 = *a6 + 4 * v155;
                  if ( *a6 != v158 )
                  {
                    v159 = (_DWORD *)*a6;
                    while ( *v159 != (_DWORD)v11 )
                    {
                      if ( (_DWORD *)v158 == ++v159 )
                        goto LABEL_322;
                    }
                    if ( (_DWORD *)v158 != v159 )
                    {
                      v160 = (__int64)&v156[v155];
                      v161 = *a6;
                      goto LABEL_256;
                    }
                  }
LABEL_322:
                  if ( a6[2] < (unsigned __int64)(v155 + 1) )
                  {
                    v184 = qvector_reserve((__int64)a6, (__int64)v156, v155 + 1, 4);
                    *a6 = v184;
                    v157 = v184;
                  }
                  *(_DWORD *)(v157 + 4 * a6[1]) = v11;
                  v161 = *a6;
                  v155 = a6[1] + 1;
                  v160 = *a6 + 4 * v155;
                  a6[1] = v155;
                  if ( v161 == v160 )
                    goto LABEL_258;
                  v156 = (_DWORD *)v161;
LABEL_256:
                  while ( *v156 != v58 )
                  {
                    if ( ++v156 == (_DWORD *)v160 )
                      goto LABEL_258;
                  }
                  if ( v156 == (_DWORD *)v160 )
                  {
LABEL_258:
                    if ( a6[2] < (unsigned __int64)(v155 + 1) )
                    {
                      v181 = qvector_reserve((__int64)a6, v161, v155 + 1, 4);
                      *a6 = v181;
                      v161 = v181;
                    }
                    *(_DWORD *)(v161 + 4 * a6[1]++) = v58;
                  }
                  (**a7)(a7, (unsigned int)v11, v58, 5);
                  (**a7)(a7, v58, (unsigned int)v11, 5);
                  return 14;
                }
              }
              if ( !a9 )
                goto LABEL_200;
              v124 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
              if ( v124 == sub_650D0 )
              {
                v125 = **(_DWORD **)(v10[6] + 24LL * (int)v58);
              }
              else
              {
                v203 = v32;
                v125 = v124((__int64)v10, v58, 0);
                v32 = v203;
              }
              if ( v194 == v125 )
                goto LABEL_167;
            }
            else
            {
              if ( !a9 )
                goto LABEL_200;
              if ( v222 == 1 && !v213 && v194 != (_DWORD)v11 )
              {
                v127 = *(__int64 (__fastcall **)(__int64))(*v10 + 88);
                if ( v127 == sub_65070 )
                {
                  v128 = *((_DWORD *)v10 + 10);
                }
                else
                {
                  v202 = v32;
                  v128 = v127((__int64)v10);
                  v32 = v202;
                }
                if ( v128 != v58 )
                  goto LABEL_167;
              }
            }
            if ( v32 )
            {
              if ( v205 )
              {
                v172 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
                if ( v172 == sub_650D0 )
                  v173 = **(_DWORD **)(v10[6] + 24LL * v194);
                else
                  v173 = v172((__int64)v10, v194, 0);
                if ( v173 == v58 )
                  goto LABEL_78;
              }
              else if ( !v211 && v58 != (_DWORD)v11 )
              {
                v138 = *(__int64 (__fastcall **)(__int64))(*v10 + 88);
                v139 = v138 == sub_65070 ? *((_DWORD *)v10 + 10) : v138((__int64)v10);
                if ( v194 != v139 )
                  goto LABEL_78;
              }
            }
LABEL_200:
            v126 = sub_70340(v10, a5, v11, (__int64)a6, a7);
            if ( !v126 )
              return 0;
            return (unsigned int)((v126 >> 1) + 6);
          }
          goto LABEL_181;
        }
        v57 = *(unsigned int **)(v10[6] + v208);
      }
      v194 = v57[1];
      goto LABEL_63;
    }
  }
  v44 = (_QWORD *)*v10;
  v45 = *(__int64 (__fastcall **)(__int64, int))(*v10 + 104);
  if ( v45 == sub_650B0 )
  {
    if ( !v10[10] )
    {
LABEL_50:
      v46 = (__int64 (__fastcall *)(__int64, int))v44[12];
      goto LABEL_51;
    }
    v70 = *(_DWORD *)(v10[9] + 24LL * (int)v11 + 8);
  }
  else
  {
    v70 = v45((__int64)v10, v11);
    v44 = (_QWORD *)*v10;
  }
  if ( v70 != 1 )
    goto LABEL_50;
  v71 = (__int64 (__fastcall *)(__int64, int, int))v44[15];
  v196 = a6;
  v72 = v11;
  v73 = v10;
  if ( v71 != sub_650F0 )
    goto LABEL_104;
LABEL_91:
  v74 = **(_DWORD **)(v73[9] + 24LL * v72);
  v75 = (__int64 (__fastcall *)(__int64, int))v44[13];
  if ( v75 == sub_650B0 )
  {
LABEL_92:
    v76 = 0;
    if ( v73[10] )
      v76 = *(_DWORD *)(v73[9] + 24LL * v74 + 8) == 1;
    v77 = (__int64 (__fastcall *)(__int64, int))v44[12];
    if ( v77 != sub_65090 )
      goto LABEL_106;
LABEL_95:
    if ( !v73[7] )
    {
      v10 = v73;
      v11 = v72;
      a6 = v196;
      goto LABEL_52;
    }
    if ( *(_DWORD *)(v73[6] + 24LL * v74 + 8) == 1 )
      goto LABEL_97;
LABEL_107:
    v10 = v73;
    v46 = (__int64 (__fastcall *)(__int64, int))v44[12];
    v11 = v72;
    a6 = v196;
  }
  else
  {
    while ( 1 )
    {
      v81 = v75((__int64)v73, v74);
      v44 = (_QWORD *)*v73;
      v82 = v81 == 1;
      v77 = *(__int64 (__fastcall **)(__int64, int))(*v73 + 96);
      v76 = v82;
      if ( v77 == sub_65090 )
        goto LABEL_95;
LABEL_106:
      v201 = v76;
      v83 = v77((__int64)v73, v74);
      v44 = (_QWORD *)*v73;
      v76 = v201;
      if ( v83 != 1 )
        goto LABEL_107;
LABEL_97:
      v78 = (_DWORD *)a5[32];
      v79 = &v78[a5[33]];
      if ( v78 != v79 )
      {
        while ( v74 != *v78 )
        {
          if ( v79 == ++v78 )
            goto LABEL_102;
        }
        v76 &= v78 == v79;
      }
LABEL_102:
      if ( !v76 )
        break;
      v71 = (__int64 (__fastcall *)(__int64, int, int))v44[15];
      v72 = v74;
      if ( v71 == sub_650F0 )
        goto LABEL_91;
LABEL_104:
      v80 = v71((__int64)v73, v72, 0);
      v44 = (_QWORD *)*v73;
      v74 = v80;
      v75 = *(__int64 (__fastcall **)(__int64, int))(*v73 + 104);
      if ( v75 == sub_650B0 )
        goto LABEL_92;
    }
    v174 = v74;
    v10 = v73;
    v11 = v72;
    v46 = (__int64 (__fastcall *)(__int64, int))v44[12];
    a6 = v196;
    if ( v78 == v79 )
      v11 = v174;
  }
LABEL_51:
  if ( v46 == sub_65090 )
  {
LABEL_52:
    if ( !v10[7] )
    {
      a6[1] = 0;
LABEL_54:
      v47 = *a6;
      v48 = 0;
      v49 = (_DWORD *)*a6;
      goto LABEL_152;
    }
    v84 = *(_DWORD *)(v10[6] + 24LL * (int)v11 + 8);
    goto LABEL_110;
  }
  v84 = v46((__int64)v10, v11);
LABEL_110:
  a6[1] = 0;
  if ( v84 != 1 )
    goto LABEL_54;
  v85 = a6;
  v86 = 0;
  v87 = v10;
  v88 = v85;
  do
  {
    v89 = (_DWORD *)(*v88 + 4 * v86);
    if ( (_DWORD *)*v88 == v89 )
      goto LABEL_136;
    v90 = (_DWORD *)*v88;
    while ( (_DWORD)v11 != *v90 )
    {
      if ( v89 == ++v90 )
        goto LABEL_136;
    }
    if ( v90 == v89 )
    {
LABEL_136:
      if ( v88[2] < (unsigned __int64)(v86 + 1) )
      {
        v105 = qvector_reserve((__int64)v88, *v88, v86 + 1, 4);
        v106 = v88[1];
        *v88 = v105;
        v89 = (_DWORD *)(v105 + 4 * v106);
      }
      *v89 = v11;
      ++v88[1];
      v91 = *v87;
      v92 = *(__int64 (__fastcall **)(__int64, int, int))(*v87 + 112);
      if ( v92 == sub_650D0 )
      {
LABEL_118:
        LODWORD(v11) = **(_DWORD **)(v87[6] + 24 * v11);
        v93 = *(__int64 (__fastcall **)(__int64, int))(v91 + 104);
        if ( v93 != sub_650B0 )
          goto LABEL_140;
        goto LABEL_119;
      }
    }
    else
    {
      v91 = *v87;
      v92 = *(__int64 (__fastcall **)(__int64, int, int))(*v87 + 112);
      if ( v92 == sub_650D0 )
        goto LABEL_118;
    }
    v103 = v92((__int64)v87, v11, 0);
    v91 = *v87;
    v11 = v103;
    v93 = *(__int64 (__fastcall **)(__int64, int))(*v87 + 104);
    if ( v93 != sub_650B0 )
    {
LABEL_140:
      v95 = v93((__int64)v87, v11);
      v91 = *v87;
      goto LABEL_121;
    }
LABEL_119:
    v94 = 0;
    if ( !v87[10] )
      goto LABEL_127;
    v95 = *(_DWORD *)(v87[9] + 24LL * (int)v11 + 8);
LABEL_121:
    v94 = 0;
    if ( v95 == 1 )
    {
      v96 = (_DWORD *)a5[32];
      v97 = &v96[a5[33]];
      if ( v96 == v97 )
      {
LABEL_146:
        v94 = 1;
      }
      else
      {
        while ( (_DWORD)v11 != *v96 )
        {
          if ( v97 == ++v96 )
            goto LABEL_146;
        }
        v94 = v96 == v97;
      }
    }
LABEL_127:
    v98 = *(__int64 (__fastcall **)(__int64, int))(v91 + 96);
    if ( v98 == sub_65090 )
    {
      if ( !v87[7] )
      {
        v48 = v88[1];
        a6 = v88;
        goto LABEL_130;
      }
      v104 = *(_DWORD *)(v87[6] + 24LL * (int)v11 + 8);
    }
    else
    {
      v197 = v94;
      v104 = v98((__int64)v87, v11);
      v94 = v197;
    }
    v86 = v88[1];
  }
  while ( v104 == 1 && v94 );
  a6 = v88;
  v48 = v88[1];
LABEL_130:
  if ( v94 )
  {
    v47 = *a6;
    v49 = (_DWORD *)(*a6 + 4 * v48);
    if ( (_DWORD *)*a6 == v49 )
      goto LABEL_152;
    v107 = (_DWORD *)*a6;
    while ( (_DWORD)v11 != *v107 )
    {
      if ( v49 == ++v107 )
        goto LABEL_152;
    }
    if ( v107 == v49 )
    {
LABEL_152:
      if ( a6[2] < v48 + 1 )
      {
        v140 = qvector_reserve((__int64)a6, v47, v48 + 1, 4);
        v141 = a6[1];
        *a6 = v140;
        v49 = (_DWORD *)(v140 + 4 * v141);
      }
      *v49 = v11;
      v48 = a6[1] + 1;
      a6[1] = v48;
    }
  }
  if ( v48 <= 1 )
    return 0;
  v99 = (unsigned int)(v48 - 2);
  v100 = 4 * v99;
  if ( (int)v99 >= 0 )
  {
    do
    {
      v101 = v99 + 1;
      LODWORD(v99) = v99 - 1;
      v102 = *(unsigned int *)(*a6 + v100);
      v100 -= 4;
      (**a7)(a7, v102, *(unsigned int *)(*a6 + 4LL * v101), 5);
    }
    while ( (_DWORD)v99 != -1 );
  }
  return 1;
}
