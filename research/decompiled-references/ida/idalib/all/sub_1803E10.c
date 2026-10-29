__m128i *__fastcall sub_1803E10(__m128i *a1, __int64 **a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rax
  __int64 v8; // rsi
  __m128i v9; // [rsp+20h] [rbp-38h] BYREF
  __m128i v10; // [rsp+30h] [rbp-28h] BYREF
  __int32 v11; // [rsp+40h] [rbp-18h]

  if ( *a3 )
  {
    if ( *a3 == 100000 )
    {
      a1->m128i_i64[0] = 100000;
      a1->m128i_i64[1] = 0;
      a1[1].m128i_i8[0] = 1;
      return a1;
    }
  }
  else if ( (a3[1] & 0x7FFFFFFF) == 0 && (a3[2] & 0x7FFFFFFF) == 0 && (a3[3] & 0x7FFFFFFF) == 0 )
  {
    a1[1].m128i_i8[0] = 0;
    return a1;
  }
  v7 = *a2;
  LOBYTE(v11) = 0;
  v8 = *v7;
  v9 = (__m128i)0x800000010000000DLL;
  sub_FC0010(a1, v8, a3, &v9, a5, a6, (__int128)_mm_load_si128(&v10), v11);
  return a1;
}
