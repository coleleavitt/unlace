__int64 __fastcall sub_8177F0(unsigned __int64 a1, __int64 a2)
{
  __m128i v3; // [rsp+0h] [rbp-18h] BYREF

  v3.m128i_i64[0] = a2;
  v3.m128i_i8[8] = 0;
  sub_80FCA0(&v3, a1);
  return v3.m128i_u8[8];
}

