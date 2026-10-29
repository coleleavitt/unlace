__int64 __fastcall set_selector(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a1 == a2 )
    sub_50F4D0(*(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1760LL), a1);
  else
    sub_50F390(*(_QWORD **)(**(_QWORD **)(qword_2CCB598 + 1672) + 1760LL), a1, a2);
  mark_builtin_widgets(128, 0, 1);
  return 1;
}
