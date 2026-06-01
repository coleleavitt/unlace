__int64 __fastcall sub_36A5D0(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rsi

  *a2 = 7;
  v2 = a2 + 8;
  *(_QWORD *)v2 = 0;
  *(_OWORD *)(v2 + 8) = 0;
  sub_6B9E00(*(_QWORD *)(qword_2CCB598 + 1672), v2, *(_QWORD *)(a1 + 8));
  return 0;
}
