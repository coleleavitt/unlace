__int64 __fastcall netnode_supprev_idx8(__int64 a1, unsigned __int8 a2, __int16 a3)
{
  __int16 v3; // cx

  LOBYTE(v3) = a3;
  HIBYTE(v3) = HIBYTE(a3) | 8;
  return sub_7B76F0(*(_QWORD *)(qword_2CCB598 + 1736), a1, a2, v3);
}
