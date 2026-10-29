void __fastcall sub_4CEA80(__int64 a1, __int64 a2)
{
  double v2; // xmm0_8

  v2 = (*(double (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 104LL))(*(_QWORD *)(a1 + 56), 0);
  sub_4CE9B0(*(_QWORD *)(a1 + 48), a2, *(_DWORD *)(a1 + 68), v2);
  *(_DWORD *)(a1 + 68) = -1;
}
