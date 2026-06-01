void __fastcall sub_22BA1F0(__m128i *a1, _QWORD **a2)
{
  __m128i *v3; // rdi
  size_t v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // [rsp+8h] [rbp-80h] BYREF
  __m128i v9; // [rsp+10h] [rbp-78h] BYREF
  __int64 v10; // [rsp+20h] [rbp-68h] BYREF
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n; // [rsp+38h] [rbp-50h]
  _QWORD v13[2]; // [rsp+40h] [rbp-48h] BYREF
  __m128i v14; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+60h] [rbp-28h]

  sub_2253560(&v9, a2);
  sub_22B9ED0((__int64)&src, &v9);
  if ( (__int64 *)v9.m128i_i64[0] != &v10 )
    operator delete((void *)v9.m128i_i64[0]);
  v3 = (__m128i *)a1->m128i_i64[0];
  v4 = n;
  if ( src == v13 )
  {
    if ( n )
    {
      if ( n == 1 )
        v3->m128i_i8[0] = v13[0];
      else
        memcpy(v3, src, n);
      v4 = n;
      v3 = (__m128i *)a1->m128i_i64[0];
    }
    a1->m128i_i64[1] = v4;
    v3->m128i_i8[v4] = 0;
    v3 = (__m128i *)src;
  }
  else
  {
    if ( v3 == &a1[1] )
    {
      v8 = v13[0];
      a1->m128i_i64[0] = (__int64)src;
      *(__m128 *)((char *)a1 + 8) = _mm_loadh_ps((const double *)&v8);
    }
    else
    {
      v8 = v13[0];
      v5 = a1[1].m128i_i64[0];
      a1->m128i_i64[0] = (__int64)src;
      *(__m128 *)((char *)a1 + 8) = _mm_loadh_ps((const double *)&v8);
      if ( v3 )
      {
        src = v3;
        v13[0] = v5;
        goto LABEL_7;
      }
    }
    v3 = (__m128i *)v13;
    src = v13;
  }
LABEL_7:
  n = 0;
  v3->m128i_i8[0] = 0;
  v6 = v15;
  v7 = src;
  a1[2] = _mm_load_si128(&v14);
  a1[3].m128i_i64[0] = v6;
  if ( v7 != v13 )
    operator delete(v7);
}
