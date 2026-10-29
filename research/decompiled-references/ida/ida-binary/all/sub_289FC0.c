void __fastcall fchunk_parent_chooser_t__::vfunc_15(__int64 a1, _QWORD *a2)
{
  void *v2; // r13
  unsigned __int64 v3; // rdx
  _QWORD *v4; // rbx
  __m128i si128; // xmm0
  __int64 v6; // rdi
  size_t v7; // r12
  void *v8; // rax
  __m128i v9[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = nullptr;
  v3 = a2[1];
  v4 = *(_QWORD **)(a1 + 192);
  si128 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v3 )
  {
    v7 = 8 * v3;
    v9[0] = si128;
    v8 = (void *)qalloc_or_throw(8 * v3);
    a2 = (_QWORD *)*a2;
    v2 = v8;
    memcpy(v8, a2, v7);
    si128 = _mm_load_si128(v9);
  }
  v6 = *v4;
  if ( *v4 )
  {
    v4[1] = 0;
    v9[0] = si128;
    qfree(v6, (const char *)a2);
    si128 = _mm_load_si128(v9);
  }
  *v4 = v2;
  *(__m128i *)(v4 + 1) = si128;
}
