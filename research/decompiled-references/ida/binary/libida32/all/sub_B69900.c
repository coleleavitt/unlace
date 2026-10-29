bool __fastcall sub_B69900(__int64 a1)
{
  bool result; // al
  __int64 v2; // rax
  unsigned int v3; // ecx

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0 || (*(_BYTE *)(a1 + 28) & 0x7F) == 0x18 )
    return 0;
  v2 = sub_B68D70(a1);
  result = v2 && (v3 = *(_DWORD *)(v2 + 36), v3 <= 7) && ((1LL << v3) & 0xBC) != 0 && (*(_QWORD *)(a1 + 8) & 7LL) == 3;
  return result;
}

