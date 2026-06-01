__int64 __fastcall sub_E38940(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rbx
  unsigned __int8 v4; // dl
  int v5; // eax
  __int64 v7; // rax
  char v8; // di
  unsigned __int8 v9; // cl
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int8 v15; // cl

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 2320LL) + 212LL) <= 0x6Fu )
    return 0;
  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v2 == 8 )
  {
    v3 = *(_QWORD *)(a2 + 120);
    if ( !v3 )
      return 0;
  }
  else
  {
    if ( (unsigned int)v2 - 59 > 2 )
      return 0;
    v7 = *(_QWORD *)(a2 + 128);
    if ( !v7 )
      return 0;
    if ( (*(_BYTE *)(v7 + 10) & 0x20) == 0 )
      return 0;
    v3 = sub_B970F0(a2);
    if ( !v3 )
      return 0;
  }
  v4 = *(_BYTE *)(v3 + 28) & 0x7F;
  v5 = v4;
  if ( (unsigned int)v4 - 18 > 0x3F )
    return 0;
  if ( (unsigned int)v4 - 40 > 6 )
    goto LABEL_6;
  v8 = *(_BYTE *)(v3 + 96);
  v9 = v8 & 7;
  if ( (v8 & 7) != 0 )
  {
    if ( v9 != 5 )
    {
LABEL_29:
      if ( v9 <= 3u )
        return v3;
      v5 = *(_BYTE *)(v3 + 28) & 0x7F;
      goto LABEL_6;
    }
    if ( v4 != 40 && v4 != 46 )
      goto LABEL_41;
    v14 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v3 + 16) & 4) != 0 )
      v14 = *(_QWORD *)(v14 + 8);
    if ( !v14 )
      goto LABEL_41;
    v15 = *(_BYTE *)(sub_B8EAA0(v14) + 8) & 0x7F;
    if ( v15 > 0x12u )
    {
      if ( ((v15 + 94) & 0x7Fu) > 5 )
        goto LABEL_40;
    }
    else if ( ((1LL << v15) & 0x40182) == 0 )
    {
LABEL_40:
      v4 = *(_BYTE *)(v3 + 28) & 0x7F;
LABEL_41:
      if ( v4 != 43 )
        return v3;
    }
    v9 = *(_BYTE *)(v3 + 96) & 7;
    goto LABEL_29;
  }
  v10 = *(_QWORD *)&byte_8[*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v10 & 8) != 0
    && (*(_DWORD *)((char *)&qword_18 + (v10 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v10 & 7)) >> 9 == 3 )
  {
    return v3;
  }
  if ( ((v4 + 85) & 0x7D) != 0 )
  {
    v11 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v3 + 16) & 4) != 0 )
      v11 = *(_QWORD *)(v11 + 8);
    v12 = *(_BYTE *)(sub_B8EAA0(v11) + 8) & 0x7F;
    if ( !v12 || v12 == 24 )
      return v3;
    v4 = *(_BYTE *)(v3 + 28) & 0x7F;
    if ( v4 != 43 )
    {
      v13 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v3 + 16) & 4) != 0 )
        v13 = *(_QWORD *)v13;
      if ( ((*(_BYTE *)(v13 + 8) + 70) & 0x7Fu) <= 3 )
        return v3;
    }
    v8 = *(_BYTE *)(v3 + 96);
  }
  v5 = v4;
  if ( (v8 & 0x18) != 0 )
    return v3;
LABEL_6:
  if ( (unsigned int)(v5 - 49) > 2 )
    return 0;
  return v3;
}
