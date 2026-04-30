__int64 __fastcall sub_4B0CB0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int token; // eax
  const char *v12; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8

  token = lex_get_token(a2, a1, 0);
  if ( token )
  {
    v12 = (const char *)qstrerror(token);
    sub_4B0C20(a2, v12, 1, a3, a4, a5, a6, v13, v14, a9, a10);
  }
  return 1;
}
