__int64 __fastcall sub_8E96B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 result; // rax

  *(_QWORD *)a1 = &qword_49F6D28[2];
  *(_QWORD *)(a1 + 64) = a1 + 80;
  *(_QWORD *)(a1 + 376) = a3;
  *(_QWORD *)(a1 + 72) = 0x200000000LL;
  *(_QWORD *)(a1 + 368) = a2;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 60) = 0;
  sub_A1AC70(a1 + 384, a4, a3, a5, a2, a1);
  *(_QWORD *)(a1 + 672) = a2;
  *(_BYTE *)(a1 + 736) = 0;
  *(_DWORD *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 752) = 0;
  *(_WORD *)(a1 + 760) = 0;
  *(_DWORD *)(a1 + 784) = 0;
  *(_QWORD *)(a1 + 768) = 0;
  *(_QWORD *)(a1 + 776) = 0;
  *(_QWORD *)(a1 + 792) = 0;
  *(_QWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 808) = 1;
  *(_DWORD *)(a1 + 816) = 0;
  v5 = operator new(0xD8u);
  result = sub_A172B0(v5, a1 + 384, 0, 0, 0, 0);
  *(_QWORD *)(a1 + 584) = v5;
  return result;
}

