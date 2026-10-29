__int64 __fastcall sub_149EEA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int16 a6, int a7)
{
  char v9; // r13
  __int64 v10; // rbx
  __int16 v11; // ax
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax

  v9 = 16 * ((unsigned __int8)a6 >> 4);
  v10 = sub_15D92D0(*(_QWORD *)a1, 80);
  v11 = sub_F963B0(a2, a4, a6 & 0xF);
  *(_QWORD *)v10 = a2;
  *(_WORD *)(v10 + 32) = v11;
  *(_BYTE *)(v10 + 34) = v9 | a6 & 0xF;
  LOBYTE(v11) = *(_BYTE *)(v10 + 35);
  *(_QWORD *)(v10 + 56) &= 0x7F800000uLL;
  *(_QWORD *)(v10 + 8) = a4;
  *(_QWORD *)(v10 + 16) = a5;
  *(_QWORD *)(v10 + 24) = a3;
  *(_QWORD *)(v10 + 40) = 0;
  *(_BYTE *)(v10 + 35) = HIBYTE(a6) & 1 | v11 & 0xFC | (2 * ((a6 & 0x200) != 0));
  *(_DWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 52) = a7;
  v12 = sub_15D7D80(v10);
  v13 = *(unsigned int *)(a1 + 20);
  *(_QWORD *)(v10 + 72) = v12;
  v14 = *(unsigned int *)(a1 + 16);
  if ( v14 + 1 > v13 )
  {
    sub_2237220(a1 + 8, a1 + 24, v14 + 1, 8);
    v14 = *(unsigned int *)(a1 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v14) = v10;
  ++*(_DWORD *)(a1 + 16);
  return v10;
}
