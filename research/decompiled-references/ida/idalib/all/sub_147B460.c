__m128i *__fastcall sub_147B460(__int64 a1)
{
  __m128i *v2; // rax
  __m128i *v3; // rax
  __m128i *v4; // rbp
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  char *v8; // rdi
  char *v9; // rax
  __m128i *result; // rax

  sub_1417BC0(*(_QWORD *)(*(_QWORD *)a1 + 8LL));
  v2 = *(__m128i **)a1;
  v2[3] = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v2[4] = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v2[5].m128i_i64[0] = *(_QWORD *)(a1 + 40);
  v3 = *(__m128i **)a1;
  v3[1] = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v3[2].m128i_i32[0] = *(_DWORD *)(a1 + 64);
  v4 = *(__m128i **)a1;
  v5 = *(_QWORD *)(a1 + 72);
  v6 = *(unsigned int *)(*(_QWORD *)a1 + 2712LL);
  if ( v5 != v6 )
  {
    if ( v5 >= v6 )
    {
      if ( v5 > v4[169].m128i_u32[3] )
      {
        sub_2237220(&v4[169], &v4[170], *(_QWORD *)(a1 + 72), 8);
        v6 = v4[169].m128i_u32[2];
      }
      v7 = v4[169].m128i_i64[0];
      v8 = (char *)(v7 + 8 * v6);
      v9 = (char *)(v7 + 8 * v5);
      if ( v8 != v9 )
        memset(v8, 0, 8 * ((unsigned __int64)(v9 - 8 - v8) >> 3) + 8);
    }
    v4[169].m128i_i32[2] = v5;
    v4 = *(__m128i **)a1;
  }
  v4[5].m128i_i16[4] = *(_WORD *)(a1 + 80);
  *(_WORD *)(*(_QWORD *)a1 + 90LL) = *(_WORD *)(a1 + 82);
  result = *(__m128i **)a1;
  *(_WORD *)(*(_QWORD *)a1 + 92LL) = *(_WORD *)(a1 + 84);
  *(_BYTE *)(a1 + 86) = 0;
  return result;
}
