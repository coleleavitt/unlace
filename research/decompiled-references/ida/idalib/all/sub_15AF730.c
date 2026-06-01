__int64 __fastcall sub_15AF730(__int64 a1, int a2, _QWORD *a3, _DWORD *a4)
{
  int v4; // edx
  bool v5; // al
  char v6; // dl
  char v7; // al
  char v9; // al

  if ( *(_DWORD *)(a1 + 264) )
  {
    *a3 = "friend";
    *a4 = 137;
    return 1;
  }
  else
  {
    v4 = (*(_BYTE *)a1 & 0x1F) != 0;
    if ( (*(_BYTE *)(a1 + 3) & 0x7C) != 0 )
      v4 = ((*(_BYTE *)a1 & 0x1F) != 0) | 4;
    if ( (*(_DWORD *)a1 & 0x7F000) != 0
      || *(_BYTE *)a1 >> 6
      || (v9 = *(_BYTE *)(a1 + 1), (v9 & 3) != 0)
      || (v9 & 0xC) != 0 )
    {
      v4 |= 2u;
    }
    v5 = 0;
    if ( (*(_QWORD *)a1 & 0x280000000LL) == 0 && !*(_QWORD *)(a1 + 24) && (*(_BYTE *)(a1 + 4) & 5) == 0 )
      v5 = v4 == 0;
    v6 = 8 * v5;
    v7 = *(_BYTE *)(a1 + 4);
    *(_DWORD *)(a1 + 264) = a2;
    *(_BYTE *)(a1 + 4) = v6 | v7 & 0xF7;
    return 0;
  }
}
