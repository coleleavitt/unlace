unsigned __int64 __fastcall sub_4DF7B0(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  const char *v3; // rsi
  size_t v4; // rbp
  void *v5; // r12
  __int64 v6; // rdi
  __m128i v7; // xmm0
  void *v8; // rdi
  void *v10; // rax
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  void *src; // [rsp+10h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( !*((_BYTE *)a1 + 1120) )
  {
    v1 = a1[139];
    if ( v1 )
    {
      v2 = *a1;
      v3 = nullptr;
      src = nullptr;
      *(_OWORD *)n = 0;
      (*(void (__fastcall **)(__int64 *, _QWORD, void **))(v2 + 248))(a1, 0, &src);
      v4 = n[0];
      v5 = nullptr;
      if ( n[0] )
      {
        v10 = (void *)qalloc_or_throw(n[0]);
        v3 = (const char *)src;
        v5 = v10;
        memcpy(v10, src, v4);
      }
      v6 = *(_QWORD *)(v1 + 112);
      v7 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
      if ( v6 )
      {
        *(_QWORD *)(v1 + 120) = 0;
        v11 = v7;
        qfree(v6, v3);
        v7 = _mm_load_si128(&v11);
      }
      v8 = src;
      *(_QWORD *)(v1 + 112) = v5;
      *(__m128i *)(v1 + 120) = v7;
      if ( v8 )
      {
        n[0] = 0;
        qfree(v8, v3);
      }
    }
  }
  return v14 - __readfsqword(0x28u);
}
