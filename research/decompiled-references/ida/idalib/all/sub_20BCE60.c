void __fastcall sub_20BCE60(__m128i *a1, unsigned int a2, __m128i *a3)
{
  unsigned __int8 v3; // al
  __m128i **v4; // rax

  v3 = a1[-1].m128i_u8[0];
  if ( (v3 & 2) != 0 )
  {
    v4 = (__m128i **)(a1[-2].m128i_i64[0] + 8LL * a2);
    if ( a3 == *v4 )
      return;
  }
  else
  {
    v4 = (__m128i **)&a1[-1] + a2 - ((v3 >> 2) & 0xF);
    if ( a3 == *v4 )
      return;
  }
  if ( (a1->m128i_i16[0] & 0x7F00) != 0 )
    sub_20B2F30(a1, a2, a3);
  else
    sub_20BCC00(a1, (__int64)v4, a3);
}
