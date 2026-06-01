void __fastcall sub_10B5710(__m128i *a1)
{
  __m128i *v1; // rbp
  __m128i *v2; // rax
  __int64 v3; // rdx
  size_t v4; // rdx
  const void *v5; // r13
  size_t v6; // rbx
  void **v7; // r14
  int v8; // eax
  size_t v9; // r15
  size_t v10; // rdx
  int v11; // eax
  __m128i *v12; // rdi
  size_t v13; // rdx
  __int64 v14; // rcx
  __m128i *v15; // rax
  __m128i *v16; // rbx
  __int64 v17; // rdx
  size_t v18; // rdx
  __int64 v19; // [rsp+8h] [rbp-70h] BYREF
  void *s1; // [rsp+10h] [rbp-68h] BYREF
  size_t v21; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h]
  size_t n; // [rsp+28h] [rbp-50h]
  _OWORD v24[4]; // [rsp+30h] [rbp-48h] BYREF

  v1 = a1 + 1;
  v2 = (__m128i *)a1->m128i_i64[0];
  src = v24;
  if ( v2 == &a1[1] )
  {
    v2 = (__m128i *)v24;
    v24[0] = _mm_loadu_si128(a1 + 1);
  }
  else
  {
    v3 = a1[1].m128i_i64[0];
    src = v2;
    *(_QWORD *)&v24[0] = v3;
  }
  v4 = a1->m128i_u64[1];
  a1->m128i_i64[0] = (__int64)v1;
  a1->m128i_i64[1] = 0;
  n = v4;
  a1[1].m128i_i8[0] = 0;
  while ( 1 )
  {
    v5 = (const void *)v1[-3].m128i_i64[0];
    v6 = v1[-3].m128i_u64[1];
    v21 = v4;
    v7 = (void **)&v1[-1];
    s1 = v2;
    v8 = sub_2222570(&s1, v5, v6);
    if ( !v8 )
      break;
    v12 = (__m128i *)v1[-1].m128i_i64[0];
    if ( v8 >= 0 )
      goto LABEL_11;
    v15 = (__m128i *)v1[-3].m128i_i64[0];
    v16 = v1 - 2;
    if ( &v1[-2] == v15 )
    {
LABEL_27:
      v18 = v16[-1].m128i_u64[1];
      if ( v18 )
      {
        if ( v18 == 1 )
          v12->m128i_i8[0] = v16->m128i_i8[0];
        else
          memcpy(v12, v16, v18);
        v18 = v16[-1].m128i_u64[1];
        v12 = (__m128i *)v16[1].m128i_i64[0];
      }
      v16[1].m128i_i64[1] = v18;
      v12->m128i_i8[v18] = 0;
      v12 = (__m128i *)v16[-1].m128i_i64[0];
      goto LABEL_24;
    }
LABEL_21:
    if ( v1 == v12 )
    {
      v16[1].m128i_i64[0] = (__int64)v15;
      v16[1].m128i_i64[1] = v16[-1].m128i_i64[1];
      v16[2].m128i_i64[0] = v16->m128i_i64[0];
    }
    else
    {
      v16[1].m128i_i64[0] = (__int64)v15;
      v17 = v16[2].m128i_i64[0];
      v16[1].m128i_i64[1] = v16[-1].m128i_i64[1];
      v16[2].m128i_i64[0] = v16->m128i_i64[0];
      if ( v12 )
      {
        v16[-1].m128i_i64[0] = (__int64)v12;
        v16->m128i_i64[0] = v17;
        goto LABEL_24;
      }
    }
    v16[-1].m128i_i64[0] = (__int64)v16;
    v12 = v16;
LABEL_24:
    v16[-1].m128i_i64[1] = 0;
    v1 = v16;
    v12->m128i_i8[0] = 0;
    v2 = (__m128i *)src;
    v4 = n;
  }
  v9 = v21;
  v10 = v21;
  if ( v6 <= v21 )
    v10 = v6;
  if ( !v10 || (v11 = memcmp(s1, v5, v10)) == 0 )
  {
    if ( v6 == v9 )
      goto LABEL_34;
    v12 = (__m128i *)v1[-1].m128i_i64[0];
    if ( v6 > v9 )
      goto LABEL_11;
LABEL_20:
    v15 = (__m128i *)v1[-3].m128i_i64[0];
    v16 = v1 - 2;
    if ( &v1[-2] == v15 )
      goto LABEL_27;
    goto LABEL_21;
  }
  if ( v11 >= 0 )
  {
    v12 = (__m128i *)v1[-1].m128i_i64[0];
    goto LABEL_20;
  }
LABEL_34:
  v12 = (__m128i *)v1[-1].m128i_i64[0];
LABEL_11:
  v13 = n;
  if ( src == v24 )
  {
    if ( n )
    {
      if ( n == 1 )
        v12->m128i_i8[0] = v24[0];
      else
        memcpy(v12, src, n);
      v13 = n;
      v12 = (__m128i *)*v7;
    }
    v7[1] = (void *)v13;
    v12->m128i_i8[v13] = 0;
    v12 = (__m128i *)src;
  }
  else
  {
    if ( v1 == v12 )
    {
      v19 = *(_QWORD *)&v24[0];
      *v7 = src;
      *(__m128 *)(v7 + 1) = _mm_loadh_ps((const double *)&v19);
    }
    else
    {
      v19 = *(_QWORD *)&v24[0];
      v14 = v1->m128i_i64[0];
      *v7 = src;
      *(__m128 *)(v7 + 1) = _mm_loadh_ps((const double *)&v19);
      if ( v12 )
      {
        src = v12;
        *(_QWORD *)&v24[0] = v14;
        goto LABEL_15;
      }
    }
    v12 = (__m128i *)v24;
    src = v24;
  }
LABEL_15:
  n = 0;
  v12->m128i_i8[0] = 0;
  if ( src != v24 )
    operator delete(src);
}

