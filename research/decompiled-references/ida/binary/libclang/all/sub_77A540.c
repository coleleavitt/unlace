unsigned __int8 __fastcall sub_77A540(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int8 result; // al
  int v6; // edx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int8 v11; // dl
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int8 v15; // dl

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
  if ( *(_DWORD *)v4 != 1 || *(_BYTE *)(v4 + 16) != 95 )
    return result;
  v6 = *(_BYTE *)(a1 + 28) & 0x7F;
  v7 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)(v6 - 47) <= 2 )
    return 1;
  if ( (_BYTE)v7 == 30 )
  {
    v8 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v8 = *(_QWORD *)v8;
    v9 = *(_BYTE *)(v8 + 8) & 0x7F;
    if ( (unsigned __int8)v9 <= 0x10u )
    {
      v10 = 65922;
      result = _bittest64(&v10, v9);
      if ( result )
        goto LABEL_14;
      return result;
    }
    if ( (unsigned __int8)v9 > 0x1Fu )
    {
      if ( (unsigned __int8)v9 <= 0x25u || (v11 = (v9 + 72) & 0x7F, result = 0, v11 <= 3u) )
      {
LABEL_14:
        a1 = **(_QWORD **)(a1 + 56);
        if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 38 <= 6 )
          return sub_76AB10(a1, v7);
        return 1;
      }
      return result;
    }
    return 0;
  }
  if ( (unsigned int)(v6 - 38) <= 6 )
  {
    if ( (_BYTE)v7 == 41 )
      return result;
    if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
      return sub_76AB10(a1, v7);
    return 1;
  }
  if ( (_BYTE)v7 != 50 )
    return result;
  v12 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v12 = *(_QWORD *)v12;
  v13 = *(_BYTE *)(v12 + 8) & 0x7F;
  if ( (unsigned __int8)v13 > 0x10u )
  {
    v15 = (v13 + 96) & 0x7F;
    result = 0;
    if ( v15 > 5u )
      return result;
  }
  else
  {
    v14 = 65922;
    result = _bittest64(&v14, v13);
    if ( !result )
      return result;
  }
  a1 = sub_7A8C80(a1);
  if ( a1 )
    return sub_76AB10(a1, v7);
  return 1;
}

