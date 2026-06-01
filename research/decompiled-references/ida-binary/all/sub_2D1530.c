void __fastcall sub_2D1530(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 72) = 0;
  *(_OWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 56) = 0;
  *(_OWORD *)(a2 + 80) = 0;
  sub_2D1400(a2, (const char *)a2);
  *(_DWORD *)(a2 + 100) = 0;
  *(_BYTE *)(a2 + 104) = 1;
}
