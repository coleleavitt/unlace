__int64 __fastcall sub_A20FC0(__m128i *a1, const __m128i *a2)
{
  int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int8 v6; // dl
  __int64 result; // rax

  a1[7].m128i_i8[8] = 0;
  if ( a2[7].m128i_i8[8] )
  {
    sub_A0A1C0(a1, a2);
    v2 = a2[7].m128i_i8[0] & 1 | a1[7].m128i_i8[0] & 0xFE;
    a1[7].m128i_i8[0] = v2;
    v3 = a2[7].m128i_i8[0] & 2 | v2 & 0xFFFFFFFD;
    a1[7].m128i_i8[0] = v3;
    v4 = a2[7].m128i_i8[0] & 4 | v3 & 0xFFFFFFFB;
    a1[7].m128i_i8[0] = v4;
    v5 = a2[7].m128i_i8[0] & 8 | v4 & 0xFFFFFFF7;
    a1[7].m128i_i8[0] = v5;
    v6 = a2[7].m128i_i8[0];
    a1[7].m128i_i8[8] = 1;
    result = v6 & 0x70 | v5 & 0xFFFFFF8F;
    a1[7].m128i_i8[0] = result;
  }
  return result;
}
