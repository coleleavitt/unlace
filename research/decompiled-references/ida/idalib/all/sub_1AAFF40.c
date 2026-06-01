__int64 __fastcall sub_1AAFF40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __m128i *v7; // r12
  int v8; // eax
  __m128i *v9; // rcx
  const __m128i *v10; // r15
  __int64 *m128i_i64; // rbp
  const __m128i *v12; // rbx
  _BYTE *v13; // rsi
  __int64 *v14; // rax
  size_t v15; // r14
  unsigned __int64 v16; // r13
  __int64 v17; // r13
  unsigned __int64 v18; // rdi
  __int64 *v19; // rdi
  __int64 v20; // rax
  __m128i *v21; // rbp
  __int64 v22; // r13
  __int64 v23; // r14
  __int64 v24; // r13
  void *v25; // rdi
  __m128i *v26; // r14
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int32 v29; // r13d
  _BYTE *v30; // rdi
  char *v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r10
  char *v36; // rsi
  __int64 v37; // rdx
  unsigned int v38; // r13d
  __int64 v39; // r14
  __int64 v40; // rax
  __m128i *v41; // r14
  __m128i *v42; // rbp
  unsigned __int64 *v43; // rdi
  __m128i *v44; // rdi
  void **v45; // r14
  void **v46; // rbp
  __int64 v48; // rdx
  __m128i *v49; // r12
  unsigned __int64 v50; // rcx
  int v51; // edx
  char v52; // al
  int v53; // eax
  int v54; // eax
  __m128i *v55; // r15
  __m128i *v56; // rcx
  __m128i *v57; // r13
  __int64 *v58; // r14
  __m128i *v59; // r12
  _BYTE *v60; // rsi
  __int64 *v61; // rax
  size_t v62; // rbx
  unsigned __int64 v63; // rbp
  __int64 v64; // rbp
  unsigned __int64 v65; // rdi
  __int64 *v66; // rdi
  __int64 v67; // rdi
  unsigned __int64 v68; // rax
  int v69; // ecx
  __m128i *v70; // r15
  __int64 v71; // rax
  char v72; // dl
  int v73; // eax
  __m128i *v74; // r14
  __m128i *v75; // rcx
  __m128i *v76; // rbp
  __m128i *v77; // rbx
  __m128i *v78; // r15
  _BYTE *v79; // rsi
  _BYTE *v80; // rax
  size_t v81; // r12
  unsigned __int64 v82; // r13
  __int64 v83; // r13
  unsigned __int64 v84; // rdi
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rbp
  __int64 v89; // r13
  __int64 v90; // rbp
  void *v91; // rdi
  unsigned __int64 v92; // rdx
  unsigned __int64 v93; // rax
  __int32 v94; // ebx
  _BYTE *v95; // rdi
  char *v96; // rcx
  char *v97; // rsi
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  unsigned int v103; // eax
  unsigned int v104; // eax
  void **v105; // rbp
  unsigned __int64 v106; // rax
  void **v107; // r12
  void **v108; // rbx
  void **v109; // rdi
  void **v110; // rdi
  void **v111; // rbx
  void **v112; // r12
  __int64 v113; // rsi
  __int64 v114; // rcx
  __int64 v115; // rax
  unsigned __int64 v116; // rdx
  unsigned __int64 v117; // rax
  __int32 v118; // r13d
  _BYTE *v119; // rdi
  char *v120; // rcx
  __int64 v121; // rsi
  __int64 v122; // rax
  __int64 v123; // rsi
  __int64 v124; // r10
  char *v125; // rsi
  __int64 v126; // rdx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  unsigned int v130; // eax
  unsigned int v131; // eax
  void **v132; // r14
  unsigned __int64 v133; // rax
  void **v134; // rdx
  void **v135; // r15
  void **v136; // rbp
  void **v137; // rdi
  void **v138; // rdi
  void **v139; // r15
  void **v140; // rbp
  __int64 v141; // rdx
  int v142; // eax
  __int64 v143; // rax
  __int64 v144; // rbp
  __int64 v145; // r13
  __int64 v146; // rbp
  void *v147; // rdi
  __int64 v148; // rdx
  __int64 v149; // rax
  __int64 v150; // r13
  __int64 v151; // rbp
  __int64 v152; // r13
  void *v153; // rdi
  __int64 v154; // rsi
  __int64 v155; // rcx
  __int64 v156; // rax
  __int64 v157; // rsi
  __int64 v158; // rax
  __int64 v159; // rsi
  __m128i *v160; // rax
  int v161; // eax
  __m128i *v162; // rax
  __int64 v163; // rsi
  __int64 v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // r13
  __int64 v168; // r15
  __int64 v169; // r13
  void *v170; // rdi
  unsigned __int64 v171; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v172; // [rsp+10h] [rbp-A8h]
  __int64 *v173; // [rsp+10h] [rbp-A8h]
  __m128i *v175; // [rsp+20h] [rbp-98h]
  _BYTE *v176; // [rsp+20h] [rbp-98h]
  __int64 *v177; // [rsp+28h] [rbp-90h]
  __m128i *v178; // [rsp+28h] [rbp-90h]
  int v179; // [rsp+30h] [rbp-88h]
  __int64 v180; // [rsp+38h] [rbp-80h]
  __int64 v181; // [rsp+38h] [rbp-80h]
  void *v182; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v183; // [rsp+48h] [rbp-70h]
  int v184; // [rsp+50h] [rbp-68h]
  void *v185; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v186; // [rsp+68h] [rbp-50h]
  int v187; // [rsp+70h] [rbp-48h]

  v6 = a3;
  v7 = *(__m128i **)a3;
  v179 = *(_DWORD *)(a3 + 16);
  v171 = a2;
  v172 = *(_QWORD *)(a3 + 8);
  if ( !*(_QWORD *)a3 )
  {
    v39 = *(_QWORD *)(a2 + 8);
    v40 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v40 + 17) & 2) != 0 )
      goto LABEL_68;
    goto LABEL_94;
  }
  v8 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 14976LL);
  if ( v8 )
  {
    v20 = (unsigned int)(v8 - 1);
    *(_DWORD *)(v172 + 14976) = v20;
    v21 = *(__m128i **)(v172 + 8 * v20 + 14848);
    v22 = v21[33].m128i_u32[2];
    v21->m128i_i8[0] = 0;
    v23 = v21[33].m128i_i64[0];
    v21[26].m128i_i32[2] = 0;
    v24 = v23 + (v22 << 6);
    if ( v23 == v24 )
    {
      v10 = v7;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v24 -= 64;
          v25 = *(void **)(v24 + 24);
          if ( v25 == (void *)(v24 + 40) )
            break;
          operator delete(v25);
          if ( v23 == v24 )
            goto LABEL_27;
        }
      }
      while ( v23 != v24 );
LABEL_27:
      v10 = *(const __m128i **)v6;
    }
    v21[33].m128i_i32[2] = 0;
    v9 = v21 + 6;
    v7 = v21;
  }
  else
  {
    v7 = (__m128i *)operator new(0x3A0u);
    v7->m128i_i8[0] = 0;
    v9 = v7 + 6;
    v7[6].m128i_i64[0] = (__int64)v7[7].m128i_i64;
    v7[8].m128i_i64[0] = (__int64)v7[9].m128i_i64;
    v7[10].m128i_i64[0] = (__int64)v7[11].m128i_i64;
    v7[12].m128i_i64[0] = (__int64)v7[13].m128i_i64;
    v7[14].m128i_i64[0] = (__int64)v7[15].m128i_i64;
    v7[16].m128i_i64[0] = (__int64)v7[17].m128i_i64;
    v7[18].m128i_i64[0] = (__int64)v7[19].m128i_i64;
    v7[20].m128i_i64[0] = (__int64)v7[21].m128i_i64;
    v7[22].m128i_i64[0] = (__int64)v7[23].m128i_i64;
    v7[24].m128i_i64[0] = (__int64)v7[25].m128i_i64;
    v7[26].m128i_i64[0] = (__int64)v7[27].m128i_i64;
    v7[6].m128i_i64[1] = 0;
    v7[7].m128i_i8[0] = 0;
    v7[8].m128i_i64[1] = 0;
    v7[9].m128i_i8[0] = 0;
    v7[10].m128i_i64[1] = 0;
    v7[11].m128i_i8[0] = 0;
    v7[12].m128i_i64[1] = 0;
    v7[13].m128i_i8[0] = 0;
    v7[14].m128i_i64[1] = 0;
    v7[15].m128i_i8[0] = 0;
    v7[16].m128i_i64[1] = 0;
    v7[17].m128i_i8[0] = 0;
    v7[18].m128i_i64[1] = 0;
    v7[19].m128i_i8[0] = 0;
    v7[20].m128i_i64[1] = 0;
    v7[21].m128i_i8[0] = 0;
    v7[22].m128i_i64[1] = 0;
    v7[23].m128i_i8[0] = 0;
    v7[24].m128i_i64[1] = 0;
    v7[25].m128i_i8[0] = 0;
    v7[26].m128i_i64[1] = 0x800000000LL;
    v10 = *(const __m128i **)v6;
    v7[33].m128i_i64[0] = (__int64)v7[34].m128i_i64;
    v7[33].m128i_i64[1] = 0x600000000LL;
  }
  v7->m128i_i8[0] = v10->m128i_i8[0];
  v7->m128i_i8[1] = v10->m128i_i8[1];
  v7->m128i_i8[2] = v10->m128i_i8[2];
  v7->m128i_i8[3] = v10->m128i_i8[3];
  v7->m128i_i8[4] = v10->m128i_i8[4];
  v7->m128i_i8[5] = v10->m128i_i8[5];
  v7->m128i_i8[6] = v10->m128i_i8[6];
  v7->m128i_i8[7] = v10->m128i_i8[7];
  v7->m128i_i8[8] = v10->m128i_i8[8];
  v7->m128i_i8[9] = v10->m128i_i8[9];
  v7->m128i_i8[10] = v10->m128i_i8[10];
  if ( &v7[1] < &v10[2] && &v10[1] < &v7[2] )
  {
    v7[1].m128i_i64[0] = v10[1].m128i_i64[0];
    v7[1].m128i_i64[1] = v10[1].m128i_i64[1];
    v7[2].m128i_i64[0] = v10[2].m128i_i64[0];
    v7[2].m128i_i64[1] = v10[2].m128i_i64[1];
    v7[3].m128i_i64[0] = v10[3].m128i_i64[0];
    v7[3].m128i_i64[1] = v10[3].m128i_i64[1];
    v7[4].m128i_i64[0] = v10[4].m128i_i64[0];
    v7[4].m128i_i64[1] = v10[4].m128i_i64[1];
    v7[5].m128i_i64[0] = v10[5].m128i_i64[0];
    v7[5].m128i_i64[1] = v10[5].m128i_i64[1];
  }
  else
  {
    v7[1] = _mm_loadu_si128(v10 + 1);
    v7[2] = _mm_loadu_si128(v10 + 2);
    v7[3] = _mm_loadu_si128(v10 + 3);
    v7[4] = _mm_loadu_si128(v10 + 4);
    v7[5] = _mm_loadu_si128(v10 + 5);
  }
  v180 = v6;
  m128i_i64 = v9[1].m128i_i64;
  v12 = v10 + 6;
  do
  {
    if ( v12 != (const __m128i *)(m128i_i64 - 2) )
    {
      v14 = (__int64 *)*(m128i_i64 - 2);
      v15 = v12->m128i_u64[1];
      if ( v14 == m128i_i64 )
        v16 = 15;
      else
        v16 = *m128i_i64;
      if ( v15 > v16 )
      {
        if ( (v15 & 0x8000000000000000LL) != 0LL )
LABEL_254:
          std::__throw_length_error("basic_string::_M_create");
        v17 = 2 * v16;
        if ( v15 < v17 )
        {
          v18 = v17 + 1;
          if ( v17 < 0 )
          {
            v18 = 0x8000000000000000LL;
            v17 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
        else
        {
          v18 = v15 + 1;
          v17 = v12->m128i_i64[1];
        }
        v14 = (__int64 *)operator new(v18);
        v19 = (__int64 *)*(m128i_i64 - 2);
        if ( v19 != m128i_i64 )
        {
          v177 = v14;
          operator delete(v19);
          v14 = v177;
        }
        *(m128i_i64 - 2) = (__int64)v14;
        *m128i_i64 = v17;
      }
      if ( v15 )
      {
        v13 = (_BYTE *)v12->m128i_i64[0];
        if ( v15 == 1 )
          *(_BYTE *)v14 = *v13;
        else
          memcpy(v14, v13, v15);
        v14 = (__int64 *)*(m128i_i64 - 2);
      }
      *(m128i_i64 - 1) = v15;
      *((_BYTE *)v14 + v15) = 0;
    }
    v12 += 2;
    m128i_i64 += 4;
  }
  while ( v12 != &v10[26] );
  v26 = (__m128i *)v12;
  v6 = v180;
  if ( &v7[26] != v26 )
  {
    v27 = v10[26].m128i_u32[2];
    v28 = v7[26].m128i_u32[2];
    v29 = v10[26].m128i_i32[2];
    if ( v27 <= v28 )
    {
      if ( v10[26].m128i_i32[2] )
      {
        v113 = v7[26].m128i_i64[0];
        v114 = v10[26].m128i_i64[0];
        v115 = 0;
        do
        {
          *(_QWORD *)(v113 + v115) = *(_QWORD *)(v114 + v115);
          *(_BYTE *)(v113 + v115 + 8) = *(_BYTE *)(v114 + v115 + 8);
          v115 += 12;
        }
        while ( 12 * v27 != v115 );
      }
    }
    else
    {
      if ( v27 > v7[26].m128i_u32[3] )
      {
        v7[26].m128i_i32[2] = 0;
        sub_2237220(&v7[26], &v7[27], v27, 12);
        v31 = (char *)v10[26].m128i_i64[0];
        v30 = (_BYTE *)v7[26].m128i_i64[0];
        v35 = 0;
        v27 = v10[26].m128i_u32[2];
        v36 = v31;
      }
      else
      {
        v30 = (_BYTE *)v7[26].m128i_i64[0];
        v31 = (char *)v10[26].m128i_i64[0];
        if ( v7[26].m128i_i32[2] )
        {
          v32 = 3 * v28;
          v33 = 0;
          v34 = 4 * v32;
          v35 = v34;
          do
          {
            *(_QWORD *)&v30[v33] = *(_QWORD *)&v31[v33];
            v30[v33 + 8] = v31[v33 + 8];
            v33 += 12;
          }
          while ( v34 != v33 );
          v27 = v10[26].m128i_u32[2];
          v30 += v34;
          v36 = &v31[v34];
        }
        else
        {
          v36 = (char *)v10[26].m128i_i64[0];
          v35 = 0;
        }
      }
      v37 = 12 * v27;
      if ( v36 != &v31[v37] )
        memcpy(v30, v36, v37 - v35);
    }
    v7[26].m128i_i32[2] = v29;
  }
  a2 = (__int64)v10[33].m128i_i64;
  v38 = 0;
  sub_9EED30((__int64)v7[33].m128i_i64, v10[33].m128i_i64);
  v39 = *(_QWORD *)(v171 + 8);
  v40 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v40 + 17) & 2) == 0 )
  {
LABEL_94:
    v67 = *(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v68 = *(unsigned __int8 *)(v67 + 16);
    if ( (_BYTE)v68 == 13 )
    {
      if ( (((*(_WORD *)(v67 + 18) >> 3) + 76) & 0x1FFu) > 0x34 )
      {
LABEL_96:
        if ( v7 )
        {
          v69 = v7->m128i_u8[0];
          v70 = v7 + 6;
          v71 = (unsigned __int8)(v69 + 1);
          v72 = v69 + 2;
        }
        else
        {
          v161 = *(_DWORD *)(v172 + 14976);
          if ( v161 )
          {
            v166 = (unsigned int)(v161 - 1);
            *(_DWORD *)(v172 + 14976) = v166;
            v7 = *(__m128i **)(v172 + 8 * v166 + 14848);
            v167 = v7[33].m128i_u32[2];
            v168 = v7[33].m128i_i64[0];
            v7->m128i_i8[0] = 0;
            v7[26].m128i_i32[2] = 0;
            v169 = v168 + (v167 << 6);
            if ( v168 == v169 )
            {
              v69 = 0;
              v72 = 2;
              v71 = 1;
            }
            else
            {
              do
              {
                while ( 1 )
                {
                  v169 -= 64;
                  v170 = *(void **)(v169 + 24);
                  if ( v170 == (void *)(v169 + 40) )
                    break;
                  operator delete(v170);
                  if ( v168 == v169 )
                    goto LABEL_248;
                }
              }
              while ( v168 != v169 );
LABEL_248:
              v69 = v7->m128i_u8[0];
              v72 = v69 + 2;
              v71 = (unsigned __int8)(v69 + 1);
            }
            v7[33].m128i_i32[2] = 0;
            v70 = v7 + 6;
          }
          else
          {
            v162 = (__m128i *)operator new(0x3A0u);
            v72 = 2;
            v69 = 0;
            v7 = v162;
            v162->m128i_i8[0] = 0;
            v70 = v162 + 6;
            v162[6].m128i_i64[0] = (__int64)v162[7].m128i_i64;
            v162[8].m128i_i64[0] = (__int64)v162[9].m128i_i64;
            v162[10].m128i_i64[0] = (__int64)v162[11].m128i_i64;
            v162[12].m128i_i64[0] = (__int64)v162[13].m128i_i64;
            v162[14].m128i_i64[0] = (__int64)v162[15].m128i_i64;
            v162[16].m128i_i64[0] = (__int64)v162[17].m128i_i64;
            v162[18].m128i_i64[0] = (__int64)v162[19].m128i_i64;
            v162[20].m128i_i64[0] = (__int64)v162[21].m128i_i64;
            v162[22].m128i_i64[0] = (__int64)v162[23].m128i_i64;
            v162[24].m128i_i64[0] = (__int64)v162[25].m128i_i64;
            v162[26].m128i_i64[0] = (__int64)v162[27].m128i_i64;
            v162[6].m128i_i64[1] = 0;
            v162[7].m128i_i8[0] = 0;
            v162[8].m128i_i64[1] = 0;
            v162[9].m128i_i8[0] = 0;
            v162[10].m128i_i64[1] = 0;
            v162[11].m128i_i8[0] = 0;
            v162[12].m128i_i64[1] = 0;
            v162[13].m128i_i8[0] = 0;
            v162[14].m128i_i64[1] = 0;
            v162[15].m128i_i8[0] = 0;
            v162[16].m128i_i64[1] = 0;
            v162[17].m128i_i8[0] = 0;
            v162[18].m128i_i64[1] = 0;
            v162[19].m128i_i8[0] = 0;
            v162[20].m128i_i64[1] = 0;
            v162[21].m128i_i8[0] = 0;
            v162[22].m128i_i64[1] = 0;
            v162[23].m128i_i8[0] = 0;
            v162[24].m128i_i64[1] = 0;
            v162[25].m128i_i8[0] = 0;
            v162[26].m128i_i64[1] = 0x800000000LL;
            v162[33].m128i_i64[0] = (__int64)v162[34].m128i_i64;
            v162[33].m128i_i64[1] = 0x600000000LL;
            v71 = 1;
          }
        }
        v7->m128i_i8[v69 + 1] = 2;
        v7[1].m128i_i64[v69] = 1;
        v7->m128i_i8[v71 + 1] = 8;
        v7->m128i_i8[0] = v72;
        v7[1].m128i_i64[v71] = v39;
        v182 = nullptr;
        v184 = v179;
        v183 = v172;
        v73 = *(_DWORD *)(v172 + 14976);
        if ( v73 )
        {
          v149 = (unsigned int)(v73 - 1);
          *(_DWORD *)(v172 + 14976) = v149;
          v74 = *(__m128i **)(v172 + 8 * v149 + 14848);
          v150 = v74[33].m128i_u32[2];
          v74->m128i_i8[0] = 0;
          v151 = v74[33].m128i_i64[0];
          v74[26].m128i_i32[2] = 0;
          v152 = v151 + (v150 << 6);
          while ( v151 != v152 )
          {
            while ( 1 )
            {
              v152 -= 64;
              v153 = *(void **)(v152 + 24);
              if ( v153 == (void *)(v152 + 40) )
                break;
              operator delete(v153);
              if ( v151 == v152 )
                goto LABEL_221;
            }
          }
LABEL_221:
          v74[33].m128i_i32[2] = 0;
          v75 = v74 + 6;
        }
        else
        {
          v74 = (__m128i *)operator new(0x3A0u);
          v74->m128i_i8[0] = 0;
          v75 = v74 + 6;
          v74[6].m128i_i64[0] = (__int64)v74[7].m128i_i64;
          v74[8].m128i_i64[0] = (__int64)v74[9].m128i_i64;
          v74[10].m128i_i64[0] = (__int64)v74[11].m128i_i64;
          v74[12].m128i_i64[0] = (__int64)v74[13].m128i_i64;
          v74[14].m128i_i64[0] = (__int64)v74[15].m128i_i64;
          v74[16].m128i_i64[0] = (__int64)v74[17].m128i_i64;
          v74[18].m128i_i64[0] = (__int64)v74[19].m128i_i64;
          v74[20].m128i_i64[0] = (__int64)v74[21].m128i_i64;
          v74[22].m128i_i64[0] = (__int64)v74[23].m128i_i64;
          v74[24].m128i_i64[0] = (__int64)v74[25].m128i_i64;
          v74[26].m128i_i64[0] = (__int64)v74[27].m128i_i64;
          v74[6].m128i_i64[1] = 0;
          v74[7].m128i_i8[0] = 0;
          v74[8].m128i_i64[1] = 0;
          v74[9].m128i_i8[0] = 0;
          v74[10].m128i_i64[1] = 0;
          v74[11].m128i_i8[0] = 0;
          v74[12].m128i_i64[1] = 0;
          v74[13].m128i_i8[0] = 0;
          v74[14].m128i_i64[1] = 0;
          v74[15].m128i_i8[0] = 0;
          v74[16].m128i_i64[1] = 0;
          v74[17].m128i_i8[0] = 0;
          v74[18].m128i_i64[1] = 0;
          v74[19].m128i_i8[0] = 0;
          v74[20].m128i_i64[1] = 0;
          v74[21].m128i_i8[0] = 0;
          v74[22].m128i_i64[1] = 0;
          v74[23].m128i_i8[0] = 0;
          v74[24].m128i_i64[1] = 0;
          v74[25].m128i_i8[0] = 0;
          v74[26].m128i_i64[1] = 0x800000000LL;
          v74[33].m128i_i64[0] = (__int64)v74[34].m128i_i64;
          v74[33].m128i_i64[1] = 0x600000000LL;
        }
        v182 = v74;
        v74->m128i_i8[0] = v7->m128i_i8[0];
        v74->m128i_i8[1] = v7->m128i_i8[1];
        v74->m128i_i8[2] = v7->m128i_i8[2];
        v74->m128i_i8[3] = v7->m128i_i8[3];
        v74->m128i_i8[4] = v7->m128i_i8[4];
        v74->m128i_i8[5] = v7->m128i_i8[5];
        v74->m128i_i8[6] = v7->m128i_i8[6];
        v74->m128i_i8[7] = v7->m128i_i8[7];
        v74->m128i_i8[8] = v7->m128i_i8[8];
        v74->m128i_i8[9] = v7->m128i_i8[9];
        v74->m128i_i8[10] = v7->m128i_i8[10];
        if ( &v74[1] < &v7[2] && &v7[1] < &v74[2] )
        {
          v74[1].m128i_i64[0] = v7[1].m128i_i64[0];
          v74[1].m128i_i64[1] = v7[1].m128i_i64[1];
          v74[2].m128i_i64[0] = v7[2].m128i_i64[0];
          v74[2].m128i_i64[1] = v7[2].m128i_i64[1];
          v74[3].m128i_i64[0] = v7[3].m128i_i64[0];
          v74[3].m128i_i64[1] = v7[3].m128i_i64[1];
          v74[4].m128i_i64[0] = v7[4].m128i_i64[0];
          v74[4].m128i_i64[1] = v7[4].m128i_i64[1];
          v74[5].m128i_i64[0] = v7[5].m128i_i64[0];
          v74[5].m128i_i64[1] = v7[5].m128i_i64[1];
        }
        else
        {
          v74[1] = _mm_loadu_si128(v7 + 1);
          v74[2] = _mm_loadu_si128(v7 + 2);
          v74[3] = _mm_loadu_si128(v7 + 3);
          v74[4] = _mm_loadu_si128(v7 + 4);
          v74[5] = _mm_loadu_si128(v7 + 5);
        }
        v181 = v6;
        v76 = v75;
        v77 = v70;
        v178 = v7;
        v78 = v70 + 20;
        do
        {
          if ( v76 != v77 )
          {
            v80 = (_BYTE *)v76->m128i_i64[0];
            v81 = v77->m128i_u64[1];
            if ( (__m128i *)v76->m128i_i64[0] == &v76[1] )
              v82 = 15;
            else
              v82 = v76[1].m128i_u64[0];
            if ( v81 > v82 )
            {
              if ( (v81 & 0x8000000000000000LL) != 0LL )
                goto LABEL_254;
              v83 = 2 * v82;
              if ( v81 < v83 )
              {
                v84 = v83 + 1;
                if ( v83 < 0 )
                {
                  v84 = 0x8000000000000000LL;
                  v83 = 0x7FFFFFFFFFFFFFFFLL;
                }
              }
              else
              {
                v84 = v81 + 1;
                v83 = v77->m128i_i64[1];
              }
              v80 = (_BYTE *)operator new(v84);
              if ( (__m128i *)v76->m128i_i64[0] != &v76[1] )
              {
                v176 = v80;
                operator delete((void *)v76->m128i_i64[0]);
                v80 = v176;
              }
              v76->m128i_i64[0] = (__int64)v80;
              v76[1].m128i_i64[0] = v83;
            }
            if ( v81 )
            {
              v79 = (_BYTE *)v77->m128i_i64[0];
              if ( v81 == 1 )
                *v80 = *v79;
              else
                memcpy(v80, v79, v81);
              v80 = (_BYTE *)v76->m128i_i64[0];
            }
            v76->m128i_i64[1] = v81;
            v80[v81] = 0;
          }
          v77 += 2;
          v76 += 2;
        }
        while ( v77 != v78 );
        v7 = v178;
        v6 = v181;
        if ( &v74[26] != &v178[26] )
        {
          v116 = v178[26].m128i_u32[2];
          v117 = v74[26].m128i_u32[2];
          v118 = v178[26].m128i_i32[2];
          if ( v116 <= v117 )
          {
            if ( v178[26].m128i_i32[2] )
            {
              v163 = v74[26].m128i_i64[0];
              v164 = v178[26].m128i_i64[0];
              v165 = 0;
              do
              {
                *(_QWORD *)(v163 + v165) = *(_QWORD *)(v164 + v165);
                *(_BYTE *)(v163 + v165 + 8) = *(_BYTE *)(v164 + v165 + 8);
                v165 += 12;
              }
              while ( 12 * v116 != v165 );
            }
          }
          else
          {
            if ( v116 > v74[26].m128i_u32[3] )
            {
              v74[26].m128i_i32[2] = 0;
              sub_2237220(&v74[26], &v74[27], v116, 12);
              v120 = (char *)v178[26].m128i_i64[0];
              v119 = (_BYTE *)v74[26].m128i_i64[0];
              v124 = 0;
              v116 = v178[26].m128i_u32[2];
              v125 = v120;
            }
            else
            {
              v119 = (_BYTE *)v74[26].m128i_i64[0];
              v120 = (char *)v178[26].m128i_i64[0];
              if ( v74[26].m128i_i32[2] )
              {
                v121 = 3 * v117;
                v122 = 0;
                v123 = 4 * v121;
                v124 = v123;
                do
                {
                  *(_QWORD *)&v119[v122] = *(_QWORD *)&v120[v122];
                  v119[v122 + 8] = v120[v122 + 8];
                  v122 += 12;
                }
                while ( v123 != v122 );
                v116 = v178[26].m128i_u32[2];
                v119 += v123;
                v125 = &v120[v123];
              }
              else
              {
                v125 = (char *)v178[26].m128i_i64[0];
                v124 = 0;
              }
            }
            v126 = 12 * v116;
            if ( v125 != &v120[v126] )
              memcpy(v119, v125, v126 - v124);
          }
          v74[26].m128i_i32[2] = v118;
        }
        sub_9EED30((__int64)v74[33].m128i_i64, v178[33].m128i_i64);
        v130 = sub_C00A40(v171, (__int64)v178[33].m128i_i64, v127, v128, v129);
        v131 = sub_1AAB2D0(a1, v130, (__int64)&v182);
        v132 = (void **)v182;
        v38 = v131;
        if ( v182 )
        {
          v133 = v183;
          if ( v183 )
          {
            if ( (unsigned __int64)v182 < v183 || (unsigned __int64)v182 > v183 + 14848 )
            {
              v134 = *((void ***)v182 + 66);
              v135 = &v134[8 * (unsigned __int64)*((unsigned int *)v182 + 134)];
              if ( v134 != v135 )
              {
                v136 = *((void ***)v182 + 66);
                do
                {
                  while ( 1 )
                  {
                    v135 -= 8;
                    v137 = (void **)v135[3];
                    if ( v137 == v135 + 5 )
                      break;
                    operator delete(v137);
                    if ( v136 == v135 )
                      goto LABEL_190;
                  }
                }
                while ( v136 != v135 );
LABEL_190:
                v135 = (void **)v132[66];
              }
              if ( v135 != v132 + 68 )
                free(v135);
              v138 = (void **)v132[52];
              v139 = v132 + 52;
              if ( v138 != v132 + 54 )
                free(v138);
              v140 = v132 + 12;
              do
              {
                while ( 1 )
                {
                  v139 -= 4;
                  if ( *v139 == v139 + 2 )
                    break;
                  operator delete(*v139);
                  if ( v139 == v140 )
                    goto LABEL_198;
                }
              }
              while ( v139 != v140 );
LABEL_198:
              operator delete(v132, 0x3A0u);
            }
            else
            {
              v148 = *(unsigned int *)(v183 + 14976);
              *(_DWORD *)(v183 + 14976) = v148 + 1;
              *(_QWORD *)(v133 + 8 * v148 + 14848) = v132;
            }
          }
        }
        goto LABEL_44;
      }
    }
    else if ( (_BYTE)v68 == 47 )
    {
      v86 = sub_F60F10(v67, a2, a3, a4, a5, a6);
      if ( (*((_BYTE *)v86 + 74) & 1) == 0 && (v86[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_96;
    }
    else
    {
      if ( (unsigned __int8)v68 > 0x2Au )
        goto LABEL_96;
      v48 = 0x40600004C00LL;
      if ( !_bittest64(&v48, v68) )
        goto LABEL_96;
    }
    if ( v7 )
    {
      v38 = 0;
      if ( v172 )
        goto LABEL_44;
    }
LABEL_68:
    if ( ((*(_BYTE *)(v171 + 1) >> 1) & 3) == 1 )
    {
      return 0;
    }
    else
    {
      v49 = *(__m128i **)v6;
      v50 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)v6 )
      {
        v51 = v49->m128i_u8[0];
        v52 = v49->m128i_i8[0] + 1;
      }
      else
      {
        v142 = *(_DWORD *)(v50 + 14976);
        if ( v142 )
        {
          v143 = (unsigned int)(v142 - 1);
          *(_DWORD *)(v50 + 14976) = v143;
          v49 = *(__m128i **)(v50 + 8 * v143 + 14848);
          v144 = v49[33].m128i_u32[2];
          v145 = v49[33].m128i_i64[0];
          v49->m128i_i8[0] = 0;
          v49[26].m128i_i32[2] = 0;
          v146 = v145 + (v144 << 6);
          if ( v145 == v146 )
          {
            v52 = 1;
            v51 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v146 -= 64;
                v147 = *(void **)(v146 + 24);
                if ( v147 == (void *)(v146 + 40) )
                  break;
                operator delete(v147);
                if ( v145 == v146 )
                  goto LABEL_211;
              }
            }
            while ( v145 != v146 );
LABEL_211:
            v51 = v49->m128i_u8[0];
            v50 = *(_QWORD *)(v6 + 8);
            v52 = v49->m128i_i8[0] + 1;
          }
          v49[33].m128i_i32[2] = 0;
        }
        else
        {
          v160 = (__m128i *)operator new(0x3A0u);
          v51 = 0;
          v49 = v160;
          v160->m128i_i8[0] = 0;
          v160[6].m128i_i64[0] = (__int64)v160[7].m128i_i64;
          v160[8].m128i_i64[0] = (__int64)v160[9].m128i_i64;
          v160[10].m128i_i64[0] = (__int64)v160[11].m128i_i64;
          v160[12].m128i_i64[0] = (__int64)v160[13].m128i_i64;
          v160[14].m128i_i64[0] = (__int64)v160[15].m128i_i64;
          v160[16].m128i_i64[0] = (__int64)v160[17].m128i_i64;
          v160[18].m128i_i64[0] = (__int64)v160[19].m128i_i64;
          v160[20].m128i_i64[0] = (__int64)v160[21].m128i_i64;
          v160[22].m128i_i64[0] = (__int64)v160[23].m128i_i64;
          v160[24].m128i_i64[0] = (__int64)v160[25].m128i_i64;
          v160[26].m128i_i64[0] = (__int64)v160[27].m128i_i64;
          v160[6].m128i_i64[1] = 0;
          v160[7].m128i_i8[0] = 0;
          v160[8].m128i_i64[1] = 0;
          v160[9].m128i_i8[0] = 0;
          v160[10].m128i_i64[1] = 0;
          v160[11].m128i_i8[0] = 0;
          v160[12].m128i_i64[1] = 0;
          v160[13].m128i_i8[0] = 0;
          v160[14].m128i_i64[1] = 0;
          v160[15].m128i_i8[0] = 0;
          v160[16].m128i_i64[1] = 0;
          v160[17].m128i_i8[0] = 0;
          v160[18].m128i_i64[1] = 0;
          v160[19].m128i_i8[0] = 0;
          v160[20].m128i_i64[1] = 0;
          v160[21].m128i_i8[0] = 0;
          v160[22].m128i_i64[1] = 0;
          v160[23].m128i_i8[0] = 0;
          v160[24].m128i_i64[1] = 0;
          v160[25].m128i_i8[0] = 0;
          v160[26].m128i_i64[1] = 0x800000000LL;
          v50 = *(_QWORD *)(v6 + 8);
          v160[33].m128i_i64[0] = (__int64)v160[34].m128i_i64;
          v160[33].m128i_i64[1] = 0x600000000LL;
          v52 = 1;
        }
        *(_QWORD *)v6 = v49;
      }
      v49->m128i_i8[v51 + 1] = 2;
      v49->m128i_i8[0] = v52;
      v53 = *(_DWORD *)(v6 + 16);
      v49[1].m128i_i64[v51] = 0;
      v187 = v53;
      v54 = *(_DWORD *)(v50 + 14976);
      v185 = nullptr;
      v186 = v50;
      if ( v54 )
      {
        v87 = (unsigned int)(v54 - 1);
        *(_DWORD *)(v50 + 14976) = v87;
        v55 = *(__m128i **)(v50 + 8 * v87 + 14848);
        v88 = v55[33].m128i_u32[2];
        v55->m128i_i8[0] = 0;
        v89 = v55[33].m128i_i64[0];
        v55[26].m128i_i32[2] = 0;
        v90 = v89 + (v88 << 6);
        if ( v89 != v90 )
        {
          do
          {
            while ( 1 )
            {
              v90 -= 64;
              v91 = *(void **)(v90 + 24);
              if ( v91 == (void *)(v90 + 40) )
                break;
              operator delete(v91);
              if ( v89 == v90 )
                goto LABEL_131;
            }
          }
          while ( v89 != v90 );
LABEL_131:
          v49 = *(__m128i **)v6;
        }
        v55[33].m128i_i32[2] = 0;
        v56 = v55 + 6;
      }
      else
      {
        v55 = (__m128i *)operator new(0x3A0u);
        v55->m128i_i8[0] = 0;
        v56 = v55 + 6;
        v55[6].m128i_i64[0] = (__int64)v55[7].m128i_i64;
        v55[8].m128i_i64[0] = (__int64)v55[9].m128i_i64;
        v55[10].m128i_i64[0] = (__int64)v55[11].m128i_i64;
        v55[12].m128i_i64[0] = (__int64)v55[13].m128i_i64;
        v55[14].m128i_i64[0] = (__int64)v55[15].m128i_i64;
        v55[16].m128i_i64[0] = (__int64)v55[17].m128i_i64;
        v55[18].m128i_i64[0] = (__int64)v55[19].m128i_i64;
        v55[20].m128i_i64[0] = (__int64)v55[21].m128i_i64;
        v55[22].m128i_i64[0] = (__int64)v55[23].m128i_i64;
        v55[24].m128i_i64[0] = (__int64)v55[25].m128i_i64;
        v55[26].m128i_i64[0] = (__int64)v55[27].m128i_i64;
        v55[6].m128i_i64[1] = 0;
        v55[7].m128i_i8[0] = 0;
        v55[8].m128i_i64[1] = 0;
        v55[9].m128i_i8[0] = 0;
        v55[10].m128i_i64[1] = 0;
        v55[11].m128i_i8[0] = 0;
        v55[12].m128i_i64[1] = 0;
        v55[13].m128i_i8[0] = 0;
        v55[14].m128i_i64[1] = 0;
        v55[15].m128i_i8[0] = 0;
        v55[16].m128i_i64[1] = 0;
        v55[17].m128i_i8[0] = 0;
        v55[18].m128i_i64[1] = 0;
        v55[19].m128i_i8[0] = 0;
        v55[20].m128i_i64[1] = 0;
        v55[21].m128i_i8[0] = 0;
        v55[22].m128i_i64[1] = 0;
        v55[23].m128i_i8[0] = 0;
        v55[24].m128i_i64[1] = 0;
        v55[25].m128i_i8[0] = 0;
        v55[26].m128i_i64[1] = 0x800000000LL;
        v49 = *(__m128i **)v6;
        v55[33].m128i_i64[0] = (__int64)v55[34].m128i_i64;
        v55[33].m128i_i64[1] = 0x600000000LL;
      }
      v185 = v55;
      v55->m128i_i8[0] = v49->m128i_i8[0];
      v55->m128i_i8[1] = v49->m128i_i8[1];
      v55->m128i_i8[2] = v49->m128i_i8[2];
      v55->m128i_i8[3] = v49->m128i_i8[3];
      v55->m128i_i8[4] = v49->m128i_i8[4];
      v55->m128i_i8[5] = v49->m128i_i8[5];
      v55->m128i_i8[6] = v49->m128i_i8[6];
      v55->m128i_i8[7] = v49->m128i_i8[7];
      v55->m128i_i8[8] = v49->m128i_i8[8];
      v55->m128i_i8[9] = v49->m128i_i8[9];
      v55->m128i_i8[10] = v49->m128i_i8[10];
      if ( &v55[1] < &v49[2] && &v49[1] < &v55[2] )
      {
        v55[1].m128i_i64[0] = v49[1].m128i_i64[0];
        v55[1].m128i_i64[1] = v49[1].m128i_i64[1];
        v55[2].m128i_i64[0] = v49[2].m128i_i64[0];
        v55[2].m128i_i64[1] = v49[2].m128i_i64[1];
        v55[3].m128i_i64[0] = v49[3].m128i_i64[0];
        v55[3].m128i_i64[1] = v49[3].m128i_i64[1];
        v55[4].m128i_i64[0] = v49[4].m128i_i64[0];
        v55[4].m128i_i64[1] = v49[4].m128i_i64[1];
        v55[5].m128i_i64[0] = v49[5].m128i_i64[0];
        v55[5].m128i_i64[1] = v49[5].m128i_i64[1];
      }
      else
      {
        v55[1] = _mm_loadu_si128(v49 + 1);
        v55[2] = _mm_loadu_si128(v49 + 2);
        v55[3] = _mm_loadu_si128(v49 + 3);
        v55[4] = _mm_loadu_si128(v49 + 4);
        v55[5] = _mm_loadu_si128(v49 + 5);
      }
      v57 = v49 + 6;
      v175 = v49;
      v58 = v56[1].m128i_i64;
      v59 = v49 + 26;
      do
      {
        if ( v57 != (__m128i *)(v58 - 2) )
        {
          v61 = (__int64 *)*(v58 - 2);
          v62 = v57->m128i_u64[1];
          if ( v61 == v58 )
            v63 = 15;
          else
            v63 = *v58;
          if ( v62 > v63 )
          {
            if ( (v62 & 0x8000000000000000LL) != 0LL )
              goto LABEL_254;
            v64 = 2 * v63;
            if ( v62 < v64 )
            {
              v65 = v64 + 1;
              if ( v64 < 0 )
              {
                v65 = 0x8000000000000000LL;
                v64 = 0x7FFFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              v65 = v62 + 1;
              v64 = v57->m128i_i64[1];
            }
            v61 = (__int64 *)operator new(v65);
            v66 = (__int64 *)*(v58 - 2);
            if ( v66 != v58 )
            {
              v173 = v61;
              operator delete(v66);
              v61 = v173;
            }
            *(v58 - 2) = (__int64)v61;
            *v58 = v64;
          }
          if ( v62 )
          {
            v60 = (_BYTE *)v57->m128i_i64[0];
            if ( v62 == 1 )
              *(_BYTE *)v61 = *v60;
            else
              memcpy(v61, v60, v62);
            v61 = (__int64 *)*(v58 - 2);
          }
          *(v58 - 1) = v62;
          *((_BYTE *)v61 + v62) = 0;
        }
        v57 += 2;
        v58 += 4;
      }
      while ( v57 != v59 );
      if ( &v55[26] != v57 )
      {
        v92 = v175[26].m128i_u32[2];
        v93 = v55[26].m128i_u32[2];
        v94 = v175[26].m128i_i32[2];
        if ( v92 <= v93 )
        {
          if ( v175[26].m128i_i32[2] )
          {
            v154 = v55[26].m128i_i64[0];
            v155 = v175[26].m128i_i64[0];
            v156 = 0;
            do
            {
              *(_QWORD *)(v154 + v156) = *(_QWORD *)(v155 + v156);
              *(_BYTE *)(v154 + v156 + 8) = *(_BYTE *)(v155 + v156 + 8);
              v156 += 12;
            }
            while ( 12 * v92 != v156 );
          }
        }
        else
        {
          if ( v92 > v55[26].m128i_u32[3] )
          {
            v55[26].m128i_i32[2] = 0;
            sub_2237220(&v55[26], &v55[27], v92, 12);
            v96 = (char *)v175[26].m128i_i64[0];
            v95 = (_BYTE *)v55[26].m128i_i64[0];
            v98 = 0;
            v92 = v175[26].m128i_u32[2];
            v97 = v96;
          }
          else
          {
            v95 = (_BYTE *)v55[26].m128i_i64[0];
            v96 = (char *)v175[26].m128i_i64[0];
            if ( v55[26].m128i_i32[2] )
            {
              v157 = 3 * v93;
              v158 = 0;
              v159 = 4 * v157;
              v98 = v159;
              do
              {
                *(_QWORD *)&v95[v158] = *(_QWORD *)&v96[v158];
                v95[v158 + 8] = v96[v158 + 8];
                v158 += 12;
              }
              while ( v159 != v158 );
              v95 += v159;
              v92 = v175[26].m128i_u32[2];
              v97 = &v96[v159];
            }
            else
            {
              v97 = (char *)v175[26].m128i_i64[0];
              v98 = 0;
            }
          }
          v99 = 12 * v92;
          if ( v97 != &v96[v99] )
            memcpy(v95, v97, v99 - v98);
        }
        v55[26].m128i_i32[2] = v94;
      }
      sub_9EED30((__int64)v55[33].m128i_i64, v175[33].m128i_i64);
      v103 = sub_C00A40(v171, (__int64)v175[33].m128i_i64, v100, v101, v102);
      v104 = sub_1AAB2D0(a1, v103, (__int64)&v185);
      v105 = (void **)v185;
      v38 = v104;
      if ( v185 )
      {
        v106 = v186;
        if ( v186 )
        {
          if ( (unsigned __int64)v185 < v186 || (unsigned __int64)v185 > v186 + 14848 )
          {
            v107 = *((void ***)v185 + 66);
            v108 = &v107[8 * (unsigned __int64)*((unsigned int *)v185 + 134)];
            if ( v107 != v108 )
            {
              do
              {
                while ( 1 )
                {
                  v108 -= 8;
                  v109 = (void **)v108[3];
                  if ( v109 == v108 + 5 )
                    break;
                  operator delete(v109);
                  if ( v107 == v108 )
                    goto LABEL_152;
                }
              }
              while ( v107 != v108 );
LABEL_152:
              v108 = (void **)v105[66];
            }
            if ( v108 != v105 + 68 )
              free(v108);
            v110 = (void **)v105[52];
            v111 = v105 + 52;
            if ( v110 != v105 + 54 )
              free(v110);
            v112 = v105 + 12;
            do
            {
              while ( 1 )
              {
                v111 -= 4;
                if ( *v111 == v111 + 2 )
                  break;
                operator delete(*v111);
                if ( v111 == v112 )
                  goto LABEL_160;
              }
            }
            while ( v111 != v112 );
LABEL_160:
            operator delete(v105, 0x3A0u);
          }
          else
          {
            v141 = *(unsigned int *)(v186 + 14976);
            *(_DWORD *)(v186 + 14976) = v141 + 1;
            *(_QWORD *)(v106 + 8 * v141 + 14848) = v105;
          }
        }
      }
    }
    return v38;
  }
LABEL_44:
  if ( v172 > (unsigned __int64)v7 || (unsigned __int64)v7 > v172 + 14848 )
  {
    v41 = (__m128i *)v7[33].m128i_i64[0];
    v42 = &v41[4 * (unsigned __int64)v7[33].m128i_u32[2]];
    if ( v41 != v42 )
    {
      do
      {
        while ( 1 )
        {
          v42 -= 4;
          v43 = (unsigned __int64 *)v42[1].m128i_i64[1];
          if ( v43 == &v42[2].m128i_u64[1] )
            break;
          operator delete(v43);
          if ( v41 == v42 )
            goto LABEL_48;
        }
      }
      while ( v41 != v42 );
LABEL_48:
      v42 = (__m128i *)v7[33].m128i_i64[0];
    }
    if ( v42 != &v7[34] )
      free(v42);
    v44 = (__m128i *)v7[26].m128i_i64[0];
    v45 = (void **)&v7[26];
    if ( v44 != &v7[27] )
      free(v44);
    v46 = (void **)&v7[6];
    do
    {
      while ( 1 )
      {
        v45 -= 4;
        if ( *v45 == v45 + 2 )
          break;
        operator delete(*v45);
        if ( v45 == v46 )
          goto LABEL_56;
      }
    }
    while ( v45 != v46 );
LABEL_56:
    operator delete(v7, 0x3A0u);
  }
  else
  {
    v85 = *(unsigned int *)(v172 + 14976);
    *(_DWORD *)(v172 + 14976) = v85 + 1;
    *(_QWORD *)(v172 + 8 * v85 + 14848) = v7;
  }
  if ( !(_BYTE)v38 )
    goto LABEL_68;
  return v38;
}
