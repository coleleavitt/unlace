__int64 __fastcall sub_622370(__int64 a1, void *a2, __int64 a3)
{
  __int64 result; // rax
  void *v4; // rbp

  result = a1;
  if ( a1 )
  {
    result = netnode_altval(a3, a1, 65);
    if ( result )
    {
      v4 = (void *)node2ea(result);
      show_auto(v4, 0);
      if ( (*(_BYTE *)(*(_QWORD *)(qword_2CCB598 + 1672) + 2824LL) & 4) != 0 )
        return set_name((int)v4, a2);
      else
        return append_cmt(v4, (const char *)a2, 1u);
    }
  }
  return result;
}
