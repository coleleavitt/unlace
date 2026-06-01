__int64 __fastcall sub_1803EC0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h]
  __m128i v11; // [rsp+30h] [rbp-58h] BYREF
  __m128i v12; // [rsp+40h] [rbp-48h] BYREF
  char v13; // [rsp+50h] [rbp-38h]
  __m128i v14; // [rsp+60h] [rbp-28h] BYREF
  __int32 v15; // [rsp+70h] [rbp-18h]

  v9 = a2;
  v10 = a3;
  result = a2;
  v4 = a2 | HIDWORD(a3) & 0x7FFFFFFF;
  v5 = v4 | ((unsigned int)a3 | HIDWORD(a2)) & 0x7FFFFFFF;
  if ( v4 | ((unsigned int)a3 | HIDWORD(a2)) & 0x7FFFFFFF )
  {
    v6 = (unsigned int)a2;
    v7 = *a1;
    v11 = (__m128i)0x8000000000000002LL;
    if ( v7 )
    {
      LOBYTE(v15) = 0;
      sub_FC0010(&v12, v7, (unsigned int *)&v9, &v11, v5, v6, (__int128)_mm_load_si128(&v14), v15);
      if ( v13 )
        return v12.m128i_i64[0];
      LODWORD(v6) = v9;
    }
    if ( (unsigned int)v6 > 8 )
    {
      if ( (unsigned int)v6 < 0xC )
        LODWORD(v6) = v6 - 7;
      result = (unsigned int)v6;
      if ( v9 < 0 )
      {
        v8 = HIDWORD(v9) & 0x7FFFFFFF;
        if ( (v10 & 0x80000000LL) != 0 )
          return (v8 << 32) | (unsigned int)v6 | 0x8000000000000000LL;
        else
          return (((((v8 << 32) | (unsigned __int64)(unsigned int)v6) >> 56) | 0x80) << 56)
               | ((v8 << 32) | (unsigned int)v6) & 0xFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      return v11.m128i_i64[0];
    }
  }
  return result;
}
