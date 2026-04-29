__int64 __fastcall sub_23190(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  int v7; // ebx
  int dword; // eax
  __int64 v10; // rdi

  v6 = a2;
  v7 = a3;
  if ( (a3 & 0xFFFF0001) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 4);
    a2 = a3;
    sub_40E00(v10, a3, a3, a4, a5);
  }
  dword = get_dword(*(_QWORD *)(v6 + 4), a2, a3, a4, a5);
  return sub_42050(
           a1,
           *(_QWORD *)(v6 + 4),
           *(_QWORD *)(v6 + 12),
           dword & 0x8000FFFF | (v7 << 15) & 0x7FFF0000,
           v7 - (unsigned int)*(_QWORD *)(v6 + 12),
           4,
           0,
           0,
           0);
}
