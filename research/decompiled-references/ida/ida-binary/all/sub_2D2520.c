unsigned __int64 __fastcall sub_2D2520(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 result; // rax
  QT::QWidget *v4; // rdi

  if ( *(_DWORD *)(a2 + 64) != 0x1000000 )
    return sub_1F7150(a1, a2, a3);
  v4 = qword_8CCE70;
  *(_BYTE *)(a2 + 12) = 1;
  if ( v4 )
  {
    result = *((_QWORD *)v4 + 4);
    if ( *(char *)(result + 9) < 0 )
      return QT::QWidget::close(v4);
  }
  return result;
}
