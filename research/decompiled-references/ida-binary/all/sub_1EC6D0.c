__int64 __fastcall sub_1EC6D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 result; // rax
  QT::QWidget *v7; // rdi
  __int64 v8; // rdi

  result = (__int64)&qword_8CCE70;
  v7 = qword_8CCE70;
  if ( qword_8CCE70 && (result = *((_QWORD *)qword_8CCE70 + 4), *(char *)(result + 9) < 0) )
  {
    result = QT::QWidget::close(qword_8CCE70);
    if ( !*(_BYTE *)(a1 + 968) )
      return result;
  }
  else if ( !*(_BYTE *)(a1 + 968) )
  {
    return result;
  }
  if ( !*(_QWORD *)(a1 + 424) )
  {
    sub_1E69C0(a5, (__int64)v7, a2, a3, a4);
    return sub_1EC760();
  }
  result = *(unsigned int *)(a1 + 416);
  switch ( (_DWORD)result )
  {
    case 2:
      v8 = *(_QWORD *)(a1 + 896);
      break;
    case 3:
      v8 = *(_QWORD *)(a1 + 904);
      break;
    case 1:
      v8 = *(_QWORD *)(a1 + 888);
      break;
    default:
      return result;
  }
  if ( v8 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 344LL))(v8);
  return result;
}
