__int64 __fastcall ui_dialog_t::import_actions(__int64 a1, __int64 a2)
{
  __int64 (*v2)(); // rax

  v2 = *(__int64 (**)())(**(_QWORD **)(a1 + 8) + 456LL);
  if ( v2 == sub_458770 || !(unsigned __int8)v2() )
    return 0;
  QT::QWidget::addAction(*(QT::QWidget **)(a1 + 16), *(QT::QAction **)(a2 + 192));
  return 0;
}
