__int64 __fastcall sub_A4CC70(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax
  __int64 v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbp
  char *v8; // rdx
  __int64 v9; // rsi
  char *v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  int v13; // r12d
  unsigned __int64 v14; // r13
  char n; // al
  unsigned __int64 v16; // r11
  char *v17; // rsi
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r12
  unsigned __int64 v22; // r15
  char k; // al
  unsigned __int64 v24; // r11
  _QWORD *v25; // rcx
  __int64 v26; // rax
  char *v27; // rsi
  unsigned __int64 v28; // rdi
  __int64 v29; // r12
  int v30; // r12d
  __int64 v31; // rax
  unsigned __int64 v32; // r15
  __int64 v33; // r12
  char i; // al
  unsigned __int64 v35; // r10
  __int64 v36; // r11
  char *v37; // rsi
  __int64 v38; // r14
  unsigned __int64 v39; // rax
  __int64 v40; // r12
  _QWORD *v41; // rdx
  char *v42; // rax
  __int64 v43; // r14
  __int64 v44; // rbx
  __int64 v45; // rdi
  unsigned __int64 v46; // rcx
  char *v47; // rdx
  char *v48; // rdi
  unsigned __int64 v49; // rcx
  char *v50; // rdx
  void *v51; // rdi
  unsigned __int64 v52; // rcx
  char *v53; // rsi
  void *v54; // rdi
  unsigned __int64 v55; // rdx
  _QWORD *v56; // rdx
  __int64 v57; // rsi
  bool v58; // cf
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rdi
  __int64 v61; // rax
  char *v62; // rdx
  char *v63; // rdi
  __m128i *v64; // rdi
  const __m128i *v65; // rsi
  __int64 v66; // rdx
  const __m128i *j; // rax
  __m128i v68; // xmm1
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // r12
  __int64 v72; // rax
  char *v73; // rdx
  char *v74; // rdi
  __m128i *v75; // rdi
  const __m128i *v76; // rsi
  __int64 v77; // rdx
  const __m128i *ii; // rax
  __m128i v79; // xmm6
  __int64 v80; // rdx
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rdi
  __int64 v83; // rax
  char *v84; // r14
  char *v85; // rdx
  char *v86; // rdi
  const __m128i *v87; // r8
  __m128i *v88; // r14
  const __m128i *v89; // rdi
  __m128i v90; // xmm1
  __int16 v91; // dx
  __m128i v92; // xmm3
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rbx
  __int64 v127; // r14
  __int64 v128; // rdi
  unsigned __int64 v129; // rax
  unsigned __int64 v130; // rdi
  __int64 v131; // r12
  unsigned __int64 v132; // r12
  char *v133; // rsi
  char *v134; // rdx
  __m128i *v135; // rdi
  const __m128i *v136; // rsi
  __int64 v137; // rcx
  const __m128i *m; // rdx
  __m128i v139; // xmm6
  __int64 v140; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v141; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v142; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v143; // [rsp+0h] [rbp-D8h]
  __int64 v144; // [rsp+0h] [rbp-D8h]
  __int64 v145; // [rsp+0h] [rbp-D8h]
  __int64 v146; // [rsp+0h] [rbp-D8h]
  __int64 v147; // [rsp+8h] [rbp-D0h]
  __int64 v148; // [rsp+8h] [rbp-D0h]
  __int64 v149; // [rsp+8h] [rbp-D0h]
  __int64 v150; // [rsp+8h] [rbp-D0h]
  _QWORD *v151; // [rsp+10h] [rbp-C8h]
  __int64 v152; // [rsp+10h] [rbp-C8h]
  char *v153; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v154; // [rsp+18h] [rbp-C0h]
  __int64 v155; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v156; // [rsp+18h] [rbp-C0h]
  __int64 *v157; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v158; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v159; // [rsp+20h] [rbp-B8h]
  __int64 *v160; // [rsp+28h] [rbp-B0h]
  char v161; // [rsp+3Ch] [rbp-9Ch] BYREF
  char v162; // [rsp+3Dh] [rbp-9Bh] BYREF
  char v163; // [rsp+3Eh] [rbp-9Ah] BYREF
  char v164; // [rsp+3Fh] [rbp-99h] BYREF
  __int64 v165; // [rsp+40h] [rbp-98h] BYREF
  __int64 v166; // [rsp+48h] [rbp-90h] BYREF
  __int64 v167; // [rsp+50h] [rbp-88h] BYREF
  __int64 v168; // [rsp+58h] [rbp-80h] BYREF
  __int64 v169; // [rsp+60h] [rbp-78h] BYREF
  __int64 v170; // [rsp+68h] [rbp-70h] BYREF
  __int64 v171; // [rsp+70h] [rbp-68h] BYREF
  __int64 v172; // [rsp+78h] [rbp-60h] BYREF
  __m128i v173; // [rsp+80h] [rbp-58h] BYREF
  __int64 v174; // [rsp+90h] [rbp-48h]

  v3 = a1;
  if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 56))(a1) || *(_QWORD *)(a2 + 8) != *(_QWORD *)a2)
    && (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD, __int64 *, __m128i *))(*a1 + 120))(
         a1,
         "Classes",
         0,
         0,
         &v172,
         &v173) )
  {
    sub_A49E90(a1, (const __m128i **)a2);
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v173.m128i_i64[0]);
  }
  if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 56))(a1) || *(_QWORD *)(a2 + 32) != *(_QWORD *)(a2 + 24))
    && (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD, __int64 *, __m128i *))(*a1 + 120))(
         a1,
         "Protocols",
         0,
         0,
         &v172,
         &v173) )
  {
    sub_A49E90(a1, (const __m128i **)(a2 + 24));
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v173.m128i_i64[0]);
  }
  if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 56))(a1) || *(_QWORD *)(a2 + 56) != *(_QWORD *)(a2 + 48))
    && (*(unsigned __int8 (__fastcall **)(__int64 *, char *, _QWORD, _QWORD, __int64 *, __m128i *))(*a1 + 120))(
         a1,
         "Functions",
         0,
         0,
         &v172,
         &v173) )
  {
    sub_A494B0(a1, (const __m128i **)(a2 + 48));
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v173.m128i_i64[0]);
  }
  if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 56))(a1) || *(_QWORD *)(a2 + 80) != *(_QWORD *)(a2 + 72))
    && (*(unsigned __int8 (__fastcall **)(__int64 *, char *, _QWORD, _QWORD, char *, __int64 *))(*a1 + 120))(
         a1,
         "Globals",
         0,
         0,
         &v161,
         &v165) )
  {
    v30 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 24))(a1);
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
      v30 = -1171354717 * ((__int64)(*(_QWORD *)(a2 + 80) - *(_QWORD *)(a2 + 72)) >> 3);
    if ( v30 )
    {
      v31 = (unsigned int)(v30 - 1);
      v32 = 0;
      v33 = 0;
      v152 = v31;
      for ( i = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*a1 + 32))(a1, 0, &v166);
            ;
            i = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v3 + 32))(v3, (unsigned int)v35, &v166) )
      {
        v35 = v32 + 1;
        v36 = v33 + 88;
        if ( i )
        {
          v37 = *(char **)(a2 + 80);
          v38 = *(_QWORD *)(a2 + 72);
          v39 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)&v37[-v38] >> 3);
          if ( v39 <= v32 )
          {
            if ( v39 < v35 )
            {
              v46 = v35 - v39;
              if ( v35 != v39 )
              {
                if ( v46 > 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a2 + 88) - (_QWORD)v37) >> 3) )
                {
                  if ( v46 > 0x2E8BA2E8BA2E8BALL - v39 )
LABEL_173:
                    std::__throw_length_error("vector::_M_default_append");
                  v57 = v35 - v39;
                  if ( v39 >= v46 )
                    v57 = 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a2 + 80) - v38) >> 3);
                  v58 = __CFADD__(v57, v39);
                  v59 = v57 + v39;
                  if ( v58 )
                  {
                    v144 = -16;
                    v60 = -16;
                  }
                  else
                  {
                    if ( v59 > 0x2E8BA2E8BA2E8BALL )
                      v59 = 0x2E8BA2E8BA2E8BALL;
                    v144 = 88 * v59;
                    v60 = 88 * v59;
                  }
                  v158 = v46;
                  v150 = *(_QWORD *)(a2 + 80) - v38;
                  v61 = operator new(v60);
                  v38 = v61;
                  v35 = v32 + 1;
                  v62 = (char *)(v61 + v150);
                  do
                  {
                    v63 = v62;
                    v62 += 88;
                    memset(v63, 0, 0x58u);
                  }
                  while ( v62 != (char *)(v61 + v150 + 88 * v158) );
                  v64 = *(__m128i **)(a2 + 72);
                  v65 = *(const __m128i **)(a2 + 80);
                  v66 = v61;
                  for ( j = v64; v65 != j; *(_QWORD *)(v66 - 8) = j[-1].m128i_i64[1] )
                  {
                    v68 = _mm_loadu_si128(j);
                    j = (const __m128i *)((char *)j + 88);
                    v66 += 88;
                    *(__m128i *)(v66 - 88) = v68;
                    *(__m128i *)(v66 - 72) = _mm_loadu_si128((const __m128i *)((char *)j - 72));
                    *(__m128i *)(v66 - 56) = _mm_loadu_si128((const __m128i *)((char *)j - 56));
                    *(__m128i *)(v66 - 40) = _mm_loadu_si128((const __m128i *)((char *)j - 40));
                    *(__m128i *)(v66 - 24) = _mm_loadu_si128((const __m128i *)((char *)j - 24));
                  }
                  if ( v64 )
                  {
                    operator delete(v64);
                    v35 = v32 + 1;
                  }
                  *(_QWORD *)(a2 + 72) = v38;
                  v36 = v33 + 88;
                  *(_QWORD *)(a2 + 80) = v38 + 88 * v35;
                  *(_QWORD *)(a2 + 88) = v38 + v144;
                }
                else
                {
                  v47 = &v37[88 * v46];
                  do
                  {
                    v48 = v37;
                    v37 += 88;
                    memset(v48, 0, 0x58u);
                  }
                  while ( v37 != v47 );
                  *(_QWORD *)(a2 + 80) = v37;
                  v36 = v33 + 88;
                }
              }
            }
            else if ( v39 > v35 && v37 != (char *)(v38 + v36) )
            {
              *(_QWORD *)(a2 + 80) = v38 + v36;
            }
          }
          v40 = v38 + v33;
          v149 = v36;
          v143 = v35;
          (*(void (__fastcall **)(__int64 *))(*v3 + 104))(v3);
          sub_A427E0(v3, (__int64)"Name", v40, 1u);
          v173.m128i_i8[1] = 0;
          sub_A42C70((__int64)v3, (__int64)"Nullability", (_BYTE *)(v40 + 16), &v173, 0);
          v173.m128i_i32[0] = 0;
          sub_A40BF0((__int64)v3, (_DWORD *)(v40 + 24), &v173);
          v173.m128i_i64[0] = (__int64)&byte_22F0C30;
          v173.m128i_i64[1] = j__strlen(&byte_22F0C30);
          sub_A43150(v3, (__int64)"AvailabilityMsg", v40 + 32, (__int64)&v173, 0);
          v173.m128i_i8[1] = 0;
          sub_A43000(v3, (__int64)"SwiftPrivate", v40 + 48, &v173, 0);
          v173.m128i_i64[0] = (__int64)&byte_22F0C30;
          v173.m128i_i64[1] = j__strlen(&byte_22F0C30);
          sub_A43150(v3, (__int64)"SwiftName", v40 + 56, (__int64)&v173, 0);
          v173.m128i_i64[0] = (__int64)&byte_22F0C30;
          v173.m128i_i64[1] = j__strlen(&byte_22F0C30);
          sub_A43150(v3, (__int64)"Type", v40 + 72, (__int64)&v173, 0);
          (*(void (__fastcall **)(__int64 *))(*v3 + 112))(v3);
          (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 40))(v3, v166);
          v35 = v143;
          v33 = v149;
          if ( v152 == v32 )
            break;
        }
        else
        {
          v33 += 88;
          if ( v152 == v32 )
            break;
        }
        v32 = v35;
      }
    }
    (*(void (__fastcall **)(__int64 *))(*v3 + 48))(v3);
    (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 128))(v3, v165);
  }
  if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 56))(v3) || *(_QWORD *)(a2 + 104) != *(_QWORD *)(a2 + 96))
    && (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD, char *, __int64 *))(*v3 + 120))(
         v3,
         "Enumerators",
         0,
         0,
         &v162,
         &v167) )
  {
    LODWORD(v21) = (*(__int64 (__fastcall **)(__int64 *))(*v3 + 24))(v3);
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 16))(v3) )
      v21 = (__int64)(*(_QWORD *)(a2 + 104) - *(_QWORD *)(a2 + 96)) >> 6;
    if ( (_DWORD)v21 )
    {
      v22 = 0;
      v148 = (unsigned int)(v21 - 1);
      for ( k = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v3 + 32))(v3, 0, &v168);
            ;
            k = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v3 + 32))(v3, (unsigned int)v24, &v168) )
      {
        v24 = v22 + 1;
        if ( k )
        {
          v25 = *(_QWORD **)(a2 + 104);
          v26 = *(_QWORD *)(a2 + 96);
          v27 = (char *)v25 - v26;
          v28 = ((__int64)v25 - v26) >> 6;
          if ( v28 <= v22 )
          {
            if ( v28 < v24 )
            {
              v55 = v24 - v28;
              if ( v24 != v28 )
              {
                if ( v55 > (__int64)(*(_QWORD *)(a2 + 112) - (_QWORD)v25) >> 6 )
                {
                  if ( v55 > 0x3FFFFFFFFFFFFFFLL - v28 )
                    goto LABEL_173;
                  v129 = v24 - v28;
                  if ( v28 >= v55 )
                    v129 = v28;
                  v58 = __CFADD__(v129, v28);
                  v130 = v129 + v28;
                  if ( v58 )
                  {
                    v132 = -64;
                  }
                  else
                  {
                    v131 = 0x3FFFFFFFFFFFFFFLL;
                    if ( v130 <= 0x3FFFFFFFFFFFFFFLL )
                      v131 = v130;
                    v132 = v131 << 6;
                  }
                  v156 = v55;
                  v26 = operator new(v132);
                  v24 = v22 + 1;
                  v133 = &v27[v26];
                  v134 = &v133[64 * v156];
                  do
                  {
                    *(_QWORD *)v133 = 0;
                    v133 += 64;
                    *((_OWORD *)v133 - 3) = 0;
                    *((_OWORD *)v133 - 2) = 0;
                    *((_QWORD *)v133 - 7) = 0;
                    *((_QWORD *)v133 - 5) = 0;
                    *(v133 - 23) = 0;
                    *((_QWORD *)v133 - 2) = 0;
                    *((_QWORD *)v133 - 1) = 0;
                  }
                  while ( v133 != v134 );
                  v135 = *(__m128i **)(a2 + 96);
                  v136 = *(const __m128i **)(a2 + 104);
                  v137 = v26;
                  for ( m = v135; v136 != m; *(__m128i *)(v137 - 16) = _mm_loadu_si128(m - 1) )
                  {
                    v139 = _mm_loadu_si128(m);
                    m += 4;
                    v137 += 64;
                    *(__m128i *)(v137 - 64) = v139;
                    *(__m128i *)(v137 - 48) = _mm_loadu_si128(m - 3);
                    *(__m128i *)(v137 - 32) = _mm_loadu_si128(m - 2);
                  }
                  if ( v135 )
                  {
                    v146 = v26;
                    operator delete(v135);
                    v24 = v22 + 1;
                    v26 = v146;
                  }
                  *(_QWORD *)(a2 + 96) = v26;
                  *(_QWORD *)(a2 + 112) = v26 + v132;
                  *(_QWORD *)(a2 + 104) = v26 + (v24 << 6);
                }
                else
                {
                  v56 = &v25[8 * v55];
                  do
                  {
                    *v25 = 0;
                    v25 += 8;
                    *((_OWORD *)v25 - 3) = 0;
                    *((_OWORD *)v25 - 2) = 0;
                    *(v25 - 7) = 0;
                    *(v25 - 5) = 0;
                    *((_BYTE *)v25 - 23) = 0;
                    *(v25 - 2) = 0;
                    *(v25 - 1) = 0;
                  }
                  while ( v25 != v56 );
                  *(_QWORD *)(a2 + 104) = v25;
                }
              }
            }
            else if ( v28 > v24 )
            {
              v41 = (_QWORD *)(v26 + (v24 << 6));
              if ( v25 != v41 )
                *(_QWORD *)(a2 + 104) = v41;
            }
          }
          v142 = v24;
          v29 = v26 + (v22 << 6);
          (*(void (__fastcall **)(__int64 *))(*v3 + 104))(v3);
          sub_A427E0(v3, (__int64)"Name", v29, 1u);
          v173.m128i_i32[0] = 0;
          sub_A40BF0((__int64)v3, (_DWORD *)(v29 + 16), &v173);
          v173.m128i_i64[0] = (__int64)&byte_22F0C30;
          v173.m128i_i64[1] = j__strlen(&byte_22F0C30);
          sub_A43150(v3, (__int64)"AvailabilityMsg", v29 + 24, (__int64)&v173, 0);
          v173.m128i_i8[1] = 0;
          sub_A43000(v3, (__int64)"SwiftPrivate", v29 + 40, &v173, 0);
          v173.m128i_i64[0] = (__int64)&byte_22F0C30;
          v173.m128i_i64[1] = j__strlen(&byte_22F0C30);
          sub_A43150(v3, (__int64)"SwiftName", v29 + 48, (__int64)&v173, 0);
          (*(void (__fastcall **)(__int64 *))(*v3 + 112))(v3);
          (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 40))(v3, v168);
          v24 = v142;
          if ( v22 == v148 )
            break;
        }
        else if ( v22 == v148 )
        {
          break;
        }
        v22 = v24;
      }
    }
    (*(void (__fastcall **)(__int64 *))(*v3 + 48))(v3);
    (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 128))(v3, v167);
  }
  if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 56))(v3) || *(_QWORD *)(a2 + 128) != *(_QWORD *)(a2 + 120))
    && (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD, __int64 *, __m128i *))(*v3 + 120))(
         v3,
         "Tags",
         0,
         0,
         &v172,
         &v173) )
  {
    sub_A4BBB0(v3, (__int64 *)(a2 + 120));
    (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 128))(v3, v173.m128i_i64[0]);
  }
  if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 56))(v3) || *(_QWORD *)(a2 + 152) != *(_QWORD *)(a2 + 144))
    && (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD, char *, __int64 *))(*v3 + 120))(
         v3,
         "Typedefs",
         0,
         0,
         &v163,
         &v169) )
  {
    v13 = (*(__int64 (__fastcall **)(__int64 *))(*v3 + 24))(v3);
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 16))(v3) )
      v13 = -286331153 * ((__int64)(*(_QWORD *)(a2 + 152) - *(_QWORD *)(a2 + 144)) >> 3);
    if ( v13 )
    {
      v14 = 0;
      v147 = (unsigned int)(v13 - 1);
      for ( n = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v3 + 32))(v3, 0, &v170);
            ;
            n = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v3 + 32))(v3, (unsigned int)v16, &v170) )
      {
        v16 = v14 + 1;
        if ( n )
        {
          v17 = *(char **)(a2 + 152);
          v18 = *(_QWORD *)(a2 + 144);
          v19 = 0xEEEEEEEEEEEEEEEFLL * ((__int64)&v17[-v18] >> 3);
          if ( v14 >= v19 )
          {
            if ( v19 < v16 )
            {
              v49 = v16 - v19;
              if ( v16 != v19 )
              {
                if ( v49 > 0xEEEEEEEEEEEEEEEFLL * ((__int64)(*(_QWORD *)(a2 + 160) - (_QWORD)v17) >> 3) )
                {
                  if ( v49 > 0x222222222222222LL - v19 )
                    goto LABEL_173;
                  v69 = v16 - v19;
                  if ( v19 >= v49 )
                    v69 = 0xEEEEEEEEEEEEEEEFLL * ((*(_QWORD *)(a2 + 152) - v18) >> 3);
                  v58 = __CFADD__(v69, v19);
                  v70 = v69 - 0x1111111111111111LL * ((*(_QWORD *)(a2 + 152) - v18) >> 3);
                  if ( v58 )
                  {
                    v71 = -16;
                  }
                  else
                  {
                    if ( v70 > 0x222222222222222LL )
                      v70 = 0x222222222222222LL;
                    v71 = 120 * v70;
                  }
                  v154 = v49;
                  v145 = *(_QWORD *)(a2 + 152) - v18;
                  v72 = operator new(v71);
                  v18 = v72;
                  v16 = v14 + 1;
                  v73 = (char *)(v72 + v145);
                  do
                  {
                    v74 = v73;
                    v73 += 120;
                    memset(v74, 0, 0x78u);
                  }
                  while ( (char *)(v72 + v145 + 120 * v154) != v73 );
                  v75 = *(__m128i **)(a2 + 144);
                  v76 = *(const __m128i **)(a2 + 152);
                  v77 = v72;
                  for ( ii = v75; v76 != ii; *(_QWORD *)(v77 - 8) = ii[-1].m128i_i64[1] )
                  {
                    v79 = _mm_loadu_si128(ii);
                    ii = (const __m128i *)((char *)ii + 120);
                    v77 += 120;
                    *(__m128i *)(v77 - 120) = v79;
                    *(__m128i *)(v77 - 104) = _mm_loadu_si128((const __m128i *)((char *)ii - 104));
                    *(__m128i *)(v77 - 88) = _mm_loadu_si128((const __m128i *)((char *)ii - 88));
                    *(__m128i *)(v77 - 72) = _mm_loadu_si128((const __m128i *)((char *)ii - 72));
                    *(__m128i *)(v77 - 56) = _mm_loadu_si128((const __m128i *)((char *)ii - 56));
                    *(__m128i *)(v77 - 40) = _mm_loadu_si128((const __m128i *)((char *)ii - 40));
                    *(__m128i *)(v77 - 24) = _mm_loadu_si128((const __m128i *)((char *)ii - 24));
                  }
                  if ( v75 )
                  {
                    operator delete(v75);
                    v16 = v14 + 1;
                  }
                  *(_QWORD *)(a2 + 144) = v18;
                  *(_QWORD *)(a2 + 160) = v18 + v71;
                  *(_QWORD *)(a2 + 152) = v18 + 120 * v16;
                }
                else
                {
                  v50 = &v17[120 * v49];
                  do
                  {
                    v51 = v17;
                    v17 += 120;
                    memset(v51, 0, 0x78u);
                  }
                  while ( v50 != v17 );
                  *(_QWORD *)(a2 + 152) = v50;
                }
              }
            }
            else if ( v19 > v16 )
            {
              v42 = (char *)(v18 + 120 * v16);
              if ( v17 != v42 )
                *(_QWORD *)(a2 + 152) = v42;
            }
          }
          v141 = v16;
          v20 = v18 + 120 * v14;
          (*(void (__fastcall **)(__int64 *))(*v3 + 104))(v3);
          sub_A427E0(v3, (__int64)"Name", v20, 1u);
          v173.m128i_i32[0] = 0;
          sub_A40BF0((__int64)v3, (_DWORD *)(v20 + 16), &v173);
          v173.m128i_i64[0] = (__int64)&byte_22F0C30;
          v173.m128i_i64[1] = j__strlen(&byte_22F0C30);
          sub_A43150(v3, (__int64)"AvailabilityMsg", v20 + 24, (__int64)&v173, 0);
          v173.m128i_i8[1] = 0;
          sub_A43000(v3, (__int64)"SwiftPrivate", v20 + 56, &v173, 0);
          v173.m128i_i64[0] = (__int64)&byte_22F0C30;
          v173.m128i_i64[1] = j__strlen(&byte_22F0C30);
          sub_A43150(v3, (__int64)"SwiftName", v20 + 40, (__int64)&v173, 0);
          v174 = 0;
          sub_A437A0(v3, (__int64)"SwiftBridge", v20 + 64, &v173, 0);
          v174 = 0;
          sub_A437A0(v3, (__int64)"NSErrorDomain", v20 + 88, &v173, 0);
          v173.m128i_i32[1] = 0;
          sub_A43E20(v3, (__int64)"SwiftWrapper", v20 + 112, v173.m128i_i64, 0);
          (*(void (__fastcall **)(__int64 *))(*v3 + 112))(v3);
          (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 40))(v3, v170);
          v16 = v141;
          if ( v147 == v14 )
            break;
        }
        else if ( v147 == v14 )
        {
          break;
        }
        v14 = v16;
      }
    }
    (*(void (__fastcall **)(__int64 *))(*v3 + 48))(v3);
    (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 128))(v3, v169);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 56))(v3)
    || (result = *(_QWORD *)(a2 + 168), *(_QWORD *)(a2 + 176) != result) )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD, char *, __int64 *))(*v3 + 120))(
               v3,
               "Namespaces",
               0,
               0,
               &v164,
               &v171);
    if ( (_BYTE)result )
    {
      LODWORD(v5) = (*(__int64 (__fastcall **)(__int64 *))(*v3 + 24))(v3);
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 16))(v3) )
        v5 = (__int64)(*(_QWORD *)(a2 + 176) - *(_QWORD *)(a2 + 168)) >> 8;
      if ( (_DWORD)v5 )
      {
        v6 = 0;
        v151 = (_QWORD *)a2;
        v140 = (unsigned int)(v5 - 1);
        while ( 1 )
        {
          v7 = v6 + 1;
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v3 + 32))(v3, (unsigned int)v6, &v172) )
          {
            v8 = (char *)v151[22];
            v9 = v151[21];
            v10 = &v8[-v9];
            v11 = (__int64)&v8[-v9] >> 8;
            if ( v6 >= v11 )
            {
              if ( v7 > v11 )
              {
                v52 = v7 - v11;
                if ( v7 != v11 )
                {
                  if ( v52 > (__int64)(v151[23] - (_QWORD)v8) >> 8 )
                  {
                    if ( v52 > 0xFFFFFFFFFFFFFFLL - v11 )
                      goto LABEL_173;
                    v80 = v7 - v11;
                    if ( v11 >= v52 )
                      v80 = (v151[22] - v9) >> 8;
                    v58 = __CFADD__(v80, v11);
                    v81 = v80 + v11;
                    if ( v58 )
                    {
                      v155 = -256;
                      v82 = -256;
                    }
                    else
                    {
                      if ( v81 > 0xFFFFFFFFFFFFFFLL )
                        v81 = 0xFFFFFFFFFFFFFFLL;
                      v155 = v81 << 8;
                      v82 = v81 << 8;
                    }
                    v159 = v52;
                    v83 = operator new(v82);
                    v84 = &v10[v83];
                    v9 = v83;
                    v85 = &v84[256 * v159];
                    do
                    {
                      v86 = v84;
                      v84 += 256;
                      memset(v86, 0, 0x100u);
                    }
                    while ( v85 != v84 );
                    v87 = (const __m128i *)v151[22];
                    v88 = (__m128i *)v151[21];
                    if ( v87 != v88 )
                    {
                      v89 = (const __m128i *)v151[21];
                      do
                      {
                        v90 = _mm_loadu_si128(v89);
                        v89 += 16;
                        v83 += 256;
                        *(__m128i *)(v83 - 256) = v90;
                        *(__m128i *)(v83 - 240) = _mm_loadu_si128(v89 - 15);
                        *(_QWORD *)(v83 - 224) = v89[-14].m128i_i64[0];
                        v91 = v89[-13].m128i_i16[4];
                        v92 = _mm_loadu_si128((const __m128i *)((char *)v89 - 216));
                        *(_QWORD *)(v83 - 184) = 0;
                        *(_QWORD *)(v83 - 176) = 0;
                        *(_QWORD *)(v83 - 192) = 0;
                        *(_WORD *)(v83 - 200) = v91;
                        v93 = v89[-12].m128i_i64[0];
                        *(__m128i *)(v83 - 216) = v92;
                        *(_QWORD *)(v83 - 192) = v93;
                        v94 = v89[-12].m128i_i64[1];
                        v89[-12].m128i_i64[0] = 0;
                        v95 = *(_QWORD *)(v83 - 184);
                        *(_QWORD *)(v83 - 184) = v94;
                        v96 = v89[-11].m128i_i64[0];
                        v89[-12].m128i_i64[1] = v95;
                        v97 = *(_QWORD *)(v83 - 176);
                        *(_QWORD *)(v83 - 176) = v96;
                        v89[-11].m128i_i64[0] = v97;
                        *(_QWORD *)(v83 - 168) = 0;
                        *(_QWORD *)(v83 - 160) = 0;
                        *(_QWORD *)(v83 - 152) = 0;
                        *(_QWORD *)(v83 - 168) = v89[-11].m128i_i64[1];
                        v98 = v89[-10].m128i_i64[0];
                        v89[-11].m128i_i64[1] = 0;
                        v99 = *(_QWORD *)(v83 - 160);
                        *(_QWORD *)(v83 - 160) = v98;
                        v100 = v89[-10].m128i_i64[1];
                        v89[-10].m128i_i64[0] = v99;
                        v101 = *(_QWORD *)(v83 - 152);
                        *(_QWORD *)(v83 - 152) = v100;
                        v89[-10].m128i_i64[1] = v101;
                        *(_QWORD *)(v83 - 136) = 0;
                        *(_QWORD *)(v83 - 128) = 0;
                        *(_QWORD *)(v83 - 144) = 0;
                        *(_QWORD *)(v83 - 144) = v89[-9].m128i_i64[0];
                        v102 = v89[-9].m128i_i64[1];
                        v89[-9].m128i_i64[0] = 0;
                        v103 = *(_QWORD *)(v83 - 136);
                        *(_QWORD *)(v83 - 136) = v102;
                        v104 = v89[-8].m128i_i64[0];
                        v89[-9].m128i_i64[1] = v103;
                        v105 = *(_QWORD *)(v83 - 128);
                        *(_QWORD *)(v83 - 128) = v104;
                        v89[-8].m128i_i64[0] = v105;
                        *(_QWORD *)(v83 - 112) = 0;
                        *(_QWORD *)(v83 - 104) = 0;
                        *(_QWORD *)(v83 - 120) = 0;
                        *(_QWORD *)(v83 - 120) = v89[-8].m128i_i64[1];
                        v106 = v89[-7].m128i_i64[0];
                        v89[-8].m128i_i64[1] = 0;
                        v107 = *(_QWORD *)(v83 - 112);
                        *(_QWORD *)(v83 - 112) = v106;
                        v108 = v89[-7].m128i_i64[1];
                        v89[-7].m128i_i64[0] = v107;
                        v109 = *(_QWORD *)(v83 - 104);
                        *(_QWORD *)(v83 - 104) = v108;
                        v89[-7].m128i_i64[1] = v109;
                        *(_QWORD *)(v83 - 88) = 0;
                        *(_QWORD *)(v83 - 80) = 0;
                        *(_QWORD *)(v83 - 96) = 0;
                        *(_QWORD *)(v83 - 96) = v89[-6].m128i_i64[0];
                        v110 = v89[-6].m128i_i64[1];
                        v89[-6].m128i_i64[0] = 0;
                        v111 = *(_QWORD *)(v83 - 88);
                        *(_QWORD *)(v83 - 88) = v110;
                        v112 = v89[-5].m128i_i64[0];
                        v89[-6].m128i_i64[1] = v111;
                        v113 = *(_QWORD *)(v83 - 80);
                        *(_QWORD *)(v83 - 80) = v112;
                        v89[-5].m128i_i64[0] = v113;
                        *(_QWORD *)(v83 - 64) = 0;
                        *(_QWORD *)(v83 - 56) = 0;
                        *(_QWORD *)(v83 - 72) = 0;
                        *(_QWORD *)(v83 - 72) = v89[-5].m128i_i64[1];
                        v114 = v89[-4].m128i_i64[0];
                        v89[-5].m128i_i64[1] = 0;
                        v115 = *(_QWORD *)(v83 - 64);
                        *(_QWORD *)(v83 - 64) = v114;
                        v116 = v89[-4].m128i_i64[1];
                        v89[-4].m128i_i64[0] = v115;
                        v117 = *(_QWORD *)(v83 - 56);
                        *(_QWORD *)(v83 - 56) = v116;
                        v89[-4].m128i_i64[1] = v117;
                        *(_QWORD *)(v83 - 48) = 0;
                        *(_QWORD *)(v83 - 40) = 0;
                        *(_QWORD *)(v83 - 32) = 0;
                        *(_QWORD *)(v83 - 48) = v89[-3].m128i_i64[0];
                        v118 = v89[-3].m128i_i64[1];
                        v89[-3].m128i_i64[0] = 0;
                        v119 = *(_QWORD *)(v83 - 40);
                        *(_QWORD *)(v83 - 40) = v118;
                        v120 = v89[-2].m128i_i64[0];
                        v89[-3].m128i_i64[1] = v119;
                        v121 = *(_QWORD *)(v83 - 32);
                        *(_QWORD *)(v83 - 32) = v120;
                        v89[-2].m128i_i64[0] = v121;
                        *(_QWORD *)(v83 - 16) = 0;
                        *(_QWORD *)(v83 - 8) = 0;
                        *(_QWORD *)(v83 - 24) = 0;
                        *(_QWORD *)(v83 - 24) = v89[-2].m128i_i64[1];
                        v122 = v89[-1].m128i_i64[0];
                        v89[-2].m128i_i64[1] = 0;
                        v123 = *(_QWORD *)(v83 - 16);
                        *(_QWORD *)(v83 - 16) = v122;
                        v124 = v89[-1].m128i_i64[1];
                        v89[-1].m128i_i64[0] = v123;
                        v125 = *(_QWORD *)(v83 - 8);
                        *(_QWORD *)(v83 - 8) = v124;
                        v89[-1].m128i_i64[1] = v125;
                      }
                      while ( v87 != v89 );
                      v88 = (__m128i *)v151[21];
                      if ( v88 != (__m128i *)v151[22] )
                      {
                        v160 = v3;
                        v126 = v151[21];
                        v127 = v151[22];
                        do
                        {
                          v128 = v126 + 64;
                          v126 += 256;
                          sub_A40EB0(v128);
                        }
                        while ( v126 != v127 );
                        v3 = v160;
                        v88 = (__m128i *)v151[21];
                      }
                    }
                    if ( v88 )
                      operator delete(v88);
                    v151[21] = v9;
                    v151[22] = v9 + (v7 << 8);
                    v151[23] = v9 + v155;
                  }
                  else
                  {
                    v53 = &v8[256 * v52];
                    do
                    {
                      v54 = v8;
                      v8 += 256;
                      memset(v54, 0, 0x100u);
                    }
                    while ( v8 != v53 );
                    v151[22] = v8;
                    v9 = v151[21];
                  }
                }
              }
              else if ( v7 < v11 )
              {
                v153 = (char *)(v9 + (v7 << 8));
                if ( v8 != v153 )
                {
                  v157 = v3;
                  v43 = v151[22];
                  v44 = v9 + (v7 << 8);
                  do
                  {
                    v45 = v44 + 64;
                    v44 += 256;
                    sub_A40EB0(v45);
                  }
                  while ( v43 != v44 );
                  v3 = v157;
                  v151[22] = v153;
                  v9 = v151[21];
                }
              }
            }
            v12 = v9 + (v6 << 8);
            (*(void (__fastcall **)(__int64 *))(*v3 + 104))(v3);
            sub_A427E0(v3, (__int64)"Name", v12, 1u);
            v173.m128i_i32[0] = 0;
            sub_A40BF0((__int64)v3, (_DWORD *)(v12 + 16), &v173);
            v173.m128i_i64[0] = (__int64)&byte_22F0C30;
            v173.m128i_i64[1] = j__strlen(&byte_22F0C30);
            sub_A43150(v3, (__int64)"AvailabilityMsg", v12 + 24, (__int64)&v173, 0);
            v173.m128i_i8[1] = 0;
            sub_A43000(v3, (__int64)"SwiftPrivate", v12 + 56, &v173, 0);
            v173.m128i_i64[0] = (__int64)&byte_22F0C30;
            v173.m128i_i64[1] = j__strlen(&byte_22F0C30);
            sub_A43150(v3, (__int64)"SwiftName", v12 + 40, (__int64)&v173, 0);
            sub_A4CC70(v3, v12 + 64);
            (*(void (__fastcall **)(__int64 *))(*v3 + 112))(v3);
            (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 40))(v3, v172);
            if ( v140 == v6 )
              break;
          }
          else if ( v140 == v6 )
          {
            break;
          }
          ++v6;
        }
      }
      (*(void (__fastcall **)(__int64 *))(*v3 + 48))(v3);
      return (*(__int64 (__fastcall **)(__int64 *, __int64))(*v3 + 128))(v3, v171);
    }
  }
  return result;
}
