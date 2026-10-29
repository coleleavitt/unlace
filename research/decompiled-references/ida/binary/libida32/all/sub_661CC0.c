unsigned __int64 __fastcall sub_661CC0(__int64 a1)
{
  __int64 v1; // rax
  __int64 func_qty; // r15
  const __m128i *v3; // rax
  const __m128i *v4; // rbp
  int v5; // r12d
  __int32 v6; // ebx
  int v7; // r13d
  unsigned int v8; // r12d
  int v9; // eax
  int v10; // eax
  __int64 v12; // rdx
  const char *v13; // rsi
  unsigned int v14; // eax
  char *v15; // rdx
  int v16; // r13d
  __int64 v17; // rdi
  char *v18; // rbx
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // rax
  char *v22; // rsi
  __int64 v23; // r13
  char *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rax
  unsigned int v28; // eax
  void *v29; // rdi
  char *v30; // rax
  char v31; // bl
  __int64 v32; // rax
  size_t v33; // r12
  __int64 v34; // r13
  unsigned __int64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // rax
  int v38; // r12d
  unsigned int v39; // eax
  __int64 v40; // rax
  size_t v41; // r9
  char *v42; // r8
  unsigned __int64 v43; // r10
  __int64 v44; // rsi
  __int64 v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rax
  size_t v48; // r9
  char *v49; // r8
  unsigned __int64 v50; // r10
  __int64 v51; // rsi
  __int64 v52; // rax
  char *v53; // r9
  char *v54; // rax
  __int64 v55; // rdx
  const char *v56; // rsi
  char v57; // al
  __int64 v58; // r8
  __m128i v59; // xmm1
  void *v60; // rax
  __m128 v61; // xmm0
  char *v62; // r9
  const void *v63; // r10
  unsigned __int64 v64; // r11
  __int64 v65; // rsi
  __int64 v66; // rax
  unsigned int v67; // r13d
  unsigned int *v68; // r12
  int v69; // r14d
  char v70; // bp
  unsigned int *v71; // rsi
  __int64 v72; // rdx
  const char *v73; // rsi
  const char *v74; // rdx
  int hidden_range_qty; // r13d
  unsigned int v76; // ebp
  const char **v77; // r14
  char v78; // bl
  const char *v79; // rdi
  char v80; // r15
  const char *v81; // rdi
  const char *v82; // rdi
  _DWORD *v83; // rax
  unsigned int v84; // ebp
  int v85; // r12d
  unsigned int v86; // ebx
  _QWORD *v87; // r13
  __int64 v88; // rdx
  const char *v89; // rsi
  char *v90; // rdx
  int *v91; // rbp
  unsigned __int64 v92; // r13
  int v93; // r12d
  unsigned int v94; // ebx
  _QWORD *v95; // r15
  __int64 v96; // rdx
  const char *v97; // rsi
  char *v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  char *v102; // r13
  unsigned int v103; // r12d
  int v104; // r14d
  unsigned int v105; // ebp
  __int64 v106; // rdx
  const char *v107; // rsi
  const char *v108; // rdx
  __int64 v109; // rdx
  const char *v110; // rsi
  __int64 v111; // r8
  __int64 v112; // r9
  const char *v113; // rdx
  unsigned int i; // ebp
  int v115; // eax
  unsigned int v116; // r13d
  __int64 v117; // rdx
  const char *v118; // rsi
  const char *v119; // rsi
  size_t v120; // rax
  const void *v121; // r9
  void *v122; // r8
  void *v123; // rdi
  void *v124; // rdx
  __int64 v125; // [rsp+0h] [rbp-198h]
  char *p_dest; // [rsp+8h] [rbp-190h]
  __int64 v127; // [rsp+10h] [rbp-188h]
  void **v128; // [rsp+18h] [rbp-180h]
  void *v129; // [rsp+20h] [rbp-178h]
  void *v130; // [rsp+28h] [rbp-170h]
  __int64 *v131; // [rsp+30h] [rbp-168h]
  __int64 *v132; // [rsp+38h] [rbp-160h]
  char v133; // [rsp+43h] [rbp-155h]
  unsigned int v134; // [rsp+44h] [rbp-154h]
  size_t n; // [rsp+48h] [rbp-150h]
  char *v136; // [rsp+50h] [rbp-148h]
  size_t v137; // [rsp+58h] [rbp-140h]
  char *s[2]; // [rsp+60h] [rbp-138h] BYREF
  void *dest; // [rsp+70h] [rbp-128h] BYREF
  __m128i v140; // [rsp+78h] [rbp-120h] BYREF
  void *v141; // [rsp+90h] [rbp-108h] BYREF
  __m128i v142; // [rsp+98h] [rbp-100h] BYREF
  void *v143; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v144; // [rsp+B8h] [rbp-E0h]
  __int64 v145; // [rsp+C8h] [rbp-D0h]
  _BYTE v146[48]; // [rsp+D0h] [rbp-C8h] BYREF
  __m128i v147; // [rsp+100h] [rbp-98h]
  __m128i v148; // [rsp+110h] [rbp-88h]
  __m128i v149; // [rsp+120h] [rbp-78h]
  __m128i v150; // [rsp+130h] [rbp-68h]
  __int64 v151; // [rsp+140h] [rbp-58h]
  _BYTE src[5]; // [rsp+153h] [rbp-45h] BYREF
  _QWORD v153[8]; // [rsp+158h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 1680);
  v125 = a1;
  v153[0] = __readfsqword(0x28u);
  v127 = v1;
  v132 = *(__int64 **)(a1 + 1480);
  func_qty = get_func_qty(a1);
  if ( func_qty > 0 )
  {
    while ( 1 )
    {
      v3 = (const __m128i *)getn_func(--func_qty);
      v4 = v3;
      if ( !v3 )
        goto LABEL_3;
      v5 = v3[3].m128i_i32[2];
      v6 = 0;
      if ( v5 > 0 )
        break;
LABEL_6:
      if ( v6 != v5 )
      {
        v4[3].m128i_i32[2] = v6;
        update_func(v4);
      }
      if ( (dword_2CA24C8 & 0x800000) == 0 )
        goto LABEL_3;
      v7 = 2;
      v8 = 0;
      dest = nullptr;
      v141 = nullptr;
      p_dest = (char *)&dest;
      v140 = 0;
      v142 = 0;
      while ( 1 )
      {
        if ( get_func_cmt(p_dest, v4, v8) > 0 )
        {
          v12 = v140.m128i_i64[0];
          v13 = haystack;
          if ( v140.m128i_i64[0] )
          {
            v13 = (const char *)dest;
            v12 = v140.m128i_i64[0] - 1;
          }
          if ( (unsigned __int8)sub_661700((__int64 *)&v141, v13, v12, 1) )
          {
            if ( v142.m128i_i64[0] )
              set_func_cmt(v4, v141, v8);
            else
              set_func_cmt(v4, haystack, v8);
          }
        }
        v8 = 1;
        if ( v7 == 1 )
          break;
        v7 = 1;
      }
      v9 = netnode_altval(v4->m128i_u32[0], 2, 65);
      if ( v9 )
      {
        v134 = v9 - 1;
        v144 = 0;
        v143 = nullptr;
        if ( netnode_qgetblob((unsigned int)(v9 - 1), &v143, 1, 0, 1123) <= 0 )
          goto LABEL_45;
        v30 = (char *)v143;
        v31 = 0;
        memset(v146, 0, 24);
        *(__m128i *)s = _mm_unpacklo_epi64(
                          (__m128i)(unsigned __int64)v143,
                          (__m128i)(unsigned __int64)((unsigned __int64)v143 + v144));
        if ( v143 < (char *)v143 + (unsigned __int64)v144 )
        {
          v31 = *(_BYTE *)v143;
          v30 = (char *)v143 + 1;
        }
        s[0] = v30;
        *(_QWORD *)v146 = qvector_reserve(v146, 0, 1, 1);
        *(_BYTE *)(*(_QWORD *)v146 + (*(_QWORD *)&v146[8])++) = v31;
        LODWORD(v130) = unpack_dd(s);
        v128 = (void **)v153;
        v32 = pack_dd(src, v153, (unsigned int)v130) - (_QWORD)src;
        v33 = v32;
        if ( v32 )
        {
          v34 = *(_QWORD *)&v146[8];
          v35 = *(_QWORD *)&v146[8] + v32;
          if ( !__CFADD__(*(_QWORD *)&v146[8], v32) )
            goto LABEL_55;
          if ( *(_QWORD *)&v146[8] <= 0x7FFFFFFFFFFFFFFEuLL )
          {
            v35 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_55:
            v36 = *(_QWORD *)v146;
            v37 = *(_QWORD *)&v146[8];
            if ( *(_QWORD *)&v146[16] < v35 )
            {
              v129 = (void *)v35;
              *(_QWORD *)v146 = qvector_reserve(v146, *(_QWORD *)v146, v35, 1);
              v36 = *(_QWORD *)v146;
              v35 = (unsigned __int64)v129;
              v37 = *(_QWORD *)&v146[8];
            }
            v129 = (void *)v35;
            memset((void *)(v36 + v37), 0, v35 - v37);
            *(_QWORD *)&v146[8] = v129;
          }
          else if ( *(_QWORD *)&v146[8] != 0x7FFFFFFFFFFFFFFFLL )
          {
            *(_QWORD *)&v146[8] = 0x7FFFFFFFFFFFFFFFLL;
          }
          memcpy((void *)(v34 + *(_QWORD *)v146), src, v33);
        }
        if ( !(_DWORD)v130 )
          goto LABEL_89;
        v133 = 0;
        v38 = 0;
        v131 = (__int64 *)&v141;
        while ( 2 )
        {
          v39 = unpack_dd(s);
          v40 = pack_dd(src, v128, v39) - (_QWORD)src;
          v41 = v40;
          if ( v40 )
          {
            v42 = *(char **)&v146[8];
            v43 = *(_QWORD *)&v146[8] + v40;
            if ( !__CFADD__(*(_QWORD *)&v146[8], v40) )
              goto LABEL_63;
            if ( *(_QWORD *)&v146[8] <= 0x7FFFFFFFFFFFFFFEuLL )
            {
              v43 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_63:
              v44 = *(_QWORD *)v146;
              v45 = *(_QWORD *)&v146[8];
              if ( *(_QWORD *)&v146[16] < v43 )
              {
                v136 = *(char **)&v146[8];
                n = v41;
                v129 = (void *)v43;
                *(_QWORD *)v146 = qvector_reserve(v146, *(_QWORD *)v146, v43, 1);
                v44 = *(_QWORD *)v146;
                v42 = v136;
                v45 = *(_QWORD *)&v146[8];
                v41 = n;
                v43 = (unsigned __int64)v129;
              }
              v136 = v42;
              n = v41;
              v129 = (void *)v43;
              memset((void *)(v44 + v45), 0, v43 - v45);
              v41 = n;
              v42 = v136;
              *(_QWORD *)&v146[8] = v129;
            }
            else if ( *(_QWORD *)&v146[8] != 0x7FFFFFFFFFFFFFFFLL )
            {
              *(_QWORD *)&v146[8] = 0x7FFFFFFFFFFFFFFFLL;
            }
            memcpy(&v42[*(_QWORD *)v146], src, v41);
          }
          v46 = unpack_dd(s);
          v47 = pack_dd(src, v128, v46) - (_QWORD)src;
          v48 = v47;
          if ( v47 )
          {
            v49 = *(char **)&v146[8];
            v50 = *(_QWORD *)&v146[8] + v47;
            if ( !__CFADD__(*(_QWORD *)&v146[8], v47) )
              goto LABEL_69;
            if ( *(_QWORD *)&v146[8] <= 0x7FFFFFFFFFFFFFFEuLL )
            {
              v50 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_69:
              v51 = *(_QWORD *)v146;
              v52 = *(_QWORD *)&v146[8];
              if ( *(_QWORD *)&v146[16] < v50 )
              {
                v136 = *(char **)&v146[8];
                n = v48;
                v129 = (void *)v50;
                *(_QWORD *)v146 = qvector_reserve(v146, *(_QWORD *)v146, v50, 1);
                v51 = *(_QWORD *)v146;
                v49 = v136;
                v52 = *(_QWORD *)&v146[8];
                v48 = n;
                v50 = (unsigned __int64)v129;
              }
              v136 = v49;
              n = v48;
              v129 = (void *)v50;
              memset((void *)(v51 + v52), 0, v50 - v52);
              v48 = n;
              v49 = v136;
              *(_QWORD *)&v146[8] = v129;
            }
            else if ( *(_QWORD *)&v146[8] != 0x7FFFFFFFFFFFFFFFLL )
            {
              *(_QWORD *)&v146[8] = 0x7FFFFFFFFFFFFFFFLL;
            }
            memcpy(&v49[*(_QWORD *)v146], src, v48);
          }
          v53 = s[0];
          v54 = s[0];
          do
          {
            if ( v54 >= s[1] )
              goto LABEL_76;
            ++v54;
          }
          while ( *(v54 - 1) );
          s[0] = v54;
          if ( !v53 || (v129 = v53, v120 = strlen(v53), v121 = v129, (v122 = (void *)v120) == nullptr) )
          {
LABEL_76:
            v140.m128i_i64[0] = 0;
LABEL_77:
            v55 = 0;
            v56 = haystack;
            goto LABEL_78;
          }
          v123 = dest;
          v124 = (void *)(v120 + 1);
          if ( v140.m128i_i64[1] < v120 + 1 )
          {
            v136 = (char *)v120;
            n = (size_t)v129;
            v129 = (void *)(v120 + 1);
            dest = (void *)qvector_reserve(p_dest, dest, v124, 1);
            v122 = v136;
            v123 = dest;
            v121 = (const void *)n;
            v124 = v129;
          }
          v140.m128i_i64[0] = (__int64)v124;
          v129 = v122;
          memmove(v123, v121, (size_t)v122);
          *((_BYTE *)v129 + (_QWORD)dest) = 0;
          if ( !v140.m128i_i64[0] )
            goto LABEL_77;
          v56 = (const char *)dest;
          v55 = v140.m128i_i64[0] - 1;
LABEL_78:
          v57 = sub_661700(v131, v56, v55, 1);
          v58 = v142.m128i_i64[0];
          if ( v57 )
          {
            v133 = v57;
          }
          else
          {
            v59 = _mm_loadu_si128(&v140);
            v60 = v141;
            v61 = _mm_loadh_ps((const double *)&v142.m128i_i64[1]);
            v58 = v140.m128i_i64[0];
            v141 = dest;
            dest = v60;
            v142 = v59;
            v140 = (__m128i)v61;
          }
          if ( v58 )
          {
            v62 = *(char **)&v146[8];
            v63 = v141;
            v64 = v58 + *(_QWORD *)&v146[8];
            if ( !__CFADD__(v58, *(_QWORD *)&v146[8]) )
              goto LABEL_82;
            if ( *(_QWORD *)&v146[8] <= 0x7FFFFFFFFFFFFFFEuLL )
            {
              v64 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_82:
              v65 = *(_QWORD *)v146;
              v66 = *(_QWORD *)&v146[8];
              if ( *(_QWORD *)&v146[16] < v64 )
              {
                v137 = v58;
                v136 = *(char **)&v146[8];
                n = (size_t)v141;
                v129 = (void *)v64;
                *(_QWORD *)v146 = qvector_reserve(v146, *(_QWORD *)v146, v64, 1);
                v65 = *(_QWORD *)v146;
                v58 = v137;
                v66 = *(_QWORD *)&v146[8];
                v62 = v136;
                v63 = (const void *)n;
                v64 = (unsigned __int64)v129;
              }
              v137 = v58;
              v136 = v62;
              n = (size_t)v63;
              v129 = (void *)v64;
              memset((void *)(v65 + v66), 0, v64 - v66);
              v63 = (const void *)n;
              v62 = v136;
              v58 = v137;
              *(_QWORD *)&v146[8] = v129;
            }
            else if ( *(_QWORD *)&v146[8] != 0x7FFFFFFFFFFFFFFFLL )
            {
              *(_QWORD *)&v146[8] = 0x7FFFFFFFFFFFFFFFLL;
            }
            memcpy(&v62[*(_QWORD *)v146], v63, v58);
          }
          if ( ++v38 == (_DWORD)v130 )
          {
            if ( v133 )
              netnode_setblob(v134, *(_QWORD *)v146, *(_QWORD *)&v146[8], 0, 99);
LABEL_89:
            if ( *(_QWORD *)v146 )
            {
              *(_QWORD *)&v146[8] = 0;
              qfree(*(void **)v146);
              v29 = v143;
              if ( !v143 )
                break;
LABEL_46:
              *(_QWORD *)&v144 = 0;
              qfree(v29);
              break;
            }
LABEL_45:
            v29 = v143;
            if ( !v143 )
              break;
            goto LABEL_46;
          }
          continue;
        }
      }
      if ( v141 )
      {
        v142.m128i_i64[0] = 0;
        qfree(v141);
      }
      if ( dest )
      {
        v140.m128i_i64[0] = 0;
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
    v140 = 0;
    v14 = ea2node(v3->m128i_u32[0]);
    if ( netnode_qgetblob(v14, &dest, 1, 0x4000, 83) <= 0 )
      goto LABEL_40;
    v15 = (char *)dest;
    v142 = 0;
    v16 = 0;
    v128 = &v143;
    v141 = nullptr;
    *(__m128i *)s = _mm_unpacklo_epi64(
                      (__m128i)(unsigned __int64)dest,
                      (__m128i)((unsigned __int64)dest + v140.m128i_i64[0]));
    while ( 1 )
    {
      p_dest = v15;
      v143 = nullptr;
      v145 = 0;
      v144 = 0;
      LODWORD(v143) = unpack_dd(s);
      v20 = (int)v143;
      if ( s[0] == p_dest )
        break;
      HIDWORD(v143) = v20 + unpack_dd(s);
      *(_QWORD *)&v144 = unpack_ds(s, s[1], 0);
      *((_QWORD *)&v144 + 1) = unpack_ds(s, s[1], 0);
      v145 = unpack_ds(s, s[1], 1);
      memset(&v146[8], 0, 24);
      *(_QWORD *)v146 = v143;
      *(_QWORD *)&v146[8] = qstrdup(v144);
      *(_QWORD *)&v146[16] = qstrdup(*((_QWORD *)&v144 + 1));
      *(_QWORD *)&v146[24] = qstrdup(v145);
      v21 = v142.m128i_i64[0];
      v22 = (char *)v141;
      if ( v142.m128i_i64[1] < (unsigned __int64)(v142.m128i_i64[0] + 1) )
      {
        v141 = (void *)qvector_reserve(&v141, v141, v142.m128i_i64[0] + 1, 32);
        v22 = (char *)v141;
        v21 = v142.m128i_i64[0];
      }
      v17 = *(_QWORD *)&v146[8];
      v18 = &v22[32 * v21];
      v19 = *(_QWORD *)v146;
      *((_QWORD *)v18 + 3) = 0;
      *(_QWORD *)v18 = v19;
      *(_OWORD *)(v18 + 8) = 0;
      *((_QWORD *)v18 + 1) = qstrdup(v17);
      *((_QWORD *)v18 + 2) = qstrdup(*(_QWORD *)&v146[16]);
      *((_QWORD *)v18 + 3) = qstrdup(*(_QWORD *)&v146[24]);
      ++v16;
      ++v142.m128i_i64[0];
      free_regvar(v146);
      free_regvar(v128);
      if ( v5 == v16 )
        goto LABEL_33;
      v15 = s[0];
    }
    free_regvar(v128);
LABEL_33:
    v23 = v142.m128i_i64[0];
    v24 = (char *)v141;
    v6 = v142.m128i_i32[0];
    if ( v142.m128i_i32[0] <= 0 )
    {
      if ( !v141 )
      {
LABEL_39:
        if ( !v6 )
        {
LABEL_40:
          v28 = ea2node(v4->m128i_u32[0]);
          netnode_delblob(v28, 0x4000, 83);
          v6 = 0;
        }
LABEL_41:
        if ( dest )
        {
          v140.m128i_i64[0] = 0;
          qfree(dest);
        }
        v5 = v4[3].m128i_i32[2];
        goto LABEL_6;
      }
      if ( !v142.m128i_i64[0] )
      {
LABEL_38:
        v142.m128i_i64[0] = 0;
        qfree(v24);
        goto LABEL_39;
      }
    }
    else
    {
      *(__m128i *)v146 = _mm_loadu_si128(v4);
      *(__m128i *)&v146[16] = _mm_loadu_si128(v4 + 1);
      *(__m128i *)&v146[32] = _mm_loadu_si128(v4 + 2);
      v147 = _mm_loadu_si128(v4 + 3);
      v148 = _mm_loadu_si128(v4 + 4);
      v149 = _mm_loadu_si128(v4 + 5);
      v150 = _mm_loadu_si128(v4 + 6);
      v25 = v4[7].m128i_i64[0];
      v148.m128i_i64[0] = (__int64)v141;
      v151 = v25;
      v147.m128i_i32[2] = v142.m128i_i32[0];
      sub_656810(v132, (__int64)v146, 0);
      v24 = (char *)v141;
      if ( !v141 )
        goto LABEL_41;
      v23 = v142.m128i_i64[0];
      if ( !v142.m128i_i64[0] )
      {
        qfree(v141);
        goto LABEL_41;
      }
    }
    v26 = 0;
    do
    {
      v27 = v26++;
      free_regvar(&v24[32 * v27]);
      v24 = (char *)v141;
    }
    while ( v23 != v26 );
    goto LABEL_38;
  }
LABEL_17:
  v10 = dword_2CA24C8;
  if ( (dword_2CA24C8 & 0x800000) == 0 )
    goto LABEL_18;
  v141 = nullptr;
  v143 = nullptr;
  v142 = 0;
  v144 = 0;
  LODWORD(v128) = get_segm_qty();
  v67 = 0;
  if ( (int)v128 > 0 )
  {
    do
    {
      p_dest = *(char **)(v125 + 1480);
      v68 = sub_4EE890(*(_QWORD *)(v125 + 1480) + 1552LL, v67);
      v69 = 2;
      v70 = 0;
      while ( 1 )
      {
        v71 = (unsigned int *)(*(_QWORD *)(v125 + 1480) + 1552LL);
        p_dest = *(char **)(v125 + 1480);
        if ( sub_4ECB80((__int64)&v141, v71, v68, v70) > 0 )
        {
          v72 = v142.m128i_i64[0];
          v73 = haystack;
          if ( v142.m128i_i64[0] )
          {
            v73 = (const char *)v141;
            v72 = v142.m128i_i64[0] - 1;
          }
          if ( (unsigned __int8)sub_661700((__int64 *)&v143, v73, v72, 1) )
          {
            v74 = haystack;
            if ( (_QWORD)v144 )
              v74 = (const char *)v143;
            sub_4F0D50((unsigned int *)(*(_QWORD *)(v125 + 1480) + 1552LL), v68, v74, v70);
          }
        }
        v70 = 1;
        if ( v69 == 1 )
          break;
        v69 = 1;
      }
      ++v67;
    }
    while ( (_DWORD)v128 != v67 );
  }
  hidden_range_qty = get_hidden_range_qty();
  v76 = 0;
  if ( hidden_range_qty > 0 )
  {
    while ( 1 )
    {
      v77 = (const char **)getn_hidden_range(v76);
      v78 = sub_661700((__int64 *)&v143, v77[1], -1, 0);
      if ( v78 )
      {
        qfree((void *)v77[1]);
        v79 = (const char *)v143;
        if ( (unsigned __int64)v144 < *((_QWORD *)&v144 + 1) )
        {
          if ( v143 )
          {
            if ( (_QWORD)v144 )
            {
              v79 = (const char *)qrealloc(v143);
              if ( !v79 )
                v79 = (const char *)v143;
            }
          }
        }
        v143 = nullptr;
        v144 = 0;
        v77[1] = v79;
      }
      v80 = sub_661700((__int64 *)&v143, v77[2], -1, 0);
      if ( v80 )
      {
        qfree((void *)v77[2]);
        v81 = (const char *)v143;
        if ( (unsigned __int64)v144 < *((_QWORD *)&v144 + 1) )
        {
          if ( v143 )
          {
            if ( (_QWORD)v144 )
            {
              v81 = (const char *)qrealloc(v143);
              if ( !v81 )
                v81 = (const char *)v143;
            }
          }
        }
        v78 = v80;
        v143 = nullptr;
        v144 = 0;
        v77[2] = v81;
      }
      if ( (unsigned __int8)sub_661700((__int64 *)&v143, v77[3], -1, 0) )
        break;
      if ( v78 )
        goto LABEL_108;
LABEL_109:
      if ( hidden_range_qty == ++v76 )
        goto LABEL_127;
    }
    qfree((void *)v77[3]);
    v82 = (const char *)v143;
    if ( (unsigned __int64)v144 < *((_QWORD *)&v144 + 1) )
    {
      if ( (_QWORD)v144 )
      {
        if ( v143 )
        {
          v82 = (const char *)qrealloc(v143);
          if ( !v82 )
            v82 = (const char *)v143;
        }
      }
    }
    v143 = nullptr;
    v144 = 0;
    v77[3] = v82;
LABEL_108:
    sub_3C2740(*(_QWORD *)(v125 + 1480), (__int64)v77);
    goto LABEL_109;
  }
LABEL_127:
  v130 = (void *)sub_517910(v127);
  v129 = nullptr;
  p_dest = v146;
  if ( v130 )
  {
    do
    {
      v84 = sub_5179F0(v127, (unsigned int)v129);
      v85 = 2;
      v86 = 0;
      while ( 1 )
      {
        v87 = *(_QWORD **)(v125 + 1680);
        LODWORD(dest) = sub_3B90A0(*(_QWORD **)(*v87 + 1480LL), v84);
        if ( sub_79B6F0(&dest, *v87, &v141, v86, 83) > 0 )
        {
          v88 = v142.m128i_i64[0];
          v89 = haystack;
          if ( v142.m128i_i64[0] )
          {
            v89 = (const char *)v141;
            v88 = v142.m128i_i64[0] - 1;
          }
          if ( (unsigned __int8)sub_661700((__int64 *)&v143, v89, v88, 1) )
          {
            v90 = (char *)haystack;
            if ( (_QWORD)v144 )
              v90 = (char *)v143;
            sub_516B80(*(__int64 **)(v125 + 1680), v84, v90, v86);
          }
        }
        v86 = 1;
        if ( v85 == 1 )
          break;
        v85 = 1;
      }
      v83 = sub_518BB0(*(_QWORD *)(v125 + 1680), v84);
      v128 = (void **)v83;
      if ( v83 )
      {
        v91 = *((int **)v83 + 1);
        v92 = 0;
        if ( v83[1] )
        {
          do
          {
            v93 = 2;
            v94 = 0;
            while ( 1 )
            {
              v95 = *(_QWORD **)(v125 + 1680);
              *(_DWORD *)v146 = sub_3B90A0(*(_QWORD **)(*v95 + 1480LL), *v91);
              if ( sub_79B6F0(p_dest, *v95, &v141, v94, 83) > 0 )
              {
                v96 = v142.m128i_i64[0];
                v97 = haystack;
                if ( v142.m128i_i64[0] )
                {
                  v97 = (const char *)v141;
                  v96 = v142.m128i_i64[0] - 1;
                }
                if ( (unsigned __int8)sub_661700((__int64 *)&v143, v97, v96, 1) )
                {
                  v98 = (char *)haystack;
                  if ( (_QWORD)v144 )
                    v98 = (char *)v143;
                  sub_5173B0(*(__int64 **)(v125 + 1680), v91, v98, v94);
                }
              }
              v94 = 1;
              if ( v93 == 1 )
                break;
              v93 = 1;
            }
            ++v92;
            v91 += 5;
          }
          while ( v92 < *((unsigned int *)v128 + 1) );
        }
        sub_65FDE0((__int64)v128);
      }
      v129 = (char *)v129 + 1;
      dword_2CA24C8 &= ~0x2000000u;
    }
    while ( v130 != v129 );
  }
  p_dest = (char *)sub_6A9610(v127);
  v102 = nullptr;
  if ( p_dest )
  {
    do
    {
      v103 = sub_6A9730(v127, v102);
      v104 = 2;
      v105 = 0;
      while ( 1 )
      {
        if ( sub_6A99F0(v127, &v141, v103, v105) > 0 )
        {
          v106 = v142.m128i_i64[0];
          v107 = haystack;
          if ( v142.m128i_i64[0] )
          {
            v107 = (const char *)v141;
            v106 = v142.m128i_i64[0] - 1;
          }
          if ( (unsigned __int8)sub_661700((__int64 *)&v143, v107, v106, 1) )
          {
            v108 = haystack;
            if ( (_QWORD)v144 )
              v108 = (const char *)v143;
            sub_6A9AB0(v127, v103, v108, v105);
          }
        }
        v105 = 1;
        if ( v104 == 1 )
          break;
        v104 = 1;
      }
      *(_QWORD *)v146 = &off_2B0D430;
      *(_QWORD *)&v146[8] = v127;
      memset(&v146[16], 0, 32);
      v147 = 0;
      sub_6AA100(v127, v103, v146);
      *(_QWORD *)v146 = &off_2B0D430;
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
      ++v102;
    }
    while ( p_dest != v102 );
  }
  if ( sub_614990(v125, (__int64 *)&v141, 85, v99, v100, v101) > 0 )
  {
    v109 = v142.m128i_i64[0];
    v110 = haystack;
    if ( v142.m128i_i64[0] )
    {
      v110 = (const char *)v141;
      v109 = v142.m128i_i64[0] - 1;
    }
    if ( (unsigned __int8)sub_661700((__int64 *)&v143, v110, v109, 0) )
    {
      v113 = haystack;
      if ( (_QWORD)v144 )
        v113 = (const char *)v143;
      sub_6160D0(v125, 85, v113, v144, v111, v112);
    }
  }
  LODWORD(s[0]) = -1;
  netnode_check(s, "$ scriptsnippets", 0, 1);
  for ( i = 0; ; ++i )
  {
    v115 = netnode_altval(LODWORD(s[0]), i, 65);
    v116 = v115 - 1;
    if ( !v115 )
      break;
    if ( netnode_qgetblob(v116, &v141, 1, 0, 1112) > 0 )
    {
      v117 = v142.m128i_i64[0];
      v118 = haystack;
      if ( v142.m128i_i64[0] )
      {
        v118 = (const char *)v141;
        v117 = v142.m128i_i64[0] - 1;
      }
      if ( (unsigned __int8)sub_661700((__int64 *)&v143, v118, v117, 0) )
      {
        v119 = haystack;
        if ( (_QWORD)v144 )
          v119 = (const char *)v143;
        netnode_setblob(v116, v119, v144, 0, 88);
      }
    }
  }
  dword_2CA24C8 &= ~0x800000u;
  if ( v143 )
  {
    *(_QWORD *)&v144 = 0;
    qfree(v143);
  }
  if ( v141 )
  {
    v142.m128i_i64[0] = 0;
    qfree(v141);
  }
  v10 = dword_2CA24C8;
LABEL_18:
  dword_2CA24C8 = v10 & 0xFFEFFFFF;
  return v153[0] - __readfsqword(0x28u);
}

