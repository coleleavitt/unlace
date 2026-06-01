QT::QVariant *__fastcall sub_498DE0(QT::QVariant *this, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rax
  __int64 v7; // rax

  v5 = *(_QWORD *)(a2 + 304);
  if ( *(_DWORD *)(v5 + 2376) == 2 )
  {
    v7 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(v5 + 2472));
    (*(void (__fastcall **)(QT::QVariant *, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v7 + 160LL))(
      this,
      v7,
      a3,
      a4,
      a5);
  }
  else
  {
    sub_48AF60(this, a2, a3, a4, a5);
  }
  return this;
}
