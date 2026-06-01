unsigned __int64 __fastcall sub_2A4DC0(__int64 a1, __int64 a2, _QWORD *a3, __int32 a4, double a5)
{
  __int64 v6; // rbp
  unsigned int *v7; // r12
  unsigned int *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r15
  char *v11; // rdx
  __m128i *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  signed int v15; // r14d
  signed int v16; // r13d
  __m128i v17; // xmm0
  __m128i v18; // xmm2
  __m128i v19; // xmm1
  __int64 v20; // rax
  __int64 v21; // r15
  char *v22; // rdx
  __m128i *v23; // rax
  __m128i *v24; // r14
  __int64 v25; // r13
  __m128i *v26; // r12
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  const __m128i *v29; // r13
  __m128i *v30; // r14
  __int64 v31; // r13
  __m128i *v32; // r12
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  const __m128i *v35; // r13
  const __m128i *v36; // rbp
  void *v37; // rdi
  const __m128i *v38; // rbp
  __int64 v39; // r14
  __int64 v40; // rdx
  unsigned __int64 v41; // r15
  int v42; // r13d
  __int64 v43; // r12
  __int64 v44; // r15
  __int64 i; // r12
  __int64 v46; // rax
  int *v47; // rdx
  __int64 v48; // rax
  __int64 (__fastcall *v49)(__int64, __int64); // rax
  __int64 v50; // rax
  int v51; // ecx
  __int64 v52; // rdx
  _QWORD *v53; // rdi
  __int64 v54; // rdi
  __int64 j; // r13
  __int64 v56; // r12
  _QWORD *v57; // rbp
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rbp
  void *v63; // rdi
  __int64 v64; // rsi
  __int64 (__fastcall *v65)(__int64, __int64); // rax
  _QWORD *v66; // r15
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // r10
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  int v73; // r12d
  __int64 v74; // rdx
  __int64 (__fastcall *v75)(__int64); // rax
  signed int v76; // eax
  __int64 v77; // rax
  __int64 (__fastcall *v78)(__int64, unsigned int); // rcx
  signed int v79; // ebp
  __int64 v80; // rax
  __int64 v81; // rcx
  char *v82; // rdx
  const __m128i *v83; // rdi
  __m128i v84; // xmm0
  __m128i v85; // xmm2
  __m128i v86; // xmm1
  __m128i v87; // xmm7
  __m128i v88; // xmm2
  bool v89; // cf
  __int64 v90; // rax
  const __m128i *v91; // rdi
  char *v92; // rdx
  __int64 v93; // rcx
  __m128i v94; // xmm0
  __m128i v95; // xmm2
  __m128i v96; // xmm1
  __m128i v97; // xmm7
  __m128i v98; // xmm2
  __int64 k; // rbp
  __int64 v100; // r12
  void *v101; // rdi
  __int64 v103; // rdx
  __int64 v104; // rbp
  __int64 v105; // r12
  void *v106; // rdi
  unsigned int v107; // [rsp+8h] [rbp-120h]
  __int64 v108; // [rsp+8h] [rbp-120h]
  __int64 v109; // [rsp+8h] [rbp-120h]
  int v110; // [rsp+10h] [rbp-118h]
  unsigned int v111; // [rsp+10h] [rbp-118h]
  unsigned int v112; // [rsp+10h] [rbp-118h]
  char *v113; // [rsp+10h] [rbp-118h]
  char *v114; // [rsp+10h] [rbp-118h]
  bool v115; // [rsp+18h] [rbp-110h]
  __int64 v116; // [rsp+18h] [rbp-110h]
  unsigned int v117; // [rsp+18h] [rbp-110h]
  unsigned int v118; // [rsp+18h] [rbp-110h]
  _QWORD *v119; // [rsp+28h] [rbp-100h]
  unsigned __int64 v120; // [rsp+30h] [rbp-F8h]
  int v121; // [rsp+38h] [rbp-F0h]
  int v122; // [rsp+38h] [rbp-F0h]
  int *v123; // [rsp+38h] [rbp-F0h]
  int v126; // [rsp+4Ch] [rbp-DCh]
  void *src; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v128; // [rsp+58h] [rbp-D0h]
  void *v129; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v130; // [rsp+78h] [rbp-B0h]
  __int64 v131; // [rsp+90h] [rbp-98h] BYREF
  __int128 v132; // [rsp+98h] [rbp-90h]
  __int64 (__fastcall **v133)(); // [rsp+B0h] [rbp-78h] BYREF
  int v134; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD *v135; // [rsp+C0h] [rbp-68h]
  int *v136; // [rsp+C8h] [rbp-60h]
  int *v137; // [rsp+D0h] [rbp-58h]
  __int64 v138; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v139; // [rsp+E8h] [rbp-40h]

  v119 = (_QWORD *)a2;
  v139 = __readfsqword(0x28u);
  v120 = (unsigned int)*(_QWORD *)(a2 + 8) - 1;
  if ( (v120 & 0x80000000) != 0LL )
    goto LABEL_98;
LABEL_4:
  while ( 2 )
  {
    v6 = *a3 + 48 * v120;
    if ( *(_QWORD *)(v6 + 40) )
    {
      v7 = *(unsigned int **)(v6 + 24);
      v8 = (unsigned int *)(v6 + 8);
      src = nullptr;
      v129 = nullptr;
      v128 = 0;
      v130 = 0;
      if ( v7 == v8 )
        goto LABEL_26;
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = v7[11];
          v16 = v7[12];
          if ( v15 != v16 )
            break;
LABEL_10:
          v7 = (unsigned int *)std::_Rb_tree_increment(v7);
          if ( v7 == v8 )
            goto LABEL_16;
        }
        v17 = _mm_cvtsi32_si128(v7[8]);
        v18 = _mm_cvtsi32_si128(v7[9]);
        v19 = _mm_cvtsi32_si128(v7[10]);
        if ( v15 < v16 )
        {
          v10 = *((_QWORD *)&v128 + 1);
          v9 = v128;
          if ( *((_QWORD *)&v128 + 1) < (unsigned __int64)(v128 + 1) )
          {
            v80 = qvector_reserve(&src, 0, v128 + 1, 20);
            v81 = *((_QWORD *)&v128 + 1);
            v82 = (char *)v80;
            *((_QWORD *)&v128 + 1) = v10;
            v83 = (const __m128i *)src;
            v84 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v17));
            a2 = v128 - 1;
            v85 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v18));
            v86 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v19));
            if ( (__int64)v128 - 1 >= 0 )
            {
              v87 = v85;
              do
              {
                v88 = _mm_loadu_si128(v83);
                v80 += 20;
                v83 = (const __m128i *)((char *)v83 + 20);
                *(__m128i *)(v80 - 20) = v88;
                *(_DWORD *)(v80 - 4) = v83[-1].m128i_i32[3];
                v89 = a2-- == 0;
              }
              while ( !v89 );
              v83 = (const __m128i *)src;
              v85 = v87;
            }
            v113 = v82;
            v108 = v81;
            v117 = _mm_cvtsi128_si32(v84);
            qfree(v83, (const char *)a2);
            v11 = v113;
            v9 = v128;
            v19 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v86));
            src = v113;
            v18 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v85));
            *((_QWORD *)&v128 + 1) = v108;
            v17 = _mm_cvtsi32_si128(v117);
          }
          else
          {
            v11 = (char *)src;
          }
          v12 = (__m128i *)&v11[20 * v9];
          v12[1].m128i_i32[0] = v16;
          *v12 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v17, v18), _mm_unpacklo_epi32(v19, _mm_cvtsi32_si128(v15)));
          *(_QWORD *)&v128 = v128 + 1;
          goto LABEL_10;
        }
        v21 = *((_QWORD *)&v130 + 1);
        v20 = v130;
        if ( *((_QWORD *)&v130 + 1) < (unsigned __int64)(v130 + 1) )
        {
          v90 = qvector_reserve(&v129, 0, v130 + 1, 20);
          v91 = (const __m128i *)v129;
          v92 = (char *)v90;
          v93 = *((_QWORD *)&v130 + 1);
          v94 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v17));
          *((_QWORD *)&v130 + 1) = v21;
          a2 = v130 - 1;
          v95 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v18));
          v96 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v19));
          if ( (__int64)v130 - 1 >= 0 )
          {
            v97 = v95;
            do
            {
              v98 = _mm_loadu_si128(v91);
              v90 += 20;
              v91 = (const __m128i *)((char *)v91 + 20);
              *(__m128i *)(v90 - 20) = v98;
              *(_DWORD *)(v90 - 4) = v91[-1].m128i_i32[3];
              v89 = a2-- == 0;
            }
            while ( !v89 );
            v91 = (const __m128i *)v129;
            v95 = v97;
          }
          v114 = v92;
          v109 = v93;
          v118 = _mm_cvtsi128_si32(v94);
          qfree(v91, (const char *)a2);
          v22 = v114;
          v20 = v130;
          v19 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v96));
          v129 = v114;
          v18 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v95));
          *((_QWORD *)&v130 + 1) = v109;
          v17 = _mm_cvtsi32_si128(v118);
        }
        else
        {
          v22 = (char *)v129;
        }
        v23 = (__m128i *)&v22[20 * v20];
        v23[1].m128i_i32[0] = v16;
        *v23 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v17, v18), _mm_unpacklo_epi32(v19, _mm_cvtsi32_si128(v15)));
        *(_QWORD *)&v130 = v130 + 1;
        v7 = (unsigned int *)std::_Rb_tree_increment(v7);
        if ( v7 == v8 )
        {
LABEL_16:
          v24 = (__m128i *)src;
          v25 = 20 * v128;
          v26 = (__m128i *)((char *)src + 20 * v128);
          if ( v26 == src )
            goto LABEL_21;
          v27 = 0xCCCCCCCCCCCCCCCDLL * (v25 >> 2);
          if ( !v27 )
          {
            sub_2A4B10((__int64)src, (__m128i *)((char *)src + 20 * v128), -2, sub_290640, v13, v14);
LABEL_106:
            a2 = (__int64)v26;
            sub_2A2590(v24, v26, (__int64 (__fastcall *)(__m128i *, char *))sub_290640);
            goto LABEL_21;
          }
          _BitScanReverse64(&v28, v27);
          sub_2A4B10((__int64)src, (__m128i *)((char *)src + 20 * v128), 2LL * (int)v28, sub_290640, v13, v14);
          if ( v25 <= 320 )
            goto LABEL_106;
          v29 = v24 + 20;
          sub_2A2590(v24, v24 + 20, (__int64 (__fastcall *)(__m128i *, char *))sub_290640);
          do
          {
            a2 = (__int64)sub_290640;
            sub_2A2500(v29, (__int64 (__fastcall *)(__m128i *, char *))sub_290640);
            v29 = (const __m128i *)((char *)v29 + 20);
          }
          while ( v26 != v29 );
LABEL_21:
          v30 = (__m128i *)v129;
          v31 = 20 * v130;
          v32 = (__m128i *)((char *)v129 + 20 * v130);
          if ( v129 != v32 )
          {
            v33 = 0xCCCCCCCCCCCCCCCDLL * (v31 >> 2);
            if ( v33 )
            {
              _BitScanReverse64(&v34, v33);
              sub_2A4B10((__int64)v129, (__m128i *)((char *)v129 + 20 * v130), 2LL * (int)v34, sub_290640, v13, v14);
              if ( v31 > 320 )
              {
                v35 = v30 + 20;
                sub_2A2590(v30, v30 + 20, (__int64 (__fastcall *)(__m128i *, char *))sub_290640);
                do
                {
                  a2 = (__int64)sub_290640;
                  sub_2A2500(v35, (__int64 (__fastcall *)(__m128i *, char *))sub_290640);
                  v35 = (const __m128i *)((char *)v35 + 20);
                }
                while ( v35 != v32 );
                goto LABEL_26;
              }
            }
            else
            {
              sub_2A4B10((__int64)v129, (__m128i *)((char *)v129 + 20 * v130), -2, sub_290640, v13, v14);
            }
            a2 = (__int64)v32;
            sub_2A2590(v30, v32, (__int64 (__fastcall *)(__m128i *, char *))sub_290640);
          }
LABEL_26:
          a5 = 0.0;
          v36 = (const __m128i *)src;
          v131 = 0;
          v132 = 0;
          if ( !(20LL * (_QWORD)v128) )
          {
            v37 = v129;
            v38 = (const __m128i *)v129;
            if ( 20LL * (_QWORD)v130 )
              goto LABEL_29;
            goto LABEL_116;
          }
          do
          {
            a2 = (__int64)v36;
            sub_29FCE0(&v131, v36, a4);
            v36 = (const __m128i *)((char *)v36 + 20);
          }
          while ( v36 != (const __m128i *)((char *)src + 20 * (_QWORD)v128) );
          v37 = v129;
          v38 = (const __m128i *)v129;
          if ( 20LL * (_QWORD)v130 )
          {
            do
            {
LABEL_29:
              a2 = (__int64)v38;
              sub_29FCE0(&v131, v38, a4);
              v37 = v129;
              v38 = (const __m128i *)((char *)v38 + 20);
            }
            while ( v38 != (const __m128i *)((char *)v129 + 20 * (_QWORD)v130) );
          }
          v39 = v132;
          if ( !(_DWORD)v132 )
          {
            v103 = v131;
            if ( v131 )
            {
              if ( (_QWORD)v132 )
              {
                v104 = 0;
                do
                {
                  v105 = *(_QWORD *)(v103 + 48 * v104 + 16);
                  if ( v105 )
                  {
                    do
                    {
                      sub_290E80(*(_QWORD **)(v105 + 24));
                      v106 = (void *)v105;
                      v105 = *(_QWORD *)(v105 + 16);
                      a2 = 56;
                      operator delete(v106, 0x38u);
                    }
                    while ( v105 );
                    v103 = v131;
                  }
                  ++v104;
                }
                while ( v39 != v104 );
              }
              *(_QWORD *)&v132 = 0;
              a5 = qfree(v103, (const char *)a2);
              v37 = v129;
            }
LABEL_116:
            if ( v37 )
            {
              *(_QWORD *)&v130 = 0;
              a5 = qfree(v37, (const char *)a2);
            }
            if ( src )
            {
              *(_QWORD *)&v128 = 0;
              a5 = qfree(src, (const char *)a2);
            }
            break;
          }
          v40 = (unsigned int)(10 % ((int)v132 + 1));
          v121 = 10 / ((int)v132 + 1);
          if ( v121 <= 3 )
          {
            v134 = 0;
            v41 = v120;
            v42 = 4 * v132 - 6;
            v136 = &v134;
            v137 = &v134;
            v135 = nullptr;
            v138 = 0;
            if ( v120 >= v119[1] )
            {
              v53 = nullptr;
            }
            else
            {
              v110 = v120;
              do
              {
                if ( v110 != (_DWORD)v120 )
                {
                  *(_DWORD *)(32 * v41 + *v119 + 24) += v42;
                  *(_DWORD *)(32 * v41 + *v119 + 28) += v42;
                  v72 = (_QWORD *)(32 * v41 + *v119);
                  if ( v72[1] )
                  {
                    v73 = 0;
                    v74 = 0;
                    do
                    {
                      a2 = *(_QWORD *)a1;
                      v78 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
                      v79 = *(_DWORD *)(*v72 + 4 * v74);
                      if ( v78 == interactive_graph_t__::vfunc_19 )
                      {
                        v75 = *(__int64 (__fastcall **)(__int64))(a2 + 56);
                        if ( v75 == interactive_graph_t__::vfunc_7 )
                          v76 = *(_DWORD *)(a1 + 184);
                        else
                          v76 = v75(a1);
                        if ( v79 >= v76 )
                          sub_16B930((__int64)"nrect(%d) failed", v79);
                        v77 = *(_QWORD *)(a1 + 224) + 16LL * v79;
                      }
                      else
                      {
                        a2 = (unsigned int)v79;
                        v77 = v78(a1, v79);
                      }
                      *(_DWORD *)(v77 + 4) += v42;
                      ++v73;
                      *(_DWORD *)(v77 + 12) += v42;
                      v74 = v73;
                      v72 = (_QWORD *)(32 * v41 + *v119);
                    }
                    while ( (unsigned __int64)v73 < v72[1] );
                  }
                }
                v43 = *a3 + 48 * v41;
                v44 = *(_QWORD *)(v43 + 24);
                for ( i = v43 + 8; v44 != i; v44 = std::_Rb_tree_increment(v44) )
                {
                  while ( 1 )
                  {
                    a2 = v44 + 32;
                    if ( &v134 == (int *)sub_29DC10((__int64)&v133, (int *)(v44 + 32)) )
                    {
                      v122 = *(_DWORD *)(v44 + 32);
                      v126 = *(_DWORD *)(v44 + 36);
                      v46 = sub_28FC60((__int64)&v133, v122, v126);
                      if ( v47 )
                      {
                        v115 = v47 == &v134 || v46 != 0;
                        if ( !v115 )
                        {
                          if ( v122 < v47[8] )
                          {
                            v115 = 1;
                          }
                          else if ( v122 == v47[8] )
                          {
                            v115 = v126 < v47[9];
                          }
                        }
                        v123 = v47;
                        v48 = operator new(0x28u);
                        *(_QWORD *)(v48 + 32) = *(_QWORD *)(v44 + 32);
                        std::_Rb_tree_insert_and_rebalance(v115, v48, v123, &v134);
                        ++v138;
                      }
                      a2 = *(_QWORD *)(v44 + 32);
                      v49 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL);
                      v50 = v49 == interactive_graph_t__::vfunc_20
                          ? interactive_graph_t__::vfunc_20(a1, a2)
                          : v49(a1, a2);
                      if ( *(_QWORD *)(v50 + 24) )
                        break;
                    }
                    v44 = std::_Rb_tree_increment(v44);
                    if ( v44 == i )
                      goto LABEL_48;
                  }
                  v51 = 0;
                  v52 = 0;
                  do
                  {
                    a2 = *(_QWORD *)(v50 + 16);
                    ++v51;
                    *(_DWORD *)(a2 + 8 * v52 + 4) += v42;
                    v52 = v51;
                  }
                  while ( (unsigned __int64)v51 < *(_QWORD *)(v50 + 24) );
                }
LABEL_48:
                v41 = ++v110;
              }
              while ( (unsigned __int64)v110 < v119[1] );
              v53 = v135;
            }
            sub_291410(v53);
            v121 = 4;
            v39 = v132;
          }
          v54 = v131;
          v107 = v121 + *(_DWORD *)(*v119 + 32 * v120 + 28) + 10;
          if ( 48 * v39 )
          {
            for ( j = v131 + 8; ; j += 48 )
            {
              v56 = *(_QWORD *)(j + 16);
              if ( v56 != j )
              {
                do
                {
                  v64 = *(_QWORD *)(v56 + 32);
                  v65 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL);
                  if ( v65 == interactive_graph_t__::vfunc_20 )
                    v66 = (_QWORD *)interactive_graph_t__::vfunc_20(a1, v64);
                  else
                    v66 = (_QWORD *)((__int64 (__fastcall *)(__int64, __int64, __int64))v65)(a1, v64, v40);
                  v67 = v66[3];
                  v68 = v66[2];
                  v112 = *(_DWORD *)(v56 + 48);
                  v69 = 8LL * *(int *)(v56 + 40);
                  if ( v66[4] < (unsigned __int64)(v67 + 1) )
                  {
                    v116 = 8LL * *(int *)(v56 + 40);
                    v70 = qvector_reserve(v66 + 2, v68, v67 + 1, 8);
                    v67 = v66[3];
                    v69 = v116;
                    v66[2] = v70;
                    v68 = v70;
                  }
                  v57 = (_QWORD *)(v68 + v69);
                  memmove(v57 + 1, v57, 8 * v67 - v69);
                  *v57 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v112), _mm_cvtsi32_si128(v107)).m128i_u64[0];
                  v58 = v66[3];
                  v59 = v66[2];
                  v60 = v58 + 1;
                  v61 = v58 + 2;
                  v66[3] = v60;
                  v111 = *(_DWORD *)(v56 + 44);
                  v62 = 8LL * *(int *)(v56 + 40);
                  if ( v66[4] < v61 )
                  {
                    v71 = qvector_reserve(v66 + 2, v59, v61, 8);
                    v66[2] = v71;
                    v59 = v71;
                    v60 = v66[3];
                  }
                  v63 = (void *)(v59 + v62 + 8);
                  a2 = v59 + v62;
                  memmove(v63, (const void *)a2, 8 * v60 - v62);
                  *(_QWORD *)&a5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v111), _mm_cvtsi32_si128(v107)).m128i_u64[0];
                  *(double *)a2 = a5;
                  ++v66[3];
                  v56 = std::_Rb_tree_increment(v56);
                }
                while ( v56 != j );
                v39 = v132;
                v54 = v131;
              }
              v40 = j + 48;
              v107 += v121;
              if ( v54 + 48 * v39 == j + 40 )
                break;
            }
          }
          if ( v54 )
          {
            if ( v39 )
            {
              for ( k = 0; k != v39; ++k )
              {
                v100 = *(_QWORD *)(v54 + 48 * k + 16);
                if ( v100 )
                {
                  do
                  {
                    sub_290E80(*(_QWORD **)(v100 + 24));
                    v101 = (void *)v100;
                    v100 = *(_QWORD *)(v100 + 16);
                    a2 = 56;
                    operator delete(v101, 0x38u);
                  }
                  while ( v100 );
                  v54 = v131;
                }
              }
            }
            *(_QWORD *)&v132 = 0;
            a5 = qfree(v54, (const char *)a2, v40);
          }
          if ( v129 )
          {
            *(_QWORD *)&v130 = 0;
            a5 = qfree(v129, (const char *)a2, v40);
          }
          if ( !src )
            break;
          *(_QWORD *)&v128 = 0;
          a5 = qfree(src, (const char *)a2, v40);
          if ( (_DWORD)--v120 == -1 )
            goto LABEL_98;
          goto LABEL_4;
        }
      }
    }
    if ( (_DWORD)--v120 != -1 )
      continue;
    break;
  }
LABEL_98:
  v133 = remove_superfluous_points;
  sub_298EA0(a1, &v133, 0, a5);
  *(_BYTE *)(a1 + 32) = 1;
  return v139 - __readfsqword(0x28u);
}
