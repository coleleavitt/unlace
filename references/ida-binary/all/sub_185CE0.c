__int64 __fastcall sub_185CE0(__int64 a1)
{
  __int64 result; // rax

  sub_3D5AE0();
  result = *(_QWORD *)(a1 + 64);
  *(_BYTE *)(result + 2) = 0;
  if ( (*(_BYTE *)(a1 + 56) & 8) != 0 )
    return QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 200), 0);
  return result;
}
