__int64 __fastcall offsets_add_missing_fields_ah_t__::vfunc_0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rax

  v10 = 0;
  if ( *(_DWORD *)(a10 + 8) == 40 )
    v10 = QT::QMetaObject::cast((QT::QMetaObject *)&off_88EAE0, *(const QT::QObject **)a10);
  sub_395680(*(_QWORD *)(v10 + 40), a1, a2, a3, a4, a5, a6, a7, a8);
  return 0;
}
