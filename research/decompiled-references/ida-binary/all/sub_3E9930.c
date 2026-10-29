__int64 __fastcall sub_3E9930(QT::QDialog *this, QT::QListWidget *a2, __int64 a3)
{
  int v4; // eax

  if ( *(QT::QListWidget **)(*((_QWORD *)this + 6) + 112LL) != a2
    || *(_WORD *)(a3 + 8) != 6
    || (*(_DWORD *)(a3 + 64) & 0xFFFFFFFB) != 0x1000003 )
  {
    return QT::QDialog::eventFilter(this, a2, (QT::QEvent *)a3);
  }
  v4 = QT::QListWidget::currentRow(a2);
  sub_3E97E0((__int64)this, v4);
  return 1;
}
