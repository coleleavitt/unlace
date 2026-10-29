bool __fastcall sub_B4ECE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  bool result; // al
  unsigned __int8 v6; // dl
  unsigned __int64 v7; // rax
  unsigned __int8 v8; // cl
  unsigned __int64 v9; // rax
  unsigned __int8 v10; // cl
  __int64 v11; // rax

  if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 40);
  if ( (v2 & 7) != 0 )
    return 0;
  v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v3 )
    return 0;
  v4 = *(_QWORD *)(v3 + 16);
  result = 0;
  if ( *(_DWORD *)v4 == 1 && *(_BYTE *)(v4 + 16) == 95 )
  {
    v6 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( (unsigned int)v6 - 49 <= 2 )
      return 1;
    if ( v6 == 32 )
    {
      v7 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
        v7 = *(_QWORD *)v7;
      v8 = *(_BYTE *)(v7 + 8) & 0x7F;
      if ( v8 > 0x12u )
      {
        if ( v8 > 0x21u && (v8 <= 0x27u || ((v8 + 70) & 0x7Fu) <= 3) )
        {
LABEL_17:
          a1 = **(_QWORD **)(a1 + 56);
          if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 40 <= 6 )
            return sub_990BA0(a1);
          return 1;
        }
      }
      else if ( ((1LL << v8) & 0x40182) != 0 )
      {
        goto LABEL_17;
      }
      return 0;
    }
    if ( (unsigned int)v6 - 40 <= 6 )
    {
      if ( v6 == 43 )
        return result;
      if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
        return sub_990BA0(a1);
      return 1;
    }
    if ( v6 != 52 )
      return result;
    v9 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v9 = *(_QWORD *)v9;
    v10 = *(_BYTE *)(v9 + 8) & 0x7F;
    if ( v10 > 0x12u )
    {
      result = 0;
      if ( ((v10 + 94) & 0x7Fu) > 5 )
        return result;
    }
    else if ( ((1LL << v10) & 0x40182) == 0 )
    {
      return 0;
    }
    v11 = sub_B770E0(a1);
    return !v11 || sub_990BA0(v11);
  }
  return result;
}

