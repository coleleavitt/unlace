__int64 __fastcall sub_BF41E0(int *a1, unsigned int a2)
{
  int v4; // eax
  __int64 v5; // rcx
  _QWORD *v6; // r14
  _QWORD *v7; // r14
  __m128 v8; // xmm1
  __int64 v9; // r12
  __m128 v10; // xmm0
  __int64 v11; // rbp
  _QWORD *v12; // rbx
  __m128i v13; // xmm1
  size_t v14; // rdi
  _QWORD *v15; // rsi
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 i; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // rax
  _DWORD *v23; // rax
  __int64 *v24; // rbx
  _QWORD *v25; // r12
  __m128i v26; // xmm0
  __int64 v27; // rax
  __int64 result; // rax
  _DWORD *v29; // rdi
  unsigned int v30; // esi
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // r9d
  size_t v34; // rsi
  unsigned int v35; // r14d
  unsigned int *v36; // rax
  __int64 v37; // rax
  _DWORD *v38; // r14
  unsigned int v39; // esi
  __int64 v40; // rdi
  int v41; // esi
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rax
  _QWORD *v47; // r13
  _DWORD *v48; // rcx
  __int64 v49; // r9
  __int64 v50; // rdi
  _QWORD *v51; // r8
  _QWORD *j; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 v61; // rcx
  __int64 *v62; // rbx
  __int64 *v63; // r13
  _QWORD *v64; // r14
  __int64 *v65; // rbp
  __int64 *v66; // r12
  __int64 v67; // rsi
  __int64 v68; // rdi
  bool v69; // zf
  __int64 *v70; // rbp
  __int64 *v71; // r12
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rdi
  int v78; // edx
  __int64 *v79; // r13
  __int64 v80; // rax
  _QWORD *v81; // r12
  unsigned int v82; // eax
  _QWORD *v83; // rbp
  __int64 *v84; // rbx
  __int64 *v85; // r14
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 *v88; // rbx
  __int64 *v89; // r14
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 *v96; // r14
  __int64 v97; // rsi
  __int64 v98; // rsi
  unsigned int v99; // eax
  _QWORD *v100; // rbp
  __int64 *v101; // rbx
  __int64 *v102; // r13
  __int64 v103; // rsi
  __int64 v104; // rdi
  __int64 *v105; // r13
  __int64 v106; // rsi
  __int64 v107; // rdi
  unsigned int *v108; // rax
  __int64 v109; // rsi
  unsigned int *v110; // rsi
  _DWORD *v111; // r8
  _DWORD *v112; // rax
  __int64 v113; // rsi
  _DWORD *v114; // rdi
  unsigned int v115; // r9d
  unsigned int v116; // ecx
  __int64 v117; // rax
  int v118; // r9d
  _DWORD *v119; // rcx
  __int64 v120; // r14
  unsigned int v121; // ecx
  unsigned int v122; // edi
  __int64 v123; // rax
  int v124; // ecx
  _DWORD *v125; // rsi
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  __int64 v128; // r14
  _QWORD *v129; // rax
  char **v130; // r15
  char **v131; // r15
  char **v132; // r15
  char **exception; // r15
  __m128i v134; // [rsp+0h] [rbp-118h] BYREF
  __m128i v135; // [rsp+10h] [rbp-108h] BYREF
  __int64 v136; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v137; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v138; // [rsp+30h] [rbp-E8h]
  _QWORD *v139; // [rsp+38h] [rbp-E0h]
  _DWORD *v140; // [rsp+40h] [rbp-D8h]
  _QWORD *v141; // [rsp+48h] [rbp-D0h]
  __int64 v142; // [rsp+50h] [rbp-C8h]
  __int64 v143; // [rsp+58h] [rbp-C0h]
  _DWORD *v144; // [rsp+60h] [rbp-B8h]
  _QWORD *v145; // [rsp+68h] [rbp-B0h]
  __int64 v146[4]; // [rsp+80h] [rbp-98h] BYREF
  __m128 v147; // [rsp+A0h] [rbp-78h]
  __m128 v148; // [rsp+B0h] [rbp-68h]
  __int64 v149[11]; // [rsp+C0h] [rbp-58h] BYREF

  v4 = *a1;
  v5 = *((_QWORD *)a1 + 4);
  v6 = *((_QWORD **)a1 + 2);
  if ( a2 + 1 < *a1 )
  {
    v7 = &v6[7 * *(unsigned int *)(v5 + 4LL * (unsigned int)(v4 - 1))];
    v8 = (__m128)_mm_loadu_si128((const __m128i *)v7);
    v9 = v8.m128_u64[0];
    if ( v8.m128_u64[0] )
      ++*(_DWORD *)(v8.m128_u64[0] + 8);
    v10 = (__m128)_mm_loadu_si128((const __m128i *)v7 + 1);
    v11 = v10.m128_u64[0];
    if ( v10.m128_u64[0] )
      ++*(_DWORD *)(v10.m128_u64[0] + 8);
    v134.m128i_i64[0] = v7[4];
    if ( v134.m128i_i64[0] )
    {
      v149[0] = 0;
      v149[1] = 0;
      v147 = v8;
      v148 = v10;
      sub_BF3E00(v149, (__int64 **)v7 + 4);
      v9 = v8.m128_u64[0];
      v11 = v10.m128_u64[0];
      v137 = v8.m128_i64[1];
      v136 = v10.m128_i64[1];
      v134.m128i_i64[0] = v149[0];
    }
    else
    {
      _mm_storeh_ps((double *)&v137, v8);
      _mm_storeh_ps((double *)&v136, v10);
    }
    v12 = (_QWORD *)v7[5];
    if ( v12 )
    {
      v13 = _mm_cvtsi32_si128(*((_DWORD *)v12 - 1));
      v14 = 4LL * *((unsigned int *)v12 - 2) + 8;
      v135.m128i_i32[0] = *((_DWORD *)v12 - 2);
      LODWORD(v138) = _mm_cvtsi128_si32(v13);
      v15 = (_QWORD *)sub_186B270(v14);
      v12 = v15 + 1;
      v16 = v7[5];
      *v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v135.m128i_u32[0]), _mm_cvtsi32_si128(v138)).m128i_u64[0];
      if ( v16 )
      {
        v17 = 4LL * *(unsigned int *)(v16 - 4);
        if ( v17 )
        {
          for ( i = 0; i != v17; i += 4 )
            *(_DWORD *)((char *)v15 + i + 8) = *(_DWORD *)(v16 + i);
        }
      }
    }
    v19 = *((_QWORD **)a1 + 4);
    v20 = *((_QWORD *)a1 + 2);
    v135.m128i_i64[0] = v7[6];
    v149[2] = v135.m128i_i64[0];
    v21 = *((unsigned int *)v19 + a2);
    v138 = 4LL * a2;
    if ( (unsigned int)v21 < a1[1] )
    {
      if ( v20 )
        LODWORD(v139) = *(_DWORD *)(v20 - 4);
      else
        LODWORD(v139) = 0;
      if ( v19 )
        goto LABEL_34;
      v22 = (_QWORD *)sub_186B270(0x10u);
      v19 = v22 + 1;
      *v22 = 2;
      *((_QWORD *)a1 + 4) = v22 + 1;
      v23 = v22 + 1;
      while ( 1 )
      {
        *v23 = 0;
        ++*((_DWORD *)v19 - 1);
LABEL_34:
        v32 = *((unsigned int *)v19 - 1);
        if ( a2 < (unsigned int)v32 )
          break;
        if ( (_DWORD)v32 == *((_DWORD *)v19 - 2) )
        {
          v33 = (unsigned int)(3 * v32 + 1) >> 1;
          v34 = 4 * v33 + 8;
          v35 = v33;
          if ( 4 * (int)v32 + 8 >= (unsigned int)v34 || (unsigned int)v32 >= v33 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v146, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v146);
            sub_233E40((__int64)v146);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v36 = (unsigned int *)sub_186B300(v19 - 1, v34);
          v19 = v36 + 2;
          *v36 = v35;
          v37 = v36[1];
          *((_QWORD *)a1 + 4) = v19;
          v23 = (_DWORD *)v19 + v37;
        }
        else
        {
          v23 = (_DWORD *)v19 + v32;
        }
      }
      if ( a2 < a1[1] )
      {
        v108 = *((unsigned int **)a1 + 5);
        if ( v108 )
        {
          v109 = *(v108 - 1);
          if ( (_DWORD)v109 == *(v108 - 2) )
          {
            v121 = (unsigned int)(3 * v109 + 1) >> 1;
            v122 = 4 * v121 + 8;
            if ( 4 * (int)v109 + 8 >= v122 || (unsigned int)v109 >= v121 )
            {
              v132 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v146, "Overflow encountered when expanding vector");
              *v132 = (char *)off_1C63128;
              sub_2333C0(v132 + 1, v146);
              sub_233E40((__int64)v146);
              __cxa_throw(v132, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v140) = (unsigned int)(3 * v109 + 1) >> 1;
            v123 = sub_186B300(v108 - 2, v122);
            v124 = (int)v140;
            v125 = (_DWORD *)v123;
            v108 = (unsigned int *)(v123 + 8);
            *((_QWORD *)a1 + 5) = v108;
            *v125 = v124;
            v19 = *((_QWORD **)a1 + 4);
            v110 = &v108[v125[1]];
          }
          else
          {
            v110 = &v108[v109];
          }
        }
        else
        {
          v129 = (_QWORD *)sub_186B270(0x10u);
          *v129 = 2;
          v108 = (unsigned int *)(v129 + 1);
          v19 = *((_QWORD **)a1 + 4);
          *((_QWORD *)a1 + 5) = v108;
          v110 = v108;
        }
        *v110 = a2;
        ++*(v108 - 1);
        v111 = (_DWORD *)((char *)v19 + v138);
        v112 = *((_DWORD **)a1 + 6);
        if ( v112 )
        {
          v113 = (unsigned int)*(v112 - 1);
          if ( (_DWORD)v113 == *(v112 - 2) )
          {
            v115 = (unsigned int)(3 * v113 + 1) >> 1;
            v116 = 4 * v115 + 8;
            if ( 4 * (int)v113 + 8 >= v116 || (unsigned int)v113 >= v115 )
            {
              v130 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v146, "Overflow encountered when expanding vector");
              *v130 = (char *)off_1C63128;
              sub_2333C0(v130 + 1, v146);
              sub_233E40((__int64)v146);
              __cxa_throw(v130, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v141) = (unsigned int)(3 * v113 + 1) >> 1;
            v140 = v111;
            v117 = sub_186B300(v112 - 2, v116);
            v118 = (int)v141;
            v119 = (_DWORD *)v117;
            v112 = (_DWORD *)(v117 + 8);
            v120 = v138;
            *((_QWORD *)a1 + 6) = v112;
            v111 = v140;
            *v119 = v118;
            v114 = &v112[v119[1]];
            v19 = *((_QWORD **)a1 + 4);
            v38 = (_DWORD *)((char *)v19 + v120);
          }
          else
          {
            v114 = &v112[v113];
            v38 = (_DWORD *)((char *)v19 + v138);
          }
        }
        else
        {
          v140 = (_DWORD *)((char *)v19 + v138);
          v127 = (_QWORD *)sub_186B270(0x10u);
          v19 = *((_QWORD **)a1 + 4);
          v128 = v138;
          *v127 = 2;
          v112 = v127 + 1;
          *((_QWORD *)a1 + 6) = v112;
          v111 = v140;
          v114 = v112;
          v38 = (_DWORD *)((char *)v19 + v128);
        }
        *v114 = *v111;
        ++*(v112 - 1);
      }
      else
      {
        v38 = (_DWORD *)((char *)v19 + v138);
      }
      *v38 = (_DWORD)v139;
      v6 = *((_QWORD **)a1 + 2);
      if ( v6 )
      {
        v39 = *((_DWORD *)v6 - 1);
        if ( v39 == *((_DWORD *)v6 - 2) )
        {
          LODWORD(v140) = (3 * v39 + 1) >> 1;
          v45 = 56 * (_DWORD)v140 + 8;
          if ( 56 * v39 + 8 >= v45 || v39 >= (3 * v39 + 1) >> 1 )
          {
            v131 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v146, "Overflow encountered when expanding vector");
            *v131 = (char *)off_1C63128;
            sub_2333C0(v131 + 1, v146);
            sub_233E40((__int64)v146);
            __cxa_throw(v131, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v46 = sub_186B270(v45);
          v47 = *((_QWORD **)a1 + 2);
          v48 = (_DWORD *)v46;
          v6 = (_QWORD *)(v46 + 8);
          if ( v47 )
          {
            v49 = *((unsigned int *)v47 - 1);
            v50 = v46 + 8;
            *(_DWORD *)(v46 + 4) = v49;
            v51 = &v47[7 * v49];
            for ( j = v47; v51 != j; *(_QWORD *)(v50 - 8) = *(j - 1) )
            {
              v53 = j[1];
              j += 7;
              v50 += 56;
              *(_QWORD *)(v50 - 48) = v53;
              v54 = *(j - 7);
              *(j - 7) = 0;
              *(_QWORD *)(v50 - 56) = v54;
              *(_QWORD *)(v50 - 32) = *(j - 4);
              v55 = *(j - 5);
              *(j - 5) = 0;
              *(_QWORD *)(v50 - 40) = v55;
              v56 = *(j - 3);
              *(j - 3) = 0;
              *(_QWORD *)(v50 - 24) = v56;
              v57 = *(j - 2);
              *(j - 2) = 0;
              *(_QWORD *)(v50 - 16) = v57;
            }
            if ( (_DWORD)v49 )
            {
              v141 = v12;
              v58 = v47;
              v142 = v11;
              v143 = v9;
              v138 = (__int64)&v47[7 * v49];
              v144 = v48;
              v145 = v6;
              do
              {
                v59 = v58[5];
                if ( v59 )
                {
                  v139 = v58;
                  sub_186B220((void *)(v59 - 8));
                  v58 = v139;
                }
                v60 = v58[4];
                if ( v60 )
                {
                  v61 = *(unsigned int *)(v60 - 4);
                  if ( (_DWORD)v61 )
                  {
                    v62 = (__int64 *)v58[4];
                    v63 = (__int64 *)(v60 + 32 * v61);
                    v64 = v58;
                    do
                    {
                      v65 = (__int64 *)v62[3];
                      if ( v65 )
                      {
                        v66 = &v65[*((unsigned int *)v65 - 1)];
                        if ( v65 >= v66 )
                          goto LABEL_65;
                        do
                        {
                          while ( 1 )
                          {
                            v67 = *v65;
                            if ( *v65 )
                            {
                              v68 = v62[2];
                              v69 = (*(_DWORD *)(v67 + 8))-- == 1;
                              if ( v69 )
                                break;
                            }
                            if ( ++v65 >= v66 )
                              goto LABEL_64;
                          }
                          sub_15D7BC0(v68, v67);
                          ++v65;
                        }
                        while ( v65 < v66 );
LABEL_64:
                        v65 = (__int64 *)v62[3];
                        if ( v65 )
LABEL_65:
                          sub_186B220(v65 - 1);
                      }
                      v70 = (__int64 *)v62[1];
                      if ( v70 )
                      {
                        v71 = &v70[*((unsigned int *)v70 - 1)];
                        if ( v70 >= v71 )
                          goto LABEL_74;
                        do
                        {
                          while ( 1 )
                          {
                            v72 = *v70;
                            if ( *v70 )
                            {
                              v73 = *v62;
                              v69 = (*(_DWORD *)(v72 + 8))-- == 1;
                              if ( v69 )
                                break;
                            }
                            if ( ++v70 >= v71 )
                              goto LABEL_73;
                          }
                          sub_15D7BC0(v73, v72);
                          ++v70;
                        }
                        while ( v70 < v71 );
LABEL_73:
                        v70 = (__int64 *)v62[1];
                        if ( v70 )
LABEL_74:
                          sub_186B220(v70 - 1);
                      }
                      v62 += 4;
                    }
                    while ( v62 != v63 );
                    v58 = v64;
                    v60 = v64[4];
                  }
                  v139 = v58;
                  sub_186B220((void *)(v60 - 8));
                  v58 = v139;
                }
                v74 = v58[2];
                if ( v74 )
                {
                  v75 = v58[3];
                  v69 = (*(_DWORD *)(v74 + 8))-- == 1;
                  if ( v69 )
                  {
                    v139 = v58;
                    sub_15D7BC0(v75, v74);
                    v58 = v139;
                  }
                }
                v76 = *v58;
                if ( *v58 )
                {
                  v77 = v58[1];
                  v69 = (*(_DWORD *)(v76 + 8))-- == 1;
                  if ( v69 )
                  {
                    v139 = v58;
                    sub_15D7BC0(v77, v76);
                    v58 = v139;
                  }
                }
                v58 += 7;
              }
              while ( v58 != (_QWORD *)v138 );
              v12 = v141;
              v11 = v142;
              v9 = v143;
              v48 = v144;
              v6 = v145;
              v47 = *((_QWORD **)a1 + 2);
            }
            v138 = (__int64)v48;
            sub_186B220(v47 - 1);
            v48 = (_DWORD *)v138;
            v41 = *(_DWORD *)(v138 + 4) + 1;
            v42 = &v6[7 * *(unsigned int *)(v138 + 4)];
          }
          else
          {
            *(_DWORD *)(v46 + 4) = 0;
            v41 = 1;
            v42 = (__int64 *)(v46 + 8);
          }
          v78 = (int)v140;
          *((_QWORD *)a1 + 2) = v6;
          *v48 = v78;
          v19 = *((_QWORD **)a1 + 4);
        }
        else
        {
          v40 = v39;
          v41 = v39 + 1;
          v42 = &v6[7 * v40];
        }
      }
      else
      {
        v126 = (_QWORD *)sub_186B270(0x78u);
        *v126 = 2;
        v19 = *((_QWORD **)a1 + 4);
        v41 = 1;
        v6 = v126 + 1;
        *((_QWORD *)a1 + 2) = v126 + 1;
        v42 = v126 + 1;
      }
      v43 = v137;
      *v42 = v9;
      v42[2] = v11;
      v42[1] = v43;
      v44 = v136;
      v42[5] = (__int64)v12;
      v42[3] = v44;
      v42[4] = v134.m128i_i64[0];
      v42[6] = v135.m128i_i64[0];
      *((_DWORD *)v6 - 1) = v41;
      result = (unsigned int)(*a1 - 1);
      v29 = (_DWORD *)v19 + result;
      goto LABEL_28;
    }
    v26 = (__m128i)_mm_loadh_ps((const double *)v135.m128i_i64);
    v96 = (__int64 *)(v20 + 56 * v21);
    v97 = *v96;
    *v96 = v9;
    if ( v97 )
    {
      v69 = (*(_DWORD *)(v97 + 8))-- == 1;
      if ( v69 )
      {
        v135 = v26;
        sub_15D7BC0(v137, v97);
        v26 = _mm_load_si128(&v135);
      }
    }
    v98 = v96[2];
    v96[2] = v11;
    if ( v98 )
    {
      v69 = (*(_DWORD *)(v98 + 8))-- == 1;
      if ( v69 )
      {
        v135 = v26;
        sub_15D7BC0(v136, v98);
        v26 = _mm_load_si128(&v135);
      }
    }
    v25 = (_QWORD *)v96[4];
    if ( v25 )
    {
      v99 = *((_DWORD *)v25 - 1);
      if ( v99 )
      {
        v135 = v26;
        v100 = &v25[4 * v99];
        do
        {
          v101 = (__int64 *)v25[3];
          if ( v101 )
          {
            v102 = &v101[*((unsigned int *)v101 - 1)];
            if ( v101 >= v102 )
              goto LABEL_138;
            do
            {
              while ( 1 )
              {
                v103 = *v101;
                if ( *v101 )
                {
                  v104 = v25[2];
                  v69 = (*(_DWORD *)(v103 + 8))-- == 1;
                  if ( v69 )
                    break;
                }
                if ( ++v101 >= v102 )
                  goto LABEL_137;
              }
              sub_15D7BC0(v104, v103);
              ++v101;
            }
            while ( v101 < v102 );
LABEL_137:
            v101 = (__int64 *)v25[3];
            if ( v101 )
LABEL_138:
              sub_186B220(v101 - 1);
          }
          v24 = (__int64 *)v25[1];
          if ( v24 )
          {
            v105 = &v24[*((unsigned int *)v24 - 1)];
            if ( v24 >= v105 )
              goto LABEL_19;
            do
            {
              v106 = *v24;
              if ( *v24 )
              {
                v107 = *v25;
                v69 = (*(_DWORD *)(v106 + 8))-- == 1;
                if ( v69 )
                  sub_15D7BC0(v107, v106);
              }
              ++v24;
            }
            while ( v24 < v105 );
            v24 = (__int64 *)v25[1];
            if ( v24 )
LABEL_19:
              sub_186B220(v24 - 1);
          }
          v25 += 4;
        }
        while ( v25 != v100 );
        v26 = _mm_load_si128(&v135);
        v25 = (_QWORD *)v96[4];
      }
      v135 = v26;
      sub_186B220(v25 - 1);
      v26 = _mm_load_si128(&v135);
    }
    v96[4] = v134.m128i_i64[0];
    v27 = v96[5];
    if ( v27 )
    {
      v134 = v26;
      sub_186B220((void *)(v27 - 8));
      v26 = _mm_load_si128(&v134);
    }
    *(__m128i *)(v96 + 5) = v26;
    v5 = *((_QWORD *)a1 + 4);
    v6 = *((_QWORD **)a1 + 2);
    v4 = *a1;
  }
  result = (unsigned int)(v4 - 1);
  if ( !v6 )
    goto LABEL_30;
  v29 = (_DWORD *)(v5 + 4LL * (unsigned int)result);
LABEL_28:
  v30 = *((_DWORD *)v6 - 1);
  v31 = v30 - 1;
  if ( *v29 == (_DWORD)v31 && a1[1] < v30 )
  {
    v79 = &v6[7 * v31];
    v80 = v79[5];
    if ( v80 )
      sub_186B220((void *)(v80 - 8));
    v81 = (_QWORD *)v79[4];
    if ( v81 )
    {
      v82 = *((_DWORD *)v81 - 1);
      if ( v82 )
      {
        v83 = &v81[4 * v82];
        do
        {
          v84 = (__int64 *)v81[3];
          if ( v84 )
          {
            v85 = &v84[*((unsigned int *)v84 - 1)];
            if ( v84 >= v85 )
              goto LABEL_101;
            do
            {
              while ( 1 )
              {
                v86 = *v84;
                if ( *v84 )
                {
                  v87 = v81[2];
                  v69 = (*(_DWORD *)(v86 + 8))-- == 1;
                  if ( v69 )
                    break;
                }
                if ( ++v84 >= v85 )
                  goto LABEL_100;
              }
              sub_15D7BC0(v87, v86);
              ++v84;
            }
            while ( v84 < v85 );
LABEL_100:
            v84 = (__int64 *)v81[3];
            if ( v84 )
LABEL_101:
              sub_186B220(v84 - 1);
          }
          v88 = (__int64 *)v81[1];
          if ( v88 )
          {
            v89 = &v88[*((unsigned int *)v88 - 1)];
            if ( v88 >= v89 )
              goto LABEL_110;
            do
            {
              while ( 1 )
              {
                v90 = *v88;
                if ( *v88 )
                {
                  v91 = *v81;
                  v69 = (*(_DWORD *)(v90 + 8))-- == 1;
                  if ( v69 )
                    break;
                }
                if ( ++v88 >= v89 )
                  goto LABEL_109;
              }
              sub_15D7BC0(v91, v90);
              ++v88;
            }
            while ( v88 < v89 );
LABEL_109:
            v88 = (__int64 *)v81[1];
            if ( v88 )
LABEL_110:
              sub_186B220(v88 - 1);
          }
          v81 += 4;
        }
        while ( v81 != v83 );
        v81 = (_QWORD *)v79[4];
      }
      sub_186B220(v81 - 1);
    }
    v92 = v79[2];
    if ( v92 )
    {
      v93 = v79[3];
      v69 = (*(_DWORD *)(v92 + 8))-- == 1;
      if ( v69 )
        sub_15D7BC0(v93, v92);
    }
    v94 = *v79;
    if ( *v79 )
    {
      v95 = v79[1];
      v69 = (*(_DWORD *)(v94 + 8))-- == 1;
      if ( v69 )
        sub_15D7BC0(v95, v94);
    }
    --*(_DWORD *)(*((_QWORD *)a1 + 2) - 4LL);
    result = (unsigned int)(*a1 - 1);
  }
LABEL_30:
  *a1 = result;
  return result;
}

