__int64 __fastcall sub_2CE230(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const QT::QObject *v9; // rax
  const QT::QObject *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  double v14; // xmm4_8
  double v15; // xmm5_8
  unsigned __int8 v17; // bp

  v9 = (const QT::QObject *)sub_17D870(a1);
  if ( !v9 )
    return 0;
  v10 = v9;
  v11 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87C660, v9);
  if ( !v11 )
    return 0;
  v17 = sub_2CB300(v11, 2, v12, v13, a2, a3, a4, a5, v14, v15, a8, a9);
  sub_1F60E0((__int64)v10 + 528);
  return v17;
}
