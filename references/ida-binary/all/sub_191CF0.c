__int64 __fastcall sub_191CF0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __m128i v7; // xmm2
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 i; // r12
  __int64 *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 j; // r15
  QT::QRegularExpression *v16; // rdi
  __int64 result; // rax
  __m128i v18; // xmm3
  __int64 v19; // r13
  __int64 v20; // rbx
  size_t v21; // r12
  _QWORD *v22; // rbp
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  void *v27; // rax
  __m128i v28; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v29; // [rsp+10h] [rbp-48h]
  __int64 v30; // [rsp+18h] [rbp-40h]

  v6 = a2[1];
  v29 = a2;
  v28.m128i_i64[0] = v6;
  v30 = 0;
  if ( v6 )
  {
    v19 = 0;
    v30 = qalloc_or_throw(48 * v6);
    v20 = v30;
    do
    {
      v22 = (_QWORD *)(*v29 + 48 * v19);
      *(_QWORD *)v20 = 0;
      *(_OWORD *)(v20 + 8) = 0;
      v23 = v22[1];
      if ( v23 )
      {
        v24 = 0;
        v25 = qalloc_or_throw(8 * v23);
        *(_QWORD *)(v20 + 16) = v23;
        for ( *(_QWORD *)v20 = v25; ; v25 = *(_QWORD *)v20 )
        {
          v26 = 8 * v24++;
          a2 = (_QWORD *)(v26 + *v22);
          QT::QRegularExpression::QRegularExpression(
            (QT::QRegularExpression *)(v25 + v26),
            (const QT::QRegularExpression *)a2);
          if ( v23 == v24 )
            break;
        }
        *(_QWORD *)(v20 + 8) = v23;
      }
      *(_QWORD *)(v20 + 24) = 0;
      *(_OWORD *)(v20 + 32) = 0;
      v21 = v22[4];
      if ( v21 )
      {
        v27 = (void *)qalloc_or_throw(v22[4]);
        *(_QWORD *)(v20 + 24) = v27;
        *(_QWORD *)(v20 + 40) = v21;
        a2 = (_QWORD *)v22[3];
        memcpy(v27, a2, v21);
        *(_QWORD *)(v20 + 32) = v21;
      }
      ++v19;
      v20 += 48;
    }
    while ( v28.m128i_i64[0] != v19 );
  }
  v7 = _mm_loadl_epi64(&v28);
  v8 = *a1;
  v28 = _mm_unpacklo_epi64(v7, v7);
  if ( v8 )
  {
    v9 = a1[1];
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = (__int64 *)(v8 + 48 * i);
        v12 = v11[3];
        if ( v12 )
        {
          v11[4] = 0;
          qfree(v12, a2, a3, a4, a5);
        }
        v13 = *v11;
        if ( *v11 )
        {
          v14 = v11[1];
          if ( v14 )
          {
            for ( j = 0; j != v14; ++j )
            {
              v16 = (QT::QRegularExpression *)(v13 + 8 * j);
              QT::QRegularExpression::~QRegularExpression(v16);
              v13 = *v11;
            }
          }
          v11[1] = 0;
          qfree(v13, a2, a3, a4, a5);
        }
        v8 = *a1;
      }
    }
    a1[1] = 0;
    qfree(v8, a2, a3, a4, a5);
  }
  result = v30;
  v18 = _mm_load_si128(&v28);
  *a1 = v30;
  *(__m128i *)(a1 + 1) = v18;
  return result;
}
