unsigned __int64 __fastcall sub_5455F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 result; // rax
  __int64 v5; // rbp
  __int64 k; // r13
  void *v7; // r12
  bool v8; // zf
  const char *v9; // rsi
  void *v10; // r12
  void *v11; // rax
  __int64 v12; // r15
  __int64 i; // r14
  __m128i v14; // xmm0
  void *v15; // r12
  size_t v16; // r12
  __m128i v17; // xmm0
  int v18; // eax
  __m128i v19; // xmm0
  int v20; // eax
  __m128i v21; // xmm0
  __int64 v22; // rdx
  const char *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  __int64 v26; // r12
  __int64 v27; // r15
  __int64 v28; // r13
  __m128i v29; // xmm0
  __int64 v30; // rax
  void *v31; // r12
  size_t v32; // r12
  __int64 v33; // rax
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  const char *v37; // rsi
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbp
  void *v42; // r12
  void *v43; // r12
  const char *v44; // rcx
  __int64 v45; // rax
  const char *v46; // rsi
  unsigned __int64 v47; // rbp
  __int64 v48; // r13
  __int64 v49; // r12
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // r14
  const char *v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // r15
  __int64 v56; // r14
  void *v57; // rax
  __int64 v58; // r15
  __int64 j; // r13
  __m128i v60; // xmm0
  void *v61; // r14
  size_t v62; // r14
  __m128i v63; // xmm0
  int v64; // eax
  __m128i v65; // xmm0
  int v66; // eax
  __m128i v67; // xmm0
  const char *v68; // rsi
  void *v69; // rax
  void *v70; // r15
  const char *v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // r12
  void *v74; // r15
  void *v75; // rax
  __int64 v76; // rbp
  __int64 m; // r13
  void *v78; // r12
  const char *v79; // rsi
  void *v80; // r12
  void *v81; // rax
  const char *v82; // rsi
  __int64 v83; // r13
  void *v84; // r12
  size_t v85; // r12
  __m128i v86; // xmm0
  const char *v87; // rcx
  __int64 v88; // rdx
  char v89; // al
  __m128i v90; // xmm0
  __int64 v91; // rax
  __m128i v92; // xmm0
  void *v93; // rax
  size_t v94; // r13
  size_t v95; // r13
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r13
  __m128i v99; // xmm0
  __m128i v100; // xmm0
  __m128i v101; // xmm0
  void *v102; // r12
  size_t v103; // r12
  __m128i v104; // xmm0
  __int64 v105; // rdx
  char v106; // al
  __m128i v107; // xmm0
  __int64 v108; // rax
  __m128i v109; // xmm0
  __int64 v110; // rdx
  const char *v111; // rsi
  void *v112; // rax
  const char *v113; // rsi
  void *v114; // rax
  void *v115; // rax
  __int64 v116; // [rsp+8h] [rbp-180h]
  size_t nc; // [rsp+18h] [rbp-170h]
  void *nb; // [rsp+18h] [rbp-170h]
  size_t n; // [rsp+18h] [rbp-170h]
  void *na; // [rsp+18h] [rbp-170h]
  _BYTE v121[48]; // [rsp+20h] [rbp-168h] BYREF
  __int128 v122; // [rsp+50h] [rbp-138h]
  __int64 v123; // [rsp+60h] [rbp-128h] BYREF
  __m128i v124; // [rsp+68h] [rbp-120h]
  __m128i v125; // [rsp+78h] [rbp-110h]
  __m128i v126; // [rsp+88h] [rbp-100h]
  __int64 v127; // [rsp+98h] [rbp-F0h]
  __int64 v128; // [rsp+A0h] [rbp-E8h]
  char v129; // [rsp+A8h] [rbp-E0h]
  void *v130[3]; // [rsp+B0h] [rbp-D8h] BYREF
  void *v131[3]; // [rsp+C8h] [rbp-C0h] BYREF
  __int128 v132; // [rsp+E0h] [rbp-A8h]
  __int64 v133; // [rsp+F0h] [rbp-98h] BYREF
  __m128i v134; // [rsp+F8h] [rbp-90h]
  __m128i v135; // [rsp+108h] [rbp-80h]
  __m128i v136; // [rsp+118h] [rbp-70h]
  __int64 v137; // [rsp+128h] [rbp-60h]
  __int64 v138; // [rsp+130h] [rbp-58h]
  char v139; // [rsp+138h] [rbp-50h]
  unsigned __int64 v140; // [rsp+148h] [rbp-40h]

  v140 = __readfsqword(0x28u);
  if ( !a2 )
    return v140 - __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 56);
  switch ( *(_DWORD *)a2 )
  {
    case 1:
    case 2:
      v12 = *(_QWORD *)(a2 + 72);
      for ( i = v12 + 152LL * *(_QWORD *)(a2 + 80); i != v12; v12 += 152 )
      {
        if ( (*(_BYTE *)(v12 + 133) & 4) == 0 )
        {
          v14 = _mm_loadu_si128((const __m128i *)v12);
          v130[2] = nullptr;
          *(__m128i *)v130 = v14;
          *(_OWORD *)v131 = 0;
          v15 = *(void **)(v12 + 24);
          if ( v15 )
          {
            v57 = (void *)qalloc_or_throw(*(_QWORD *)(v12 + 24));
            v131[1] = v15;
            v130[2] = v57;
            memcpy(v57, *(const void **)(v12 + 16), (size_t)v15);
            v131[0] = v15;
          }
          v131[2] = nullptr;
          v132 = 0;
          v16 = *(_QWORD *)(v12 + 48);
          if ( v16 )
          {
            v131[2] = (void *)qalloc_or_throw(*(_QWORD *)(v12 + 48));
            *((_QWORD *)&v132 + 1) = v16;
            memcpy(v131[2], *(const void **)(v12 + 40), v16);
            *(_QWORD *)&v132 = v16;
          }
          v133 = 0;
          copy_tinfo_t(&v133);
          v17 = _mm_loadu_si128((const __m128i *)(v12 + 72));
          v137 = *(_QWORD *)(v12 + 120);
          v18 = *(_DWORD *)(v12 + 128);
          v134 = v17;
          v19 = _mm_loadu_si128((const __m128i *)(v12 + 88));
          LODWORD(v138) = v18;
          v20 = *(_DWORD *)(v12 + 132);
          v135 = v19;
          v21 = _mm_loadu_si128((const __m128i *)(v12 + 104));
          HIDWORD(v138) = v20;
          LOBYTE(v20) = *(_BYTE *)(v12 + 136);
          v136 = v21;
          v139 = v20;
          v22 = *(_QWORD *)(v12 + 144);
          if ( v2 == -1 )
          {
            v23 = haystack;
            if ( *(_QWORD *)(a2 + 40) )
              v23 = *(const char **)(a2 + 32);
            sub_39ADA0(0x4Au, v23, v22, v130);
          }
          else
          {
            sub_39ADA0(0x50u, *(_QWORD *)(a2 + 56), v22, v130);
          }
          clear_tinfo_t(&v133);
          if ( v131[2] )
          {
            *(_QWORD *)&v132 = 0;
            qfree(v131[2]);
          }
          if ( v130[2] )
          {
            v131[0] = nullptr;
            qfree(v130[2]);
          }
        }
      }
      v58 = *(_QWORD *)(a2 + 96);
      for ( j = v58 + 144LL * *(_QWORD *)(a2 + 104); j != v58; v58 += 144 )
      {
        v60 = _mm_loadu_si128((const __m128i *)v58);
        v130[2] = nullptr;
        *(_OWORD *)v131 = 0;
        *(__m128i *)v130 = v60;
        v61 = *(void **)(v58 + 24);
        if ( v61 )
        {
          v69 = (void *)qalloc_or_throw(*(_QWORD *)(v58 + 24));
          v131[1] = v61;
          v130[2] = v69;
          memcpy(v69, *(const void **)(v58 + 16), (size_t)v61);
          v131[0] = v61;
        }
        v131[2] = nullptr;
        v132 = 0;
        v62 = *(_QWORD *)(v58 + 48);
        if ( v62 )
        {
          v131[2] = (void *)qalloc_or_throw(*(_QWORD *)(v58 + 48));
          *((_QWORD *)&v132 + 1) = v62;
          memcpy(v131[2], *(const void **)(v58 + 40), v62);
          *(_QWORD *)&v132 = v62;
        }
        v133 = 0;
        copy_tinfo_t(&v133);
        v63 = _mm_loadu_si128((const __m128i *)(v58 + 72));
        v137 = *(_QWORD *)(v58 + 120);
        v64 = *(_DWORD *)(v58 + 128);
        v134 = v63;
        v65 = _mm_loadu_si128((const __m128i *)(v58 + 88));
        LODWORD(v138) = v64;
        v66 = *(_DWORD *)(v58 + 132);
        v135 = v65;
        v67 = _mm_loadu_si128((const __m128i *)(v58 + 104));
        HIDWORD(v138) = v66;
        LOBYTE(v66) = *(_BYTE *)(v58 + 136);
        v136 = v67;
        v139 = v66;
        if ( v2 == -1 )
        {
          v68 = haystack;
          if ( *(_QWORD *)(a2 + 40) )
            v68 = *(const char **)(a2 + 32);
          sub_39ADA0(0x49u, v68, v130);
        }
        else
        {
          sub_39ADA0(0x4Fu, *(_QWORD *)(a2 + 56), v130);
        }
        clear_tinfo_t(&v133);
        if ( v131[2] )
        {
          *(_QWORD *)&v132 = 0;
          qfree(v131[2]);
        }
        if ( v130[2] )
        {
          v131[0] = nullptr;
          qfree(v130[2]);
        }
      }
      return v140 - __readfsqword(0x28u);
    case 3:
      if ( *(_QWORD *)(a2 + 80) == 1 && *(_QWORD *)(a2 + 104) == 1 )
      {
        v83 = *(_QWORD *)(a2 + 96);
        v130[2] = nullptr;
        *(__m128i *)v130 = _mm_loadu_si128((const __m128i *)v83);
        *(_OWORD *)v131 = 0;
        v84 = *(void **)(v83 + 24);
        if ( v84 )
        {
          v114 = (void *)qalloc_or_throw(*(_QWORD *)(v83 + 24));
          v131[1] = v84;
          v130[2] = v114;
          memcpy(v114, *(const void **)(v83 + 16), (size_t)v84);
          v131[0] = v84;
        }
        v131[2] = nullptr;
        v132 = 0;
        v85 = *(_QWORD *)(v83 + 48);
        if ( v85 )
        {
          v131[2] = (void *)qalloc_or_throw(*(_QWORD *)(v83 + 48));
          *((_QWORD *)&v132 + 1) = v85;
          memcpy(v131[2], *(const void **)(v83 + 40), v85);
          *(_QWORD *)&v132 = v85;
        }
        v133 = 0;
        copy_tinfo_t(&v133);
        v86 = _mm_loadu_si128((const __m128i *)(v83 + 72));
        v87 = haystack;
        v88 = *(_QWORD *)(v83 + 128);
        v137 = *(_QWORD *)(v83 + 120);
        v89 = *(_BYTE *)(v83 + 136);
        v134 = v86;
        v90 = _mm_loadu_si128((const __m128i *)(v83 + 88));
        v139 = v89;
        v91 = *(_QWORD *)(a2 + 72);
        v135 = v90;
        v92 = _mm_loadu_si128((const __m128i *)(v83 + 104));
        v138 = v88;
        v136 = v92;
        if ( *(_QWORD *)(v91 + 24) )
          v87 = *(const char **)(v91 + 16);
        if ( v2 == -1 )
        {
          v113 = haystack;
          if ( *(_QWORD *)(a2 + 40) )
            v113 = *(const char **)(a2 + 32);
          sub_39ADA0(0x4Bu, v113, v130, v87);
        }
        else
        {
          sub_39ADA0(0x51u, *(_QWORD *)(a2 + 56), v130, v87);
        }
        clear_tinfo_t(&v133);
        if ( v131[2] )
        {
          *(_QWORD *)&v132 = 0;
          qfree(v131[2]);
        }
        if ( v130[2] )
        {
          v131[0] = nullptr;
          qfree(v130[2]);
        }
      }
      return v140 - __readfsqword(0x28u);
    case 4:
      v24 = *(_QWORD *)(a2 + 80);
      if ( v24 )
      {
        v25 = *(_QWORD *)(a2 + 104);
        if ( v25 == 1 )
        {
          v26 = *(_QWORD *)(a2 + 72);
          if ( v24 != 1 )
          {
            v27 = 152;
            do
            {
              v28 = v26 + v27;
              if ( (*(_BYTE *)(v26 + v27 + 133) & 4) == 0 )
              {
                v29 = _mm_loadu_si128((const __m128i *)v28);
                v30 = *(_QWORD *)(v28 + 144);
                v130[2] = nullptr;
                *(__m128i *)v130 = v29;
                *(_OWORD *)v131 = 0;
                v31 = *(void **)(v28 + 24);
                v116 = v30;
                if ( v31 )
                {
                  v93 = (void *)qalloc_or_throw(v31);
                  v131[1] = v31;
                  v130[2] = v93;
                  memcpy(v93, *(const void **)(v28 + 16), (size_t)v31);
                  v131[0] = v31;
                }
                v131[2] = nullptr;
                v132 = 0;
                v32 = *(_QWORD *)(v28 + 48);
                if ( v32 )
                {
                  v131[2] = (void *)qalloc_or_throw(*(_QWORD *)(v28 + 48));
                  *((_QWORD *)&v132 + 1) = v32;
                  memcpy(v131[2], *(const void **)(v28 + 40), v32);
                  *(_QWORD *)&v132 = v32;
                }
                v133 = 0;
                copy_tinfo_t(&v133);
                v33 = *(_QWORD *)(v28 + 120);
                v34 = *(_QWORD *)(v28 + 128);
                v134 = _mm_loadu_si128((const __m128i *)(v28 + 72));
                v35 = _mm_loadu_si128((const __m128i *)(v28 + 88));
                v137 = v33;
                LOBYTE(v33) = *(_BYTE *)(v28 + 136);
                v135 = v35;
                v36 = _mm_loadu_si128((const __m128i *)(v28 + 104));
                v139 = v33;
                v138 = v34;
                v136 = v36;
                if ( v2 == -1 )
                {
                  v37 = haystack;
                  if ( *(_QWORD *)(a2 + 40) )
                    v37 = *(const char **)(a2 + 32);
                  sub_39ADA0(0x4Au, v37, v116, v130);
                }
                else
                {
                  sub_39ADA0(0x50u, *(_QWORD *)(a2 + 56), v116, v130);
                }
                clear_tinfo_t(&v133);
                if ( v131[2] )
                {
                  *(_QWORD *)&v132 = 0;
                  qfree(v131[2]);
                }
                if ( v130[2] )
                {
                  v131[0] = nullptr;
                  qfree(v130[2]);
                }
                v26 = *(_QWORD *)(a2 + 72);
              }
              ++v25;
              v27 += 152;
            }
            while ( v25 < *(_QWORD *)(a2 + 80) );
          }
          memset(&v121[16], 0, 24);
          *(__m128i *)v121 = _mm_loadu_si128((const __m128i *)v26);
          v94 = *(_QWORD *)(v26 + 24);
          if ( v94 )
          {
            v112 = (void *)qalloc_or_throw(*(_QWORD *)(v26 + 24));
            *(_QWORD *)&v121[32] = v94;
            *(_QWORD *)&v121[16] = v112;
            memcpy(v112, *(const void **)(v26 + 16), v94);
            *(_QWORD *)&v121[24] = v94;
          }
          *(_QWORD *)&v121[40] = 0;
          v122 = 0;
          v95 = *(_QWORD *)(v26 + 48);
          if ( v95 )
          {
            *(_QWORD *)&v121[40] = qalloc_or_throw(*(_QWORD *)(v26 + 48));
            *((_QWORD *)&v122 + 1) = v95;
            memcpy(*(void **)&v121[40], *(const void **)(v26 + 40), v95);
            *(_QWORD *)&v122 = v95;
          }
          v123 = 0;
          copy_tinfo_t(&v123);
          v96 = *(_QWORD *)(v26 + 120);
          v97 = *(_QWORD *)(v26 + 128);
          v98 = *(_QWORD *)(a2 + 96);
          v124 = _mm_loadu_si128((const __m128i *)(v26 + 72));
          v99 = _mm_loadu_si128((const __m128i *)(v26 + 88));
          v127 = v96;
          LOBYTE(v96) = *(_BYTE *)(v26 + 136);
          v125 = v99;
          v100 = _mm_loadu_si128((const __m128i *)(v26 + 104));
          v129 = v96;
          v128 = v97;
          v126 = v100;
          v101 = _mm_loadu_si128((const __m128i *)v98);
          v130[2] = nullptr;
          *(__m128i *)v130 = v101;
          *(_OWORD *)v131 = 0;
          v102 = *(void **)(v98 + 24);
          if ( v102 )
          {
            v130[2] = (void *)qalloc_or_throw(*(_QWORD *)(v98 + 24));
            v131[1] = v102;
            memcpy(v130[2], *(const void **)(v98 + 16), (size_t)v102);
            v131[0] = v102;
          }
          v131[2] = nullptr;
          v132 = 0;
          v103 = *(_QWORD *)(v98 + 48);
          if ( v103 )
          {
            v131[2] = (void *)qalloc_or_throw(*(_QWORD *)(v98 + 48));
            *((_QWORD *)&v132 + 1) = v103;
            memcpy(v131[2], *(const void **)(v98 + 40), v103);
            *(_QWORD *)&v132 = v103;
          }
          v133 = 0;
          copy_tinfo_t(&v133);
          v104 = _mm_loadu_si128((const __m128i *)(v98 + 72));
          v105 = *(_QWORD *)(v98 + 128);
          v137 = *(_QWORD *)(v98 + 120);
          v106 = *(_BYTE *)(v98 + 136);
          v134 = v104;
          v107 = _mm_loadu_si128((const __m128i *)(v98 + 88));
          v139 = v106;
          v108 = *(_QWORD *)(a2 + 72);
          v135 = v107;
          v109 = _mm_loadu_si128((const __m128i *)(v98 + 104));
          v138 = v105;
          v136 = v109;
          v110 = *(_QWORD *)(v108 + 144);
          if ( v2 == -1 )
          {
            v111 = haystack;
            if ( *(_QWORD *)(a2 + 40) )
              v111 = *(const char **)(a2 + 32);
            sub_39ADA0(0x4Cu, v111, v110, v121, v130);
          }
          else
          {
            sub_39ADA0(0x52u, *(_QWORD *)(a2 + 56), v110, v121, v130);
          }
          clear_tinfo_t(&v133);
          if ( v131[2] )
          {
            *(_QWORD *)&v132 = 0;
            qfree(v131[2]);
          }
          if ( v130[2] )
          {
            v131[0] = nullptr;
            qfree(v130[2]);
          }
          clear_tinfo_t(&v123);
          if ( *(_QWORD *)&v121[40] )
          {
            *(_QWORD *)&v122 = 0;
            qfree(*(void **)&v121[40]);
          }
          if ( *(_QWORD *)&v121[16] )
          {
            *(_QWORD *)&v121[24] = 0;
            qfree(*(void **)&v121[16]);
          }
        }
      }
      return v140 - __readfsqword(0x28u);
    case 5:
      v38 = *(_QWORD **)(a2 + 72);
      v39 = v38[18];
      v40 = (**(_QWORD **)(a2 + 96) - *v38) >> 3;
      if ( v2 == -1 )
      {
        v82 = haystack;
        if ( *(_QWORD *)(a2 + 40) )
          v82 = *(const char **)(a2 + 32);
        result = sub_39ADA0(0x4Du, v82, v39, v40);
      }
      else
      {
        result = sub_39ADA0(0x53u, *(_QWORD *)(a2 + 56), v39, v40);
      }
      break;
    case 6:
    case 7:
    case 0xA:
      v5 = *(_QWORD *)(a2 + 120);
      for ( k = v5 + (*(_QWORD *)(a2 + 128) << 6); k != v5; v5 += 64 )
      {
        memset(v130, 0, sizeof(v130));
        v10 = *(void **)(v5 + 8);
        if ( v10 )
        {
          v11 = (void *)qalloc_or_throw(*(_QWORD *)(v5 + 8));
          v130[2] = v10;
          v130[0] = v11;
          memcpy(v11, *(const void **)v5, (size_t)v10);
          v130[1] = v10;
        }
        memset(v131, 0, sizeof(v131));
        v7 = *(void **)(v5 + 32);
        if ( v7 )
        {
          v131[0] = (void *)qalloc_or_throw(*(_QWORD *)(v5 + 32));
          v131[2] = v7;
          memcpy(v131[0], *(const void **)(v5 + 24), (size_t)v7);
          v131[1] = v7;
        }
        v8 = *(_QWORD *)(a2 + 40) == 0;
        v9 = haystack;
        *(_QWORD *)&v132 = *(_QWORD *)(v5 + 48);
        if ( !v8 )
          v9 = *(const char **)(a2 + 32);
        sub_39ADA0(0x56u, v9, *(_QWORD *)(v5 + 56), v130);
        if ( v131[0] )
        {
          v131[1] = nullptr;
          qfree(v131[0]);
        }
        if ( v130[0] )
        {
          v130[1] = nullptr;
          qfree(v130[0]);
        }
      }
      v76 = *(_QWORD *)(a2 + 144);
      for ( m = v76 + 56LL * *(_QWORD *)(a2 + 152); m != v76; v76 += 56 )
      {
        memset(v130, 0, sizeof(v130));
        v80 = *(void **)(v76 + 8);
        if ( v80 )
        {
          v81 = (void *)qalloc_or_throw(*(_QWORD *)(v76 + 8));
          v130[2] = v80;
          v130[0] = v81;
          memcpy(v81, *(const void **)v76, (size_t)v80);
          v130[1] = v80;
        }
        memset(v131, 0, sizeof(v131));
        v78 = *(void **)(v76 + 32);
        if ( v78 )
        {
          v131[0] = (void *)qalloc_or_throw(*(_QWORD *)(v76 + 32));
          v131[2] = v78;
          memcpy(v131[0], *(const void **)(v76 + 24), (size_t)v78);
          v131[1] = v78;
        }
        v8 = *(_QWORD *)(a2 + 40) == 0;
        v79 = haystack;
        *(_QWORD *)&v132 = *(_QWORD *)(v76 + 48);
        if ( !v8 )
          v79 = *(const char **)(a2 + 32);
        sub_39ADA0(0x55u, v79, v130);
        if ( v131[0] )
        {
          v131[1] = nullptr;
          qfree(v131[0]);
        }
        if ( v130[0] )
        {
          v130[1] = nullptr;
          qfree(v130[0]);
        }
      }
      return v140 - __readfsqword(0x28u);
    case 8:
      if ( *(_QWORD *)(a2 + 128) == 1 && *(_QWORD *)(a2 + 152) == 1 )
      {
        v41 = *(_QWORD *)(a2 + 144);
        memset(v130, 0, sizeof(v130));
        v42 = *(void **)(v41 + 8);
        if ( v42 )
        {
          v115 = (void *)qalloc_or_throw(*(_QWORD *)(v41 + 8));
          v130[2] = v42;
          v130[0] = v115;
          memcpy(v115, *(const void **)v41, (size_t)v42);
          v130[1] = v42;
        }
        memset(v131, 0, sizeof(v131));
        v43 = *(void **)(v41 + 32);
        if ( v43 )
        {
          v131[0] = (void *)qalloc_or_throw(*(_QWORD *)(v41 + 32));
          v131[2] = v43;
          memcpy(v131[0], *(const void **)(v41 + 24), (size_t)v43);
          v131[1] = v43;
        }
        v44 = haystack;
        *(_QWORD *)&v132 = *(_QWORD *)(v41 + 48);
        v45 = *(_QWORD *)(a2 + 120);
        if ( *(_QWORD *)(v45 + 8) )
          v44 = *(const char **)v45;
        v46 = haystack;
        if ( *(_QWORD *)(a2 + 40) )
          v46 = *(const char **)(a2 + 32);
        sub_39ADA0(0x57u, v46, v130, v44);
        if ( v131[0] )
        {
          v131[1] = nullptr;
          qfree(v131[0]);
        }
        if ( v130[0] )
        {
          v130[1] = nullptr;
          qfree(v130[0]);
        }
      }
      return v140 - __readfsqword(0x28u);
    case 9:
      v47 = *(_QWORD *)(a2 + 128);
      v48 = 0;
      v49 = 0;
      if ( v47 )
      {
        do
        {
          v54 = *(_QWORD *)(a2 + 120) + (v49 << 6);
          v55 = *(_QWORD *)(v54 + 56);
          v56 = v54;
          memset(v121, 0, 24);
          if ( *(_QWORD *)(v54 + 8) )
          {
            nc = *(_QWORD *)(v54 + 8);
            *(_QWORD *)v121 = qalloc_or_throw(nc);
            *(_QWORD *)&v121[16] = nc;
            memcpy(*(void **)v121, *(const void **)v56, nc);
            *(_QWORD *)&v121[8] = nc;
          }
          memset(&v121[24], 0, 24);
          if ( *(_QWORD *)(v56 + 32) )
          {
            n = *(_QWORD *)(v56 + 32);
            *(_QWORD *)&v121[24] = qalloc_or_throw(n);
            *(_QWORD *)&v121[40] = n;
            memcpy(*(void **)&v121[24], *(const void **)(v56 + 24), n);
            *(_QWORD *)&v121[32] = n;
          }
          v50 = *(_QWORD *)(v56 + 48);
          v51 = *(_QWORD *)(a2 + 144);
          memset(v130, 0, sizeof(v130));
          v52 = v48 + v51;
          *(_QWORD *)&v122 = v50;
          if ( *(_QWORD *)(v52 + 8) )
          {
            na = *(void **)(v52 + 8);
            v130[0] = (void *)qalloc_or_throw(na);
            v130[2] = na;
            memcpy(v130[0], *(const void **)v52, (size_t)na);
            v130[1] = na;
          }
          memset(v131, 0, sizeof(v131));
          if ( *(_QWORD *)(v52 + 32) )
          {
            nb = *(void **)(v52 + 32);
            v131[0] = (void *)qalloc_or_throw(nb);
            v131[2] = nb;
            memcpy(v131[0], *(const void **)(v52 + 24), (size_t)nb);
            v131[1] = nb;
          }
          v8 = *(_QWORD *)(a2 + 40) == 0;
          v53 = haystack;
          *(_QWORD *)&v132 = *(_QWORD *)(v52 + 48);
          if ( !v8 )
            v53 = *(const char **)(a2 + 32);
          sub_39ADA0(0x58u, v53, v55, v121, v130);
          if ( v131[0] )
          {
            v131[1] = nullptr;
            qfree(v131[0]);
          }
          if ( v130[0] )
          {
            v130[1] = nullptr;
            qfree(v130[0]);
          }
          if ( *(_QWORD *)&v121[24] )
          {
            *(_QWORD *)&v121[32] = 0;
            qfree(*(void **)&v121[24]);
          }
          if ( *(_QWORD *)v121 )
          {
            *(_QWORD *)&v121[8] = 0;
            qfree(*(void **)v121);
          }
          ++v49;
          v48 += 56;
        }
        while ( v49 != v47 );
      }
      for ( ; v47 < *(_QWORD *)(a2 + 152); ++v47 )
      {
        v72 = *(_QWORD *)(a2 + 144);
        memset(v130, 0, sizeof(v130));
        v73 = v72 + 56 * v47;
        v74 = *(void **)(v73 + 8);
        if ( v74 )
        {
          v75 = (void *)qalloc_or_throw(*(_QWORD *)(v73 + 8));
          v130[2] = v74;
          v130[0] = v75;
          memcpy(v75, *(const void **)v73, (size_t)v74);
          v130[1] = v74;
        }
        memset(v131, 0, sizeof(v131));
        v70 = *(void **)(v73 + 32);
        if ( v70 )
        {
          v131[0] = (void *)qalloc_or_throw(*(_QWORD *)(v73 + 32));
          v131[2] = v70;
          memcpy(v131[0], *(const void **)(v73 + 24), (size_t)v70);
          v131[1] = v70;
        }
        v8 = *(_QWORD *)(a2 + 40) == 0;
        v71 = haystack;
        *(_QWORD *)&v132 = *(_QWORD *)(v73 + 48);
        if ( !v8 )
          v71 = *(const char **)(a2 + 32);
        sub_39ADA0(0x55u, v71, v130);
        if ( v131[0] )
        {
          v131[1] = nullptr;
          qfree(v131[0]);
        }
        if ( v130[0] )
        {
          v130[1] = nullptr;
          qfree(v130[0]);
        }
      }
      return v140 - __readfsqword(0x28u);
    default:
      return v140 - __readfsqword(0x28u);
  }
  return result;
}
