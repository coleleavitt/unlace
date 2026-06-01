__int64 __fastcall sub_1864C0(__int64 a1, char a2)
{
  QT::QObject *v4; // r12
  char v5; // al
  QT::QKeySequenceEdit *v6; // rdi
  __int64 v7[4]; // [rsp+0h] [rbp-48h] BYREF
  char v8; // [rsp+20h] [rbp-28h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 56) & 8) == 0 )
    return v9 - __readfsqword(0x28u);
  if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 136) + 104LL))(*(_QWORD *)(a1 + 136), 1);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 104LL))(*(_QWORD *)(a1 + 144), 0);
    return QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 152), *(_QWORD *)(a1 + 96) != 0);
  }
  else
  {
    QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 152), 0);
    v4 = *(QT::QObject **)(a1 + 144);
    QT::QObject::QObject((QT::QObject *)v7, nullptr);
    v7[2] = 0;
    sub_478D00((char *)v7, (__int64)&object_lifecycle_monitor_t___vtable);
    v5 = QT::QObject::blockSignals(v4, 1);
    v6 = *(QT::QKeySequenceEdit **)(a1 + 144);
    v8 = v5;
    QT::QKeySequenceEdit::clear(v6);
    sub_51A3D0((QT::QObject *)v7);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 104LL))(*(_QWORD *)(a1 + 136), 0);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 104LL))(*(_QWORD *)(a1 + 144), 1);
    return QT::QWidget::setFocus(*(_QWORD *)(a1 + 144), 7);
  }
}
