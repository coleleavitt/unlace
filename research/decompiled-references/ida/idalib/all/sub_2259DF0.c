__int64 __fastcall sub_2259DF0(__int64 a1, __int64 a2)
{
  *(_BYTE *)(a1 + 32) &= ~1u;
  *(_QWORD *)a1 = a1 + 16;
  sub_2259C30((_QWORD *)a1, *(_BYTE **)(a2 + 24), *(_QWORD *)(a2 + 24) + *(_QWORD *)(a2 + 32));
  return a1;
}
