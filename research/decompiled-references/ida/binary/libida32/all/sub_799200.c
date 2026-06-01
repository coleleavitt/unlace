__int64 __fastcall sub_799200(__int64 a1, __int8 *a2, __int64 *a3, __int64 a4, int a5)
{
  char *v7; // rdx
  __int64 v8; // r12
  __int64 i; // rbp
  char *v10; // rax
  void *v11; // rdi
  unsigned __int64 v12; // rbp
  _QWORD *v13; // r13
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rcx
  __int64 v19; // r14
  const char *v20; // rsi
  unsigned int *v21; // r14
  unsigned int v22; // edx
  unsigned int *v23; // r12
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // r12
  __int64 *v31; // r13
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned __int16 *v36; // rax
  __int8 v37; // al
  void **v38; // rdi
  unsigned __int16 *v39; // rax
  unsigned __int64 v40; // rdx
  char *v41; // rbp
  size_t v42; // r13
  char *v43; // rbp
  int v44; // ecx
  _BYTE *v45; // r14
  __int64 v46; // rax
  int v47; // r13d
  __int64 v48; // rdx
  char *v49; // r13
  char *v50; // r12
  char *v51; // rbp
  __int64 v52; // r14
  __int64 v53; // r13
  char v54; // r12
  __int64 v55; // rbp
  int v56; // r14d
  size_t v57; // r9
  __int64 v58; // r8
  unsigned __int64 v59; // rdx
  __m128i *v60; // rax
  __m128i v61; // xmm0
  __int64 *v62; // rbp
  __int64 v63; // rdx
  unsigned __int64 v64; // rax
  __int64 v65; // rsi
  __m128i *v66; // rax
  void *v67; // r12
  __int64 v68; // rax
  const char *v69; // rsi
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rdi
  __m128i v72; // xmm0
  __m128i v73; // xmm1
  char *v74; // rax
  void *v75; // rdi
  size_t v76; // r12
  void *v77; // r13
  __int64 v78; // rax
  char *v79; // r14
  char *v80; // rax
  __m128i v81; // xmm0
  char *v82; // rax
  unsigned int v83; // ecx
  unsigned int v84; // ebp
  char *v85; // rdx
  __int64 v86; // r12
  __int64 v87; // rbx
  char *v88; // rax
  void *v89; // rdi
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __m128i *v94; // rax
  __m128i si128; // xmm0
  void *v96; // rbp
  __int64 v97; // rax
  unsigned __int64 v98; // rcx
  __m128i v99; // xmm0
  __int64 v100; // r12
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rsi
  __int64 v105; // rdi
  __m128i *v106; // rax
  void *v107; // rbp
  __int64 v108; // rax
  unsigned __int64 v109; // rdx
  unsigned __int64 v110; // rdi
  __m128i v111; // xmm0
  __m128i v112; // xmm1
  __int64 v113; // rax
  void *v114; // rdi
  __int64 v115; // rax
  __int64 v116; // rax
  __m128i v117; // xmm0
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rsi
  char *v121; // rdi
  __int64 v122; // rdx
  __int64 v123; // rcx
  __m128i v124; // xmm0
  __int64 v126; // rax
  __m128i *v127; // rax
  unsigned __int64 v128; // rcx
  __m128i v129; // xmm0
  __int64 v130; // r12
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __m128i v139; // [rsp+8h] [rbp-330h] BYREF
  __m128i v140; // [rsp+18h] [rbp-320h] BYREF
  char v141; // [rsp+2Bh] [rbp-30Dh]
  int v142; // [rsp+2Ch] [rbp-30Ch]
  unsigned int v143; // [rsp+3Ch] [rbp-2FCh] BYREF
  void *v144; // [rsp+40h] [rbp-2F8h] BYREF
  __int128 v145; // [rsp+48h] [rbp-2F0h]
  void *ptr; // [rsp+60h] [rbp-2D8h] BYREF
  __int128 v147; // [rsp+68h] [rbp-2D0h]
  void *dest; // [rsp+80h] [rbp-2B8h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-2B0h]
  void *v150; // [rsp+A0h] [rbp-298h] BYREF
  __m128i v151; // [rsp+A8h] [rbp-290h] BYREF
  char v152[8]; // [rsp+C0h] [rbp-278h] BYREF
  int v153; // [rsp+C8h] [rbp-270h] BYREF
  void *v154; // [rsp+D0h] [rbp-268h]
  int *v155; // [rsp+D8h] [rbp-260h]
  int *v156; // [rsp+E0h] [rbp-258h]
  __int64 v157; // [rsp+E8h] [rbp-250h]
  char v158; // [rsp+F0h] [rbp-248h] BYREF
  char v159; // [rsp+F1h] [rbp-247h] BYREF
  unsigned __int64 v160; // [rsp+2F8h] [rbp-40h]

  v7 = (char *)*a3;
  v140.m128i_i64[1] = a4;
  v142 = a5;
  v141 = a5;
  v160 = __readfsqword(0x28u);
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
  v12 = a3[1];
  v153 = 0;
  v154 = nullptr;
  v140.m128i_i64[0] = (__int64)&v153;
  v155 = &v153;
  v156 = &v153;
  v157 = 0;
  sub_78FE10(
    (__int64)a2,
    0,
    (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, const void *, size_t, __int64))&sub_79A810,
    (__int64)v152);
  v13 = v155;
  if ( v155 != &v153 )
  {
    do
    {
      v14 = v13[5] == 0;
      v139.m128i_i64[0] = (__int64)haystack;
      if ( !v14 )
        v139.m128i_i64[0] = v13[4];
      if ( v13[8] > 1u )
      {
        v15 = a3[1];
        v16 = *a3;
        if ( a3[2] < (unsigned __int64)(v15 + 1) )
        {
          v102 = qvector_reserve(a3, v16, v15 + 1, 24);
          *a3 = v102;
          v15 = a3[1];
          v16 = v102;
        }
        v17 = v16 + 24 * v15;
        *(_QWORD *)v17 = 0;
        *(_OWORD *)(v17 + 8) = 0;
        ++a3[1];
        sub_3573A0((char **)v17);
        v18 = v13[7];
        v19 = v18;
        v139.m128i_i64[1] = v18 + 4LL * v13[8];
        if ( v18 != v139.m128i_i64[1] )
        {
          do
          {
            sub_357520((__int64 *)v17);
            v19 += 4;
          }
          while ( v139.m128i_i64[1] != v19 );
        }
        v20 = (const char *)v139.m128i_i64[0];
        netnode_check(&dest, v139.m128i_i64[0], 0, 0);
        if ( (_DWORD)dest == -1 )
        {
          v103 = a3[1];
          v104 = *a3;
          if ( a3[2] < (unsigned __int64)(v103 + 1) )
          {
            v116 = qvector_reserve(a3, v104, v103 + 1, 24);
            *a3 = v116;
            v103 = a3[1];
            v104 = v116;
          }
          v105 = v104 + 24 * v103;
          v20 = "no name->node record for '%s'";
          *(_QWORD *)v105 = 0;
          *(_OWORD *)(v105 + 8) = 0;
          ++a3[1];
          sub_3573A0((char **)v105);
        }
        if ( v141 )
        {
          v21 = (unsigned int *)v13[7];
          v22 = (unsigned int)dest;
          v23 = &v21[v13[8]];
          if ( v21 != v23 )
          {
            v139.m128i_i64[0] = a1 + 45;
            do
            {
              v24 = *v21;
              if ( *v21 != v22 )
              {
                v25 = *(_QWORD *)a1;
                *(_BYTE *)(a1 + 52) = 78;
                *(_WORD *)(a1 + 45) = 6;
                *(_DWORD *)(a1 + 48) = _byteswap_ulong(v24);
                if ( *(_BYTE *)(v25 + 5988) && (v139.m128i_i64[1] = v25, (unsigned __int8)must_journal(v25, v20, 6)) )
                {
                  v20 = (const char *)(a1 + 45);
                  v150 = nullptr;
                  v151 = 0;
                  if ( (unsigned __int8)sub_71A170(v25, (_WORD *)(a1 + 45), (__int64)&v150) )
                  {
                    v20 = (const char *)v150;
                    add_undo_record(1, v150, v151.m128i_i64[0]);
                  }
                  if ( v150 )
                  {
                    v151.m128i_i64[0] = 0;
                    qfree(v150);
                  }
                }
                else
                {
                  v20 = (const char *)v139.m128i_i64[0];
                  sub_71A170(v25, v139.m128i_i64[0], 0);
                }
                v22 = (unsigned int)dest;
              }
              ++v21;
            }
            while ( v23 != v21 );
            v23 = (unsigned int *)v13[7];
          }
          if ( v22 == -1 )
          {
            if ( v23 )
            {
              v13[8] = 0;
              qfree(v23);
              v13[7] = 0;
              v13[9] = 0;
            }
          }
          else
          {
            v26 = v13[8];
            if ( v26 )
            {
              if ( v26 != 1 )
                v13[8] = 1;
            }
            else
            {
              if ( !v13[9] )
              {
                v126 = qvector_reserve(v13 + 7, v23, 1, 4);
                v13[7] = v126;
                v23 = (unsigned int *)v126;
                v26 = v13[8];
              }
              memset(&v23[v26], 0, 4 * (1 - v26));
              v13[8] = 1;
              v23 = (unsigned int *)v13[7];
              v22 = (unsigned int)dest;
            }
            *v23 = v22;
          }
        }
      }
      v13 = (_QWORD *)std::_Rb_tree_increment();
    }
    while ( v13 != (_QWORD *)v140.m128i_i64[0] );
  }
  if ( (_BYTE)v142 && v12 < a3[1] )
  {
    do
    {
      v31 = (__int64 *)(*a3 + 24 * v12);
      v30 = v31[1];
      if ( v30 )
      {
        v27 = v30 + 7;
        v28 = v30 + 8;
        v29 = *v31;
        --v30;
        if ( v31[2] < v28 )
          goto LABEL_42;
      }
      else
      {
        v29 = *v31;
        v28 = 9;
        v27 = 8;
        if ( (unsigned __int64)v31[2] < 9 )
        {
LABEL_42:
          v32 = *a3 + 24 * v12;
          v139.m128i_i64[1] = v27;
          v139.m128i_i64[0] = v28;
          v33 = qvector_reserve(v32, v29, v28, 1);
          *v31 = v33;
          v27 = v139.m128i_i64[1];
          v29 = v33;
          v28 = v139.m128i_i64[0];
        }
      }
      v31[1] = v28;
      ++v12;
      *(_BYTE *)(v29 + v27) = 0;
      *(_QWORD *)(*v31 + v30) = 0x64657869662E2E2ELL;
    }
    while ( v12 < a3[1] );
  }
  v34 = *(_QWORD *)a1;
  v35 = a1 + 1083;
  *(_WORD *)(a1 + 1083) = 1;
  v36 = (unsigned __int16 *)sub_723E90(v34, (unsigned __int16 *)(a1 + 1083));
  if ( v36 )
  {
    v35 = (__int64)a2;
    LODWORD(dest) = *(_DWORD *)((char *)v36 + *v36 + 4);
    if ( (unsigned __int8)sub_798020(a1, a2, (unsigned int *)&dest, a3, (char *)&byte_22CD811, 0) )
    {
      v151 = 0;
      v150 = nullptr;
      v106 = (__m128i *)qvector_reserve(&v150, 0, 36, 1);
      v150 = v106;
      v151.m128i_i64[0] = 36;
      *v106 = _mm_load_si128((const __m128i *)&xmmword_23843B0);
      v106[1] = _mm_load_si128((const __m128i *)&xmmword_23843C0);
      *(__int32 *)((char *)&v106[1].m128i_i32[3] + 3) = 1684370531;
      v107 = v150;
      *((_BYTE *)v150 + 35) = 0;
      v108 = a3[1];
      v35 = *a3;
      v109 = a3[2];
      v110 = v108 + 1;
      if ( (unsigned __int64)&v150 < *a3 || (unsigned __int64)&v150 >= v35 + 24 * v109 )
      {
        if ( v109 < v110 )
        {
          v132 = qvector_reserve(a3, v35, v108 + 1, 24);
          *a3 = v132;
          v35 = v132;
          v107 = v150;
          v108 = a3[1];
        }
        v117 = _mm_loadu_si128(&v151);
        v118 = v35 + 24 * v108;
        *(_QWORD *)v118 = v107;
        *(__m128i *)(v118 + 8) = v117;
        ++a3[1];
      }
      else
      {
        v111 = _mm_loadl_epi64(&v151);
        v112 = _mm_loadl_epi64((const __m128i *)&v151.m128i_u64[1]);
        v150 = nullptr;
        v151 = 0;
        if ( v109 < v110 )
        {
          v139.m128i_i64[1] = v112.m128i_i64[0];
          v139.m128i_i64[0] = v111.m128i_i64[0];
          v135 = qvector_reserve(a3, v35, v108 + 1, 24);
          *a3 = v135;
          v35 = v135;
          v112 = _mm_loadl_epi64((const __m128i *)&v139.m128i_u64[1]);
          v108 = a3[1];
          v111 = _mm_loadl_epi64(&v139);
        }
        v113 = v35 + 24 * v108;
        *(_QWORD *)v113 = v107;
        *(__m128i *)(v113 + 8) = _mm_unpacklo_epi64(v111, v112);
        v114 = v150;
        ++a3[1];
        if ( v114 )
        {
          v151.m128i_i64[0] = 0;
          qfree(v114);
        }
      }
    }
  }
  v37 = *(_BYTE *)(a1 + 1085);
  v144 = nullptr;
  ptr = nullptr;
  v139.m128i_i8[0] = v37;
  v145 = 0;
  v147 = 0;
LABEL_46:
  v38 = *(void ***)a1;
  sub_720F20(*(_QWORD *)a1);
  if ( v39 )
  {
    while ( 1 )
    {
      v41 = (char *)v39 - 1;
      if ( v39 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_58;
      v42 = *v39;
      *(_OWORD *)n = 0;
      dest = nullptr;
      dest = (void *)qvector_reserve(&dest, 0, v42 + 3, 1);
      memset((char *)dest + n[0], 0, v42 + 3 - n[0]);
      v38 = (void **)dest;
      v35 = (__int64)v41;
      n[0] = v42 + 3;
      memcpy(dest, v41, v42 + 3);
      v43 = (char *)dest;
      v40 = v139.m128i_u8[0];
      v44 = *((char *)dest + 3);
      v45 = (char *)dest + 3;
      if ( v44 != v139.m128i_u8[0] )
      {
        if ( (unsigned __int8)v44 < (unsigned int)v139.m128i_i8[0] )
        {
          v151 = 0;
          v150 = nullptr;
          v38 = &v150;
          v127 = (__m128i *)qvector_reserve(&v150, 0, 40, 1);
          v150 = v127;
          v151.m128i_i64[0] = 40;
          *v127 = _mm_load_si128((const __m128i *)&xmmword_23843D0);
          v127[1] = _mm_load_si128((const __m128i *)&xmmword_23843E0);
          *(__int64 *)((char *)&v127[1].m128i_i64[1] + 7) = 0x726564726F207463LL;
          v96 = v150;
          *((_BYTE *)v150 + 39) = 0;
          v97 = a3[1];
          v35 = *a3;
          v128 = a3[2];
          v40 = v97 + 1;
          if ( (unsigned __int64)&v150 < *a3 || (v38 = (void **)(v35 + 24 * v128), &v150 >= v38) )
          {
            if ( v128 < v40 )
              goto LABEL_162;
            goto LABEL_160;
          }
          v129 = _mm_loadl_epi64(&v151);
          v130 = v151.m128i_i64[1];
          v150 = nullptr;
          v151 = 0;
          if ( v128 < v40 )
          {
            v139.m128i_i64[0] = v129.m128i_i64[0];
            v136 = qvector_reserve(a3, v35, v40, 24);
            *a3 = v136;
            v35 = v136;
            v129 = _mm_loadl_epi64(&v139);
            v97 = a3[1];
          }
          v131 = v35 + 24 * v97;
          *(_QWORD *)v131 = v96;
          *(__m128i *)(v131 + 8) = _mm_unpacklo_epi64(v129, (__m128i)(unsigned __int64)v130);
          v38 = (void **)v150;
          ++a3[1];
          if ( v38 )
          {
LABEL_121:
            v151.m128i_i64[0] = 0;
            qfree(v38);
          }
LABEL_122:
          v43 = (char *)dest;
        }
        if ( v43 )
        {
          n[0] = 0;
          v38 = (void **)v43;
          qfree(v43);
        }
        goto LABEL_58;
      }
      if ( (_DWORD)v42 != 6 || *((_BYTE *)dest + 4) )
        break;
      if ( sub_78F470(*(_QWORD *)a1, (__int64 *)&ptr, (__int64)dest + 4) < 0 )
      {
        v48 = 0;
        v49 = nullptr;
      }
      else
      {
        v49 = (char *)ptr;
        v48 = 0;
      }
LABEL_54:
      sub_79BBF0(&v143, a2, v49, v48, 0);
      if ( v143 != -1 )
      {
        sub_798020(a1, a2, &v143, a3, v49, v141);
        goto LABEL_56;
      }
      v151 = 0;
      v150 = nullptr;
      v66 = (__m128i *)qvector_reserve(&v150, 0, 47, 1);
      v150 = v66;
      v151.m128i_i64[0] = 47;
      *v66 = _mm_load_si128((const __m128i *)&xmmword_23843D0);
      v66[1] = _mm_load_si128((const __m128i *)&xmmword_23843E0);
      *(__m128i *)((char *)v66 + 30) = _mm_load_si128((const __m128i *)&xmmword_2384410);
      v67 = v150;
      *((_BYTE *)v150 + 46) = 0;
      v68 = a3[1];
      v69 = (const char *)*a3;
      v70 = a3[2];
      v71 = v68 + 1;
      if ( (unsigned __int64)&v150 < *a3 || &v150 >= (void **)&v69[24 * v70] )
      {
        if ( v70 < v71 )
        {
          v91 = qvector_reserve(a3, v69, v68 + 1, 24);
          *a3 = v91;
          v69 = (const char *)v91;
          v67 = v150;
          v68 = a3[1];
        }
        v81 = _mm_loadu_si128(&v151);
        v82 = (char *)&v69[24 * v68];
        *(_QWORD *)v82 = v67;
        *(__m128i *)(v82 + 8) = v81;
        ++a3[1];
      }
      else
      {
        v72 = _mm_loadl_epi64(&v151);
        v73 = _mm_loadl_epi64((const __m128i *)&v151.m128i_u64[1]);
        v150 = nullptr;
        v151 = 0;
        if ( v70 < v71 )
        {
          v140.m128i_i64[0] = v73.m128i_i64[0];
          v139.m128i_i64[1] = v72.m128i_i64[0];
          v115 = qvector_reserve(a3, v69, v68 + 1, 24);
          *a3 = v115;
          v69 = (const char *)v115;
          v73 = _mm_loadl_epi64(&v140);
          v68 = a3[1];
          v72 = _mm_loadl_epi64((const __m128i *)&v139.m128i_u64[1]);
        }
        v74 = (char *)&v69[24 * v68];
        *(_QWORD *)v74 = v67;
        *(__m128i *)(v74 + 8) = _mm_unpacklo_epi64(v72, v73);
        v75 = v150;
        ++a3[1];
        if ( v75 )
        {
          v151.m128i_i64[0] = 0;
          qfree(v75);
          if ( v141 )
          {
            v76 = n[0];
            v77 = nullptr;
            if ( n[0] )
              goto LABEL_93;
            goto LABEL_85;
          }
          goto LABEL_56;
        }
      }
      if ( v141 )
      {
        v76 = n[0];
        v77 = nullptr;
        if ( n[0] )
        {
LABEL_93:
          v77 = (void *)qalloc_or_throw(v76, v69);
          memcpy(v77, dest, v76);
        }
LABEL_85:
        v78 = v145;
        if ( *((_QWORD *)&v145 + 1) < (unsigned __int64)(v145 + 1) )
        {
          v139.m128i_i64[1] = *((_QWORD *)&v145 + 1);
          v119 = qvector_reserve(&v144, 0, v145 + 1, 24);
          v79 = (char *)v119;
          v120 = *((_QWORD *)&v145 + 1);
          v121 = (char *)v144;
          *((_QWORD *)&v145 + 1) = v139.m128i_i64[1];
          v122 = v145 - 1;
          if ( (__int64)v145 - 1 >= 0 )
          {
            do
            {
              v123 = *(_QWORD *)v121;
              v124 = _mm_loadu_si128((const __m128i *)(v121 + 8));
              v119 += 24;
              v121 += 24;
              *((_QWORD *)v121 - 3) = 0;
              *(_QWORD *)(v119 - 24) = v123;
              *(__m128i *)(v119 - 16) = v124;
              *((_QWORD *)v121 - 1) = 0;
            }
            while ( v122-- != 0 );
            v121 = (char *)v144;
          }
          v139.m128i_i64[1] = v120;
          qfree(v121);
          v78 = v145;
          v144 = v79;
          *((_QWORD *)&v145 + 1) = v139.m128i_i64[1];
        }
        else
        {
          v79 = (char *)v144;
        }
        v80 = &v79[24 * v78];
        *(_QWORD *)v80 = v77;
        *(__m128i *)(v80 + 8) = _mm_unpacklo_epi64((__m128i)v76, (__m128i)v76);
        *(_QWORD *)&v145 = v145 + 1;
      }
LABEL_56:
      v35 = (__int64)(v43 + 1);
      sub_723E90(*(_QWORD *)a1, (unsigned __int16 *)(v43 + 1));
      if ( !dest )
        goto LABEL_46;
      n[0] = 0;
      qfree(dest);
      v38 = *(void ***)a1;
      sub_720F20(*(_QWORD *)a1);
      if ( !v39 )
        goto LABEL_58;
    }
    if ( memchr((char *)dest + 3, 0, v42) )
    {
      v47 = v42 - 1;
    }
    else
    {
      v46 = sub_78F220(&v158, v45, v42, 513);
      v47 = v42 - 1;
      v48 = v47;
      if ( v46 != -1 )
      {
LABEL_53:
        v49 = &v159;
        goto LABEL_54;
      }
    }
    v139.m128i_i64[1] = v47;
    if ( memchr(v45, 0, v47)
      || (v93 = sub_78F220(&v158, v45, v139.m128i_i64[1], 513), v48 = v139.m128i_i64[1], v93 == -1) )
    {
      v151 = 0;
      v150 = nullptr;
      v38 = &v150;
      v94 = (__m128i *)qvector_reserve(&v150, 0, 50, 1);
      v150 = v94;
      v151.m128i_i64[0] = 50;
      *v94 = _mm_load_si128((const __m128i *)&xmmword_23843D0);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23843F0);
      v94[3].m128i_i8[0] = 103;
      v94[1] = si128;
      v94[2] = _mm_load_si128((const __m128i *)&xmmword_2384400);
      v96 = v150;
      *((_BYTE *)v150 + 49) = 0;
      v97 = a3[1];
      v35 = *a3;
      v98 = a3[2];
      v40 = v97 + 1;
      if ( (unsigned __int64)&v150 >= *a3 )
      {
        v38 = (void **)(v35 + 24 * v98);
        if ( &v150 < v38 )
        {
          v99 = _mm_loadl_epi64(&v151);
          v100 = v151.m128i_i64[1];
          v150 = nullptr;
          v151 = 0;
          if ( v98 < v40 )
          {
            v139.m128i_i64[0] = v99.m128i_i64[0];
            v137 = qvector_reserve(a3, v35, v40, 24);
            *a3 = v137;
            v35 = v137;
            v99 = _mm_loadl_epi64(&v139);
            v97 = a3[1];
          }
          v101 = v35 + 24 * v97;
          *(_QWORD *)v101 = v96;
          *(__m128i *)(v101 + 8) = _mm_unpacklo_epi64(v99, (__m128i)(unsigned __int64)v100);
          v38 = (void **)v150;
          ++a3[1];
          if ( v38 )
            goto LABEL_121;
          goto LABEL_122;
        }
      }
      if ( v98 < v40 )
      {
LABEL_162:
        v38 = (void **)a3;
        v134 = qvector_reserve(a3, v35, v40, 24);
        *a3 = v134;
        v35 = v134;
        v96 = v150;
        v97 = a3[1];
      }
LABEL_160:
      v133 = v35 + 24 * v97;
      *(_QWORD *)v133 = v96;
      *(__m128i *)(v133 + 8) = _mm_loadu_si128(&v151);
      ++a3[1];
      goto LABEL_122;
    }
    goto LABEL_53;
  }
LABEL_58:
  v50 = (char *)v144;
  v51 = (char *)v144 + 24 * v145;
  if ( v51 != v144 )
  {
    do
    {
      while ( 1 )
      {
        v52 = *(_QWORD *)a1;
        v53 = *(_QWORD *)v50;
        if ( *(_BYTE *)(*(_QWORD *)a1 + 5988LL) )
        {
          if ( (unsigned __int8)must_journal(v38, v35, v40) )
            break;
        }
        v35 = v53 + 1;
        v38 = (void **)v52;
        sub_71A170(v52, (_WORD *)(v53 + 1), 0);
LABEL_61:
        v50 += 24;
        if ( v51 == v50 )
          goto LABEL_68;
      }
      v35 = v53 + 1;
      v150 = nullptr;
      v151 = 0;
      if ( (unsigned __int8)sub_71A170(v52, (_WORD *)(v53 + 1), (__int64)&v150) )
      {
        v35 = (__int64)v150;
        add_undo_record(1, v150, v151.m128i_i64[0]);
      }
      v38 = (void **)v150;
      if ( !v150 )
        goto LABEL_61;
      v151.m128i_i64[0] = 0;
      v50 += 24;
      qfree(v150);
    }
    while ( v51 != v50 );
  }
LABEL_68:
  v54 = v142;
  v55 = a3[1];
  if ( !(unsigned __int8)sub_7987E0(a1, a3, (unsigned int *)v140.m128i_i64[1], v142) )
  {
    v56 = v55;
    v55 = (int)v55;
    if ( (int)v55 < (unsigned __int64)a3[1] )
    {
      while ( 1 )
      {
        v62 = (__int64 *)(*a3 + 24 * v55);
        v63 = v62[1];
        v64 = v62[2];
        v65 = *v62;
        if ( v63 )
          break;
        if ( v64 <= 0x18 )
        {
          v57 = 0;
          v59 = 25;
          v58 = 24;
LABEL_110:
          v140.m128i_i64[0] = v57;
          v139.m128i_i64[1] = v58;
          v139.m128i_i64[0] = v59;
          v92 = qvector_reserve(v62, v65, v59, 1);
          *v62 = v92;
          v57 = v140.m128i_i64[0];
          v65 = v92;
          v58 = v139.m128i_i64[1];
          v59 = v139.m128i_i64[0];
LABEL_72:
          v62[1] = v59;
          *(_BYTE *)(v65 + v58) = 0;
          if ( v57 )
            memmove((void *)(*v62 + 24), (const void *)*v62, v57);
          goto LABEL_74;
        }
        v62[1] = 25;
        *(_BYTE *)(v65 + 24) = 0;
LABEL_74:
        v60 = (__m128i *)*v62;
        v61 = _mm_load_si128((const __m128i *)&xmmword_23843D0);
        v55 = ++v56;
        v60[1].m128i_i64[0] = 0x202D206465747075LL;
        *v60 = v61;
        if ( v56 >= (unsigned __int64)a3[1] )
          goto LABEL_94;
      }
      v57 = v63 - 1;
      v58 = v63 + 23;
      v59 = v63 + 24;
      if ( v64 < v59 )
        goto LABEL_110;
      goto LABEL_72;
    }
  }
LABEL_94:
  if ( v140.m128i_i64[1] )
  {
    v83 = *(_DWORD *)v140.m128i_i64[1];
    LODWORD(v150) = *(_DWORD *)v140.m128i_i64[1];
    do
    {
      sub_798CE0(a1, a2, a3, v83, v54);
      if ( !(unsigned __int8)sub_7962E0(a1, (unsigned int *)&v150) )
        break;
      v83 = (unsigned int)v150;
    }
    while ( (unsigned int)v150 < *(_DWORD *)(v140.m128i_i64[1] + 4) );
  }
  v84 = *((_DWORD *)a3 + 2);
  if ( ptr )
  {
    *(_QWORD *)&v147 = 0;
    qfree(ptr);
  }
  v85 = (char *)v144;
  if ( v144 )
  {
    v86 = v145;
    if ( (_QWORD)v145 )
    {
      v87 = 0;
      do
      {
        v88 = &v85[24 * v87];
        v89 = *(void **)v88;
        if ( *(_QWORD *)v88 )
        {
          *((_QWORD *)v88 + 1) = 0;
          qfree(v89);
          v85 = (char *)v144;
        }
        ++v87;
      }
      while ( v86 != v87 );
    }
    *(_QWORD *)&v145 = 0;
    qfree(v85);
  }
  sub_797270(v154);
  return v84;
}

