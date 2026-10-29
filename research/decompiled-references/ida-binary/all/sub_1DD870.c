__int64 __fastcall sub_1DD870(__int64 a1)
{
  __int64 result; // rax
  int v2; // eax

  if ( !*(_BYTE *)(a1 + 44) )
  {
    result = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(result + 12) & 1) == 0 )
      return result;
LABEL_5:
    *(_DWORD *)(a1 + 40) = 5;
    return sub_462450(a1);
  }
  v2 = QT::QDockWidget::features((QT::QDockWidget *)a1);
  QT::QDockWidget::setFeatures(a1, v2 | 8u);
  result = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(result + 12) & 1) != 0 )
    goto LABEL_5;
  return result;
}
