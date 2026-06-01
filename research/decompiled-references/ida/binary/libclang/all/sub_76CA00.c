__int64 __fastcall sub_76CA00(__int64 a1, int a2)
{
  char v3; // dl
  unsigned __int16 v4; // ax
  int v5; // edx
  int v6; // ebp
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int16 v9; // ax
  unsigned int v10; // ecx
  int v11; // eax
  _DWORD *v12; // rsi
  unsigned __int8 v13; // dl
  _DWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  _DWORD **v18; // rdx
  _DWORD **v19; // rsi
  _DWORD *v20; // rax

  v3 = *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v4 = v3 & 0x1F;
  LOBYTE(a2) = (unsigned __int8)v4 > 0xFu;
  v5 = (16 * a2) | v3 & 1;
  v6 = (2 * ((v4 >> 1) & 1))
     | v5
     | ((*(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0);
  v7 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)v7;
  if ( *(_BYTE *)(*(_QWORD *)v7 + 16LL) != 41 )
    v8 = sub_B0D320(v8);
  v9 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
  LOBYTE(v5) = (unsigned __int8)v9 > 0xFu;
  v10 = (2 * ((v9 >> 1) & 1))
      | v6
      | (16 * v5)
      | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0);
  v11 = *(char *)(a1 + 2);
  if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    v12 = *(_DWORD **)(a1 + 56);
    if ( v12 )
      v10 |= (*v12 >> 14) & 0x1B;
  }
  v13 = (unsigned __int8)(*(_BYTE *)(a1 + 2) & 0x10) >> 4;
  if ( (v11 & 0x80u) != 0 )
  {
    v14 = *(_DWORD **)(a1 + 8LL * v13 + 56);
    if ( v14 )
      v10 |= (*v14 >> 14) & 0x1B;
  }
  v15 = 8LL * ((v13 + (v11 < 0)) & 3) + 56;
  v16 = 8LL * *(unsigned int *)(a1 + 4);
  v17 = v15 + v16;
  v18 = (_DWORD **)(a1 + v15);
  v19 = (_DWORD **)(a1 + v17);
  if ( v16 )
  {
    do
    {
      v20 = *v18++;
      v10 |= (*v20 >> 14) & 0x1B;
    }
    while ( v18 != v19 );
  }
  return v10;
}

