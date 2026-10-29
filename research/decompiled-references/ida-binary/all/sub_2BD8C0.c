__int64 __fastcall sub_2BD8C0(_QWORD *a1, const void *a2)
{
  void *v2; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  __m128i si128; // xmm0
  __int64 v8; // rdi
  size_t v10; // r13
  void *v11; // rax
  __m128i v12[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = nullptr;
  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 144LL))(a1);
  v5 = a1[25];
  v6 = v4;
  si128 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  if ( v5 )
  {
    v12[0] = si128;
    v10 = 20 * v5;
    v11 = (void *)qalloc_or_throw(20 * v5);
    a2 = (const void *)a1[24];
    v2 = v11;
    memcpy(v11, a2, v10);
    si128 = _mm_load_si128(v12);
  }
  v8 = *(_QWORD *)(v6 + 24);
  if ( v8 )
  {
    *(_QWORD *)(v6 + 32) = 0;
    v12[0] = si128;
    qfree(v8, (const char *)a2);
    si128 = _mm_load_si128(v12);
  }
  *(_QWORD *)(v6 + 24) = v2;
  *(_BYTE *)(v6 + 48) = 1;
  *(__m128i *)(v6 + 32) = si128;
  return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 152LL))(a1, v6, 0);
}
