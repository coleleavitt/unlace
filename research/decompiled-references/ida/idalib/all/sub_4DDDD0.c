char *__fastcall sub_4DDDD0(char **a1, const __m128i *a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  unsigned __int64 v4; // r9
  char *v5; // rbx
  unsigned __int64 v6; // rsi
  char **v7; // r10
  __int64 v8; // r15
  char *v9; // rax
  char *v10; // r8
  char *v11; // r12
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char *v16; // r14
  __int64 v17; // r15
  char *v18; // rax
  _QWORD *v19; // rdx
  char *v20; // r12
  size_t v21; // r15
  char *v22; // r10
  char *v23; // rsi
  unsigned __int64 v24; // r9
  char *v25; // rcx
  unsigned __int64 v26; // rdx
  char *v27; // rax
  char *v28; // rdx

  v2 = operator new(0x18u);
  v3 = _mm_loadu_si128(a2);
  v4 = (unsigned __int64)a1[3];
  *(_QWORD *)v2 = 0;
  v5 = (char *)v2;
  *(__m128i *)(v2 + 8) = v3;
  if ( v4 )
  {
    v6 = (unsigned __int64)a1[1];
    v7 = *(char ***)&(*a1)[8 * (v3.m128i_i64[0] % v6)];
    v8 = v3.m128i_i64[0] % v6;
    if ( !v7 )
      goto LABEL_14;
    v9 = *v7;
    if ( v3.m128i_i64[0] != *((_QWORD *)*v7 + 1) )
    {
      while ( 1 )
      {
        v10 = *(char **)v9;
        if ( !*(_QWORD *)v9 )
          break;
        v7 = (char **)v9;
        if ( *((_QWORD *)v10 + 1) % v6 != v3.m128i_i64[0] % v6 )
          break;
        v9 = *(char **)v9;
        if ( v3.m128i_i64[0] == *((_QWORD *)v10 + 1) )
          goto LABEL_7;
      }
LABEL_14:
      if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                              (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                              v6,
                              v4,
                              1u) )
      {
        v20 = (char *)v13;
        if ( v13 == 1 )
        {
          v22 = (char *)(a1 + 6);
          a1[6] = nullptr;
          v16 = (char *)(a1 + 6);
        }
        else
        {
          if ( v13 >> 60 )
          {
            if ( v13 >> 61 )
              sub_2EBC5E(a1 + 4, v6, v13, v14, v15);
            std::__throw_bad_alloc();
          }
          v21 = 8 * v13;
          v16 = (char *)operator new(8 * v13);
          memset(v16, 0, v21);
          v22 = (char *)(a1 + 6);
        }
        v23 = a1[2];
        a1[2] = nullptr;
        v24 = 0;
        while ( v23 )
        {
          while ( 1 )
          {
            v25 = v23;
            v23 = *(char **)v23;
            v26 = *((_QWORD *)v25 + 1) % (unsigned __int64)v20;
            v27 = &v16[8 * v26];
            if ( !*(_QWORD *)v27 )
              break;
            *(_QWORD *)v25 = **(_QWORD **)v27;
            **(_QWORD **)v27 = v25;
            if ( !v23 )
              goto LABEL_29;
          }
          *(_QWORD *)v25 = a1[2];
          a1[2] = v25;
          *(_QWORD *)v27 = a1 + 2;
          if ( *(_QWORD *)v25 )
            *(_QWORD *)&v16[8 * v24] = v25;
          v24 = v26;
        }
LABEL_29:
        if ( *a1 != v22 )
          operator delete(*a1, 8LL * (_QWORD)a1[1]);
        a1[1] = v20;
        *a1 = v16;
        v17 = 8 * (v3.m128i_i64[0] % (unsigned __int64)v20);
        v18 = &v16[v17];
        v19 = *(_QWORD **)&v16[v17];
        if ( v19 )
          goto LABEL_16;
      }
      else
      {
        v16 = *a1;
        v17 = 8 * v8;
        v18 = &(*a1)[v17];
        v19 = *(_QWORD **)v18;
        if ( *(_QWORD *)v18 )
        {
LABEL_16:
          *(_QWORD *)v5 = *v19;
          **(_QWORD **)v18 = v5;
LABEL_17:
          ++a1[3];
          return v5;
        }
      }
      v28 = a1[2];
      a1[2] = v5;
      *(_QWORD *)v5 = v28;
      if ( v28 )
      {
        *(_QWORD *)&v16[8 * (*((_QWORD *)v28 + 1) % (unsigned __int64)a1[1])] = v5;
        v18 = &(*a1)[v17];
      }
      *(_QWORD *)v18 = a1 + 2;
      goto LABEL_17;
    }
LABEL_7:
    if ( !v7 )
      goto LABEL_14;
    v11 = *v7;
    if ( !*v7 )
      goto LABEL_14;
    if ( v5 )
      goto LABEL_10;
  }
  else
  {
    v11 = a1[2];
    if ( !v11 )
    {
LABEL_13:
      v6 = (unsigned __int64)a1[1];
      v8 = v3.m128i_i64[0] % v6;
      goto LABEL_14;
    }
    while ( *((_QWORD *)v11 + 1) != v3.m128i_i64[0] )
    {
      v11 = *(char **)v11;
      if ( !v11 )
        goto LABEL_13;
    }
    if ( v2 )
LABEL_10:
      operator delete(v5, 0x18u);
  }
  return v11;
}
