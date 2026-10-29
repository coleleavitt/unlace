__m128i *__fastcall sub_AC6510(
        __m128i *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8)
{
  _QWORD *v10; // rbx
  __int64 v11; // rax
  void **p_s2; // rbp
  void **v13; // r13
  void **v14; // r14
  size_t v15; // r8
  _BYTE *v16; // rbp
  __int64 v17; // rax
  char v18; // r13
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  size_t v23; // r13
  __m128i *v24; // rax
  __m128i *v25; // rax
  __m128i *v26; // rax
  __m128i *v27; // rdi
  size_t v28; // rax
  size_t v29; // rax
  void **v30; // rdi
  int v31; // eax
  __m128i *v32; // r9
  __m128i *v33; // rax
  __m128i *v34; // rdi
  size_t v35; // rdx
  size_t v36; // rax
  void **v38; // r14
  __int64 v39; // r14
  const char *v40; // r13
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  void **v45; // rax
  void *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  void **v50; // r8
  __int64 v51; // rax
  int v52; // eax
  size_t v53; // rdx
  size_t v54; // rdx
  void **p_src; // [rsp+0h] [rbp-1D8h] BYREF
  void **v56; // [rsp+8h] [rbp-1D0h]
  void **v57; // [rsp+10h] [rbp-1C8h]
  __int64 v58; // [rsp+18h] [rbp-1C0h]
  _BYTE **v59; // [rsp+20h] [rbp-1B8h]
  void **v60; // [rsp+28h] [rbp-1B0h]
  __int64 v61; // [rsp+30h] [rbp-1A8h]
  void **v62; // [rsp+38h] [rbp-1A0h]
  void **v63; // [rsp+40h] [rbp-198h]
  _BYTE *v64; // [rsp+48h] [rbp-190h]
  __m128i *v65; // [rsp+50h] [rbp-188h]
  unsigned __int64 v66; // [rsp+58h] [rbp-180h] BYREF
  char v67; // [rsp+6Fh] [rbp-169h] BYREF
  void *v68; // [rsp+70h] [rbp-168h] BYREF
  _BYTE *v69; // [rsp+78h] [rbp-160h] BYREF
  void *s2; // [rsp+80h] [rbp-158h] BYREF
  size_t n[2]; // [rsp+88h] [rbp-150h] BYREF
  void *v72[4]; // [rsp+A0h] [rbp-138h] BYREF
  void *v73; // [rsp+C0h] [rbp-118h] BYREF
  size_t v74; // [rsp+C8h] [rbp-110h]
  void *v75; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v76; // [rsp+E8h] [rbp-F0h]
  _BYTE v77[16]; // [rsp+F0h] [rbp-E8h] BYREF
  void *v78[2]; // [rsp+100h] [rbp-D8h] BYREF
  __m128i v79; // [rsp+110h] [rbp-C8h] BYREF
  void *s1; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v81; // [rsp+128h] [rbp-B0h]
  __m128i v82; // [rsp+130h] [rbp-A8h] BYREF
  void *v83; // [rsp+140h] [rbp-98h] BYREF
  __int64 v84; // [rsp+148h] [rbp-90h]
  _BYTE v85[16]; // [rsp+150h] [rbp-88h] BYREF
  void *src; // [rsp+160h] [rbp-78h] BYREF
  size_t v87; // [rsp+168h] [rbp-70h]
  __m128i v88; // [rsp+170h] [rbp-68h] BYREF
  __int64 v89; // [rsp+180h] [rbp-58h]
  char v90; // [rsp+188h] [rbp-50h]
  int v91; // [rsp+18Ch] [rbp-4Ch]
  void **p_s1; // [rsp+190h] [rbp-48h]

  v10 = a2 + 2183;
  v11 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL];
  v66 = a3;
  p_s2 = &s2;
  v13 = a7;
  v58 = a4;
  v61 = a5;
  v14 = &a7[a8];
  v68 = (void *)(v11 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v11 | (unsigned __int8)a3) & 7);
  sub_F785A0(&s2, &v66, a2 + 2183);
  v62 = v72;
  sub_F785A0(v72, &v68, a2 + 2183);
  if ( v14 == a7 )
  {
LABEL_14:
    v17 = v58;
    v18 = 0;
    v19 = v58 + 16 * v61;
    if ( v58 == v19 )
    {
LABEL_15:
      v20 = v66;
      v67 = 0;
      v69 = (_BYTE *)sub_AC54E0(a2, (_BYTE *)v66, &v67);
      if ( v67 || v18 )
      {
        v57 = &v73;
        v59 = &v69;
        goto LABEL_18;
      }
LABEL_86:
      v39 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v39 + 16) - 57 <= 1
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1
        && (v39 = sub_F63050(*(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL), v20, v21, v22)) != 0 )
      {
        v88 = 0;
        p_src = &src;
        v40 = "values";
        s1 = &v82;
        v81 = 0;
        v82.m128i_i8[0] = 0;
        src = &off_2BEBE68;
        LODWORD(v87) = 0;
        v90 = 0;
        v91 = 1;
        v89 = 0;
        p_s1 = &s1;
        sub_227B8B0(&src, 0, 0, 0);
        if ( *(_DWORD *)(v39 + 20) <= 1u )
          v40 = "value";
        v56 = p_src;
        v41 = sub_995540((__int64)p_src, "'");
        v42 = sub_227BF10(v41, s2, n[0]);
        v43 = sub_995540(v42, "' (vector of ");
        v44 = sub_227B910(v43, *(unsigned int *)(v39 + 20));
        v45 = (void **)sub_995540(v44, " '");
        v46 = *(void **)(v39 + 32);
        p_src = v45;
        v78[0] = v46;
        sub_F785A0(&v83, v78, v10);
        v47 = sub_227BF10(p_src, v83, v84);
        v48 = sub_995540(v47, "' ");
        v49 = sub_995540(v48, v40);
        sub_995540(v49, ")");
        v50 = v56;
        if ( v83 != v85 )
        {
          p_src = v56;
          operator delete(v83);
          v50 = v56;
        }
        a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
        if ( s1 == &v82 )
        {
          a1[1] = _mm_load_si128(&v82);
        }
        else
        {
          a1->m128i_i64[0] = (__int64)s1;
          a1[1].m128i_i64[0] = v82.m128i_i64[0];
        }
        v51 = v81;
        v81 = 0;
        s1 = &v82;
        a1->m128i_i64[1] = v51;
        v82.m128i_i8[0] = 0;
        src = &off_2BEBE68;
        sub_227B7A0(v50);
        if ( s1 != &v82 )
          operator delete(s1);
        goto LABEL_77;
      }
    }
    else
    {
LABEL_60:
      while ( *(_DWORD *)v17 != 8 || v66 != *(_QWORD *)(v17 + 8) )
      {
        v17 += 16;
        if ( v19 == v17 )
          goto LABEL_15;
      }
    }
    v84 = 0;
    v85[0] = 0;
    v83 = v85;
    sub_995C30((__int64)&v83, n[0] + 1);
    if ( v84 == 0x7FFFFFFFFFFFFFFFLL
      || (sub_9EE560(&v83, "'", 1u), sub_9EE560(&v83, s2, n[0]), v84 == 0x7FFFFFFFFFFFFFFFLL) )
    {
LABEL_131:
      std::__throw_length_error("basic_string::append");
    }
    v33 = (__m128i *)sub_9EE560(&v83, "'", 1u);
    src = &v88;
    if ( (__m128i *)v33->m128i_i64[0] == &v33[1] )
    {
      v88 = _mm_loadu_si128(v33 + 1);
    }
    else
    {
      src = (void *)v33->m128i_i64[0];
      v88.m128i_i64[0] = v33[1].m128i_i64[0];
    }
    v87 = v33->m128i_u64[1];
    v33->m128i_i64[0] = (__int64)v33[1].m128i_i64;
    v34 = (__m128i *)s2;
    v33->m128i_i64[1] = 0;
    v33[1].m128i_i8[0] = 0;
    if ( src == &v88 )
    {
      v53 = v87;
      if ( v87 )
      {
        if ( v87 == 1 )
        {
          v34->m128i_i8[0] = v88.m128i_i8[0];
        }
        else
        {
          p_src = &src;
          memcpy(v34, src, v87);
        }
        v53 = v87;
        v34 = (__m128i *)s2;
      }
      n[0] = v53;
      v34->m128i_i8[v53] = 0;
      v34 = (__m128i *)src;
      goto LABEL_70;
    }
    if ( v34 == (__m128i *)(p_s2 + 2) )
    {
      p_src = (void **)v88.m128i_i64[0];
      s2 = src;
      *(__m128 *)n = _mm_loadh_ps((const double *)&p_src);
    }
    else
    {
      p_src = (void **)v88.m128i_i64[0];
      v35 = n[1];
      s2 = src;
      *(__m128 *)n = _mm_loadh_ps((const double *)&p_src);
      if ( v34 )
      {
        src = v34;
        v88.m128i_i64[0] = v35;
LABEL_70:
        v87 = 0;
        v34->m128i_i8[0] = 0;
        if ( src != &v88 )
          operator delete(src);
        if ( v83 != v85 )
          operator delete(v83);
        a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
        if ( s2 == p_s2 + 2 )
        {
          a1[1] = _mm_load_si128((const __m128i *)&n[1]);
        }
        else
        {
          a1->m128i_i64[0] = (__int64)s2;
          a1[1].m128i_i64[0] = n[1];
        }
        v36 = n[0];
        LOBYTE(n[1]) = 0;
        n[0] = 0;
        a1->m128i_i64[1] = v36;
        s2 = p_s2 + 2;
        goto LABEL_77;
      }
    }
    v34 = &v88;
    src = &v88;
    goto LABEL_70;
  }
  v63 = &s2;
  p_src = &s1;
  v60 = &v73;
  v56 = &v83;
  v64 = v85;
  while ( 1 )
  {
    v73 = *v13;
    if ( ((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFF0LL) != 0 && v73 != (void *)v66 )
    {
      v75 = (void *)(*(_QWORD *)&byte_8[(unsigned __int64)v73 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                   | ((unsigned __int8)*(_QWORD *)&byte_8[(unsigned __int64)v73 & 0xFFFFFFFFFFFFFFF0LL]
                    | (unsigned __int8)v73)
                   & 7);
      if ( v68 != v75 )
        break;
    }
LABEL_12:
    if ( v14 == ++v13 )
    {
      p_s2 = v63;
      goto LABEL_14;
    }
  }
  v57 = v60;
  sub_F785A0(p_src, v60, v10);
  LOBYTE(v69) = 0;
  v59 = &v69;
  v78[0] = (void *)sub_AC54E0(a2, v73, &v69);
  sub_F785A0(v56, v78, v10);
  v15 = n[0];
  if ( v81 != n[0] || n[0] && (v65 = (__m128i *)n[0], v31 = memcmp(s1, s2, n[0]), v15 = (size_t)v65, v31) )
  {
    v16 = v83;
    if ( v15 != v84 || v15 && memcmp(v83, s2, v15) )
    {
LABEL_8:
      if ( v16 != v64 )
        operator delete(v16);
      if ( s1 != p_src + 2 )
        operator delete(s1);
      goto LABEL_12;
    }
  }
  sub_F785A0(&src, &v75, v10);
  if ( (void *)v87 != v72[1] )
  {
    v32 = (__m128i *)src;
    p_s2 = v63;
    goto LABEL_50;
  }
  v32 = (__m128i *)src;
  if ( !v87 || (v65 = (__m128i *)src, v52 = memcmp(src, v72[0], v87), v32 = v65, !v52) )
  {
    if ( v32 != &v88 )
      operator delete(v32);
    v16 = v83;
    goto LABEL_8;
  }
  p_s2 = v63;
LABEL_50:
  if ( v32 != &v88 )
    operator delete(v32);
  if ( v83 != v56 + 2 )
    operator delete(v83);
  if ( s1 != p_src + 2 )
    operator delete(s1);
  v17 = v58;
  v19 = v58 + 16 * v61;
  if ( v58 != v19 )
  {
    v18 = 1;
    goto LABEL_60;
  }
  v67 = 0;
  v69 = (_BYTE *)sub_AC54E0(a2, (_BYTE *)v66, &v67);
LABEL_18:
  if ( v69 == (_BYTE *)v66 )
    v69 = (_BYTE *)(*(_QWORD *)&byte_8[v66 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                  | ((unsigned __int8)*(_QWORD *)&byte_8[v66 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v66) & 7);
  v20 = (unsigned __int64)v59;
  sub_F785A0(v57, v59, v10);
  v23 = n[0];
  if ( v74 == n[0] )
  {
    v38 = (void **)v73;
    if ( !n[0] || (v20 = (unsigned __int64)s2, !memcmp(v73, s2, n[0])) )
    {
      if ( v38 != v57 + 2 )
        operator delete(v38);
      goto LABEL_86;
    }
  }
  v76 = 0;
  v77[0] = 0;
  v75 = v77;
  sub_995C30((__int64)&v75, v23 + 1);
  if ( v76 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_131;
  sub_9EE560(&v75, "'", 1u);
  sub_9EE560(&v75, s2, n[0]);
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v76) <= 7 )
    goto LABEL_131;
  v24 = (__m128i *)sub_9EE560(&v75, "' (aka '", 8u);
  v78[0] = &v79;
  if ( (__m128i *)v24->m128i_i64[0] == &v24[1] )
  {
    v79 = _mm_loadu_si128(v24 + 1);
  }
  else
  {
    v78[0] = (void *)v24->m128i_i64[0];
    v79.m128i_i64[0] = v24[1].m128i_i64[0];
  }
  v78[1] = (void *)v24->m128i_i64[1];
  v24->m128i_i64[0] = (__int64)v24[1].m128i_i64;
  v24->m128i_i64[1] = 0;
  v24[1].m128i_i8[0] = 0;
  v25 = (__m128i *)sub_9EE560(v78, v73, v74);
  s1 = &v82;
  if ( (__m128i *)v25->m128i_i64[0] == &v25[1] )
  {
    v82 = _mm_loadu_si128(v25 + 1);
  }
  else
  {
    s1 = (void *)v25->m128i_i64[0];
    v82.m128i_i64[0] = v25[1].m128i_i64[0];
  }
  v81 = v25->m128i_i64[1];
  v25->m128i_i64[0] = (__int64)v25[1].m128i_i64;
  v25->m128i_i64[1] = 0;
  v25[1].m128i_i8[0] = 0;
  if ( v81 == 0x7FFFFFFFFFFFFFFFLL || v81 == 9223372036854775806LL )
    goto LABEL_131;
  v26 = (__m128i *)sub_9EE560(&s1, "')", 2u);
  src = &v88;
  if ( (__m128i *)v26->m128i_i64[0] == &v26[1] )
  {
    v88 = _mm_loadu_si128(v26 + 1);
  }
  else
  {
    src = (void *)v26->m128i_i64[0];
    v88.m128i_i64[0] = v26[1].m128i_i64[0];
  }
  v87 = v26->m128i_u64[1];
  v26->m128i_i64[0] = (__int64)v26[1].m128i_i64;
  v27 = (__m128i *)s2;
  v26->m128i_i64[1] = 0;
  v26[1].m128i_i8[0] = 0;
  if ( src == &v88 )
  {
    v54 = v87;
    if ( v87 )
    {
      if ( v87 == 1 )
      {
        v27->m128i_i8[0] = v88.m128i_i8[0];
      }
      else
      {
        p_src = &src;
        memcpy(v27, src, v87);
      }
      v54 = v87;
      v27 = (__m128i *)s2;
    }
    n[0] = v54;
    v27->m128i_i8[v54] = 0;
    v27 = (__m128i *)src;
  }
  else
  {
    if ( v27 == (__m128i *)(p_s2 + 2) )
    {
      p_src = (void **)v88.m128i_i64[0];
      s2 = src;
      *(__m128 *)n = _mm_loadh_ps((const double *)&p_src);
    }
    else
    {
      p_src = (void **)v88.m128i_i64[0];
      v28 = n[1];
      s2 = src;
      *(__m128 *)n = _mm_loadh_ps((const double *)&p_src);
      if ( v27 )
      {
        src = v27;
        v88.m128i_i64[0] = v28;
        goto LABEL_34;
      }
    }
    v27 = &v88;
    src = &v88;
  }
LABEL_34:
  v87 = 0;
  v27->m128i_i8[0] = 0;
  if ( src != &v88 )
    operator delete(src);
  if ( s1 != &v82 )
    operator delete(s1);
  if ( v78[0] != &v79 )
    operator delete(v78[0]);
  if ( v75 != v77 )
    operator delete(v75);
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( s2 == p_s2 + 2 )
  {
    a1[1] = _mm_load_si128((const __m128i *)&n[1]);
  }
  else
  {
    a1->m128i_i64[0] = (__int64)s2;
    a1[1].m128i_i64[0] = n[1];
  }
  v29 = n[0];
  v30 = (void **)v73;
  n[0] = 0;
  LOBYTE(n[1]) = 0;
  a1->m128i_i64[1] = v29;
  s2 = p_s2 + 2;
  if ( v30 != v57 + 2 )
    operator delete(v30);
LABEL_77:
  if ( v72[0] != v62 + 2 )
    operator delete(v72[0]);
  if ( s2 != p_s2 + 2 )
    operator delete(s2);
  return a1;
}
