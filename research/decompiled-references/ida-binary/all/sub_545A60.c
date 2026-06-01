unsigned __int64 __fastcall sub_545A60(QT::QMetaObject *a1, __int64 a2, __int64 a3, __int64 a4, void **a5, __int64 a6)
{
  __int64 v7; // [rsp+8h] [rbp-70h] BYREF
  void **v8; // [rsp+10h] [rbp-68h] BYREF
  __int64 v9; // [rsp+18h] [rbp-60h] BYREF
  __int64 v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-50h] BYREF
  int v12[2]; // [rsp+30h] [rbp-48h] BYREF
  __m128i v13; // [rsp+38h] [rbp-40h]
  __m128i v14; // [rsp+48h] [rbp-30h]
  __int64 *v15; // [rsp+58h] [rbp-20h]
  unsigned __int64 v16; // [rsp+68h] [rbp-10h]

  v11 = a2;
  v10 = a3;
  v9 = a4;
  v8 = a5;
  v7 = a6;
  v16 = __readfsqword(0x28u);
  *(_QWORD *)v12 = 0;
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v11, (__m128i)(unsigned __int64)&v10);
  v15 = &v7;
  v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v9, (__m128i)(unsigned __int64)&v8);
  QT::QMetaObject::activate(a1, (QT::QObject *)&off_8955C0, (const QT::QMetaObject *)&byte_8, (int)v12, a5);
  return v16 - __readfsqword(0x28u);
}
