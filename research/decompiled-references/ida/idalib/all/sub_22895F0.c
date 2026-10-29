__int64 __fastcall sub_22895F0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a2;
  return a1;
}
