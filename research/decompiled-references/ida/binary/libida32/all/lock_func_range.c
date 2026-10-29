__int64 __fastcall lock_func_range(unsigned int *a1, char a2)
{
  bool v2; // zf
  __int64 v4; // rdi

  v2 = a2 == 0;
  v4 = *(_QWORD *)(qword_2CA1698 + 1480) + 1624LL;
  if ( v2 )
    return sub_4EC940(v4, a1);
  else
    return sub_4EE7B0(v4, a1);
}

