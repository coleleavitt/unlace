__m128i *__fastcall sub_A2CCC0(__m128i *a1, const __m128i *a2)
{
  __int8 v2; // al
  __int8 v4; // al
  __int8 v5; // al
  __int8 v6; // al
  __int8 v7; // al
  __int8 v8; // dl
  __int8 v9; // al
  __int8 v10; // al
  __int8 v11; // al
  __int8 v12; // al

  v2 = a2[7].m128i_i8[8];
  if ( a1[7].m128i_i8[8] )
  {
    if ( !v2 )
    {
      a1[7].m128i_i8[8] = 0;
      sub_A09CE0((__int64)a1);
      return a1;
    }
    sub_A0B090((__int64)a1, (__int64)a2);
    v9 = a2[7].m128i_i8[0] & 1 | a1[7].m128i_i8[0] & 0xFE;
    a1[7].m128i_i8[0] = v9;
    v10 = a2[7].m128i_i8[0] & 2 | v9 & 0xFD;
    a1[7].m128i_i8[0] = v10;
    v11 = a2[7].m128i_i8[0] & 4 | v10 & 0xFB;
    a1[7].m128i_i8[0] = v11;
    v12 = a2[7].m128i_i8[0] & 8 | v11 & 0xF7;
    a1[7].m128i_i8[0] = v12;
    a1[7].m128i_i8[0] = a2[7].m128i_i8[0] & 0x70 | v12 & 0x8F;
    return a1;
  }
  else
  {
    if ( !v2 )
      return a1;
    sub_A0A1C0(a1, a2);
    v4 = a2[7].m128i_i8[0] & 1 | a1[7].m128i_i8[0] & 0xFE;
    a1[7].m128i_i8[0] = v4;
    v5 = a2[7].m128i_i8[0] & 2 | v4 & 0xFD;
    a1[7].m128i_i8[0] = v5;
    v6 = a2[7].m128i_i8[0] & 4 | v5 & 0xFB;
    a1[7].m128i_i8[0] = v6;
    v7 = a2[7].m128i_i8[0] & 8 | v6 & 0xF7;
    a1[7].m128i_i8[0] = v7;
    v8 = a2[7].m128i_i8[0];
    a1[7].m128i_i8[8] = 1;
    a1[7].m128i_i8[0] = v8 & 0x70 | v7 & 0x8F;
    return a1;
  }
}
