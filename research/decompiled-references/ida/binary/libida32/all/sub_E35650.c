__int64 __fastcall sub_E35650(__int64 a1, __m128i *a2)
{
  __m128i *v3; // r12
  __int64 result; // rax
  __m128i *v5; // rdi
  __int64 v6; // rdx
  size_t v7; // rdx
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  void *src; // [rsp+10h] [rbp-48h] BYREF
  size_t n; // [rsp+18h] [rbp-40h]
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a2 + 1;
  *(_WORD *)a1 = 6;
  if ( (unsigned __int8)sub_2205990(a2->m128i_i64[0], a2->m128i_i64[1], 0) )
    goto LABEL_2;
  sub_2206BA0(&src, a2->m128i_i64[0], a2->m128i_i64[1]);
  v5 = (__m128i *)a2->m128i_i64[0];
  if ( src == v11 )
  {
    v7 = n;
    if ( n )
    {
      if ( n == 1 )
        v5->m128i_i8[0] = v11[0];
      else
        memcpy(v5, src, n);
      v7 = n;
      v5 = (__m128i *)a2->m128i_i64[0];
    }
    a2->m128i_i64[1] = v7;
    v5->m128i_i8[v7] = 0;
    v5 = (__m128i *)src;
    goto LABEL_10;
  }
  if ( v5 == v3 )
  {
    v8 = v11[0];
    a2->m128i_i64[0] = (__int64)src;
    *(__m128 *)((char *)a2 + 8) = _mm_loadh_ps((const double *)&v8);
  }
  else
  {
    v8 = v11[0];
    v6 = a2[1].m128i_i64[0];
    a2->m128i_i64[0] = (__int64)src;
    *(__m128 *)((char *)a2 + 8) = _mm_loadh_ps((const double *)&v8);
    if ( v5 )
    {
      src = v5;
      v11[0] = v6;
      goto LABEL_10;
    }
  }
  v5 = (__m128i *)v11;
  src = v11;
LABEL_10:
  n = 0;
  v5->m128i_i8[0] = 0;
  if ( src != v11 )
    operator delete(src);
LABEL_2:
  *(_QWORD *)(a1 + 8) = a1 + 24;
  if ( (__m128i *)a2->m128i_i64[0] == v3 )
  {
    *(__m128i *)(a1 + 24) = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a2->m128i_i64[0];
    *(_QWORD *)(a1 + 24) = a2[1].m128i_i64[0];
  }
  result = a2->m128i_i64[1];
  a2->m128i_i64[0] = (__int64)v3;
  a2->m128i_i64[1] = 0;
  *(_QWORD *)(a1 + 16) = result;
  a2[1].m128i_i8[0] = 0;
  return result;
}

