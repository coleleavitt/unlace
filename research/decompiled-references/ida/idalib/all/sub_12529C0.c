unsigned __int64 __fastcall sub_12529C0(_QWORD *a1)
{
  __m128i *v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  __m128i v6[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = (__m128i *)a1[8];
  v6[0].m128i_i32[0] = 10;
  v6[0].m128i_i64[1] = -1;
  if ( v2 == (__m128i *)a1[9] )
  {
    sub_1252750((__int64)(a1 + 7), v2, v6);
    v3 = a1[8];
  }
  else
  {
    sub_124FC70(v2, v6);
    v3 = a1[8] + 48LL;
    a1[8] = v3;
  }
  v4 = 0xAAAAAAAAAAAAAAABLL * ((v3 - a1[7]) >> 4);
  if ( v4 > 0x186A0 )
    abort();
  sub_124FBE0((__int64)v6);
  return v4 - 1;
}
