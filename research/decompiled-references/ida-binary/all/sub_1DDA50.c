__int64 __fastcall sub_1DDA50(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 176LL))(*(_QWORD *)(a1 + 80), 0);
    if ( !result )
      break;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  if ( a2 )
    return QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 80), a2, 0, 0);
  return result;
}
