char *__fastcall sub_568850(__int64 a1, char *a2, int a3, __int64 a4)
{
  char *v4; // rbx
  const char *v5; // rsi
  size_t v6; // r13
  __int64 v7; // r12
  char *v8; // r14
  const char *v9; // rdx
  __int64 v10; // r15
  const char **v11; // r13
  const char *v12; // rsi
  const char *v13; // rdi
  const char *v14; // rax
  void *v15; // r14
  char *v16; // rsi
  __int64 v17; // rdx
  char *v18; // rax
  char v19; // dl
  char *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r14
  char *v23; // rdx
  char *v24; // rax
  void *v25; // rdi
  char *v26; // rdi
  char *v28; // rax
  __m128i v29; // xmm0
  size_t v30; // rdx
  const char *numbered_type_name; // rax
  const char *v32; // r14
  size_t v33; // rax
  size_t v34; // r15
  size_t v35; // rax
  char *v36; // rdi
  size_t v37; // r12
  void *v38; // rdi
  __int64 v39; // r12
  __int64 v40; // rbx
  char *v41; // rdx
  char *v42; // rax
  void *v43; // rdi
  char *v45; // [rsp+8h] [rbp-C8h]
  char v48; // [rsp+2Fh] [rbp-A1h]
  const char *v49; // [rsp+38h] [rbp-98h]
  size_t v50; // [rsp+40h] [rbp-90h]
  char *v51[2]; // [rsp+48h] [rbp-88h] BYREF
  unsigned int v52; // [rsp+5Ch] [rbp-74h] BYREF
  char *s2; // [rsp+60h] [rbp-70h] BYREF
  __m128i n; // [rsp+68h] [rbp-68h] BYREF
  void *ptr; // [rsp+80h] [rbp-50h] BYREF
  __int128 v56; // [rsp+88h] [rbp-48h]
  unsigned __int64 v57; // [rsp+98h] [rbp-38h]

  v4 = a2;
  v51[0] = a2;
  v57 = __readfsqword(0x28u);
  s2 = nullptr;
  n = 0;
  if ( !a2 )
  {
    if ( !a4 )
      return v4;
    v28 = nullptr;
LABEL_46:
    v29 = _mm_loadu_si128(&n);
    v26 = *(char **)a4;
    v30 = *(_QWORD *)(a4 + 16);
    *(_QWORD *)a4 = v28;
    *(__m128i *)(a4 + 8) = v29;
    s2 = v26;
    n.m128i_i64[1] = v30;
    goto LABEL_37;
  }
  ptr = nullptr;
  v56 = 0;
  v48 = *a2;
  do
  {
    if ( !(unsigned __int8)sub_567720((__int64)&s2, v51) )
    {
      v38 = ptr;
      if ( ptr )
      {
        v39 = v56;
        if ( (_QWORD)v56 )
        {
          v40 = 0;
          v41 = (char *)ptr;
          do
          {
            v42 = &v41[24 * v40];
            v43 = *(void **)v42;
            if ( *(_QWORD *)v42 )
            {
              *((_QWORD *)v42 + 1) = 0;
              qfree(v43);
              v41 = (char *)ptr;
            }
            ++v40;
          }
          while ( v39 != v40 );
          v38 = v41;
        }
        *(_QWORD *)&v56 = 0;
        qfree(v38);
      }
      v28 = s2;
      v4 = v51[0];
      v26 = s2;
      if ( !a4 )
        goto LABEL_37;
      goto LABEL_46;
    }
    v52 = 0;
    v5 = haystack;
    if ( n.m128i_i64[0] )
      LODWORD(v5) = (_DWORD)s2;
    if ( !(unsigned int)get_named_type(a1, (_DWORD)v5, 1, (unsigned int)v51, a3, 0, 0, 0, (__int64)&v52) )
      break;
    v6 = n.m128i_i64[0];
    if ( n.m128i_i64[0] )
    {
      v8 = s2;
      if ( *s2 != 35 )
      {
        v7 = v56;
        if ( (_QWORD)v56 )
          goto LABEL_10;
LABEL_21:
        v15 = (void *)qalloc_or_throw(v6);
        memcpy(v15, s2, v6);
        v7 = v56;
        goto LABEL_22;
      }
LABEL_47:
      numbered_type_name = (const char *)get_numbered_type_name(a1, v52);
      v32 = numbered_type_name;
      if ( !numbered_type_name )
      {
        if ( !under_debugger )
          interr(187);
        BUG();
      }
      v33 = strlen(numbered_type_name);
      v34 = v33;
      v6 = v33;
      if ( !v33 )
      {
        n.m128i_i64[0] = 0;
        goto LABEL_9;
      }
      v35 = v33 + 1;
      v36 = s2;
      v37 = v35;
      if ( n.m128i_i64[1] < v35 )
      {
        s2 = (char *)qvector_reserve(&s2, s2, v35, 1);
        v36 = s2;
      }
      n.m128i_i64[0] = v37;
      memmove(v36, v32, v34);
      s2[v34] = 0;
      v7 = v56;
      v6 = n.m128i_i64[0];
      v8 = s2;
      if ( !(_QWORD)v56 )
      {
LABEL_41:
        v15 = nullptr;
        if ( !v6 )
        {
          v16 = (char *)ptr;
          v17 = v7 + 1;
          if ( *((_QWORD *)&v56 + 1) >= (unsigned __int64)(v7 + 1) )
            goto LABEL_23;
          goto LABEL_43;
        }
        goto LABEL_21;
      }
LABEL_10:
      v9 = haystack;
      if ( v6 )
        v9 = v8;
      v50 = v6;
      v10 = 0;
      v45 = (char *)ptr;
      v11 = (const char **)ptr;
      v49 = v9;
      while ( 1 )
      {
        v14 = v11[1];
        if ( !v50 )
          break;
        v12 = v8;
        v13 = haystack;
        if ( v14 )
          goto LABEL_18;
LABEL_14:
        if ( !strcmp(v13, v12) )
          goto LABEL_27;
        ++v10;
        v11 += 3;
        if ( v10 == v7 )
        {
          v6 = v50;
          goto LABEL_41;
        }
      }
      if ( !v14 )
      {
LABEL_27:
        v20 = v45;
        goto LABEL_28;
      }
LABEL_18:
      v13 = *v11;
      v12 = v49;
      goto LABEL_14;
    }
    if ( byte_2CCB1E1 == 35 )
      goto LABEL_47;
LABEL_9:
    v7 = v56;
    v8 = s2;
    if ( (_QWORD)v56 )
      goto LABEL_10;
    v7 = 0;
    v6 = 0;
    v15 = nullptr;
LABEL_22:
    v16 = (char *)ptr;
    v17 = v7 + 1;
    if ( *((_QWORD *)&v56 + 1) >= (unsigned __int64)(v7 + 1) )
      goto LABEL_23;
LABEL_43:
    ptr = (void *)qvector_reserve(&ptr, v16, v17, 24);
    v7 = v56;
    v16 = (char *)ptr;
LABEL_23:
    v18 = &v16[24 * v7];
    *(_QWORD *)v18 = v15;
    v19 = v48 & 0x30;
    *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
    *(_QWORD *)&v56 = v56 + 1;
    v48 = *v51[0];
  }
  while ( v19 == 48 || (v48 & 0xF) == 0xD && v19 == (v48 & 0x30) );
  v20 = (char *)ptr;
LABEL_28:
  if ( v20 )
  {
    if ( (_QWORD)v56 )
    {
      v21 = 0;
      v22 = v56;
      v23 = v20;
      do
      {
        v24 = &v23[24 * v21];
        v25 = *(void **)v24;
        if ( *(_QWORD *)v24 )
        {
          *((_QWORD *)v24 + 1) = 0;
          qfree(v25);
          v23 = (char *)ptr;
        }
        ++v21;
      }
      while ( v22 != v21 );
      v20 = v23;
    }
    *(_QWORD *)&v56 = 0;
    qfree(v20);
  }
  v26 = s2;
  v4 = nullptr;
LABEL_37:
  if ( v26 )
  {
    n.m128i_i64[0] = 0;
    qfree(v26);
  }
  return v4;
}
