_DWORD *__fastcall sub_632080(__int64 *a1, __int64 a2, __int64 a3, __m128 a4, double a5, __m128 a6)
{
  char **v6; // rbx
  char **exception; // rbx
  char **v8; // rbx
  char **v9; // rbx
  __int64 v11; // rdx
  unsigned int *v12; // r14
  __int64 v13; // rax
  unsigned int *v14; // r15
  unsigned int *v15; // rbx
  _QWORD *v16; // rax
  unsigned int *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // r12d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 i; // rax
  __int64 v26; // rbx
  _DWORD *v27; // rdx
  __int64 *v28; // rdx
  unsigned int v29; // r12d
  _QWORD *v30; // rax
  __int64 v31; // r15
  int v32; // eax
  __int64 *v33; // rcx
  unsigned int v34; // eax
  unsigned int v35; // r12d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // r8d
  unsigned int v40; // eax
  __int64 *v41; // rcx
  unsigned int v42; // r9d
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 *v45; // rsi
  __int64 v46; // rax
  _DWORD *v47; // rbx
  char *v48; // r9
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  _QWORD *v53; // rcx
  __int64 v54; // r15
  unsigned int v55; // ecx
  int v56; // r8d
  size_t v57; // r15
  _QWORD *v58; // r12
  _QWORD *v59; // rdx
  int v60; // ecx
  __int64 v61; // r8
  _QWORD *v62; // rdi
  _QWORD *v63; // rax
  _QWORD *v64; // rsi
  _QWORD *v65; // r10
  _DWORD *v66; // rdx
  _QWORD *v67; // rax
  _QWORD *v68; // rdx
  _DWORD *v69; // rax
  unsigned int *v70; // rdx
  unsigned int *v71; // rax
  int v72; // r9d
  __int64 v73; // rdi
  int v74; // ecx
  __int64 v75; // rbx
  unsigned int v76; // r12d
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // r12
  __int64 v81; // rax
  double v82; // r15
  __int64 v83; // rax
  __int64 v84; // r15
  __int64 v85; // rax
  _DWORD *v86; // r12
  __int64 v88; // r12
  __int64 v89; // rax
  __int64 v90; // r15
  __int64 v91; // rdx
  __int64 v92; // rax
  unsigned __int8 v93; // al
  __int64 v94; // rcx
  __int64 v95; // rdi
  int v96; // esi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  unsigned __int64 v100; // rax
  unsigned int v102; // edi
  size_t v103; // rsi
  unsigned int *v104; // rax
  __int64 v105; // r12
  void *v106; // rax
  int v107; // ecx
  char *v108; // rax
  _QWORD *v109; // rdi
  __int64 v110; // rdx
  _QWORD *v111; // rsi
  _QWORD *v112; // rdx
  __int64 v113; // rsi
  unsigned int v114; // esi
  __int64 v115; // r15
  __int64 v116; // rax
  _QWORD *v117; // rax
  int v118; // r8d
  __int64 v119; // rdi
  __int64 v120; // rax
  __int64 *v121; // r12
  __int64 v122; // rax
  __int64 *v123; // r15
  __int64 v124; // rcx
  int v125; // eax
  unsigned int v126; // ecx
  unsigned int *v127; // rsi
  __int64 v128; // rdi
  __int64 v129; // r10
  unsigned int *v130; // rdi
  int v131; // [rsp+0h] [rbp-340h]
  int v132; // [rsp+8h] [rbp-338h]
  int v133; // [rsp+10h] [rbp-330h]
  int v134; // [rsp+18h] [rbp-328h]
  __int64 v135; // [rsp+18h] [rbp-328h]
  int v136; // [rsp+20h] [rbp-320h]
  __int64 v137; // [rsp+20h] [rbp-320h]
  int v138; // [rsp+28h] [rbp-318h]
  __int64 *v139; // [rsp+28h] [rbp-318h]
  __int64 v140; // [rsp+30h] [rbp-310h]
  __int64 v141; // [rsp+30h] [rbp-310h]
  char *v142; // [rsp+38h] [rbp-308h]
  __int64 v143; // [rsp+38h] [rbp-308h]
  int v144; // [rsp+40h] [rbp-300h]
  __int64 v145; // [rsp+40h] [rbp-300h]
  __int64 *v146; // [rsp+48h] [rbp-2F8h]
  __int64 v147; // [rsp+48h] [rbp-2F8h]
  int v148; // [rsp+58h] [rbp-2E8h]
  __int64 v149; // [rsp+58h] [rbp-2E8h]
  int v151[2]; // [rsp+68h] [rbp-2D8h]
  int v152[2]; // [rsp+68h] [rbp-2D8h]
  int v153[2]; // [rsp+68h] [rbp-2D8h]
  __int64 v154; // [rsp+68h] [rbp-2D8h]
  int v155[2]; // [rsp+68h] [rbp-2D8h]
  unsigned int *v156; // [rsp+78h] [rbp-2C8h] BYREF
  __int64 *v157; // [rsp+80h] [rbp-2C0h] BYREF
  char v158[8]; // [rsp+88h] [rbp-2B8h] BYREF
  __int64 v159; // [rsp+90h] [rbp-2B0h] BYREF
  __int64 v160; // [rsp+98h] [rbp-2A8h] BYREF
  __int64 v161; // [rsp+A0h] [rbp-2A0h] BYREF
  __int64 v162; // [rsp+A8h] [rbp-298h] BYREF
  int v163[2]; // [rsp+B0h] [rbp-290h] BYREF
  __int64 v164; // [rsp+B8h] [rbp-288h]
  __int64 v165; // [rsp+C0h] [rbp-280h] BYREF
  __int64 v166; // [rsp+C8h] [rbp-278h] BYREF
  int v167[2]; // [rsp+D0h] [rbp-270h] BYREF
  __int64 v168; // [rsp+D8h] [rbp-268h]
  __int64 *v169; // [rsp+E0h] [rbp-260h] BYREF
  __int64 v170[66]; // [rsp+E8h] [rbp-258h] BYREF
  _BYTE v171[72]; // [rsp+2F8h] [rbp-48h] BYREF

  v11 = *a1;
  v157 = nullptr;
  v161 = v11;
  v164 = v11;
  sub_64B4C0(&v169, a1[1], a2, 0);
  *(_QWORD *)v163 = v169;
  v169 = nullptr;
  sub_629FE0(0, v170[0]);
  v142 = v158;
  sub_1580DB0(v158, *a1);
  sub_1580F60((unsigned int)v158, 0, (unsigned int)v163, 0, (unsigned int)&v157, 1, 1);
  v148 = (_DWORD)a1 + 296;
  sub_157E9E0((_DWORD)a1 + 296, v163[0]);
  v12 = (unsigned int *)a1[40];
  if ( v12 )
  {
    v13 = *(v12 - 1);
    if ( (_DWORD)v13 )
    {
      v14 = (unsigned int *)a1[40];
      v15 = &v12[2 * v13];
      v16 = (_QWORD *)sub_186B270(0x18u);
      v17 = (unsigned int *)(v16 + 1);
      *v16 = 2;
      v18 = 1;
      v12 = v17;
      while ( 1 )
      {
        *(_QWORD *)v17 = *(_QWORD *)v14;
        v14 += 2;
        *(v12 - 1) = v18;
        if ( v15 == v14 )
          break;
        if ( (_DWORD)v18 == *(v12 - 2) )
        {
          v20 = (unsigned int)(3 * v18 + 1) >> 1;
          v21 = 8 * v20 + 8;
          if ( 8 * (int)v18 + 8 >= (unsigned int)v21 || (unsigned int)v18 >= v20 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v169, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v169);
            sub_233E40((__int64)&v169);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v22 = (unsigned int *)sub_186B300(v12 - 2, v21);
          v23 = v22[1];
          v12 = v22 + 2;
          *v22 = v20;
          LODWORD(v22) = v23;
          v17 = &v12[2 * v23];
          v18 = (unsigned int)((_DWORD)v22 + 1);
        }
        else
        {
          v19 = (unsigned int)v18;
          v18 = (unsigned int)(v18 + 1);
          v17 = &v12[2 * v19];
        }
      }
      v70 = &v12[2 * v18];
      if ( v12 != v70 )
      {
        v71 = v12;
        while ( *(_QWORD *)v71 )
        {
          v71 += 2;
          if ( v71 == v70 )
            goto LABEL_11;
        }
        sub_633760(&v169, *a1, 0, v171);
        v73 = *a1;
        v74 = *(v12 - 1);
        v171[8] = 0;
        v169 = &off_1C4CA80;
        v165 = v73;
        *(_QWORD *)v152 = 0;
        if ( v74 )
        {
          v75 = 0;
          v76 = 0;
          while ( 1 )
          {
            v78 = *(_QWORD *)&v12[2 * v75];
            if ( v78 )
            {
              v77 = sub_15DB5C0(v73, v76, v78);
              v159 = v77;
              if ( v77 )
                ++*(_DWORD *)(v77 + 8);
              v166 = *(_QWORD *)v152;
              sub_62BD60(&v166, &v159);
              ++v76;
              *(_QWORD *)v152 = v166;
            }
            else
            {
              v79 = sub_15DB5C0(v73, 0, *(_QWORD *)(v73 + 840));
              v160 = v79;
              if ( v79 )
                ++*(_DWORD *)(v79 + 8);
              v166 = *(_QWORD *)v152;
              sub_62BD60(&v166, &v160);
              *(_QWORD *)v152 = v166;
            }
            if ( (unsigned int)++v75 >= *(v12 - 1) )
              break;
            v73 = *a1;
          }
          if ( *(_QWORD *)v152 )
          {
            v74 = *(_DWORD *)(*(_QWORD *)v152 - 4LL);
            v118 = v152[0];
          }
          else
          {
            v74 = 0;
            v118 = 0;
          }
        }
        else
        {
          v118 = 0;
        }
        sub_157BE40((int)v167, (int)&v169, v163[0], v74, v118, v72, v131, 0, v133, v134, v136, v138, v140, v158);
        v119 = *(_QWORD *)v163;
        v120 = *(_QWORD *)v167;
        *(_QWORD *)v167 = *(_QWORD *)v163;
        *(_QWORD *)v163 = v120;
        sub_629FE0(v119, v168);
        *(v12 - 1) = 0;
        sub_157E9E0(v148, v163[0]);
        v121 = (__int64 *)a1[40];
        if ( v121 )
        {
          v122 = *((unsigned int *)v121 - 1);
          if ( (_DWORD)v122 )
          {
            v123 = &v121[v122];
            do
            {
              v125 = *(v12 - 1);
              if ( v125 == *(v12 - 2) )
              {
                v156 = v12;
                sub_39BE00(&v156);
                v12 = v156;
                v125 = *(v156 - 1);
              }
              v124 = *v121++;
              *(_QWORD *)&v12[2 * v125] = v124;
              *(v12 - 1) = v125 + 1;
            }
            while ( v121 != v123 );
          }
        }
        v166 = *(_QWORD *)v152;
        sub_2334C0(&v165);
        v169 = &off_1C4CA80;
        sub_267D20(&v169);
      }
    }
    else
    {
      v12 = nullptr;
    }
  }
LABEL_11:
  v24 = *(_QWORD *)v163;
  if ( *(_WORD *)(*(_QWORD *)v163 + 4LL) )
  {
    v6 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0((__int64 *)&v169, "Query body is not well-formed");
    *v6 = (char *)off_1C63128;
    sub_2333C0(v6 + 1, &v169);
    sub_233E40((__int64)&v169);
    __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  ++*(_DWORD *)(*(_QWORD *)v163 + 8LL);
  v165 = v24;
  v162 = 0;
  sub_62BCA0(&v162, &v165);
  sub_62DBE0(a1, &v161);
  v132 = v162;
  if ( v162 )
  {
    for ( i = v162; v162 + 8LL * *(unsigned int *)(v162 - 4) != i; i += 8 )
    {
      if ( !*(_WORD *)(*(_QWORD *)i + 4LL) )
      {
        v26 = *(_QWORD *)(*(_QWORD *)i + 16LL);
        v27 = *(_DWORD **)(v26 + 24);
        if ( !v27 || *v27 == -1 )
          goto LABEL_19;
      }
    }
  }
  v26 = 0;
LABEL_19:
  v28 = v157;
  if ( !v12 )
  {
    if ( !v157 )
    {
      v29 = 0;
      goto LABEL_35;
    }
    v34 = *((_DWORD *)v157 - 1);
    v29 = 0;
    v39 = v34 >> 1;
    goto LABEL_32;
  }
  v29 = *(v12 - 1);
  if ( v157 )
    goto LABEL_25;
  if ( v29 )
  {
    v30 = (_QWORD *)sub_186B270(0x18u);
    v28 = v30 + 1;
    *v30 = 2;
    v31 = 1;
    v32 = 1;
    v157 = v28;
    v33 = v28;
    while ( 1 )
    {
      *v33 = v31;
      *((_DWORD *)v28 - 1) = v32;
      v29 = *(v12 - 1);
LABEL_25:
      v34 = *((_DWORD *)v28 - 1);
      if ( v34 >= v29 )
        break;
      v31 = (8LL * v34) | 1;
      if ( v34 == *((_DWORD *)v28 - 2) )
      {
        v35 = (3 * v34 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * v34 + 8 >= (unsigned int)v36 || v34 >= v35 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v169, "Overflow encountered when expanding vector");
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, &v169);
          sub_233E40((__int64)&v169);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v37 = (unsigned int *)sub_186B300(v28 - 1, v36);
        v38 = v37[1];
        v28 = (__int64 *)(v37 + 2);
        *v37 = v35;
        v157 = v28;
        LODWORD(v37) = v38;
        v33 = &v28[v38];
        v32 = (_DWORD)v37 + 1;
      }
      else
      {
        v33 = &v28[v34];
        v32 = v34 + 1;
      }
    }
    v39 = v34 >> 1;
    if ( v29 >> 1 )
    {
      v126 = v29 - 1;
      v127 = v12;
      do
      {
        v128 = v126;
        v129 = *(_QWORD *)v127;
        --v126;
        v127 += 2;
        v130 = &v12[2 * v128];
        *((_QWORD *)v127 - 1) = *(_QWORD *)v130;
        *(_QWORD *)v130 = v129;
      }
      while ( v29 - 1 - (v29 >> 1) != v126 );
    }
LABEL_32:
    if ( v39 )
    {
      v40 = v34 - 1;
      v41 = v28;
      v42 = v40 - v39;
      do
      {
        v43 = v40;
        v44 = *v41;
        --v40;
        ++v41;
        v45 = &v28[v43];
        *(v41 - 1) = *v45;
        *v45 = v44;
      }
      while ( v40 != v42 );
    }
  }
LABEL_35:
  v46 = a1[1];
  v169 = nullptr;
  *(_QWORD *)v151 = v46;
  sub_180C5A0(v167, "query");
  v47 = (_DWORD *)sub_651680(*(_QWORD *)v151, v167, &v169, v29, v12, v26);
  sub_6511B0(a1[1], v47, 0);
  if ( v47 )
    ++v47[2];
  v49 = *(_QWORD **)(a3 + 232);
  if ( v49 )
  {
    v50 = *((_DWORD *)v49 - 1);
    if ( v50 == *((_DWORD *)v49 - 2) )
    {
      v102 = (3 * v50 + 1) >> 1;
      v103 = 8 * v102 + 8;
      if ( 8 * v50 + 8 >= (unsigned int)v103 || v50 >= v102 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v169, "Overflow encountered when expanding vector");
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, &v169);
        sub_233E40((__int64)&v169);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v104 = (unsigned int *)sub_186B300(v49 - 1, v103);
      v49 = v104 + 2;
      *v104 = v102;
      *(_QWORD *)(a3 + 232) = v104 + 2;
      LODWORD(v104) = v104[1];
      v53 = &v49[(unsigned int)v104];
      v52 = (_DWORD)v104 + 1;
    }
    else
    {
      v51 = v50;
      v52 = v50 + 1;
      v53 = &v49[v51];
    }
  }
  else
  {
    v117 = (_QWORD *)sub_186B270(0x18u);
    v49 = v117 + 1;
    *v117 = 2;
    v53 = v117 + 1;
    *(_QWORD *)(a3 + 232) = v117 + 1;
    v52 = 1;
  }
  *v53 = v47;
  *((_DWORD *)v49 - 1) = v52;
  v54 = *(unsigned int *)(a3 + 160);
  v55 = 2 * v54;
  if ( 3 * (int)v54 < (unsigned int)(4 * (*(_DWORD *)(a3 + 164) + *(_DWORD *)(a3 + 168))) )
  {
    v105 = v55;
    LODWORD(v146) = 2 * v54;
    v57 = 8LL * v55;
    v106 = (void *)sub_186B270(v57);
    v107 = (int)v146;
    *(_QWORD *)v155 = v106;
    if ( (_DWORD)v146 )
    {
      memset(v106, 0, 8 * v105);
      v107 = (int)v146;
    }
    v56 = v107 - 1;
    v48 = *(char **)(a3 + 152);
    v58 = (_QWORD *)(*(_QWORD *)v155 + v57);
    v108 = &v48[8 * *(unsigned int *)(a3 + 160)];
    if ( v48 != v108 )
    {
      do
      {
        while ( *(_QWORD *)v48 <= 1u )
        {
          v48 += 8;
          if ( v108 == v48 )
            goto LABEL_121;
        }
        v109 = *(_QWORD **)v155;
        v110 = 8LL * (*(_DWORD *)(*(_QWORD *)v48 + 12LL) & (unsigned int)v56);
        v111 = (_QWORD *)(*(_QWORD *)v155 + v110);
        if ( v57 == v110 )
        {
LABEL_125:
          v109 = *(_QWORD **)v155;
          if ( *(_QWORD **)v155 == v111 )
          {
LABEL_138:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v112 = *(_QWORD **)v155;
          while ( *v112 )
          {
            if ( v111 == ++v112 )
              goto LABEL_138;
          }
        }
        else
        {
          v112 = (_QWORD *)(*(_QWORD *)v155 + v110);
          while ( *v112 )
          {
            if ( v58 == ++v112 )
              goto LABEL_125;
          }
        }
        v113 = *(_QWORD *)v48;
        v48 += 8;
        *(_QWORD *)v155 = v109;
        *v112 = v113;
      }
      while ( v108 != v48 );
LABEL_121:
      v108 = *(char **)(a3 + 152);
    }
    if ( v108 )
    {
      v144 = v107;
      LODWORD(v146) = v107 - 1;
      sub_186B220(v108);
      v107 = v144;
      v56 = (int)v146;
    }
    *(_DWORD *)(a3 + 160) = v107;
    v59 = *(_QWORD **)v155;
    *(_QWORD *)(a3 + 152) = *(_QWORD *)v155;
    *(_DWORD *)(a3 + 168) = 0;
  }
  else
  {
    v56 = v54 - 1;
    v57 = 8 * v54;
    v58 = (_QWORD *)(*(_QWORD *)(a3 + 152) + v57);
    v59 = *(_QWORD **)(a3 + 152);
  }
  v60 = v47[3];
  v61 = 8LL * (v60 & (unsigned int)v56);
  v62 = &v59[(unsigned __int64)v61 / 8];
  if ( v61 == v57 )
  {
    v64 = nullptr;
    v67 = v59;
LABEL_51:
    if ( v62 == v67 )
    {
LABEL_59:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v68 = v67;
    while ( 1 )
    {
      while ( 1 )
      {
        v69 = (_DWORD *)*v68;
        if ( *v68 > 1u )
          break;
        if ( !v69 )
        {
          v63 = v68;
          goto LABEL_76;
        }
        v64 = v68++;
        if ( v62 == v68 )
          goto LABEL_59;
      }
      if ( v69[3] == v60 && v47 == v69 )
        break;
      if ( v62 == ++v68 )
        goto LABEL_59;
    }
    v63 = v68;
LABEL_140:
    *v63 = v47;
  }
  else
  {
    v63 = &v59[(unsigned __int64)v61 / 8];
    v64 = nullptr;
    v65 = v59;
    while ( 1 )
    {
      while ( 1 )
      {
        v66 = (_DWORD *)*v63;
        if ( *v63 <= 1u )
          break;
        if ( v66[3] == v60 && v47 == v66 )
          goto LABEL_140;
        if ( ++v63 == v58 )
        {
LABEL_50:
          v67 = v65;
          goto LABEL_51;
        }
      }
      if ( !v66 )
        break;
      v64 = v63++;
      if ( v63 == v58 )
        goto LABEL_50;
    }
LABEL_76:
    if ( v64 )
      --*(_DWORD *)(a3 + 168);
    else
      v64 = v63;
    *v64 = v47;
    ++*(_DWORD *)(a3 + 164);
  }
  if ( *(_QWORD *)(a1[1] + 2952) )
  {
    v80 = sub_186B270(0x50u);
    v81 = *a1;
    *(_DWORD *)(v80 + 8) = 0;
    *(_BYTE *)(v80 + 24) = 1;
    *(_QWORD *)v80 = &off_1C60CE8;
    *(_QWORD *)(v80 + 16) = 0;
    *(_QWORD *)(v80 + 32) = v81;
    sub_24ABB0((__int64 *)(v80 + 40), "dl_rule");
    *(_QWORD *)(v80 + 72) = 0;
    v82 = *(double *)(v80 + 32);
    ++v47[2];
    v83 = sub_186B270(0x58u);
    a5 = v82;
    *(double *)(v83 + 32) = v82;
    *(_QWORD *)(v80 + 72) = v83 + 8;
    *(_QWORD *)(v83 + 24) = 0;
    a4 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v47, (__m128i)*(unsigned __int64 *)&v82);
    *(_DWORD *)(v83 + 40) = 0;
    *(_QWORD *)v83 = 0x100000002LL;
    *(__m128 *)(v83 + 8) = a4;
    sub_629FE0(0, *(__int64 *)&v82);
    v84 = a1[1];
    v85 = sub_1336AB0(*(_QWORD *)(v84 + 2952), v80);
    *(_QWORD *)v153 = v85;
    if ( v85 )
      ++*(_DWORD *)(v85 + 8);
    v86 = *(_DWORD **)(v84 + 2952);
    if ( v86 )
    {
      if ( v86[2]-- == 1 )
      {
        (**(void (__fastcall ***)(_DWORD *))v86)(v86);
        sub_186B220(v86);
      }
    }
    *(_QWORD *)(v84 + 2952) = *(_QWORD *)v153;
  }
  v154 = 0;
  v88 = *a1;
  v169 = (__int64 *)*a1;
  if ( v12 )
  {
    v114 = *(v12 - 1);
    if ( v114 )
    {
      v115 = 0;
      v146 = v170;
      do
      {
        v116 = sub_15DB5C0(v88, v114 - (unsigned int)v115 - 1, *(_QWORD *)&v12[2 * v115]);
        *(_QWORD *)v167 = v116;
        if ( v116 )
          ++*(_DWORD *)(v116 + 8);
        v170[0] = v154;
        sub_62BD60(v170, v167);
        v114 = *(v12 - 1);
        ++v115;
        v88 = *a1;
        v154 = v170[0];
      }
      while ( (unsigned int)v115 < v114 );
    }
  }
  v89 = sub_15DC610(
          v88,
          (int)v47,
          v47[8],
          v154,
          v61,
          (int)v48,
          v131,
          v132,
          v133,
          v134,
          v136,
          (char)&v161,
          v140,
          (int)v142,
          v144,
          v146);
  v145 = v89;
  if ( v89 )
    ++*(_DWORD *)(v89 + 8);
  v137 = *a1;
  v90 = sub_15E1B70(*a1);
  v141 = *a1;
  if ( v90 )
    *(_DWORD *)(v90 + 8) += 2;
  if ( v12 && (v91 = *(v12 - 1), (_DWORD)v91) )
  {
    v92 = sub_15DB6A0(v141, 0, v91, v12, v157, v90, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
    v149 = v92;
    if ( v92 )
      ++*(_DWORD *)(v92 + 8);
    sub_629FE0(v90, v141);
  }
  else
  {
    v149 = v90;
  }
  v93 = sub_64AF30(a1[1]);
  v94 = *a1;
  v95 = a1[1];
  v96 = *(_DWORD *)(*a1 + 712);
  *(_DWORD *)(v94 + 712) = v93;
  v135 = v94;
  if ( (unsigned __int8)sub_64AF30(v95) )
  {
    v100 = sub_15DE060(*a1, v149, v97, v98, v99);
    v147 = v100;
    if ( v100 )
      ++*(_DWORD *)(v100 + 8);
    sub_631ED0(a1, v149, v100, a3, (__int64 *)&qword_18D6CD0, *(double *)a4.m128_u64, a5, a6);
  }
  else
  {
    v147 = 0;
    sub_631ED0(a1, v149, 0, a3, (__int64 *)&qword_18D6CD0, *(double *)a4.m128_u64, a5, a6);
  }
  sub_629F20(v147, v135);
  *(_DWORD *)(v135 + 712) = v96;
  sub_629FE0(v149, v141);
  sub_629F20(v90, v137);
  sub_629F20(v145, v88);
  v170[0] = v154;
  sub_2334C0((__int64 *)&v169);
  sub_1580D10(v143);
  sub_629FE0(*(__int64 *)v163, v164);
  sub_2B4F40(v139);
  if ( v157 )
    sub_186B220(v157 - 1);
  if ( v12 )
    sub_186B220(v12 - 2);
  return v47;
}

