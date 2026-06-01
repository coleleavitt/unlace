__int64 __fastcall sub_2B60E0(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  QT::QAbstractScrollArea *v10; // rdi
  QT::QCursor *v11; // rax
  __m128 v12; // xmm4
  __m128 v13; // xmm5
  int v14; // edx
  __int64 result; // rax
  __int64 v16; // [rsp+8h] [rbp-20h] BYREF
  __m128i v17; // [rsp+10h] [rbp-18h] BYREF

  v17.m128i_i64[1] = __readfsqword(0x28u);
  v10 = (QT::QAbstractScrollArea *)a1[2];
  v16 = -1;
  v11 = (QT::QCursor *)QT::QAbstractScrollArea::viewport(v10);
  v17.m128i_i64[0] = sub_1C7B10(v11);
  v14 = sub_2B6070(a1, &v17, (__int64)&v16, 0, a2, a3, a4, a5, v12, v13, a8, a9);
  result = 0;
  if ( v14 != -1 )
    return (unsigned int)SWORD2(v16);
  return result;
}
