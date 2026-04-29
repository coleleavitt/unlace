__int64 __fastcall sub_AEE0(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rax
  int v9; // r10d
  unsigned __int64 v10; // rbp
  void *v11; // rsi
  unsigned __int64 v12; // r14
  __m128i v13; // xmm0
  void *v14; // r13
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r14
  __int64 v18; // rdx
  _BYTE *v19; // rsi
  unsigned __int64 v20; // rdx
  size_t v21; // r14
  __int64 v22; // r8
  size_t v23; // r10
  _BYTE *v24; // rsi
  __int64 v25; // r14
  size_t v26; // r9
  __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  __int64 v33; // rdi
  unsigned __int64 v34; // r8
  int v35; // edx
  __int64 v36; // rax
  unsigned __int64 v37; // rsi
  __m128i *v38; // rax
  __int64 v39; // rax
  __int64 i; // rbp
  __int64 v41; // rax
  void *v42; // rsi
  __int64 v43; // rax
  const char *v44; // rsi
  __int64 v46; // r8
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // r10
  __int64 v51; // rdx
  _BYTE *v52; // rsi
  size_t v53; // r10
  __int64 v54; // r8
  size_t v55; // r11
  _BYTE *v56; // rsi
  __int64 v57; // r8
  size_t v58; // r9
  void *v59; // r10
  void *v60; // rdi
  __int64 v61; // rdx
  unsigned int v62; // ecx
  unsigned int v63; // edx
  __int64 v64; // r9
  unsigned __int32 v65; // edi
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // r14
  size_t v72; // r8
  __int64 v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // rdx
  int *v76; // r14
  int *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rdx
  _QWORD *v80; // rax
  unsigned __int64 v81; // rdx
  __int64 v82; // r8
  void *v83; // r9
  unsigned __int64 v84; // rsi
  __int64 v85; // rax
  _BOOL8 v86; // rdi
  __m128i *v87; // rax
  void *v88; // r10
  void *v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  const __m128i *v93; // rdi
  __int64 v94; // rdx
  __m128i si128; // xmm0
  bool v96; // cf
  int *v97; // rax
  __int64 v98; // rax
  void *v99; // r10
  void *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  const __m128i *v104; // rdi
  __int64 v105; // rdx
  __m128i v106; // xmm0
  __int64 v107; // [rsp+10h] [rbp-1E8h]
  unsigned __int64 v108; // [rsp+10h] [rbp-1E8h]
  __int64 v109; // [rsp+10h] [rbp-1E8h]
  __int64 v110; // [rsp+10h] [rbp-1E8h]
  unsigned __int64 v111; // [rsp+10h] [rbp-1E8h]
  __int64 v112; // [rsp+10h] [rbp-1E8h]
  __int64 v113; // [rsp+10h] [rbp-1E8h]
  int *v114; // [rsp+18h] [rbp-1E0h]
  void *v115; // [rsp+18h] [rbp-1E0h]
  size_t v116; // [rsp+18h] [rbp-1E0h]
  __int64 v117; // [rsp+20h] [rbp-1D8h]
  __int64 v118; // [rsp+30h] [rbp-1C8h]
  __int64 v119; // [rsp+30h] [rbp-1C8h]
  __int64 v120; // [rsp+30h] [rbp-1C8h]
  __int64 v121; // [rsp+30h] [rbp-1C8h]
  void *v122; // [rsp+30h] [rbp-1C8h]
  unsigned __int64 v123; // [rsp+30h] [rbp-1C8h]
  size_t v124; // [rsp+30h] [rbp-1C8h]
  size_t v125; // [rsp+30h] [rbp-1C8h]
  __int64 v126; // [rsp+30h] [rbp-1C8h]
  void *v127; // [rsp+30h] [rbp-1C8h]
  __int64 v128; // [rsp+38h] [rbp-1C0h]
  __int64 v129; // [rsp+38h] [rbp-1C0h]
  __int64 v130; // [rsp+38h] [rbp-1C0h]
  void *v131; // [rsp+38h] [rbp-1C0h]
  __int64 v132; // [rsp+38h] [rbp-1C0h]
  void *v133; // [rsp+38h] [rbp-1C0h]
  size_t v134; // [rsp+38h] [rbp-1C0h]
  __int64 v135; // [rsp+40h] [rbp-1B8h]
  size_t v136; // [rsp+40h] [rbp-1B8h]
  size_t v137; // [rsp+40h] [rbp-1B8h]
  void *v138; // [rsp+40h] [rbp-1B8h]
  __int64 v139; // [rsp+48h] [rbp-1B0h]
  __m128i *v140; // [rsp+58h] [rbp-1A0h] BYREF
  void *v141; // [rsp+60h] [rbp-198h] BYREF
  __int128 v142; // [rsp+68h] [rbp-190h]
  void *v143; // [rsp+80h] [rbp-178h] BYREF
  unsigned __int64 v144; // [rsp+88h] [rbp-170h]
  __int64 v145; // [rsp+90h] [rbp-168h]
  void *src; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v147; // [rsp+A8h] [rbp-150h]
  char v148[8]; // [rsp+C0h] [rbp-138h] BYREF
  int v149; // [rsp+C8h] [rbp-130h] BYREF
  int *v150; // [rsp+D0h] [rbp-128h]
  int *v151; // [rsp+D8h] [rbp-120h]
  int *v152; // [rsp+E0h] [rbp-118h]
  __int64 v153; // [rsp+E8h] [rbp-110h]
  __m128i v154; // [rsp+F0h] [rbp-108h] BYREF
  __m128i v155; // [rsp+100h] [rbp-F8h] BYREF
  __m128i v156; // [rsp+110h] [rbp-E8h] BYREF
  __m128i v157; // [rsp+120h] [rbp-D8h] BYREF
  __m128i v158; // [rsp+130h] [rbp-C8h] BYREF
  __m128i v159; // [rsp+140h] [rbp-B8h] BYREF
  __m128i v160; // [rsp+150h] [rbp-A8h] BYREF
  __m128i v161; // [rsp+160h] [rbp-98h] BYREF
  __m128i v162; // [rsp+170h] [rbp-88h] BYREF
  __m128i v163; // [rsp+180h] [rbp-78h] BYREF
  __m128i v164; // [rsp+190h] [rbp-68h] BYREF
  __m128i v165; // [rsp+1A0h] [rbp-58h] BYREF
  unsigned __int64 v166; // [rsp+1B8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v166 = __readfsqword(0x28u);
  v3 = v1 + *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32) + v1;
  if ( v3 >= v4 || (v5 = sub_E440(v3, v4, a1 + 52)) == 0 )
    sub_3890((__int64)"import section: couldn't read imports count");
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 0;
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 24) = v5 + v6;
  create_data(v6, 0, v5, -1);
  set_cmt(*(_QWORD *)(a1 + 40), "imports count", 0);
  sub_4DA0((__int64 *)(a1 + 192), *(unsigned int *)(a1 + 52));
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_DWORD *)(a1 + 52);
  v149 = 0;
  v150 = nullptr;
  v139 = v8;
  v151 = &v149;
  v152 = &v149;
  v153 = 0;
  v117 = a1 + 128;
  if ( v9 )
  {
    do
    {
      v10 = *(_QWORD *)(a1 + 24);
      v141 = nullptr;
      v145 = 0;
      v142 = 0;
      sub_4200((_QWORD *)a1, (__int64 *)&v141);
      v143 = nullptr;
      v144 = 0;
      sub_4200((_QWORD *)a1, (__int64 *)&v143);
      v11 = &unk_10F58;
      v12 = v144;
      v13.m128i_i64[0] = 0;
      v14 = v143;
      src = nullptr;
      if ( v144 )
        v11 = v143;
      v147 = 0;
      v15 = demangle_name(&src, v11, 245612135, 2);
      v16 = v142;
      if ( v15 <= 0 )
      {
        if ( (_QWORD)v142 )
        {
          v50 = v142 + 1;
          v51 = v142 + 2;
          v52 = v141;
          v16 = v142 - 1;
          if ( *((_QWORD *)&v142 + 1) >= (unsigned __int64)(v142 + 2) )
          {
LABEL_54:
            *(_QWORD *)&v142 = v51;
            v52[v50] = 0;
            *(_WORD *)((char *)v141 + v16) = 14906;
            if ( v12 )
            {
              v53 = v12 - 1;
              if ( v12 != 1 )
              {
                v54 = v142;
                v55 = v12 - 1;
                if ( (_QWORD)v142 )
                {
                  v54 = v142 - 1;
                  v55 = v53 + v142 - 1;
                  v12 += v142 - 1;
                }
                v56 = v141;
                if ( *((_QWORD *)&v142 + 1) < v12 )
                {
                  v137 = v55;
                  v132 = v54;
                  v124 = v53;
                  v141 = (void *)qvector_reserve(&v141, v141, v12, 1);
                  v55 = v137;
                  v56 = v141;
                  v54 = v132;
                  v53 = v124;
                }
                *(_QWORD *)&v142 = v12;
                v56[v55] = 0;
                memcpy((char *)v141 + v54, v14, v53);
              }
            }
            v57 = v142;
            if ( (_QWORD)v142 )
            {
              v58 = v142 - 1;
              if ( (_QWORD)v142 != 1 )
              {
                v59 = v141;
                v60 = src;
                if ( *((_QWORD *)&v147 + 1) < (unsigned __int64)v142 )
                {
                  v138 = v141;
                  v134 = v142 - 1;
                  v126 = v142;
                  src = (void *)qvector_reserve(&src, src, v142, 1);
                  v59 = v138;
                  v60 = src;
                  v58 = v134;
                  v57 = v126;
                }
                v119 = v57;
                *(_QWORD *)&v147 = v57;
                memmove(v60, v59, v58);
                *((char *)src + v119 - 1) = 0;
                goto LABEL_20;
              }
            }
            goto LABEL_19;
          }
        }
        else
        {
          v52 = v141;
          v51 = 3;
          v50 = 2;
          if ( *((_QWORD *)&v142 + 1) >= 3u )
            goto LABEL_54;
        }
        v135 = v50;
        v129 = v16;
        v121 = v51;
        v141 = (void *)qvector_reserve(&v141, v52, v51, 1);
        v50 = v135;
        v52 = v141;
        v16 = v129;
        v51 = v121;
        goto LABEL_54;
      }
      if ( (_QWORD)v142 )
      {
        v17 = v142 + 1;
        v18 = v142 + 2;
        v19 = v141;
        v16 = v142 - 1;
        if ( *((_QWORD *)&v142 + 1) < (unsigned __int64)(v142 + 2) )
          goto LABEL_67;
      }
      else
      {
        v19 = v141;
        v18 = 3;
        v17 = 2;
        if ( *((_QWORD *)&v142 + 1) < 3u )
        {
LABEL_67:
          v128 = v16;
          v120 = v18;
          v141 = (void *)qvector_reserve(&v141, v19, v18, 1);
          v16 = v128;
          v19 = v141;
          v18 = v120;
        }
      }
      *(_QWORD *)&v142 = v18;
      v19[v17] = 0;
      *(_WORD *)((char *)v141 + v16) = 14906;
      v20 = v147;
      if ( (_QWORD)v147 )
      {
        v21 = v147 - 1;
        if ( (_QWORD)v147 != 1 )
        {
          v22 = v142;
          v23 = v147 - 1;
          if ( (_QWORD)v142 )
          {
            v22 = v142 - 1;
            v23 = v21 + v142 - 1;
            v20 = v147 + v142 - 1;
          }
          v24 = v141;
          if ( *((_QWORD *)&v142 + 1) < v20 )
          {
            v136 = v23;
            v130 = v22;
            v123 = v20;
            v141 = (void *)qvector_reserve(&v141, v141, v20, 1);
            v23 = v136;
            v24 = v141;
            v22 = v130;
            v20 = v123;
          }
          *(_QWORD *)&v142 = v20;
          v24[v23] = 0;
          memcpy((char *)v141 + v22, src, v21);
        }
      }
      v25 = v142;
      if ( (_QWORD)v142 )
      {
        v26 = v142 - 1;
        if ( (_QWORD)v142 != 1 )
        {
          v88 = v141;
          v89 = src;
          if ( *((_QWORD *)&v147 + 1) < (unsigned __int64)v142 )
          {
            v133 = v141;
            v125 = v142 - 1;
            src = (void *)qvector_reserve(&src, src, v142, 1);
            v88 = v133;
            v89 = src;
            v26 = v125;
          }
          *(_QWORD *)&v147 = v25;
          memmove(v89, v88, v26);
          *((char *)src + v25 - 1) = 0;
          goto LABEL_20;
        }
      }
LABEL_19:
      *(_QWORD *)&v147 = 0;
LABEL_20:
      v27 = *(_QWORD *)(a1 + 24);
      v28 = *(_QWORD *)(a1 + 32);
      v29 = v27 + 1;
      if ( v28 < v27 + 1 )
        sub_3890((__int64)"couldn't read template type @0x%llx", *(_QWORD *)(a1 + 24));
      v30 = *(_QWORD *)(a1 + 8);
      v31 = *(unsigned __int8 *)(v30 + v27);
      *(_QWORD *)(a1 + 40) = v27;
      *(_QWORD *)(a1 + 24) = v29;
      switch ( v31 )
      {
        case 0LL:
          v47 = v30 + v29;
          v48 = v28 + v30;
          v160.m128i_i32[0] = *(_DWORD *)(a1 + 76);
          v46 = v160.m128i_u32[0];
          v10 = v160.m128i_u32[0] + v139;
          *(_DWORD *)(a1 + 76) = v160.m128i_i32[0] + 1;
          if ( v47 >= v48 || (v118 = *(_QWORD *)(a1 + 192) + 16 * v46, (v49 = sub_E440(v47, v48, v118 + 12)) == 0) )
            sub_3890((__int64)"import section: couldn't read signature index for import %u", v7);
          v61 = *(_QWORD *)(a1 + 24);
          v62 = *(_DWORD *)(a1 + 48);
          *(_QWORD *)(a1 + 40) = v61;
          *(_QWORD *)(a1 + 24) = v61 + v49;
          v63 = *(_DWORD *)(v118 + 12);
          if ( v63 >= v62 )
            sub_3890((__int64)"import section: invalid signature index for import %u: %u > %u", v7, v63, v62);
          v64 = a1 + 128;
          v13.m128i_i64[0] = _mm_shuffle_epi32(_mm_cvtsi32_si128(v10), 224).m128i_u64[0];
          *(_QWORD *)v118 = v13.m128i_i64[0];
          v65 = v160.m128i_i32[0];
          *(_DWORD *)(v118 + 8) = v160.m128i_i32[0];
          v66 = *(_QWORD *)(a1 + 136);
          v67 = v66;
          if ( !v66 )
            goto LABEL_111;
          break;
        case 1LL:
          ++*(_DWORD *)(a1 + 80);
          v13.m128i_i64[0] = 0;
          v161.m128i_i16[0] = 0;
          v160 = 0;
          sub_79E0((_QWORD *)a1, &v154, &v160);
          sub_3BA0(v10, 1u, (__int64)"import table");
          goto LABEL_27;
        case 2LL:
          ++*(_DWORD *)(a1 + 84);
          v13.m128i_i64[0] = 0;
          v161.m128i_i16[0] = 0;
          v160 = 0;
          sub_44D0((_QWORD *)a1, &v160);
          sub_3BA0(v10, 1u, (__int64)"import memory");
          goto LABEL_27;
        case 3LL:
          v157.m128i_i8[0] = 0;
          v159.m128i_i8[0] = 1;
          sub_4890((_QWORD *)a1, &v155.m128i_u32[2], (unsigned __int8 *)&v156);
          v32 = *(_QWORD *)(a1 + 216);
          v33 = a1 + 216;
          v34 = *(_QWORD *)(a1 + 232);
          v35 = *(_DWORD *)(a1 + 72) + 1;
          v154.m128i_i32[0] = *(_DWORD *)(a1 + 72);
          v154.m128i_i64[1] = (unsigned int)v10;
          v36 = *(_QWORD *)(a1 + 224);
          *(_DWORD *)(a1 + 72) = v35;
          v37 = v36 + 1;
          if ( (unsigned __int64)&v154 < v32 || (unsigned __int64)&v154 >= v32 + 96 * v34 )
          {
            if ( v34 < v37 )
            {
              v108 = v34;
              v90 = qvector_reserve(v33, 0, v36 + 1, 96);
              v91 = *(_QWORD *)(a1 + 224);
              v32 = v90;
              v92 = *(_QWORD *)(a1 + 232);
              v93 = *(const __m128i **)(a1 + 216);
              *(_QWORD *)(a1 + 232) = v108;
              v94 = v91 - 1;
              if ( v94 >= 0 )
              {
                do
                {
                  si128 = _mm_load_si128(v93);
                  v90 += 96;
                  v93 += 6;
                  *(__m128i *)(v90 - 96) = si128;
                  *(__m128i *)(v90 - 80) = _mm_load_si128(v93 - 5);
                  *(__m128i *)(v90 - 64) = _mm_load_si128(v93 - 4);
                  *(__m128i *)(v90 - 48) = _mm_load_si128(v93 - 3);
                  *(__m128i *)(v90 - 32) = _mm_load_si128(v93 - 2);
                  *(__m128i *)(v90 - 16) = _mm_load_si128(v93 - 1);
                  v96 = v94-- == 0;
                }
                while ( !v96 );
                v93 = *(const __m128i **)(a1 + 216);
              }
              v109 = v92;
              qfree(v93);
              *(_QWORD *)(a1 + 216) = v32;
              v36 = *(_QWORD *)(a1 + 224);
              *(_QWORD *)(a1 + 232) = v109;
            }
            v87 = (__m128i *)(v32 + 96 * v36);
            *v87 = _mm_load_si128(&v154);
            v87[1] = _mm_load_si128(&v155);
            v87[2] = _mm_load_si128(&v156);
            v87[3] = _mm_load_si128(&v157);
            v87[4] = _mm_load_si128(&v158);
            v13 = _mm_load_si128(&v159);
            v87[5] = v13;
          }
          else
          {
            v160 = _mm_load_si128(&v154);
            v161 = _mm_load_si128(&v155);
            v162 = _mm_load_si128(&v156);
            v163 = _mm_load_si128(&v157);
            v164 = _mm_load_si128(&v158);
            v165 = _mm_load_si128(&v159);
            if ( v34 < v37 )
            {
              v111 = v34;
              v101 = qvector_reserve(v33, 0, v36 + 1, 96);
              v102 = *(_QWORD *)(a1 + 224);
              v32 = v101;
              v103 = *(_QWORD *)(a1 + 232);
              v104 = *(const __m128i **)(a1 + 216);
              *(_QWORD *)(a1 + 232) = v111;
              v105 = v102 - 1;
              if ( v105 >= 0 )
              {
                do
                {
                  v106 = _mm_load_si128(v104);
                  v101 += 96;
                  v104 += 6;
                  *(__m128i *)(v101 - 96) = v106;
                  *(__m128i *)(v101 - 80) = _mm_load_si128(v104 - 5);
                  *(__m128i *)(v101 - 64) = _mm_load_si128(v104 - 4);
                  *(__m128i *)(v101 - 48) = _mm_load_si128(v104 - 3);
                  *(__m128i *)(v101 - 32) = _mm_load_si128(v104 - 2);
                  *(__m128i *)(v101 - 16) = _mm_load_si128(v104 - 1);
                  v96 = v105-- == 0;
                }
                while ( !v96 );
                v104 = *(const __m128i **)(a1 + 216);
              }
              v112 = v103;
              qfree(v104);
              *(_QWORD *)(a1 + 216) = v32;
              v36 = *(_QWORD *)(a1 + 224);
              *(_QWORD *)(a1 + 232) = v112;
            }
            v38 = (__m128i *)(v32 + 96 * v36);
            *v38 = _mm_load_si128(&v160);
            v38[1] = _mm_load_si128(&v161);
            v38[2] = _mm_load_si128(&v162);
            v38[3] = _mm_load_si128(&v163);
            v38[4] = _mm_load_si128(&v164);
            v13 = _mm_load_si128(&v165);
            v38[5] = v13;
          }
          ++*(_QWORD *)(a1 + 224);
          sub_3BA0(v10, 1u, (__int64)"import global");
          goto LABEL_27;
        case 4LL:
          goto LABEL_27;
        default:
          sub_3890((__int64)"import section: unexpected kind %u for import %u", (unsigned __int8)v31, v7);
      }
      do
      {
        while ( 1 )
        {
          v68 = *(_QWORD *)(v67 + 16);
          v69 = *(_QWORD *)(v67 + 24);
          if ( *(_DWORD *)(v67 + 32) < v65 )
            break;
          v64 = v67;
          v67 = *(_QWORD *)(v67 + 16);
          if ( !v68 )
            goto LABEL_76;
        }
        v67 = *(_QWORD *)(v67 + 24);
      }
      while ( v69 );
LABEL_76:
      if ( v117 == v64 || v65 < *(_DWORD *)(v64 + 32) )
      {
LABEL_111:
        v140 = &v160;
        v64 = sub_8EC0((_QWORD *)(a1 + 120), v64, (__int64)&unk_10F59, (unsigned int **)&v140);
        v70 = v64 + 40;
        if ( (void **)(v64 + 40) == &src )
        {
          v66 = *(_QWORD *)(a1 + 136);
          if ( !v66 )
            goto LABEL_113;
          goto LABEL_83;
        }
      }
      else
      {
        v70 = v64 + 40;
        if ( (void **)(v64 + 40) == &src )
          goto LABEL_83;
      }
      v71 = v147;
      if ( (_QWORD)v147 && (v72 = v147 - 1, (_QWORD)v147 != 1) )
      {
        v99 = src;
        v100 = *(void **)(v64 + 40);
        if ( *(_QWORD *)(v64 + 56) < (unsigned __int64)v147 )
        {
          v127 = src;
          v116 = v147 - 1;
          v113 = v64;
          v100 = (void *)qvector_reserve(v70, *(_QWORD *)(v64 + 40), v147, 1);
          v64 = v113;
          v99 = v127;
          v72 = v116;
          *(_QWORD *)(v113 + 40) = v100;
        }
        *(_QWORD *)(v64 + 48) = v71;
        v110 = v64;
        memmove(v100, v99, v72);
        *(_BYTE *)(*(_QWORD *)(v110 + 40) + v71 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v64 + 48) = 0;
      }
      v66 = *(_QWORD *)(a1 + 136);
      if ( !v66 )
        goto LABEL_113;
LABEL_83:
      v73 = a1 + 128;
      do
      {
        while ( 1 )
        {
          v74 = *(_QWORD *)(v66 + 16);
          v75 = *(_QWORD *)(v66 + 24);
          if ( *(_DWORD *)(v66 + 32) < v160.m128i_i32[0] )
            break;
          v73 = v66;
          v66 = *(_QWORD *)(v66 + 16);
          if ( !v74 )
            goto LABEL_87;
        }
        v66 = *(_QWORD *)(v66 + 24);
      }
      while ( v75 );
LABEL_87:
      if ( v73 == v117 )
      {
LABEL_113:
        v73 = a1 + 128;
LABEL_89:
        v154.m128i_i64[0] = (__int64)&v160;
        v73 = sub_8EC0((_QWORD *)(a1 + 120), v73, (__int64)&unk_10F59, (unsigned int **)&v154);
        goto LABEL_90;
      }
      if ( v160.m128i_i32[0] < *(_DWORD *)(v73 + 32) )
        goto LABEL_89;
LABEL_90:
      v76 = &v149;
      v107 = v73 + 40;
      v77 = v150;
      if ( v150 )
      {
        do
        {
          while ( 1 )
          {
            v78 = *((_QWORD *)v77 + 2);
            v79 = *((_QWORD *)v77 + 3);
            if ( *((_QWORD *)v77 + 4) < v10 )
              break;
            v76 = v77;
            v77 = *((int **)v77 + 2);
            if ( !v78 )
              goto LABEL_95;
          }
          v77 = *((int **)v77 + 3);
        }
        while ( v79 );
LABEL_95:
        if ( v76 != &v149 && v10 >= *((_QWORD *)v76 + 4) )
          goto LABEL_108;
      }
      v80 = (_QWORD *)operator new(0x30u);
      v80[4] = v10;
      v83 = v80;
      v80[5] = 0;
      if ( v76 == &v149 )
      {
        if ( !v153 )
          goto LABEL_126;
        v81 = (unsigned __int64)v152;
        v76 = nullptr;
        if ( *((_QWORD *)v152 + 4) >= v10 )
          goto LABEL_126;
      }
      else
      {
        v84 = *((_QWORD *)v76 + 4);
        if ( v10 >= v84 )
        {
          if ( v84 >= v10 )
            goto LABEL_118;
          if ( v152 == v76 )
          {
            v81 = (unsigned __int64)v76;
            if ( v76 )
              goto LABEL_139;
            goto LABEL_118;
          }
          v131 = v80;
          v98 = std::_Rb_tree_increment(v76);
          v83 = v131;
          v81 = v98;
          if ( v10 >= *(_QWORD *)(v98 + 32) )
            goto LABEL_126;
          if ( !*((_QWORD *)v76 + 3) )
          {
            v81 = (unsigned __int64)v76;
            if ( v76 )
              goto LABEL_140;
            goto LABEL_118;
          }
          v76 = (int *)v98;
        }
        else
        {
          v81 = (unsigned __int64)v76;
          if ( v151 == v76 )
            goto LABEL_103;
          v122 = v80;
          v85 = std::_Rb_tree_decrement(v76, v84, v76, v148, v82);
          v83 = v122;
          v81 = v85;
          if ( *(_QWORD *)(v85 + 32) >= v10 )
          {
LABEL_126:
            v115 = v83;
            v97 = (int *)sub_3280((__int64)v148, v10, v81, (__int64)v148, v82);
            v83 = v115;
            v76 = v97;
            goto LABEL_103;
          }
          if ( *(_QWORD *)(v85 + 24) )
            v81 = (unsigned __int64)v76;
          else
            v76 = nullptr;
        }
      }
LABEL_103:
      if ( v81 )
      {
        if ( v76 || (int *)v81 == &v149 )
        {
          v86 = 1;
        }
        else
        {
LABEL_139:
          v84 = *(_QWORD *)(v81 + 32);
LABEL_140:
          v86 = v10 < v84;
        }
        v114 = (int *)v83;
        std::_Rb_tree_insert_and_rebalance(v86, v83, v81, &v149);
        v76 = v114;
        ++v153;
        goto LABEL_108;
      }
LABEL_118:
      if ( v83 )
        operator delete(v83, 0x30u);
LABEL_108:
      *((_QWORD *)v76 + 5) = v107;
LABEL_27:
      set_import_ordinal(*(_QWORD *)(a1 + 112), v10, v7, *(double *)v13.m128i_i64);
      if ( src )
      {
        *(_QWORD *)&v147 = 0;
        qfree(src);
      }
      if ( v14 )
        qfree(v14);
      if ( v141 )
      {
        *(_QWORD *)&v142 = 0;
        qfree(v141);
      }
      ++v7;
    }
    while ( (unsigned int)v7 < *(_DWORD *)(a1 + 52) );
  }
  v39 = *(unsigned int *)(a1 + 76);
  if ( (_DWORD)v39 )
  {
    if ( (unsigned __int8)add_segm(0, v139, v39 + v139, "extern", "XTRN", 0) )
    {
      for ( i = (__int64)v151; (int *)i != &v149; i = std::_Rb_tree_increment(i) )
      {
        v41 = *(_QWORD *)(i + 40);
        v42 = &unk_10F58;
        if ( *(_QWORD *)(v41 + 8) )
          v42 = *(void **)v41;
        if ( !(unsigned __int8)set_name(*(_QWORD *)(i + 32), v42, 2049) )
        {
          v43 = *(_QWORD *)(i + 40);
          v44 = (const char *)&unk_10F58;
          if ( *(_QWORD *)(v43 + 8) )
            v44 = *(const char **)v43;
          sub_3A10((__int64)"failed to name export %s @0x%llx\n", v44, *(_QWORD *)(i + 32));
        }
      }
    }
  }
  if ( (unsigned __int8)netnode_exist(a1 + 112) )
    import_module("", 0, *(_QWORD *)(a1 + 112), 0, "wasm");
  sub_3400(v150);
  return 1;
}
