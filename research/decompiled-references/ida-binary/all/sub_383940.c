void __fastcall sub_383940(
        __int64 a1,
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
        size_t a13,
        __int64 a14)
{
  const char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rbx

  if ( a1 && (_QWORD)xmmword_8CF2A8 )
  {
    v14 = (const char *)qword_8CF2A0;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      v17 = *(__int64 **)(qword_8CF2A0 + 8 * v16);
      if ( v17 )
      {
        if ( a1 == v17[3] )
          break;
      }
      v15 = (unsigned int)(v15 + 1);
      v16 = (int)v15;
      if ( (int)v15 >= (unsigned __int64)xmmword_8CF2A8 )
        return;
    }
    if ( dword_8CC5F0 )
    {
      v14 = &s1;
      if ( v17[8] )
        v14 = (const char *)v17[7];
      sub_239E40(&qword_8CC000, v14, a2, a3, a4, a5, a6, a7, a8, a9, v15, xmmword_8CF2A8, a13, a14);
    }
    sub_383810(v17, v14);
    operator delete(v17, 0xC0u);
  }
}
