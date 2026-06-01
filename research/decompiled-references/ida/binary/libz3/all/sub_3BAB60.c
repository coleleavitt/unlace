__int64 __fastcall sub_3BAB60(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rbx
  int *v9; // rax
  __int32 v10; // r13d
  __int64 v11; // rax
  char *v12; // rdx
  unsigned int v13; // ecx
  char *v14; // rsi
  __int64 v15; // rcx
  char *v16; // rdi
  char *v17; // rax
  int v18; // ecx
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 *v25; // rax
  unsigned int v26; // eax
  __int64 v27; // r8
  __int64 *v28; // rdi
  __int64 v29; // rax
  int v30; // r8d
  int v31; // r9d
  unsigned __int128 si128; // xmm0
  int v33; // edx
  _QWORD *v34; // rbx
  unsigned int v35; // r13d
  __int64 v36; // rax
  __int64 *v37; // rax
  unsigned __int128 v38; // kr00_16
  __int64 v39; // rcx
  unsigned int v40; // edx
  unsigned int v41; // r9d
  size_t v42; // rsi
  _DWORD *v43; // rax
  __int64 v44; // rax
  int v45; // edx
  unsigned int v46; // ebp
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rax
  int v50; // edx
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rbx
  _QWORD *v54; // rax
  __int64 v55; // r14
  __int64 v56; // rbx
  __int64 v57; // rdi
  int v58; // eax
  __m128i v59; // xmm0
  _QWORD *v60; // rax
  _QWORD *v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  __int64 *v65; // rcx
  int v66; // edx
  unsigned int v67; // ecx
  int v68; // r14d
  __int64 v69; // rax
  __int64 *v70; // rbx
  unsigned int v71; // edx
  __int64 *v72; // r9
  __int64 v73; // rdx
  size_t v74; // r8
  __int64 *v75; // rcx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // rdi
  char v81; // al
  _QWORD *v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rax
  __int64 v85; // r13
  __int64 v86; // rsi
  __int64 v87; // rdi
  bool v88; // zf
  __int64 result; // rax
  __int64 *v90; // r14
  __int64 *v91; // rbp
  unsigned __int64 v92; // r13
  __int64 v93; // rsi
  size_t v94; // rdi
  __int64 *v95; // r13
  __int64 *v96; // rbx
  unsigned __int64 v97; // rbp
  __int64 v98; // rsi
  __int64 v99; // rsi
  char v100; // al
  __int64 v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // r14
  __m128i *v104; // rbx
  int v105; // eax
  __int64 v106; // r9
  __m128i *v107; // r14
  __int64 v108; // rax
  __m128i *v109; // rsi
  __m128i *v110; // rax
  __m128i *v111; // rcx
  int v112; // edx
  __int32 v113; // eax
  unsigned int v114; // r14d
  unsigned int v115; // ecx
  unsigned int *v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rbx
  __m128i *v119; // rax
  int v120; // ecx
  size_t v121; // r9
  __m128i *v122; // rdx
  __m128i *v123; // rsi
  const __m128i *v124; // rbx
  __int64 v125; // rdx
  __m128i *v126; // r10
  __int64 v127; // rdx
  __m128i *v128; // rsi
  __m128i *v129; // rdx
  __m128i v130; // xmm0
  __m128i *v131; // rax
  int v132; // ecx
  __int64 v133; // r10
  __m128i *v134; // rdx
  const __m128i *v135; // r11
  __m128i *v136; // r8
  __int64 v137; // rdx
  __m128i *v138; // rsi
  __m128i *v139; // rdx
  __m128i v140; // xmm0
  _QWORD *v141; // rdx
  char **v142; // rbp
  __int64 v143; // rdx
  char **v144; // r15
  __int64 v145; // rdx
  char **exception; // r14
  __int64 v147; // rdx
  int v148; // [rsp+0h] [rbp-108h]
  int v150; // [rsp+8h] [rbp-100h]
  unsigned __int128 v151; // [rsp+10h] [rbp-F8h] BYREF
  unsigned __int128 v152; // [rsp+20h] [rbp-E8h] BYREF
  __m128i *v153; // [rsp+30h] [rbp-D8h]
  __int64 v154; // [rsp+38h] [rbp-D0h]
  int v155[2]; // [rsp+40h] [rbp-C8h]
  __int64 *v156; // [rsp+48h] [rbp-C0h]
  __int64 *v157; // [rsp+50h] [rbp-B8h]
  __int64 *v158; // [rsp+58h] [rbp-B0h]
  __int64 v159; // [rsp+60h] [rbp-A8h]
  __int64 *v160; // [rsp+68h] [rbp-A0h]
  __m128i *v161; // [rsp+70h] [rbp-98h]
  int v162; // [rsp+7Ch] [rbp-8Ch]
  __int64 *v163; // [rsp+80h] [rbp-88h]
  __int64 *v164; // [rsp+90h] [rbp-78h]
  unsigned __int128 v165; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v166[11]; // [rsp+B0h] [rbp-58h] BYREF

  v4 = *(__int64 **)(a1 + 8);
  v158 = a3;
  v5 = *(unsigned int *)(a2 + 24);
  v160 = v4;
  v163 = v4;
  v159 = *(_QWORD *)(a2 + 16);
  if ( (_DWORD)v5 )
  {
    LODWORD(v153) = 0;
    v6 = nullptr;
    *(_QWORD *)&v151 = a1 + 24;
    while ( 1 )
    {
      v7 = sub_15D1F10(*(_QWORD *)(a2 + 8LL * (unsigned int)v153 + 32));
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 840LL);
      if ( v7 == v8 )
        goto LABEL_18;
      if ( !(unsigned __int8)sub_1673B10(v151, v7) )
      {
        sub_1872CE0("");
        sub_1873130(114, 761);
      }
      v9 = *(int **)(*(_QWORD *)(v7 + 24) + 8LL);
      if ( *((_BYTE *)v9 + 8) )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      v10 = *v9;
      v11 = *(unsigned int *)(a1 + 176);
      v12 = *(char **)(a1 + 168);
      v13 = v11 - 1;
      v11 *= 24;
      v14 = &v12[v11];
      v15 = 24LL * (v10 & v13);
      v16 = &v12[v15];
      if ( v15 != v11 )
      {
        v17 = &v12[v15];
        do
        {
          v18 = *((_DWORD *)v17 + 1);
          if ( v18 == 2 )
          {
            if ( v10 == *(_DWORD *)v17 && v10 == *((_DWORD *)v17 + 2) )
              goto LABEL_13;
          }
          else if ( !v18 )
          {
            goto LABEL_49;
          }
          v17 += 24;
        }
        while ( v14 != v17 );
      }
      for ( ; v16 != v12; v12 += 24 )
      {
        v51 = *((_DWORD *)v12 + 1);
        if ( v51 == 2 )
        {
          if ( v10 == *(_DWORD *)v12 && v10 == *((_DWORD *)v12 + 2) )
          {
            v17 = v12;
LABEL_13:
            v19 = *((_QWORD *)v17 + 2);
            goto LABEL_14;
          }
        }
        else if ( !v51 )
        {
          break;
        }
      }
LABEL_49:
      v52 = sub_186B270(0x290u);
      *(_QWORD *)(v52 + 8) = v52;
      v53 = v52 + 32;
      v19 = v52;
      *(_QWORD *)(v52 + 16) = 0;
      *(_BYTE *)(v52 + 24) = 0;
      sub_186A780(v52 + 32, (unsigned int)(2 * v10));
      *(_QWORD *)(v19 + 576) = 0;
      *(_QWORD *)(v19 + 584) = v53;
      *(_QWORD *)(v19 + 592) = v53;
      *(_QWORD *)(v19 + 600) = v53;
      *(_QWORD *)(v19 + 608) = v53;
      v54 = (_QWORD *)sub_186B270(0x80u);
      v54[1] = 0;
      v54[3] = 0;
      v54[5] = 0;
      v54[7] = 0;
      v54[9] = 0;
      v54[11] = 0;
      v54[13] = 0;
      v54[15] = 0;
      *(_QWORD *)(v19 + 616) = v54;
      *(_DWORD *)(v19 + 632) = 0;
      *(_QWORD *)(v19 + 624) = 8;
      *(_QWORD *)(v19 + 640) = 0;
      *(_QWORD *)(v19 + 648) = 0;
      v154 = v53;
      v55 = sub_1829AC0(v53);
      v56 = sub_186B270(0x60u);
      v57 = v154;
      v58 = *(_DWORD *)(v19 + 628);
      *(_QWORD *)(v56 + 8) = v55;
      *(_QWORD *)v56 = v57;
      *(_QWORD *)(v56 + 16) = v19;
      v59 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v57, (__m128i)(unsigned __int64)v57);
      *(_QWORD *)(v56 + 24) = 0;
      *(_DWORD *)(v56 + 32) = 0;
      *(_DWORD *)(v56 + 36) = v58;
      *(__m128i *)(v56 + 40) = v59;
      *(__m128i *)(v56 + 56) = v59;
      v60 = (_QWORD *)sub_186B270(0x80u);
      v60[1] = 0;
      v61 = *(_QWORD **)(v19 + 16);
      v60[3] = 0;
      v60[5] = 0;
      v60[7] = 0;
      v60[9] = 0;
      v60[11] = 0;
      v60[13] = 0;
      v60[15] = 0;
      *(_QWORD *)(v56 + 72) = v60;
      ++*(_DWORD *)(v56 + 32);
      *(_QWORD *)(v56 + 80) = 8;
      *(_DWORD *)(v56 + 88) = 0;
      *(_QWORD *)v19 = v56;
      if ( v61 )
      {
        v62 = *((_DWORD *)v61 - 1);
        if ( v62 == *((_DWORD *)v61 - 2) )
        {
          v114 = (3 * v62 + 1) >> 1;
          v115 = 8 * v114 + 8;
          if ( 8 * v62 + 8 >= v115 || v62 >= v114 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_C7E7E(v166, "Overflow encountered when expanding vector", v147);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v166);
            sub_233E40((__int64)v166);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v116 = (unsigned int *)sub_186B300(v61 - 1, v115);
          v117 = v116[1];
          v61 = v116 + 2;
          *v116 = v114;
          *(_QWORD *)(v19 + 16) = v116 + 2;
          LODWORD(v116) = v117;
          v65 = &v61[v117];
          v64 = (_DWORD)v116 + 1;
        }
        else
        {
          v63 = v62;
          v64 = v62 + 1;
          v65 = &v61[v63];
        }
      }
      else
      {
        v141 = (_QWORD *)sub_186B270(0x18u);
        *v141 = 2;
        v64 = 1;
        v61 = v141 + 1;
        *(_QWORD *)(v19 + 16) = v61;
        v65 = v61;
      }
      *v65 = v56;
      *((_DWORD *)v61 - 1) = v64;
      v66 = *(_DWORD *)(v19 + 624);
      *(_QWORD *)&v152 = *(_QWORD *)v19;
      v67 = 2 * v66;
      if ( 3 * v66 < (unsigned int)(4 * (*(_DWORD *)(v19 + 628) + *(_DWORD *)(v19 + 632))) )
      {
        v118 = v67;
        LODWORD(v156) = 2 * v66;
        *(_QWORD *)v155 = 16LL * v67;
        v119 = (__m128i *)sub_186B270(*(size_t *)v155);
        v120 = (int)v156;
        v121 = *(_QWORD *)v155;
        v122 = v119;
        v123 = &v119[v118];
        if ( (_DWORD)v156 )
        {
          if ( ((16 * (_BYTE)v118) & 0x10) == 0 || (v122 = v119 + 1, v119->m128i_i64[1] = 0, &v119[1] != v123) )
          {
            do
            {
              v122->m128i_i64[1] = 0;
              v122 += 2;
              v122[-1].m128i_i64[1] = 0;
            }
            while ( v122 != v123 );
          }
        }
        v124 = *(const __m128i **)(v19 + 616);
        v125 = *(unsigned int *)(v19 + 624);
        v126 = (__m128i *)&v124[v125];
        if ( v124 != &v124[v125] )
        {
          do
          {
            while ( v124->m128i_i64[1] <= 1uLL )
            {
              if ( v126 == ++v124 )
                goto LABEL_150;
            }
            v127 = 16LL * (v124->m128i_i32[0] & (unsigned int)(v120 - 1));
            v128 = &v119[(unsigned __int64)v127 / 0x10];
            if ( v121 == v127 )
            {
LABEL_154:
              if ( v119 == v128 )
              {
LABEL_182:
                v162 = v120;
                v161 = v126;
                LODWORD(v157) = v120 - 1;
                v156 = (__int64 *)v119;
                *(_QWORD *)v155 = v121;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v129 = v119;
              while ( v129->m128i_i64[1] )
              {
                if ( v128 == ++v129 )
                  goto LABEL_182;
              }
            }
            else
            {
              v129 = &v119[(unsigned __int64)v127 / 0x10];
              while ( v129->m128i_i64[1] )
              {
                if ( &v119->m128i_i8[v121] == (__int8 *)++v129 )
                  goto LABEL_154;
              }
            }
            v130 = _mm_loadu_si128(v124++);
            *v129 = v130;
          }
          while ( v126 != v124 );
LABEL_150:
          v126 = *(__m128i **)(v19 + 616);
        }
        if ( v126 )
        {
          LODWORD(v156) = v120;
          *(_QWORD *)v155 = v119;
          sub_186B220(v126);
          v120 = (int)v156;
          v119 = *(__m128i **)v155;
        }
        *(_QWORD *)(v19 + 616) = v119;
        *(_DWORD *)(v19 + 624) = v120;
        *(_DWORD *)(v19 + 632) = 0;
      }
      v68 = sub_182A670(*(_QWORD *)(v19 + 600), *(_QWORD *)(v152 + 8));
      v69 = *(unsigned int *)(v19 + 624);
      v70 = *(__int64 **)(v19 + 616);
      v71 = v69 - 1;
      v69 *= 16;
      v72 = (__int64 *)((char *)v70 + v69);
      v73 = 16LL * (v68 & v71);
      v74 = (size_t)&v70[(unsigned __int64)v73 / 8];
      if ( v73 == v69 )
      {
        v75 = nullptr;
        while ( 1 )
        {
LABEL_63:
          if ( (__int64 *)v74 == v70 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v77 = v70[1];
          if ( v77 > 1 )
          {
            if ( v68 == *(_DWORD *)v70 )
            {
              v99 = *(_QWORD *)(v77 + 8);
              v156 = v75;
              *(_QWORD *)v155 = v74;
              v100 = sub_182A660(*(_QWORD *)(v19 + 608), v99, *(_QWORD *)(v152 + 8));
              v74 = *(_QWORD *)v155;
              v75 = v156;
              if ( v100 )
                goto LABEL_68;
            }
          }
          else
          {
            if ( !v77 )
            {
LABEL_103:
              if ( v75 )
                --*(_DWORD *)(v19 + 632);
              else
                v75 = v70;
              v101 = v152;
              *(_DWORD *)v75 = v68;
              v75[1] = v101;
              ++*(_DWORD *)(v19 + 628);
              goto LABEL_108;
            }
            v75 = v70;
          }
          v70 += 2;
        }
      }
      v70 = (__int64 *)((char *)v70 + v73);
      v75 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v76 = v70[1];
          if ( v76 > 1 )
            break;
          if ( !v76 )
            goto LABEL_103;
          v75 = v70;
          v70 += 2;
          if ( v72 == v70 )
          {
LABEL_60:
            v70 = *(__int64 **)(v19 + 616);
            goto LABEL_63;
          }
        }
        if ( v68 == *(_DWORD *)v70 )
        {
          v78 = *(_QWORD *)(v76 + 8);
          v157 = v75;
          v156 = v72;
          v79 = *(_QWORD *)(v152 + 8);
          v80 = *(_QWORD *)(v19 + 608);
          *(_QWORD *)v155 = v74;
          v81 = sub_182A660(v80, v78, v79);
          v74 = *(_QWORD *)v155;
          v72 = v156;
          v75 = v157;
          if ( v81 )
            break;
        }
        v70 += 2;
        if ( v72 == v70 )
          goto LABEL_60;
      }
LABEL_68:
      v70[1] = v152;
LABEL_108:
      v103 = *(unsigned int *)(a1 + 176);
      if ( 3 * (int)v103 < (unsigned int)(4 * (*(_DWORD *)(a1 + 180) + *(_DWORD *)(a1 + 184))) )
      {
        v155[0] = 2 * v103;
        v154 = 24LL * (unsigned int)(2 * v103);
        *(_QWORD *)&v152 = v154;
        v131 = (__m128i *)sub_186B270(v154);
        v132 = 2 * v103;
        v133 = v154;
        v104 = v131;
        v106 = v154;
        if ( 2 * (_DWORD)v103 )
        {
          v134 = &v131[3 * (v103 & 0x7FFFFFFF)];
          do
          {
            v131->m128i_i64[0] = 0;
            v131 += 3;
            v131[-2].m128i_i64[1] = 0;
          }
          while ( v131 != v134 );
        }
        v135 = *(const __m128i **)(a1 + 168);
        v105 = v132 - 1;
        v107 = (__m128i *)((char *)v104 + v133);
        v136 = (__m128i *)((char *)v135 + 24 * *(unsigned int *)(a1 + 176));
        if ( v135 != v136 )
        {
          do
          {
            while ( v135->m128i_i32[1] != 2 )
            {
              v135 = (const __m128i *)((char *)v135 + 24);
              if ( v136 == v135 )
                goto LABEL_171;
            }
            v137 = 24LL * (v135->m128i_i32[0] & (unsigned int)v105);
            v138 = (__m128i *)((char *)v104 + v137);
            if ( v133 == v137 )
            {
LABEL_175:
              if ( v104 == v138 )
              {
LABEL_184:
                v161 = (__m128i *)v133;
                LODWORD(v157) = v132;
                v156 = (__int64 *)v136;
                *(_QWORD *)v155 = v135;
                LODWORD(v154) = v132 - 1;
                *(_QWORD *)&v152 = v106;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v139 = v104;
              while ( v139->m128i_i32[1] )
              {
                v139 = (__m128i *)((char *)v139 + 24);
                if ( v138 == v139 )
                  goto LABEL_184;
              }
            }
            else
            {
              v139 = (__m128i *)((char *)v104 + v137);
              while ( v139->m128i_i32[1] )
              {
                v139 = (__m128i *)((char *)v139 + 24);
                if ( v107 == v139 )
                  goto LABEL_175;
              }
            }
            v140 = _mm_loadu_si128(v135);
            v135 = (const __m128i *)((char *)v135 + 24);
            *v139 = v140;
            v139[1].m128i_i64[0] = v135[-1].m128i_i64[1];
          }
          while ( v136 != v135 );
LABEL_171:
          v136 = *(__m128i **)(a1 + 168);
        }
        if ( v136 )
        {
          v155[0] = v132;
          LODWORD(v154) = v132 - 1;
          *(_QWORD *)&v152 = v106;
          sub_186B220(v136);
          v132 = v155[0];
          v105 = v154;
          v106 = v152;
        }
        *(_QWORD *)(a1 + 168) = v104;
        *(_DWORD *)(a1 + 176) = v132;
        *(_DWORD *)(a1 + 184) = 0;
      }
      else
      {
        v104 = *(__m128i **)(a1 + 168);
        v105 = v103 - 1;
        v106 = 24 * v103;
        v107 = (__m128i *)((char *)v104 + 24 * v103);
      }
      v108 = 24LL * (v10 & (unsigned int)v105);
      v109 = (__m128i *)((char *)v104 + v108);
      if ( v106 == v108 )
      {
        v111 = nullptr;
LABEL_120:
        if ( v104 == v109 )
        {
LABEL_136:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        while ( 1 )
        {
          v113 = v104->m128i_i32[1];
          if ( v113 == 2 )
          {
            if ( v10 == v104->m128i_i32[0] && v10 == v104->m128i_i32[2] )
            {
              v104->m128i_i32[2] = v10;
              v104[1].m128i_i64[0] = v19;
              v104->m128i_i32[1] = 2;
              goto LABEL_14;
            }
          }
          else
          {
            if ( !v113 )
            {
              if ( !v111 )
              {
                v111 = v104;
                goto LABEL_134;
              }
LABEL_133:
              --*(_DWORD *)(a1 + 184);
              goto LABEL_134;
            }
            v111 = v104;
          }
          v104 = (__m128i *)((char *)v104 + 24);
          if ( v109 == v104 )
            goto LABEL_136;
        }
      }
      v110 = (__m128i *)((char *)v104 + v108);
      v111 = nullptr;
      while ( 1 )
      {
        v112 = v110->m128i_i32[1];
        if ( v112 != 2 )
          break;
        if ( v10 == v110->m128i_i32[0] && v10 == v110->m128i_i32[2] )
        {
          v110->m128i_i32[2] = v10;
          v110[1].m128i_i64[0] = v19;
          v110->m128i_i32[1] = 2;
          goto LABEL_14;
        }
LABEL_114:
        v110 = (__m128i *)((char *)v110 + 24);
        if ( v107 == v110 )
          goto LABEL_120;
      }
      if ( v112 )
        break;
      if ( v111 )
        goto LABEL_133;
      v111 = v110;
LABEL_134:
      v111->m128i_i32[2] = v10;
      v111[1].m128i_i64[0] = v19;
      v111->m128i_i32[1] = 2;
      v111->m128i_i32[0] = v10;
      ++*(_DWORD *)(a1 + 180);
LABEL_14:
      v20 = *(_QWORD *)(v19 + 16);
      if ( v20 )
      {
        v21 = *(unsigned int *)(v20 - 4);
        v22 = 1;
        if ( (unsigned int)v21 > 1 )
        {
          do
            ++v22;
          while ( v21 >= 1LL << v22 );
        }
      }
      else
      {
        v22 = 1;
      }
      v8 = sub_1674700(v151, v22);
LABEL_18:
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      if ( v6 )
      {
        v23 = *((_DWORD *)v6 - 1);
        if ( v23 == *((_DWORD *)v6 - 2) )
        {
          v46 = (3 * v23 + 1) >> 1;
          v47 = 8 * v46 + 8;
          if ( 8 * v23 + 8 >= (unsigned int)v47 || v23 >= v46 )
          {
            v142 = (char **)__cxa_allocate_exception(0x28u);
            sub_C7E7E(v166, "Overflow encountered when expanding vector", v143);
            *v142 = (char *)off_1C63128;
            sub_2333C0(v142 + 1, v166);
            sub_233E40((__int64)v166);
            __cxa_throw(v142, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v48 = (unsigned int *)sub_186B300(v6 - 1, v47);
          v6 = v48 + 2;
          *v48 = v46;
          v49 = v48[1];
          v50 = v49;
          v25 = &v6[v49];
          v5 = (unsigned int)(v50 + 1);
        }
        else
        {
          v24 = v23;
          v5 = v23 + 1;
          v25 = &v6[v24];
        }
      }
      else
      {
        v82 = (_QWORD *)sub_186B270(0x18u);
        v6 = v82 + 1;
        *v82 = 2;
        v5 = 1;
        v25 = v82 + 1;
      }
      *v25 = v8;
      LODWORD(v153) = (_DWORD)v153 + 1;
      v26 = (unsigned int)v153;
      *((_DWORD *)v6 - 1) = v5;
      if ( v26 >= *(_DWORD *)(a2 + 24) )
      {
        v156 = *(__int64 **)(a1 + 8);
        v27 = v156[105];
        v28 = v156;
        goto LABEL_25;
      }
    }
    v111 = v110;
    goto LABEL_114;
  }
  v6 = nullptr;
  v156 = v160;
  v27 = v160[105];
  v28 = v160;
LABEL_25:
  v29 = sub_15E3510(v28, v159 + 16, v5, v6, v27, 0);
  *(_QWORD *)v155 = v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  sub_6511B0(*(_QWORD *)a1, *(_QWORD *)v155, 0);
  v157 = *(__int64 **)(a1 + 8);
  v164 = v157;
  si128 = (unsigned __int128)_mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)v157);
  v33 = *(_DWORD *)(a2 + 24);
  if ( v33 )
  {
    v34 = nullptr;
    v35 = 0;
    v153 = (__m128i *)&v165;
    do
    {
      v165 = si128;
      sub_3B97A0(a1, *(_QWORD *)(a2 + 8LL * v35 + 32), v153->m128i_i64);
      v38 = v165;
      si128 = (unsigned __int128)_mm_load_si128((const __m128i *)&v165);
      v39 = si128;
      if ( (_QWORD)si128 )
        ++*(_DWORD *)(si128 + 8);
      if ( v34 )
      {
        v40 = *((_DWORD *)v34 - 1);
        if ( v40 == *((_DWORD *)v34 - 2) )
        {
          v41 = (3 * v40 + 1) >> 1;
          v42 = 8 * v41 + 8;
          if ( 8 * v40 + 8 >= (unsigned int)v42 || v40 >= v41 )
          {
            v144 = (char **)__cxa_allocate_exception(0x28u);
            sub_C7E7E(v166, "Overflow encountered when expanding vector", v145);
            *v144 = (char *)off_1C63128;
            sub_2333C0(v144 + 1, v166);
            sub_233E40((__int64)v166);
            __cxa_throw(v144, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v154 = si128;
          LODWORD(v151) = (3 * v40 + 1) >> 1;
          v152 = si128;
          v43 = (_DWORD *)sub_186B300(v34 - 1, v42);
          v31 = v151;
          v34 = v43 + 2;
          si128 = (unsigned __int128)_mm_load_si128((const __m128i *)&v152);
          v39 = v154;
          *v43 = v151;
          v44 = (unsigned int)v43[1];
          v45 = v44;
          v37 = &v34[v44];
          v33 = v45 + 1;
        }
        else
        {
          v36 = v40;
          v33 = v40 + 1;
          v37 = &v34[v36];
        }
      }
      else
      {
        *(_QWORD *)&v152 = si128;
        v151 = si128;
        v102 = (_QWORD *)sub_186B270(0x18u);
        v34 = v102 + 1;
        si128 = (unsigned __int128)_mm_load_si128((const __m128i *)&v151);
        v39 = v152;
        *v102 = 2;
        v33 = 1;
        v37 = v102 + 1;
      }
      *v37 = v39;
      ++v35;
      *((_DWORD *)v34 - 1) = v33;
    }
    while ( v35 < *(_DWORD *)(a2 + 24) );
    v83 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    LODWORD(v83) = (_DWORD)v157;
    v34 = nullptr;
    v38 = __PAIR128__((unsigned __int64)v157, 0);
  }
  v84 = sub_15DC610(
          v83,
          v155[0],
          v33,
          (int)v34,
          v30,
          v31,
          v148,
          a2,
          v151,
          SDWORD2(v151),
          v152,
          SBYTE8(v152),
          (int)v153,
          v154,
          v155[0],
          v156);
  v85 = v84;
  if ( v84 )
    ++*(_DWORD *)(v84 + 8);
  v86 = *v158;
  if ( *v158 )
  {
    v87 = v158[1];
    v88 = (*(_DWORD *)(v86 + 8))-- == 1;
    if ( v88 )
      sub_15D7BC0(v87, v86);
  }
  result = (__int64)v158;
  *v158 = v85;
  if ( (_QWORD)v38 )
  {
    v88 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v88 )
      result = sub_15D7BC0(*((_QWORD *)&v38 + 1), v38);
  }
  if ( v34 )
  {
    v90 = v157;
    v91 = v34;
    v92 = (unsigned __int64)&v34[*((unsigned int *)v34 - 1)];
    if ( (unsigned __int64)v34 < v92 )
    {
      do
      {
        while ( 1 )
        {
          v93 = *v91;
          if ( *v91 )
          {
            v88 = (*(_DWORD *)(v93 + 8))-- == 1;
            if ( v88 )
              break;
          }
          if ( (unsigned __int64)++v91 >= v92 )
            goto LABEL_87;
        }
        ++v91;
        sub_15D7BC0(v90, v93);
      }
      while ( (unsigned __int64)v91 < v92 );
    }
LABEL_87:
    result = sub_186B220(v34 - 1);
  }
  v94 = *(_QWORD *)v155;
  if ( *(_QWORD *)v155 )
  {
    v150 = *(_DWORD *)(*(_QWORD *)v155 + 8LL);
    result = (unsigned int)(v150 - 1);
    *(_DWORD *)(*(_QWORD *)v155 + 8LL) = result;
    if ( v150 == 1 )
      result = sub_15D7BC0(v156, v94);
  }
  if ( v6 )
  {
    v95 = v160;
    v96 = v6;
    v97 = (unsigned __int64)&v6[*((unsigned int *)v6 - 1)];
    if ( (unsigned __int64)v6 < v97 )
    {
      do
      {
        while ( 1 )
        {
          v98 = *v96;
          if ( *v96 )
          {
            v88 = (*(_DWORD *)(v98 + 8))-- == 1;
            if ( v88 )
              break;
          }
          if ( (unsigned __int64)++v96 >= v97 )
            return sub_186B220(v6 - 1);
        }
        ++v96;
        sub_15D7BC0(v95, v98);
      }
      while ( (unsigned __int64)v96 < v97 );
    }
    return sub_186B220(v6 - 1);
  }
  return result;
}

