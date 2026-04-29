unsigned __int64 __fastcall sub_7B1C0(
        __m128i *a1,
        const __m128i *a2,
        __m128i *a3,
        __int64 (__fastcall *a4)(const __m128i *, __int64 *))
{
  __int64 v5; // rsi
  __m128i *v9; // r15
  __int64 *v10; // rdi
  unsigned __int64 result; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // [rsp+0h] [rbp-48h]

  v5 = (char *)a2 - (char *)a1;
  v14 = (__int64)a3->m128i_i64 + v5;
  if ( v5 <= 480 )
    return sub_79A00(a1->m128i_i64, a2, a4);
  v9 = a1;
  do
  {
    v10 = (__int64 *)v9;
    v9 += 35;
    sub_79A00(v10, v9, a4);
  }
  while ( (char *)a2 - (char *)v9 > 480 );
  result = sub_79A00(v9->m128i_i64, a2, a4);
  if ( v5 > 560 )
  {
    v12 = 7;
    do
    {
      sub_7B0F0((__int64)a1, (__int64)a2, a3, v12, (unsigned __int8 (__fastcall *)(__int64, __int64))a4);
      v13 = 2 * v12;
      v12 *= 4;
      result = (unsigned __int64)sub_7B0F0(
                                   (__int64)a3,
                                   v14,
                                   a1,
                                   v13,
                                   (unsigned __int8 (__fastcall *)(__int64, __int64))a4);
    }
    while ( (__int64)(0xCCCCCCCCCCCCCCCDLL * (v5 >> 4)) > v12 );
  }
  return result;
}
