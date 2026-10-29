char __fastcall sub_1EA74C0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // eax
  __int64 v8; // rax
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // dl
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = v2 >> 2;
  v4 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  v5 = v3 & 1;
  if ( (*(_WORD *)(a1 + 30) & 0x180) == 0 )
  {
LABEL_8:
    if ( v5 )
    {
      v4 = *(_QWORD *)(v4 + 8);
      v9 = *(_BYTE *)(v4 + 8) & 0x7F;
      if ( v9 <= 0x12u )
      {
LABEL_10:
        if ( ((1LL << v9) & 0x40182) == 0 )
          return 0;
        goto LABEL_11;
      }
    }
    else
    {
      v9 = *(_BYTE *)(v4 + 8) & 0x7F;
      if ( v9 <= 0x12u )
        goto LABEL_10;
    }
    if ( ((v9 + 94) & 0x7Fu) > 5 )
    {
      if ( *(_QWORD *)(a1 + 40) || (unsigned int)v9 - 58 > 3 && v9 != 20 )
        return 0;
      v11 = *(_BYTE *)(a1 + 28) & 0x7F;
      if ( (unsigned int)(v11 - 58) > 4 )
        return (unsigned int)(v11 - 49) <= 2;
      return 1;
    }
LABEL_11:
    v10 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( (unsigned int)v10 - 40 > 6 )
      return v10 == 8 || (unsigned int)v10 - 58 <= 4;
    if ( (*(_BYTE *)(a1 + 96) & 7) != 2 && ((*(_BYTE *)(a1 + 96) & 7) != 0 || ((*(_BYTE *)(a1 + 96) >> 3) & 3) != 2) )
      return 0;
    if ( ((v10 + 85) & 0x7D) != 0 )
    {
      v12 = *(_BYTE *)(sub_B8EAA0(v4) + 8) & 0x7F;
      if ( !v12 || v12 == 24 )
        return 0;
      if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2B )
      {
        v13 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
          v13 = *(_QWORD *)v13;
        if ( ((*(_BYTE *)(v13 + 8) + 70) & 0x7Fu) <= 3 )
          return 0;
      }
    }
    return 1;
  }
  if ( v5 )
  {
    if ( !(unsigned __int8)sub_B8E180(*(_QWORD *)(v4 + 8)) )
      goto LABEL_7;
  }
  else if ( !(unsigned __int8)sub_B8E180(v4) )
  {
LABEL_7:
    v8 = *(_QWORD *)(a1 + 16);
    v4 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    v5 = (v8 >> 2) & 1;
    goto LABEL_8;
  }
  v6 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)(v6 - 58) <= 4 )
    goto LABEL_7;
  if ( (unsigned int)(v6 - 34) <= 5 )
    return sub_B77A30(a1) == 0;
  if ( (unsigned int)(v6 - 59) > 2 )
    return 1;
  return sub_B97230(a1) == 0;
}
