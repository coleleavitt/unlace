_QWORD *__fastcall sub_A1C60(unsigned __int64 a1, char a2)
{
  __m128i *v2; // rax

  if ( !byte_245128 || qword_245138 < a1 || a1 < qword_245130 )
    return nullptr;
  v2 = xmmword_251D80;
  if ( a2 )
  {
    v2 = xmmword_251BE0;
    if ( qword_251C20 == qword_251C40 )
      v2 = xmmword_251F20;
  }
  return sub_A1C00((__int64)v2, a1);
}

