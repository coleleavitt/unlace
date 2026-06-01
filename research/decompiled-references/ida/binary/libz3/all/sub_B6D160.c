__int64 __fastcall sub_B6D160(__int64 a1, unsigned int *a2, double a3, __m128 a4, __m128 a5)
{
  char **v5; // r12
  __int64 v6; // rdx
  char **v7; // r12
  __int64 v8; // rdx
  char **v9; // r12
  __int64 v10; // rdx
  char **v11; // r12
  __int64 v12; // rdx
  char **exception; // r12
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // r15
  int v19; // ebx
  int v20; // eax
  int v21; // r8d
  int v22; // r9d
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  unsigned int v25; // eax
  unsigned int v26; // r15d
  _QWORD *v27; // r13
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned int v31; // eax
  unsigned int v32; // r8d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // r15
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  _QWORD *v47; // r13
  unsigned int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  _QWORD *v51; // rcx
  __int64 v52; // rdx
  __m128i *v53; // r13
  unsigned int v54; // ecx
  __int64 v55; // r9
  __m128i *v56; // r14
  __m128i v57; // xmm0
  int v58; // esi
  __int64 v59; // rcx
  __m128i *v60; // rdi
  __m128i *v61; // rax
  __m128i *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rax
  _QWORD *v65; // rcx
  __int64 v66; // r14
  unsigned int v67; // eax
  unsigned int v68; // r13d
  unsigned int v69; // edx
  size_t v70; // rsi
  unsigned int v71; // r15d
  unsigned int *v72; // rax
  unsigned int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // r15
  _QWORD *v76; // rdx
  unsigned int v77; // eax
  __int64 v78; // rcx
  int v79; // eax
  _QWORD *v80; // rcx
  _QWORD *v81; // rdx
  unsigned int v82; // eax
  __int64 v83; // rcx
  int v84; // eax
  _QWORD *v85; // rcx
  unsigned int v86; // eax
  __int64 v87; // rdx
  unsigned int v88; // r14d
  __int64 v89; // rsi
  char v90; // al
  __int64 *v91; // r15
  unsigned __int64 v92; // r12
  __int64 v93; // rsi
  unsigned int v95; // r14d
  size_t v96; // rsi
  unsigned int *v97; // rax
  __int64 v98; // rcx
  unsigned int v99; // r13d
  size_t v100; // rsi
  unsigned int *v101; // rax
  __int64 v102; // rcx
  unsigned int v103; // r13d
  size_t v104; // rsi
  unsigned int *v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rax
  int v108; // r11d
  __m128i *v109; // rdx
  __m128i *v110; // rax
  const __m128i *v111; // r15
  __m128i *v112; // r8
  __int64 v113; // rdx
  __m128i *v114; // rsi
  unsigned int *v115; // rdi
  __m128i *v116; // rdx
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  _QWORD *v119; // rax
  _QWORD *v120; // rax
  int v121; // [rsp-8h] [rbp-108h]
  int v122; // [rsp+0h] [rbp-100h]
  int v123; // [rsp+0h] [rbp-100h]
  int v124; // [rsp+0h] [rbp-100h]
  int v125; // [rsp+8h] [rbp-F8h]
  int v126; // [rsp+8h] [rbp-F8h]
  int v127; // [rsp+8h] [rbp-F8h]
  int v128; // [rsp+10h] [rbp-F0h]
  int v129; // [rsp+10h] [rbp-F0h]
  int v130; // [rsp+10h] [rbp-F0h]
  int v131; // [rsp+18h] [rbp-E8h]
  int v132; // [rsp+18h] [rbp-E8h]
  __int64 v133; // [rsp+18h] [rbp-E8h]
  int v134; // [rsp+18h] [rbp-E8h]
  int v135; // [rsp+20h] [rbp-E0h]
  int v136; // [rsp+20h] [rbp-E0h]
  __int64 v137; // [rsp+20h] [rbp-E0h]
  int v138; // [rsp+20h] [rbp-E0h]
  size_t v139; // [rsp+20h] [rbp-E0h]
  int v140; // [rsp+28h] [rbp-D8h]
  char v141; // [rsp+28h] [rbp-D8h]
  __int64 v142; // [rsp+28h] [rbp-D8h]
  __int64 v143; // [rsp+28h] [rbp-D8h]
  int v144; // [rsp+30h] [rbp-D0h]
  __int64 v145; // [rsp+30h] [rbp-D0h]
  __int64 v146; // [rsp+30h] [rbp-D0h]
  int v147; // [rsp+38h] [rbp-C8h]
  __int64 *v148; // [rsp+38h] [rbp-C8h]
  int v149; // [rsp+40h] [rbp-C0h]
  int v150; // [rsp+40h] [rbp-C0h]
  unsigned int v151; // [rsp+40h] [rbp-C0h]
  _QWORD *v152; // [rsp+40h] [rbp-C0h]
  size_t v153; // [rsp+40h] [rbp-C0h]
  unsigned int v154; // [rsp+40h] [rbp-C0h]
  int v155; // [rsp+48h] [rbp-B8h]
  void *v156; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v157; // [rsp+48h] [rbp-B8h]
  int v158; // [rsp+50h] [rbp-B0h]
  __int64 v159; // [rsp+50h] [rbp-B0h]
  int v160; // [rsp+58h] [rbp-A8h]
  __int64 v161; // [rsp+58h] [rbp-A8h]
  int v162; // [rsp+60h] [rbp-A0h]
  unsigned int v163; // [rsp+60h] [rbp-A0h]
  unsigned int *v164; // [rsp+60h] [rbp-A0h]
  int v165; // [rsp+68h] [rbp-98h]
  unsigned int *v166; // [rsp+68h] [rbp-98h]
  int v167; // [rsp+70h] [rbp-90h]
  unsigned int v168; // [rsp+70h] [rbp-90h]
  __int64 v169; // [rsp+70h] [rbp-90h]
  unsigned int *v170; // [rsp+78h] [rbp-88h]
  unsigned int v171; // [rsp+78h] [rbp-88h]
  int v172; // [rsp+78h] [rbp-88h]
  int v173; // [rsp+78h] [rbp-88h]
  unsigned int v174; // [rsp+78h] [rbp-88h]
  __int64 v175; // [rsp+80h] [rbp-80h] BYREF
  int v176[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v177; // [rsp+90h] [rbp-70h]
  __int64 v178; // [rsp+98h] [rbp-68h]
  int v179; // [rsp+A0h] [rbp-60h] BYREF
  int v180[2]; // [rsp+A8h] [rbp-58h]
  int v181[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v182; // [rsp+B8h] [rbp-48h]

  result = *(_QWORD *)(a1 + 8656);
  if ( result )
  {
    v17 = *a2;
    if ( (unsigned int)v17 < *(_DWORD *)(result - 4) )
    {
      if ( *(_QWORD *)(result + 8 * v17) )
        return result;
    }
  }
  v18 = *(_QWORD *)(a1 + 104);
  v19 = sub_15D1F10(a2);
  sub_180C5A0(v181, "lambda");
  v20 = sub_15E3D10(
          v18,
          (int)v181,
          (int)&qword_18D6CD0,
          0,
          0,
          v19,
          1,
          v121,
          v122,
          v125,
          v128,
          v131,
          v135,
          v140,
          v18,
          (int)v181,
          v149,
          v155,
          v158,
          v160,
          v162,
          v165,
          v167,
          (int)a2,
          v175,
          v176[0],
          v177,
          v178,
          v179,
          *(void **)v180,
          v181[0],
          v182);
  v166 = (unsigned int *)sub_15DC610(
                           v18,
                           v20,
                           0,
                           0,
                           v21,
                           v22,
                           v123,
                           v126,
                           v129,
                           v132,
                           v136,
                           v141,
                           v144,
                           v147,
                           v150,
                           v156);
  v161 = *(_QWORD *)(a1 + 104);
  v177 = v161;
  if ( v166 )
    v166[2] += 2;
  v23 = (_QWORD *)sub_186B270(0x18u);
  v24 = v23 + 1;
  v23[1] = v166;
  *v23 = 0x100000002LL;
  v25 = v170[5];
  v163 = v25;
  if ( v25 )
  {
    v26 = v25 - 1;
    v27 = v170 + 20;
    do
    {
      v29 = sub_15DB5C0(*(_QWORD *)(a1 + 104), v26, *v27);
      v30 = v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      v31 = *((_DWORD *)v24 - 1);
      if ( v31 == *((_DWORD *)v24 - 2) )
      {
        v32 = (3 * v31 + 1) >> 1;
        v33 = 8 * v32 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v33 || v31 >= v32 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142(v148, "Overflow encountered when expanding vector", v14);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v148);
          sub_233E40((__int64)v148);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v168 = (3 * v31 + 1) >> 1;
        v34 = (unsigned int *)sub_186B300(v24 - 1, v33);
        v24 = v34 + 2;
        *v34 = v168;
        v31 = v34[1];
      }
      ++v27;
      v24[v31] = v30;
      *((_DWORD *)v24 - 1) = v31 + 1;
    }
    while ( v26-- != 0 );
  }
  sub_1684300(&v179, *(_QWORD *)(a1 + 104));
  v35 = sub_15DCAD0(v180[0], (int)v24, 0);
  v169 = v35;
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  v36 = sub_15E1B70(*(_QWORD *)(a1 + 104));
  v159 = v36;
  if ( v36 )
    ++*(_DWORD *)(v36 + 8);
  v37 = *(_QWORD *)(a1 + 104);
  v142 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)v176 = v169;
  v175 = sub_15E1EC0(v37, 1, (int)v176);
  v38 = sub_15DB6A0(
          *(_QWORD *)(a1 + 104),
          0,
          v163,
          v170 + 20,
          &v170[2 * v170[5] + 20],
          v159,
          0,
          *(_QWORD *)(a1 + 104) + 936LL,
          &qword_18D6CD0,
          1,
          &v175,
          0,
          0);
  v164 = (unsigned int *)v38;
  if ( v38 )
    ++*(_DWORD *)(v38 + 8);
  sub_B68180(a1, v38, 1, v39, v40, v41, v124, v127, v130, v133, v137, v142, v145);
  v42 = *(_QWORD *)(a1 + 8656);
  if ( !v42 || (v43 = *v166, (unsigned int)v43 >= *(_DWORD *)(v42 - 4)) || !*(_QWORD *)(v42 + 8 * v43) )
  {
    sub_B6D040((_QWORD *)a1, (__int64)v166, a3, a4, a5);
    v42 = *(_QWORD *)(a1 + 8656);
    v43 = *v166;
  }
  v44 = *(_QWORD *)(v42 + 8 * v43);
  v157 = v44;
  v45 = (_QWORD *)sub_180C100(a1 + 8400, 24);
  v46 = *(_QWORD **)(a1 + 9456);
  v47 = v45;
  *v45 = off_1C57558;
  v45[1] = a1 + 9528;
  v45[2] = v44;
  if ( v46 )
  {
    v48 = *((_DWORD *)v46 - 1);
    if ( v48 == *((_DWORD *)v46 - 2) )
    {
      v95 = (3 * v48 + 1) >> 1;
      v96 = 8 * v95 + 8;
      if ( 8 * v48 + 8 >= (unsigned int)v96 || v48 >= v95 )
      {
        v9 = (char **)__cxa_allocate_exception(0x28u);
        sub_14E142(v148, "Overflow encountered when expanding vector", v10);
        *v9 = (char *)off_1C63128;
        sub_2333C0(v9 + 1, v148);
        sub_233E40((__int64)v148);
        __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v97 = (unsigned int *)sub_186B300(v46 - 1, v96);
      v98 = v97[1];
      v46 = v97 + 2;
      *v97 = v95;
      *(_QWORD *)(a1 + 9456) = v97 + 2;
      LODWORD(v97) = v98;
      v51 = &v46[v98];
      v50 = (_DWORD)v97 + 1;
    }
    else
    {
      v49 = v48;
      v50 = v48 + 1;
      v51 = &v46[v49];
    }
  }
  else
  {
    v119 = (_QWORD *)sub_186B270(0x18u);
    v46 = v119 + 1;
    *v119 = 2;
    v50 = 1;
    *(_QWORD *)(a1 + 9456) = v46;
    v51 = v46;
  }
  *v51 = v47;
  *((_DWORD *)v46 - 1) = v50;
  v52 = *(unsigned int *)(a1 + 9536);
  if ( 3 * (int)v52 < (unsigned int)(4 * (*(_DWORD *)(a1 + 9540) + *(_DWORD *)(a1 + 9544))) )
  {
    v138 = 2 * v52;
    v153 = 16LL * (unsigned int)(2 * v52);
    v107 = sub_186B270(v153);
    v55 = v153;
    v108 = v138;
    v53 = (__m128i *)v107;
    v109 = (__m128i *)v107;
    v110 = (__m128i *)(v153 + v107);
    if ( v138 )
    {
      if ( (((_BYTE)v110 - (_BYTE)v53) & 0x10) == 0 || (v109 = v53 + 1, *v53 = 0, v110 != &v53[1]) )
      {
        do
        {
          *v109 = 0;
          v109 += 2;
          v109[-1] = 0;
        }
        while ( v110 != v109 );
      }
    }
    v111 = *(const __m128i **)(a1 + 9528);
    v54 = v138 - 1;
    v56 = v110;
    v112 = (__m128i *)&v111[*(unsigned int *)(a1 + 9536)];
    if ( v111 != v112 )
    {
      do
      {
        if ( v111->m128i_i64[0] > 1uLL )
        {
          v113 = 16LL * (*(_DWORD *)(*(_QWORD *)v111->m128i_i64[0] + 12LL) & v54);
          v114 = &v53[(unsigned __int64)v113 / 0x10];
          if ( v153 == v113 )
          {
LABEL_105:
            if ( v53 == v114 )
            {
LABEL_117:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v115 = v170;
            v116 = v53;
            while ( v116->m128i_i64[0] )
            {
              if ( v114 == ++v116 )
                goto LABEL_117;
            }
          }
          else
          {
            v115 = v170;
            v116 = &v53[(unsigned __int64)v113 / 0x10];
            while ( v116->m128i_i64[0] )
            {
              if ( v110 == ++v116 )
                goto LABEL_105;
            }
          }
          v170 = v115;
          *v116 = _mm_loadu_si128(v111);
        }
        ++v111;
      }
      while ( v112 != v111 );
      v112 = *(__m128i **)(a1 + 9528);
    }
    if ( v112 )
    {
      v134 = v138;
      v139 = v153;
      v154 = v108 - 1;
      sub_186B220(v112);
      v108 = v134;
      v55 = v139;
      v54 = v154;
    }
    *(_QWORD *)(a1 + 9528) = v53;
    *(_DWORD *)(a1 + 9536) = v108;
    *(_DWORD *)(a1 + 9544) = 0;
  }
  else
  {
    v53 = *(__m128i **)(a1 + 9528);
    v54 = v52 - 1;
    v55 = 16 * v52;
    v56 = &v53[v52];
  }
  v57 = _mm_unpacklo_epi64((__m128i)v157, (__m128i)(unsigned __int64)v170);
  v58 = *(_DWORD *)(*(_QWORD *)v157 + 12LL);
  v59 = 16LL * (v58 & v54);
  v60 = &v53[(unsigned __int64)v59 / 0x10];
  if ( v59 == v55 )
  {
    v62 = nullptr;
LABEL_38:
    if ( v60 == v53 )
    {
LABEL_46:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v64 = v53->m128i_i64[0];
        if ( v53->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(*(_QWORD *)v64 + 12LL) == v58 && v157 == v64 )
        {
          *v53 = v57;
          goto LABEL_47;
        }
        if ( v60 == ++v53 )
          goto LABEL_46;
      }
      if ( !v64 )
        break;
      v62 = v53++;
      if ( v60 == v53 )
        goto LABEL_46;
    }
    if ( v62 )
      goto LABEL_115;
    v62 = v53;
  }
  else
  {
    v61 = &v53[(unsigned __int64)v59 / 0x10];
    v62 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v63 = v61->m128i_i64[0];
        if ( v61->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(*(_QWORD *)v63 + 12LL) == v58 && v157 == v63 )
        {
          *v61 = v57;
          goto LABEL_47;
        }
        if ( ++v61 == v56 )
          goto LABEL_38;
      }
      if ( !v63 )
        break;
      v62 = v61++;
      if ( v61 == v56 )
        goto LABEL_38;
    }
    if ( v62 )
LABEL_115:
      --*(_DWORD *)(a1 + 9544);
    else
      v62 = v61;
  }
  *v62 = v57;
  ++*(_DWORD *)(a1 + 9540);
LABEL_47:
  v65 = *(_QWORD **)(a1 + 8656);
  v66 = *v170;
  if ( !v65 )
  {
    v68 = v66 + 1;
    if ( (_DWORD)v66 == -1 )
      goto LABEL_57;
    v117 = (_QWORD *)sub_186B270(0x18u);
    v65 = v117 + 1;
    *v117 = 2;
    *(_QWORD *)(a1 + 8656) = v117 + 1;
    v151 = 0;
    goto LABEL_54;
  }
  v67 = *((_DWORD *)v65 - 1);
  v151 = v67;
  if ( (unsigned int)v66 >= v67 )
  {
    v68 = v66 + 1;
    if ( v67 >= (int)v66 + 1 )
    {
      *((_DWORD *)v65 - 1) = v68;
      goto LABEL_57;
    }
LABEL_54:
    while ( 1 )
    {
      v73 = *((_DWORD *)v65 - 2);
      if ( v73 >= v68 )
        break;
      v69 = (3 * v73 + 1) >> 1;
      v70 = 8 * v69 + 8;
      v71 = v69;
      if ( 8 * v73 + 8 >= (unsigned int)v70 || v73 >= v69 )
      {
        v11 = (char **)__cxa_allocate_exception(0x28u);
        sub_14E142(v148, "Overflow encountered when expanding vector", v12);
        *v11 = (char *)off_1C63128;
        sub_2333C0(v11 + 1, v148);
        sub_233E40((__int64)v148);
        __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v72 = (unsigned int *)sub_186B300(v65 - 1, v70);
      v65 = v72 + 2;
      *v72 = v71;
      *(_QWORD *)(a1 + 8656) = v72 + 2;
    }
    *((_DWORD *)v65 - 1) = v68;
    v74 = 8LL * v68;
    v75 = 8LL * v151;
    if ( v75 != v74 )
    {
      v152 = v65;
      memset(&v65[(unsigned __int64)v75 / 8], 0, v74 - v75);
      v65 = v152;
    }
  }
LABEL_57:
  v76 = *(_QWORD **)(a1 + 8592);
  v65[v66] = v157;
  ++v170[2];
  if ( v76 )
  {
    v77 = *((_DWORD *)v76 - 1);
    if ( v77 == *((_DWORD *)v76 - 2) )
    {
      v103 = (3 * v77 + 1) >> 1;
      v104 = 8 * v103 + 8;
      if ( 8 * v77 + 8 >= (unsigned int)v104 || v77 >= v103 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_14E142(v148, "Overflow encountered when expanding vector", v8);
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v148);
        sub_233E40((__int64)v148);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v105 = (unsigned int *)sub_186B300(v76 - 1, v104);
      v106 = v105[1];
      v76 = v105 + 2;
      *v105 = v103;
      *(_QWORD *)(a1 + 8592) = v105 + 2;
      LODWORD(v105) = v106;
      v80 = &v76[v106];
      v79 = (_DWORD)v105 + 1;
    }
    else
    {
      v78 = v77;
      v79 = v77 + 1;
      v80 = &v76[v78];
    }
  }
  else
  {
    v120 = (_QWORD *)sub_186B270(0x18u);
    v76 = v120 + 1;
    *v120 = 2;
    v79 = 1;
    *(_QWORD *)(a1 + 8592) = v76;
    v80 = v76;
  }
  *v80 = v170;
  *((_DWORD *)v76 - 1) = v79;
  v81 = *(_QWORD **)(a1 + 9456);
  if ( v81 )
  {
    v82 = *((_DWORD *)v81 - 1);
    if ( v82 == *((_DWORD *)v81 - 2) )
    {
      v99 = (3 * v82 + 1) >> 1;
      v100 = 8 * v99 + 8;
      if ( 8 * v82 + 8 >= (unsigned int)v100 || v82 >= v99 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_14E142(v148, "Overflow encountered when expanding vector", v6);
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v148);
        sub_233E40((__int64)v148);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v101 = (unsigned int *)sub_186B300(v81 - 1, v100);
      v102 = v101[1];
      v81 = v101 + 2;
      *v101 = v99;
      *(_QWORD *)(a1 + 9456) = v101 + 2;
      LODWORD(v101) = v102;
      v85 = &v81[v102];
      v84 = (_DWORD)v101 + 1;
    }
    else
    {
      v83 = v82;
      v84 = v82 + 1;
      v85 = &v81[v83];
    }
  }
  else
  {
    v118 = (_QWORD *)sub_186B270(0x18u);
    v81 = v118 + 1;
    *v118 = 2;
    v84 = 1;
    *(_QWORD *)(a1 + 9456) = v81;
    v85 = v81;
  }
  *v85 = a1 + 9584;
  *((_DWORD *)v81 - 1) = v84;
  v86 = *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * *v164);
  v87 = *(_QWORD *)(a1 + 8848);
  *(_QWORD *)v181 = 2;
  v88 = v86;
  v89 = 2 * v86;
  v90 = *(_BYTE *)(v87 + v89);
  if ( v90 == -1 )
  {
    sub_8E8670(a1, v148, v89 ^ 1);
  }
  else if ( !v90 )
  {
    sub_8F28B0(a1, v89, 2, 0);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 48LL))(
    *(_QWORD *)(a1 + 7488),
    *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * v88));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 7488) + 64LL))(*(_QWORD *)(a1 + 7488));
  v171 = v164[2];
  v164[2] = v171 - 1;
  if ( v171 == 1 )
    sub_15D7BC0(v143, v164);
  v91 = v24;
  v92 = (unsigned __int64)&v24[*((unsigned int *)v24 - 1)];
  if ( (unsigned __int64)v24 < v92 )
  {
    do
    {
      while ( 1 )
      {
        v93 = *v91;
        if ( *v91 )
        {
          if ( (*(_DWORD *)(v93 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v91 >= v92 )
          goto LABEL_74;
      }
      sub_15D7BC0(v161, v93);
      ++v91;
    }
    while ( (unsigned __int64)v91 < v92 );
  }
LABEL_74:
  sub_186B220(v24 - 1);
  if ( v169 )
  {
    v172 = *(_DWORD *)(v169 + 8);
    *(_DWORD *)(v169 + 8) = v172 - 1;
    if ( v172 == 1 )
      sub_15D7BC0(v161, v169);
  }
  if ( v159 )
  {
    v173 = *(_DWORD *)(v159 + 8);
    *(_DWORD *)(v159 + 8) = v173 - 1;
    if ( v173 == 1 )
      sub_15D7BC0(v161, v159);
  }
  v174 = v166[2];
  result = v174 - 1;
  v166[2] = result;
  if ( v174 == 1 )
    return sub_15D7BC0(v146, v166);
  return result;
}

