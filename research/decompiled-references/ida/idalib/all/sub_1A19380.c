__int64 __fastcall sub_1A19380(__int64 a1, __int64 a2, __int64 a3, __m128 a4, __m128 a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v7; // [rsp+8h] [rbp-1FE0h] BYREF
  __m128i v8; // [rsp+10h] [rbp-1FD8h] BYREF
  _DWORD v9[2034]; // [rsp+20h] [rbp-1FC8h] BYREF

  v5 = 0;
  if ( a3 != 1 )
  {
    v5 = a1;
    v7 = a3 & 0xFFFFFFFFFFFFFFFELL;
    v8.m128i_i16[0] = 2;
    v8.m128i_i32[1] = sub_EEB7E0(a3 & 0xFFFFFFFFFFFFFFFELL, a2, *(double *)a4.m128_u64);
    v8.m128i_i64[1] = 0;
    sub_1A19220((__int64)v9, a1, a2, &v8, (__int64)&v7, 1, a4, a5, 0, 1u);
    LOBYTE(v5) = v9[0] != 0;
    sub_1A0BB10((__int64)v9);
  }
  return v5;
}
