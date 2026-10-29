__int64 __fastcall new_til(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rbx

  if ( !a1 )
    return 0;
  v2 = *(_QWORD **)(**(_QWORD **)(qword_2CA1698 + 1480) + 1512LL);
  v3 = sub_62AF20(a1, a2);
  sub_62F430(v2, v3);
  return v3;
}

