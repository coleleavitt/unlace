__int64 __fastcall set_selector(unsigned int a1, unsigned int a2)
{
  if ( a1 == a2 )
    sub_4F7D60(*(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1568LL), a1);
  else
    sub_4F7C20(*(_QWORD **)(**(_QWORD **)(qword_2CA1698 + 1480) + 1568LL), a1, a2);
  mark_builtin_widgets(128, 0, 1);
  return 1;
}

