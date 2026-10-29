__m128i *__fastcall sub_2227D20(unsigned int *a1, __int64 a2, int a3, unsigned __int64 a4)
{
  _QWORD *v4; // rax
  unsigned __int64 v6; // r13
  _QWORD *v7; // rbp
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r14
  int v11; // r12d
  __int64 v12; // rcx
  unsigned __int64 v13; // r14
  int v14; // r12d
  __m128i *result; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r12

  v4 = *(_QWORD **)a1;
  *((_DWORD *)v4 + 3) = a4;
  *v4 = a2;
  v6 = HIDWORD(a4);
  *((_DWORD *)v4 + 2) = a3;
  v7 = *(_QWORD **)a1;
  v8 = *(_QWORD *)a1 + 16LL;
  v9 = a1[2];
  v10 = *(_QWORD *)(**(_QWORD **)a1 + 8LL * *(unsigned int *)(*(_QWORD *)a1 + 12LL));
  v11 = v10 & 0x3F;
  v12 = 2 * v9;
  v13 = v10 & 0xFFFFFFFFFFFFFFC0LL;
  v14 = v11 + 1;
  result = (__m128i *)(*(_QWORD *)a1 + 16 * v9);
  if ( (__m128i *)v8 == result )
  {
    v20 = v9 + 1;
    v21 = (v6 << 32) | v14 & 0x7F;
    if ( v20 > a1[3] )
    {
      sub_2237220(a1, a1 + 4, v20, 16);
      result = (__m128i *)(*(_QWORD *)a1 + 16LL * a1[2]);
    }
    result->m128i_i64[0] = v13;
    result->m128i_i64[1] = v21;
    ++a1[2];
  }
  else
  {
    v16 = v9 + 1;
    if ( v16 > a1[3] )
    {
      sub_2237220(a1, a1 + 4, v16, 16);
      v7 = *(_QWORD **)a1;
      v12 = 2LL * a1[2];
      v8 = *(_QWORD *)a1 + 16LL;
      result = (__m128i *)(*(_QWORD *)a1 + v12 * 8);
    }
    *result = _mm_loadu_si128((const __m128i *)&v7[v12 - 2]);
    v17 = *(_QWORD *)a1;
    v18 = a1[2];
    result = (__m128i *)(16 * v18);
    if ( *(_QWORD *)a1 + 16 * v18 - 16 - v8 > 0 )
    {
      v19 = -1 * ((*(_QWORD *)a1 + 16 * v18 - 16 - v8) >> 4);
      result = (__m128i *)memmove(
                            &result[v19].m128i_i8[v17],
                            (const void *)(v19 * 16 + *(_QWORD *)a1 + 16 * v18 - 16),
                            *(_QWORD *)a1 + 16 * v18 - 16 - v8);
      LODWORD(v18) = a1[2];
    }
    a1[2] = v18 + 1;
    v7[2] = v13;
    *((_DWORD *)v7 + 6) = v14;
    *((_DWORD *)v7 + 7) = v6;
  }
  return result;
}
