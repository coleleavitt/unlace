__int64 __fastcall sub_10018B0(__int64 a1, __int64 a2, unsigned __int64 a3, __m128i a4)
{
  __int64 v6; // r12
  bool v8; // zf
  unsigned __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // r15
  int v12; // esi
  unsigned int v13; // edx
  _QWORD *v14; // rdi
  __int64 v15; // rsi
  _QWORD *i; // rsi
  __int64 v17; // r8
  __m128i *v18; // rbp
  __int64 v19; // r15
  __int64 v20; // r12
  unsigned __int8 *v21; // r15
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r12
  __m128i *v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int8 *v29; // rax
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int8 *v33; // rax
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int8 *v37; // rax
  __int64 v38; // r14
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rdx
  int v44; // eax
  unsigned __int8 *v45; // r13
  __int64 v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rdx
  void *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rdx
  void *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rdx
  void *v65; // rdi
  __m128i *v66; // r15
  __int64 v67; // rbp
  __int64 v68; // r9
  __int64 v69; // rdx
  __m128i *v70; // r12
  unsigned __int64 v71; // rax
  __int64 v72; // r9
  unsigned __int64 v73; // rsi
  __m128i *v74; // rdx
  __m128i *v75; // rax
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rdi
  __int64 v78; // rcx
  __m128i v79; // xmm6
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rcx
  __m128i *v83; // rax
  __int64 v84; // rcx
  __m128i v85; // xmm1
  __int32 v86; // edi
  __int64 v87; // rcx
  unsigned __int64 v88; // rsi
  const __m128i *v89; // rsi
  unsigned __int64 v90; // rax
  const __m128i *v91; // r11
  __m128i v92; // xmm5
  __m128i *v93; // rax
  __int64 v94; // rsi
  unsigned __int32 v95; // edi
  unsigned __int64 v96; // rdx
  __int64 v97; // rcx
  __m128i v98; // xmm2
  __int64 v99; // rcx
  unsigned __int64 v100; // rdi
  __int64 v101; // rcx
  __m128i v102; // xmm6
  __int64 v103; // rsi
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rdi
  __int64 v107; // rdx
  int v108; // eax
  __int64 v109; // rax
  __m128i v110; // xmm7
  __int64 v111; // rax
  __m128i v112; // xmm7
  __int32 v113; // edi
  __int32 v114; // esi
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  void *v121; // rdi
  __int64 v122; // rdx
  int v123; // eax
  __int64 v124; // rax
  __int64 v125; // r15
  __int64 v126; // rdx
  __int64 v127; // r15
  void *v128; // rdi
  unsigned int v129; // eax
  __int64 v130; // rax
  _QWORD *v131; // rax
  unsigned __int64 v132; // rdx
  __int64 v133; // rax
  __m128i v134; // xmm7
  __int64 v135; // rdx
  __int64 v136; // rax
  __int64 v137; // rbp
  int v138; // r15d
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  _QWORD *v143; // rax
  _QWORD *j; // rdx
  unsigned int v145; // edx
  unsigned __int64 v146; // rax
  __int64 v147; // [rsp+8h] [rbp-120h]
  __int64 v148; // [rsp+8h] [rbp-120h]
  unsigned __int8 *v149; // [rsp+8h] [rbp-120h]
  unsigned __int8 *v150; // [rsp+8h] [rbp-120h]
  unsigned int v151; // [rsp+8h] [rbp-120h]
  __int64 v152; // [rsp+8h] [rbp-120h]
  __int64 v153; // [rsp+8h] [rbp-120h]
  unsigned __int8 *v154; // [rsp+10h] [rbp-118h]
  __int64 v155; // [rsp+10h] [rbp-118h]
  __int64 v156; // [rsp+10h] [rbp-118h]
  __int64 v157; // [rsp+18h] [rbp-110h]
  __int64 v158; // [rsp+38h] [rbp-F0h] BYREF
  void *ptr; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v160; // [rsp+48h] [rbp-E0h]
  _QWORD v161[4]; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD *v162; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v163; // [rsp+78h] [rbp-B0h]
  unsigned int v164; // [rsp+80h] [rbp-A8h]
  void *src; // [rsp+88h] [rbp-A0h]
  __int64 v166; // [rsp+90h] [rbp-98h]
  char v167; // [rsp+98h] [rbp-90h] BYREF
  __m128i v168; // [rsp+A0h] [rbp-88h] BYREF
  __m128i v169; // [rsp+B0h] [rbp-78h]

  v6 = 0;
  v8 = *(_QWORD *)(a1 + 264) == 0;
  v9 = (unsigned __int64)&v162;
  v161[0] = a1;
  src = &v167;
  v162 = nullptr;
  v163 = 0;
  v164 = 0;
  v166 = 0;
  v158 = 0;
  v161[1] = &v162;
  v161[2] = &v158;
  if ( v8 )
  {
    if ( !*(_DWORD *)(a1 + 192) )
      goto LABEL_14;
    goto LABEL_4;
  }
  do
  {
    v10 = -2 - v6++;
    sub_10015B0((__int64)v161, v10);
  }
  while ( v6 != *(_QWORD *)(a1 + 264) );
  v9 = *(unsigned int *)(a1 + 192);
  if ( (_DWORD)v9 )
  {
LABEL_4:
    v11 = 0;
    do
    {
      v12 = v11++;
      sub_10015B0((__int64)v161, v12);
    }
    while ( v11 != *(_DWORD *)(a1 + 192) );
  }
  if ( !(_DWORD)v163 )
  {
    if ( !HIDWORD(v163) )
      goto LABEL_14;
    v14 = v162;
    v15 = 2LL * v164;
    if ( v164 > 0x40 )
    {
      operator delete();
      v162 = nullptr;
      v163 = 0;
      v164 = 0;
      goto LABEL_14;
    }
    goto LABEL_11;
  }
  v13 = 4 * v163;
  v14 = v162;
  if ( (unsigned int)(4 * v163) < 0x40 )
    v13 = 64;
  if ( v164 <= v13 )
  {
    v15 = 2LL * v164;
LABEL_11:
    for ( i = &v14[v15]; i != v14; v14 += 2 )
      *v14 = -4096;
    v163 = 0;
    goto LABEL_14;
  }
  if ( (_DWORD)v163 == 1 )
  {
    v137 = 2048;
    v138 = 128;
  }
  else
  {
    _BitScanReverse(&v129, v163 - 1);
    v9 = 33 - (v129 ^ 0x1F);
    v130 = (unsigned int)(1 << (33 - (v129 ^ 0x1F)));
    if ( (int)v130 < 64 )
      v130 = 64;
    if ( (_DWORD)v130 == v164 )
    {
      v163 = 0;
      v131 = &v162[2 * v130];
      do
      {
        *v14 = -4096;
        v14 += 2;
      }
      while ( v131 != v14 );
      goto LABEL_14;
    }
    v145 = 4 * (int)v130 / 3u;
    v146 = (((v145 + 1) | ((unsigned __int64)(v145 + 1) >> 1) | (((v145 + 1) | ((unsigned __int64)(v145 + 1) >> 1)) >> 2)) >> 4)
         | (v145 + 1)
         | ((unsigned __int64)(v145 + 1) >> 1)
         | (((v145 + 1) | ((unsigned __int64)(v145 + 1) >> 1)) >> 2)
         | (((((v145 + 1)
             | ((unsigned __int64)(v145 + 1) >> 1)
             | (((v145 + 1) | ((unsigned __int64)(v145 + 1) >> 1)) >> 2)) >> 4)
           | (v145 + 1)
           | ((unsigned __int64)(v145 + 1) >> 1)
           | (((v145 + 1) | ((unsigned __int64)(v145 + 1) >> 1)) >> 2)) >> 8);
    v138 = (v146 | (v146 >> 16)) + 1;
    v137 = 16 * ((v146 | (v146 >> 16)) + 1);
  }
  operator delete();
  v164 = v138;
  v143 = (_QWORD *)sub_220C370(v137, 8, v139, v140, v141, v142);
  v163 = 0;
  v9 = -4096;
  v162 = v143;
  for ( j = &v143[2 * v164]; j != v143; v143 += 2 )
    *v143 = -4096;
LABEL_14:
  v17 = (unsigned int)v166;
  v160 = 0;
  v18 = (__m128i *)v161;
  ptr = v161;
  if ( !(_DWORD)v166 )
    goto LABEL_15;
  v66 = (__m128i *)src;
  v67 = (unsigned int)v166;
  v68 = HIDWORD(a3);
  if ( src == &v167 )
  {
    v151 = v166;
    sub_22134E0(&ptr, v161, (unsigned int)v166, 32);
    v66 = (__m128i *)ptr;
    v17 = v151;
    v68 = HIDWORD(a3);
    if ( 32LL * (unsigned int)v166 )
    {
      memcpy(ptr, src, 32LL * (unsigned int)v166);
      v66 = (__m128i *)ptr;
      v68 = HIDWORD(a3);
      v17 = v151;
    }
    LODWORD(v160) = v17;
    LODWORD(v166) = 0;
  }
  else
  {
    ptr = src;
    v160 = v166;
    src = &v167;
    v166 = 0;
  }
  v69 = 32 * v67;
  v18 = &v66[2 * v67];
  if ( (_BYTE)v68 )
  {
    if ( (unsigned int)a3 < (unsigned int)v17 )
    {
      v70 = &v66[2 * (unsigned int)a3];
      if ( v18 != v70 )
      {
        _BitScanReverse64(&v71, v69 >> 5);
        v72 = 2LL * (int)(63 - (v71 ^ 0x3F));
        while ( 1 )
        {
          if ( (char *)v18 - (char *)v66 <= 96 )
          {
            v89 = v18;
            v18 = v70;
            sub_FF9160(v66, v89);
            v66 = (__m128i *)ptr;
            break;
          }
          if ( !v72 )
          {
            v132 = (unsigned __int64)v18;
            v18 = v70;
            sub_FF8370((__int64)v66, (unsigned __int64)&v70[2], v132, a4, v9, v17, 0);
            v133 = v66->m128i_i64[0];
            v134 = _mm_loadu_si128((const __m128i *)&v70->m128i_u64[1]);
            v9 = v66->m128i_u64[1];
            v66->m128i_i64[0] = v70->m128i_i64[0];
            v135 = v66[1].m128i_i64[0];
            v70->m128i_i64[0] = v133;
            v136 = v66[1].m128i_i64[1];
            *(__m128i *)((char *)v66 + 8) = v134;
            v66[1].m128i_i64[1] = v70[1].m128i_i64[1];
            v66 = (__m128i *)ptr;
            v70->m128i_i64[1] = v9;
            v70[1].m128i_i64[0] = v135;
            v70[1].m128i_i64[1] = v136;
            break;
          }
          v73 = v66[3].m128i_u64[1];
          --v72;
          v74 = v66 + 2;
          v75 = &v66[2 * (((char *)v18 - (char *)v66) >> 6)];
          v76 = v75[1].m128i_u64[1];
          if ( v73 > v76 || v73 == v76 && v66[2].m128i_i32[2] < (unsigned __int32)v75->m128i_i32[2] )
          {
            v100 = v18[-1].m128i_u64[1];
            if ( v76 > v100 || v76 == v100 && v75->m128i_i32[2] < (unsigned __int32)v18[-2].m128i_i32[2] )
            {
LABEL_71:
              v78 = v66->m128i_i64[0];
              v79 = _mm_loadu_si128((const __m128i *)&v75->m128i_u64[1]);
              v80 = v66->m128i_i64[1];
              v66->m128i_i64[0] = v75->m128i_i64[0];
              v81 = v66[1].m128i_i64[0];
              v75->m128i_i64[0] = v78;
              v82 = v66[1].m128i_i64[1];
              *(__m128i *)((char *)v66 + 8) = v79;
              v17 = v75[1].m128i_i64[1];
              v66[1].m128i_i64[1] = v17;
              v75->m128i_i64[1] = v80;
              v75[1].m128i_i64[0] = v81;
              v75[1].m128i_i64[1] = v82;
              goto LABEL_72;
            }
            if ( v73 <= v100 && (v73 != v100 || v66[2].m128i_i32[2] >= (unsigned __int32)v18[-2].m128i_i32[2]) )
            {
              v101 = v66[2].m128i_i64[0];
              v102 = _mm_loadu_si128((__m128i *)((char *)v66 + 40));
              v103 = v66->m128i_i64[1];
              v66[2].m128i_i64[0] = v66->m128i_i64[0];
              v104 = v66[1].m128i_i64[1];
              v66->m128i_i64[0] = v101;
              v105 = v66[1].m128i_i64[0];
              *(__m128i *)((char *)v66 + 8) = v102;
LABEL_108:
              v106 = v66[3].m128i_i64[1];
              v66[2].m128i_i64[1] = v103;
              v66[3].m128i_i64[0] = v105;
              v66[1].m128i_i64[1] = v106;
              v66[3].m128i_i64[1] = v104;
              goto LABEL_72;
            }
          }
          else
          {
            v77 = v18[-1].m128i_u64[1];
            if ( v73 > v77 || v73 == v77 && v66[2].m128i_i32[2] < (unsigned __int32)v18[-2].m128i_i32[2] )
            {
              v109 = v66->m128i_i64[0];
              v110 = _mm_loadu_si128((__m128i *)((char *)v66 + 40));
              v103 = v66->m128i_i64[1];
              v66->m128i_i64[0] = v66[2].m128i_i64[0];
              v105 = v66[1].m128i_i64[0];
              v66[2].m128i_i64[0] = v109;
              v104 = v66[1].m128i_i64[1];
              *(__m128i *)((char *)v66 + 8) = v110;
              goto LABEL_108;
            }
            if ( v76 <= v77 && (v76 != v77 || v75->m128i_i32[2] >= (unsigned __int32)v18[-2].m128i_i32[2]) )
              goto LABEL_71;
          }
          v111 = v66->m128i_i64[0];
          v112 = _mm_loadu_si128((__m128i *)((char *)v18 - 24));
          v113 = v66->m128i_i32[2];
          v66->m128i_i64[0] = v18[-2].m128i_i64[0];
          v114 = v66->m128i_i32[3];
          v115 = v66[1].m128i_i64[0];
          v18[-2].m128i_i64[0] = v111;
          v116 = v66[1].m128i_i64[1];
          *(__m128i *)((char *)v66 + 8) = v112;
          v17 = v18[-1].m128i_i64[1];
          v66[1].m128i_i64[1] = v17;
          v18[-2].m128i_i32[2] = v113;
          v18[-2].m128i_i32[3] = v114;
          v18[-1].m128i_i64[0] = v115;
          v18[-1].m128i_i64[1] = v116;
LABEL_72:
          v9 = v66[1].m128i_u64[1];
          v83 = v18;
          while ( 1 )
          {
            v88 = v74[1].m128i_u64[1];
            if ( v88 <= v9 && (v88 != v9 || v74->m128i_i32[2] >= (unsigned __int32)v66->m128i_i32[2]) )
              break;
LABEL_77:
            v74 += 2;
          }
          do
          {
            do
              v83 -= 2;
            while ( v83[1].m128i_i64[1] < v9 );
            if ( v83[1].m128i_i64[1] != v9 )
            {
              if ( v74 >= v83 )
                goto LABEL_87;
LABEL_76:
              v84 = v74->m128i_i64[0];
              v85 = _mm_loadu_si128((const __m128i *)&v83->m128i_u64[1]);
              v17 = v74->m128i_u32[2];
              v74->m128i_i64[0] = v83->m128i_i64[0];
              v86 = v74->m128i_i32[3];
              v83->m128i_i64[0] = v84;
              v87 = v74[1].m128i_i64[0];
              *(__m128i *)((char *)v74 + 8) = v85;
              v74[1].m128i_i64[1] = v83[1].m128i_i64[1];
              v83->m128i_i32[2] = v17;
              v83->m128i_i32[3] = v86;
              v83[1].m128i_i64[0] = v87;
              v83[1].m128i_i64[1] = v88;
              v9 = v66[1].m128i_u64[1];
              goto LABEL_77;
            }
          }
          while ( v66->m128i_i32[2] < (unsigned __int32)v83->m128i_i32[2] );
          if ( v74 < v83 )
            goto LABEL_76;
LABEL_87:
          if ( v70 >= v74 )
            v66 = v74;
          else
            v18 = v74;
        }
      }
    }
  }
  if ( v18 != v66 )
  {
    _BitScanReverse64(&v90, ((char *)v18 - (char *)v66) >> 5);
    sub_FF84A0((__int64)v66, v18, 2LL * (int)(63 - (v90 ^ 0x3F)), v9, v17, v68, a4);
    if ( (char *)v18 - (char *)v66 <= 512 )
    {
      sub_FF9160(v66, v18);
    }
    else
    {
      sub_FF9160(v66, v66 + 32);
      for ( ; v18 != v91; v93[1].m128i_i64[1] = v169.m128i_i64[1] )
      {
        v93 = (__m128i *)v91;
        v168 = _mm_loadu_si128(v91);
        v169 = _mm_loadu_si128(v91 + 1);
        v94 = v91->m128i_i64[0];
        v95 = v91->m128i_u32[2];
        v96 = v91[1].m128i_u64[1];
        while ( v96 > v93[-1].m128i_i64[1] || v96 == v93[-1].m128i_i64[1] && v95 < v93[-2].m128i_i32[2] )
        {
          v97 = v93[-2].m128i_i64[0];
          v98 = _mm_loadu_si128((__m128i *)((char *)v93 - 24));
          v93 -= 2;
          v93[2].m128i_i64[0] = v97;
          v99 = v93[1].m128i_i64[1];
          *(__m128i *)((char *)v93 + 40) = v98;
          v93[3].m128i_i64[1] = v99;
        }
        v92 = _mm_loadu_si128((const __m128i *)&v168.m128i_u64[1]);
        v91 += 2;
        v93->m128i_i64[0] = v94;
        *(__m128i *)((char *)v93 + 8) = v92;
      }
    }
  }
LABEL_15:
  v19 = 0x80000000 - *(_DWORD *)(a1 + 316);
  v20 = *(unsigned int *)(a1 + 312) + v19;
  v147 = *(unsigned int *)(a1 + 312);
  sub_FA3370((__int64)&v168, a2, 0, 117);
  sub_FF87F0((unsigned __int8 **)&v168, v147);
  sub_FF87F0((unsigned __int8 **)&v168, v19);
  sub_FF87F0((unsigned __int8 **)&v168, v20);
  v21 = (unsigned __int8 *)v168.m128i_i64[0];
  v22 = (int)((double)(int)v20 * 100.0 * 4.656612873077393e-10);
  if ( !v168.m128i_i64[0] )
  {
    v107 = v168.m128i_i64[1];
    v108 = *(_DWORD *)(v168.m128i_i64[1] + 14976);
    if ( v108 )
    {
      v117 = (unsigned int)(v108 - 1);
      *(_DWORD *)(v168.m128i_i64[1] + 14976) = v117;
      v21 = *(unsigned __int8 **)(v107 + 8 * v117 + 14848);
      v118 = *((unsigned int *)v21 + 134);
      *v21 = 0;
      v119 = *((_QWORD *)v21 + 66);
      *((_DWORD *)v21 + 106) = 0;
      v120 = v119 + (v118 << 6);
      while ( v119 != v120 )
      {
        while ( 1 )
        {
          v120 -= 64;
          v121 = *(void **)(v120 + 24);
          if ( v121 == (void *)(v120 + 40) )
            break;
          v156 = v120;
          v152 = v119;
          operator delete(v121);
          v119 = v152;
          v120 = v156;
          if ( v152 == v156 )
            goto LABEL_123;
        }
      }
LABEL_123:
      *((_DWORD *)v21 + 134) = 0;
    }
    else
    {
      v21 = (unsigned __int8 *)operator new(0x3A0u);
      *v21 = 0;
      *((_QWORD *)v21 + 12) = v21 + 112;
      *((_QWORD *)v21 + 16) = v21 + 144;
      *((_QWORD *)v21 + 20) = v21 + 176;
      *((_QWORD *)v21 + 24) = v21 + 208;
      *((_QWORD *)v21 + 28) = v21 + 240;
      *((_QWORD *)v21 + 32) = v21 + 272;
      *((_QWORD *)v21 + 36) = v21 + 304;
      *((_QWORD *)v21 + 40) = v21 + 336;
      *((_QWORD *)v21 + 44) = v21 + 368;
      *((_QWORD *)v21 + 48) = v21 + 400;
      *((_QWORD *)v21 + 52) = v21 + 432;
      *((_QWORD *)v21 + 13) = 0;
      v21[112] = 0;
      *((_QWORD *)v21 + 17) = 0;
      v21[144] = 0;
      *((_QWORD *)v21 + 21) = 0;
      v21[176] = 0;
      *((_QWORD *)v21 + 25) = 0;
      v21[208] = 0;
      *((_QWORD *)v21 + 29) = 0;
      v21[240] = 0;
      *((_QWORD *)v21 + 33) = 0;
      v21[272] = 0;
      *((_QWORD *)v21 + 37) = 0;
      v21[304] = 0;
      *((_QWORD *)v21 + 41) = 0;
      v21[336] = 0;
      *((_QWORD *)v21 + 45) = 0;
      v21[368] = 0;
      *((_QWORD *)v21 + 49) = 0;
      v21[400] = 0;
      *((_QWORD *)v21 + 53) = 0x800000000LL;
      *((_QWORD *)v21 + 66) = v21 + 544;
      *((_QWORD *)v21 + 67) = 0x600000000LL;
    }
    v168.m128i_i64[0] = (__int64)v21;
  }
  v21[*v21 + 1] = 2;
  v23 = v168.m128i_i64[0];
  v24 = *(unsigned __int8 *)v168.m128i_i64[0];
  *(_BYTE *)v168.m128i_i64[0] = v24 + 1;
  *(_QWORD *)(v23 + 8 * v24 + 16) = v22;
  v25 = 0;
  sub_AC6300((__int64)&v168);
  v26 = (__m128i *)ptr;
  if ( v18 != ptr )
  {
    do
    {
      sub_FA3370((__int64)&v168, a2, v26->m128i_i32[2], 106);
      v37 = (unsigned __int8 *)v168.m128i_i64[0];
      v38 = v26->m128i_u32[3];
      if ( !v168.m128i_i64[0] )
      {
        v39 = v168.m128i_i64[1];
        v40 = *(_DWORD *)(v168.m128i_i64[1] + 14976);
        if ( v40 )
        {
          v56 = (unsigned int)(v40 - 1);
          *(_DWORD *)(v168.m128i_i64[1] + 14976) = v56;
          v37 = *(unsigned __int8 **)(v39 + 8 * v56 + 14848);
          v57 = *((unsigned int *)v37 + 134);
          *v37 = 0;
          v58 = *((_QWORD *)v37 + 66);
          *((_DWORD *)v37 + 106) = 0;
          v59 = v58 + (v57 << 6);
          while ( v58 != v59 )
          {
            while ( 1 )
            {
              v59 -= 64;
              v60 = *(void **)(v59 + 24);
              if ( v60 == (void *)(v59 + 40) )
                break;
              v157 = v59;
              v149 = v37;
              operator delete(v60);
              v59 = v157;
              v37 = v149;
              if ( v58 == v157 )
                goto LABEL_51;
            }
          }
LABEL_51:
          *((_DWORD *)v37 + 134) = 0;
        }
        else
        {
          v37 = (unsigned __int8 *)operator new(0x3A0u);
          *v37 = 0;
          *((_QWORD *)v37 + 12) = v37 + 112;
          *((_QWORD *)v37 + 16) = v37 + 144;
          *((_QWORD *)v37 + 20) = v37 + 176;
          *((_QWORD *)v37 + 24) = v37 + 208;
          *((_QWORD *)v37 + 28) = v37 + 240;
          *((_QWORD *)v37 + 32) = v37 + 272;
          *((_QWORD *)v37 + 36) = v37 + 304;
          *((_QWORD *)v37 + 40) = v37 + 336;
          *((_QWORD *)v37 + 44) = v37 + 368;
          *((_QWORD *)v37 + 48) = v37 + 400;
          *((_QWORD *)v37 + 52) = v37 + 432;
          *((_QWORD *)v37 + 13) = 0;
          v37[112] = 0;
          *((_QWORD *)v37 + 17) = 0;
          v37[144] = 0;
          *((_QWORD *)v37 + 21) = 0;
          v37[176] = 0;
          *((_QWORD *)v37 + 25) = 0;
          v37[208] = 0;
          *((_QWORD *)v37 + 29) = 0;
          v37[240] = 0;
          *((_QWORD *)v37 + 33) = 0;
          v37[272] = 0;
          *((_QWORD *)v37 + 37) = 0;
          v37[304] = 0;
          *((_QWORD *)v37 + 41) = 0;
          v37[336] = 0;
          *((_QWORD *)v37 + 45) = 0;
          v37[368] = 0;
          *((_QWORD *)v37 + 49) = 0;
          v37[400] = 0;
          *((_QWORD *)v37 + 53) = 0x800000000LL;
          *((_QWORD *)v37 + 66) = v37 + 544;
          *((_QWORD *)v37 + 67) = 0x600000000LL;
        }
        v168.m128i_i64[0] = (__int64)v37;
      }
      v37[*v37 + 1] = 3;
      v27 = v168.m128i_i64[0];
      v28 = *(unsigned __int8 *)v168.m128i_i64[0];
      *(_BYTE *)v168.m128i_i64[0] = v28 + 1;
      *(_QWORD *)(v27 + 8 * v28 + 16) = v38;
      v29 = (unsigned __int8 *)v168.m128i_i64[0];
      v30 = v26[1].m128i_i64[0];
      if ( !v168.m128i_i64[0] )
      {
        v43 = v168.m128i_i64[1];
        v44 = *(_DWORD *)(v168.m128i_i64[1] + 14976);
        if ( v44 )
        {
          v61 = (unsigned int)(v44 - 1);
          *(_DWORD *)(v168.m128i_i64[1] + 14976) = v61;
          v29 = *(unsigned __int8 **)(v43 + 8 * v61 + 14848);
          v62 = *((unsigned int *)v29 + 134);
          *v29 = 0;
          v63 = *((_QWORD *)v29 + 66);
          *((_DWORD *)v29 + 106) = 0;
          v64 = v63 + (v62 << 6);
          while ( v63 != v64 )
          {
            while ( 1 )
            {
              v64 -= 64;
              v65 = *(void **)(v64 + 24);
              if ( v65 == (void *)(v64 + 40) )
                break;
              v155 = v64;
              v150 = v29;
              operator delete(v65);
              v64 = v155;
              v29 = v150;
              if ( v63 == v155 )
                goto LABEL_56;
            }
          }
LABEL_56:
          *((_DWORD *)v29 + 134) = 0;
        }
        else
        {
          v29 = (unsigned __int8 *)operator new(0x3A0u);
          *v29 = 0;
          *((_QWORD *)v29 + 12) = v29 + 112;
          *((_QWORD *)v29 + 16) = v29 + 144;
          *((_QWORD *)v29 + 20) = v29 + 176;
          *((_QWORD *)v29 + 24) = v29 + 208;
          *((_QWORD *)v29 + 28) = v29 + 240;
          *((_QWORD *)v29 + 32) = v29 + 272;
          *((_QWORD *)v29 + 36) = v29 + 304;
          *((_QWORD *)v29 + 40) = v29 + 336;
          *((_QWORD *)v29 + 44) = v29 + 368;
          *((_QWORD *)v29 + 48) = v29 + 400;
          *((_QWORD *)v29 + 52) = v29 + 432;
          *((_QWORD *)v29 + 13) = 0;
          v29[112] = 0;
          *((_QWORD *)v29 + 17) = 0;
          v29[144] = 0;
          *((_QWORD *)v29 + 21) = 0;
          v29[176] = 0;
          *((_QWORD *)v29 + 25) = 0;
          v29[208] = 0;
          *((_QWORD *)v29 + 29) = 0;
          v29[240] = 0;
          *((_QWORD *)v29 + 33) = 0;
          v29[272] = 0;
          *((_QWORD *)v29 + 37) = 0;
          v29[304] = 0;
          *((_QWORD *)v29 + 41) = 0;
          v29[336] = 0;
          *((_QWORD *)v29 + 45) = 0;
          v29[368] = 0;
          *((_QWORD *)v29 + 49) = 0;
          v29[400] = 0;
          *((_QWORD *)v29 + 53) = 0x800000000LL;
          *((_QWORD *)v29 + 66) = v29 + 544;
          *((_QWORD *)v29 + 67) = 0x600000000LL;
        }
        v168.m128i_i64[0] = (__int64)v29;
      }
      v29[*v29 + 1] = 3;
      v31 = v168.m128i_i64[0];
      v32 = *(unsigned __int8 *)v168.m128i_i64[0];
      *(_BYTE *)v168.m128i_i64[0] = v32 + 1;
      *(_QWORD *)(v31 + 8 * v32 + 16) = v30;
      v33 = (unsigned __int8 *)v168.m128i_i64[0];
      v34 = v26[1].m128i_i64[1] - v26[1].m128i_i64[0];
      if ( !v168.m128i_i64[0] )
      {
        v41 = v168.m128i_i64[1];
        v42 = *(_DWORD *)(v168.m128i_i64[1] + 14976);
        if ( v42 )
        {
          v51 = (unsigned int)(v42 - 1);
          *(_DWORD *)(v168.m128i_i64[1] + 14976) = v51;
          v33 = *(unsigned __int8 **)(v41 + 8 * v51 + 14848);
          v52 = *((unsigned int *)v33 + 134);
          *v33 = 0;
          v53 = *((_QWORD *)v33 + 66);
          *((_DWORD *)v33 + 106) = 0;
          v54 = v53 + (v52 << 6);
          while ( v53 != v54 )
          {
            while ( 1 )
            {
              v54 -= 64;
              v55 = *(void **)(v54 + 24);
              if ( v55 == (void *)(v54 + 40) )
                break;
              v154 = v33;
              v148 = v54;
              operator delete(v55);
              v54 = v148;
              v33 = v154;
              if ( v53 == v148 )
                goto LABEL_46;
            }
          }
LABEL_46:
          *((_DWORD *)v33 + 134) = 0;
        }
        else
        {
          v33 = (unsigned __int8 *)operator new(0x3A0u);
          *v33 = 0;
          *((_QWORD *)v33 + 12) = v33 + 112;
          *((_QWORD *)v33 + 16) = v33 + 144;
          *((_QWORD *)v33 + 20) = v33 + 176;
          *((_QWORD *)v33 + 24) = v33 + 208;
          *((_QWORD *)v33 + 28) = v33 + 240;
          *((_QWORD *)v33 + 32) = v33 + 272;
          *((_QWORD *)v33 + 36) = v33 + 304;
          *((_QWORD *)v33 + 40) = v33 + 336;
          *((_QWORD *)v33 + 44) = v33 + 368;
          *((_QWORD *)v33 + 48) = v33 + 400;
          *((_QWORD *)v33 + 52) = v33 + 432;
          *((_QWORD *)v33 + 13) = 0;
          v33[112] = 0;
          *((_QWORD *)v33 + 17) = 0;
          v33[144] = 0;
          *((_QWORD *)v33 + 21) = 0;
          v33[176] = 0;
          *((_QWORD *)v33 + 25) = 0;
          v33[208] = 0;
          *((_QWORD *)v33 + 29) = 0;
          v33[240] = 0;
          *((_QWORD *)v33 + 33) = 0;
          v33[272] = 0;
          *((_QWORD *)v33 + 37) = 0;
          v33[304] = 0;
          *((_QWORD *)v33 + 41) = 0;
          v33[336] = 0;
          *((_QWORD *)v33 + 45) = 0;
          v33[368] = 0;
          *((_QWORD *)v33 + 49) = 0;
          v33[400] = 0;
          *((_QWORD *)v33 + 53) = 0x800000000LL;
          *((_QWORD *)v33 + 66) = v33 + 544;
          *((_QWORD *)v33 + 67) = 0x600000000LL;
        }
        v168.m128i_i64[0] = (__int64)v33;
      }
      v26 += 2;
      v33[*v33 + 1] = 3;
      v35 = v168.m128i_i64[0];
      v36 = *(unsigned __int8 *)v168.m128i_i64[0];
      *(_BYTE *)v168.m128i_i64[0] = v36 + 1;
      *(_QWORD *)(v35 + 8 * v36 + 16) = v34;
      sub_AC6300((__int64)&v168);
      v25 += v26[-1].m128i_i64[1];
    }
    while ( v18 != v26 );
  }
  if ( v158 != v25 )
  {
    sub_FA3370((__int64)&v168, a2, 0, 105);
    v45 = (unsigned __int8 *)v168.m128i_i64[0];
    v46 = ((_BYTE *)ptr + 32 * (unsigned int)v160 - (_BYTE *)v18) >> 5;
    if ( !v168.m128i_i64[0] )
    {
      v122 = v168.m128i_i64[1];
      v123 = *(_DWORD *)(v168.m128i_i64[1] + 14976);
      if ( v123 )
      {
        v124 = (unsigned int)(v123 - 1);
        *(_DWORD *)(v168.m128i_i64[1] + 14976) = v124;
        v45 = *(unsigned __int8 **)(v122 + 8 * v124 + 14848);
        v125 = *((unsigned int *)v45 + 134);
        *v45 = 0;
        v126 = *((_QWORD *)v45 + 66);
        *((_DWORD *)v45 + 106) = 0;
        v127 = v126 + (v125 << 6);
        while ( v126 != v127 )
        {
          while ( 1 )
          {
            v127 -= 64;
            v128 = *(void **)(v127 + 24);
            if ( v128 == (void *)(v127 + 40) )
              break;
            v153 = v126;
            operator delete(v128);
            v126 = v153;
            if ( v153 == v127 )
              goto LABEL_129;
          }
        }
LABEL_129:
        *((_DWORD *)v45 + 134) = 0;
      }
      else
      {
        v45 = (unsigned __int8 *)operator new(0x3A0u);
        *v45 = 0;
        *((_QWORD *)v45 + 12) = v45 + 112;
        *((_QWORD *)v45 + 16) = v45 + 144;
        *((_QWORD *)v45 + 20) = v45 + 176;
        *((_QWORD *)v45 + 24) = v45 + 208;
        *((_QWORD *)v45 + 28) = v45 + 240;
        *((_QWORD *)v45 + 32) = v45 + 272;
        *((_QWORD *)v45 + 36) = v45 + 304;
        *((_QWORD *)v45 + 40) = v45 + 336;
        *((_QWORD *)v45 + 44) = v45 + 368;
        *((_QWORD *)v45 + 48) = v45 + 400;
        *((_QWORD *)v45 + 52) = v45 + 432;
        *((_QWORD *)v45 + 13) = 0;
        v45[112] = 0;
        *((_QWORD *)v45 + 17) = 0;
        v45[144] = 0;
        *((_QWORD *)v45 + 21) = 0;
        v45[176] = 0;
        *((_QWORD *)v45 + 25) = 0;
        v45[208] = 0;
        *((_QWORD *)v45 + 29) = 0;
        v45[240] = 0;
        *((_QWORD *)v45 + 33) = 0;
        v45[272] = 0;
        *((_QWORD *)v45 + 37) = 0;
        v45[304] = 0;
        *((_QWORD *)v45 + 41) = 0;
        v45[336] = 0;
        *((_QWORD *)v45 + 45) = 0;
        v45[368] = 0;
        *((_QWORD *)v45 + 49) = 0;
        v45[400] = 0;
        *((_QWORD *)v45 + 53) = 0x800000000LL;
        *((_QWORD *)v45 + 66) = v45 + 544;
        *((_QWORD *)v45 + 67) = 0x600000000LL;
      }
      v168.m128i_i64[0] = (__int64)v45;
    }
    v45[*v45 + 1] = 2;
    v47 = v168.m128i_i64[0];
    v48 = *(unsigned __int8 *)v168.m128i_i64[0];
    *(_BYTE *)v168.m128i_i64[0] = v48 + 1;
    v49 = v158;
    *(_QWORD *)(v47 + 8 * v48 + 16) = v46;
    sub_FF87F0((unsigned __int8 **)&v168, v49 - v25);
    sub_AC6300((__int64)&v168);
  }
  if ( ptr != v161 )
    free(ptr);
  if ( src != &v167 )
    free(src);
  return operator delete();
}

