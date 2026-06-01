__int64 __fastcall sub_BD720(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 i; // rbp
  _QWORD *v8; // rbx
  __int64 result; // rax
  __m128i v10; // xmm2
  __int64 v11; // r15
  __int64 v12; // r13
  __int128 v13; // xmm0
  __int64 v14; // rbx
  __int64 *v15; // rbp
  __int64 v16; // rax
  void *v17; // rax
  size_t v18; // rcx
  void *v19; // rax
  size_t v20; // rdx
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v21.m128i_i64[0] = a2;
  v22 = 0;
  if ( v3 )
  {
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v22 = qalloc_or_throw();
    v14 = v22;
    do
    {
      v15 = (__int64 *)(v11 + *(_QWORD *)v21.m128i_i64[0]);
      v16 = *v15;
      *(_QWORD *)(v14 + 8) = 0;
      *(_OWORD *)(v14 + 16) = v13;
      *(_QWORD *)v14 = v16;
      if ( v15[2] )
      {
        n = v15[2];
        v19 = (void *)qalloc_or_throw();
        v20 = n;
        *(_QWORD *)(v14 + 8) = v19;
        *(_QWORD *)(v14 + 24) = v20;
        memcpy(v19, (const void *)v15[1], v20);
        v13 = 0;
        *(_QWORD *)(v14 + 16) = n;
      }
      *(_QWORD *)(v14 + 32) = 0;
      *(_OWORD *)(v14 + 40) = v13;
      if ( v15[5] )
      {
        n = v15[5];
        v17 = (void *)qalloc_or_throw();
        v18 = n;
        *(_QWORD *)(v14 + 32) = v17;
        *(_QWORD *)(v14 + 48) = v18;
        memcpy(v17, (const void *)v15[4], v18);
        v13 = 0;
        *(_QWORD *)(v14 + 40) = n;
      }
      ++v12;
      v11 += 56;
      v14 += 56;
    }
    while ( v3 != v12 );
  }
  v4 = *a1;
  v21 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v4 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = (_QWORD *)(v4 + v6);
        if ( *(_QWORD *)(v4 + v6 + 32) )
        {
          v8[5] = 0;
          qfree();
        }
        if ( v8[1] )
        {
          v8[2] = 0;
          qfree();
        }
        v4 = *a1;
        v6 += 56;
      }
    }
    a1[1] = 0;
    qfree();
  }
  result = v22;
  v10 = _mm_load_si128(&v21);
  *a1 = v22;
  *(__m128i *)(a1 + 1) = v10;
  return result;
}

