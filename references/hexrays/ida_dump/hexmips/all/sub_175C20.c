unsigned __int64 __fastcall sub_175C20(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __m128i *v6; // rbx
  __m128i v7; // xmm0
  unsigned __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v5 = *(_QWORD *)(a2 + 8);
  v10 = __readfsqword(0x28u);
  v6 = *(__m128i **)a2;
  if ( 16 * v5 )
  {
    do
    {
      sub_175B00(a1, (unsigned __int64 *)v6, a3, a4, a5);
      v7 = _mm_loadu_si128(v6);
      v9 = _mm_add_epi64(v7, _mm_srli_si128(v7, 8)).m128i_u64[0];
      if ( v9 != -1 )
        sub_175B00(a1, &v9, a3, a4, a5);
      ++v6;
    }
    while ( v6 != (__m128i *)(*(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8)) );
  }
  return v10 - __readfsqword(0x28u);
}
