void __fastcall sub_105760(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  const __m128i *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __m128i v11; // xmm0

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 < a2 )
  {
    v4 = qvector_reserve();
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v2;
    v7 = *(const __m128i **)a1;
    v8 = v4;
    v9 = v5 - 1;
    if ( v9 >= 0 )
    {
      v10 = v4;
      do
      {
        v11 = _mm_loadu_si128(v7);
        v10 += 16;
        ++v7;
        *(__m128i *)(v10 - 16) = v11;
      }
      while ( v9-- != 0 );
    }
    qfree();
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 16) = v6;
  }
}
