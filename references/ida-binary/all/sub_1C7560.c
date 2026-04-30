__int64 __fastcall sub_1C7560(
        int a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const char *v14; // rsi
  double v15; // xmm4_8
  double v16; // xmm5_8
  const char *v17; // rbp
  unsigned int v18; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  const char *v25; // [rsp+0h] [rbp-38h] BYREF
  __int128 v26; // [rsp+8h] [rbp-30h]
  unsigned __int64 v27; // [rsp+18h] [rbp-20h]

  v14 = nullptr;
  v27 = __readfsqword(0x28u);
  v26 = 0;
  if ( (unsigned __int8)sub_196F50(
                          (int)&v25,
                          0,
                          (int)"Enter an encoding name",
                          a12,
                          a13,
                          a14,
                          (__m128)0LL,
                          a3,
                          a4,
                          a5,
                          a6,
                          a7,
                          a8,
                          a9,
                          0) )
  {
    v17 = &s1;
    if ( (_QWORD)v26 )
      v17 = v25;
    if ( (unsigned __int8)sub_1C74B0((__int64)v17, 0.0, a3, a4, a5, v15, v16, a8, a9) )
    {
      if ( !a1 || a1 == (unsigned int)get_encoding_bpu_by_name(v17) )
      {
        v18 = add_encoding(v17);
        goto LABEL_7;
      }
      v14 = v17;
      sub_169630(
        (int)"Encoding \"%s\" is not suitable for %d-bit encodings",
        (__int64)v17,
        (unsigned int)(8 * a1),
        v20,
        v21,
        v22,
        (__m128)0LL,
        a3,
        a4,
        a5,
        v23,
        v24,
        a8,
        a9,
        (char)v25);
    }
  }
  v18 = -1;
LABEL_7:
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25, v14);
  }
  return v18;
}
