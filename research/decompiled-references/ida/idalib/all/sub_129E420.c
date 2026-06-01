__m128i *__fastcall sub_129E420(__m128i *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  _BYTE *v6; // rax
  __int64 v7; // rdx
  __m128i *v8; // rdi
  __int64 v9; // rdx
  signed __int64 v10; // rax
  size_t v11; // r14
  __m128i *v12; // rcx
  size_t v13; // r15
  _BYTE *v14; // rdi
  size_t v15; // rbp
  unsigned __int64 v16; // rax
  size_t v17; // rbp
  size_t v18; // rdx
  char *v19; // rax
  size_t *v20; // rdi
  _BYTE *v22; // rdi
  size_t v23; // rbp
  __m128i *v24; // rax
  __m128i *v25; // r14
  size_t v26; // rdx
  size_t v27; // rbx
  size_t v28; // rdx
  __m128i *v29; // [rsp+8h] [rbp-80h] BYREF
  void *src; // [rsp+10h] [rbp-78h] BYREF
  __m128 n; // [rsp+18h] [rbp-70h] BYREF
  void *v32; // [rsp+30h] [rbp-58h] BYREF
  size_t v33; // [rsp+38h] [rbp-50h]
  __m128i v34[4]; // [rsp+40h] [rbp-48h] BYREF

  v5 = *(_DWORD *)(a2 + 48);
  n.m128_i8[8] = 0;
  n.m128_u64[0] = 0;
  src = &n.m128_u16[4];
  if ( v5 != 2 )
  {
    if ( v5 <= 2 )
    {
      if ( v5 != 1 )
      {
LABEL_5:
        v6 = (_BYTE *)sub_22B7480(a2 + 16);
        if ( v6 )
        {
          v32 = v34;
          sub_129A690(&v32, v6, (__int64)&v6[v7]);
          v8 = (__m128i *)src;
          if ( v32 != v34 )
          {
            if ( src == &n.m128_u16[4] )
            {
              v29 = (__m128i *)v34[0].m128i_i64[0];
              src = v32;
              n = _mm_loadh_ps((const double *)&v29);
            }
            else
            {
              v29 = (__m128i *)v34[0].m128i_i64[0];
              v9 = n.m128_i64[1];
              src = v32;
              n = _mm_loadh_ps((const double *)&v29);
              if ( v8 )
              {
                v32 = v8;
                v34[0].m128i_i64[0] = v9;
                goto LABEL_10;
              }
            }
            v8 = v34;
            v32 = v34;
LABEL_10:
            v33 = 0;
            v8->m128i_i8[0] = 0;
            if ( v32 != v34 )
              operator delete(v32);
            goto LABEL_15;
          }
          v26 = v33;
          if ( v33 )
          {
            if ( v33 == 1 )
              *(_BYTE *)src = v34[0].m128i_i8[0];
            else
              memcpy(src, v32, v33);
            v26 = v33;
            v8 = (__m128i *)src;
          }
        }
        else
        {
          v34[0].m128i_i8[0] = 0;
          v8 = (__m128i *)src;
          v26 = 0;
          v32 = v34;
        }
        n.m128_u64[0] = v26;
        v8->m128i_i8[v26] = 0;
        v8 = (__m128i *)v32;
        goto LABEL_10;
      }
    }
    else if ( v5 != 35 )
    {
      if ( v5 != 36 )
        goto LABEL_5;
      goto LABEL_45;
    }
    sub_99BDC0(&src, 0, 0, "arm", 3u);
    goto LABEL_14;
  }
LABEL_45:
  sub_99BDC0(&src, 0, 0, "armeb", 5u);
LABEL_14:
  if ( (unsigned int)sub_113F460(a2, a3) == 3 )
  {
    v27 = n.m128_u64[0];
    if ( n.m128_u64[0] == 0x7FFFFFFFFFFFFFFFLL || n.m128_u64[0] == 9223372036854775806LL )
      goto LABEL_69;
    if ( src == &n.m128_u16[4] )
      v28 = 15;
    else
      v28 = n.m128_u64[1];
    if ( n.m128_u64[0] + 2 > v28 )
      sub_998B30((__int64)&src, n.m128_u64[0], 0, "hf", 2u);
    else
      *(_WORD *)((char *)src + n.m128_u64[0]) = 26216;
    n.m128_u64[0] = v27 + 2;
    *((_BYTE *)src + v27 + 2) = 0;
  }
LABEL_15:
  v34[0].m128i_i8[0] = 0;
  v32 = v34;
  v33 = 0;
  v10 = n.m128_u64[0] + 13;
  if ( n.m128_u64[0] + 13 <= 0xF )
  {
    v11 = 13;
    v12 = v34;
    v13 = 0;
LABEL_17:
    qmemcpy(&v12->m128i_i8[v13], "/lib/ld-musl-", 13);
    goto LABEL_18;
  }
  if ( v10 < 0 )
    std::__throw_length_error("basic_string::_M_create");
  v23 = 30;
  v29 = v34;
  if ( (unsigned __int64)v10 >= 0x1E )
    v23 = n.m128_u64[0] + 13;
  v24 = (__m128i *)operator new(v23 + 1);
  v13 = v33;
  v25 = (__m128i *)v32;
  v12 = v24;
  if ( !v33 )
  {
    v24->m128i_i8[0] = *(_BYTE *)v32;
    if ( v25 != v34 )
      goto LABEL_41;
    goto LABEL_53;
  }
  if ( v33 == -1 )
  {
    if ( v32 != v34 )
    {
LABEL_41:
      v29 = v12;
      operator delete(v25);
      v13 = v33;
      v12 = v29;
      goto LABEL_42;
    }
LABEL_53:
    v32 = v24;
    v34[0].m128i_i64[0] = v23;
    goto LABEL_43;
  }
  v12 = (__m128i *)memcpy(v24, v32, v33 + 1);
  if ( v25 != v29 )
    goto LABEL_41;
LABEL_42:
  v32 = v12;
  v34[0].m128i_i64[0] = v23;
  if ( 0x7FFFFFFFFFFFFFFFLL - v13 <= 0xC )
    goto LABEL_69;
LABEL_43:
  v11 = v13 + 13;
  if ( v23 >= v13 + 13 )
    goto LABEL_17;
  sub_998B30((__int64)&v32, v13, 0, "/lib/ld-musl-", 0xDu);
LABEL_18:
  v33 = v11;
  *((_BYTE *)v32 + v11) = 0;
  v14 = v32;
  v15 = n.m128_u64[0] + v33;
  if ( v32 == v34 )
    v16 = 15;
  else
    v16 = v34[0].m128i_i64[0];
  if ( v15 > v16 )
  {
    sub_998B30((__int64)&v32, v33, 0, src, n.m128_u64[0]);
    v14 = v32;
  }
  else if ( n.m128_u64[0] )
  {
    v22 = (char *)v32 + v33;
    if ( n.m128_u64[0] == 1 )
      *v22 = *(_BYTE *)src;
    else
      memcpy(v22, src, n.m128_u64[0]);
    v14 = v32;
  }
  v33 = v15;
  v14[v15] = 0;
  v17 = v33;
  if ( 0x7FFFFFFFFFFFFFFFLL - v33 <= 4 )
LABEL_69:
    std::__throw_length_error("basic_string::append");
  if ( v32 == v34 )
    v18 = 15;
  else
    v18 = v34[0].m128i_i64[0];
  if ( v33 + 5 > v18 )
  {
    sub_998B30((__int64)&v32, v33, 0, ".so.1", 5u);
  }
  else
  {
    v19 = (char *)v32 + v33;
    *(_DWORD *)v19 = 779055918;
    v19[4] = 49;
  }
  v33 = v17 + 5;
  *((_BYTE *)v32 + v17 + 5) = 0;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( v32 == v34 )
  {
    a1[1] = _mm_load_si128(v34);
  }
  else
  {
    a1->m128i_i64[0] = (__int64)v32;
    a1[1].m128i_i64[0] = v34[0].m128i_i64[0];
  }
  v20 = (size_t *)src;
  a1->m128i_i64[1] = v33;
  if ( v20 != (size_t *)&n.m128_u16[4] )
    operator delete(v20);
  return a1;
}
