unsigned __int64 __fastcall sub_853260(__int64 a1, const char *a2, __int64 a3, char *a4, __int64 a5, int a6)
{
  __int128 v6; // rax
  char v8; // bl
  size_t v9; // rax
  __int64 v10; // r15
  size_t v11; // r14
  char *v12; // rsi
  unsigned __int64 v13; // rdi
  __m128i v14; // xmm0
  bool v15; // zf
  unsigned __int64 v16; // rax
  char *v17; // r15
  size_t v18; // r12
  const char *v19; // rdi
  int v20; // eax
  __int64 v21; // rcx
  char *v22; // rsi
  char *v23; // r13
  char *v24; // r14
  const char **v25; // rbp
  const char *v26; // rsi
  const char *v27; // rdi
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // rbx
  __int64 v30; // rdi
  unsigned int v31; // ecx
  char *v32; // rax
  char *v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdi
  void *v36; // rdi
  __int64 v37; // rbp
  __int64 v38; // rbx
  char *v39; // rdx
  char *v40; // rax
  void *v41; // rdi
  void *v42; // rdi
  __int64 v43; // rbp
  __int64 v44; // rbx
  char *v45; // rdx
  char *v46; // rax
  void *v47; // rdi
  void *v49; // r12
  __m128i v50; // xmm0
  __m128i v51; // xmm1
  char *v52; // rax
  int v53; // eax
  unsigned __int64 v54; // rdx
  void *v55; // r14
  char *v56; // rax
  char *v57; // r14
  void *v58; // rdi
  __int64 v59; // rbp
  __int64 v60; // rbx
  char *v61; // rdx
  char *v62; // rax
  void *v63; // rdi
  __int64 v64; // rbp
  __int64 v65; // rbx
  char *v66; // rdx
  char *v67; // rax
  void *v68; // rdi
  char *v69; // r14
  __m128i v70; // [rsp+0h] [rbp-C0h] BYREF
  __m128i v71; // [rsp+10h] [rbp-B0h] BYREF
  __int64 v72; // [rsp+20h] [rbp-A0h]
  __int64 v73; // [rsp+28h] [rbp-98h]
  const char *v74; // [rsp+30h] [rbp-90h]
  unsigned __int64 v75; // [rsp+38h] [rbp-88h]
  bool v76; // [rsp+47h] [rbp-79h]
  void *v77; // [rsp+48h] [rbp-78h] BYREF
  __int128 v78; // [rsp+50h] [rbp-70h]
  void *ptr; // [rsp+68h] [rbp-58h] BYREF
  __m128i v80; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v81; // [rsp+80h] [rbp-40h]

  *((_QWORD *)&v6 + 1) = a3;
  v74 = a2;
  v75 = *((_QWORD *)&v6 + 1);
  v70.m128i_i64[1] = (__int64)a4;
  v81 = __readfsqword(0x28u);
  v8 = a5;
  v78 = 0;
  v77 = nullptr;
  if ( a2 )
  {
    v80 = 0;
    ptr = nullptr;
    v9 = strlen(a2);
    v10 = v9 + 1;
    v70.m128i_i64[0] = (__int64)&ptr;
    v11 = v9;
    ptr = (void *)qvector_reserve(&ptr, 0, v9 + 1, 1);
    v80.m128i_i64[0] = v10;
    memmove(ptr, a2, v11);
    *((_BYTE *)ptr + v11) = 0;
    v6 = v78;
    v12 = (char *)v77;
    v13 = v78 + 1;
    if ( &ptr < v77 || (a4 = (char *)v77 + 24 * *((_QWORD *)&v78 + 1), v70.m128i_i64[0] >= (unsigned __int64)a4) )
    {
      if ( *((_QWORD *)&v78 + 1) < v13 )
      {
        v77 = (void *)qvector_reserve(&v77, v77, v78 + 1, 24);
        v12 = (char *)v77;
        *(_QWORD *)&v6 = v78;
      }
      *((_QWORD *)&v6 + 1) = ptr;
      v14 = _mm_loadu_si128(&v80);
      *(_QWORD *)&v6 = &v12[24 * v6];
      *(_QWORD *)v6 = ptr;
      *(__m128i *)(v6 + 8) = v14;
      *(_QWORD *)&v78 = v78 + 1;
    }
    else
    {
      v49 = ptr;
      v50 = _mm_loadl_epi64(&v80);
      ptr = nullptr;
      v51 = _mm_loadl_epi64((const __m128i *)&v80.m128i_u64[1]);
      v80 = 0;
      if ( *((_QWORD *)&v78 + 1) < v13 )
      {
        v71.m128i_i64[0] = v51.m128i_i64[0];
        v70.m128i_i64[0] = v50.m128i_i64[0];
        v77 = (void *)qvector_reserve(&v77, v77, v78 + 1, 24);
        v12 = (char *)v77;
        v51 = _mm_loadl_epi64(&v71);
        *(_QWORD *)&v6 = v78;
        v50 = _mm_loadl_epi64(&v70);
      }
      v52 = &v12[24 * v6];
      *(_QWORD *)v52 = v49;
      *(__m128i *)(v52 + 8) = _mm_unpacklo_epi64(v50, v51);
      *(_QWORD *)&v78 = v78 + 1;
      if ( ptr )
      {
        v80.m128i_i64[0] = 0;
        qfree(ptr);
      }
    }
  }
  v15 = *(_BYTE *)(a1 + 12) == 0;
  ptr = nullptr;
  v80 = 0;
  if ( !v15 )
  {
    v28 = v78;
    if ( !(_QWORD)v78 )
      goto LABEL_40;
    goto LABEL_26;
  }
  if ( v8 )
    v71.m128i_i64[1] = (__int64)&strcasecmp;
  else
    v71.m128i_i64[1] = (__int64)&strcmp;
  v70.m128i_i64[0] = (__int64)&ptr;
  sub_851A00(a1, (__int64 *)&ptr, *((__int64 *)&v6 + 1), (__int64)a4, (unsigned __int8)a5, a6);
  v16 = v80.m128i_i64[0];
  if ( !v80.m128i_i64[0] )
  {
LABEL_59:
    v54 = v78;
    goto LABEL_60;
  }
  v76 = v74 != nullptr;
  a5 = 0;
  while ( 1 )
  {
    v17 = (char *)ptr + 24 * a5;
    v18 = *((_QWORD *)v17 + 1);
    if ( v70.m128i_i64[1] )
      break;
LABEL_16:
    v21 = v78;
    v22 = (char *)v77;
    v23 = (char *)v77 + 24 * v78;
    if ( v77 != v23 )
    {
      v73 = a1;
      v24 = (char *)v77;
      v25 = (const char **)v77;
      v71.m128i_i64[0] = a5;
      v72 = v78;
      while ( 1 )
      {
        if ( v25[1] )
        {
          v26 = *v25;
          v27 = haystack;
          if ( !v18 )
            goto LABEL_19;
        }
        else
        {
          if ( !v18 )
          {
            v22 = v24;
            v57 = (char *)v25;
            a5 = v71.m128i_i64[0];
            v21 = v72;
            a1 = v73;
            if ( v57 != v23 )
              goto LABEL_58;
            v55 = nullptr;
            goto LABEL_67;
          }
          v26 = haystack;
        }
        v27 = *(const char **)v17;
LABEL_19:
        if ( !strcmp(v27, v26) )
        {
          v22 = v24;
          v69 = (char *)v25;
          a5 = v71.m128i_i64[0];
          v21 = v72;
          a1 = v73;
          if ( v69 != v23 )
            goto LABEL_58;
          break;
        }
        v25 += 3;
        if ( v23 == (char *)v25 )
        {
          a5 = v71.m128i_i64[0];
          v21 = v72;
          v22 = v24;
          a1 = v73;
          break;
        }
      }
    }
    v55 = nullptr;
    if ( v18 )
    {
      v71.m128i_i64[0] = a5;
      v55 = (void *)qalloc_or_throw(v18);
      memcpy(v55, *(const void **)v17, v18);
      v21 = v78;
      v22 = (char *)v77;
      a5 = v71.m128i_i64[0];
    }
LABEL_67:
    if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)(v21 + 1) )
    {
      v71.m128i_i64[0] = a5;
      v77 = (void *)qvector_reserve(&v77, v22, v21 + 1, 24);
      v21 = v78;
      v22 = (char *)v77;
      a5 = v71.m128i_i64[0];
    }
    v56 = &v22[24 * v21];
    *(_QWORD *)v56 = v55;
    *(__m128i *)(v56 + 8) = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
    v54 = v78 + 1;
    *(_QWORD *)&v78 = v54;
    if ( v54 >= v75 )
    {
      v16 = v80.m128i_i64[0];
LABEL_60:
      if ( v16 >= v54 )
        v54 = v16;
      v28 = v54;
      if ( !v54 )
      {
LABEL_32:
        v36 = ptr;
        if ( ptr )
        {
          v37 = v80.m128i_i64[0];
          if ( v80.m128i_i64[0] )
          {
            v38 = 0;
            v39 = (char *)ptr;
            do
            {
              v40 = &v39[24 * v38];
              v41 = *(void **)v40;
              if ( *(_QWORD *)v40 )
              {
                *((_QWORD *)v40 + 1) = 0;
                qfree(v41);
                v39 = (char *)ptr;
              }
              ++v38;
            }
            while ( v37 != v38 );
            v36 = v39;
          }
          v80.m128i_i64[0] = 0;
          qfree(v36);
        }
LABEL_40:
        v42 = v77;
        if ( v77 )
        {
          v43 = v78;
          if ( (_QWORD)v78 )
          {
            v44 = 0;
            v45 = (char *)v77;
            do
            {
              v46 = &v45[24 * v44];
              v47 = *(void **)v46;
              if ( *(_QWORD *)v46 )
              {
                *((_QWORD *)v46 + 1) = 0;
                qfree(v47);
                v45 = (char *)v77;
              }
              ++v44;
            }
            while ( v43 != v44 );
            v42 = v45;
          }
          goto LABEL_47;
        }
        return v81 - __readfsqword(0x28u);
      }
LABEL_26:
      v29 = 0;
      do
      {
        while ( 1 )
        {
          v35 = *(_QWORD *)a1 + 5128LL;
          v70.m128i_i64[0] = (__int64)&ptr;
          qsnprintf(v35, 256, (unsigned int)"%u", v29, (_BYTE)a5, a6);
          if ( v29 < (unsigned __int64)v78 )
            break;
          v70.m128i_i64[0] = (__int64)&ptr;
          sub_851EA0(a1);
          if ( ++v29 >= v28 )
            goto LABEL_32;
        }
        v30 = *(_QWORD *)a1;
        v31 = 0;
        v32 = (char *)v77 + 24 * v29;
        v33 = (char *)haystack;
        v34 = *((_QWORD *)v32 + 1);
        if ( v34 )
        {
          v33 = *(char **)v32;
          v31 = v34 - 1;
        }
        v70.m128i_i64[0] = (__int64)&ptr;
        sub_852B10(v30, 1, v33, v31);
        ++v29;
      }
      while ( v29 < v28 );
      goto LABEL_32;
    }
LABEL_58:
    v16 = v80.m128i_i64[0];
    if ( (unsigned __int64)++a5 >= v80.m128i_i64[0] )
      goto LABEL_59;
  }
  v19 = haystack;
  if ( v18 )
    v19 = *(const char **)v17;
  v71.m128i_i64[0] = a5;
  v20 = ((__int64 (__fastcall *)(const char *, __int64))v71.m128i_i64[1])(v19, v70.m128i_i64[1]);
  a5 = v71.m128i_i64[0];
  if ( v20 )
  {
    v18 = *((_QWORD *)v17 + 1);
    goto LABEL_16;
  }
  if ( v71.m128i_i64[0] )
    goto LABEL_58;
  if ( !v76 )
    goto LABEL_58;
  v53 = ((__int64 (__fastcall *)(const char *, __int64))v71.m128i_i64[1])(v74, v70.m128i_i64[1]);
  a5 = v71.m128i_i64[0];
  if ( v53 )
    goto LABEL_58;
  v58 = ptr;
  if ( ptr )
  {
    v59 = v80.m128i_i64[0];
    if ( v80.m128i_i64[0] )
    {
      v60 = 0;
      v61 = (char *)ptr;
      do
      {
        v62 = &v61[24 * v60];
        v63 = *(void **)v62;
        if ( *(_QWORD *)v62 )
        {
          *((_QWORD *)v62 + 1) = 0;
          qfree(v63);
          v61 = (char *)ptr;
        }
        ++v60;
      }
      while ( v59 != v60 );
      v58 = v61;
    }
    v80.m128i_i64[0] = 0;
    qfree(v58);
  }
  v42 = v77;
  if ( v77 )
  {
    v64 = v78;
    if ( (_QWORD)v78 )
    {
      v65 = 0;
      v66 = (char *)v77;
      do
      {
        v67 = &v66[24 * v65];
        v68 = *(void **)v67;
        if ( *(_QWORD *)v67 )
        {
          *((_QWORD *)v67 + 1) = 0;
          qfree(v68);
          v66 = (char *)v77;
        }
        ++v65;
      }
      while ( v64 != v65 );
      v42 = v66;
    }
LABEL_47:
    *(_QWORD *)&v78 = 0;
    qfree(v42);
  }
  return v81 - __readfsqword(0x28u);
}
