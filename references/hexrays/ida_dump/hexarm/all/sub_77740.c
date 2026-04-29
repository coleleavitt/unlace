_DWORD *__fastcall sub_77740(const __m128i *a1, int a2, int a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *exception; // rax
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  __int64 *v9; // r13
  __m128i v10; // xmm0
  __int64 v11; // rax
  _DWORD *result; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  char i; // dl
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 *v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  bool v22; // cc
  _BYTE *v23; // rax
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128i *v28; // [rsp+0h] [rbp-48h]
  char v29; // [rsp+Fh] [rbp-39h]

  v7 = a1[14].m128i_u64[0];
  if ( !v7 )
  {
    v28 = (__m128i *)&a1[14];
    goto LABEL_43;
  }
  if ( !a1[14].m128i_i64[1] )
  {
    v28 = (__m128i *)&a1[14];
    goto LABEL_4;
  }
  v13 = *(_QWORD *)(v7 + 8);
  if ( v7 != v13 )
  {
    while ( 1 )
    {
LABEL_11:
      if ( *(_DWORD *)(v13 + 28) == a2 )
        *(_DWORD *)(v13 + 28) = a3;
      if ( (*(_QWORD *)v13 & 2) != 0 )
        goto LABEL_16;
      v14 = *(_QWORD *)(v13 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
      {
        v19 = (__int64 *)(*(_QWORD *)v13 & 0xFFFFFFFFFFFFFFFCLL);
        v20 = *v19;
        if ( (*v19 & 2) == 0 )
        {
          while ( v19[2] == v13 )
          {
            v13 = (unsigned __int64)v19;
            v21 = v20 & 0xFFFFFFFFFFFFFFFCLL;
            v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v20 & 2) != 0 )
            {
              v13 = v21;
              if ( a1[14].m128i_i64[0] != v21 )
                goto LABEL_11;
              goto LABEL_17;
            }
            v19 = (__int64 *)v21;
          }
        }
        v13 = (unsigned __int64)v19;
        if ( (__int64 *)a1[14].m128i_i64[0] == v19 )
        {
LABEL_17:
          v28 = (__m128i *)&a1[14];
          if ( v13 )
          {
            if ( a1[14].m128i_i64[1] )
              goto LABEL_19;
            v7 = v13;
LABEL_4:
            v8 = qalloc(32);
            v9 = (__int64 *)v8;
            if ( !v8 )
            {
              exception = __cxa_allocate_exception(8u);
              *exception = (char *)&`vtable for'std::bad_alloc + 16;
              __cxa_throw(
                exception,
                (struct type_info *)&`typeinfo for'std::bad_alloc,
                (void (*)(void *))&std::bad_alloc::~bad_alloc);
            }
            *(_OWORD *)(v8 + 16) = 0;
            *(_OWORD *)v8 = 0;
            *(_DWORD *)(v8 + 24) = a2;
            *(_QWORD *)v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
            v10 = _mm_loadl_epi64(a1 + 14);
            *(_QWORD *)v8 = v7 & 0xFFFFFFFFFFFFFFFCLL | 1;
            *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v10, v10);
            if ( v7 != a1[14].m128i_i64[0] )
            {
              *(_QWORD *)(v7 + 8) = v8;
              v11 = a1[14].m128i_i64[0];
              if ( v7 != *(_QWORD *)(v11 + 8) )
                goto LABEL_7;
LABEL_24:
              *(_QWORD *)(v11 + 8) = v9;
              goto LABEL_7;
            }
            *(_QWORD *)v7 = v8 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v7 & 3LL;
LABEL_46:
            *(_QWORD *)(a1[14].m128i_i64[0] + 8) = v9;
            *(_QWORD *)(a1[14].m128i_i64[0] + 16) = v9;
            v26 = *v9 & 2;
            *v9 &= ~1uLL;
            *v9 = v26 | a1[14].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
            goto LABEL_8;
          }
LABEL_43:
          v24 = qalloc(32);
          v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
          if ( !v24 )
          {
            v3 = __cxa_allocate_exception(8u);
            *v3 = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              v3,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_OWORD *)(v24 + 16) = 0;
          *(__m128i *)(v24 + 8) = v25;
          *(_QWORD *)v24 = v24 & 0xFFFFFFFFFFFFFFFCLL | 2;
          a1[14].m128i_i64[0] = v24;
          *(_QWORD *)v24 = v24 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v24 & 3LL;
          *(__m128i *)(a1[14].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                    (__m128i)a1[14].m128i_u64[0],
                                                    (__m128i)a1[14].m128i_u64[0]);
          *(_QWORD *)a1[14].m128i_i64[0] &= ~1uLL;
          *(_QWORD *)a1[14].m128i_i64[0] |= 2uLL;
          v7 = a1[14].m128i_u64[0];
          goto LABEL_4;
        }
      }
      else
      {
        do
        {
          v13 = v14;
          v14 = *(_QWORD *)(v14 + 8);
        }
        while ( (*(_BYTE *)v14 & 2) == 0 );
LABEL_16:
        if ( a1[14].m128i_i64[0] == v13 )
          goto LABEL_17;
      }
    }
  }
  v28 = (__m128i *)&a1[14];
LABEL_19:
  i = 1;
  v16 = *(_QWORD *)v13 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v16 & 2) == 0 )
  {
    result = (_DWORD *)(v16 + 24);
    v22 = *(_DWORD *)(v16 + 24) < a2;
    if ( *(_DWORD *)(v16 + 24) <= a2 )
      goto LABEL_37;
LABEL_34:
    v23 = *(_BYTE **)(v16 + 8);
    for ( i = 1; ; i = 0 )
    {
      if ( (*v23 & 2) != 0 )
      {
        v13 = v16;
        goto LABEL_20;
      }
      v16 = (unsigned __int64)v23;
      result = v23 + 24;
      v22 = *result < a2;
      if ( *result > a2 )
        goto LABEL_34;
LABEL_37:
      if ( !v22 )
        break;
      v23 = *(_BYTE **)(v16 + 16);
    }
    if ( v16 )
      goto LABEL_9;
    v13 = 0;
  }
LABEL_20:
  v29 = i;
  v17 = qalloc(32);
  v9 = (__int64 *)v17;
  if ( !v17 )
  {
    v4 = __cxa_allocate_exception(8u);
    *v4 = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(v4, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_OWORD *)(v17 + 16) = 0;
  *(_OWORD *)v17 = 0;
  *(_DWORD *)(v17 + 24) = a2;
  *(_QWORD *)v17 = v13 & 0xFFFFFFFFFFFFFFFCLL;
  v18 = _mm_loadl_epi64(a1 + 14);
  *(_QWORD *)v17 = v13 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v18, v18);
  if ( a1[14].m128i_i64[0] == v13 )
  {
    *(_QWORD *)v13 = v17 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v13 & 3LL;
    goto LABEL_46;
  }
  if ( v29 )
  {
    *(_QWORD *)(v13 + 8) = v17;
    v11 = a1[14].m128i_i64[0];
    if ( *(_QWORD *)(v11 + 8) == v13 )
      goto LABEL_24;
  }
  else
  {
    *(_QWORD *)(v13 + 16) = v17;
    v27 = a1[14].m128i_i64[0];
    if ( *(_QWORD *)(v27 + 16) == v13 )
      *(_QWORD *)(v27 + 16) = v9;
  }
LABEL_7:
  sub_77350(v28, v9);
LABEL_8:
  ++a1[14].m128i_i64[1];
  result = v9 + 3;
LABEL_9:
  result[1] = a3;
  return result;
}
