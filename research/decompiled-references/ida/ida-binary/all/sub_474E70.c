unsigned __int64 __fastcall sub_474E70(QT::QMetaObject *a1, __int64 a2, int a3, __int64 a4, void **a5)
{
  int v6; // [rsp+4h] [rbp-34h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  int v8[2]; // [rsp+10h] [rbp-28h] BYREF
  __m128i v9; // [rsp+18h] [rbp-20h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v7 = a2;
  v6 = a3;
  v10 = __readfsqword(0x28u);
  *(_QWORD *)v8 = 0;
  v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v7, (__m128i)(unsigned __int64)&v6);
  QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&byte_7, (int)v8, a5);
  return v10 - __readfsqword(0x28u);
}
