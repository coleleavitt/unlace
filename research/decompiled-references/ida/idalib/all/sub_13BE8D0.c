bool __fastcall sub_13BE8D0(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  bool v4; // zf
  unsigned __int32 v5; // edx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16) - v2;
  if ( v3 <= 0x18 )
    return 0;
  if ( *(_DWORD *)v2 == 1751998832 )
  {
    if ( *(_WORD *)(v2 + 4) != 1 )
      return 0;
    v4 = *(_WORD *)(v2 + 6) == 0;
    *a2 = 0;
    if ( !v4 )
      return 0;
    v5 = *(_DWORD *)(v2 + 16);
  }
  else
  {
    if ( *(_DWORD *)v2 != 1885433192 )
      return 0;
    if ( *(_WORD *)(v2 + 4) != 256 )
      return 0;
    v4 = *(_WORD *)(v2 + 6) == 0;
    *a2 = 1;
    if ( !v4 )
      return 0;
    v5 = _byteswap_ulong(*(_DWORD *)(v2 + 16));
  }
  if ( v5 && (v5 & (v5 - 1)) == 0 )
    return 12 * (unsigned __int64)v5 + 24 <= v3;
  return 0;
}
