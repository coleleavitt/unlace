__int64 __fastcall sub_1466A10(__int64 a1, __int64 a2)
{
  int v2; // ecx
  __int64 result; // rax

  v2 = *(_WORD *)(a2 + 18) & 1;
  result = v2 | *(_BYTE *)(a1 + 64) & 0xFC | (2 * ((*(_WORD *)(a2 + 18) >> 1) & 1u));
  *(_BYTE *)(a1 + 64) = v2 | *(_BYTE *)(a1 + 64) & 0xFC | (2 * ((*(_WORD *)(a2 + 18) & 2) != 0));
  return result;
}
