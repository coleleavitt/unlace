__int64 __fastcall sub_4F2EA0(QT::QObject *this, QT::QObject *a2, __int64 a3)
{
  unsigned int v4; // r13d
  __int64 v5; // rax
  int v6; // r9d

  if ( *(_WORD *)(a3 + 8) != 6 )
    return QT::QObject::eventFilter(this, a2, (QT::QEvent *)a3);
  v4 = *(_BYTE *)(*((_QWORD *)a2 + 1) + 48LL) & 1;
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 1) + 48LL) & 1) == 0 )
    return QT::QObject::eventFilter(this, a2, (QT::QEvent *)a3);
  v5 = sub_4F23C0((__int64)this, (__int64)a2, 0, 1);
  if ( !v5
    || *(_DWORD *)(v5 + 8) != 9
    || (*(_BYTE *)(v5 + 120) & 1) == 0
    || (unsigned int)(*(_DWORD *)(a3 + 64) - 16777220) > 1
    || (QT::QKeyEvent::modifiers((QT::QKeyEvent *)a3) & 0xDFFFFFFF) != 0
    || !sub_4F5C00(*((_QWORD *)this + 5)) )
  {
    return QT::QObject::eventFilter(this, a2, (QT::QEvent *)a3);
  }
  callui(203, (unsigned int)&dword_0 + 1, *((_QWORD *)this + 5), 1, (unsigned int)&callui, v6);
  return v4;
}
