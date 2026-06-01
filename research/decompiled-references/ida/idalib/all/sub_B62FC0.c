__int64 __fastcall sub_B62FC0(__int64 a1)
{
  int v1; // ecx
  char v2; // al
  int v3; // r9d
  int v4; // r8d
  int v5; // edi
  int v6; // esi

  v1 = (**(_DWORD **)(a1 + 16) >> 14) & 0x1B;
  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v3 = (2 * ((v2 & 2) != 0)) & 0x10 | (16 * ((v2 & 0x10) != 0)) & 0x10;
  if ( (2 * ((v2 & 2) != 0)) & 0x10 | (16 * ((v2 & 0x10) != 0)) & 0x10 )
    v3 = 16;
  v4 = (2 * ((v2 & 2) != 0)) & 8 | ((v2 & 4) != 0 ? 8 : 0);
  if ( (2 * ((v2 & 2) != 0)) & 8 | ((v2 & 4) != 0 ? 8 : 0) )
    v4 = 8;
  v5 = (2 * ((v2 & 2) != 0)) & 4 | ((v2 & 4) != 0 ? 4 : 0);
  if ( (2 * ((v2 & 2) != 0)) & 4 | ((v2 & 4) != 0 ? 4 : 0) )
    v5 = 4;
  v6 = (2 * ((v2 & 2) != 0)) & 2;
  if ( ((2 * ((v2 & 2) != 0)) & 2) != 0 )
    v6 = 2;
  return v6 | v5 | v4 | v3 | v1 | v2 & 1u;
}
