__int64 __fastcall sub_39A6C0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = 256;
  *(_WORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 72) = a1 + 88;
  *(_QWORD *)(a1 + 80) = 0x1000000000LL;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  return sub_14DC230(a1, a3);
}

