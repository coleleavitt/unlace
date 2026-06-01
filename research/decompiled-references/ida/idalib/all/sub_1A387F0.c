unsigned __int64 __fastcall sub_1A387F0(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // dl
  __int64 v3; // rax
  __int64 v4; // rcx
  char v5; // dl
  unsigned __int64 v6; // rcx

  v1 = 8LL * *(unsigned __int16 *)(a1 + 22) + 48;
  v2 = BYTE3(*(_QWORD *)(a1 + 16));
  v3 = (v2 & 0x40) != 0;
  v4 = a1 + v1 + ((v2 >> 5) & 4) + 7;
  v5 = *(_BYTE *)(a1 + 19);
  v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v5 & 0x40) != 0 )
    v3 += (*(_BYTE *)(((a1 + v1 + ((v5 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
  return v6 + 8 * v3;
}
