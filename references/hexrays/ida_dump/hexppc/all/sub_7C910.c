unsigned __int64 __fastcall sub_7C910(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  const __m128i *v5; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __m128i v9; // xmm0
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v12[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(unsigned int *)(a1 + 8);
  v12[0] = __readfsqword(0x28u);
  v4 = pack_dd(&v11, v12, v2);
  sub_7BD20(a2, (__int64)&v11, v4 - (_QWORD)&v11);
  v5 = *(const __m128i **)a1;
  v6 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8);
  if ( v6 != *(_QWORD *)a1 )
  {
    v7 = 0;
    do
    {
      v8 = v5->m128i_i64[0];
      ++v5;
      sub_7BF00(a2, v8 - v7);
      sub_7BF00(a2, v5[-1].m128i_i64[1]);
      v9 = _mm_loadu_si128(v5 - 1);
      v7 = _mm_add_epi64(v9, _mm_srli_si128(v9, 8)).m128i_u64[0];
    }
    while ( (const __m128i *)v6 != v5 );
  }
  return v12[0] - __readfsqword(0x28u);
}
