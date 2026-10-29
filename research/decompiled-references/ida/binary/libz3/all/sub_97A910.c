__int64 __fastcall sub_97A910(__int64 a1, _DWORD *a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **exception; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **v7; // rbp
  char **v8; // rbp
  char **v9; // rbp
  unsigned __int64 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // eax
  __m128i *v16; // r13
  unsigned int v17; // r10d
  __int64 v18; // rsi
  __m128i *v19; // r13
  __int64 *v20; // rdx
  _QWORD *v21; // rax
  __int64 result; // rax
  unsigned int v23; // edx
  bool v24; // zf
  __m128i *v25; // r13
  unsigned int v26; // eax
  __int64 v27; // rdi
  unsigned int v28; // ecx
  __int64 v29; // r8
  unsigned int v30; // edx
  unsigned int v31; // edx
  unsigned int v32; // edx
  __m128i *v33; // rcx
  __int64 *v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // r9
  _QWORD *v37; // rax
  unsigned int v38; // eax
  __m128i *v39; // r14
  __m128i *v40; // rcx
  __int64 *v41; // r8
  char v42; // r9
  __int64 v43; // rdx
  unsigned int v44; // eax
  char *v45; // r13
  unsigned int v46; // edx
  __int64 v47; // rdi
  __int64 v48; // rsi
  int v49; // r9d
  int v50; // ecx
  __int64 *v51; // rdx
  __int64 v52; // rsi
  unsigned int v53; // esi
  unsigned int v54; // edi
  __int64 v55; // r14
  int v56; // eax
  unsigned int v57; // r15d
  __m128i *v58; // rax
  __m128i *v59; // r12
  __m128i *v60; // r13
  __int64 v61; // r9
  char *v62; // rax
  __m128i *v63; // r15
  char *v64; // rdx
  char *v65; // r9
  char *v66; // rcx
  char *v67; // rdx
  __m128i *v68; // r14
  __int64 v69; // rcx
  unsigned int v70; // ecx
  unsigned int v71; // edi
  unsigned int v72; // r15d
  unsigned int v73; // r14d
  unsigned int v74; // r13d
  __m128i *v75; // rax
  __m128i *v76; // rdi
  __m128i *v77; // r11
  __int64 v78; // r12
  char *v79; // r9
  char *v80; // r12
  __m128i *v81; // rbp
  char *v82; // r8
  unsigned int v83; // ecx
  __int64 v84; // rsi
  unsigned int v85; // esi
  unsigned int v86; // edi
  unsigned int v87; // r15d
  unsigned int v88; // r14d
  __int64 v89; // r13
  unsigned int v90; // r12d
  __m128i *v91; // rax
  __m128i *v92; // rdi
  __m128i *v93; // r10
  __int64 v94; // r11
  const double *v95; // r9
  __m128i *v96; // rbp
  const double *v97; // r11
  const double *v98; // rcx
  double *v99; // rdi
  unsigned int v100; // r8d
  __int64 v101; // rsi
  unsigned int v102; // edi
  unsigned int v103; // eax
  unsigned int v104; // esi
  unsigned int v105; // r14d
  unsigned int v106; // r12d
  __int64 v107; // r15
  unsigned int v108; // r13d
  __m128i *v109; // rax
  __m128i *v110; // rdi
  __m128i *v111; // r8
  __int64 v112; // r11
  char *v113; // r10
  __m128i *v114; // rbp
  char *v115; // r11
  const double *v116; // r9
  unsigned int v117; // r11d
  _QWORD *v118; // rax
  __int64 v119; // r10
  __int64 v120; // rdx
  char *v121; // r11
  unsigned __int64 v122; // r15
  __m128i *v123; // rax
  __int64 v124; // r11
  const double *v125; // r8
  __int64 v126; // r12
  int v127; // ecx
  int v128; // edx
  __m128i *v129; // rax
  const double *v130; // rdx
  __int64 v131; // rcx
  __m128i *v132; // rax
  const double *v133; // rcx
  __int64 v134; // rsi
  unsigned int v135; // eax
  unsigned int v136; // edx
  unsigned int v137; // eax
  __m128i *v138; // rax
  char **v139; // rbp
  char **v140; // rbp
  char **v141; // rbp
  char **v142; // rbp
  int v143; // [rsp+0h] [rbp-A8h]
  unsigned int v144; // [rsp+0h] [rbp-A8h]
  unsigned int v145; // [rsp+0h] [rbp-A8h]
  char *v146; // [rsp+0h] [rbp-A8h]
  __int64 v147; // [rsp+8h] [rbp-A0h]
  unsigned int v148; // [rsp+8h] [rbp-A0h]
  int v149; // [rsp+8h] [rbp-A0h]
  char *v150; // [rsp+8h] [rbp-A0h]
  const double *v151; // [rsp+8h] [rbp-A0h]
  unsigned int v152; // [rsp+10h] [rbp-98h]
  int v153; // [rsp+10h] [rbp-98h]
  unsigned int v154; // [rsp+10h] [rbp-98h]
  unsigned int ptr; // [rsp+18h] [rbp-90h]
  __int64 v156; // [rsp+20h] [rbp-88h]
  unsigned __int64 v157; // [rsp+20h] [rbp-88h]
  unsigned __int64 v158; // [rsp+20h] [rbp-88h]
  char *v159; // [rsp+28h] [rbp-80h]
  int v160; // [rsp+30h] [rbp-78h]
  int v161; // [rsp+34h] [rbp-74h]
  unsigned __int64 v162; // [rsp+38h] [rbp-70h]
  __int64 v163[11]; // [rsp+50h] [rbp-58h] BYREF

  v10 = (unsigned __int64)a2;
  v11 = a2[10];
  if ( v11 == -1 )
    v11 = sub_979FE0(a1, a2);
  v12 = *(_QWORD *)(a1 + 16);
  v13 = *(_QWORD *)(v12 + 8LL * v11) & 0xFFFFFFFFFFFFFFF8LL;
  v14 = *(_QWORD *)(v12 + 8LL * v11) & 7LL;
  if ( (_DWORD)v14 == 1 )
  {
    v44 = *(_DWORD *)(v13 + 20);
    v45 = *(char **)v13;
    v46 = v44 - 1;
    if ( !*(_QWORD *)(v13 + 48) )
    {
      v84 = *(unsigned int *)(v13 + 8);
      if ( *(_QWORD *)(v13 + 40) >= (unsigned __int64)&v45[16 * v84] )
      {
        v85 = v84 - v44;
        v86 = 2 * v44;
        v153 = 2 * v44;
        v87 = 2 * v85;
        if ( 2 * v44 < v44 || v87 < v85 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v163, "table overflow");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v163);
          sub_233E40((__int64)v163);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v157 = v10;
        v88 = v86 - 1;
        v89 = v86;
        while ( 1 )
        {
          v90 = v87 + v153;
          if ( __CFADD__(v87, v153) )
          {
            v140 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v163, "table overflow");
            *v140 = (char *)off_1C63128;
            sub_2333C0(v140 + 1, v163);
            sub_233E40((__int64)v163);
            __cxa_throw(v140, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v91 = (__m128i *)sub_186B270(16LL * v90);
          v92 = v91;
          v93 = &v91[v90];
          if ( v90 )
          {
            if ( ((16 * (_BYTE)v90) & 0x10) == 0 || (v91->m128i_i64[0] = 1, ++v91, v91 != v93) )
            {
              do
              {
                v91->m128i_i64[0] = 1;
                v91 += 2;
                v91[-1].m128i_i64[0] = 1;
              }
              while ( v91 != v93 );
            }
          }
          v94 = *(unsigned int *)(v13 + 20);
          v95 = *(const double **)v13;
          *(_DWORD *)(v13 + 24) = 0;
          v96 = &v92[v89];
          v97 = &v95[2 * v94];
          if ( v95 == v97 )
            break;
          v98 = v95;
          while ( (*(_QWORD *)v98 & 7LL) == 1 )
          {
LABEL_91:
            v98 += 2;
            if ( v97 == v98 )
            {
              v45 = (char *)v92;
              v10 = v157;
              v99 = (double *)v95;
              v46 = v88;
              v100 = v87 + v153;
              goto LABEL_93;
            }
          }
          v125 = v98;
          v151 = v98;
          while ( 1 )
          {
            while ( 1 )
            {
              v126 = *((_QWORD *)v125 + 1);
              v127 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v126 + 112) + 8LL) + 12LL);
              v128 = (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v126 + 120) + 8LL) + 12LL) - v127) ^ (v127 << 8);
              v129 = &v92[v88 & (((v128 ^ ((v127 - v128) << 16)) + v128 - v127) ^ ((v127 - v128) << 10))];
              if ( (v129->m128i_i64[0] & 7) != 1 )
                break;
              v129->m128i_i64[0] = 0;
              v125 = *(const double **)v125;
              v129->m128i_i64[1] = v126;
              ++*(_DWORD *)(v13 + 24);
              if ( !v125 )
              {
LABEL_139:
                v98 = v151;
                goto LABEL_91;
              }
            }
            if ( v93 == v96 )
              break;
            *v96++ = _mm_loadu_si128(v129);
            *(__m128 *)v129 = _mm_loadh_ps(v125 + 1);
            v125 = *(const double **)v125;
            if ( !v125 )
              goto LABEL_139;
          }
          sub_186B220(v92);
          if ( 2 * v87 < v87 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v163, "table overflow");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v163);
            sub_233E40((__int64)v163);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v87 *= 2;
        }
        v45 = (char *)v92;
        v100 = v87 + v153;
        v46 = v88;
        v10 = v157;
        v99 = (double *)v95;
LABEL_93:
        if ( v99 )
        {
          v148 = v100;
          v144 = v46;
          sub_186B220(v99);
          v100 = v148;
          v46 = v144;
        }
        *(_QWORD *)v13 = v45;
        *(_DWORD *)(v13 + 8) = v100;
        *(_DWORD *)(v13 + 20) = v153;
        *(_QWORD *)(v13 + 40) = v96;
        *(_QWORD *)(v13 + 48) = 0;
        *(_QWORD *)(v13 + 56) = 0;
      }
    }
    v47 = *(_QWORD *)(*(_QWORD *)(v10 + 120) + 8LL);
    v48 = *(_QWORD *)(*(_QWORD *)(v10 + 112) + 8LL);
    v49 = *(_DWORD *)(*(_QWORD *)v48 + 12LL);
    v50 = (*(_DWORD *)(*(_QWORD *)v47 + 12LL) - v49) ^ (v49 << 8);
    v19 = (__m128i *)&v45[16 * (v46 & (((v50 ^ ((v49 - v50) << 16)) + v50 - v49) ^ ((v49 - v50) << 10)))];
    v51 = (__int64 *)v19;
    if ( (v19->m128i_i64[0] & 7) != 1 )
    {
      result = v19->m128i_i64[1];
      if ( *(_QWORD *)(*(_QWORD *)(result + 112) + 8LL) == v48 )
        goto LABEL_44;
      while ( 1 )
      {
        v51 = (__int64 *)*v51;
        ++*(_DWORD *)(v13 + 32);
        if ( !v51 )
          break;
        result = v51[1];
        if ( *(_QWORD *)(*(_QWORD *)(result + 112) + 8LL) == v48 )
        {
LABEL_44:
          if ( *(_QWORD *)(*(_QWORD *)(result + 120) + 8LL) == v47 )
            return result;
        }
      }
LABEL_122:
      v21 = *(_QWORD **)(v13 + 48);
      ++*(_DWORD *)(v13 + 28);
      if ( v21 )
      {
        *(_QWORD *)(v13 + 48) = *v21;
      }
      else
      {
        v21 = *(_QWORD **)(v13 + 40);
        *(_QWORD *)(v13 + 40) = v21 + 2;
      }
      *(__m128i *)v21 = _mm_loadu_si128(v19);
      goto LABEL_9;
    }
LABEL_8:
    v21 = nullptr;
    *(_QWORD *)(v13 + 24) = _mm_add_epi32(
                              _mm_loadl_epi64((const __m128i *)(v13 + 24)),
                              _mm_loadl_epi64((const __m128i *)&qword_18B6000)).m128i_u64[0];
LABEL_9:
    v19->m128i_i64[1] = v10;
    v19->m128i_i64[0] = (__int64)v21;
    return v10;
  }
  if ( (_DWORD)v14 == 2 )
  {
    v23 = *(_DWORD *)(v13 + 28);
    v24 = *(_QWORD *)(v13 + 56) == 0;
    *(_BYTE *)(a1 + 8) = 0;
    v25 = *(__m128i **)(v13 + 8);
    v26 = v23 - 1;
    if ( v24 )
    {
      v101 = *(unsigned int *)(v13 + 16);
      if ( *(_QWORD *)(v13 + 48) >= (unsigned __int64)&v25[v101] )
      {
        v102 = 2 * v23;
        v103 = v101 - v23;
        v149 = 2 * v23;
        v104 = 2 * (v101 - v23);
        if ( 2 * v23 < v23 || v104 < v103 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v163, "table overflow");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v163);
          sub_233E40((__int64)v163);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v105 = v102 - 1;
        v158 = v10;
        v106 = v104;
        v107 = v102;
        while ( 1 )
        {
          v108 = v106 + v149;
          if ( __CFADD__(v106, v149) )
          {
            v139 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v163, "table overflow");
            *v139 = (char *)off_1C63128;
            sub_2333C0(v139 + 1, v163);
            sub_233E40((__int64)v163);
            __cxa_throw(v139, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v109 = (__m128i *)sub_186B270(16LL * v108);
          v110 = v109;
          v111 = &v109[v108];
          if ( v108 )
          {
            if ( ((16 * (_BYTE)v108) & 0x10) == 0 || (v109->m128i_i64[0] = 1, ++v109, v109 != v111) )
            {
              do
              {
                v109->m128i_i64[0] = 1;
                v109 += 2;
                v109[-1].m128i_i64[0] = 1;
              }
              while ( v109 != v111 );
            }
          }
          v112 = *(unsigned int *)(v13 + 28);
          v113 = *(char **)(v13 + 8);
          *(_DWORD *)(v13 + 32) = 0;
          v114 = &v110[v107];
          v115 = &v113[16 * v112];
          if ( v113 == v115 )
            break;
          v116 = (const double *)v113;
          while ( (*(_QWORD *)v116 & 7LL) == 1 )
          {
LABEL_108:
            v116 += 2;
            if ( v115 == (char *)v116 )
            {
              v26 = v105;
              v117 = v106 + v149;
              v10 = v158;
              v25 = v110;
              goto LABEL_110;
            }
          }
          v133 = v116;
          while ( 1 )
          {
            while ( 1 )
            {
              v134 = *((_QWORD *)v133 + 1);
              v135 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v134 + 112) + 8LL) + 12LL);
              v136 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v134 + 120) + 8LL) + 12LL);
              if ( v136 >= v135 )
              {
                v136 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v134 + 112) + 8LL) + 12LL);
                LOWORD(v135) = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v134 + 120) + 8LL) + 12LL);
              }
              v137 = 4097 * ((v136 << 16) | (unsigned __int16)v135) + 2127912214;
              v138 = &v110[v105
                         & ((9
                           * (((33 * (v137 ^ (v137 >> 19) ^ 0xC761C23C) + 374761393) << 9)
                            ^ (33 * (v137 ^ (v137 >> 19) ^ 0xC761C23C) - 369570787))
                           - 42973499)
                          ^ ((9
                            * (((33 * (v137 ^ (v137 >> 19) ^ 0xC761C23C) + 374761393) << 9)
                             ^ (33 * (v137 ^ (v137 >> 19) ^ 0xC761C23C) - 369570787))
                            - 42973499) >> 16)
                          ^ 0xB55A4F09)];
              if ( (v138->m128i_i64[0] & 7) != 1 )
                break;
              v138->m128i_i64[0] = 0;
              v133 = *(const double **)v133;
              v138->m128i_i64[1] = v134;
              ++*(_DWORD *)(v13 + 32);
              if ( !v133 )
                goto LABEL_108;
            }
            if ( v111 == v114 )
              break;
            *v114++ = _mm_loadu_si128(v138);
            *(__m128 *)v138 = _mm_loadh_ps(v133 + 1);
            v133 = *(const double **)v133;
            if ( !v133 )
              goto LABEL_108;
          }
          sub_186B220(v110);
          if ( 2 * v106 < v106 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v163, "table overflow");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v163);
            sub_233E40((__int64)v163);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v106 *= 2;
        }
        v117 = v106 + v149;
        v10 = v158;
        v26 = v105;
        v25 = v110;
LABEL_110:
        if ( v113 )
        {
          v154 = v117;
          v145 = v26;
          sub_186B220(v113);
          v117 = v154;
          v26 = v145;
        }
        *(_QWORD *)(v13 + 8) = v25;
        *(_DWORD *)(v13 + 16) = v117;
        *(_DWORD *)(v13 + 28) = v149;
        *(_QWORD *)(v13 + 48) = v114;
        *(_QWORD *)(v13 + 56) = 0;
        *(_QWORD *)(v13 + 64) = 0;
      }
    }
    v27 = *(_QWORD *)(*(_QWORD *)(v10 + 112) + 8LL);
    v28 = *(_DWORD *)(*(_QWORD *)v27 + 12LL);
    v29 = *(_QWORD *)(*(_QWORD *)(v10 + 120) + 8LL);
    v30 = *(_DWORD *)(*(_QWORD *)v29 + 12LL);
    if ( v30 >= v28 )
    {
      v30 = *(_DWORD *)(*(_QWORD *)v27 + 12LL);
      LOWORD(v28) = *(_DWORD *)(*(_QWORD *)v29 + 12LL);
    }
    v31 = 4097 * ((unsigned __int16)v28 | (v30 << 16)) + 2127912214;
    v32 = 9
        * (((33 * (v31 ^ (v31 >> 19) ^ 0xC761C23C) + 374761393) << 9)
         ^ (33 * (v31 ^ (v31 >> 19) ^ 0xC761C23C) - 369570787))
        - 42973499;
    v33 = &v25[v26 & (v32 ^ HIWORD(v32) ^ 0xB55A4F09)];
    v34 = (__int64 *)v33;
    if ( (v33->m128i_i64[0] & 7) == 1 )
    {
      v37 = nullptr;
      *(_QWORD *)(v13 + 32) = _mm_add_epi32(
                                _mm_loadl_epi64((const __m128i *)(v13 + 32)),
                                _mm_loadl_epi64((const __m128i *)&qword_18B6000)).m128i_u64[0];
LABEL_28:
      v33->m128i_i64[0] = (__int64)v37;
      v33->m128i_i64[1] = v10;
      return v10;
    }
    else
    {
      while ( 1 )
      {
        result = v34[1];
        v35 = *(_QWORD *)(*(_QWORD *)(result + 112) + 8LL);
        v36 = *(_QWORD *)(*(_QWORD *)(result + 120) + 8LL);
        if ( v27 == v35 && v29 == v36 )
          break;
        if ( v29 == v35 && v27 == v36 )
        {
          **(_BYTE **)v13 = 1;
          return result;
        }
        v34 = (__int64 *)*v34;
        ++*(_DWORD *)(v13 + 40);
        if ( !v34 )
        {
          v37 = *(_QWORD **)(v13 + 56);
          ++*(_DWORD *)(v13 + 36);
          if ( v37 )
          {
            *(_QWORD *)(v13 + 56) = *v37;
          }
          else
          {
            v37 = *(_QWORD **)(v13 + 48);
            *(_QWORD *)(v13 + 48) = v37 + 2;
          }
          *(__m128i *)v37 = _mm_loadu_si128(v33);
          goto LABEL_28;
        }
      }
    }
  }
  else if ( (_DWORD)v14 )
  {
    v38 = *(_DWORD *)(v13 + 20);
    v39 = *(__m128i **)v13;
    ptr = v38 - 1;
    if ( !*(_QWORD *)(v13 + 48) )
    {
      v52 = *(unsigned int *)(v13 + 8);
      if ( *(_QWORD *)(v13 + 40) >= (unsigned __int64)&v39[v52] )
      {
        v53 = v52 - v38;
        v54 = 2 * v38;
        v160 = 2 * v38;
        v152 = 2 * v53;
        if ( 2 * v38 < v38 || 2 * v53 < v53 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v163, "table overflow");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v163);
          sub_233E40((__int64)v163);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v162 = v10;
        v55 = 16LL * v54;
        v56 = 2 * v53;
        while ( 1 )
        {
          v57 = v56 + v160;
          v161 = v56 + v160;
          if ( __CFADD__(v56, v160) )
          {
            v141 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v163, "table overflow");
            *v141 = (char *)off_1C63128;
            sub_2333C0(v141 + 1, v163);
            sub_233E40((__int64)v163);
            __cxa_throw(v141, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v58 = (__m128i *)sub_186B270(16LL * v57);
          v59 = v58;
          v60 = &v58[v57];
          if ( v57 )
          {
            if ( ((16 * (_BYTE)v57) & 0x10) == 0 || (v58->m128i_i64[0] = 1, ++v58, v58 != v60) )
            {
              do
              {
                v58->m128i_i64[0] = 1;
                v58 += 2;
                v58[-1].m128i_i64[0] = 1;
              }
              while ( v58 != v60 );
            }
          }
          v61 = *(unsigned int *)(v13 + 20);
          v62 = *(char **)v13;
          ptr = v54 - 1;
          v63 = (__m128i *)((char *)v59 + v55);
          *(_DWORD *)(v13 + 24) = 0;
          v64 = v62;
          v65 = &v62[16 * v61];
          if ( v62 == v65 )
            break;
          v159 = v62;
          v66 = v62;
          v67 = v65;
          v156 = v55;
          v68 = (__m128i *)((char *)v59 + v55);
          while ( (*(_QWORD *)v66 & 7LL) == 1 )
          {
LABEL_58:
            v66 += 16;
            if ( v67 == v66 )
            {
              v64 = v159;
              v63 = v68;
              goto LABEL_60;
            }
          }
          v146 = v66;
          v121 = v66;
          v150 = v67;
          while ( 1 )
          {
            while ( 1 )
            {
              v122 = *((_QWORD *)v121 + 1);
              v123 = &v59[(v54 - 1) & (unsigned int)sub_979080(v13, v122)];
              if ( (v123->m128i_i64[0] & 7) != 1 )
                break;
              v123->m128i_i64[0] = 0;
              v121 = *(char **)v124;
              v123->m128i_i64[1] = v122;
              ++*(_DWORD *)(v13 + 24);
              if ( !v121 )
              {
LABEL_133:
                v66 = v146;
                v67 = v150;
                goto LABEL_58;
              }
            }
            if ( v60 == v68 )
              break;
            *v68++ = _mm_loadu_si128(v123);
            *(__m128 *)v123 = _mm_loadh_ps((const double *)(v124 + 8));
            v121 = *(char **)v124;
            if ( !v121 )
              goto LABEL_133;
          }
          v55 = v156;
          sub_186B220(v59);
          v56 = 2 * v152;
          if ( 2 * v152 < v152 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v163, "table overflow");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v163);
            sub_233E40((__int64)v163);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v152 *= 2;
        }
LABEL_60:
        v39 = v59;
        v10 = v162;
        if ( v64 )
          sub_186B220(v64);
        *(_QWORD *)v13 = v39;
        *(_QWORD *)(v13 + 40) = v63;
        *(_DWORD *)(v13 + 8) = v161;
        *(_QWORD *)(v13 + 48) = 0;
        *(_DWORD *)(v13 + 20) = v160;
        *(_QWORD *)(v13 + 56) = 0;
      }
    }
    v40 = &v39[ptr & (unsigned int)sub_979080(v13, v10)];
    if ( (v40->m128i_i64[0] & 7) == 1 )
    {
      v118 = nullptr;
      *(_QWORD *)(v13 + 24) = _mm_add_epi32(
                                _mm_loadl_epi64((const __m128i *)(v13 + 24)),
                                _mm_loadl_epi64((const __m128i *)&qword_18B6000)).m128i_u64[0];
    }
    else
    {
      v41 = (__int64 *)v40;
      v42 = *(_BYTE *)(v10 + 44) & 8;
      do
      {
        result = v41[1];
        if ( (*(_BYTE *)(result + 44) & 8) != 0 )
        {
          if ( v42 || !*(_DWORD *)(*(_QWORD *)v10 + 24LL) )
            return result;
        }
        else
        {
          v43 = *(unsigned int *)(*(_QWORD *)result + 24LL);
          if ( v42 )
          {
            if ( !(_DWORD)v43 )
              return result;
          }
          else if ( (_DWORD)v43 == *(_DWORD *)(*(_QWORD *)v10 + 24LL) )
          {
            if ( !(_DWORD)v43 )
              return result;
            v119 = 8 * v43 + 112;
            v120 = 112;
            while ( *(_QWORD *)(*(_QWORD *)(result + v120) + 8LL) == *(_QWORD *)(*(_QWORD *)(v10 + v120) + 8LL) )
            {
              v120 += 8;
              if ( v120 == v119 )
                return result;
            }
          }
        }
        v41 = (__int64 *)*v41;
        ++*(_DWORD *)(v13 + 32);
      }
      while ( v41 );
      v118 = *(_QWORD **)(v13 + 48);
      ++*(_DWORD *)(v13 + 28);
      if ( v118 )
      {
        *(_QWORD *)(v13 + 48) = *v118;
      }
      else
      {
        v118 = *(_QWORD **)(v13 + 40);
        *(_QWORD *)(v13 + 40) = v118 + 2;
      }
      *(__m128i *)v118 = _mm_loadu_si128(v40);
    }
    v40->m128i_i64[0] = (__int64)v118;
    v40->m128i_i64[1] = v10;
    return v10;
  }
  else
  {
    v15 = *(_DWORD *)(v13 + 20);
    v16 = *(__m128i **)v13;
    v17 = v15 - 1;
    if ( !*(_QWORD *)(v13 + 48) )
    {
      v69 = *(unsigned int *)(v13 + 8);
      if ( *(_QWORD *)(v13 + 40) >= (unsigned __int64)&v16[v69] )
      {
        v70 = v69 - v15;
        v71 = 2 * v15;
        v143 = 2 * v15;
        v72 = 2 * v70;
        if ( 2 * v15 < v15 || v72 < v70 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v163, "table overflow");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v163);
          sub_233E40((__int64)v163);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v73 = v71 - 1;
        v147 = v71;
LABEL_67:
        v74 = v72 + v143;
        if ( __CFADD__(v72, v143) )
        {
          v142 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v163, "table overflow");
          *v142 = (char *)off_1C63128;
          sub_2333C0(v142 + 1, v163);
          sub_233E40((__int64)v163);
          __cxa_throw(v142, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v75 = (__m128i *)sub_186B270(16LL * v74);
        v76 = v75;
        v77 = &v75[v74];
        if ( v74 )
        {
          if ( ((16 * (_BYTE)v74) & 0x10) == 0 || (v75->m128i_i64[0] = 1, ++v75, v75 != v77) )
          {
            do
            {
              v75->m128i_i64[0] = 1;
              v75 += 2;
              v75[-1].m128i_i64[0] = 1;
            }
            while ( v75 != v77 );
          }
        }
        v78 = *(unsigned int *)(v13 + 20);
        v79 = *(char **)v13;
        v17 = v73;
        *(_DWORD *)(v13 + 24) = 0;
        v80 = &v79[16 * v78];
        v81 = &v76[v147];
        if ( v79 != v80 )
        {
          v82 = v79;
          do
          {
            if ( (*(_QWORD *)v82 & 7LL) != 1 )
            {
              v130 = (const double *)v82;
              do
              {
                v131 = *((_QWORD *)v130 + 1);
                v132 = &v76[*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v131 + 112) + 8LL) + 12LL) & v73];
                if ( (v132->m128i_i64[0] & 7) == 1 )
                {
                  v132->m128i_i64[1] = v131;
                  v132->m128i_i64[0] = 0;
                  ++*(_DWORD *)(v13 + 24);
                }
                else
                {
                  if ( v77 == v81 )
                  {
                    sub_186B220(v76);
                    if ( 2 * v72 < v72 )
                    {
                      v9 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v163, "table overflow");
                      *v9 = (char *)off_1C63128;
                      sub_2333C0(v9 + 1, v163);
                      sub_233E40((__int64)v163);
                      __cxa_throw(
                        v9,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v72 *= 2;
                    goto LABEL_67;
                  }
                  *v81++ = _mm_loadu_si128(v132);
                  *(__m128 *)v132 = _mm_loadh_ps(v130 + 1);
                }
                v130 = *(const double **)v130;
              }
              while ( v130 );
            }
            v82 += 16;
          }
          while ( v80 != v82 );
        }
        v83 = v72 + v143;
        v10 = (unsigned __int64)a2;
        v16 = v76;
        if ( v79 )
        {
          sub_186B220(v79);
          v83 = v72 + v143;
          v17 = v73;
        }
        *(_QWORD *)v13 = v76;
        *(_DWORD *)(v13 + 8) = v83;
        *(_DWORD *)(v13 + 20) = v143;
        *(_QWORD *)(v13 + 40) = v81;
        *(_QWORD *)(v13 + 48) = 0;
        *(_QWORD *)(v13 + 56) = 0;
      }
    }
    v18 = *(_QWORD *)(*(_QWORD *)(v10 + 112) + 8LL);
    v19 = &v16[*(_DWORD *)(*(_QWORD *)v18 + 12LL) & v17];
    v20 = (__int64 *)v19;
    if ( (v19->m128i_i64[0] & 7) == 1 )
      goto LABEL_8;
    while ( 1 )
    {
      result = v20[1];
      if ( v18 == *(_QWORD *)(*(_QWORD *)(result + 112) + 8LL) )
        break;
      v20 = (__int64 *)*v20;
      ++*(_DWORD *)(v13 + 32);
      if ( !v20 )
        goto LABEL_122;
    }
  }
  return result;
}

