__int64 __fastcall sub_4EFFE0(__int64 a1, const QT::QFont *a2)
{
  bool v2; // zf
  QT::QFont *v4; // rdi
  __int64 result; // rax

  v2 = *(_BYTE *)(a1 + 32) == 0;
  v4 = (QT::QFont *)(a1 + 16);
  if ( !v2 )
    return QT::QFont::operator=(v4, a2);
  result = QT::QFont::QFont(v4, a2);
  *(_BYTE *)(a1 + 32) = 1;
  return result;
}
