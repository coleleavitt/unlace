__int64 __fastcall sub_50E970(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r15
  __int64 v4; // r13
  unsigned int v5; // eax
  void *v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // r14
  __int32 v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edx
  void *v15; // r15
  __int64 v16; // r14
  __int32 v17; // eax
  int v18; // eax
  void *v19; // rbp
  void *v20; // rbp
  unsigned int v21; // eax
  void *v22; // rdi
  __int64 v23; // rdx
  unsigned int v24; // ecx
  __int64 v25; // r14
  __int32 v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rdx
  unsigned int v30; // ecx
  void *v31; // r15
  __int64 v32; // r14
  __int32 v33; // eax
  int v34; // eax
  void *v35; // rbp
  void *v36; // rbp
  void *v37; // r14
  void *v38; // rdi
  void *v39; // rbp
  void *v40; // rbp
  void *v41; // rbp
  unsigned int v42; // eax
  void *v43; // rdi
  __int64 v44; // rdx
  unsigned int v45; // ecx
  const __m128i *v46; // r14
  __int32 v47; // eax
  __int32 v48; // eax
  __int32 v49; // eax
  void *v50; // rdi
  __int32 v51; // eax
  __int64 v52; // rdx
  __m128i v53; // xmm0
  _QWORD *v54; // rdi
  __int64 v55; // rsi
  unsigned int v56; // eax
  __int64 v57; // rdx
  unsigned int v58; // ecx
  const __m128i *v59; // r14
  void *v60; // rdi
  __int32 v61; // eax
  __int32 v62; // eax
  __int32 v63; // eax
  void *v64; // rdi
  __int32 v65; // eax
  __m128i v66; // xmm0
  void *v67; // r14
  void *v68; // r13
  void *v69; // r13
  void *v70; // r13
  void *v71; // r13
  void *v72; // rbx
  int v73; // edx
  int v74; // ecx
  int v75; // r8d
  int v76; // r9d
  void *v77; // rbx
  void *v79; // rdi
  void *v80; // rdi
  void *v81; // rdi
  void *v82; // r14
  void *v83; // r14
  void *v84; // r14
  void *v85; // rbp
  void *v86; // rbp
  void *v87; // rbp
  void *v88; // rbp
  void *v89; // rbp
  void *v90; // r14
  void *v91; // rdi
  void *v92; // rbp
  void *v93; // rbp
  void *v94; // rbp
  void *v95; // rbp
  void *v96; // rbp
  void *v97; // rdi
  void *v98; // rdi
  void *v99; // rdi
  void *v100; // r14
  void *v101; // r14
  void *v102; // r14
  void *v103; // rbp
  void *v104; // rbp
  void *v105; // rbp
  void *v106; // rbp
  void *v107; // rbp
  void *v108; // rbp
  void *v109; // rbp
  void *v110; // rbp
  __m128i *v111; // [rsp+0h] [rbp-208h]
  void *v112; // [rsp+0h] [rbp-208h]
  void *v113; // [rsp+0h] [rbp-208h]
  void *v114; // [rsp+0h] [rbp-208h]
  void *v115; // [rsp+0h] [rbp-208h]
  void *v116; // [rsp+0h] [rbp-208h]
  void *v117; // [rsp+0h] [rbp-208h]
  void *v118; // [rsp+0h] [rbp-208h]
  void *v119; // [rsp+0h] [rbp-208h]
  void *v120; // [rsp+0h] [rbp-208h]
  void *v121; // [rsp+0h] [rbp-208h]
  void *v122; // [rsp+0h] [rbp-208h]
  void *v123; // [rsp+0h] [rbp-208h]
  void *v124; // [rsp+0h] [rbp-208h]
  void *v125; // [rsp+0h] [rbp-208h]
  void *v126; // [rsp+0h] [rbp-208h]
  void *v127; // [rsp+0h] [rbp-208h]
  int *v128; // [rsp+8h] [rbp-200h]
  void *v129; // [rsp+8h] [rbp-200h]
  void *v130; // [rsp+8h] [rbp-200h]
  void *v131; // [rsp+8h] [rbp-200h]
  void *v132; // [rsp+8h] [rbp-200h]
  void *v133; // [rsp+8h] [rbp-200h]
  void *v134; // [rsp+8h] [rbp-200h]
  void *v135; // [rsp+8h] [rbp-200h]
  int *v136; // [rsp+10h] [rbp-1F8h]
  void *v137; // [rsp+10h] [rbp-1F8h]
  void *v138; // [rsp+10h] [rbp-1F8h]
  __m128i *v139; // [rsp+18h] [rbp-1F0h]
  int *v140; // [rsp+20h] [rbp-1E8h]
  void *v141; // [rsp+28h] [rbp-1E0h]
  int v142; // [rsp+30h] [rbp-1D8h]
  bool v143; // [rsp+37h] [rbp-1D1h] BYREF
  unsigned int v144; // [rsp+38h] [rbp-1D0h] BYREF
  unsigned int v145; // [rsp+3Ch] [rbp-1CCh] BYREF
  int v146[2]; // [rsp+40h] [rbp-1C8h] BYREF
  int v147[2]; // [rsp+48h] [rbp-1C0h]
  int v148[2]; // [rsp+50h] [rbp-1B8h] BYREF
  int v149[2]; // [rsp+58h] [rbp-1B0h]
  int v150; // [rsp+60h] [rbp-1A8h] BYREF
  char v151; // [rsp+64h] [rbp-1A4h]
  __int64 v152; // [rsp+68h] [rbp-1A0h]
  int v153; // [rsp+70h] [rbp-198h] BYREF
  char v154; // [rsp+74h] [rbp-194h]
  __int64 v155; // [rsp+78h] [rbp-190h]
  __m128i v156; // [rsp+80h] [rbp-188h] BYREF
  char v157[8]; // [rsp+90h] [rbp-178h] BYREF
  __int64 v158; // [rsp+98h] [rbp-170h] BYREF
  _QWORD v159[2]; // [rsp+A0h] [rbp-168h] BYREF
  __int32 v160; // [rsp+B0h] [rbp-158h]
  _QWORD v161[2]; // [rsp+B8h] [rbp-150h] BYREF
  _QWORD v162[2]; // [rsp+C8h] [rbp-140h] BYREF
  __int16 v163; // [rsp+D8h] [rbp-130h]
  __m128i v164; // [rsp+E0h] [rbp-128h]
  __m128i v165; // [rsp+F0h] [rbp-118h] BYREF
  __int64 v166; // [rsp+100h] [rbp-108h] BYREF
  __int64 v167; // [rsp+108h] [rbp-100h] BYREF
  _QWORD v168[2]; // [rsp+110h] [rbp-F8h] BYREF
  __int32 v169; // [rsp+120h] [rbp-E8h]
  _QWORD v170[2]; // [rsp+128h] [rbp-E0h] BYREF
  _QWORD v171[2]; // [rsp+138h] [rbp-D0h] BYREF
  __int16 v172; // [rsp+148h] [rbp-C0h]
  __m128i v173; // [rsp+150h] [rbp-B8h]
  __m128i v174; // [rsp+160h] [rbp-A8h] BYREF
  int v175[2]; // [rsp+170h] [rbp-98h] BYREF
  __int64 v176; // [rsp+178h] [rbp-90h]
  int v177[6]; // [rsp+180h] [rbp-88h] BYREF
  _BYTE v178[16]; // [rsp+198h] [rbp-70h] BYREF
  int v179[24]; // [rsp+1A8h] [rbp-60h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v146 = 0;
  *(_QWORD *)v147 = 0;
  *(_QWORD *)v148 = 1;
  *(_QWORD *)v149 = 0;
  if ( sub_50D970(v4, (__int64)a2, &v144, (__int64)v146, &v145) )
  {
    v5 = v144;
    if ( v144 == -1 )
    {
      sub_B28C00(&v174, v4 + 40, v146, 1, 0, 0);
      sub_50E7C0(a1, v145, &v174);
      v85 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v178);
      sub_182CBA0(v85, v179);
      v86 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v175);
      sub_182CBA0(v86, v177);
      goto LABEL_75;
    }
    v6 = qword_1C7F2C0;
    if ( v145 == -1 )
    {
      v165.m128i_i8[4] &= 0xFCu;
      BYTE4(v166) &= 0xFCu;
      v165.m128i_i32[0] = 0;
      v165.m128i_i64[1] = 0;
      LODWORD(v166) = 1;
      v167 = 0;
      if ( (v146[1] & 1) != 0 )
      {
        v115 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, &v165, v146);
        v6 = v115;
      }
      else
      {
        v165.m128i_i32[0] = v146[0];
      }
      if ( (v148[1] & 1) != 0 )
      {
        sub_182C690(v6, &v166, v148);
      }
      else
      {
        BYTE4(v166) &= ~1u;
        LODWORD(v166) = v148[0];
      }
      sub_1831620(qword_1C7F2C0, &v165);
      sub_B28C00(&v174, v4 + 40, &v165, 1, 1, 0);
      sub_50E7C0(a1, v144, &v174);
      v87 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v178);
      sub_182CBA0(v87, v179);
      v88 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v175);
      sub_182CBA0(v88, v177);
      v89 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v165);
      sub_182CBA0(v89, &v166);
      goto LABEL_75;
    }
    do
    {
      v7 = v5;
      v8 = v5;
      v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL) + 4LL * v5);
    }
    while ( v8 != v5 );
    v9 = **(_QWORD **)(a1 + 144) + 112 * v7;
    v10 = *(_DWORD *)(v9 + 48);
    v156.m128i_i64[1] = 0;
    *(_QWORD *)v157 = 0;
    v156.m128i_i32[0] = v10;
    v158 = 1;
    v159[0] = 0;
    if ( (*(_BYTE *)(v9 + 60) & 1) != 0 )
    {
      v112 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, &v156.m128i_u64[1], v9 + 56);
      v6 = v112;
      if ( (*(_BYTE *)(v9 + 76) & 1) == 0 )
        goto LABEL_7;
    }
    else
    {
      v156.m128i_i32[2] = *(_DWORD *)(v9 + 56);
      if ( (*(_BYTE *)(v9 + 76) & 1) == 0 )
      {
LABEL_7:
        v11 = *(_DWORD *)(v9 + 72);
        BYTE4(v158) &= ~1u;
        LODWORD(v158) = v11;
        goto LABEL_8;
      }
    }
    sub_182C690(v6, &v158, v9 + 72);
LABEL_8:
    v12 = v145;
    do
    {
      v13 = v12;
      v14 = v12;
      v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL) + 4LL * v12);
    }
    while ( v14 != v12 );
    v15 = qword_1C7F2C0;
    v16 = **(_QWORD **)(a1 + 144) + 112 * v13;
    v17 = *(_DWORD *)(v16 + 8);
    v165.m128i_i64[1] = 0;
    v166 = 0;
    v165.m128i_i32[0] = v17;
    v167 = 1;
    v168[0] = 0;
    if ( (*(_BYTE *)(v16 + 20) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v165.m128i_u64[1], v16 + 16);
    else
      v165.m128i_i32[2] = *(_DWORD *)(v16 + 16);
    if ( (*(_BYTE *)(v16 + 36) & 1) != 0 )
    {
      sub_182C690(v15, &v167, v16 + 32);
    }
    else
    {
      v18 = *(_DWORD *)(v16 + 32);
      BYTE4(v167) &= ~1u;
      LODWORD(v167) = v18;
    }
    if ( v156.m128i_i32[0] == 1 )
    {
      v174 = 0u;
      v79 = qword_1C7F2C0;
      *(_QWORD *)v175 = 1;
      v176 = 0;
      if ( (v146[1] & 1) != 0 )
      {
        v131 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, &v174, v146);
        v79 = v131;
      }
      else
      {
        v174.m128i_i32[0] = v146[0];
      }
      if ( (v148[1] & 1) != 0 )
      {
        sub_182C690(v79, v175, v148);
      }
      else
      {
        LOBYTE(v175[1]) &= ~1u;
        v175[0] = v148[0];
      }
      v80 = qword_1C7F2C0;
      if ( v156.m128i_i32[2] )
      {
        if ( v174.m128i_i32[0] )
        {
          if ( (v175[1] & 1) != 0 || v175[0] != 1 || (v158 & 0x100000000LL) != 0 || (_DWORD)v158 != 1 )
          {
            sub_1851D20(qword_1C7F2C0, &v174, &v156.m128i_u64[1], &v174);
          }
          else
          {
            v121 = qword_1C7F2C0;
            sub_1831A80(qword_1C7F2C0, &v174, &v156.m128i_u64[1], &v174);
            sub_182CBA0(v121, v175);
            LOBYTE(v175[1]) &= ~1u;
            v175[0] = 1;
          }
        }
        else
        {
          if ( (v156.m128i_i8[12] & 1) != 0 )
          {
            v122 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, &v174, &v156.m128i_u64[1]);
            v80 = v122;
          }
          else
          {
            v174.m128i_i8[4] &= ~1u;
            v174.m128i_i32[0] = v156.m128i_i32[2];
          }
          if ( (v158 & 0x100000000LL) != 0 )
          {
            sub_182C690(v80, v175, &v158);
          }
          else
          {
            LOBYTE(v175[1]) &= ~1u;
            v175[0] = v158;
          }
        }
      }
      else
      {
        if ( (v174.m128i_i8[4] & 1) != 0 )
        {
          v119 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, &v174, &v174);
          v80 = v119;
        }
        else
        {
          v174.m128i_i8[4] &= ~1u;
        }
        if ( (v175[1] & 1) != 0 )
          sub_182C690(v80, v175, v175);
        else
          LOBYTE(v175[1]) &= ~1u;
      }
      v151 &= 0xFCu;
      v81 = qword_1C7F2C0;
      v154 &= 0xFCu;
      v150 = 0;
      v152 = 0;
      v153 = 1;
      v155 = 0;
      if ( (v174.m128i_i8[4] & 1) != 0 )
      {
        v118 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, &v150, &v174);
        v81 = v118;
      }
      else
      {
        v150 = v174.m128i_i32[0];
      }
      if ( (v175[1] & 1) != 0 )
      {
        sub_182C690(v81, &v153, v175);
      }
      else
      {
        v154 &= ~1u;
        v153 = v175[0];
      }
      v113 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v174);
      sub_182CBA0(v113, v175);
      sub_B28C00(&v174, v4 + 40, &v150, 1, 0, 0);
      sub_50E7C0(a1, v145, &v174);
      v82 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v178);
      sub_182CBA0(v82, v179);
      v83 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v175);
      sub_182CBA0(v83, v177);
      v84 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v150);
      sub_182CBA0(v84, &v153);
    }
    if ( v165.m128i_i32[0] == 1 )
    {
      v174 = 0u;
      v37 = qword_1C7F2C0;
      *(_QWORD *)v175 = 1;
      v176 = 0;
      if ( (v165.m128i_i8[12] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v174, &v165.m128i_u64[1]);
      else
        v174.m128i_i32[0] = v165.m128i_i32[2];
      if ( (v167 & 0x100000000LL) != 0 )
      {
        sub_182C690(v37, v175, &v167);
      }
      else
      {
        LOBYTE(v175[1]) &= ~1u;
        v175[0] = v167;
      }
      if ( (v175[1] & 1) != 0 || v175[0] != 1 || (v148[1] & 1) != 0 || v148[0] != 1 )
      {
        sub_1852000(qword_1C7F2C0, &v174, v146);
      }
      else
      {
        v132 = qword_1C7F2C0;
        sub_1832A70(qword_1C7F2C0, &v174, v146);
        sub_182CBA0(v132, v175);
        LOBYTE(v175[1]) &= ~1u;
        v175[0] = 1;
      }
      v151 &= 0xFCu;
      v38 = qword_1C7F2C0;
      v154 &= 0xFCu;
      v150 = 0;
      v152 = 0;
      v153 = 1;
      v155 = 0;
      if ( (v174.m128i_i8[4] & 1) != 0 )
      {
        v130 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, &v150, &v174);
        v38 = v130;
      }
      else
      {
        v150 = v174.m128i_i32[0];
      }
      if ( (v175[1] & 1) != 0 )
      {
        sub_182C690(v38, &v153, v175);
      }
      else
      {
        v154 &= ~1u;
        v153 = v175[0];
      }
      v137 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v174);
      sub_182CBA0(v137, v175);
      sub_B28C00(&v174, v4 + 40, &v150, 1, 1, 0);
      sub_50E7C0(a1, v144, &v174);
      v39 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v178);
      sub_182CBA0(v39, v179);
      v40 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v175);
      sub_182CBA0(v40, v177);
      v41 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v150);
      sub_182CBA0(v41, &v153);
    }
    v19 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v165.m128i_u64[1]);
    sub_182CBA0(v19, &v167);
    v20 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v156.m128i_u64[1]);
    sub_182CBA0(v20, &v158);
    goto LABEL_75;
  }
  v143 = 0;
  if ( sub_50DB00(v4, (__int64)a2, (int *)&v144, (__int64)v146, (int *)&v145, &v143) )
  {
    v21 = v144;
    if ( v144 == -1 )
    {
      sub_B28C00(&v174, v4 + 40, v146, 0, 0, 0);
      sub_50E7C0(a1, v145, &v174);
      v95 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v178);
      sub_182CBA0(v95, v179);
      v96 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v175);
      sub_182CBA0(v96, v177);
    }
    else
    {
      v22 = qword_1C7F2C0;
      if ( v145 == -1 )
      {
        v165.m128i_i8[4] &= 0xFCu;
        BYTE4(v166) &= 0xFCu;
        v165.m128i_i32[0] = 0;
        v165.m128i_i64[1] = 0;
        LODWORD(v166) = 1;
        v167 = 0;
        if ( (v146[1] & 1) != 0 )
        {
          v123 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, &v165, v146);
          v22 = v123;
        }
        else
        {
          v165.m128i_i32[0] = v146[0];
        }
        if ( (v148[1] & 1) != 0 )
        {
          sub_182C690(v22, &v166, v148);
        }
        else
        {
          BYTE4(v166) &= ~1u;
          LODWORD(v166) = v148[0];
        }
        sub_1831620(qword_1C7F2C0, &v165);
        sub_B28C00(&v174, v4 + 40, &v165, 0, 1, 0);
        sub_50E7C0(a1, v144, &v174);
        v103 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v178);
        sub_182CBA0(v103, v179);
        v104 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v175);
        sub_182CBA0(v104, v177);
        v105 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v165);
        sub_182CBA0(v105, &v166);
      }
      else
      {
        do
        {
          v23 = v21;
          v24 = v21;
          v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL) + 4LL * v21);
        }
        while ( v24 != v21 );
        v25 = **(_QWORD **)(a1 + 144) + 112 * v23;
        v26 = *(_DWORD *)(v25 + 48);
        v156.m128i_i64[1] = 0;
        *(_QWORD *)v157 = 0;
        v156.m128i_i32[0] = v26;
        v158 = 1;
        v159[0] = 0;
        if ( (*(_BYTE *)(v25 + 60) & 1) != 0 )
        {
          v114 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, &v156.m128i_u64[1], v25 + 56);
          v22 = v114;
        }
        else
        {
          v156.m128i_i32[2] = *(_DWORD *)(v25 + 56);
        }
        if ( (*(_BYTE *)(v25 + 76) & 1) != 0 )
        {
          sub_182C690(v22, &v158, v25 + 72);
        }
        else
        {
          v27 = *(_DWORD *)(v25 + 72);
          BYTE4(v158) &= ~1u;
          LODWORD(v158) = v27;
        }
        v28 = v145;
        do
        {
          v29 = v28;
          v30 = v28;
          v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL) + 4LL * v28);
        }
        while ( v30 != v28 );
        v31 = qword_1C7F2C0;
        v32 = **(_QWORD **)(a1 + 144) + 112 * v29;
        v33 = *(_DWORD *)(v32 + 8);
        v165.m128i_i64[1] = 0;
        v166 = 0;
        v165.m128i_i32[0] = v33;
        v167 = 1;
        v168[0] = 0;
        if ( (*(_BYTE *)(v32 + 20) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v165.m128i_u64[1], v32 + 16);
        else
          v165.m128i_i32[2] = *(_DWORD *)(v32 + 16);
        if ( (*(_BYTE *)(v32 + 36) & 1) != 0 )
        {
          sub_182C690(v31, &v167, v32 + 32);
        }
        else
        {
          v34 = *(_DWORD *)(v32 + 32);
          BYTE4(v167) &= ~1u;
          LODWORD(v167) = v34;
        }
        if ( v156.m128i_i32[0] == 1 )
        {
          v174 = 0u;
          v97 = qword_1C7F2C0;
          *(_QWORD *)v175 = 1;
          v176 = 0;
          if ( (v146[1] & 1) != 0 )
          {
            v134 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, &v174, v146);
            v97 = v134;
          }
          else
          {
            v174.m128i_i32[0] = v146[0];
          }
          if ( (v148[1] & 1) != 0 )
          {
            sub_182C690(v97, v175, v148);
          }
          else
          {
            LOBYTE(v175[1]) &= ~1u;
            v175[0] = v148[0];
          }
          v98 = qword_1C7F2C0;
          if ( v156.m128i_i32[2] )
          {
            if ( v174.m128i_i32[0] )
            {
              if ( (v175[1] & 1) != 0 || v175[0] != 1 || (v158 & 0x100000000LL) != 0 || (_DWORD)v158 != 1 )
              {
                sub_1851D20(qword_1C7F2C0, &v174, &v156.m128i_u64[1], &v174);
              }
              else
              {
                v125 = qword_1C7F2C0;
                sub_1831A80(qword_1C7F2C0, &v174, &v156.m128i_u64[1], &v174);
                sub_182CBA0(v125, v175);
                LOBYTE(v175[1]) &= ~1u;
                v175[0] = 1;
              }
            }
            else
            {
              if ( (v156.m128i_i8[12] & 1) != 0 )
              {
                v127 = qword_1C7F2C0;
                sub_182C690(qword_1C7F2C0, &v174, &v156.m128i_u64[1]);
                v98 = v127;
              }
              else
              {
                v174.m128i_i8[4] &= ~1u;
                v174.m128i_i32[0] = v156.m128i_i32[2];
              }
              if ( (v158 & 0x100000000LL) != 0 )
              {
                sub_182C690(v98, v175, &v158);
              }
              else
              {
                LOBYTE(v175[1]) &= ~1u;
                v175[0] = v158;
              }
            }
          }
          else
          {
            if ( (v174.m128i_i8[4] & 1) != 0 )
            {
              v124 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, &v174, &v174);
              v98 = v124;
            }
            else
            {
              v174.m128i_i8[4] &= ~1u;
            }
            if ( (v175[1] & 1) != 0 )
              sub_182C690(v98, v175, v175);
            else
              LOBYTE(v175[1]) &= ~1u;
          }
          v151 &= 0xFCu;
          v99 = qword_1C7F2C0;
          v154 &= 0xFCu;
          v150 = 0;
          v152 = 0;
          v153 = 1;
          v155 = 0;
          if ( (v174.m128i_i8[4] & 1) != 0 )
          {
            v120 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, &v150, &v174);
            v99 = v120;
          }
          else
          {
            v150 = v174.m128i_i32[0];
          }
          if ( (v175[1] & 1) != 0 )
          {
            sub_182C690(v99, &v153, v175);
          }
          else
          {
            v154 &= ~1u;
            v153 = v175[0];
          }
          v117 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v174);
          sub_182CBA0(v117, v175);
          sub_B28C00(&v174, v4 + 40, &v150, 0, 0, 0);
          sub_50E7C0(a1, v145, &v174);
          v100 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v178);
          sub_182CBA0(v100, v179);
          v101 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v175);
          sub_182CBA0(v101, v177);
          v102 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v150);
          sub_182CBA0(v102, &v153);
        }
        if ( v165.m128i_i32[0] == 1 )
        {
          v174 = 0u;
          v90 = qword_1C7F2C0;
          *(_QWORD *)v175 = 1;
          v176 = 0;
          if ( (v165.m128i_i8[12] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v174, &v165.m128i_u64[1]);
          else
            v174.m128i_i32[0] = v165.m128i_i32[2];
          if ( (v167 & 0x100000000LL) != 0 )
          {
            sub_182C690(v90, v175, &v167);
          }
          else
          {
            LOBYTE(v175[1]) &= ~1u;
            v175[0] = v167;
          }
          if ( (v175[1] & 1) != 0 || v175[0] != 1 || (v148[1] & 1) != 0 || v148[0] != 1 )
          {
            sub_1852000(qword_1C7F2C0, &v174, v146);
          }
          else
          {
            v135 = qword_1C7F2C0;
            sub_1832A70(qword_1C7F2C0, &v174, v146);
            sub_182CBA0(v135, v175);
            LOBYTE(v175[1]) &= ~1u;
            v175[0] = 1;
          }
          v151 &= 0xFCu;
          v91 = qword_1C7F2C0;
          v154 &= 0xFCu;
          v150 = 0;
          v152 = 0;
          v153 = 1;
          v155 = 0;
          if ( (v174.m128i_i8[4] & 1) != 0 )
          {
            v133 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, &v150, &v174);
            v91 = v133;
          }
          else
          {
            v150 = v174.m128i_i32[0];
          }
          if ( (v175[1] & 1) != 0 )
          {
            sub_182C690(v91, &v153, v175);
          }
          else
          {
            v154 &= ~1u;
            v153 = v175[0];
          }
          v138 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v174);
          sub_182CBA0(v138, v175);
          sub_B28C00(&v174, v4 + 40, &v150, 0, 1, 0);
          sub_50E7C0(a1, v144, &v174);
          v92 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v178);
          sub_182CBA0(v92, v179);
          v93 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v175);
          sub_182CBA0(v93, v177);
          v94 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v150);
          sub_182CBA0(v94, &v153);
        }
        v35 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v165.m128i_u64[1]);
        sub_182CBA0(v35, &v167);
        v36 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v156.m128i_u64[1]);
        sub_182CBA0(v36, &v158);
      }
    }
  }
  else
  {
    if ( sub_50E090(v4, (__int64)a2, &v144, (__int64)v146, &v145) )
    {
      v42 = v144;
      if ( v144 == -1 )
      {
        sub_B28AA0(&v174, v4 + 40, v146, 0, 0);
        sub_50E7C0(a1, v145, &v174);
        v106 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v178);
        sub_182CBA0(v106, v179);
        v107 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v175);
        sub_182CBA0(v107, v177);
        goto LABEL_75;
      }
      v43 = qword_1C7F2C0;
      if ( v145 == -1 )
      {
        v165.m128i_i8[4] &= 0xFCu;
        BYTE4(v166) &= 0xFCu;
        v165.m128i_i32[0] = 0;
        v165.m128i_i64[1] = 0;
        LODWORD(v166) = 1;
        v167 = 0;
        if ( (v146[1] & 1) != 0 )
        {
          v126 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, &v165, v146);
          v43 = v126;
        }
        else
        {
          v165.m128i_i32[0] = v146[0];
        }
        if ( (v148[1] & 1) != 0 )
        {
          sub_182C690(v43, &v166, v148);
        }
        else
        {
          BYTE4(v166) &= ~1u;
          LODWORD(v166) = v148[0];
        }
        sub_1831620(qword_1C7F2C0, &v165);
        sub_B28AA0(&v174, v4 + 40, &v165, 0, 0);
        sub_50E7C0(a1, v144, &v174);
        v108 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v178);
        sub_182CBA0(v108, v179);
        v109 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v175);
        sub_182CBA0(v109, v177);
        v110 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v165);
        sub_182CBA0(v110, &v166);
        goto LABEL_75;
      }
      do
      {
        v44 = v42;
        v45 = v42;
        v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL) + 4LL * v42);
      }
      while ( v45 != v42 );
      v46 = (const __m128i *)(**(_QWORD **)(a1 + 144) + 112 * v44);
      v156.m128i_i64[0] = v46->m128i_i64[0];
      v47 = v46->m128i_i32[2];
      *(_QWORD *)v157 = 0;
      v156.m128i_i32[2] = v47;
      v158 = 0;
      v159[0] = 1;
      v159[1] = 0;
      if ( (v46[1].m128i_i8[4] & 1) != 0 )
      {
        v116 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v157, &v46[1]);
        v43 = v116;
      }
      else
      {
        *(_DWORD *)v157 = v46[1].m128i_i32[0];
      }
      if ( (v46[2].m128i_i8[4] & 1) != 0 )
      {
        sub_182C690(v43, v159, &v46[2]);
      }
      else
      {
        v48 = v46[2].m128i_i32[0];
        BYTE4(v159[0]) &= ~1u;
        LODWORD(v159[0]) = v48;
      }
      v49 = v46[3].m128i_i32[0];
      v50 = qword_1C7F2C0;
      v161[0] = 0;
      v161[1] = 0;
      v160 = v49;
      v162[0] = 1;
      v162[1] = 0;
      if ( (v46[3].m128i_i8[12] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v161, &v46[3].m128i_u64[1]);
      else
        LODWORD(v161[0]) = v46[3].m128i_i32[2];
      if ( (v46[4].m128i_i8[12] & 1) != 0 )
      {
        sub_182C690(v50, v162, &v46[4].m128i_u64[1]);
      }
      else
      {
        v51 = v46[4].m128i_i32[2];
        BYTE4(v162[0]) &= ~1u;
        LODWORD(v162[0]) = v51;
      }
      v52 = *(_QWORD *)(a1 + 216);
      v53 = _mm_loadu_si128(v46 + 6);
      v54 = *(_QWORD **)(a1 + 144);
      v163 = v46[5].m128i_i16[4];
      v55 = *(_QWORD *)(v52 + 16);
      v56 = v145;
      v164 = v53;
      do
      {
        v57 = v56;
        v58 = v56;
        v56 = *(_DWORD *)(v55 + 4LL * v56);
      }
      while ( v58 != v56 );
      v59 = (const __m128i *)(*v54 + 112 * v57);
      v60 = qword_1C7F2C0;
      v165.m128i_i64[0] = v59->m128i_i64[0];
      v61 = v59->m128i_i32[2];
      v166 = 0;
      v165.m128i_i32[2] = v61;
      v167 = 0;
      v168[0] = 1;
      v168[1] = 0;
      if ( (v59[1].m128i_i8[4] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v166, &v59[1]);
      else
        LODWORD(v166) = v59[1].m128i_i32[0];
      if ( (v59[2].m128i_i8[4] & 1) != 0 )
      {
        sub_182C690(v60, v168, &v59[2]);
      }
      else
      {
        v62 = v59[2].m128i_i32[0];
        BYTE4(v168[0]) &= ~1u;
        LODWORD(v168[0]) = v62;
      }
      v63 = v59[3].m128i_i32[0];
      v64 = qword_1C7F2C0;
      v170[0] = 0;
      v170[1] = 0;
      v169 = v63;
      v171[0] = 1;
      v171[1] = 0;
      if ( (v59[3].m128i_i8[12] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v170, &v59[3].m128i_u64[1]);
      else
        LODWORD(v170[0]) = v59[3].m128i_i32[2];
      if ( (v59[4].m128i_i8[12] & 1) != 0 )
      {
        sub_182C690(v64, v171, &v59[4].m128i_u64[1]);
      }
      else
      {
        v65 = v59[4].m128i_i32[2];
        BYTE4(v171[0]) &= ~1u;
        LODWORD(v171[0]) = v65;
      }
      v66 = _mm_loadu_si128(v59 + 6);
      v172 = v59[5].m128i_i16[4];
      v173 = v66;
      sub_B28AA0(&v174, v4 + 40, v146, 0, 0);
      v139 = &v156;
      sub_B29360(&v156, &v174);
      v129 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v178);
      v136 = v179;
      sub_182CBA0(v129, v179);
      v128 = v175;
      v141 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v175);
      v140 = v177;
      sub_182CBA0(v141, v177);
      sub_B28AA0(&v174, v4 + 40, v146, 0, 0);
      v111 = &v165;
      sub_B29A40(&v165, &v174);
      v67 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v178);
      sub_182CBA0(v67, v179);
      v68 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v175);
      sub_182CBA0(v68, v177);
      sub_50E7C0(a1, v144, &v165);
      sub_50E7C0(a1, v145, &v156);
      v69 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v170);
      sub_182CBA0(v69, v171);
      v70 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v166);
      sub_182CBA0(v70, v168);
      v71 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v161);
      sub_182CBA0(v71, v162);
      v72 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v157);
      a2 = v159;
      sub_182CBA0(v72, v159);
    }
    if ( v2 == *(_QWORD **)(sub_4D6490(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL)) + 864) )
      sub_5165E0(
        a1,
        (int)a2,
        v73,
        v74,
        v75,
        v76,
        (int)v111,
        (int)v128,
        (int)v136,
        v139,
        (int)v140,
        (int)v141,
        v142,
        v144,
        v146[0],
        v147[0],
        v148[0],
        v149[0],
        v150,
        v152,
        v153,
        v155,
        v156.m128i_i32[0],
        v156.m128i_i32[2],
        v157[0]);
  }
LABEL_75:
  v77 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v146);
  return sub_182CBA0(v77, v148);
}

