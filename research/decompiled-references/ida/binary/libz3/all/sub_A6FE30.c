__int64 __fastcall sub_A6FE30(
        int a1,
        const __m128i *a2,
        _QWORD ***a3,
        __int64 a4,
        __int64 a5,
        char **a6,
        __m128i **a7,
        __m128i **a8)
{
  char **v8; // rbp
  char **exception; // rbp
  __int64 v10; // r13
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r10
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 result; // rax
  int v23; // ecx
  __m128i *v24; // rcx
  __int64 v25; // rax
  int v26; // esi
  __int64 v27; // rbx
  unsigned int v28; // r10d
  __int64 v29; // rdi
  __m128i v30; // xmm1
  __int8 v31; // r14
  __int64 v32; // r15
  int v33; // r9d
  __int64 v34; // r8
  __int64 v35; // rbp
  unsigned int v36; // eax
  unsigned int v37; // eax
  int v38; // esi
  __int64 v39; // rdx
  __int64 v40; // r11
  __int64 v41; // rax
  int v42; // edx
  int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  int v46; // esi
  unsigned int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // r9
  int v52; // ecx
  int v53; // eax
  unsigned int v54; // ebp
  size_t v55; // rsi
  __m128i v56; // xmm0
  __int64 v57; // rdx
  unsigned int v58; // eax
  unsigned int v59; // eax
  int v60; // esi
  __int64 v61; // rax
  __int64 v62; // r11
  int v63; // edx
  int v64; // edx
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // eax
  int v68; // esi
  int v69; // eax
  int v70; // esi
  __int64 v71; // r9
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rcx
  int v75; // edx
  __int64 v76; // rdx
  __m128i v78; // xmm0
  int v79; // edx
  int v80; // eax
  __int64 v81; // rax
  __m128i v83; // xmm0
  int v84; // eax
  unsigned int v85; // eax
  unsigned int v86; // eax
  __m128i *v87; // rax
  int v88; // edx
  __m128i *v89; // r10
  const __m128i *v90; // rcx
  __m128i *v91; // r11
  __int64 v92; // rdx
  __m128i *v93; // rsi
  __m128i *v94; // rdx
  int v95; // edx
  __m128i v96; // xmm0
  int v97; // eax
  unsigned int v98; // eax
  unsigned int v99; // eax
  unsigned int v100; // eax
  int v101; // esi
  int v102; // eax
  int v103; // esi
  __int64 v104; // r9
  __int64 v105; // rdi
  __int64 v106; // rax
  __int64 v107; // rcx
  int v108; // edx
  __int64 v109; // rdx
  __m128i v111; // xmm0
  int v112; // edx
  __m128i *v113; // rax
  unsigned int v114; // edx
  __int64 v115; // rcx
  int v116; // edx
  __m128i *v117; // rcx
  __m128i v118; // xmm0
  unsigned int v119; // eax
  unsigned int v120; // eax
  int v121; // eax
  __int64 v122; // rax
  __m128i v124; // xmm0
  int v125; // eax
  __m128i v126; // xmm0
  int v127; // eax
  unsigned int v128; // ebx
  unsigned int v129; // ecx
  unsigned int *v130; // rdx
  __int64 v131; // rcx
  __m128i *v132; // rax
  int v133; // edx
  __m128i *v134; // r10
  const __m128i *v135; // rcx
  __m128i *v136; // r11
  __int64 v137; // r8
  __m128i *v138; // r13
  const __m128i *v139; // rbx
  __int64 v140; // rdx
  __m128i *v141; // rsi
  __m128i *v142; // rdx
  _QWORD *v143; // rax
  __int64 v147; // [rsp+20h] [rbp-A8h]
  size_t v148; // [rsp+20h] [rbp-A8h]
  size_t v149; // [rsp+20h] [rbp-A8h]
  __int64 v150; // [rsp+20h] [rbp-A8h]
  int v151; // [rsp+28h] [rbp-A0h]
  int v152; // [rsp+28h] [rbp-A0h]
  int v153; // [rsp+28h] [rbp-A0h]
  int v154; // [rsp+30h] [rbp-98h]
  int v155; // [rsp+30h] [rbp-98h]
  int v156[4]; // [rsp+60h] [rbp-68h] BYREF
  __m128i si128; // [rsp+70h] [rbp-58h] BYREF
  int v158; // [rsp+80h] [rbp-48h]

  v10 = a5;
  v13 = *(unsigned int *)(a5 + 8);
  v14 = a2->m128i_i64[1];
  v15 = *(_QWORD *)a5;
  if ( a2->m128i_i8[0] )
  {
    v16 = 32LL * (unsigned int)v13;
    v17 = 33
        * ((4097 * *(_DWORD *)(v14 + 16) + 2127912214)
         ^ ((unsigned int)(4097 * *(_DWORD *)(v14 + 16) + 2127912214) >> 19)
         ^ 0xC761C23C);
    v18 = (((9 * (((v17 + 374761393) << 9) ^ (v17 - 369570787)) - 42973499)
          ^ ((9 * (((v17 + 374761393) << 9) ^ (v17 - 369570787)) - 42973499) >> 16)
          ^ 0xB55A4F09)
         - 1725461304)
        ^ 0xD8733800;
    v19 = (v18 + (v18 ^ ((1725461304 - v18) << 16)) - 1725461304) ^ ((1725461304 - v18) << 10);
    v20 = 32LL * (v19 & (unsigned int)(v13 - 1));
    v21 = v15 + v20;
    result = v15 + v20;
    if ( v16 == v20 )
      goto LABEL_33;
    v23 = *(_DWORD *)(result + 4);
    if ( v23 == 2 )
      goto LABEL_7;
LABEL_4:
    if ( v23 )
    {
      while ( 1 )
      {
        result += 32;
        if ( result == v15 + v16 )
          break;
        v23 = *(_DWORD *)(result + 4);
        if ( v23 != 2 )
          goto LABEL_4;
LABEL_7:
        if ( *(_DWORD *)result == v19
          && *(_BYTE *)(result + 8)
          && *(_DWORD *)(*(_QWORD *)(result + 16) + 16LL) == *(_DWORD *)(v14 + 16) )
        {
          goto LABEL_10;
        }
      }
LABEL_33:
      while ( v15 != v21 )
      {
        v43 = *(_DWORD *)(v15 + 4);
        if ( v43 == 2 )
        {
          if ( *(_DWORD *)v15 == v19
            && *(_BYTE *)(v15 + 8)
            && *(_DWORD *)(*(_QWORD *)(v15 + 16) + 16LL) == *(_DWORD *)(v14 + 16) )
          {
            goto LABEL_38;
          }
        }
        else if ( !v43 )
        {
          goto LABEL_11;
        }
        v15 += 32;
      }
    }
    goto LABEL_11;
  }
  v44 = 33
      * ((4097 * **(_DWORD **)v14 + 2127912214)
       ^ ((unsigned int)(4097 * **(_DWORD **)v14 + 2127912214) >> 19)
       ^ 0xC761C23C);
  v45 = (((9 * (((v44 + 374761393) << 9) ^ (v44 - 369570787)) - 42973499)
        ^ ((9 * (((v44 + 374761393) << 9) ^ (v44 - 369570787)) - 42973499) >> 16)
        ^ 0xB55A4F09)
       + 1978921976)
      ^ 0xC0C0800;
  v46 = (v45 + (v45 ^ ((-1978921976 - v45) << 16)) + 1978921976) ^ ((-1978921976 - v45) << 10);
  v47 = v13 - 1;
  v48 = 32 * v13;
  v49 = v15 + v48;
  v50 = 32LL * (v46 & v47);
  v51 = v15 + v50;
  if ( v48 != v50 )
  {
    result = v15 + v50;
    while ( 1 )
    {
      v52 = *(_DWORD *)(result + 4);
      if ( v52 != 2 )
        break;
      if ( v46 != *(_DWORD *)result || *(_BYTE *)(result + 8) )
      {
LABEL_42:
        result += 32;
        if ( v49 == result )
          goto LABEL_48;
      }
      else
      {
        if ( v14 == *(_QWORD *)(result + 16) )
          goto LABEL_10;
        result += 32;
        if ( v49 == result )
          goto LABEL_48;
      }
    }
    if ( !v52 )
      goto LABEL_11;
    goto LABEL_42;
  }
LABEL_48:
  if ( v15 == v51 )
    goto LABEL_11;
  while ( 1 )
  {
    v53 = *(_DWORD *)(v15 + 4);
    if ( v53 != 2 )
    {
      if ( !v53 )
        goto LABEL_11;
      goto LABEL_51;
    }
    if ( v46 == *(_DWORD *)v15 && !*(_BYTE *)(v15 + 8) && v14 == *(_QWORD *)(v15 + 16) )
      break;
LABEL_51:
    v15 += 32;
    if ( v51 == v15 )
      goto LABEL_11;
  }
LABEL_38:
  result = v15;
LABEL_10:
  if ( *(_DWORD *)(result + 24) == 2 )
    return result;
LABEL_11:
  v24 = *a7;
  if ( *a7 )
  {
    v25 = v24[-1].m128i_u32[3];
    if ( (_DWORD)v25 == v24[-1].m128i_i32[2] )
    {
      v54 = (unsigned int)(3 * v25 + 1) >> 1;
      v55 = 16 * v54 + 8;
      if ( 16 * (int)v25 + 8 >= (unsigned int)v55 || (unsigned int)v25 >= v54 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(si128.m128i_i64, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &si128);
        sub_233E40((__int64)&si128);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      result = sub_186B300(&v24[-1].m128i_u64[1], v55);
      v56 = _mm_loadu_si128(a2);
      v57 = *(unsigned int *)(result + 4);
      v24 = (__m128i *)(result + 8);
      *(_DWORD *)result = v54;
      *a7 = (__m128i *)(result + 8);
      v26 = v57 + 1;
      *(__m128i *)(result + 8 + 16 * v57) = v56;
      *(_DWORD *)(result + 4) = v57 + 1;
    }
    else
    {
      v26 = v25 + 1;
      result = 16 * v25;
      *(__m128i *)((char *)v24 + result) = _mm_loadu_si128(a2);
      v24[-1].m128i_i32[3] = v26;
    }
  }
  else
  {
    result = sub_186B270(0x28u);
    v118 = _mm_loadu_si128(a2);
    v26 = 1;
    v24 = (__m128i *)(result + 8);
    *a7 = (__m128i *)(result + 8);
    *(_QWORD *)result = 0x100000002LL;
    *(__m128i *)(result + 8) = v118;
  }
  if ( !v26 )
    return result;
  while ( 2 )
  {
    v27 = *(_QWORD *)v10;
    v28 = *(_DWORD *)(v10 + 8);
    v29 = (unsigned int)(v26 - 1);
    v30 = _mm_loadu_si128(&v24[v29]);
    *(__m128i *)v156 = v30;
    v31 = v30.m128i_i8[0];
    v32 = v30.m128i_i64[1];
    if ( v30.m128i_i8[0] )
    {
      v33 = v28 - 1;
      v34 = 32LL * v28;
      v35 = v27 + v34;
      v36 = 33
          * ((4097 * *(_DWORD *)(v30.m128i_i64[1] + 16) + 2127912214)
           ^ ((unsigned int)(4097 * *(_DWORD *)(v30.m128i_i64[1] + 16) + 2127912214) >> 19)
           ^ 0xC761C23C);
      v37 = (((9 * (((v36 + 374761393) << 9) ^ (v36 - 369570787)) - 42973499)
            ^ ((9 * (((v36 + 374761393) << 9) ^ (v36 - 369570787)) - 42973499) >> 16)
            ^ 0xB55A4F09)
           - 1725461304)
          ^ 0xD8733800;
      v38 = (v37 + (v37 ^ ((1725461304 - v37) << 16)) - 1725461304) ^ ((1725461304 - v37) << 10);
      v39 = 32LL * ((v28 - 1) & v38);
      v40 = v27 + v39;
      v41 = v27 + v39;
      if ( v34 != v39 )
      {
        v147 = v27 + v39;
        do
        {
          v42 = *(_DWORD *)(v41 + 4);
          if ( v42 == 2 )
          {
            if ( *(_DWORD *)v41 == v38
              && *(_BYTE *)(v41 + 8)
              && *(_DWORD *)(*(_QWORD *)(v41 + 16) + 16LL) == *(_DWORD *)(v30.m128i_i64[1] + 16) )
            {
              goto LABEL_24;
            }
          }
          else if ( !v42 )
          {
            goto LABEL_78;
          }
          v41 += 32;
        }
        while ( v41 != v35 );
        v40 = v147;
      }
      v41 = v27;
      if ( v27 != v40 )
      {
        while ( 1 )
        {
          v95 = *(_DWORD *)(v41 + 4);
          if ( v95 == 2 )
          {
            if ( *(_DWORD *)v41 == v38
              && *(_BYTE *)(v41 + 8)
              && *(_DWORD *)(*(_QWORD *)(v41 + 16) + 16LL) == *(_DWORD *)(v30.m128i_i64[1] + 16) )
            {
              goto LABEL_24;
            }
          }
          else if ( !v95 )
          {
            goto LABEL_78;
          }
          v41 += 32;
          if ( v41 == v40 )
            goto LABEL_78;
        }
      }
      goto LABEL_78;
    }
    v33 = v28 - 1;
    v34 = 32LL * v28;
    v35 = v27 + v34;
    v58 = 33
        * ((4097 * **(_DWORD **)v30.m128i_i64[1] + 2127912214)
         ^ ((unsigned int)(4097 * **(_DWORD **)v30.m128i_i64[1] + 2127912214) >> 19)
         ^ 0xC761C23C);
    v59 = (((9 * (((v58 + 374761393) << 9) ^ (v58 - 369570787)) - 42973499)
          ^ ((9 * (((v58 + 374761393) << 9) ^ (v58 - 369570787)) - 42973499) >> 16)
          ^ 0xB55A4F09)
         + 1978921976)
        ^ 0xC0C0800;
    v60 = (v59 + (v59 ^ ((-1978921976 - v59) << 16)) + 1978921976) ^ ((-1978921976 - v59) << 10);
    v61 = 32LL * (v60 & (v28 - 1));
    v62 = v27 + v61;
    if ( v61 == v34 )
    {
      if ( v27 == v62 )
        goto LABEL_78;
      v41 = v27;
      while ( 1 )
      {
LABEL_73:
        v64 = *(_DWORD *)(v41 + 4);
        if ( v64 == 2 )
        {
          if ( v60 == *(_DWORD *)v41 && !*(_BYTE *)(v41 + 8) && v30.m128i_i64[1] == *(_QWORD *)(v41 + 16) )
          {
LABEL_24:
            result = *(unsigned int *)(v41 + 24);
            if ( (_DWORD)result == 1 )
            {
              v98 = 4 * (*(_DWORD *)(v10 + 12) + *(_DWORD *)(v10 + 16));
              si128 = _mm_load_si128((const __m128i *)v156);
              if ( 3 * v28 < v98 )
              {
                v152 = 2 * v28;
                v149 = 64LL * v28;
                v132 = (__m128i *)sub_186B270(v149);
                v34 = v149;
                v133 = v152;
                v27 = (__int64)v132;
                v134 = &v132[v149 / 0x10];
                if ( v152 )
                {
                  do
                  {
                    v132->m128i_i64[0] = 0;
                    v132 += 2;
                    v132[-2].m128i_i8[8] = 1;
                    v132[-1].m128i_i64[0] = 0;
                  }
                  while ( v132 != v134 );
                }
                v135 = *(const __m128i **)v10;
                v33 = v152 - 1;
                v35 = (__int64)v134;
                v136 = (__m128i *)(*(_QWORD *)v10 + 32LL * *(unsigned int *)(v10 + 8));
                if ( *(__m128i **)v10 != v136 )
                {
                  v137 = v10;
                  v138 = (__m128i *)v27;
                  v139 = v135;
                  do
                  {
                    if ( v139->m128i_i32[1] == 2 )
                    {
                      v140 = 32LL * (v139->m128i_i32[0] & (unsigned int)(v152 - 1));
                      v141 = &v138[(unsigned __int64)v140 / 0x10];
                      if ( v140 == v149 )
                      {
LABEL_207:
                        if ( v141 == v138 )
                        {
LABEL_213:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v142 = v138;
                        while ( v142->m128i_i32[1] )
                        {
                          v142 += 2;
                          if ( v141 == v142 )
                            goto LABEL_213;
                        }
                      }
                      else
                      {
                        v142 = &v138[(unsigned __int64)v140 / 0x10];
                        while ( v142->m128i_i32[1] )
                        {
                          v142 += 2;
                          if ( v134 == v142 )
                            goto LABEL_207;
                        }
                      }
                      *v142 = _mm_loadu_si128(v139);
                      v142[1] = _mm_loadu_si128(v139 + 1);
                    }
                    v139 += 2;
                  }
                  while ( v136 != v139 );
                  v27 = (__int64)v138;
                  v10 = v137;
                  v34 = v149;
                  v31 = v30.m128i_i8[0];
                  v136 = *(__m128i **)v10;
                  v35 = (__int64)v134;
                  v33 = v152 - 1;
                  v133 = v152;
                  v32 = v30.m128i_i64[1];
                }
                if ( v136 )
                {
                  v155 = v133;
                  v153 = v33;
                  v150 = v34;
                  sub_186B220(v136);
                  v133 = v155;
                  v33 = v153;
                  v34 = v150;
                }
                *(_QWORD *)v10 = v27;
                *(_DWORD *)(v10 + 8) = v133;
                *(_DWORD *)(v10 + 16) = 0;
              }
              if ( v31 )
              {
                v119 = 33
                     * ((4097 * *(_DWORD *)(v32 + 16) + 2127912214)
                      ^ ((unsigned int)(4097 * *(_DWORD *)(v32 + 16) + 2127912214) >> 19)
                      ^ 0xC761C23C);
                v120 = (((9 * (((v119 + 374761393) << 9) ^ (v119 - 369570787)) - 42973499)
                       ^ ((9 * (((v119 + 374761393) << 9) ^ (v119 - 369570787)) - 42973499) >> 16)
                       ^ 0xB55A4F09)
                      - 1725461304)
                     ^ 0xD8733800;
                v101 = (1725461304 - v120) << 10;
                v102 = v120 + (v120 ^ ((1725461304 - v120) << 16)) - 1725461304;
              }
              else
              {
                v99 = 33
                    * ((4097 * **(_DWORD **)v32 + 2127912214)
                     ^ ((unsigned int)(4097 * **(_DWORD **)v32 + 2127912214) >> 19)
                     ^ 0xC761C23C);
                v100 = (((9 * (((v99 + 374761393) << 9) ^ (v99 - 369570787)) - 42973499)
                       ^ ((9 * (((v99 + 374761393) << 9) ^ (v99 - 369570787)) - 42973499) >> 16)
                       ^ 0xB55A4F09)
                      + 1978921976)
                     ^ 0xC0C0800;
                v101 = (-1978921976 - v100) << 10;
                v102 = v100 + (v100 ^ ((-1978921976 - v100) << 16)) + 1978921976;
              }
              v103 = v102 ^ v101;
              v104 = 32LL * (v103 & (unsigned int)v33);
              v105 = v27 + v104;
              if ( v34 == v104 )
              {
                v107 = 0;
              }
              else
              {
                v106 = v27 + v104;
                v107 = 0;
                do
                {
                  v108 = *(_DWORD *)(v106 + 4);
                  if ( v108 == 2 )
                  {
                    if ( *(_DWORD *)v106 == v103 && v31 == *(_BYTE *)(v106 + 8) )
                    {
                      v109 = *(_QWORD *)(v106 + 16);
                      if ( v31 ? *(_DWORD *)(v109 + 16) == *(_DWORD *)(v32 + 16) : v32 == v109 )
                      {
                        si128.m128i_i8[0] = v31;
                        si128.m128i_i64[1] = v32;
                        v111 = _mm_load_si128(&si128);
                        v158 = 2;
                        *(__m128i *)(v106 + 8) = v111;
                        v112 = v158;
                        *(_DWORD *)(v106 + 4) = 2;
                        *(_DWORD *)(v106 + 24) = v112;
LABEL_147:
                        v113 = *a8;
                        if ( *a8 )
                        {
                          v114 = v113[-1].m128i_u32[3];
                          if ( v114 == v113[-1].m128i_i32[2] )
                          {
                            v128 = (3 * v114 + 1) >> 1;
                            v129 = 16 * v128 + 8;
                            if ( 16 * v114 + 8 >= v129 || v114 >= v128 )
                            {
                              v8 = (char **)__cxa_allocate_exception(0x28u);
                              sub_24ABB0(si128.m128i_i64, "Overflow encountered when expanding vector");
                              *v8 = (char *)off_1C63128;
                              sub_2333C0(v8 + 1, &si128);
                              sub_233E40((__int64)&si128);
                              __cxa_throw(
                                v8,
                                (struct type_info *)&`typeinfo for'default_exception,
                                (void (*)(void *))sub_230E50);
                            }
                            v130 = (unsigned int *)sub_186B300(&v113[-1].m128i_u64[1], v129);
                            v113 = (__m128i *)(v130 + 2);
                            v131 = v130[1];
                            *v130 = v128;
                            *a8 = (__m128i *)(v130 + 2);
                            LODWORD(v130) = v131;
                            v117 = &v113[v131];
                            v116 = (_DWORD)v130 + 1;
                          }
                          else
                          {
                            v115 = v114;
                            v116 = v114 + 1;
                            v117 = &v113[v115];
                          }
                        }
                        else
                        {
                          v143 = (_QWORD *)sub_186B270(0x28u);
                          v116 = 1;
                          *v143 = 2;
                          v113 = (__m128i *)(v143 + 1);
                          *a8 = v113;
                          v117 = v113;
                        }
                        *v117 = _mm_load_si128((const __m128i *)v156);
                        v113[-1].m128i_i32[3] = v116;
                        result = (__int64)a7;
                        v24 = *a7;
                        goto LABEL_28;
                      }
                    }
                  }
                  else
                  {
                    if ( !v108 )
                    {
                      if ( !v107 )
                      {
                        v107 = v106;
                        goto LABEL_182;
                      }
                      goto LABEL_181;
                    }
                    v107 = v106;
                  }
                  v106 += 32;
                }
                while ( v35 != v106 );
              }
              if ( v27 == v105 )
              {
LABEL_186:
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              while ( 1 )
              {
                v121 = *(_DWORD *)(v27 + 4);
                if ( v121 == 2 )
                {
                  if ( *(_DWORD *)v27 == v103 && v31 == *(_BYTE *)(v27 + 8) )
                  {
                    v122 = *(_QWORD *)(v27 + 16);
                    if ( v31 ? *(_DWORD *)(v122 + 16) == *(_DWORD *)(v32 + 16) : v32 == v122 )
                    {
                      si128.m128i_i8[0] = v31;
                      si128.m128i_i64[1] = v32;
                      v124 = _mm_load_si128(&si128);
                      v158 = 2;
                      *(__m128i *)(v27 + 8) = v124;
                      v125 = v158;
                      *(_DWORD *)(v27 + 4) = 2;
                      *(_DWORD *)(v27 + 24) = v125;
                      goto LABEL_147;
                    }
                  }
                }
                else
                {
                  if ( !v121 )
                  {
                    if ( !v107 )
                    {
                      v107 = v27;
                      goto LABEL_182;
                    }
LABEL_181:
                    --*(_DWORD *)(v10 + 16);
LABEL_182:
                    si128.m128i_i8[0] = v31;
                    si128.m128i_i64[1] = v32;
                    v126 = _mm_load_si128(&si128);
                    v158 = 2;
                    *(__m128i *)(v107 + 8) = v126;
                    v127 = v158;
                    *(_DWORD *)(v107 + 4) = 2;
                    *(_DWORD *)(v107 + 24) = v127;
                    *(_DWORD *)v107 = v103;
                    ++*(_DWORD *)(v10 + 12);
                    goto LABEL_147;
                  }
                  v107 = v27;
                }
                v27 += 32;
                if ( v105 == v27 )
                  goto LABEL_186;
              }
            }
            if ( (_DWORD)result == 2 )
            {
              v24[-1].m128i_i32[3] = v29;
              goto LABEL_29;
            }
            if ( (_DWORD)result )
            {
              sub_1872CE0("");
              sub_1873130(114, 261);
            }
            goto LABEL_78;
          }
        }
        else if ( !v64 )
        {
          goto LABEL_78;
        }
        v41 += 32;
        if ( v62 == v41 )
          goto LABEL_78;
      }
    }
    v41 = v27 + v61;
    while ( 2 )
    {
      while ( 2 )
      {
        v63 = *(_DWORD *)(v41 + 4);
        if ( v63 != 2 )
        {
          if ( !v63 )
            goto LABEL_78;
LABEL_63:
          v41 += 32;
          if ( v35 == v41 )
            goto LABEL_69;
          continue;
        }
        break;
      }
      if ( v60 != *(_DWORD *)v41 || *(_BYTE *)(v41 + 8) )
        goto LABEL_63;
      if ( v30.m128i_i64[1] == *(_QWORD *)(v41 + 16) )
        goto LABEL_24;
      v41 += 32;
      if ( v35 != v41 )
        continue;
      break;
    }
LABEL_69:
    v41 = v27;
    if ( v27 != v62 )
      goto LABEL_73;
LABEL_78:
    v65 = 4 * (*(_DWORD *)(v10 + 12) + *(_DWORD *)(v10 + 16));
    si128 = _mm_load_si128((const __m128i *)v156);
    if ( 3 * v28 < v65 )
    {
      v151 = 2 * v28;
      v148 = 64LL * v28;
      v87 = (__m128i *)sub_186B270(v148);
      v34 = v148;
      v88 = v151;
      v27 = (__int64)v87;
      v89 = &v87[v148 / 0x10];
      if ( v151 )
      {
        do
        {
          v87->m128i_i64[0] = 0;
          v87 += 2;
          v87[-2].m128i_i8[8] = 1;
          v87[-1].m128i_i64[0] = 0;
        }
        while ( v87 != v89 );
      }
      v90 = *(const __m128i **)v10;
      v33 = v151 - 1;
      v35 = (__int64)v89;
      v91 = (__m128i *)(*(_QWORD *)v10 + 32LL * *(unsigned int *)(v10 + 8));
      if ( *(__m128i **)v10 != v91 )
      {
        do
        {
          if ( v90->m128i_i32[1] == 2 )
          {
            v92 = 32LL * (v90->m128i_i32[0] & (unsigned int)v33);
            v93 = (__m128i *)(v27 + v92);
            if ( v92 == v148 )
            {
LABEL_161:
              if ( v93 == (__m128i *)v27 )
              {
LABEL_202:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v94 = (__m128i *)v27;
              while ( v94->m128i_i32[1] )
              {
                v94 += 2;
                if ( v93 == v94 )
                  goto LABEL_202;
              }
            }
            else
            {
              v94 = (__m128i *)(v27 + v92);
              while ( v94->m128i_i32[1] )
              {
                v94 += 2;
                if ( v89 == v94 )
                  goto LABEL_161;
              }
            }
            *v94 = _mm_loadu_si128(v90);
            v94[1] = _mm_loadu_si128(v90 + 1);
          }
          v90 += 2;
        }
        while ( v91 != v90 );
        v91 = *(__m128i **)v10;
        v88 = v151;
      }
      if ( v91 )
      {
        v154 = v88;
        sub_186B220(v91);
        v88 = v154;
        v33 = v151 - 1;
        v34 = v148;
      }
      *(_QWORD *)v10 = v27;
      *(_DWORD *)(v10 + 8) = v88;
      *(_DWORD *)(v10 + 16) = 0;
    }
    if ( v30.m128i_i8[0] )
    {
      v85 = 33
          * ((4097 * *(_DWORD *)(v30.m128i_i64[1] + 16) + 2127912214)
           ^ ((unsigned int)(4097 * *(_DWORD *)(v30.m128i_i64[1] + 16) + 2127912214) >> 19)
           ^ 0xC761C23C);
      v86 = (((9 * (((v85 + 374761393) << 9) ^ (v85 - 369570787)) - 42973499)
            ^ ((9 * (((v85 + 374761393) << 9) ^ (v85 - 369570787)) - 42973499) >> 16)
            ^ 0xB55A4F09)
           - 1725461304)
          ^ 0xD8733800;
      v68 = (1725461304 - v86) << 10;
      v69 = v86 + (v86 ^ ((1725461304 - v86) << 16)) - 1725461304;
    }
    else
    {
      v66 = 33
          * ((4097 * **(_DWORD **)v30.m128i_i64[1] + 2127912214)
           ^ ((unsigned int)(4097 * **(_DWORD **)v30.m128i_i64[1] + 2127912214) >> 19)
           ^ 0xC761C23C);
      v67 = (((9 * (((v66 + 374761393) << 9) ^ (v66 - 369570787)) - 42973499)
            ^ ((9 * (((v66 + 374761393) << 9) ^ (v66 - 369570787)) - 42973499) >> 16)
            ^ 0xB55A4F09)
           + 1978921976)
          ^ 0xC0C0800;
      v68 = (-1978921976 - v67) << 10;
      v69 = v67 + (v67 ^ ((-1978921976 - v67) << 16)) + 1978921976;
    }
    v70 = v69 ^ v68;
    v71 = 32LL * (v70 & (unsigned int)v33);
    v72 = v27 + v71;
    if ( v71 != v34 )
    {
      v73 = v27 + v71;
      v74 = 0;
      while ( 1 )
      {
        v75 = *(_DWORD *)(v73 + 4);
        if ( v75 == 2 )
        {
          if ( *(_DWORD *)v73 == v70 && v30.m128i_i8[0] == *(_BYTE *)(v73 + 8) )
          {
            v76 = *(_QWORD *)(v73 + 16);
            if ( v30.m128i_i8[0] ? *(_DWORD *)(v76 + 16) == *(_DWORD *)(v30.m128i_i64[1] + 16) : v30.m128i_i64[1] == v76 )
            {
              si128.m128i_i8[0] = v30.m128i_i8[0];
              si128.m128i_i64[1] = v30.m128i_i64[1];
              v78 = _mm_load_si128(&si128);
              v158 = 1;
              *(__m128i *)(v73 + 8) = v78;
              v79 = v158;
              *(_DWORD *)(v73 + 4) = 2;
              *(_DWORD *)(v73 + 24) = v79;
              goto LABEL_131;
            }
          }
        }
        else
        {
          if ( !v75 )
          {
            if ( v74 )
              goto LABEL_129;
            v74 = v73;
            goto LABEL_130;
          }
          v74 = v73;
        }
        v73 += 32;
        if ( v73 == v35 )
          goto LABEL_96;
      }
    }
    v74 = 0;
LABEL_96:
    while ( 2 )
    {
      if ( v72 == v27 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v80 = *(_DWORD *)(v27 + 4);
      if ( v80 == 2 )
      {
        if ( *(_DWORD *)v27 == v70 && v30.m128i_i8[0] == *(_BYTE *)(v27 + 8) )
        {
          v81 = *(_QWORD *)(v27 + 16);
          if ( v30.m128i_i8[0] ? *(_DWORD *)(v81 + 16) == *(_DWORD *)(v30.m128i_i64[1] + 16) : v30.m128i_i64[1] == v81 )
          {
            si128.m128i_i8[0] = v30.m128i_i8[0];
            si128.m128i_i64[1] = v30.m128i_i64[1];
            v83 = _mm_load_si128(&si128);
            v158 = 1;
            *(__m128i *)(v27 + 8) = v83;
            v84 = v158;
            *(_DWORD *)(v27 + 4) = 2;
            *(_DWORD *)(v27 + 24) = v84;
            goto LABEL_131;
          }
        }
        goto LABEL_95;
      }
      if ( v80 )
      {
        v74 = v27;
LABEL_95:
        v27 += 32;
        continue;
      }
      break;
    }
    if ( v74 )
LABEL_129:
      --*(_DWORD *)(v10 + 16);
    else
      v74 = v27;
LABEL_130:
    si128.m128i_i8[0] = v30.m128i_i8[0];
    si128.m128i_i64[1] = v30.m128i_i64[1];
    v96 = _mm_load_si128(&si128);
    v158 = 1;
    *(__m128i *)(v74 + 8) = v96;
    v97 = v158;
    *(_DWORD *)(v74 + 4) = 2;
    *(_DWORD *)(v74 + 24) = v97;
    *(_DWORD *)v74 = v70;
    ++*(_DWORD *)(v10 + 12);
LABEL_131:
    sub_A6F370(a1, (unsigned __int8 *)v156, a3, a4, (__int64 *)v10, a6, a7);
    result = (__int64)a7;
    v24 = *a7;
LABEL_28:
    if ( v24 )
    {
LABEL_29:
      v26 = v24[-1].m128i_i32[3];
      if ( !v26 )
        return result;
      continue;
    }
    return result;
  }
}

