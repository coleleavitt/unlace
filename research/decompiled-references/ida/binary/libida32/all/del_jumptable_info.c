__int64 __fastcall del_jumptable_info(__int64 a1)
{
  unsigned int v1; // eax

  v1 = ea2node(a1);
  return netnode_supdel(v1, 4, 83);
}

