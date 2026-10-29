__int64 __fastcall sub_B74D60(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  *(_QWORD *)(a1 + 8) = a5;
  *(_QWORD *)a1 = a3 & 0xFFFFFFFFFFFFFFF9LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = a4;
  *(_DWORD *)(a1 + 24) = a6;
  *(_WORD *)(a1 + 28) = 1;
  return 1;
}

