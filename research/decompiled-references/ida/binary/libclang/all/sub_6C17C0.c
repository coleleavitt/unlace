__int64 __fastcall sub_6C17C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // ecx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  int v17; // ecx
  unsigned __int64 v18; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  _DWORD *v23; // rdx
  _QWORD *v24; // rdx
  __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  int v28; // eax

  v3 = *(_QWORD *)(a2 + 120);
  v4 = v3;
  if ( v3 )
    goto LABEL_2;
  v20 = *(_QWORD *)(a2 + 96);
  v21 = *(_QWORD *)(v20 + 88);
  v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v21 & 1) == 0 )
  {
    if ( v22 <= 3 )
      goto LABEL_42;
    if ( (v21 & 2) != 0 )
    {
      v24 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
      v25 = v24[2275];
      if ( !v25 )
      {
        *(_QWORD *)(v20 + 88) = v20 & 0xFFFFFFFFFFFFFFFALL | 1;
        v3 = *(_QWORD *)(a2 + 120);
        goto LABEL_42;
      }
      v26 = v24[274];
      v24[284] += 24LL;
      v22 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v24[275] >= v22 + 24 && v26 )
        v24[274] = v22 + 24;
      else
        v22 = sub_6A76A0((__int64)(v24 + 274), 24, 3);
      *(_QWORD *)v22 = v25;
      *(_DWORD *)(v22 + 8) = 0;
      v21 = v22 | 5;
      *(_QWORD *)(v22 + 16) = v20;
      *(_QWORD *)(v20 + 88) = v22 | 5;
      LOBYTE(v22) = v22 & 0xFA | 4;
      goto LABEL_39;
    }
LABEL_36:
    v8 = 0;
    goto LABEL_24;
  }
  if ( !v22 )
    goto LABEL_36;
LABEL_39:
  if ( (v22 & 4) != 0 )
  {
    v23 = (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v23 )
    {
      v27 = *(_QWORD *)v23;
      v28 = *(_DWORD *)(*(_QWORD *)v23 + 12LL);
      if ( v23[2] != v28 )
      {
        v23[2] = v28;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 144LL))(v27, v20);
        v4 = *(_QWORD *)(a2 + 120);
        goto LABEL_2;
      }
    }
  }
  v3 = *(_QWORD *)(a2 + 120);
LABEL_42:
  v4 = v3;
LABEL_2:
  if ( v4 <= 7 )
    goto LABEL_36;
  v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v5 + 72) & 1) != 0 )
  {
    sub_7B7DB0(a2);
    v5 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v6 = *(_QWORD *)(v5 + 56);
  if ( !v6 )
    goto LABEL_36;
  while ( 1 )
  {
    if ( *(char *)(v6 + 28) >= 0 )
    {
      v7 = *(_QWORD *)(v6 + 40);
      if ( (v7 & 7) != 0 || v7 <= 7 )
        break;
    }
    v6 = *(_QWORD *)(v6 + 128);
    if ( !v6 )
      goto LABEL_36;
  }
  v8 = 0;
LABEL_10:
  v9 = sub_79C190(v6 + 48);
  if ( v9 )
  {
    while ( (*(_BYTE *)(v9 + 28) & 0x7F) != 0x30 )
    {
      v10 = *(_QWORD *)(v9 + 8);
      v9 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v10 <= 7 )
        goto LABEL_19;
    }
    v11 = 0;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v9 + 8);
      v9 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v12 <= 7 )
        break;
      if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x30 )
        ++v11;
    }
    v8 += v11 + 1;
  }
LABEL_19:
  while ( 1 )
  {
    v6 = *(_QWORD *)(v6 + 128);
    if ( !v6 )
      break;
    while ( *(char *)(v6 + 28) >= 0 )
    {
      v13 = *(_QWORD *)(v6 + 40);
      if ( (v13 & 7) != 0 || v13 <= 7 )
        goto LABEL_10;
      v6 = *(_QWORD *)(v6 + 128);
      if ( !v6 )
        goto LABEL_24;
    }
  }
LABEL_24:
  v14 = sub_7BB160(a2);
  if ( v14 )
  {
    v15 = sub_79C190(v14 + 48);
    if ( v15 )
    {
      while ( (*(_BYTE *)(v15 + 28) & 0x7F) != 0x30 )
      {
        v16 = *(_QWORD *)(v15 + 8);
        v15 = v16 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v16 <= 7 )
          return v8;
      }
      v17 = 0;
      while ( 1 )
      {
        v18 = *(_QWORD *)(v15 + 8);
        v15 = v18 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v18 <= 7 )
          break;
        if ( (*(_BYTE *)(v15 + 28) & 0x7F) == 0x30 )
          ++v17;
      }
      v8 += v17 + 1;
    }
  }
  return v8;
}

