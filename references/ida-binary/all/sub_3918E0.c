__int64 __fastcall offsets_select_deselect_all_ah_t__::vfunc_0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax

  v10 = 0;
  if ( *(_DWORD *)(a2 + 8) == 40 )
    v10 = QT::QMetaObject::cast((QT::QMetaObject *)&off_88EAE0, *(const QT::QObject **)a2);
  sub_391790(*(_QWORD *)(v10 + 40), *(_BYTE *)(a1 + 13), a3, a4, a5, a6, a7, a8, a9, a10);
  return 0;
}
