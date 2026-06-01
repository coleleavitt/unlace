__m128i *__fastcall sub_2156FD0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __m128i *result; // rax
  __m128i vars0; // [rsp+0h] [rbp+0h] BYREF
  __m128i vars10; // [rsp+10h] [rbp+10h] BYREF
  __m128i vars20; // [rsp+20h] [rbp+20h] BYREF
  __int64 vars30; // [rsp+30h] [rbp+30h]

  v4 = a2 + 114;
  v5 = a2 + 122;
  v6 = *(_QWORD *)(v5 - 8);
  v7 = *a1;
  vars0.m128i_i64[1] = v4;
  v8 = _byteswap_uint64(v6);
  v9 = (unsigned int)(8 * v8 + 8);
  vars10.m128i_i64[0] = a3;
  v10 = v9 + v4;
  v11 = a3 - v9;
  v12 = *((unsigned int *)a1 + 2);
  vars0.m128i_i64[0] = v8;
  vars30 = v11;
  vars20.m128i_i64[0] = 8 * v8;
  v13 = v12 + 1;
  v14 = 7 * v12;
  v15 = *((unsigned int *)a1 + 3);
  vars10.m128i_i64[1] = v5;
  vars20.m128i_i64[1] = v10;
  result = (__m128i *)(v7 + 8 * v14);
  if ( v13 > v15 )
  {
    sub_2237220(a1, a1 + 2, v13, 56);
    result = (__m128i *)(*a1 + 56LL * *((unsigned int *)a1 + 2));
  }
  *result = _mm_loadu_si128(&vars0);
  result[1] = _mm_loadu_si128(&vars10);
  result[2] = _mm_loadu_si128(&vars20);
  result[3].m128i_i64[0] = vars30;
  ++*((_DWORD *)a1 + 2);
  return result;
}
