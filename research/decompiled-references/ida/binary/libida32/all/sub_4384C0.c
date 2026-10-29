unsigned __int64 __fastcall sub_4384C0(__int64 a1, const char *a2, char **a3, char *a4, __int64 a5)
{
  unsigned __int64 v5; // rax
  char *v6; // r12
  const char *v8; // r9
  const char *v9; // r10
  unsigned __int64 v10; // rbp
  char *v11; // rbx
  __int64 v12; // r13
  __m128i *v13; // rdi
  __int64 v14; // rax
  const char *v15; // r9
  char *v16; // rdx
  __m128i v17; // xmm0
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  char *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  char *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r13
  __int64 v27; // rbp
  const __m128i *v28; // rsi
  __int8 v29; // dl
  __int64 v30; // r11
  char v31; // di
  __int64 (__fastcall *v32)(__int64, __int64, __int64); // rax
  char *v33; // rax
  __int64 v34; // rdx
  char *v35; // rax
  _BYTE *v36; // rdi
  __int64 v37; // rax
  char *i; // rdx
  bool v40; // al
  char v41; // al
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  const char *v46; // r10
  char *v47; // rdi
  int v48; // eax
  const char *v49; // r10
  __int64 v50; // rax
  __int64 (*v51)(); // rdx
  __int64 (*v52)(); // rax
  __int64 v53; // rbp
  char *v54; // rbx
  __int8 v55; // r9
  __int64 v56; // r13
  const __m128i *v57; // rsi
  char *v58; // rdx
  __int8 v59; // di
  char v60; // r8
  __int64 (__fastcall *v61)(__int64, __int64, __int64); // rax
  char v62; // al
  char *v63; // rax
  size_t v64; // rbp
  char *v65; // rbx
  char *v66; // rdi
  __m128i v67; // xmm2
  char v68; // al
  __m128i v69; // [rsp+0h] [rbp-98h] BYREF
  const void **v70; // [rsp+10h] [rbp-88h]
  __int64 v71; // [rsp+18h] [rbp-80h]
  const char *v72; // [rsp+20h] [rbp-78h]
  const char *v73; // [rsp+28h] [rbp-70h]
  __int64 v74; // [rsp+30h] [rbp-68h]
  __int8 v75; // [rsp+3Fh] [rbp-59h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v77; // [rsp+48h] [rbp-50h]
  unsigned __int64 v78; // [rsp+58h] [rbp-40h]

  v71 = a1;
  LODWORD(v70) = a5;
  v78 = __readfsqword(0x28u);
  v5 = *((_QWORD *)a4 + 1);
  if ( !v5 )
    return v78 - __readfsqword(0x28u);
  v6 = a3[1];
  v8 = a4;
  if ( !v6 )
  {
    v70 = (const void **)a4;
    v64 = 24 * v5;
    v65 = (char *)qalloc_or_throw(24 * v5, a2, a3, a4, a5, a4, _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5));
    memcpy(v65, *v70, v64);
    v66 = *a3;
    if ( *a3 )
    {
      a3[1] = nullptr;
      qfree(v66);
    }
    v67 = _mm_load_si128(&v69);
    *a3 = v65;
    *(__m128i *)(a3 + 1) = v67;
    return v78 - __readfsqword(0x28u);
  }
  v9 = a2;
  ptr = nullptr;
  v77 = 0;
  v10 = 2LL * (_QWORD)v6;
  if ( 2LL * (_QWORD)v6 )
  {
    v72 = a4;
    v69.m128i_i64[0] = (__int64)a2;
    v11 = (char *)qvector_reserve(&ptr, 0, 2LL * (_QWORD)v6, 24);
    v12 = *((_QWORD *)&v77 + 1);
    *((_QWORD *)&v77 + 1) = 0;
    v13 = (__m128i *)ptr;
    v14 = v77 - 1;
    v15 = v72;
    if ( (__int64)v77 - 1 >= 0 )
    {
      v16 = v11;
      do
      {
        v17 = _mm_loadu_si128(v13);
        v16 += 24;
        v13 = (__m128i *)((char *)v13 + 24);
        *(__m128i *)(v16 - 24) = v17;
        *((_QWORD *)v16 - 1) = v13[-1].m128i_i64[1];
      }
      while ( v14-- != 0 );
      v13 = (__m128i *)ptr;
    }
    v72 = v15;
    v69.m128i_i64[0] = (__int64)a2;
    qfree(v13);
    v9 = a2;
    ptr = v11;
    *((_QWORD *)&v77 + 1) = v12;
    v8 = v72;
    if ( (unsigned __int64)v77 < v10 )
    {
      v19 = v77 + 1;
      v20 = 24 * v77;
      v21 = &v11[24 * v77];
      *(_QWORD *)v21 = 0;
      *((_QWORD *)v21 + 1) = 0;
      *((_QWORD *)v21 + 2) = 0;
      if ( v19 < v10 )
      {
        v22 = v20 + 24;
        do
        {
          ++v19;
          v23 = (char *)ptr + v22;
          v22 += 24;
          *v23 = 0;
          v23[1] = 0;
          v23[2] = 0;
        }
        while ( v10 != v19 );
      }
    }
    *(_QWORD *)&v77 = 2LL * (_QWORD)v6;
  }
  v69.m128i_i8[0] = 0;
  v24 = nullptr;
  v25 = 24LL * (_QWORD)v6;
  v26 = 24LL * (_QWORD)v6;
  do
  {
    v27 = 24LL * (_QWORD)v24;
    v28 = (const __m128i *)&(*a3)[24 * (_QWORD)v24];
    v29 = v28->m128i_i8[1];
    if ( !v29 )
      goto LABEL_21;
    v30 = v27 + *(_QWORD *)v8;
    v31 = *(_BYTE *)(v30 + 1);
    if ( !v31 )
      goto LABEL_21;
    if ( v29 != 99 )
    {
      if ( v31 == 99 )
        goto LABEL_33;
      v32 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 8LL);
      if ( v32 == sub_4362C0 )
      {
        if ( v29 != v31 )
          goto LABEL_20;
        if ( v29 == 100 )
        {
          v40 = v28->m128i_i32[2] == *(_DWORD *)(v30 + 8);
        }
        else
        {
          if ( v29 != 1 )
            goto LABEL_20;
          v40 = v28->m128i_i16[3] == *(_WORD *)(v30 + 6);
        }
        if ( !v40 )
          goto LABEL_20;
        goto LABEL_21;
      }
LABEL_40:
      v74 = v25;
      v73 = v8;
      v72 = v9;
      v41 = ((__int64 (__fastcall *)(const char *, const __m128i *, __int64, __int64, __int64 (__fastcall *)(__int64, __int64, __int64)))v32)(
              v9,
              v28,
              v30,
              v25,
              sub_4362C0);
      v9 = v72;
      v8 = v73;
      v25 = v74;
      if ( !v41 )
      {
        v28 = (const __m128i *)&(*a3)[v27];
LABEL_20:
        v33 = (char *)ptr;
        v69.m128i_i8[0] = 1;
        *(__m128i *)((char *)ptr + 24 * (_QWORD)v24) = _mm_loadu_si128(v28);
        *(_QWORD *)&v33[v27 + 16] = v28[1].m128i_i64[0];
        v34 = *(_QWORD *)v8;
        v35 = (char *)ptr;
        *(__m128i *)((char *)ptr + v26) = _mm_loadu_si128((const __m128i *)(*(_QWORD *)v8 + 24LL * (_QWORD)v24));
        *(_QWORD *)&v35[v26 + 16] = *(_QWORD *)(v34 + v27 + 16);
        goto LABEL_21;
      }
      goto LABEL_21;
    }
    if ( v31 != 99 || v28->m128i_i32[3] != *(_DWORD *)(v30 + 12) )
    {
LABEL_33:
      v28->m128i_i8[1] = 0;
      goto LABEL_21;
    }
    v32 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 8LL);
    if ( v32 != sub_4362C0 )
      goto LABEL_40;
LABEL_21:
    ++v24;
    v26 += 24;
  }
  while ( v6 != v24 );
  v72 = v9;
  if ( !v69.m128i_i8[0] )
    goto LABEL_23;
  v73 = (const char *)v25;
  v42 = sub_3B9AA0(v71, (unsigned int)v70, 4);
  v25 = (__int64)v73;
  v46 = v72;
  v74 = v42;
  if ( (~BYTE1(v42) & 6) != 0 )
    goto LABEL_23;
  v47 = (char *)(v72 + 12);
  v72 = v73;
  v73 = v46;
  v48 = decode_insn(v47, (unsigned int)v70, v43, v25, v44, v45);
  v25 = (__int64)v72;
  if ( !v48 )
    goto LABEL_23;
  v49 = v73;
  v50 = *(_QWORD *)v73;
  v51 = *(__int64 (**)())(*(_QWORD *)v73 + 16LL);
  if ( v51 == sub_436310 )
  {
LABEL_45:
    v52 = *(__int64 (**)())(v50 + 24);
    v73 = (const char *)v25;
    v72 = v49;
    if ( v52 == j__check_spoiled_jpt )
    {
      check_spoiled_jpt(v49, &ptr);
      v49 = v72;
      v25 = (__int64)v73;
    }
    else
    {
      ((void (__fastcall *)(const char *, void **))v52)(v49, &ptr);
      v25 = (__int64)v73;
      v49 = v72;
    }
  }
  else
  {
    v73 = v72;
    v72 = v49;
    v68 = ((__int64 (__fastcall *)(const char *, void **))v51)(v49, &ptr);
    v49 = v72;
    v25 = (__int64)v73;
    if ( !v68 )
    {
      v50 = *(_QWORD *)v72;
      goto LABEL_45;
    }
  }
  v53 = v25;
  v54 = nullptr;
  v55 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v56 = 24LL * (_QWORD)v54;
      v57 = (const __m128i *)((char *)ptr + 24 * (_QWORD)v54);
      v58 = (char *)ptr + v53;
      v59 = v57->m128i_i8[1];
      if ( !v59 )
      {
        v58[1] = 0;
        goto LABEL_49;
      }
      v60 = v58[1];
      if ( v60 )
      {
        v61 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v49 + 8LL);
        if ( v61 == sub_4362C0 )
        {
          if ( v59 != v60 )
            goto LABEL_62;
          if ( v59 != 99 )
          {
            if ( v59 != 100 )
            {
              if ( v59 == 1 && v57->m128i_i16[3] == *((_WORD *)v58 + 3) )
                goto LABEL_65;
LABEL_62:
              v55 = v69.m128i_i8[0];
              goto LABEL_49;
            }
            if ( v57->m128i_i32[2] != *((_DWORD *)v58 + 2) )
              goto LABEL_62;
          }
        }
        else
        {
          v73 = (const char *)v25;
          v75 = v55;
          v72 = v49;
          v62 = ((__int64 (__fastcall *)(const char *))v61)(v49);
          v49 = v72;
          v25 = (__int64)v73;
          if ( !v62 )
            goto LABEL_62;
          v55 = v75;
          v57 = (const __m128i *)((char *)ptr + v56);
        }
LABEL_65:
        v63 = *a3;
        *(__m128i *)&v63[24 * (_QWORD)v54] = _mm_loadu_si128(v57);
        *(_QWORD *)&v63[v56 + 16] = v57[1].m128i_i64[0];
        *((_BYTE *)ptr + v56 + 1) = 0;
        *((_BYTE *)ptr + v53 + 1) = 0;
LABEL_49:
        ++v54;
        v53 += 24;
        if ( v54 == v6 )
          goto LABEL_53;
        continue;
      }
      break;
    }
    ++v54;
    v57->m128i_i8[1] = 0;
    v53 += 24;
    if ( v54 != v6 )
      continue;
    break;
  }
LABEL_53:
  if ( v55 && (v74 & 0x10001000) == 0 && (v74 & 0x10000) != 0 )
  {
    v69.m128i_i64[0] = v25;
    sub_3BD5D0(v71, (unsigned int)v70);
    v25 = v69.m128i_i64[0];
  }
LABEL_23:
  v36 = ptr;
  v37 = 0;
  for ( i = nullptr; i != v6; ++i )
  {
    if ( v36[v37 + 1] && v36[v25 + 1 + v37] )
    {
      (*a3)[v37 + 1] = 0;
      v36 = ptr;
    }
    v37 += 24;
  }
  if ( v36 )
  {
    *(_QWORD *)&v77 = 0;
    qfree(v36);
  }
  return v78 - __readfsqword(0x28u);
}

