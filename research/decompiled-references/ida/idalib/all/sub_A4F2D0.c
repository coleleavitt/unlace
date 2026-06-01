void __fastcall sub_A4F2D0(__int64 a1, __int64 a2, int a3, int a4)
{
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  *(_QWORD *)a1 = a2 & 0xFFFFFFFFFFFFFFFCLL | 1;
}
