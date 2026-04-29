__int64 __fastcall sub_59180(__int64 a1, _QWORD *a2, int a3, char a4)
{
  __int64 v6; // rbx
  int v7; // eax
  bool v8; // zf
  unsigned int v9; // r13d
  unsigned int v10; // r14d
  __int64 v11; // rdi
  int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rax
  unsigned int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdi
  unsigned __int16 v25; // r15
  __m128i *v26; // rax
  __int64 *v27; // r14
  __int64 v28; // rdi
  __m128i v29; // xmm1
  __int64 v30; // rax
  void (*v31)(); // rax
  unsigned __int64 v32; // r15
  char v33; // r15
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  int v38; // edx
  unsigned __int16 v39; // r15
  __int64 *v40; // rax
  __int64 v41; // rdi
  __m128i v42; // xmm1
  __int64 v43; // rax
  void (*v44)(); // rax
  unsigned __int64 v45; // r15
  int v46; // ecx
  unsigned int v47; // edx
  unsigned __int16 v48; // r15
  __m128i *v49; // rax
  __int64 v50; // rdi
  __m128i v51; // xmm0
  __int64 v52; // rax
  void (*v53)(); // rax
  unsigned __int64 v54; // r15
  unsigned __int16 v55; // r15
  __m128i *v56; // rax
  __int64 v57; // rdi
  __m128i v58; // xmm0
  __int64 v59; // rax
  void (*v60)(); // rax
  unsigned __int64 v61; // r15
  __int64 v62; // rax
  unsigned __int16 v63; // r15
  __m128i *v64; // rax
  __int64 v65; // rdi
  __m128i si128; // xmm0
  __int64 v67; // rax
  void (*v68)(); // rax
  unsigned __int64 v69; // r15
  __int64 v70; // rax
  __int64 v71; // r15
  __int64 v72; // rdx
  __int64 v73; // rax
  void *v74; // rcx
  unsigned __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rbp
  const char *v78; // r13
  size_t v79; // rax
  size_t v80; // r14
  __int64 v81; // rax
  unsigned __int64 *v82; // r15
  char *v83; // r12
  __int64 *v84; // r13
  size_t v85; // r14
  _QWORD *v86; // rsi
  int v87; // r12d
  unsigned __int64 v88; // rax
  __int64 **v89; // rax
  size_t v90; // r8
  const void *v91; // r9
  void *v92; // rdi
  size_t v93; // r8
  const void *v94; // r9
  void *v95; // rdi
  size_t v96; // r8
  const void *v97; // r9
  void *v98; // rdi
  size_t v99; // r8
  const void *v100; // r9
  void *v101; // rdi
  size_t v102; // r8
  const void *v103; // r9
  void *v104; // rdi
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 *v107; // r15
  __int64 v108; // r14
  __int64 v109; // rbp
  __int64 v110; // rbx
  __int64 v111; // rdx
  __m128i v112; // xmm0
  __int64 v113; // rdi
  double v115; // xmm5_8
  __m128d v116; // xmm1
  __m128d v117; // xmm0
  __int64 v118; // rbp
  __int64 v119; // rax
  __m128d v120; // xmm0
  double v121; // xmm0_8
  __m128d v122; // xmm3
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // rdx
  std::__detail::_Prime_rehash_policy *v125; // rdi
  unsigned __int64 bkt; // rax
  unsigned __int64 v127; // rax
  __int64 **v128; // rax
  int v129; // eax
  int v130; // eax
  int v131; // eax
  unsigned int v132; // [rsp+0h] [rbp-158h]
  unsigned int v133; // [rsp+18h] [rbp-140h]
  __int64 v135; // [rsp+28h] [rbp-130h]
  __int64 v136; // [rsp+30h] [rbp-128h]
  const void *v137; // [rsp+30h] [rbp-128h]
  const void *v138; // [rsp+30h] [rbp-128h]
  const void *v139; // [rsp+30h] [rbp-128h]
  const void *v140; // [rsp+30h] [rbp-128h]
  const void *v141; // [rsp+30h] [rbp-128h]
  __int64 v142; // [rsp+38h] [rbp-120h]
  unsigned __int16 v143; // [rsp+44h] [rbp-114h] BYREF
  unsigned __int16 v144; // [rsp+46h] [rbp-112h]
  _BYTE v145[12]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v146; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v147; // [rsp+A8h] [rbp-B0h]
  void *dest; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v149; // [rsp+C8h] [rbp-90h]
  void *v150; // [rsp+E0h] [rbp-78h] BYREF
  unsigned __int64 v151; // [rsp+E8h] [rbp-70h]
  __int64 *v152; // [rsp+F0h] [rbp-68h]
  unsigned __int64 v153; // [rsp+F8h] [rbp-60h]
  int v154; // [rsp+100h] [rbp-58h]
  __int64 v155; // [rsp+108h] [rbp-50h]
  _QWORD v156[9]; // [rsp+110h] [rbp-48h] BYREF

  v6 = a1;
  v156[1] = __readfsqword(0x28u);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
  v146 = 0;
  v8 = *(_QWORD *)(a1 + 624) == 0;
  v151 = 1;
  v133 = a3 + v7;
  v150 = v156;
  v152 = nullptr;
  v153 = 0;
  v154 = 1065353216;
  v155 = 0;
  v156[0] = 0;
  v147 = 0;
  if ( v8 )
  {
    *(_DWORD *)(a1 + 624) = 4096;
    v9 = 4096;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 624) >= *(_DWORD *)(a1 + 628) )
    {
      if ( !under_debugger )
        interr(30581);
      BUG();
    }
    v37 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 24LL))(*a2);
    v9 = *(_DWORD *)(a1 + 624);
    v38 = *(_DWORD *)(a1 + 628) - v9;
    if ( (unsigned int)(v37 >> 2) >= v38 )
    {
      v116 = 0;
      v115 = *(float *)(a1 + 200);
      v116.m128d_f64[0] = (double)v38 / v115;
      if ( fabs(v116.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v117.m128d_f64[0] = (double)(int)v116.m128d_f64[0];
        *(_QWORD *)&v116.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                          v117.m128d_f64[0]
                                        + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v116, v117).m128d_f64[0] & 0x3FF0000000000000LL))
                                      | *(_QWORD *)&v116.m128d_f64[0] & 0x8000000000000000LL;
      }
      v118 = *(_QWORD *)(a1 + 208);
      v119 = *(_QWORD *)(a1 + 192) + 1LL;
      v120 = 0;
      if ( v119 < 0 )
        v121 = (double)(int)(v119 & 1 | ((unsigned __int64)v119 >> 1))
             + (double)(int)(v119 & 1 | ((unsigned __int64)v119 >> 1));
      else
        v121 = (double)(int)v119;
      v120.m128d_f64[0] = v121 / v115;
      if ( fabs(v120.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v122.m128d_f64[0] = (double)(int)v120.m128d_f64[0];
        *(_QWORD *)&v120.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                          v122.m128d_f64[0]
                                        + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v120, v122).m128d_f64[0] & 0x3FF0000000000000LL))
                                      | *(_QWORD *)&v120.m128d_f64[0] & 0x8000000000000000LL;
      }
      if ( v116.m128d_f64[0] >= 9.223372036854776e18 )
        v123 = (unsigned int)(int)(v116.m128d_f64[0] - 9.223372036854776e18) ^ 0x8000000000000000LL;
      else
        v123 = (unsigned int)(int)v116.m128d_f64[0];
      if ( v120.m128d_f64[0] >= 9.223372036854776e18 )
        v124 = (unsigned int)(int)(v120.m128d_f64[0] - 9.223372036854776e18) ^ 0x8000000000000000LL;
      else
        v124 = (unsigned int)(int)v120.m128d_f64[0];
      v125 = (std::__detail::_Prime_rehash_policy *)(a1 + 200);
      if ( v123 >= v124 )
        v124 = v123;
      bkt = std::__detail::_Prime_rehash_policy::_M_next_bkt(v125, v124);
      if ( bkt == *(_QWORD *)(v6 + 176) )
        *(_QWORD *)(v6 + 208) = v118;
      else
        sub_54940(v6 + 168, bkt);
      v9 = *(_DWORD *)(v6 + 624);
    }
    else
    {
      *(_DWORD *)(a1 + 628) = 0;
    }
  }
  while ( 1 )
  {
    if ( v133 <= (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2) )
    {
      if ( !*(_DWORD *)(v6 + 628) )
        *(_DWORD *)(v6 + 628) = v9;
      v77 = v146;
      if ( !(32LL * (_QWORD)v147) )
      {
LABEL_145:
        v18 = 1;
        goto LABEL_30;
      }
      while ( 1 )
      {
        if ( *(_QWORD *)(v77 + 8) )
        {
          v78 = *(const char **)v77;
          if ( !*(_QWORD *)v77 )
            goto LABEL_228;
          v79 = strlen(*(const char **)v77);
          v80 = v79;
          if ( v79 )
          {
            v81 = std::string::_Rep::_S_create(v79, 0, v145);
            v82 = (unsigned __int64 *)v81;
            v83 = (char *)(v81 + 24);
            if ( v80 == 1 )
            {
              *(_BYTE *)(v81 + 24) = *v78;
              if ( (unsigned __int64 *)v81 != std::string::_Rep::_S_empty_rep_storage )
                goto LABEL_155;
            }
            else
            {
              memcpy((void *)(v81 + 24), v78, v80);
              if ( v82 == std::string::_Rep::_S_empty_rep_storage )
                goto LABEL_129;
LABEL_155:
              *((_DWORD *)v82 + 4) = 0;
              *v82 = v80;
              *((_BYTE *)v82 + v80 + 24) = 0;
            }
LABEL_129:
            if ( v153 <= 0x14 )
            {
              v84 = v152;
              if ( !v152 )
                goto LABEL_139;
              goto LABEL_131;
            }
            v88 = std::_Hash_bytes(v83, *v82, 0xC70F6907);
            v89 = (__int64 **)sub_552B0((__int64)v150, v151, v88 % v151, v83, v88);
            if ( !v89 )
              goto LABEL_139;
            v84 = *v89;
            if ( v82 == std::string::_Rep::_S_empty_rep_storage )
              goto LABEL_152;
            if ( !&_pthread_key_create )
            {
              v129 = *((_DWORD *)v82 + 4);
              *((_DWORD *)v82 + 4) = v129 - 1;
LABEL_211:
              if ( v129 <= 0 )
                goto LABEL_182;
              goto LABEL_152;
            }
LABEL_210:
            v129 = _InterlockedExchangeAdd((volatile signed __int32 *)v83 - 2, 0xFFFFFFFF);
            goto LABEL_211;
          }
        }
        else if ( !src )
        {
LABEL_228:
          std::__throw_logic_error("basic_string::_S_construct null not valid");
        }
        if ( v153 <= 0x14 )
        {
          v84 = v152;
          if ( !v152 )
            goto LABEL_140;
          v82 = std::string::_Rep::_S_empty_rep_storage;
          v83 = (char *)&std::string::_Rep::_S_empty_rep_storage[3];
LABEL_131:
          v85 = *((_QWORD *)v83 - 3);
LABEL_133:
          while ( 1 )
          {
            v86 = (_QWORD *)v84[1];
            if ( v85 == *(v86 - 3) )
              break;
            v84 = (__int64 *)*v84;
            if ( !v84 )
              goto LABEL_139;
          }
          if ( v85 )
          {
            while ( memcmp(v83, v86, v85) )
            {
              v84 = (__int64 *)*v84;
              if ( !v84 )
                goto LABEL_139;
              v86 = (_QWORD *)v84[1];
              if ( v85 != *(v86 - 3) )
              {
                v84 = (__int64 *)*v84;
                if ( v84 )
                  goto LABEL_133;
                goto LABEL_139;
              }
            }
          }
          if ( v82 == std::string::_Rep::_S_empty_rep_storage )
            goto LABEL_143;
          if ( !&_pthread_key_create )
          {
            v131 = *((_DWORD *)v83 - 2);
            *((_DWORD *)v83 - 2) = v131 - 1;
            if ( v131 > 0 )
              goto LABEL_143;
            goto LABEL_182;
          }
          goto LABEL_210;
        }
        v83 = (char *)&std::string::_Rep::_S_empty_rep_storage[3];
        v82 = std::string::_Rep::_S_empty_rep_storage;
        v127 = std::_Hash_bytes(
                 &std::string::_Rep::_S_empty_rep_storage[3],
                 std::string::_Rep::_S_empty_rep_storage[0],
                 0xC70F6907);
        v128 = (__int64 **)sub_552B0(
                             (__int64)v150,
                             v151,
                             v127 % v151,
                             &std::string::_Rep::_S_empty_rep_storage[3],
                             v127);
        if ( !v128 )
        {
LABEL_139:
          if ( v82 == std::string::_Rep::_S_empty_rep_storage )
            goto LABEL_140;
          if ( !&_pthread_key_create )
          {
            v130 = *((_DWORD *)v83 - 2);
            *((_DWORD *)v83 - 2) = v130 - 1;
            if ( v130 <= 0 )
              std::string::_Rep::_M_destroy(v82, &dest);
LABEL_140:
            if ( (*(_DWORD *)debug & 0x400000) != 0 )
              sub_29350();
            goto LABEL_144;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v83 - 2, 0xFFFFFFFF) > 0 )
            goto LABEL_140;
          v84 = nullptr;
LABEL_182:
          std::string::_Rep::_M_destroy(v82, &dest);
          goto LABEL_152;
        }
        v84 = *v128;
LABEL_152:
        if ( !v84 )
          goto LABEL_140;
LABEL_143:
        v87 = *((_DWORD *)v84 + 4);
        *(_DWORD *)sub_57D00((char **)(v6 + 280), (_DWORD *)(v77 + 24)) = v87;
LABEL_144:
        v77 += 32;
        if ( v77 == v146 + 32LL * (_QWORD)v147 )
          goto LABEL_145;
      }
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned __int16 *, __int64))(*(_QWORD *)*a2 + 48LL))(
            *a2,
            &v143,
            4)
      || v143 <= 1u )
    {
      goto LABEL_50;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2) - 2;
    dest = (void *)__PAIR64__(v10, v9);
    LODWORD(v149) = -1;
    WORD2(v149) = v143;
    sub_54D40((__int64 *)(v6 + 168), (int *)&dest);
    v11 = *a2;
    dest = nullptr;
    v12 = v9 + 1;
    v149 = 0;
    v132 = v10 + v143;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 40LL))(v11, v10) )
      goto LABEL_12;
    v13 = v144;
    if ( v144 <= 0x1519u )
      break;
    if ( v144 == 5642 )
    {
      v63 = v143;
      v64 = (__m128i *)operator new(0x70u);
      v64[1].m128i_i32[0] = v9;
      v27 = (__int64 *)v64;
      v65 = *a2;
      v64[2] = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_94160);
      v64->m128i_i64[1] = 0;
      v64[1].m128i_i32[1] = 11;
      v64[1].m128i_i64[1] = 0;
      v64[5].m128i_i32[0] = -1;
      v64[3].m128i_i64[0] = 0xFFFFFFFF00000001LL;
      v64[3].m128i_i64[1] = 0xFFFFFFFFLL;
      v64[5].m128i_i16[2] = -1;
      v64[6].m128i_i64[1] = 0;
      v64->m128i_i64[0] = (__int64)off_B0CF8;
      v64[4] = si128;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v65 + 48LL))(
              v65,
              (__int64)v64[5].m128i_i64 + 6,
              12) )
        goto LABEL_10;
      *((_WORD *)v27 + 42) = *((_WORD *)v27 + 43);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, _QWORD))(*v27 + 320))(v27, a2, v63) )
        goto LABEL_10;
      v67 = *v27;
      v27[1] = v6;
      v68 = *(void (**)())(v67 + 312);
      if ( v68 != nullsub_15 )
        ((void (__fastcall *)(__int64 *))v68)(v27);
      if ( !v27 )
        goto LABEL_12;
      v69 = v27[4];
      if ( !v69 || (v99 = v69 - 1, v69 == 1) )
      {
        *(_QWORD *)&v149 = 0;
      }
      else
      {
        v100 = (const void *)v27[3];
        v101 = dest;
        if ( *((_QWORD *)&v149 + 1) < v69 )
        {
          v137 = (const void *)v27[3];
          dest = (void *)qvector_reserve(&dest, dest, v27[4], 1);
          v100 = v137;
          v101 = dest;
          v99 = v69 - 1;
        }
        *(_QWORD *)&v149 = v69;
        memmove(v101, v100, v99);
        *((char *)dest + v69 - 1) = 0;
      }
      v33 = *((_BYTE *)v27 + 88) >> 7;
      v34 = *(_QWORD *)(v6 + 344);
      v35 = *(_QWORD *)(v6 + 336);
      v36 = v34 + 1;
      if ( *(_QWORD *)(v6 + 352) >= (unsigned __int64)(v34 + 1) )
        goto LABEL_112;
    }
    else
    {
      if ( v144 <= 0x160Au )
      {
        if ( (unsigned __int16)(v144 - 5640) > 1u )
          goto LABEL_12;
      }
      else if ( v144 != 5643 )
      {
        goto LABEL_12;
      }
      v25 = v143;
      v26 = (__m128i *)operator new(0x90u);
      v26[1].m128i_i32[0] = v9;
      v27 = (__int64 *)v26;
      v28 = *a2;
      v26[1].m128i_i32[1] = 11;
      v29 = _mm_load_si128((const __m128i *)&xmmword_94160);
      v26->m128i_i64[1] = 0;
      v26[1].m128i_i64[1] = 0;
      v26[2] = 0;
      v26[5].m128i_i32[0] = -1;
      v26[3].m128i_i64[0] = 0xFFFFFFFF00000001LL;
      v26[3].m128i_i64[1] = 0xFFFFFFFFLL;
      v26[5].m128i_i16[2] = -1;
      v26[7].m128i_i64[0] = 0;
      v26->m128i_i64[0] = (__int64)off_B0A48;
      v26[7].m128i_i64[1] = 0;
      v26[4] = v29;
      v26[8] = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v28 + 48LL))(
              v28,
              (__int64)v26[5].m128i_i64 + 6,
              20)
        || (*((_WORD *)v27 + 42) = *((_WORD *)v27 + 43),
            !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, _QWORD))(*v27 + 320))(v27, a2, v25)) )
      {
LABEL_10:
        if ( v27 )
          (*(void (__fastcall **)(__int64 *))(*v27 + 272))(v27);
        goto LABEL_12;
      }
      v30 = *v27;
      v27[1] = v6;
      v31 = *(void (**)())(v30 + 312);
      if ( v31 != nullsub_15 )
        ((void (__fastcall *)(__int64 *))v31)(v27);
      if ( !v27 )
        goto LABEL_12;
      v32 = v27[4];
      if ( !v32 || (v93 = v32 - 1, v32 == 1) )
      {
        *(_QWORD *)&v149 = 0;
      }
      else
      {
        v94 = (const void *)v27[3];
        v95 = dest;
        if ( *((_QWORD *)&v149 + 1) < v32 )
        {
          v140 = (const void *)v27[3];
          dest = (void *)qvector_reserve(&dest, dest, v27[4], 1);
          v94 = v140;
          v95 = dest;
          v93 = v32 - 1;
        }
        *(_QWORD *)&v149 = v32;
        memmove(v95, v94, v93);
        *((char *)dest + v32 - 1) = 0;
      }
      v33 = *((_BYTE *)v27 + 88) >> 7;
      v34 = *(_QWORD *)(v6 + 344);
      v35 = *(_QWORD *)(v6 + 336);
      v36 = v34 + 1;
      if ( *(_QWORD *)(v6 + 352) >= (unsigned __int64)(v34 + 1) )
        goto LABEL_112;
    }
LABEL_98:
    v62 = qvector_reserve(v6 + 336, v35, v36, 4);
    *(_QWORD *)(v6 + 336) = v62;
    v35 = v62;
    v34 = *(_QWORD *)(v6 + 344);
LABEL_112:
    *(_DWORD *)(v35 + 4 * v34) = v9;
    ++*(_QWORD *)(v6 + 344);
    (*(void (__fastcall **)(__int64 *))(*v27 + 272))(v27);
    if ( (unsigned __int64)v149 <= 1 )
      goto LABEL_14;
    if ( !v33 )
    {
LABEL_13:
      *(_DWORD *)&v145[8] = v9;
      *(_QWORD *)v145 = dest;
      sub_58EE0((__int64 *)&v150, (__int64)v145);
      goto LABEL_14;
    }
    v71 = *((_QWORD *)&v147 + 1);
    v70 = v147;
    if ( *((_QWORD *)&v147 + 1) < (unsigned __int64)(v147 + 1) )
    {
      v105 = qvector_reserve(&v146, 0, v147 + 1, 32);
      v106 = *((_QWORD *)&v147 + 1);
      *((_QWORD *)&v147 + 1) = v71;
      v107 = (__int64 *)v146;
      v135 = v106;
      if ( (__int64)v147 - 1 >= 0 )
      {
        v108 = v105;
        v109 = v105;
        v142 = v6;
        v110 = v147 - 1;
        do
        {
          v111 = *v107;
          v112 = _mm_loadu_si128((const __m128i *)(v107 + 1));
          *v107 = 0;
          v107[2] = 0;
          *(_QWORD *)v109 = v111;
          *(__m128i *)(v109 + 8) = v112;
          *(_DWORD *)(v109 + 24) = *((_DWORD *)v107 + 6);
          v113 = *v107;
          if ( *v107 )
          {
            v107[1] = 0;
            qfree(v113);
          }
          v107 += 4;
          v109 += 32;
        }
        while ( v110-- != 0 );
        v12 = v9 + 1;
        v6 = v142;
        v105 = v108;
        v107 = (__int64 *)v146;
      }
      v136 = v105;
      qfree(v107);
      v72 = v136;
      *((_QWORD *)&v147 + 1) = v135;
      v70 = v147;
      v146 = v136;
    }
    else
    {
      v72 = v146;
    }
    v73 = v72 + 32 * v70;
    *(_OWORD *)(v73 + 8) = 0;
    *(_QWORD *)v73 = 0;
    *(_DWORD *)(v73 + 24) = v9;
    *(_QWORD *)&v147 = v147 + 1;
    v74 = *(void **)v73;
    *(_QWORD *)v73 = dest;
    v75 = *(_QWORD *)(v73 + 8);
    *(_OWORD *)(v73 + 8) = v149;
    dest = v74;
    v149 = v75;
LABEL_14:
    v9 = v12;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 40LL))(*a2, v132)
      || a4
      && (v16 = *a2, v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2), v17 % 4)
      && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 40LL))(
            v16,
            v17 + 4 - (unsigned int)(v17 % 4)) )
    {
LABEL_27:
      if ( dest )
      {
        *(_QWORD *)&v149 = 0;
        qfree(dest);
      }
      goto LABEL_29;
    }
    if ( __ROR4__(1757569337 * v12, 5) <= 0x218Du )
    {
      if ( (unsigned __int8)callui(27) )
        goto LABEL_27;
      sub_55340(v6);
    }
    if ( dest )
    {
      *(_QWORD *)&v149 = 0;
      qfree(dest);
    }
  }
  if ( v144 > 0x1503u )
  {
    LOWORD(v13) = v144 - 5380;
    switch ( v13 )
    {
      case 0LL:
      case 1LL:
      case 21LL:
        v39 = v143;
        v40 = (__int64 *)operator new(0x88u);
        *((_DWORD *)v40 + 4) = v9;
        v27 = v40;
        v41 = *a2;
        *((_DWORD *)v40 + 5) = 11;
        v42 = _mm_load_si128((const __m128i *)&xmmword_94160);
        v40[1] = 0;
        v40[3] = 0;
        *((_OWORD *)v40 + 2) = 0;
        *((_DWORD *)v40 + 20) = -1;
        v40[6] = 0xFFFFFFFF00000001LL;
        v40[7] = 0xFFFFFFFFLL;
        *((_WORD *)v40 + 42) = -1;
        v40[13] = 0;
        *v40 = (__int64)off_B08F0;
        v40[14] = 0;
        *((__m128i *)v40 + 4) = v42;
        *(_OWORD *)(v40 + 15) = 0;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v41 + 48LL))(
                v41,
                (__int64)v40 + 86,
                18) )
          goto LABEL_10;
        *((_WORD *)v27 + 42) = *((_WORD *)v27 + 43);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, _QWORD))(*v27 + 320))(v27, a2, v39) )
          goto LABEL_10;
        v43 = *v27;
        v27[1] = v6;
        v44 = *(void (**)())(v43 + 312);
        if ( v44 != nullsub_15 )
          ((void (__fastcall *)(__int64 *))v44)(v27);
        if ( !v27 )
          goto LABEL_12;
        v45 = v27[4];
        if ( !v45 || (v90 = v45 - 1, v45 == 1) )
        {
          *(_QWORD *)&v149 = 0;
        }
        else
        {
          v91 = (const void *)v27[3];
          v92 = dest;
          if ( *((_QWORD *)&v149 + 1) < v45 )
          {
            v141 = (const void *)v27[3];
            dest = (void *)qvector_reserve(&dest, dest, v27[4], 1);
            v91 = v141;
            v92 = dest;
            v90 = v45 - 1;
          }
          *(_QWORD *)&v149 = v45;
          memmove(v92, v91, v90);
          *((char *)dest + v45 - 1) = 0;
        }
        v33 = *((_BYTE *)v27 + 90) >> 7;
        v34 = *(_QWORD *)(v6 + 344);
        v35 = *(_QWORD *)(v6 + 336);
        v36 = v34 + 1;
        if ( *(_QWORD *)(v6 + 352) < (unsigned __int64)(v34 + 1) )
          goto LABEL_98;
        goto LABEL_112;
      case 2LL:
        v48 = v143;
        v49 = (__m128i *)operator new(0x68u);
        v49[1].m128i_i32[0] = v9;
        v27 = (__int64 *)v49;
        v50 = *a2;
        v49[2] = 0;
        v51 = _mm_load_si128((const __m128i *)&xmmword_94160);
        v49->m128i_i64[1] = 0;
        v49[1].m128i_i32[1] = 11;
        v49[1].m128i_i64[1] = 0;
        v49[5].m128i_i32[0] = -1;
        v49[3].m128i_i64[0] = 0xFFFFFFFF00000001LL;
        v49[3].m128i_i64[1] = 0xFFFFFFFFLL;
        v49[5].m128i_i16[2] = -1;
        v49[6].m128i_i64[0] = 0;
        v49->m128i_i64[0] = (__int64)off_B0BA0;
        v49[4] = v51;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v50 + 48LL))(
                v50,
                (__int64)v49[5].m128i_i64 + 6,
                10) )
          goto LABEL_10;
        *((_WORD *)v27 + 42) = *((_WORD *)v27 + 43);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, _QWORD))(*v27 + 320))(v27, a2, v48) )
          goto LABEL_10;
        v52 = *v27;
        v27[1] = v6;
        v53 = *(void (**)())(v52 + 312);
        if ( v53 != nullsub_15 )
          ((void (__fastcall *)(__int64 *))v53)(v27);
        if ( !v27 )
          goto LABEL_12;
        v54 = v27[4];
        if ( !v54 || (v96 = v54 - 1, v54 == 1) )
        {
          *(_QWORD *)&v149 = 0;
        }
        else
        {
          v97 = (const void *)v27[3];
          v98 = dest;
          if ( *((_QWORD *)&v149 + 1) < v54 )
          {
            v138 = (const void *)v27[3];
            dest = (void *)qvector_reserve(&dest, dest, v27[4], 1);
            v97 = v138;
            v98 = dest;
            v96 = v54 - 1;
          }
          *(_QWORD *)&v149 = v54;
          memmove(v98, v97, v96);
          *((char *)dest + v54 - 1) = 0;
        }
        v33 = *((_BYTE *)v27 + 90) >> 7;
        v34 = *(_QWORD *)(v6 + 344);
        v35 = *(_QWORD *)(v6 + 336);
        v36 = v34 + 1;
        if ( *(_QWORD *)(v6 + 352) < (unsigned __int64)(v34 + 1) )
          goto LABEL_98;
        goto LABEL_112;
      case 3LL:
        v55 = v143;
        v56 = (__m128i *)operator new(0x68u);
        v56[1].m128i_i32[0] = v9;
        v27 = (__int64 *)v56;
        v57 = *a2;
        v56[2] = 0;
        v58 = _mm_load_si128((const __m128i *)&xmmword_94160);
        v56->m128i_i64[1] = 0;
        v56[1].m128i_i32[1] = 12;
        v56[1].m128i_i64[1] = 0;
        v56[5].m128i_i32[0] = -1;
        v56[3].m128i_i64[0] = 0xFFFFFFFF00000001LL;
        v56[3].m128i_i64[1] = 0xFFFFFFFFLL;
        v56[5].m128i_i16[2] = -1;
        v56[4] = v58;
        v56->m128i_i64[0] = (__int64)off_B1D18;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v57 + 48LL))(
                v57,
                (__int64)v56[5].m128i_i64 + 6,
                14) )
          goto LABEL_10;
        *((_WORD *)v27 + 42) = *((_WORD *)v27 + 43);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, _QWORD))(*v27 + 320))(v27, a2, v55) )
          goto LABEL_10;
        v59 = *v27;
        v27[1] = v6;
        v60 = *(void (**)())(v59 + 312);
        if ( v60 != nullsub_15 )
          ((void (__fastcall *)(__int64 *))v60)(v27);
        if ( !v27 )
          goto LABEL_12;
        v61 = v27[4];
        if ( !v61 || (v102 = v61 - 1, v61 == 1) )
        {
          *(_QWORD *)&v149 = 0;
        }
        else
        {
          v103 = (const void *)v27[3];
          v104 = dest;
          if ( *((_QWORD *)&v149 + 1) < v61 )
          {
            v139 = (const void *)v27[3];
            dest = (void *)qvector_reserve(&dest, dest, v27[4], 1);
            v103 = v139;
            v104 = dest;
            v102 = v61 - 1;
          }
          *(_QWORD *)&v149 = v61;
          memmove(v104, v103, v102);
          *((char *)dest + v61 - 1) = 0;
        }
        v33 = *((_BYTE *)v27 + 90) >> 7;
        v34 = *(_QWORD *)(v6 + 344);
        v35 = *(_QWORD *)(v6 + 336);
        v36 = v34 + 1;
        if ( *(_QWORD *)(v6 + 352) < (unsigned __int64)(v34 + 1) )
          goto LABEL_98;
        goto LABEL_112;
      case 5LL:
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _BYTE *, __int64))(*(_QWORD *)*a2 + 48LL))(*a2, v145, 14) )
        {
          if ( *(_DWORD *)&v145[2] < v9 )
            goto LABEL_102;
          v12 = *(_DWORD *)&v145[6] + *(_DWORD *)&v145[2];
          if ( __CFADD__(*(_DWORD *)&v145[6], *(_DWORD *)&v145[2]) )
            goto LABEL_102;
        }
        else
        {
          if ( v9 )
            goto LABEL_102;
          v12 = 0;
        }
        break;
      case 6LL:
        goto LABEL_21;
      default:
        goto LABEL_12;
    }
    goto LABEL_12;
  }
  if ( v144 == 4097 )
  {
LABEL_21:
    v14 = *(_QWORD *)(v6 + 344);
    v15 = *(_QWORD *)(v6 + 336);
    if ( *(_QWORD *)(v6 + 352) < (unsigned __int64)(v14 + 1) )
    {
      v76 = qvector_reserve(v6 + 336, v15, v14 + 1, 4);
      *(_QWORD *)(v6 + 336) = v76;
      v15 = v76;
      v14 = *(_QWORD *)(v6 + 344);
    }
    *(_DWORD *)(v15 + 4 * v14) = v9;
    ++*(_QWORD *)(v6 + 344);
    if ( (unsigned __int64)v149 > 1 )
      goto LABEL_13;
    goto LABEL_14;
  }
  if ( v144 > 0x1001u )
  {
    if ( v144 == 4608 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _BYTE *, __int64))(*(_QWORD *)*a2 + 48LL))(*a2, v145, 6)
        || (v12 = *(_DWORD *)&v145[2], v9 >= *(_DWORD *)&v145[2]) )
      {
LABEL_46:
        if ( (*(_DWORD *)debug & 0x400000) != 0 )
          goto LABEL_47;
        goto LABEL_48;
      }
    }
LABEL_12:
    if ( (unsigned __int64)v149 > 1 )
      goto LABEL_13;
    goto LABEL_14;
  }
  if ( v144 != 19 )
  {
    if ( v144 == 512 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _BYTE *, __int64))(*(_QWORD *)*a2 + 48LL))(*a2, v145, 4) )
        goto LABEL_46;
      v12 = *(unsigned __int16 *)&v145[2];
      if ( v9 >= *(unsigned __int16 *)&v145[2] )
        goto LABEL_46;
    }
    goto LABEL_12;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _BYTE *, __int64))(*(_QWORD *)*a2 + 48LL))(*a2, v145, 10) )
  {
    v47 = *(unsigned __int16 *)&v145[2];
    v46 = *(unsigned __int16 *)&v145[4];
  }
  else
  {
    v46 = 0;
    v47 = 0;
  }
  if ( v47 >= v9 )
  {
    v12 = v47 + v46;
    goto LABEL_12;
  }
LABEL_102:
  if ( (*(_DWORD *)debug & 0x400000) != 0 )
LABEL_47:
    sub_29350();
LABEL_48:
  if ( dest )
  {
    *(_QWORD *)&v149 = 0;
    qfree(dest);
  }
LABEL_50:
  sub_37FD0(*(__int64 **)(v6 + 600), (__int64)"Invalid TPI stream, typ=0x%04x\n", v9);
LABEL_29:
  v18 = 0;
LABEL_30:
  sub_57B40((__int64)&v150);
  if ( v150 != v156 )
    operator delete(v150, 8 * v151);
  v19 = v146;
  if ( v146 )
  {
    v20 = v147;
    if ( (_QWORD)v147 )
    {
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v19 + 32 * v21);
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          qfree(v23);
          v19 = v146;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v147 = 0;
    qfree(v19);
  }
  return v18;
}
