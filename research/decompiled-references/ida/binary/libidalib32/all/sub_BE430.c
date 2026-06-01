__int64 __fastcall sub_BE430(__int64 a1)
{
  int v2; // ebx
  __int64 result; // rax
  _BYTE *v4; // rdi
  const char *v5; // rsi
  size_t v6; // rbx
  void *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rsi
  int v11; // ebp

  if ( byte_2515A9 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = nullptr;
    if ( v6 )
    {
      v7 = (void *)qalloc_or_throw();
      memcpy(v7, *(const void **)a1, v6);
    }
    v8 = xmmword_251188;
    v9 = *(_QWORD *)(a1 + 24);
    v10 = qword_251180;
    v11 = *(_DWORD *)(a1 + 32);
    if ( *((_QWORD *)&xmmword_251188 + 1) < (unsigned __int64)(xmmword_251188 + 1) )
    {
      qword_251180 = qvector_reserve();
      v8 = xmmword_251188;
      v10 = qword_251180;
    }
    result = v10 + 40 * v8;
    *(_QWORD *)result = v7;
    *(__m128i *)(result + 8) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
    *(_QWORD *)(result + 24) = v9;
    *(_DWORD *)(result + 32) = v11;
    *(_QWORD *)&xmmword_251188 = xmmword_251188 + 1;
  }
  else
  {
    v2 = 0;
    for ( result = 0; v2 < (unsigned __int64)xmmword_251438; result = v2 )
    {
      v4 = *((_BYTE **)qword_251430 + result);
      if ( (v4[16] & 4) != 0 )
      {
        v5 = s1;
        if ( *(_QWORD *)(a1 + 8) )
          v5 = *(const char **)a1;
        (*(void (__fastcall **)(_BYTE *, const char *, _QWORD, _QWORD))(*(_QWORD *)v4 + 16LL))(
          v4,
          v5,
          *(unsigned int *)(a1 + 24),
          *(unsigned int *)(a1 + 28));
      }
      ++v2;
    }
  }
  return result;
}

