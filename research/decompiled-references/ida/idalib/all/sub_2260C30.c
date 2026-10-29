__int64 *__fastcall sub_2260C30(__int64 a1, _BYTE *a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  __m128i *v5; // rbx
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  __int64 *result; // rax
  char v9; // [rsp+Fh] [rbp-39h] BYREF
  __m128i v10; // [rsp+10h] [rbp-38h] BYREF
  _BYTE *v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]

  v5 = *(__m128i **)(a1 + 8);
  v10.m128i_i64[0] = (__int64)a2;
  v10.m128i_i64[1] = a3;
  v11 = a4;
  v12 = a5;
  v9 = 0;
  if ( v5 == *(__m128i **)(a1 + 16) )
    return sub_2260860(a1, v5, &v10, (__int64)&v11, &v9);
  v5->m128i_i64[0] = (__int64)v5[1].m128i_i64;
  sub_2259A00(v5, a2, (__int64)&a2[a3]);
  v6 = v11;
  v7 = v12;
  v5[2].m128i_i64[0] = (__int64)v5[3].m128i_i64;
  result = (__int64 *)sub_2259A00((__m128i *)v5[2].m128i_i64, v6, (__int64)&v6[v7]);
  v5[4].m128i_i8[0] = 0;
  *(_QWORD *)(a1 + 8) += 72LL;
  return result;
}
