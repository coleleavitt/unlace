/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CA380
// Address: 0x080CA380

//----- (080CA380) --------------------------------------------------------
unsigned int __cdecl sub_80CA380(int a1, signed int a2, __m128i *a3, int a4)
{
  unsigned int v4; // eax
  unsigned int result; // eax
  __int16 v6; // ax
  size_t v7; // esi
  size_t v8; // eax
  char v9; // al
  _BYTE *v10; // edx
  unsigned int v11; // edi
  int v12; // eax
  size_t v13; // edx
  signed int v14; // esi
  int v15; // edi
  int v16; // eax
  int v17; // esi
  __m128i v18; // xmm2
  int v19; // esi
  __m128i v20; // xmm0
  unsigned int v21; // edi
  const __m128i *v22; // ebp
  int v23; // ebp
  __m128i *v24; // ebp
  __m128i *v25; // ecx
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int16 v28; // ax
  __m128i *v29; // esi
  char *v30; // edx
  _BYTE *v31; // eax
  char v32; // al
  int v33; // eax
  const __m128i *v34; // ebp
  __int16 *v35; // ecx
  int v36; // edx
  __int16 v37; // ax
  __m128i *v38; // ecx
  int v39; // edx
  __m128i v40; // xmm0
  int *v41; // ecx
  __int16 v42; // ax
  int *v43; // ecx
  int v44; // edx
  __int16 v45; // ax
  unsigned __int16 *v46; // ecx
  int *v47; // edx
  unsigned int v48; // edi
  int v49; // eax
  int v50; // ebp
  unsigned int v51; // eax
  unsigned __int16 v52; // ax
  __m128i *v53; // ecx
  char *v54; // ecx
  char v55; // dl
  char *j; // ebx
  char v57; // al
  int v58; // edx
  char v59; // al
  int v60; // eax
  unsigned int v61; // eax
  const __m128i *v62; // edx
  unsigned int v63; // ecx
  __int16 *v64; // ecx
  int v65; // edx
  __int16 v66; // ax
  __m128i *v67; // edx
  int *v68; // ecx
  __m128i v69; // xmm0
  int v70; // edx
  __int16 v71; // ax
  int *v72; // ecx
  int v73; // edx
  __int16 v74; // ax
  unsigned __int16 *v75; // ecx
  int *v76; // edx
  unsigned int v77; // edi
  int v78; // eax
  int v79; // esi
  unsigned int v80; // eax
  __int16 v81; // ax
  int *v82; // esi
  __m128i v83; // xmm0
  int v84; // eax
  int v85; // ecx
  unsigned int v86; // ecx
  unsigned int v87; // ebx
  __m128i *v88; // ecx
  __m128i *v89; // eax
  __m128i v90; // xmm3
  __m128i *v91; // ebp
  __m128i v92; // xmm0
  int *v93; // esi
  unsigned int v94; // edi
  int v95; // eax
  unsigned int v96; // ecx
  unsigned int v97; // ebx
  size_t v98; // eax
  int v99; // edx
  int *v100; // ebx
  __int8 *v101; // eax
  char v102; // al
  _BYTE *v103; // ebx
  int v104; // ebp
  int v105; // ecx
  int v106; // eax
  _DWORD *v107; // eax
  char *v108; // edi
  size_t v109; // eax
  unsigned int v110; // ebp
  size_t v111; // eax
  __int32 v112; // edx
  _BYTE *v113; // ecx
  _DWORD *v114; // edi
  __int8 *v115; // ebx
  unsigned int v116; // eax
  int v117; // eax
  unsigned __int32 v118; // edx
  __int32 v119; // ecx
  _DWORD *v120; // edi
  int v121; // edi
  int v122; // eax
  int v123; // eax
  void *v124; // edi
  __m128i *i; // ebp
  __m128i v126; // xmm0
  unsigned int v127; // ebx
  int *v128; // ecx
  __m128i *v129; // edx
  int v130; // eax
  int v131; // ebp
  unsigned int v132; // eax
  __int32 v133; // eax
  __m128i v134; // xmm0
  int v135; // eax
  unsigned int v136; // ebx
  _DWORD *v137; // eax
  int v138; // eax
  unsigned int v139; // eax
  int v140; // esi
  int v141; // eax
  size_t v142; // ebp
  size_t v143; // edx
  size_t v144; // edi
  size_t v145; // eax
  size_t v146; // eax
  void *v147; // eax
  size_t v148; // eax
  int v149; // ecx
  int v150; // edi
  int v151; // eax
  int v152; // edi
  _DWORD *v153; // [esp-1Ch] [ebp-16Ch]
  int v154; // [esp-18h] [ebp-168h]
  size_t v155; // [esp-14h] [ebp-164h]
  _DWORD *v156; // [esp-10h] [ebp-160h]
  _BYTE v157[12]; // [esp-Ch] [ebp-15Ch] BYREF
  __m128i si128; // [esp+4h] [ebp-14Ch] BYREF
  int *v159; // [esp+14h] [ebp-13Ch]
  int v160; // [esp+18h] [ebp-138h]
  __m128i *v161; // [esp+1Ch] [ebp-134h]
  int v162; // [esp+20h] [ebp-130h]
  __m128i *v163; // [esp+24h] [ebp-12Ch]
  __m128i *v164; // [esp+28h] [ebp-128h]
  __m128i *v165; // [esp+2Ch] [ebp-124h]
  char *s; // [esp+30h] [ebp-120h]
  int *v167; // [esp+34h] [ebp-11Ch]
  unsigned int v168; // [esp+38h] [ebp-118h]
  size_t v169; // [esp+3Ch] [ebp-114h]
  int v170; // [esp+40h] [ebp-110h]
  __m128i *v171; // [esp+44h] [ebp-10Ch]
  unsigned int v172; // [esp+48h] [ebp-108h]
  int *v173; // [esp+4Ch] [ebp-104h]
  unsigned int v174; // [esp+50h] [ebp-100h]
  __m128i v175; // [esp+54h] [ebp-FCh] BYREF
  __m128i v176; // [esp+64h] [ebp-ECh] BYREF
  __m128i v177; // [esp+82h] [ebp-CEh] BYREF
  __m128i v178; // [esp+92h] [ebp-BEh] BYREF
  __m128i v179; // [esp+A2h] [ebp-AEh] BYREF
  __int32 v180; // [esp+B2h] [ebp-9Eh]
  __int16 v181; // [esp+B6h] [ebp-9Ah]
  _BYTE v182[2]; // [esp+B8h] [ebp-98h] BYREF
  unsigned __int16 v183; // [esp+BAh] [ebp-96h] BYREF
  __int16 v184; // [esp+BCh] [ebp-94h]
  __int16 v185; // [esp+CCh] [ebp-84h] BYREF
  __m128i v186; // [esp+CEh] [ebp-82h] BYREF
  __int32 v187; // [esp+DEh] [ebp-72h]
  __int16 v188; // [esp+E2h] [ebp-6Eh] BYREF
  __m128i v189; // [esp+E4h] [ebp-6Ch] BYREF
  __int32 v190; // [esp+F4h] [ebp-5Ch]
  __int16 v191; // [esp+F8h] [ebp-58h] BYREF
  _BYTE v192[6]; // [esp+FAh] [ebp-56h] BYREF
  _DWORD dest[12]; // [esp+100h] [ebp-50h] BYREF
  unsigned int v194; // [esp+130h] [ebp-20h]

  v160 = a1;
  v194 = __readgsdword(0x14u);
  if ( a2 < 0 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v194 == __readgsdword(0x14u) )
        sub_80CFF40(1225, v154, v155, (int)v156);
      sub_80D7AB0();
    }
    BUG();
  }
  v154 = 0;
  v4 = sub_80CA2F0(a3);
  if ( v4 == 3 )
  {
    sub_80D0740(v160, (char *)&qword_811CFF4 - 271707, a2);
    goto LABEL_7;
  }
  if ( v4 > 3 )
  {
    if ( v4 == 4 )
    {
      sub_80D0740(v160, (char *)&qword_811CFF4 - 271702, a2);
      goto LABEL_7;
    }
  }
  else
  {
    if ( !v4 )
      goto LABEL_7;
    if ( v4 == 2 )
    {
      sub_80D0740(v160, (char *)&qword_811CFF4 - 271711, a2);
      goto LABEL_7;
    }
  }
  v168 = BYTE1(a4);
  v169 = BYTE2(a4);
  if ( BYTE2(a4) && (BYTE1(a4) < (unsigned int)BYTE2(a4) + 3 || (unsigned int)BYTE1(a4) + 3 >= a2) )
  {
    v169 = 0;
    v168 = 0;
  }
  v177 = _mm_loadu_si128(a3);
  v6 = v177.m128i_i16[7];
  v170 = (int)&qword_811CFF4 - 281405;
  si128 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257316));
  v176 = si128;
  if ( v177.m128i_i16[7] < 0 )
  {
    v6 = v177.m128i_i16[7] & 0x7FFF;
    v177.m128i_i16[7] &= ~0x8000u;
    v170 = (int)(&qword_811CFF4 - 35172);
  }
  if ( !v6 )
  {
    if ( !v169 )
    {
      sub_80D3B60((_BYTE *)v160, a2, (char *)&qword_811CFF4 - 271697, v170);
      goto LABEL_7;
    }
    dest[0] = 3157552;
    if ( v168 )
    {
      v162 = 0;
      v7 = v169;
      v168 = v168 - v169 - 3;
      s = (char *)dest + 2;
      goto LABEL_22;
    }
    goto LABEL_99;
  }
  v165 = &v177;
  v163 = (__m128i *)(&qword_811CFF4 - 22405);
  v16 = sub_80C93A0((int)(&qword_811CFF4 - 22405), (int)&v177);
  v162 = v16;
  if ( !v16 )
  {
    v25 = &v176;
    v161 = &v189;
    goto LABEL_47;
  }
  if ( v16 >= 0 )
  {
    if ( v177.m128i_i16[7] )
    {
      sub_80C8760((int)v165, &v186);
      v162 = 0;
      v164 = (__m128i *)v182;
      if ( (v188 & 7) != 0 )
      {
        v159 = (int *)&v185;
      }
      else
      {
        v159 = (int *)&v185;
        s = (char *)&v188;
        i = (__m128i *)v182;
        do
        {
          v126 = _mm_loadu_si128(&v186);
          v127 = 0;
          i[1].m128i_i32[0] = v187;
          v185 = 0;
          *i = v126;
          sub_80C7E40((int)i);
          sub_80C7E40((int)i);
          v161 = i;
          v128 = v159;
          v129 = (__m128i *)s;
          do
          {
            v130 = v129->m128i_u16[0];
            v131 = *(unsigned __int16 *)v128;
            v129 = (__m128i *)((char *)v129 - 2);
            v128 = (int *)((char *)v128 - 2);
            v132 = v127 + v131 + v130;
            *((_WORD *)v128 + 1) = v132;
            v127 = HIWORD(v132);
          }
          while ( v129 != (__m128i *)&v186.m128i_i16[1] );
          v183 += 3;
          for ( i = v161; v184; ++v183 )
            sub_80C7E40((int)v161);
          if ( v185 )
            break;
          if ( v183 > 0x3FFEu )
            break;
          v133 = v161[1].m128i_i32[0];
          --v162;
          v134 = _mm_loadu_si128(v161);
          v187 = v133;
          v188 = 0;
          v186 = v134;
        }
        while ( v162 != -34 );
      }
      sub_80C8700(&v186, (int)v165);
    }
    else
    {
      if ( v177.m128i_i16[6] < 0 )
      {
        v162 = 0;
      }
      else
      {
        v17 = 0;
        do
        {
          --v17;
          sub_80C9450((int)v165, (int)dword_80F1360, v165);
        }
        while ( v177.m128i_i16[6] >= 0 );
        v162 = v17;
      }
      v164 = (__m128i *)v182;
      v159 = (int *)&v185;
    }
    v18 = _mm_load_si128(&si128);
    s = (char *)&v176;
    v19 = -4096;
    v20 = _mm_loadu_si128(&v177);
    v171 = &v186;
    v161 = (__m128i *)dword_80F11C0;
    v167 = dword_80F12A0;
    si128.m128i_i32[0] = (__int32)&v175;
    v21 = 0;
    v175 = v20;
    v176 = v18;
    do
    {
      v22 = &v161[v21 / 4];
      if ( sub_80C93A0((int)v163, si128.m128i_i32[0]) <= 0 )
        break;
      if ( sub_80C93A0((int)v22, si128.m128i_i32[0]) >= 0 )
      {
        v23 = (int)&v167[v21];
        sub_80C9450(si128.m128i_i32[0], (int)&v167[v21], si128.m128i_i32[0]);
        sub_80C9450((int)s, v23, s);
        v162 += v19;
      }
      v21 += 4;
      v19 /= 2;
    }
    while ( v21 != 52 );
    v24 = v171;
    si128.m128i_i32[0] = (__int32)s;
    sub_80C9530((int)v163, (int)s, s);
    v25 = (__m128i *)si128.m128i_i32[0];
    v161 = &v189;
    goto LABEL_48;
  }
  v161 = &v189;
  v178 = _mm_loadu_si128(&v177);
  v178.m128i_i16[7] = 16494;
  v82 = dword_80F1320;
  s = (char *)16;
  v162 = 0;
  v159 = dword_80F1370;
  v173 = dword_80F1380;
  v164 = &v178;
  do
  {
    sub_80C9530((int)v164, (int)v82, &v176);
    v83 = _mm_load_si128(&v176);
    v189 = v83;
    v84 = (v83.m128i_i16[7] & 0x7FFF) - 16382;
    if ( v84 > 0 )
    {
      v175 = v83;
      v85 = 112 - v84;
      if ( 112 - v84 <= 0 )
        goto LABEL_138;
      if ( v85 <= 15 )
      {
        v89 = &v175;
LABEL_136:
        v89->m128i_i16[0] &= *((_WORD *)v173 + v85);
        goto LABEL_137;
      }
      v86 = (unsigned int)v85 >> 4;
      v167 = (int *)(v86 - 1);
      v87 = 2 * v86;
      v88 = &v175;
      v171 = (__m128i *)v87;
      if ( v87 >= 4 )
      {
        v96 = 4;
        v175.m128i_i32[0] = 0;
        v172 = v87 & 0xFFFFFFFC;
        v174 = (((v87 & 0xFFFFFFFC) - 1) >> 2) & 1;
        if ( (v87 & 0xFFFFFFFC) > 4 )
        {
          if ( v174 )
          {
            v96 = 8;
            v175.m128i_i32[1] = 0;
            if ( v172 <= 8 )
            {
              v88 = (__m128i *)&v175.m128i_u64[1];
              goto LABEL_133;
            }
          }
          do
          {
            v97 = v172;
            v175.m128i_i32[v96 / 4] = 0;
            v175.m128i_i32[v96 / 4 + 1] = 0;
            v96 += 8;
          }
          while ( v96 < v97 );
        }
        v88 = (__m128i *)((char *)&v175 + v96);
      }
LABEL_133:
      if ( ((unsigned __int8)v171 & 2) != 0 )
        v88->m128i_i16[0] = 0;
      v85 = 96 - v84 - 16 * (_DWORD)v167;
      v89 = (__m128i *)&v175.m128i_i16[(_DWORD)v167 + 1];
      goto LABEL_136;
    }
    v175 = 0;
LABEL_137:
    if ( v83.m128i_i16[7] < 0 )
    {
      v95 = 0;
      while ( v161->m128i_i16[v95] == v175.m128i_i16[v95] )
      {
        if ( ++v95 == 7 )
          goto LABEL_138;
      }
      sub_80C8F00((int)&v175, (int)v163, &v175, 1);
    }
LABEL_138:
    if ( v175.m128i_i64[0] == v176.m128i_i64[0]
      && *(__int64 *)((char *)v175.m128i_i64 + 6) == *(__int64 *)((char *)v176.m128i_i64 + 6) )
    {
      v162 += (int)s;
      v178 = _mm_load_si128(&v176);
    }
    v82 += 4;
    s = (char *)((unsigned int)s >> 1);
  }
  while ( v82 != v159 );
  v90 = _mm_load_si128(&si128);
  v91 = v164;
  v163 = &v176;
  v178.m128i_i16[7] = v178.m128i_i16[7] + v177.m128i_i16[7] - 16494;
  v92 = _mm_loadu_si128(&v178);
  v176 = v90;
  v93 = (int *)((char *)v159 + (_DWORD)&stru_811CF24 - 135385076);
  v177 = v92;
  si128.m128i_i32[0] = (__int32)dword_80F1360;
  v94 = 4096;
  do
  {
    if ( sub_80C93A0(si128.m128i_i32[0], (int)v91) > 0 )
      break;
    if ( sub_80C93A0((int)v93, (int)v91) <= 0 )
    {
      sub_80C9530((int)v91, (int)v93, v91);
      sub_80C9450((int)v163, (int)v93, v163);
      v162 += v94;
    }
    v93 += 4;
    v94 >>= 1;
  }
  while ( v93 != v159 );
  v25 = v163;
LABEL_47:
  v24 = &v186;
  v164 = (__m128i *)v182;
  v159 = (int *)&v185;
LABEL_48:
  sub_80C8760((int)v25, v24);
  v26 = _mm_loadu_si128(&v186);
  v163 = &v179;
  v180 = v187;
  v179 = v26;
  v181 = 0;
  sub_80C8760((int)v165, v24);
  v27 = _mm_loadu_si128(&v186);
  v191 = 0;
  v190 = v187;
  v189 = v27;
  v28 = sub_80C8D40((int)&v179, (int)v161);
  if ( v28 == 10 )
  {
    ++v162;
    v32 = 49;
    si128.m128i_i32[0] = (__int32)&v191;
    v29 = (__m128i *)&v189.m128i_i16[1];
  }
  else if ( v28 )
  {
    v32 = v28 + 48;
    si128.m128i_i32[0] = (__int32)&v191;
    v29 = (__m128i *)&v189.m128i_i16[1];
  }
  else
  {
    v29 = (__m128i *)&v189.m128i_i16[1];
    s = (char *)dword_80F13A8;
    v167 = &v189.m128i_i32[1];
    si128.m128i_i32[0] = (__int32)&v191;
    do
    {
      v30 = s;
      v31 = v167;
      while ( *(_WORD *)v31 == *(_WORD *)v30 )
      {
        v31 += 2;
        v30 += 2;
        if ( v31 == v192 )
        {
          v32 = 48;
          goto LABEL_55;
        }
      }
      v64 = (__int16 *)si128.m128i_i32[0];
      v65 = 0;
      do
      {
        if ( *v64 < 0 )
          v65 |= 1u;
        v66 = 2 * *v64;
        if ( (v65 & 2) != 0 )
          v66 |= 1u;
        --v64;
        v65 *= 2;
        v64[1] = v66;
      }
      while ( v64 != (__int16 *)v29 );
      v67 = v164;
      v68 = v159;
      v69 = _mm_load_si128(v161);
      v164[1].m128i_i32[0] = v161[1].m128i_i32[0];
      v185 = 0;
      *v67 = v69;
      v70 = 0;
      do
      {
        if ( *(__int16 *)v68 < 0 )
          v70 |= 1u;
        v71 = 2 * *(_WORD *)v68;
        if ( (v70 & 2) != 0 )
          v71 |= 1u;
        v68 = (int *)((char *)v68 - 2);
        v70 *= 2;
        *((_WORD *)v68 + 1) = v71;
      }
      while ( v68 != (int *)&v183 );
      v72 = v159;
      v73 = 0;
      do
      {
        if ( *(__int16 *)v72 < 0 )
          v73 |= 1u;
        v74 = 2 * *(_WORD *)v72;
        if ( (v73 & 2) != 0 )
          v74 |= 1u;
        v72 = (int *)((char *)v72 - 2);
        v73 *= 2;
        *((_WORD *)v72 + 1) = v74;
      }
      while ( v72 != (int *)&v183 );
      v75 = (unsigned __int16 *)si128.m128i_i32[0];
      v76 = v159;
      v165 = v29;
      v77 = 0;
      do
      {
        v78 = *(unsigned __int16 *)v76;
        v79 = *v75;
        v76 = (int *)((char *)v76 - 2);
        --v75;
        v80 = v77 + v79 + v78;
        v75[1] = v80;
        v77 = HIWORD(v80);
      }
      while ( v76 != (int *)&v183 );
      v29 = v165;
      v81 = sub_80C8D40((int)v163, (int)v161);
      --v162;
    }
    while ( !v81 );
    v32 = v81 + 48;
  }
LABEL_55:
  LOBYTE(dest[0]) = v32;
  v33 = 33;
  BYTE1(dest[0]) = 46;
  if ( (unsigned __int8)a4 <= 0x21u )
    v33 = (unsigned __int8)a4;
  v165 = nullptr;
  v34 = v161;
  v167 = (int *)v33;
  s = (char *)dest + 2;
  do
  {
    v35 = (__int16 *)si128.m128i_i32[0];
    v36 = 0;
    do
    {
      if ( *v35 < 0 )
        v36 |= 1u;
      v37 = 2 * *v35;
      if ( (v36 & 2) != 0 )
        v37 |= 1u;
      --v35;
      v36 *= 2;
      v35[1] = v37;
    }
    while ( v35 != (__int16 *)v29 );
    v38 = v164;
    v39 = 0;
    v40 = _mm_load_si128(v34);
    v164[1].m128i_i32[0] = v34[1].m128i_i32[0];
    v185 = 0;
    *v38 = v40;
    v41 = v159;
    do
    {
      if ( *(__int16 *)v41 < 0 )
        v39 |= 1u;
      v42 = 2 * *(_WORD *)v41;
      if ( (v39 & 2) != 0 )
        v42 |= 1u;
      v41 = (int *)((char *)v41 - 2);
      v39 *= 2;
      *((_WORD *)v41 + 1) = v42;
    }
    while ( v41 != (int *)&v183 );
    v43 = v159;
    v44 = 0;
    do
    {
      if ( *(__int16 *)v43 < 0 )
        v44 |= 1u;
      v45 = 2 * *(_WORD *)v43;
      if ( (v44 & 2) != 0 )
        v45 |= 1u;
      v43 = (int *)((char *)v43 - 2);
      v44 *= 2;
      *((_WORD *)v43 + 1) = v45;
    }
    while ( v43 != (int *)&v183 );
    v46 = (unsigned __int16 *)si128.m128i_i32[0];
    v47 = v159;
    v161 = (__m128i *)v34;
    v48 = 0;
    do
    {
      v49 = *(unsigned __int16 *)v47;
      v50 = *v46;
      v47 = (int *)((char *)v47 - 2);
      --v46;
      v51 = v48 + v50 + v49;
      v46[1] = v51;
      v48 = HIWORD(v51);
    }
    while ( v47 != (int *)&v183 );
    v34 = v161;
    v52 = sub_80C8D40((int)v163, (int)v161);
    v53 = v165;
    v165->m128i_i8[(_DWORD)s] = v52 + 48;
    v165 = (__m128i *)&v53->m128i_i8[1];
  }
  while ( (int)v167 >= (int)((char *)v53->m128i_i32 + 1) );
  v54 = (char *)v167 + (_DWORD)s;
  v55 = *((_BYTE *)v167 + (_DWORD)s - 1);
  if ( v52 > 4u )
  {
    if ( v52 == 5 )
    {
      v100 = dword_80F13A8;
      v101 = &v189.m128i_i8[4];
      while ( *(_WORD *)v101 == *(_WORD *)v100 )
      {
        v101 += 2;
        v100 = (int *)((char *)v100 + 2);
        if ( v101 == v192 )
        {
          if ( (v55 & 1) != 0 )
          {
            j = v54 - 1;
            v58 = v55 & 0x7F;
            v59 = *((_BYTE *)v167 + (_DWORD)s - 1) & 0x7F;
            goto LABEL_82;
          }
          goto LABEL_88;
        }
      }
    }
    for ( j = v54 - 1; ; --j )
    {
      v57 = v55;
      v58 = v55 & 0x7F;
      v59 = v57 & 0x7F;
      if ( v59 == 46 )
        break;
LABEL_82:
      *j = v59 + 1;
      if ( v58 + 1 <= 57 )
        goto LABEL_87;
      *j = 48;
      v55 = *(j - 1);
    }
    v60 = *(j - 1) + 1;
    *(j - 1) = v60;
    if ( v60 > 57 )
    {
      ++v162;
      *(j - 1) = 49;
    }
LABEL_87:
    v55 = *(v54 - 1);
  }
LABEL_88:
  while ( v55 == 48 )
  {
    v55 = *(v54 - 2);
    --v54;
  }
  if ( v55 == 46 )
    *v54++ = 48;
  *v54 = 0;
  if ( !v168 )
  {
    v153 = dest;
    v12 = sub_80D3B60((_BYTE *)v160, a2, (char *)&qword_811CFF4 - 271691, v170);
    goto LABEL_28;
  }
  v61 = -v162;
  if ( v162 > 0 )
    v61 = v162;
  v62 = (const __m128i *)v61;
  if ( !v169 )
  {
    if ( !v162 )
    {
LABEL_99:
      v153 = dest;
      sub_80D3B60((_BYTE *)v160, a2, (char *)&qword_811CFF4 - 271691, v170);
      goto LABEL_7;
    }
    if ( v168 < v61 )
    {
      v153 = dest;
      v12 = sub_80D3B60((_BYTE *)v160, a2, (char *)&qword_811CFF4 - 271691, v170);
      goto LABEL_29;
    }
    if ( HIWORD(dest[0]) == 48 )
    {
      BYTE1(dest[0]) = 0;
      v7 = 0;
LABEL_173:
      if ( v162 > 0 )
      {
        si128.m128i_i32[0] = (__int32)v62;
        v159 = dest;
        v137 = (_DWORD *)strlen((const char *)dest);
        v114 = v137;
        if ( si128.m128i_i32[0] >= (unsigned int)v137 )
        {
          v154 = (int)v159;
          v153 = v137;
          v141 = sub_80D3B60((_BYTE *)v160, a2, (char *)&qword_811CFF4 - 271686, v170);
          v118 = si128.m128i_i32[0];
          v119 = v141;
          if ( *((_BYTE *)dest + (_DWORD)v114) )
            goto LABEL_229;
        }
        else
        {
          v114 = (_DWORD *)(si128.m128i_i32[0] + 1);
          v154 = (int)v159;
          v153 = (_DWORD *)(si128.m128i_i32[0] + 1);
          v138 = sub_80D3B60((_BYTE *)v160, a2, (char *)&qword_811CFF4 - 271686, v170);
          v118 = si128.m128i_i32[0];
          v119 = v138;
          if ( *((_BYTE *)dest + (_DWORD)v114) )
            goto LABEL_196;
        }
        ++v7;
        goto LABEL_196;
      }
      v102 = *(_BYTE *)v170;
      if ( *(_BYTE *)v170 )
      {
        v103 = (_BYTE *)v160;
        v104 = 3;
        v105 = 2;
        v168 = 1;
        goto LABEL_176;
      }
      v104 = 2;
      *(_WORD *)v160 = 11824;
      if ( v62 != (const __m128i *)1 )
      {
        v159 = (int *)v62;
        memset((void *)(v160 + 2), 48, (size_t)&v62[-1].m128i_u32[3] + 3);
        v104 = (int)v159 + 1;
      }
      goto LABEL_226;
    }
    v7 = 0;
LABEL_188:
    v159 = (int *)v61;
    v108 = s;
    v109 = strlen(s);
    memmove((char *)dest + 1, v108, v109 + 1);
    v62 = (const __m128i *)v159;
    if ( v169 )
      goto LABEL_189;
    goto LABEL_173;
  }
  v7 = v169;
  v63 = v168 - 2 - (v169 + (v162 >= 0));
  v168 = v63;
  if ( !v162 )
    goto LABEL_22;
  if ( v63 < v61 )
  {
    v168 = v63 - ((v63 != 0) & ((unsigned int)v162 >> 31));
LABEL_22:
    v8 = strlen(s);
    if ( v169 < v8 )
    {
      v98 = v169;
      do
      {
        if ( *((_BYTE *)dest + v98 + 1) != 48 )
        {
          v99 = v98 + 2;
          v7 = v169 - v98;
          goto LABEL_161;
        }
        --v98;
      }
      while ( v98 );
      v99 = 2;
LABEL_161:
      *((_BYTE *)dest + v99) = 0;
    }
    else
    {
      v7 = v169 - v8;
    }
    v9 = v168;
    v10 = (_BYTE *)(v160 + v168);
    if ( v168 )
    {
      if ( v168 >= 4 )
      {
        v135 = v160;
        *(_DWORD *)v160 = 538976288;
        v136 = v168;
        *(_DWORD *)(v135 + v168 - 4) = 538976288;
        memset((void *)((v135 + 4) & 0xFFFFFFFC), 0x20u, 4 * ((v136 + v135 - ((v135 + 4) & 0xFFFFFFFC)) >> 2));
      }
      else
      {
        *(_BYTE *)v160 = 32;
        if ( (v9 & 2) != 0 )
          *(_WORD *)(v160 + v168 - 2) = 8224;
      }
      *v10 = 0;
    }
    v153 = dest;
    v11 = v168;
    v12 = v11 + sub_80D3B60(v10, a2 - v168, (char *)&qword_811CFF4 - 271691, v170);
    if ( v7 )
    {
      v13 = v7;
      v14 = v12 + v7;
      if ( a2 - v12 >= v13 )
        goto LABEL_27;
      if ( a2 != v12 )
      {
        v14 = a2;
        v13 = a2 - v12;
LABEL_27:
        v15 = v160;
        memset((void *)(v160 + v12), 48, v13);
        *(_BYTE *)(v15 + v14) = 0;
        v12 = v14;
      }
    }
LABEL_28:
    if ( v162 )
LABEL_29:
      sub_80D3B60((_BYTE *)(v12 + v160), a2 - v12, (char *)&qword_811CFF4 - 271679, v162);
    goto LABEL_7;
  }
  if ( HIWORD(dest[0]) != 48 )
    goto LABEL_188;
  BYTE1(dest[0]) = 0;
LABEL_189:
  if ( v162 > 0 )
  {
    v110 = v168 - (_DWORD)v62;
    if ( (const __m128i *)v168 == v62 )
    {
      si128.m128i_i32[0] = (__int32)v62;
      v159 = dest;
      v111 = strlen((const char *)dest);
      v112 = si128.m128i_i32[0];
      v113 = (_BYTE *)v160;
      v114 = (_DWORD *)v111;
      v115 = (__int8 *)a2;
      if ( si128.m128i_i32[0] < v111 )
        goto LABEL_192;
    }
    else
    {
      if ( v110 >= 4 )
      {
        v151 = v160;
        v152 = v160 + 4;
        *(_DWORD *)v160 = 538976288;
        *(_DWORD *)(v151 + v110 - 4) = 538976288;
        memset((void *)(v152 & 0xFFFFFFFC), 0x20u, 4 * ((v110 + v151 - (v152 & 0xFFFFFFFC)) >> 2));
      }
      else if ( v110 )
      {
        *(_BYTE *)v160 = 32;
        if ( (v110 & 2) != 0 )
          *(_WORD *)(v160 + v110 - 2) = 8224;
      }
      v161 = (__m128i *)v62;
      si128.m128i_i32[0] = v160 + v110;
      v159 = dest;
      *(_BYTE *)si128.m128i_i32[0] = 0;
      v146 = strlen((const char *)dest);
      v112 = (__int32)v161;
      v114 = (_DWORD *)v146;
      v113 = (_BYTE *)si128.m128i_i32[0];
      v115 = &v161->m128i_i8[a2 - v168];
      if ( (unsigned int)v161 < v146 )
      {
LABEL_192:
        v116 = (unsigned int)v114 - v112 - 1;
        if ( v169 < v116 )
        {
          v148 = v7 + 320;
          v7 = 0;
          v157[v148 - 51 + v112] = 0;
        }
        else
        {
          v7 = v169 - v116;
        }
        v114 = (_DWORD *)(v112 + 1);
      }
    }
    si128.m128i_i32[0] = v112;
    v154 = (int)v159;
    v153 = v114;
    v117 = sub_80D3B60(v113, (int)v115, (char *)&qword_811CFF4 - 271686, v170);
    v118 = si128.m128i_i32[0];
    v119 = v117 + v110;
LABEL_196:
    if ( v118 < (unsigned int)v114 )
    {
LABEL_197:
      v104 = v119 + 1;
      *(_BYTE *)(v160 + v119) = 46;
      v120 = (int *)((char *)v159 + (_DWORD)v114);
      goto LABEL_198;
    }
LABEL_229:
    v142 = v118 + 1 - (_DWORD)v114;
    si128.m128i_i32[0] = v119;
    memset((void *)(v119 + v160), 48, v142);
    v119 = v142 + si128.m128i_i32[0];
    goto LABEL_197;
  }
  v139 = v168 - 1;
  v103 = (_BYTE *)(v168 - 1 + v160);
  if ( v168 != 1 )
  {
    if ( v139 >= 4 )
    {
      v149 = v160;
      v150 = v160 + 4;
      *(_DWORD *)v160 = 538976288;
      *(_DWORD *)(v149 + v139 - 4) = 538976288;
      memset((void *)(v150 & 0xFFFFFFFC), 0x20u, 4 * ((v149 - (v150 & 0xFFFFFFFC) + v139) >> 2));
    }
    else
    {
      *(_BYTE *)v160 = 32;
      if ( (v139 & 2) != 0 )
        *(_WORD *)(v160 + v139 - 2) = 8224;
    }
    *v103 = 0;
  }
  v102 = *(_BYTE *)v170;
  if ( !*(_BYTE *)v170 )
  {
    v105 = v168;
    v104 = v168 + 1;
    goto LABEL_177;
  }
  v105 = v168 + 1;
  v104 = v168 + 2;
LABEL_176:
  *v103 = v102;
  v103 = (_BYTE *)(v160 + v168);
LABEL_177:
  v106 = v160;
  *v103 = 48;
  *(_BYTE *)(v106 + v105) = 46;
  if ( v169 && (int)v7 < (int)v62 )
  {
    if ( a2 - v104 >= v7 )
    {
      if ( v7 )
      {
        v107 = (_DWORD *)(v104 + v160);
        if ( v7 >= 4 )
        {
          *v107 = 808464432;
          *(_DWORD *)((char *)v107 + v7 - 4) = 808464432;
          memset(
            (void *)((unsigned int)(v107 + 1) & 0xFFFFFFFC),
            0x30u,
            4 * (((unsigned int)v107 + v7 - ((unsigned int)(v107 + 1) & 0xFFFFFFFC)) >> 2));
        }
        else
        {
          *(_BYTE *)v107 = 48;
          if ( (v7 & 2) != 0 )
            *(_WORD *)((char *)v107 + v7 - 2) = 12336;
        }
        *(_BYTE *)(v7 + v160 + v104) = 0;
      }
      goto LABEL_7;
    }
    if ( a2 == v104 )
      goto LABEL_7;
    v155 = a2 - v104;
    v154 = 48;
    v140 = v160;
    v153 = (_DWORD *)(v160 + v104);
LABEL_223:
    memset(v153, v154, v155);
    *(_BYTE *)(v140 + a2) = 0;
    goto LABEL_7;
  }
  v143 = (size_t)&v62[-1].m128i_u32[3] + 3;
  v144 = v143;
  if ( !v143 )
  {
    if ( v169 )
      goto LABEL_234;
LABEL_226:
    v156 = dest;
LABEL_227:
    sub_80D3B60((_BYTE *)(v104 + v160), a2 - v104, (char *)&qword_811CFF4 - 271741, (int)v156);
    goto LABEL_7;
  }
  v147 = (void *)(v104 + v160);
  v104 += v143;
  memset(v147, 48, v143);
  if ( !v169 )
    goto LABEL_226;
  v7 -= v144;
LABEL_234:
  v120 = dest;
  v145 = strlen((const char *)dest);
  if ( v7 < v145 )
  {
    *((_BYTE *)dest + v7) = 0;
    v156 = dest;
    goto LABEL_227;
  }
  v7 -= v145;
LABEL_198:
  v156 = v120;
  v121 = v160;
  v122 = sub_80D3B60((_BYTE *)(v160 + v104), a2 - v104, (char *)&qword_811CFF4 - 271741, (int)v156);
  if ( !v7 )
    goto LABEL_7;
  v123 = v104 + v122;
  if ( a2 - v123 >= v7 )
  {
    v124 = (void *)(v123 + v121);
    memset(v124, 48, v7);
    *((_BYTE *)v124 + v7) = 0;
    goto LABEL_7;
  }
  if ( a2 != v123 )
  {
    v155 = a2 - v123;
    v154 = 48;
    v140 = v160;
    v153 = (_DWORD *)(v160 + v123);
    goto LABEL_223;
  }
LABEL_7:
  result = v194 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80CB140: conditional instruction was optimized away because %var_118.4 is in (1..3)
// 80CB25B: conditional instruction was optimized away because esi.4 is in (1..3)
// 80CB876: conditional instruction was optimized away because %var_118.4!=1
// 80F11C0: using guessed type int dword_80F11C0[52];
// 80F12A0: using guessed type int dword_80F12A0[29];
// 80F1320: using guessed type int dword_80F1320[2];
// 80F1360: using guessed type int dword_80F1360[3];
// 80F1370: using guessed type int dword_80F1370[4];
// 80F1380: using guessed type int dword_80F1380[10];
// 80F13A8: using guessed type int dword_80F13A8[5];
// 811CF24: using guessed type Elf32_Dyn stru_811CF24;
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811F8A1: using guessed type char byte_811F8A1;
