__int64 __fastcall sub_88A370(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  char v3; // dl
  char v6; // cl
  unsigned __int8 v7; // si
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 *v14; // rbx
  __int64 i; // r13
  __int64 v16; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rdx

  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  v3 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v2 - 38) > 6 )
    return 1;
  if ( *(char *)(a2 + 28) < 0 )
  {
    LODWORD(v10) = 0;
    goto LABEL_16;
  }
  v6 = *(_BYTE *)(a2 + 96);
  v7 = v6 & 7;
  if ( (v6 & 7) == 0 )
  {
    v8 = *(_QWORD *)(a2 + 48);
    v10 = (*(__int64 *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1;
    if ( ((*(__int64 *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1) != 0 )
    {
      v9 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (unsigned int)((*(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL))
                         | (unsigned __int64)(((unsigned __int8)v9 | (unsigned __int8)v8) & 7)) >> 9) == 3 )
        goto LABEL_16;
    }
    if ( (v3 & 0xFD) == 0x29 )
    {
      if ( (v6 & 0x18) != 0 )
        return 1;
    }
    else
    {
      v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v11 = *(_QWORD *)(v11 + 8);
      v12 = sub_79C2A0(v11);
      v3 = *(_BYTE *)(a2 + 28) & 0x7F;
      LOBYTE(v10) = (*(_BYTE *)(v12 + 8) & 0x7F) == 22 || (*(_BYTE *)(v12 + 8) & 0x7F) == 0;
      if ( (_BYTE)v10 )
        goto LABEL_16;
      if ( v3 != 41 )
      {
        v13 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v13 = *(_QWORD *)v13;
        LODWORD(v10) = 1;
        if ( ((*(_BYTE *)(v13 + 8) + 72) & 0x7Fu) <= 3 || (*(_BYTE *)(a2 + 96) & 0x18) != 0 )
          goto LABEL_16;
        goto LABEL_26;
      }
      if ( (*(_BYTE *)(a2 + 96) & 0x18) != 0 )
        return 1;
    }
LABEL_26:
    LODWORD(v10) = sub_88A150(a1, a2);
    v3 = *(_BYTE *)(a2 + 28) & 0x7F;
    goto LABEL_16;
  }
  if ( (v6 & 7) != 5 )
    goto LABEL_25;
  if ( v2 != 44 && v2 != 38 )
    goto LABEL_31;
  v18 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v18 = *(_QWORD *)(v18 + 8);
  if ( !v18 )
  {
LABEL_31:
    if ( v3 == 41 )
      goto LABEL_26;
    goto LABEL_32;
  }
  v19 = *(_BYTE *)(sub_79C2A0(v18) + 8) & 0x7F;
  if ( (unsigned __int8)v19 > 0x10u )
  {
    if ( (((_BYTE)v19 + 96) & 0x7Fu) <= 5 )
      goto LABEL_38;
  }
  else
  {
    v20 = 65922;
    if ( _bittest64(&v20, v19) )
    {
LABEL_38:
      v7 = *(_BYTE *)(a2 + 96) & 7;
LABEL_25:
      if ( v7 > 3u )
        goto LABEL_26;
      v3 = *(_BYTE *)(a2 + 28) & 0x7F;
      goto LABEL_32;
    }
  }
  v3 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v3 == 41 )
  {
    if ( (*(_BYTE *)(a2 + 96) & 7u) <= 3 )
      return 1;
    goto LABEL_26;
  }
LABEL_32:
  LODWORD(v10) = 1;
LABEL_16:
  if ( v3 == 44 )
  {
    v14 = (__int64 *)(a2 + 104);
    for ( i = a2 + 104 + 8LL * *(unsigned int *)(a2 + 100); (__int64 *)i != v14; ++v14 )
    {
      v16 = sub_7A8C80(*v14);
      if ( v16 )
        LODWORD(v10) = sub_88A370(a1, v16) & v10;
    }
  }
  return (unsigned int)v10;
}

