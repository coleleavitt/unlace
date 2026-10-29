void __fastcall sub_72B040(__int64 a1, void *a2, size_t a3, __int64 a4)
{
  void *v6; // rax
  unsigned __int64 v7; // rdx
  void *v8; // r13
  __m128i si128; // xmm0
  void *v10; // rdi
  size_t v11; // r12
  __m128i v12[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( a2 )
  {
    v6 = memset(a2, 0, a3);
    qstrncpy(v6, a1 + 464, a3);
  }
  if ( a4 )
  {
    v7 = *(_QWORD *)(a1 + 600);
    v8 = nullptr;
    si128 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
    if ( v7 )
    {
      v11 = 8 * v7;
      v12[0] = si128;
      v8 = (void *)qalloc_or_throw(8 * v7);
      memcpy(v8, *(const void **)(a1 + 592), v11);
      v10 = *(void **)a4;
      si128 = _mm_load_si128(v12);
      if ( !*(_QWORD *)a4 )
        goto LABEL_7;
    }
    else
    {
      v10 = *(void **)a4;
      if ( !*(_QWORD *)a4 )
      {
LABEL_7:
        *(_QWORD *)a4 = v8;
        *(__m128i *)(a4 + 8) = si128;
        return;
      }
    }
    *(_QWORD *)(a4 + 8) = 0;
    v12[0] = si128;
    qfree(v10);
    si128 = _mm_load_si128(v12);
    goto LABEL_7;
  }
}
