__int64 __fastcall sub_A4240(unsigned int a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  __m128i *v8; // rsi
  size_t v9; // rbp
  __int32 v10; // r15d
  void *v11; // r12
  __int64 v13; // rax

  if ( a1 >= 16 * ((qword_250ED8 == 0) + (unsigned int)((qword_250ED8 - qword_250EB8) >> 3) - 1)
           + (unsigned int)((qword_250EB0 - qword_250EA0) >> 5)
           + (unsigned int)((qword_250EC0 - qword_250EC8) >> 5) )
    return 0;
  v3 = sub_A0850((__int64)xmmword_250E60, a1);
  if ( *(_DWORD *)(v3 + 8) != 1 )
    return 0;
  v4 = *(_QWORD *)(v3 + 24);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(v4 + 72);
  if ( 32LL * *(_QWORD *)(v4 + 80) )
  {
    do
    {
      v9 = *(_QWORD *)(v5 + 16);
      v10 = *(_DWORD *)v5;
      v11 = nullptr;
      if ( v9 )
      {
        v11 = (void *)qalloc_or_throw();
        memcpy(v11, *(const void **)(v5 + 8), v9);
      }
      v6 = a2[1];
      v7 = *a2;
      if ( a2[2] < (unsigned __int64)(v6 + 1) )
      {
        v13 = qvector_reserve();
        *a2 = v13;
        v7 = v13;
        v6 = a2[1];
      }
      v5 += 32;
      v8 = (__m128i *)(32 * v6 + v7);
      v8->m128i_i32[0] = v10;
      v8->m128i_i64[1] = (__int64)v11;
      v8[1] = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
      ++a2[1];
    }
    while ( v5 != *(_QWORD *)(v4 + 72) + 32LL * *(_QWORD *)(v4 + 80) );
  }
  return 1;
}

