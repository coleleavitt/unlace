__int64 __fastcall del_source_linnum(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // eax

  result = get_aflags(a1);
  if ( (result & 1) != 0 )
  {
    clr_abits((unsigned int)a1, 1);
    v2 = ea2node((unsigned int)a1);
    return netnode_supdel(v2, 9, 65);
  }
  return result;
}

