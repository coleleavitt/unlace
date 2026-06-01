__int64 __fastcall sub_515BA0(
        __int64 a1,
        __m128 a2,
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
  QT::QAbstractScrollArea *v14; // rbx
  __int64 result; // rax
  char v16; // [rsp+0h] [rbp-8h]

  v14 = *(QT::QAbstractScrollArea **)(a1 + 256);
  result = 0;
  if ( v14 )
  {
    if ( (unsigned __int8)sub_196F50(
                            (int)v14 + 120,
                            3,
                            (int)"Please enter search string",
                            a12,
                            a13,
                            a14,
                            a2,
                            a3,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            v16) )
    {
      if ( *((_QWORD *)v14 + 16) > 1u )
      {
        *((_QWORD *)v14 + 18) = qword_8D2398;
        sub_515940(v14, *(double *)a2.m128_u64, *(double *)a3.m128_u64);
      }
    }
    return 1;
  }
  return result;
}
