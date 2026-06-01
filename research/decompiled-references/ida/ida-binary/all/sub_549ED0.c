_UNKNOWN **__fastcall DockWidgetTitle__::vfunc_0(__int64 a1)
{
  QT::QObjectData *v1; // rdi

  v1 = *(QT::QObjectData **)(a1 + 8);
  if ( *((_QWORD *)v1 + 7) )
    return (_UNKNOWN **)QT::QObjectData::dynamicMetaObject(v1);
  else
    return &off_899940;
}
