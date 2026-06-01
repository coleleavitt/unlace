__int64 __fastcall sub_21CE3D0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  char **v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  char **v11; // rsi
  char **v12; // rdi
  __int64 v13; // r14
  _QWORD *i; // rbp
  char *v16; // r9
  __m128i v17; // xmm0
  __int64 v18; // r14
  signed __int64 v19; // rcx
  signed __int64 v20; // r14
  char **v21; // rsi
  __int64 v22; // rbx
  char *v23; // r8
  __m128i v24; // xmm0
  __int64 v25; // rbp
  signed __int64 v26; // rbp
  void **v27; // r13
  void **v28; // rbx
  _QWORD *v29; // r14
  __m128i v30; // [rsp+8h] [rbp-50h] BYREF
  _QWORD *v31; // [rsp+18h] [rbp-40h]

  v31 = a2;
  if ( a2 != (_QWORD *)a1 )
  {
    v3 = a2[1];
    v4 = *a2;
    v5 = *(char ***)a1;
    v30.m128i_i64[1] = v3 - v4;
    v6 = 0xAAAAAAAAAAAAAAABLL * ((v3 - v4) >> 3);
    v7 = v6;
    if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v5) >> 3) < v6 )
    {
      if ( v6 )
      {
        if ( v6 > 0xAAAAAAAAAAAAAAALL )
LABEL_47:
          std::__throw_bad_alloc();
        v31 = (_QWORD *)operator new(v30.m128i_u64[1]);
      }
      else
      {
        v31 = nullptr;
      }
      for ( i = v31; v3 != v4; *(i - 2) = &v16[v18] )
      {
        v19 = *(_QWORD *)(v4 + 8) - *(_QWORD *)v4;
        i[2] = 0;
        v20 = v19;
        *(_OWORD *)i = 0;
        if ( v19 >> 4 )
        {
          if ( (unsigned __int64)(v19 >> 4) > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_47;
          v16 = (char *)operator new(v19);
        }
        else
        {
          v16 = nullptr;
        }
        v30.m128i_i64[0] = (__int64)v16;
        v17 = _mm_loadl_epi64(&v30);
        i[2] = &v16[v20];
        *(__m128i *)i = _mm_unpacklo_epi64(v17, v17);
        v18 = *(_QWORD *)(v4 + 8) - *(_QWORD *)v4;
        if ( *(_QWORD *)(v4 + 8) != *(_QWORD *)v4 )
          v16 = (char *)memmove(v16, *(const void **)v4, *(_QWORD *)(v4 + 8) - *(_QWORD *)v4);
        v4 += 24;
        i += 3;
      }
      v27 = *(void ***)(a1 + 8);
      v28 = *(void ***)a1;
      if ( v27 != *(void ***)a1 )
      {
        do
        {
          while ( *v28 )
          {
            operator delete(*v28);
            v28 += 3;
            if ( v27 == v28 )
              goto LABEL_41;
          }
          v28 += 3;
        }
        while ( v27 != v28 );
LABEL_41:
        v28 = *(void ***)a1;
      }
      if ( v28 )
        operator delete(v28);
      v29 = v31;
      *(_QWORD *)a1 = v31;
      v13 = (__int64)v29 + v30.m128i_i64[1];
      *(_QWORD *)(a1 + 16) = v13;
      goto LABEL_10;
    }
    v8 = *(_QWORD *)(a1 + 8);
    v9 = v8 - (_QWORD)v5;
    v10 = 0xAAAAAAAAAAAAAAABLL * ((v8 - (__int64)v5) >> 3);
    if ( v6 > v10 )
    {
      if ( v9 > 0 )
      {
        do
        {
          v21 = (char **)v4;
          v30.m128i_i64[0] = v10;
          v4 += 24;
          sub_21CE290(v5, v21);
          v5 += 3;
          v10 = v30.m128i_i64[0] - 1;
        }
        while ( v30.m128i_i64[0] != 1 );
        v8 = *(_QWORD *)(a1 + 8);
        v5 = *(char ***)a1;
        v3 = v31[1];
        v4 = *v31;
        v9 = v8 - *(_QWORD *)a1;
      }
      v22 = v9 + v4;
      if ( v22 == v3 )
      {
        v13 = (__int64)v5 + v30.m128i_i64[1];
        goto LABEL_10;
      }
      do
      {
        v26 = *(_QWORD *)(v22 + 8) - *(_QWORD *)v22;
        *(_QWORD *)(v8 + 16) = 0;
        *(_OWORD *)v8 = 0;
        if ( v26 >> 4 )
        {
          if ( (unsigned __int64)(v26 >> 4) > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_47;
          v23 = (char *)operator new(v26);
        }
        else
        {
          v23 = nullptr;
        }
        v30.m128i_i64[0] = (__int64)v23;
        v24 = _mm_loadl_epi64(&v30);
        *(_QWORD *)(v8 + 16) = &v23[v26];
        *(__m128i *)v8 = _mm_unpacklo_epi64(v24, v24);
        v25 = *(_QWORD *)(v22 + 8) - *(_QWORD *)v22;
        if ( *(_QWORD *)(v22 + 8) != *(_QWORD *)v22 )
          v23 = (char *)memmove(v23, *(const void **)v22, *(_QWORD *)(v22 + 8) - *(_QWORD *)v22);
        v22 += 24;
        v8 += 24;
        *(_QWORD *)(v8 - 16) = &v23[v25];
      }
      while ( v22 != v3 );
    }
    else
    {
      if ( v30.m128i_i64[1] > 0 )
      {
        do
        {
          v11 = (char **)v4;
          v12 = v5;
          v4 += 24;
          v5 += 3;
          sub_21CE290(v12, v11);
          --v7;
        }
        while ( v7 );
      }
      while ( (char **)v8 != v5 )
      {
        while ( *v5 )
        {
          operator delete(*v5);
          v5 += 3;
          if ( (char **)v8 == v5 )
            goto LABEL_9;
        }
        v5 += 3;
      }
    }
LABEL_9:
    v13 = *(_QWORD *)a1 + v30.m128i_i64[1];
LABEL_10:
    *(_QWORD *)(a1 + 8) = v13;
  }
  return a1;
}
