__int64 __fastcall sub_B65610(__int64 a1)
{
  char v1; // al
  char v2; // cl
  int v3; // edx
  int v4; // r10d
  int v5; // eax
  int v6; // r9d
  int v7; // ecx
  char v8; // bp
  char v9; // si
  int v10; // ebp
  int v11; // r8d
  int v12; // eax
  __int64 v13; // rcx
  _DWORD **v14; // rdi
  __int64 result; // rax
  _DWORD *v16; // rdx

  v1 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v2 = (2 * ((v1 & 2) != 0)) | ((v1 & 4) != 0 ? 0xC : 0) | (16 * ((v1 & 0x10) != 0)) | (32 * ((v1 & 8) != 0)) | v1 & 1;
  v3 = (2 * ((v1 & 2) != 0)) & 0x10 | (16 * ((v1 & 0x10) != 0)) & 0x10;
  if ( (2 * ((v1 & 2) != 0)) & 0x10 | (16 * ((v1 & 0x10) != 0)) & 0x10 )
    v3 = 16;
  v4 = (2 * ((v1 & 2) != 0)) & 8
     | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL)
       & 4) != 0
      ? 8
      : 0);
  if ( (2 * ((v1 & 2) != 0)) & 8
     | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL)
       & 4) != 0
      ? 8
      : 0) )
  {
    v4 = 8;
  }
  v5 = (2 * ((v1 & 2) != 0)) & 4
     | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL)
       & 4) != 0
      ? 4
      : 0);
  if ( (v2 & 4) != 0 )
    v5 = 4;
  v6 = v2 & 2;
  if ( (v2 & 2) != 0 )
    v6 = 2;
  v7 = v2 & 1;
  v8 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v9 = (2 * ((v8 & 2) != 0)) | ((v8 & 4) != 0 ? 0xC : 0) | (16 * ((v8 & 0x10) != 0)) | v8 & 1 | (32 * ((v8 & 8) != 0));
  v10 = (2 * ((v8 & 2) != 0)) & 0x10 | (16 * ((v8 & 0x10) != 0)) & 0x10;
  if ( (v9 & 0x10) != 0 )
    v10 = 16;
  v11 = v9 & 4;
  if ( (v9 & 4) != 0 )
    v11 = 4;
  if ( (v9 & 2) != 0 )
    v7 |= 2u;
  v12 = v4 | v7 | v3 | v5;
  v13 = a1 + 8LL * *(unsigned int *)(a1 + 4) + 32;
  v14 = (_DWORD **)(a1 + 32);
  for ( result = v11 | v10 | v6 | v12 | 0xAu; (_DWORD **)v13 != v14; result = (*v16 >> 14) & 0x11 | (unsigned int)result )
    v16 = *v14++;
  return result;
}
