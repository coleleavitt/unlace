__int64 __fastcall del_item_color(__int64 a1)
{
  unsigned int v2; // eax

  if ( (get_aflags(a1) & 0x40000) == 0 )
    return 0;
  clr_abits((unsigned int)a1, &stru_40000);
  v2 = ea2node((unsigned int)a1);
  netnode_supdel(v2, 20, 65);
  sub_396090(0x3Bu, (unsigned int)a1, 0xFFFFFFFFLL);
  if ( qword_2CA1648 )
    qword_2CA1648((unsigned int)a1, 1);
  return 1;
}

