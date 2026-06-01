void *__fastcall sub_B72710(__int64 a1, __int64 a2, unsigned int a3, const void *a4)
{
  unsigned int v6; // ebx
  size_t v7; // r13
  __m128i *v8; // rax
  __m128i *v9; // rdi
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __m128i *v12; // rcx
  __int64 v13; // rax

  v6 = a3;
  *(_DWORD *)(a1 + 24) = a3;
  v7 = 4LL * a3;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_1C57678;
  *(_QWORD *)(a1 + 16) = a2;
  v8 = (__m128i *)sub_186B270(v7);
  v9 = v8;
  if ( !v6 )
    goto LABEL_11;
  if ( v6 - 1 <= 2 )
    goto LABEL_8;
  v10 = v6 >> 2;
  v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFFFFE), 0);
  v12 = &v8[v10];
  if ( ((v10 * 16) & 0x10) == 0 || (++v8, *v9 = v11, v12 != &v9[1]) )
  {
    do
    {
      *v8 = v11;
      v8 += 2;
      v8[-1] = v11;
    }
    while ( v12 != v8 );
  }
  if ( (v6 & 3) != 0 )
  {
    v13 = v6 & 0xFFFFFFFC;
    v6 -= v13;
    v8 = (__m128i *)((char *)v9 + 4 * v13);
LABEL_8:
    v8->m128i_i32[0] = -2;
    if ( v6 != 1 )
    {
      v8->m128i_i32[1] = -2;
      if ( v6 != 2 )
        v8->m128i_i32[2] = -2;
    }
  }
LABEL_11:
  *(_QWORD *)(a1 + 32) = v9;
  return memcpy(v9, a4, v7);
}

