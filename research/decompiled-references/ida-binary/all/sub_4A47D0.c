unsigned __int64 __fastcall sub_4A47D0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned __int64 result; // rax

  if ( (_QWORD)xmmword_8D1C28 )
  {
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)(qword_8D1C20 + 8 * v8++);
      result = sub_4A4600(v9, nullptr, 7u, 0, a1, a2, a3, a4, a5, a6, a7, a8);
    }
    while ( v8 < (unsigned __int64)xmmword_8D1C28 );
  }
  return result;
}
