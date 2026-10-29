void __fastcall sub_7B2160(__int64 a1, const __m128i **a2, unsigned int a3)
{
  __int64 v5; // r13
  __int64 v6; // rdx
  unsigned __int64 v7; // r15
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  const __m128i **v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rax
  const __m128i *v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rsi
  const __m128i *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  unsigned __int8 v26; // dl
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r12
  __int64 v34; // r12
  unsigned __int64 *v35; // rsi
  __int64 v36; // r8
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 **v42; // rax
  unsigned __int64 **v43; // rdx
  __int64 v44; // rsi
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // r8
  char v54; // al
  __int64 v55; // r8
  __int64 v56; // r8
  char v57; // dl
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rbp
  __int64 v64; // r8
  __int64 v65; // r8
  __int64 v66; // r8
  __int64 v67; // r8
  __int64 v68; // r8
  __int64 v69; // r8
  __int64 v70; // r8
  __int64 v71; // r8
  __int64 v72; // rbx
  __int64 v73; // rax
  unsigned __int64 v74; // rbp
  _QWORD *v75; // rax
  int v76; // ebx
  __int64 v77; // rsi
  __int64 v78; // rbp
  int v79; // eax
  __int64 v80; // rbx
  __int64 v81; // rbp
  __m128i *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  _QWORD *v85; // rax
  const __m128i *v86; // r13
  __int64 v87; // r12
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  char v94; // al
  char v95; // dl
  __int64 v96; // rax
  unsigned __int64 v97; // rdx
  char v98; // al
  char v99; // al
  char v100; // al
  _QWORD *v101; // rdi
  unsigned int i; // eax
  _QWORD *v103; // rdx
  _QWORD *v104; // rbx
  __int64 v105; // rdi
  __int64 v106; // r12
  _QWORD *v107; // rsi
  __int64 v108; // r12
  __int64 v109; // rdi
  __int64 v110; // r13
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rbx
  _QWORD *v114; // rax
  __int64 *v115; // rdx
  void *v116; // rdx
  void *v117; // rdi
  char v118; // dl
  __int64 v119; // rax
  unsigned __int64 v120; // rdx
  char v121; // al
  char v122; // bl
  __int64 v123; // rdi
  char v124; // al
  const __m128i **v125; // [rsp+8h] [rbp-1E0h]
  __int64 v126; // [rsp+10h] [rbp-1D8h]
  __int64 v127; // [rsp+10h] [rbp-1D8h]
  __int64 v128; // [rsp+10h] [rbp-1D8h]
  __int64 v129; // [rsp+10h] [rbp-1D8h]
  __int64 v130; // [rsp+10h] [rbp-1D8h]
  __int64 v131; // [rsp+10h] [rbp-1D8h]
  __int64 v132; // [rsp+10h] [rbp-1D8h]
  __int64 v133; // [rsp+10h] [rbp-1D8h]
  __int64 v134; // [rsp+10h] [rbp-1D8h]
  __int64 v135; // [rsp+10h] [rbp-1D8h]
  __int64 v136; // [rsp+10h] [rbp-1D8h]
  __int64 v137; // [rsp+10h] [rbp-1D8h]
  __int64 v138; // [rsp+10h] [rbp-1D8h]
  __int64 v139; // [rsp+10h] [rbp-1D8h]
  __int64 v140; // [rsp+10h] [rbp-1D8h]
  __int64 v141; // [rsp+10h] [rbp-1D8h]
  __int64 v142; // [rsp+10h] [rbp-1D8h]
  __int64 v143; // [rsp+10h] [rbp-1D8h]
  __int64 v144; // [rsp+10h] [rbp-1D8h]
  __int64 v145; // [rsp+10h] [rbp-1D8h]
  __int64 v146; // [rsp+10h] [rbp-1D8h]
  __int64 v147; // [rsp+10h] [rbp-1D8h]
  __int64 v148; // [rsp+10h] [rbp-1D8h]
  __int64 v149; // [rsp+10h] [rbp-1D8h]
  __int64 v150; // [rsp+10h] [rbp-1D8h]
  __int64 v151; // [rsp+10h] [rbp-1D8h]
  __int64 v152; // [rsp+10h] [rbp-1D8h]
  __int64 v153; // [rsp+10h] [rbp-1D8h]
  __int64 v154; // [rsp+10h] [rbp-1D8h]
  __int64 v155; // [rsp+10h] [rbp-1D8h]
  __int64 v156; // [rsp+10h] [rbp-1D8h]
  __int64 v157; // [rsp+10h] [rbp-1D8h]
  __int64 v158; // [rsp+10h] [rbp-1D8h]
  __int64 v159; // [rsp+10h] [rbp-1D8h]
  __int64 v160; // [rsp+10h] [rbp-1D8h]
  __int64 v161; // [rsp+10h] [rbp-1D8h]
  __int64 v162; // [rsp+10h] [rbp-1D8h]
  __int64 v163; // [rsp+10h] [rbp-1D8h]
  __int64 v164; // [rsp+10h] [rbp-1D8h]
  __int64 v165; // [rsp+10h] [rbp-1D8h]
  __int64 v166; // [rsp+10h] [rbp-1D8h]
  __int64 v167; // [rsp+10h] [rbp-1D8h]
  __int64 v168; // [rsp+10h] [rbp-1D8h]
  __int64 v169; // [rsp+10h] [rbp-1D8h]
  __int64 v170; // [rsp+10h] [rbp-1D8h]
  __int64 v171; // [rsp+10h] [rbp-1D8h]
  __int64 v172; // [rsp+10h] [rbp-1D8h]
  __int64 v173; // [rsp+10h] [rbp-1D8h]
  __int64 v174; // [rsp+10h] [rbp-1D8h]
  __int64 v175; // [rsp+10h] [rbp-1D8h]
  __int64 v176; // [rsp+18h] [rbp-1D0h]
  _QWORD *v177; // [rsp+18h] [rbp-1D0h]
  __int64 v178; // [rsp+20h] [rbp-1C8h]
  __int64 v179; // [rsp+28h] [rbp-1C0h]
  _QWORD *v180; // [rsp+30h] [rbp-1B8h]
  unsigned int v181; // [rsp+44h] [rbp-1A4h]
  __int64 v182; // [rsp+48h] [rbp-1A0h]
  void *ptr; // [rsp+50h] [rbp-198h] BYREF
  __int64 v184; // [rsp+58h] [rbp-190h]
  _BYTE v185[64]; // [rsp+60h] [rbp-188h] BYREF
  void *v186; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v187; // [rsp+A8h] [rbp-140h]
  _QWORD v188[8]; // [rsp+B0h] [rbp-138h] BYREF
  void *v189; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 v190; // [rsp+F8h] [rbp-F0h]
  int v191; // [rsp+100h] [rbp-E8h]
  char v192; // [rsp+104h] [rbp-E4h]
  char v193; // [rsp+108h] [rbp-E0h] BYREF
  void *v194; // [rsp+150h] [rbp-98h] BYREF
  __int64 v195; // [rsp+158h] [rbp-90h]
  int v196; // [rsp+160h] [rbp-88h]
  char v197; // [rsp+164h] [rbp-84h]
  char v198; // [rsp+168h] [rbp-80h] BYREF

  v180 = (_QWORD *)sub_798D40(a1);
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 24LL) & 1) == 0 )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 128) + 16LL) )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      v123 = *(_QWORD *)(a1 + 128);
      if ( (*(_BYTE *)(v123 + 24) & 1) != 0 )
        sub_7A2E20(v123);
    }
  }
  if ( a3 )
  {
    if ( (*(_BYTE *)(v180[270] + 1LL) & 0x40) == 0 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      **(_BYTE **)(a1 + 128) &= ~0x80u;
    }
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~1u;
  }
  v191 = 0;
  v189 = &v193;
  v5 = 24LL * a3;
  v6 = v180[274];
  v180[284] += v5;
  v190 = 8;
  ptr = v185;
  v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v192 = 1;
  v184 = 0x800000000LL;
  v182 = (__int64)(v180 + 274);
  if ( v180[275] < v5 + v7 || !v6 )
  {
    v9 = (_QWORD *)sub_7A1DE0(v182, 24LL * a3, 3);
    v7 = (unsigned __int64)v9;
    v8 = &v9[(unsigned __int64)v5 / 8];
    if ( a3 )
      goto LABEL_9;
LABEL_226:
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    *(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) = v7;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 16LL) = 0;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    goto LABEL_126;
  }
  v180[274] = v5 + v7;
  v8 = (_QWORD *)(v7 + v5);
  v9 = (_QWORD *)v7;
  if ( !a3 )
    goto LABEL_226;
  do
  {
LABEL_9:
    *v9 = 0;
    v9 += 3;
    *((_DWORD *)v9 - 4) = 0;
  }
  while ( v9 != v8 );
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) = v7;
  v10 = a2;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  v181 = a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 128) + 16LL) = a3;
  v11 = 0;
  v125 = &a2[a3];
  do
  {
    v17 = *(_QWORD *)(a1 + 104);
    v18 = *v10;
    sub_6E77B0((unsigned __int64 *)(v17 + 96), v17);
    v19 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v19 + 24) & 1) != 0 )
      v12 = sub_7A2E20(v19);
    else
      v12 = *(_QWORD *)(v19 + 24);
    *(__m128i *)(v12 + v11) = _mm_loadu_si128(v18);
    *(_QWORD *)(v12 + v11 + 16) = v18[1].m128i_i64[0];
    v13 = *v10;
    v14 = *(_QWORD *)(*(_QWORD *)(*v10)[1].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
    v15 = *(_QWORD *)(v14 + 8);
    if ( (v15 & 7) != 0 || (v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL), (v15 & 8) != 0) )
      v16 = (_QWORD *)(sub_B0CF30(*(_QWORD *)(*v10)[1].m128i_i64[0], v17) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(*v16 + 17LL) & 4) == 0 )
    {
      v126 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v126 + 104) + 96LL), *(_QWORD *)(v126 + 104));
      v20 = v126;
      if ( (*(_BYTE *)(*(_QWORD *)(v126 + 128) + 1LL) & 0x40) != 0 || (v21 = sub_7868A0(v126), v20 = v126, v21) )
      {
        v127 = v20;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v22 = v127;
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 0x40) != 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          v22 = v127;
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x10u;
        }
        v128 = v22;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v20 = v128;
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) |= 0x40u;
      }
      v129 = v20;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v20 + 104) + 96LL), *(_QWORD *)(v20 + 104));
      v23 = v129;
      if ( *(char *)(*(_QWORD *)(v129 + 128) + 1LL) < 0
        || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v129 + 104) + 96LL), *(_QWORD *)(v129 + 104)),
            v23 = v129,
            (*(_BYTE *)(*(_QWORD *)(v129 + 128) + 2LL) & 7) != 0) )
      {
        v130 = v23;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v24 = v130;
        if ( *(char *)(*(_QWORD *)(a1 + 128) + 1LL) < 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          v24 = v130;
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x20u;
        }
        v131 = v24;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v23 = v131;
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) |= 0x80u;
      }
      v132 = v23;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v23 + 104) + 96LL), *(_QWORD *)(v23 + 104));
      v25 = v132;
      if ( (*(_BYTE *)(*(_QWORD *)(v132 + 128) + 1LL) & 2) == 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v25 = v132;
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~2u;
      }
      v26 = v13->m128i_u8[12];
      v27 = (v26 >> 2) & 3;
      if ( (~v26 & 0xC) == 0 )
        v27 = v26 & 2;
      if ( v27 )
      {
        v169 = v25;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        **(_BYTE **)(a1 + 128) &= ~0x80u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v25 = v169;
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) &= ~0x40u;
      }
      v133 = v25;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v25 + 104) + 96LL), *(_QWORD *)(v25 + 104));
      v28 = v133;
      if ( (*(_BYTE *)(*(_QWORD *)(v133 + 128) + 1LL) & 4) != 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) |= 4u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v28 = v133;
        **(_BYTE **)(a1 + 128) &= ~0x80u;
      }
      v134 = v28;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v28 + 104) + 96LL), *(_QWORD *)(v28 + 104));
      v29 = v134;
      if ( (*(_BYTE *)(*(_QWORD *)(v134 + 128) + 1LL) & 0x10) == 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v29 = v134;
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x10u;
      }
      v135 = v29;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v29 + 104) + 96LL), *(_QWORD *)(v29 + 104));
      v30 = v135;
      if ( (*(_BYTE *)(*(_QWORD *)(v135 + 128) + 1LL) & 0x20) == 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v30 = v135;
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x20u;
      }
      v136 = v30;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      v31 = v136;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 0x20) == 0 )
      {
        v94 = sub_B19540(*v16, v180);
        v31 = v136;
        if ( !v94 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          v31 = v136;
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) |= 0x20u;
        }
      }
      v137 = v31;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
      v32 = v137;
      v33 = *(_QWORD *)(v137 + 128);
      if ( (*(_BYTE *)(v33 + 32) & 1) != 0 )
      {
        v92 = sub_798D40(*(_QWORD *)(v33 + 88));
        v93 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v92 + 18200) + 56LL))(
                *(_QWORD *)(v92 + 18200),
                *(_QWORD *)(v33 + 32) >> 1);
        v32 = v137;
        *(_QWORD *)(v33 + 32) = v93;
        v34 = v93;
      }
      else
      {
        v34 = *(_QWORD *)(v33 + 32);
      }
      v138 = v32;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v32 + 104) + 96LL), *(_QWORD *)(v32 + 104));
      v35 = *(unsigned __int64 **)(v138 + 104);
      v176 = v138;
      v139 = v34 + 24LL * *(unsigned int *)(*(_QWORD *)(v138 + 128) + 20LL);
      sub_6E77B0(v35 + 12, (__int64)v35);
      v36 = v176;
      v37 = *(_QWORD *)(v176 + 128);
      if ( (*(_BYTE *)(v37 + 32) & 1) != 0 )
      {
        v91 = sub_7A2E60(v37);
        v36 = v176;
        v38 = v91;
      }
      else
      {
        v38 = *(_QWORD *)(v37 + 32);
      }
      if ( v38 != v139 )
      {
        v178 = v36;
        v179 = v11;
        v177 = v16;
        v39 = v38;
        while ( 1 )
        {
          v40 = *(_QWORD *)(**(_QWORD **)(v39 + 16) & 0xFFFFFFFFFFFFFFF0LL);
          v41 = *(_QWORD *)(v40 + 8);
          if ( (v41 & 7) != 0 || (v41 & 8) != 0 )
            v40 = sub_B0CF30(**(_QWORD **)(v39 + 16), v35);
          v35 = *(unsigned __int64 **)&byte_8[v40 & 0xFFFFFFFFFFFFFFF0LL];
          if ( v192 )
          {
            v42 = (unsigned __int64 **)v189;
            v43 = (unsigned __int64 **)((char *)v189 + 8 * HIDWORD(v190));
            if ( v189 != v43 )
            {
              while ( v35 != *v42 )
              {
                if ( v43 == ++v42 )
                  goto LABEL_98;
              }
              goto LABEL_56;
            }
LABEL_98:
            if ( HIDWORD(v190) < (unsigned int)v190 )
            {
              ++HIDWORD(v190);
              *v43 = v35;
              goto LABEL_89;
            }
          }
          sub_25D5540(&v189, v35);
          if ( v57 )
          {
LABEL_89:
            v58 = (unsigned int)v184;
            v59 = (unsigned int)v184 + 1LL;
            if ( HIDWORD(v184) < v59 )
            {
              v35 = (unsigned __int64 *)v185;
              sub_25D6060(&ptr, v185, v59, 8);
              v58 = (unsigned int)v184;
            }
            *((_QWORD *)ptr + v58) = v39;
            LODWORD(v184) = v184 + 1;
            v60 = *(_QWORD *)(**(_QWORD **)(v39 + 16) & 0xFFFFFFFFFFFFFFF0LL);
            v61 = *(_QWORD *)(v60 + 8);
            if ( (v61 & 7) != 0 || (v61 & 8) != 0 )
              v60 = sub_B0CF30(**(_QWORD **)(v39 + 16), v35);
            v62 = sub_B0E910(*(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL));
            v63 = v62;
            if ( v62 )
            {
              sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v62 + 104) + 96LL), *(_QWORD *)(v62 + 104));
              if ( (*(_BYTE *)(*(_QWORD *)(v63 + 128) + 10LL) & 2) == 0 )
              {
                sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v63 + 104) + 96LL), *(_QWORD *)(v63 + 104));
                if ( (*(_BYTE *)(*(_QWORD *)(v63 + 128) + 9LL) & 2) != 0
                  || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v63 + 104) + 96LL), *(_QWORD *)(v63 + 104)),
                      *(char *)(*(_QWORD *)(v63 + 128) + 9LL) >= 0)
                  || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v63 + 104) + 96LL), *(_QWORD *)(v63 + 104)),
                      (*(_BYTE *)(*(_QWORD *)(v63 + 128) + 1LL) & 8) == 0)
                  && (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v63 + 104) + 96LL), *(_QWORD *)(v63 + 104)),
                      (*(_BYTE *)(*(_QWORD *)(v63 + 128) + 9LL) & 0x40) == 0) )
                {
                  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
                  *(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) &= ~0x40u;
                }
              }
            }
            v35 = *(unsigned __int64 **)(a1 + 104);
            v39 += 24;
            sub_6E77B0(v35 + 12, (__int64)v35);
            **(_BYTE **)(a1 + 128) &= ~0x80u;
            if ( v39 == v139 )
            {
LABEL_57:
              v16 = v177;
              v36 = v178;
              v11 = v179;
              break;
            }
          }
          else
          {
LABEL_56:
            v39 += 24;
            if ( v39 == v139 )
              goto LABEL_57;
          }
        }
      }
      if ( (v13->m128i_i8[12] & 1) == 0 )
      {
        v150 = v36;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v36 + 104) + 96LL), *(_QWORD *)(v36 + 104));
        v64 = v150;
        if ( (*(_BYTE *)(*(_QWORD *)(v150 + 128) + 9LL) & 1) == 0 && (v99 = sub_7A9790(v150), v64 = v150, !v99)
          || (v151 = v64,
              sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v64 + 104) + 96LL), *(_QWORD *)(v64 + 104)),
              v64 = v151,
              *(char *)(*(_QWORD *)(v151 + 128) + 4LL) >= 0) )
        {
          v172 = v64;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x80u;
          v64 = v172;
        }
        v152 = v64;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v64 + 104) + 96LL), *(_QWORD *)(v64 + 104));
        v65 = v152;
        if ( (*(_BYTE *)(*(_QWORD *)(v152 + 128) + 5LL) & 1) == 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x100u;
          v65 = v152;
        }
        v153 = v65;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v65 + 104) + 96LL), *(_QWORD *)(v65 + 104));
        v66 = v153;
        if ( (*(_BYTE *)(*(_QWORD *)(v153 + 128) + 5LL) & 0x40) == 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x4000u;
          v66 = v153;
        }
        v154 = v66;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v66 + 104) + 96LL), *(_QWORD *)(v66 + 104));
        v67 = v154;
        if ( (*(_BYTE *)(*(_QWORD *)(v154 + 128) + 9LL) & 4) == 0
          && ((sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v154 + 104) + 96LL), *(_QWORD *)(v154 + 104)),
               v67 = v154,
               (*(_BYTE *)(*(_QWORD *)(v154 + 128) + 9LL) & 4) != 0)
           || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v154 + 104) + 96LL), *(_QWORD *)(v154 + 104)),
               v67 = v154,
               (**(_BYTE **)(v154 + 128) & 4) != 0)
           || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v154 + 104) + 96LL), *(_QWORD *)(v154 + 104)),
               v67 = v154,
               (**(_BYTE **)(v154 + 128) & 0x10) != 0)
           || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v154 + 104) + 96LL), *(_QWORD *)(v154 + 104)),
               v67 = v154,
               (**(_BYTE **)(v154 + 128) & 0x20) != 0)
           || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v154 + 104) + 96LL), *(_QWORD *)(v154 + 104)),
               v67 = v154,
               ((**(_BYTE **)(v154 + 128) >> 1) & 0x3Fu) > 0x1F))
          || (v155 = v67,
              sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v67 + 104) + 96LL), *(_QWORD *)(v67 + 104)),
              v67 = v155,
              (*(_BYTE *)(*(_QWORD *)(v155 + 128) + 5LL) & 2) == 0) )
        {
          v165 = v67;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x200u;
          v67 = v165;
        }
        v156 = v67;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v67 + 104) + 96LL), *(_QWORD *)(v67 + 104));
        v68 = v156;
        if ( (*(_BYTE *)(*(_QWORD *)(v156 + 128) + 9LL) & 4) == 0
          && ((sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v156 + 104) + 96LL), *(_QWORD *)(v156 + 104)),
               v68 = v156,
               (*(_BYTE *)(*(_QWORD *)(v156 + 128) + 9LL) & 4) != 0)
           || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v156 + 104) + 96LL), *(_QWORD *)(v156 + 104)),
               v68 = v156,
               (**(_BYTE **)(v156 + 128) & 4) != 0)
           || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v156 + 104) + 96LL), *(_QWORD *)(v156 + 104)),
               v68 = v156,
               (**(_BYTE **)(v156 + 128) & 0x10) != 0)
           || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v156 + 104) + 96LL), *(_QWORD *)(v156 + 104)),
               v68 = v156,
               (**(_BYTE **)(v156 + 128) & 0x20) != 0)
           || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v156 + 104) + 96LL), *(_QWORD *)(v156 + 104)),
               v68 = v156,
               ((**(_BYTE **)(v156 + 128) >> 1) & 0x3Fu) > 0x1F))
          || (v157 = v68,
              sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v68 + 104) + 96LL), *(_QWORD *)(v68 + 104)),
              v68 = v157,
              *(char *)(*(_QWORD *)(v157 + 128) + 5LL) >= 0) )
        {
          v164 = v68;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x8000u;
          v68 = v164;
        }
        v158 = v68;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v68 + 104) + 96LL), *(_QWORD *)(v68 + 104));
        v69 = v158;
        if ( (*(_BYTE *)(*(_QWORD *)(v158 + 128) + 5LL) & 4) == 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x400u;
          v69 = v158;
        }
        v159 = v69;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v69 + 104) + 96LL), *(_QWORD *)(v69 + 104));
        v70 = v159;
        if ( (*(_BYTE *)(*(_QWORD *)(v159 + 128) + 9LL) & 0x10) == 0 && (v98 = sub_7A9860(v159), v70 = v159, !v98)
          || (v160 = v70,
              sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v70 + 104) + 96LL), *(_QWORD *)(v70 + 104)),
              v70 = v160,
              (*(_BYTE *)(*(_QWORD *)(v160 + 128) + 5LL) & 8) == 0) )
        {
          v171 = v70;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x800u;
          v70 = v171;
        }
        v161 = v70;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v70 + 104) + 96LL), *(_QWORD *)(v70 + 104));
        v71 = v161;
        if ( (*(_BYTE *)(*(_QWORD *)(v161 + 128) + 8LL) & 8) == 0 )
        {
          v121 = sub_7A9790(v161);
          v71 = v161;
          if ( !v121 || (v124 = sub_7B1E10(v161), v71 = v161, !v124) )
          {
            v174 = v71;
            v122 = *(_BYTE *)(v180[270] + 2LL) & 1;
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
            v71 = v174;
            *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) = (4 * v122) | *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 0xFB;
          }
        }
        v162 = v71;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v71 + 104) + 96LL), *(_QWORD *)(v71 + 104));
        v47 = v162;
        if ( (*(_BYTE *)(*(_QWORD *)(v162 + 128) + 10LL) & 2) == 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v162 + 104) + 96LL), *(_QWORD *)(v162 + 104));
          v47 = v162;
          if ( (*(_BYTE *)(*(_QWORD *)(v162 + 128) + 9LL) & 2) != 0
            || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v162 + 104) + 96LL), *(_QWORD *)(v162 + 104)),
                v47 = v162,
                *(char *)(*(_QWORD *)(v162 + 128) + 9LL) >= 0)
            || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v162 + 104) + 96LL), *(_QWORD *)(v162 + 104)),
                v47 = v162,
                (*(_BYTE *)(*(_QWORD *)(v162 + 128) + 1LL) & 8) == 0)
            && (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v162 + 104) + 96LL), *(_QWORD *)(v162 + 104)),
                v47 = v162,
                (*(_BYTE *)(*(_QWORD *)(v162 + 128) + 9LL) & 0x40) == 0) )
          {
            v163 = v47;
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
            v47 = v163;
            *(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) &= ~0x80u;
          }
        }
LABEL_65:
        v141 = v47;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v47 + 104) + 96LL), *(_QWORD *)(v47 + 104));
        v48 = v141;
        if ( ((*(_WORD *)(*(_QWORD *)(v141 + 128) + 4LL) >> 7) & 0x3Fu) <= 0x1F )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x1000u;
          v48 = v141;
        }
        v142 = v48;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v48 + 104) + 96LL), *(_QWORD *)(v48 + 104));
        v49 = v142;
        if ( ((*(_DWORD *)(*(_QWORD *)(v142 + 128) + 4LL) >> 13) & 0x3Fu) <= 0x1F )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x40000u;
          v49 = v142;
        }
        v143 = v49;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v49 + 104) + 96LL), *(_QWORD *)(v49 + 104));
        v50 = v143;
        if ( *(char *)(*(_QWORD *)(v143 + 128) + 7LL) >= 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          v50 = v143;
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 7LL) &= ~0x80u;
        }
        v144 = v50;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v50 + 104) + 96LL), *(_QWORD *)(v50 + 104));
        v51 = v144;
        if ( (*(_BYTE *)(*(_QWORD *)(v144 + 128) + 10LL) & 8) != 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          v51 = v144;
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) |= 8u;
        }
        v145 = v51;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v51 + 104) + 96LL), *(_QWORD *)(v51 + 104));
        v52 = v145;
        if ( (*(_BYTE *)(*(_QWORD *)(v145 + 128) + 10LL) & 0x10) != 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          v52 = v145;
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) |= 0x10u;
        }
        v146 = v52;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v52 + 104) + 96LL), *(_QWORD *)(v52 + 104));
        v53 = v146;
        if ( (*(_BYTE *)(*(_QWORD *)(v146 + 128) + 10LL) & 4) == 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v146 + 104) + 96LL), *(_QWORD *)(v146 + 104));
          v53 = v146;
          if ( (*(_BYTE *)(*(_QWORD *)(v146 + 128) + 9LL) & 8) != 0
            || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v146 + 104) + 96LL), *(_QWORD *)(v146 + 104)),
                v53 = v146,
                (*(_BYTE *)(*(_QWORD *)(v146 + 128) + 10LL) & 1) == 0) )
          {
            v168 = v53;
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
            v53 = v168;
            *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) &= ~1u;
          }
        }
        v54 = *(_BYTE *)(v53 + 75);
        if ( (v54 & 2) != 0 )
        {
          *(_BYTE *)(a1 + 75) |= 2u;
          v54 = *(_BYTE *)(v53 + 75);
        }
        if ( (v54 & 4) != 0 )
          *(_BYTE *)(a1 + 75) |= 4u;
        if ( ((*(_BYTE *)(v53 + 76) >> 4) & 3) == 2 )
          *(_BYTE *)(a1 + 76) = *(_BYTE *)(a1 + 76) & 0xCF | 0x20;
        v147 = v53;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v53 + 104) + 96LL), *(_QWORD *)(v53 + 104));
        v55 = v147;
        if ( (*(_BYTE *)(*(_QWORD *)(v147 + 128) + 2LL) & 8) != 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          v55 = v147;
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) |= 8u;
          if ( (*(_BYTE *)(v147 + 76) & 4) == 0 )
          {
LABEL_84:
            if ( *(_BYTE *)(v55 + 73) >> 5 != 2 )
            {
              v148 = v55;
              sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v55 + 104) + 96LL), *(_QWORD *)(v55 + 104));
              v55 = v148;
              if ( (**(_BYTE **)(v148 + 128) & 1) == 0 )
              {
                sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v148 + 104) + 96LL), *(_QWORD *)(v148 + 104));
                v55 = v148;
                if ( (*(_BYTE *)(*(_QWORD *)(v148 + 128) + 3LL) & 1) != 0 )
                {
                  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
                  v55 = v148;
                  *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 1u;
                }
              }
            }
            v149 = v55;
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v55 + 104) + 96LL), *(_QWORD *)(v55 + 104));
            v56 = v149;
            if ( (*(_BYTE *)(*(_QWORD *)(v149 + 128) + 3LL) & 2) != 0 )
            {
              sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v149 + 104) + 96LL), *(_QWORD *)(v149 + 104));
              v56 = v149;
              if ( (*(_BYTE *)(*(_QWORD *)(v149 + 128) + 8LL) & 2) != 0 || (v100 = sub_7A9790(v149), v56 = v149, v100) )
              {
                v166 = v56;
                sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
                v56 = v166;
                *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 2u;
              }
            }
            sub_7AE3E0(a1, v56);
            goto LABEL_16;
          }
        }
        else if ( (*(_BYTE *)(v147 + 76) & 4) == 0 )
        {
          goto LABEL_84;
        }
        v167 = v55;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v55 + 104) + 96LL), *(_QWORD *)(v55 + 104));
        v55 = v167;
        if ( **(char **)(v167 + 128) < 0 )
          *(_BYTE *)(a1 + 76) |= 4u;
        goto LABEL_84;
      }
      v44 = v16[1];
      if ( !v192 )
        goto LABEL_159;
      v45 = v189;
      v46 = (char *)v189 + 8 * HIDWORD(v190);
      if ( v189 != v46 )
      {
        while ( v44 != *v45 )
        {
          if ( v46 == ++v45 )
            goto LABEL_158;
        }
        goto LABEL_64;
      }
LABEL_158:
      if ( HIDWORD(v190) < (unsigned int)v190 )
      {
        ++HIDWORD(v190);
        *v46 = v44;
      }
      else
      {
LABEL_159:
        v170 = v36;
        sub_25D5540(&v189, v44);
        v36 = v170;
        if ( !v95 )
        {
LABEL_64:
          v140 = v36;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~2u;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          **(_BYTE **)(a1 + 128) &= ~0x80u;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= 0xF07Fu;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= 0xFFFC1FFF;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x10u;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x20u;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) &= ~4u;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) &= ~0x10u;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v140 + 104) + 96LL), *(_QWORD *)(v140 + 104));
          v47 = v140;
          if ( (*(_BYTE *)(*(_QWORD *)(v140 + 128) + 10LL) & 2) == 0 )
          {
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v140 + 104) + 96LL), *(_QWORD *)(v140 + 104));
            v47 = v140;
            if ( (*(_BYTE *)(*(_QWORD *)(v140 + 128) + 9LL) & 2) != 0
              || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v140 + 104) + 96LL), *(_QWORD *)(v140 + 104)),
                  v47 = v140,
                  *(char *)(*(_QWORD *)(v140 + 128) + 9LL) >= 0)
              || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v140 + 104) + 96LL), *(_QWORD *)(v140 + 104)),
                  v47 = v140,
                  (*(_BYTE *)(*(_QWORD *)(v140 + 128) + 1LL) & 8) == 0)
              && (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v140 + 104) + 96LL), *(_QWORD *)(v140 + 104)),
                  v47 = v140,
                  (*(_BYTE *)(*(_QWORD *)(v140 + 128) + 9LL) & 0x40) == 0) )
            {
              v173 = v47;
              sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
              v47 = v173;
              *(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) &= ~0x40u;
            }
          }
          goto LABEL_65;
        }
      }
      v96 = (unsigned int)v184;
      v97 = (unsigned int)v184 + 1LL;
      if ( HIDWORD(v184) < v97 )
      {
        v175 = v36;
        sub_25D6060(&ptr, v185, v97, 8);
        v96 = (unsigned int)v184;
        v36 = v175;
      }
      *((_QWORD *)ptr + v96) = v13;
      LODWORD(v184) = v184 + 1;
      goto LABEL_64;
    }
LABEL_16:
    ++v10;
    v11 += 24;
  }
  while ( v10 != v125 );
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 0x10) == 0 || v181 <= 1 )
    goto LABEL_126;
  v196 = 0;
  v194 = &v198;
  v101 = v188;
  v197 = 1;
  v195 = 8;
  v186 = v188;
  v188[0] = a1;
  v187 = 0x800000001LL;
  for ( i = 1; ; i = v187 )
  {
    v103 = &v101[i];
    do
    {
      if ( !i )
      {
        if ( v101 != v188 )
          free(v101);
        if ( !v197 )
          free(v194);
        goto LABEL_126;
      }
      v104 = (_QWORD *)*(v103 - 1);
      --i;
      --v103;
      LODWORD(v187) = i;
    }
    while ( (*(_BYTE *)(v104[6] + 17LL) & 4) != 0 );
    sub_6E77B0((unsigned __int64 *)(v104[13] + 96LL), v104[13]);
    v105 = v104[16];
    v106 = (*(_BYTE *)(v105 + 24) & 1) != 0 ? sub_7A2E20(v105) : *(_QWORD *)(v105 + 24);
    sub_6E77B0((unsigned __int64 *)(v104[13] + 96LL), v104[13]);
    v107 = (_QWORD *)v104[13];
    v108 = v106 + 24LL * *(unsigned int *)(v104[16] + 16LL);
    sub_6E77B0(v107 + 12, (__int64)v107);
    v109 = v104[16];
    v110 = (*(_BYTE *)(v109 + 24) & 1) != 0 ? sub_7A2E20(v109) : *(_QWORD *)(v109 + 24);
    if ( v108 != v110 )
      break;
LABEL_197:
    v101 = v186;
  }
  while ( 1 )
  {
    v111 = *(_QWORD *)(**(_QWORD **)(v110 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    v112 = *(_QWORD *)(v111 + 8);
    if ( (v112 & 7) != 0 || (v112 & 8) != 0 )
      v111 = sub_B0CF30(**(_QWORD **)(v110 + 16), v107);
    v113 = sub_B0E910(*(_QWORD *)(v111 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v113 )
      goto LABEL_196;
    if ( v197 )
    {
      v114 = v194;
      v115 = (__int64 *)((char *)v194 + 8 * HIDWORD(v195));
      if ( v194 != v115 )
      {
        while ( v113 != *v114 )
        {
          if ( v115 == ++v114 )
            goto LABEL_198;
        }
        v116 = v186;
        if ( v186 == v188 )
          goto LABEL_191;
LABEL_190:
        free(v116);
        if ( v197 )
          goto LABEL_191;
        v117 = v194;
        goto LABEL_245;
      }
LABEL_198:
      if ( HIDWORD(v195) < (unsigned int)v195 )
      {
        ++HIDWORD(v195);
        *v115 = v113;
        goto LABEL_193;
      }
    }
    v107 = (_QWORD *)v113;
    sub_25D5540(&v194, v113);
    v117 = v194;
    if ( !v118 )
      break;
LABEL_193:
    v119 = (unsigned int)v187;
    v120 = (unsigned int)v187 + 1LL;
    if ( HIDWORD(v187) < v120 )
    {
      v107 = v188;
      sub_25D6060(&v186, v188, v120, 8);
      v119 = (unsigned int)v187;
    }
    *((_QWORD *)v186 + v119) = v113;
    LODWORD(v187) = v187 + 1;
LABEL_196:
    v110 += 24;
    if ( v110 == v108 )
      goto LABEL_197;
  }
  v116 = v186;
  if ( v186 != v188 )
    goto LABEL_190;
  if ( !v197 )
LABEL_245:
    free(v117);
LABEL_191:
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x10u;
LABEL_126:
  if ( (_DWORD)v184 )
  {
    v72 = 24LL * (unsigned int)v184;
    v73 = v180[274];
    v180[284] += v72;
    v74 = (v73 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v180[275] >= v72 + v74 && v73 )
      v180[274] = v72 + v74;
    else
      v74 = sub_7A1DE0(v182, v72, 3);
    v75 = (_QWORD *)v74;
    do
    {
      *v75 = 0;
      v75 += 3;
      *((_DWORD *)v75 - 4) = 0;
    }
    while ( (_QWORD *)(v74 + v72) != v75 );
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    v76 = v184;
    *(_QWORD *)(*(_QWORD *)(a1 + 128) + 32LL) = v74;
    v77 = *(_QWORD *)(a1 + 104);
    sub_6E77B0((unsigned __int64 *)(v77 + 96), v77);
    v78 = (unsigned int)v184;
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 20LL) = v76;
    v79 = v78;
    v80 = 0;
    v81 = 8 * v78;
    if ( v79 )
    {
      do
      {
        v83 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)((char *)ptr + v80) + 16LL) & 0xFFFFFFFFFFFFFFF0LL);
        v84 = *(_QWORD *)(v83 + 8);
        if ( (v84 & 7) != 0 || (v84 & 8) != 0 )
          v83 = sub_B0CF30(**(_QWORD **)(*(_QWORD *)((char *)ptr + v80) + 16LL), v77);
        v85 = (_QWORD *)(v83 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(*v85 + 17LL) & 4) == 0 )
        {
          v90 = sub_B0E910(*v85);
          sub_7AE3E0(a1, v90);
        }
        v77 = *(_QWORD *)(a1 + 104);
        v86 = *(const __m128i **)((char *)ptr + v80);
        sub_6E77B0((unsigned __int64 *)(v77 + 96), v77);
        v87 = *(_QWORD *)(a1 + 128);
        if ( (*(_BYTE *)(v87 + 32) & 1) != 0 )
        {
          v88 = sub_798D40(*(_QWORD *)(v87 + 88));
          v77 = *(_QWORD *)(v87 + 32) >> 1;
          v89 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v88 + 18200) + 56LL))(
                  *(_QWORD *)(v88 + 18200),
                  v77);
          *(_QWORD *)(v87 + 32) = v89;
          v82 = (__m128i *)(3 * v80 + v89);
        }
        else
        {
          v82 = (__m128i *)(*(_QWORD *)(v87 + 32) + 3 * v80);
        }
        v80 += 8;
        *v82 = _mm_loadu_si128(v86);
        v82[1].m128i_i64[0] = v86[1].m128i_i64[0];
      }
      while ( v81 != v80 );
    }
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) &= ~0x40u;
  if ( ptr != v185 )
    free(ptr);
  if ( !v192 )
    free(v189);
}

