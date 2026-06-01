__int64 __fastcall del_source_linnum(void *a1)
{
  __int64 result; // rax
  __int64 v2; // rax

  result = get_aflags(a1);
  if ( (result & 1) != 0 )
  {
    clr_abits(a1, 1);
    v2 = ea2node(a1);
    return netnode_supdel(v2, 9, 65);
  }
  return result;
}
