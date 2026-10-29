__int64 __fastcall sub_A112C0(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  _QWORD *v8; // rdx
  unsigned int v9; // ebp
  __int64 **v10; // rcx
  int v11; // eax
  __int64 v12; // rsi
  int v13; // eax
  _QWORD *v14; // r15
  int v15; // r12d
  __int64 v16; // rax
  _QWORD *v17; // rax
  _DWORD *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  _DWORD *v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // eax
  int v25; // esi
  int v26; // ecx
  void *v27; // rdi
  _QWORD *v28; // r15
  __int64 v29; // rax
  size_t v30; // rdi
  __int64 v31; // rax
  int *v32; // r13
  __int64 v33; // rsi
  __int64 v34; // rax
  _QWORD *v35; // rdx
  int *v36; // rsi
  int *i; // rax
  int v38; // ecx
  char v39; // di
  __int64 v40; // rcx
  char v41; // di
  __int64 v42; // rcx
  char v43; // di
  __int64 v44; // rcx
  char v45; // di
  __int64 v46; // rcx
  __int64 v47; // rdx
  int *v48; // rsi
  _QWORD *v49; // rax
  _QWORD *v50; // r8
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  unsigned __int64 v57; // r12
  unsigned int v58; // eax
  __int64 v59; // rdx
  int v60; // eax
  _QWORD *v61; // rdx
  __int64 v62; // rax
  signed int v63; // eax
  unsigned int v65; // r13d
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rdx
  size_t v69; // rdi
  __int64 v70; // rax
  _QWORD *v71; // r13
  __int64 v72; // r8
  __int64 v73; // rdx
  _QWORD *v74; // rax
  _QWORD *v75; // r8
  __int64 v76; // rdi
  __int64 v77; // rdx
  _QWORD *v78; // rax
  void *v79; // rdi
  unsigned int v80; // r12d
  size_t v81; // rsi
  unsigned int *v82; // rax
  __int64 v83; // rcx
  unsigned int v84; // r15d
  size_t v85; // rdi
  __int64 v86; // rax
  __int64 *v87; // rdx
  __int64 *v88; // rsi
  __int64 v89; // r9
  __int64 v90; // rax
  __int64 *v91; // r10
  unsigned __int64 v92; // rdi
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rdi
  __m128i v95; // xmm0
  unsigned __int64 v96; // rdi
  __int64 *v97; // rax
  __int64 v98; // r10
  __int64 *v99; // rax
  size_t v100; // rdi
  __int64 v101; // rax
  int *v102; // r15
  __int64 v103; // rsi
  __int64 v104; // rdx
  int *v105; // rax
  int *v106; // rsi
  int v107; // ecx
  char v108; // di
  __int64 v109; // rcx
  char v110; // di
  __int64 v111; // rcx
  char v112; // di
  __int64 v113; // rcx
  char v114; // di
  __int64 v115; // rcx
  __int64 v116; // rax
  int *v117; // rsi
  __int64 *v118; // rax
  unsigned __int64 v119; // rdi
  __int64 v120; // r11
  size_t v121; // rdi
  __int64 v122; // rax
  int *v123; // r13
  __int64 v124; // rax
  _QWORD *v125; // rdx
  int *v126; // rsi
  int *j; // rax
  int v128; // ecx
  char v129; // di
  __int64 v130; // rcx
  char v131; // di
  __int64 v132; // rcx
  char v133; // di
  __int64 v134; // rcx
  char v135; // di
  __int64 v136; // rcx
  __int64 v137; // rax
  int *v138; // rsi
  _QWORD *v139; // rax
  _QWORD *v140; // rax
  _QWORD *v141; // rax
  _QWORD *v142; // rax
  _QWORD *v143; // rax
  _QWORD *v144; // rax
  char **v145; // rbp
  char **exception; // rbx
  char **v147; // rbp
  char **v148; // rbp
  int v149; // [rsp+0h] [rbp-D8h]
  void *v150; // [rsp+0h] [rbp-D8h]
  void *v151; // [rsp+0h] [rbp-D8h]
  _QWORD *v152; // [rsp+0h] [rbp-D8h]
  __int64 *v153; // [rsp+0h] [rbp-D8h]
  void *v154; // [rsp+0h] [rbp-D8h]
  void *v155; // [rsp+0h] [rbp-D8h]
  _QWORD *v156; // [rsp+0h] [rbp-D8h]
  void *v157; // [rsp+0h] [rbp-D8h]
  void *v158; // [rsp+0h] [rbp-D8h]
  int v159; // [rsp+8h] [rbp-D0h]
  int *v160; // [rsp+8h] [rbp-D0h]
  _DWORD *v161; // [rsp+8h] [rbp-D0h]
  _QWORD *v162; // [rsp+8h] [rbp-D0h]
  int *v163; // [rsp+8h] [rbp-D0h]
  int v164; // [rsp+10h] [rbp-C8h]
  _DWORD *v165; // [rsp+10h] [rbp-C8h]
  unsigned int v166; // [rsp+10h] [rbp-C8h]
  __int64 *v167; // [rsp+10h] [rbp-C8h]
  void *v168; // [rsp+18h] [rbp-C0h]
  unsigned int v169; // [rsp+18h] [rbp-C0h]
  int *v170; // [rsp+18h] [rbp-C0h]
  _DWORD *v171; // [rsp+20h] [rbp-B8h]
  unsigned int v172; // [rsp+28h] [rbp-B0h]
  unsigned int v173; // [rsp+2Ch] [rbp-ACh]
  unsigned int v174; // [rsp+3Ch] [rbp-9Ch] BYREF
  __int64 v175[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v176; // [rsp+60h] [rbp-78h] BYREF
  __int64 v177; // [rsp+68h] [rbp-70h]
  __int64 v178; // [rsp+70h] [rbp-68h] BYREF
  __int64 v179; // [rsp+78h] [rbp-60h]
  __int64 v180; // [rsp+80h] [rbp-58h] BYREF
  __int64 v181; // [rsp+88h] [rbp-50h]
  __int64 v182; // [rsp+90h] [rbp-48h]
  __int64 v183; // [rsp+98h] [rbp-40h]

  v8 = *(_QWORD **)(a1 + 32);
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 - 1);
    v172 = v9;
    if ( v9 == *((_DWORD *)v8 - 2) )
    {
      v80 = (3 * v9 + 1) >> 1;
      v81 = 8 * v80 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v81 || v9 >= v80 )
        goto LABEL_116;
      v82 = (unsigned int *)sub_186B300(v8 - 1, v81);
      v83 = v82[1];
      v8 = v82 + 2;
      *v82 = v80;
      *(_QWORD *)(a1 + 32) = v82 + 2;
      LODWORD(v82) = v83;
      v10 = (__int64 **)&v8[v83];
      v11 = (_DWORD)v82 + 1;
    }
    else
    {
      v10 = (__int64 **)&v8[v9];
      v11 = v9 + 1;
    }
  }
  else
  {
    v9 = 0;
    v139 = (_QWORD *)sub_186B270(0x18u);
    v172 = 0;
    v8 = v139 + 1;
    *v139 = 2;
    v11 = 1;
    *(_QWORD *)(a1 + 32) = v8;
    v10 = (__int64 **)v8;
  }
  *v10 = a2;
  v12 = *a2;
  *((_DWORD *)v8 - 1) = v11;
  v174 = v172;
  v13 = sub_16666A0((int)a1 + 408, v12, (int)v8, (int)v10, a5, a6, v149, v159, v164, v168);
  v14 = *(_QWORD **)(a1 + 648);
  v15 = v13;
  if ( v14 )
  {
    v16 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v16 == *((_DWORD *)v14 - 2) )
    {
      v166 = (unsigned int)(3 * v16 + 1) >> 1;
      v69 = 16 * v166 + 8;
      if ( 16 * (int)v16 + 8 >= (unsigned int)v69 || (unsigned int)v16 >= (unsigned int)(3 * v16 + 1) >> 1 )
        goto LABEL_116;
      v70 = sub_186B270(v69);
      v71 = *(_QWORD **)(a1 + 648);
      v161 = (_DWORD *)v70;
      v14 = (_QWORD *)(v70 + 8);
      if ( v71 )
      {
        v72 = *((unsigned int *)v71 - 1);
        v73 = v70 + 8;
        *(_DWORD *)(v70 + 4) = v72;
        v74 = v71;
        v75 = &v71[2 * v72];
        if ( v71 != v75 )
        {
          do
          {
            v76 = *v74;
            *v74 = 0;
            v74 += 2;
            v73 += 16;
            *(_QWORD *)(v73 - 16) = v76;
            *(_DWORD *)(v73 - 8) = *((_DWORD *)v74 - 2);
            *(_DWORD *)(v73 - 4) = *((_DWORD *)v74 - 1);
          }
          while ( v75 != v74 );
        }
        v77 = *((unsigned int *)v71 - 1);
        v78 = &v71[2 * v77];
        if ( (_DWORD)v77 )
        {
          do
          {
            while ( *v71 )
            {
              v79 = (void *)(*v71 - 8LL);
              v152 = v78;
              v71 += 2;
              sub_186B220(v79);
              v78 = v152;
              if ( v152 == v71 )
                goto LABEL_51;
            }
            v71 += 2;
          }
          while ( v71 != v78 );
LABEL_51:
          v71 = *(_QWORD **)(a1 + 648);
        }
        sub_186B220(v71 - 1);
        v17 = &v14[2 * (unsigned int)v161[1]];
      }
      else
      {
        *(_DWORD *)(v70 + 4) = 0;
        v17 = (_QWORD *)(v70 + 8);
      }
      *(_QWORD *)(a1 + 648) = v14;
      *v161 = v166;
    }
    else
    {
      v17 = &v14[2 * v16];
    }
  }
  else
  {
    v140 = (_QWORD *)sub_186B270(0x28u);
    v14 = v140 + 1;
    *v140 = 2;
    *(_QWORD *)(a1 + 648) = v140 + 1;
    v17 = v140 + 1;
  }
  *v17 = 0;
  v17[1] = 0xFFFFFFFF00000000LL;
  v18 = *(_DWORD **)(a1 + 656);
  ++*((_DWORD *)v14 - 1);
  if ( v18 )
  {
    v19 = *(v18 - 1);
    if ( v19 != *(v18 - 2) )
    {
      v20 = v19;
      v21 = v19 + 1;
      v22 = &v18[v20];
      goto LABEL_10;
    }
    v65 = (3 * v19 + 1) >> 1;
    v66 = 4 * v65 + 8;
    if ( 4 * v19 + 8 < (unsigned int)v66 && v19 < v65 )
    {
      v67 = (unsigned int *)sub_186B300(v18 - 2, v66);
      v68 = v67[1];
      v18 = v67 + 2;
      *v67 = v65;
      *(_QWORD *)(a1 + 656) = v67 + 2;
      LODWORD(v67) = v68;
      v22 = &v18[v68];
      v21 = (_DWORD)v67 + 1;
      goto LABEL_10;
    }
LABEL_116:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_98B3B0(&v176, "Overflow encountered when expanding vector");
    goto LABEL_117;
  }
  v141 = (_QWORD *)sub_186B270(0x10u);
  v18 = v141 + 1;
  *v141 = 2;
  v21 = 1;
  *(_QWORD *)(a1 + 656) = v18;
  v22 = v18;
LABEL_10:
  *v22 = v15 << 30;
  v23 = *(_QWORD *)(a1 + 400);
  *(v18 - 1) = v21;
  if ( *(_BYTE *)(v23 + 48) )
  {
    v24 = 214013 * *(_DWORD *)(a1 + 1016);
    v25 = *(_DWORD *)(v23 + 52);
    v26 = *(_DWORD *)(v23 + 56);
    HIDWORD(v176) = 0;
    v177 = 0;
    v24 += 2531011;
    v27 = qword_1C7F2C0;
    v178 = 1;
    *(_DWORD *)(a1 + 1016) = v24;
    v179 = 0;
    LODWORD(v176) = v25 + (int)(HIWORD(v24) & 0x7FFF) % (v26 - v25);
    sub_182CBA0(v27, &v178);
    v28 = *(_QWORD **)(a1 + 664);
    BYTE4(v178) &= ~1u;
    LODWORD(v178) = 1;
    v180 = 0;
    v181 = 0;
    v182 = 1;
    v183 = 0;
    if ( v28 )
    {
      v29 = *((unsigned int *)v28 - 1);
      if ( (_DWORD)v29 == *((_DWORD *)v28 - 2) )
      {
        v169 = (unsigned int)(3 * v29 + 1) >> 1;
        v30 = (v169 << 6) + 8;
        if ( ((_DWORD)v29 << 6) + 8 >= (unsigned int)v30 || (unsigned int)v29 >= (unsigned int)(3 * v29 + 1) >> 1 )
        {
          v145 = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v175, "Overflow encountered when expanding vector");
          *v145 = (char *)off_1C63128;
          sub_2333C0(v145 + 1, v175);
          sub_233E40((__int64)v175);
          __cxa_throw(v145, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = sub_186B270(v30);
        v32 = *(int **)(a1 + 664);
        v165 = (_DWORD *)v31;
        v33 = v31;
        v28 = (_QWORD *)(v31 + 8);
        if ( v32 )
        {
          v34 = (unsigned int)*(v32 - 1);
          v35 = v28;
          *(_DWORD *)(v33 + 4) = v34;
          v36 = &v32[16 * v34];
          for ( i = v32; i != v36; *(v35 - 1) = v46 )
          {
            v38 = *i;
            v39 = *((_BYTE *)i + 4);
            i += 16;
            v35 += 8;
            *((_DWORD *)v35 - 16) = v38;
            *((_BYTE *)v35 - 60) = v39 & 3 | *((_BYTE *)v35 - 60) & 0xFC;
            v40 = *((_QWORD *)i - 7);
            *((_QWORD *)i - 7) = 0;
            *(v35 - 7) = v40;
            v41 = *((_BYTE *)i - 44);
            *((_DWORD *)v35 - 12) = *(i - 12);
            *((_BYTE *)v35 - 44) = v41 & 3 | *((_BYTE *)v35 - 44) & 0xFC;
            v42 = *((_QWORD *)i - 5);
            *((_QWORD *)i - 5) = 0;
            *(v35 - 5) = v42;
            v43 = *((_BYTE *)i - 28);
            *((_DWORD *)v35 - 8) = *(i - 8);
            *((_BYTE *)v35 - 28) = v43 & 3 | *((_BYTE *)v35 - 28) & 0xFC;
            v44 = *((_QWORD *)i - 3);
            *((_QWORD *)i - 3) = 0;
            *(v35 - 3) = v44;
            v45 = *((_BYTE *)i - 12);
            *((_DWORD *)v35 - 4) = *(i - 4);
            *((_BYTE *)v35 - 12) = v45 & 3 | *((_BYTE *)v35 - 12) & 0xFC;
            v46 = *((_QWORD *)i - 1);
            *((_QWORD *)i - 1) = 0;
          }
          v47 = (unsigned int)*(v32 - 1);
          v160 = &v32[16 * v47];
          if ( (_DWORD)v47 )
          {
            do
            {
              v150 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v32 + 8);
              sub_182CBA0(v150, v32 + 12);
              v151 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v32);
              v48 = v32 + 4;
              v32 += 16;
              sub_182CBA0(v151, v48);
            }
            while ( v160 != v32 );
            v32 = *(int **)(a1 + 664);
          }
          sub_186B220(v32 - 2);
LABEL_22:
          v49 = &v28[8 * (unsigned __int64)(unsigned int)v165[1]];
LABEL_23:
          *(_QWORD *)(a1 + 664) = v28;
          *v165 = v169;
          goto LABEL_27;
        }
        goto LABEL_109;
      }
LABEL_26:
      v49 = &v28[8 * v29];
      goto LABEL_27;
    }
    v144 = (_QWORD *)sub_186B270(0x88u);
  }
  else
  {
    v176 = 0;
    v28 = *(_QWORD **)(a1 + 664);
    v177 = 0;
    v178 = 1;
    v179 = 0;
    v180 = 0;
    v181 = 0;
    v182 = 1;
    v183 = 0;
    if ( v28 )
    {
      v29 = *((unsigned int *)v28 - 1);
      if ( (_DWORD)v29 == *((_DWORD *)v28 - 2) )
      {
        v169 = (unsigned int)(3 * v29 + 1) >> 1;
        v121 = (v169 << 6) + 8;
        if ( ((_DWORD)v29 << 6) + 8 >= (unsigned int)v121 || (unsigned int)v29 >= (unsigned int)(3 * v29 + 1) >> 1 )
        {
          v147 = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v175, "Overflow encountered when expanding vector");
          *v147 = (char *)off_1C63128;
          sub_2333C0(v147 + 1, v175);
          sub_233E40((__int64)v175);
          __cxa_throw(v147, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v122 = sub_186B270(v121);
        v123 = *(int **)(a1 + 664);
        v165 = (_DWORD *)v122;
        v33 = v122;
        v28 = (_QWORD *)(v122 + 8);
        if ( v123 )
        {
          v124 = (unsigned int)*(v123 - 1);
          v125 = v28;
          *(_DWORD *)(v33 + 4) = v124;
          v126 = &v123[16 * v124];
          for ( j = v123; v126 != j; *(v125 - 1) = v136 )
          {
            v128 = *j;
            v129 = *((_BYTE *)j + 4);
            j += 16;
            v125 += 8;
            *((_DWORD *)v125 - 16) = v128;
            *((_BYTE *)v125 - 60) = v129 & 3 | *((_BYTE *)v125 - 60) & 0xFC;
            v130 = *((_QWORD *)j - 7);
            *((_QWORD *)j - 7) = 0;
            *(v125 - 7) = v130;
            v131 = *((_BYTE *)j - 44);
            *((_DWORD *)v125 - 12) = *(j - 12);
            *((_BYTE *)v125 - 44) = v131 & 3 | *((_BYTE *)v125 - 44) & 0xFC;
            v132 = *((_QWORD *)j - 5);
            *((_QWORD *)j - 5) = 0;
            *(v125 - 5) = v132;
            v133 = *((_BYTE *)j - 28);
            *((_DWORD *)v125 - 8) = *(j - 8);
            *((_BYTE *)v125 - 28) = v133 & 3 | *((_BYTE *)v125 - 28) & 0xFC;
            v134 = *((_QWORD *)j - 3);
            *((_QWORD *)j - 3) = 0;
            *(v125 - 3) = v134;
            v135 = *((_BYTE *)j - 12);
            *((_DWORD *)v125 - 4) = *(j - 4);
            *((_BYTE *)v125 - 12) = v135 & 3 | *((_BYTE *)v125 - 12) & 0xFC;
            v136 = *((_QWORD *)j - 1);
            *((_QWORD *)j - 1) = 0;
          }
          v137 = (unsigned int)*(v123 - 1);
          if ( (_DWORD)v137 )
          {
            v163 = &v123[16 * v137];
            do
            {
              v157 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v123 + 8);
              sub_182CBA0(v157, v123 + 12);
              v158 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v123);
              v138 = v123 + 4;
              v123 += 16;
              sub_182CBA0(v158, v138);
            }
            while ( v123 != v163 );
            v123 = *(int **)(a1 + 664);
          }
          sub_186B220(v123 - 2);
          goto LABEL_22;
        }
LABEL_109:
        *(_DWORD *)(v33 + 4) = 0;
        v49 = v28;
        goto LABEL_23;
      }
      goto LABEL_26;
    }
    v144 = (_QWORD *)sub_186B270(0x88u);
  }
  v28 = v144 + 1;
  *v144 = 2;
  *(_QWORD *)(a1 + 664) = v144 + 1;
  v49 = v144 + 1;
LABEL_27:
  *(_DWORD *)v49 = v176;
  *((_BYTE *)v49 + 4) = BYTE4(v176) & 3 | *((_BYTE *)v49 + 4) & 0xFC;
  v49[1] = v177;
  v177 = 0;
  *((_DWORD *)v49 + 4) = v178;
  *((_BYTE *)v49 + 20) = BYTE4(v178) & 3 | *((_BYTE *)v49 + 20) & 0xFC;
  v49[3] = v179;
  v179 = 0;
  *((_DWORD *)v49 + 8) = v180;
  *((_BYTE *)v49 + 36) = BYTE4(v180) & 3 | *((_BYTE *)v49 + 36) & 0xFC;
  v49[5] = v181;
  v181 = 0;
  *((_DWORD *)v49 + 12) = v182;
  *((_BYTE *)v49 + 52) = BYTE4(v182) & 3 | *((_BYTE *)v49 + 52) & 0xFC;
  v49[7] = v183;
  v183 = 0;
  ++*((_DWORD *)v28 - 1);
  sub_25A130((char *)&v180);
  sub_25A130((char *)&v176);
  v50 = *(_QWORD **)(a1 + 672);
  v176 = 0;
  v177 = 0;
  v178 = 1;
  v179 = 0;
  v180 = 0;
  v181 = 0;
  v182 = 1;
  v183 = 0;
  if ( v50 )
  {
    v51 = *((unsigned int *)v50 - 1);
    if ( (_DWORD)v51 == *((_DWORD *)v50 - 2) )
    {
      v173 = (unsigned int)(3 * v51 + 1) >> 1;
      v100 = (v173 << 6) + 8;
      if ( ((_DWORD)v51 << 6) + 8 >= (unsigned int)v100 || (unsigned int)v51 >= (unsigned int)(3 * v51 + 1) >> 1 )
      {
        v148 = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v175, "Overflow encountered when expanding vector");
        *v148 = (char *)off_1C63128;
        sub_2333C0(v148 + 1, v175);
        sub_233E40((__int64)v175);
        __cxa_throw(v148, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v101 = sub_186B270(v100);
      v102 = *(int **)(a1 + 672);
      v171 = (_DWORD *)v101;
      v50 = (_QWORD *)(v101 + 8);
      if ( v102 )
      {
        v103 = (unsigned int)*(v102 - 1);
        v104 = v101 + 8;
        *(_DWORD *)(v101 + 4) = v103;
        v105 = v102;
        v106 = &v102[16 * v103];
        if ( v102 != v106 )
        {
          do
          {
            v107 = *v105;
            v108 = *((_BYTE *)v105 + 4);
            v105 += 16;
            v104 += 64;
            *(_DWORD *)(v104 - 64) = v107;
            *(_BYTE *)(v104 - 60) = v108 & 3 | *(_BYTE *)(v104 - 60) & 0xFC;
            v109 = *((_QWORD *)v105 - 7);
            *((_QWORD *)v105 - 7) = 0;
            *(_QWORD *)(v104 - 56) = v109;
            v110 = *((_BYTE *)v105 - 44);
            *(_DWORD *)(v104 - 48) = *(v105 - 12);
            *(_BYTE *)(v104 - 44) = v110 & 3 | *(_BYTE *)(v104 - 44) & 0xFC;
            v111 = *((_QWORD *)v105 - 5);
            *((_QWORD *)v105 - 5) = 0;
            *(_QWORD *)(v104 - 40) = v111;
            v112 = *((_BYTE *)v105 - 28);
            *(_DWORD *)(v104 - 32) = *(v105 - 8);
            *(_BYTE *)(v104 - 28) = v112 & 3 | *(_BYTE *)(v104 - 28) & 0xFC;
            v113 = *((_QWORD *)v105 - 3);
            *((_QWORD *)v105 - 3) = 0;
            *(_QWORD *)(v104 - 24) = v113;
            v114 = *((_BYTE *)v105 - 12);
            *(_DWORD *)(v104 - 16) = *(v105 - 4);
            *(_BYTE *)(v104 - 12) = v114 & 3 | *(_BYTE *)(v104 - 12) & 0xFC;
            v115 = *((_QWORD *)v105 - 1);
            *((_QWORD *)v105 - 1) = 0;
            *(_QWORD *)(v104 - 8) = v115;
          }
          while ( v106 != v105 );
        }
        v116 = (unsigned int)*(v102 - 1);
        if ( (_DWORD)v116 )
        {
          v170 = &v102[16 * v116];
          do
          {
            v162 = v50;
            v154 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v102 + 8);
            sub_182CBA0(v154, v102 + 12);
            v155 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v102);
            v117 = v102 + 4;
            v102 += 16;
            sub_182CBA0(v155, v117);
            v50 = v162;
          }
          while ( v170 != v102 );
          v102 = *(int **)(a1 + 672);
        }
        v156 = v50;
        sub_186B220(v102 - 2);
        v50 = v156;
        v52 = &v156[8 * (unsigned __int64)(unsigned int)v171[1]];
      }
      else
      {
        *(_DWORD *)(v101 + 4) = 0;
        v52 = (_QWORD *)(v101 + 8);
      }
      *(_QWORD *)(a1 + 672) = v50;
      *v171 = v173;
    }
    else
    {
      v52 = &v50[8 * v51];
    }
  }
  else
  {
    v143 = (_QWORD *)sub_186B270(0x88u);
    v50 = v143 + 1;
    *v143 = 2;
    *(_QWORD *)(a1 + 672) = v143 + 1;
    v52 = v143 + 1;
  }
  *(_DWORD *)v52 = v176;
  *((_BYTE *)v52 + 4) = BYTE4(v176) & 3 | *((_BYTE *)v52 + 4) & 0xFC;
  v53 = v177;
  v177 = 0;
  v52[1] = v53;
  *((_DWORD *)v52 + 4) = v178;
  *((_BYTE *)v52 + 20) = BYTE4(v178) & 3 | *((_BYTE *)v52 + 20) & 0xFC;
  v54 = v179;
  v179 = 0;
  v52[3] = v54;
  *((_DWORD *)v52 + 8) = v180;
  *((_BYTE *)v52 + 36) = BYTE4(v180) & 3 | *((_BYTE *)v52 + 36) & 0xFC;
  v55 = v181;
  v181 = 0;
  v52[5] = v55;
  *((_DWORD *)v52 + 12) = v182;
  *((_BYTE *)v52 + 52) = BYTE4(v182) & 3 | *((_BYTE *)v52 + 52) & 0xFC;
  v56 = v183;
  v183 = 0;
  v52[7] = v56;
  ++*((_DWORD *)v50 - 1);
  sub_25A130((char *)&v180);
  sub_25A130((char *)&v176);
  v57 = *(_QWORD *)(a1 + 696);
  if ( !v57 )
  {
    v142 = (_QWORD *)sub_186B270(0x18u);
    v57 = (unsigned __int64)(v142 + 1);
    *v142 = 2;
    v60 = 1;
    *(_QWORD *)(a1 + 696) = v57;
    v61 = (_QWORD *)v57;
    goto LABEL_33;
  }
  v58 = *(_DWORD *)(v57 - 4);
  if ( v58 != *(_DWORD *)(v57 - 8) )
  {
    v59 = v58;
    v60 = v58 + 1;
    v61 = (_QWORD *)(v57 + 8 * v59);
    goto LABEL_33;
  }
  v84 = (3 * v58 + 1) >> 1;
  v85 = 8 * v84 + 8;
  if ( 8 * v58 + 8 >= (unsigned int)v85 || v58 >= v84 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_98B3B0(&v176, "Overflow encountered when expanding vector");
LABEL_117:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v176);
    sub_233E40((__int64)&v176);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v86 = sub_186B270(v85);
  v87 = *(__int64 **)(a1 + 696);
  v88 = (__int64 *)v86;
  v57 = v86 + 8;
  if ( v87 )
  {
    v89 = *((unsigned int *)v87 - 1);
    *(_DWORD *)(v86 + 4) = v89;
    v90 = 8 * v89;
    v91 = &v87[v89];
    if ( v91 != v87 )
    {
      v92 = v90 - 8;
      if ( (unsigned __int64)(v90 - 8) <= 8 || v87 < v88 + 3 && v57 < (unsigned __int64)(v87 + 2) )
      {
        v118 = v87;
        v119 = v57;
        do
        {
          v120 = *v118;
          *v118++ = 0;
          v119 += 8LL;
          *(_QWORD *)(v119 - 8) = v120;
        }
        while ( v118 != v91 );
      }
      else
      {
        v93 = 0;
        v94 = (v92 >> 3) + 1;
        do
        {
          v95 = _mm_loadu_si128((const __m128i *)&v87[v93]);
          *(_OWORD *)&v87[v93] = 0;
          *(__m128i *)&v88[v93 + 1] = v95;
          v93 += 2LL;
        }
        while ( 2 * (v94 >> 1) != v93 );
        if ( (v94 & 1) != 0 )
        {
          v96 = v94 & 0xFFFFFFFFFFFFFFFELL;
          v97 = &v87[v96];
          v98 = *v97;
          *v97 = 0;
          *(_QWORD *)(v57 + 8 * v96) = v98;
        }
      }
    }
    v99 = &v87[v89];
    if ( (_DWORD)v89 )
    {
      do
      {
        while ( *v87 )
        {
          v167 = v99;
          v153 = v87;
          sub_186B220((void *)(*v87 - 8));
          v99 = v167;
          v87 = v153 + 1;
          if ( v167 == v153 + 1 )
            goto LABEL_73;
        }
        ++v87;
      }
      while ( v87 != v99 );
LABEL_73:
      v87 = *(__int64 **)(a1 + 696);
    }
    sub_186B220(v87 - 1);
    v61 = (_QWORD *)(v57 + 8LL * *((unsigned int *)v88 + 1));
    v60 = *((_DWORD *)v88 + 1) + 1;
  }
  else
  {
    *(_DWORD *)(v86 + 4) = 0;
    v61 = (_QWORD *)(v86 + 8);
    v60 = 1;
  }
  *(_QWORD *)(a1 + 696) = v57;
  *(_DWORD *)v88 = v84;
LABEL_33:
  *v61 = 0;
  *(_DWORD *)(v57 - 4) = v60;
  LODWORD(v176) = 0;
  sub_98D1A0((_QWORD *)(a1 + 704), (unsigned int *)&v176);
  LODWORD(v176) = -1;
  sub_98D060((_QWORD *)(a1 + 720), (unsigned int *)&v176);
  v176 = 0;
  sub_98CF00((_QWORD *)(a1 + 680), &v176);
  v176 = 0;
  sub_98CF00((_QWORD *)(a1 + 688), &v176);
  v62 = *(_QWORD *)(a1 + 872);
  if ( v62 )
    v63 = *(_DWORD *)(v62 - 4);
  else
    v63 = 0;
  if ( (int)v172 >= v63 )
    sub_8C3430((_QWORD *)(a1 + 872), v172 + 1, 0);
  sub_9CB4A0(a1 + 912, v9);
  sub_9CB4A0(a1 + 880, v9);
  sub_9CB4A0(a1 + 936, v9);
  if ( (unsigned __int8)sub_98ADE0(*a2) )
    sub_98D100((_QWORD *)(a1 + 760), &v174);
  sub_B66EF0(*(_QWORD *)(a1 + 16), a2, a1, v172);
  return v172;
}

