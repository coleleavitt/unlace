__int64 __fastcall sub_C50610(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned int v3; // ebp
  unsigned __int8 v7; // al
  char v8; // di
  unsigned __int8 v9; // si
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  char v13; // al
  unsigned __int64 v14; // rcx
  unsigned __int64 v16; // rdi
  unsigned __int8 v17; // cl

  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v7 - 40 > 6 )
    goto LABEL_15;
  if ( *(char *)(a2 + 28) < 0 )
  {
    v3 = 0;
    goto LABEL_17;
  }
  v8 = *(_BYTE *)(a2 + 96);
  v9 = v8 & 7;
  if ( (v8 & 7) != 0 )
  {
    if ( v9 != 5 )
      goto LABEL_22;
    if ( v7 != 46 && v7 != 40 )
      goto LABEL_35;
    v16 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v16 = *(_QWORD *)(v16 + 8);
    if ( !v16 )
    {
LABEL_35:
      if ( v7 != 43 )
        goto LABEL_15;
      goto LABEL_23;
    }
    v17 = *(_BYTE *)(sub_B8EAA0(v16) + 8) & 0x7F;
    if ( v17 > 0x12u )
    {
      if ( ((v17 + 94) & 0x7Fu) <= 5 )
        goto LABEL_34;
    }
    else if ( ((1LL << v17) & 0x40182) != 0 )
    {
LABEL_34:
      v9 = *(_BYTE *)(a2 + 96) & 7;
LABEL_22:
      if ( v9 <= 3u )
      {
        v3 = 1;
        v7 = *(_BYTE *)(a2 + 28) & 0x7F;
        goto LABEL_17;
      }
      goto LABEL_23;
    }
    v7 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( v7 != 43 )
      goto LABEL_15;
    if ( (*(_BYTE *)(a2 + 96) & 7u) > 3 )
      goto LABEL_23;
    return 1;
  }
  v10 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v10 & 8) != 0
    && (*(_DWORD *)((char *)&qword_18 + (v10 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v10 & 7)) >> 9 == 3 )
  {
    goto LABEL_15;
  }
  if ( ((v7 + 85) & 0x7D) != 0 )
  {
    v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v11 = *(_QWORD *)(v11 + 8);
    v12 = sub_B8EAA0(v11);
    LOBYTE(v3) = (*(_BYTE *)(v12 + 8) & 0x7F) == 0 || (*(_BYTE *)(v12 + 8) & 0x7F) == 24;
    v13 = *(_BYTE *)(a2 + 28);
    if ( (_BYTE)v3 )
      goto LABEL_24;
    v7 = v13 & 0x7F;
    if ( v7 != 43 )
    {
      v14 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v14 = *(_QWORD *)v14;
      v3 = 1;
      if ( ((*(_BYTE *)(v14 + 8) + 70) & 0x7Fu) <= 3 )
        goto LABEL_17;
      v8 = *(_BYTE *)(a2 + 96);
      goto LABEL_14;
    }
    if ( (*(_BYTE *)(a2 + 96) & 0x18) == 0 )
      goto LABEL_23;
    return 1;
  }
LABEL_14:
  if ( (v8 & 0x18) == 0 )
  {
LABEL_23:
    v3 = sub_C4FCB0(a1, a2);
    v13 = *(_BYTE *)(a2 + 28);
LABEL_24:
    v7 = v13 & 0x7F;
    goto LABEL_17;
  }
LABEL_15:
  v3 = 1;
LABEL_17:
  if ( v7 == 46 && a3 )
    v3 &= sub_C50070(a1, a2);
  return v3;
}
