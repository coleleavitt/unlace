unsigned __int64 __fastcall sub_FEA9E0(__int64 a1)
{
  int v2; // edi
  unsigned int v3; // esi
  int v4; // ecx
  unsigned __int64 v5; // rax

  if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 56) != 100 )
      return (unsigned int)(*(_DWORD *)(a1 + 56) / 100);
    v4 = 0;
    v3 = 1;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 48);
    v3 = v2 / 100;
    v4 = (v2 % 100 / 10) & 0x7FFFFFFF;
  }
  v5 = ((unsigned __int64)(v4 & 0x7FFFFFFF) << 32) | v3;
  return v5 & 0xFFFFFFFFFFFFFFLL | ((unsigned __int64)(HIBYTE(v5) | 0x80u) << 56);
}
