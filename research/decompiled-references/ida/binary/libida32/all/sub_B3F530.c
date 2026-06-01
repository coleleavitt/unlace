__int64 __fastcall sub_B3F530(__int64 a1)
{
  int v1; // ecx
  char v2; // al
  char v3; // di
  char v4; // dl
  int v5; // r10d
  int v6; // r9d
  int v7; // r8d
  int v8; // esi
  __int64 result; // rax
  unsigned int v10; // edx

  v1 = (**(_DWORD **)(a1 + 16) >> 14) & 0x1F;
  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v3 = v2 & 4;
  v4 = (2 * ((v2 & 2) != 0)) | ((v2 & 4) != 0 ? 0xC : 0) | (16 * ((v2 & 0x10) != 0)) | (32 * ((v2 & 8) != 0)) | v2 & 1;
  v5 = (2 * ((v2 & 2) != 0)) & 0x10 | (16 * ((v2 & 0x10) != 0)) & 0x10;
  if ( (2 * ((v2 & 2) != 0)) & 0x10 | (16 * ((v2 & 0x10) != 0)) & 0x10 )
    v5 = 16;
  v6 = (2 * ((v2 & 2) != 0)) & 8 | ((v2 & 4) != 0 ? 8 : 0);
  if ( (2 * ((v2 & 2) != 0)) & 8 | ((v2 & 4) != 0 ? 8 : 0) )
    v6 = 8;
  v7 = (2 * ((v2 & 2) != 0)) & 4 | ((v2 & 4) != 0 ? 4 : 0);
  if ( (2 * ((v2 & 2) != 0)) & 4 | ((v2 & 4) != 0 ? 4 : 0) )
    v7 = 4;
  v8 = (2 * ((v2 & 2) != 0)) & 2;
  if ( ((2 * ((v2 & 2) != 0)) & 2) != 0 )
    v8 = 2;
  result = v8 | v7 | v6 | v5 | v1 | v2 & 1u;
  v10 = v8 & 0x1B | v7 & 0x1B | v6 & 0x1B | v5 & 0x1B | v1 & 0x1B | v4 & 1;
  if ( !v3 )
    return v10;
  return result;
}

