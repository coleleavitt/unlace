__m128i *__fastcall sub_1AF5EA0(__m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  const __m128i *v4; // rax
  __m128i v5; // xmm0
  __int32 v6; // ecx
  __int32 v7; // ecx
  __int64 v8; // rax

  v2 = 7LL * *(unsigned int *)(a2 + 24);
  v3 = *(_QWORD *)(a2 + 16);
  a1->m128i_i64[0] = 0;
  a1->m128i_i64[1] = 0;
  v4 = (const __m128i *)(v3 + 8 * v2 - 56);
  a1[1].m128i_i32[0] = 0;
  v5 = _mm_loadu_si128(v4 + 2);
  a1->m128i_i64[0] = v4->m128i_i64[0];
  LODWORD(v3) = v4->m128i_i32[2];
  v4->m128i_i64[0] = 0;
  a1->m128i_i32[2] = v3;
  v6 = v4->m128i_i32[3];
  v4->m128i_i32[2] = 0;
  LODWORD(v3) = a1->m128i_i32[3];
  a1->m128i_i32[3] = v6;
  v7 = v4[1].m128i_i32[0];
  v4->m128i_i32[3] = v3;
  LODWORD(v3) = a1[1].m128i_i32[0];
  a1[1].m128i_i32[0] = v7;
  v4[1].m128i_i32[0] = v3;
  a1[1].m128i_i32[2] = v4[1].m128i_i32[2];
  LODWORD(v3) = v4[1].m128i_i32[3];
  LODWORD(v4) = v4[3].m128i_i32[0];
  a1[2] = v5;
  a1[1].m128i_i32[3] = v3;
  a1[3].m128i_i32[0] = (int)v4;
  v8 = (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  *(_DWORD *)(a2 + 24) = v8;
  operator delete(
    *(_QWORD *)(*(_QWORD *)(a2 + 16) + 56 * v8),
    16LL * *(unsigned int *)(*(_QWORD *)(a2 + 16) + 56 * v8 + 16),
    8);
  return a1;
}
