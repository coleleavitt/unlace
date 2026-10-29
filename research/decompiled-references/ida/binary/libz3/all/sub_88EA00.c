__int64 __fastcall sub_88EA00(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rbp

  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  v3 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  sub_1832AB0(v3, a2, a3, a1);
  sub_182CBA0(v3, a1 + 16);
  *(_BYTE *)(a1 + 20) &= ~1u;
  *(_DWORD *)(a1 + 16) = 1;
  return a1;
}

