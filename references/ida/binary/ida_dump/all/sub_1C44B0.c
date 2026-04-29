void __fastcall sub_1C44B0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = a3;
  *(_OWORD *)(a1 + 32) = 0;
}
