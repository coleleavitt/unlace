unsigned __int64 __fastcall sub_476130(QT::QMetaObject *a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  void **v6; // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h] BYREF
  __int64 v9; // [rsp+18h] [rbp-40h] BYREF
  int v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128i v11; // [rsp+28h] [rbp-30h]
  __m128i v12; // [rsp+38h] [rbp-20h]
  unsigned __int64 v13; // [rsp+48h] [rbp-10h]

  v9 = a2;
  v8 = a3;
  v7 = a4;
  v6 = a5;
  v13 = __readfsqword(0x28u);
  *(_QWORD *)v10 = 0;
  v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v9, (__m128i)(unsigned __int64)&v8);
  v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v7, (__m128i)(unsigned __int64)&v6);
  QT::QMetaObject::activate(
    a1,
    (QT::QObject *)&off_893BE0,
    (const QT::QMetaObject *)((char *)&word_34 + 1),
    (int)v10,
    a5);
  return v13 - __readfsqword(0x28u);
}
