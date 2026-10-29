__int64 __fastcall lock_func_range(unsigned __int64 *a1, char a2)
{
  bool v2; // zf
  __int64 v4; // rdi

  v2 = a2 == 0;
  v4 = *(_QWORD *)(qword_2CCB598 + 1672) + 1704LL;
  if ( v2 )
    return sub_503E30(v4, a1);
  else
    return sub_505D00(v4, a1);
}
