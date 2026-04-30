__int64 __fastcall sub_1C74B0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  unsigned int v16; // ebp
  __int64 v18; // [rsp+0h] [rbp-38h] BYREF
  __int128 v19; // [rsp+8h] [rbp-30h]
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v18 = 0;
  v19 = 0;
  v9 = (const char *)a1;
  v16 = 1;
  if ( (int)convert_encoding(&v18, a1, "UTF-8", 0, 0, 0) < 0 )
  {
    v9 = (const char *)a1;
    sub_169630(
      (int)"Encoding name '%s' not recognized.\n\nYou can use most of the encodings supported by iconv (see iconv -l).",
      a1,
      v10,
      v11,
      v12,
      v13,
      (__m128)0LL,
      a3,
      a4,
      a5,
      v14,
      v15,
      a8,
      a9,
      v18);
    v16 = 0;
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18, v9);
  }
  return v16;
}
