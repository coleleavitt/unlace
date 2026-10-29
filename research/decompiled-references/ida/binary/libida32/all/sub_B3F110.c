__int64 __fastcall sub_B3F110(__int64 a1)
{
  char v1; // al
  char v2; // dl
  int v3; // r10d
  int v4; // r9d
  int v5; // r8d
  int v6; // esi
  __int64 result; // rax
  unsigned int v8; // edx

  v1 = *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v2 = (2 * ((v1 & 2) != 0)) | ((v1 & 4) != 0 ? 0xC : 0) | (16 * ((v1 & 0x10) != 0)) | (32 * ((v1 & 8) != 0)) | v1 & 1;
  v3 = (2 * ((v1 & 2) != 0)) & 0x10 | (16 * ((v1 & 0x10) != 0)) & 0x10;
  if ( (2 * ((v1 & 2) != 0)) & 0x10 | (16 * ((v1 & 0x10) != 0)) & 0x10 )
    v3 = 16;
  v4 = (2 * ((v1 & 2) != 0)) & 8
     | ((*(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 8 : 0);
  if ( (2 * ((v1 & 2) != 0)) & 8
     | ((*(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 8 : 0) )
  {
    v4 = 8;
  }
  v5 = (2 * ((v1 & 2) != 0)) & 4
     | ((*(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 4 : 0);
  if ( (2 * ((v1 & 2) != 0)) & 4
     | ((*(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 4 : 0) )
  {
    v5 = 4;
  }
  v6 = (2 * ((v1 & 2) != 0)) & 2;
  if ( ((2 * ((v1 & 2) != 0)) & 2) != 0 )
    v6 = 2;
  result = v6 | v5 | v4 | v3 | (**(_DWORD **)(a1 + 16) >> 14) & 0x1F | v1 & 1u;
  v8 = v6 & 0x1B | v5 & 0x1B | v4 & 0x1B | v3 & 0x1B | (**(_DWORD **)(a1 + 16) >> 14) & 0x1B | v2 & 1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    return v8;
  return result;
}

