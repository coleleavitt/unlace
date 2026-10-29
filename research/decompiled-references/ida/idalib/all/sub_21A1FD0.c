__int64 __fastcall sub_21A1FD0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 16) &= ~1u;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a2;
  return a1;
}
