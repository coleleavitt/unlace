__int64 __fastcall sub_F3A0B0(__int64 a1, __int64 a2)
{
  int v2; // edx
  char v3; // al
  char v4; // cl
  char v5; // al
  char v6; // al
  char v7; // r9
  char v8; // r8
  char v9; // dl
  int v10; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)a2 >> 14;
  v3 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  *(_QWORD *)a1 = a1;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0;
  v4 = v3 & 8;
  v5 = v3 & 8 | 4;
  *(_QWORD *)(a1 + 40) = 0;
  if ( (v2 & 2) != 0 )
    v4 = v5;
  v6 = v2 & 2 | (4 * ((v2 & 4) != 0)) | (8 * ((v2 & 8) != 0)) | (16 * ((v2 & 0x10) != 0)) | v2 & 1;
  v7 = (4 * ((v2 & 4) != 0)) & 0x10 | (8 * ((v2 & 8) != 0)) & 0x10 | (16 * ((v2 & 0x10) != 0)) & 0x10;
  if ( v7 )
    v7 = 16;
  v8 = (4 * ((v2 & 4) != 0)) & 0xC | (8 * ((v2 & 8) != 0)) & 0xC;
  if ( v8 )
    v8 = 4;
  v9 = v2 & 2;
  if ( (v6 & 2) != 0 )
    v9 = 2;
  *(_BYTE *)(a1 + 18) &= 0xF8u;
  *(_QWORD *)(a1 + 8) = a1 & 0xFFFFFFFFFFFFFFF0LL;
  *(_BYTE *)(a1 + 17) = *(_BYTE *)(a1 + 17) & 0xE0 | v9 & 0x1F | v8 & 0x1F | v7 & 0x1F | v4 & 0x1F | v6 & 1;
  v10 = *(unsigned __int16 *)(a1 + 16);
  LOWORD(v10) = v10 & 0x1F00;
  result = v10 | 0xFu;
  *(_WORD *)(a1 + 16) = result;
  return result;
}

