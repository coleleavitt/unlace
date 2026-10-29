__int64 __fastcall sub_4591B0(__int64 a1, unsigned int a2)
{
  unsigned int v3; // eax
  int v4; // [rsp+4h] [rbp-24h] BYREF
  int v5[2]; // [rsp+8h] [rbp-20h]

  *(_QWORD *)v5 = __readfsqword(0x28u);
  if ( sub_443A40() )
    return *(_QWORD *)v5 - __readfsqword(0x28u);
  if ( (sub_458D90(*(_QWORD *)(a1 + 32), (unsigned int *)&v4, a2, *(_DWORD *)(a1 + 12), 0) & 0x600) != 0 )
    sub_457D00(*(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), a2, 4);
  v3 = ea2node(a2);
  netnode_supdel(v3, 15, 65);
  set_name(a2, (void *)&byte_22CD811);
  set_name(a2, (void *)&byte_22CD811);
  return sub_3CB960(a2);
}

