void __fastcall sub_B8C30(__int64 a1, __int64 a2)
{
  int v2; // eax
  size_t v3; // r12
  void *v4; // r13
  __m128i si128; // xmm0
  size_t v6; // r12
  void *v7; // rax
  __m128i v8[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( a1 == a2 )
    return;
  v2 = *(_DWORD *)a1;
  if ( *(int *)a2 < -1 )
  {
    if ( v2 >= -1 && *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(a1 + 16) = 0;
      qfree();
    }
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    goto LABEL_13;
  }
  if ( v2 < -1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_OWORD *)(a1 + 16) = 0;
    v6 = *(_QWORD *)(a2 + 16);
    if ( v6 )
    {
      v7 = (void *)qalloc_or_throw();
      *(_QWORD *)(a1 + 24) = v6;
      *(_QWORD *)(a1 + 8) = v7;
      memcpy(v7, *(const void **)(a2 + 8), v6);
      *(_QWORD *)(a1 + 16) = v6;
    }
LABEL_13:
    *(_DWORD *)a1 = *(_DWORD *)a2;
    return;
  }
  v3 = *(_QWORD *)(a2 + 16);
  v4 = nullptr;
  si128 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v3 )
  {
    v8[0] = si128;
    v4 = (void *)qalloc_or_throw();
    memcpy(v4, *(const void **)(a2 + 8), v3);
    si128 = _mm_load_si128(v8);
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    v8[0] = si128;
    qfree();
    si128 = _mm_load_si128(v8);
  }
  *(_QWORD *)(a1 + 8) = v4;
  *(__m128i *)(a1 + 16) = si128;
  *(_DWORD *)a1 = *(_DWORD *)a2;
}

