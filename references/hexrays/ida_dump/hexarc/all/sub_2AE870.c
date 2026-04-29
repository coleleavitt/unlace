__int64 __fastcall sub_2AE870(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  return sub_11ECE0(a1, a2);
}
