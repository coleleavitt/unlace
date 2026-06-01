__int64 __fastcall sub_459FD0(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  __int64 result; // rax

  result = QT::QTextStream::operator<<(*a2, *a3);
  if ( *(_BYTE *)(*a2 + 48LL) )
    return QT::QTextStream::operator<<(*a2, 32);
  return result;
}
