__int64 __fastcall sub_30E2F0(QT::QAbstractScrollArea *this, QT::QKeyEvent *a2)
{
  unsigned int v2; // eax
  __int64 result; // rax

  v2 = sub_47B6A0(QT::QCoreApplication::self, a2);
  result = sub_30DB80(5u, *((unsigned int *)a2 + 16), v2);
  if ( !(_DWORD)result )
    return QT::QAbstractScrollArea::keyPressEvent(this, a2);
  return result;
}
