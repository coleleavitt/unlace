void __fastcall sub_14420E0(__int64 a1, int *a2)
{
  int v3; // r12d
  __int64 v4; // r13
  int v5; // ebp
  unsigned int v6; // eax
  int *v7; // rdx
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ebp
  int v11; // edx
  int v12; // edi
  int v13; // ecx
  _DWORD v14[11]; // [rsp+14h] [rbp-2Ch] BYREF

  if ( (*((_BYTE *)a2 + 37) & 2) == 0 || *((char *)a2 + 36) < 0 )
  {
    *((_BYTE *)a2 + 36) |= 0x80u;
    return;
  }
  v3 = *a2;
  if ( (*(_BYTE *)(a1 + 2104) & 1) != 0 )
  {
    v4 = a1 + 2112;
    v5 = 31;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 2120);
    v4 = *(_QWORD *)(a1 + 2112);
    if ( !v10 )
      goto LABEL_8;
    v5 = v10 - 1;
  }
  v14[0] = *a2;
  v6 = v5 & sub_101AC30(v14);
  v7 = (int *)(v4 + 4LL * v6);
  v8 = *v7;
  if ( v3 != *v7 )
  {
    v11 = 1;
    if ( v8 == -1 )
      goto LABEL_8;
    while ( 1 )
    {
      v12 = v11 + 1;
      v6 = v5 & (v11 + v6);
      v7 = (int *)(v4 + 4LL * v6);
      v13 = *v7;
      if ( v3 == *v7 )
        break;
      v11 = v12;
      if ( v13 == -1 )
        goto LABEL_8;
    }
  }
  *v7 = -2;
  v9 = *(_DWORD *)(a1 + 2104);
  ++*(_DWORD *)(a1 + 2108);
  *(_DWORD *)(a1 + 2104) = (2 * (v9 >> 1) - 2) | v9 & 1;
LABEL_8:
  *((_BYTE *)a2 + 36) |= 0x80u;
}
