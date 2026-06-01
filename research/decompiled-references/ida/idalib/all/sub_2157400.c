__int64 __fastcall sub_2157400(__m128i *a1, const __m128i *a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  __int64 result; // rax
  void (__fastcall ***v5)(__int64 *); // rsi
  __int64 v7; // rdi
  __int64 v8; // [rsp+0h] [rbp-10h] BYREF

  v2 = a2->m128i_i64[0];
  v3 = _mm_loadu_si128(a2 + 1);
  a1->m128i_i64[1] = 0;
  a1->m128i_i64[0] = v2;
  result = a2[2].m128i_u16[0];
  v5 = (void (__fastcall ***)(__int64 *))a2->m128i_i64[1];
  a1[1] = v3;
  a1[2].m128i_i16[0] = result;
  if ( v5 )
  {
    (**v5)(&v8);
    result = v8;
    v7 = a1->m128i_i64[1];
    v8 = 0;
    a1->m128i_i64[1] = result;
    if ( v7 )
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      if ( v8 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return result;
}
