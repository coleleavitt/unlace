unsigned __int64 __fastcall sub_6803B0(__int64 a1)
{
  __int64 *v1; // rax
  __int64 func_qty; // r14
  __int64 v4; // rax
  const __m128i *v5; // rbx
  int v6; // ebp
  __int32 v7; // r12d
  int v8; // r12d
  unsigned int v9; // ebp
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // rdx
  const char *v14; // rsi
  __int64 v15; // rax
  char *v16; // rcx
  __m128i v17; // xmm0
  __int64 v18; // rdi
  char *v19; // r12
  __int64 v20; // r12
  __int64 v21; // rax
  __m128i si128; // xmm0
  __int64 v23; // rax
  __int64 v24; // rdx
  char *v25; // rsi
  __int64 v26; // r13
  char *v27; // rdi
  __m128i v28; // xmm0
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rax
  void *v32; // rdi
  char *v33; // rax
  char v34; // bl
  __int64 v35; // rax
  size_t v36; // rbp
  __int64 v37; // r12
  unsigned __int64 v38; // r8
  __int64 v39; // rsi
  __int64 v40; // rax
  int v41; // ebp
  __int64 v42; // rax
  __int64 v43; // rax
  size_t v44; // r9
  char *v45; // r8
  unsigned __int64 v46; // r10
  __int64 v47; // rsi
  __int64 v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rax
  size_t v51; // r9
  char *v52; // r8
  unsigned __int64 v53; // r10
  __int64 v54; // rsi
  __int64 v55; // rax
  char *v56; // r9
  char *v57; // rax
  __int64 v58; // rdx
  const char *v59; // rsi
  char v60; // al
  __int64 v61; // r8
  void *v62; // rax
  __m128 v63; // xmm0
  __m128i v64; // xmm1
  char *v65; // r9
  const void *v66; // r10
  unsigned __int64 v67; // r11
  __int64 v68; // rsi
  __int64 v69; // rax
  unsigned int v70; // r12d
  unsigned __int64 *v71; // rbp
  int v72; // r13d
  char v73; // bl
  __int64 v74; // rdx
  const char *v75; // rsi
  const char *v76; // rdx
  unsigned int v77; // ebp
  const char **v78; // r14
  char v79; // bl
  __int64 v80; // rdi
  char v81; // r13
  __int64 v82; // rdi
  __int64 v83; // rdi
  _QWORD *v84; // rax
  __int64 v85; // rbx
  int v86; // r12d
  unsigned __int8 v87; // bp
  _QWORD *v88; // r13
  __int64 v89; // rdx
  const char *v90; // rsi
  char *v91; // rdx
  __int64 *v92; // rbp
  unsigned __int64 v93; // r13
  int v94; // r12d
  unsigned __int8 v95; // bl
  _QWORD *v96; // r14
  __int64 v97; // rdx
  const char *v98; // rsi
  char *v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  char *v103; // r12
  __int64 v104; // rbp
  int v105; // r13d
  unsigned int v106; // ebx
  __int64 v107; // rdx
  const char *v108; // rsi
  const char *v109; // rdx
  __int64 v110; // rdx
  const char *v111; // rsi
  __int64 v112; // r8
  __int64 v113; // r9
  const char *v114; // rdx
  __int64 i; // rbx
  __int64 v116; // rax
  __int64 v117; // rbp
  __int64 v118; // rdx
  const char *v119; // rsi
  const char *v120; // rsi
  size_t v121; // rax
  const void *v122; // r9
  void *v123; // r8
  void *v124; // rdi
  void *v125; // rdx
  __int64 *p_dest; // [rsp+8h] [rbp-1D0h]
  char *v127; // [rsp+10h] [rbp-1C8h]
  __int64 v128; // [rsp+18h] [rbp-1C0h]
  void *v129; // [rsp+20h] [rbp-1B8h]
  _BYTE *v130; // [rsp+28h] [rbp-1B0h]
  _BYTE *v131; // [rsp+30h] [rbp-1A8h]
  unsigned __int64 *v132; // [rsp+38h] [rbp-1A0h]
  __int64 *v133; // [rsp+40h] [rbp-198h]
  char v134; // [rsp+4Fh] [rbp-189h]
  __int64 v135; // [rsp+50h] [rbp-188h]
  size_t n; // [rsp+58h] [rbp-180h]
  char *v137; // [rsp+60h] [rbp-178h]
  size_t v138; // [rsp+68h] [rbp-170h]
  char *s[2]; // [rsp+70h] [rbp-168h] BYREF
  void *dest; // [rsp+80h] [rbp-158h] BYREF
  __m128i v141; // [rsp+88h] [rbp-150h] BYREF
  void *v142; // [rsp+A0h] [rbp-138h] BYREF
  __m128i v143; // [rsp+A8h] [rbp-130h] BYREF
  __m128i ptr[2]; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v145; // [rsp+E0h] [rbp-F8h]
  _BYTE v146[48]; // [rsp+F0h] [rbp-E8h] BYREF
  __m128i v147; // [rsp+120h] [rbp-B8h]
  __m128i v148; // [rsp+130h] [rbp-A8h]
  __m128i v149; // [rsp+140h] [rbp-98h]
  __m128i v150; // [rsp+150h] [rbp-88h]
  __m128i v151; // [rsp+160h] [rbp-78h]
  __m128i v152; // [rsp+170h] [rbp-68h]
  _BYTE src[5]; // [rsp+18Eh] [rbp-4Ah] BYREF
  _BYTE v154[5]; // [rsp+193h] [rbp-45h] BYREF
  unsigned __int64 v155; // [rsp+198h] [rbp-40h] BYREF

  v1 = *(__int64 **)(a1 + 1672);
  v155 = __readfsqword(0x28u);
  v133 = v1;
  v128 = *(_QWORD *)(a1 + 1872);
  func_qty = get_func_qty();
  if ( func_qty > 0 )
  {
    while ( 1 )
    {
      v4 = getn_func(--func_qty);
      v5 = (const __m128i *)v4;
      if ( !v4 )
        goto LABEL_3;
      v6 = *(_DWORD *)(v4 + 80);
      v7 = 0;
      if ( v6 > 0 )
        break;
LABEL_6:
      if ( v7 != v6 )
      {
        v5[5].m128i_i32[0] = v7;
        update_func(v5);
      }
      if ( (dword_2CCC3C8 & 0x800000) == 0 )
        goto LABEL_3;
      v8 = 2;
      v9 = 0;
      dest = nullptr;
      v142 = nullptr;
      p_dest = (__int64 *)&dest;
      v141 = 0;
      v143 = 0;
      while ( 1 )
      {
        if ( get_func_cmt(p_dest, v5, v9) > 0 )
        {
          v13 = v141.m128i_i64[0];
          v14 = haystack;
          if ( v141.m128i_i64[0] )
          {
            v14 = (const char *)dest;
            v13 = v141.m128i_i64[0] - 1;
          }
          if ( (unsigned __int8)sub_67FDF0((__int64 *)&v142, v14, v13, 1) )
          {
            if ( v143.m128i_i64[0] )
              set_func_cmt(v5, v142, v9);
            else
              set_func_cmt(v5, haystack, v9);
          }
        }
        v9 = 1;
        if ( v8 == 1 )
          break;
        v8 = 1;
      }
      v10 = netnode_altval(v5->m128i_i64[0], 2, 65);
      if ( v10 )
      {
        v135 = v10 - 1;
        memset(ptr, 0, 24);
        if ( netnode_qgetblob(v10 - 1, ptr, 1, 0, 1123) <= 0 )
          goto LABEL_45;
        v33 = (char *)ptr[0].m128i_i64[0];
        v34 = 0;
        memset(v146, 0, 24);
        *(__m128i *)s = _mm_unpacklo_epi64(
                          (__m128i)ptr[0].m128i_u64[0],
                          (__m128i)(unsigned __int64)(ptr[0].m128i_i64[0] + ptr[0].m128i_i64[1]));
        if ( ptr[0].m128i_i64[0] < (unsigned __int64)(ptr[0].m128i_i64[0] + ptr[0].m128i_i64[1]) )
        {
          v34 = *(_BYTE *)ptr[0].m128i_i64[0];
          v33 = (char *)(ptr[0].m128i_i64[0] + 1);
        }
        s[0] = v33;
        v127 = v146;
        *(_QWORD *)v146 = qvector_reserve(v146, 0, 1, 1);
        *(_BYTE *)(*(_QWORD *)v146 + (*(_QWORD *)&v146[8])++) = v34;
        LODWORD(v130) = unpack_dd(s);
        v131 = v154;
        v35 = pack_dd(src, v154, (unsigned int)v130) - (_QWORD)src;
        v36 = v35;
        if ( v35 )
        {
          v37 = *(_QWORD *)&v146[8];
          v38 = *(_QWORD *)&v146[8] + v35;
          if ( !__CFADD__(*(_QWORD *)&v146[8], v35) )
            goto LABEL_55;
          if ( *(_QWORD *)&v146[8] <= 0x7FFFFFFFFFFFFFFEuLL )
          {
            v38 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_55:
            v39 = *(_QWORD *)v146;
            v40 = *(_QWORD *)&v146[8];
            if ( *(_QWORD *)&v146[16] < v38 )
            {
              v129 = (void *)v38;
              *(_QWORD *)v146 = qvector_reserve(v127, *(_QWORD *)v146, v38, 1);
              v39 = *(_QWORD *)v146;
              v38 = (unsigned __int64)v129;
              v40 = *(_QWORD *)&v146[8];
            }
            v129 = (void *)v38;
            memset((void *)(v39 + v40), 0, v38 - v40);
            *(_QWORD *)&v146[8] = v129;
          }
          else if ( *(_QWORD *)&v146[8] != 0x7FFFFFFFFFFFFFFFLL )
          {
            *(_QWORD *)&v146[8] = 0x7FFFFFFFFFFFFFFFLL;
          }
          memcpy((void *)(v37 + *(_QWORD *)v146), src, v36);
        }
        if ( !(_DWORD)v130 )
          goto LABEL_89;
        v134 = 0;
        v41 = 0;
        v132 = &v155;
        while ( 2 )
        {
          v42 = unpack_dq(s);
          v43 = pack_dq(src, v132, v42) - (_QWORD)src;
          v44 = v43;
          if ( v43 )
          {
            v45 = *(char **)&v146[8];
            v46 = *(_QWORD *)&v146[8] + v43;
            if ( !__CFADD__(*(_QWORD *)&v146[8], v43) )
              goto LABEL_63;
            if ( *(_QWORD *)&v146[8] <= 0x7FFFFFFFFFFFFFFEuLL )
            {
              v46 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_63:
              v47 = *(_QWORD *)v146;
              v48 = *(_QWORD *)&v146[8];
              if ( *(_QWORD *)&v146[16] < v46 )
              {
                v137 = *(char **)&v146[8];
                n = v44;
                v129 = (void *)v46;
                *(_QWORD *)v146 = qvector_reserve(v127, *(_QWORD *)v146, v46, 1);
                v47 = *(_QWORD *)v146;
                v45 = v137;
                v48 = *(_QWORD *)&v146[8];
                v44 = n;
                v46 = (unsigned __int64)v129;
              }
              v137 = v45;
              n = v44;
              v129 = (void *)v46;
              memset((void *)(v47 + v48), 0, v46 - v48);
              v44 = n;
              v45 = v137;
              *(_QWORD *)&v146[8] = v129;
            }
            else if ( *(_QWORD *)&v146[8] != 0x7FFFFFFFFFFFFFFFLL )
            {
              *(_QWORD *)&v146[8] = 0x7FFFFFFFFFFFFFFFLL;
            }
            memcpy(&v45[*(_QWORD *)v146], src, v44);
          }
          v49 = unpack_dd(s);
          v50 = pack_dd(src, v131, v49) - (_QWORD)src;
          v51 = v50;
          if ( v50 )
          {
            v52 = *(char **)&v146[8];
            v53 = *(_QWORD *)&v146[8] + v50;
            if ( !__CFADD__(*(_QWORD *)&v146[8], v50) )
              goto LABEL_69;
            if ( *(_QWORD *)&v146[8] <= 0x7FFFFFFFFFFFFFFEuLL )
            {
              v53 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_69:
              v54 = *(_QWORD *)v146;
              v55 = *(_QWORD *)&v146[8];
              if ( *(_QWORD *)&v146[16] < v53 )
              {
                v137 = *(char **)&v146[8];
                n = v51;
                v129 = (void *)v53;
                *(_QWORD *)v146 = qvector_reserve(v127, *(_QWORD *)v146, v53, 1);
                v54 = *(_QWORD *)v146;
                v52 = v137;
                v55 = *(_QWORD *)&v146[8];
                v51 = n;
                v53 = (unsigned __int64)v129;
              }
              v137 = v52;
              n = v51;
              v129 = (void *)v53;
              memset((void *)(v54 + v55), 0, v53 - v55);
              v51 = n;
              v52 = v137;
              *(_QWORD *)&v146[8] = v129;
            }
            else if ( *(_QWORD *)&v146[8] != 0x7FFFFFFFFFFFFFFFLL )
            {
              *(_QWORD *)&v146[8] = 0x7FFFFFFFFFFFFFFFLL;
            }
            memcpy(&v52[*(_QWORD *)v146], src, v51);
          }
          v56 = s[0];
          v57 = s[0];
          do
          {
            if ( v57 >= s[1] )
              goto LABEL_76;
            ++v57;
          }
          while ( *(v57 - 1) );
          s[0] = v57;
          if ( !v56 || (v129 = v56, v121 = strlen(v56), v122 = v129, (v123 = (void *)v121) == nullptr) )
          {
LABEL_76:
            v141.m128i_i64[0] = 0;
LABEL_77:
            v58 = 0;
            v59 = haystack;
            goto LABEL_78;
          }
          v124 = dest;
          v125 = (void *)(v121 + 1);
          if ( v141.m128i_i64[1] < v121 + 1 )
          {
            v137 = (char *)v121;
            n = (size_t)v129;
            v129 = (void *)(v121 + 1);
            dest = (void *)qvector_reserve(p_dest, dest, v125, 1);
            v123 = v137;
            v124 = dest;
            v122 = (const void *)n;
            v125 = v129;
          }
          v141.m128i_i64[0] = (__int64)v125;
          v129 = v123;
          memmove(v124, v122, (size_t)v123);
          *((_BYTE *)v129 + (_QWORD)dest) = 0;
          if ( !v141.m128i_i64[0] )
            goto LABEL_77;
          v59 = (const char *)dest;
          v58 = v141.m128i_i64[0] - 1;
LABEL_78:
          v60 = sub_67FDF0((__int64 *)&v142, v59, v58, 1);
          v61 = v143.m128i_i64[0];
          if ( v60 )
          {
            v134 = v60;
          }
          else
          {
            v62 = v142;
            v63 = _mm_loadh_ps((const double *)&v143.m128i_i64[1]);
            v61 = v141.m128i_i64[0];
            v64 = _mm_loadu_si128(&v141);
            v142 = dest;
            dest = v62;
            v143 = v64;
            v141 = (__m128i)v63;
          }
          if ( v61 )
          {
            v65 = *(char **)&v146[8];
            v66 = v142;
            v67 = v61 + *(_QWORD *)&v146[8];
            if ( !__CFADD__(v61, *(_QWORD *)&v146[8]) )
              goto LABEL_82;
            if ( *(_QWORD *)&v146[8] <= 0x7FFFFFFFFFFFFFFEuLL )
            {
              v67 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_82:
              v68 = *(_QWORD *)v146;
              v69 = *(_QWORD *)&v146[8];
              if ( *(_QWORD *)&v146[16] < v67 )
              {
                v138 = v61;
                v137 = *(char **)&v146[8];
                n = (size_t)v142;
                v129 = (void *)v67;
                *(_QWORD *)v146 = qvector_reserve(v127, *(_QWORD *)v146, v67, 1);
                v68 = *(_QWORD *)v146;
                v61 = v138;
                v69 = *(_QWORD *)&v146[8];
                v65 = v137;
                v66 = (const void *)n;
                v67 = (unsigned __int64)v129;
              }
              v138 = v61;
              v137 = v65;
              n = (size_t)v66;
              v129 = (void *)v67;
              memset((void *)(v68 + v69), 0, v67 - v69);
              v66 = (const void *)n;
              v65 = v137;
              v61 = v138;
              *(_QWORD *)&v146[8] = v129;
            }
            else if ( *(_QWORD *)&v146[8] != 0x7FFFFFFFFFFFFFFFLL )
            {
              *(_QWORD *)&v146[8] = 0x7FFFFFFFFFFFFFFFLL;
            }
            memcpy(&v65[*(_QWORD *)v146], v66, v61);
          }
          if ( ++v41 == (_DWORD)v130 )
          {
            if ( v134 )
              netnode_setblob(v135, *(_QWORD *)v146, *(_QWORD *)&v146[8], 0, 99);
LABEL_89:
            if ( *(_QWORD *)v146 )
            {
              *(_QWORD *)&v146[8] = 0;
              qfree(*(void **)v146);
              v32 = (void *)ptr[0].m128i_i64[0];
              if ( !ptr[0].m128i_i64[0] )
                break;
LABEL_46:
              ptr[0].m128i_i64[1] = 0;
              qfree(v32);
              break;
            }
LABEL_45:
            v32 = (void *)ptr[0].m128i_i64[0];
            if ( !ptr[0].m128i_i64[0] )
              break;
            goto LABEL_46;
          }
          continue;
        }
      }
      if ( v142 )
      {
        v143.m128i_i64[0] = 0;
        qfree(v142);
      }
      if ( dest )
      {
        v141.m128i_i64[0] = 0;
        qfree(dest);
        if ( !func_qty )
          goto LABEL_17;
      }
      else
      {
LABEL_3:
        if ( !func_qty )
          goto LABEL_17;
      }
    }
    dest = nullptr;
    v141 = 0;
    v15 = ea2node(*(_QWORD *)v4);
    if ( netnode_qgetblob(v15, &dest, 1, 0x4000, 83) <= 0 )
      goto LABEL_40;
    v16 = (char *)dest;
    v143 = 0;
    v142 = nullptr;
    LODWORD(p_dest) = 0;
    v129 = ptr;
    *(__m128i *)s = _mm_unpacklo_epi64(
                      (__m128i)(unsigned __int64)dest,
                      (__m128i)((unsigned __int64)dest + v141.m128i_i64[0]));
    while ( 1 )
    {
      v127 = v16;
      v145 = 0;
      memset(ptr, 0, sizeof(ptr));
      ptr[0].m128i_i64[0] = unpack_dq(s);
      v20 = ptr[0].m128i_i64[0];
      if ( s[0] == v127 )
        break;
      ptr[0].m128i_i64[1] = v20 + unpack_dq(s);
      ptr[1].m128i_i64[0] = unpack_ds(s, s[1], 0);
      ptr[1].m128i_i64[1] = unpack_ds(s, s[1], 0);
      v21 = unpack_ds(s, s[1], 1);
      si128 = _mm_load_si128(ptr);
      v145 = v21;
      *(__m128i *)v146 = si128;
      memset(&v146[16], 0, 24);
      *(_QWORD *)&v146[16] = qstrdup(ptr[1].m128i_i64[0]);
      *(_QWORD *)&v146[24] = qstrdup(ptr[1].m128i_i64[1]);
      v23 = qstrdup(v145);
      v24 = v143.m128i_i64[0];
      *(_QWORD *)&v146[32] = v23;
      v25 = (char *)v142;
      if ( v143.m128i_i64[1] < (unsigned __int64)(v143.m128i_i64[0] + 1) )
      {
        v142 = (void *)qvector_reserve(&v142, v142, v143.m128i_i64[0] + 1, 40);
        v24 = v143.m128i_i64[0];
        v25 = (char *)v142;
      }
      v17 = _mm_load_si128((const __m128i *)v146);
      v18 = *(_QWORD *)&v146[16];
      v19 = &v25[40 * v24];
      *((_QWORD *)v19 + 4) = 0;
      *(__m128i *)v19 = v17;
      *((_OWORD *)v19 + 1) = 0;
      *((_QWORD *)v19 + 2) = qstrdup(v18);
      *((_QWORD *)v19 + 3) = qstrdup(*(_QWORD *)&v146[24]);
      *((_QWORD *)v19 + 4) = qstrdup(*(_QWORD *)&v146[32]);
      ++v143.m128i_i64[0];
      free_regvar(v146);
      free_regvar(v129);
      LODWORD(p_dest) = (_DWORD)p_dest + 1;
      if ( v6 == (_DWORD)p_dest )
        goto LABEL_33;
      v16 = s[0];
    }
    free_regvar(v129);
LABEL_33:
    v26 = v143.m128i_i64[0];
    v27 = (char *)v142;
    v7 = v143.m128i_i32[0];
    if ( v143.m128i_i32[0] <= 0 )
    {
      if ( !v142 )
      {
LABEL_39:
        if ( !v7 )
        {
LABEL_40:
          v31 = ea2node(v5->m128i_i64[0]);
          netnode_delblob(v31, 0x4000, 83);
          v7 = 0;
        }
LABEL_41:
        if ( dest )
        {
          v141.m128i_i64[0] = 0;
          qfree(dest);
        }
        v6 = v5[5].m128i_i32[0];
        goto LABEL_6;
      }
      if ( !v143.m128i_i64[0] )
      {
LABEL_38:
        v143.m128i_i64[0] = 0;
        qfree(v27);
        goto LABEL_39;
      }
    }
    else
    {
      *(__m128i *)v146 = _mm_loadu_si128(v5);
      *(__m128i *)&v146[16] = _mm_loadu_si128(v5 + 1);
      *(__m128i *)&v146[32] = _mm_loadu_si128(v5 + 2);
      v147 = _mm_loadu_si128(v5 + 3);
      v148 = _mm_loadu_si128(v5 + 4);
      v149 = _mm_loadu_si128(v5 + 5);
      v150 = _mm_loadu_si128(v5 + 6);
      v151 = _mm_loadu_si128(v5 + 7);
      v28 = _mm_loadu_si128(v5 + 8);
      v149.m128i_i64[1] = (__int64)v142;
      v149.m128i_i32[0] = v143.m128i_i32[0];
      v152 = v28;
      sub_674600(v133, (__int64)v146, 0);
      v27 = (char *)v142;
      if ( !v142 )
        goto LABEL_41;
      v26 = v143.m128i_i64[0];
      if ( !v143.m128i_i64[0] )
      {
        qfree(v142);
        goto LABEL_41;
      }
    }
    v29 = 0;
    do
    {
      v30 = 5 * v29++;
      free_regvar(&v27[8 * v30]);
      v27 = (char *)v142;
    }
    while ( v29 != v26 );
    goto LABEL_38;
  }
LABEL_17:
  v11 = dword_2CCC3C8;
  if ( (dword_2CCC3C8 & 0x800000) == 0 )
    goto LABEL_18;
  v142 = nullptr;
  memset(ptr, 0, 24);
  v143 = 0;
  LODWORD(v127) = get_segm_qty();
  v70 = 0;
  if ( (int)v127 > 0 )
  {
    do
    {
      v71 = sub_505DE0(*(_QWORD *)(a1 + 1672) + 1624LL, v70);
      v72 = 2;
      v73 = 0;
      p_dest = (__int64 *)&v142;
      while ( 1 )
      {
        if ( sub_504090((__int64)p_dest, (_QWORD *)(*(_QWORD *)(a1 + 1672) + 1624LL), v71, v73) > 0 )
        {
          v74 = v143.m128i_i64[0];
          v75 = haystack;
          if ( v143.m128i_i64[0] )
          {
            v75 = (const char *)v142;
            v74 = v143.m128i_i64[0] - 1;
          }
          if ( (unsigned __int8)sub_67FDF0(ptr[0].m128i_i64, v75, v74, 1) )
          {
            v76 = haystack;
            if ( ptr[0].m128i_i64[1] )
              v76 = (const char *)ptr[0].m128i_i64[0];
            sub_5083D0((__int64 *)(*(_QWORD *)(a1 + 1672) + 1624LL), v71, v76, v73);
          }
        }
        v73 = 1;
        if ( v72 == 1 )
          break;
        v72 = 1;
      }
      ++v70;
    }
    while ( (_DWORD)v127 != v70 );
  }
  LODWORD(p_dest) = get_hidden_range_qty();
  v77 = 0;
  if ( (int)p_dest > 0 )
  {
    while ( 1 )
    {
      v78 = (const char **)getn_hidden_range(v77);
      v79 = sub_67FDF0(ptr[0].m128i_i64, v78[2], -1, 0);
      if ( v79 )
      {
        qfree((void *)v78[2]);
        v80 = ptr[0].m128i_i64[0];
        if ( ptr[0].m128i_i64[1] < (unsigned __int64)ptr[1].m128i_i64[0] )
        {
          if ( ptr[0].m128i_i64[0] )
          {
            if ( ptr[0].m128i_i64[1] )
            {
              v80 = qrealloc(ptr[0].m128i_i64[0]);
              if ( !v80 )
                v80 = ptr[0].m128i_i64[0];
            }
          }
        }
        memset(ptr, 0, 24);
        v78[2] = (const char *)v80;
      }
      v81 = sub_67FDF0(ptr[0].m128i_i64, v78[3], -1, 0);
      if ( v81 )
      {
        qfree((void *)v78[3]);
        v82 = ptr[0].m128i_i64[0];
        if ( ptr[0].m128i_i64[1] < (unsigned __int64)ptr[1].m128i_i64[0] )
        {
          if ( ptr[0].m128i_i64[0] )
          {
            if ( ptr[0].m128i_i64[1] )
            {
              v82 = qrealloc(ptr[0].m128i_i64[0]);
              if ( !v82 )
                v82 = ptr[0].m128i_i64[0];
            }
          }
        }
        v79 = v81;
        memset(ptr, 0, 24);
        v78[3] = (const char *)v82;
      }
      if ( (unsigned __int8)sub_67FDF0(ptr[0].m128i_i64, v78[4], -1, 0) )
        break;
      if ( v79 )
        goto LABEL_108;
LABEL_109:
      if ( (_DWORD)p_dest == ++v77 )
        goto LABEL_127;
    }
    qfree((void *)v78[4]);
    v83 = ptr[0].m128i_i64[0];
    if ( ptr[0].m128i_i64[1] < (unsigned __int64)ptr[1].m128i_i64[0] )
    {
      if ( ptr[0].m128i_i64[1] )
      {
        if ( ptr[0].m128i_i64[0] )
        {
          v83 = qrealloc(ptr[0].m128i_i64[0]);
          if ( !v83 )
            v83 = ptr[0].m128i_i64[0];
        }
      }
    }
    memset(ptr, 0, 24);
    v78[4] = (const char *)v83;
LABEL_108:
    sub_3C7860(*(_QWORD *)(a1 + 1672), (__int64)v78);
    goto LABEL_109;
  }
LABEL_127:
  v131 = (_BYTE *)sub_52FD10(v128);
  v130 = nullptr;
  v127 = v146;
  if ( v131 )
  {
    do
    {
      v85 = sub_52FDF0(v128, (unsigned __int64)v130);
      v86 = 2;
      v87 = 0;
      p_dest = (__int64 *)&v142;
      while ( 1 )
      {
        v88 = *(_QWORD **)(a1 + 1872);
        dest = (void *)sub_3BDD60(*(_QWORD **)(*v88 + 1672LL), v85);
        if ( sub_7BEA80(&dest, *v88, p_dest, v87, 83) > 0 )
        {
          v89 = v143.m128i_i64[0];
          v90 = haystack;
          if ( v143.m128i_i64[0] )
          {
            v90 = (const char *)v142;
            v89 = v143.m128i_i64[0] - 1;
          }
          if ( (unsigned __int8)sub_67FDF0(ptr[0].m128i_i64, v90, v89, 1) )
          {
            v91 = (char *)haystack;
            if ( ptr[0].m128i_i64[1] )
              v91 = (char *)ptr[0].m128i_i64[0];
            sub_52EFD0(*(__int64 **)(a1 + 1872), v85, v91, v87);
          }
        }
        v87 = 1;
        if ( v86 == 1 )
          break;
        v86 = 1;
      }
      v84 = sub_5310F0(*(_QWORD *)(a1 + 1872), v85);
      v129 = v84;
      if ( v84 )
      {
        v92 = (__int64 *)v84[2];
        v93 = 0;
        if ( *((_DWORD *)v84 + 2) )
        {
          do
          {
            v94 = 2;
            v95 = 0;
            while ( 1 )
            {
              v96 = *(_QWORD **)(a1 + 1872);
              *(_QWORD *)v146 = sub_3BDD60(*(_QWORD **)(*v96 + 1672LL), *v92);
              if ( sub_7BEA80(v127, *v96, p_dest, v95, 83) > 0 )
              {
                v97 = v143.m128i_i64[0];
                v98 = haystack;
                if ( v143.m128i_i64[0] )
                {
                  v98 = (const char *)v142;
                  v97 = v143.m128i_i64[0] - 1;
                }
                if ( (unsigned __int8)sub_67FDF0(ptr[0].m128i_i64, v98, v97, 1) )
                {
                  v99 = (char *)haystack;
                  if ( ptr[0].m128i_i64[1] )
                    v99 = (char *)ptr[0].m128i_i64[0];
                  sub_52F7F0(*(__int64 **)(a1 + 1872), v92, v99, v95);
                }
              }
              v95 = 1;
              if ( v94 == 1 )
                break;
              v94 = 1;
            }
            ++v93;
            v92 += 4;
          }
          while ( v93 < *((unsigned int *)v129 + 2) );
        }
        sub_67DE90((__int64)v129);
      }
      ++v130;
      dword_2CCC3C8 &= ~0x2000000u;
    }
    while ( v131 != v130 );
  }
  v129 = (void *)sub_6CA550(v128);
  v103 = nullptr;
  if ( v129 )
  {
    do
    {
      v104 = sub_6CA670(v128, v103);
      v105 = 2;
      v106 = 0;
      p_dest = (__int64 *)&v142;
      while ( 1 )
      {
        if ( sub_6CA930(v128, p_dest, v104, v106) > 0 )
        {
          v107 = v143.m128i_i64[0];
          v108 = haystack;
          if ( v143.m128i_i64[0] )
          {
            v108 = (const char *)v142;
            v107 = v143.m128i_i64[0] - 1;
          }
          if ( (unsigned __int8)sub_67FDF0(ptr[0].m128i_i64, v108, v107, 1) )
          {
            v109 = haystack;
            if ( ptr[0].m128i_i64[1] )
              v109 = (const char *)ptr[0].m128i_i64[0];
            sub_6CA9F0(v128, v104, v109, v106);
          }
        }
        v106 = 1;
        if ( v105 == 1 )
          break;
        v105 = 1;
      }
      *(_QWORD *)v146 = &off_2B373F0;
      *(_QWORD *)&v146[8] = v128;
      memset(&v146[16], 0, 32);
      v127 = v146;
      v147 = 0;
      sub_6CB040(v128, v104, v146);
      *(_QWORD *)v146 = &off_2B373F0;
      if ( *(_QWORD *)&v146[40] )
      {
        v147.m128i_i64[0] = 0;
        qfree(*(void **)&v146[40]);
      }
      if ( *(_QWORD *)&v146[16] )
      {
        *(_QWORD *)&v146[24] = 0;
        qfree(*(void **)&v146[16]);
      }
      ++v103;
    }
    while ( v129 != v103 );
  }
  else
  {
    p_dest = (__int64 *)&v142;
  }
  if ( sub_631490(a1, p_dest, 85, v100, v101, v102) > 0 )
  {
    v110 = v143.m128i_i64[0];
    v111 = haystack;
    if ( v143.m128i_i64[0] )
    {
      v111 = (const char *)v142;
      v110 = v143.m128i_i64[0] - 1;
    }
    if ( (unsigned __int8)sub_67FDF0(ptr[0].m128i_i64, v111, v110, 0) )
    {
      v114 = haystack;
      if ( ptr[0].m128i_i64[1] )
        v114 = (const char *)ptr[0].m128i_i64[0];
      sub_632C30(a1, 85, v114, ptr[0].m128i_u64[1], v112, v113);
    }
  }
  s[0] = (char *)-1LL;
  netnode_check(s, "$ scriptsnippets", 0, 1);
  for ( i = 0; ; ++i )
  {
    v116 = netnode_altval(s[0], i, 65);
    v117 = v116 - 1;
    if ( !v116 )
      break;
    if ( netnode_qgetblob(v116 - 1, p_dest, 1, 0, 1112) > 0 )
    {
      v118 = v143.m128i_i64[0];
      v119 = haystack;
      if ( v143.m128i_i64[0] )
      {
        v119 = (const char *)v142;
        v118 = v143.m128i_i64[0] - 1;
      }
      if ( (unsigned __int8)sub_67FDF0(ptr[0].m128i_i64, v119, v118, 0) )
      {
        v120 = haystack;
        if ( ptr[0].m128i_i64[1] )
          v120 = (const char *)ptr[0].m128i_i64[0];
        netnode_setblob(v117, v120, ptr[0].m128i_i64[1], 0, 88);
      }
    }
  }
  dword_2CCC3C8 &= ~0x800000u;
  if ( ptr[0].m128i_i64[0] )
  {
    ptr[0].m128i_i64[1] = 0;
    qfree((void *)ptr[0].m128i_i64[0]);
  }
  if ( v142 )
  {
    v143.m128i_i64[0] = 0;
    qfree(v142);
  }
  v11 = dword_2CCC3C8;
LABEL_18:
  dword_2CCC3C8 = v11 & 0xFFEFFFFF;
  return v155 - __readfsqword(0x28u);
}
