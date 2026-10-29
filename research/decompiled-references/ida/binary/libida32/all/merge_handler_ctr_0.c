unsigned __int64 __fastcall merge_handler_ctr_0(_QWORD *a1, const char *a2)
{
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // rbp
  char *v6; // rbx
  char *v7; // rbp
  char *v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rbp
  char *v12; // rax
  __int64 v13; // r15
  __int64 v14; // r9
  __int64 v15; // rdx
  char *v16; // rdi
  __m128i v17; // xmm0
  char *v18; // rsi
  __int64 v19; // rbx
  unsigned __int64 v20; // rbp
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  void *v23; // rdi
  __int64 v25; // rbx
  size_t v26; // rax
  size_t v27; // r14
  size_t v28; // r15
  __int64 v29; // rdx
  size_t v30; // r14
  __int64 v31; // rbp
  __int64 v32; // r15
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  char *src; // [rsp+8h] [rbp-90h]
  __int64 v37; // [rsp+10h] [rbp-88h]
  __int64 v38; // [rsp+18h] [rbp-80h]
  char *s; // [rsp+20h] [rbp-78h] BYREF
  __m128i v40; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __m128i v42; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( !a2 )
    return sub_44A180((__int64)&xmmword_2CA1760, (__int64)a1);
  s = nullptr;
  v40 = 0;
  v3 = strlen(a2);
  v4 = v3 + 1;
  v5 = v3;
  s = (char *)qvector_reserve(&s, 0, v3 + 1, 1);
  v40.m128i_i64[0] = v4;
  v6 = nullptr;
  memmove(s, a2, v5);
  s[v5] = 0;
  ptr = nullptr;
  src = (char *)haystack;
  v42 = 0;
  if ( v40.m128i_i64[0] )
  {
    src = s;
    v6 = strchr(s, 92);
  }
  v7 = src;
  v8 = nullptr;
  while ( v6 )
  {
    if ( v6 != v7 )
    {
      v13 = v42.m128i_i64[0];
      v14 = v6 - v7;
      if ( v42.m128i_i64[0] )
      {
        v13 = v42.m128i_i64[0] - 1;
        v14 = v6 - v7 + v42.m128i_i64[0] - 1;
      }
      v15 = v14 + 1;
      if ( v42.m128i_i64[1] < (unsigned __int64)(v14 + 1) )
      {
        v38 = v14;
        v37 = v14 + 1;
        ptr = (void *)qvector_reserve(&ptr, v8, v15, 1);
        v14 = v38;
        v8 = (char *)ptr;
        v15 = v37;
      }
      v42.m128i_i64[0] = v15;
      v8[v14] = 0;
      memmove((char *)ptr + v13, v7, v6 - v7);
      v8 = (char *)ptr;
    }
    v11 = v42.m128i_i64[0];
    if ( v42.m128i_i64[0] )
    {
      v9 = v42.m128i_i64[0] + 1;
      v10 = v42.m128i_i64[0];
      v11 = v42.m128i_i64[0] - 1;
      if ( v42.m128i_i64[1] >= (unsigned __int64)(v42.m128i_i64[0] + 1) )
        goto LABEL_6;
    }
    else
    {
      v9 = 2;
      v10 = 1;
      if ( v42.m128i_i64[1] >= 2uLL )
        goto LABEL_6;
    }
    ptr = (void *)qvector_reserve(&ptr, v8, v9, 1);
    v8 = (char *)ptr;
LABEL_6:
    v42.m128i_i64[0] = v9;
    v8[v10] = 0;
    *((_BYTE *)ptr + v11) = 95;
    v7 = v6 + 1;
    v12 = strchr(v6 + 1, 92);
    v8 = (char *)ptr;
    v6 = v12;
  }
  if ( v7 == src )
  {
    v16 = v8;
  }
  else
  {
    if ( *v7 && v7 )
    {
      v25 = v42.m128i_i64[0];
      v26 = strlen(v7);
      v27 = v26;
      v28 = v26;
      if ( v25 )
      {
        --v25;
        v28 = v26 + v25;
      }
      v29 = v28 + 1;
      if ( v42.m128i_i64[1] < v28 + 1 )
      {
        ptr = (void *)qvector_reserve(&ptr, v8, v29, 1);
        v29 = v28 + 1;
        v8 = (char *)ptr;
      }
      v42.m128i_i64[0] = v29;
      v8[v28] = 0;
      memmove((char *)ptr + v25, v7, v27);
      v8 = (char *)ptr;
    }
    v16 = s;
    s = v8;
    v17 = _mm_loadu_si128(&v42);
    ptr = v16;
    v42.m128i_i64[1] = v40.m128i_i64[1];
    v40 = v17;
  }
  if ( v16 )
  {
    v42.m128i_i64[0] = 0;
    qfree(v16);
  }
  ptr = nullptr;
  v18 = (char *)haystack;
  v42 = 0;
  if ( v40.m128i_i64[0] )
    v18 = s;
  qstr2user(&ptr, v18, 0xFFFFFFFFLL);
  v19 = a1[3];
  v20 = 2;
  if ( v19 )
    v20 = v19-- + 1;
  v21 = a1[2];
  if ( a1[4] < v20 )
  {
    v34 = qvector_reserve(a1 + 2, v21, v20, 1);
    a1[2] = v34;
    v21 = v34;
  }
  a1[3] = v20;
  *(_BYTE *)(v21 + v19) = 47;
  *(_BYTE *)(a1[2] + v19 + 1) = 0;
  v22 = v42.m128i_i64[0];
  if ( !v42.m128i_i64[0] || (v30 = v42.m128i_i64[0] - 1, v42.m128i_i64[0] == 1) )
  {
    v23 = ptr;
    if ( !ptr )
      goto LABEL_31;
LABEL_30:
    v42.m128i_i64[0] = 0;
    qfree(v23);
    goto LABEL_31;
  }
  v31 = a1[3];
  v32 = v42.m128i_i64[0] - 1;
  if ( v31 )
  {
    --v31;
    v32 = v30 + v31;
    v22 = v42.m128i_i64[0] + v31;
  }
  v33 = a1[2];
  if ( a1[4] < v22 )
  {
    v35 = qvector_reserve(a1 + 2, v33, v22, 1);
    a1[2] = v35;
    v33 = v35;
  }
  a1[3] = v22;
  *(_BYTE *)(v33 + v32) = 0;
  memcpy((void *)(v31 + a1[2]), ptr, v30);
  v23 = ptr;
  if ( ptr )
    goto LABEL_30;
LABEL_31:
  if ( s )
  {
    v40.m128i_i64[0] = 0;
    qfree(s);
  }
  return sub_44A180((__int64)&xmmword_2CA1760, (__int64)a1);
}

