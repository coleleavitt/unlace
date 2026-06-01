__int64 __fastcall sub_B635F0(__int64 a1)
{
  char v1; // al
  char v2; // r8
  bool v3; // si
  char v4; // dl
  __int64 result; // rax
  char v6; // dl
  unsigned int v7; // ecx
  bool v8; // zf
  _QWORD *v9; // rdx
  char v10; // cl
  char v11; // dl
  int v12; // r8d
  int v13; // edi
  int v14; // esi
  int v15; // ecx

  v1 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v2 = 16 * ((v1 & 0x10) != 0);
  v3 = (v1 & 2) != 0;
  v4 = (32 * ((v1 & 8) != 0)) | v1 & 1;
  result = 8;
  v6 = (2 * v3)
     | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0)
     | v2
     | v4;
  v7 = v6 & 0x10;
  if ( (v6 & 0x10) != 0 )
  {
    result = 24;
    v7 = 16;
  }
  if ( (v6 & 8) == 0 )
    result = v7;
  if ( (v6 & 4) != 0 )
    result = (unsigned int)result | 4;
  v8 = (v6 & 2) == 0;
  v9 = *(_QWORD **)(a1 + 16);
  if ( !v8 )
    result = (unsigned int)result | 2;
  if ( v9 )
  {
    v10 = *(_BYTE *)(*(_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
    v11 = (2 * ((v10 & 2) != 0))
        | ((v10 & 4) != 0 ? 0xC : 0)
        | (16 * ((v10 & 0x10) != 0))
        | (32 * ((v10 & 8) != 0))
        | v10 & 1;
    v12 = (2 * ((v10 & 2) != 0)) & 0x10 | (16 * ((v10 & 0x10) != 0)) & 0x10;
    if ( (2 * ((v10 & 2) != 0)) & 0x10 | (16 * ((v10 & 0x10) != 0)) & 0x10 )
      v12 = 16;
    v13 = (2 * ((v10 & 2) != 0)) & 8 | ((v10 & 4) != 0 ? 8 : 0);
    if ( (2 * ((v10 & 2) != 0)) & 8 | ((v10 & 4) != 0 ? 8 : 0) )
      v13 = 8;
    v14 = (2 * ((v10 & 2) != 0)) & 4 | ((v10 & 4) != 0 ? 4 : 0);
    if ( (2 * ((v10 & 2) != 0)) & 4 | ((v10 & 4) != 0 ? 4 : 0) )
      v14 = 4;
    v15 = (2 * ((v10 & 2) != 0)) & 2;
    if ( (v11 & 2) != 0 )
      v15 = 2;
    return v15 | v14 | v13 | v12 | (unsigned int)result | v11 & 1;
  }
  return result;
}
