__int64 __fastcall sub_210EC30(__int64 a1, char a2, char a3)
{
  char v4; // dl
  __int64 result; // rax

  v4 = *(_BYTE *)(a1 + 29);
  *(_QWORD *)(a1 + 16) = 0;
  result = a3 & 1;
  *(_OWORD *)a1 = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 28) = a2;
  *(_BYTE *)(a1 + 29) = result | v4 & 0xF0;
  return result;
}
