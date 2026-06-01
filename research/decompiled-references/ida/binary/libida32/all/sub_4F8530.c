__int64 __fastcall sub_4F8530(__int64 a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v3; // rdi

  v3 = *(_QWORD **)(*(_QWORD *)a1 + 1568LL);
  if ( a2 == a3 )
    sub_4F7D60((__int64)v3, a2);
  else
    sub_4F7C20(v3, a2, a3);
  mark_builtin_widgets(128, 0, 1);
  return 1;
}

