__int64 __fastcall sub_6D23E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // eax
  __int64 *v13; // rcx
  int v14; // esi
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 *v17; // rdi
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 *i; // rax
  __int64 v21; // rdx
  _QWORD *v22; // r15
  __int64 v23; // rax
  unsigned int v24; // r14d
  __int64 v25; // rax
  _DWORD *v26; // rax
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // r14d
  unsigned int v33; // r14d
  char v34; // r12
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 *v38; // r12
  __int64 v39; // r14
  __int64 v40; // rax
  void *v41; // r12
  __int32 v42; // edx
  __int64 v43; // rdx
  char v44; // cl
  __int64 v45; // rdx
  __int64 v46; // r15
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  char v50; // al
  __int64 v51; // rax
  __int64 v52; // r13
  __int64 v53; // rsi
  __int64 v54; // rdi
  bool v55; // zf
  __int64 v56; // rax
  __int64 v57; // r13
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // r12
  __int64 v65; // r13
  _QWORD *v66; // rdx
  unsigned int v67; // eax
  __int64 v68; // rcx
  int v69; // eax
  _QWORD *v70; // rcx
  int v71; // ecx
  int v72; // r8d
  int v73; // r9d
  __int64 v74; // rdi
  unsigned __int64 v75; // r14
  __int64 v76; // rax
  __int64 v77; // r13
  void (__fastcall *v78)(__int64, _QWORD, __int64, _QWORD, _QWORD); // r14
  __int64 v79; // rax
  int v80; // ecx
  int v81; // r8d
  int v82; // r9d
  __int64 v83; // r14
  __int64 v84; // rdi
  __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // r12
  __int64 v88; // rax
  __int64 v89; // r13
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // r12
  __int64 v93; // rax
  __int64 v94; // r13
  unsigned int v95; // r14d
  size_t v96; // rsi
  unsigned int *v97; // rax
  __int64 v98; // rcx
  _DWORD *v99; // rax
  __int64 v100; // rcx
  _QWORD *v101; // rax
  __int64 v102; // rax
  unsigned int v103; // r12d
  __int64 v104; // r14
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // r12
  __int64 v108; // r14
  __int64 v109; // r15
  __int64 v110; // rcx
  __int64 v111; // rax
  unsigned int v112; // r12d
  __int64 v113; // r14
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // r12
  __int64 v117; // r14
  char **exception; // rbx
  __int64 v119; // [rsp+10h] [rbp-1A0h]
  __int64 v120; // [rsp+18h] [rbp-198h]
  __int64 v121; // [rsp+20h] [rbp-190h]
  __int64 v122; // [rsp+28h] [rbp-188h]
  int v123; // [rsp+30h] [rbp-180h]
  __int64 v124; // [rsp+38h] [rbp-178h]
  char v125; // [rsp+41h] [rbp-16Fh]
  char v126; // [rsp+42h] [rbp-16Eh]
  char v127; // [rsp+43h] [rbp-16Dh]
  unsigned int v128; // [rsp+44h] [rbp-16Ch]
  unsigned int v129; // [rsp+48h] [rbp-168h]
  char v130; // [rsp+50h] [rbp-160h]
  __int64 v132; // [rsp+70h] [rbp-140h]
  int v133[2]; // [rsp+70h] [rbp-140h]
  int v134[2]; // [rsp+70h] [rbp-140h]
  int v135; // [rsp+70h] [rbp-140h]
  char v136; // [rsp+78h] [rbp-138h]
  __int64 v137; // [rsp+78h] [rbp-138h]
  void *v138; // [rsp+78h] [rbp-138h]
  void *v139; // [rsp+78h] [rbp-138h]
  __int64 v140; // [rsp+80h] [rbp-130h]
  __int64 v141; // [rsp+88h] [rbp-128h]
  int v142; // [rsp+90h] [rbp-120h]
  __int64 v143; // [rsp+A0h] [rbp-110h]
  __int64 v144; // [rsp+A0h] [rbp-110h]
  __int64 v145; // [rsp+A0h] [rbp-110h]
  __int64 v146; // [rsp+A8h] [rbp-108h]
  __int64 v147; // [rsp+A8h] [rbp-108h]
  __int64 v148; // [rsp+A8h] [rbp-108h]
  __int64 v149; // [rsp+A8h] [rbp-108h]
  __int64 j; // [rsp+A8h] [rbp-108h]
  __int64 v151; // [rsp+A8h] [rbp-108h]
  int v152[4]; // [rsp+B0h] [rbp-100h] BYREF
  __int64 v153; // [rsp+C0h] [rbp-F0h] BYREF
  __int64 v154; // [rsp+C8h] [rbp-E8h]
  __int64 v155; // [rsp+D0h] [rbp-E0h] BYREF
  __int64 v156; // [rsp+D8h] [rbp-D8h]
  _QWORD v157[4]; // [rsp+E0h] [rbp-D0h] BYREF
  __m128i v158; // [rsp+100h] [rbp-B0h] BYREF
  __int64 v159; // [rsp+110h] [rbp-A0h] BYREF
  __int64 v160; // [rsp+118h] [rbp-98h]
  __int64 v161; // [rsp+120h] [rbp-90h] BYREF
  __int64 v162; // [rsp+128h] [rbp-88h]
  __int64 v163; // [rsp+130h] [rbp-80h] BYREF
  __int64 v164; // [rsp+138h] [rbp-78h]
  int v165[2]; // [rsp+140h] [rbp-70h] BYREF
  __int64 v166; // [rsp+148h] [rbp-68h]
  __int64 v167; // [rsp+150h] [rbp-60h]
  _QWORD v168[11]; // [rsp+158h] [rbp-58h] BYREF

  v123 = (int)a2;
  v141 = *a2;
  v129 = sub_182D020(qword_1C7F2C0, a4);
  *(__m128 *)v152 = _mm_loadh_ps((const double *)(a1 + 8));
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v166 = 0;
  *(_QWORD *)v165 = a1 + 32;
  v6 = *(_QWORD *)(a1 + 32);
  v168[0] = 0;
  v167 = v6;
  v168[1] = 0;
  v168[2] = 1;
  v168[3] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v168, &qword_1C7F280);
  v127 = sub_6C5D80(a1, v141, a3, v129, (__int64 *)v152);
  if ( v127 )
    goto LABEL_4;
  sub_41D160((__int64 *)(a1 + 80));
  v8 = *(_DWORD *)(v141 + 12);
  v9 = (*(_DWORD *)(a3 + 12) - v8) ^ (v8 << 8);
  v10 = (v8 - v9) << 10;
  v11 = v9 ^ ((v8 - v9) << 16);
  v12 = v9 - v8;
  v13 = *(__int64 **)(a1 + 808);
  v14 = (v11 + v12) ^ v10;
  v15 = *(unsigned int *)(a1 + 816);
  v16 = v15 - 1;
  v15 *= 32;
  v17 = (__int64 *)((char *)v13 + v15);
  v18 = 32LL * (v14 & v16);
  v19 = &v13[(unsigned __int64)v18 / 8];
  if ( v18 != v15 )
  {
    for ( i = &v13[(unsigned __int64)v18 / 8]; v17 != i; i += 4 )
    {
      v21 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *((_DWORD *)i + 6) == v14 && v141 == v21 && a3 == i[1] )
          goto LABEL_14;
      }
      else if ( !v21 )
      {
        goto LABEL_12;
      }
    }
  }
  if ( v13 == v19 )
  {
LABEL_12:
    sub_1872CE0("");
    sub_1873130(114, 2182);
  }
  while ( 1 )
  {
    v47 = *v13;
    if ( (unsigned __int64)*v13 > 1 )
      break;
    if ( !v47 )
      goto LABEL_12;
LABEL_42:
    v13 += 4;
    if ( v19 == v13 )
      goto LABEL_12;
  }
  if ( *((_DWORD *)v13 + 6) != v14 || v141 != v47 || a3 != v13[1] )
    goto LABEL_42;
  i = v13;
LABEL_14:
  v22 = (_QWORD *)i[2];
  v23 = v22[9];
  if ( v23 )
    v24 = *(_DWORD *)(v23 - 4);
  else
    v24 = 0;
  v25 = v22[11];
  if ( v25 )
    v128 = *(_DWORD *)(v25 - 4);
  else
    v128 = 0;
  v26 = *(_DWORD **)(sub_15D1F10(v141) + 24);
  if ( v26 && *v26 == 5 && !v26[1] )
  {
    v128 *= 2;
    v24 *= 2;
  }
  v27 = v22[13];
  v28 = v24;
  if ( v27 )
    v28 = *(_DWORD *)(v27 - 4) + v24;
  v29 = v22[15];
  if ( v29 )
    v30 = *(_DWORD *)(v29 - 4) + v128;
  else
    v30 = v128;
  if ( v28 >= v30 )
  {
    v126 = 0;
    v125 = 1;
    v130 = 0;
  }
  else
  {
    v125 = 0;
    v128 = v24;
    v130 = 1;
    v126 = 1;
  }
  v31 = v22[37];
  if ( v31 )
  {
    v32 = *(_DWORD *)(v31 - 4);
    if ( v32 )
    {
      v49 = *(_QWORD *)(a1 + 8);
      v157[0] = 0;
      v156 = v49;
      v154 = v49;
      v157[1] = 0;
      v157[2] = 1;
      v157[3] = 0;
      v155 = 0;
      v153 = 0;
      v50 = sub_6C3440((__int64)v22, (__int64)v157, &v155, &v153);
      v119 = v155;
      v140 = v153;
      v121 = v154;
      v120 = v156;
      if ( !v50 )
      {
        sub_1872CE0("");
        sub_1873130(114, 2132);
      }
      v147 = 0;
      v124 = 8LL * v32;
      v122 = a1 + 48;
      do
      {
        v64 = *(_QWORD *)(v22[41] + v147);
        v137 = v22[39] + 4 * v147;
        v65 = *(_QWORD *)(*(_QWORD *)(v22[43] + v147) + 32LL);
        v143 = *(_QWORD *)(v22[43] + v147);
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 88LL))(*(_QWORD *)(a1 + 40), v65);
        if ( v65 )
          ++*(_DWORD *)(v65 + 8);
        v66 = *(_QWORD **)(a1 + 88);
        if ( v66 )
        {
          v67 = *((_DWORD *)v66 - 1);
          if ( v67 == *((_DWORD *)v66 - 2) )
          {
            v95 = (3 * v67 + 1) >> 1;
            v96 = 8 * v95 + 8;
            if ( 8 * v67 + 8 >= (unsigned int)v96 || v67 >= v95 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v161, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v161);
              sub_233E40((__int64)&v161);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v97 = (unsigned int *)sub_186B300(v66 - 1, v96);
            v98 = v97[1];
            v66 = v97 + 2;
            *v97 = v95;
            *(_QWORD *)(a1 + 88) = v97 + 2;
            LODWORD(v97) = v98;
            v70 = &v66[v98];
            v69 = (_DWORD)v97 + 1;
          }
          else
          {
            v68 = v67;
            v69 = v67 + 1;
            v70 = &v66[v68];
          }
        }
        else
        {
          v101 = (_QWORD *)sub_186B270(0x18u);
          v66 = v101 + 1;
          *v101 = 2;
          v69 = 1;
          *(_QWORD *)(a1 + 88) = v66;
          v70 = v66;
        }
        *v70 = v65;
        *((_DWORD *)v66 - 1) = v69;
        v161 = 1;
        v163 = 1;
        v162 = 0;
        v164 = 0;
        sub_182CBA0(qword_1C7F2C0, &v163);
        BYTE4(v163) &= ~1u;
        LODWORD(v163) = 1;
        sub_3EBB80((__int64)&v158, v137, (__int64)&v161);
        v74 = *(_QWORD *)(a1 + 56);
        if ( !v74 )
        {
          sub_16669E0(v122);
          v74 = *(_QWORD *)(a1 + 56);
        }
        sub_166A700(v74, (unsigned int)&v158, 1, v71, v72, v73);
        *(_QWORD *)v133 = sub_15E1B70(*(_QWORD *)(a1 + 48));
        v138 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v158);
        sub_182CBA0(v138, &v159);
        v139 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v161);
        sub_182CBA0(v139, &v163);
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
          *(_QWORD *)(a1 + 24),
          0,
          *(int **)v133,
          0,
          0);
        sub_15E1B70(*(_QWORD *)(a1 + 48));
        v75 = *(_QWORD *)(a1 + 8);
        v76 = sub_15E1B70(*(_QWORD *)(a1 + 48));
        v158 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v76, (__m128i)v75);
        if ( v76 )
          ++*(_DWORD *)(v76 + 8);
        sub_14B9B80(a1 + 64, &v158);
        v77 = *(_QWORD *)(a1 + 24);
        v78 = *(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v77 + 96LL);
        *(_QWORD *)v134 = *(_QWORD *)(a1 + 8);
        sub_15D1F10(v158.m128i_i64[0]);
        v79 = sub_15E1B70(v134[0]);
        v78(v77, 0, v79, 0, 0);
        sub_14EC390(a1 + 344, v64, v143, v152);
        v83 = *(_QWORD *)(a1 + 8);
        v84 = *(_QWORD *)(a1 + 56);
        v161 = 0;
        v85 = v22[38] + 4 * v147;
        v162 = v83;
        if ( !v84 )
        {
          sub_16669E0(v122);
          v84 = *(_QWORD *)(a1 + 56);
        }
        v86 = sub_166A700(v84, v85, 1, v80, v81, v82);
        v87 = v86;
        if ( v86 )
          ++*(_DWORD *)(v86 + 8);
        v88 = sub_15E1B70(*(_QWORD *)(a1 + 48));
        v89 = v88;
        if ( v88 )
          ++*(_DWORD *)(v88 + 8);
        v90 = sub_15E1B70(*(_QWORD *)(a1 + 48));
        v144 = v90;
        if ( v90 )
          ++*(_DWORD *)(v90 + 8);
        if ( v87 )
        {
          v55 = (*(_DWORD *)(v87 + 8))-- == 1;
          if ( v55 )
            sub_15D7BC0(v83, v87);
        }
        v91 = sub_15E1B70(*(_QWORD *)(a1 + 48));
        v92 = v91;
        if ( v91 )
          ++*(_DWORD *)(v91 + 8);
        if ( v144 )
        {
          v135 = *(_DWORD *)(v144 + 8);
          *(_DWORD *)(v144 + 8) = v135 - 1;
          if ( v135 == 1 )
            sub_15D7BC0(v83, v144);
        }
        v93 = sub_15E1B70(*(_QWORD *)(a1 + 48));
        v145 = v93;
        if ( v93 )
          ++*(_DWORD *)(v93 + 8);
        if ( v89 )
        {
          v55 = (*(_DWORD *)(v89 + 8))-- == 1;
          if ( v55 )
            sub_15D7BC0(v83, v89);
        }
        v94 = *(_QWORD *)(a1 + 8);
        sub_15D1F10(v140);
        v51 = sub_15E1B70(v94);
        v52 = v51;
        if ( v51 )
          ++*(_DWORD *)(v51 + 8);
        v53 = v161;
        if ( v161 )
        {
          v54 = v162;
          v55 = (*(_DWORD *)(v161 + 8))-- == 1;
          if ( v55 )
            sub_15D7BC0(v54, v53);
        }
        v161 = v52;
        sub_14B9B80(a1 + 64, &v161);
        v56 = sub_15E1B70(*(_QWORD *)(a1 + 8));
        v57 = v56;
        if ( v56 )
          ++*(_DWORD *)(v56 + 8);
        v58 = *(_QWORD *)v152;
        if ( *(_QWORD *)v152 )
        {
          v59 = *(_QWORD *)&v152[2];
          v55 = (*(_DWORD *)(*(_QWORD *)v152 + 8LL))-- == 1;
          if ( v55 )
            sub_15D7BC0(v59, v58);
        }
        *(_QWORD *)v152 = v57;
        if ( v92 )
        {
          v55 = (*(_DWORD *)(v92 + 8))-- == 1;
          if ( v55 )
            sub_15D7BC0(v83, v92);
        }
        if ( v145 )
        {
          v142 = *(_DWORD *)(v145 + 8);
          *(_DWORD *)(v145 + 8) = v142 - 1;
          if ( v142 == 1 )
            sub_15D7BC0(v83, v145);
        }
        v60 = v161;
        if ( v161 )
        {
          v61 = v162;
          v55 = (*(_DWORD *)(v161 + 8))-- == 1;
          if ( v55 )
            sub_15D7BC0(v61, v60);
        }
        v62 = v158.m128i_i64[0];
        if ( v158.m128i_i64[0] )
        {
          v63 = v158.m128i_i64[1];
          v55 = (*(_DWORD *)(v158.m128i_i64[0] + 8))-- == 1;
          if ( v55 )
            sub_15D7BC0(v63, v62);
        }
        v147 += 8;
      }
      while ( v124 != v147 );
      sub_25A130((char *)v157);
      sub_6BFE10(v119, v120);
      sub_6BFE10(v140, v121);
    }
  }
  sub_6C4F60(a1, v123, v22, (__int64)v165, (__int64)v152);
  if ( !v129 )
  {
    sub_6C2970(a1, v22, 1, v130, (__int64)v152);
    sub_6C2970(a1, v22, 0, v130, (__int64)v152);
    if ( v125 )
    {
      v111 = v22[13];
      if ( v111 )
      {
        v112 = *(_DWORD *)(v111 - 4);
        for ( j = 0; (unsigned int)j < v112; ++j )
        {
          v113 = *(_QWORD *)(v22[25] + 8 * j);
          (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
            *(_QWORD *)(a1 + 24),
            1,
            v113,
            0,
            0);
          sub_14EC390(a1 + 344, v113, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL), v152);
        }
      }
      v114 = v22[9];
      if ( v114 )
      {
        v115 = *(unsigned int *)(v114 - 4);
        if ( (_DWORD)v115 )
        {
          v116 = 8 * v115;
          v151 = 0;
          do
          {
            v117 = *(_QWORD *)(v22[21] + v151);
            (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
              *(_QWORD *)(a1 + 24),
              1,
              v117,
              0,
              0);
            sub_14EC390(a1 + 344, v117, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL), v152);
            v151 += 8;
          }
          while ( v151 != v116 );
        }
      }
    }
    else
    {
      v102 = v22[15];
      if ( v102 )
      {
        v103 = *(_DWORD *)(v102 - 4);
        if ( v103 )
        {
          v148 = 0;
          do
          {
            v104 = *(_QWORD *)(v22[27] + 8 * v148);
            (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
              *(_QWORD *)(a1 + 24),
              1,
              v104,
              0,
              0);
            sub_14EC390(a1 + 344, v104, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL), v152);
            ++v148;
          }
          while ( (unsigned int)v148 < v103 );
        }
      }
      v105 = v22[11];
      if ( v105 )
      {
        v106 = *(unsigned int *)(v105 - 4);
        if ( (_DWORD)v106 )
        {
          v107 = 8 * v106;
          v149 = 0;
          do
          {
            v108 = *(_QWORD *)(v22[23] + v149);
            (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
              *(_QWORD *)(a1 + 24),
              1,
              v108,
              0,
              0);
            sub_14EC390(a1 + 344, v108, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL), v152);
            v149 += 8;
          }
          while ( v107 != v149 );
        }
      }
    }
    sub_14B9B80(a1 + 64, v152);
    BYTE4(v163) &= 0xFCu;
    v109 = v166;
    LODWORD(v161) = 0;
    BYTE4(v161) &= 0xFCu;
    v162 = 0;
    LODWORD(v163) = 1;
    v164 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v161, (int *)v168);
    sub_6D1FA0(a1, v141, a3, 0, *(__int64 *)v152, (__int64)&v161, v109);
    sub_25A130((char *)&v161);
LABEL_4:
    sub_25A130((char *)v168);
    sub_6BFE30(v166, v167);
    return sub_6BFE30(*(__int64 *)v152, *(__int64 *)&v152[2]);
  }
  v33 = v129 - 1;
  v34 = v129 - 1 >= v128;
  if ( v129 - 1 < v128 )
  {
    v99 = *(_DWORD **)(sub_15D1F10(v141) + 24);
    if ( v99 && *v99 == 5 && !v99[1] )
    {
      v33 >>= 1;
      v127 = v129 & 1;
    }
    v132 = *(_QWORD *)(a1 + 8);
    v35 = v33;
    if ( v126 )
    {
      v100 = *(_QWORD *)(v22[9] + 8LL * v33);
      v146 = v100;
      if ( v100 )
        ++*(_DWORD *)(v100 + 8);
      v37 = v22[16];
    }
    else
    {
      v110 = *(_QWORD *)(v22[11] + 8LL * v33);
      v146 = v110;
      if ( v110 )
        ++*(_DWORD *)(v110 + 8);
      v37 = v22[17];
    }
  }
  else
  {
    v33 -= v128;
    v132 = *(_QWORD *)(a1 + 8);
    v35 = v33;
    if ( v126 )
    {
      v48 = *(_QWORD *)(v22[13] + 8LL * v33);
      v146 = v48;
      if ( v48 )
        ++*(_DWORD *)(v48 + 8);
      v37 = v22[18];
    }
    else
    {
      v36 = *(_QWORD *)(v22[15] + 8LL * v33);
      v146 = v36;
      if ( v36 )
        ++*(_DWORD *)(v36 + 8);
      v127 = 0;
      v37 = v22[19];
    }
  }
  v158 = 0u;
  v159 = 1;
  v160 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v158, (int *)(32 * v35 + v37));
  v136 = v129 - 1 >= v128;
  sub_6CE100((__int64 *)a1, v22, v141, 1, v127, v34, v130, v33, v158.m128i_i32, v146, (__int64)v152);
  sub_6CE100((__int64 *)a1, v22, v141, 0, v127, v34, v130, v33, v158.m128i_i32, v146, (__int64)v152);
  v38 = *(__int64 **)v165;
  v39 = **(_QWORD **)v165;
  if ( v166 )
  {
    sub_6C19A0(*(__int64 *)v165, (__int64)&v158, v166);
    v40 = sub_15E1B70(v38[2]);
    v41 = (void *)v40;
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
  }
  else
  {
    if ( v146 )
      ++*(_DWORD *)(v146 + 8);
    v41 = (void *)v146;
  }
  sub_6BFE30(v146, v39);
  sub_3EBE30((__int64)&v161, (__int64)&v158, (__int64)v168);
  v42 = v161;
  LODWORD(v161) = v158.m128i_i32[0];
  v158.m128i_i32[0] = v42;
  v43 = v162;
  v162 = v158.m128i_i64[1];
  v158.m128i_i64[1] = v43;
  v44 = BYTE4(v161) & 1;
  LOBYTE(v43) = v158.m128i_i8[4] & 0xFC | BYTE4(v161) & 2;
  BYTE4(v161) = v158.m128i_i8[4] & 1 | BYTE4(v161) & 0xFC | v158.m128i_i8[4] & 2;
  v158.m128i_i8[4] = v44 | v43;
  LODWORD(v43) = v163;
  LODWORD(v163) = v159;
  LODWORD(v159) = v43;
  v45 = v164;
  v164 = v160;
  v160 = v45;
  LOBYTE(v45) = BYTE4(v163) & 1 | BYTE4(v159) & 0xFC | BYTE4(v163) & 2;
  BYTE4(v163) = BYTE4(v159) & 1 | BYTE4(v163) & 0xFC | BYTE4(v159) & 2;
  BYTE4(v159) = v45;
  sub_25A130((char *)&v161);
  sub_6C9DA0(a1, v22, v141, (__int64 **)v165, 1, v127, v136, v130, v158.m128i_i32, v41, (__int64 *)v152);
  sub_6C9DA0(a1, v22, v141, (__int64 **)v165, 0, v127, v136, v130, v158.m128i_i32, v41, (__int64 *)v152);
  sub_14B9B80(a1 + 64, v152);
  BYTE4(v163) &= 0xFCu;
  v46 = v166;
  LODWORD(v161) = 0;
  BYTE4(v161) &= 0xFCu;
  v162 = 0;
  LODWORD(v163) = 1;
  v164 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v161, (int *)v168);
  sub_6D1FA0(a1, v141, a3, v129, *(__int64 *)v152, (__int64)&v161, v46);
  sub_25A130((char *)&v161);
  sub_25A130(v158.m128i_i8);
  sub_6BFE30((__int64)v41, v132);
  sub_25A130((char *)v168);
  sub_6BFE30(v166, v167);
  return sub_6BFE30(*(__int64 *)v152, *(__int64 *)&v152[2]);
}

