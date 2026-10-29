__int64 __fastcall sub_2289790(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 40) = a4;
  sub_2289610(a1);
  return a1;
}
