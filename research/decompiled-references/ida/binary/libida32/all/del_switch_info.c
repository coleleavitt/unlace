__int64 __fastcall del_switch_info(unsigned int a1)
{
  unsigned int v1; // eax

  sub_583850(qword_2CA1698, a1);
  v1 = ea2node(a1);
  return netnode_supdel(v1, 8, 83);
}

