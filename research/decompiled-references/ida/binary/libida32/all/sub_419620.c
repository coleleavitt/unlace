__int64 __fastcall sub_419620(__int64 a1, _QWORD *a2)
{
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  return sub_6141A0(*a2, 26, a1 + 8, 8);
}

