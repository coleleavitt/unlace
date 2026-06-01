__int64 __fastcall sub_4E1500(__int64 a1, QT::QFont *a2, int a3)
{
  char v3; // bl
  __int64 result; // rax

  v3 = a3;
  if ( (a3 & 0x7FFFFFFF) != 0 )
  {
    if ( (a3 & 1) != 0 )
      QT::QFont::setWeight(a2, 700);
    if ( (v3 & 2) != 0 || (*(_BYTE *)(a1 + 1681) & 0x10) != 0 )
      QT::QFont::setStyle(a2, 1);
    if ( (v3 & 4) != 0 )
      QT::QFont::setUnderline(a2, 1);
  }
  else
  {
    result = 0;
    if ( (*(_BYTE *)(a1 + 1681) & 0x10) == 0 )
      return result;
    QT::QFont::setStyle(a2, 1);
  }
  if ( (v3 & 8) != 0 )
    QT::QFont::setStrikeOut(a2, 1);
  return 1;
}
