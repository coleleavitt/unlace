void __fastcall sub_126F250(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  void **v6; // rbx
  void **v7; // r12
  __int64 v8; // rax
  __m128i *v9; // rax
  __m128i *v10; // rdi
  __int64 v11; // rcx
  void **v12; // rbx
  size_t v13; // rdx
  void **v14; // rbp
  void **v15; // rbx
  __int64 v16; // [rsp+10h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+18h] [rbp-D8h]
  __int64 v18; // [rsp+20h] [rbp-D0h]
  void *v19; // [rsp+28h] [rbp-C8h] BYREF
  void *v20; // [rsp+30h] [rbp-C0h]
  void *dest; // [rsp+48h] [rbp-A8h] BYREF
  __m128 v22; // [rsp+50h] [rbp-A0h] BYREF
  void *v23[2]; // [rsp+68h] [rbp-88h] BYREF
  _BYTE v24[16]; // [rsp+78h] [rbp-78h] BYREF
  void *p_src; // [rsp+88h] [rbp-68h] BYREF
  size_t n; // [rsp+90h] [rbp-60h]
  __m128i src; // [rsp+98h] [rbp-58h] BYREF
  __int16 v28; // [rsp+A8h] [rbp-48h]

  if ( !*(_QWORD *)(a1 + 2128) )
    return;
  v4 = *(unsigned int *)(a1 + 2184);
  v18 = a3;
  v5 = *(_QWORD *)(a1 + 2176);
  v17 = a2;
  (*(void (__fastcall **)(void **, __int64, __int64))(a1 + 2136))(&v19, a1 + 2112, v5 + 192 * v4 - 192);
  v6 = (void **)v19;
  v7 = (void **)v20;
  if ( v19 == v20 )
  {
LABEL_21:
    if ( v7 )
      operator delete(v7);
    return;
  }
  while ( 1 )
  {
    dest = &v22.m128_u16[4];
    sub_126E200(&dest, *v6, (__int64)v6[1] + (_QWORD)*v6);
    v8 = *(_QWORD *)(a1 + 8);
    v23[0] = v24;
    sub_126E200(v23, *(_BYTE **)(v8 + 104), *(_QWORD *)(v8 + 104) + *(_QWORD *)(v8 + 112));
    sub_9EE560(v23, dest, v22.m128_u64[0]);
    if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v23[1] <= 6 )
      std::__throw_length_error("basic_string::append");
    v9 = (__m128i *)sub_9EE560(v23, "/c++/v1", 7u);
    p_src = &src;
    if ( (__m128i *)v9->m128i_i64[0] == &v9[1] )
    {
      src = _mm_loadu_si128(v9 + 1);
    }
    else
    {
      p_src = (void *)v9->m128i_i64[0];
      src.m128i_i64[0] = v9[1].m128i_i64[0];
    }
    n = v9->m128i_u64[1];
    v9->m128i_i64[0] = (__int64)v9[1].m128i_i64;
    v10 = (__m128i *)dest;
    v9->m128i_i64[1] = 0;
    v9[1].m128i_i8[0] = 0;
    if ( p_src == &src )
    {
      v13 = n;
      if ( n )
      {
        if ( n == 1 )
          v10->m128i_i8[0] = src.m128i_i8[0];
        else
          memcpy(v10, &src, n);
        v13 = n;
        v10 = (__m128i *)dest;
      }
      v22.m128_u64[0] = v13;
      v10->m128i_i8[v13] = 0;
      v10 = (__m128i *)p_src;
    }
    else
    {
      if ( v10 == (__m128i *)&v22.m128_u16[4] )
      {
        v16 = src.m128i_i64[0];
        dest = p_src;
        v22 = _mm_loadh_ps((const double *)&v16);
      }
      else
      {
        v16 = src.m128i_i64[0];
        v11 = v22.m128_i64[1];
        dest = p_src;
        v22 = _mm_loadh_ps((const double *)&v16);
        if ( v10 )
        {
          p_src = v10;
          src.m128i_i64[0] = v11;
          goto LABEL_10;
        }
      }
      p_src = &src;
      v10 = &src;
    }
LABEL_10:
    n = 0;
    v10->m128i_i8[0] = 0;
    if ( p_src != &src )
      operator delete(p_src);
    if ( v23[0] != v24 )
      operator delete(v23[0]);
    v28 = 260;
    p_src = &dest;
    if ( !(unsigned int)sub_228C1E0(&p_src, 0) )
      break;
    if ( dest == &v22.m128_u16[4] )
    {
      v6 += 4;
      if ( v7 == v6 )
      {
LABEL_17:
        v12 = (void **)v20;
        v7 = (void **)v19;
        if ( v20 != v19 )
        {
          do
          {
            while ( *v7 != v7 + 2 )
            {
              operator delete(*v7);
              v7 += 4;
              if ( v7 == v12 )
                goto LABEL_20;
            }
            v7 += 4;
          }
          while ( v12 != v7 );
LABEL_20:
          v7 = (void **)v19;
        }
        goto LABEL_21;
      }
    }
    else
    {
      operator delete(dest);
      v6 += 4;
      if ( v7 == v6 )
        goto LABEL_17;
    }
  }
  v28 = 260;
  p_src = &dest;
  sub_112FA80(v17, v18, (__int64)&p_src);
  if ( dest != &v22.m128_u16[4] )
    operator delete(dest);
  v14 = (void **)v20;
  v15 = (void **)v19;
  if ( v20 != v19 )
  {
    do
    {
      while ( *v15 != v15 + 2 )
      {
        operator delete(*v15);
        v15 += 4;
        if ( v14 == v15 )
          goto LABEL_41;
      }
      v15 += 4;
    }
    while ( v14 != v15 );
LABEL_41:
    v15 = (void **)v19;
  }
  if ( v15 )
    operator delete(v15);
}
