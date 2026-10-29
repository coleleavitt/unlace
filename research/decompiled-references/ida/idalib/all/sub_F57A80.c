__int64 __fastcall sub_F57A80(__int64 a1, unsigned __int8 a2, unsigned __int64 a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  char v5; // al
  char v6; // r9
  char v7; // r8
  char v8; // cl
  char v9; // al
  char v10; // cl
  int v11; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)a3;
  *(_QWORD *)a1 = a1;
  *(_QWORD *)(a1 + 24) = 0;
  v4 = v3 >> 14;
  v5 = (2 * ((v4 & 2) != 0)) | (4 * ((v4 & 4) != 0)) | (8 * ((v4 & 8) != 0)) | v4 & 1 | (16 * ((v4 & 0x10) != 0));
  v6 = (2 * ((v4 & 2) != 0)) & 0x10
     | (4 * ((v4 & 4) != 0)) & 0x10
     | (8 * ((v4 & 8) != 0)) & 0x10
     | (16 * ((v4 & 0x10) != 0)) & 0x10;
  if ( v6 )
    v6 = 16;
  v7 = (2 * ((v4 & 2) != 0)) & 0xC | (4 * ((v4 & 4) != 0)) & 0xC | (8 * ((v4 & 8) != 0)) & 0xC;
  if ( v7 )
    v7 = 4;
  v8 = (2 * ((v4 & 2) != 0)) & 2;
  if ( (v5 & 2) != 0 )
    v8 = 2;
  *(_QWORD *)(a1 + 8) = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v9 = v8 | v7 | v6 | v5 & 1;
  v10 = *(_BYTE *)(a1 + 17);
  *(_BYTE *)(a1 + 18) &= 0xF8u;
  *(_QWORD *)(a1 + 32) = (2LL * a2) | a3 & 0xFFFFFFFFFFFFFFFDLL;
  *(_BYTE *)(a1 + 17) = v10 & 0xE0 | v9;
  v11 = *(unsigned __int16 *)(a1 + 16);
  LOWORD(v11) = v11 & 0x1F00;
  result = v11 | 0x13u;
  *(_WORD *)(a1 + 16) = result;
  return result;
}
