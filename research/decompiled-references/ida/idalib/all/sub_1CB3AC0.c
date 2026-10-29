__m128i *__fastcall sub_1CB3AC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  const __m128i *v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __m128i *result; // rax
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-48h]
  __int64 v17; // [rsp+8h] [rbp-40h]
  _QWORD v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = a5;
  v6 = 0;
  if ( a2 )
  {
    v16 = a3;
    v17 = a4;
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    a3 = v16;
    a4 = v17;
    v6 = v7 & 0xFFFFFFFFFFFFFFFBLL;
  }
  v8 = 4 * v5;
  v18[2] = a4;
  v9 = *(_QWORD *)a1;
  v10 = (const __m128i *)v18;
  v11 = *(unsigned int *)(a1 + 12);
  v18[1] = a3;
  v18[0] = v6 | v8;
  v12 = *(unsigned int *)(a1 + 8);
  v13 = v12 + 1;
  result = (__m128i *)(v9 + 24 * v12);
  if ( v13 > v11 )
  {
    v15 = a1 + 16;
    if ( v9 > (unsigned __int64)v18 || result <= (__m128i *)v18 )
    {
      sub_2237220(a1, v15, v13, 24);
      result = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
    }
    else
    {
      sub_2237220(a1, v15, v13, 24);
      v10 = (const __m128i *)((char *)v18 + *(_QWORD *)a1 - v9);
      result = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
    }
  }
  *result = _mm_loadu_si128(v10);
  result[1].m128i_i64[0] = v10[1].m128i_i64[0];
  ++*(_DWORD *)(a1 + 8);
  return result;
}
