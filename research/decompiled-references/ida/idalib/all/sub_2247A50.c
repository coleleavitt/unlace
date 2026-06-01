bool __fastcall sub_2247A50(__int128 a1, unsigned int a2, __int64 *a3)
{
  __int64 v4; // rax
  bool v6; // zf
  __m128i v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+18h] [rbp-20h] BYREF
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  v7 = (__m128i)a1;
  if ( *((_QWORD *)&a1 + 1) && *(_BYTE *)a1 == 45 )
  {
    v9.m128i_i64[0] = a1 + 1;
    v9.m128i_i64[1] = *((_QWORD *)&a1 + 1) - 1LL;
    if ( (unsigned __int8)sub_2247880((__int64)&v9, a2, &v8) )
      return 1;
    v4 = -v8;
    if ( -v8 >= 0 && v8 != 0 )
      return 1;
    v7 = _mm_load_si128(&v9);
  }
  else
  {
    if ( (unsigned __int8)sub_2247880((__int64)&v7, a2, &v9) )
      return 1;
    v4 = v9.m128i_i64[0];
    if ( v9.m128i_i64[0] < 0 )
      return 1;
  }
  v6 = v7.m128i_i64[1] == 0;
  *a3 = v4;
  return !v6;
}
