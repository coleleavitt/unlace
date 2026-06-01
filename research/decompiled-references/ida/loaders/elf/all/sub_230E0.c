__int64 __fastcall sub_230E0(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned int v6; // ebp
  int dword; // eax
  __int64 v10; // rdi

  v5 = a2;
  v6 = a3;
  if ( (a3 & 0xFFFC000) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 4);
    a2 = a3;
    sub_40E00(v10, a3, a3, a4, a5);
  }
  dword = get_dword(*(_QWORD *)(v5 + 4), a2, a3, a4, a5);
  return sub_42050(
           a1,
           *(_QWORD *)(v5 + 4),
           *(_QWORD *)(v5 + 12),
           (v6 >> 28 << 12) | (v6 << 12) & 0x3C00000 | (v6 >> 6 << 28) | (v6 << 16) & 0x3F0000 | dword & 0xC000FFF,
           v6 - (unsigned int)*(_QWORD *)(v5 + 12),
           4,
           0,
           0,
           0);
}

