__int64 __fastcall sub_13D2F20(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax

  a1[160] = *(_WORD *)(a2 + 18);
  a1[160] &= 1u;
  a1[162] = (*(_WORD *)(a2 + 18) & 2) != 0;
  result = (*(_WORD *)(a2 + 18) >> 4) & 1;
  a1[163] = (*(_WORD *)(a2 + 18) & 0x10) != 0;
  return result;
}
