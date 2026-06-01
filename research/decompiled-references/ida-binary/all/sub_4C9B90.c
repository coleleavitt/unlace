unsigned __int64 __fastcall sub_4C9B90(QT::QApplication *this, QT::QCloseEvent *a2)
{
  _QWORD *v2; // rax
  int v4; // r12d
  QT::QApplication *v6; // rdi
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+8h] [rbp-50h] BYREF
  __int64 v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v2 = *((_QWORD **)this + 5);
  v10 = __readfsqword(0x28u);
  if ( !*v2 )
    return QT::QWidget::setParent(this, nullptr);
  if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, *(const QT::QObject **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v4 = *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) & 0x800;
    sub_4C9940(this, **((QT::QWidget ***)this + 5), a2, 0);
    if ( !v4 )
    {
      if ( *((_BYTE *)a2 + 12) )
      {
        *(_OWORD *)ptr = 0;
        v9 = 0;
        v7 = &DockArea::closeEvent;
        sub_4CF2F0(&v7);
        v6 = (QT::QApplication *)QT::QMetaObject::cast(
                                   (QT::QMetaObject *)&off_898320,
                                   *(const QT::QObject **)(*((_QWORD *)this + 1) + 16LL));
        if ( !v6 )
          v6 = this;
        sub_549330(v6, ptr, 0);
        QT::QWidget::closeEvent(this, a2);
        v7 = &DockArea::closeEvent;
        if ( ptr[0] )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
        }
      }
    }
  }
  if ( **((_QWORD **)this + 5) )
    return v10 - __readfsqword(0x28u);
  else
    return QT::QWidget::setParent(this, nullptr);
}
