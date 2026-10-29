_BOOL8 __fastcall sub_1035790(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BOOL8 result; // rax

  sub_102F020(a1, a2, a3, a4);
  result = (*(_BYTE *)(a3 + 47) & 0x20) != 0;
  *(_BYTE *)(a1 + 640) = result;
  return result;
}
