_QWORD *__fastcall sub_7A7070(_QWORD *a1, const __m128i *a2, unsigned int a3, unsigned int *a4, double a5)
{
  __m128 *v5; // rax
  unsigned __int64 v9[4]; // [rsp+18h] [rbp-20h] BYREF

  v5 = (__m128 *)a2[1].m128i_i64[1];
  if ( v5 )
  {
    if ( v5[22].m128_i8[0] )
    {
      sub_7A4170(a2);
      sub_180C5A0(v9, "alldiff");
      v5 = sub_7A6F60(a2, v9, a3, a4, a5);
    }
    else
    {
      v5 = nullptr;
    }
  }
  a1[1] = v5;
  *a1 = 1;
  return a1;
}

