__m128i *__fastcall sub_B15080(__int64 *a1, __int64 a2, unsigned __int32 a3, __int64 a4, int a5)
{
  char v6; // dl
  char v7; // al
  __m128i *v8; // r12
  __int8 v9; // al
  __m128i v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]
  __int64 v13; // [rsp+18h] [rbp-40h]
  __int16 v14; // [rsp+20h] [rbp-38h]
  char v15; // [rsp+22h] [rbp-36h]
  char v16; // [rsp+23h] [rbp-35h]

  if ( a5 == 1 )
  {
    v6 = 1;
    v7 = 2;
  }
  else
  {
    v6 = a5 == 0 ? 0 : 2;
    v7 = a5 == 0 ? 1 : 3;
  }
  v13 = a4;
  v11 = 0;
  v14 = 418;
  v12 = 0;
  v15 = (16 * v6) | v7 & 0xF;
  v16 &= 0xFCu;
  v8 = (__m128i *)sub_99FDF0(a1 + 294, 56, 3u);
  sub_B14EC0(v8, a1, &v11, a2, a3);
  v9 = v8[2].m128i_i8[2];
  v8[2].m128i_i8[6] |= 4u;
  if ( (v9 & 0xF0) != 0xF0 || v8->m128i_i64[0] )
    return v8;
  v8[2].m128i_i8[2] = v9 & 0xF;
  return v8;
}

