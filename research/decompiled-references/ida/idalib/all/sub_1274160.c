__m128i *__fastcall sub_1274160(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  size_t v8; // r13
  const void *v9; // r14
  __int64 v10; // rdx
  size_t v11; // r14
  _BYTE *v12; // r15
  char *v13; // r13
  void *v14; // rdi
  unsigned __int64 v15; // rdx
  _BYTE *v16; // r15
  size_t v17; // r14
  unsigned __int64 v18; // rcx
  char *v19; // r13
  void *v20; // rdi
  int v21; // eax
  char *v22; // r13
  __int64 v23; // rdx
  char *v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  _BYTE *v27; // r14
  size_t v28; // r13
  unsigned __int64 v29; // rcx
  char *v30; // r12
  void *v31; // rdi
  int v32; // eax
  char *v33; // r12
  __int64 v34; // rdx
  char *v35; // r12
  __int64 v36; // rax
  void **p_src; // rdi
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rax
  void **v41; // r12
  __int64 v42; // rdx
  char **v43; // r15
  __int64 v44; // rbx
  char *v45; // r12
  char *v46; // rax
  __int64 v47; // r12
  __int64 v48; // rdx
  char *v49; // rbx
  _BYTE *v50; // rdi
  void **v51; // rcx
  char *v52; // rax
  __m128i *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  void **v56; // rbx
  __int64 v58; // rax
  _BYTE *v59; // rdi
  void **v60; // r15
  void *v61; // r14
  __int64 v62; // rax
  _BYTE *v63; // rsi
  void *v64; // r13
  __int64 v65; // rdi
  _BYTE *v66; // rdx
  int v67; // r15d
  size_t v68; // rdx
  void **v69; // rax
  char *v70; // rdi
  int v71; // r14d
  void *v72; // r15
  char *v73; // rdi
  int v74; // r13d
  __int64 v75; // [rsp+0h] [rbp-1E8h]
  void *v76; // [rsp+0h] [rbp-1E8h]
  __int64 v77; // [rsp+8h] [rbp-1E0h]
  __int64 v78; // [rsp+10h] [rbp-1D8h]
  char **v79; // [rsp+28h] [rbp-1C0h] BYREF
  void **v80; // [rsp+30h] [rbp-1B8h]
  void **p_ptr; // [rsp+38h] [rbp-1B0h]
  _QWORD v82[2]; // [rsp+40h] [rbp-1A8h] BYREF
  __m128i v83; // [rsp+50h] [rbp-198h] BYREF
  __int64 v84; // [rsp+60h] [rbp-188h] BYREF
  __int64 v85; // [rsp+68h] [rbp-180h]
  __int64 v86; // [rsp+70h] [rbp-178h]
  __int64 v87; // [rsp+78h] [rbp-170h]
  __int16 v88; // [rsp+80h] [rbp-168h]
  void *src; // [rsp+90h] [rbp-158h] BYREF
  size_t n; // [rsp+98h] [rbp-150h]
  char *v91; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v92; // [rsp+A8h] [rbp-140h]
  __int16 v93; // [rsp+B0h] [rbp-138h]
  void *ptr; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v95; // [rsp+C8h] [rbp-120h]
  _BYTE *v96; // [rsp+D0h] [rbp-118h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-110h]
  _BYTE v98[256]; // [rsp+E8h] [rbp-100h] BYREF

  v8 = *(_QWORD *)(a3 + 8);
  v9 = *(const void **)a3;
  v80 = a5;
  p_ptr = &ptr;
  ptr = &v96;
  v95 = 0x400000000LL;
  v96 = v98;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  if ( v8 > 0x20 )
  {
    sub_2236E10(&v96, v98, v8, 1);
    v59 = &v96[si128.m128i_i64[0]];
  }
  else
  {
    if ( !v8 )
    {
      LODWORD(v95) = 1;
      v10 = 1;
      si128.m128i_i64[0] = 0;
      goto LABEL_4;
    }
    v59 = v98;
  }
  memcpy(v59, v9, v8);
  si128.m128i_i64[0] += v8;
  v10 = (unsigned int)(v95 + 1);
  LODWORD(v95) = v10;
  if ( (unsigned int)v10 < HIDWORD(v95) )
  {
LABEL_4:
    v11 = *(_QWORD *)(a4 + 8);
    v12 = *(_BYTE **)a4;
    v13 = (char *)ptr + 56 * v10;
    v14 = v13 + 24;
    *(__m128i *)(v13 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    *(_QWORD *)v13 = v13 + 24;
    if ( v11 > 0x20 )
    {
      sub_2236E10(v13, v13 + 24, v11, 1);
      v14 = (void *)(*(_QWORD *)v13 + *((_QWORD *)v13 + 1));
    }
    else if ( !v11 )
    {
LABEL_6:
      *((_QWORD *)v13 + 1) = v11;
      LODWORD(v95) = v95 + 1;
      goto LABEL_7;
    }
    memcpy(v14, v12, v11);
    v11 += *((_QWORD *)v13 + 1);
    goto LABEL_6;
  }
  v60 = p_ptr;
  v61 = p_ptr + 2;
  v62 = sub_2237400(p_ptr, p_ptr + 2, 0, 56, &src);
  v63 = *(_BYTE **)a4;
  v64 = (void *)v62;
  v65 = v62 + 56LL * (unsigned int)v95;
  v66 = (_BYTE *)(*(_QWORD *)a4 + *(_QWORD *)(a4 + 8));
  *(__m128i *)(v65 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  *(_QWORD *)v65 = v65 + 24;
  sub_A1FE50((_QWORD *)v65, v63, v66);
  sub_12737E0((__int64)v60, (__int64)v64);
  v67 = (int)src;
  if ( ptr != v61 )
    free(ptr);
  ptr = v64;
  HIDWORD(v95) = v67;
  LODWORD(v95) = v95 + 1;
LABEL_7:
  v16 = (_BYTE *)sub_22B7480(a4);
  v17 = v15;
  v18 = v15;
  if ( HIDWORD(v95) > (unsigned int)v95 )
  {
    v19 = (char *)ptr + 56 * (unsigned int)v95;
    v20 = v19 + 24;
    *(__m128i *)(v19 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    *(_QWORD *)v19 = v19 + 24;
    if ( v15 > 0x20 )
    {
      sub_2236E10(v19, v19 + 24, v15, 1);
      v20 = (void *)(*(_QWORD *)v19 + *((_QWORD *)v19 + 1));
    }
    else if ( !v15 )
    {
LABEL_10:
      v21 = v95;
      *((_QWORD *)v19 + 1) = v18;
      v22 = (char *)ptr;
      v23 = (unsigned int)(v21 + 1);
      LODWORD(v95) = v21 + 1;
      goto LABEL_11;
    }
    memcpy(v20, v16, v17);
    v18 = v17 + *((_QWORD *)v19 + 1);
    goto LABEL_10;
  }
  v76 = p_ptr + 2;
  v22 = (char *)sub_2237400(p_ptr, p_ptr + 2, 0, 56, &src);
  v70 = &v22[56 * (unsigned int)v95];
  *(__m128i *)(v70 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  *(_QWORD *)v70 = v70 + 24;
  sub_A1FE50(v70, v16, &v16[v17]);
  sub_12737E0((__int64)p_ptr, (__int64)v22);
  v71 = (int)src;
  if ( ptr != v76 )
    free(ptr);
  ptr = v22;
  HIDWORD(v95) = v71;
  v23 = (unsigned int)(v95 + 1);
  LODWORD(v95) = v95 + 1;
LABEL_11:
  v24 = &v22[56 * v23 - 56];
  v25 = *((_QWORD *)v24 + 1);
  if ( (unsigned __int64)(v25 + 12) > *((_QWORD *)v24 + 2) )
  {
    sub_2236E10(v24, v24 + 24, v25 + 12, 1);
    v25 = *((_QWORD *)v24 + 1);
  }
  qmemcpy((void *)(*(_QWORD *)v24 + v25), "-w64-mingw32", 12);
  *((_QWORD *)v24 + 1) += 12LL;
  v27 = (_BYTE *)sub_22B7480(a4);
  v28 = v26;
  v29 = v26;
  if ( HIDWORD(v95) > (unsigned int)v95 )
  {
    v30 = (char *)ptr + 56 * (unsigned int)v95;
    v31 = v30 + 24;
    *(__m128i *)(v30 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    *(_QWORD *)v30 = v30 + 24;
    if ( v26 > 0x20 )
    {
      sub_2236E10(v30, v30 + 24, v26, 1);
      v31 = (void *)(*(_QWORD *)v30 + *((_QWORD *)v30 + 1));
    }
    else if ( !v26 )
    {
LABEL_16:
      v32 = v95;
      *((_QWORD *)v30 + 1) = v29;
      v33 = (char *)ptr;
      v34 = (unsigned int)(v32 + 1);
      LODWORD(v95) = v32 + 1;
      goto LABEL_17;
    }
    memcpy(v31, v27, v28);
    v29 = v28 + *((_QWORD *)v30 + 1);
    goto LABEL_16;
  }
  v72 = p_ptr + 2;
  v33 = (char *)sub_2237400(p_ptr, p_ptr + 2, 0, 56, &src);
  v73 = &v33[56 * (unsigned int)v95];
  *(__m128i *)(v73 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  *(_QWORD *)v73 = v73 + 24;
  sub_A1FE50(v73, v27, &v27[v28]);
  sub_12737E0((__int64)p_ptr, (__int64)v33);
  v74 = (int)src;
  if ( ptr != v72 )
    free(ptr);
  ptr = v33;
  HIDWORD(v95) = v74;
  v34 = (unsigned int)(v95 + 1);
  LODWORD(v95) = v95 + 1;
LABEL_17:
  v35 = &v33[56 * v34 - 56];
  v36 = *((_QWORD *)v35 + 1);
  if ( (unsigned __int64)(v36 + 16) > *((_QWORD *)v35 + 2) )
  {
    sub_2236E10(v35, v35 + 24, v36 + 16, 1);
    v36 = *((_QWORD *)v35 + 1);
  }
  *(__m128i *)(*(_QWORD *)v35 + v36) = _mm_load_si128((const __m128i *)&xmmword_23A9E20);
  *((_QWORD *)v35 + 1) += 16LL;
  p_src = nullptr;
  v38 = sub_228A4B0(*(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 112), 0);
  v75 = v39;
  v40 = sub_228ACC0(0);
  v41 = (void **)ptr;
  v78 = v42;
  v77 = v40;
  v79 = (char **)((char *)ptr + 56 * (unsigned int)v95);
  if ( v79 != ptr )
  {
    v43 = (char **)ptr;
    while ( 1 )
    {
      v44 = (__int64)v43[1];
      p_src = &src;
      v45 = *v43;
      v93 = 1282;
      v85 = v75;
      v84 = v38;
      v86 = v77;
      v88 = 1285;
      v87 = v78;
      n = 0;
      src = &v84;
      v91 = v45;
      v92 = v44;
      if ( !(unsigned int)sub_228B230(&src, v82) )
      {
        if ( LOBYTE(v82[0]) )
          break;
      }
      v43 += 7;
      if ( v79 == v43 )
      {
        v41 = (void **)ptr;
        v56 = (void **)((char *)ptr + 56 * (unsigned int)v95);
        goto LABEL_43;
      }
    }
    v46 = v45;
    v47 = v44;
    v48 = (__int64)&v46[v44];
    v49 = v46;
    src = &v91;
    sub_1270C30(&src, v46, v48);
    v50 = *v80;
    if ( src == &v91 )
    {
      v68 = n;
      if ( n )
      {
        if ( n == 1 )
          *v50 = (_BYTE)v91;
        else
          memcpy(v50, src, n);
        v68 = n;
        v50 = *v80;
      }
      v80[1] = (void *)v68;
      v50[v68] = 0;
      v50 = src;
      goto LABEL_27;
    }
    if ( v50 == (_BYTE *)(v80 + 2) )
    {
      v69 = v80;
      v79 = (char **)v91;
      *v80 = src;
      *(__m128 *)(v69 + 1) = _mm_loadh_ps((const double *)&v79);
    }
    else
    {
      v79 = (char **)v91;
      v51 = v80;
      v52 = (char *)v80[2];
      *v80 = src;
      *(__m128 *)(v51 + 1) = _mm_loadh_ps((const double *)&v79);
      if ( v50 )
      {
        src = v50;
        v91 = v52;
LABEL_27:
        n = 0;
        *v50 = 0;
        if ( src != &v91 )
          operator delete(src);
        v84 = v38;
        v91 = v49;
        v85 = v75;
        v93 = 1282;
        v86 = v77;
        v92 = v47;
        v87 = v78;
        v88 = 1285;
        src = &v84;
        sub_2253560(v82, &src);
        v53 = (__m128i *)v82[0];
        a1[2].m128i_i8[0] &= ~1u;
        a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
        if ( v53 == &v83 )
        {
          a1[1] = _mm_load_si128(&v83);
        }
        else
        {
          v54 = v83.m128i_i64[0];
          a1->m128i_i64[0] = (__int64)v53;
          a1[1].m128i_i64[0] = v54;
        }
        v55 = (unsigned int)v95;
        v41 = (void **)ptr;
        a1->m128i_i64[1] = v82[1];
        v56 = &v41[7 * v55];
        goto LABEL_32;
      }
    }
    v50 = &v91;
    src = &v91;
    goto LABEL_27;
  }
  v56 = (void **)ptr;
LABEL_43:
  v58 = std::_V2::generic_category((std::_V2 *)p_src);
  a1[2].m128i_i8[0] |= 1u;
  a1->m128i_i32[0] = 2;
  a1->m128i_i64[1] = v58;
LABEL_32:
  if ( v41 != v56 )
  {
    do
    {
      while ( 1 )
      {
        v56 -= 7;
        if ( *v56 == v56 + 3 )
          break;
        free(*v56);
        if ( v56 == v41 )
          goto LABEL_35;
      }
    }
    while ( v56 != v41 );
LABEL_35:
    v56 = (void **)ptr;
  }
  if ( v56 != p_ptr + 2 )
    free(v56);
  return a1;
}
