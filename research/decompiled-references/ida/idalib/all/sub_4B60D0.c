__int64 __fastcall sub_4B60D0(__m128i *a1, __int64 a2)
{
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r12
  __m128i si128; // xmm0
  void *v7; // rdi
  __int64 result; // rax
  __m128i v9[2]; // [rsp+0h] [rbp-28h] BYREF

  if ( (__m128i *)a2 != a1 )
  {
    v3 = (void *)a1[2].m128i_i64[1];
    if ( v3 )
    {
      qfree(v3);
      a1[2].m128i_i64[1] = 0;
    }
    *a1 = _mm_loadu_si128((const __m128i *)a2);
    a1[1] = _mm_loadu_si128((const __m128i *)(a2 + 16));
    a1[2].m128i_i32[0] = *(_DWORD *)(a2 + 32);
    v4 = *(_QWORD *)(a2 + 40);
    if ( v4 )
      a1[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)(a2 + 48);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 56));
  *(_QWORD *)(a2 + 48) = 0;
  *(_OWORD *)(a2 + 56) = 0;
  v7 = (void *)a1[3].m128i_i64[0];
  if ( v7 )
  {
    a1[3].m128i_i64[1] = 0;
    v9[0] = si128;
    qfree(v7);
    si128 = _mm_load_si128(v9);
  }
  a1[3].m128i_i64[0] = v5;
  *(__m128i *)((char *)a1 + 56) = si128;
  a1[4].m128i_i64[1] = *(_QWORD *)(a2 + 72);
  a1[5].m128i_i32[0] = *(_DWORD *)(a2 + 80);
  result = *(unsigned int *)(a2 + 88);
  a1[5].m128i_i32[2] = result;
  return result;
}
