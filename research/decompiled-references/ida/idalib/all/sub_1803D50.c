__int64 __fastcall sub_1803D50(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  _QWORD v8[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v9; // [rsp+30h] [rbp-58h] BYREF
  __m128i v10; // [rsp+40h] [rbp-48h] BYREF
  char v11; // [rsp+50h] [rbp-38h]
  __m128i v12; // [rsp+60h] [rbp-28h] BYREF
  __int32 v13; // [rsp+70h] [rbp-18h]

  v8[0] = a2;
  v8[1] = a3;
  if ( ((unsigned int)a3 | HIDWORD(a2)) & 0x7FFFFFFF | (unsigned int)a2 | HIDWORD(a3) & 0x7FFFFFFF
    && (v7 = *a1) != 0
    && (LOBYTE(v13) = 0,
        v9 = (__m128i)0x8000000000000000LL,
        sub_FC0010(&v10, v7, (unsigned int *)v8, &v9, a5, a6, (__int128)_mm_load_si128(&v12), v13),
        v11) )
  {
    return v10.m128i_i64[0];
  }
  else
  {
    return v8[0];
  }
}
