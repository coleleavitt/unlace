__int64 __fastcall sub_BEAD0(__int64 a1)
{
  int v2; // ebx
  __int64 result; // rax
  _BYTE *v4; // rdi
  const char *v5; // rsi
  size_t v6; // rbx
  void *v7; // r12
  __int64 v8; // rax
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rsi
  __m128i v14[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( byte_252751 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = nullptr;
    if ( v6 )
    {
      v7 = (void *)qalloc_or_throw();
      memcpy(v7, *(const void **)a1, v6);
    }
    v8 = xmmword_252268;
    v9 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
    v10 = _mm_loadl_epi64((const __m128i *)(a1 + 32));
    v11 = qword_252260;
    v12 = *(_QWORD *)(a1 + 40);
    if ( *((_QWORD *)&xmmword_252268 + 1) < (unsigned __int64)(xmmword_252268 + 1) )
    {
      v14[0].m128i_i64[1] = v10.m128i_i64[0];
      v14[0].m128i_i64[0] = v9.m128i_i64[0];
      qword_252260 = qvector_reserve();
      v11 = qword_252260;
      v10 = _mm_loadl_epi64((const __m128i *)&v14[0].m128i_u64[1]);
      v8 = xmmword_252268;
      v9 = _mm_loadl_epi64(v14);
    }
    result = 48 * v8;
    v13 = result + v11;
    *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
    *(_QWORD *)v13 = v7;
    *(_QWORD *)(v13 + 40) = v12;
    *(__m128i *)(v13 + 24) = _mm_unpacklo_epi64(v9, v10);
    *(_QWORD *)&xmmword_252268 = xmmword_252268 + 1;
  }
  else
  {
    v2 = 0;
    for ( result = 0; v2 < (unsigned __int64)xmmword_2525B8; result = v2 )
    {
      v4 = *((_BYTE **)qword_2525B0 + result);
      if ( (v4[16] & 4) != 0 )
      {
        v5 = s1;
        if ( *(_QWORD *)(a1 + 8) )
          v5 = *(const char **)a1;
        (*(void (__fastcall **)(_BYTE *, const char *, _QWORD, _QWORD))(*(_QWORD *)v4 + 16LL))(
          v4,
          v5,
          *(_QWORD *)(a1 + 24),
          *(_QWORD *)(a1 + 32));
      }
      ++v2;
    }
  }
  return result;
}

