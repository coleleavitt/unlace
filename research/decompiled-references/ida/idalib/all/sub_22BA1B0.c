void __fastcall sub_22BA1B0(__int64 a1, _QWORD **a2)
{
  __m128i v2; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+10h] [rbp-28h] BYREF

  sub_2253560(&v2, a2);
  sub_22B9ED0(a1, &v2);
  if ( (__int64 *)v2.m128i_i64[0] != &v3 )
    operator delete((void *)v2.m128i_i64[0]);
}
