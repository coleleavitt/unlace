unsigned __int64 __fastcall sub_1BCD470(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rax
  _QWORD *v10; // rdi

  v6 = a1 + 24;
  v10 = (_QWORD *)(a1 + 136);
  *(v10 - 16) = v6;
  *(v10 - 15) = 0x800000000LL;
  *(v10 - 3) = a2;
  *(v10 - 17) = 0;
  *(v10 - 4) = 0;
  *(v10 - 2) = a3;
  *((_DWORD *)v10 - 2) = a4;
  *((_OWORD *)v10 - 3) = 0;
  sub_B85890(v10, a3);
  *(_DWORD *)(a1 + 152) = a5;
  *(_BYTE *)(a1 + 160) = a6 != 0;
  *(_BYTE *)(a1 + 161) = a6 == 2;
  *(_BYTE *)(a1 + 162) = 1;
  *(_BYTE *)(a1 + 163) = a6 == 0;
  *(_BYTE *)(a1 + 164) = a6 == 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  *(_BYTE *)(a1 + 165) = 0;
  *(_WORD *)(a1 + 166) = 0;
  return sub_1A395A0(a1);
}
