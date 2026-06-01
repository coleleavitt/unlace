__int64 __fastcall sub_A21FD0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  int v3; // ebp
  __int64 v5; // r13
  int v7; // edi
  int v9; // ebp
  __int8 v10; // al
  int v11; // eax
  int v12; // esi
  int v13; // edi
  __int64 v14; // r8
  unsigned int i; // eax
  int *v16; // rcx
  int v17; // edx
  unsigned int v18; // eax
  int v19; // [rsp+4h] [rbp-34h] BYREF
  __int8 v20[4]; // [rsp+8h] [rbp-30h] BYREF
  int v21; // [rsp+Ch] [rbp-2Ch]

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v5 = *a1;
  v7 = *(_DWORD *)a2;
  v9 = v3 - 1;
  v19 = *(_DWORD *)(a2 + 8);
  v10 = *(_BYTE *)(a2 + 4);
  v21 = v7;
  v20[0] = v10;
  v11 = sub_A21B40(v7, v20, &v19);
  v12 = *(_DWORD *)a2;
  v13 = 1;
  v14 = 0;
  for ( i = v9 & v11; ; i = v9 & v18 )
  {
    v16 = (int *)(v5 + 216LL * i);
    v17 = *v16;
    if ( *v16 == v12 && *((_BYTE *)v16 + 4) == *(_BYTE *)(a2 + 4) && *(_DWORD *)(a2 + 8) == v16[2] )
    {
      *a3 = v16;
      return 1;
    }
    if ( v17 == -1 )
      break;
    if ( v17 == -2 && *((_BYTE *)v16 + 4) == 0xFE && v16[2] == -2 && !v14 )
      v14 = v5 + 216LL * i;
LABEL_7:
    v18 = v13 + i;
    ++v13;
  }
  if ( *((_BYTE *)v16 + 4) != 0xFF || v16[2] != -1 )
    goto LABEL_7;
  if ( !v14 )
    v14 = v5 + 216LL * i;
  *a3 = v14;
  return 0;
}
