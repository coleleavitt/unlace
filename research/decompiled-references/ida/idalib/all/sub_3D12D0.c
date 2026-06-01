_QWORD *__fastcall sub_3D12D0(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = ea2node(a1);
  netnode_supdel(v1, 0, 83);
  v2 = ea2node(a1);
  netnode_supdel(v2, 1, 83);
  if ( (unsigned __int8)sub_3CFF40(*(_QWORD **)(qword_2CCB598 + 1672), a1, 2048) && qword_2CCB548 )
    qword_2CCB548(a1, 1);
  return clr_abits(a1, 0x8000);
}
