__int64 __fastcall sub_2FC600(__int64 a1, __int64 a2, int *a3)
{
  __int64 v5; // r14
  void *v6; // rdi
  void *v7; // rdi

  v5 = a1 + 32;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  sub_27B950((__int64)qword_1C7F2C0, a1, a3);
  *(_BYTE *)(a1 + 36) &= 0xFCu;
  v6 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 52) &= 0xFCu;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  sub_27B950((__int64)v6, v5, a3 + 8);
  *(_BYTE *)(a1 + 68) &= 0xFCu;
  v7 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 84) &= 0xFCu;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  sub_27B950((__int64)v7, a1 + 64, a3 + 16);
  if ( *(_BYTE *)(a2 + 32) )
  {
    sub_1831620(qword_1C7F2C0, a1);
    sub_1831620(qword_1C7F2C0, v5);
    sub_1831620(qword_1C7F2C0, a1 + 64);
  }
  sub_2FC4A0((__int64)qword_1C7F2C0, v5, a2, v5);
  return a1;
}

