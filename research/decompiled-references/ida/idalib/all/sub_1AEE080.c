__int64 __fastcall sub_1AEE080(__int64 a1, __int64 a2)
{
  __int64 v2; // r12

  v2 = *(_QWORD *)(a2 + 48);
  *(_BYTE *)(a2 + 29) |= 8u;
  sub_B8C4D0(a2, *(_QWORD *)(a1 + 248));
  return sub_C09130(*(_QWORD **)(a1 + 248), 0, 0, 0, a2, 0, 0, v2, 1, 0, 0, 0);
}
