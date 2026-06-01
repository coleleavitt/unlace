char __fastcall sub_B4F880(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  char result; // al

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x2B )
  {
    v1 = *(_DWORD *)(a1 + 96);
    if ( (BYTE1(v1) & 6) == 2 || (BYTE1(v1) & 6) == 4 )
      return 0;
  }
  v2 = *(_QWORD *)(a1 + 88);
  v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v2 || (v2 & 4) == 0 || !v3 )
    return v3 != 0;
  result = 1;
  if ( (*(_BYTE *)(v3 + 8) & 1) == 0 )
    return *(_QWORD *)(v3 + 8) != 0;
  return result;
}

