__int64 __fastcall del_item_color(void *a1)
{
  __int64 v2; // rax

  if ( (get_aflags(a1) & 0x40000) == 0 )
    return 0;
  clr_abits(a1, 0x40000);
  v2 = ea2node(a1);
  netnode_supdel(v2, 20, 65);
  sub_39ADA0(0x3Bu, a1, 0xFFFFFFFFLL);
  if ( qword_2CCB548 )
    qword_2CCB548(a1, 1);
  return 1;
}
