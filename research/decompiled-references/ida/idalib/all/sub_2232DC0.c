__int64 __fastcall sub_2232DC0(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // r9d
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __int8 *v11; // rcx
  char v12; // r9
  unsigned __int64 v13; // r8
  int v15; // esi
  __m128i v16; // xmm0
  unsigned int v17; // ecx
  __m128i si128; // [rsp+0h] [rbp-88h] BYREF
  __m128i v19; // [rsp+10h] [rbp-78h]
  __m128i v20; // [rsp+20h] [rbp-68h]
  __m128i v21; // [rsp+30h] [rbp-58h]
  __m128i v22; // [rsp+40h] [rbp-48h]
  __m128i v23; // [rsp+50h] [rbp-38h]
  __m128i v24; // [rsp+60h] [rbp-28h]
  __m128i v25; // [rsp+70h] [rbp-18h]

  v5 = a2;
  v6 = 0;
  if ( a5 )
  {
    v6 = 128;
    if ( a4 <= 0x7F )
      v6 = a4;
  }
  if ( !a2 )
  {
    v7 = a3 & 0xFFFFFFFD;
    if ( (unsigned int)(a3 - 2) > 1 )
      goto LABEL_7;
    goto LABEL_15;
  }
  _BitScanReverse64(&a2, a2);
  v7 = a3 & 0xFFFFFFFD;
  v8 = (int)(67 - (a2 ^ 0x3F)) >> 2;
  if ( (unsigned int)(a3 - 2) <= 1 )
  {
    if ( v8 != 1 )
    {
      v17 = v8 + 2;
      LODWORD(v10) = v6;
      if ( v17 >= v6 )
        LODWORD(v10) = v17;
      goto LABEL_18;
    }
LABEL_15:
    v15 = 3;
    if ( v6 >= 3 )
      v15 = v6;
    LODWORD(v10) = v15;
LABEL_18:
    si128 = _mm_load_si128((const __m128i *)&xmmword_23ABB30);
    v19 = si128;
    v20 = si128;
    v21 = si128;
    v22 = si128;
    v23 = si128;
    v24 = si128;
    v25 = si128;
    si128.m128i_i8[1] = 120;
    goto LABEL_10;
  }
  if ( v8 == 1 )
  {
LABEL_7:
    v9 = _mm_load_si128((const __m128i *)&xmmword_23ABB30);
    LODWORD(v10) = 1;
    if ( v6 )
      LODWORD(v10) = v6;
    si128 = v9;
    v19 = v9;
    v20 = v9;
    v21 = v9;
    v22 = v9;
    v23 = v9;
    v24 = v9;
    v25 = v9;
LABEL_10:
    v10 = (unsigned int)v10;
    v11 = &si128.m128i_i8[(unsigned int)v10];
    if ( !v5 )
      return sub_227BF10(a1, &si128, v10);
    goto LABEL_11;
  }
  LODWORD(v10) = (int)(67 - (a2 ^ 0x3F)) >> 2;
  v16 = _mm_load_si128((const __m128i *)&xmmword_23ABB30);
  if ( v6 >= v8 )
    LODWORD(v10) = v6;
  si128 = v16;
  v10 = (unsigned int)v10;
  v19 = v16;
  v20 = v16;
  v11 = &si128.m128i_i8[(unsigned int)v10];
  v21 = v16;
  v22 = v16;
  v23 = v16;
  v24 = v16;
  v25 = v16;
LABEL_11:
  v12 = v7 != 0 ? 0x20 : 0;
  do
  {
    --v11;
    v13 = v5 & 0xF;
    v5 >>= 4;
    *v11 = v12 | a0123456789abcd_3[v13];
  }
  while ( v5 );
  return sub_227BF10(a1, &si128, v10);
}
