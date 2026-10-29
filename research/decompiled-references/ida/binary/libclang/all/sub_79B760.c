__int64 __fastcall sub_79B760(__int64 a1, char a2)
{
  unsigned int v2; // eax
  __int64 result; // rax

  v2 = *(unsigned __int16 *)(a1 + 8);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  LOWORD(v2) = v2 & 0xE000;
  result = a2 & 0x7F | v2;
  *(_WORD *)(a1 + 8) = result;
  return result;
}

