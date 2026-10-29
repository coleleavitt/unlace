__int64 __fastcall get_custom_data_formats(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  void *v10; // r13
  __m128i si128; // xmm0
  void *v12; // rdi
  size_t v14; // r12
  __m128i v15[3]; // [rsp+0h] [rbp-38h] BYREF

  v6 = *(_QWORD **)(qword_2CA1698 + 1360);
  if ( (unsigned __int64)a2 < v6[1] )
  {
    v8 = *v6 + 40LL * a2;
    if ( !a1 )
      return *(unsigned int *)(v8 + 24);
    v9 = *(_QWORD *)(v8 + 24);
    v10 = nullptr;
    si128 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
    if ( v9 )
    {
      v14 = 4 * v9;
      v15[0] = si128;
      v10 = (void *)qalloc_or_throw(4 * v9, a2, v9, a4, a5, a6);
      memcpy(v10, *(const void **)(v8 + 16), v14);
      v12 = *(void **)a1;
      si128 = _mm_load_si128(v15);
      if ( !*(_QWORD *)a1 )
        goto LABEL_6;
    }
    else
    {
      v12 = *(void **)a1;
      if ( !*(_QWORD *)a1 )
      {
LABEL_6:
        *(_QWORD *)a1 = v10;
        *(__m128i *)(a1 + 8) = si128;
        return *(unsigned int *)(v8 + 24);
      }
    }
    *(_QWORD *)(a1 + 8) = 0;
    v15[0] = si128;
    qfree(v12);
    si128 = _mm_load_si128(v15);
    goto LABEL_6;
  }
  return 0xFFFFFFFFLL;
}

