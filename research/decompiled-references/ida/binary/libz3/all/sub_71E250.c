__int64 __fastcall sub_71E250(__int64 a1)
{
  __int64 v2; // rsi
  void *v3; // rdi

  *(_BYTE *)(a1 + 20) &= 0xFCu;
  v2 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  v3 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  sub_182CBA0(v3, v2);
  *(_BYTE *)(a1 + 20) &= ~1u;
  *(_DWORD *)(a1 + 16) = 1;
  return a1;
}

