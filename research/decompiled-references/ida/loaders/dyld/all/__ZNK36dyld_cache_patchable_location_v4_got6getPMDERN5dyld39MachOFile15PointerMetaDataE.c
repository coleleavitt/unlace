__int64 __fastcall dyld_cache_patchable_location_v4_got::getPMD(__int64 result, unsigned int *a2)
{
  unsigned int v2; // w8
  unsigned int v3; // w8
  unsigned int v4; // w8
  unsigned __int64 v5; // t2
  unsigned int v6; // w8
  unsigned int v7; // w8
  unsigned int v8; // w8

  if ( (*(_DWORD *)(result + 8) & 1) != 0 )
  {
    HIDWORD(v5) = *((unsigned __int16 *)a2 + 1);
    LODWORD(v5) = *(_DWORD *)(result + 8);
    v4 = v5 >> 16;
    *a2 = v4;
    v6 = v4 & 0xFF00FFFF | (((*(_DWORD *)(result + 8) >> 1) & 0x7F) << 17);
    *a2 = v6;
    v7 = v6 & 0xFEFFFFFF | ((*(_DWORD *)(result + 8) & 1) << 24);
    *a2 = v7;
    v8 = v7 & 0xF9FFFFFF | (*(_DWORD *)(result + 8) << 11) & 0x4000000;
    *a2 = v8;
    v3 = v8 & 0xF7FFFFFF | (*(_DWORD *)(result + 8) << 13) & 0x8000000;
  }
  else
  {
    v2 = *a2;
    *a2 &= 0xFFFF0000;
    v3 = v2 & 0xF0000000 | (((*(_DWORD *)(result + 8) >> 1) & 0x7F) << 17);
  }
  *a2 = v3;
  return result;
}
