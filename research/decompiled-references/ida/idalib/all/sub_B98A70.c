__int64 __fastcall sub_B98A70(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, int a7)
{
  *(_QWORD *)(a1 + 8) = a6;
  *(_DWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 24) = a7;
  *(_QWORD *)a1 = a3 & 0xFFFFFFFFFFFFFFF9LL | 4;
  *(_DWORD *)(a1 + 20) = a5;
  *(_WORD *)(a1 + 28) = 0;
  return 0;
}
