__int64 __fastcall sub_199FDE0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rax
  _QWORD *v8; // rdi

  v5 = a1 + 24;
  v8 = (_QWORD *)(a1 + 136);
  *(v8 - 16) = v5;
  *(v8 - 15) = 0x800000000LL;
  *(v8 - 3) = a2;
  *(v8 - 17) = 0;
  *(v8 - 4) = 0;
  *(v8 - 2) = a3;
  *((_DWORD *)v8 - 2) = a4;
  *((_OWORD *)v8 - 3) = 0;
  sub_B85890(v8, a3);
  *(_DWORD *)(a1 + 152) = a5;
  *(_QWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  *(_QWORD *)(a1 + 160) = 0x101010000LL;
  return sub_1A395A0(a1);
}
