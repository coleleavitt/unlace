__int64 __fastcall del_switch_info(__int64 a1)
{
  __int64 v1; // rax

  sub_59D760(qword_2CCB598, a1);
  v1 = ea2node(a1);
  return netnode_supdel(v1, 8, 83);
}
