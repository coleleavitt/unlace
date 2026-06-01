unsigned __int64 __fastcall sub_5912B0(char **a1)
{
  char *v1; // rdx
  char *v3; // r12
  char *i; // rbp
  char *v5; // rax
  void *v6; // rdi
  char *v7; // rdi
  const char *v8; // rsi
  __int64 v9; // rax
  char *v10; // r12
  unsigned __int64 j; // rbp
  __int64 v12; // rax
  int v13; // eax
  unsigned __int16 v15; // ax
  char *v16; // r12
  size_t v17; // rax
  bool v18; // zf
  const char *v19; // rbp
  char *v20; // rdx
  __int64 v21; // rax
  size_t v22; // rax
  __int64 v23; // r14
  size_t v24; // r13
  void *v25; // rax
  char *v26; // r15
  __int64 v27; // r14
  char *v28; // r13
  const char *v29; // rdi
  char *v30; // rax
  char *v31; // rsi
  char *v32; // rdx
  char *v33; // rdi
  void *v34; // r12
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  char *v37; // rax
  void *v38; // rdi
  __m128i v39; // xmm0
  char *v40; // rax
  _BYTE *v41; // rax
  char *v42; // rax
  unsigned __int64 v43; // rdx
  void *v44; // rbp
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  char *v47; // rax
  __m128i v48; // xmm0
  char *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // [rsp+0h] [rbp-4A8h]
  __m128i v55; // [rsp+8h] [rbp-4A0h] BYREF
  int v56; // [rsp+18h] [rbp-490h]
  int v57; // [rsp+1Ch] [rbp-48Ch]
  char *v58; // [rsp+20h] [rbp-488h]
  void **p_ptr; // [rsp+28h] [rbp-480h]
  _BYTE *v60; // [rsp+30h] [rbp-478h] BYREF
  const char *v61; // [rsp+38h] [rbp-470h]
  void *ptr; // [rsp+40h] [rbp-468h] BYREF
  __m128i v63; // [rsp+48h] [rbp-460h] BYREF
  _BYTE v64[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v65; // [rsp+468h] [rbp-40h]

  v1 = a1[1];
  v65 = __readfsqword(0x28u);
  v58 = (char *)(a1 + 1);
  if ( v1 )
  {
    v3 = a1[2];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v1[24 * (_QWORD)i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v6);
          v1 = a1[1];
        }
      }
    }
    a1[2] = nullptr;
    qfree(v1);
    a1[1] = nullptr;
    a1[3] = nullptr;
  }
  v7 = *a1;
  *((_OWORD *)a1 + 2) = 0;
  v8 = (_BYTE *)(&qword_48 + 6);
  v9 = sub_6141A0(v7, 78, v64, 1025);
  if ( v9 > 0 )
  {
    v8 = &v64[v9];
    v7 = (char *)&v60;
    v60 = v64;
    v61 = &v64[v9];
    v55.m128i_i64[1] = (__int64)&v60;
    v15 = unpack_dw(&v60, &v64[v9]);
    v57 = v15;
    p_ptr = &ptr;
    if ( v15 )
    {
      do
      {
        v8 = v61;
        v19 = (const char *)unpack_ds(v55.m128i_i64[1], v61, 0);
        if ( !v19 )
        {
          v7 = "failed to retrieve some string encoding names\n";
          sub_82BC50(
            "failed to retrieve some string encoding names\n",
            v54,
            v55.m128i_i32[0],
            v55.m128i_i32[2],
            v56,
            (int)v58,
            (int)p_ptr,
            (int)v60,
            (int)v61,
            (int)ptr,
            v63.m128i_i32[0],
            v63.m128i_i64[1]);
          break;
        }
        v20 = a1[2];
        v8 = a1[1];
        if ( a1[3] < v20 + 1 )
        {
          v21 = qvector_reserve(v58, v8, v20 + 1, 24);
          v20 = a1[2];
          a1[1] = (char *)v21;
          v8 = (const char *)v21;
        }
        v16 = (char *)&v8[24 * (_QWORD)v20];
        *(_QWORD *)v16 = 0;
        *(_OWORD *)(v16 + 8) = 0;
        ++a1[2];
        if ( !*v19 )
          goto LABEL_22;
        v63 = 0;
        ptr = nullptr;
        v22 = strlen(v19);
        v23 = v22 + 1;
        v24 = v22;
        v25 = (void *)qvector_reserve(p_ptr, 0, v22 + 1, 1);
        v8 = v19;
        v63.m128i_i64[0] = v23;
        ptr = v25;
        memmove(v25, v19, v24);
        *((_BYTE *)ptr + v24) = 0;
        v26 = a1[1];
        v27 = v63.m128i_i64[0];
        v28 = &v26[24 * (_QWORD)a1[2]];
        v55.m128i_i64[0] = (__int64)ptr;
        if ( v26 == v28 )
        {
          if ( v55.m128i_i64[0] )
          {
            v63.m128i_i64[0] = 0;
            qfree((void *)v55.m128i_i64[0]);
          }
          goto LABEL_22;
        }
        while ( 1 )
        {
          if ( *((_QWORD *)v26 + 1) )
          {
            v8 = *(const char **)v26;
            v29 = haystack;
            if ( !v27 )
              goto LABEL_29;
            goto LABEL_34;
          }
          if ( !v27 )
            break;
          v8 = haystack;
LABEL_34:
          v29 = (const char *)v55.m128i_i64[0];
LABEL_29:
          if ( !strcmp(v29, v8) )
            break;
          v26 += 24;
          if ( v28 == v26 )
          {
            if ( !v55.m128i_i64[0] )
              goto LABEL_22;
            goto LABEL_39;
          }
        }
        if ( !v55.m128i_i64[0] )
          goto LABEL_36;
LABEL_39:
        v63.m128i_i64[0] = 0;
        qfree((void *)v55.m128i_i64[0]);
LABEL_36:
        if ( v26 != v28 )
          sub_365330();
LABEL_22:
        v7 = (char *)v19;
        v17 = strlen(v19);
        *(_QWORD *)v16 = v19;
        *((_QWORD *)v16 + 2) = ++v17;
        v18 = v57-- == 1;
        *((_QWORD *)v16 + 1) = v17;
      }
      while ( !v18 );
    }
  }
  if ( a1[2] )
  {
    v10 = a1[1];
    for ( j = 0; j != 3; ++j )
    {
      v12 = *((_QWORD *)v10 + 1);
      if ( v12 && j < v12 - 1 )
      {
        v7 = (char *)a1;
        v8 = (const char *)dword_238B868[j];
        sub_590D10((__int64 *)a1, (int)v8, *(char *)(*(_QWORD *)v10 + j));
      }
    }
  }
  else
  {
    v63 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
    v63.m128i_i64[0] = 1;
    *(_BYTE *)ptr = 0;
    v30 = a1[2];
    v31 = a1[1];
    v32 = a1[3];
    v33 = v30 + 1;
    if ( &ptr < (void **)v31 || &ptr >= (void **)&v31[24 * (_QWORD)v32] )
    {
      if ( v32 < v33 )
      {
        v50 = qvector_reserve(v58, v31, v30 + 1, 24);
        a1[1] = (char *)v50;
        v31 = (char *)v50;
        v30 = a1[2];
      }
      v39 = _mm_loadu_si128(&v63);
      v40 = &v31[24 * (_QWORD)v30];
      *(_QWORD *)v40 = ptr;
      *(__m128i *)(v40 + 8) = v39;
      ++a1[2];
    }
    else
    {
      v34 = ptr;
      v35 = _mm_loadl_epi64(&v63);
      ptr = nullptr;
      v36 = _mm_loadl_epi64((const __m128i *)&v63.m128i_u64[1]);
      v63 = 0;
      if ( v32 < v33 )
      {
        v55.m128i_i64[1] = v36.m128i_i64[0];
        v55.m128i_i64[0] = v35.m128i_i64[0];
        v52 = qvector_reserve(v58, v31, v30 + 1, 24);
        a1[1] = (char *)v52;
        v31 = (char *)v52;
        v36 = _mm_loadl_epi64((const __m128i *)&v55.m128i_u64[1]);
        v30 = a1[2];
        v35 = _mm_loadl_epi64(&v55);
      }
      v37 = &v31[24 * (_QWORD)v30];
      *(_QWORD *)v37 = v34;
      *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64(v35, v36);
      v38 = ptr;
      ++a1[2];
      if ( v38 )
      {
        v63.m128i_i64[0] = 0;
        qfree(v38);
      }
    }
    v63 = 0;
    ptr = nullptr;
    v41 = (_BYTE *)qvector_reserve(&ptr, 0, 6, 1);
    ptr = v41;
    v63.m128i_i64[0] = 6;
    *(_DWORD *)v41 = 759583829;
    v41[4] = 56;
    *((_BYTE *)ptr + 5) = 0;
    v42 = a1[2];
    v8 = a1[1];
    v43 = (unsigned __int64)a1[3];
    v7 = v42 + 1;
    if ( &ptr < (void **)v8 || &ptr >= (void **)&v8[24 * v43] )
    {
      if ( v43 < (unsigned __int64)v7 )
      {
        v7 = v58;
        v51 = qvector_reserve(v58, v8, v42 + 1, 24);
        a1[1] = (char *)v51;
        v8 = (const char *)v51;
        v42 = a1[2];
      }
      v48 = _mm_loadu_si128(&v63);
      v49 = (char *)&v8[24 * (_QWORD)v42];
      *(_QWORD *)v49 = ptr;
      *(__m128i *)(v49 + 8) = v48;
      ++a1[2];
    }
    else
    {
      v44 = ptr;
      v45 = _mm_loadl_epi64(&v63);
      ptr = nullptr;
      v46 = _mm_loadl_epi64((const __m128i *)&v63.m128i_u64[1]);
      v63 = 0;
      if ( v43 < (unsigned __int64)v7 )
      {
        v55.m128i_i64[1] = v46.m128i_i64[0];
        v55.m128i_i64[0] = v45.m128i_i64[0];
        v53 = qvector_reserve(v58, v8, v42 + 1, 24);
        a1[1] = (char *)v53;
        v8 = (const char *)v53;
        v46 = _mm_loadl_epi64((const __m128i *)&v55.m128i_u64[1]);
        v42 = a1[2];
        v45 = _mm_loadl_epi64(&v55);
      }
      v47 = (char *)&v8[24 * (_QWORD)v42];
      *(_QWORD *)v47 = v44;
      *(__m128i *)(v47 + 8) = _mm_unpacklo_epi64(v45, v46);
      v7 = (char *)ptr;
      ++a1[2];
      if ( v7 )
      {
        v63.m128i_i64[0] = 0;
        qfree(v7);
      }
    }
  }
  sub_590E10((__int64)v7, v8);
  v13 = sub_614FB0(*a1, 96);
  *((_DWORD *)a1 + 11) = v13;
  if ( v13 < 0 || v13 >= (unsigned __int64)a1[2] )
    *((_DWORD *)a1 + 11) = 0;
  return v65 - __readfsqword(0x28u);
}

