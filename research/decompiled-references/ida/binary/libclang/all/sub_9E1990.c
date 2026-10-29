__int64 __fastcall sub_9E1990(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r12
  unsigned int v6; // ebp

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = *(_QWORD *)sub_A1A5A0(v4, 8);
  sub_A1A5E0(v4, 8);
  v6 = sub_9E16E0(a1, a2, v5, v3);
  if ( (_BYTE)v6 )
    *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v5 / v3;
  return v6;
}

