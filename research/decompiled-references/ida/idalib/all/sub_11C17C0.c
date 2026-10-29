__m128i *__fastcall sub_11C17C0(__m128i *a1, int a2)
{
  void *v3[2]; // [rsp+0h] [rbp-38h] BYREF
  __m128i v4[2]; // [rsp+10h] [rbp-28h] BYREF

  if ( a2 == 1 )
  {
    sub_11BA9A0(v3, "improved");
  }
  else if ( a2 )
  {
    if ( a2 == 2 )
    {
      sub_11BA9A0(v3, "promoted");
    }
    else if ( a2 == 3 )
    {
      sub_11BA9A0(v3, "basic");
    }
    else
    {
      sub_11BA9A0(v3, (char *)&byte_22F0C30);
    }
  }
  else
  {
    sub_11BA9A0(v3, "full");
  }
  if ( v3[1] )
  {
    sub_C05100((__int64)a1, "-complex-range=", (__int64)v3);
    if ( v3[0] != v4 )
      operator delete(v3[0]);
    return a1;
  }
  else
  {
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( v3[0] == v4 )
    {
      a1[1] = _mm_load_si128(v4);
    }
    else
    {
      a1->m128i_i64[0] = (__int64)v3[0];
      a1[1].m128i_i64[0] = v4[0].m128i_i64[0];
    }
    a1->m128i_i64[1] = 0;
    return a1;
  }
}
