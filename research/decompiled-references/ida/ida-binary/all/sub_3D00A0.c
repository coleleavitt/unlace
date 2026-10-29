__int64 __fastcall sub_3D00A0(QT::QCompleter *this)
{
  int v1; // ebp
  int v2; // r12d
  __int64 v3; // rax
  QT::QAbstractScrollArea *v5; // rax
  __int64 v6; // rax

  v1 = 2;
  v2 = QT::QCompleter::completionCount(this);
  if ( v2 > (int)QT::QCompleter::maxVisibleItems(this) )
  {
    v5 = (QT::QAbstractScrollArea *)QT::QCompleter::popup(this);
    v6 = QT::QAbstractScrollArea::verticalScrollBar(v5);
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 112LL))(v6) + 3;
  }
  v3 = QT::QCompleter::popup(this);
  return v1 + (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 512LL))(v3, 0);
}
