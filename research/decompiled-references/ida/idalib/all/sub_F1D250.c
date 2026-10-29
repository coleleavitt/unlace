__int64 __fastcall sub_F1D250(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned int v4; // eax
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = a2;
  v4 = (a3 == 0 ? 1 : 3) & 0x7FFFFFFF | *(_DWORD *)a1 & 0x80000000;
  *(_DWORD *)a1 = v4;
  result = HIBYTE(v4);
  *(_BYTE *)(a1 + 3) = (a4 << 7) | result & 0x7F;
  return result;
}
