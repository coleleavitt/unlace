unsigned __int64 __fastcall sub_1837620(__int64 a1, int a2, int a3)
{
  __int64 v4; // r14
  int v5; // r13d
  int v6; // eax

  v4 = *(_QWORD *)(a1 + 80);
  v5 = *(unsigned __int8 *)(a1 + 72);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  return sub_19CB370(a2, v6, *(_QWORD *)(a1 + 16), a3, v5, (int)a1 + 24, 0, 0, v4, 0, 0, 0, 0) & 0xFFFFFFFFFFFFFFFELL;
}
