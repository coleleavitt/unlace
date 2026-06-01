__int64 __fastcall sub_35A840(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  char **v3; // r12
  char **v4; // r12
  char **exception; // r12
  char **v6; // r14
  char **v7; // r12
  char **v8; // r12
  unsigned int v10; // r12d
  __int64 v11; // rax
  __int64 result; // rax
  __int64 *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // r13
  int v20; // eax
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  bool v26; // zf
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 *v29; // r15
  __int64 v30; // rsi
  __int64 *v31; // r13
  __int64 *v32; // r15
  __int64 v33; // rsi
  unsigned int v34; // r13d
  __int64 v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 *v39; // r15
  unsigned __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // r15
  unsigned int v44; // esi
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // r15
  unsigned int v49; // eax
  __int64 v50; // rdx
  __int64 *v51; // rcx
  int v52; // eax
  __int64 *v53; // rdx
  unsigned int v54; // esi
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // r15
  _QWORD *v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rsi
  int v63; // eax
  __int64 *v64; // rsi
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // r15
  __int64 v68; // rax
  __int64 v69; // rcx
  int v70; // eax
  __m128 *v71; // rsi
  unsigned int v72; // eax
  __int64 v73; // rdx
  int v74; // eax
  __m128 *v75; // rdx
  __m128 v76; // xmm0
  __int64 v77; // rax
  __int64 v78; // r15
  unsigned int v79; // esi
  __int64 v80; // rax
  __int64 *v81; // rax
  int v82; // eax
  unsigned int v83; // edx
  unsigned int v84; // eax
  _DWORD *v85; // rax
  int v86; // esi
  unsigned int v87; // edx
  unsigned int v88; // eax
  _DWORD *v89; // rax
  __int64 v90; // rax
  int v91; // esi
  __int64 v92; // rbx
  unsigned int v93; // r13d
  unsigned int v94; // edx
  __int64 v95; // rax
  _QWORD *v96; // r15
  _DWORD *v97; // r8
  __int64 v98; // r10
  __int64 v99; // rdi
  __int64 v100; // rdx
  int v101; // r11d
  _QWORD *v102; // rax
  _QWORD *v103; // r9
  __int64 v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rcx
  _QWORD *v107; // r10
  __int64 *v108; // rbx
  __m128 *v109; // r15
  __int64 v110; // rsi
  __int64 v111; // rdi
  __int64 v112; // rsi
  __int64 v113; // rdi
  unsigned int v114; // r8d
  size_t v115; // rsi
  _DWORD *v116; // rax
  __int64 v117; // rsi
  unsigned int v118; // r15d
  unsigned int v119; // eax
  unsigned int *v120; // rax
  unsigned int v121; // edx
  size_t v122; // rsi
  __int64 v123; // rax
  __int64 v124; // rdi
  __int64 v125; // r15
  __int64 *v126; // r12
  unsigned __int64 v127; // r14
  __int64 *v128; // rbx
  __int64 v129; // r14
  __int64 *v130; // r12
  __int64 v131; // rsi
  __int64 v132; // rsi
  _QWORD *v133; // rax
  int v134; // edx
  _QWORD *v135; // rax
  _QWORD *v136; // rsi
  _QWORD *v137; // rdx
  _QWORD *v138; // rax
  int v139; // [rsp-8h] [rbp-E8h]
  _DWORD *v140; // [rsp+0h] [rbp-E0h]
  int v141; // [rsp+0h] [rbp-E0h]
  int *v142; // [rsp+8h] [rbp-D8h]
  int v143; // [rsp+8h] [rbp-D8h]
  __int64 v144; // [rsp+10h] [rbp-D0h]
  int v145; // [rsp+10h] [rbp-D0h]
  __int64 v146; // [rsp+10h] [rbp-D0h]
  __int64 *v147; // [rsp+10h] [rbp-D0h]
  _DWORD *v148; // [rsp+10h] [rbp-D0h]
  _QWORD *v149; // [rsp+18h] [rbp-C8h]
  int v150; // [rsp+18h] [rbp-C8h]
  __int64 *v151; // [rsp+20h] [rbp-C0h]
  int v152; // [rsp+20h] [rbp-C0h]
  __int64 v153; // [rsp+28h] [rbp-B8h]
  char v154; // [rsp+28h] [rbp-B8h]
  __int64 v155; // [rsp+30h] [rbp-B0h]
  int v156; // [rsp+30h] [rbp-B0h]
  unsigned __int64 v157; // [rsp+38h] [rbp-A8h]
  int v158; // [rsp+38h] [rbp-A8h]
  __int64 v159; // [rsp+38h] [rbp-A8h]
  __int64 v160; // [rsp+40h] [rbp-A0h]
  int v161; // [rsp+40h] [rbp-A0h]
  __int64 v162; // [rsp+48h] [rbp-98h]
  void *v163; // [rsp+48h] [rbp-98h]
  int v164; // [rsp+48h] [rbp-98h]
  int v165; // [rsp+48h] [rbp-98h]
  __int64 v166; // [rsp+50h] [rbp-90h] BYREF
  __int64 v167; // [rsp+58h] [rbp-88h]
  int v168; // [rsp+60h] [rbp-80h]
  int v169; // [rsp+68h] [rbp-78h]
  __int64 v170; // [rsp+70h] [rbp-70h]
  __int64 v171; // [rsp+78h] [rbp-68h]
  __int64 v172; // [rsp+80h] [rbp-60h]
  __int64 v173; // [rsp+88h] [rbp-58h]
  int v174[6]; // [rsp+90h] [rbp-50h] BYREF
  void *v175; // [rsp+A8h] [rbp-38h]
  int v176; // [rsp+B0h] [rbp-30h]
  __int64 v177; // [rsp+B8h] [rbp-28h]

  v10 = a3;
  v11 = a2[3];
  v149 = a2;
  if ( v11 )
    result = *(unsigned int *)(v11 - 4);
  else
    result = 0;
  if ( (unsigned int)result < a3 )
    return result;
  v162 = *a2;
  v155 = a2[1];
  if ( *a2 )
    sub_35A840(a1, *a2, a3);
  if ( v155 )
    sub_35A840(a1, v155, v10);
  result = *a1;
  v166 = result;
  v170 = result;
  v172 = result;
  if ( !v10 )
    return result;
  v13 = nullptr;
  v151 = nullptr;
  v144 = 0;
  v160 = 8LL * (v10 - 1);
  v167 = 0;
  v142 = v174;
  do
  {
    result = (__int64)v149;
    v15 = (_QWORD *)(v149[3] + v160);
    if ( *v15 )
      break;
    v16 = *(_QWORD *)(v162 + 24);
    v17 = *(_QWORD *)(v155 + 24);
    if ( !v16 )
    {
      if ( !v17 )
      {
LABEL_10:
        v14 = *(_QWORD *)(*a1 + 864);
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        *v15 = v14;
        goto LABEL_13;
      }
LABEL_17:
      LODWORD(v16) = *(_DWORD *)(v17 - 4) + v16;
      goto LABEL_18;
    }
    LODWORD(v16) = *(_DWORD *)(v16 - 4);
    if ( v17 )
      goto LABEL_17;
LABEL_18:
    if ( (unsigned int)v16 < v10 )
      goto LABEL_10;
    v18 = *a1;
    v19 = *(_QWORD *)(*a1 + 840);
    sub_180C5A0(v142, "c");
    v20 = sub_15E3D10(
            v18,
            (int)v142,
            (int)&qword_18D6CD0,
            0,
            0,
            v19,
            1,
            v139,
            (int)v140,
            (int)v142,
            v144,
            (int)v149,
            (int)v151,
            v153,
            v155,
            v157,
            v160,
            v162,
            v166,
            v167,
            v168,
            v169,
            v170,
            v171,
            v172,
            v173,
            v174[0],
            v174[2],
            v174[4],
            v175,
            v176,
            v177);
    v23 = sub_15DC610(v18, v20, 0, 0, v21, v22, v141, v143, v145, v150, v152, v154, v156, v158, v161, v163);
    v153 = v23;
    if ( v23 )
    {
      v24 = v23;
      LODWORD(v157) = *(_DWORD *)(v23 + 8);
      v25 = v157 + 1;
      v26 = v167 == 0;
      *(_DWORD *)(v24 + 8) = v157 + 1;
      if ( v26 )
      {
        v28 = v149[2];
        v29 = (__int64 *)(v149[3] + v160);
      }
      else
      {
        v27 = v167;
        LODWORD(v157) = *(_DWORD *)(v167 + 8);
        *(_DWORD *)(v167 + 8) = v157 - 1;
        if ( (_DWORD)v157 == 1 )
          sub_15D7BC0(v166, v27);
        v28 = v149[2];
        v29 = (__int64 *)(v149[3] + v160);
        v25 = *(_DWORD *)(v153 + 8);
      }
      *(_DWORD *)(v153 + 8) = v25 + 1;
    }
    else
    {
      if ( v167 )
      {
        v124 = v167;
        LODWORD(v157) = *(_DWORD *)(v167 + 8);
        *(_DWORD *)(v167 + 8) = v157 - 1;
        if ( (_DWORD)v157 == 1 )
          sub_15D7BC0(v166, v124);
      }
      v28 = v149[2];
      v29 = (__int64 *)(v149[3] + v160);
    }
    v30 = *v29;
    if ( *v29 )
    {
      v26 = (*(_DWORD *)(v30 + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v28, v30);
    }
    *v29 = v153;
    if ( v151 )
    {
      v31 = v151;
      v32 = &v151[*((unsigned int *)v151 - 1)];
      if ( v151 < v32 )
      {
        do
        {
          while ( 1 )
          {
            v33 = *v31;
            if ( *v31 )
            {
              v26 = (*(_DWORD *)(v33 + 8))-- == 1;
              if ( v26 )
                break;
            }
            if ( ++v31 >= v32 )
              goto LABEL_35;
          }
          sub_15D7BC0(v166, v33);
          ++v31;
        }
        while ( v31 < v32 );
      }
LABEL_35:
      *((_DWORD *)v151 - 1) = 0;
    }
    LODWORD(v167) = v10;
    v34 = 0;
    do
    {
      v35 = *(_QWORD *)(v162 + 24);
      if ( v35 )
        v36 = *(_DWORD *)(v35 - 4);
      else
        v36 = 0;
      if ( v36 < v34 )
        goto LABEL_72;
      v37 = *(_QWORD *)(v155 + 24);
      v38 = v37 ? *(_DWORD *)(v37 - 4) : 0;
      if ( v38 < (unsigned int)v167 )
        goto LABEL_72;
      if ( v13 )
      {
        v39 = v13;
        v40 = (unsigned __int64)&v13[*((unsigned int *)v13 - 1)];
        if ( (unsigned __int64)v13 < v40 )
        {
          do
          {
            while ( 1 )
            {
              v41 = *v39;
              if ( *v39 )
              {
                v26 = (*(_DWORD *)(v41 + 8))-- == 1;
                if ( v26 )
                  break;
              }
              if ( (unsigned __int64)++v39 >= v40 )
                goto LABEL_50;
            }
            v157 = v40;
            sub_15D7BC0(v166, v41);
            v40 = v157;
            ++v39;
          }
          while ( (unsigned __int64)v39 < v157 );
        }
LABEL_50:
        *((_DWORD *)v13 - 1) = 0;
      }
      if ( v34 )
      {
        v77 = sub_15EC2C0(*a1, *(_QWORD *)(*(_QWORD *)(v162 + 24) + 8LL * (v34 - 1)));
        v78 = v77;
        if ( v77 )
          ++*(_DWORD *)(v77 + 8);
        if ( v13 )
        {
          v79 = *((_DWORD *)v13 - 1);
          if ( v79 == *((_DWORD *)v13 - 2) )
          {
            v87 = (3 * v79 + 1) >> 1;
            v88 = 8 * v87 + 8;
            if ( 8 * v79 + 8 >= v88 || v79 >= v87 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v142, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v142);
              sub_233E40((__int64)v142);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v157) = (3 * v79 + 1) >> 1;
            v89 = (_DWORD *)sub_186B300(v13 - 1, v88);
            v13 = (__int64 *)(v89 + 2);
            *v89 = v157;
            v90 = (unsigned int)v89[1];
            v91 = v90;
            v81 = &v13[v90];
            v46 = (unsigned int)(v91 + 1);
          }
          else
          {
            v80 = v79;
            v46 = v79 + 1;
            v81 = &v13[v80];
          }
          *v81 = v78;
          v82 = v167;
          *((_DWORD *)v13 - 1) = v46;
          if ( !v82 )
            goto LABEL_57;
        }
        else
        {
          v133 = (_QWORD *)sub_186B270(0x18u);
          v134 = v167;
          v133[1] = v78;
          v13 = v133 + 1;
          *v133 = 0x100000002LL;
          if ( !v134 )
          {
            v46 = 1;
            goto LABEL_58;
          }
        }
      }
      v42 = sub_15EC2C0(*a1, *(_QWORD *)(*(_QWORD *)(v155 + 24) + 8LL * (unsigned int)(v167 - 1)));
      v43 = v42;
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      if ( v13 )
      {
        v44 = *((_DWORD *)v13 - 1);
        if ( v44 == *((_DWORD *)v13 - 2) )
        {
          v83 = (3 * v44 + 1) >> 1;
          v84 = 8 * v83 + 8;
          if ( 8 * v44 + 8 >= v84 || v44 >= v83 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v142, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v142);
            sub_233E40((__int64)v142);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v157) = (3 * v44 + 1) >> 1;
          v85 = (_DWORD *)sub_186B300(v13 - 1, v84);
          v13 = (__int64 *)(v85 + 2);
          *v85 = v157;
          v86 = v85[1];
          *(_QWORD *)&v85[2 * v86 + 2] = v43;
          v46 = (unsigned int)(v86 + 1);
          v85[1] = v46;
        }
        else
        {
          v45 = v44;
          v46 = v44 + 1;
          v13[v45] = v43;
          *((_DWORD *)v13 - 1) = v46;
        }
LABEL_57:
        if ( !(_DWORD)v46 )
          goto LABEL_72;
        goto LABEL_58;
      }
      v135 = (_QWORD *)sub_186B270(0x18u);
      v135[1] = v43;
      v13 = v135 + 1;
      v46 = 1;
      *v135 = 0x100000002LL;
LABEL_58:
      v47 = sub_15EC240(v166, v46);
      v48 = v47;
      if ( v47 )
        ++*(_DWORD *)(v47 + 8);
      if ( v151 )
      {
        v49 = *((_DWORD *)v151 - 1);
        if ( v49 == *((_DWORD *)v151 - 2) )
        {
          v121 = (3 * v49 + 1) >> 1;
          v122 = 8 * v121 + 8;
          if ( 8 * v49 + 8 >= (unsigned int)v122 || v49 >= v121 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v142, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v142);
            sub_233E40((__int64)v142);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v157) = (3 * v49 + 1) >> 1;
          v123 = sub_186B300(v151 - 1, v122);
          v51 = (__int64 *)(v123 + 8);
          v151 = (__int64 *)(v123 + 8);
          *(_DWORD *)v123 = v157;
          LODWORD(v123) = *(_DWORD *)(v123 + 4);
          v53 = &v51[(unsigned int)v123];
          v52 = v123 + 1;
        }
        else
        {
          v50 = v49;
          v51 = v151;
          v52 = v49 + 1;
          v53 = &v151[v50];
        }
      }
      else
      {
        v138 = (_QWORD *)sub_186B270(0x18u);
        *v138 = 2;
        v151 = v138 + 1;
        v53 = v138 + 1;
        v51 = v138 + 1;
        v52 = 1;
      }
      *v53 = v48;
      *((_DWORD *)v51 - 1) = v52;
      if ( v153 )
        ++*(_DWORD *)(v153 + 8);
      v54 = *((_DWORD *)v13 - 1);
      if ( v54 == *((_DWORD *)v13 - 2) )
      {
        v118 = (3 * v54 + 1) >> 1;
        v119 = 8 * v118 + 8;
        if ( 8 * v54 + 8 >= v119 || v54 >= v118 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v142, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v142);
          sub_233E40((__int64)v142);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v120 = (unsigned int *)sub_186B300(v13 - 1, v119);
        *v120 = v118;
        v54 = v120[1];
        v13 = (__int64 *)(v120 + 2);
      }
      v55 = v54;
      v56 = v54 + 1;
      v13[v55] = v153;
      v57 = v166;
      *((_DWORD *)v13 - 1) = v56;
      v58 = sub_15EC240(v57, v56);
      v59 = v58;
      if ( v58 )
        ++*(_DWORD *)(v58 + 8);
      v60 = (_QWORD *)a1[5];
      if ( v60 )
      {
        v61 = *((_DWORD *)v60 - 1);
        if ( v61 == *((_DWORD *)v60 - 2) )
        {
          v114 = (3 * v61 + 1) >> 1;
          v115 = 8 * v114 + 8;
          if ( 8 * v61 + 8 >= (unsigned int)v115 || v61 >= v114 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v142, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v142);
            sub_233E40((__int64)v142);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v157) = (3 * v61 + 1) >> 1;
          v116 = (_DWORD *)sub_186B300(v60 - 1, v115);
          v117 = (unsigned int)v116[1];
          v60 = v116 + 2;
          a1[5] = (__int64)(v116 + 2);
          *v116 = v157;
          LODWORD(v116) = v117;
          v64 = &v60[v117];
          v63 = (_DWORD)v116 + 1;
        }
        else
        {
          v62 = v61;
          v63 = v61 + 1;
          v64 = &v60[v62];
        }
      }
      else
      {
        v137 = (_QWORD *)sub_186B270(0x18u);
        *v137 = 2;
        v63 = 1;
        v60 = v137 + 1;
        a1[5] = (__int64)v60;
        v64 = v60;
      }
      *v64 = v59;
      *((_DWORD *)v60 - 1) = v63;
LABEL_72:
      ++v34;
      LODWORD(v167) = v167 - 1;
    }
    while ( v10 >= v34 );
    if ( v151 )
      v65 = *((unsigned int *)v151 - 1);
    else
      v65 = 0;
    v66 = sub_15EC1C0(v166, v65);
    v67 = v66;
    if ( v66 )
      ++*(_DWORD *)(v66 + 8);
    v68 = sub_15EC2C0(*a1, v66);
    v167 = v68;
    v69 = v68;
    if ( !v68 )
    {
      if ( v146 )
      {
LABEL_79:
        LODWORD(v157) = *(_DWORD *)(v146 + 8);
        *(_DWORD *)(v146 + 8) = v157 - 1;
        if ( (_DWORD)v157 == 1 )
          sub_15D7BC0(v166, v146);
        if ( v67 )
        {
          v26 = (*(_DWORD *)(v67 + 8))-- == 1;
          if ( v26 )
            goto LABEL_168;
        }
      }
      else
      {
        if ( !v67 )
        {
          if ( v153 )
            ++*(_DWORD *)(v153 + 8);
          goto LABEL_88;
        }
        v26 = (*(_DWORD *)(v67 + 8))-- == 1;
        if ( !v26 )
        {
          if ( v153 )
            goto LABEL_84;
          goto LABEL_88;
        }
LABEL_168:
        sub_15D7BC0(v166, v67);
      }
      if ( v153 )
        goto LABEL_84;
      goto LABEL_85;
    }
    LODWORD(v157) = *(_DWORD *)(v68 + 8);
    v70 = v157 + 1;
    *(_DWORD *)(v69 + 8) = v157 + 1;
    if ( v146 )
      goto LABEL_79;
    if ( !v67 )
    {
      if ( v153 )
      {
        ++*(_DWORD *)(v153 + 8);
        goto LABEL_86;
      }
LABEL_87:
      *(_DWORD *)(v167 + 8) = v70 + 1;
      goto LABEL_88;
    }
    v26 = (*(_DWORD *)(v67 + 8))-- == 1;
    if ( v26 )
      goto LABEL_168;
    if ( !v153 )
    {
LABEL_86:
      v70 = *(_DWORD *)(v167 + 8);
      goto LABEL_87;
    }
LABEL_84:
    ++*(_DWORD *)(v153 + 8);
LABEL_85:
    if ( v167 )
      goto LABEL_86;
LABEL_88:
    v71 = (__m128 *)a1[6];
    if ( v71 )
    {
      v72 = v71[-1].m128_u32[3];
      if ( v72 == v71[-1].m128_i32[2] )
      {
        v93 = (3 * v72 + 1) >> 1;
        v94 = 32 * v93 + 8;
        if ( 32 * v72 + 8 >= v94 || v72 >= v93 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v142, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v142);
          sub_233E40((__int64)v142);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v95 = sub_186B270(v94);
        v96 = (_QWORD *)a1[6];
        v97 = (_DWORD *)v95;
        v71 = (__m128 *)(v95 + 8);
        if ( v96 )
        {
          v98 = *((unsigned int *)v96 - 1);
          v99 = v167;
          v100 = v95 + 8;
          *(_DWORD *)(v95 + 4) = v98;
          v101 = v98;
          v102 = v96;
          v103 = &v96[4 * v98];
          if ( v103 != v96 )
          {
            do
            {
              v104 = v102[1];
              v102 += 4;
              v100 += 32;
              *(_QWORD *)(v100 - 24) = v104;
              v105 = *(v102 - 4);
              *(v102 - 4) = 0;
              *(_QWORD *)(v100 - 32) = v105;
              *(_QWORD *)(v100 - 8) = *(v102 - 1);
              v106 = *(v102 - 2);
              *(v102 - 2) = 0;
              *(_QWORD *)(v100 - 16) = v106;
            }
            while ( v102 != v103 );
            v167 = v99;
          }
          v107 = &v96[4 * v98];
          if ( v101 )
          {
            v147 = v13;
            v108 = v96;
            v109 = v71;
            v140 = v97;
            v159 = v167;
            v167 = (__int64)v107;
            do
            {
              while ( 1 )
              {
                v112 = v108[2];
                if ( v112 )
                {
                  v113 = v108[3];
                  v26 = (*(_DWORD *)(v112 + 8))-- == 1;
                  if ( v26 )
                    sub_15D7BC0(v113, v112);
                }
                v110 = *v108;
                if ( *v108 )
                {
                  v111 = v108[1];
                  v26 = (*(_DWORD *)(v110 + 8))-- == 1;
                  if ( v26 )
                    break;
                }
                v108 += 4;
                if ( v108 == (__int64 *)v167 )
                  goto LABEL_131;
              }
              sub_15D7BC0(v111, v110);
              v108 += 4;
            }
            while ( v108 != (__int64 *)v167 );
LABEL_131:
            v71 = v109;
            v13 = v147;
            v97 = v140;
            v96 = (_QWORD *)a1[6];
            v167 = v159;
          }
          v148 = v97;
          LODWORD(v157) = (_DWORD)v71;
          sub_186B220(v96 - 1);
          v97 = v148;
          v75 = &v71[2 * (unsigned int)v148[1]];
          v74 = v148[1] + 1;
        }
        else
        {
          *(_DWORD *)(v95 + 4) = 0;
          v75 = (__m128 *)(v95 + 8);
          v74 = 1;
        }
        a1[6] = (__int64)v71;
        *v97 = v93;
      }
      else
      {
        v73 = v72;
        v74 = v72 + 1;
        v75 = &v71[2 * v73];
      }
    }
    else
    {
      v136 = (_QWORD *)sub_186B270(0x48u);
      *v136 = 2;
      v74 = 1;
      v71 = (__m128 *)(v136 + 1);
      a1[6] = (__int64)v71;
      v75 = v71;
    }
    v144 = v167;
    v76 = _mm_loadh_ps((const double *)&v166);
    v167 = v153;
    *v75 = v76;
    v75[1] = _mm_loadh_ps((const double *)&v166);
    v71[-1].m128_i32[3] = v74;
LABEL_13:
    v160 -= 8;
    result = v160;
    --v10;
  }
  while ( v160 != -8 );
  if ( !v13 )
    goto LABEL_155;
  v125 = v167;
  v126 = v13;
  v127 = (unsigned __int64)&v13[*((unsigned int *)v13 - 1)];
  if ( (unsigned __int64)v13 >= v127 )
    goto LABEL_154;
  while ( 2 )
  {
    while ( 2 )
    {
      v132 = *v126;
      if ( !*v126 )
      {
LABEL_163:
        if ( (unsigned __int64)++v126 >= v127 )
          goto LABEL_167;
        continue;
      }
      break;
    }
    v26 = (*(_DWORD *)(v132 + 8))-- == 1;
    if ( v26 )
    {
      sub_15D7BC0(v166, v132);
      goto LABEL_163;
    }
    if ( (unsigned __int64)++v126 < v127 )
      continue;
    break;
  }
LABEL_167:
  v167 = v125;
LABEL_154:
  result = sub_186B220(v13 - 1);
LABEL_155:
  v128 = v151;
  if ( v151 )
  {
    v129 = v167;
    v130 = &v151[*((unsigned int *)v151 - 1)];
    if ( v151 < v130 )
    {
      v131 = *v151;
      if ( *v151 )
        goto LABEL_160;
      while ( ++v128 < v130 )
      {
        v131 = *v128;
        if ( *v128 )
        {
LABEL_160:
          v26 = (*(_DWORD *)(v131 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(v166, v131);
        }
      }
      v167 = v129;
    }
    result = sub_186B220(v151 - 1);
  }
  if ( v144
    && (v164 = *(_DWORD *)(v144 + 8), result = (unsigned int)(v164 - 1), *(_DWORD *)(v144 + 8) = result, v164 == 1) )
  {
    result = sub_15D7BC0(v166, v144);
    v92 = v167;
    if ( v167 )
      goto LABEL_112;
  }
  else
  {
    v92 = v167;
    if ( v167 )
    {
LABEL_112:
      v165 = *(_DWORD *)(v92 + 8);
      result = (unsigned int)(v165 - 1);
      *(_DWORD *)(v92 + 8) = result;
      if ( v165 == 1 )
        return sub_15D7BC0(v166, v92);
    }
  }
  return result;
}

