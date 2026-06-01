__int64 __fastcall sub_18C19C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v5; // r14
  _QWORD *v7; // rbp
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdi
  char v10; // al
  unsigned __int8 v11; // al
  int v12; // edx
  unsigned __int64 v13; // rsi
  unsigned __int8 v14; // cl

  if ( !(_BYTE)a4 )
    return 0;
  if ( *(_DWORD *)a2 && *(_DWORD *)(a2 + 4) )
    return 0;
  if ( *(_QWORD *)(a2 + 8) || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
    return 0;
  v5 = *(_QWORD **)(a3 + 8);
  v7 = &v5[*(unsigned int *)(a3 + 16)];
  if ( v5 == v7 )
    return a4;
  while ( 1 )
  {
    v8 = *v5 & 0xFFFFFFFFFFFFFFF8LL;
    v9 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
      v9 = *(_QWORD *)v9;
    v10 = *(_BYTE *)(v9 + 8) & 0x7F;
    if ( v10 == 62 )
      v10 = *(_BYTE *)(sub_B8EAA0(v9) + 8) & 0x7F;
    if ( ((v10 + 70) & 0x7Fu) <= 3 )
      break;
    v11 = *(_BYTE *)(v8 + 28) & 0x7F;
    v12 = v11;
    if ( (unsigned int)v11 - 53 <= 1 )
    {
      v8 = *(_QWORD *)(v8 + 64);
      v11 = *(_BYTE *)(v8 + 28) & 0x7F;
      v12 = v11;
    }
    else
    {
      v13 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
        v13 = *(_QWORD *)(v13 + 8);
      v14 = *(_BYTE *)(v13 + 8) & 0x7F;
      if ( v14 > 0x12u )
      {
        if ( ((v14 + 94) & 0x7Fu) <= 5 )
          return 0;
      }
      else if ( ((1LL << v14) & 0x40182) != 0 )
      {
        return 0;
      }
    }
    if ( (unsigned int)(v12 - 34) > 5 )
    {
      if ( v11 != 71 )
        return 0;
    }
    else if ( (unsigned int)sub_B75A50(v8, 0) && (*(_BYTE *)(v8 + 29) & 2) != 0 )
    {
      return 0;
    }
    if ( v7 == ++v5 )
      return a4;
  }
  return 0;
}
