__int64 __fastcall sub_DA0920(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v2 = *(_BYTE *)(a2 + 12);
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a1 + 12) = v2;
  result = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
