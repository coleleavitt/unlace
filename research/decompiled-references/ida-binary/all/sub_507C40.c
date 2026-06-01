__int64 __fastcall ida_form_widget_t__::vfunc_6(
        QT::QObject *this,
        QT::QObject *a2,
        QT::QEvent *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rax
  __int64 (__fastcall *v13)(_QWORD, __int64); // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  QT::QEvent *v16; // [rsp+8h] [rbp-10h]

  if ( *((_WORD *)a3 + 4) != 6 )
    return QT::QObject::eventFilter(this, a2, a3);
  v16 = a3;
  v12 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QLineEdit::staticMetaObject, a2);
  a3 = v16;
  if ( !v12 || (unsigned int)(*((_DWORD *)v16 + 16) - 16777220) > 1 )
    return QT::QObject::eventFilter(this, a2, a3);
  v13 = (__int64 (__fastcall *)(_QWORD, __int64))QT::QDialogButtonBox::button(*((_QWORD *)this + 51), 0x4000);
  sub_501FD0((__int64 *)this, v13, a4, a5, a6, a7, v14, v15, a10, a11);
  return 1;
}
