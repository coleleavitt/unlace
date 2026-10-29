unsigned __int64 __fastcall sub_7868A0(__int64 a1)
{
  char v2; // al
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  char v7; // r13
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // eax

  while ( 1 )
  {
    if ( *(char *)(a1 + 72) < 0 && (*(_BYTE *)(a1 + 75) & 8) == 0 )
      sub_7828C0(a1);
    v2 = *(_BYTE *)(a1 + 74);
    v3 = a1;
    if ( (v2 & 1) != 0 )
      goto LABEL_11;
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
    if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 57 > 2 )
      break;
    v6 = *(_QWORD *)(a1 + 128);
    if ( !v6 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      v6 = *(_QWORD *)(a1 + 128);
      if ( !v6 )
        goto LABEL_32;
    }
    v3 = *(_QWORD *)(v6 + 88);
LABEL_11:
    if ( !v3 || a1 == v3 )
      goto LABEL_32;
    a1 = v3;
  }
  v3 = a1;
  v7 = 0;
  do
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(v3 + 74) & 1) != 0 )
        goto LABEL_11;
      v8 = *(_QWORD *)(v3 + 96);
      if ( (v8 & 1) != 0 )
      {
        while ( 1 )
        {
          if ( v7 )
            goto LABEL_32;
          v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v8 & 1) != 0 )
          {
            v7 = 1;
            goto LABEL_31;
          }
LABEL_23:
          if ( v9 <= 3 )
          {
            v7 = 1;
            v3 = v8 & 0xFFFFFFFFFFFFFFF8LL;
            goto LABEL_50;
          }
          v10 = v8 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (v9 & 2) != 0 )
            break;
          if ( a1 == v10 )
            goto LABEL_32;
          v3 = v10;
          v7 = 1;
          if ( (*(_BYTE *)(v10 + 74) & 1) != 0 )
            goto LABEL_11;
          v8 = *(_QWORD *)(v10 + 96);
          if ( (v8 & 1) == 0 )
            goto LABEL_20;
        }
        v7 = 1;
LABEL_38:
        v14 = *(_QWORD *)(v10 + 18200);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v10 + 2192);
          *(_QWORD *)(v10 + 2272) += 24LL;
          v9 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v10 + 2200) >= v9 + 24 && v15 )
            *(_QWORD *)(v10 + 2192) = v9 + 24;
          else
            v9 = sub_779030(v10 + 2192, 24, 3);
          *(_QWORD *)v9 = v14;
          v8 = v9 | 5;
          *(_DWORD *)(v9 + 8) = 0;
          *(_QWORD *)(v9 + 16) = v3;
          *(_QWORD *)(v3 + 96) = v9 | 5;
          LOBYTE(v9) = v9 & 0xFA | 4;
          goto LABEL_43;
        }
        v9 = v3 & 0xFFFFFFFFFFFFFFFALL;
        v8 = v3 & 0xFFFFFFFFFFFFFFFALL | 1;
        *(_QWORD *)(v3 + 96) = v8;
        break;
      }
LABEL_20:
      if ( (v8 & 2) != 0 )
      {
        if ( v7 )
          goto LABEL_32;
        v7 = 1;
        v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v8 & 1) != 0 )
          goto LABEL_43;
        goto LABEL_23;
      }
      v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v8 & 1) != 0 )
        break;
      if ( v9 <= 3 )
        goto LABEL_32;
      v10 = v8 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v9 & 2) != 0 )
        goto LABEL_38;
      if ( a1 == v10 )
        goto LABEL_32;
      v3 = v10;
    }
LABEL_31:
    if ( !v9 )
      break;
LABEL_43:
    v16 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    v17 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v9 & 4) != 0 )
    {
      if ( !v16 )
        break;
      v18 = *(_QWORD *)v16;
      v19 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
      if ( *(_DWORD *)(v16 + 8) != v19 )
      {
        *(_DWORD *)(v16 + 8) = v19;
        (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v18 + 144LL))(v18, v3, v17);
      }
      v17 = *(_QWORD *)(v16 + 16);
    }
    if ( a1 == v17 )
      break;
    v3 = v17;
LABEL_50:
    ;
  }
  while ( v3 );
LABEL_32:
  v11 = *(_QWORD *)(a1 + 80);
  if ( v11 )
  {
    while ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 47 > 2 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      v11 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v12 <= 7 )
        return 0;
    }
  }
  return v11;
}

