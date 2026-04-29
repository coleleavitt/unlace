void __fastcall sub_330C90(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
}
