__int64 __fastcall sub_B648F0(__int64 a1, int a2)
{
  char v2; // r9
  bool v3; // r8
  __int64 v4; // r11
  _DWORD **v5; // rcx
  _DWORD **i; // r10
  _DWORD *v7; // rax
  int v8; // esi
  char v10; // al
  char v11; // r11
  char v12; // dl
  int v13; // r11d
  int v14; // r9d
  int v15; // ecx
  int v16; // eax

  v2 = *(_BYTE *)(a1 + 19) & 0x40;
  v3 = v2 != 0;
  v4 = *(_WORD *)(a1 + 16) & 0x7FFF;
  v5 = (_DWORD **)(a1 + 8LL * v3 + 32);
  for ( i = &v5[v4]; i != v5; a2 |= (*v7 >> 14) & 0x10 )
    v7 = *v5++;
  if ( v2 )
  {
    v8 = (**(_DWORD **)(a1 + 32) >> 14) & 0x10 | a2;
  }
  else
  {
    v10 = *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + v4 * 8 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
    v11 = 16 * ((v10 & 0x10) != 0);
    if ( (v10 & 2) != 0 )
      v2 = 2;
    v12 = v2 | ((v10 & 4) != 0 ? 0xC : 0) | v11 | (32 * ((v10 & 8) != 0)) | v10 & 1;
    v13 = v2 & 0x10 | v11 & 0x10;
    if ( (v12 & 0x10) != 0 )
      v13 = 16;
    v14 = v12 & 8;
    if ( (v12 & 8) != 0 )
      v14 = 8;
    v15 = v12 & 4;
    if ( (v12 & 4) != 0 )
      v15 = 4;
    v16 = v12 & 2;
    if ( (v12 & 2) != 0 )
      v16 = 2;
    v8 = v16 | v15 | v14 | v13 | v12 & 1 | a2;
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0x3FFF8000 )
    return v8 | 0xEu;
  else
    return v8
         | (**(_DWORD **)(a1 + 8LL * (((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFF) + (unsigned int)v3) + 32) >> 14) & 0x1Eu;
}
