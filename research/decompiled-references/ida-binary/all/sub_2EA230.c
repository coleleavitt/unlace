__int64 __fastcall sub_2EA230(QT::QDialog *a1, QT::QObject *a2, QT::QEvent *a3)
{
  __int64 result; // rax
  QT::QEvent *v4; // [rsp+8h] [rbp-10h]

  if ( *((_WORD *)a3 + 4) != 6 || *((QT::QObject **)a1 + 8) != a2 && *((QT::QObject **)a1 + 9) != a2 )
    return QT::QDialog::eventFilter(a1, a2, a3);
  v4 = a3;
  result = sub_2EA1A0((QT::QCoreApplication **)a1, a3, a3);
  a3 = v4;
  if ( !(_BYTE)result )
    return QT::QDialog::eventFilter(a1, a2, a3);
  return result;
}
