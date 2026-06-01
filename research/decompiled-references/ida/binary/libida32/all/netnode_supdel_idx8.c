__int64 __fastcall netnode_supdel_idx8(unsigned int a1, unsigned __int8 a2, __int16 a3)
{
  __int16 v3; // cx

  LOBYTE(v3) = a3;
  HIBYTE(v3) = HIBYTE(a3) | 8;
  return sub_792400(*(_QWORD *)(qword_2CA1698 + 1544), a1, a2, v3);
}

