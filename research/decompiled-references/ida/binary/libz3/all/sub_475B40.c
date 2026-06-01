__int64 __fastcall sub_475B40(_QWORD *a1)
{
  char **exception; // r12
  char **v2; // r13
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __m128i *v6; // r9
  __int64 *v7; // rdi
  __m128i *v8; // rbp
  unsigned int v9; // ecx
  __int32 v10; // r11d
  __int64 v11; // r14
  __int64 v12; // r12
  int v13; // r15d
  size_t v14; // r13
  int v15; // esi
  const __m128i *v16; // rbx
  __int64 v17; // rax
  __m128i *v18; // rdi
  __m128i *i; // rax
  __int64 v20; // rdx
  _DWORD *v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  _QWORD *v25; // rdx
  int v26; // esi
  __int64 v27; // r15
  __m128i *v28; // rdi
  __m128i *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 *v32; // rax
  int v33; // edx
  __int64 m128i_i64; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __m128i *v38; // rbx
  __int64 *v39; // r12
  unsigned int v40; // r13d
  _QWORD *v41; // rax
  __int64 v42; // r14
  _DWORD *v43; // r15
  _QWORD *v44; // r12
  int v45; // eax
  __int64 v46; // rax
  void *v47; // rax
  __int64 v48; // rbx
  __m128i v49; // kr00_16
  __int64 v51; // rax
  __int64 v52; // r15
  __int64 v53; // r14
  void *v54; // rbx
  __int64 v55; // rsi
  char *v56; // r12
  __int64 *v57; // r13
  __int64 v58; // rdx
  __int64 *v59; // r14
  __int64 v60; // rbx
  unsigned int v61; // eax
  __int64 v62; // r12
  void *v63; // rbp
  __int64 v64; // rsi
  __int64 *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  unsigned int v68; // r12d
  unsigned int v69; // edx
  unsigned int *v70; // rax
  __int64 v71; // rdx
  __m128i *v72; // rax
  __m128i *v73; // r10
  __m128i *v74; // rsi
  const __m128i *v75; // r9
  const __m128i *j; // rax
  __int64 v77; // rdx
  __m128i *v78; // rsi
  __m128i *v79; // rdx
  __m128i v80; // xmm0
  void *v81; // r13
  __int64 v82; // rax
  int v83; // edx
  int v84; // edx
  _DWORD *v85; // r14
  void *v86; // r14
  unsigned int v87; // eax
  unsigned int v88; // edx
  __int64 v89; // r14
  __int64 v90; // r15
  void *v91; // rdi
  int v92; // eax
  __m128i v93; // xmm1
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int8 v96; // cl
  __m128i v97; // xmm0
  void *v98; // r13
  char v99; // dl
  char v100; // dl
  char v101; // cl
  __int64 v102; // rdx
  unsigned int v103; // r9d
  unsigned int v104; // edx
  unsigned int *v105; // rsi
  __int64 v106; // rax
  unsigned int v107; // r9d
  _DWORD *v108; // r10
  __m128i *v109; // rdx
  const __m128i *v110; // rdi
  const __m128i *m; // rax
  __int32 v112; // ecx
  __int8 v113; // r8
  __int64 v114; // rcx
  __int8 v115; // r8
  __m128i v116; // xmm0
  __int64 v117; // rax
  unsigned int *v118; // r15
  __int64 v119; // rbp
  void *v120; // r12
  __int64 v121; // rsi
  __int64 v122; // rax
  _DWORD *v123; // r12
  __int64 v124; // rdi
  int v125; // ecx
  __int64 v126; // rax
  __m128i *k; // rax
  __int64 v128; // rdx
  __int64 v129; // rdx
  _QWORD *v130; // rax
  __int64 v131; // [rsp+0h] [rbp-108h]
  __int64 v132; // [rsp+0h] [rbp-108h]
  __int64 *v133; // [rsp+8h] [rbp-100h]
  unsigned int v134; // [rsp+8h] [rbp-100h]
  int v135[2]; // [rsp+8h] [rbp-100h]
  int v136[2]; // [rsp+8h] [rbp-100h]
  __int64 v137; // [rsp+10h] [rbp-F8h]
  unsigned int v138; // [rsp+10h] [rbp-F8h]
  __int64 v139; // [rsp+10h] [rbp-F8h]
  __int32 v140; // [rsp+10h] [rbp-F8h]
  __int32 v141; // [rsp+10h] [rbp-F8h]
  unsigned int v142; // [rsp+10h] [rbp-F8h]
  __m128i *v143; // [rsp+10h] [rbp-F8h]
  unsigned int v144; // [rsp+10h] [rbp-F8h]
  void *v145; // [rsp+10h] [rbp-F8h]
  int v146; // [rsp+18h] [rbp-F0h]
  unsigned int v147; // [rsp+18h] [rbp-F0h]
  void *v148; // [rsp+18h] [rbp-F0h]
  int v149; // [rsp+18h] [rbp-F0h]
  __int32 v150; // [rsp+18h] [rbp-F0h]
  __int64 v151; // [rsp+18h] [rbp-F0h]
  int v152; // [rsp+20h] [rbp-E8h]
  __int64 v153; // [rsp+20h] [rbp-E8h]
  __int64 v154; // [rsp+20h] [rbp-E8h]
  __int64 v156; // [rsp+28h] [rbp-E0h]
  __int64 *v157; // [rsp+30h] [rbp-D8h]
  unsigned int v158; // [rsp+30h] [rbp-D8h]
  unsigned int v159; // [rsp+30h] [rbp-D8h]
  __int64 v160; // [rsp+30h] [rbp-D8h]
  int v161[2]; // [rsp+38h] [rbp-D0h]
  int v162[2]; // [rsp+38h] [rbp-D0h]
  __m128i *ptr; // [rsp+40h] [rbp-C8h]
  _DWORD *ptra; // [rsp+40h] [rbp-C8h]
  char *ptrb; // [rsp+40h] [rbp-C8h]
  int v166[2]; // [rsp+48h] [rbp-C0h]
  int v167[2]; // [rsp+48h] [rbp-C0h]
  int v168[2]; // [rsp+48h] [rbp-C0h]
  int v169[2]; // [rsp+48h] [rbp-C0h]
  int v170; // [rsp+50h] [rbp-B8h]
  int v171; // [rsp+58h] [rbp-B0h]
  int v172; // [rsp+60h] [rbp-A8h]
  __int64 v173; // [rsp+68h] [rbp-A0h] BYREF
  int v174; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v175; // [rsp+74h] [rbp-94h]
  __int64 *v176; // [rsp+78h] [rbp-90h]
  __int64 v177[4]; // [rsp+80h] [rbp-88h] BYREF
  __m128i v178; // [rsp+A0h] [rbp-68h] BYREF
  int v179; // [rsp+B0h] [rbp-58h] BYREF
  char v180; // [rsp+B4h] [rbp-54h]
  __m128i v181[5]; // [rsp+B8h] [rbp-50h] BYREF

  result = a1[3];
  if ( !result || !*(_DWORD *)(result - 4) )
    return result;
  v4 = sub_186B270(0x80u);
  v7 = (__int64 *)a1[3];
  *(_QWORD *)v4 = 0;
  v8 = (__m128i *)v4;
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  *(_QWORD *)(v4 + 96) = 0;
  *(_DWORD *)(v4 + 104) = 0;
  *(_QWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 120) = 0;
  LODWORD(v131) = (_DWORD)v7;
  if ( !v7 )
  {
    v9 = 8;
    v33 = 0;
    m128i_i64 = 0;
    goto LABEL_42;
  }
  v157 = &v7[*((unsigned int *)v7 - 1)];
  if ( v7 == v157 )
  {
    LODWORD(v131) = 0;
    v32 = v7;
    v9 = 8;
    v33 = 0;
    goto LABEL_41;
  }
  v133 = v7;
  v9 = 8;
  v10 = 0;
  v146 = 0;
  v152 = 0;
  v131 = 0;
  do
  {
    v11 = *v133;
    if ( !*v133 )
      goto LABEL_37;
    v5 = v11 + 40LL * *(unsigned int *)(v11 - 4);
    if ( v11 == v5 )
      goto LABEL_37;
LABEL_8:
    while ( 2 )
    {
      v12 = *(_QWORD *)(v11 + 32);
      v13 = v9 - 1;
      v14 = 16LL * v9;
      v15 = *(_DWORD *)(v12 + 12);
      v16 = &v8[v14 / 0x10];
      v17 = 16LL * ((v9 - 1) & v15);
      v18 = &v8[(unsigned __int64)v17 / 0x10];
      if ( v17 != v14 )
      {
        for ( i = &v8[(unsigned __int64)v17 / 0x10]; v16 != i; ++i )
        {
          v20 = i->m128i_i64[0];
          if ( i->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v20 + 12) == v15 && v12 == v20 )
            {
LABEL_36:
              v11 += 40;
              if ( v5 == v11 )
                goto LABEL_37;
              goto LABEL_8;
            }
          }
          else if ( !v20 )
          {
            goto LABEL_15;
          }
        }
      }
      if ( v8 == v18 )
      {
LABEL_15:
        v21 = (_DWORD *)v131;
        if ( !v131 )
          goto LABEL_91;
        goto LABEL_16;
      }
      v65 = (__int64 *)v8;
      while ( 1 )
      {
        v66 = *v65;
        if ( (unsigned __int64)*v65 <= 1 )
          break;
        if ( *(_DWORD *)(v66 + 12) == v15 && v12 == v66 )
          goto LABEL_36;
LABEL_87:
        v65 += 2;
        if ( v18 == (__m128i *)v65 )
          goto LABEL_15;
      }
      if ( v66 )
        goto LABEL_87;
      v21 = (_DWORD *)v131;
      if ( !v131 )
      {
LABEL_91:
        LODWORD(ptr) = v9;
        *(_QWORD *)v161 = v5;
        v140 = v10;
        v67 = sub_186B270(0x18u) + 8;
        v12 = *(_QWORD *)(v11 + 32);
        v10 = v140;
        v5 = *(_QWORD *)v161;
        *(_QWORD *)(v67 - 8) = 2;
        v9 = (unsigned int)ptr;
        v25 = (_QWORD *)v67;
        v131 = v67;
        v24 = 1;
        v21 = (_DWORD *)v131;
        goto LABEL_18;
      }
LABEL_16:
      v22 = *(v21 - 1);
      if ( v22 == *(v21 - 2) )
      {
        v68 = (3 * v22 + 1) >> 1;
        v69 = 8 * v68 + 8;
        if ( 8 * v22 + 8 >= v69 || v22 >= v68 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v178.m128i_i64, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v178);
          sub_233E40((__int64)&v178);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(ptr) = v9;
        *(_QWORD *)v161 = v5;
        v141 = v10;
        v70 = (unsigned int *)sub_186B300(v21 - 2, v69);
        v71 = v70[1];
        v21 = v70 + 2;
        v10 = v141;
        *v70 = v68;
        v5 = *(_QWORD *)v161;
        v12 = *(_QWORD *)(v11 + 32);
        v131 = (__int64)v21;
        LODWORD(v70) = v71;
        v9 = (unsigned int)ptr;
        v25 = &v21[2 * v71];
        v24 = (_DWORD)v70 + 1;
      }
      else
      {
        v23 = v22;
        v24 = v22 + 1;
        v25 = &v21[2 * v23];
      }
LABEL_18:
      *v25 = v12;
      *(v21 - 1) = v24;
      LODWORD(v137) = v10 + 1;
      if ( 3 * v9 < 4 * (v146 + v152) )
      {
        *(_QWORD *)v167 = v5;
        LODWORD(ptr) = v10;
        v14 = 32LL * v9;
        v161[0] = 2 * v9;
        v149 = 2 * v9;
        v72 = (__m128i *)sub_186B270(v14);
        v9 = v149;
        v73 = v72;
        v74 = &v72[v14 / 0x10];
        v10 = (int)ptr;
        v5 = *(_QWORD *)v167;
        if ( v161[0] )
        {
          do
          {
            v72->m128i_i64[0] = 0;
            ++v72;
            v72[-1].m128i_i32[2] = 0;
          }
          while ( v72 != v74 );
        }
        v13 = v161[0] - 1;
        v75 = &v73[v14 / 0x10];
        for ( j = v8; v16 != j; *v79 = v80 )
        {
          while ( j->m128i_i64[0] <= 1uLL )
          {
            if ( v16 == ++j )
              goto LABEL_111;
          }
          v77 = 16LL * (*(_DWORD *)(j->m128i_i64[0] + 12) & (unsigned int)v13);
          v78 = &v73[(unsigned __int64)v77 / 0x10];
          if ( v14 == v77 )
          {
LABEL_114:
            if ( v73 == v78 )
            {
LABEL_175:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v79 = v73;
            while ( v79->m128i_i64[0] )
            {
              if ( v78 == ++v79 )
                goto LABEL_175;
            }
          }
          else
          {
            v79 = &v73[(unsigned __int64)v77 / 0x10];
            while ( v79->m128i_i64[0] )
            {
              if ( v75 == ++v79 )
                goto LABEL_114;
            }
          }
          v80 = _mm_loadu_si128(j++);
        }
LABEL_111:
        if ( v8 )
        {
          v170 = v149;
          *(_QWORD *)v168 = &v73[v14 / 0x10];
          ptr = v73;
          *(_QWORD *)v161 = v5;
          v150 = v10;
          sub_186B220(v8);
          v9 = v170;
          v75 = *(const __m128i **)v168;
          v73 = ptr;
          v5 = *(_QWORD *)v161;
          v10 = v150;
        }
        v146 = 0;
        v16 = v75;
        v8 = v73;
      }
      v26 = *(_DWORD *)(v12 + 12);
      v27 = 16LL * (v26 & (unsigned int)v13);
      v28 = &v8[(unsigned __int64)v27 / 0x10];
      if ( v27 == v14 )
      {
        v6 = nullptr;
LABEL_27:
        if ( v28 != v8 )
        {
          v29 = v8;
          do
          {
            while ( 1 )
            {
              v31 = v29->m128i_i64[0];
              if ( v29->m128i_i64[0] <= 1uLL )
                break;
              if ( *(_DWORD *)(v31 + 12) == v26 && v31 == v12 )
                goto LABEL_176;
              if ( v28 == ++v29 )
                goto LABEL_35;
            }
            if ( !v31 )
              goto LABEL_92;
            v6 = v29++;
          }
          while ( v28 != v29 );
        }
LABEL_35:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v29 = &v8[(unsigned __int64)v27 / 0x10];
      v6 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v30 = v29->m128i_i64[0];
          if ( v29->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v30 + 12) == v26 && v30 == v12 )
          {
LABEL_176:
            v29->m128i_i64[0] = v12;
            v29->m128i_i32[2] = v10;
            goto LABEL_95;
          }
          if ( ++v29 == v16 )
            goto LABEL_27;
        }
        if ( !v30 )
          break;
        v6 = v29++;
        if ( v29 == v16 )
          goto LABEL_27;
      }
LABEL_92:
      if ( v6 )
        --v146;
      else
        v6 = v29;
      v6->m128i_i64[0] = v12;
      v6->m128i_i32[2] = v10;
      ++v152;
LABEL_95:
      v11 += 40;
      v10 = v137;
      if ( v5 != v11 )
        continue;
      break;
    }
LABEL_37:
    ++v133;
  }
  while ( v157 != v133 );
  v32 = (__int64 *)a1[3];
  if ( v131 )
    v33 = *(_DWORD *)(v131 - 4);
  else
    v33 = 0;
  if ( v32 )
LABEL_41:
    m128i_i64 = *((unsigned int *)v32 - 1);
  else
    m128i_i64 = 0;
LABEL_42:
  sub_4AD6C0(
    (int)&v174,
    m128i_i64,
    v33,
    v9,
    v5,
    (int)v6,
    v131,
    v9,
    v137,
    v146,
    v152,
    a1,
    (int)v157,
    v161[0],
    (int)ptr,
    (int)&v174,
    v170,
    v171,
    v172,
    v173);
  v36 = v134;
  v37 = *(_QWORD *)(v156 + 24);
  if ( v37 )
  {
    v158 = 0;
    v35 = 16LL * v134;
    v138 = v134 - 1;
    *(_QWORD *)v135 = v35;
    v38 = (__m128i *)((char *)v8 + v35);
    do
    {
      if ( v158 >= *(_DWORD *)(v37 - 4) )
        break;
      v39 = (__int64 *)(v37 + 8LL * v158);
      v35 = *v39;
      if ( *v39 )
      {
        v40 = *(_DWORD *)(v35 - 4);
        v147 = *(_DWORD *)(v35 - 8);
        v41 = (_QWORD *)sub_186B270(40LL * v147 + 8);
        v42 = *v39;
        ptra = v41;
        v43 = v41 + 1;
        *v41 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v147), _mm_cvtsi32_si128(v40)).m128i_u64[0];
        if ( v42 )
        {
          v153 = v42 + 40LL * *(unsigned int *)(v42 - 4);
          if ( v42 != v153 )
          {
            v44 = v41 + 1;
            while ( 1 )
            {
              v47 = qword_1C7F2C0;
              *((_BYTE *)v44 + 4) &= 0xFCu;
              *((_BYTE *)v44 + 20) &= 0xFCu;
              *(_DWORD *)v44 = 0;
              v44[1] = 0;
              *((_DWORD *)v44 + 4) = 1;
              v44[3] = 0;
              v148 = v47;
              if ( (*(_BYTE *)(v42 + 4) & 1) != 0 )
              {
                m128i_i64 = (__int64)v44;
                sub_182C690(v47, v44, v42);
                if ( (*(_BYTE *)(v42 + 20) & 1) != 0 )
                {
LABEL_54:
                  m128i_i64 = (__int64)(v44 + 2);
                  sub_182C690(v148, v44 + 2, v42 + 16);
                  goto LABEL_51;
                }
              }
              else
              {
                *(_DWORD *)v44 = *(_DWORD *)v42;
                if ( (*(_BYTE *)(v42 + 20) & 1) != 0 )
                  goto LABEL_54;
              }
              v45 = *(_DWORD *)(v42 + 16);
              *((_BYTE *)v44 + 20) &= ~1u;
              *((_DWORD *)v44 + 4) = v45;
LABEL_51:
              v46 = *(_QWORD *)(v42 + 32);
              v42 += 40;
              v44 += 5;
              *(v44 - 1) = v46;
              if ( v42 == v153 )
              {
                v40 = ptra[1];
                break;
              }
            }
          }
        }
        v123 = &v43[10 * v40];
        if ( v123 != v43 )
        {
          v85 = v43;
          do
          {
            v124 = *((_QWORD *)v85 + 4);
            v125 = *(_DWORD *)(v124 + 12);
            v126 = 16LL * (v125 & v138);
            m128i_i64 = (__int64)v8[(unsigned __int64)v126 / 0x10].m128i_i64;
            if ( v126 == *(_QWORD *)v135 )
            {
LABEL_165:
              if ( (__m128i *)m128i_i64 != v8 )
              {
                for ( k = v8; (__m128i *)m128i_i64 != k; ++k )
                {
                  v129 = k->m128i_i64[0];
                  if ( k->m128i_i64[0] > 1uLL )
                  {
                    if ( *(_DWORD *)(v129 + 12) == v125 && v124 == v129 )
                      goto LABEL_119;
                  }
                  else if ( !v129 )
                  {
                    break;
                  }
                }
              }
LABEL_187:
              BUG();
            }
            k = &v8[(unsigned __int64)v126 / 0x10];
            while ( 1 )
            {
              while ( 1 )
              {
                v128 = k->m128i_i64[0];
                if ( k->m128i_i64[0] > 1uLL )
                  break;
                if ( !v128 )
                  goto LABEL_187;
                if ( v38 == ++k )
                  goto LABEL_165;
              }
              if ( *(_DWORD *)(v128 + 12) == v125 && v124 == v128 )
                break;
              if ( v38 == ++k )
                goto LABEL_165;
            }
LABEL_119:
            v81 = qword_1C7F2C0;
            v82 = v176[v158] + 32LL * k->m128i_u32[2];
            if ( (v85[1] & 1) != 0 )
            {
              m128i_i64 = v82;
              v151 = v82;
              sub_182C690(qword_1C7F2C0, v82, v85);
              v82 = v151;
            }
            else
            {
              v83 = *v85;
              *(_BYTE *)(v82 + 4) &= ~1u;
              *(_DWORD *)v82 = v83;
            }
            if ( (v85[5] & 1) != 0 )
            {
              m128i_i64 = v82 + 16;
              sub_182C690(v81, v82 + 16, v85 + 4);
            }
            else
            {
              v84 = v85[4];
              *(_BYTE *)(v82 + 20) &= ~1u;
              *(_DWORD *)(v82 + 16) = v84;
            }
            v85 += 10;
          }
          while ( v123 != v85 );
          v40 = ptra[1];
        }
        if ( v40 )
        {
          do
          {
            v86 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v43);
            m128i_i64 = (__int64)(v43 + 4);
            v43 += 10;
            sub_182CBA0(v86, m128i_i64);
          }
          while ( v43 != &ptra[10 * v40 + 2] );
        }
        sub_186B220(ptra);
        v37 = *(_QWORD *)(v156 + 24);
      }
      ++v158;
    }
    while ( v37 );
  }
  v87 = sub_4ABA50(*(_QWORD *)v166, m128i_i64, v35, v36);
  if ( v87 )
  {
    v56 = nullptr;
    *(_QWORD *)v169 = 8LL * v87;
    do
    {
      v88 = v175;
      if ( v175 )
      {
        v89 = 0;
        v48 = 0;
        do
        {
          v90 = *(_QWORD *)&v56[(_QWORD)v176] + 32 * v89;
          if ( *(_DWORD *)v90 )
          {
            v178.m128i_i8[4] &= 0xFCu;
            v180 &= 0xFCu;
            v178.m128i_i32[0] = 0;
            v91 = qword_1C7F2C0;
            v178.m128i_i64[1] = 0;
            v179 = 1;
            v181[0].m128i_i64[0] = 0;
            if ( (*(_BYTE *)(v90 + 4) & 1) != 0 )
            {
              v145 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, &v178, v90);
              v91 = v145;
            }
            else
            {
              v178.m128i_i32[0] = *(_DWORD *)v90;
            }
            if ( (*(_BYTE *)(v90 + 20) & 1) != 0 )
            {
              sub_182C690(v91, &v179, v90 + 16);
            }
            else
            {
              v92 = *(_DWORD *)(v90 + 16);
              v180 &= ~1u;
              v179 = v92;
            }
            v93 = _mm_loadl_epi64((const __m128i *)(v132 + 8 * v89));
            v181[0].m128i_i64[1] = v93.m128i_i64[0];
            if ( v48 )
            {
              v94 = *(unsigned int *)(v48 - 4);
              if ( (_DWORD)v94 == *(_DWORD *)(v48 - 8) )
              {
                v103 = (unsigned int)(3 * v94 + 1) >> 1;
                v104 = 40 * v103 + 8;
                if ( 40 * (int)v94 + 8 >= v104 || (unsigned int)v94 >= v103 )
                {
                  v2 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v177, "Overflow encountered when expanding vector");
                  *v2 = (char *)off_1C63128;
                  sub_2333C0(v2 + 1, v177);
                  sub_233E40((__int64)v177);
                  __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v142 = (unsigned int)(3 * v94 + 1) >> 1;
                v105 = (unsigned int *)sub_186B270(v104);
                v106 = *(unsigned int *)(v48 - 4);
                v107 = v142;
                v108 = v105 + 2;
                v105[1] = v106;
                v109 = (__m128i *)(v105 + 2);
                v110 = (const __m128i *)(v48 + 40 * v106);
                for ( m = (const __m128i *)v48; v110 != m; v109[-2].m128i_i8[12] = v115 & 0xFC | v114 & 3 )
                {
                  v112 = m->m128i_i32[0];
                  v113 = v109->m128i_i8[4];
                  m = (const __m128i *)((char *)m + 40);
                  v109 = (__m128i *)((char *)v109 + 40);
                  v109[-3].m128i_i32[2] = v112;
                  v109[-3].m128i_i8[12] = v113 & 0xFC | m[-3].m128i_i8[12] & 3;
                  v114 = m[-2].m128i_i64[0];
                  m[-2].m128i_i64[0] = 0;
                  v115 = v109[-2].m128i_i8[12];
                  v109[-2].m128i_i64[0] = v114;
                  LODWORD(v114) = m[-2].m128i_i32[2];
                  v116 = _mm_loadu_si128(m - 1);
                  m[-1].m128i_i64[0] = 0;
                  v109[-2].m128i_i32[2] = v114;
                  LOBYTE(v114) = m[-2].m128i_i8[12];
                  v109[-1] = v116;
                }
                v117 = *(unsigned int *)(v48 - 4);
                if ( (_DWORD)v117 )
                {
                  v154 = v48;
                  v118 = v105;
                  v159 = v142;
                  *(_QWORD *)v162 = v105 + 2;
                  ptrb = v56;
                  v143 = v8;
                  v119 = v48 + 40 * v117;
                  do
                  {
                    v120 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v48);
                    v121 = v48 + 16;
                    v48 += 40;
                    sub_182CBA0(v120, v121);
                  }
                  while ( v48 != v119 );
                  v8 = v143;
                  v48 = v154;
                  v105 = v118;
                  v107 = v159;
                  v108 = *(_DWORD **)v162;
                  v56 = ptrb;
                }
                v160 = (__int64)v108;
                v144 = v107;
                sub_186B220((void *)(v48 - 8));
                v93 = _mm_loadl_epi64((const __m128i *)&v181[0].m128i_u64[1]);
                v122 = v105[1];
                v48 = v160;
                *v105 = v144;
                v95 = (_QWORD *)(v160 + 40 * v122);
              }
              else
              {
                v95 = (_QWORD *)(v48 + 40 * v94);
              }
            }
            else
            {
              v130 = (_QWORD *)sub_186B270(0x58u);
              v93 = _mm_loadl_epi64((const __m128i *)&v181[0].m128i_u64[1]);
              v48 = (__int64)(v130 + 1);
              *v130 = 2;
              v95 = v130 + 1;
            }
            v96 = v178.m128i_i8[4];
            v97 = _mm_loadl_epi64(v181);
            v98 = qword_1C7F2C0;
            v181[0].m128i_i64[0] = 0;
            *(_DWORD *)v95 = v178.m128i_i32[0];
            v99 = *((_BYTE *)v95 + 4) & 0xFC;
            *(__m128i *)(v95 + 3) = _mm_unpacklo_epi64(v97, v93);
            v100 = v96 & 3 | v99;
            v101 = v180;
            *((_BYTE *)v95 + 4) = v100;
            v102 = v178.m128i_i64[1];
            v178.m128i_i64[1] = 0;
            v95[1] = v102;
            *((_DWORD *)v95 + 4) = v179;
            *((_BYTE *)v95 + 20) = v101 & 3 | *((_BYTE *)v95 + 20) & 0xFC;
            ++*(_DWORD *)(v48 - 4);
            sub_182CBA0(v98, &v178);
            sub_182CBA0(v98, &v179);
            v88 = v175;
          }
          ++v89;
        }
        while ( (unsigned int)v89 < v88 );
      }
      else
      {
        v48 = 0;
      }
      v173 = v48;
      sub_4712D0(&v178, v156, &v173);
      v49 = v178;
      sub_4479D0(*(_QWORD *)(v156 + 16), v178.m128i_i64[0]);
      if ( v49.m128i_i64[0] )
      {
        if ( (*(_DWORD *)(v49.m128i_i64[0] + 8))-- == 1 )
          sub_15D7BC0(v49.m128i_i64[1], v49.m128i_i64[0]);
      }
      if ( v48 )
      {
        v51 = *(unsigned int *)(v48 - 4);
        if ( (_DWORD)v51 )
        {
          v139 = v48;
          v52 = v48;
          v53 = v48 + 40 * v51;
          do
          {
            v54 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v52);
            v55 = v52 + 16;
            v52 += 40;
            sub_182CBA0(v54, v55);
          }
          while ( v52 != v53 );
          v48 = v139;
        }
        sub_186B220((void *)(v48 - 8));
      }
      v56 += 8;
    }
    while ( *(char **)v169 != v56 );
  }
  v57 = v176;
  if ( v176 )
  {
    v58 = *((unsigned int *)v176 - 1);
    if ( (_DWORD)v58 )
    {
      *(_QWORD *)v136 = v8;
      v59 = &v176[v58];
      do
      {
        v60 = *v57;
        if ( *v57 )
        {
          v61 = *(_DWORD *)(v60 - 4);
          if ( v61 )
          {
            v62 = v60 + 32LL * v61;
            do
            {
              v63 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v60);
              v64 = v60 + 16;
              v60 += 32;
              sub_182CBA0(v63, v64);
            }
            while ( v60 != v62 );
            v60 = *v57;
          }
          sub_186B220((void *)(v60 - 8));
        }
        ++v57;
      }
      while ( v57 != v59 );
      v8 = *(__m128i **)v136;
      v57 = v176;
    }
    sub_186B220(v57 - 1);
  }
  if ( v8 )
    sub_186B220(v8);
  result = v132;
  if ( v132 )
    return sub_186B220((void *)(v132 - 8));
  return result;
}

