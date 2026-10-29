__int64 __fastcall sub_3D8440(QT::QDialog *this, QT::QObject *a2, __int64 a3)
{
  int v4; // eax
  unsigned __int64 v5; // rax
  __int64 v6; // [rsp+0h] [rbp-28h]
  __int64 v7; // [rsp+0h] [rbp-28h]
  __int64 v8; // [rsp+0h] [rbp-28h]

  if ( *(QT::QObject **)(*((_QWORD *)this + 7) + 2472LL) != a2 || *(_WORD *)(a3 + 8) != 6 )
    return QT::QDialog::eventFilter(this, a2, (QT::QEvent *)a3);
  if ( *(_DWORD *)(a3 + 64) != 16777217 )
  {
    v6 = a3;
    v4 = QT::QKeyEvent::modifiers((QT::QKeyEvent *)a3);
    a3 = v6;
    if ( (v4 & 0x2000000) != 0 && (unsigned int)(*(_DWORD *)(v6 + 64) - 16777217) <= 1 )
      goto LABEL_9;
    return QT::QDialog::eventFilter(this, a2, (QT::QEvent *)a3);
  }
  v7 = a3;
  QT::QKeyEvent::modifiers((QT::QKeyEvent *)a3);
  a3 = v7;
LABEL_9:
  *(_BYTE *)(a3 + 12) = 1;
  v8 = a3;
  v5 = QT::QElapsedTimer::elapsed((QT::QDialog *)((char *)this + 96));
  if ( *(char *)(v8 + 81) >= 0 )
    goto LABEL_12;
  if ( *((_BYTE *)this + 112) )
  {
    if ( v5 <= 0x257 )
      return 1;
    goto LABEL_12;
  }
  if ( v5 > 0xC7 )
  {
LABEL_12:
    sub_49A6E0(*(QT::QAbstractItemView **)(*((_QWORD *)this + 7) + 2472LL));
    *((_BYTE *)this + 112) = 0;
    QT::QElapsedTimer::restart((QT::QDialog *)((char *)this + 96));
  }
  return 1;
}
