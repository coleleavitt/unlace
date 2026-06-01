__int64 __fastcall IDAMainWindow__::vfunc_6(QT::QObject *a1, QT::QObject *a2, QT::QEvent *a3)
{
  __int64 v3; // rax

  v3 = *((_QWORD *)a1 + 44);
  if ( *(QT::QObject **)(v3 + 24) != a2 )
    return QT::QObject::eventFilter(a1, a2, a3);
  if ( *((_WORD *)a3 + 4) == 14 && *(char *)(*((_QWORD *)a2 + 4) + 9LL) < 0 )
    *(_BYTE *)(v3 + 32) = 1;
  return 0;
}
