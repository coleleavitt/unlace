__m128 *__fastcall sub_2125DA0(__m128 *a1, __int64 a2)
{
  char v4; // r8
  unsigned __int8 *v5; // rbx
  unsigned __int8 v6; // si
  int v7; // ecx
  unsigned __int8 v8; // cl
  char v9; // al
  unsigned __int8 *v10; // r9
  unsigned __int8 *v11; // rdi
  char *v12; // rdx
  char v13; // r9
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rsi
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // al
  unsigned int v18; // r13d
  unsigned __int64 v19; // rax
  void *v20; // rdi
  char v22; // al
  unsigned __int8 *v23; // rax
  unsigned __int8 *v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __m128i *v27; // rax
  size_t v28; // rcx
  size_t v29; // r15
  unsigned __int64 v30; // rdx
  char *v31; // rax
  unsigned __int64 v32; // r14
  size_t v33; // rax
  __int64 v34; // rax
  _OWORD *v35; // rdi
  unsigned __int8 *v36; // rax
  unsigned __int8 *v37; // rdx
  __int64 v38; // rax
  char *v39; // rax
  __m128i v40; // xmm0
  unsigned __int64 v41; // r13
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  _OWORD *v44; // rdi
  char v45; // si
  unsigned __int8 *v46; // rdx
  unsigned __int8 v47; // al
  unsigned __int8 *v48; // rbx
  unsigned __int8 *v49; // r13
  unsigned __int64 v50; // r15
  __int64 v51; // r14
  __int64 v52; // rax
  __m128i *v53; // rax
  __m128i si128; // xmm0
  unsigned __int64 v55; // rbx
  __int64 v56; // rax
  char v57; // al
  _BYTE *v58; // r13
  char *v59; // rbx
  __int64 v60; // rbx
  __int64 v61; // rax
  __m128i *v62; // rax
  size_t v63; // rcx
  size_t v64; // r14
  size_t v65; // r9
  unsigned __int64 v66; // rdx
  char *v67; // rax
  unsigned __int64 v68; // r14
  size_t v69; // rax
  __int64 v70; // rax
  _OWORD *v71; // rdi
  _BYTE *v72; // rdx
  char v73; // al
  char v74; // al
  __m128i *v75; // rax
  size_t v76; // rcx
  size_t v77; // r15
  unsigned __int64 v78; // rdx
  char *v79; // rax
  unsigned __int64 v80; // r14
  size_t v81; // rax
  __int64 v82; // rax
  _OWORD *v83; // rdi
  _BYTE *v84; // rdx
  char v85; // al
  char v86; // al
  __m128i *v87; // rax
  unsigned __int8 *v88; // rdi
  __int64 v89; // rdx
  unsigned __int8 *v90; // rbx
  __int64 v91; // rdx
  unsigned __int8 *v92; // rsi
  __int64 v93; // rax
  _BYTE *v94; // rdx
  char v95; // al
  char v96; // al
  char v97; // al
  unsigned __int64 v98; // rax
  unsigned __int8 *v99; // rdx
  unsigned __int8 v100; // dl
  unsigned __int8 *v101; // rsi
  unsigned __int8 *v102; // rax
  unsigned __int8 v103; // dl
  unsigned __int64 v104; // rcx
  _BYTE *v105; // rax
  char v106; // dl
  char v107; // dl
  unsigned int v108; // esi
  __m128i *v109; // rax
  size_t v110; // r14
  unsigned __int64 v111; // rdx
  char *v112; // rax
  unsigned __int64 v113; // r14
  size_t v114; // rax
  __int64 v115; // rax
  _OWORD *v116; // rdi
  unsigned __int64 v117; // rax
  __m128i *v118; // rax
  __int64 v119; // rax
  unsigned __int64 v120; // rbx
  __int64 v121; // rax
  _OWORD *v122; // rdi
  _BYTE *v123; // rax
  char v124; // dl
  char v125; // dl
  __m128i *v126; // rax
  char *v127; // rax
  __m128i v128; // xmm0
  unsigned int v129; // [rsp+8h] [rbp-1D0h]
  size_t v130; // [rsp+8h] [rbp-1D0h]
  void *v131; // [rsp+10h] [rbp-1C8h] BYREF
  unsigned int v132; // [rsp+18h] [rbp-1C0h]
  unsigned __int64 v133; // [rsp+20h] [rbp-1B8h] BYREF
  unsigned __int8 *v134; // [rsp+28h] [rbp-1B0h]
  void *v135; // [rsp+30h] [rbp-1A8h] BYREF
  unsigned int v136; // [rsp+38h] [rbp-1A0h]
  unsigned __int64 v137; // [rsp+40h] [rbp-198h] BYREF
  unsigned __int8 *v138; // [rsp+48h] [rbp-190h]
  void *v139; // [rsp+50h] [rbp-188h] BYREF
  unsigned int v140; // [rsp+58h] [rbp-180h]
  void *v141; // [rsp+60h] [rbp-178h] BYREF
  unsigned int v142; // [rsp+68h] [rbp-170h]
  unsigned __int64 v143; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int8 *v144; // [rsp+78h] [rbp-160h]
  void *v145[2]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v146; // [rsp+90h] [rbp-148h] BYREF
  void *v147; // [rsp+A0h] [rbp-138h] BYREF
  size_t v148; // [rsp+A8h] [rbp-130h]
  __m128i v149; // [rsp+B0h] [rbp-128h] BYREF
  void *v150[2]; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v151; // [rsp+D0h] [rbp-108h] BYREF
  void *v152; // [rsp+E0h] [rbp-F8h] BYREF
  size_t v153; // [rsp+E8h] [rbp-F0h]
  __m128i v154; // [rsp+F0h] [rbp-E8h] BYREF
  void *v155[2]; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v156; // [rsp+110h] [rbp-C8h] BYREF
  void *v157; // [rsp+120h] [rbp-B8h] BYREF
  size_t v158; // [rsp+128h] [rbp-B0h]
  __m128i v159; // [rsp+130h] [rbp-A8h] BYREF
  void *v160[2]; // [rsp+140h] [rbp-98h] BYREF
  __int64 v161; // [rsp+150h] [rbp-88h] BYREF
  void *v162; // [rsp+160h] [rbp-78h] BYREF
  size_t v163; // [rsp+168h] [rbp-70h]
  __m128i v164; // [rsp+170h] [rbp-68h] BYREF
  void *v165; // [rsp+180h] [rbp-58h] BYREF
  __int64 v166; // [rsp+188h] [rbp-50h]
  _OWORD v167[4]; // [rsp+190h] [rbp-48h] BYREF

  v4 = *(_BYTE *)(a2 + 149);
  v5 = *(unsigned __int8 **)(a2 + 56);
  v6 = *v5;
  if ( !v4 )
  {
LABEL_23:
    if ( !*(_BYTE *)(a2 + 151) )
    {
LABEL_24:
      v13 = *(_BYTE *)(a2 + 160);
      if ( !v13 && *(v5 - 1) == 48 && v6 != 46 )
      {
        v45 = v6 & 0xDF;
        if ( !v4 && v45 == 66 )
        {
          v46 = v5 + 1;
          *(_QWORD *)(a2 + 56) = v5 + 1;
          v47 = v5[1] - 48;
          if ( v47 > 9u )
          {
            v117 = *(_QWORD *)(a2 + 136);
            *(_QWORD *)(a2 + 56) = v5;
            a1->m128_i32[0] = 4;
            a1->m128_u64[1] = v117;
            a1[1].m128_u64[0] = (unsigned __int64)&v5[-v117];
            a1[2].m128_i32[0] = 64;
            a1[1].m128_u64[1] = 0;
            return a1;
          }
          v48 = v5 + 2;
          if ( v47 <= 1u )
          {
            do
            {
              v49 = v48;
              *(_QWORD *)(a2 + 56) = v48++;
            }
            while ( (unsigned __int8)(*v49 - 48) <= 1u );
            if ( v46 != v49 )
            {
              v50 = *(_QWORD *)(a2 + 136);
              LODWORD(v163) = 128;
              v51 = (__int64)&v49[-v50];
              sub_2205470(&v162, 0, 1);
              v52 = 0;
              if ( (unsigned __int64)&v49[-v50] > 1 )
              {
                v52 = v51 - 2;
                v49 = (unsigned __int8 *)(v50 + 2);
              }
              v165 = v49;
              v166 = v52;
              if ( (unsigned __int8)sub_2248060(&v165, 2) )
              {
                v165 = v167;
                v53 = (__m128i *)operator new(0x16u);
                si128 = _mm_load_si128((const __m128i *)&xmmword_23AB4D0);
                *(_QWORD *)&v167[0] = 21;
                v165 = v53;
                v53[1].m128i_i32[0] = 1700949365;
                v53[1].m128i_i8[4] = 114;
                v166 = 21;
                v53[1].m128i_i8[5] = 0;
                *v53 = si128;
LABEL_96:
                v55 = *(_QWORD *)(a2 + 136);
                *(_QWORD *)(a2 + 80) = v55;
                sub_9EE8A0(a2 + 88, (__int64)&v165);
                v56 = *(_QWORD *)(a2 + 56);
                a1->m128_u64[1] = v55;
                a1->m128_i32[0] = 1;
                v43 = v56 - v55;
LABEL_83:
                v44 = v165;
                a1[1].m128_u64[0] = v43;
                a1[2].m128_i32[0] = 64;
                a1[1].m128_u64[1] = 0;
                if ( v44 != v167 )
                  operator delete(v44);
                goto LABEL_53;
              }
              v123 = *(_BYTE **)(a2 + 56);
              v124 = *v123 & 0xDF;
              if ( v124 == 85 )
              {
                *(_QWORD *)(a2 + 56) = v123 + 1;
                v125 = *++v123;
                v124 = v125 & 0xDF;
              }
              if ( v124 == 76 )
              {
                *(_QWORD *)(a2 + 56) = v123 + 1;
                if ( (v123[1] & 0xDF) == 0x4C )
                  *(_QWORD *)(a2 + 56) = v123 + 2;
              }
              sub_2124A60(a1, v50, v51, (__int64 *)&v162);
              goto LABEL_53;
            }
          }
          v126 = (__m128i *)operator new(0x16u);
          *(_QWORD *)&v167[0] = 21;
          v165 = v126;
          v120 = *(_QWORD *)(a2 + 136);
          *v126 = _mm_load_si128((const __m128i *)&xmmword_23AB4D0);
          v126[1].m128i_i32[0] = 1700949365;
          v126[1].m128i_i8[4] = 114;
          v166 = 21;
          v126[1].m128i_i8[5] = 0;
LABEL_239:
          *(_QWORD *)(a2 + 80) = v120;
          sub_9EE8A0(a2 + 88, (__int64)&v165);
          v121 = *(_QWORD *)(a2 + 56);
          v122 = v165;
          a1->m128_i32[0] = 1;
          a1->m128_u64[1] = v120;
          a1[2].m128_i32[0] = 64;
          a1[1].m128_u64[0] = v121 - v120;
          a1[1].m128_u64[1] = 0;
          if ( v122 != v167 )
            operator delete(v122);
          return a1;
        }
        if ( v45 == 88 )
        {
          v88 = v5 + 1;
          *(_QWORD *)(a2 + 56) = v5 + 1;
          v89 = v5[1];
          if ( word_23E43C0[v89] == -1 )
          {
            if ( (v89 & 0xDF) != 0x50 && v5[1] != 46 )
            {
LABEL_238:
              v118 = (__m128i *)operator new(0x1Bu);
              v165 = v118;
              *v118 = _mm_load_si128((const __m128i *)&xmmword_23AB3F0);
              strcpy(v118[1].m128i_i8, "mal number");
              v119 = *(_QWORD *)(a2 + 56);
              *(_QWORD *)&v167[0] = 26;
              v166 = 26;
              v120 = v119 - 2;
              goto LABEL_239;
            }
            v100 = 1;
          }
          else
          {
            v90 = v5 + 2;
            do
            {
              *(_QWORD *)(a2 + 56) = v90;
              v91 = *v90;
              v92 = v90++;
            }
            while ( word_23E43C0[v91] != -1 );
            if ( (v91 & 0xDF) != 0x50 && (_BYTE)v91 != 46 )
            {
              if ( v88 != v92 )
              {
                LODWORD(v163) = 128;
                sub_2205470(&v162, 0, 0);
                v93 = *(_QWORD *)(a2 + 56) - *(_QWORD *)(a2 + 136);
                v165 = *(void **)(a2 + 136);
                v166 = v93;
                if ( (unsigned __int8)sub_2248060(&v165, 0) )
                {
                  v165 = v167;
                  v127 = (char *)operator new(0x1Bu);
                  v128 = _mm_load_si128((const __m128i *)&xmmword_23AB3F0);
                  *(_QWORD *)&v167[0] = 26;
                  strcpy(v127 + 16, "mal number");
                  v165 = v127;
                  *(__m128i *)v127 = v128;
                  v166 = 26;
                  goto LABEL_96;
                }
                v94 = *(_BYTE **)(a2 + 56);
                v95 = *v94 & 0xDF;
                if ( *(_BYTE *)(a2 + 149) && v95 == 72 )
                {
                  *(_QWORD *)(a2 + 56) = v94 + 1;
                  v96 = *++v94;
                  v95 = v96 & 0xDF;
                }
                if ( v95 == 85 )
                {
                  *(_QWORD *)(a2 + 56) = v94 + 1;
                  v97 = *++v94;
                  v95 = v97 & 0xDF;
                }
                if ( v95 == 76 )
                {
                  *(_QWORD *)(a2 + 56) = v94 + 1;
                  if ( (v94[1] & 0xDF) == 0x4C )
                  {
                    v94 += 2;
                    *(_QWORD *)(a2 + 56) = v94;
                  }
                  else
                  {
                    ++v94;
                  }
                }
                sub_2124A60(a1, *(_QWORD *)(a2 + 136), (__int64)&v94[-*(_QWORD *)(a2 + 136)], (__int64 *)&v162);
LABEL_53:
                if ( (unsigned int)v163 > 0x40 )
                {
                  v20 = v162;
                  if ( v162 )
                    goto LABEL_45;
                }
                return a1;
              }
              goto LABEL_238;
            }
            v100 = v88 == v92;
          }
          sub_21251C0((__int64)a1, (_QWORD *)a2, v100);
          return a1;
        }
        v142 = 128;
        sub_2205470(&v141, 0, 1);
        v101 = *(unsigned __int8 **)(a2 + 56);
        if ( *(_BYTE *)(a2 + 149) )
        {
          v102 = *(unsigned __int8 **)(a2 + 56);
          v101 = nullptr;
          while ( 1 )
          {
            v103 = *v102;
            if ( (unsigned __int8)(*v102 - 48) > 9u )
            {
              if ( !v101 )
                v101 = v102;
              if ( word_23E43C0[v103] == -1 )
                break;
            }
            ++v102;
          }
          v104 = *(_QWORD *)(a2 + 136);
          if ( (v103 & 0xDF) == 0x48 )
          {
            *(_QWORD *)(a2 + 56) = v102;
            v143 = v104;
            v144 = &v102[-v104];
            if ( !(unsigned __int8)sub_2248060(&v143, 16) )
            {
              v105 = (_BYTE *)(*(_QWORD *)(a2 + 56) + 1LL);
              *(_QWORD *)(a2 + 56) = v105;
LABEL_209:
              v106 = *v105 & 0xDF;
              if ( v106 == 85 )
              {
                *(_QWORD *)(a2 + 56) = v105 + 1;
                v107 = *++v105;
                v106 = v107 & 0xDF;
              }
              if ( v106 == 76 )
              {
                *(_QWORD *)(a2 + 56) = v105 + 1;
                if ( (v105[1] & 0xDF) == 0x4C )
                  *(_QWORD *)(a2 + 56) = v105 + 2;
              }
              sub_2124A60(a1, v143, (__int64)v144, (__int64 *)&v141);
LABEL_215:
              if ( v142 > 0x40 )
              {
                v20 = v141;
                if ( v141 )
                  goto LABEL_45;
              }
              return a1;
            }
            v108 = 16;
            goto LABEL_222;
          }
        }
        else
        {
          while ( (unsigned __int8)(*v101 - 48) <= 9u )
            ++v101;
          v104 = *(_QWORD *)(a2 + 136);
        }
        *(_QWORD *)(a2 + 56) = v101;
        v144 = &v101[-v104];
        v143 = v104;
        if ( !(unsigned __int8)sub_2248060(&v143, 8) )
        {
          v105 = *(_BYTE **)(a2 + 56);
          goto LABEL_209;
        }
        v108 = 8;
LABEL_222:
        sub_2125C10((__int64)v160, v108);
        v109 = (__m128i *)sub_99BDC0(v160, 0, 0, "invalid ", 8u);
        v162 = &v164;
        if ( (__m128i *)v109->m128i_i64[0] == &v109[1] )
        {
          v164 = _mm_loadu_si128(v109 + 1);
        }
        else
        {
          v162 = (void *)v109->m128i_i64[0];
          v164.m128i_i64[0] = v109[1].m128i_i64[0];
        }
        v163 = v109->m128i_u64[1];
        v109->m128i_i64[0] = (__int64)v109[1].m128i_i64;
        v109->m128i_i64[1] = 0;
        v109[1].m128i_i8[0] = 0;
        v110 = v163;
        if ( 0x7FFFFFFFFFFFFFFFLL - v163 <= 6 )
          goto LABEL_264;
        if ( v162 == &v164 )
          v111 = 15;
        else
          v111 = v164.m128i_i64[0];
        if ( v163 + 7 > v111 )
        {
          sub_998B30((__int64)&v162, v163, 0, " number", 7u);
        }
        else
        {
          v112 = (char *)v162 + v163;
          *(_DWORD *)v112 = 1836412448;
          *((_WORD *)v112 + 2) = 25954;
          v112[6] = 114;
        }
        v163 = v110 + 7;
        *((_BYTE *)v162 + v110 + 7) = 0;
        v165 = v167;
        if ( v162 == &v164 )
        {
          v167[0] = _mm_load_si128(&v164);
        }
        else
        {
          v165 = v162;
          *(_QWORD *)&v167[0] = v164.m128i_i64[0];
        }
        v113 = *(_QWORD *)(a2 + 136);
        v114 = v163;
        v163 = 0;
        *(_QWORD *)(a2 + 80) = v113;
        v166 = v114;
        v162 = &v164;
        v164.m128i_i8[0] = 0;
        sub_9EE8A0(a2 + 88, (__int64)&v165);
        v115 = *(_QWORD *)(a2 + 56);
        v116 = v165;
        a1->m128_i32[0] = 1;
        a1->m128_u64[1] = v113;
        a1[2].m128_i32[0] = 64;
        a1[1].m128_u64[0] = v115 - v113;
        a1[1].m128_u64[1] = 0;
        if ( v116 != v167 )
          operator delete(v116);
        if ( v162 != &v164 )
          operator delete(v162);
        if ( v160[0] != &v161 )
          operator delete(v160[0]);
        goto LABEL_215;
      }
      if ( v4 )
      {
        v14 = v5 + 1;
        v15 = nullptr;
        while ( 1 )
        {
          v16 = *(v14 - 1);
          v5 = v14 - 1;
          if ( (unsigned __int8)(v16 - 48) > 9u )
          {
            if ( !v15 )
              v15 = v14 - 1;
            if ( word_23E43C0[v16] == -1 )
              break;
          }
          ++v14;
        }
        if ( (v16 & 0xDF) == 0x48 )
        {
          *(_QWORD *)(a2 + 56) = v5;
          v18 = 16;
          goto LABEL_40;
        }
        v5 = v15;
      }
      else if ( (unsigned __int8)(v6 - 48) <= 9u )
      {
        do
          ++v5;
        while ( (unsigned __int8)(*v5 - 48) <= 9u );
      }
      *(_QWORD *)(a2 + 56) = v5;
      if ( !v13 )
      {
        v17 = *v5;
        if ( *v5 == 46 || v17 == 101 )
        {
          if ( v17 == 46 )
            *(_QWORD *)(a2 + 56) = v5 + 1;
        }
        else if ( v17 != 69 )
        {
          goto LABEL_39;
        }
        sub_2124E90((__int64)a1, (_QWORD *)a2);
        return a1;
      }
LABEL_39:
      v18 = 10;
LABEL_40:
      v19 = *(_QWORD *)(a2 + 136);
      v140 = 128;
      v137 = v19;
      v138 = &v5[-v19];
      sub_2205470(&v139, 0, 1);
      if ( (unsigned __int8)sub_2248060(&v137, v18) )
      {
        sub_2125C10((__int64)v155, v18);
        v75 = (__m128i *)sub_99BDC0(v155, 0, 0, "invalid ", 8u);
        v157 = &v159;
        if ( (__m128i *)v75->m128i_i64[0] == &v75[1] )
        {
          v159 = _mm_loadu_si128(v75 + 1);
        }
        else
        {
          v157 = (void *)v75->m128i_i64[0];
          v159.m128i_i64[0] = v75[1].m128i_i64[0];
        }
        v76 = v75->m128i_u64[1];
        v75[1].m128i_i8[0] = 0;
        v158 = v76;
        v75->m128i_i64[0] = (__int64)v75[1].m128i_i64;
        v75->m128i_i64[1] = 0;
        v77 = v158;
        if ( 0x7FFFFFFFFFFFFFFFLL - v158 <= 6 )
          goto LABEL_264;
        if ( v157 == &v159 )
          v78 = 15;
        else
          v78 = v159.m128i_i64[0];
        if ( v158 + 7 > v78 )
        {
          sub_998B30((__int64)&v157, v158, 0, " number", 7u);
        }
        else
        {
          v79 = (char *)v157 + v158;
          *(_DWORD *)v79 = 1836412448;
          *((_WORD *)v79 + 2) = 25954;
          v79[6] = 114;
        }
        v158 = v77 + 7;
        *((_BYTE *)v157 + v77 + 7) = 0;
        v165 = v167;
        if ( v157 == &v159 )
        {
          v167[0] = _mm_load_si128(&v159);
        }
        else
        {
          v165 = v157;
          *(_QWORD *)&v167[0] = v159.m128i_i64[0];
        }
        v80 = *(_QWORD *)(a2 + 136);
        v81 = v158;
        v158 = 0;
        *(_QWORD *)(a2 + 80) = v80;
        v166 = v81;
        v157 = &v159;
        v159.m128i_i8[0] = 0;
        sub_9EE8A0(a2 + 88, (__int64)&v165);
        v82 = *(_QWORD *)(a2 + 56);
        v83 = v165;
        a1->m128_i32[0] = 1;
        a1->m128_u64[1] = v80;
        a1[2].m128_i32[0] = 64;
        a1[1].m128_u64[0] = v82 - v80;
        a1[1].m128_u64[1] = 0;
        if ( v83 != v167 )
          operator delete(v83);
        if ( v157 != &v159 )
          operator delete(v157);
        if ( v155[0] != &v156 )
          operator delete(v155[0]);
      }
      else
      {
        if ( !*(_BYTE *)(a2 + 160) )
        {
          v84 = *(_BYTE **)(a2 + 56);
          v85 = *v84 & 0xDF;
          if ( v85 == 85 )
          {
            *(_QWORD *)(a2 + 56) = v84 + 1;
            v86 = *++v84;
            v85 = v86 & 0xDF;
          }
          if ( v85 == 76 )
          {
            *(_QWORD *)(a2 + 56) = v84 + 1;
            if ( (v84[1] & 0xDF) == 0x4C )
              *(_QWORD *)(a2 + 56) = v84 + 2;
          }
        }
        sub_2124A60(a1, v137, (__int64)v138, (__int64 *)&v139);
      }
      if ( v140 > 0x40 )
      {
        v20 = v139;
        if ( v139 )
          goto LABEL_45;
      }
      return a1;
    }
    v22 = *(v5 - 1);
    if ( v22 == 36 )
    {
      v36 = v5 + 1;
      if ( word_23E43C0[v6] != -1 )
      {
        do
        {
          v37 = v36;
          *(_QWORD *)(a2 + 56) = v36++;
        }
        while ( word_23E43C0[*v37] != -1 );
      }
      LODWORD(v163) = 128;
      sub_2205470(&v162, 0, 0);
      v38 = *(_QWORD *)(a2 + 56);
      v165 = v5;
      v166 = v38 - (_QWORD)v5;
      if ( !(unsigned __int8)sub_2248060(&v165, 16) )
        goto LABEL_52;
      v165 = v167;
      v39 = (char *)operator new(0x1Bu);
      v40 = _mm_load_si128((const __m128i *)&xmmword_23AB3F0);
      v165 = v39;
      *(_QWORD *)&v167[0] = 26;
      strcpy(v39 + 16, "mal number");
      v166 = 26;
      *(__m128i *)v39 = v40;
    }
    else
    {
      if ( v22 != 37 )
        goto LABEL_24;
      v23 = v5 + 1;
      if ( (unsigned __int8)(v6 - 48) <= 1u )
      {
        do
        {
          v24 = v23;
          *(_QWORD *)(a2 + 56) = v23++;
        }
        while ( (unsigned __int8)(*v24 - 48) <= 1u );
      }
      LODWORD(v163) = 128;
      sub_2205470(&v162, 0, 0);
      v25 = *(_QWORD *)(a2 + 56);
      v165 = v5;
      v166 = v25 - (_QWORD)v5;
      if ( !(unsigned __int8)sub_2248060(&v165, 2) )
      {
LABEL_52:
        sub_2124A60(a1, *(_QWORD *)(a2 + 136), *(_QWORD *)(a2 + 56) - *(_QWORD *)(a2 + 136), (__int64 *)&v162);
        goto LABEL_53;
      }
      v165 = v167;
      v87 = (__m128i *)operator new(0x16u);
      *(_QWORD *)&v167[0] = 21;
      v165 = v87;
      *v87 = _mm_load_si128((const __m128i *)&xmmword_23AB4D0);
      v87[1].m128i_i32[0] = 1700949365;
      v87[1].m128i_i8[4] = 114;
      v166 = 21;
      v87[1].m128i_i8[5] = 0;
    }
    v41 = *(_QWORD *)(a2 + 136);
    *(_QWORD *)(a2 + 80) = v41;
    sub_9EE8A0(a2 + 88, (__int64)&v165);
    v42 = *(_QWORD *)(a2 + 56);
    a1->m128_u64[1] = v41;
    a1->m128_i32[0] = 1;
    v43 = v42 - v41;
    goto LABEL_83;
  }
  v7 = (char)*(v5 - 1);
  if ( (unsigned int)(v7 - 48) <= 9 )
  {
    v8 = v7 - 48;
    v9 = *v5;
    if ( v8 <= 1u )
    {
      v11 = nullptr;
      v10 = nullptr;
    }
    else
    {
      v10 = v5 - 1;
      v11 = nullptr;
      if ( v8 >= 0xAu )
        v11 = v5 - 1;
    }
    v12 = (char *)v5;
    if ( word_23E43C0[v6] == -1 )
    {
LABEL_100:
      if ( v9 == 46 )
      {
        *(_QWORD *)(a2 + 56) = v12 + 1;
        sub_2124E90((__int64)a1, (_QWORD *)a2);
        return a1;
      }
      v57 = v9 & 0xDF;
      if ( *(_BYTE *)(a2 + 148) && v57 == 82 )
      {
        v98 = *(_QWORD *)(a2 + 136);
        v99 = (unsigned __int8 *)(v12 + 1);
        *(_QWORD *)(a2 + 56) = v99;
        a1->m128_u64[1] = v98;
        a1->m128_i32[0] = 6;
        a1[1].m128_u64[0] = (unsigned __int64)&v99[-v98];
        a1[2].m128_i32[0] = 64;
        a1[1].m128_u64[1] = 0;
        return a1;
      }
      if ( v57 == 72 )
      {
        ++v12;
        v129 = 16;
        *(_QWORD *)(a2 + 56) = v12;
LABEL_105:
        v58 = *(_BYTE **)(a2 + 136);
        v59 = v12;
        v132 = 128;
        sub_2205470(&v131, 0, 1);
        v60 = v59 - v58;
        v61 = v60 - 1;
        v165 = v58;
        if ( !v60 )
          v61 = 0;
        v166 = v61;
        if ( !(unsigned __int8)sub_2248060(&v165, v129) )
        {
          v72 = *(_BYTE **)(a2 + 56);
          v73 = *v72 & 0xDF;
          if ( v73 == 85 )
          {
            *(_QWORD *)(a2 + 56) = v72 + 1;
            v74 = *++v72;
            v73 = v74 & 0xDF;
          }
          if ( v73 == 76 )
          {
            *(_QWORD *)(a2 + 56) = v72 + 1;
            if ( (v72[1] & 0xDF) == 0x4C )
              *(_QWORD *)(a2 + 56) = v72 + 2;
          }
          sub_2124A60(a1, (unsigned __int64)v58, v60, (__int64 *)&v131);
LABEL_123:
          if ( v132 <= 0x40 )
            return a1;
          v20 = v131;
          if ( !v131 )
            return a1;
LABEL_45:
          operator delete[](v20);
          return a1;
        }
        sub_2125C10((__int64)v145, v129);
        v62 = (__m128i *)sub_99BDC0(v145, 0, 0, "invalid ", 8u);
        v147 = &v149;
        if ( (__m128i *)v62->m128i_i64[0] == &v62[1] )
        {
          v149 = _mm_loadu_si128(v62 + 1);
        }
        else
        {
          v147 = (void *)v62->m128i_i64[0];
          v149.m128i_i64[0] = v62[1].m128i_i64[0];
        }
        v63 = v62->m128i_u64[1];
        v62[1].m128i_i8[0] = 0;
        v148 = v63;
        v62->m128i_i64[0] = (__int64)v62[1].m128i_i64;
        v62->m128i_i64[1] = 0;
        v64 = v148;
        if ( 0x7FFFFFFFFFFFFFFFLL - v148 > 6 )
        {
          v65 = v148 + 7;
          if ( v147 == &v149 )
            v66 = 15;
          else
            v66 = v149.m128i_i64[0];
          if ( v65 > v66 )
          {
            v130 = v148 + 7;
            sub_998B30((__int64)&v147, v148, 0, " number", 7u);
            v65 = v130;
          }
          else
          {
            v67 = (char *)v147 + v148;
            *(_DWORD *)v67 = 1836412448;
            *((_WORD *)v67 + 2) = 25954;
            v67[6] = 114;
          }
          v148 = v65;
          *((_BYTE *)v147 + v64 + 7) = 0;
          v165 = v167;
          if ( v147 == &v149 )
          {
            v167[0] = _mm_load_si128(&v149);
          }
          else
          {
            v165 = v147;
            *(_QWORD *)&v167[0] = v149.m128i_i64[0];
          }
          v68 = *(_QWORD *)(a2 + 136);
          v69 = v148;
          v148 = 0;
          *(_QWORD *)(a2 + 80) = v68;
          v166 = v69;
          v147 = &v149;
          v149.m128i_i8[0] = 0;
          sub_9EE8A0(a2 + 88, (__int64)&v165);
          v70 = *(_QWORD *)(a2 + 56);
          v71 = v165;
          a1->m128_i32[0] = 1;
          a1->m128_u64[1] = v68;
          a1[2].m128_i32[0] = 64;
          a1[1].m128_u64[0] = v70 - v68;
          a1[1].m128_u64[1] = 0;
          if ( v71 != v167 )
            operator delete(v71);
          if ( v147 != &v149 )
            operator delete(v147);
          if ( v145[0] != &v146 )
            operator delete(v145[0]);
          goto LABEL_123;
        }
LABEL_264:
        std::__throw_length_error("basic_string::append");
      }
      if ( v57 == 84 )
      {
        ++v12;
        v129 = 10;
        *(_QWORD *)(a2 + 56) = v12;
        goto LABEL_105;
      }
      if ( ((v57 - 79) & 0xFD) == 0 )
      {
        ++v12;
        v129 = 8;
        *(_QWORD *)(a2 + 56) = v12;
        goto LABEL_105;
      }
      if ( v57 == 89 )
      {
        ++v12;
        v129 = 2;
        *(_QWORD *)(a2 + 56) = v12;
        goto LABEL_105;
      }
      if ( v11 && v12 == (char *)(v11 + 1) && *(_DWORD *)(a2 + 156) <= 0xDu && (*v11 & 0xDF) == 0x44 )
      {
        v129 = 10;
        goto LABEL_105;
      }
      if ( v10 && v12 == (char *)(v10 + 1) && *(_DWORD *)(a2 + 156) <= 0xBu && (*v10 & 0xDF) == 0x42 )
      {
        v129 = 2;
        goto LABEL_105;
      }
      *(_QWORD *)(a2 + 56) = v5;
      v6 = *v5;
      goto LABEL_22;
    }
    while ( 1 )
    {
      if ( v9 < 48 )
        goto LABEL_14;
      if ( v9 > 49 )
        break;
LABEL_10:
      *(_QWORD *)(a2 + 56) = ++v12;
      v9 = *v12;
      if ( word_23E43C0[(unsigned __int8)*v12] == -1 )
        goto LABEL_100;
    }
    if ( v9 > 57 )
    {
LABEL_14:
      if ( !v11 )
        v11 = (unsigned __int8 *)v12;
    }
    if ( !v10 )
      v10 = (unsigned __int8 *)v12;
    goto LABEL_10;
  }
LABEL_22:
  if ( !*(_BYTE *)(a2 + 152) )
    goto LABEL_23;
  if ( (unsigned int)word_23E43C0[v6] <= 0xF )
  {
    do
      ++v5;
    while ( (unsigned int)word_23E43C0[*v5] <= 0xF );
  }
  v26 = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a2 + 56) = v5;
  v136 = 128;
  v133 = v26;
  v134 = &v5[-v26];
  sub_2205470(&v135, 0, 1);
  if ( (unsigned __int8)sub_2248060(&v133, *(unsigned int *)(a2 + 156)) )
  {
    sub_2125C10((__int64)v150, *(_DWORD *)(a2 + 156));
    v27 = (__m128i *)sub_99BDC0(v150, 0, 0, "invalid ", 8u);
    v152 = &v154;
    if ( (__m128i *)v27->m128i_i64[0] == &v27[1] )
    {
      v154 = _mm_loadu_si128(v27 + 1);
    }
    else
    {
      v152 = (void *)v27->m128i_i64[0];
      v154.m128i_i64[0] = v27[1].m128i_i64[0];
    }
    v28 = v27->m128i_u64[1];
    v27[1].m128i_i8[0] = 0;
    v153 = v28;
    v27->m128i_i64[0] = (__int64)v27[1].m128i_i64;
    v27->m128i_i64[1] = 0;
    v29 = v153;
    if ( 0x7FFFFFFFFFFFFFFFLL - v153 <= 6 )
      goto LABEL_264;
    if ( v152 == &v154 )
      v30 = 15;
    else
      v30 = v154.m128i_i64[0];
    if ( v153 + 7 > v30 )
    {
      sub_998B30((__int64)&v152, v153, 0, " number", 7u);
    }
    else
    {
      v31 = (char *)v152 + v153;
      *(_DWORD *)v31 = 1836412448;
      *((_WORD *)v31 + 2) = 25954;
      v31[6] = 114;
    }
    v153 = v29 + 7;
    *((_BYTE *)v152 + v29 + 7) = 0;
    v165 = v167;
    if ( v152 == &v154 )
    {
      v167[0] = _mm_load_si128(&v154);
    }
    else
    {
      v165 = v152;
      *(_QWORD *)&v167[0] = v154.m128i_i64[0];
    }
    v32 = *(_QWORD *)(a2 + 136);
    v33 = v153;
    v153 = 0;
    *(_QWORD *)(a2 + 80) = v32;
    v166 = v33;
    v152 = &v154;
    v154.m128i_i8[0] = 0;
    sub_9EE8A0(a2 + 88, (__int64)&v165);
    v34 = *(_QWORD *)(a2 + 56);
    v35 = v165;
    a1->m128_i32[0] = 1;
    a1->m128_u64[1] = v32;
    a1[2].m128_i32[0] = 64;
    a1[1].m128_u64[0] = v34 - v32;
    a1[1].m128_u64[1] = 0;
    if ( v35 != v167 )
      operator delete(v35);
    if ( v152 != &v154 )
      operator delete(v152);
    if ( v150[0] != &v151 )
      operator delete(v150[0]);
  }
  else
  {
    sub_2124A60(a1, v133, (__int64)v134, (__int64 *)&v135);
  }
  if ( v136 > 0x40 )
  {
    v20 = v135;
    if ( v135 )
      goto LABEL_45;
  }
  return a1;
}
