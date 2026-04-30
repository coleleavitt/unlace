__int64 __fastcall sub_449270(QT::QAbstractItemView *this, _QWORD *a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+8h] [rbp-40h]

  v6 = QT::QAbstractItemView::model(this);
  v7 = v6 + 424;
  v8 = v6 + 432;
  v9 = sub_4462E0(v6 + 424, a3);
  if ( v9 == v8 )
  {
    if ( !a4 || (*((_BYTE *)this + 232) & 0x20) != 0 )
      return 37;
    v11 = v9;
    result = sub_4482D0(this, nullptr, a3);
    if ( (_DWORD)result )
      return result;
    v9 = sub_4462E0(v7, a3);
    if ( v11 == v9 )
      return 37;
  }
  if ( a2 )
    *a2 = v9 + 64;
  return 0;
}
