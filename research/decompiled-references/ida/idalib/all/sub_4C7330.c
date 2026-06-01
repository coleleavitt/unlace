__int64 __fastcall sub_4C7330(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // rdi

  v4 = sub_4C7260(a1, a2, a3);
  if ( (_BYTE)v4 )
  {
    v5 = sub_4C6A30(a1);
    v6 = *a1;
    *(_OWORD *)(a2 + 1073) = 0;
    *(_QWORD *)(a2 + 1089) = 0;
    netnode_supval(v6, (v5 >> 2) - a3, a2 + 1073, 24, 71);
  }
  return v4;
}
