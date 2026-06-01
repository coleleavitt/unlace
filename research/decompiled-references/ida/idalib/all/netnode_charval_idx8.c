__int64 __fastcall netnode_charval_idx8(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned int v3; // ecx

  v3 = a3;
  BYTE1(v3) = BYTE1(a3) | 0x18;
  return sub_7B4330(*(_QWORD *)(qword_2CCB598 + 1736), a1, a2, v3);
}
