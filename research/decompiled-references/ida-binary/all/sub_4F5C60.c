__int64 __fastcall forms_ui::dialog_t__::vfunc_5(QT::QWidget *this, QT::QEvent *a2)
{
  int v4; // eax
  __int64 v6; // rdi
  void (*v7)(); // rax
  __int64 v8; // rax
  int v9; // r14d
  __int64 *v10; // rbx
  __int64 *v11; // r13
  __int64 v12; // rax
  const QT::QObject *v13; // rsi
  QT::QAbstractButton *v14; // rax
  QT::QAbstractButton *v15; // [rsp+8h] [rbp-30h]

  v4 = *((unsigned __int16 *)a2 + 4);
  if ( v4 != 6 )
  {
    if ( v4 == 17 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 7) + 40LL);
      v7 = *(void (**)())(*(_QWORD *)v6 + 24LL);
      if ( v7 != nullsub_38 )
        ((void (__fastcall *)(__int64, __int64))v7)(v6, 3);
    }
    return QT::QWidget::event(this, a2);
  }
  if ( (unsigned int)QT::QKeyEvent::modifiers(a2) )
    return QT::QWidget::event(this, a2);
  v8 = *((_QWORD *)this + 7);
  v9 = *((_DWORD *)a2 + 16);
  v10 = *(__int64 **)(v8 + 48);
  v11 = &v10[*(_QWORD *)(v8 + 56)];
  if ( v11 == v10 )
    return QT::QWidget::event(this, a2);
  while ( 1 )
  {
    v12 = *v10;
    if ( *(_DWORD *)(*v10 + 40) == v9 && !*(_BYTE *)(v12 + 24) )
    {
      v13 = *(const QT::QObject **)(v12 + 16);
      if ( v13 )
      {
        v14 = (QT::QAbstractButton *)QT::QMetaObject::cast(
                                       (QT::QMetaObject *)&QT::QAbstractButton::staticMetaObject,
                                       v13);
        if ( v14 )
          break;
      }
    }
    if ( v11 == ++v10 )
      return QT::QWidget::event(this, a2);
  }
  v15 = v14;
  QT::QAbstractButton::animateClick(v14);
  QT::QWidget::setFocus(v15, 5);
  return 1;
}
