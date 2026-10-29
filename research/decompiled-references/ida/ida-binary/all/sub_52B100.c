void *__fastcall sub_52B100(__int64 *a1, const char *a2, unsigned __int64 a3, __int64 a4, double a5)
{
  const char *v5; // r15
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 i; // rdx
  __int64 v15; // rax
  __int64 v16; // r13
  _QWORD *v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rdx
  void *result; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // r14
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // r15
  __int128 j; // xmm1
  __m128i v28; // xmm0
  size_t v29; // r13
  void *v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-40h]

  v5 = a2;
  if ( a3 && a3 >= a1[4] )
  {
    if ( !under_debugger )
      interr(40663, a2, a3, a4, a5);
    BUG();
  }
  v8 = *((_QWORD *)a2 + 1);
  v9 = 0;
  if ( v8 )
  {
    do
    {
      while ( 1 )
      {
        a2 = &s1;
        v10 = *(_QWORD *)v5 + 24 * v9;
        if ( *(_QWORD *)(v10 + 8) )
          a2 = *(const char **)v10;
        v11 = sub_52AE50(a1, (__int64)a2);
        if ( v11 != v9 )
        {
          v12 = *((_QWORD *)v5 + 4);
          if ( v12 )
            break;
        }
        if ( v8 == ++v9 )
          goto LABEL_15;
      }
      v13 = 0;
      for ( i = 0; i != v12; ++i )
      {
        a2 = (const char *)(v13 + *((_QWORD *)v5 + 3));
        if ( *((_QWORD *)a2 + 3) == v9 )
          *((_QWORD *)a2 + 3) = v11;
        v13 += 40;
      }
      ++v9;
    }
    while ( v8 != v9 );
  }
LABEL_15:
  v15 = a1[3];
  v16 = 40 * a3;
  v17 = (_QWORD *)(v15 + v16);
  v18 = *(_QWORD *)(v15 + v16);
  if ( v18 )
  {
    v17[1] = 0;
    qfree(v18, a2);
    v15 = a1[3];
  }
  memmove(v17, v17 + 5, v15 + 40 * a1[4] - (_QWORD)v17 - 40);
  v19 = a1[4] - 1;
  a1[4] = v19;
  result = (void *)0xCCCCCCCCCCCCCCCDLL;
  v21 = 40LL * *((_QWORD *)v5 + 4);
  v22 = 0xCCCCCCCCCCCCCCCDLL * (v21 >> 3);
  if ( v22 )
  {
    v23 = *((_QWORD *)v5 + 3);
    v24 = a1[3];
    if ( a1[5] < v22 + v19 )
    {
      v32 = 40LL * *((_QWORD *)v5 + 4);
      v31 = qvector_reserve(a1 + 3, v24, v22 + v19, 40);
      v19 = a1[4];
      v21 = v32;
      a1[3] = v31;
      v24 = v31;
    }
    v25 = v24 + v16;
    v26 = v23 + v21;
    result = memmove((void *)(v24 + v16 + v21), (const void *)(v24 + v16), 40 * v19 - v16);
    for ( j = 0; v26 != v23; *(__m128i *)(v25 - 16) = v28 )
    {
      *(_QWORD *)v25 = 0;
      *(_OWORD *)(v25 + 8) = j;
      v29 = *(_QWORD *)(v23 + 8);
      if ( v29 )
      {
        v30 = (void *)qalloc_or_throw(*(_QWORD *)(v23 + 8));
        *(_QWORD *)(v25 + 16) = v29;
        *(_QWORD *)v25 = v30;
        result = memcpy(v30, *(const void **)v23, v29);
        *(_QWORD *)(v25 + 8) = v29;
        j = 0;
      }
      v28 = _mm_loadu_si128((const __m128i *)(v23 + 24));
      v23 += 40;
      v25 += 40;
    }
    a1[4] += v22;
  }
  return result;
}
