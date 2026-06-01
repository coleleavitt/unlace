__int64 __fastcall sub_1107740(__int64 a1)
{
  *(_BYTE *)(a1 + 48) &= ~1u;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x100000000LL;
  return a1;
}

