__int64 __fastcall sub_B8E080(__int64 a1, char a2)
{
  char v3; // si
  __int64 result; // rax

  v3 = *(_BYTE *)(a1 + 8);
  *(_QWORD *)a1 = 0;
  result = a2 & 0x7F;
  *(_OWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 8) = result | v3 & 0x80;
  *(_WORD *)(a1 + 8) &= 0xE07Fu;
  return result;
}
