unsigned __int64 __fastcall sub_475B80(QT::QMetaObject *a1, __int64 a2, __int64 a3, char a4, void **a5)
{
  char v6; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v7; // [rsp+10h] [rbp-48h] BYREF
  __int64 v8; // [rsp+18h] [rbp-40h] BYREF
  int v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128i v10; // [rsp+28h] [rbp-30h]
  char *v11; // [rsp+38h] [rbp-20h]
  unsigned __int64 v12; // [rsp+48h] [rbp-10h]

  v8 = a2;
  v7 = a3;
  v6 = a4;
  v12 = __readfsqword(0x28u);
  *(_QWORD *)v9 = 0;
  v11 = &v6;
  v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v8, (__m128i)(unsigned __int64)&v7);
  QT::QMetaObject::activate(
    a1,
    (QT::QObject *)&off_893BE0,
    (const QT::QMetaObject *)((char *)&qword_28 + 2),
    (int)v9,
    a5);
  return v12 - __readfsqword(0x28u);
}
