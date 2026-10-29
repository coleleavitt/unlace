__int64 __fastcall sub_B63490(__int64 a1)
{
  _DWORD *v1; // rdx
  char v3; // cl
  char v4; // dl
  int v5; // eax
  int v6; // esi
  int v7; // ecx

  v1 = (_DWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) == 0 )
    return (*v1 >> 14) & 0x1B;
  v3 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v1 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v4 = (2 * ((v3 & 2) != 0)) | ((v3 & 4) != 0 ? 0xC : 0) | (16 * ((v3 & 0x10) != 0)) | (32 * ((v3 & 8) != 0)) | v3 & 1;
  v5 = (2 * ((v3 & 2) != 0)) & 0x10 | (16 * ((v3 & 0x10) != 0)) & 0x10;
  if ( (2 * ((v3 & 2) != 0)) & 0x10 | (16 * ((v3 & 0x10) != 0)) & 0x10 )
    v5 = 16;
  v6 = (2 * ((v3 & 2) != 0)) & 8 | ((v3 & 4) != 0 ? 8 : 0);
  if ( (2 * ((v3 & 2) != 0)) & 8 | ((v3 & 4) != 0 ? 8 : 0) )
    v6 = 8;
  v7 = (2 * ((v3 & 2) != 0)) & 2;
  if ( (v4 & 2) != 0 )
    v7 = 2;
  return v7 | v6 | v4 & 1 | (unsigned int)v5;
}
