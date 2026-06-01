_QWORD *__fastcall sub_7A70F0(_QWORD *a1, const __m128i *a2, unsigned int a3, unsigned int a4, double a5)
{
  __m128 *v5; // rax
  unsigned __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v8[8]; // [rsp+8h] [rbp-20h] BYREF

  v5 = (__m128 *)a2[1].m128i_i64[1];
  v8[0] = a3;
  v8[1] = a4;
  if ( v5 )
  {
    if ( v5[22].m128_i8[0] )
    {
      sub_7A4170(a2);
      sub_180C5A0(&v7, "tseitin");
      v5 = sub_7A6F60(a2, &v7, 2u, v8, a5);
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

