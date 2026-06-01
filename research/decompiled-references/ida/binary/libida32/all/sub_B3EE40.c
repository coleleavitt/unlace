__int64 __fastcall sub_B3EE40(__int64 a1)
{
  char v1; // al
  char v2; // cl
  int v3; // esi
  int v4; // eax
  char v5; // al
  int v6; // r10d
  int v7; // r9d
  int v8; // r8d
  int v9; // ecx
  _DWORD *v10; // rdx
  __int64 result; // rax

  v1 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v2 = (2 * ((v1 & 2) != 0)) | ((v1 & 4) != 0 ? 0xC : 0) | (16 * ((v1 & 0x10) != 0)) | (32 * ((v1 & 8) != 0)) | v1 & 1;
  v3 = 8;
  v4 = (2 * ((v1 & 2) != 0)) & 0x10 | (16 * ((v1 & 0x10) != 0)) & 0x10;
  if ( (v2 & 0x10) != 0 )
  {
    v3 = 24;
    v4 = 16;
  }
  if ( (v2 & 8) == 0 )
    v3 = v4;
  if ( (v2 & 4) != 0 )
    v3 |= 4u;
  if ( (v2 & 2) != 0 )
    v3 |= 2u;
  v5 = *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v6 = (2 * ((v5 & 2) != 0)) & 0x10 | (16 * ((v5 & 0x10) != 0)) & 0x10;
  if ( (2 * ((v5 & 2) != 0)) & 0x10 | (16 * ((v5 & 0x10) != 0)) & 0x10 )
    v6 = 16;
  v7 = (2 * ((v5 & 2) != 0)) & 8
     | ((*(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 8 : 0);
  if ( (2 * ((v5 & 2) != 0)) & 8
     | ((*(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 8 : 0) )
  {
    v7 = 8;
  }
  v8 = (2 * ((v5 & 2) != 0)) & 4
     | ((*(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 4 : 0);
  if ( (2 * ((v5 & 2) != 0)) & 4
     | ((*(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 4 : 0) )
  {
    v8 = 4;
  }
  v9 = (2 * ((v5 & 2) != 0)) & 2;
  if ( ((2 * ((v5 & 2) != 0)) & 2) != 0 )
    v9 = 2;
  v10 = *(_DWORD **)(a1 + 16);
  result = v9 | v8 | v7 | v6 | v3 | v5 & 1u;
  if ( v10 )
    return (*v10 >> 14) & 0x1B | (unsigned int)result;
  return result;
}

