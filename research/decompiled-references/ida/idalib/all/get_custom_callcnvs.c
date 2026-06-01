__int64 __fastcall get_custom_callcnvs(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r13d
  __int64 v12; // rsi
  size_t v13; // r15
  void *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-40h]

  v17 = qword_2CCB598;
  v2 = *(_QWORD *)(qword_2CCB598 + 1560);
  v3 = *(_QWORD *)(v2 + 48);
  result = *(_QWORD *)(v2 + 56);
  v5 = v3 + 32 * result;
  if ( v5 != v3 )
  {
    do
    {
      v13 = *(_QWORD *)(v3 + 8);
      v14 = nullptr;
      if ( v13 )
      {
        v14 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 8));
        memcpy(v14, *(const void **)v3, v13);
      }
      v7 = a1[1];
      v8 = *a1;
      if ( a1[2] < (unsigned __int64)(v7 + 1) )
      {
        v16 = qvector_reserve(a1, v8, v7 + 1, 24);
        *a1 = v16;
        v7 = a1[1];
        v8 = v16;
      }
      v9 = v8 + 24 * v7;
      *(_QWORD *)v9 = v14;
      *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
      ++a1[1];
      v10 = a2[1];
      v11 = *(_DWORD *)(v3 + 24);
      v12 = *a2;
      if ( a2[2] < (unsigned __int64)(v10 + 1) )
      {
        v15 = qvector_reserve(a2, v12, v10 + 1, 4);
        *a2 = v15;
        v12 = v15;
        v10 = a2[1];
      }
      v3 += 32;
      *(_DWORD *)(v12 + 4 * v10) = v11;
      ++a2[1];
    }
    while ( v5 != v3 );
    return *(_QWORD *)(*(_QWORD *)(v17 + 1560) + 56LL);
  }
  return result;
}
