__int64 __fastcall sub_4D84D0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // r14
  __int64 v5; // rax
  unsigned __int8 *v6; // rbx
  unsigned int v7; // ebp
  void (__fastcall *v8)(QT::QDialog *); // rax

  v2 = QT::QCoreApplication::self;
  v3 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 136LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 112LL))(v2);
  v6 = (unsigned __int8 *)v4(v3, a1, v5);
  sub_4D8080((__int64)v6, a2);
  (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v6 + 424LL))(v6);
  v7 = v6[112];
  if ( !v6 )
    return v7;
  v8 = *(void (__fastcall **)(QT::QDialog *))(*(_QWORD *)v6 + 32LL);
  if ( v8 == edit_filters_dialog_t__::vfunc_4 )
  {
    edit_filters_dialog_t__::vfunc_3((QT::QDialog *)v6);
    operator delete(v6, 0x78u);
    return v7;
  }
  v8((QT::QDialog *)v6);
  return v7;
}
