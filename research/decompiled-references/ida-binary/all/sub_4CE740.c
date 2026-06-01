__int64 __fastcall sub_4CE740(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( v1
    && ((_UNKNOWN *)(**(__int64 (__fastcall ***)(__int64))v1)(v1) == &QT::QStackedWidget::staticMetaObject
     || (_UNKNOWN *)(**(__int64 (__fastcall ***)(__int64))v1)(v1) == &QT::QSplitter::staticMetaObject) )
  {
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 16LL);
  }
  else
  {
    return 0;
  }
}
