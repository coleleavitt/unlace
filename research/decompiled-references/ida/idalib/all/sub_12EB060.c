void __fastcall sub_12EB060(__m128i *a1)
{
  __m128i *v2; // rbp
  __m128i *v3; // rdi
  __int64 v4; // rdx
  size_t v5; // r12
  int v6; // eax
  __m128i *v7; // rbx
  __m128i *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  size_t v11; // r13
  size_t v12; // rdx
  __m128i *v13; // r15
  __int64 v14; // r12
  __int64 v15; // rax
  void *s1; // [rsp+0h] [rbp-58h] BYREF
  size_t v17; // [rsp+8h] [rbp-50h]
  _OWORD v18[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = a1 + 1;
  v3 = (__m128i *)a1->m128i_i64[0];
  s1 = v18;
  if ( v3 == v2 )
  {
    v3 = (__m128i *)v18;
    v18[0] = _mm_loadu_si128(a1 + 1);
  }
  else
  {
    v4 = a1[1].m128i_i64[0];
    s1 = v3;
    *(_QWORD *)&v18[0] = v4;
  }
  v5 = a1->m128i_u64[1];
  a1->m128i_i64[0] = (__int64)v2;
  a1->m128i_i64[1] = 0;
  v17 = v5;
  a1[1].m128i_i8[0] = 0;
  while ( 1 )
  {
    v11 = v2[-3].m128i_u64[1];
    v12 = v5;
    v13 = (__m128i *)v2[-3].m128i_i64[0];
    if ( v11 <= v5 )
      v12 = v2[-3].m128i_u64[1];
    if ( !v12 )
      break;
    v6 = memcmp(v3, (const void *)v2[-3].m128i_i64[0], v12);
    if ( !v6 )
      break;
    if ( v6 >= 0 )
      goto LABEL_17;
LABEL_6:
    v7 = v2 - 2;
    v8 = (__m128i *)v2[-1].m128i_i64[0];
    if ( v13 == &v2[-2] )
    {
      if ( v11 )
      {
        if ( v11 == 1 )
          v8->m128i_i8[0] = v7->m128i_i8[0];
        else
          memcpy(v8, &v2[-2], v11);
        v11 = v2[-3].m128i_u64[1];
        v8 = (__m128i *)v7[1].m128i_i64[0];
      }
      v7[1].m128i_i64[1] = v11;
      v8->m128i_i8[v11] = 0;
      v8 = (__m128i *)v2[-3].m128i_i64[0];
    }
    else
    {
      if ( v2 == v8 )
      {
        v15 = v2[-3].m128i_i64[1];
        v7[1].m128i_i64[0] = (__int64)v13;
        v7[1].m128i_i64[1] = v15;
        v2->m128i_i64[0] = v2[-2].m128i_i64[0];
      }
      else
      {
        v9 = v2[-3].m128i_i64[1];
        v10 = v2->m128i_i64[0];
        v7[1].m128i_i64[0] = (__int64)v13;
        v7[1].m128i_i64[1] = v9;
        v2->m128i_i64[0] = v2[-2].m128i_i64[0];
        if ( v8 )
        {
          v2[-3].m128i_i64[0] = (__int64)v8;
          v7->m128i_i64[0] = v10;
          goto LABEL_10;
        }
      }
      v2[-3].m128i_i64[0] = (__int64)v2[-2].m128i_i64;
      v8 = v2 - 2;
    }
LABEL_10:
    v2[-3].m128i_i64[1] = 0;
    v2 -= 2;
    v8->m128i_i8[0] = 0;
    v5 = v17;
    v3 = (__m128i *)s1;
  }
  v14 = v5 - v11;
  if ( v14 <= 0x7FFFFFFF && (v14 < (__int64)0xFFFFFFFF80000000LL || (int)v14 < 0) )
    goto LABEL_6;
LABEL_17:
  sub_A0AAD0((__int64)v2[-1].m128i_i64, &s1);
  if ( s1 != v18 )
    operator delete(s1);
}
