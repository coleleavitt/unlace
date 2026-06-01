__int64 __fastcall sub_6DA080(__int64 a1, __int64 a2)
{
  bool v3; // zf
  const char *v5; // r15
  char *v6; // rbx
  _BYTE *v7; // rsi
  char *v8; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // rdx
  char *v14; // rdi
  __int64 v15; // rax
  __m128i v16; // xmm0
  void *v17; // rax
  __int64 v18; // rbx
  size_t v19; // rax
  _BYTE *v20; // rsi
  size_t v21; // r12
  size_t v22; // r13
  __int64 v23; // [rsp+0h] [rbp-78h]
  _BYTE *v24; // [rsp+0h] [rbp-78h]
  __int64 v25; // [rsp+8h] [rbp-70h]
  __int64 v26; // [rsp+10h] [rbp-68h]
  const char *v27; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v29; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 7LL) & 0x40) == 0 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8) == 0;
  ptr = nullptr;
  v29 = 0;
  if ( v3 )
    return 0;
  v5 = *(const char **)a2;
  v27 = *(const char **)a2;
  v6 = strstr(*(const char **)a2, "IDA_TIL_NAMESPACE::");
  if ( !v6 )
    return 0;
  v7 = nullptr;
  while ( 1 )
  {
    if ( v6 != v5 )
    {
      v11 = v29.m128i_i64[0];
      v12 = v6 - v5;
      if ( v29.m128i_i64[0] )
      {
        v11 = v29.m128i_i64[0] - 1;
        v12 = v6 - v5 + v29.m128i_i64[0] - 1;
      }
      v13 = v12 + 1;
      if ( v29.m128i_i64[1] < (unsigned __int64)(v12 + 1) )
      {
        v26 = v11;
        v25 = v12;
        v23 = v12 + 1;
        v17 = (void *)qvector_reserve(&ptr, v7, v13, 1);
        v11 = v26;
        v12 = v25;
        ptr = v17;
        v13 = v23;
        v7 = v17;
      }
      v29.m128i_i64[0] = v13;
      v7[v12] = 0;
      memmove((char *)ptr + v11, v5, v6 - v5);
      v7 = ptr;
    }
    v9 = v29.m128i_i64[0];
    v10 = 1;
    if ( v29.m128i_i64[0] )
    {
      v10 = v29.m128i_i64[0];
      v9 = v29.m128i_i64[0] - 1;
    }
    if ( v29.m128i_i64[1] < v10 )
    {
      ptr = (void *)qvector_reserve(&ptr, v7, v10, 1);
      v7 = ptr;
    }
    v29.m128i_i64[0] = v10;
    v7[v9] = 0;
    v5 = v6 + 19;
    v8 = strstr(v6 + 19, "IDA_TIL_NAMESPACE::");
    v7 = ptr;
    if ( !v8 )
      break;
    v6 = v8;
  }
  if ( v27 == v5 )
  {
    if ( ptr )
    {
      v29.m128i_i64[0] = 0;
      qfree(ptr);
    }
    return 0;
  }
  if ( v6[19] )
  {
    v18 = v29.m128i_i64[0];
    v24 = ptr;
    v19 = strlen(v5);
    v20 = v24;
    v21 = v19;
    v22 = v19;
    if ( v18 )
    {
      --v18;
      v22 = v19 + v18;
    }
    if ( v29.m128i_i64[1] < v22 + 1 )
    {
      ptr = (void *)qvector_reserve(&ptr, v24, v22 + 1, 1);
      v20 = ptr;
    }
    v29.m128i_i64[0] = v22 + 1;
    v20[v22] = 0;
    memmove((char *)ptr + v18, v5, v21);
    v7 = ptr;
  }
  v14 = *(char **)a2;
  v15 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = v7;
  v16 = _mm_loadu_si128(&v29);
  ptr = v14;
  v29.m128i_i64[1] = v15;
  *(__m128i *)(a2 + 8) = v16;
  if ( v14 )
  {
    v29.m128i_i64[0] = 0;
    qfree(v14);
  }
  return 1;
}
