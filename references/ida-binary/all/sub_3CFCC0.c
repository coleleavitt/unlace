__int64 __fastcall sub_3CFCC0(QT::QWidget *this, _QWORD *a2)
{
  char tinfo_property; // al
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // ecx

  tinfo_property = get_tinfo_property(*a2, 2);
  v3 = *((_DWORD *)this + 34);
  v4 = v3 | 1;
  v5 = v3 & 0xFFFFFFFE;
  if ( (tinfo_property & 0x2F) != 0xD )
    v4 = v5;
  *((_DWORD *)this + 34) = v4;
  return QT::QWidget::update(this);
}
