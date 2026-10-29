__int64 __fastcall sub_CAFB70(__int64 a1)
{
  unsigned __int8 v1; // al
  char v3; // di
  unsigned __int8 v4; // cl
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int8 v11; // cl

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v1 - 40 > 6 )
    return 0;
  v3 = *(_BYTE *)(a1 + 96);
  v4 = v3 & 7;
  if ( (v3 & 7) == 0 )
  {
    v6 = *(_QWORD *)&byte_8[*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v6 & 8) != 0
      && (*(_DWORD *)((char *)&qword_18 + (v6 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v6 & 7)) >> 9 == 3 )
    {
      return 1;
    }
    if ( ((v1 + 85) & 0x7D) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
        v7 = *(_QWORD *)(v7 + 8);
      v8 = *(_BYTE *)(sub_B8EAA0(v7) + 8) & 0x7F;
      if ( v8 != 24 && v8 )
      {
        if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x2B )
        {
          if ( (*(_BYTE *)(a1 + 96) & 0x18) == 0 )
            return 0;
        }
        else
        {
          v9 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
            v9 = *(_QWORD *)v9;
          if ( ((*(_BYTE *)(v9 + 8) + 70) & 0x7Fu) > 3 && (*(_BYTE *)(a1 + 96) & 0x18) == 0 )
            return *(_BYTE *)(a1 + 97) >> 7;
        }
      }
    }
    else if ( (v3 & 0x18) == 0 )
    {
LABEL_6:
      if ( v1 != 43 )
        return *(_BYTE *)(a1 + 97) >> 7;
      return 0;
    }
    return 1;
  }
  if ( (v3 & 7) != 5 )
    goto LABEL_4;
  if ( v1 == 40 || v1 == 46 )
  {
    v10 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v10 = *(_QWORD *)(v10 + 8);
    if ( v10 )
    {
      v11 = *(_BYTE *)(sub_B8EAA0(v10) + 8) & 0x7F;
      if ( v11 > 0x12u )
      {
        if ( ((v11 + 94) & 0x7Fu) <= 5 )
          goto LABEL_37;
      }
      else if ( ((1LL << v11) & 0x40182) != 0 )
      {
LABEL_37:
        v4 = *(_BYTE *)(a1 + 96) & 7;
LABEL_4:
        if ( v4 > 3u )
        {
          v1 = *(_BYTE *)(a1 + 28) & 0x7F;
          goto LABEL_6;
        }
        return 1;
      }
      v1 = *(_BYTE *)(a1 + 28) & 0x7F;
    }
  }
  if ( v1 == 43 )
    goto LABEL_37;
  return 1;
}
