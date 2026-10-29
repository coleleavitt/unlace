unsigned __int64 __fastcall sub_78B3D0(unsigned __int64 a1)
{
  unsigned __int64 v1; // r12
  char v2; // al
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  char v8; // r13
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 v15; // rdi
  int v16; // eax

  v1 = a1;
  v2 = *(_BYTE *)(a1 + 74);
  if ( (v2 & 1) != 0 )
    return v1;
  if ( (v2 & 0x10) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    if ( (v4 & 7) == 0 )
    {
      v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v5 )
      {
        if ( (*(_BYTE *)(v5 + 4) & 0x10) != 0 )
          sub_794380(a1);
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 57 <= 2 )
  {
    v6 = *(_QWORD *)(a1 + 128);
    if ( !v6 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      v6 = *(_QWORD *)(a1 + 128);
      if ( !v6 )
        return 0;
    }
    return *(_QWORD *)(v6 + 88);
  }
  v1 = a1;
  v8 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( (*(_BYTE *)(v1 + 74) & 1) != 0 )
        return v1;
      while ( 1 )
      {
        v9 = *(_QWORD *)(v1 + 96);
        if ( (v9 & 1) == 0 )
          break;
        if ( v8 )
          return 0;
        v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v9 & 1) != 0 )
        {
          v8 = 1;
          goto LABEL_25;
        }
LABEL_17:
        if ( v10 <= 3 )
        {
          v8 = 1;
          v1 = v9 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_41;
        }
        v11 = v9 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v10 & 2) != 0 )
        {
          v8 = 1;
          goto LABEL_35;
        }
        if ( a1 == v11 )
          return 0;
        v1 = v11;
        v8 = 1;
        if ( (*(_BYTE *)(v11 + 74) & 1) != 0 )
          return v1;
      }
      if ( (v9 & 2) != 0 )
      {
        if ( v8 )
          return 0;
        v8 = 1;
        v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v9 & 1) != 0 )
          goto LABEL_26;
        goto LABEL_17;
      }
      v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v9 & 1) != 0 )
        goto LABEL_25;
      if ( v10 <= 3 )
        return 0;
      v11 = v9 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v10 & 2) == 0 )
      {
        if ( a1 == v11 )
          return 0;
        v1 = v11;
        continue;
      }
      break;
    }
LABEL_35:
    v14 = sub_6D4E90((_QWORD *)v11, v1);
    v10 = v14 & 0xFFFFFFFFFFFFFFFELL;
    v9 = v14 | 1;
    *(_QWORD *)(v1 + 96) = v9;
LABEL_25:
    if ( !v10 )
      return 0;
LABEL_26:
    v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    v13 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v10 & 4) != 0 )
    {
      if ( !v12 )
        return 0;
      v15 = *(_QWORD *)v12;
      v16 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
      if ( *(_DWORD *)(v12 + 8) != v16 )
      {
        *(_DWORD *)(v12 + 8) = v16;
        (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v15 + 144LL))(v15, v1, v13);
      }
      v13 = *(_QWORD *)(v12 + 16);
    }
    if ( a1 == v13 )
      return 0;
    v1 = v13;
LABEL_41:
    if ( v1 )
      continue;
    return 0;
  }
}

