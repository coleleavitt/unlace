__int64 __fastcall get_custom_data_formats(__int64 a1, int a2)
{
  _QWORD *v2; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  void *v6; // r13
  __m128i si128; // xmm0
  void *v8; // rdi
  size_t v10; // r12
  __m128i v11[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD **)(qword_2CCB598 + 1552);
  if ( (unsigned __int64)a2 < v2[1] )
  {
    v4 = *v2 + 48LL * a2;
    if ( !a1 )
      return *(unsigned int *)(v4 + 32);
    v5 = *(_QWORD *)(v4 + 32);
    v6 = nullptr;
    si128 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    if ( v5 )
    {
      v10 = 4 * v5;
      v11[0] = si128;
      v6 = (void *)qalloc_or_throw(4 * v5);
      memcpy(v6, *(const void **)(v4 + 24), v10);
      v8 = *(void **)a1;
      si128 = _mm_load_si128(v11);
      if ( !*(_QWORD *)a1 )
        goto LABEL_6;
    }
    else
    {
      v8 = *(void **)a1;
      if ( !*(_QWORD *)a1 )
      {
LABEL_6:
        *(_QWORD *)a1 = v6;
        *(__m128i *)(a1 + 8) = si128;
        return *(unsigned int *)(v4 + 32);
      }
    }
    *(_QWORD *)(a1 + 8) = 0;
    v11[0] = si128;
    qfree(v8);
    si128 = _mm_load_si128(v11);
    goto LABEL_6;
  }
  return 0xFFFFFFFFLL;
}
