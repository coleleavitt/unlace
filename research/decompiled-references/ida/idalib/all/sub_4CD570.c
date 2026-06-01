unsigned __int64 __fastcall sub_4CD570(__int64 a1)
{
  __int64 v1; // rdx
  const char *v3; // rbp
  size_t v4; // r14
  size_t v5; // r15
  __int64 v6; // rbx
  _BYTE *v7; // rsi
  __int64 v8; // rdx
  unsigned int utf8_char; // eax
  __int64 v10; // rdi
  const char *v11; // rax
  char valid; // al
  unsigned __int64 v13; // rbp
  _BYTE *v14; // rsi
  void *v15; // rdi
  __int64 v16; // rax
  void *v17; // rdx
  __m128i v18; // xmm0
  __int64 v20; // rdx
  void *v21; // rax
  bool v22; // zf
  const char *i; // [rsp+10h] [rbp-60h] BYREF
  void *ptr; // [rsp+18h] [rbp-58h] BYREF
  __m128i v25; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+30h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v26 = __readfsqword(0x28u);
  v25 = 0;
  ptr = nullptr;
  if ( v1 )
  {
    v20 = v1 - 1;
    if ( !v20 )
    {
      v3 = *(const char **)a1;
      goto LABEL_3;
    }
    v21 = (void *)qvector_reserve(&ptr, 0, v20, 1);
    v22 = *(_QWORD *)(a1 + 8) == 0;
    ptr = v21;
    if ( !v22 )
    {
      v3 = *(const char **)a1;
      goto LABEL_3;
    }
  }
  v3 = haystack;
LABEL_3:
  for ( i = v3; ; v3 = i )
  {
    utf8_char = get_utf8_char(&i);
    v10 = utf8_char;
    if ( !utf8_char )
      break;
    if ( utf8_char == -1 )
    {
      v11 = i++;
      v10 = *(unsigned __int8 *)v11;
    }
    valid = is_valid_cp(v10, 2, 0);
    v6 = v25.m128i_i64[0];
    if ( valid )
    {
      v4 = i - v3;
      v5 = i - v3;
      if ( v25.m128i_i64[0] )
      {
        v6 = v25.m128i_i64[0] - 1;
        v5 = v4 + v25.m128i_i64[0] - 1;
      }
      v7 = ptr;
      v8 = v5 + 1;
      if ( v25.m128i_i64[1] < v5 + 1 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v8, 1);
        v8 = v5 + 1;
        v7 = ptr;
      }
      v25.m128i_i64[0] = v8;
      v7[v5] = 0;
      memmove((char *)ptr + v6, v3, v4);
    }
    else
    {
      v13 = 2;
      if ( v25.m128i_i64[0] )
      {
        v13 = v25.m128i_i64[0] + 1;
        v6 = v25.m128i_i64[0] - 1;
      }
      v14 = ptr;
      if ( v25.m128i_i64[1] < v13 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
        v14 = ptr;
      }
      v25.m128i_i64[0] = v13;
      v14[v6] = 95;
      *((_BYTE *)ptr + v6 + 1) = 0;
    }
  }
  v16 = *(_QWORD *)(a1 + 16);
  v17 = ptr;
  v18 = _mm_loadu_si128(&v25);
  ptr = *(void **)a1;
  v15 = ptr;
  *(_QWORD *)a1 = v17;
  v25.m128i_i64[1] = v16;
  *(__m128i *)(a1 + 8) = v18;
  if ( v15 )
  {
    v25.m128i_i64[0] = 0;
    qfree(v15);
  }
  return v26 - __readfsqword(0x28u);
}
