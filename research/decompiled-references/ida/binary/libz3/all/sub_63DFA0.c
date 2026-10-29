size_t *__fastcall sub_63DFA0(__m128i *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // r15
  __m128i *v4; // r13
  unsigned int v5; // ebx
  __int64 i; // rcx
  __int64 v7; // rbp
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rsi
  int v11; // eax
  _QWORD *v12; // rsi
  size_t *v13; // rbx
  size_t *result; // rax
  size_t *v15; // r14
  size_t v16; // r12
  __int64 v17; // r8
  int v18; // r10d
  size_t *v19; // rbp
  __int32 v20; // r11d
  __int64 v21; // r8
  size_t *v22; // r15
  int v23; // esi
  __int64 v24; // r11
  size_t *v25; // r9
  size_t *v26; // rax
  size_t *v27; // rdi
  size_t v28; // rdx
  size_t v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rcx
  size_t v32; // r12
  size_t *v33; // r14
  __int64 v34; // r9
  int v35; // r8d
  __m128i si128; // xmm1
  __m128 *v37; // rbp
  __int32 v38; // r10d
  size_t v39; // r15
  __m128 *v40; // rcx
  int v41; // esi
  __int64 v42; // r10
  __m128 *v43; // r11
  __m128 *v44; // rax
  __m128 *v45; // rdi
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  size_t *v48; // rbx
  __int64 v49; // rcx
  size_t *v50; // r14
  size_t v51; // r12
  __int64 v52; // r8
  int v53; // r10d
  __m128i v54; // xmm1
  __m128 *v55; // rbp
  __int32 v56; // r9d
  __int64 v57; // r8
  __m128 *v58; // r15
  int v59; // ecx
  __int64 v60; // r9
  __m128 *v61; // rdi
  __m128 *v62; // rax
  __m128 *v63; // rsi
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rax
  __m128 *v66; // rax
  int v67; // esi
  __m128i *v68; // r9
  __int64 v69; // r8
  __int64 v70; // rdi
  __m128i *v71; // r11
  __int64 v72; // rax
  const __m128i *v73; // rbx
  size_t v74; // r8
  const __m128i *v75; // r12
  int v76; // r11d
  __int64 v77; // rdx
  __m128 *v78; // rsi
  __m128i *v79; // rdx
  __m128i v80; // xmm2
  __m128 *v81; // rax
  __int32 v82; // esi
  __m128 *v83; // r10
  __int64 v84; // rcx
  __int64 v85; // rdi
  void *v86; // r11
  __m128i *v87; // rdx
  __int64 v88; // rax
  size_t *v89; // r15
  const __m128i *v90; // r12
  const __m128i *v91; // rbx
  __m128i *v92; // r10
  __int32 v93; // r11d
  __m128 *v94; // r13
  __m128 *v95; // rcx
  __m128i *v96; // rbp
  __int64 v97; // rdx
  __m128 *v98; // rsi
  __m128i *v99; // rdx
  __m128i v100; // xmm2
  size_t *v101; // rax
  __int32 v102; // r9d
  char *v103; // r10
  __int64 v104; // rax
  char *v105; // rcx
  char *v106; // rdi
  __m128 *v107; // rax
  size_t *v108; // r13
  char *v109; // rbx
  __m128 *v110; // r10
  __int64 v111; // rax
  size_t *v112; // rdx
  size_t *v113; // rax
  size_t v114; // rdx
  unsigned int v115; // r12d
  unsigned int v116; // ecx
  unsigned int *v117; // rax
  __int64 v118; // rcx
  _QWORD *v119; // rdx
  size_t n[2]; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v121; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v122; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v123; // [rsp+38h] [rbp-90h]
  __m128 *v124; // [rsp+40h] [rbp-88h]
  __m128i *v125; // [rsp+48h] [rbp-80h]
  __m128i *v126; // [rsp+50h] [rbp-78h]
  int v127; // [rsp+5Ch] [rbp-6Ch]
  __int64 v128[11]; // [rsp+70h] [rbp-58h] BYREF

  v3 = a2;
  v4 = a1;
  v5 = 0;
  for ( i = *(_QWORD *)(a2 + 232); i; *((_DWORD *)v8 - 1) = v11 )
  {
    if ( v5 >= *(_DWORD *)(i - 4) )
      break;
    v7 = *(_QWORD *)(i + 8LL * v5);
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    v8 = (_QWORD *)a1[14].m128i_i64[1];
    if ( v8 )
    {
      v9 = *((_DWORD *)v8 - 1);
      if ( v9 == *((_DWORD *)v8 - 2) )
      {
        v115 = (3 * v9 + 1) >> 1;
        v116 = 8 * v115 + 8;
        if ( 8 * v9 + 8 >= v116 || v9 >= v115 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v128, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v128);
          sub_233E40((__int64)v128);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v117 = (unsigned int *)sub_186B300(v8 - 1, v116);
        v118 = v117[1];
        v8 = v117 + 2;
        *v117 = v115;
        a1[14].m128i_i64[1] = (__int64)(v117 + 2);
        LODWORD(v117) = v118;
        v12 = &v8[v118];
        i = *(_QWORD *)(v3 + 232);
        v11 = (_DWORD)v117 + 1;
      }
      else
      {
        v10 = v9;
        v11 = v9 + 1;
        v12 = &v8[v10];
      }
    }
    else
    {
      v119 = (_QWORD *)sub_186B270(0x18u);
      *v119 = 2;
      v11 = 1;
      v8 = v119 + 1;
      a1[14].m128i_i64[1] = (__int64)v8;
      v12 = v8;
      i = *(_QWORD *)(v3 + 232);
    }
    *v12 = v7;
    ++v5;
  }
  v13 = *(size_t **)(v3 + 152);
  result = (size_t *)*(unsigned int *)(v3 + 160);
  v15 = &v13[(_QWORD)result];
  if ( v13 == v15 )
    goto LABEL_39;
  while ( *v13 <= 1 )
  {
    if ( v15 == ++v13 )
      goto LABEL_39;
  }
  if ( v15 != v13 )
  {
    v122.m128i_i64[0] = v3;
    v16 = *v13;
    while ( 1 )
    {
      v17 = v4[10].m128i_u32[0];
      v18 = v4[10].m128i_i32[2];
      if ( 3 * (int)v17 < (unsigned int)(4 * (v18 + v4[10].m128i_i32[1])) )
      {
        v121.m128i_i32[0] = 2 * v17;
        n[0] = 8LL * (unsigned int)(2 * v17);
        v101 = (size_t *)sub_186B270(n[0]);
        v102 = v121.m128i_i32[0];
        v21 = n[0];
        v19 = v101;
        if ( v121.m128i_i32[0] )
        {
          memset(v101, 0, n[0]);
          v21 = n[0];
          v102 = v121.m128i_i32[0];
        }
        v103 = (char *)v4[9].m128i_i64[1];
        v104 = v4[10].m128i_u32[0];
        v20 = v102 - 1;
        v22 = (size_t *)((char *)v19 + v21);
        v105 = &v103[8 * v104];
        if ( v103 != v105 )
        {
          v106 = &v103[8 * v104];
          v107 = (__m128 *)v4;
          v108 = v13;
          v109 = v103;
          v110 = v107;
          do
          {
            while ( *(_QWORD *)v109 <= 1u )
            {
              v109 += 8;
              if ( v106 == v109 )
                goto LABEL_154;
            }
            v111 = 8LL * (*(_DWORD *)(*(_QWORD *)v109 + 12LL) & (unsigned int)v20);
            v112 = &v19[(unsigned __int64)v111 / 8];
            if ( v21 == v111 )
            {
LABEL_158:
              if ( v19 == v112 )
              {
LABEL_172:
                LODWORD(v125) = v102;
                v124 = v110;
                v123 = v21;
                v121.m128i_i32[0] = v102 - 1;
                n[0] = v16;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v113 = v19;
              while ( *v113 )
              {
                if ( v112 == ++v113 )
                  goto LABEL_172;
              }
            }
            else
            {
              v113 = &v19[(unsigned __int64)v111 / 8];
              while ( *v113 )
              {
                if ( v22 == ++v113 )
                  goto LABEL_158;
              }
            }
            v114 = *(_QWORD *)v109;
            v109 += 8;
            *v113 = v114;
          }
          while ( v106 != v109 );
LABEL_154:
          v105 = (char *)v110[9].m128_u64[1];
          v13 = v108;
          v4 = (__m128i *)v110;
        }
        if ( v105 )
        {
          LODWORD(v123) = v102;
          v121.m128i_i64[0] = v21;
          LODWORD(n[0]) = v102 - 1;
          sub_186B220(v105);
          v102 = v123;
          v21 = v121.m128i_i64[0];
          v20 = n[0];
        }
        v4[9].m128i_i64[1] = (__int64)v19;
        v18 = 0;
        v4[10].m128i_i32[0] = v102;
        v4[10].m128i_i32[2] = 0;
      }
      else
      {
        v19 = (size_t *)v4[9].m128i_i64[1];
        v20 = v17 - 1;
        v21 = 8 * v17;
        v22 = (size_t *)((char *)v19 + v21);
      }
      v23 = *(_DWORD *)(v16 + 12);
      v24 = 8LL * (v23 & (unsigned int)v20);
      v25 = &v19[(unsigned __int64)v24 / 8];
      if ( v24 != v21 )
      {
        v26 = &v19[(unsigned __int64)v24 / 8];
        v27 = nullptr;
        while ( 1 )
        {
          v28 = *v26;
          if ( *v26 > 1 )
          {
            if ( *(_DWORD *)(v28 + 12) == v23 && v28 == v16 )
            {
              *v26 = v16;
              goto LABEL_33;
            }
          }
          else
          {
            if ( !v28 )
            {
              if ( v27 )
                goto LABEL_170;
              v27 = v26;
              goto LABEL_171;
            }
            v27 = v26;
          }
          if ( ++v26 == v22 )
            goto LABEL_28;
        }
      }
      v27 = nullptr;
      while ( 1 )
      {
LABEL_28:
        if ( v25 == v19 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v29 = *v19;
        if ( *v19 <= 1 )
          break;
        if ( *(_DWORD *)(v29 + 12) == v23 && v29 == v16 )
        {
          *v19 = v16;
          goto LABEL_33;
        }
LABEL_27:
        ++v19;
      }
      if ( v29 )
        break;
      if ( v27 )
LABEL_170:
        v4[10].m128i_i32[2] = v18 - 1;
      else
        v27 = v19;
LABEL_171:
      *v27 = v16;
      ++v4[10].m128i_i32[1];
LABEL_33:
      result = v13 + 1;
      if ( v15 != v13 + 1 )
      {
        while ( 1 )
        {
          v16 = *result;
          v13 = result;
          if ( *result > 1 )
            break;
          if ( v15 == ++result )
            goto LABEL_38;
        }
        if ( v15 != result )
          continue;
      }
LABEL_38:
      v3 = v122.m128i_i64[0];
      goto LABEL_39;
    }
    v27 = v19;
    goto LABEL_27;
  }
LABEL_39:
  v30 = *(_QWORD *)(v3 + 176);
  v31 = v30 + 16LL * *(unsigned int *)(v3 + 184);
  if ( v30 != v31 )
  {
    while ( *(_QWORD *)v30 <= 1u )
    {
      v30 += 16;
      if ( v31 == v30 )
        goto LABEL_69;
    }
    if ( v31 != v30 )
    {
      v122.m128i_i64[0] = v3;
      v32 = *(_QWORD *)v30;
      v33 = (size_t *)v31;
      while ( 1 )
      {
        v34 = v4[11].m128i_u32[2];
        v35 = v4[12].m128i_i32[0];
        si128 = (__m128i)_mm_loadh_ps((const double *)(v30 + 8));
        if ( 3 * (int)v34 < (unsigned int)(4 * (v35 + v4[11].m128i_i32[3])) )
        {
          LODWORD(n[0]) = 2 * v34;
          v121 = si128;
          v39 = 16LL * (unsigned int)(2 * v34);
          v66 = (__m128 *)sub_186B270(v39);
          v67 = n[0];
          si128 = _mm_load_si128(&v121);
          v37 = v66;
          v68 = (__m128i *)&v66[v39 / 0x10];
          if ( LODWORD(n[0]) )
          {
            if ( (v39 & 0x10) == 0 || (*v66 = 0, ++v66, v68 != (__m128i *)v66) )
            {
              do
              {
                *v66 = 0;
                v66 += 2;
                v66[-1] = 0;
              }
              while ( v68 != (__m128i *)v66 );
            }
          }
          v69 = v4[11].m128i_i64[0];
          v38 = v67 - 1;
          v40 = (__m128 *)v68;
          v70 = 16LL * v4[11].m128i_u32[2];
          v71 = (__m128i *)(v69 + v70);
          if ( v69 != v69 + v70 )
          {
            v72 = v30;
            v73 = (const __m128i *)v4[11].m128i_i64[0];
            v74 = v32;
            v75 = v71;
            v76 = v67;
            do
            {
              while ( v73->m128i_i64[0] <= 1uLL )
              {
                if ( v75 == ++v73 )
                  goto LABEL_112;
              }
              v77 = 16LL * (*(_DWORD *)(v73->m128i_i64[0] + 12) & (unsigned int)v38);
              v78 = &v37[(unsigned __int64)v77 / 0x10];
              if ( v39 == v77 )
              {
LABEL_116:
                if ( v37 == v78 )
                {
LABEL_173:
                  v127 = v76;
                  v126 = v4;
                  v125 = v68;
                  LODWORD(v124) = v38;
                  v123 = v74;
                  v121.m128i_i64[0] = v72;
                  *(__m128i *)n = si128;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v79 = (__m128i *)v37;
                while ( v79->m128i_i64[0] )
                {
                  if ( v78 == (__m128 *)++v79 )
                    goto LABEL_173;
                }
              }
              else
              {
                v79 = (__m128i *)&v37[(unsigned __int64)v77 / 0x10];
                while ( v79->m128i_i64[0] )
                {
                  if ( v68 == ++v79 )
                    goto LABEL_116;
                }
              }
              v80 = _mm_loadu_si128(v73++);
              *v79 = v80;
            }
            while ( v75 != v73 );
LABEL_112:
            v67 = v76;
            v71 = (__m128i *)v4[11].m128i_i64[0];
            v30 = v72;
            v32 = v74;
          }
          if ( v71 )
          {
            LODWORD(v124) = v67;
            v123 = (__int64)v68;
            v121.m128i_i32[0] = v38;
            *(__m128i *)n = si128;
            sub_186B220(v71);
            v67 = (int)v124;
            v40 = (__m128 *)v123;
            v38 = v121.m128i_i32[0];
            si128 = _mm_load_si128((const __m128i *)n);
          }
          v4[11].m128i_i64[0] = (__int64)v37;
          v35 = 0;
          v4[11].m128i_i32[2] = v67;
          v4[12].m128i_i32[0] = 0;
        }
        else
        {
          v37 = (__m128 *)v4[11].m128i_i64[0];
          v38 = v34 - 1;
          v39 = 16 * v34;
          v40 = &v37[v34];
        }
        v41 = *(_DWORD *)(v32 + 12);
        v42 = 16LL * (v41 & (unsigned int)v38);
        v43 = &v37[(unsigned __int64)v42 / 0x10];
        if ( v42 != v39 )
        {
          v44 = &v37[(unsigned __int64)v42 / 0x10];
          v45 = nullptr;
          while ( 1 )
          {
            v46 = v44->m128_u64[0];
            if ( v44->m128_u64[0] > 1 )
            {
              if ( *(_DWORD *)(v46 + 12) == v41 && v46 == v32 )
              {
                *v44 = (__m128)si128;
                goto LABEL_63;
              }
            }
            else
            {
              if ( !v46 )
              {
                if ( v45 )
                  goto LABEL_164;
                v45 = v44;
                goto LABEL_165;
              }
              v45 = v44;
            }
            if ( ++v44 == v40 )
              goto LABEL_58;
          }
        }
        v45 = nullptr;
        while ( 1 )
        {
LABEL_58:
          if ( v43 == v37 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v47 = v37->m128_u64[0];
          if ( v37->m128_u64[0] <= 1 )
            break;
          if ( *(_DWORD *)(v47 + 12) == v41 && v47 == v32 )
          {
            *v37 = (__m128)si128;
            goto LABEL_63;
          }
LABEL_57:
          ++v37;
        }
        if ( v47 )
          break;
        if ( v45 )
LABEL_164:
          v4[12].m128i_i32[0] = v35 - 1;
        else
          v45 = v37;
LABEL_165:
        *v45 = (__m128)si128;
        ++v4[11].m128i_i32[3];
LABEL_63:
        result = (size_t *)(v30 + 16);
        if ( v33 != (size_t *)(v30 + 16) )
        {
          while ( 1 )
          {
            v32 = *result;
            v30 = (__int64)result;
            if ( *result > 1 )
              break;
            result += 2;
            if ( v33 == result )
              goto LABEL_68;
          }
          if ( v33 != result )
            continue;
        }
LABEL_68:
        v3 = v122.m128i_i64[0];
        goto LABEL_69;
      }
      v45 = v37;
      goto LABEL_57;
    }
  }
LABEL_69:
  v48 = *(size_t **)(v3 + 200);
  v49 = 2LL * *(unsigned int *)(v3 + 208);
  v50 = &v48[v49];
  if ( v48 == &v48[v49] )
    return result;
  while ( *v48 <= 1 )
  {
    v48 += 2;
    if ( v50 == v48 )
      return result;
  }
  if ( v50 != v48 )
  {
    v51 = *v48;
    while ( 1 )
    {
      v52 = v4[13].m128i_u32[0];
      v53 = v4[13].m128i_i32[2];
      v54 = (__m128i)_mm_loadh_ps((const double *)v48 + 1);
      if ( 3 * (int)v52 < (unsigned int)(4 * (v53 + v4[13].m128i_i32[1])) )
      {
        v121.m128i_i32[0] = 2 * v52;
        v122 = v54;
        n[0] = 16LL * (unsigned int)(2 * v52);
        v81 = (__m128 *)sub_186B270(n[0]);
        v82 = v121.m128i_i32[0];
        v57 = n[0];
        v54 = _mm_load_si128(&v122);
        v55 = v81;
        v83 = (__m128 *)((char *)v81 + n[0]);
        if ( v121.m128i_i32[0] )
        {
          if ( (n[0] & 0x10) == 0 || (*v81 = 0, ++v81, v83 != v81) )
          {
            do
            {
              *v81 = 0;
              v81 += 2;
              v81[-1] = 0;
            }
            while ( v83 != v81 );
          }
        }
        v84 = v4[12].m128i_i64[1];
        v56 = v82 - 1;
        v58 = v83;
        v85 = 16LL * v4[13].m128i_u32[0];
        v86 = (void *)(v84 + v85);
        if ( v84 != v84 + v85 )
        {
          v87 = (__m128i *)v83;
          v88 = v51;
          v89 = v48;
          v90 = (const __m128i *)(v84 + v85);
          v91 = (const __m128i *)v4[12].m128i_i64[1];
          v92 = v4;
          v93 = v82;
          v94 = v55;
          v95 = (__m128 *)v87;
          v96 = v87;
          do
          {
            while ( v91->m128i_i64[0] <= 1uLL )
            {
              if ( v90 == ++v91 )
                goto LABEL_134;
            }
            v97 = 16LL * (*(_DWORD *)(v91->m128i_i64[0] + 12) & (unsigned int)v56);
            v98 = &v94[(unsigned __int64)v97 / 0x10];
            if ( v57 == v97 )
            {
LABEL_138:
              if ( v94 == v98 )
              {
LABEL_174:
                LODWORD(v126) = v93;
                v125 = v92;
                v124 = v95;
                v123 = v57;
                v122.m128i_i32[0] = v56;
                v121.m128i_i64[0] = v88;
                *(__m128i *)n = v54;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v99 = (__m128i *)v94;
              while ( v99->m128i_i64[0] )
              {
                if ( v98 == (__m128 *)++v99 )
                  goto LABEL_174;
              }
            }
            else
            {
              v99 = (__m128i *)&v94[(unsigned __int64)v97 / 0x10];
              while ( v99->m128i_i64[0] )
              {
                if ( v96 == ++v99 )
                  goto LABEL_138;
              }
            }
            v100 = _mm_loadu_si128(v91++);
            *v99 = v100;
          }
          while ( v90 != v91 );
LABEL_134:
          v82 = v93;
          v86 = (void *)v92[12].m128i_i64[1];
          v48 = v89;
          v55 = v94;
          v51 = v88;
          v58 = v95;
          v4 = v92;
        }
        if ( v86 )
        {
          LODWORD(v123) = v82;
          v122.m128i_i64[0] = v57;
          v121.m128i_i32[0] = v56;
          *(__m128i *)n = v54;
          sub_186B220(v86);
          v82 = v123;
          v57 = v122.m128i_i64[0];
          v56 = v121.m128i_i32[0];
          v54 = _mm_load_si128((const __m128i *)n);
        }
        v4[12].m128i_i64[1] = (__int64)v55;
        v53 = 0;
        v4[13].m128i_i32[0] = v82;
        v4[13].m128i_i32[2] = 0;
      }
      else
      {
        v55 = (__m128 *)v4[12].m128i_i64[1];
        v56 = v52 - 1;
        v57 = 16 * v52;
        v58 = (__m128 *)((char *)v55 + v57);
      }
      v59 = *(_DWORD *)(v51 + 12);
      v60 = 16LL * (v59 & (unsigned int)v56);
      v61 = &v55[(unsigned __int64)v60 / 0x10];
      if ( v60 != v57 )
      {
        v62 = &v55[(unsigned __int64)v60 / 0x10];
        v63 = nullptr;
        while ( 1 )
        {
          v64 = v62->m128_u64[0];
          if ( v62->m128_u64[0] > 1 )
          {
            if ( *(_DWORD *)(v64 + 12) == v59 && v64 == v51 )
            {
              *v62 = (__m128)v54;
              goto LABEL_93;
            }
          }
          else
          {
            if ( !v64 )
            {
              if ( v63 )
                goto LABEL_167;
              v63 = v62;
              goto LABEL_168;
            }
            v63 = v62;
          }
          if ( ++v62 == v58 )
            goto LABEL_88;
        }
      }
      v63 = nullptr;
      while ( 1 )
      {
LABEL_88:
        if ( v61 == v55 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v65 = v55->m128_u64[0];
        if ( v55->m128_u64[0] <= 1 )
          break;
        if ( *(_DWORD *)(v65 + 12) == v59 && v65 == v51 )
        {
          *v55 = (__m128)v54;
          goto LABEL_93;
        }
LABEL_87:
        ++v55;
      }
      if ( v65 )
        break;
      if ( v63 )
LABEL_167:
        v4[13].m128i_i32[2] = v53 - 1;
      else
        v63 = v55;
LABEL_168:
      *v63 = (__m128)v54;
      ++v4[13].m128i_i32[1];
LABEL_93:
      result = v48 + 2;
      if ( v50 != v48 + 2 )
      {
        while ( 1 )
        {
          v51 = *result;
          v48 = result;
          if ( *result > 1 )
            break;
          result += 2;
          if ( v50 == result )
            return result;
        }
        if ( v50 != result )
          continue;
      }
      return result;
    }
    v63 = v55;
    goto LABEL_87;
  }
  return result;
}

