void __fastcall sub_177CD0(_QWORD *a1, unsigned int a2, __int64 *a3)
{
  unsigned __int64 v3; // r12
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 i; // rbp
  _QWORD *v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // r14
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  void *v16; // r12
  __int64 v17; // r15
  size_t v18; // rbp
  __int64 v19; // rax

  if ( a3 )
  {
    v3 = a2;
    v5 = *a3;
    if ( v5 )
    {
      v6 = a3[1];
      if ( v6 )
      {
        for ( i = 0; i != v6; ++i )
        {
          v8 = (_QWORD *)(v5 + 24 * i);
          if ( *v8 )
          {
            v8[1] = 0;
            qfree();
            v5 = *a3;
          }
        }
      }
      a3[1] = 0;
      qfree();
      *a3 = 0;
      a3[2] = 0;
    }
    v9 = a1[1];
    if ( a2 >= v9 )
      v3 = v9 - 1;
    v10 = *a1 + 48 * v3;
    if ( *(_QWORD *)(v10 + 32) )
    {
      v11 = 0;
      v12 = 0;
      do
      {
        v16 = nullptr;
        v17 = *(_QWORD *)(v10 + 24) + 24 * v12;
        v18 = *(_QWORD *)(v17 + 8);
        if ( v18 )
        {
          v16 = (void *)qalloc_or_throw();
          memcpy(v16, *(const void **)v17, v18);
        }
        v13 = a3[1];
        v14 = *a3;
        if ( a3[2] < (unsigned __int64)(v13 + 1) )
        {
          v19 = qvector_reserve();
          *a3 = v19;
          v13 = a3[1];
          v14 = v19;
        }
        ++v11;
        v15 = v14 + 24 * v13;
        *(_QWORD *)v15 = v16;
        *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
        v12 = v11;
        ++a3[1];
      }
      while ( (unsigned __int64)v11 < *(_QWORD *)(v10 + 32) );
    }
  }
}

