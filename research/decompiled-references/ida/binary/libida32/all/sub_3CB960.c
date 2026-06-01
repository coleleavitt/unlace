__int64 __fastcall sub_3CB960(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // eax

  v1 = ea2node(a1);
  netnode_supdel(v1, 0, 83);
  v2 = ea2node((unsigned int)a1);
  netnode_supdel(v2, 1, 83);
  if ( (unsigned __int8)sub_3CA660(*(_QWORD **)(qword_2CA1698 + 1480), a1, 2048) && qword_2CA1648 )
    qword_2CA1648((unsigned int)a1, 1);
  return clr_abits((unsigned int)a1, 0x8000);
}

