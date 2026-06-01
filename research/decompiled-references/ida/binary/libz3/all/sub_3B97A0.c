__int64 __fastcall sub_3B97A0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rcx
  int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // r9
  char *v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 result; // rax
  __int64 v15; // rdx
  __int16 v16; // ax
  _DWORD *v17; // rax
  int v18; // edx
  __int64 v19; // r15
  __int64 v20; // r13
  __int64 v21; // rax
  __int16 v22; // ax
  __int16 v23; // dx
  char v24; // dl
  __int16 v25; // ax
  __int64 v26; // r12
  _QWORD *v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rax
  unsigned int v30; // r14d
  __int64 *v31; // r12
  unsigned int v32; // ecx
  size_t v33; // r13
  __int64 v34; // r15
  int v35; // esi
  __int64 v36; // rax
  __int64 *v37; // rdi
  __int64 *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rdi
  bool v43; // zf
  __int64 v44; // rax
  __int64 v45; // r15
  int v46; // edx
  _QWORD *v47; // r13
  __int64 v48; // rdi
  unsigned int v49; // r14d
  unsigned int v50; // edx
  __int64 v51; // rax
  __int64 **v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // r8
  int v57; // eax
  _QWORD *v58; // rdx
  unsigned int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  __int64 *v62; // rcx
  unsigned int v63; // edx
  unsigned int v64; // edi
  unsigned int v65; // eax
  __int64 *v66; // r12
  int v67; // r10d
  __int64 v68; // rcx
  char *v69; // r14
  int v70; // esi
  __int64 v71; // rax
  __int64 *v72; // rdi
  _QWORD *v73; // rcx
  __int64 v74; // rdx
  unsigned int v75; // r9d
  unsigned int v76; // eax
  _DWORD *v77; // rax
  __int64 v78; // rax
  int v79; // edx
  __int64 *v80; // rbx
  unsigned __int64 v81; // rbp
  __int64 v82; // rsi
  __int64 v83; // rsi
  __int64 v84; // rdi
  unsigned int v85; // r12d
  unsigned int v86; // ecx
  unsigned int *v87; // rax
  __int64 v88; // rcx
  __int64 *v89; // rax
  __m128i *v90; // r9
  const __m128i *v91; // rax
  __m128i *v92; // r11
  __int64 v93; // rdx
  __int64 *v94; // rsi
  __m128i *v95; // rdx
  int v96; // eax
  _QWORD *v97; // rax
  __int64 v98; // rsi
  __int64 v99; // rdi
  unsigned int v100; // r14d
  int v101; // eax
  __int64 *v102; // r13
  unsigned int v103; // r8d
  size_t v104; // r12
  __int64 v105; // r15
  int v106; // esi
  __int64 v107; // rax
  __int64 *v108; // rdi
  __m128i *v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rbx
  __int64 v113; // r13
  __int64 v114; // rdi
  __int64 v115; // rsi
  int v116; // eax
  int v117; // edx
  _QWORD *v118; // rdx
  __int64 *v119; // rax
  __int64 v120; // r9
  const __m128i *v121; // rcx
  __m128i *v122; // r10
  const __m128i *v123; // rbx
  __int64 v124; // rax
  __int64 *v125; // rdx
  __m128i *v126; // rax
  __int64 *v127; // rax
  __int64 v128; // r8
  __m128i *v129; // rdi
  const __m128i *v130; // r9
  const __m128i *v131; // rbx
  __int64 v132; // rax
  __int64 *v133; // rdx
  __m128i *v134; // rax
  unsigned int v135; // r13d
  unsigned int v136; // ecx
  unsigned int *v137; // rdx
  __int64 v138; // r14
  __int64 v139; // r15
  __int64 v140; // r13
  __int64 v141; // r14
  __int64 v142; // rax
  __int64 v143; // rsi
  __int64 v144; // rdi
  _QWORD *v145; // rax
  char **exception; // rbp
  __int64 v147; // rdx
  char **v148; // rbp
  __int64 v149; // rdx
  char **v150; // rbp
  __int64 v151; // rdx
  int v152[4]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v153; // [rsp+10h] [rbp-C8h]
  _WORD **v154; // [rsp+18h] [rbp-C0h]
  __int64 v155; // [rsp+20h] [rbp-B8h]
  int v156; // [rsp+28h] [rbp-B0h]
  int v157; // [rsp+2Ch] [rbp-ACh]
  __int64 v158; // [rsp+30h] [rbp-A8h]
  __m128i *v159; // [rsp+38h] [rbp-A0h]
  int v160; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v161[4]; // [rsp+44h] [rbp-94h] BYREF
  _WORD *v162; // [rsp+48h] [rbp-90h] BYREF
  int v163[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v164; // [rsp+58h] [rbp-80h]
  __int64 v165; // [rsp+60h] [rbp-78h] BYREF
  __int64 v166; // [rsp+68h] [rbp-70h]
  __int64 v167; // [rsp+70h] [rbp-68h] BYREF
  __int64 v168; // [rsp+78h] [rbp-60h]
  char v169[88]; // [rsp+80h] [rbp-58h] BYREF

  v4 = a1;
  v5 = a2;
  v6 = *(unsigned int *)(a1 + 232);
  v7 = *(__int64 **)(a1 + 224);
  v8 = *(_DWORD *)(a2 + 12);
  v9 = v6 - 1;
  v10 = v6;
  v6 *= 16;
  v11 = (char *)v7 + v6;
  v12 = 16LL * (v8 & v9);
  v13 = &v7[(unsigned __int64)v12 / 8];
  if ( v12 != v6 )
  {
    for ( result = (__int64)&v7[(unsigned __int64)v12 / 8]; v11 != (char *)result; result += 16 )
    {
      v15 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v15 + 12) == v8 && v5 == v15 )
          goto LABEL_44;
      }
      else if ( !v15 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v7 == v13 )
  {
LABEL_8:
    v16 = *(_WORD *)(v5 + 4);
    if ( !v16 )
      goto LABEL_9;
LABEL_59:
    if ( v16 == 1 )
    {
      v111 = *(_QWORD *)(v4 + 8);
      v167 = 0;
      v168 = v111;
      result = sub_3B3EA0(v4, v5, &v167);
      v112 = v167;
      v113 = v168;
      v114 = a3[1];
      v115 = *a3;
      if ( v167 )
      {
        result = *(unsigned int *)(v167 + 8);
        *(_DWORD *)(v167 + 8) = result + 1;
        if ( v115 )
        {
          v43 = (*(_DWORD *)(v115 + 8))-- == 1;
          if ( v43 )
            sub_15D7BC0(v114, v115);
          v116 = *(_DWORD *)(v112 + 8);
          *a3 = v112;
          result = (unsigned int)(v116 - 1);
        }
        else
        {
          *a3 = v112;
        }
        *(_DWORD *)(v112 + 8) = result;
        if ( !(_DWORD)result )
          return sub_15D7BC0(v113, v112);
      }
      else
      {
        if ( v115 )
        {
          v43 = (*(_DWORD *)(v115 + 8))-- == 1;
          if ( v43 )
            result = sub_15D7BC0(v114, v115);
        }
        *a3 = 0;
      }
      return result;
    }
    goto LABEL_60;
  }
  while ( 1 )
  {
    v44 = *v7;
    if ( (unsigned __int64)*v7 <= 1 )
      break;
    if ( *(_DWORD *)(v44 + 12) == v8 && v5 == v44 )
    {
      result = (__int64)v7;
LABEL_44:
      v40 = *(_QWORD *)(result + 8);
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      v41 = *a3;
      if ( *a3 )
      {
        v42 = a3[1];
        v43 = (*(_DWORD *)(v41 + 8))-- == 1;
        if ( v43 )
          result = sub_15D7BC0(v42, v41);
      }
      *a3 = v40;
      return result;
    }
LABEL_55:
    v7 += 2;
    if ( v13 == v7 )
      goto LABEL_8;
  }
  if ( v44 )
    goto LABEL_55;
  v16 = *(_WORD *)(v5 + 4);
  if ( v16 )
    goto LABEL_59;
LABEL_9:
  if ( (*(_BYTE *)(v5 + 30) & 1) != 0 )
  {
    v98 = *a3;
    ++*(_DWORD *)(v5 + 8);
    *(__m128i *)v152 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)(unsigned __int64)v5);
    if ( v98 )
    {
      v99 = a3[1];
      v43 = (*(_DWORD *)(v98 + 8))-- == 1;
      if ( v43 )
      {
        sub_15D7BC0(v99, v98);
        v10 = *(unsigned int *)(v4 + 232);
      }
    }
    v100 = 2 * v10;
    v101 = *(_DWORD *)(v4 + 236) + *(_DWORD *)(v4 + 240);
    *a3 = v5;
    if ( 3 * (int)v10 < (unsigned int)(4 * v101) )
    {
      v104 = 16LL * v100;
      v119 = (__int64 *)sub_186B270(v104);
      v102 = v119;
      v120 = (__int64)&v119[v104 / 8];
      if ( v100 )
      {
        if ( (v104 & 0x10) == 0 || (*(_OWORD *)v119 = 0, v119 += 2, v119 != (__int64 *)v120) )
        {
          do
          {
            *(_OWORD *)v119 = 0;
            v119 += 4;
            *((_OWORD *)v119 - 1) = 0;
          }
          while ( v119 != (__int64 *)v120 );
        }
      }
      v121 = *(const __m128i **)(v4 + 224);
      v103 = v100 - 1;
      v105 = v120;
      v122 = (__m128i *)&v121[*(unsigned int *)(v4 + 232)];
      if ( v121 != v122 )
      {
        v154 = (_WORD **)v4;
        v155 = v5;
        v123 = v121;
        v157 = v100;
        v153 = v120;
        do
        {
          if ( v123->m128i_i64[0] > 1uLL )
          {
            v124 = 2LL * (*(_DWORD *)(v123->m128i_i64[0] + 12) & v103);
            v125 = &v102[v124];
            if ( 2LL * v100 == v124 )
            {
LABEL_204:
              if ( v102 == v125 )
              {
LABEL_217:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v126 = (__m128i *)v102;
              while ( v126->m128i_i64[0] )
              {
                if ( v125 == (__int64 *)++v126 )
                  goto LABEL_217;
              }
            }
            else
            {
              v126 = (__m128i *)&v102[v124];
              while ( v126->m128i_i64[0] )
              {
                if ( (__m128i *)v120 == ++v126 )
                  goto LABEL_204;
              }
            }
            *v126 = _mm_loadu_si128(v123);
          }
          ++v123;
        }
        while ( v122 != v123 );
        v4 = (__int64)v154;
        v104 = 16LL * v100;
        v5 = v155;
        v105 = v153;
        v100 = v157;
        v122 = (__m128i *)v154[28];
      }
      if ( v122 )
      {
        LODWORD(v153) = v103;
        sub_186B220(v122);
        v103 = v153;
      }
      *(_QWORD *)(v4 + 224) = v102;
      *(_DWORD *)(v4 + 232) = v100;
      *(_DWORD *)(v4 + 240) = 0;
    }
    else
    {
      v102 = *(__int64 **)(v4 + 224);
      v103 = v10 - 1;
      v104 = 16 * v10;
      v105 = (__int64)&v102[2 * v10];
    }
    v106 = *(_DWORD *)(v5 + 12);
    v107 = 16LL * (v106 & v103);
    v108 = &v102[(unsigned __int64)v107 / 8];
    if ( v107 != v104 )
    {
      result = (__int64)&v102[(unsigned __int64)v107 / 8];
      v109 = nullptr;
      while ( 1 )
      {
        v110 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v110 + 12) == v106 && v5 == v110 )
          {
LABEL_238:
            *(__m128i *)result = _mm_load_si128((const __m128i *)v152);
            return result;
          }
        }
        else
        {
          if ( !v110 )
          {
            if ( v109 )
              --*(_DWORD *)(v4 + 240);
            else
              v109 = (__m128i *)result;
            goto LABEL_215;
          }
          v109 = (__m128i *)result;
        }
        result += 16;
        if ( result == v105 )
          goto LABEL_159;
      }
    }
    v109 = nullptr;
LABEL_159:
    while ( v108 != v102 )
    {
      result = *v102;
      if ( (unsigned __int64)*v102 > 1 )
      {
        if ( *(_DWORD *)(result + 12) == v106 && v5 == result )
        {
          *(__m128i *)v102 = _mm_load_si128((const __m128i *)v152);
          return result;
        }
      }
      else
      {
        if ( !result )
        {
          if ( v109 )
            --*(_DWORD *)(v4 + 240);
          else
            v109 = (__m128i *)v102;
LABEL_215:
          *v109 = _mm_load_si128((const __m128i *)v152);
          ++*(_DWORD *)(v4 + 236);
          return result;
        }
        v109 = (__m128i *)v102;
      }
      v102 += 2;
    }
    goto LABEL_182;
  }
  v17 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
  if ( !v17 )
  {
LABEL_60:
    sub_1606360(&v167, v5, *(_QWORD *)(v4 + 8), 0, 0, 0);
    sub_160E8B0(&std::cout, &v167);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_18572D0(v169);
    sub_1872CE0("");
    sub_1873130(114, 830);
  }
  if ( *v17 )
    goto LABEL_12;
  v117 = v17[1];
  if ( v117 != 5 && v117 != 6 )
  {
    if ( v17[1] != 2 )
      goto LABEL_12;
    if ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(v4 + 8), *(_QWORD *)(v5 + 32)) )
    {
      if ( *(_WORD *)(v5 + 4) )
        goto LABEL_60;
      v17 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
      if ( !v17 )
        goto LABEL_60;
LABEL_12:
      LODWORD(v7) = *v17;
      if ( *v17 )
        goto LABEL_60;
      v18 = v17[1];
      if ( v18 != 8 && v18 != 9 )
      {
        if ( v17[1] == 2 && *(_DWORD *)(v5 + 24) == 2 )
        {
          v19 = *(_QWORD *)(v5 + 32);
          v20 = *(_QWORD *)(v5 + 40);
          v21 = sub_15D1F10(v19);
          if ( (unsigned __int8)sub_1673B10(v4 + 24, v21) )
          {
            v22 = *(_WORD *)(v19 + 4);
            v23 = *(_WORD *)(v20 + 4);
            if ( v22 == 1 )
            {
              if ( !v23 && (*(_BYTE *)(v20 + 30) & 1) != 0 )
              {
                sub_3B2BB0(v19);
                sub_3B7DC0(v4, v5, a3, v19, v20);
                goto LABEL_29;
              }
LABEL_22:
              v154 = &v162;
              v153 = (__int64)v161;
              *(_QWORD *)v152 = &v160;
              if ( (unsigned __int8)sub_1674350(v4 + 24, v19, &v160, v161, &v162)
                && v162[2] == 1
                && !*(_WORD *)(v20 + 4)
                && (*(_BYTE *)(v20 + 30) & 1) != 0 )
              {
                sub_3B7DC0(v4, v5, a3, (__int64)v162, v20);
                goto LABEL_29;
              }
              v24 = sub_1674350(v4 + 24, v20, &v160, v153, &v162);
              v25 = *(_WORD *)(v19 + 4);
              if ( v24 && v162[2] == 1 && !v25 )
              {
                if ( (*(_BYTE *)(v19 + 30) & 1) != 0 )
                {
                  sub_3B7DC0(v4, v5, a3, (__int64)v162, v19);
                  goto LABEL_29;
                }
              }
              else if ( v25 == 1 && *(_WORD *)(v20 + 4) == 1 )
              {
                v138 = *(_QWORD *)(v4 + 8);
                *(_QWORD *)v163 = 0;
                v164 = v138;
                sub_3B3EA0(v4, v19, (__int64 *)v163);
                v166 = v138;
                v139 = *(_QWORD *)v163;
                *(_QWORD *)v152 = v164;
                v165 = 0;
                sub_3B3EA0(v4, v20, &v165);
                v140 = v165;
                v141 = v166;
                v142 = sub_15E1B70(*(_QWORD *)(v4 + 8));
                if ( v142 )
                  ++*(_DWORD *)(v142 + 8);
                v143 = a3[1];
                v144 = *a3;
                v153 = v142;
                sub_3AFFA0(v144, v143);
                *a3 = v153;
                sub_3B2B90(v140, v141);
                sub_3B2B90(v139, *(__int64 *)v152);
                goto LABEL_29;
              }
              sub_1872CE0("");
              sub_1873130(114, 824);
            }
            if ( v23 != 1 || v22 || (*(_BYTE *)(v19 + 30) & 1) == 0 )
              goto LABEL_22;
            sub_3B2BB0(v20);
            sub_3B7DC0(v4, v5, a3, v20, v19);
LABEL_29:
            v26 = *a3;
            *(__m128i *)v152 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)(unsigned __int64)v26);
            if ( v26 )
              ++*(_DWORD *)(v26 + 8);
            v27 = *(_QWORD **)(v4 + 256);
            if ( v27 )
            {
              v28 = *((_DWORD *)v27 - 1);
              if ( v28 == *((_DWORD *)v27 - 2) )
              {
                v135 = (3 * v28 + 1) >> 1;
                v136 = 8 * v135 + 8;
                if ( 8 * v28 + 8 >= v136 || v28 >= v135 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_C7E7E(&v167, "Overflow encountered when expanding vector", v147);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v167);
                  sub_233E40((__int64)&v167);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v137 = (unsigned int *)sub_186B300(v27 - 1, v136);
                v27 = v137 + 2;
                *v137 = v135;
                v28 = v137[1];
                *(_QWORD *)(v4 + 256) = v27;
              }
            }
            else
            {
              v145 = (_QWORD *)sub_186B270(0x18u);
              v28 = 0;
              *v145 = 2;
              v27 = v145 + 1;
              *(_QWORD *)(v4 + 256) = v27;
            }
            v27[v28] = v26;
            *((_DWORD *)v27 - 1) = v28 + 1;
            v29 = *(unsigned int *)(v4 + 232);
            v30 = 2 * v29;
            if ( 3 * (int)v29 < (unsigned int)(4 * (*(_DWORD *)(v4 + 236) + *(_DWORD *)(v4 + 240))) )
            {
              v33 = 16LL * v30;
              v127 = (__int64 *)sub_186B270(v33);
              v31 = v127;
              v128 = (__int64)&v127[v33 / 8];
              if ( v30 )
              {
                if ( (v33 & 0x10) == 0 || (*(_OWORD *)v127 = 0, v127 += 2, v127 != (__int64 *)v128) )
                {
                  do
                  {
                    *(_OWORD *)v127 = 0;
                    v127 += 4;
                    *((_OWORD *)v127 - 1) = 0;
                  }
                  while ( v127 != (__int64 *)v128 );
                }
              }
              v129 = *(__m128i **)(v4 + 224);
              v32 = v30 - 1;
              v34 = v128;
              v130 = &v129[*(unsigned int *)(v4 + 232)];
              if ( v129 != v130 )
              {
                v154 = (_WORD **)v4;
                v155 = v5;
                v131 = v129;
                v157 = v30;
                v153 = v128;
                do
                {
                  if ( v131->m128i_i64[0] > 1uLL )
                  {
                    v132 = 2LL * (*(_DWORD *)(v131->m128i_i64[0] + 12) & v32);
                    v133 = &v31[v132];
                    if ( 2LL * v30 == v132 )
                    {
LABEL_252:
                      if ( v31 == v133 )
                      {
LABEL_265:
                        sub_1872CE0("");
                        sub_1873130(114, 213);
                      }
                      v134 = (__m128i *)v31;
                      while ( v134->m128i_i64[0] )
                      {
                        if ( v133 == (__int64 *)++v134 )
                          goto LABEL_265;
                      }
                    }
                    else
                    {
                      v134 = (__m128i *)&v31[v132];
                      while ( v134->m128i_i64[0] )
                      {
                        if ( (__m128i *)v128 == ++v134 )
                          goto LABEL_252;
                      }
                    }
                    *v134 = _mm_loadu_si128(v131);
                  }
                  ++v131;
                }
                while ( v130 != v131 );
                v4 = (__int64)v154;
                v33 = 16LL * v30;
                v5 = v155;
                v34 = v153;
                v30 = v157;
                v129 = (__m128i *)v154[28];
              }
              if ( v129 )
              {
                LODWORD(v153) = v32;
                sub_186B220(v129);
                v32 = v153;
              }
              *(_QWORD *)(v4 + 224) = v31;
              *(_DWORD *)(v4 + 232) = v30;
              *(_DWORD *)(v4 + 240) = 0;
            }
            else
            {
              v31 = *(__int64 **)(v4 + 224);
              v32 = v29 - 1;
              v33 = 16 * v29;
              v34 = (__int64)&v31[2 * v29];
            }
            v35 = *(_DWORD *)(v5 + 12);
            v36 = 16LL * (v35 & v32);
            v37 = &v31[(unsigned __int64)v36 / 8];
            if ( v36 != v33 )
            {
              result = (__int64)&v31[(unsigned __int64)v36 / 8];
              v38 = nullptr;
              while ( 1 )
              {
                v39 = *(_QWORD *)result;
                if ( *(_QWORD *)result > 1u )
                {
                  if ( *(_DWORD *)(v39 + 12) == v35 && v5 == v39 )
                    goto LABEL_238;
                }
                else
                {
                  if ( !v39 )
                  {
                    if ( v38 )
                    {
                      --*(_DWORD *)(v4 + 240);
                      result = (__int64)v38;
                    }
                    *(__m128i *)result = _mm_load_si128((const __m128i *)v152);
                    ++*(_DWORD *)(v4 + 236);
                    return result;
                  }
                  v38 = (__int64 *)result;
                }
                result += 16;
                if ( result == v34 )
                  goto LABEL_221;
              }
            }
            v38 = nullptr;
LABEL_221:
            while ( v37 != v31 )
            {
              result = *v31;
              if ( (unsigned __int64)*v31 > 1 )
              {
                if ( *(_DWORD *)(result + 12) == v35 && v5 == result )
                {
                  *(__m128i *)v31 = _mm_load_si128((const __m128i *)v152);
                  return result;
                }
              }
              else
              {
                if ( !result )
                {
                  if ( v38 )
                  {
                    --*(_DWORD *)(v4 + 240);
                    v31 = v38;
                  }
                  *(__m128i *)v31 = _mm_load_si128((const __m128i *)v152);
                  ++*(_DWORD *)(v4 + 236);
                  return result;
                }
                v38 = v31;
              }
              v31 += 2;
            }
LABEL_182:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
        }
        goto LABEL_60;
      }
    }
  }
  v45 = *(_QWORD *)(v4 + 8);
  v46 = *(_DWORD *)(v5 + 24);
  v47 = nullptr;
  *(_QWORD *)v163 = 0;
  v164 = v45;
  LODWORD(v48) = v45;
  v165 = v45;
  if ( v46 )
  {
    v47 = nullptr;
    v49 = 0;
    *(_QWORD *)v152 = v163;
    do
    {
      sub_3B97A0(
        v4,
        *(_QWORD *)(v5 + 8LL * v49 + 32),
        v152[0],
        (_DWORD)v7,
        (_DWORD)v13,
        v10,
        v152[0],
        v152[2],
        v153,
        (_DWORD)v154,
        v155,
        v156,
        v158,
        (_DWORD)v159,
        v160,
        (__int64)v162,
        *(__int64 *)v163,
        v164,
        v165,
        v166,
        v167,
        v168);
      v7 = *(__int64 **)v163;
      if ( *(_QWORD *)v163 )
        ++*(_DWORD *)(*(_QWORD *)v163 + 8LL);
      if ( v47 )
      {
        v50 = *((_DWORD *)v47 - 1);
        if ( v50 == *((_DWORD *)v47 - 2) )
        {
          v75 = (3 * v50 + 1) >> 1;
          v76 = 8 * v75 + 8;
          if ( 8 * v50 + 8 >= v76 || v50 >= v75 )
          {
            v150 = (char **)__cxa_allocate_exception(0x28u);
            sub_C7E7E(&v167, "Overflow encountered when expanding vector", v151);
            *v150 = (char *)off_1C63128;
            sub_2333C0(v150 + 1, &v167);
            sub_233E40((__int64)&v167);
            __cxa_throw(v150, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v154) = (3 * v50 + 1) >> 1;
          v153 = (__int64)v7;
          v77 = (_DWORD *)sub_186B300(v47 - 1, v76);
          LODWORD(v10) = (_DWORD)v154;
          v47 = v77 + 2;
          v7 = (__int64 *)v153;
          *v77 = (_DWORD)v154;
          v78 = (unsigned int)v77[1];
          v79 = v78;
          v52 = (__int64 **)&v47[v78];
          v46 = v79 + 1;
        }
        else
        {
          v51 = v50;
          v46 = v50 + 1;
          v52 = (__int64 **)&v47[v51];
        }
      }
      else
      {
        v153 = (__int64)v7;
        v97 = (_QWORD *)sub_186B270(0x18u);
        v7 = (__int64 *)v153;
        v46 = 1;
        *v97 = 2;
        v47 = v97 + 1;
        v52 = (__int64 **)(v97 + 1);
      }
      *v52 = v7;
      ++v49;
      *((_DWORD *)v47 - 1) = v46;
    }
    while ( v49 < *(_DWORD *)(v5 + 24) );
    v48 = *(_QWORD *)(v4 + 8);
  }
  v53 = sub_15DC610(
          v48,
          *(_QWORD *)(v5 + 16),
          v46,
          (int)v47,
          (int)v13,
          v10,
          v152[0],
          v152[2],
          v153,
          (int)v154,
          v155,
          v156,
          v158,
          (int)v159,
          v160,
          v162);
  v54 = a3[1];
  v55 = *a3;
  v56 = v53;
  if ( v53 )
  {
    v57 = *(_DWORD *)(v53 + 8) + 1;
    *(_DWORD *)(v56 + 8) = v57;
    if ( v55 )
    {
      v43 = (*(_DWORD *)(v55 + 8))-- == 1;
      if ( v43 )
      {
        *(_QWORD *)v152 = v56;
        sub_15D7BC0(v54, v55);
        v56 = *(_QWORD *)v152;
        *a3 = *(_QWORD *)v152;
      }
      else
      {
        *a3 = v56;
      }
      v57 = *(_DWORD *)(v56 + 8);
    }
    else
    {
      *a3 = v56;
    }
    *(_DWORD *)(v56 + 8) = v57 + 1;
  }
  else if ( v55 && (v43 = *(_DWORD *)(v55 + 8) == 1, --*(_DWORD *)(v55 + 8), v43) )
  {
    *(_QWORD *)v152 = 0;
    sub_15D7BC0(v54, v55);
    *a3 = 0;
    v56 = *(_QWORD *)v152;
  }
  else
  {
    *a3 = 0;
  }
  v58 = *(_QWORD **)(v4 + 256);
  if ( v58 )
  {
    v59 = *((_DWORD *)v58 - 1);
    if ( v59 == *((_DWORD *)v58 - 2) )
    {
      v85 = (3 * v59 + 1) >> 1;
      v86 = 8 * v85 + 8;
      if ( 8 * v59 + 8 >= v86 || v59 >= v85 )
      {
        v148 = (char **)__cxa_allocate_exception(0x28u);
        sub_C7E7E(&v167, "Overflow encountered when expanding vector", v149);
        *v148 = (char *)off_1C63128;
        sub_2333C0(v148 + 1, &v167);
        sub_233E40((__int64)&v167);
        __cxa_throw(v148, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      *(_QWORD *)v152 = v56;
      v87 = (unsigned int *)sub_186B300(v58 - 1, v86);
      v88 = v87[1];
      v58 = v87 + 2;
      v56 = *(_QWORD *)v152;
      *v87 = v85;
      *(_QWORD *)(v4 + 256) = v87 + 2;
      LODWORD(v87) = v88;
      v62 = &v58[v88];
      v61 = (_DWORD)v87 + 1;
    }
    else
    {
      v60 = v59;
      v61 = v59 + 1;
      v62 = &v58[v60];
    }
  }
  else
  {
    *(_QWORD *)v152 = v56;
    v118 = (_QWORD *)sub_186B270(0x18u);
    *v118 = 2;
    v56 = *(_QWORD *)v152;
    v61 = 1;
    v58 = v118 + 1;
    *(_QWORD *)(v4 + 256) = v58;
    v62 = v58;
  }
  *v62 = v56;
  *((_DWORD *)v58 - 1) = v61;
  v63 = *(_DWORD *)(v4 + 232);
  v64 = 2 * v63;
  v65 = 4 * (*(_DWORD *)(v4 + 236) + *(_DWORD *)(v4 + 240));
  v152[0] = 2 * v63;
  if ( 3 * v63 < v65 )
  {
    v154 = (_WORD **)v56;
    v153 = 16LL * v64;
    v89 = (__int64 *)sub_186B270(v153);
    v68 = v153;
    v56 = (__int64)v154;
    v66 = v89;
    v90 = (__m128i *)((char *)v89 + v153);
    if ( v64 )
    {
      if ( (v153 & 0x10) == 0 || (*(_OWORD *)v89 = 0, v89 += 2, v90 != (__m128i *)v89) )
      {
        do
        {
          *(_OWORD *)v89 = 0;
          v89 += 4;
          *((_OWORD *)v89 - 1) = 0;
        }
        while ( v90 != (__m128i *)v89 );
      }
    }
    v91 = *(const __m128i **)(v4 + 224);
    v69 = (char *)v90;
    v92 = (__m128i *)&v91[*(unsigned int *)(v4 + 232)];
    v67 = v152[0] - 1;
    if ( v91 != v92 )
    {
      do
      {
        if ( v91->m128i_i64[0] > 1uLL )
        {
          v93 = 16LL * (*(_DWORD *)(v91->m128i_i64[0] + 12) & (unsigned int)v67);
          v94 = &v66[(unsigned __int64)v93 / 8];
          if ( v68 == v93 )
          {
LABEL_127:
            if ( v66 == v94 )
            {
LABEL_178:
              v159 = v90;
              v158 = 16LL * v64;
              v157 = v67;
              v155 = (__int64)v92;
              v154 = (_WORD **)v91;
              v153 = v56;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v95 = (__m128i *)v66;
            while ( v95->m128i_i64[0] )
            {
              if ( v94 == (__int64 *)++v95 )
                goto LABEL_178;
            }
          }
          else
          {
            v95 = (__m128i *)&v66[(unsigned __int64)v93 / 8];
            while ( v95->m128i_i64[0] )
            {
              if ( v90 == ++v95 )
                goto LABEL_127;
            }
          }
          *v95 = _mm_loadu_si128(v91);
        }
        ++v91;
      }
      while ( v92 != v91 );
      v92 = *(__m128i **)(v4 + 224);
    }
    if ( v92 )
    {
      v155 = 16LL * v64;
      LODWORD(v154) = v67;
      v153 = v56;
      sub_186B220(v92);
      v68 = v155;
      v67 = (int)v154;
      v56 = v153;
    }
    v96 = v152[0];
    *(_QWORD *)(v4 + 224) = v66;
    *(_DWORD *)(v4 + 240) = 0;
    *(_DWORD *)(v4 + 232) = v96;
  }
  else
  {
    v66 = *(__int64 **)(v4 + 224);
    v67 = v63 - 1;
    v68 = 16LL * v63;
    v69 = (char *)v66 + v68;
  }
  v70 = *(_DWORD *)(v5 + 12);
  v71 = 16LL * (v70 & (unsigned int)v67);
  v72 = &v66[(unsigned __int64)v71 / 8];
  if ( v71 != v68 )
  {
    result = (__int64)&v66[(unsigned __int64)v71 / 8];
    v73 = nullptr;
    while ( 1 )
    {
      v74 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v74 + 12) == v70 && v5 == v74 )
        {
          *(_QWORD *)result = v5;
          *(_QWORD *)(result + 8) = v56;
          goto LABEL_100;
        }
      }
      else
      {
        if ( !v74 )
        {
          if ( v73 )
            goto LABEL_140;
          v73 = (_QWORD *)result;
          goto LABEL_141;
        }
        v73 = (_QWORD *)result;
      }
      result += 16;
      if ( (char *)result == v69 )
        goto LABEL_92;
    }
  }
  v73 = nullptr;
LABEL_92:
  while ( 2 )
  {
    if ( v72 == v66 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = *v66;
    if ( (unsigned __int64)*v66 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v70 && v5 == result )
      {
        *v66 = v5;
        v66[1] = v56;
        goto LABEL_100;
      }
      goto LABEL_91;
    }
    if ( result )
    {
      v73 = v66;
LABEL_91:
      v66 += 2;
      continue;
    }
    break;
  }
  if ( v73 )
LABEL_140:
    --*(_DWORD *)(v4 + 240);
  else
    v73 = v66;
LABEL_141:
  *v73 = v5;
  v73[1] = v56;
  ++*(_DWORD *)(v4 + 236);
LABEL_100:
  if ( v47 )
  {
    v80 = v47;
    v81 = (unsigned __int64)&v47[*((unsigned int *)v47 - 1)];
    if ( (unsigned __int64)v47 < v81 )
    {
      do
      {
        while ( 1 )
        {
          v82 = *v80;
          if ( *v80 )
          {
            v43 = (*(_DWORD *)(v82 + 8))-- == 1;
            if ( v43 )
              break;
          }
          if ( (unsigned __int64)++v80 >= v81 )
            goto LABEL_107;
        }
        ++v80;
        sub_15D7BC0(v45, v82);
      }
      while ( (unsigned __int64)v80 < v81 );
    }
LABEL_107:
    result = sub_186B220(v47 - 1);
  }
  v83 = *(_QWORD *)v163;
  if ( *(_QWORD *)v163 )
  {
    v84 = v164;
    v43 = (*(_DWORD *)(*(_QWORD *)v163 + 8LL))-- == 1;
    if ( v43 )
      return sub_15D7BC0(v84, v83);
  }
  return result;
}

