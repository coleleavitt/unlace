/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eltoe
// Address: 0x000000010006961C

//----- (000000010006961C) ----------------------------------------------------
__int64 __fastcall eltoe(__int64 result, int16x4_t *a2, int8x16x2_t a3)
{
  __int16 v4; // w8
  __int16 v5; // w9
  __int16 v6; // w10
  __int16 v7; // w11
  int16x4_t v8; // d0
  int16x4_t v9[3]; // [xsp+0h] [xbp-30h] BYREF

  memset(v9, 0, 22);
  if ( result < 0 )
  {
    result = -result;
    v9[0].i16[0] = -1;
  }
  else if ( !result )
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    goto LABEL_7;
  }
  v9[0].i16[2] = HIWORD(result);
  v9[0].i16[3] = WORD2(result);
  v9[1].i16[0] = WORD1(result);
  v9[1].i16[1] = result;
  result = sub_100067EF8((__int64)v9, a3);
  v4 = 16430 - result;
  v5 = v9[0].i16[3];
  v6 = v9[1].i16[0];
  v7 = v9[1].i16[1];
  v8 = vrev64_s16(*(int16x4_t *)((char *)&v9[1] + 4));
  if ( v9[0].i16[0] )
    v4 |= 0x8000u;
LABEL_7:
  a2[1].i16[3] = v4;
  a2[1].i16[2] = v5;
  a2[1].i16[1] = v6;
  a2[1].i16[0] = v7;
  *a2 = v8;
  return result;
}
