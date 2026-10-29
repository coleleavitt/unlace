unsigned __int64 __fastcall sub_1E4B000(__int64 a1, unsigned __int64 a2, __m128 a3, __m128 a4, __m128i a5)
{
  __int16 v7; // ax
  unsigned __int64 v8; // rdx
  void **v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // r14
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rsi
  unsigned __int64 v49; // rsi
  char *v50; // rdi
  __int64 v51; // r12
  __int64 v52; // r14
  void **v53; // rbx
  __int64 v55; // rdi
  _QWORD *v56; // rdx
  int v57; // eax
  __int64 v58; // rsi
  unsigned __int64 v59; // rdx
  int v60; // r15d
  int v61; // eax
  __int64 v62; // rax
  const __m128i *v63; // rax
  __int64 v64; // rdx
  __m128i v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  unsigned __int64 v77; // rax
  __int64 v78; // rdi
  unsigned int *v79; // r12
  __int64 *v80; // rcx
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rbx
  unsigned __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  unsigned __int8 v95; // r15
  __int64 v96; // rax
  __int64 v97; // rbp
  unsigned __int64 v98; // r15
  unsigned int v99; // eax
  unsigned __int64 v100; // rdx
  char v101; // si
  __int64 v102; // r15
  __int64 v103; // r12
  unsigned __int64 v104; // r9
  __int64 v105; // rax
  unsigned __int64 *v106; // rax
  unsigned __int8 v107; // al
  _QWORD *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // r15
  __int64 v114; // rax
  _QWORD *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rax
  __int64 v121; // rcx
  _QWORD *v122; // rax
  __int64 v123; // [rsp-10h] [rbp-268h]
  __int64 v124; // [rsp+0h] [rbp-258h] BYREF
  unsigned __int64 v125; // [rsp+8h] [rbp-250h]
  unsigned int *v126; // [rsp+10h] [rbp-248h]
  unsigned __int64 v127; // [rsp+18h] [rbp-240h]
  __int64 v128; // [rsp+28h] [rbp-230h] BYREF
  __m128i v129; // [rsp+30h] [rbp-228h] BYREF
  __m128 v130; // [rsp+40h] [rbp-218h] BYREF
  _QWORD v131[2]; // [rsp+50h] [rbp-208h] BYREF
  __int64 *v132; // [rsp+60h] [rbp-1F8h]
  unsigned __int8 *v133; // [rsp+70h] [rbp-1E8h] BYREF
  char v134; // [rsp+C8h] [rbp-190h]
  unsigned int v135; // [rsp+D0h] [rbp-188h]
  char v136; // [rsp+D4h] [rbp-184h]
  unsigned __int64 v137; // [rsp+E0h] [rbp-178h] BYREF
  __int64 v138; // [rsp+E8h] [rbp-170h]
  __int64 v139; // [rsp+F0h] [rbp-168h] BYREF
  unsigned int v140; // [rsp+F8h] [rbp-160h]
  void *ptr; // [rsp+130h] [rbp-128h] BYREF
  __int64 v142; // [rsp+138h] [rbp-120h]
  __int64 v143; // [rsp+140h] [rbp-118h] BYREF
  __int64 v144; // [rsp+148h] [rbp-110h]
  __int16 v145; // [rsp+150h] [rbp-108h]
  char v146; // [rsp+152h] [rbp-106h]
  __int64 v147; // [rsp+158h] [rbp-100h]
  void *v148[2]; // [rsp+170h] [rbp-E8h] BYREF
  void *v149[2]; // [rsp+180h] [rbp-D8h] BYREF
  __int128 v150; // [rsp+190h] [rbp-C8h]
  __int128 v151; // [rsp+1C8h] [rbp-90h]
  __int64 v152; // [rsp+1D8h] [rbp-80h]
  unsigned __int64 v153; // [rsp+1E0h] [rbp-78h]
  __int64 v154; // [rsp+1E8h] [rbp-70h]
  int v155; // [rsp+1F0h] [rbp-68h]
  __int64 v156; // [rsp+1F8h] [rbp-60h] BYREF
  __int128 v157; // [rsp+200h] [rbp-58h]
  bool v158; // [rsp+210h] [rbp-48h]
  bool v159; // [rsp+211h] [rbp-47h]
  char v160; // [rsp+212h] [rbp-46h]
  bool v161; // [rsp+213h] [rbp-45h]
  bool v162; // [rsp+214h] [rbp-44h]
  char v163; // [rsp+215h] [rbp-43h]
  __int16 v164; // [rsp+216h] [rbp-42h]

  v7 = *(_WORD *)(a2 + 30);
  LODWORD(v124) = 0;
  if ( (v7 & 0x180) != 0 )
    LODWORD(v124) = ((v7 & 0x22) == 0) + 1;
  v8 = *(_QWORD *)a1;
  v138 = 1;
  v9 = (void **)&v139;
  v137 = v8;
  do
  {
    *v9 = (void *)-4096LL;
    v9 += 2;
  }
  while ( v9 != &ptr );
  v146 = 0;
  ptr = &v143;
  v142 = 0x100000000LL;
  v10 = *(_QWORD *)(v8 + 11280);
  *(_QWORD *)(v8 + 11280) = &v137;
  v11 = *(_QWORD *)(a2 + 56);
  v144 = v10;
  v145 = 0;
  v147 = 0;
  v126 = (unsigned int *)sub_1E48E00(a1, v11);
  if ( !v126 )
    goto LABEL_73;
  v12 = *(_QWORD *)(a2 + 48);
  v13 = *(_QWORD *)(v12 + 120);
  if ( (v13 & 4) != 0 )
  {
    v63 = (const __m128i *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
    v64 = v63->m128i_i64[0];
    a4 = (__m128)_mm_loadu_si128(v63);
    v129 = (__m128i)a4;
    if ( v64 )
    {
      v65.m128i_i64[0] = sub_1DEB190(*(_QWORD *)a1, v129.m128i_u64[0], (void *)v129.m128i_i64[1], *(_QWORD *)(a1 + 32));
      v129 = v65;
      if ( !v65.m128i_i64[0] )
        goto LABEL_73;
      if ( !(_DWORD)v124 )
        goto LABEL_9;
      *(_OWORD *)v148 = 0;
      *(_OWORD *)v149 = 0;
      v150 = 0;
      sub_15AB8B0((__int64)v148, v65.m128i_i64[0], v65.m128i_i64[1]);
      v125 = sub_16A2930(*(_QWORD *)a1, (__int64)v148, 0, v66, v67, v68);
      if ( !v125 )
      {
        if ( HIDWORD(v149[1]) )
        {
          v29 = 0;
          free(v149[0]);
          goto LABEL_28;
        }
        goto LABEL_73;
      }
      if ( HIDWORD(v149[1]) )
        free(v149[0]);
      goto LABEL_45;
    }
  }
  else
  {
    a3 = 0;
    v129 = 0;
  }
  if ( !(_DWORD)v124 )
  {
LABEL_9:
    v14 = 0;
    v15 = sub_1E0ADC0(v12);
    v20 = *(_QWORD *)(a1 + 24);
    v21 = *(_QWORD *)(v12 + 40);
    v125 = *(_QWORD *)(a1 + 24);
    if ( v15 )
    {
      v22 = sub_B94670(v20, v21, v16, v17, v18, v19);
      v15 = 0;
      if ( (v22 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v14 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v22 & 4) != 0 )
          v14 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x48 )
        {
          v15 = *(_QWORD *)(v14 + 48);
        }
        else
        {
          v14 = 0;
          v15 = 0;
        }
      }
      v21 = *(_QWORD *)(v12 + 40);
      v125 = *(_QWORD *)(a1 + 24);
    }
    goto LABEL_12;
  }
  v55 = *(_QWORD *)a1;
  v56 = (_QWORD *)(*(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v12 + 16) & 4) != 0 )
    v56 = (_QWORD *)*v56;
  v125 = sub_1E39240(v55, *(_DWORD *)(v12 + 24), (__int64)v56, *(_QWORD *)(a1 + 32), a3, a4, a5);
LABEL_45:
  v57 = sub_1A3A250(*(_QWORD *)a1);
  v58 = *(_QWORD *)(v12 + 40);
  v59 = *(_QWORD *)a1;
  v60 = v57;
  v61 = *(_DWORD *)(v12 + 24);
  v148[1] = &v149[1];
  v153 = v59;
  v149[0] = (void *)0x800000000LL;
  v154 = v58;
  v151 = 0;
  v155 = v61;
  v148[0] = nullptr;
  v152 = 0;
  sub_B85890(&v156, v58);
  a3 = 0;
  v158 = v60 != 0;
  v159 = v60 == 2;
  v157 = 0;
  v161 = v60 == 0;
  v162 = v60 == 0;
  v164 = 0;
  v160 = 1;
  v163 = 0;
  sub_1A395A0((__int64)v148);
  sub_1A48440(*(_QWORD *)a1, (__int64)v148, v125, 0);
  if ( LODWORD(v148[0]) != 2 )
    goto LABEL_46;
  v14 = *(_QWORD *)v148[1] & 0xFFFFFFFFFFFFFFF8LL;
  v107 = *(_BYTE *)(v14 + 28) & 0x7F;
  if ( ((v107 + 52) & 0x7Fu) <= 1 || (unsigned int)v107 - 53 <= 1 )
  {
    v14 = sub_B72ED0(*(_QWORD *)v148[1] & 0xFFFFFFFFFFFFFFF8LL);
    v107 = *(_BYTE *)(v14 + 28) & 0x7F;
  }
  if ( v107 == 72 )
  {
    v62 = *(_QWORD *)(v14 + 48);
  }
  else
  {
LABEL_46:
    v62 = v129.m128i_i64[0];
    if ( v129.m128i_i64[0] )
    {
      sub_168B9F0((__int64)v131, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(v12 + 24), 0x10EAu, 0);
      v95 = *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) >> 5;
      if ( v134 )
      {
        sub_AE9DF0(&v133, *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) >> 5, 2u);
      }
      else if ( v136 )
      {
        v116 = sub_168B9E0(v131);
        v120 = (__int64)v132;
        if ( v132 )
        {
          v121 = *v132;
          v124 = v116;
          v120 = (*(__int64 (__fastcall **)(__int64 *))(v121 + 32))(v132);
          v116 = v124;
        }
        v130.m128_u64[0] = v120;
        v122 = sub_1587BC0(v116, (__int64 *)&v130, v116, v117, v118, v119);
        sub_AE9DF0((unsigned __int8 **)(*v122 + 32LL * v135 + 8), v95, 2u);
      }
      v128 = *(_QWORD *)(v12 + 40);
      v96 = sub_15894B0((__int64)v131, &v128);
      v97 = v96;
      if ( *(_BYTE *)(v96 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v96 + 32), v125, 0xCu);
      }
      else if ( *(_BYTE *)(v96 + 132) )
      {
        v113 = sub_168B9E0((_QWORD *)v96);
        v114 = *(_QWORD *)(v97 + 16);
        if ( v114 )
          v114 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v114 + 32LL))(*(_QWORD *)(v97 + 16));
        v130.m128_u64[0] = v114;
        v115 = sub_1587BC0(v113, (__int64 *)&v130, v109, v110, v111, v112);
        sub_AE9DF0((unsigned __int8 **)(*v115 + 32LL * *(unsigned int *)(v97 + 128) + 8), v125, 0xCu);
      }
      v98 = sub_E90530(v129.m128i_i64) >> 32;
      v99 = 0;
      if ( v129.m128i_i64[0] )
      {
        v130 = (__m128)_mm_load_si128(&v129);
        v100 = *(_QWORD *)(v129.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v100 )
        {
          v101 = 0;
          v124 = v130.m128_i64[1];
          v130 = _mm_loadh_ps((const double *)&v124);
          while ( (*(_QWORD *)(v100 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v101 = 1;
            v100 = *(_QWORD *)(v100 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( v101 )
            v130.m128_u64[0] = v100;
        }
        v99 = sub_E90530((__int64 *)&v130);
      }
      v130.m128_u64[0] = __PAIR64__(v98, v99);
      sub_1587DB0(v97, (__int64 *)&v130);
      sub_15F7200(v131);
      sub_169D230((__int64)v148);
      goto LABEL_73;
    }
    v14 = 0;
  }
  v127 = v62;
  sub_169D230((__int64)v148);
  v21 = *(_QWORD *)(v12 + 40);
  v15 = v127;
LABEL_12:
  v23 = v21 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v21 & 7) != 0 )
    v23 = 0;
  v24 = sub_B96A60(
          *(_QWORD **)(*(_QWORD *)a1 + 248LL),
          *(_BYTE *)(v12 + 73) >> 5,
          v125,
          *(_DWORD *)(v12 + 56),
          *(_DWORD *)(v12 + 24),
          v23,
          v15,
          1);
  v26 = v123;
  v27 = (_QWORD *)v24;
  if ( v129.m128i_i64[0] )
    sub_B7C4C0(v24, v129.m128i_i64[0], v129.m128i_i64[1]);
  sub_1E0A3F0(*(_QWORD *)a1, *(_QWORD *)(a1 + 32), v12, (__int64)v27, v25, v26, a3, a4);
  v28 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
    v28 = 0;
  v29 = sub_BBDF30(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v125, *(_DWORD *)(a2 + 24), v28, (__int64)v126, (__int64)v27);
  sub_B97250((__int64)v27, v29);
  v33 = (unsigned int)v124;
  if ( (_DWORD)v124 )
  {
    sub_B90130(v29, *(_QWORD *)(a1 + 24), v30, v31, (unsigned int)v124, v32);
    sub_B90130((__int64)v27, *(_QWORD *)(a1 + 24), v69, v70, v71, v72);
    sub_17A0130((_WORD *)v29, 0);
    if ( !v14 )
    {
      *(_BYTE *)(v29 + 29) = *(_BYTE *)(a2 + 29) & 0x60 | *(_BYTE *)(v29 + 29) & 0x9F;
      goto LABEL_59;
    }
    *(_QWORD *)(v29 + 80) = sub_BC3640((_QWORD *)v14);
    v27[6] = *(_QWORD *)(*(_QWORD *)(v14 + 48) + 48LL);
    v77 = sub_AEA770((__int64 *)(*(_QWORD *)(v14 + 72) + 64LL), *(_QWORD *)(v14 + 72), v73, v74, v75, v76);
    v78 = *(_QWORD *)a1;
    v79 = *(unsigned int **)(v77 + 56);
    v80 = *(__int64 **)(v77 + 48);
    v148[0] = v27;
    v148[1] = nullptr;
    v149[0] = nullptr;
    LODWORD(v149[1]) = 0;
    if ( (unsigned __int8)sub_1CD38B0(v78, v148, v126, v80, v79, 1, *(double *)a3.m128_u64, 0, 0)
      && !(unsigned __int8)sub_1CBDF60(*(_QWORD *)a1, (__int64)v126, (__int64)v79, 0, 0, v81, a3) )
    {
      *(_BYTE *)(v29 + 29) = *(_BYTE *)(v14 + 29) & 0x60 | *(_BYTE *)(v29 + 29) & 0x9F;
LABEL_59:
      sub_17A0130((_WORD *)v29, 0);
      sub_AEABB0((_QWORD *)(v29 + 64), v14, v82, v83, v84, v85);
      v86 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
      v87 = sub_BC3930(v29);
      sub_A7A4F0(v86, (__int64)v27, v87, v88, v89, v90);
      sub_B94A80(v125, v29, v91, v92, v93, v94);
      goto LABEL_28;
    }
LABEL_73:
    v29 = 0;
    goto LABEL_28;
  }
  v34 = *(_BYTE *)(a2 + 29) & 0x60;
  *(_BYTE *)(v29 + 29) = v34 | *(_BYTE *)(v29 + 29) & 0x9F;
  if ( !v14 )
  {
    v108 = (_QWORD *)sub_BC3640((_QWORD *)v29);
    v34 = a2 | *v108 & 7LL;
    *v108 = v34;
  }
  sub_AEABB0((_QWORD *)(v29 + 64), v14, v34, v31, v33, v32);
  v124 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
  v35 = sub_BC3930(v29);
  sub_A7A4F0(v124, (__int64)v27, v35, v36, v37, v38);
  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 24LL))(a2) )
  {
    v43 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v43 = *(_QWORD *)(v43 + 8);
    sub_B90130(v29, v43, v39, v40, v41, v42);
    v48 = *(_QWORD *)(a2 + 16);
    if ( (v48 & 4) != 0 )
      v49 = *(_QWORD *)((v48 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    else
      v49 = v48 & 0xFFFFFFFFFFFFFFF8LL;
    sub_B90130((__int64)v27, v49, v44, v45, v46, v47);
  }
  sub_B94AD0(*(__m128i **)(a1 + 24), v29, v39, v40, v41, v42);
  if ( !v14 )
  {
    v148[0] = v149;
    v148[1] = (void *)0x400000000LL;
    sub_BC4340((_QWORD *)a2, (__int64 *)v148);
    if ( LODWORD(v148[1]) )
    {
      v102 = 0;
      v103 = 8LL * (unsigned int)(LODWORD(v148[1]) - 1) + 8;
      v124 = a1 + 80;
      do
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)((char *)v148[0] + v102) + 104LL)
                                                       + 24LL))(*(_QWORD *)(*(_QWORD *)((char *)v148[0] + v102) + 104LL)) )
        {
          v104 = *(_QWORD *)((char *)v148[0] + v102);
          v105 = *(unsigned int *)(a1 + 72);
          if ( v105 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 76) )
          {
            v125 = *(_QWORD *)((char *)v148[0] + v102);
            sub_2237220(a1 + 64, v124, v105 + 1, 16);
            v105 = *(unsigned int *)(a1 + 72);
            v104 = v125;
          }
          v106 = (unsigned __int64 *)(*(_QWORD *)(a1 + 64) + 16 * v105);
          *v106 = v29;
          v106[1] = v104;
          ++*(_DWORD *)(a1 + 72);
        }
        v102 += 8;
      }
      while ( v103 != v102 );
    }
    if ( v148[0] != v149 )
      free(v148[0]);
  }
LABEL_28:
  v50 = (char *)ptr;
  if ( !(_BYTE)v145 )
  {
    if ( (_DWORD)v142 )
    {
      v51 = 0;
      v52 = 8LL * (unsigned int)(v142 - 1) + 8;
      do
      {
        v53 = *(void ***)&v50[v51];
        if ( v53 )
        {
          if ( *v53 != v53 + 2 )
            free(*v53);
          operator delete(v53, 0x30u);
          v50 = (char *)ptr;
        }
        v51 += 8;
      }
      while ( v51 != v52 );
    }
    LOBYTE(v145) = 1;
    *(_QWORD *)(v137 + 11280) = v144;
  }
  if ( v50 != (char *)&v143 )
    free(v50);
  if ( (v138 & 1) == 0 )
    operator delete(v139, 16LL * v140, 8);
  return v29;
}
