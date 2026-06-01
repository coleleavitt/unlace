__int64 __fastcall sub_16B5B40(__int64 a1, int a2)
{
  return sub_C07A10(
           **(_QWORD **)(a1 + 16),
           *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + a2 - *(_DWORD *)(a1 + 48),
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL),
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL) + 17448LL),
           nullptr,
           nullptr);
}
