__int64 __fastcall sub_7547D0(__int64 a1)
{
  void *v2; // rdi
  __int64 result; // rax

  *(_BYTE *)(a1 + 68) = 1;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  sub_182CBA0(qword_1C7F2C0, a1 + 16);
  *(_BYTE *)(a1 + 20) &= ~1u;
  v2 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 36) &= ~1u;
  *(_DWORD *)(a1 + 16) = 1;
  *(_DWORD *)(a1 + 32) = 0;
  result = sub_182CBA0(v2, a1 + 48);
  *(_BYTE *)(a1 + 52) &= ~1u;
  *(_DWORD *)(a1 + 48) = 1;
  *(_BYTE *)(a1 + 68) = 1;
  return result;
}

