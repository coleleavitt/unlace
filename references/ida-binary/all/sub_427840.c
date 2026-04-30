__int64 __fastcall sub_427840(__int64 a1, const char *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // r13
  _QWORD *v6; // r12
  __int64 v7; // r15
  __int128 v8; // xmm1
  __int64 v9; // rbp
  __int64 *v10; // r14
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rbx
  void *v14; // rax
  __int64 v15; // rdi
  size_t n; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+10h] [rbp-48h]

  v2 = sub_426230(a1, a2);
  v3 = sub_417350((__int64)v2);
  v4 = *(_QWORD *)(v3 + 8);
  if ( !v4 )
    return 7;
  v6 = (_QWORD *)v3;
  v7 = 0;
  v8 = 0;
  v17 = qalloc_or_throw(80 * v4);
  v9 = v17;
  v10 = (__int64 *)v17;
  do
  {
    v13 = *v6 + 80 * v7;
    *(_QWORD *)v9 = 0;
    *(_OWORD *)(v9 + 8) = v8;
    if ( *(_QWORD *)(v13 + 8) )
    {
      n = *(_QWORD *)(v13 + 8);
      v14 = (void *)qalloc_or_throw(n);
      *(_QWORD *)v9 = v14;
      *(_QWORD *)(v9 + 16) = n;
      a2 = *(const char **)v13;
      memcpy(v14, *(const void **)v13, n);
      v8 = 0;
      *(_QWORD *)(v9 + 8) = n;
    }
    ++v7;
    v9 += 80;
    *(__m128i *)(v9 - 56) = _mm_loadu_si128((const __m128i *)(v13 + 24));
    v11 = _mm_loadu_si128((const __m128i *)(v13 + 56));
    *(_QWORD *)(v9 - 40) = *(_QWORD *)(v13 + 40);
    v12 = *(_QWORD *)(v13 + 48);
    *(__m128i *)(v9 - 24) = v11;
    *(_QWORD *)(v9 - 32) = v12;
    *(_BYTE *)(v9 - 8) = *(_BYTE *)(v13 + 72);
  }
  while ( v4 != v7 );
  if ( v17 )
  {
    do
    {
      v15 = *v10;
      if ( *v10 )
      {
        v10[1] = 0;
        *(double *)v11.m128i_i64 = qfree(v15, a2, *(double *)v11.m128i_i64, *(double *)&v8);
      }
      v10 += 10;
    }
    while ( (__int64 *)(v17 + 80 * v4) != v10 );
    qfree(v17, a2, *(double *)v11.m128i_i64, *(double *)&v8);
  }
  return 3;
}
