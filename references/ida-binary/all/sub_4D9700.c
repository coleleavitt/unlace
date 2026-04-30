__int64 __fastcall sub_4D9700(_QWORD *a1, char *a2, __int64 *a3, __int64 a4, int a5)
{
  size_t v5; // rbx
  __int64 *v6; // r14
  __int64 result; // rax
  bool v8; // zf
  __int64 v9; // r12
  char v10; // bp
  const char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 *v14; // rax
  wint_t v15; // r13d
  __int64 v16; // r15
  wint_t utf8_char; // eax
  unsigned __int8 *v18; // rax
  unsigned __int16 v19; // ax
  void *v20; // rax
  unsigned __int16 v21; // dx
  const char *v22; // rdx
  unsigned __int64 v23; // r12
  wint_t v24; // ebx
  unsigned __int8 *v25; // r13
  wint_t v26; // r14d
  unsigned int v27; // ebx
  unsigned __int64 v28; // r12
  int v29; // edi
  __int64 v30; // r14
  size_t v31; // rbx
  size_t v32; // r15
  char v33; // r13
  _BYTE *v34; // rsi
  unsigned int v35; // r15d
  __int64 v36; // rax
  char v37; // r13
  int v38; // edi
  int v39; // edi
  unsigned __int64 v40; // r13
  __int64 v41; // r12
  void **v42; // r15
  int v43; // r8d
  __int32 v44; // r8d
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  int v49; // ebx
  char *v50; // rax
  double v51; // xmm0_8
  int v52; // eax
  double v53; // xmm1_8
  size_t v54; // rdx
  void *v55; // rax
  char *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r13
  void **v59; // r12
  char v60; // r8
  __int64 *v61; // r15
  __int64 v62; // r14
  __int64 v63; // rcx
  char *v64; // rbx
  _QWORD *v65; // r13
  __int64 v66; // r14
  int v67; // eax
  __int64 v68; // rdi
  wint_t v69; // ebp
  wint_t v70; // r12d
  wint_t v71; // eax
  __int64 v72; // rax
  const char *v73; // rdi
  int v74; // ecx
  unsigned int v75; // eax
  const char *v76; // r8
  unsigned __int64 v77; // rbx
  void *v78; // rbp
  __m128i v79; // xmm0
  __int64 v80; // rdi
  int v81; // eax
  __int128 v82; // xmm0
  __int64 v83; // rax
  double v84; // xmm1_8
  void *v85; // rax
  int v86; // eax
  double v87; // xmm1_8
  size_t v88; // rdx
  size_t v89; // rcx
  __m128i v90; // [rsp+0h] [rbp-138h] BYREF
  __int64 *v91; // [rsp+10h] [rbp-128h]
  const char **v92; // [rsp+18h] [rbp-120h]
  __int64 v93; // [rsp+20h] [rbp-118h]
  char **v94; // [rsp+28h] [rbp-110h]
  wint_t wc; // [rsp+30h] [rbp-108h]
  int v96; // [rsp+34h] [rbp-104h]
  _QWORD *v97; // [rsp+38h] [rbp-100h]
  void *src; // [rsp+40h] [rbp-F8h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-F0h]
  void *v100; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v101; // [rsp+68h] [rbp-D0h]
  __int64 v102; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v103; // [rsp+88h] [rbp-B0h]
  __int64 v104; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v105; // [rsp+A8h] [rbp-90h]
  void *v106[2]; // [rsp+C0h] [rbp-78h] BYREF
  _OWORD v107[2]; // [rsp+D0h] [rbp-68h] BYREF
  unsigned __int64 v108; // [rsp+F8h] [rbp-40h]

  v97 = a1;
  v94 = (char **)a2;
  v92 = (const char **)a3;
  LODWORD(v93) = a5;
  v108 = __readfsqword(0x28u);
  v90.m128i_i64[0] = *((_QWORD *)a2 + 3);
  result = 0;
  if ( (~a4 & v90.m128i_i64[0]) != 0 )
    return result;
  v8 = *((_QWORD *)a2 + 1) == 0;
  v9 = *a3;
  v10 = a5;
  *(_OWORD *)v106 = 0;
  v11 = &s1;
  memset(v107, 0, sizeof(v107));
  if ( !v8 )
    v11 = *(const char **)a2;
  v102 = (__int64)v11;
  v90.m128i_i16[0] = -1;
  v91 = &v102;
  while ( 1 )
  {
    wc = get_utf8_char(v91);
    if ( wc == -1 )
    {
      v14 = (unsigned __int8 *)v102;
      v12 = ++v102;
      wc = *v14;
    }
    if ( !wc )
      break;
    v15 = wc;
    if ( !v10 )
      v15 = towupper(wc);
    v104 = v9;
    LODWORD(v5) = 0;
    v6 = &v104;
    while ( 1 )
    {
      utf8_char = get_utf8_char(&v104);
      if ( utf8_char == -1 )
      {
        v18 = (unsigned __int8 *)v104;
        v16 = ++v104;
        utf8_char = *v18;
      }
      else
      {
        if ( !utf8_char )
          goto LABEL_81;
        v16 = v104;
      }
      if ( !v10 )
        utf8_char = towupper(utf8_char);
      if ( v15 == utf8_char )
        break;
      LODWORD(v5) = v5 + 1;
      v9 = v16;
    }
    if ( !v9 )
    {
LABEL_81:
      result = 0;
      goto LABEL_82;
    }
    v19 = v90.m128i_i16[0] + v5 + 1;
    v90.m128i_i16[0] = v19;
    if ( dword_8D1DFC > 2 )
      __printf_chk(1, "Found letter: %c (u+%04X), at offset: %zu, index: %3hd\n", wc, wc, v9 - (_QWORD)*v92, v19);
    v20 = v106[1];
    a2 = (char *)v106[0];
    if ( *(_QWORD *)&v107[0] < (unsigned __int64)v106[1] + 1 )
    {
      v106[0] = (void *)qvector_reserve(v106, v106[0], (char *)v106[1] + 1, 2);
      a2 = (char *)v106[0];
      v20 = v106[1];
    }
    v21 = v90.m128i_i16[0];
    v9 = v16;
    *(_WORD *)&a2[2 * (_QWORD)v20] = v90.m128i_i16[0];
    ++v106[1];
    DWORD2(v107[1]) += v21;
  }
  if ( dword_8D1DFC > 0 )
  {
    v22 = &s1;
    if ( v92[1] )
      v22 = *v92;
    a2 = "Found match: \"%s\"\n";
    __printf_chk(1, "Found match: \"%s\"\n", v22);
  }
  if ( (unsigned __int64)v94[1] <= 1 || (v23 = (unsigned __int64)v92[1], v23 <= 1) )
  {
    if ( under_debugger )
      BUG();
    LODWORD(v56) = interr(40528, a2, v12, v13, 0.0);
    goto LABEL_144;
  }
  v24 = **v94;
  v25 = (unsigned __int8 *)*v92;
  v26 = **v92;
  if ( !(_BYTE)v93 )
  {
    v24 = towupper(v24);
    v26 = towupper(v26);
  }
  src = nullptr;
  if ( v26 == v24 )
    HIDWORD(v107[1]) |= 2u;
  else
    HIDWORD(v107[1]) &= ~2u;
  *(_OWORD *)n = 0;
  v27 = (char)*v25;
  v28 = v23 - 1;
  v29 = *v25;
  if ( v27 <= 0x7F )
  {
    if ( ispunct(v27) )
    {
      v30 = 1;
      v5 = 0;
      if ( v28 != 1 )
        goto LABEL_42;
      v6 = (__int64 *)v94;
      v100 = nullptr;
      v101 = 0;
LABEL_61:
      v40 = 1;
      LODWORD(v41) = 0;
      v103 = 0;
      v42 = &v100;
      v102 = 0;
      v43 = *((_DWORD *)v94 + 2);
      goto LABEL_62;
    }
    v29 = v27;
  }
  v30 = 0;
  v31 = 2;
  v32 = 0;
  v33 = tolower(v29);
LABEL_38:
  v34 = src;
  if ( n[1] < 2 )
  {
LABEL_51:
    src = (void *)qvector_reserve(&src, v34, v31, 1);
    v34 = src;
  }
LABEL_39:
  n[0] = v31;
  v34[v32] = v33;
  *((_BYTE *)src + v32 + 1) = 0;
  v5 = n[0];
  while ( v28 != ++v30 )
  {
    v25 = (unsigned __int8 *)*v92;
LABEL_42:
    if ( v92[1] )
    {
      v35 = (char)v25[v30];
      v36 = v30 - 1;
      goto LABEL_44;
    }
    v35 = (char)v25[v30];
    v36 = v30 - 1;
    if ( v30 == 1 )
    {
      if ( v35 > 0x7F )
      {
        v30 = 1;
      }
      else
      {
        v37 = 0;
        if ( isupper(v35) )
        {
          v39 = 0;
          goto LABEL_54;
        }
LABEL_55:
        v38 = v37;
        if ( isalpha(v35) )
        {
LABEL_48:
          if ( ispunct(v38) )
            goto LABEL_49;
        }
      }
    }
    else
    {
LABEL_44:
      if ( v35 <= 0x7F )
      {
        v37 = v25[v36];
        if ( isupper(v35) )
        {
          v39 = v37;
          if ( (unsigned int)v37 > 0x7F )
            goto LABEL_49;
LABEL_54:
          if ( !isupper(v39) )
          {
LABEL_49:
            v33 = tolower(v35);
            if ( !v5 )
            {
              v32 = 0;
              v31 = 2;
              goto LABEL_38;
            }
            v32 = v5 - 1;
            v34 = src;
            v31 = v5 + 1;
            if ( n[1] >= v31 )
              goto LABEL_39;
            goto LABEL_51;
          }
          goto LABEL_55;
        }
        if ( isalpha(v35) )
        {
          v38 = v37;
          if ( (unsigned int)v37 <= 0x7F )
            goto LABEL_48;
        }
      }
    }
  }
  v6 = (__int64 *)v94;
  v100 = nullptr;
  v101 = 0;
  if ( !v5 )
    goto LABEL_61;
  v55 = (void *)qalloc_or_throw(v5);
  a2 = (char *)src;
  v100 = v55;
  *((_QWORD *)&v101 + 1) = v5;
  memcpy(v55, src, v5);
  *(_QWORD *)&v101 = v5;
  v56 = v94[1];
  if ( (unsigned __int64)v56 < v5 )
  {
    v41 = (int)v56;
    v42 = (void **)v94;
    v6 = (__int64 *)&v100;
    v40 = (int)v56 + 1;
    goto LABEL_88;
  }
LABEL_144:
  LODWORD(v40) = v5 + 1;
  v41 = (int)v5;
  v42 = &v100;
  LODWORD(v5) = (_DWORD)v56;
  v40 = (int)v40;
LABEL_88:
  v43 = v5;
  v102 = 0;
  v103 = 0;
  if ( !v40 )
  {
    v104 = 0;
    v47 = 0;
    v105 = 0;
    if ( (int)v5 > 0 )
      goto LABEL_90;
    v49 = *(_DWORD *)(4 * v41);
    goto LABEL_72;
  }
LABEL_62:
  v90.m128i_i32[0] = v43;
  v102 = qvector_reserve(v91, 0, v40, 4);
  v44 = v90.m128i_i32[0];
  v45 = v103;
  if ( (unsigned __int64)v103 < v40 )
  {
    *(_DWORD *)(v102 + 4 * v103) = 0;
    v46 = v45 + 1;
    if ( v46 < v40 )
    {
      do
        *(_DWORD *)(v102 + 4 * v46++) = 0;
      while ( v46 != v40 );
    }
  }
  v90.m128i_i32[0] = v44;
  *(_QWORD *)&v103 = v40;
  v104 = 0;
  v105 = 0;
  v104 = qvector_reserve(&v104, 0, v40, 4);
  v47 = v104;
  v43 = v90.m128i_i32[0];
  v48 = v105;
  if ( (unsigned __int64)v105 < v40 )
  {
    do
    {
      *(_DWORD *)(v47 + 4 * v48++) = 0;
      v47 = v104;
    }
    while ( v48 != v40 );
  }
  *(_QWORD *)&v105 = v40;
  a2 = (char *)(int)v41;
  if ( v43 > 0 )
  {
LABEL_90:
    a2 = (char *)(int)v41;
    v57 = 0;
    v58 = 4LL * (int)v41 + 4;
    if ( (int)v41 > 0 )
    {
      v96 = v43;
      v59 = v42;
      v60 = v10;
      v61 = v6;
      v62 = 0;
      do
      {
        v93 = v58;
        v63 = v62;
        v64 = nullptr;
        v65 = v59;
        v66 = v47;
        do
        {
          v69 = *(char *)(*v61 + v63);
          v70 = v64[*v65];
          if ( !v60 )
          {
            v91 = (__int64 *)a2;
            LOBYTE(wc) = 0;
            v90.m128i_i64[0] = v63;
            v69 = towupper(v69);
            v71 = towupper(v70);
            v60 = 0;
            v63 = v90.m128i_i64[0];
            v70 = v71;
          }
          if ( v70 == v69 )
          {
            v67 = *(_DWORD *)(v102 + 4LL * (_QWORD)v64) + 1;
          }
          else
          {
            v67 = *(_DWORD *)(v66 + 4LL * (_QWORD)v64);
            if ( v67 < *(_DWORD *)(v102 + 4LL * (_QWORD)v64 + 4) )
              v67 = *(_DWORD *)(v102 + 4LL * (_QWORD)v64 + 4);
          }
          *(_DWORD *)(v66 + 4LL * (_QWORD)v64 + 4) = v67;
          v68 = v104;
          ++v64;
          v66 = v104;
        }
        while ( v64 != a2 );
        v59 = (void **)v65;
        v58 = v93;
        v72 = 4;
        while ( 1 )
        {
          *(_DWORD *)(v102 + v72) = *(_DWORD *)(v68 + v72);
          v72 += 4;
          if ( v58 == v72 )
            break;
          v68 = v104;
        }
        v47 = v104;
        v62 = v63 + 1;
      }
      while ( v96 > (int)v63 + 1 );
    }
    else
    {
      do
        ++v57;
      while ( v43 > (int)v57 );
    }
  }
  v49 = *(_DWORD *)(v47 + 4LL * (_QWORD)a2);
  if ( v47 )
  {
    *(_QWORD *)&v105 = 0;
    qfree(v47, a2);
  }
  if ( v102 )
  {
    *(_QWORD *)&v103 = 0;
    qfree(v102, a2);
  }
LABEL_72:
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    qfree(v100, a2);
  }
  v50 = v94[1];
  if ( v49 <= 0 )
  {
    v54 = (size_t)(v50 - 1);
    if ( !v50 )
      goto LABEL_80;
    goto LABEL_108;
  }
  v51 = (double)v49;
  if ( v50 )
  {
    v83 = (__int64)(v50 - 1);
    v54 = v83;
    if ( v83 < 0 )
      v84 = (double)(int)(v83 & 1 | ((unsigned __int64)v83 >> 1))
          + (double)(int)(v83 & 1 | ((unsigned __int64)v83 >> 1));
    else
      v84 = (double)(int)v83;
    *((double *)v107 + 1) = v51 / v84;
    if ( n[0] )
    {
      v86 = LODWORD(n[0]) - 1;
      if ( (signed __int64)(n[0] - 1) < 0 )
      {
        v89 = v86 & 1 | ((n[0] - 1) >> 1);
        v87 = (double)(int)v89 + (double)(int)v89;
      }
      else
      {
        v87 = (double)v86;
      }
      *(double *)&v107[1] = v51 / v87;
    }
    else
    {
      *(double *)&v107[1] = v51 / 0.0;
    }
LABEL_108:
    a2 = *v94;
    goto LABEL_109;
  }
  *((double *)v107 + 1) = v51 / 0.0;
  if ( n[0] )
  {
    v52 = LODWORD(n[0]) - 1;
    if ( (signed __int64)(n[0] - 1) < 0 )
    {
      v88 = v52 & 1 | ((n[0] - 1) >> 1);
      v53 = (double)(int)v88 + (double)(int)v88;
    }
    else
    {
      v53 = (double)v52;
    }
    *(double *)&v107[1] = v51 / v53;
  }
  else
  {
    *(double *)&v107[1] = v51 / 0.0;
  }
LABEL_80:
  v54 = 0;
  a2 = (char *)&s1;
LABEL_109:
  v73 = &s1;
  if ( v92[1] )
    v73 = *v92;
  v74 = strncasecmp(v73, a2, v54);
  v75 = HIDWORD(v107[1]) & 0xFFFFFFFB;
  if ( !v74 )
    v75 = HIDWORD(v107[1]) | 4;
  HIDWORD(v107[1]) = v75;
  if ( dword_8D1DFC > 1 )
  {
    v76 = &s1;
    if ( n[0] )
      v76 = (const char *)src;
    a2 = "fuzzy_search(): success!\n"
         "\tchar_match_index_sum_=%d\n"
         "\tfirst_char_match_=%d\n"
         "\tword_boundary_chars=%s\n"
         "\tnum_wb_matches=%d\n"
         "\tboundary_chars_ratio=%f\n"
         "\tboundary_chars_use=%f\n";
    __printf_chk(
      1,
      "fuzzy_search(): success!\n"
      "\tchar_match_index_sum_=%d\n"
      "\tfirst_char_match_=%d\n"
      "\tword_boundary_chars=%s\n"
      "\tnum_wb_matches=%d\n"
      "\tboundary_chars_ratio=%f\n"
      "\tboundary_chars_use=%f\n",
      DWORD2(v107[1]),
      (v75 >> 1) & 1,
      v76,
      v49,
      *((double *)v107 + 1),
      *(double *)&v107[1]);
  }
  if ( v97 )
  {
    v77 = (unsigned __int64)v106[1];
    v78 = nullptr;
    if ( v106[1] )
    {
      v85 = (void *)qalloc_or_throw(2 * (__int64)v106[1]);
      a2 = (char *)v106[0];
      v78 = v85;
      memcpy(v85, v106[0], 2 * v77);
    }
    v79 = _mm_unpacklo_epi64((__m128i)v77, (__m128i)v77);
    v80 = *v97;
    if ( *v97 )
    {
      v97[1] = 0;
      v90 = v79;
      qfree(v80, a2);
      v79 = _mm_load_si128(&v90);
    }
    a2 = (char *)v97;
    v81 = HIDWORD(v107[1]);
    *(__m128i *)(v97 + 1) = v79;
    v82 = *(_OWORD *)((char *)v107 + 8);
    *(_QWORD *)a2 = v78;
    *(_OWORD *)(a2 + 24) = v82;
    *((_QWORD *)a2 + 5) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(DWORD2(v107[1])), _mm_cvtsi32_si128(v81 | 0x30u)).m128i_u64[0];
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src, a2);
  }
  result = 1;
LABEL_82:
  if ( v106[0] )
  {
    v90.m128i_i8[0] = result;
    v106[1] = nullptr;
    qfree(v106[0], a2);
    return v90.m128i_u8[0];
  }
  return result;
}
