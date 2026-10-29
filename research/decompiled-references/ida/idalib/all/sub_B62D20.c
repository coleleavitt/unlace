__int64 __fastcall sub_B62D20(__int64 a1, int a2)
{
  int v3; // ebx
  char v4; // al
  char v5; // r9
  char v6; // r8
  char v7; // si
  char v8; // dl
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  _WORD *v15; // rdi
  __int16 v16; // ax
  _DWORD *v18; // rax

  v3 = 8;
  v4 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v5 = 32 * ((v4 & 8) != 0);
  v6 = 16 * ((v4 & 0x10) != 0);
  v7 = 2 * ((v4 & 2) != 0);
  v8 = v7 | ((v4 & 4) != 0 ? 0xC : 0) | v6 | v5 | v4 & 1;
  v9 = v7 & 0x10 | v6 & 0x10;
  if ( v7 & 0x10 | v6 & 0x10 | v5 & 0x10 )
  {
    v3 = 24;
    v9 = 16;
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( (v8 & 8) == 0 )
    v3 = v9;
  v11 = v10 + 16;
  if ( (v8 & 4) != 0 )
    v3 |= 4u;
  if ( (v8 & 2) != 0 )
    v3 |= 2u;
  v12 = *(unsigned int *)(v10 + 4);
  v13 = v10 + 8 * v12 + 16;
  v14 = v12;
  if ( v13 != v11 )
  {
    v15 = *(_WORD **)(v10 + 8 * v12 + 8);
    v16 = *v15 & 0x1FF;
    if ( v16 != 238 )
      goto LABEL_17;
    v13 -= 8;
    while ( v11 != v13 )
    {
      v15 = *(_WORD **)(v13 - 8);
      v13 -= 8;
      v16 = *v15 & 0x1FF;
      if ( v16 != 238 )
        goto LABEL_17;
    }
  }
  if ( !(_DWORD)v14 )
    goto LABEL_18;
  v15 = *(_WORD **)(v10 + 8LL * (unsigned int)(v14 - 1) + 16);
  if ( !v15 )
    goto LABEL_18;
  v16 = *v15 & 0x1FF;
LABEL_17:
  if ( ((v16 + 510) & 0x1FFu) <= 0x80 )
  {
    v18 = (_DWORD *)sub_EEDD30(v15, v11, v13, v10, v14);
    if ( v18 )
      v3 |= (*v18 >> 14) & 0x1F;
  }
LABEL_18:
  if ( a2 )
    LOBYTE(v3) = v3 | 0xA;
  return v3 & 0x1E;
}
