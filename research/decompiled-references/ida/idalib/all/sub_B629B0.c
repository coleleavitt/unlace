__int64 __fastcall sub_B629B0(__int64 a1)
{
  char v1; // dl
  int v2; // eax
  int v3; // esi
  char v4; // al
  int v5; // r9d
  int v6; // r8d
  int v7; // edi
  int v8; // ecx

  v1 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v2 = (**(_DWORD **)(a1 + 32) >> 14) & 0x1B;
  if ( (2 * ((v1 & 2) != 0)) & 0x10 | (16 * ((v1 & 0x10) != 0)) & 0x10 )
    v2 = (**(_DWORD **)(a1 + 32) >> 14) & 0xB | 0x10;
  v3 = v2 | 8;
  if ( !((2 * ((v1 & 2) != 0)) & 8
       | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 8 : 0)) )
    v3 = v2;
  if ( (2 * ((v1 & 2) != 0)) & 4
     | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 4 : 0) )
  {
    v3 |= 4u;
  }
  if ( ((2 * ((v1 & 2) != 0)) & 2) != 0 )
    v3 |= 2u;
  v4 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v5 = (2 * ((v4 & 2) != 0)) & 0x10 | (16 * ((v4 & 0x10) != 0)) & 0x10;
  if ( (2 * ((v4 & 2) != 0)) & 0x10 | (16 * ((v4 & 0x10) != 0)) & 0x10 )
    v5 = 16;
  v6 = (2 * ((v4 & 2) != 0)) & 8 | ((v4 & 4) != 0 ? 8 : 0);
  if ( (2 * ((v4 & 2) != 0)) & 8 | ((v4 & 4) != 0 ? 8 : 0) )
    v6 = 8;
  v7 = (2 * ((v4 & 2) != 0)) & 4 | ((v4 & 4) != 0 ? 4 : 0);
  if ( (2 * ((v4 & 2) != 0)) & 4 | ((v4 & 4) != 0 ? 4 : 0) )
    v7 = 4;
  v8 = (2 * ((v4 & 2) != 0)) & 2;
  if ( ((2 * ((v4 & 2) != 0)) & 2) != 0 )
    v8 = 2;
  return v8 | v7 | v6 | v5 | v3 | v4 & 1u;
}
