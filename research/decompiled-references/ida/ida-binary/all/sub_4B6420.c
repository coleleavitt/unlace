void __fastcall sub_4B6420(__int64 *a1, __int64 *a2, __m128 a3, __int64 a4, __int64 a5)
{
  void *v5; // r13
  __int64 *v6; // rbp
  unsigned __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 *v11; // rax
  __int64 v12; // r15
  size_t v13; // rbp
  __int64 v14; // rax
  struct _Unwind_Exception *v15; // rbx

  v6 = a2;
  v7 = a2[1];
  if ( a1[2] < v7 )
  {
    a2 = (__int64 *)*a1;
    *a1 = qvector_reserve(a1, *a1, v7, 24);
    v7 = v6[1];
  }
  v8 = *v6;
  v9 = 16 * v7;
  v10 = *v6 + v9;
  if ( *v6 != v10 )
  {
    do
    {
      if ( *(_DWORD *)v8 != 2 )
      {
        if ( !under_debugger )
        {
          v15 = (struct _Unwind_Exception *)interr(1623, a2, v9, a5, *(double *)a3.m128_u64);
          if ( v5 )
            qfree(v5, (const char *)a2);
          _Unwind_Resume(v15);
        }
        BUG();
      }
      v12 = *(_QWORD *)(v8 + 8);
      v5 = nullptr;
      v13 = *(_QWORD *)(v12 + 8);
      if ( v13 )
      {
        v5 = (void *)qalloc_or_throw(*(_QWORD *)(v12 + 8));
        memcpy(v5, *(const void **)v12, v13);
      }
      v9 = a1[1];
      a2 = (__int64 *)*a1;
      if ( a1[2] < (unsigned __int64)(v9 + 1) )
      {
        v14 = qvector_reserve(a1, a2, v9 + 1, 24);
        *a1 = v14;
        v9 = a1[1];
        a2 = (__int64 *)v14;
      }
      v8 += 16;
      v11 = &a2[3 * v9];
      a3 = (__m128)_mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
      *v11 = (__int64)v5;
      *(__m128 *)(v11 + 1) = a3;
      ++a1[1];
    }
    while ( v10 != v8 );
  }
}
