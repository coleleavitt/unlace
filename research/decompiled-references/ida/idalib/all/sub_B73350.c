__int64 __fastcall sub_B73350(__int64 a1, char a2)
{
  __int64 result; // rax

  result = a2 & 7;
  *(_BYTE *)(a1 + 96) = result | *(_BYTE *)(a1 + 96) & 0xF8;
  return result;
}
