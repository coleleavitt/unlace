__int64 __fastcall sub_2CF250(
        QT::QFrame *a1,
        QT::QFrame *a2,
        __int64 a3,
        unsigned __int8 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  double v15; // xmm4_8
  double v16; // xmm5_8

  result = sub_1F4A50(a1, a2, a3, a4, a5);
  if ( *((_BYTE *)a1 + 1080) )
  {
    if ( !(unsigned __int8)sub_2CCB20((__int64)a1, nullptr) )
      return sub_1C7D20(nullptr);
    result = sub_2CAEF0((__int64)a1, 0, v13, v14, a5, a6, a7, a8, v15, v16, a11, a12);
    if ( !(_BYTE)result )
      return sub_1C7D20(nullptr);
  }
  return result;
}
