__m128i *__fastcall sub_11979A0(__m128i *a1, int a2)
{
  void *v3[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h] BYREF

  if ( a2 == 4 )
  {
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    sub_11892E0(a1, &byte_22F0C30, (__int64)&byte_22F0C30);
    return a1;
  }
  else
  {
    sub_11BBBE0(v3);
    sub_E7ED70(a1, "-fcomplex-arithmetic=", v3);
    if ( v3[0] != &v4 )
      operator delete(v3[0]);
    return a1;
  }
}
