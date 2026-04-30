__int64 __fastcall interactive_graph_t__::vfunc_31(__int64 a1, const void *a2, __int64 a3)
{
  __int64 (*v4)(void); // rax
  __int64 v5; // rbx
  __int64 result; // rax
  void *v7; // r13
  unsigned __int64 v8; // rax
  __m128i si128; // xmm0
  __int64 v10; // rdi
  size_t v11; // rbp
  void *v12; // rax
  __m128i v13[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 160LL);
  if ( (char *)v4 == (char *)interactive_graph_t__::vfunc_20 )
    v5 = interactive_graph_t__::vfunc_20(a1, (__int64)a2);
  else
    v5 = v4();
  result = 0;
  if ( v5 )
  {
    v7 = nullptr;
    *(_DWORD *)v5 = *(_DWORD *)a3;
    *(_DWORD *)(v5 + 4) = *(_DWORD *)(a3 + 4);
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(a3 + 8);
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(a3 + 12);
    v8 = *(_QWORD *)(a3 + 24);
    si128 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
    if ( v8 )
    {
      v11 = 8 * v8;
      v13[0] = si128;
      v12 = (void *)qalloc_or_throw(8 * v8);
      a2 = *(const void **)(a3 + 16);
      v7 = v12;
      memcpy(v12, a2, v11);
      si128 = _mm_load_si128(v13);
    }
    v10 = *(_QWORD *)(v5 + 16);
    if ( v10 )
    {
      *(_QWORD *)(v5 + 24) = 0;
      v13[0] = si128;
      qfree(v10, (const char *)a2);
      si128 = _mm_load_si128(v13);
    }
    *(_QWORD *)(v5 + 16) = v7;
    *(__m128i *)(v5 + 24) = si128;
    return 1;
  }
  return result;
}
