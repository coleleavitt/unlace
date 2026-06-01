_QWORD *__fastcall sub_210620(unsigned __int64 a1, char a2)
{
  __m128i *v2; // rax

  if ( !byte_8BA508 || qword_8BA518 < a1 || a1 < qword_8BA510 )
    return nullptr;
  v2 = xmmword_8CB900;
  if ( a2 )
  {
    v2 = (__m128i *)&unk_8CB760;
    if ( qword_8CB7A0 == qword_8CB7C0 )
      v2 = (__m128i *)&unk_8CBAA0;
  }
  return sub_2105C0((__int64)v2, a1);
}
