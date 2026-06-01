__int64 __fastcall sub_1063750(__int64 a1, __int64 a2, unsigned __int8 **a3)
{
  _BYTE *v3; // r14
  unsigned __int8 *v5; // rsi
  unsigned __int8 v6; // al
  _BYTE *v7; // rax
  __m128i *v10; // rax
  _BYTE *v11; // rdi
  __int64 v12; // rdx
  size_t v13; // rdx
  __int64 v14; // [rsp+8h] [rbp-70h] BYREF
  void *v15[2]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v16[16]; // [rsp+20h] [rbp-58h] BYREF
  void *src; // [rsp+30h] [rbp-48h]
  size_t n; // [rsp+38h] [rbp-40h]
  _OWORD v19[3]; // [rsp+40h] [rbp-38h] BYREF

  v3 = (_BYTE *)(a1 + 16);
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  v5 = *a3;
  *(_QWORD *)(a1 + 8) = 0;
  v6 = *v5;
  if ( *v5 != 90 )
  {
    if ( v6 == 112 )
    {
      src = v19;
      LOWORD(v19[0]) = 114;
      v6 = 114;
    }
    else
    {
      LOWORD(v19[0]) = v6;
      src = v19;
    }
    *(_BYTE *)(a1 + 16) = v6;
    v7 = src;
    *(_QWORD *)(a1 + 8) = 1;
    *(_BYTE *)(a1 + 17) = 0;
    n = 0;
    *v7 = 0;
    if ( src != v19 )
      operator delete(src);
    return a1;
  }
  v15[0] = v16;
  sub_1061350(v15, v5, (__int64)(v5 + 2));
  v10 = (__m128i *)sub_978080(v15, 0, 0, "^", 1u);
  src = v19;
  if ( (__m128i *)v10->m128i_i64[0] == &v10[1] )
  {
    v19[0] = _mm_loadu_si128(v10 + 1);
  }
  else
  {
    src = (void *)v10->m128i_i64[0];
    *(_QWORD *)&v19[0] = v10[1].m128i_i64[0];
  }
  n = v10->m128i_u64[1];
  v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
  v10->m128i_i64[1] = 0;
  v10[1].m128i_i8[0] = 0;
  v11 = *(_BYTE **)a1;
  if ( src == v19 )
  {
    v13 = n;
    if ( n )
    {
      if ( n == 1 )
        *v11 = v19[0];
      else
        memcpy(v11, src, n);
      v13 = n;
      v11 = *(_BYTE **)a1;
    }
    *(_QWORD *)(a1 + 8) = v13;
    v11[v13] = 0;
    v11 = src;
    goto LABEL_14;
  }
  if ( v3 == v11 )
  {
    v14 = *(_QWORD *)&v19[0];
    *(_QWORD *)a1 = src;
    *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v14);
    goto LABEL_20;
  }
  v14 = *(_QWORD *)&v19[0];
  v12 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = src;
  *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v14);
  if ( !v11 )
  {
LABEL_20:
    v11 = v19;
    src = v19;
    goto LABEL_14;
  }
  src = v11;
  *(_QWORD *)&v19[0] = v12;
LABEL_14:
  n = 0;
  *v11 = 0;
  if ( src != v19 )
    operator delete(src);
  if ( v15[0] != v16 )
    operator delete(v15[0]);
  ++*a3;
  return a1;
}

