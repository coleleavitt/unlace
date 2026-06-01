void __fastcall sub_1FFC380(__m128i *a1)
{
  __m128i *v1; // r12
  void **v2; // r14
  __int64 v3; // rax
  size_t v4; // r15
  __m128i *v5; // rbp
  int v6; // eax
  __m128i *v7; // rcx
  __m128i *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  size_t v11; // r13
  size_t v12; // rdx
  _QWORD *m128i_i64; // rbx
  signed __int64 v14; // rax
  __int64 v15; // rdx
  void **v16; // r14
  __int64 v17; // rax
  __m128i *v18; // [rsp+0h] [rbp-68h] BYREF
  void **v19; // [rsp+8h] [rbp-60h]
  void *v20; // [rsp+10h] [rbp-58h] BYREF
  size_t v21; // [rsp+18h] [rbp-50h]
  _OWORD v22[4]; // [rsp+20h] [rbp-48h] BYREF

  v1 = a1 + 1;
  v2 = (void **)a1->m128i_i64[0];
  v19 = &v20;
  v20 = v22;
  if ( v2 == (void **)&a1[1] )
  {
    v2 = (void **)v22;
    v22[0] = _mm_loadu_si128(a1 + 1);
  }
  else
  {
    v3 = a1[1].m128i_i64[0];
    v20 = v2;
    *(_QWORD *)&v22[0] = v3;
  }
  v4 = a1->m128i_u64[1];
  a1->m128i_i64[0] = (__int64)v1;
  v5 = a1 + 1;
  a1->m128i_i64[1] = 0;
  v21 = v4;
  a1[1].m128i_i8[0] = 0;
  while ( 1 )
  {
    v11 = v5[-3].m128i_u64[1];
    v12 = v4;
    m128i_i64 = v5[-1].m128i_i64;
    v7 = (__m128i *)v5[-3].m128i_i64[0];
    if ( v11 <= v4 )
      v12 = v5[-3].m128i_u64[1];
    if ( !v12 )
      break;
    v18 = (__m128i *)v5[-3].m128i_i64[0];
    v6 = memcmp(v2, v18, v12);
    v7 = v18;
    if ( !v6 )
      break;
    if ( v6 >= 0 )
      goto LABEL_17;
LABEL_6:
    v8 = v5 - 2;
    if ( v7 == &v5[-2] )
    {
      if ( v11 )
      {
        if ( v11 == 1 )
          v1->m128i_i8[0] = v8->m128i_i8[0];
        else
          memcpy(v1, &v5[-2], v11);
        v11 = v5[-3].m128i_u64[1];
        v1 = (__m128i *)v8[1].m128i_i64[0];
      }
      v8[1].m128i_i64[1] = v11;
      v1->m128i_i8[v11] = 0;
      v1 = (__m128i *)v5[-3].m128i_i64[0];
    }
    else
    {
      if ( v1 == v5 )
      {
        v17 = v5[-3].m128i_i64[1];
        v8[1].m128i_i64[0] = (__int64)v7;
        v8[1].m128i_i64[1] = v17;
        v5->m128i_i64[0] = v5[-2].m128i_i64[0];
      }
      else
      {
        v9 = v5[-3].m128i_i64[1];
        v10 = v5->m128i_i64[0];
        v8[1].m128i_i64[0] = (__int64)v7;
        v8[1].m128i_i64[1] = v9;
        v5->m128i_i64[0] = v5[-2].m128i_i64[0];
        if ( v1 )
        {
          v5[-3].m128i_i64[0] = (__int64)v1;
          v8->m128i_i64[0] = v10;
          goto LABEL_10;
        }
      }
      v5[-3].m128i_i64[0] = (__int64)v5[-2].m128i_i64;
      v1 = v5 - 2;
    }
LABEL_10:
    v5[-3].m128i_i64[1] = 0;
    v5 -= 2;
    v1->m128i_i8[0] = 0;
    v4 = v21;
    v2 = (void **)v20;
    v1 = (__m128i *)v8[-1].m128i_i64[0];
  }
  v14 = v4 - v11;
  if ( (__int64)(v4 - v11) <= 0x7FFFFFFF && (v14 < (__int64)0xFFFFFFFF80000000LL || (int)v14 < 0) )
    goto LABEL_6;
LABEL_17:
  if ( v2 == v19 + 2 )
  {
    if ( v4 )
    {
      if ( v4 == 1 )
        v1->m128i_i8[0] = v22[0];
      else
        memcpy(v1, v2, v4);
      v4 = v21;
      v1 = (__m128i *)*m128i_i64;
    }
    m128i_i64[1] = v4;
    v1->m128i_i8[v4] = 0;
    v1 = (__m128i *)v20;
  }
  else
  {
    if ( v1 == v5 )
    {
      v18 = *(__m128i **)&v22[0];
      *m128i_i64 = v2;
      *(__m128 *)(m128i_i64 + 1) = _mm_loadh_ps((const double *)&v18);
    }
    else
    {
      v18 = *(__m128i **)&v22[0];
      v15 = v5->m128i_i64[0];
      *m128i_i64 = v2;
      *(__m128 *)(m128i_i64 + 1) = _mm_loadh_ps((const double *)&v18);
      if ( v1 )
      {
        v20 = v1;
        *(_QWORD *)&v22[0] = v15;
        goto LABEL_21;
      }
    }
    v1 = (__m128i *)(v19 + 2);
    v20 = v19 + 2;
  }
LABEL_21:
  v21 = 0;
  v16 = v19;
  v1->m128i_i8[0] = 0;
  if ( v20 != v16 + 2 )
    operator delete(v20);
}
