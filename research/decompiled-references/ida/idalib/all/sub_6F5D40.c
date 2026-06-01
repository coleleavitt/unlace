const void **__fastcall sub_6F5D40(const void **a1, __int64 a2, void *a3, char a4)
{
  char *v5; // rax
  __int64 v6; // rbp
  size_t v7; // rax
  size_t v8; // r14
  size_t v9; // r15
  char *v10; // rsi
  size_t v11; // rdx
  __int64 v12; // rbp
  char *v13; // rsi
  __int64 v14; // r15
  __int64 v15; // r14
  size_t v16; // rax
  size_t v17; // rbx
  const void **v18; // rax
  unsigned __int64 v19; // r15
  const char *v20; // rbx
  __int64 v21; // r13
  __int64 v22; // rbp
  __int64 v23; // r12
  __int64 v24; // r14
  const void **v25; // rax
  unsigned __int64 v26; // rbx
  char *v28; // rsi
  int v29; // eax
  size_t v30; // rcx
  size_t v31; // rbp
  size_t v32; // rcx
  size_t v33; // r9
  __m128i v34; // xmm1
  void *v35; // rbx
  const void **v36; // rax
  void *v37; // rdi
  const void **v38; // r14
  __m128i v39; // xmm1
  void *v40; // rdi
  const void *v41; // r12
  void *v42; // rdi
  const void **v43; // r14
  void *v44; // rdi
  __int64 v45; // rdx
  size_t v46; // rbp
  char *v47; // rax
  char *v48; // rax
  __int64 *v49; // r14
  __int64 v50; // rax
  void *v51; // rax
  __m128i v52; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+10h] [rbp-A8h]
  void *src; // [rsp+18h] [rbp-A0h]
  const void **v55; // [rsp+20h] [rbp-98h]
  size_t n; // [rsp+28h] [rbp-90h]
  bool v57; // [rsp+37h] [rbp-81h]
  size_t v58; // [rsp+38h] [rbp-80h]
  char *s2; // [rsp+40h] [rbp-78h] BYREF
  __int128 v60; // [rsp+48h] [rbp-70h]
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  __m128i v62; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v63; // [rsp+78h] [rbp-40h]

  v55 = a1;
  v53 = a2;
  src = a3;
  v63 = __readfsqword(0x28u);
  v60 = 0;
  s2 = nullptr;
  if ( a4 )
  {
    v5 = (char *)qvector_reserve(&s2, 0, 2, 1);
    *(_QWORD *)&v60 = 2;
    s2 = v5;
    *v5 = 45;
    s2[1] = 0;
    if ( a3 )
    {
      v6 = v60;
      v7 = strlen((const char *)a3);
      v8 = v7;
      v9 = v7;
      if ( v6 )
      {
        --v6;
        v9 = v7 + v6;
      }
      v10 = s2;
      v11 = v9 + 1;
      if ( *((_QWORD *)&v60 + 1) < v9 + 1 )
      {
        v52.m128i_i64[0] = v9 + 1;
        v48 = (char *)qvector_reserve(&s2, s2, v11, 1);
        v11 = v9 + 1;
        s2 = v48;
        v10 = v48;
      }
      *(_QWORD *)&v60 = v11;
      v10[v9] = 0;
      memmove(&s2[v6], src, v8);
    }
    v12 = v60;
    if ( (_QWORD)v60 )
    {
      v15 = v60 + 1;
      v14 = v60;
      v13 = s2;
      v12 = v60 - 1;
      if ( *((_QWORD *)&v60 + 1) >= (unsigned __int64)(v60 + 1) )
        goto LABEL_10;
    }
    else
    {
      v13 = s2;
      v14 = 1;
      v15 = 2;
      if ( *((_QWORD *)&v60 + 1) >= 2u )
      {
LABEL_10:
        *(_QWORD *)&v60 = v15;
        v13[v12] = 61;
        s2[v14] = 0;
        goto LABEL_11;
      }
    }
    s2 = (char *)qvector_reserve(&s2, v13, v15, 1);
    v13 = s2;
    goto LABEL_10;
  }
  if ( !src )
    goto LABEL_15;
  v16 = strlen((const char *)src);
  v17 = v16;
  if ( !v16 )
    goto LABEL_15;
  v46 = v16 + 1;
  v47 = (char *)qvector_reserve(&s2, 0, v16 + 1, 1);
  *(_QWORD *)&v60 = v46;
  s2 = v47;
  memmove(v47, src, v17);
  s2[v17] = 0;
LABEL_11:
  if ( (_QWORD)v60 )
  {
    n = v60 - 1;
    goto LABEL_16;
  }
LABEL_15:
  n = 0;
LABEL_16:
  v18 = v55;
  v57 = n == 0;
  v19 = 0;
  *v55 = nullptr;
  *(_OWORD *)(v18 + 1) = 0;
  v52.m128i_i64[0] = *(_QWORD *)(v53 + 80);
  if ( v52.m128i_i64[0] )
  {
    do
    {
      v20 = haystack;
      v21 = 24 * v19;
      v22 = *(_QWORD *)(v53 + 72);
      v23 = v22 + 24 * v19;
      v24 = *(_QWORD *)(v23 + 8);
      if ( v24 )
        v20 = *(const char **)v23;
      ++v19;
      if ( !strcmp(v20, (const char *)src) )
      {
        if ( v52.m128i_i64[0] != v19 )
        {
          v25 = (const void **)(v22 + v21 + 24);
          if ( v55 != v25 )
          {
            v26 = *(_QWORD *)(v22 + v21 + 32);
            if ( v26 > 1 )
            {
              v41 = *v25;
              v42 = (void *)*v55;
              if ( (unsigned __int64)v55[2] < v26 )
              {
                v49 = (__int64 *)v55;
                v50 = qvector_reserve(v55, *v55, v26, 1);
                *v49 = v50;
                v42 = (void *)v50;
              }
              v43 = v55;
              v55[1] = (const void *)v26;
              memmove(v42, v41, v26 - 1);
              *((char *)*v43 + v26 - 1) = 0;
              v52.m128i_i64[0] = *(_QWORD *)(v53 + 80);
            }
            else
            {
              v55[1] = nullptr;
              v52.m128i_i64[0] = *(_QWORD *)(v53 + 80);
            }
          }
        }
      }
      else
      {
        v28 = (char *)haystack;
        if ( (_QWORD)v60 )
          v28 = s2;
        if ( !v28 || v57 )
        {
          if ( !v24 )
            goto LABEL_38;
          v30 = v24 - 1;
LABEL_35:
          ptr = nullptr;
          v62 = 0;
          v31 = n;
          if ( n > v30 )
            v31 = v30;
          v32 = v30 - v31;
          v33 = v32;
          if ( v32 )
          {
            v44 = nullptr;
            v45 = v32 + 1;
            if ( v32 != -1 )
            {
              v58 = v32;
              v52.m128i_i64[0] = v32 + 1;
              v51 = (void *)qvector_reserve(&ptr, 0, v45, 1);
              v33 = v58;
              v45 = v52.m128i_i64[0];
              ptr = v51;
              v44 = v51;
            }
            v62.m128i_i64[0] = v45;
            v52.m128i_i64[0] = v33;
            memmove(v44, &v20[v31], v33);
            *((_BYTE *)ptr + v52.m128i_i64[0]) = 0;
            v35 = ptr;
            v34 = _mm_loadu_si128(&v62);
          }
          else
          {
LABEL_38:
            v34 = 0;
            v35 = nullptr;
          }
          v36 = v55;
          ptr = nullptr;
          v62 = 0;
          v37 = (void *)*v55;
          if ( *v55 )
          {
            v38 = v55;
            v52 = v34;
            v55[1] = nullptr;
            qfree(v37);
            v39 = _mm_load_si128(&v52);
            v40 = ptr;
            *v38 = v35;
            *(__m128i *)(v38 + 1) = v39;
            if ( v40 )
            {
              v62.m128i_i64[0] = 0;
              qfree(v40);
            }
            v52.m128i_i64[0] = *(_QWORD *)(v53 + 80);
          }
          else
          {
            *v55 = v35;
            *(__m128i *)(v36 + 1) = v34;
            v52.m128i_i64[0] = *(_QWORD *)(v53 + 80);
          }
          continue;
        }
        if ( v24 )
        {
          v58 = v24 - 1;
          if ( v24 - 1 >= n )
          {
            v29 = strncmp(*(const char **)v23, v28, n);
            v30 = v58;
            if ( !v29 )
              goto LABEL_35;
          }
        }
      }
    }
    while ( v19 < v52.m128i_i64[0] );
  }
  if ( s2 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(s2);
  }
  return v55;
}
