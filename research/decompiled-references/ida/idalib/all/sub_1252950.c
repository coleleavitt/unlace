unsigned __int64 __fastcall sub_1252950(_QWORD *a1, const __m128i *a2)
{
  __m128i *v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // rax

  v3 = (__m128i *)a1[8];
  if ( v3 == (__m128i *)a1[9] )
  {
    sub_1252750((__int64)(a1 + 7), v3, a2);
    v4 = a1[8];
  }
  else
  {
    sub_124FC70(v3, a2);
    v4 = a1[8] + 48LL;
    a1[8] = v4;
  }
  v5 = 0xAAAAAAAAAAAAAAABLL * ((v4 - a1[7]) >> 4);
  if ( v5 > 0x186A0 )
    abort();
  return v5 - 1;
}
