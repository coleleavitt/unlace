bool __fastcall sub_990BA0(__int64 a1)
{
  char v1; // cl
  unsigned __int8 v3; // al
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // rax
  char v10; // al
  unsigned __int64 v11; // rdi
  unsigned __int8 v12; // cl

  v1 = *(_BYTE *)(a1 + 96);
  v3 = v1 & 7;
  if ( (v1 & 7) == 0 )
  {
    v4 = *(_QWORD *)&byte_8[*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v4 & 8) == 0
      || (*(_DWORD *)((char *)&qword_18 + (v4 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v4 & 7)) >> 9 != 3 )
    {
      if ( ((*(_BYTE *)(a1 + 28) + 85) & 0x7D) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 16);
        v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v5 & 4) != 0 )
          v6 = *(_QWORD *)(v6 + 8);
        v7 = *(_BYTE *)(sub_B6AD60(v6) + 8) & 0x7F;
        if ( v7 == 24 || !v7 )
          return 0;
        if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2B )
        {
          v8 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
            v8 = *(_QWORD *)v8;
          if ( ((*(_BYTE *)(v8 + 8) + 70) & 0x7Fu) <= 3 )
            return 0;
        }
        v1 = *(_BYTE *)(a1 + 96);
      }
      return (v1 & 0x18) == 0;
    }
    return 0;
  }
  if ( v3 == 5 )
  {
    v10 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( v10 != 46 && v10 != 40 )
      goto LABEL_26;
    v11 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v11 = *(_QWORD *)(v11 + 8);
    if ( !v11 )
    {
LABEL_26:
      if ( v10 != 43 )
        return 0;
      goto LABEL_27;
    }
    v12 = *(_BYTE *)(sub_B6AD60(v11) + 8) & 0x7F;
    if ( v12 > 0x12u )
    {
      if ( ((v12 + 94) & 0x7Fu) > 5 )
        goto LABEL_25;
    }
    else if ( ((1LL << v12) & 0x40182) == 0 )
    {
LABEL_25:
      v10 = *(_BYTE *)(a1 + 28) & 0x7F;
      goto LABEL_26;
    }
LABEL_27:
    v3 = *(_BYTE *)(a1 + 96) & 7;
  }
  return v3 > 3u;
}

