__int64 __fastcall sub_7BC340(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, int a5)
{
  char *v7; // rdx
  __int64 v8; // r12
  __int64 i; // rbp
  char *v10; // rax
  void *v11; // rdi
  const char *v12; // rsi
  unsigned __int64 v13; // rbp
  int *v14; // r13
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // r14
  void **v21; // r14
  void **v22; // r12
  void *v23; // rax
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // r12
  __int64 *v33; // r13
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rsi
  unsigned __int16 *v38; // rax
  __int8 v39; // al
  void **p_ptr; // rdi
  unsigned __int16 *v41; // rax
  unsigned __int64 v42; // rdx
  char *v43; // rbp
  size_t v44; // r13
  char *v45; // rbp
  int v46; // ecx
  _BYTE *v47; // r14
  __int64 v48; // rax
  int v49; // r13d
  __int64 v50; // rdx
  char *v51; // r13
  char *v52; // r12
  char *v53; // rbp
  __int64 v54; // r14
  __int64 v55; // r13
  char v56; // r12
  __int64 v57; // rbp
  int v58; // r14d
  size_t v59; // r9
  __int64 v60; // r8
  unsigned __int64 v61; // rdx
  __m128i *v62; // rax
  __m128i v63; // xmm0
  __int64 *v64; // rbp
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  __int64 v67; // rsi
  __m128i *v68; // rax
  void *v69; // r12
  __int64 v70; // rax
  __int64 v71; // rsi
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rdi
  __m128i v74; // xmm0
  __m128i v75; // xmm1
  __int64 v76; // rax
  void *v77; // rdi
  size_t v78; // r12
  void *v79; // r13
  __int64 v80; // rax
  char *v81; // r14
  char *v82; // rax
  __m128i v83; // xmm0
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  int v87; // esi
  __int64 v88; // rdx
  int v89; // ecx
  int v90; // r8d
  int v91; // r9d
  void *v92; // rdi
  char *v93; // rbp
  char *v94; // r14
  unsigned int *p_dest; // r10
  __int64 v96; // rdi
  char v97; // al
  char v98; // al
  void *v99; // r13
  __int64 v100; // rdx
  __int64 v101; // rsi
  __int64 v102; // rax
  unsigned int v103; // ebp
  char *v104; // rdx
  __int64 v105; // r12
  __int64 v106; // rbx
  char *v107; // rax
  void *v108; // rdi
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __m128i *v113; // rax
  __m128i si128; // xmm0
  void *v115; // rbp
  __int64 v116; // rax
  unsigned __int64 v117; // rcx
  __m128i v118; // xmm0
  unsigned __int64 v119; // r12
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rsi
  __int64 v124; // rdi
  __m128i *v125; // rax
  void *v126; // rbp
  __int64 v127; // rax
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // rdi
  __m128i v130; // xmm0
  __m128i v131; // xmm1
  __int64 v132; // rax
  void *v133; // rdi
  __int64 v134; // rax
  __int64 v135; // rax
  __m128i v136; // xmm0
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rsi
  char *v140; // rdi
  __int64 v141; // rdx
  __int64 v142; // rcx
  __m128i v143; // xmm0
  __int64 v145; // rax
  __m128i *v146; // rax
  unsigned __int64 v147; // rcx
  __m128i v148; // xmm0
  unsigned __int64 v149; // r12
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  unsigned int *v158; // [rsp+0h] [rbp-348h]
  unsigned int *v159; // [rsp+0h] [rbp-348h]
  unsigned int *v160; // [rsp+0h] [rbp-348h]
  __m128i v161; // [rsp+8h] [rbp-340h] BYREF
  __m128i v162; // [rsp+18h] [rbp-330h] BYREF
  int v163; // [rsp+28h] [rbp-320h]
  int v164; // [rsp+2Ch] [rbp-31Ch]
  int v165; // [rsp+30h] [rbp-318h]
  int v166[2]; // [rsp+38h] [rbp-310h] BYREF
  void *v167; // [rsp+40h] [rbp-308h] BYREF
  __int128 v168; // [rsp+48h] [rbp-300h]
  int v169; // [rsp+58h] [rbp-2F0h]
  void *v170; // [rsp+60h] [rbp-2E8h] BYREF
  __int128 v171; // [rsp+68h] [rbp-2E0h]
  int v172; // [rsp+78h] [rbp-2D0h]
  void *dest; // [rsp+80h] [rbp-2C8h] BYREF
  size_t n[2]; // [rsp+88h] [rbp-2C0h]
  int v175; // [rsp+98h] [rbp-2B0h]
  void *ptr; // [rsp+A0h] [rbp-2A8h] BYREF
  int v177[4]; // [rsp+A8h] [rbp-2A0h] BYREF
  int v178[2]; // [rsp+B8h] [rbp-290h]
  int v179; // [rsp+C0h] [rbp-288h]
  int v180; // [rsp+C8h] [rbp-280h]
  int v181; // [rsp+D0h] [rbp-278h] BYREF
  int v182; // [rsp+D8h] [rbp-270h] BYREF
  void *v183; // [rsp+E0h] [rbp-268h]
  int *v184; // [rsp+E8h] [rbp-260h]
  int *v185; // [rsp+F0h] [rbp-258h]
  __int64 v186; // [rsp+F8h] [rbp-250h]
  int v187[6]; // [rsp+100h] [rbp-248h] BYREF
  void *v188; // [rsp+118h] [rbp-230h]
  __int64 v189; // [rsp+120h] [rbp-228h]
  int v190; // [rsp+128h] [rbp-220h]
  int v191; // [rsp+130h] [rbp-218h]
  int v192; // [rsp+138h] [rbp-210h]
  __int64 v193; // [rsp+140h] [rbp-208h]
  unsigned __int64 v194; // [rsp+308h] [rbp-40h]

  v7 = (char *)*a3;
  v162.m128i_i64[1] = a4;
  v164 = a5;
  HIBYTE(v163) = a5;
  v194 = __readfsqword(0x28u);
  if ( v7 )
  {
    v8 = a3[1];
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = &v7[24 * i];
        v11 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v11);
          v7 = (char *)*a3;
        }
      }
    }
    a3[1] = 0;
    qfree(v7);
    *a3 = 0;
    a3[2] = 0;
  }
  if ( !*(_QWORD *)a1 )
    return 0;
  v12 = nullptr;
  v13 = a3[1];
  v182 = 0;
  v183 = nullptr;
  v162.m128i_i64[0] = (__int64)&v182;
  v184 = &v182;
  v185 = &v182;
  v186 = 0;
  sub_7B0B60(
    a2,
    0,
    (__int64 (__fastcall *)(__int64, __int64, __int64, unsigned __int16 *, size_t, __int64))&sub_7BDB80,
    (__int64)&v181);
  v14 = v184;
  if ( v184 != &v182 )
  {
    do
    {
      v15 = *((_QWORD *)v14 + 5) == 0;
      v161.m128i_i64[0] = (__int64)haystack;
      if ( !v15 )
        v161.m128i_i64[0] = *((_QWORD *)v14 + 4);
      if ( *((_QWORD *)v14 + 8) > 1u )
      {
        v16 = a3[1];
        v17 = *a3;
        if ( a3[2] < (unsigned __int64)(v16 + 1) )
        {
          v121 = qvector_reserve(a3, v17, v16 + 1, 24);
          *a3 = v121;
          v16 = a3[1];
          v17 = v121;
        }
        v18 = v17 + 24 * v16;
        *(_QWORD *)v18 = 0;
        *(_OWORD *)(v18 + 8) = 0;
        ++a3[1];
        sub_35A790((char **)v18);
        v19 = *((_QWORD *)v14 + 7);
        v20 = v19;
        v161.m128i_i64[1] = v19 + 8LL * *((_QWORD *)v14 + 8);
        if ( v19 != v161.m128i_i64[1] )
        {
          do
          {
            sub_35A910((__int64 *)v18);
            v20 += 8;
          }
          while ( v161.m128i_i64[1] != v20 );
        }
        v12 = (const char *)v161.m128i_i64[0];
        netnode_check(&dest, v161.m128i_i64[0], 0, 0);
        if ( dest == (void *)-1LL )
        {
          v122 = a3[1];
          v123 = *a3;
          if ( a3[2] < (unsigned __int64)(v122 + 1) )
          {
            v135 = qvector_reserve(a3, v123, v122 + 1, 24);
            *a3 = v135;
            v122 = a3[1];
            v123 = v135;
          }
          v124 = v123 + 24 * v122;
          v12 = "no name->node record for '%s'";
          *(_QWORD *)v124 = 0;
          *(_OWORD *)(v124 + 8) = 0;
          ++a3[1];
          sub_35A790((char **)v124);
        }
        if ( HIBYTE(v163) )
        {
          v21 = *((void ***)v14 + 7);
          v22 = &v21[*((_QWORD *)v14 + 8)];
          v23 = dest;
          if ( v21 != v22 )
          {
            v161.m128i_i64[0] = a1 + 53;
            do
            {
              v24 = *v21;
              if ( *v21 != v23 )
              {
                *(_WORD *)(a1 + 53) = 10;
                v25 = swap64(v24);
                v27 = *(_QWORD *)a1;
                *(_QWORD *)(a1 + 56) = v25;
                *(_BYTE *)(a1 + 64) = 78;
                if ( *(_BYTE *)(v27 + 6020) && (v161.m128i_i64[1] = v27, (unsigned __int8)must_journal(v27, v12, v26)) )
                {
                  v12 = (const char *)(a1 + 53);
                  ptr = nullptr;
                  *(_OWORD *)v177 = 0;
                  if ( (unsigned __int8)sub_73A6B0(v27, (_WORD *)(a1 + 53), (__int64)&ptr) )
                  {
                    v12 = (const char *)ptr;
                    add_undo_record(1, ptr, *(_QWORD *)v177);
                  }
                  if ( ptr )
                  {
                    *(_QWORD *)v177 = 0;
                    qfree(ptr);
                  }
                }
                else
                {
                  v12 = (const char *)v161.m128i_i64[0];
                  sub_73A6B0(v27, v161.m128i_i64[0], 0);
                }
                v23 = dest;
              }
              ++v21;
            }
            while ( v22 != v21 );
            v22 = *((void ***)v14 + 7);
          }
          if ( v23 == (void *)-1LL )
          {
            if ( v22 )
            {
              *((_QWORD *)v14 + 8) = 0;
              qfree(v22);
              *((_QWORD *)v14 + 7) = 0;
              *((_QWORD *)v14 + 9) = 0;
            }
          }
          else
          {
            v28 = *((_QWORD *)v14 + 8);
            if ( v28 )
            {
              if ( v28 != 1 )
                *((_QWORD *)v14 + 8) = 1;
            }
            else
            {
              if ( !*((_QWORD *)v14 + 9) )
              {
                v145 = qvector_reserve(v14 + 14, v22, 1, 8);
                *((_QWORD *)v14 + 7) = v145;
                v28 = *((_QWORD *)v14 + 8);
                v22 = (void **)v145;
              }
              v12 = nullptr;
              memset(&v22[v28], 0, 8 * (1 - v28));
              *((_QWORD *)v14 + 8) = 1;
              v22 = *((void ***)v14 + 7);
              v23 = dest;
            }
            *v22 = v23;
          }
        }
      }
      v14 = (int *)std::_Rb_tree_increment(v14, v12);
    }
    while ( v14 != (int *)v162.m128i_i64[0] );
  }
  if ( (_BYTE)v164 && v13 < a3[1] )
  {
    do
    {
      v33 = (__int64 *)(*a3 + 24 * v13);
      v32 = v33[1];
      if ( v32 )
      {
        v29 = v32 + 7;
        v30 = v32 + 8;
        v31 = *v33;
        --v32;
        if ( v33[2] < v30 )
          goto LABEL_42;
      }
      else
      {
        v31 = *v33;
        v30 = 9;
        v29 = 8;
        if ( (unsigned __int64)v33[2] < 9 )
        {
LABEL_42:
          v34 = *a3 + 24 * v13;
          v161.m128i_i64[1] = v29;
          v161.m128i_i64[0] = v30;
          v35 = qvector_reserve(v34, v31, v30, 1);
          *v33 = v35;
          v29 = v161.m128i_i64[1];
          v31 = v35;
          v30 = v161.m128i_i64[0];
        }
      }
      v33[1] = v30;
      ++v13;
      *(_BYTE *)(v31 + v29) = 0;
      *(_QWORD *)(*v33 + v32) = 0x64657869662E2E2ELL;
    }
    while ( v13 < a3[1] );
  }
  v36 = *(_QWORD *)a1;
  v37 = a1 + 1091;
  *(_WORD *)(a1 + 1091) = 1;
  v38 = (unsigned __int16 *)sub_7443D0(v36, (unsigned __int16 *)(a1 + 1091));
  if ( v38 )
  {
    v37 = a2;
    dest = *(void **)((char *)v38 + *v38 + 4);
    if ( (unsigned __int8)sub_7BB120(a1, (__int8 *)a2, (__int64 *)&dest, a3, (char *)&byte_22F0C30, 0) )
    {
      *(_OWORD *)v177 = 0;
      ptr = nullptr;
      v125 = (__m128i *)qvector_reserve(&ptr, 0, 36, 1);
      ptr = v125;
      *(_QWORD *)v177 = 36;
      *v125 = _mm_load_si128((const __m128i *)&xmmword_23A83E0);
      v125[1] = _mm_load_si128((const __m128i *)&xmmword_23A83F0);
      *(__int32 *)((char *)&v125[1].m128i_i32[3] + 3) = 1684370531;
      v126 = ptr;
      *((_BYTE *)ptr + 35) = 0;
      v127 = a3[1];
      v37 = *a3;
      v128 = a3[2];
      v129 = v127 + 1;
      if ( (unsigned __int64)&ptr < *a3 || (unsigned __int64)&ptr >= v37 + 24 * v128 )
      {
        if ( v128 < v129 )
        {
          v151 = qvector_reserve(a3, v37, v127 + 1, 24);
          *a3 = v151;
          v37 = v151;
          v126 = ptr;
          v127 = a3[1];
        }
        v136 = _mm_loadu_si128((const __m128i *)v177);
        v137 = v37 + 24 * v127;
        *(_QWORD *)v137 = v126;
        *(__m128i *)(v137 + 8) = v136;
        ++a3[1];
      }
      else
      {
        v130 = _mm_loadl_epi64((const __m128i *)v177);
        v131 = _mm_loadl_epi64((const __m128i *)&v177[2]);
        ptr = nullptr;
        *(_OWORD *)v177 = 0;
        if ( v128 < v129 )
        {
          v161.m128i_i64[1] = v131.m128i_i64[0];
          v161.m128i_i64[0] = v130.m128i_i64[0];
          v154 = qvector_reserve(a3, v37, v127 + 1, 24);
          *a3 = v154;
          v37 = v154;
          v131 = _mm_loadl_epi64((const __m128i *)&v161.m128i_u64[1]);
          v127 = a3[1];
          v130 = _mm_loadl_epi64(&v161);
        }
        v132 = v37 + 24 * v127;
        *(_QWORD *)v132 = v126;
        *(__m128i *)(v132 + 8) = _mm_unpacklo_epi64(v130, v131);
        v133 = ptr;
        ++a3[1];
        if ( v133 )
        {
          *(_QWORD *)v177 = 0;
          qfree(v133);
        }
      }
    }
  }
  v39 = *(_BYTE *)(a1 + 1093);
  v167 = nullptr;
  v170 = nullptr;
  v161.m128i_i8[0] = v39;
  v168 = 0;
  v171 = 0;
LABEL_46:
  p_ptr = *(void ***)a1;
  sub_741460(*(_QWORD *)a1);
  if ( v41 )
  {
    while ( 1 )
    {
      v43 = (char *)v41 - 1;
      if ( v41 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_58;
      v44 = *v41;
      *(_OWORD *)n = 0;
      dest = nullptr;
      dest = (void *)qvector_reserve(&dest, 0, v44 + 3, 1);
      memset((char *)dest + n[0], 0, v44 + 3 - n[0]);
      p_ptr = (void **)dest;
      v37 = (__int64)v43;
      n[0] = v44 + 3;
      memcpy(dest, v43, v44 + 3);
      v45 = (char *)dest;
      v42 = v161.m128i_u8[0];
      v46 = *((char *)dest + 3);
      v47 = (char *)dest + 3;
      if ( v46 != v161.m128i_u8[0] )
      {
        if ( (unsigned __int8)v46 < (unsigned int)v161.m128i_i8[0] )
        {
          *(_OWORD *)v177 = 0;
          ptr = nullptr;
          p_ptr = &ptr;
          v146 = (__m128i *)qvector_reserve(&ptr, 0, 40, 1);
          ptr = v146;
          *(_QWORD *)v177 = 40;
          *v146 = _mm_load_si128((const __m128i *)&xmmword_23A8400);
          v146[1] = _mm_load_si128((const __m128i *)&xmmword_23A8410);
          *(__int64 *)((char *)&v146[1].m128i_i64[1] + 7) = 0x726564726F207463LL;
          v115 = ptr;
          *((_BYTE *)ptr + 39) = 0;
          v116 = a3[1];
          v37 = *a3;
          v147 = a3[2];
          v42 = v116 + 1;
          if ( (unsigned __int64)&ptr < *a3 || (p_ptr = (void **)(v37 + 24 * v147), &ptr >= p_ptr) )
          {
            if ( v147 < v42 )
              goto LABEL_179;
            goto LABEL_177;
          }
          v148 = _mm_loadl_epi64((const __m128i *)v177);
          v149 = *(_QWORD *)&v177[2];
          ptr = nullptr;
          *(_OWORD *)v177 = 0;
          if ( v147 < v42 )
          {
            v161.m128i_i64[0] = v148.m128i_i64[0];
            v155 = qvector_reserve(a3, v37, v42, 24);
            *a3 = v155;
            v37 = v155;
            v148 = _mm_loadl_epi64(&v161);
            v116 = a3[1];
          }
          v150 = v37 + 24 * v116;
          *(_QWORD *)v150 = v115;
          *(__m128i *)(v150 + 8) = _mm_unpacklo_epi64(v148, (__m128i)v149);
          p_ptr = (void **)ptr;
          ++a3[1];
          if ( p_ptr )
          {
LABEL_138:
            *(_QWORD *)v177 = 0;
            qfree(p_ptr);
          }
LABEL_139:
          v45 = (char *)dest;
        }
        if ( v45 )
        {
          n[0] = 0;
          p_ptr = (void **)v45;
          qfree(v45);
        }
        goto LABEL_58;
      }
      if ( (_DWORD)v44 != 10 || *((_BYTE *)dest + 4) )
        break;
      if ( sub_7B01D0(*(_QWORD *)a1, (__int64 *)&v170, (__int64)dest + 4) < 0 )
      {
        v50 = 0;
        v51 = nullptr;
      }
      else
      {
        v51 = (char *)v170;
        v50 = 0;
      }
LABEL_54:
      sub_7BEFF0(v166, a2, v51, v50, 0);
      if ( *(_QWORD *)v166 != -1 )
      {
        sub_7BB120(a1, (__int8 *)a2, (__int64 *)v166, a3, v51, SHIBYTE(v163));
        goto LABEL_56;
      }
      *(_OWORD *)v177 = 0;
      ptr = nullptr;
      v68 = (__m128i *)qvector_reserve(&ptr, 0, 47, 1);
      ptr = v68;
      *(_QWORD *)v177 = 47;
      *v68 = _mm_load_si128((const __m128i *)&xmmword_23A8400);
      v68[1] = _mm_load_si128((const __m128i *)&xmmword_23A8410);
      *(__m128i *)((char *)v68 + 30) = _mm_load_si128((const __m128i *)&xmmword_23A8440);
      v69 = ptr;
      *((_BYTE *)ptr + 46) = 0;
      v70 = a3[1];
      v71 = *a3;
      v72 = a3[2];
      v73 = v70 + 1;
      if ( (unsigned __int64)&ptr < *a3 || (unsigned __int64)&ptr >= v71 + 24 * v72 )
      {
        if ( v72 < v73 )
        {
          v110 = qvector_reserve(a3, v71, v70 + 1, 24);
          *a3 = v110;
          v71 = v110;
          v69 = ptr;
          v70 = a3[1];
        }
        v83 = _mm_loadu_si128((const __m128i *)v177);
        v84 = v71 + 24 * v70;
        *(_QWORD *)v84 = v69;
        *(__m128i *)(v84 + 8) = v83;
        ++a3[1];
      }
      else
      {
        v74 = _mm_loadl_epi64((const __m128i *)v177);
        v75 = _mm_loadl_epi64((const __m128i *)&v177[2]);
        ptr = nullptr;
        *(_OWORD *)v177 = 0;
        if ( v72 < v73 )
        {
          v162.m128i_i64[0] = v75.m128i_i64[0];
          v161.m128i_i64[1] = v74.m128i_i64[0];
          v134 = qvector_reserve(a3, v71, v70 + 1, 24);
          *a3 = v134;
          v71 = v134;
          v75 = _mm_loadl_epi64(&v162);
          v70 = a3[1];
          v74 = _mm_loadl_epi64((const __m128i *)&v161.m128i_u64[1]);
        }
        v76 = v71 + 24 * v70;
        *(_QWORD *)v76 = v69;
        *(__m128i *)(v76 + 8) = _mm_unpacklo_epi64(v74, v75);
        v77 = ptr;
        ++a3[1];
        if ( v77 )
        {
          *(_QWORD *)v177 = 0;
          qfree(v77);
          if ( HIBYTE(v163) )
          {
            v78 = n[0];
            v79 = nullptr;
            if ( n[0] )
              goto LABEL_93;
            goto LABEL_85;
          }
          goto LABEL_56;
        }
      }
      if ( HIBYTE(v163) )
      {
        v78 = n[0];
        v79 = nullptr;
        if ( n[0] )
        {
LABEL_93:
          v79 = (void *)qalloc_or_throw(v78);
          memcpy(v79, dest, v78);
        }
LABEL_85:
        v80 = v168;
        if ( *((_QWORD *)&v168 + 1) < (unsigned __int64)(v168 + 1) )
        {
          v161.m128i_i64[1] = *((_QWORD *)&v168 + 1);
          v138 = qvector_reserve(&v167, 0, v168 + 1, 24);
          v81 = (char *)v138;
          v139 = *((_QWORD *)&v168 + 1);
          v140 = (char *)v167;
          *((_QWORD *)&v168 + 1) = v161.m128i_i64[1];
          v141 = v168 - 1;
          if ( (__int64)v168 - 1 >= 0 )
          {
            do
            {
              v142 = *(_QWORD *)v140;
              v143 = _mm_loadu_si128((const __m128i *)(v140 + 8));
              v138 += 24;
              v140 += 24;
              *((_QWORD *)v140 - 3) = 0;
              *(_QWORD *)(v138 - 24) = v142;
              *(__m128i *)(v138 - 16) = v143;
              *((_QWORD *)v140 - 1) = 0;
            }
            while ( v141-- != 0 );
            v140 = (char *)v167;
          }
          v161.m128i_i64[1] = v139;
          qfree(v140);
          v80 = v168;
          v167 = v81;
          *((_QWORD *)&v168 + 1) = v161.m128i_i64[1];
        }
        else
        {
          v81 = (char *)v167;
        }
        v82 = &v81[24 * v80];
        *(_QWORD *)v82 = v79;
        *(__m128i *)(v82 + 8) = _mm_unpacklo_epi64((__m128i)v78, (__m128i)v78);
        *(_QWORD *)&v168 = v168 + 1;
      }
LABEL_56:
      v37 = (__int64)(v45 + 1);
      sub_7443D0(*(_QWORD *)a1, (unsigned __int16 *)(v45 + 1));
      if ( !dest )
        goto LABEL_46;
      n[0] = 0;
      qfree(dest);
      p_ptr = *(void ***)a1;
      sub_741460(*(_QWORD *)a1);
      if ( !v41 )
        goto LABEL_58;
    }
    if ( memchr((char *)dest + 3, 0, v44) )
    {
      v49 = v44 - 1;
    }
    else
    {
      v48 = sub_7AFF80(v187, v47, v44, 513);
      v49 = v44 - 1;
      v50 = v49;
      if ( v48 != -1 )
      {
LABEL_53:
        v51 = (char *)v187 + 1;
        goto LABEL_54;
      }
    }
    v161.m128i_i64[1] = v49;
    if ( memchr(v47, 0, v49)
      || (v112 = sub_7AFF80(v187, v47, v161.m128i_i64[1], 513), v50 = v161.m128i_i64[1], v112 == -1) )
    {
      *(_OWORD *)v177 = 0;
      ptr = nullptr;
      p_ptr = &ptr;
      v113 = (__m128i *)qvector_reserve(&ptr, 0, 50, 1);
      ptr = v113;
      *(_QWORD *)v177 = 50;
      *v113 = _mm_load_si128((const __m128i *)&xmmword_23A8400);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8420);
      v113[3].m128i_i8[0] = 103;
      v113[1] = si128;
      v113[2] = _mm_load_si128((const __m128i *)&xmmword_23A8430);
      v115 = ptr;
      *((_BYTE *)ptr + 49) = 0;
      v116 = a3[1];
      v37 = *a3;
      v117 = a3[2];
      v42 = v116 + 1;
      if ( (unsigned __int64)&ptr >= *a3 )
      {
        p_ptr = (void **)(v37 + 24 * v117);
        if ( &ptr < p_ptr )
        {
          v118 = _mm_loadl_epi64((const __m128i *)v177);
          v119 = *(_QWORD *)&v177[2];
          ptr = nullptr;
          *(_OWORD *)v177 = 0;
          if ( v117 < v42 )
          {
            v161.m128i_i64[0] = v118.m128i_i64[0];
            v156 = qvector_reserve(a3, v37, v42, 24);
            *a3 = v156;
            v37 = v156;
            v118 = _mm_loadl_epi64(&v161);
            v116 = a3[1];
          }
          v120 = v37 + 24 * v116;
          *(_QWORD *)v120 = v115;
          *(__m128i *)(v120 + 8) = _mm_unpacklo_epi64(v118, (__m128i)v119);
          p_ptr = (void **)ptr;
          ++a3[1];
          if ( p_ptr )
            goto LABEL_138;
          goto LABEL_139;
        }
      }
      if ( v117 < v42 )
      {
LABEL_179:
        p_ptr = (void **)a3;
        v153 = qvector_reserve(a3, v37, v42, 24);
        *a3 = v153;
        v37 = v153;
        v115 = ptr;
        v116 = a3[1];
      }
LABEL_177:
      v152 = v37 + 24 * v116;
      *(_QWORD *)v152 = v115;
      *(__m128i *)(v152 + 8) = _mm_loadu_si128((const __m128i *)v177);
      ++a3[1];
      goto LABEL_139;
    }
    goto LABEL_53;
  }
LABEL_58:
  v52 = (char *)v167;
  v53 = (char *)v167 + 24 * v168;
  if ( v53 != v167 )
  {
    do
    {
      while ( 1 )
      {
        v54 = *(_QWORD *)a1;
        v55 = *(_QWORD *)v52;
        if ( *(_BYTE *)(*(_QWORD *)a1 + 6020LL) )
        {
          if ( (unsigned __int8)must_journal(p_ptr, v37, v42) )
            break;
        }
        v37 = v55 + 1;
        p_ptr = (void **)v54;
        sub_73A6B0(v54, (_WORD *)(v55 + 1), 0);
LABEL_61:
        v52 += 24;
        if ( v53 == v52 )
          goto LABEL_68;
      }
      v37 = v55 + 1;
      ptr = nullptr;
      *(_OWORD *)v177 = 0;
      if ( (unsigned __int8)sub_73A6B0(v54, (_WORD *)(v55 + 1), (__int64)&ptr) )
      {
        v37 = (__int64)ptr;
        add_undo_record(1, ptr, *(_QWORD *)v177);
      }
      p_ptr = (void **)ptr;
      if ( !ptr )
        goto LABEL_61;
      *(_QWORD *)v177 = 0;
      v52 += 24;
      qfree(ptr);
    }
    while ( v53 != v52 );
  }
LABEL_68:
  v56 = v164;
  v57 = a3[1];
  if ( !(unsigned __int8)sub_7BB8E0((__int64 *)a1, a3, (unsigned __int64 *)v162.m128i_i64[1], v164) )
  {
    v58 = v57;
    v57 = (int)v57;
    if ( (int)v57 < (unsigned __int64)a3[1] )
    {
      while ( 1 )
      {
        v64 = (__int64 *)(*a3 + 24 * v57);
        v65 = v64[1];
        v66 = v64[2];
        v67 = *v64;
        if ( v65 )
          break;
        if ( v66 <= 0x18 )
        {
          v59 = 0;
          v61 = 25;
          v60 = 24;
LABEL_127:
          v162.m128i_i64[0] = v59;
          v161.m128i_i64[1] = v60;
          v161.m128i_i64[0] = v61;
          v111 = qvector_reserve(v64, v67, v61, 1);
          *v64 = v111;
          v59 = v162.m128i_i64[0];
          v67 = v111;
          v60 = v161.m128i_i64[1];
          v61 = v161.m128i_i64[0];
LABEL_72:
          v64[1] = v61;
          *(_BYTE *)(v67 + v60) = 0;
          if ( v59 )
            memmove((void *)(*v64 + 24), (const void *)*v64, v59);
          goto LABEL_74;
        }
        v64[1] = 25;
        *(_BYTE *)(v67 + 24) = 0;
LABEL_74:
        v62 = (__m128i *)*v64;
        v63 = _mm_load_si128((const __m128i *)&xmmword_23A8400);
        v57 = ++v58;
        v62[1].m128i_i64[0] = 0x202D206465747075LL;
        *v62 = v63;
        if ( v58 >= (unsigned __int64)a3[1] )
          goto LABEL_94;
      }
      v59 = v65 - 1;
      v60 = v65 + 23;
      v61 = v65 + 24;
      if ( v66 < v61 )
        goto LABEL_127;
      goto LABEL_72;
    }
  }
LABEL_94:
  if ( v162.m128i_i64[1] )
  {
    v85 = *(_QWORD *)v162.m128i_i64[1];
    *(_QWORD *)v166 = *(_QWORD *)v162.m128i_i64[1];
    do
    {
      sub_7BBDE0(a1, (__int8 *)a2, a3, v85, v56);
      if ( !(unsigned __int8)sub_7B91A0(a1, (unsigned int *)v166) )
        break;
      v85 = *(_QWORD *)v166;
    }
    while ( *(_QWORD *)v166 < *(_QWORD *)(v162.m128i_i64[1] + 8) );
    if ( *(_DWORD *)(a2 + 1512) == 4 )
    {
      ptr = nullptr;
      *(_OWORD *)v177 = 0;
      *(_QWORD *)v178 = 0;
      v179 = -1;
      v86 = qvector_reserve(&ptr, 0, 1, 16);
      v87 = v162.m128i_i32[2];
      LODWORD(ptr) = v86;
      v88 = 16LL * *(_QWORD *)v177;
      *(__m128i *)(v86 + v88) = _mm_load_si128((const __m128i *)&xmmword_23A83D0);
      rangeset_t_sub(
        (int)&ptr,
        v87,
        v88,
        v89,
        v90,
        v91,
        a2,
        v161.m128i_i32[0],
        v161.m128i_i32[2],
        v162.m128i_i32[0],
        v162.m128i_i32[2],
        v163,
        v165,
        v166[0],
        (int)v167,
        v168,
        SDWORD2(v168),
        v169,
        (int)v170,
        v171,
        SDWORD2(v171),
        v172,
        (int)dest,
        n[0],
        n[1],
        v175,
        (int)ptr,
        v177[0] + 1,
        v177[2],
        v178[0],
        v179,
        v180,
        v181,
        v182,
        (int)v183,
        (int)v184,
        (int)v185,
        v186,
        v187[0],
        v187[2],
        v187[4],
        v188,
        v189,
        v190,
        v191,
        v192,
        v193);
      v92 = ptr;
      v93 = (char *)ptr + 16 * *(_QWORD *)v177;
      if ( v93 != ptr )
      {
        v94 = (char *)ptr;
        p_dest = (unsigned int *)&dest;
        do
        {
          v159 = p_dest;
          dest = (void *)(*(_QWORD *)v94 - 1LL);
          v98 = sub_7B91A0(a1, p_dest);
          p_dest = v159;
          if ( v98 )
          {
            v99 = dest;
            if ( (unsigned __int64)dest >= *(_QWORD *)v94 && (unsigned __int64)dest < *((_QWORD *)v94 + 1) )
            {
              do
              {
                v100 = a3[1];
                v101 = *a3;
                if ( a3[2] < (unsigned __int64)(v100 + 1) )
                {
                  v160 = p_dest;
                  v102 = qvector_reserve(a3, v101, v100 + 1, 24);
                  v100 = a3[1];
                  p_dest = v160;
                  *a3 = v102;
                  v101 = v102;
                }
                v158 = p_dest;
                v96 = v101 + 24 * v100;
                *(_QWORD *)v96 = 0;
                *(_OWORD *)(v96 + 8) = 0;
                ++a3[1];
                sub_35A790((char **)v96);
                v97 = sub_7B91A0(a1, v158);
                p_dest = v158;
              }
              while ( v97 && (unsigned __int64)dest >= *(_QWORD *)v94 && (unsigned __int64)dest < *((_QWORD *)v94 + 1) );
              if ( HIBYTE(v163) )
              {
                sub_7B5570((__int64 *)a1, (unsigned __int64)v99, *((_QWORD *)v94 + 1));
                p_dest = v158;
              }
            }
          }
          v94 += 16;
        }
        while ( v93 != v94 );
        v92 = ptr;
      }
      if ( v92 )
      {
        *(_QWORD *)v177 = 0;
        qfree(v92);
      }
    }
  }
  v103 = *((_DWORD *)a3 + 2);
  if ( v170 )
  {
    *(_QWORD *)&v171 = 0;
    qfree(v170);
  }
  v104 = (char *)v167;
  if ( v167 )
  {
    v105 = v168;
    if ( (_QWORD)v168 )
    {
      v106 = 0;
      do
      {
        v107 = &v104[24 * v106];
        v108 = *(void **)v107;
        if ( *(_QWORD *)v107 )
        {
          *((_QWORD *)v107 + 1) = 0;
          qfree(v108);
          v104 = (char *)v167;
        }
        ++v106;
      }
      while ( v105 != v106 );
    }
    *(_QWORD *)&v168 = 0;
    qfree(v104);
  }
  sub_7BA2F0(v183);
  return v103;
}
