_DWORD *__fastcall sub_1214A30(_DWORD *a1, __int64 a2)
{
  sub_A0AAD0((__int64)a1, (_QWORD *)a2);
  a1[8] = *(_DWORD *)(a2 + 32);
  a1[9] = *(_DWORD *)(a2 + 36);
  a1[10] = *(_DWORD *)(a2 + 40);
  sub_A0AAD0((__int64)(a1 + 12), (_QWORD *)(a2 + 48));
  sub_A0AAD0((__int64)(a1 + 20), (_QWORD *)(a2 + 80));
  sub_A0AAD0((__int64)(a1 + 28), (_QWORD *)(a2 + 112));
  return a1;
}
