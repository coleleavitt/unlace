__int64 __fastcall sub_38EEE0(__int64 a1, const char *a2)
{
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  sub_2D1510(a1, a2);
  sub_38C1C0((__int64)a2, a1, 0.0);
  return a1;
}
