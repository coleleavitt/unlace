void __fastcall sub_17A5A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rax
  __int64 *v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // si
  unsigned int v13; // edx
  __int16 v14; // r8
  __int16 v15; // ax
  int v16; // edi
  unsigned int v17; // eax
  int v18; // esi
  unsigned __int64 v19; // rax
  int v20; // edx
  unsigned __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25[3]; // [rsp+0h] [rbp-Ch] BYREF

  if ( !a2 )
    return;
  if ( *(char *)(a2 + 28) < 0 )
    return;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x47 )
  {
    a2 = *(_QWORD *)(a2 + 48);
    if ( !a2 )
      return;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return;
  v7 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v8 = (__int64 *)*v7;
  v9 = *v7 + 8LL * *((unsigned int *)v7 + 2);
  if ( *v7 >= v9 )
  {
    if ( v8 == (__int64 *)v9 )
      return;
    if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) == 321 )
      goto LABEL_13;
    v22 = (__int64 *)(v9 + 8);
    while ( v8 != v22 )
    {
      v23 = *v22++;
      if ( *(_WORD *)(v23 + 36) == 321 )
        goto LABEL_13;
    }
  }
  else
  {
    v10 = *v7;
    while ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 321 )
    {
      v10 += 8LL;
      if ( v9 == v10 )
        return;
    }
    if ( v9 != v10 )
    {
LABEL_13:
      v11 = *(_QWORD *)(a1 + 232);
      v12 = *(_BYTE *)(v11 + 46);
      v13 = *(_DWORD *)(a1 + 224) & 0xFFDF81FC | 0x200001;
      v14 = *(unsigned __int8 *)(v11 + 45);
      v15 = *(_WORD *)(v11 + 206) >> 7;
      *(_DWORD *)(a1 + 224) = v13;
      v16 = v15 & 3;
      if ( v16 == 3 )
        v16 = 2;
      v17 = v16
          | (((v12 & 8) != 0) << 14)
          | (((v12 & 4) != 0) << 13)
          | (((v12 & 2) != 0) << 12)
          | (8 * v14) & 0x400
          | (((v14 & 0x40) != 0) << 9)
          | (4 * ((unsigned int)*(char *)(v11 + 106) >> 31))
          | ((v12 & 1) << 11)
          | (((*(_BYTE *)(v11 + 207) >> 1) & 3) << 6);
      v18 = v17 | 0x38;
      v25[0] = v17 | 0x38;
      if ( (v17 & 3) == 1 && (v17 & 4) != 0 )
      {
        v24 = v17 | 0x138;
        if ( (unsigned __int8)v18 >> 6 == 2 )
          v18 = v24;
      }
      v25[0] = v18 | ((*(_BYTE *)(v11 + 202) & 7) << 22);
      if ( v13 == v25[0] )
      {
        LODWORD(v21) = 0;
        v20 = 0;
      }
      else
      {
        v19 = sub_FEAE70((_DWORD *)(a1 + 224), v25);
        v20 = v19;
        v21 = HIDWORD(v19);
      }
      *(_DWORD *)(a1 + 1952) = v20;
      *(_DWORD *)(a1 + 1956) = v21;
    }
  }
}
