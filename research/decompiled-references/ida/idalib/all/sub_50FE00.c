__int64 __fastcall sub_50FE00(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rdi

  v3 = *(_QWORD **)(*(_QWORD *)a1 + 1760LL);
  if ( a2 == a3 )
    sub_50F4D0((__int64)v3, a2);
  else
    sub_50F390(v3, a2, a3);
  mark_builtin_widgets(128, 0, 1);
  return 1;
}
