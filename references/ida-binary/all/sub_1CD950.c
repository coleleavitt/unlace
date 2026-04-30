unsigned __int64 sub_1CD950()
{
  _BYTE *v0; // rbp
  const __m128i *v1; // rdx
  char *v2; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  _BYTE v9[12]; // [rsp+0h] [rbp-AE8h] BYREF
  char v10; // [rsp+Ch] [rbp-ADCh] BYREF
  int v11; // [rsp+350h] [rbp-798h]
  _BYTE v12[848]; // [rsp+354h] [rbp-794h] BYREF
  char v13; // [rsp+6A4h] [rbp-444h] BYREF
  _BYTE v14[1032]; // [rsp+6B0h] [rbp-438h] BYREF
  unsigned __int64 v15; // [rsp+AB8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( (unsigned __int8)reg_bin_op("Palette", 0, v9, 844, 0, 0) )
  {
    v0 = v12;
    v1 = (const __m128i *)&v10;
    v2 = v12;
    do
    {
      v3 = _mm_loadu_si128(v1);
      v2 += 212;
      v1 += 13;
      *(__m128i *)(v2 - 212) = v3;
      *(__m128i *)(v2 - 196) = _mm_loadu_si128(v1 - 12);
      *(__m128i *)(v2 - 180) = _mm_loadu_si128(v1 - 11);
      *(__m128i *)(v2 - 164) = _mm_loadu_si128(v1 - 10);
      *(__m128i *)(v2 - 148) = _mm_loadu_si128(v1 - 9);
      *(__m128i *)(v2 - 132) = _mm_loadu_si128(v1 - 8);
      *(__m128i *)(v2 - 116) = _mm_loadu_si128(v1 - 7);
      *(__m128i *)(v2 - 100) = _mm_loadu_si128(v1 - 6);
      *(__m128i *)(v2 - 84) = _mm_loadu_si128(v1 - 5);
      *(__m128i *)(v2 - 68) = _mm_loadu_si128(v1 - 4);
      *(__m128i *)(v2 - 52) = _mm_loadu_si128(v1 - 3);
      *(__m128i *)(v2 - 36) = _mm_loadu_si128(v1 - 2);
      *(__m128i *)(v2 - 20) = _mm_loadu_si128(v1 - 1);
    }
    while ( v2 != &v13 );
    v4 = _mm_cvtsi32_si128(*(unsigned int *)&v9[6]);
    v5 = 0;
    v11 = _mm_cvtsi128_si32(v4);
    reg_int_op("Enabled", 1, (unsigned int)_mm_extract_epi16(v4, 0), "Palettes");
    reg_int_op("Index", 1, HIWORD(v11), "Palettes");
    do
    {
      v6 = v5++;
      qsnprintf(v14, 1024, "%zu", v6);
      v7 = v0;
      v0 += 212;
      reg_bin_op(v14, 1, v7, 212, "Palettes", 0);
    }
    while ( v5 != 4 );
  }
  return v15 - __readfsqword(0x28u);
}
