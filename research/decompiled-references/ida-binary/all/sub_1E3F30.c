unsigned __int64 __fastcall sub_1E3F30(QT::QAbstractScrollArea *this, unsigned int a2)
{
  int v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  char v7; // al

  v3 = *((unsigned __int8 *)this + 1024);
  v4 = 1 << a2;
  v5 = v3;
  LOBYTE(v3) = _bittest(&v3, a2);
  v6 = v5 & ~(1 << a2);
  v7 = v4 | v5;
  if ( (_BYTE)v3 )
    v7 = v6;
  *((_BYTE *)this + 1024) = v7;
  if ( !v7 )
    sub_482660(QT::QCoreApplication::self + 2, this, 1);
  sub_236750();
  return sub_1E34D0(this, 0);
}
