__int64 __fastcall sub_B406F0(__int64 a1)
{
  char v1; // al
  char v2; // dl
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  __int64 result; // rax
  __int64 v9; // rdx
  _DWORD **v10; // rcx
  __int64 v11; // rsi
  _DWORD *v12; // rdx

  v1 = *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v2 = (2 * ((v1 & 2) != 0)) | ((v1 & 4) != 0 ? 0xC : 0) | (16 * ((v1 & 0x10) != 0)) | (32 * ((v1 & 8) != 0)) | v1 & 1;
  v3 = (2 * ((v1 & 2) != 0)) & 0x10 | (16 * ((v1 & 0x10) != 0)) & 0x10;
  if ( (v2 & 0x10) != 0 )
    v3 = 16;
  v4 = v2 & 8;
  if ( (v2 & 8) != 0 )
    v4 = 8;
  v5 = v2 & 2;
  if ( (v2 & 2) != 0 )
    v5 = 2;
  v6 = v4 | v2 & 1 | v3;
  v7 = *(_DWORD *)(a1 + 36);
  result = v5 | (unsigned int)v6;
  if ( v7 )
  {
    v9 = 16LL * *(unsigned int *)(a1 + 32);
    v10 = (_DWORD **)(a1 + v9 + 40);
    v11 = a1 + v9 + 48 + 8LL * (unsigned int)(v7 - 1);
    do
    {
      v12 = *v10++;
      result = (*v12 >> 14) & 0x1B | (unsigned int)result;
    }
    while ( (_DWORD **)v11 != v10 );
  }
  return result;
}

