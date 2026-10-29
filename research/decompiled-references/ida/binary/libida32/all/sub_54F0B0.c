char *__fastcall sub_54F0B0(__int64 a1, char *a2, int a3, __int64 a4)
{
  char *v4; // rbx
  char *v5; // rsi
  size_t v6; // r13
  __int64 v7; // r12
  char *v8; // r14
  const char *v9; // rdx
  __int64 v10; // r15
  const char **v11; // r13
  const char *v12; // rdi
  const char *v13; // rax
  void *v14; // r14
  char *v15; // rsi
  __int64 v16; // rdx
  char *v17; // rax
  char v18; // dl
  char *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // r14
  char *v22; // rdx
  char *v23; // rax
  void *v24; // rdi
  char *v25; // rdi
  char *v27; // rax
  __m128i v28; // xmm0
  size_t v29; // rdx
  const char *numbered_type_name; // rax
  char *v31; // r14
  size_t v32; // rax
  size_t v33; // r15
  size_t v34; // rax
  char *v35; // rdi
  size_t v36; // r12
  void *v37; // rdi
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rdx
  char *v41; // rax
  void *v42; // rdi
  char *v44; // [rsp+8h] [rbp-C8h]
  char v47; // [rsp+2Fh] [rbp-A1h]
  char *v48; // [rsp+38h] [rbp-98h]
  size_t v49; // [rsp+40h] [rbp-90h]
  char *v50[2]; // [rsp+48h] [rbp-88h] BYREF
  unsigned int v51; // [rsp+5Ch] [rbp-74h] BYREF
  char *s2; // [rsp+60h] [rbp-70h] BYREF
  __m128i n; // [rsp+68h] [rbp-68h] BYREF
  void *ptr; // [rsp+80h] [rbp-50h] BYREF
  __int128 v55; // [rsp+88h] [rbp-48h]
  unsigned __int64 v56; // [rsp+98h] [rbp-38h]

  v4 = a2;
  v50[0] = a2;
  v56 = __readfsqword(0x28u);
  s2 = nullptr;
  n = 0;
  if ( !a2 )
  {
    if ( !a4 )
      return v4;
    v27 = nullptr;
LABEL_46:
    v28 = _mm_loadu_si128(&n);
    v25 = *(char **)a4;
    v29 = *(_QWORD *)(a4 + 16);
    *(_QWORD *)a4 = v27;
    *(__m128i *)(a4 + 8) = v28;
    s2 = v25;
    n.m128i_i64[1] = v29;
    goto LABEL_37;
  }
  ptr = nullptr;
  v55 = 0;
  v47 = *a2;
  do
  {
    if ( !(unsigned __int8)sub_54DFE0((__int64)&s2, v50) )
    {
      v37 = ptr;
      if ( ptr )
      {
        v38 = v55;
        if ( (_QWORD)v55 )
        {
          v39 = 0;
          v40 = (char *)ptr;
          do
          {
            v41 = &v40[24 * v39];
            v42 = *(void **)v41;
            if ( *(_QWORD *)v41 )
            {
              *((_QWORD *)v41 + 1) = 0;
              qfree(v42);
              v40 = (char *)ptr;
            }
            ++v39;
          }
          while ( v38 != v39 );
          v37 = v40;
        }
        *(_QWORD *)&v55 = 0;
        qfree(v37);
      }
      v27 = s2;
      v4 = v50[0];
      v25 = s2;
      if ( !a4 )
        goto LABEL_37;
      goto LABEL_46;
    }
    v51 = 0;
    v5 = (char *)haystack;
    if ( n.m128i_i64[0] )
      v5 = s2;
    if ( !(unsigned int)get_named_type(a1, (int)v5, 1, (int)v50, a3, 0, 0, 0, (__int64)&v51) )
      break;
    v6 = n.m128i_i64[0];
    if ( n.m128i_i64[0] )
    {
      v8 = s2;
      if ( *s2 != 35 )
      {
        v7 = v55;
        if ( (_QWORD)v55 )
          goto LABEL_10;
LABEL_21:
        v14 = (void *)qalloc_or_throw(v6, v5);
        memcpy(v14, s2, v6);
        v7 = v55;
        goto LABEL_22;
      }
LABEL_47:
      numbered_type_name = (const char *)get_numbered_type_name(a1, v51);
      v31 = (char *)numbered_type_name;
      if ( !numbered_type_name )
      {
        if ( !under_debugger )
          interr(187);
        BUG();
      }
      v32 = strlen(numbered_type_name);
      v33 = v32;
      v6 = v32;
      if ( !v32 )
      {
        n.m128i_i64[0] = 0;
        goto LABEL_9;
      }
      v34 = v32 + 1;
      v35 = s2;
      v36 = v34;
      if ( n.m128i_i64[1] < v34 )
      {
        s2 = (char *)qvector_reserve(&s2, s2, v34, 1);
        v35 = s2;
      }
      v5 = v31;
      n.m128i_i64[0] = v36;
      memmove(v35, v31, v33);
      s2[v33] = 0;
      v7 = v55;
      v6 = n.m128i_i64[0];
      v8 = s2;
      if ( !(_QWORD)v55 )
      {
LABEL_41:
        v14 = nullptr;
        if ( !v6 )
        {
          v15 = (char *)ptr;
          v16 = v7 + 1;
          if ( *((_QWORD *)&v55 + 1) >= (unsigned __int64)(v7 + 1) )
            goto LABEL_23;
          goto LABEL_43;
        }
        goto LABEL_21;
      }
LABEL_10:
      v9 = haystack;
      if ( v6 )
        v9 = v8;
      v49 = v6;
      v10 = 0;
      v44 = (char *)ptr;
      v11 = (const char **)ptr;
      v48 = (char *)v9;
      while ( 1 )
      {
        v13 = v11[1];
        if ( !v49 )
          break;
        v5 = v8;
        v12 = haystack;
        if ( v13 )
          goto LABEL_18;
LABEL_14:
        if ( !strcmp(v12, v5) )
          goto LABEL_27;
        ++v10;
        v11 += 3;
        if ( v10 == v7 )
        {
          v6 = v49;
          goto LABEL_41;
        }
      }
      if ( !v13 )
      {
LABEL_27:
        v19 = v44;
        goto LABEL_28;
      }
LABEL_18:
      v12 = *v11;
      v5 = v48;
      goto LABEL_14;
    }
    if ( byte_2CA12E1 == 35 )
      goto LABEL_47;
LABEL_9:
    v7 = v55;
    v8 = s2;
    if ( (_QWORD)v55 )
      goto LABEL_10;
    v7 = 0;
    v6 = 0;
    v14 = nullptr;
LABEL_22:
    v15 = (char *)ptr;
    v16 = v7 + 1;
    if ( *((_QWORD *)&v55 + 1) >= (unsigned __int64)(v7 + 1) )
      goto LABEL_23;
LABEL_43:
    ptr = (void *)qvector_reserve(&ptr, v15, v16, 24);
    v7 = v55;
    v15 = (char *)ptr;
LABEL_23:
    v17 = &v15[24 * v7];
    *(_QWORD *)v17 = v14;
    v18 = v47 & 0x30;
    *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
    *(_QWORD *)&v55 = v55 + 1;
    v47 = *v50[0];
  }
  while ( v18 == 48 || (v47 & 0xF) == 0xD && v18 == (v47 & 0x30) );
  v19 = (char *)ptr;
LABEL_28:
  if ( v19 )
  {
    if ( (_QWORD)v55 )
    {
      v20 = 0;
      v21 = v55;
      v22 = v19;
      do
      {
        v23 = &v22[24 * v20];
        v24 = *(void **)v23;
        if ( *(_QWORD *)v23 )
        {
          *((_QWORD *)v23 + 1) = 0;
          qfree(v24);
          v22 = (char *)ptr;
        }
        ++v20;
      }
      while ( v21 != v20 );
      v19 = v22;
    }
    *(_QWORD *)&v55 = 0;
    qfree(v19);
  }
  v25 = s2;
  v4 = nullptr;
LABEL_37:
  if ( v25 )
  {
    n.m128i_i64[0] = 0;
    qfree(v25);
  }
  return v4;
}

