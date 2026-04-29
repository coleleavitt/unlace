__int64 __fastcall sub_2A250(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // r15d
  __int16 v4; // ax
  unsigned __int64 v5; // r13
  int v6; // r12d
  __int64 v7; // r12

  v2 = 4;
  v3 = -1;
  v4 = *(_WORD *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 16);
  if ( v4 == 143 )
  {
    if ( *(_BYTE *)(a2 + 41) != 1 )
      return -1;
    v3 = *(unsigned __int16 *)(a2 + 46);
    if ( !(unsigned int)decode_insn() )
      return -1;
    v4 = *(_WORD *)(a2 + 24);
    v2 = 8;
  }
  if ( v4 == 92 && (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x4000000000400LL && *(_QWORD *)(a2 + 96) == v2 )
  {
    v6 = *(unsigned __int16 *)(a2 + 46);
    if ( (v3 == -1 || v6 == v3)
      && (unsigned int)decode_insn()
      && *(_WORD *)(a2 + 24) == 7
      && *(_BYTE *)(a2 + 41) == 1
      && *(_WORD *)(a2 + 46) == 4
      && *(_BYTE *)(a2 + 81) == 5
      && (unsigned int)decode_insn()
      && *(_WORD *)(a2 + 24) == 143
      && *(_BYTE *)(a2 + 41) == 4
      && v6 == *(unsigned __int16 *)(a2 + 46)
      && *(_QWORD *)(a2 + 56) == -4 )
    {
      v7 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
      *(_DWORD *)a1 |= 8u;
      sub_22FE0(a1, a2);
      sub_29980((__int64)a1, v5, v7 - v5, 1);
      netnode_supdel();
      return v7;
    }
  }
  return -1;
}
