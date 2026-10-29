unsigned __int64 __fastcall sub_177C10(const __m128i **a1, __m128i *a2, __int64 a3, char a4)
{
  const __m128i *v4; // rbx
  __int64 m128i_i64; // rbx
  const __m128i *v7; // r14
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i v12; // [rsp+10h] [rbp-68h] BYREF
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v14[16]; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v4 = a1[1];
  v15 = __readfsqword(0x28u);
  m128i_i64 = (__int64)(*a1)[(_QWORD)v4].m128i_i64;
  if ( (const __m128i *)m128i_i64 != *a1 )
  {
    v7 = *a1;
    do
    {
      while ( !v7->m128i_i8[12] )
      {
        if ( (const __m128i *)m128i_i64 == ++v7 )
          return v15 - __readfsqword(0x28u);
      }
      v12 = _mm_loadu_si128(v7);
      QT::QTextCharFormat::QTextCharFormat((QT::QTextCharFormat *)v14);
      sub_175B10((__int64)&v12, (int *)&v13, a3, a4);
      sub_177850(a2, a2[1].m128i_i64[0], &v13);
      if ( !a2->m128i_i64[0] || *(int *)a2->m128i_i64[0] > 1 )
        sub_177130(a2, 0, 0, 0, v8, v9);
      ++v7;
      QT::QTextFormat::~QTextFormat((QT::QTextFormat *)v14);
    }
    while ( (const __m128i *)m128i_i64 != v7 );
  }
  return v15 - __readfsqword(0x28u);
}
