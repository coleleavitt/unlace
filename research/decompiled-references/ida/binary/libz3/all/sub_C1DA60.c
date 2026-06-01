__int64 *__fastcall sub_C1DA60(const __m128i *a1, void **a2)
{
  bool v3; // zf
  __int64 *v4; // rbx
  __int64 *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r12
  int v9; // eax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rbp
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rcx
  __int64 v19; // rcx
  unsigned __int32 v20; // edx
  __m128i *v21; // r12
  __int32 v22; // r9d
  __int64 v23; // rdx
  __m128i *v24; // r13
  int v25; // esi
  __m128i v26; // xmm0
  __int64 v27; // r9
  __m128i *v28; // rdi
  __m128i *v29; // rax
  __m128i *v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // r12d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rcx
  int v37; // esi
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rax
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 *v47; // rcx
  __int64 *v48; // r10
  unsigned __int32 v49; // ecx
  __m128 *v50; // rbp
  __int32 v51; // r8d
  size_t v52; // r14
  __m128 *v53; // r12
  int v54; // ecx
  __m128 v55; // xmm0
  __int64 v56; // r8
  __m128 *v57; // rsi
  __m128 *v58; // rax
  __m128 *v59; // rdi
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rax
  __int64 v62; // r12
  _QWORD *v63; // r14
  unsigned int v64; // eax
  __int64 v65; // rdx
  int v66; // eax
  __m128 *v67; // rdx
  __int64 v68; // rdi
  __m128 v69; // xmm0
  void *v70; // rdi
  void *v71; // r12
  __int64 v72; // r14
  void *v73; // rdi
  void *v74; // r12
  int v75; // ecx
  int v76; // r8d
  int v77; // r9d
  __int64 v78; // rdi
  int v79; // edx
  void *v80; // r14
  void *v81; // r12
  __int64 v82; // rax
  __int32 v83; // r10d
  __m128i *v84; // r8
  const __m128i *v85; // r14
  __int64 v86; // rdi
  __m128i *v87; // r11
  __int64 *v88; // rax
  __int64 v89; // r13
  const __m128i *v90; // rbp
  __int64 v91; // rdx
  __m128i *v92; // rsi
  __m128i *v93; // rdx
  __m128i v94; // xmm0
  unsigned int v95; // ebp
  unsigned int v96; // ecx
  unsigned int *v97; // rax
  __int64 v98; // rcx
  unsigned int v99; // r10d
  unsigned int v100; // edx
  _DWORD *v101; // rsi
  int v102; // r10d
  _QWORD *v103; // r13
  __int64 v104; // rdi
  _DWORD *v105; // rdx
  _QWORD *v106; // rcx
  _QWORD *i; // rax
  __int64 v108; // r9
  __int64 v109; // r9
  __int64 v110; // r9
  __int64 *v111; // rbx
  __int64 *v112; // rdx
  _DWORD *v113; // r13
  __int64 *v114; // rbp
  __int64 v115; // rsi
  __int64 v116; // rdi
  __int64 v117; // rsi
  __int64 v118; // rdi
  __int64 *v119; // rdi
  __m128 *v120; // rax
  __int32 v121; // r11d
  __m128i *v122; // rcx
  const __m128i *v123; // r13
  __int64 v124; // rsi
  __m128i *v125; // r9
  __m128i *v126; // r12
  const __m128i *v127; // rbp
  __int64 v128; // rax
  __m128i *v129; // rdx
  __m128i *v130; // rax
  __m128i v131; // xmm0
  _QWORD *v132; // rax
  __int64 v133; // r12
  char v134; // al
  __m128i *v135; // rax
  __m128i v136; // xmm0
  void (__fastcall ***v137)(void *); // rbp
  _QWORD *v138; // rax
  _QWORD *v139; // rdx
  char **v140; // rbx
  char **exception; // rbp
  int v142; // [rsp-8h] [rbp-F0h]
  __int64 *v143; // [rsp+0h] [rbp-E8h]
  int v144; // [rsp+0h] [rbp-E8h]
  __int64 *v145; // [rsp+8h] [rbp-E0h]
  int v146; // [rsp+8h] [rbp-E0h]
  __int64 v147; // [rsp+10h] [rbp-D8h] BYREF
  __int64 *v148; // [rsp+18h] [rbp-D0h]
  __int64 *v149; // [rsp+20h] [rbp-C8h]
  _DWORD *v150; // [rsp+28h] [rbp-C0h]
  void *v151; // [rsp+30h] [rbp-B8h]
  __int64 *v152; // [rsp+38h] [rbp-B0h]
  const __m128i *v153; // [rsp+40h] [rbp-A8h]
  void *v154; // [rsp+48h] [rbp-A0h]
  char v155[8]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v156; // [rsp+58h] [rbp-90h]
  __int64 v157; // [rsp+60h] [rbp-88h] BYREF
  __int64 v158; // [rsp+68h] [rbp-80h]
  __int64 v159; // [rsp+70h] [rbp-78h] BYREF
  __int64 v160; // [rsp+78h] [rbp-70h]
  int v161; // [rsp+80h] [rbp-68h] BYREF
  char v162; // [rsp+84h] [rbp-64h]
  __int64 v163; // [rsp+88h] [rbp-60h]
  int v164[2]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v165; // [rsp+98h] [rbp-50h]
  __int64 v166; // [rsp+A0h] [rbp-48h] BYREF
  void *v167; // [rsp+A8h] [rbp-40h]
  int v168; // [rsp+B0h] [rbp-38h]
  __int64 v169; // [rsp+B8h] [rbp-30h]

  v3 = a1[9].m128i_i8[8] == 0;
  v148 = nullptr;
  if ( !v3 )
  {
    v135 = (__m128i *)sub_186B270(0x50u);
    v136 = _mm_loadl_epi64(a1);
    v137 = (void (__fastcall ***)(void *))*a2;
    v135[1].m128i_i64[0] = 0;
    v135[1].m128i_i8[8] = 1;
    v148 = (__int64 *)v135;
    strcpy(&v135[3].m128i_i8[8], "degree_shift");
    v135->m128i_i64[0] = (__int64)&off_1C60CE8;
    v135[3].m128i_i64[0] = 12;
    v135[4].m128i_i64[1] = 0;
    v135->m128i_i32[2] = 1;
    v135[2] = _mm_unpacklo_epi64(v136, (__m128i)(unsigned __int64)&v135[3].m128i_u64[1]);
    if ( v137 )
    {
      v3 = (*((_DWORD *)v137 + 2))-- == 1;
      if ( v3 )
      {
        (**v137)(v137);
        sub_186B220(v137);
      }
    }
    *a2 = v148;
  }
  v4 = (__int64 *)a1[1].m128i_i64[1];
  result = &v4[5 * a1[2].m128i_u32[0]];
  LODWORD(v145) = (_DWORD)v4 + 40 * a1[2].m128i_i32[0];
  if ( v4 != result )
  {
    while ( (unsigned __int64)*v4 <= 1 )
    {
      v4 += 5;
      if ( result == v4 )
        return result;
    }
    if ( result != v4 )
    {
      v6 = *v4;
      v143 = (__int64 *)v164;
      v151 = v155;
      while ( 1 )
      {
        v7 = a1->m128i_i64[0];
        v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 40LL);
        sub_180C5A0(v143, 0);
        v9 = sub_15E3D10(
               v7,
               (int)v143,
               (int)&qword_18D6CD0,
               0,
               0,
               v8,
               1,
               v142,
               (int)v143,
               (int)v145,
               v147,
               (int)v148,
               (int)v149,
               (int)v150,
               (char)v151,
               (int)v152,
               (int)v153,
               (int)v154,
               *(int *)v155,
               v156,
               v157,
               v158,
               v159,
               v160,
               v161,
               v163,
               v164[0],
               v165,
               v166,
               v167,
               v168,
               v169);
        v12 = sub_15DC610(
                v7,
                v9,
                0,
                0,
                v10,
                v11,
                v144,
                v146,
                v147,
                (int)v148,
                (int)v149,
                (char)v150,
                (int)v151,
                (int)v152,
                (int)v153,
                v154);
        v13 = v12;
        if ( v12 )
          ++*(_DWORD *)(v12 + 8);
        v14 = (_QWORD *)a1[6].m128i_i64[1];
        if ( v14 )
        {
          v15 = *((_DWORD *)v14 - 1);
          if ( v15 == *((_DWORD *)v14 - 2) )
          {
            v33 = (3 * v15 + 1) >> 1;
            v34 = 8 * v33 + 8;
            if ( 8 * v15 + 8 >= (unsigned int)v34 || v15 >= v33 )
              goto LABEL_211;
            v35 = (unsigned int *)sub_186B300(v14 - 1, v34);
            v36 = v35[1];
            v14 = v35 + 2;
            *v35 = v33;
            a1[6].m128i_i64[1] = (__int64)(v35 + 2);
            LODWORD(v35) = v36;
            v18 = &v14[v36];
            v17 = (_DWORD)v35 + 1;
          }
          else
          {
            v16 = v15;
            v17 = v15 + 1;
            v18 = &v14[v16];
          }
        }
        else
        {
          v132 = (_QWORD *)sub_186B270(0x18u);
          v14 = v132 + 1;
          *v132 = 2;
          v17 = 1;
          a1[6].m128i_i64[1] = (__int64)v14;
          v18 = v14;
        }
        *v18 = v13;
        v19 = *v4;
        *((_DWORD *)v14 - 1) = v17;
        v20 = a1[3].m128i_u32[2];
        if ( 3 * v20 < 4 * (a1[3].m128i_i32[3] + a1[4].m128i_i32[0]) )
        {
          v150 = (_DWORD *)v19;
          LODWORD(v149) = 2 * v20;
          v147 = 32LL * v20;
          v82 = sub_186B270(v147);
          v83 = (int)v149;
          v23 = v147;
          v19 = (__int64)v150;
          v21 = (__m128i *)v82;
          v84 = (__m128i *)(v147 + v82);
          if ( (_DWORD)v149 )
          {
            if ( (v147 & 0x10) == 0 || (v82 += 16, *(_OWORD *)(v82 - 16) = 0, (__m128i *)v82 != v84) )
            {
              do
              {
                v82 += 32;
                *(_OWORD *)(v82 - 32) = 0;
                *(_OWORD *)(v82 - 16) = 0;
              }
              while ( (__m128i *)v82 != v84 );
            }
          }
          v85 = (const __m128i *)a1[3].m128i_i64[0];
          v22 = v83 - 1;
          v24 = v84;
          v86 = a1[3].m128i_u32[2];
          v87 = (__m128i *)&v85[v86];
          if ( v85 != &v85[v86] )
          {
            v88 = (__int64 *)v13;
            v89 = v23;
            v90 = &v85[v86];
            do
            {
              while ( v85->m128i_i64[0] <= 1uLL )
              {
                if ( v90 == ++v85 )
                  goto LABEL_108;
              }
              v91 = 16LL * (*(_DWORD *)(v85->m128i_i64[0] + 12) & (unsigned int)v22);
              v92 = &v21[(unsigned __int64)v91 / 0x10];
              if ( v89 == v91 )
              {
LABEL_112:
                if ( v21 == v92 )
                {
LABEL_120:
                  HIDWORD(v154) = v83;
                  v153 = a1;
                  v152 = (__int64 *)v84;
                  LODWORD(v150) = v83 - 1;
                  v149 = v88;
                  v147 = v19;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v93 = v21;
                while ( v93->m128i_i64[0] )
                {
                  if ( v92 == ++v93 )
                    goto LABEL_120;
                }
              }
              else
              {
                v93 = &v21[(unsigned __int64)v91 / 0x10];
                while ( v93->m128i_i64[0] )
                {
                  if ( v84 == ++v93 )
                    goto LABEL_112;
                }
              }
              v94 = _mm_loadu_si128(v85++);
              *v93 = v94;
            }
            while ( v90 != v85 );
LABEL_108:
            v87 = (__m128i *)a1[3].m128i_i64[0];
            v23 = v89;
            v13 = (__int64)v88;
            v24 = v84;
          }
          if ( v87 )
          {
            LODWORD(v152) = v83;
            v150 = (_DWORD *)v23;
            LODWORD(v149) = v83 - 1;
            v147 = v19;
            sub_186B220(v87);
            v83 = (int)v152;
            v23 = (__int64)v150;
            v22 = (int)v149;
            v19 = v147;
          }
          a1[3].m128i_i64[0] = (__int64)v21;
          a1[3].m128i_i32[2] = v83;
          a1[4].m128i_i32[0] = 0;
        }
        else
        {
          v21 = (__m128i *)a1[3].m128i_i64[0];
          v22 = v20 - 1;
          v23 = 16LL * v20;
          v24 = (__m128i *)((char *)v21 + v23);
        }
        v25 = *(_DWORD *)(v19 + 12);
        v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v13);
        v27 = 16LL * (v25 & (unsigned int)v22);
        v28 = &v21[(unsigned __int64)v27 / 0x10];
        if ( v27 != v23 )
        {
          v29 = &v21[(unsigned __int64)v27 / 0x10];
          v30 = nullptr;
          while ( 1 )
          {
            v31 = v29->m128i_i64[0];
            if ( v29->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v31 + 12) == v25 && v19 == v31 )
              {
                *v29 = v26;
                goto LABEL_34;
              }
            }
            else
            {
              if ( !v31 )
              {
                if ( v30 )
                  goto LABEL_118;
                v30 = v29;
                goto LABEL_119;
              }
              v30 = v29;
            }
            if ( ++v29 == v24 )
              goto LABEL_26;
          }
        }
        v30 = nullptr;
        while ( 1 )
        {
LABEL_26:
          if ( v28 == v21 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v32 = v21->m128i_i64[0];
          if ( v21->m128i_i64[0] > 1uLL )
            break;
          if ( !v32 )
          {
            if ( v30 )
LABEL_118:
              --a1[4].m128i_i32[0];
            else
              v30 = v21;
LABEL_119:
            *v30 = v26;
            ++a1[3].m128i_i32[3];
            goto LABEL_34;
          }
          v30 = v21;
LABEL_25:
          ++v21;
        }
        if ( *(_DWORD *)(v32 + 12) != v25 || v19 != v32 )
          goto LABEL_25;
        *v21 = v26;
LABEL_34:
        if ( a1[9].m128i_i8[8] )
        {
          v62 = *(_QWORD *)(v13 + 16);
          v147 = v148[4];
          if ( v62 )
            ++*(_DWORD *)(v62 + 8);
          v63 = (_QWORD *)v148[9];
          if ( v63 )
          {
            v64 = *((_DWORD *)v63 - 1);
            if ( v64 == *((_DWORD *)v63 - 2) )
            {
              v99 = (3 * v64 + 1) >> 1;
              v100 = 40 * v99 + 8;
              if ( 40 * v64 + 8 >= v100 || v64 >= v99 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_C1B180(v143, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v143);
                sub_233E40((__int64)v143);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              LODWORD(v149) = (3 * v64 + 1) >> 1;
              v101 = (_DWORD *)sub_186B270(v100);
              v102 = (int)v149;
              v63 = v101 + 2;
              v103 = (_QWORD *)v148[9];
              if ( v103 )
              {
                v104 = *((unsigned int *)v103 - 1);
                v105 = v101 + 2;
                v101[1] = v104;
                v106 = &v103[5 * v104];
                for ( i = v103; v106 != i; *(v105 - 2) = *((_DWORD *)i - 2) )
                {
                  v108 = i[1];
                  i += 5;
                  v105 += 10;
                  *((_QWORD *)v105 - 4) = v108;
                  v109 = *(i - 5);
                  *(i - 5) = 0;
                  *((_QWORD *)v105 - 5) = v109;
                  *((_QWORD *)v105 - 2) = *(i - 2);
                  v110 = *(i - 3);
                  *(i - 3) = 0;
                  *((_QWORD *)v105 - 3) = v110;
                }
                if ( (_DWORD)v104 )
                {
                  v149 = v4;
                  v111 = v103;
                  v112 = &v103[5 * v104];
                  v150 = (_DWORD *)v13;
                  v113 = v101;
                  LODWORD(v152) = v102;
                  v114 = v112;
                  do
                  {
                    while ( 1 )
                    {
                      v117 = v111[2];
                      if ( v117 )
                      {
                        v118 = v111[3];
                        v3 = (*(_DWORD *)(v117 + 8))-- == 1;
                        if ( v3 )
                          sub_15D7BC0(v118, v117);
                      }
                      v115 = *v111;
                      if ( *v111 )
                      {
                        v116 = v111[1];
                        v3 = (*(_DWORD *)(v115 + 8))-- == 1;
                        if ( v3 )
                          break;
                      }
                      v111 += 5;
                      if ( v111 == v114 )
                        goto LABEL_140;
                    }
                    sub_15D7BC0(v116, v115);
                    v111 += 5;
                  }
                  while ( v111 != v114 );
LABEL_140:
                  v101 = v113;
                  v4 = v149;
                  LODWORD(v13) = (_DWORD)v150;
                  v102 = (int)v152;
                  v103 = (_QWORD *)v148[9];
                }
                v150 = v101;
                LODWORD(v149) = v102;
                sub_186B220(v103 - 1);
                v101 = v150;
                v102 = (int)v149;
                v67 = (__m128 *)&v63[5 * (unsigned int)v150[1]];
                v66 = v150[1] + 1;
              }
              else
              {
                v101[1] = 0;
                v67 = (__m128 *)(v101 + 2);
                v66 = 1;
              }
              v119 = v148;
              *v101 = v102;
              v119[9] = (__int64)v63;
            }
            else
            {
              v65 = v64;
              v66 = v64 + 1;
              v67 = (__m128 *)&v63[5 * v65];
            }
          }
          else
          {
            v138 = (_QWORD *)sub_186B270(0x58u);
            *v138 = 2;
            v63 = v138 + 1;
            v148[9] = (__int64)(v138 + 1);
            v67 = (__m128 *)(v138 + 1);
            v66 = 1;
          }
          v68 = v147;
          v67[1].m128_u64[0] = 0;
          v69 = _mm_loadh_ps((const double *)&v147);
          v67[2].m128_i32[0] = 0;
          *v67 = v69;
          v67[1].m128_u64[1] = v68;
          v70 = qword_1C7F2C0;
          *((_DWORD *)v63 - 1) = v66;
          v149 = &v157;
          *(_QWORD *)v155 = 1;
          v156 = 0;
          v157 = 1;
          v158 = 0;
          sub_182CBA0(v70, &v157);
          BYTE4(v157) &= ~1u;
          v71 = qword_1C7F2C0;
          LODWORD(v157) = 1;
          *(_QWORD *)v164 = 0;
          v165 = 0;
          v166 = 1;
          v167 = nullptr;
          if ( (v155[4] & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, v143, v151);
            if ( (v157 & 0x100000000LL) != 0 )
              goto LABEL_169;
LABEL_76:
            BYTE4(v166) &= ~1u;
            LODWORD(v166) = v157;
          }
          else
          {
            v164[0] = *(_DWORD *)v155;
            if ( (v157 & 0x100000000LL) == 0 )
              goto LABEL_76;
LABEL_169:
            sub_182C690(v71, &v166, v149);
          }
          v147 = (__int64)qword_1C7F2C0;
          if ( !v164[0]
            || (*((_BYTE *)v4 + 12) & 1) == 0
            && *((_DWORD *)v4 + 2) == 1
            && (*((_BYTE *)v4 + 28) & 1) == 0
            && *((_DWORD *)v4 + 6) == 1 )
          {
            if ( (v164[1] & 1) != 0 )
            {
              sub_182C690(v147, v143, v143);
              v134 = BYTE4(v166);
              if ( (v166 & 0x100000000LL) != 0 )
                goto LABEL_207;
LABEL_184:
              BYTE4(v166) = v134 & 0xFE;
            }
            else
            {
              LOBYTE(v164[1]) &= ~1u;
              v134 = BYTE4(v166);
              if ( (v166 & 0x100000000LL) == 0 )
                goto LABEL_184;
LABEL_207:
              sub_182C690(v147, &v166, &v166);
            }
LABEL_85:
            BYTE4(v159) &= 0xFCu;
            v73 = qword_1C7F2C0;
            v162 &= 0xFCu;
            LODWORD(v159) = 0;
            v160 = 0;
            v161 = 1;
            v163 = 0;
            if ( (v164[1] & 1) != 0 )
            {
              v147 = (__int64)qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, &v159, v143);
              v73 = (void *)v147;
            }
            else
            {
              LODWORD(v159) = v164[0];
            }
            if ( (v166 & 0x100000000LL) != 0 )
            {
              sub_182C690(v73, &v161, &v166);
            }
            else
            {
              v162 &= ~1u;
              v161 = v166;
            }
            v74 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v143);
            sub_182CBA0(v74, &v166);
            if ( (v159 & 0x100000000LL) != 0 || (_DWORD)v159 != 1 || (v162 & 1) != 0 || v161 != 1 )
            {
              v78 = a1[1].m128i_i64[0];
              if ( !v78 )
              {
                sub_16669E0(&a1->m128i_u64[1]);
                v78 = a1[1].m128i_i64[0];
              }
              sub_166A700(v78, (unsigned int)&v159, 0, v75, v76, v77);
              v79 = sub_15E1B70(a1->m128i_i64[1]);
            }
            else
            {
              v79 = v13;
            }
            sub_13333D0((_DWORD)v148, *(_QWORD *)(*v4 + 16), v79, v75, v76, v77);
            v80 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v159);
            sub_182CBA0(v80, &v161);
            v81 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v151);
            sub_182CBA0(v81, v149);
            goto LABEL_35;
          }
          if ( v4 + 1 == v143 )
          {
            v159 = 0;
            v160 = 0;
            sub_1831650(v147, v143, v4 + 3);
            sub_1831650(v147, &v166, v143);
            if ( (v159 & 0x100000000LL) != 0 )
            {
              sub_182C690(v147, v143, &v159);
            }
            else
            {
              LOBYTE(v164[1]) &= ~1u;
              v164[0] = v159;
            }
            sub_182CBA0(v147, &v159);
            if ( (int)v166 >= 0 )
              goto LABEL_82;
          }
          else
          {
            sub_1831650(v147, v143, v4 + 3);
            sub_1831650(v147, &v166, v4 + 1);
            if ( (int)v166 >= 0 )
            {
LABEL_82:
              v159 = 0;
              v160 = 0;
              sub_1832C70(v147, v143, &v166, &v159);
              if ( (v159 & 0x100000000LL) == 0 && (_DWORD)v159 == 1 )
              {
                sub_182CBA0(v147, &v159);
              }
              else
              {
                sub_1833EB0(v147, v143, &v159, v143);
                v72 = v147;
                sub_1833EB0(v147, &v166, &v159, &v166);
                sub_182CBA0(v72, &v159);
              }
              goto LABEL_85;
            }
          }
          v133 = v147;
          sub_1831620(v147, v143);
          sub_1831620(v133, &v166);
          goto LABEL_82;
        }
LABEL_35:
        if ( !a1[9].m128i_i8[9] )
          goto LABEL_36;
        v37 = (_DWORD)v4 + 8;
        if ( (*((_BYTE *)v4 + 12) & 1) != 0
          || *((_DWORD *)v4 + 2) != 1
          || (*((_BYTE *)v4 + 28) & 1) != 0
          || *((_DWORD *)v4 + 6) != 1 )
        {
          v38 = a1[1].m128i_i64[0];
          if ( !v38 )
          {
            v147 = (__int64)(v4 + 1);
            sub_16669E0(&a1->m128i_u64[1]);
            v38 = a1[1].m128i_i64[0];
            v37 = v147;
          }
          sub_166A700(v38, v37, 0, v19, (_DWORD)v30, v27);
          sub_15E1B70(a1->m128i_i64[1]);
        }
        v39 = sub_15E1B70(a1->m128i_i64[0]);
        v40 = sub_15DFC30(a1->m128i_i64[0], v39);
        v41 = a1->m128i_i64[0];
        *(_QWORD *)v164 = v40;
        v42 = sub_15DFC70(v41, (int)v143, (int)v145, v147, v148);
        v147 = v42;
        if ( v42 )
          ++*(_DWORD *)(v42 + 8);
        v43 = (_QWORD *)a1[6].m128i_i64[1];
        if ( v43 )
        {
          v44 = *((_DWORD *)v43 - 1);
          if ( v44 != *((_DWORD *)v43 - 2) )
          {
            v45 = v44;
            v46 = v44 + 1;
            v47 = &v43[v45];
            goto LABEL_52;
          }
          v95 = (3 * v44 + 1) >> 1;
          v96 = 8 * v95 + 8;
          if ( 8 * v44 + 8 < v96 && v44 < v95 )
          {
            v97 = (unsigned int *)sub_186B300(v43 - 1, v96);
            v98 = v97[1];
            v43 = v97 + 2;
            *v97 = v95;
            a1[6].m128i_i64[1] = (__int64)(v97 + 2);
            LODWORD(v97) = v98;
            v47 = &v43[v98];
            v46 = (_DWORD)v97 + 1;
            goto LABEL_52;
          }
LABEL_211:
          v140 = (char **)__cxa_allocate_exception(0x28u);
          sub_C1B180(v143, "Overflow encountered when expanding vector");
          *v140 = (char *)off_1C63128;
          sub_2333C0(v140 + 1, v143);
          sub_233E40((__int64)v143);
          __cxa_throw(v140, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v139 = (_QWORD *)sub_186B270(0x18u);
        *v139 = 2;
        v46 = 1;
        v43 = v139 + 1;
        a1[6].m128i_i64[1] = (__int64)v43;
        v47 = v43;
LABEL_52:
        v48 = (__int64 *)*v4;
        *v47 = v147;
        *((_DWORD *)v43 - 1) = v46;
        v49 = a1[5].m128i_u32[0];
        if ( 3 * v49 < 4 * (a1[5].m128i_i32[1] + a1[5].m128i_i32[2]) )
        {
          v150 = v48;
          v52 = 32LL * v49;
          LODWORD(v149) = 2 * v49;
          v120 = (__m128 *)sub_186B270(v52);
          v121 = (int)v149;
          v48 = (__int64 *)v150;
          v50 = v120;
          v122 = (__m128i *)&v120[v52 / 0x10];
          if ( (_DWORD)v149 )
          {
            if ( (v52 & 0x10) == 0 || (*v120 = 0, ++v120, v120 != (__m128 *)v122) )
            {
              do
              {
                *v120 = 0;
                v120 += 2;
                v120[-1] = 0;
              }
              while ( v120 != (__m128 *)v122 );
            }
          }
          v123 = (const __m128i *)a1[4].m128i_i64[1];
          v51 = v121 - 1;
          v53 = (__m128 *)v122;
          v124 = a1[5].m128i_u32[0];
          v125 = (__m128i *)&v123[v124];
          if ( v123 != &v123[v124] )
          {
            v126 = (__m128i *)v50;
            v127 = &v123[v124];
            do
            {
              while ( v123->m128i_i64[0] <= 1uLL )
              {
                if ( v127 == ++v123 )
                  goto LABEL_159;
              }
              v128 = 16LL * (*(_DWORD *)(v123->m128i_i64[0] + 12) & (unsigned int)v51);
              v129 = &v126[(unsigned __int64)v128 / 0x10];
              if ( v52 == v128 )
              {
LABEL_163:
                if ( v126 == v129 )
                {
LABEL_185:
                  HIDWORD(v154) = v121;
                  v153 = a1;
                  v152 = (__int64 *)v122;
                  LODWORD(v150) = v121 - 1;
                  v149 = v48;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v130 = v126;
                while ( v130->m128i_i64[0] )
                {
                  if ( v129 == ++v130 )
                    goto LABEL_185;
                }
              }
              else
              {
                v130 = &v126[(unsigned __int64)v128 / 0x10];
                while ( v130->m128i_i64[0] )
                {
                  if ( v122 == ++v130 )
                    goto LABEL_163;
                }
              }
              v131 = _mm_loadu_si128(v123++);
              *v130 = v131;
            }
            while ( v127 != v123 );
LABEL_159:
            v125 = (__m128i *)a1[4].m128i_i64[1];
            v50 = (__m128 *)v126;
            v53 = (__m128 *)v122;
          }
          if ( v125 )
          {
            LODWORD(v152) = v121;
            LODWORD(v150) = v121 - 1;
            v149 = v48;
            sub_186B220(v125);
            v121 = (int)v152;
            v51 = (int)v150;
            v48 = v149;
          }
          a1[4].m128i_i64[1] = (__int64)v50;
          a1[5].m128i_i32[0] = v121;
          a1[5].m128i_i32[2] = 0;
        }
        else
        {
          v50 = (__m128 *)a1[4].m128i_i64[1];
          v51 = v49 - 1;
          v52 = 16LL * v49;
          v53 = &v50[v52 / 0x10];
        }
        v54 = *((_DWORD *)v48 + 3);
        v55 = _mm_loadh_ps((const double *)&v147);
        v56 = 16LL * (v54 & (unsigned int)v51);
        v57 = &v50[(unsigned __int64)v56 / 0x10];
        if ( v56 != v52 )
        {
          v58 = &v50[(unsigned __int64)v56 / 0x10];
          v59 = nullptr;
          while ( 1 )
          {
            v60 = v58->m128_u64[0];
            if ( v58->m128_u64[0] > 1 )
            {
              if ( *(_DWORD *)(v60 + 12) == v54 && v48 == (__int64 *)v60 )
              {
                *v58 = v55;
                goto LABEL_36;
              }
            }
            else
            {
              if ( !v60 )
              {
                if ( v59 )
                  goto LABEL_172;
                v59 = v58;
                goto LABEL_173;
              }
              v59 = v58;
            }
            if ( ++v58 == v53 )
              goto LABEL_65;
          }
        }
        v59 = nullptr;
LABEL_65:
        while ( 2 )
        {
          if ( v57 == v50 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v61 = v50->m128_u64[0];
          if ( v50->m128_u64[0] > 1 )
          {
            if ( *(_DWORD *)(v61 + 12) == v54 && v48 == (__int64 *)v61 )
            {
              *v50 = v55;
              goto LABEL_36;
            }
            goto LABEL_64;
          }
          if ( v61 )
          {
            v59 = v50;
LABEL_64:
            ++v50;
            continue;
          }
          break;
        }
        if ( v59 )
LABEL_172:
          --a1[5].m128i_i32[2];
        else
          v59 = v50;
LABEL_173:
        *v59 = v55;
        ++a1[5].m128i_i32[1];
LABEL_36:
        result = v4 + 5;
        if ( v145 != v4 + 5 )
        {
          while ( 1 )
          {
            v6 = *result;
            v4 = result;
            if ( (unsigned __int64)*result > 1 )
              break;
            result += 5;
            if ( v145 == result )
              return result;
          }
          if ( v145 != result )
            continue;
        }
        return result;
      }
    }
  }
  return result;
}

