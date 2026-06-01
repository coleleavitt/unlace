__int64 __fastcall sub_5104D0(QT::QDialog *a1)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)a1 + 7);
  if ( v1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 112LL))(*((_QWORD *)a1 + 7));
  else
    return QT::QDialog::sizeHint(a1);
}
