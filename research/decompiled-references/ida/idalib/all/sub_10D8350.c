__int64 __fastcall sub_10D8350(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  return a1;
}
