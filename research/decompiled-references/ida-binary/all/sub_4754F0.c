unsigned __int64 __fastcall sub_4754F0(QT::QMetaObject *a1, int a2, __int64 a3, int a4, void **a5)
{
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  int v7; // [rsp+8h] [rbp-40h] BYREF
  int v8; // [rsp+Ch] [rbp-3Ch] BYREF
  int v9[2]; // [rsp+10h] [rbp-38h] BYREF
  __m128i v10; // [rsp+18h] [rbp-30h]
  int *v11; // [rsp+28h] [rbp-20h]
  unsigned __int64 v12; // [rsp+38h] [rbp-10h]

  v8 = a2;
  v6 = a3;
  v7 = a4;
  v12 = __readfsqword(0x28u);
  *(_QWORD *)v9 = 0;
  v11 = &v7;
  v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v8, (__m128i)(unsigned __int64)&v6);
  QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)((char *)&off_18 + 2), (int)v9, a5);
  return v12 - __readfsqword(0x28u);
}
