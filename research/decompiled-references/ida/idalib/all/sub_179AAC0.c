char __fastcall sub_179AAC0(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int8 v6; // cl
  unsigned __int64 v7; // rax
  unsigned __int8 v8; // cl
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // cl
  unsigned __int64 v12; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
    {
      result = 1;
      if ( (*(_BYTE *)(a2 + 98) & 2) != 0 )
        return result;
    }
    v4 = *(_QWORD *)(a3 + 16);
    v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v4 & 4) != 0 )
    {
      v6 = *(_BYTE *)(*(_QWORD *)(v5 + 8) + 8LL) & 0x7F;
      if ( v6 > 0x12u )
      {
LABEL_7:
        result = 0;
        if ( ((v6 + 94) & 0x7Fu) <= 5 )
          return result;
LABEL_8:
        v7 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v7 = *(_QWORD *)(v7 + 8);
        v8 = *(_BYTE *)(v7 + 8) & 0x7F;
        if ( v8 > 0x12u )
          return ((v8 + 94) & 0x7Fu) > 5;
        else
          return ((1LL << v8) & 0x40182) == 0;
      }
    }
    else
    {
      v6 = *(_BYTE *)(v5 + 8) & 0x7F;
      if ( v6 > 0x12u )
        goto LABEL_7;
    }
    result = 0;
    if ( ((1LL << v6) & 0x40182) != 0 )
      return result;
    goto LABEL_8;
  }
  v9 = *(_QWORD *)(a3 + 16);
  v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v9 & 4) != 0 )
    v10 = *(_QWORD *)(v10 + 8);
  v11 = *(_BYTE *)(v10 + 8) & 0x7F;
  if ( v11 > 0x12u )
  {
    result = 1;
    if ( ((v11 + 94) & 0x7Fu) > 5 )
      return result;
  }
  else if ( ((1LL << v11) & 0x40182) == 0 )
  {
    return 1;
  }
  v12 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v12 = *(_QWORD *)(v12 + 8);
  return v10 == v12;
}
