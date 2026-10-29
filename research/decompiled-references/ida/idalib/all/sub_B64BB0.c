__int64 __fastcall sub_B64BB0(unsigned __int64 *a1)
{
  char v1; // dl
  char v2; // al
  int v3; // ebx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // ebx
  char v10; // al
  char v11; // al
  bool v12; // zf
  unsigned __int64 v13; // rax
  _DWORD *v14; // rdx
  _DWORD *v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *i; // rdx
  _DWORD *v19; // rax

  v1 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1[4] & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v2 = (2 * ((v1 & 2) != 0)) | ((v1 & 4) != 0 ? 0xC : 0) | (16 * ((v1 & 0x10) != 0)) | (32 * ((v1 & 8) != 0)) | v1 & 1;
  v3 = (2 * ((v1 & 2) != 0)) & 0x10 | (16 * ((v1 & 0x10) != 0)) & 0x10;
  if ( (2 * ((v1 & 2) != 0)) & 0x10 | (16 * ((v1 & 0x10) != 0)) & 0x10 )
    v3 = 16;
  v4 = (unsigned __int8)(2 * ((v1 & 2) != 0)) & 8u | ((v1 & 4) != 0 ? 8 : 0);
  if ( (2 * ((v1 & 2) != 0)) & 8 | ((v1 & 4) != 0 ? 8 : 0) )
    v4 = 8;
  v5 = (unsigned __int8)(2 * ((v1 & 2) != 0)) & 4u | ((v1 & 4) != 0 ? 4 : 0);
  if ( (2 * ((v1 & 2) != 0)) & 4 | ((v1 & 4) != 0 ? 4 : 0) )
    v5 = 4;
  v6 = (2 * ((v1 & 2) != 0)) & 2;
  if ( (v2 & 2) != 0 )
    v6 = 2;
  v7 = v2 & 1 | v3;
  v8 = *(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL);
  v9 = v6 | v5 | v4 | v7;
  if ( *(_BYTE *)(v8 + 16) != 42 )
    v8 = sub_F63050(*(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL), v4, v6, v5);
  v10 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v11 = (2 * ((v10 & 2) != 0))
      | ((v10 & 4) != 0 ? 0xC : 0)
      | (16 * ((v10 & 0x10) != 0))
      | (32 * ((v10 & 8) != 0))
      | v10 & 1;
  if ( (v11 & 0x10) != 0 )
    v9 |= 0x10u;
  if ( (v11 & 8) != 0 )
    v9 |= 8u;
  if ( (v11 & 4) != 0 )
    v9 |= 4u;
  v12 = (v11 & 2) == 0;
  v13 = *a1;
  if ( !v12 )
    v9 |= 2u;
  if ( (v13 & 0x100000) != 0 )
  {
    v14 = (_DWORD *)a1[7];
    if ( v14 )
      v9 |= (*v14 >> 14) & 0x1B;
  }
  if ( (v13 & 0x1000000) != 0 )
  {
    v15 = (_DWORD *)a1[((v13 >> 20) & 1) + 7];
    if ( v15 )
      v9 |= (*v15 >> 14) & 0x1B;
  }
  v16 = ((v13 >> 20) & 1) + ((v13 >> 24) & 1);
  v17 = (__int64)&a1[v16 + 7 + *((unsigned int *)a1 + 1)];
  for ( i = (__int64 *)&a1[v16 + 7]; (__int64 *)v17 != i; v9 |= (*v19 >> 14) & 0x1B )
    v19 = (_DWORD *)*i++;
  return v9;
}
