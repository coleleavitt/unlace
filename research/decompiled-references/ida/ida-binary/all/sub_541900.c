__int64 _base_app_mixin_t::cancel_long_op()
{
  __int64 v0; // rdx

  v0 = *(_QWORD *)(QT::QCoreApplication::self[3] + 120LL);
  if ( !v0 || *((int *)QT::QCoreApplication::self + 25) > 0 )
    return 0;
  *(_BYTE *)(v0 + 72) = 1;
  QT::QWidget::setEnabled(*(QT::QWidget **)(v0 + 64), 0);
  return 0;
}
