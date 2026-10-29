__int64 __fastcall types_show_quick_filter_ah_t__::vfunc_0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = 0;
  if ( *(_DWORD *)(a2 + 8) == 39 )
    v2 = QT::QMetaObject::cast((QT::QMetaObject *)&off_88EB20, *(const QT::QObject **)a2);
  QT::QWidget::show(*(QT::QWidget **)(*(_QWORD *)(v2 + 40) + 48LL));
  return 0;
}
