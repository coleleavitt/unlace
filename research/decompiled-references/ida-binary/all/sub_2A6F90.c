__int64 __fastcall sub_2A6F90(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  char v5; // bp
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  if ( a2 <= 1 )
    return sub_465E60(v3, 0);
  v4 = (unsigned __int8)byte_8BA8DC;
  v5 = byte_8BA8DC;
  result = sub_465E60(v3, (unsigned __int8)byte_8BA8DC);
  if ( v5 )
  {
    sub_2A6E30(*(QT::QWidget **)(a1 + 16), v4, v7, v8);
    return QT::QWidget::update(*(QT::QWidget **)(a1 + 16));
  }
  return result;
}
