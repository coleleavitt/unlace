__int64 __fastcall sub_7F550(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 28) & 0x1018) == 0x1010 && (*(_BYTE *)(a1 + 24) & 0x4F) == 2 )
  {
    v2 = 1;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFFFB0 | 9;
  }
  return v2;
}
