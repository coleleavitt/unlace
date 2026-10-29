__int64 __fastcall sub_12FD590(
        __int64 (__fastcall *a1)(__int64, __m128i *),
        __int64 a2,
        const __m128i *a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r10
  char v7; // al
  char v10; // si
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i si128; // [rsp+0h] [rbp-38h] BYREF
  __m128i v15; // [rsp+10h] [rbp-28h]
  __int64 v16; // [rsp+20h] [rbp-18h]

  v7 = a3[2].m128i_i8[0];
  if ( v7 && (v10 = a4[2].m128i_i8[0]) != 0 )
  {
    if ( v7 == 1 )
    {
      v13 = a4[2].m128i_i64[0];
      si128 = _mm_load_si128(a4);
      v15 = _mm_load_si128(a4 + 1);
      v16 = v13;
    }
    else if ( v10 == 1 )
    {
      v12 = a3[2].m128i_i64[0];
      si128 = _mm_load_si128(a3);
      v15 = _mm_load_si128(a3 + 1);
      v16 = v12;
    }
    else
    {
      if ( a3[2].m128i_i8[1] == 1 )
      {
        v6 = a3->m128i_i64[1];
        a3 = (const __m128i *)a3->m128i_i64[0];
      }
      else
      {
        v7 = 2;
      }
      if ( a4[2].m128i_i8[1] == 1 )
      {
        a6 = a4->m128i_i64[1];
        a4 = (const __m128i *)a4->m128i_i64[0];
      }
      else
      {
        v10 = 2;
      }
      si128.m128i_i64[0] = (__int64)a3;
      si128.m128i_i64[1] = v6;
      v15.m128i_i64[0] = (__int64)a4;
      v15.m128i_i64[1] = a6;
      LOBYTE(v16) = v7;
      BYTE1(v16) = v10;
    }
  }
  else
  {
    LOWORD(v16) = 256;
  }
  return a1(a2, &si128);
}
