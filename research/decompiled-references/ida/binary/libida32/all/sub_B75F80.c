__int64 __fastcall sub_B75F80(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 v2; // al
  _BYTE *v3; // rax
  unsigned __int8 v4; // cl
  char v6; // cl
  unsigned __int8 v7; // di
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int8 v13; // cl

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
  {
    v2 = *(_BYTE *)(v1 + 28) & 0x7F;
    if ( (unsigned int)v2 - 49 <= 2 )
      return 1;
    if ( v2 == 52 )
    {
      v3 = (_BYTE *)(*(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v1 + 16) & 4) != 0 )
      {
        v4 = *(_BYTE *)(*(_QWORD *)v3 + 8LL) & 0x7F;
        if ( v4 > 0x12u )
        {
LABEL_6:
          if ( ((v4 + 94) & 0x7Fu) > 5 )
            return 3;
          return 1;
        }
      }
      else
      {
        v4 = v3[8] & 0x7F;
        if ( v4 > 0x12u )
          goto LABEL_6;
      }
      if ( ((1LL << v4) & 0x40182) == 0 )
        return 3;
      return 1;
    }
    v6 = *(_BYTE *)(v1 + 96);
    v7 = v6 & 7;
    if ( (v6 & 7) != 0 )
    {
      if ( v7 != 5 )
        goto LABEL_10;
      if ( v2 != 40 && v2 != 46 )
        goto LABEL_43;
      v12 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v1 + 16) & 4) != 0 )
        v12 = *(_QWORD *)(v12 + 8);
      if ( !v12 )
      {
LABEL_43:
        if ( v2 == 43 )
          return 1;
        goto LABEL_30;
      }
      v13 = *(_BYTE *)(sub_B6AD60(v12) + 8) & 0x7F;
      if ( v13 > 0x12u )
      {
        if ( ((v13 + 94) & 0x7Fu) <= 5 )
          goto LABEL_42;
      }
      else if ( ((1LL << v13) & 0x40182) != 0 )
      {
LABEL_42:
        v6 = *(_BYTE *)(v1 + 96);
        v7 = v6 & 7;
LABEL_10:
        if ( v7 > 3u )
          return 1;
        goto LABEL_30;
      }
      if ( (*(_BYTE *)(v1 + 28) & 0x7F) == 0x2B )
        goto LABEL_42;
      goto LABEL_33;
    }
    v8 = *(_QWORD *)&byte_8[*(_QWORD *)(v1 + 48) & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v8 & 8) != 0
      && (*(_DWORD *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v8 & 7)) >> 9 == 3 )
    {
LABEL_30:
      if ( (v6 & 0x18) == 0 )
        return 3;
      return 2;
    }
    if ( ((v2 + 85) & 0x7D) != 0 )
    {
      v9 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v1 + 16) & 4) != 0 )
        v9 = *(_QWORD *)(v9 + 8);
      v10 = *(_BYTE *)(sub_B6AD60(v9) + 8) & 0x7F;
      if ( !v10 || v10 == 24 )
        goto LABEL_33;
      if ( (*(_BYTE *)(v1 + 28) & 0x7F) != 0x2B )
      {
        v11 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v1 + 16) & 4) != 0 )
          v11 = *(_QWORD *)v11;
        if ( ((*(_BYTE *)(v11 + 8) + 70) & 0x7Fu) <= 3 )
        {
LABEL_33:
          v6 = *(_BYTE *)(v1 + 96);
          goto LABEL_30;
        }
      }
      v6 = *(_BYTE *)(v1 + 96);
    }
    if ( (v6 & 0x18) == 0 )
      return 1;
    return 2;
  }
  return 0;
}

