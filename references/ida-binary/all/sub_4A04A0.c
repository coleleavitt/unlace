__int64 __fastcall sub_4A04A0(const char *a1)
{
  unsigned int v1; // ebx
  __int64 *v2; // rax
  int v3; // edx

  v2 = sub_4A0300(a1);
  LOBYTE(v1) = v2 != nullptr;
  if ( !v2 )
    return v1;
  v3 = *((_DWORD *)v2 + 502);
  if ( (v3 & 2) != 0 )
    return v1;
  if ( (v3 & 1) != 0 )
  {
    QT::QWidget::close((QT::QWidget *)v2);
    return v1;
  }
  sub_482660((__int64)(QT::QCoreApplication::self + 2), (QT::QObject *)v2, 1u);
  return v1;
}
