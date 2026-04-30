unsigned __int64 __fastcall sub_2A9360(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  __int64 v5; // rax
  _QWORD *v7; // r12
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  void *v13; // r14
  __int64 v14; // rbx
  size_t v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v23; // [rsp+8h] [rbp-58h] BYREF
  __int128 v24; // [rsp+10h] [rbp-50h]
  unsigned __int64 v25; // [rsp+20h] [rbp-40h]

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 440) + 16LL);
  v25 = __readfsqword(0x28u);
  v7 = (_QWORD *)(v5 + 24LL * a4);
  v24 = 0;
  v23 = 0;
  if ( v7[1] )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v13 = nullptr;
      v14 = *v7 + 272 * v9;
      v15 = *(_QWORD *)(v14 + 16);
      if ( v15 )
      {
        v13 = (void *)qalloc_or_throw(*(_QWORD *)(v14 + 16));
        memcpy(v13, *(const void **)(v14 + 8), v15);
      }
      v10 = v24;
      v11 = v23;
      if ( *((_QWORD *)&v24 + 1) < (unsigned __int64)(v24 + 1) )
      {
        v23 = qvector_reserve(&v23, v23, v24 + 1, 24);
        v10 = v24;
        v11 = v23;
      }
      ++v8;
      v12 = v11 + 24 * v10;
      *(_QWORD *)v12 = v13;
      *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
      v9 = v8;
      *(_QWORD *)&v24 = v24 + 1;
    }
    while ( (unsigned __int64)v8 < v7[1] );
  }
  if ( a5 )
    a5 = (_QWORD *)*a5;
  sub_2D1580(a2, &v23, 0, a5);
  v16 = v23;
  if ( v23 )
  {
    v17 = v24;
    if ( (_QWORD)v24 )
    {
      v18 = 0;
      do
      {
        v19 = (__int64 *)(v16 + 24 * v18);
        v20 = *v19;
        if ( *v19 )
        {
          v19[1] = 0;
          qfree(v20, (const char *)&v23);
          v16 = v23;
        }
        ++v18;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v24 = 0;
    qfree(v16, (const char *)&v23);
  }
  return v25 - __readfsqword(0x28u);
}
