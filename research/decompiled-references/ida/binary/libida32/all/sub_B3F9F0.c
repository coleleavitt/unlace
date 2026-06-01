__int64 __fastcall sub_B3F9F0(__int64 a1)
{
  char v1; // al
  char v2; // dl
  int v3; // eax
  int v4; // r8d
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // rdx
  int v9; // eax

  v1 = *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 40) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v2 = (2 * ((v1 & 2) != 0)) | ((v1 & 4) != 0 ? 0xC : 0) | (16 * ((v1 & 0x10) != 0)) | (32 * ((v1 & 8) != 0)) | v1 & 1;
  v3 = (2 * ((v1 & 2) != 0)) & 0x10 | (16 * ((v1 & 0x10) != 0)) & 0x10;
  if ( (v2 & 0x10) != 0 )
    v3 = 16;
  v4 = v2 & 8;
  if ( (v2 & 8) != 0 )
    v4 = 8;
  v5 = v2 & 4;
  if ( (v2 & 4) != 0 )
    v5 = 4;
  v6 = v2 & 2;
  if ( (v2 & 2) != 0 )
    v6 = 2;
  v7 = v2 & 1 | v3;
  v8 = *(_DWORD **)(a1 + 24);
  v9 = v6 | v5 | v4 | v7;
  if ( v8 )
    v9 |= (*v8 >> 14) & 0x1F;
  return v9 & 0x1B;
}

