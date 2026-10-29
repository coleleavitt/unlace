__m128 *__fastcall sub_2127580(__m128 *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  const char *v8; // rbx
  const char *v9; // rax
  bool v10; // zf
  unsigned int v11; // r13d
  __int64 v12; // rbp
  size_t v13; // r12
  __int64 v14; // rsi
  const char *v15; // r12
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // si
  size_t v20; // rax
  char v21; // al
  char v22; // r13
  _BYTE *v23; // rax
  __m128 v24; // xmm0
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  char *v27; // rax
  char v28; // dl
  __m128 v29; // xmm0
  __m128i v30; // xmm0
  __m128i si128; // xmm0
  _BYTE *v32; // rax
  __int64 v33; // rdx
  _BYTE *v34; // rdx
  _BYTE *v35; // rax
  __m128 v36; // xmm0
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  _BYTE *v40; // rax
  __m128 v41; // xmm0
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  __m128i v51; // xmm0
  char *v52; // rcx
  char *v53; // rax
  char v54; // dl
  __m128i v55; // xmm0
  _BYTE *v56; // rax
  __m128 v57; // xmm0
  _BYTE *v58; // rax
  __m128 v59; // xmm0
  __m128i v60; // xmm0
  _BYTE *v61; // rax
  __m128 v62; // xmm0
  _BYTE *v63; // r12
  _BYTE *v64; // rax
  __int64 v65; // rcx
  char *v66; // rdi
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // rax
  char *v70; // rdx
  __int64 v71; // rax
  char *v72; // r12
  __int64 v73; // rcx
  char *v74; // rax
  __m128i v75; // xmm6
  int v76; // esi
  char *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // r8
  char *v80; // rbp
  unsigned __int64 v81; // rax
  __m128i v82; // xmm1
  bool v83; // cc
  void *v84; // rdi
  __int64 v85; // rax
  __m128i v86; // xmm7
  unsigned int v87; // eax
  __int64 v88; // rcx
  void **v89; // rdi
  unsigned __int64 v90; // rsi
  unsigned __int64 v91; // rdx
  unsigned __int64 v92; // rax
  void **v93; // rdx
  __int64 v94; // rax
  void **v95; // r8
  __int64 v96; // rcx
  void **v97; // rax
  __m128i v98; // xmm6
  int v99; // esi
  char *v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rbp
  char *v103; // rbx
  unsigned __int64 v104; // r12
  __m128i v105; // xmm2
  void *v106; // rdi
  __int64 v107; // rax
  __m128i v108; // xmm7
  unsigned int v109; // eax
  char *v110; // rax
  unsigned __int64 v111; // rbx
  __m128i v112; // xmm0
  __int64 v113; // rax
  __m128i *v114; // rdi
  __m128i v115; // xmm0
  __m128i v116; // xmm0
  __m128i v117; // xmm0
  __m128i v118; // xmm3
  char *v119; // rcx
  unsigned int v120; // edx
  __m128i v121; // xmm3
  void **v122; // rdx
  unsigned int v123; // eax
  void *v124; // rdx
  __int64 v125; // rdx
  unsigned __int64 v126; // rbp
  __int64 v127; // rax
  char *v128; // rdx
  char *v129; // r12
  __int64 v130; // rsi
  __int64 v131; // rcx
  int v132; // edi
  __m128i v133; // xmm5
  int v134; // edi
  char *v135; // rsi
  __int64 v136; // rdx
  void *v137; // rdi
  int v138; // edx
  unsigned __int64 v139; // rbp
  __int64 v140; // rax
  char *v141; // rdx
  void **v142; // r12
  __int64 v143; // rsi
  __int64 v144; // rcx
  int v145; // edi
  __m128i v146; // xmm5
  int v147; // edi
  char *v148; // rdx
  __int64 v149; // rax
  void *v150; // rdi
  int v151; // eax
  __int64 v152; // r12
  char *v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  int v156; // esi
  __m128i v157; // xmm4
  int v158; // esi
  char *v159; // rax
  __int64 v160; // rdx
  void *v161; // rdi
  __int64 v162; // r12
  char *v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  int v166; // esi
  __m128i v167; // xmm4
  int v168; // esi
  char *v169; // rax
  __int64 v170; // r13
  void *v171; // rdi
  int v172; // eax
  int v173; // r13d
  size_t v174; // [rsp+0h] [rbp-C8h]
  _BYTE *v175; // [rsp+0h] [rbp-C8h]
  __int64 v176; // [rsp+8h] [rbp-C0h]
  void **v177; // [rsp+8h] [rbp-C0h]
  char v178; // [rsp+8h] [rbp-C0h]
  int v179; // [rsp+8h] [rbp-C0h]
  char *v180; // [rsp+8h] [rbp-C0h]
  char *v181; // [rsp+8h] [rbp-C0h]
  int v182; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v183; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v184; // [rsp+18h] [rbp-B0h]
  void **v185; // [rsp+18h] [rbp-B0h]
  int v186; // [rsp+18h] [rbp-B0h]
  char *v187; // [rsp+18h] [rbp-B0h]
  __int64 v188; // [rsp+18h] [rbp-B0h]
  char *v189; // [rsp+20h] [rbp-A8h]
  __int64 v190; // [rsp+20h] [rbp-A8h]
  __int64 v191; // [rsp+28h] [rbp-A0h]
  __int64 v192; // [rsp+38h] [rbp-90h] BYREF
  void *v193; // [rsp+40h] [rbp-88h] BYREF
  __m128i v194; // [rsp+48h] [rbp-80h] BYREF
  void *v195; // [rsp+58h] [rbp-70h]
  unsigned int v196; // [rsp+60h] [rbp-68h]
  int v197; // [rsp+68h] [rbp-60h] BYREF
  __m128i v198; // [rsp+70h] [rbp-58h] BYREF
  void *v199; // [rsp+80h] [rbp-48h]
  unsigned int v200; // [rsp+88h] [rbp-40h]

  v8 = *(const char **)(a2 + 56);
  v9 = (const char *)(*(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 72));
  *(_QWORD *)(a2 + 136) = v8;
  if ( v8 == v9 )
  {
    v11 = -1;
    goto LABEL_4;
  }
  v10 = *(_BYTE *)(a2 + 130) == 1;
  *(_QWORD *)(a2 + 56) = v8 + 1;
  v11 = *(unsigned __int8 *)v8;
  if ( v10 || (_BYTE)v11 != 35 )
  {
LABEL_4:
    v12 = *(_QWORD *)(a2 + 120);
    if ( *(_BYTE *)(v12 + 22) )
    {
      if ( !*(_BYTE *)(a2 + 147) )
        goto LABEL_8;
      v13 = *(_QWORD *)(v12 + 56);
      v14 = *(_QWORD *)(v12 + 48);
      if ( v13 == 1 )
        goto LABEL_13;
      goto LABEL_6;
    }
LABEL_5:
    v13 = *(_QWORD *)(v12 + 56);
    v14 = *(_QWORD *)(v12 + 48);
    if ( v13 == 1 )
    {
LABEL_13:
      if ( *(_BYTE *)v14 == *v8 )
        goto LABEL_14;
LABEL_8:
      v15 = *(const char **)(v12 + 40);
      v174 = strlen(v15);
      if ( !strncmp(v8, v15, v174) )
      {
        *(_QWORD *)(a2 + 56) += v174 - 1;
        *(_BYTE *)(a2 + 128) = 1;
        *(_BYTE *)(a2 + 147) = 1;
        v20 = strlen(*(const char **)(v12 + 40));
        a1->m128_i32[0] = 9;
        a1->m128_u64[1] = (unsigned __int64)v8;
        a1[1].m128_u64[0] = v20;
        a1[2].m128_i32[0] = 64;
        a1[1].m128_u64[1] = 0;
      }
      else
      {
        v18 = *(_BYTE *)(a2 + 147);
        if ( v11 == -1 )
        {
          v21 = *(_BYTE *)(a2 + 131);
          if ( v18 || !v21 )
          {
            *(_BYTE *)(a2 + 128) = 0;
            *(_BYTE *)(a2 + 147) = 0;
            if ( v21 )
            {
              *(_BYTE *)(a2 + 128) = 1;
              *(_BYTE *)(a2 + 147) = 1;
            }
            a1->m128_i32[0] = 0;
            a1->m128_u64[1] = (unsigned __int64)v8;
            a1[2].m128_i32[0] = 64;
            a1[1] = 0;
          }
          else
          {
            *(_BYTE *)(a2 + 128) = 1;
            *(_BYTE *)(a2 + 147) = 1;
            a1->m128_i32[0] = 9;
            a1->m128_u64[1] = (unsigned __int64)v8;
            a1[2].m128_i32[0] = 64;
            a1[1] = 0;
          }
        }
        else
        {
          *(_BYTE *)(a2 + 128) = 0;
          *(_BYTE *)(a2 + 147) = 0;
          switch ( v11 )
          {
            case 0u:
            case 9u:
            case 0x20u:
              v52 = *(char **)(a2 + 56);
              *(_BYTE *)(a2 + 147) = v18;
              if ( *v52 == 9 || *v52 == 32 )
              {
                v53 = v52 + 1;
                do
                {
                  do
                  {
                    *(_QWORD *)(a2 + 56) = v53;
                    v54 = *v53;
                    v52 = v53++;
                  }
                  while ( v54 == 32 );
                }
                while ( v54 == 9 );
              }
              if ( *(_BYTE *)(a2 + 144) )
              {
                sub_2127580(a1, a2);
              }
              else
              {
                a1->m128_i32[0] = 11;
                a1->m128_u64[1] = (unsigned __int64)v8;
                a1[1].m128_u64[0] = v52 - v8;
                a1[2].m128_i32[0] = 64;
                a1[1].m128_u64[1] = 0;
              }
              break;
            case 0xAu:
              si128 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              *(_BYTE *)(a2 + 128) = 1;
              *(_BYTE *)(a2 + 147) = 1;
              a1->m128_i32[0] = 9;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)si128;
              break;
            case 0xDu:
              v32 = *(_BYTE **)(a2 + 56);
              v33 = *(_QWORD *)(a2 + 72);
              *(_BYTE *)(a2 + 128) = 1;
              v34 = (_BYTE *)(*(_QWORD *)(a2 + 64) + v33);
              *(_BYTE *)(a2 + 147) = 1;
              if ( v32 != v34 && *v32 == 10 )
                *(_QWORD *)(a2 + 56) = ++v32;
              a1->m128_i32[0] = 9;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[1].m128_u64[0] = v32 - v8;
              a1[2].m128_i32[0] = 64;
              a1[1].m128_u64[1] = 0;
              break;
            case 0x21u:
              v35 = *(_BYTE **)(a2 + 56);
              if ( *v35 == 61 )
              {
                v36 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8EF0);
                *(_QWORD *)(a2 + 56) = v35 + 1;
                a1->m128_i32[0] = 36;
              }
              else
              {
                v36 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A78B0);
                a1->m128_i32[0] = 35;
              }
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = v36;
              break;
            case 0x22u:
              sub_21259F0((__int64)a1, a2);
              break;
            case 0x23u:
              if ( *(_BYTE *)(v12 + 22) )
                goto LABEL_152;
              v37 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 38;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v37;
              break;
            case 0x24u:
              if ( *(_BYTE *)(a2 + 151) && word_23E43C0[**(unsigned __int8 **)(a2 + 56)] != -1 )
                goto LABEL_42;
              if ( *(_BYTE *)(v12 + 158) )
                goto LABEL_152;
              v38 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 27;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v38;
              break;
            case 0x25u:
              if ( *(_BYTE *)(a2 + 151) && (unsigned __int8)(**(_BYTE **)(a2 + 56) - 48) <= 1u )
                goto LABEL_42;
              v39 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 37;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v39;
              break;
            case 0x26u:
              v40 = *(_BYTE **)(a2 + 56);
              if ( *v40 == 38 )
              {
                v41 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8EF0);
                *(_QWORD *)(a2 + 56) = v40 + 1;
                a1->m128_i32[0] = 34;
              }
              else
              {
                v41 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A78B0);
                a1->m128_i32[0] = 33;
              }
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = v41;
              break;
            case 0x27u:
              sub_2125670((__int64)a1, a2);
              break;
            case 0x28u:
              v44 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 17;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v44;
              break;
            case 0x29u:
              v42 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 18;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v42;
              break;
            case 0x2Au:
              v30 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 24;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v30;
              break;
            case 0x2Bu:
              v60 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 12;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v60;
              break;
            case 0x2Cu:
              v55 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 26;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v55;
              break;
            case 0x2Du:
              v56 = *(_BYTE **)(a2 + 56);
              if ( *v56 == 62 )
              {
                v57 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8EF0);
                *(_QWORD *)(a2 + 56) = v56 + 1;
                a1->m128_i32[0] = 47;
              }
              else
              {
                v57 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A78B0);
                a1->m128_i32[0] = 13;
              }
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = v57;
              break;
            case 0x2Fu:
              *(_BYTE *)(a2 + 147) = v18;
              sub_21254A0((__int64)a1, a2, v11, v174, v16, v17);
              break;
            case 0x30u:
            case 0x31u:
            case 0x32u:
            case 0x33u:
            case 0x34u:
            case 0x35u:
            case 0x36u:
            case 0x37u:
            case 0x38u:
            case 0x39u:
LABEL_42:
              sub_2125DA0(a1, a2);
              break;
            case 0x3Au:
              v26 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 10;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v26;
              break;
            case 0x3Cu:
              v27 = *(char **)(a2 + 56);
              v28 = *v27;
              if ( *v27 == 61 )
              {
                v117 = _mm_load_si128((const __m128i *)&xmmword_23A8EF0);
                *(_QWORD *)(a2 + 56) = v27 + 1;
                a1->m128_i32[0] = 40;
                a1->m128_u64[1] = (unsigned __int64)v8;
                a1[2].m128_i32[0] = 64;
                a1[1] = (__m128)v117;
              }
              else if ( v28 == 62 )
              {
                v116 = _mm_load_si128((const __m128i *)&xmmword_23A8EF0);
                *(_QWORD *)(a2 + 56) = v27 + 1;
                a1->m128_i32[0] = 42;
                a1->m128_u64[1] = (unsigned __int64)v8;
                a1[2].m128_i32[0] = 64;
                a1[1] = (__m128)v116;
              }
              else
              {
                if ( v28 == 60 )
                {
                  v29 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8EF0);
                  *(_QWORD *)(a2 + 56) = v27 + 1;
                  a1->m128_i32[0] = 41;
                }
                else
                {
                  v29 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A78B0);
                  a1->m128_i32[0] = 39;
                }
                a1->m128_u64[1] = (unsigned __int64)v8;
                a1[2].m128_i32[0] = 64;
                a1[1] = v29;
              }
              break;
            case 0x3Du:
              v58 = *(_BYTE **)(a2 + 56);
              if ( *v58 == 61 )
              {
                v59 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8EF0);
                *(_QWORD *)(a2 + 56) = v58 + 1;
                a1->m128_i32[0] = 29;
              }
              else
              {
                v59 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A78B0);
                a1->m128_i32[0] = 28;
              }
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = v59;
              break;
            case 0x3Eu:
              v61 = *(_BYTE **)(a2 + 56);
              if ( *v61 == 61 )
              {
                v115 = _mm_load_si128((const __m128i *)&xmmword_23A8EF0);
                *(_QWORD *)(a2 + 56) = v61 + 1;
                a1->m128_i32[0] = 44;
                a1->m128_u64[1] = (unsigned __int64)v8;
                a1[2].m128_i32[0] = 64;
                a1[1] = (__m128)v115;
              }
              else
              {
                if ( *v61 == 62 )
                {
                  v62 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8EF0);
                  *(_QWORD *)(a2 + 56) = v61 + 1;
                  a1->m128_i32[0] = 45;
                }
                else
                {
                  v62 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A78B0);
                  a1->m128_i32[0] = 43;
                }
                a1->m128_u64[1] = (unsigned __int64)v8;
                a1[2].m128_i32[0] = 64;
                a1[1] = v62;
              }
              break;
            case 0x3Fu:
              if ( *(_BYTE *)(v12 + 157) )
                goto LABEL_152;
              v45 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 23;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v45;
              break;
            case 0x40u:
              if ( *(_BYTE *)(v12 + 159) )
                goto LABEL_152;
              v46 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 46;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v46;
              break;
            case 0x5Bu:
              v47 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 19;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v47;
              break;
            case 0x5Cu:
              v48 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 16;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v48;
              break;
            case 0x5Du:
              v49 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 20;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v49;
              break;
            case 0x5Eu:
              v50 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 32;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v50;
              break;
            case 0x7Bu:
              v43 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 21;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v43;
              break;
            case 0x7Cu:
              v23 = *(_BYTE **)(a2 + 56);
              if ( *v23 == 124 )
              {
                v24 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8EF0);
                *(_QWORD *)(a2 + 56) = v23 + 1;
                a1->m128_i32[0] = 31;
              }
              else
              {
                v24 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A78B0);
                a1->m128_i32[0] = 30;
              }
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = v24;
              break;
            case 0x7Du:
              v25 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 22;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v25;
              break;
            case 0x7Eu:
              v51 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
              a1->m128_i32[0] = 14;
              a1->m128_u64[1] = (unsigned __int64)v8;
              a1[2].m128_i32[0] = 64;
              a1[1] = (__m128)v51;
              break;
            default:
              if ( isalpha(v11) || v11 == 95 || v11 == 46 )
              {
LABEL_152:
                sub_2125040((__int64)a1, a2);
              }
              else
              {
                v193 = &v194.m128i_u64[1];
                v110 = (char *)operator new(0x1Bu);
                v111 = *(_QWORD *)(a2 + 136);
                v112 = _mm_load_si128((const __m128i *)&xmmword_23AB4E0);
                strcpy(v110 + 16, "r in input");
                *(_QWORD *)(a2 + 80) = v111;
                *(__m128i *)v110 = v112;
                v193 = v110;
                v194.m128i_i64[1] = 26;
                v194.m128i_i64[0] = 26;
                sub_9EE8A0(a2 + 88, (__int64)&v193);
                v113 = *(_QWORD *)(a2 + 56);
                v114 = (__m128i *)v193;
                a1->m128_i32[0] = 1;
                a1->m128_u64[1] = v111;
                a1[2].m128_i32[0] = 64;
                a1[1].m128_u64[0] = v113 - v111;
                a1[1].m128_u64[1] = 0;
                if ( v114 != (__m128i *)&v194.m128i_u64[1] )
                  operator delete(v114);
              }
              break;
          }
        }
      }
      return a1;
    }
LABEL_6:
    if ( *(_BYTE *)(v14 + 1) != 35 )
    {
      if ( strncmp(v8, (const char *)v14, v13) )
        goto LABEL_8;
LABEL_14:
      *(_QWORD *)(a2 + 56) += v13 - 1;
      sub_2124C90((__int64)a1, a2, a3, a4, a5, a6);
      return a1;
    }
    goto LABEL_13;
  }
  if ( !*(_BYTE *)(a2 + 147) )
  {
    v12 = *(_QWORD *)(a2 + 120);
    v11 = 35;
    if ( *(_BYTE *)(v12 + 22) )
      goto LABEL_8;
    goto LABEL_5;
  }
  LODWORD(v193) = 0;
  v194 = 0u;
  v196 = 1;
  v195 = nullptr;
  v197 = 0;
  v198 = 0u;
  v200 = 1;
  v199 = nullptr;
  v22 = *(_BYTE *)(a2 + 128) & (sub_2128A20(a2, &v193, 2, 1) == 2);
  if ( v22 && (_DWORD)v193 == 4 && v197 == 3 )
  {
    v175 = *(_BYTE **)(a2 + 136);
    *(_QWORD *)(a2 + 56) = v175;
    if ( *v175 == 13 || *v175 == 10 )
    {
      v63 = v175;
    }
    else
    {
      v63 = (_BYTE *)(*(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 72));
      v64 = v175;
      if ( v175 != v63 )
      {
        while ( 1 )
        {
          *(_QWORD *)(a2 + 56) = ++v64;
          if ( *v64 == 10 || *v64 == 13 )
            break;
          if ( v64 == v63 )
            goto LABEL_116;
        }
        v63 = v64;
      }
    }
LABEL_116:
    v65 = *(unsigned int *)(a2 + 8);
    v66 = *(char **)a2;
    v183 = v63 - v175;
    v67 = v65 + 1;
    v68 = *(_QWORD *)a2 + 40 * v65;
    v69 = *(unsigned int *)(a2 + 12);
    if ( *(_QWORD *)a2 == v68 )
    {
      if ( v69 < v67 )
      {
        v152 = sub_2237400(a2, a2 + 16, v67, 40, &v192);
        v153 = *(char **)a2;
        v154 = v152;
        v155 = *(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8);
        while ( v153 != (char *)v155 )
        {
          v156 = *(_DWORD *)v153;
          v157 = _mm_loadu_si128((const __m128i *)(v153 + 8));
          v154 += 40;
          v153 += 40;
          *(_DWORD *)(v154 - 40) = v156;
          v158 = *((_DWORD *)v153 - 2);
          *(__m128i *)(v154 - 32) = v157;
          *(_DWORD *)(v154 - 8) = v158;
          *(_QWORD *)(v154 - 16) = *((_QWORD *)v153 - 2);
          *((_DWORD *)v153 - 2) = 0;
        }
        v159 = *(char **)a2;
        v160 = *(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8);
        while ( v159 != (char *)v160 )
        {
          v160 -= 40;
          if ( *(_DWORD *)(v160 + 32) > 0x40u )
          {
            v161 = *(void **)(v160 + 24);
            if ( v161 )
            {
              v188 = v160;
              v180 = v159;
              operator delete[](v161);
              v159 = v180;
              v160 = v188;
            }
          }
        }
        v172 = v192;
        if ( a2 + 16 != *(_QWORD *)a2 )
        {
          v182 = v192;
          free(*(void **)a2);
          v172 = v182;
        }
        *(_QWORD *)a2 = v152;
        v66 = (char *)v152;
        v65 = *(unsigned int *)(a2 + 8);
        *(_DWORD *)(a2 + 12) = v172;
      }
      v118 = _mm_loadu_si128(&v198);
      v119 = &v66[40 * v65];
      *(_DWORD *)v119 = v197;
      v120 = v200;
      *(__m128i *)(v119 + 8) = v118;
      *((_DWORD *)v119 + 8) = v120;
      if ( v120 > 0x40 )
        sub_2205510(v119 + 24);
      else
        *((_QWORD *)v119 + 3) = v199;
      ++*(_DWORD *)(a2 + 8);
LABEL_131:
      v88 = *(unsigned int *)(a2 + 8);
      v89 = *(void ***)a2;
      v90 = *(unsigned int *)(a2 + 12);
      v91 = v88 + 1;
      v92 = *(_QWORD *)a2 + 40 * v88;
      if ( *(_QWORD *)a2 == v92 )
      {
        if ( v91 > v90 )
        {
          v162 = sub_2237400(a2, a2 + 16, v91, 40, &v192);
          v163 = *(char **)a2;
          v164 = v162;
          v165 = *(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8);
          while ( v163 != (char *)v165 )
          {
            v166 = *(_DWORD *)v163;
            v167 = _mm_loadu_si128((const __m128i *)(v163 + 8));
            v164 += 40;
            v163 += 40;
            *(_DWORD *)(v164 - 40) = v166;
            v168 = *((_DWORD *)v163 - 2);
            *(__m128i *)(v164 - 32) = v167;
            *(_DWORD *)(v164 - 8) = v168;
            *(_QWORD *)(v164 - 16) = *((_QWORD *)v163 - 2);
            *((_DWORD *)v163 - 2) = 0;
          }
          v169 = *(char **)a2;
          v170 = *(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8);
          while ( v169 != (char *)v170 )
          {
            v170 -= 40;
            if ( *(_DWORD *)(v170 + 32) > 0x40u )
            {
              v171 = *(void **)(v170 + 24);
              if ( v171 )
              {
                v181 = v169;
                operator delete[](v171);
                v169 = v181;
              }
            }
          }
          v173 = v192;
          if ( a2 + 16 != *(_QWORD *)a2 )
            free(*(void **)a2);
          *(_QWORD *)a2 = v162;
          v89 = (void **)v162;
          v88 = *(unsigned int *)(a2 + 8);
          *(_DWORD *)(a2 + 12) = v173;
        }
        v121 = _mm_loadu_si128(&v194);
        v122 = &v89[5 * v88];
        *(_DWORD *)v122 = (_DWORD)v193;
        v123 = v196;
        *(__m128i *)(v122 + 1) = v121;
        *((_DWORD *)v122 + 8) = v123;
        if ( v123 > 0x40 )
          sub_2205510(v122 + 3);
        else
          v122[3] = v195;
        ++*(_DWORD *)(a2 + 8);
        goto LABEL_146;
      }
      if ( v91 > v90 )
      {
        if ( v89 > &v193 || v92 <= (unsigned __int64)&v193 )
        {
          v139 = -1;
          v22 = 0;
        }
        else
        {
          v139 = 0xCCCCCCCCCCCCCCCDLL * (&v193 - v89);
        }
        v140 = sub_2237400(a2, a2 + 16, v91, 40, &v192);
        v141 = *(char **)a2;
        v142 = (void **)v140;
        v143 = *(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8);
        v144 = v140;
        while ( v141 != (char *)v143 )
        {
          v145 = *(_DWORD *)v141;
          v146 = _mm_loadu_si128((const __m128i *)(v141 + 8));
          v144 += 40;
          v141 += 40;
          *(_DWORD *)(v144 - 40) = v145;
          v147 = *((_DWORD *)v141 - 2);
          *(__m128i *)(v144 - 32) = v146;
          *(_DWORD *)(v144 - 8) = v147;
          *(_QWORD *)(v144 - 16) = *((_QWORD *)v141 - 2);
          *((_DWORD *)v141 - 2) = 0;
        }
        v148 = *(char **)a2;
        v149 = *(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8);
        while ( v148 != (char *)v149 )
        {
          v149 -= 40;
          if ( *(_DWORD *)(v149 + 32) > 0x40u )
          {
            v150 = *(void **)(v149 + 24);
            if ( v150 )
            {
              v190 = v149;
              v187 = v148;
              operator delete[](v150);
              v148 = v187;
              v149 = v190;
            }
          }
        }
        v151 = v192;
        if ( a2 + 16 != *(_QWORD *)a2 )
        {
          v179 = v192;
          free(*(void **)a2);
          v151 = v179;
        }
        *(_QWORD *)a2 = v142;
        *(_DWORD *)(a2 + 12) = v151;
        if ( v22 )
        {
          v89 = v142;
          v88 = *(unsigned int *)(a2 + 8);
          v93 = &v142[5 * v139];
          goto LABEL_134;
        }
        v89 = v142;
        v88 = *(unsigned int *)(a2 + 8);
      }
      v93 = &v193;
LABEL_134:
      v94 = 5 * v88;
      v95 = v89;
      v96 = (__int64)&v89[5 * v88 - 5];
      v97 = &v89[v94];
      v98 = _mm_loadu_si128((const __m128i *)(v96 + 8));
      *(_DWORD *)v97 = *(_DWORD *)v96;
      v99 = *(_DWORD *)(v96 + 32);
      *(__m128i *)(v97 + 1) = v98;
      *((_DWORD *)v97 + 8) = v99;
      v97[3] = *(void **)(v96 + 24);
      v100 = *(char **)a2;
      *(_DWORD *)(v96 + 32) = 0;
      v101 = 40LL * *(unsigned int *)(a2 + 8);
      v102 = (__int64)&v100[v101 - 40];
      v103 = &v100[v101];
      v104 = 0xCCCCCCCCCCCCCCCDLL * ((v102 - (__int64)v95) >> 3);
      if ( v102 - (__int64)v95 > 0 )
      {
        do
        {
          v102 -= 40;
          v103 -= 40;
          v105 = _mm_loadu_si128((const __m128i *)(v102 + 8));
          v83 = *((_DWORD *)v103 + 8) <= 0x40u;
          *(_DWORD *)v103 = *(_DWORD *)v102;
          *(__m128i *)(v103 + 8) = v105;
          if ( !v83 )
          {
            v106 = *((void **)v103 + 3);
            if ( v106 )
            {
              v185 = v93;
              v177 = v95;
              operator delete[](v106);
              v93 = v185;
              v95 = v177;
            }
          }
          *((_QWORD *)v103 + 3) = *(_QWORD *)(v102 + 24);
          *((_DWORD *)v103 + 8) = *(_DWORD *)(v102 + 32);
          *(_DWORD *)(v102 + 32) = 0;
          --v104;
        }
        while ( v104 );
        v100 = *(char **)a2;
      }
      v107 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v107;
      if ( v95 <= v93 && v93 < (void **)&v100[40 * v107] )
        v93 += 5;
      v108 = _mm_loadu_si128((const __m128i *)(v93 + 1));
      v83 = *((_DWORD *)v95 + 8) <= 0x40u;
      *(_DWORD *)v95 = *(_DWORD *)v93;
      *(__m128i *)(v95 + 1) = v108;
      if ( v83 && (v109 = *((_DWORD *)v93 + 8), v109 <= 0x40) )
      {
        v124 = v93[3];
        *((_DWORD *)v95 + 8) = v109;
        v95[3] = v124;
      }
      else
      {
        sub_22056A0(v95 + 3, v93 + 3);
      }
LABEL_146:
      a1->m128_i32[0] = 8;
      a1[2].m128_i32[0] = 64;
      a1->m128_u64[1] = (unsigned __int64)v175;
      a1[1].m128_u64[1] = 0;
      a1[1].m128_u64[0] = v183;
      goto LABEL_36;
    }
    if ( v69 < v67 )
    {
      if ( v66 > (char *)&v197 || v68 <= (unsigned __int64)&v197 )
      {
        v126 = -1;
        v178 = 0;
      }
      else
      {
        v178 = v22;
        v126 = 0xCCCCCCCCCCCCCCCDLL * (((char *)&v197 - v66) >> 3);
      }
      v127 = sub_2237400(a2, a2 + 16, v67, 40, &v192);
      v128 = *(char **)a2;
      v129 = (char *)v127;
      v130 = *(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8);
      v131 = v127;
      while ( v128 != (char *)v130 )
      {
        v132 = *(_DWORD *)v128;
        v133 = _mm_loadu_si128((const __m128i *)(v128 + 8));
        v131 += 40;
        v128 += 40;
        *(_DWORD *)(v131 - 40) = v132;
        v134 = *((_DWORD *)v128 - 2);
        *(__m128i *)(v131 - 32) = v133;
        *(_DWORD *)(v131 - 8) = v134;
        *(_QWORD *)(v131 - 16) = *((_QWORD *)v128 - 2);
        *((_DWORD *)v128 - 2) = 0;
      }
      v135 = *(char **)a2;
      v136 = *(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8);
      while ( v135 != (char *)v136 )
      {
        v136 -= 40;
        if ( *(_DWORD *)(v136 + 32) > 0x40u )
        {
          v137 = *(void **)(v136 + 24);
          if ( v137 )
          {
            v191 = v136;
            operator delete[](v137);
            v136 = v191;
          }
        }
      }
      v138 = v192;
      if ( a2 + 16 != *(_QWORD *)a2 )
      {
        v186 = v192;
        free(*(void **)a2);
        v138 = v186;
      }
      *(_QWORD *)a2 = v129;
      *(_DWORD *)(a2 + 12) = v138;
      if ( v178 )
      {
        v66 = v129;
        v65 = *(unsigned int *)(a2 + 8);
        v70 = &v129[40 * v126];
        goto LABEL_119;
      }
      v66 = v129;
      v65 = *(unsigned int *)(a2 + 8);
    }
    v70 = (char *)&v197;
LABEL_119:
    v71 = 40 * v65;
    v72 = v66;
    v73 = (__int64)&v66[40 * v65 - 40];
    v74 = &v66[v71];
    v75 = _mm_loadu_si128((const __m128i *)(v73 + 8));
    *(_DWORD *)v74 = *(_DWORD *)v73;
    v76 = *(_DWORD *)(v73 + 32);
    *(__m128i *)(v74 + 8) = v75;
    *((_DWORD *)v74 + 8) = v76;
    *((_QWORD *)v74 + 3) = *(_QWORD *)(v73 + 24);
    v77 = *(char **)a2;
    *(_DWORD *)(v73 + 32) = 0;
    v78 = 40LL * *(unsigned int *)(a2 + 8);
    v79 = (__int64)&v77[v78 - 40];
    v80 = &v77[v78];
    v81 = 0xCCCCCCCCCCCCCCCDLL * ((v79 - (__int64)v72) >> 3);
    if ( v79 - (__int64)v72 > 0 )
    {
      do
      {
        v79 -= 40;
        v80 -= 40;
        v82 = _mm_loadu_si128((const __m128i *)(v79 + 8));
        v83 = *((_DWORD *)v80 + 8) <= 0x40u;
        *(_DWORD *)v80 = *(_DWORD *)v79;
        *(__m128i *)(v80 + 8) = v82;
        if ( !v83 )
        {
          v84 = *((void **)v80 + 3);
          if ( v84 )
          {
            v189 = v70;
            v184 = v81;
            v176 = v79;
            operator delete[](v84);
            v70 = v189;
            v81 = v184;
            v79 = v176;
          }
        }
        *((_QWORD *)v80 + 3) = *(_QWORD *)(v79 + 24);
        *((_DWORD *)v80 + 8) = *(_DWORD *)(v79 + 32);
        *(_DWORD *)(v79 + 32) = 0;
        --v81;
      }
      while ( v81 );
      v77 = *(char **)a2;
    }
    v85 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    *(_DWORD *)(a2 + 8) = v85;
    if ( v72 <= v70 && v70 < &v77[40 * v85] )
      v70 += 40;
    v86 = _mm_loadu_si128((const __m128i *)(v70 + 8));
    v83 = *((_DWORD *)v72 + 8) <= 0x40u;
    *(_DWORD *)v72 = *(_DWORD *)v70;
    *(__m128i *)(v72 + 8) = v86;
    if ( v83 && (v87 = *((_DWORD *)v70 + 8), v87 <= 0x40) )
    {
      v125 = *((_QWORD *)v70 + 3);
      *((_DWORD *)v72 + 8) = v87;
      *((_QWORD *)v72 + 3) = v125;
    }
    else
    {
      sub_22056A0(v72 + 24, v70 + 24);
    }
    goto LABEL_131;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(a2 + 120) + 64LL) )
  {
    if ( v200 > 0x40 && v199 )
      operator delete[](v199);
    if ( v196 > 0x40 && v195 )
      operator delete[](v195);
    v8 = *(const char **)(a2 + 136);
    v11 = 35;
    goto LABEL_4;
  }
  sub_2124C90((__int64)a1, a2, a3, a4, a5, a6);
LABEL_36:
  if ( v200 > 0x40 && v199 )
    operator delete[](v199);
  if ( v196 > 0x40 && v195 )
    operator delete[](v195);
  return a1;
}
