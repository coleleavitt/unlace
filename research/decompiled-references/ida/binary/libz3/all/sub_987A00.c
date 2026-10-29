__m128i *__fastcall sub_987A00(__int64 a1, __int64 a2, _BYTE *a3, int a4, int a5, __int64 a6)
{
  char **v6; // rbp
  char **exception; // rbx
  char **v8; // rbp
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r15
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rsi
  int v23; // eax
  __int64 *v24; // rsi
  unsigned int v25; // esi
  __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned int v28; // esi
  __int64 v29; // rcx
  __int64 v30; // r9
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 *v35; // rcx
  __int64 v36; // r8
  int v37; // esi
  int v38; // eax
  int v39; // ecx
  __m128i *v40; // rbx
  int v41; // eax
  __int64 v42; // r8
  int v43; // r15d
  __m128i *v44; // r12
  __int64 v45; // rax
  __m128i *v46; // rdi
  __m128i *result; // rax
  __int64 v48; // rsi
  __int64 v49; // rdx
  unsigned int v50; // ebx
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rbx
  _QWORD *v55; // rax
  char *v56; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rbx
  _QWORD *v60; // rax
  char *v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // rcx
  unsigned int v64; // ebx
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  unsigned int v69; // r10d
  unsigned __int64 v70; // rdx
  __m128i *v71; // rax
  const __m128i *v72; // rax
  __m128i *v73; // r11
  __int64 v74; // rdx
  __m128i *v75; // rsi
  __m128i *v76; // rdx
  __m128i v77; // xmm0
  _QWORD *v78; // rax
  unsigned __int64 v79; // rax
  __int64 v80; // r8
  unsigned __int64 v81; // rax
  __int64 v82; // r8
  unsigned int v83; // esi
  _QWORD *v84; // r12
  __int64 v85; // rax
  __int64 v86; // rcx
  _QWORD *v87; // rdx
  unsigned int v88; // eax
  __int64 v89; // rsi
  int v90; // eax
  __int64 *v91; // rsi
  int v92; // esi
  int v93; // eax
  unsigned int v94; // edx
  int v95; // r15d
  __m128i *v96; // rbx
  int v97; // eax
  __int64 v98; // r9
  __m128i *v99; // r12
  __int64 v100; // r10
  __m128i *v101; // rdi
  __int64 v102; // rsi
  __int64 v103; // rdx
  _QWORD *v104; // rax
  unsigned int v105; // ebx
  size_t v106; // rsi
  unsigned int *v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rax
  unsigned int v110; // r11d
  int v111; // edx
  unsigned __int64 v112; // rsi
  __m128i *v113; // rax
  const __m128i *v114; // r8
  __int64 v115; // rsi
  __m128i *v116; // r10
  int v117; // ebp
  __int64 v118; // rdx
  __m128i *v119; // rsi
  __m128i *v120; // rdx
  _QWORD *v121; // rax
  _QWORD *v122; // rdx
  int v123; // [rsp+0h] [rbp-1D8h]
  __m128i *v124; // [rsp+8h] [rbp-1D0h]
  __int64 v125; // [rsp+8h] [rbp-1D0h]
  size_t v126; // [rsp+8h] [rbp-1D0h]
  __int64 v127; // [rsp+8h] [rbp-1D0h]
  __int64 v128; // [rsp+8h] [rbp-1D0h]
  __int64 v129; // [rsp+10h] [rbp-1C8h]
  __int64 v130; // [rsp+10h] [rbp-1C8h]
  size_t v131; // [rsp+10h] [rbp-1C8h]
  int v132; // [rsp+10h] [rbp-1C8h]
  __int64 v133; // [rsp+10h] [rbp-1C8h]
  __int64 v134; // [rsp+10h] [rbp-1C8h]
  unsigned int v135; // [rsp+10h] [rbp-1C8h]
  int v136; // [rsp+10h] [rbp-1C8h]
  __m128i *v137; // [rsp+18h] [rbp-1C0h]
  __int64 v138; // [rsp+18h] [rbp-1C0h]
  size_t v139; // [rsp+18h] [rbp-1C0h]
  unsigned int v140; // [rsp+20h] [rbp-1B8h]
  int v141; // [rsp+20h] [rbp-1B8h]
  unsigned int v142; // [rsp+20h] [rbp-1B8h]
  __int64 v143; // [rsp+28h] [rbp-1B0h]
  __int64 v144; // [rsp+28h] [rbp-1B0h]
  int v145; // [rsp+30h] [rbp-1A8h]
  unsigned int v146; // [rsp+30h] [rbp-1A8h]
  __int64 v147[4]; // [rsp+60h] [rbp-178h] BYREF
  void *v148; // [rsp+80h] [rbp-158h] BYREF
  __int64 v149; // [rsp+88h] [rbp-150h]
  _BYTE v150[128]; // [rsp+90h] [rbp-148h] BYREF
  void *v151; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v152; // [rsp+118h] [rbp-C0h]
  _BYTE v153[184]; // [rsp+120h] [rbp-B8h] BYREF

  v11 = a1;
  if ( (_BYTE *)a2 == a3 )
  {
    v85 = sub_15DE1B0(*(_QWORD *)(a1 + 8));
    v86 = v85;
    if ( v85 )
      ++*(_DWORD *)(v85 + 8);
    v87 = *(_QWORD **)(a1 + 280);
    if ( v87 )
    {
      v88 = *((_DWORD *)v87 - 1);
      if ( v88 == *((_DWORD *)v87 - 2) )
      {
        v105 = (3 * v88 + 1) >> 1;
        v106 = 8 * v105 + 8;
        if ( 8 * v88 + 8 >= (unsigned int)v106 || v88 >= v105 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v151, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v151);
          sub_233E40((__int64)&v151);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v125 = v86;
        v107 = (unsigned int *)sub_186B300(v87 - 1, v106);
        v86 = v125;
        v108 = v107[1];
        v87 = v107 + 2;
        *v107 = v105;
        *(_QWORD *)(a1 + 280) = v107 + 2;
        LODWORD(v107) = v108;
        v91 = &v87[v108];
        v90 = (_DWORD)v107 + 1;
      }
      else
      {
        v89 = v88;
        v90 = v88 + 1;
        v91 = &v87[v89];
      }
    }
    else
    {
      v128 = v85;
      v121 = (_QWORD *)sub_186B270(0x18u);
      v86 = v128;
      v122 = v121;
      *v121 = 2;
      v90 = 1;
      v87 = v122 + 1;
      *(_QWORD *)(a1 + 280) = v87;
      v91 = v87;
    }
    *v91 = v86;
    *((_DWORD *)v87 - 1) = v90;
    v92 = *(_DWORD *)(*(_QWORD *)a2 + 12LL);
    v93 = (*(_DWORD *)(*(_QWORD *)a3 + 12LL) - v92) ^ (v92 << 8);
    v94 = *(_DWORD *)(a1 + 232);
    v95 = ((v93 ^ ((v92 - v93) << 16)) + v93 - v92) ^ ((v92 - v93) << 10);
    if ( 3 * v94 < 4 * (*(_DWORD *)(a1 + 236) + *(_DWORD *)(a1 + 240)) )
    {
      v138 = v86;
      v135 = 2 * v94;
      v126 = 64LL * v94;
      v109 = sub_186B270(v126);
      v110 = v135;
      v98 = v126;
      v86 = v138;
      v96 = (__m128i *)v109;
      if ( v135 )
      {
        v111 = v135 - 1;
        if ( v135 - 1 <= 2 )
        {
          *(_DWORD *)(v109 + 24) = 0;
          *(_DWORD *)(v109 + 56) = 0;
          *(_OWORD *)v109 = 0;
          *(_OWORD *)(v109 + 32) = 0;
        }
        else
        {
          v112 = v109 + ((unsigned __int64)(v135 >> 2) << 7);
          do
          {
            *(_DWORD *)(v109 + 24) = 0;
            v109 += 128;
            *(_OWORD *)(v109 - 128) = 0;
            *(_OWORD *)(v109 - 96) = 0;
            *(_OWORD *)(v109 - 64) = 0;
            *(_OWORD *)(v109 - 32) = 0;
            *(_DWORD *)(v109 - 72) = 0;
            *(_DWORD *)(v109 - 40) = 0;
            *(_DWORD *)(v109 - 8) = 0;
          }
          while ( v112 != v109 );
          if ( (v135 & 2) != 0 )
          {
            v113 = &v96[2 * (v135 & 0xFFFFFFFC)];
            v113[1].m128i_i32[2] = 0;
            v113[3].m128i_i32[2] = 0;
            *v113 = 0;
            v113[2] = 0;
            if ( v135 - (v135 & 0xFFFFFFFC) != 2 )
            {
              v113[5].m128i_i32[2] = 0;
              v113[4] = 0;
            }
          }
        }
      }
      else
      {
        v111 = -1;
      }
      v114 = *(const __m128i **)(a1 + 224);
      v97 = v111;
      v99 = &v96[v126 / 0x10];
      v115 = 2LL * *(unsigned int *)(a1 + 232);
      v116 = (__m128i *)&v114[v115];
      if ( v114 != &v114[v115] )
      {
        v117 = v111;
        do
        {
          if ( v114->m128i_i64[0] > 1uLL )
          {
            v118 = 32LL * (v114[1].m128i_i32[2] & (unsigned int)v117);
            v119 = &v96[(unsigned __int64)v118 / 0x10];
            if ( v118 == v126 )
            {
LABEL_177:
              if ( v119 == v96 )
              {
LABEL_193:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v120 = v96;
              while ( v120->m128i_i64[0] )
              {
                v120 += 2;
                if ( v119 == v120 )
                  goto LABEL_193;
              }
            }
            else
            {
              v120 = &v96[(unsigned __int64)v118 / 0x10];
              while ( v120->m128i_i64[0] )
              {
                v120 += 2;
                if ( v99 == v120 )
                  goto LABEL_177;
              }
            }
            *v120 = _mm_loadu_si128(v114);
            v120[1] = _mm_loadu_si128(v114 + 1);
          }
          v114 += 2;
        }
        while ( v116 != v114 );
        v11 = a1;
        v86 = v138;
        v116 = *(__m128i **)(a1 + 224);
      }
      if ( v116 )
      {
        v142 = v135;
        v139 = v126;
        v136 = v97;
        v127 = v86;
        sub_186B220(v116);
        v110 = v142;
        v98 = v139;
        v97 = v136;
        v86 = v127;
      }
      *(_QWORD *)(v11 + 224) = v96;
      *(_DWORD *)(v11 + 232) = v110;
      *(_DWORD *)(v11 + 240) = 0;
    }
    else
    {
      v96 = *(__m128i **)(a1 + 224);
      v97 = v94 - 1;
      v98 = 32LL * v94;
      v99 = (__m128i *)((char *)v96 + v98);
    }
    v100 = 32LL * (v95 & (unsigned int)v97);
    v101 = &v96[(unsigned __int64)v100 / 0x10];
    if ( v100 != v98 )
    {
      result = &v96[(unsigned __int64)v100 / 0x10];
      v102 = 0;
      while ( 1 )
      {
        v103 = result->m128i_i64[0];
        if ( result->m128i_i64[0] > 1uLL )
        {
          if ( result[1].m128i_i32[2] == v95 && a2 == v103 && a3 == (_BYTE *)result->m128i_i64[1] )
          {
            result->m128i_i64[0] = a2;
            result->m128i_i64[1] = (__int64)a3;
            result[1].m128i_i64[0] = v86;
            result[1].m128i_i32[2] = v95;
            return result;
          }
        }
        else
        {
          if ( !v103 )
          {
            if ( v102 )
              goto LABEL_191;
            v102 = (__int64)result;
            goto LABEL_192;
          }
          v102 = (__int64)result;
        }
        result += 2;
        if ( result == v99 )
          goto LABEL_148;
      }
    }
    v102 = 0;
    while ( 1 )
    {
LABEL_148:
      if ( v101 == v96 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      result = (__m128i *)v96->m128i_i64[0];
      if ( v96->m128i_i64[0] > 1uLL )
      {
        if ( v96[1].m128i_i32[2] == v95 && (__m128i *)a2 == result && a3 == (_BYTE *)v96->m128i_i64[1] )
        {
          v96->m128i_i64[0] = a2;
          v96->m128i_i64[1] = (__int64)a3;
          v96[1].m128i_i64[0] = v86;
          v96[1].m128i_i32[2] = v95;
          return result;
        }
      }
      else
      {
        if ( !result )
        {
          if ( v102 )
LABEL_191:
            --*(_DWORD *)(v11 + 240);
          else
            v102 = (__int64)v96;
LABEL_192:
          *(_QWORD *)v102 = a2;
          *(_QWORD *)(v102 + 8) = a3;
          *(_QWORD *)(v102 + 16) = v86;
          *(_DWORD *)(v102 + 24) = v95;
          ++*(_DWORD *)(v11 + 236);
          return result;
        }
        v102 = (__int64)v96;
      }
      v96 += 2;
    }
  }
  v12 = a2;
  if ( a2 )
  {
    do
    {
      *(_BYTE *)(v12 + 44) |= 2u;
      v12 = *(_QWORD *)(v12 + 80);
    }
    while ( v12 );
    if ( (a3[44] & 2) != 0 )
    {
      v13 = (__int64)a3;
LABEL_8:
      v14 = a2;
      do
      {
        *(_BYTE *)(v14 + 44) &= ~2u;
        v14 = *(_QWORD *)(v14 + 80);
      }
      while ( v14 );
      goto LABEL_10;
    }
LABEL_5:
    v13 = (__int64)a3;
    do
      v13 = *(_QWORD *)(v13 + 80);
    while ( (*(_BYTE *)(v13 + 44) & 2) == 0 );
    if ( !a2 )
      goto LABEL_10;
    goto LABEL_8;
  }
  if ( (a3[44] & 2) == 0 )
    goto LABEL_5;
  v13 = (__int64)a3;
LABEL_10:
  v124 = (__m128i *)v150;
  v148 = v150;
  v149 = 0x1000000000LL;
  sub_987890((_QWORD *)a1, a2, v13, (__int64)&v148, a5, a6);
  v137 = (__m128i *)v153;
  v151 = v153;
  v152 = 0x1000000000LL;
  sub_987890((_QWORD *)a1, (__int64)a3, v13, (__int64)&v151, v15, v16);
  LODWORD(v17) = v152;
  if ( (_DWORD)v152 )
  {
    do
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)(v11 + 8);
        v17 = (unsigned int)(v17 - 1);
        v27 = *((_QWORD *)v151 + v17);
        if ( *(_DWORD *)(v26 + 712) )
          break;
        v28 = v149;
        if ( (unsigned int)v149 >= HIDWORD(v149) )
        {
          v129 = *((_QWORD *)v151 + v17);
          v59 = (unsigned int)(2 * HIDWORD(v149));
          v60 = (_QWORD *)sub_186B270(8 * v59);
          v28 = v149;
          v61 = (char *)v148;
          v84 = v60;
          v27 = v129;
          if ( (_DWORD)v149 )
          {
            if ( (unsigned int)(v149 - 1) <= 2 || v60 == (_QWORD *)((char *)v148 + 8) )
            {
              v81 = 0;
              v82 = 8LL * (unsigned int)v149;
              do
              {
                v84[v81 / 8] = *(_QWORD *)&v61[v81];
                v81 += 8LL;
              }
              while ( v81 != v82 );
            }
            else
            {
              v62 = 0;
              v63 = 16LL * ((unsigned int)v149 >> 1);
              do
              {
                *(__m128i *)&v84[v62 / 8] = _mm_loadu_si128((const __m128i *)&v61[v62]);
                v62 += 16LL;
              }
              while ( v62 != v63 );
              if ( (v28 & 1) != 0 )
                v84[v28 & 0xFFFFFFFE] = *(_QWORD *)&v61[8 * (v28 & 0xFFFFFFFE)];
            }
          }
          if ( v61 != v150 && v61 )
          {
            sub_186B220(v61);
            v28 = v149;
            v27 = v129;
          }
          v148 = v84;
          HIDWORD(v149) = v59;
          LODWORD(v17) = v152 - 1;
        }
        else
        {
          v84 = v148;
        }
        v29 = v28;
        v83 = v28 + 1;
        v84[v29] = v27;
        LODWORD(v149) = v83;
        LODWORD(v152) = v17;
        if ( !(_DWORD)v17 )
          goto LABEL_24;
      }
      v18 = sub_15E2180(v26);
      v19 = v18;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      v20 = *(_QWORD **)(v11 + 280);
      if ( v20 )
      {
        v21 = *((_DWORD *)v20 - 1);
        if ( v21 == *((_DWORD *)v20 - 2) )
        {
          v50 = (3 * v21 + 1) >> 1;
          v51 = 8 * v50 + 8;
          if ( 8 * v21 + 8 >= (unsigned int)v51 || v21 >= v50 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v147, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v147);
            sub_233E40((__int64)v147);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v52 = (unsigned int *)sub_186B300(v20 - 1, v51);
          v53 = v52[1];
          v20 = v52 + 2;
          *v52 = v50;
          *(_QWORD *)(v11 + 280) = v52 + 2;
          LODWORD(v52) = v53;
          v24 = &v20[v53];
          v23 = (_DWORD)v52 + 1;
        }
        else
        {
          v22 = v21;
          v23 = v21 + 1;
          v24 = &v20[v22];
        }
      }
      else
      {
        v78 = (_QWORD *)sub_186B270(0x18u);
        v20 = v78 + 1;
        *v78 = 2;
        v23 = 1;
        *(_QWORD *)(v11 + 280) = v20;
        v24 = v20;
      }
      *v24 = v19;
      *((_DWORD *)v20 - 1) = v23;
      v25 = v149;
      if ( (unsigned int)v149 >= HIDWORD(v149) )
      {
        v54 = (unsigned int)(2 * HIDWORD(v149));
        v55 = (_QWORD *)sub_186B270(8 * v54);
        v25 = v149;
        v56 = (char *)v148;
        v84 = v55;
        if ( (_DWORD)v149 )
        {
          if ( (unsigned int)(v149 - 1) <= 2 || v55 == (_QWORD *)((char *)v148 + 8) )
          {
            v79 = 0;
            v80 = 8LL * (unsigned int)v149;
            do
            {
              v84[v79 / 8] = *(_QWORD *)&v56[v79];
              v79 += 8LL;
            }
            while ( v80 != v79 );
          }
          else
          {
            v57 = 0;
            v58 = 16LL * ((unsigned int)v149 >> 1);
            do
            {
              *(__m128i *)&v84[v57 / 8] = _mm_loadu_si128((const __m128i *)&v56[v57]);
              v57 += 16LL;
            }
            while ( v57 != v58 );
            if ( (v25 & 1) != 0 )
              v84[v25 & 0xFFFFFFFE] = *(_QWORD *)&v56[8 * (v25 & 0xFFFFFFFE)];
          }
        }
        if ( v56 != v150 && v56 )
        {
          sub_186B220(v56);
          v25 = v149;
        }
        v148 = v84;
        HIDWORD(v149) = v54;
      }
      else
      {
        v84 = v148;
      }
      v17 = v25;
      v83 = v25 + 1;
      v84[v17] = v19;
      LODWORD(v149) = v83;
      LODWORD(v17) = v152 - 1;
      LODWORD(v152) = v17;
    }
    while ( (_DWORD)v17 );
  }
  else
  {
    v83 = v149;
    v84 = v148;
  }
LABEL_24:
  if ( v83 == 1 )
    v30 = *v84;
  else
    v30 = sub_15DE3E0(*(_QWORD *)(v11 + 8), v123, (int)v150, v129, v153);
  if ( v30 )
    ++*(_DWORD *)(v30 + 8);
  v31 = *(_QWORD **)(v11 + 280);
  if ( v31 )
  {
    v32 = *((_DWORD *)v31 - 1);
    if ( v32 == *((_DWORD *)v31 - 2) )
    {
      v64 = (3 * v32 + 1) >> 1;
      v65 = 8 * v64 + 8;
      if ( 8 * v32 + 8 >= (unsigned int)v65 || v32 >= v64 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v147, "Overflow encountered when expanding vector");
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, v147);
        sub_233E40((__int64)v147);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v130 = v30;
      v66 = (unsigned int *)sub_186B300(v31 - 1, v65);
      v67 = v66[1];
      v31 = v66 + 2;
      v30 = v130;
      *v66 = v64;
      *(_QWORD *)(v11 + 280) = v66 + 2;
      LODWORD(v66) = v67;
      v35 = &v31[v67];
      v34 = (_DWORD)v66 + 1;
    }
    else
    {
      v33 = v32;
      v34 = v32 + 1;
      v35 = &v31[v33];
    }
  }
  else
  {
    v134 = v30;
    v104 = (_QWORD *)sub_186B270(0x18u);
    v31 = v104 + 1;
    *v104 = 2;
    v30 = v134;
    v34 = 1;
    *(_QWORD *)(v11 + 280) = v31;
    v35 = v31;
  }
  *v35 = v30;
  *((_DWORD *)v31 - 1) = v34;
  v36 = *(unsigned int *)(v11 + 232);
  v37 = *(_DWORD *)(*(_QWORD *)a2 + 12LL);
  v38 = (*(_DWORD *)(*(_QWORD *)a3 + 12LL) - v37) ^ (v37 << 8);
  v39 = ((v38 ^ ((v37 - v38) << 16)) + v38 - v37) ^ ((v37 - v38) << 10);
  if ( 3 * (int)v36 < (unsigned int)(4 * (*(_DWORD *)(v11 + 236) + *(_DWORD *)(v11 + 240))) )
  {
    v145 = ((v38 ^ ((*(_DWORD *)(*(_QWORD *)a2 + 12LL) - v38) << 16)) + v38 - v37)
         ^ ((*(_DWORD *)(*(_QWORD *)a2 + 12LL) - v38) << 10);
    v143 = v30;
    v140 = 2 * v36;
    v131 = 32LL * (unsigned int)(2 * v36);
    v68 = sub_186B270(v131);
    v69 = v140;
    v42 = v131;
    v40 = (__m128i *)v68;
    v30 = v143;
    v39 = v145;
    if ( v140 )
    {
      v132 = v140 - 1;
      if ( v140 - 1 <= 2 )
      {
        *(_DWORD *)(v68 + 24) = 0;
        *(_DWORD *)(v68 + 56) = 0;
        *(_OWORD *)v68 = 0;
        *(_OWORD *)(v68 + 32) = 0;
      }
      else
      {
        v70 = v68 + ((unsigned __int64)(v140 >> 2) << 7);
        do
        {
          *(_DWORD *)(v68 + 24) = 0;
          v68 += 128;
          *(_OWORD *)(v68 - 128) = 0;
          *(_OWORD *)(v68 - 96) = 0;
          *(_OWORD *)(v68 - 64) = 0;
          *(_OWORD *)(v68 - 32) = 0;
          *(_DWORD *)(v68 - 72) = 0;
          *(_DWORD *)(v68 - 40) = 0;
          *(_DWORD *)(v68 - 8) = 0;
        }
        while ( v68 != v70 );
        if ( (v140 & 2) != 0 )
        {
          v71 = &v40[2 * (v140 & 0xFFFFFFFC)];
          v71[1].m128i_i32[2] = 0;
          v71[3].m128i_i32[2] = 0;
          *v71 = 0;
          v71[2] = 0;
          if ( v140 - (v140 & 0xFFFFFFFC) != 2 )
          {
            v71[5].m128i_i32[2] = 0;
            v71[4] = 0;
          }
        }
      }
    }
    else
    {
      v132 = -1;
    }
    v72 = *(const __m128i **)(v11 + 224);
    v44 = (__m128i *)((char *)v40 + v42);
    v43 = v132;
    v73 = (__m128i *)&v72[2 * *(unsigned int *)(v11 + 232)];
    if ( v72 != v73 )
    {
      do
      {
        while ( v72->m128i_i64[0] <= 1uLL )
        {
          v72 += 2;
          if ( v73 == v72 )
            goto LABEL_97;
        }
        v74 = 32LL * (v72[1].m128i_i32[2] & (unsigned int)v132);
        v75 = &v40[(unsigned __int64)v74 / 0x10];
        if ( v42 == v74 )
        {
LABEL_101:
          if ( v40 == v75 )
          {
LABEL_125:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v76 = v40;
          while ( v76->m128i_i64[0] )
          {
            v76 += 2;
            if ( v75 == v76 )
              goto LABEL_125;
          }
        }
        else
        {
          v76 = &v40[(unsigned __int64)v74 / 0x10];
          while ( v76->m128i_i64[0] )
          {
            v76 += 2;
            if ( v44 == v76 )
              goto LABEL_101;
          }
        }
        v77 = _mm_loadu_si128(v72);
        v72 += 2;
        *v76 = v77;
        v76[1] = _mm_loadu_si128(v72 - 1);
      }
      while ( v73 != v72 );
LABEL_97:
      v73 = *(__m128i **)(v11 + 224);
    }
    if ( v73 )
    {
      v146 = v140;
      v144 = v42;
      v141 = v39;
      v133 = v30;
      sub_186B220(v73);
      v69 = v146;
      v42 = v144;
      v39 = v141;
      v30 = v133;
    }
    *(_QWORD *)(v11 + 224) = v40;
    *(_DWORD *)(v11 + 232) = v69;
    *(_DWORD *)(v11 + 240) = 0;
  }
  else
  {
    v40 = *(__m128i **)(v11 + 224);
    v41 = v36 - 1;
    v42 = 32 * v36;
    v43 = v41;
    v44 = (__m128i *)((char *)v40 + v42);
  }
  v45 = 32LL * (v39 & (unsigned int)v43);
  v46 = &v40[(unsigned __int64)v45 / 0x10];
  if ( v45 != v42 )
  {
    result = &v40[(unsigned __int64)v45 / 0x10];
    v48 = 0;
    while ( 1 )
    {
      v49 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( result[1].m128i_i32[2] == v39 && a2 == v49 && a3 == (_BYTE *)result->m128i_i64[1] )
        {
          result->m128i_i64[0] = a2;
          result->m128i_i64[1] = (__int64)a3;
          result[1].m128i_i64[0] = v30;
          result[1].m128i_i32[2] = v39;
          goto LABEL_108;
        }
      }
      else
      {
        if ( !v49 )
        {
          if ( v48 )
            goto LABEL_116;
          v48 = (__int64)result;
          goto LABEL_117;
        }
        v48 = (__int64)result;
      }
      result += 2;
      if ( result == v44 )
        goto LABEL_69;
    }
  }
  v48 = 0;
  while ( 1 )
  {
LABEL_69:
    if ( v46 == v40 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v40->m128i_i64[0];
    if ( v40->m128i_i64[0] <= 1uLL )
      break;
    if ( v40[1].m128i_i32[2] == v39 && (__m128i *)a2 == result && a3 == (_BYTE *)v40->m128i_i64[1] )
    {
      v40->m128i_i64[0] = a2;
      v40->m128i_i64[1] = (__int64)a3;
      v40[1].m128i_i64[0] = v30;
      v40[1].m128i_i32[2] = v39;
      goto LABEL_108;
    }
LABEL_68:
    v40 += 2;
  }
  if ( result )
  {
    v48 = (__int64)v40;
    goto LABEL_68;
  }
  if ( v48 )
LABEL_116:
    --*(_DWORD *)(v11 + 240);
  else
    v48 = (__int64)v40;
LABEL_117:
  *(_QWORD *)v48 = a2;
  *(_QWORD *)(v48 + 8) = a3;
  *(_QWORD *)(v48 + 16) = v30;
  *(_DWORD *)(v48 + 24) = v39;
  ++*(_DWORD *)(v11 + 236);
LABEL_108:
  if ( v151 )
  {
    result = v137;
    if ( v151 != v137 )
      result = (__m128i *)sub_186B220(v151);
  }
  if ( v148 )
  {
    result = v124;
    if ( v148 != v124 )
      return (__m128i *)sub_186B220(v148);
  }
  return result;
}

