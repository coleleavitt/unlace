__int64 __fastcall sub_4F5FC0(__int64 a1, double a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 56) + 40LL) + 16LL))(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 40LL));
  if ( result )
  {
    result = sub_4F2360(*(_QWORD *)(a1 + 56), result, a2);
    if ( result )
      return QT::QWidget::setFocus(result, 7);
  }
  return result;
}
