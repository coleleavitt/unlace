__int64 __fastcall sub_30E270(QT::QAbstractScrollArea *this, QT::QEventPoint **a2, double a3, double a4)
{
  unsigned int v4; // r12d
  __int64 result; // rax

  v4 = sub_47B6A0(QT::QCoreApplication::self, a2);
  QT::QEventPoint::position(a2[6]);
  QT::QEventPoint::position(a2[6]);
  result = sub_30DB80(2u, v4, a3, a4);
  if ( !(_DWORD)result )
    return QT::QAbstractScrollArea::mouseReleaseEvent(this, (QT::QMouseEvent *)a2);
  return result;
}
