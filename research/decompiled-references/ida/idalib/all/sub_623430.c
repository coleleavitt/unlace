unsigned __int64 __fastcall sub_623430(__int64 a1, __int64 *a2)
{
  int v3; // ebp
  void *lexer; // rbx
  unsigned __int16 v5; // ax
  __int64 v6; // r14
  bool v7; // al
  __int64 v8; // rdx
  const char *v10; // rsi
  size_t v11; // r14
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // rax
  char v18; // al
  void *v19; // r14
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 v22; // rax
  void *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __m128i v26; // [rsp+0h] [rbp-20C8h] BYREF
  void *ptr; // [rsp+10h] [rbp-20B8h] BYREF
  __m128i v28; // [rsp+18h] [rbp-20B0h] BYREF
  _BYTE v29[16]; // [rsp+30h] [rbp-2098h]
  void *v30; // [rsp+40h] [rbp-2088h]
  __int128 v31; // [rsp+48h] [rbp-2080h]
  __int64 v32; // [rsp+58h] [rbp-2070h]
  __int64 v33; // [rsp+60h] [rbp-2068h]
  __int64 v34; // [rsp+68h] [rbp-2060h]
  __int128 v35; // [rsp+70h] [rbp-2058h]
  char s[4096]; // [rsp+80h] [rbp-2048h] BYREF
  char s2[4104]; // [rsp+1080h] [rbp-1048h] BYREF
  unsigned __int64 v38; // [rsp+2088h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v29[0] = 0;
  s[0] = 0;
  v3 = 0;
  lexer = (void *)create_lexer(0, 0, 0, 0);
  lex_init_string(lexer, a1, 0);
  while ( 1 )
  {
    v31 = 0;
    v30 = nullptr;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    if ( (unsigned int)lex_get_token((int)lexer) )
      break;
    v5 = v32;
    if ( (_WORD)v32 == 63 )
    {
      if ( !s[0] )
        break;
      get_idp_name(s2);
      v7 = strcmp(s, s2) != 0;
LABEL_14:
      if ( v3 == 16 )
        break;
      v8 = v3++;
      s[0] = 0;
      v29[v3] = v29[v8] | v7;
      goto LABEL_16;
    }
    if ( s[0] )
    {
      if ( !v29[v3] )
      {
        ptr = nullptr;
        v26.m128i_i64[1] = (__int64)s;
        v28 = 0;
        v11 = strlen(s);
        v26.m128i_i64[0] = v11 + 1;
        ptr = (void *)qvector_reserve(&ptr, 0, v11 + 1, 1);
        v28.m128i_i64[0] = v26.m128i_i64[0];
        memmove(ptr, (const void *)v26.m128i_i64[1], v11);
        *((_BYTE *)ptr + v11) = 0;
        v12 = a2[1];
        v13 = *a2;
        v14 = a2[2];
        v15 = v12 + 1;
        if ( (unsigned __int64)&ptr < *a2 || (unsigned __int64)&ptr >= v13 + 24 * v14 )
        {
          if ( v14 < v15 )
          {
            v25 = qvector_reserve(a2, v13, v12 + 1, 24);
            *a2 = v25;
            v13 = v25;
            v12 = a2[1];
          }
          v16 = _mm_loadu_si128(&v28);
          v17 = v13 + 24 * v12;
          *(_QWORD *)v17 = ptr;
          *(__m128i *)(v17 + 8) = v16;
          ++a2[1];
        }
        else
        {
          v19 = ptr;
          v20 = _mm_loadl_epi64(&v28);
          ptr = nullptr;
          v21 = _mm_loadl_epi64((const __m128i *)&v28.m128i_u64[1]);
          v28 = 0;
          if ( v14 < v15 )
          {
            v26.m128i_i64[1] = v21.m128i_i64[0];
            v26.m128i_i64[0] = v20.m128i_i64[0];
            v24 = qvector_reserve(a2, v13, v12 + 1, 24);
            *a2 = v24;
            v13 = v24;
            v21 = _mm_loadl_epi64((const __m128i *)&v26.m128i_u64[1]);
            v12 = a2[1];
            v20 = _mm_loadl_epi64(&v26);
          }
          v22 = v13 + 24 * v12;
          *(_QWORD *)v22 = v19;
          v23 = ptr;
          *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v20, v21);
          ++a2[1];
          if ( v23 )
          {
            v28.m128i_i64[0] = 0;
            qfree(v23);
          }
        }
        v5 = v32;
      }
      s[0] = 0;
    }
    if ( v5 == 58 )
    {
      if ( !v3 )
        break;
      v18 = v29[v3];
      if ( !v18 || !v29[v3 - 1] )
        v29[v3] = v18 ^ 1;
    }
    else
    {
      if ( v5 <= 0x3Au )
      {
        if ( v5 == 2 )
        {
          v10 = haystack;
          if ( (_QWORD)v31 )
            v10 = (const char *)v30;
          qstrncpy(s, v10, 4096);
          goto LABEL_16;
        }
        if ( v5 != 3 )
          break;
        v6 = v33;
        if ( (unsigned int)lex_get_token((int)lexer) || (_WORD)v32 != 63 )
          break;
        v7 = v6 != (-(__int64)((unsigned __int8)getinf_flag(3, 4) == 0) & 0xFFFFFFFFFFFFFFE0LL) + 64;
        goto LABEL_14;
      }
      if ( v5 != 59 )
        break;
      if ( --v3 < 0 )
        break;
    }
LABEL_16:
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v30);
    }
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  destroy_lexer(lexer);
  return v38 - __readfsqword(0x28u);
}
