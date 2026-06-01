__int64 __fastcall sub_18B3330(
        __int64 a1,
        __int8 **a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned int a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        unsigned __int8 a9,
        unsigned int a10)
{
  bool v10; // zf
  __int8 *v11; // rdx
  int v12; // eax
  __m128i *v13; // r13
  __m128i *v14; // rcx
  const __m128i *v15; // r15
  unsigned __int64 v16; // rdx
  __m128i *v17; // rbx
  const __m128i *v18; // r13
  const __m128i *v19; // r12
  _BYTE *v20; // rsi
  _BYTE *v21; // rax
  size_t v22; // r15
  unsigned __int64 v23; // r14
  __int64 v24; // r14
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r12
  __int64 v29; // rbx
  void *v30; // rdi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int32 v33; // ebx
  _BYTE *v34; // rdi
  char *v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // r9
  char *v40; // rsi
  __int64 v41; // rdx
  unsigned __int8 *v42; // rbx
  _QWORD *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rax
  unsigned int v53; // eax
  unsigned int *v54; // r12
  unsigned int v55; // ebx
  unsigned __int64 v56; // rax
  void **v57; // r12
  unsigned __int64 v58; // rax
  void **v59; // r13
  void **v60; // rbp
  void **v61; // rdi
  void **v62; // rdi
  void **v63; // rbp
  void **v64; // r13
  unsigned int *v66; // rdx
  unsigned int *v67; // r13
  unsigned int *v68; // rbp
  unsigned int *v69; // rdi
  unsigned int *v70; // rdi
  void **v71; // r13
  void **v72; // rbp
  unsigned __int64 v73; // rdx
  int v74; // eax
  _BYTE *v75; // rax
  __int64 *v76; // rcx
  __int8 *v77; // r14
  __int64 *v78; // rbp
  __int8 *v79; // r15
  __int64 v80; // r13
  __int64 *v81; // r14
  _BYTE *v82; // rsi
  __int64 *v83; // r13
  size_t v84; // rbx
  unsigned __int64 v85; // r12
  __int64 v86; // r12
  unsigned __int64 v87; // rdi
  __int64 *v88; // rax
  __int64 *v89; // rdi
  unsigned __int64 v90; // rdx
  unsigned __int64 v91; // rax
  int v92; // ebx
  _BYTE *v93; // rdi
  char *v94; // rcx
  __int64 v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rsi
  __int64 v98; // r10
  char *v99; // rsi
  __int64 v100; // rdx
  unsigned __int8 *v101; // rbx
  _QWORD *v102; // rdx
  __int64 v103; // rax
  __int64 v104; // r13
  __int64 v105; // rbx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rbx
  __int64 v111; // rax
  unsigned int v112; // eax
  unsigned int *v113; // r14
  unsigned __int64 v114; // rdx
  unsigned int *v115; // r15
  unsigned int *v116; // r13
  unsigned int *v117; // rdi
  unsigned int *v118; // rdi
  void **v119; // r15
  void **v120; // r13
  void **v121; // r15
  unsigned __int64 v122; // rax
  void **v123; // r13
  void **v124; // rbx
  void **v125; // rdi
  void **v126; // rdi
  void **v127; // r13
  void **v128; // rbx
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rbx
  __int64 v132; // r13
  __int64 v133; // rbx
  void *v134; // rdi
  __int64 v135; // rdx
  __int64 v136; // rsi
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // r13
  __int64 v141; // r15
  __int64 v142; // r13
  void *v143; // rdi
  __int64 v144; // rdx
  __int64 v145; // rdx
  __int64 v146; // rsi
  __int64 v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // r12
  __int64 v151; // r13
  __int64 v152; // r12
  void *v153; // rdi
  unsigned int v155; // [rsp+0h] [rbp-E8h]
  _BYTE *v157; // [rsp+10h] [rbp-D8h]
  const __m128i *v159; // [rsp+20h] [rbp-C8h]
  const __m128i *v160; // [rsp+28h] [rbp-C0h]
  __int64 v161; // [rsp+28h] [rbp-C0h]
  __int64 *v162; // [rsp+30h] [rbp-B8h]
  __int8 *v165; // [rsp+40h] [rbp-A8h]
  int v166; // [rsp+48h] [rbp-A0h]
  void *v168; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v169; // [rsp+58h] [rbp-90h]
  int v170; // [rsp+60h] [rbp-88h]
  void *v171; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v172; // [rsp+78h] [rbp-70h]
  int v173; // [rsp+80h] [rbp-68h]
  void *v174; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v175; // [rsp+98h] [rbp-50h]

  v10 = *a2 == nullptr;
  v11 = a2[1];
  v170 = *((_DWORD *)a2 + 4);
  v12 = *((_DWORD *)v11 + 3744);
  v168 = nullptr;
  v169 = (unsigned __int64)v11;
  if ( v10 )
    goto LABEL_207;
  if ( v12 )
  {
    v26 = (unsigned int)(v12 - 1);
    *((_DWORD *)v11 + 3744) = v26;
    v13 = *(__m128i **)&v11[8 * v26 + 14848];
    v27 = v13[33].m128i_u32[2];
    v13->m128i_i8[0] = 0;
    v28 = v13[33].m128i_i64[0];
    v13[26].m128i_i32[2] = 0;
    v29 = v28 + (v27 << 6);
    while ( v28 != v29 )
    {
      while ( 1 )
      {
        v29 -= 64;
        v30 = *(void **)(v29 + 24);
        if ( v30 == (void *)(v29 + 40) )
          break;
        operator delete(v30);
        if ( v28 == v29 )
          goto LABEL_28;
      }
    }
LABEL_28:
    v13[33].m128i_i32[2] = 0;
    v14 = v13 + 6;
  }
  else
  {
    v13 = (__m128i *)operator new(0x3A0u);
    v13->m128i_i8[0] = 0;
    v14 = v13 + 6;
    v13[6].m128i_i64[0] = (__int64)v13[7].m128i_i64;
    v13[8].m128i_i64[0] = (__int64)v13[9].m128i_i64;
    v13[10].m128i_i64[0] = (__int64)v13[11].m128i_i64;
    v13[12].m128i_i64[0] = (__int64)v13[13].m128i_i64;
    v13[14].m128i_i64[0] = (__int64)v13[15].m128i_i64;
    v13[16].m128i_i64[0] = (__int64)v13[17].m128i_i64;
    v13[18].m128i_i64[0] = (__int64)v13[19].m128i_i64;
    v13[20].m128i_i64[0] = (__int64)v13[21].m128i_i64;
    v13[22].m128i_i64[0] = (__int64)v13[23].m128i_i64;
    v13[24].m128i_i64[0] = (__int64)v13[25].m128i_i64;
    v13[26].m128i_i64[0] = (__int64)v13[27].m128i_i64;
    v13[6].m128i_i64[1] = 0;
    v13[7].m128i_i8[0] = 0;
    v13[8].m128i_i64[1] = 0;
    v13[9].m128i_i8[0] = 0;
    v13[10].m128i_i64[1] = 0;
    v13[11].m128i_i8[0] = 0;
    v13[12].m128i_i64[1] = 0;
    v13[13].m128i_i8[0] = 0;
    v13[14].m128i_i64[1] = 0;
    v13[15].m128i_i8[0] = 0;
    v13[16].m128i_i64[1] = 0;
    v13[17].m128i_i8[0] = 0;
    v13[18].m128i_i64[1] = 0;
    v13[19].m128i_i8[0] = 0;
    v13[20].m128i_i64[1] = 0;
    v13[21].m128i_i8[0] = 0;
    v13[22].m128i_i64[1] = 0;
    v13[23].m128i_i8[0] = 0;
    v13[24].m128i_i64[1] = 0;
    v13[25].m128i_i8[0] = 0;
    v13[26].m128i_i64[1] = 0x800000000LL;
    v13[33].m128i_i64[0] = (__int64)v13[34].m128i_i64;
    v13[33].m128i_i64[1] = 0x600000000LL;
  }
  v168 = v13;
  v15 = (const __m128i *)*a2;
  v16 = (unsigned __int64)(*a2 + 16);
  v13->m128i_i8[0] = **a2;
  v13->m128i_i8[1] = v15->m128i_i8[1];
  v13->m128i_i8[2] = v15->m128i_i8[2];
  v13->m128i_i8[3] = v15->m128i_i8[3];
  v13->m128i_i8[4] = v15->m128i_i8[4];
  v13->m128i_i8[5] = v15->m128i_i8[5];
  v13->m128i_i8[6] = v15->m128i_i8[6];
  v13->m128i_i8[7] = v15->m128i_i8[7];
  v13->m128i_i8[8] = v15->m128i_i8[8];
  v13->m128i_i8[9] = v15->m128i_i8[9];
  v13->m128i_i8[10] = v15->m128i_i8[10];
  if ( v16 < (unsigned __int64)&v13[2] && &v13[1] < &v15[2] )
  {
    v13[1].m128i_i64[0] = v15[1].m128i_i64[0];
    v13[1].m128i_i64[1] = v15[1].m128i_i64[1];
    v13[2].m128i_i64[0] = v15[2].m128i_i64[0];
    v13[2].m128i_i64[1] = v15[2].m128i_i64[1];
    v13[3].m128i_i64[0] = v15[3].m128i_i64[0];
    v13[3].m128i_i64[1] = v15[3].m128i_i64[1];
    v13[4].m128i_i64[0] = v15[4].m128i_i64[0];
    v13[4].m128i_i64[1] = v15[4].m128i_i64[1];
    v13[5].m128i_i64[0] = v15[5].m128i_i64[0];
    v13[5].m128i_i64[1] = v15[5].m128i_i64[1];
  }
  else
  {
    a7 = _mm_loadu_si128(v15 + 1);
    v13[1] = a7;
    a8 = (__m128)_mm_loadu_si128(v15 + 2);
    v13[2] = (__m128i)a8;
    v13[3] = _mm_loadu_si128(v15 + 3);
    v13[4] = _mm_loadu_si128(v15 + 4);
    v13[5] = _mm_loadu_si128(v15 + 5);
  }
  v160 = v13;
  v17 = v14;
  v18 = v15 + 6;
  v159 = v15;
  v19 = v15 + 26;
  do
  {
    if ( v17 != v18 )
    {
      v21 = (_BYTE *)v17->m128i_i64[0];
      v22 = v18->m128i_u64[1];
      if ( (__m128i *)v17->m128i_i64[0] == &v17[1] )
        v23 = 15;
      else
        v23 = v17[1].m128i_u64[0];
      if ( v22 > v23 )
      {
        if ( (v22 & 0x8000000000000000LL) != 0LL )
LABEL_221:
          std::__throw_length_error("basic_string::_M_create");
        v24 = 2 * v23;
        if ( v22 < v24 )
        {
          v25 = v24 + 1;
          if ( v24 < 0 )
          {
            v24 = 0x7FFFFFFFFFFFFFFFLL;
            v25 = 0x8000000000000000LL;
          }
        }
        else
        {
          v25 = v22 + 1;
          v24 = v18->m128i_i64[1];
        }
        v21 = (_BYTE *)operator new(v25);
        if ( (__m128i *)v17->m128i_i64[0] != &v17[1] )
        {
          v157 = v21;
          operator delete((void *)v17->m128i_i64[0]);
          v21 = v157;
        }
        v17->m128i_i64[0] = (__int64)v21;
        v17[1].m128i_i64[0] = v24;
      }
      if ( v22 )
      {
        v20 = (_BYTE *)v18->m128i_i64[0];
        if ( v22 == 1 )
          *v21 = *v20;
        else
          memcpy(v21, v20, v22);
        v21 = (_BYTE *)v17->m128i_i64[0];
      }
      v17->m128i_i64[1] = v22;
      v21[v22] = 0;
    }
    v18 += 2;
    v17 += 2;
  }
  while ( v18 != v19 );
  if ( &v160[26] != v18 )
  {
    v31 = v159[26].m128i_u32[2];
    v32 = v160[26].m128i_u32[2];
    v33 = v159[26].m128i_i32[2];
    if ( v31 <= v32 )
    {
      if ( v159[26].m128i_i32[2] )
      {
        v146 = v160[26].m128i_i64[0];
        v147 = v159[26].m128i_i64[0];
        v148 = 0;
        do
        {
          *(_QWORD *)(v146 + v148) = *(_QWORD *)(v147 + v148);
          *(_BYTE *)(v146 + v148 + 8) = *(_BYTE *)(v147 + v148 + 8);
          v148 += 12;
        }
        while ( 12 * v31 != v148 );
      }
    }
    else
    {
      if ( v31 > v160[26].m128i_u32[3] )
      {
        v160[26].m128i_i32[2] = 0;
        sub_2237220(&v160[26], &v160[27], v31, 12);
        v35 = (char *)v159[26].m128i_i64[0];
        v34 = (_BYTE *)v160[26].m128i_i64[0];
        v39 = 0;
        v31 = v159[26].m128i_u32[2];
        v40 = v35;
      }
      else
      {
        v34 = (_BYTE *)v160[26].m128i_i64[0];
        v35 = (char *)v159[26].m128i_i64[0];
        if ( v160[26].m128i_i32[2] )
        {
          v36 = 3 * v32;
          v37 = 0;
          v38 = 4 * v36;
          v39 = v38;
          do
          {
            *(_QWORD *)&v34[v37] = *(_QWORD *)&v35[v37];
            v34[v37 + 8] = v35[v37 + 8];
            v37 += 12;
          }
          while ( v38 != v37 );
          v31 = v159[26].m128i_u32[2];
          v34 += v38;
          v40 = &v35[v38];
        }
        else
        {
          v40 = (char *)v159[26].m128i_i64[0];
          v39 = 0;
        }
      }
      v41 = 12 * v31;
      if ( v40 != &v35[v41] )
        memcpy(v34, v40, v41 - v39);
    }
    v160[26].m128i_i32[2] = v33;
  }
  sub_9EED30((__int64)v160[33].m128i_i64, v159[33].m128i_i64);
  v42 = (unsigned __int8 *)v168;
  if ( !v168 )
  {
    v11 = (__int8 *)v169;
    v12 = *(_DWORD *)(v169 + 14976);
LABEL_207:
    if ( v12 )
    {
      v149 = (unsigned int)(v12 - 1);
      *((_DWORD *)v11 + 3744) = v149;
      v42 = *(unsigned __int8 **)&v11[8 * v149 + 14848];
      v150 = *((unsigned int *)v42 + 134);
      *v42 = 0;
      v151 = *((_QWORD *)v42 + 66);
      *((_DWORD *)v42 + 106) = 0;
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
            goto LABEL_220;
        }
      }
LABEL_220:
      *((_DWORD *)v42 + 134) = 0;
    }
    else
    {
      v42 = (unsigned __int8 *)operator new(0x3A0u);
      *v42 = 0;
      *((_QWORD *)v42 + 12) = v42 + 112;
      *((_QWORD *)v42 + 16) = v42 + 144;
      *((_QWORD *)v42 + 20) = v42 + 176;
      *((_QWORD *)v42 + 24) = v42 + 208;
      *((_QWORD *)v42 + 28) = v42 + 240;
      *((_QWORD *)v42 + 32) = v42 + 272;
      *((_QWORD *)v42 + 36) = v42 + 304;
      *((_QWORD *)v42 + 40) = v42 + 336;
      *((_QWORD *)v42 + 44) = v42 + 368;
      *((_QWORD *)v42 + 48) = v42 + 400;
      *((_QWORD *)v42 + 52) = v42 + 432;
      *((_QWORD *)v42 + 13) = 0;
      v42[112] = 0;
      *((_QWORD *)v42 + 17) = 0;
      v42[144] = 0;
      *((_QWORD *)v42 + 21) = 0;
      v42[176] = 0;
      *((_QWORD *)v42 + 25) = 0;
      v42[208] = 0;
      *((_QWORD *)v42 + 29) = 0;
      v42[240] = 0;
      *((_QWORD *)v42 + 33) = 0;
      v42[272] = 0;
      *((_QWORD *)v42 + 37) = 0;
      v42[304] = 0;
      *((_QWORD *)v42 + 41) = 0;
      v42[336] = 0;
      *((_QWORD *)v42 + 45) = 0;
      v42[368] = 0;
      *((_QWORD *)v42 + 49) = 0;
      v42[400] = 0;
      *((_QWORD *)v42 + 53) = 0x800000000LL;
      *((_QWORD *)v42 + 66) = v42 + 544;
      *((_QWORD *)v42 + 67) = 0x600000000LL;
    }
    v168 = v42;
  }
  v42[*v42 + 1] = 2;
  v43 = v168;
  v161 = a1 + 8;
  v44 = *(unsigned __int8 *)v168;
  *(_BYTE *)v168 = v44 + 1;
  v43[v44 + 2] = 0;
  v45 = *(_QWORD *)(a6 + 24);
  v46 = *(_QWORD *)(a3 + 24);
  sub_168B9B0((__int64)&v174, a1 + 8, 0);
  v51 = sub_18B0170(v46, a1 + 8, v47, v48);
  if ( v51 )
  {
    v52 = sub_18B0170(v45, a1 + 8, v49, v50);
    if ( v52 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 13LL) & 0x20) != 0 )
      {
        v53 = sub_18B0720(
                a1,
                (__int64)&v168,
                (__int64)&v174,
                v51,
                a5,
                v52,
                *(double *)a7.m128i_i64,
                a8,
                a10,
                nullptr,
                nullptr,
                0,
                0);
        v54 = (unsigned int *)v174;
        v55 = v53;
        if ( !v174 || (v56 = v175) == 0 )
        {
LABEL_47:
          if ( (_BYTE)v55 )
            goto LABEL_48;
          goto LABEL_84;
        }
LABEL_70:
        if ( v56 > (unsigned __int64)v54 || (unsigned __int64)v54 > v56 + 14848 )
        {
          v66 = *((unsigned int **)v54 + 66);
          v67 = &v66[16 * (unsigned __int64)v54[134]];
          if ( v66 != v67 )
          {
            v68 = *((unsigned int **)v54 + 66);
            do
            {
              while ( 1 )
              {
                v67 -= 16;
                v69 = *((unsigned int **)v67 + 3);
                if ( v69 == v67 + 10 )
                  break;
                operator delete(v69);
                if ( v68 == v67 )
                  goto LABEL_75;
              }
            }
            while ( v68 != v67 );
LABEL_75:
            v67 = *((unsigned int **)v54 + 66);
          }
          if ( v67 != v54 + 136 )
            free(v67);
          v70 = *((unsigned int **)v54 + 52);
          if ( v70 != v54 + 108 )
            free(v70);
          v71 = (void **)(v54 + 96);
          v72 = (void **)(v54 + 16);
          do
          {
            while ( *v71 != v71 + 2 )
            {
              operator delete(*v71);
              v71 -= 4;
              if ( v72 == v71 )
                goto LABEL_83;
            }
            v71 -= 4;
          }
          while ( v71 != v72 );
LABEL_83:
          operator delete(v54, 0x3A0u);
          if ( (_BYTE)v55 )
            goto LABEL_48;
          goto LABEL_84;
        }
        v144 = *(unsigned int *)(v56 + 14976);
        *(_DWORD *)(v56 + 14976) = v144 + 1;
        *(_QWORD *)(v56 + 8 * v144 + 14848) = v54;
        goto LABEL_47;
      }
    }
  }
  v54 = (unsigned int *)v174;
  if ( v174 )
  {
    v56 = v175;
    v55 = 0;
    if ( v175 )
      goto LABEL_70;
  }
LABEL_84:
  if ( !*(_WORD *)(a3 + 22) )
  {
LABEL_158:
    v55 = 0;
    goto LABEL_48;
  }
  v162 = (__int64 *)(a6 + 8LL * a9 + 48);
  v155 = a4;
  v166 = a4 + *(unsigned __int16 *)(a3 + 22);
  while ( 1 )
  {
    v171 = nullptr;
    v73 = (unsigned __int64)a2[1];
    v10 = *a2 == nullptr;
    v173 = *((_DWORD *)a2 + 4);
    v74 = *(_DWORD *)(v73 + 14976);
    v172 = v73;
    if ( v10 )
      goto LABEL_185;
    if ( v74 )
    {
      v130 = (unsigned int)(v74 - 1);
      *(_DWORD *)(v73 + 14976) = v130;
      v77 = *(__int8 **)(v73 + 8 * v130 + 14848);
      v131 = *((unsigned int *)v77 + 134);
      *v77 = 0;
      v132 = *((_QWORD *)v77 + 66);
      *((_DWORD *)v77 + 106) = 0;
      v133 = v132 + (v131 << 6);
      while ( v132 != v133 )
      {
        while ( 1 )
        {
          v133 -= 64;
          v134 = *(void **)(v133 + 24);
          if ( v134 == (void *)(v133 + 40) )
            break;
          operator delete(v134);
          if ( v132 == v133 )
            goto LABEL_181;
        }
      }
LABEL_181:
      *((_DWORD *)v77 + 134) = 0;
      v76 = (__int64 *)(v77 + 112);
    }
    else
    {
      v75 = (_BYTE *)operator new(0x3A0u);
      v76 = (__int64 *)(v75 + 112);
      v77 = v75;
      *v75 = 0;
      v75 += 144;
      *((_QWORD *)v75 - 6) = v76;
      *((_QWORD *)v75 - 5) = 0;
      *(v75 - 32) = 0;
      *((_QWORD *)v77 + 16) = v75;
      *((_QWORD *)v77 + 20) = v77 + 176;
      *((_QWORD *)v77 + 24) = v77 + 208;
      *((_QWORD *)v77 + 28) = v77 + 240;
      *((_QWORD *)v77 + 32) = v77 + 272;
      *((_QWORD *)v77 + 36) = v77 + 304;
      *((_QWORD *)v77 + 40) = v77 + 336;
      *((_QWORD *)v77 + 44) = v77 + 368;
      *((_QWORD *)v77 + 48) = v77 + 400;
      *((_QWORD *)v77 + 52) = v77 + 432;
      *((_QWORD *)v77 + 17) = 0;
      v77[144] = 0;
      *((_QWORD *)v77 + 21) = 0;
      v77[176] = 0;
      *((_QWORD *)v77 + 25) = 0;
      v77[208] = 0;
      *((_QWORD *)v77 + 29) = 0;
      v77[240] = 0;
      *((_QWORD *)v77 + 33) = 0;
      v77[272] = 0;
      *((_QWORD *)v77 + 37) = 0;
      v77[304] = 0;
      *((_QWORD *)v77 + 41) = 0;
      v77[336] = 0;
      *((_QWORD *)v77 + 45) = 0;
      v77[368] = 0;
      *((_QWORD *)v77 + 49) = 0;
      v77[400] = 0;
      *((_QWORD *)v77 + 53) = 0x800000000LL;
      *((_QWORD *)v77 + 66) = v77 + 544;
      *((_QWORD *)v77 + 67) = 0x600000000LL;
    }
    v171 = v77;
    v78 = v76;
    v79 = *a2;
    v80 = (__int64)(*a2 + 96);
    *v77 = **a2;
    v77[1] = v79[1];
    v77[2] = v79[2];
    v77[3] = v79[3];
    v77[4] = v79[4];
    v77[5] = v79[5];
    v77[6] = v79[6];
    v77[7] = v79[7];
    v77[8] = v79[8];
    v77[9] = v79[9];
    v77[10] = v79[10];
    *((_QWORD *)v77 + 2) = *((_QWORD *)v79 + 2);
    *((_QWORD *)v77 + 3) = *((_QWORD *)v79 + 3);
    *((_QWORD *)v77 + 4) = *((_QWORD *)v79 + 4);
    *((_QWORD *)v77 + 5) = *((_QWORD *)v79 + 5);
    v165 = v77;
    *((_QWORD *)v77 + 6) = *((_QWORD *)v79 + 6);
    *((_QWORD *)v77 + 7) = *((_QWORD *)v79 + 7);
    *((_QWORD *)v77 + 8) = *((_QWORD *)v79 + 8);
    *((_QWORD *)v77 + 9) = *((_QWORD *)v79 + 9);
    *((_QWORD *)v77 + 10) = *((_QWORD *)v79 + 10);
    *((_QWORD *)v77 + 11) = *((_QWORD *)v79 + 11);
    v81 = (__int64 *)v80;
    do
    {
      if ( v81 != v78 - 2 )
      {
        v83 = (__int64 *)*(v78 - 2);
        v84 = v81[1];
        if ( v83 == v78 )
          v85 = 15;
        else
          v85 = *v78;
        if ( v84 > v85 )
        {
          if ( (v84 & 0x8000000000000000LL) != 0LL )
            goto LABEL_221;
          v86 = 2 * v85;
          if ( v84 < v86 )
          {
            v87 = v86 + 1;
            if ( v86 < 0 )
            {
              v87 = 0x8000000000000000LL;
              v86 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v87 = v84 + 1;
            v86 = v81[1];
          }
          v88 = (__int64 *)operator new(v87);
          v89 = (__int64 *)*(v78 - 2);
          v83 = v88;
          if ( v89 != v78 )
            operator delete(v89);
          *(v78 - 2) = (__int64)v83;
          *v78 = v86;
        }
        if ( v84 )
        {
          v82 = (_BYTE *)*v81;
          if ( v84 == 1 )
            *(_BYTE *)v83 = *v82;
          else
            memcpy(v83, v82, v84);
          v83 = (__int64 *)*(v78 - 2);
        }
        *(v78 - 1) = v84;
        *((_BYTE *)v83 + v84) = 0;
      }
      v81 += 4;
      v78 += 4;
    }
    while ( v81 != (__int64 *)(v79 + 416) );
    if ( v165 + 416 != (__int8 *)v81 )
    {
      v90 = *((unsigned int *)v79 + 106);
      v91 = *((unsigned int *)v165 + 106);
      v92 = *((_DWORD *)v79 + 106);
      if ( v90 <= v91 )
      {
        if ( *((_DWORD *)v79 + 106) )
        {
          v136 = *((_QWORD *)v165 + 52);
          v137 = *((_QWORD *)v79 + 52);
          v138 = 0;
          do
          {
            *(_QWORD *)(v136 + v138) = *(_QWORD *)(v137 + v138);
            *(_BYTE *)(v136 + v138 + 8) = *(_BYTE *)(v137 + v138 + 8);
            v138 += 12;
          }
          while ( 12 * v90 != v138 );
        }
      }
      else
      {
        if ( v90 > *((unsigned int *)v165 + 107) )
        {
          *((_DWORD *)v165 + 106) = 0;
          sub_2237220(v165 + 416, v165 + 432, v90, 12);
          v94 = *((char **)v79 + 52);
          v93 = *((_BYTE **)v165 + 52);
          v98 = 0;
          v90 = *((unsigned int *)v79 + 106);
          v99 = v94;
        }
        else
        {
          v93 = *((_BYTE **)v165 + 52);
          v94 = *((char **)v79 + 52);
          if ( *((_DWORD *)v165 + 106) )
          {
            v95 = 3 * v91;
            v96 = 0;
            v97 = 4 * v95;
            v98 = v97;
            do
            {
              *(_QWORD *)&v93[v96] = *(_QWORD *)&v94[v96];
              v93[v96 + 8] = v94[v96 + 8];
              v96 += 12;
            }
            while ( v97 != v96 );
            v90 = *((unsigned int *)v79 + 106);
            v93 += v97;
            v99 = &v94[v97];
          }
          else
          {
            v99 = *((char **)v79 + 52);
            v98 = 0;
          }
        }
        v100 = 12 * v90;
        if ( v99 != &v94[v100] )
          memcpy(v93, v99, v100 - v98);
      }
      *((_DWORD *)v165 + 106) = v92;
    }
    sub_9EED30((__int64)(v165 + 528), (__int64 *)v79 + 66);
    v101 = (unsigned __int8 *)v171;
    if ( !v171 )
    {
      v73 = v172;
      v74 = *(_DWORD *)(v172 + 14976);
LABEL_185:
      if ( v74 )
      {
        v139 = (unsigned int)(v74 - 1);
        *(_DWORD *)(v73 + 14976) = v139;
        v101 = *(unsigned __int8 **)(v73 + 8 * v139 + 14848);
        v140 = *((unsigned int *)v101 + 134);
        *v101 = 0;
        v141 = *((_QWORD *)v101 + 66);
        *((_DWORD *)v101 + 106) = 0;
        v142 = v141 + (v140 << 6);
        while ( v141 != v142 )
        {
          while ( 1 )
          {
            v142 -= 64;
            v143 = *(void **)(v142 + 24);
            if ( v143 == (void *)(v142 + 40) )
              break;
            operator delete(v143);
            if ( v141 == v142 )
              goto LABEL_198;
          }
        }
LABEL_198:
        *((_DWORD *)v101 + 134) = 0;
      }
      else
      {
        v101 = (unsigned __int8 *)operator new(0x3A0u);
        *v101 = 0;
        *((_QWORD *)v101 + 12) = v101 + 112;
        *((_QWORD *)v101 + 16) = v101 + 144;
        *((_QWORD *)v101 + 20) = v101 + 176;
        *((_QWORD *)v101 + 24) = v101 + 208;
        *((_QWORD *)v101 + 28) = v101 + 240;
        *((_QWORD *)v101 + 32) = v101 + 272;
        *((_QWORD *)v101 + 36) = v101 + 304;
        *((_QWORD *)v101 + 40) = v101 + 336;
        *((_QWORD *)v101 + 44) = v101 + 368;
        *((_QWORD *)v101 + 48) = v101 + 400;
        *((_QWORD *)v101 + 52) = v101 + 432;
        *((_QWORD *)v101 + 13) = 0;
        v101[112] = 0;
        *((_QWORD *)v101 + 17) = 0;
        v101[144] = 0;
        *((_QWORD *)v101 + 21) = 0;
        v101[176] = 0;
        *((_QWORD *)v101 + 25) = 0;
        v101[208] = 0;
        *((_QWORD *)v101 + 29) = 0;
        v101[240] = 0;
        *((_QWORD *)v101 + 33) = 0;
        v101[272] = 0;
        *((_QWORD *)v101 + 37) = 0;
        v101[304] = 0;
        *((_QWORD *)v101 + 41) = 0;
        v101[336] = 0;
        *((_QWORD *)v101 + 45) = 0;
        v101[368] = 0;
        *((_QWORD *)v101 + 49) = 0;
        v101[400] = 0;
        *((_QWORD *)v101 + 53) = 0x800000000LL;
        *((_QWORD *)v101 + 66) = v101 + 544;
        *((_QWORD *)v101 + 67) = 0x600000000LL;
      }
      v171 = v101;
    }
    v101[*v101 + 1] = 2;
    v102 = v171;
    v103 = *(unsigned __int8 *)v171;
    *(_BYTE *)v171 = v103 + 1;
    v102[v103 + 2] = 1;
    v104 = *v162;
    v105 = *(_QWORD *)(a3 + 8LL * v155 + 48);
    sub_168B9B0((__int64)&v174, v161, 0);
    v110 = sub_18B0170(v105, v161, v106, v107);
    if ( !v110 )
      break;
    v111 = sub_18B0170(v104, v161, v108, v109);
    if ( !v111 || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 13LL) & 0x20) == 0 )
      break;
    v112 = sub_18B0720(
             a1,
             (__int64)&v171,
             (__int64)&v174,
             v110,
             a5,
             v111,
             *(double *)a7.m128i_i64,
             a8,
             a10,
             nullptr,
             nullptr,
             0,
             0);
    v113 = (unsigned int *)v174;
    v55 = v112;
    if ( !v174 )
      goto LABEL_141;
    v114 = v175;
    if ( !v175 )
      goto LABEL_141;
    if ( v175 <= (unsigned __int64)v174 )
      goto LABEL_170;
LABEL_129:
    v115 = *((unsigned int **)v113 + 66);
    v116 = &v115[16 * (unsigned __int64)v113[134]];
    if ( v115 != v116 )
    {
      do
      {
        while ( 1 )
        {
          v116 -= 16;
          v117 = *((unsigned int **)v116 + 3);
          if ( v117 == v116 + 10 )
            break;
          operator delete(v117);
          if ( v115 == v116 )
            goto LABEL_132;
        }
      }
      while ( v115 != v116 );
LABEL_132:
      v116 = *((unsigned int **)v113 + 66);
    }
    if ( v116 != v113 + 136 )
      free(v116);
    v118 = *((unsigned int **)v113 + 52);
    if ( v118 != v113 + 108 )
      free(v118);
    v119 = (void **)(v113 + 96);
    v120 = (void **)(v113 + 16);
    do
    {
      while ( *v119 != v119 + 2 )
      {
        operator delete(*v119);
        v119 -= 4;
        if ( v119 == v120 )
          goto LABEL_140;
      }
      v119 -= 4;
    }
    while ( v119 != v120 );
LABEL_140:
    operator delete(v113, 0x3A0u);
LABEL_141:
    if ( (_BYTE)v55 )
      goto LABEL_172;
LABEL_142:
    v121 = (void **)v171;
    if ( v171 )
    {
      v122 = v172;
      if ( v172 )
      {
        if ( (unsigned __int64)v171 < v172 || (unsigned __int64)v171 > v172 + 14848 )
        {
          v123 = *((void ***)v171 + 66);
          v124 = &v123[8 * (unsigned __int64)*((unsigned int *)v171 + 134)];
          if ( v123 != v124 )
          {
            do
            {
              while ( 1 )
              {
                v124 -= 8;
                v125 = (void **)v124[3];
                if ( v125 == v124 + 5 )
                  break;
                operator delete(v125);
                if ( v123 == v124 )
                  goto LABEL_148;
              }
            }
            while ( v123 != v124 );
LABEL_148:
            v124 = (void **)v121[66];
          }
          if ( v124 != v121 + 68 )
            free(v124);
          v126 = (void **)v121[52];
          if ( v126 != v121 + 54 )
            free(v126);
          v127 = v121 + 48;
          v128 = v121 + 8;
          do
          {
            while ( *v127 != v127 + 2 )
            {
              operator delete(*v127);
              v127 -= 4;
              if ( v127 == v128 )
                goto LABEL_156;
            }
            v127 -= 4;
          }
          while ( v127 != v128 );
LABEL_156:
          operator delete(v121, 0x3A0u);
        }
        else
        {
          v135 = *(unsigned int *)(v172 + 14976);
          *(_DWORD *)(v172 + 14976) = v135 + 1;
          *(_QWORD *)(v122 + 8 * v135 + 14848) = v121;
        }
      }
    }
    if ( v166 == ++v155 )
      goto LABEL_158;
  }
  v113 = (unsigned int *)v174;
  if ( !v174 )
    goto LABEL_142;
  v114 = v175;
  v55 = 0;
  if ( !v175 )
    goto LABEL_142;
  if ( v175 > (unsigned __int64)v174 )
    goto LABEL_129;
LABEL_170:
  if ( (unsigned __int64)v113 > v114 + 14848 )
    goto LABEL_129;
  v129 = *(unsigned int *)(v114 + 14976);
  *(_DWORD *)(v114 + 14976) = v129 + 1;
  *(_QWORD *)(v114 + 8 * v129 + 14848) = v113;
  if ( !(_BYTE)v55 )
    goto LABEL_142;
LABEL_172:
  if ( v171 && v172 )
    sub_1580C40(v172, (unsigned __int64)v171);
LABEL_48:
  v57 = (void **)v168;
  if ( v168 )
  {
    v58 = v169;
    if ( v169 )
    {
      if ( (unsigned __int64)v168 < v169 || (unsigned __int64)v168 > v169 + 14848 )
      {
        v59 = *((void ***)v168 + 66);
        v60 = &v59[8 * (unsigned __int64)*((unsigned int *)v168 + 134)];
        if ( v59 != v60 )
        {
          do
          {
            while ( 1 )
            {
              v60 -= 8;
              v61 = (void **)v60[3];
              if ( v61 == v60 + 5 )
                break;
              operator delete(v61);
              if ( v59 == v60 )
                goto LABEL_54;
            }
          }
          while ( v59 != v60 );
LABEL_54:
          v60 = (void **)v57[66];
        }
        if ( v60 != v57 + 68 )
          free(v60);
        v62 = (void **)v57[52];
        if ( v62 != v57 + 54 )
          free(v62);
        v63 = v57 + 48;
        v64 = v57 + 8;
        do
        {
          while ( *v63 != v63 + 2 )
          {
            operator delete(*v63);
            v63 -= 4;
            if ( v63 == v64 )
              goto LABEL_62;
          }
          v63 -= 4;
        }
        while ( v64 != v63 );
LABEL_62:
        operator delete(v57, 0x3A0u);
      }
      else
      {
        v145 = *(unsigned int *)(v169 + 14976);
        *(_DWORD *)(v169 + 14976) = v145 + 1;
        *(_QWORD *)(v58 + 8 * v145 + 14848) = v57;
      }
    }
  }
  return v55;
}
