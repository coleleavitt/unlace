__int64 __fastcall base_dirtree_widget_t__::vfunc_2(QT::QMetaObject *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  void **v6; // r8
  _QWORD *v7; // rdx
  int v8; // [rsp+Ch] [rbp-1Ch]

  result = QT::QTreeView::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 5 )
      {
        v8 = result;
        sub_546AD0(a1, 0, (unsigned int)result, a4, v6);
        LODWORD(result) = v8;
      }
      return (unsigned int)(result - 6);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 5 )
      {
        v7 = *(_QWORD **)a4;
        if ( (_DWORD)result == 5 && **(_DWORD **)(a4 + 8) <= 1u )
          *v7 = &unk_8C33A0;
        else
          *v7 = 0;
      }
      return (unsigned int)(result - 6);
    }
  }
  return result;
}
