unsigned __int64 __fastcall sub_1804010(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
  {
    if ( v1 <= 0xC || v1 == 13 && *(char *)(a1 + 7) < 0 && (*(_DWORD *)(a1 + 4) & 0x7FFFFFFF) == 0 )
      return 0x800000010000000DLL;
  }
  else if ( (*(_DWORD *)(a1 + 4) & 0x7FFFFFFF) != 0
         || (*(_DWORD *)(a1 + 8) & 0x7FFFFFFF) != 0
         || (*(_DWORD *)(a1 + 12) & 0x7FFFFFFF) != 0 )
  {
    return 0x800000010000000DLL;
  }
  return *(_QWORD *)a1;
}
