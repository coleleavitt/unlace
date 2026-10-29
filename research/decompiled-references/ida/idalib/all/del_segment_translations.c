__int64 __fastcall del_segment_translations(__int64 a1)
{
  __int64 v1; // rax

  v1 = ea2node(a1);
  return netnode_supdel(v1, 17, 83);
}
