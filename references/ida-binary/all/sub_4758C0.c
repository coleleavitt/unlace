unsigned __int64 __fastcall sub_4758C0(
        QT::QMetaObject *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        void **a5,
        __int64 a6,
        char a7)
{
  __int64 v8; // [rsp+8h] [rbp-70h] BYREF
  void **v9; // [rsp+10h] [rbp-68h] BYREF
  char v10; // [rsp+18h] [rbp-60h] BYREF
  int v11; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+28h] [rbp-50h] BYREF
  int v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __m128i v15; // [rsp+38h] [rbp-40h]
  __m128i v16; // [rsp+48h] [rbp-30h]
  __m128i v17; // [rsp+58h] [rbp-20h]
  unsigned __int64 v18; // [rsp+68h] [rbp-10h]

  v13 = a2;
  v12 = a3;
  v11 = a4;
  v9 = a5;
  v8 = a6;
  v10 = a7;
  v18 = __readfsqword(0x28u);
  *(_QWORD *)v14 = 0;
  v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v13, (__m128i)(unsigned __int64)&v12);
  v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v11, (__m128i)(unsigned __int64)&v9);
  v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v8, (__m128i)(unsigned __int64)&v10);
  QT::QMetaObject::activate(
    a1,
    (QT::QObject *)&off_893BE0,
    (const QT::QMetaObject *)((char *)&qword_20 + 4),
    (int)v14,
    a5);
  return v18 - __readfsqword(0x28u);
}
