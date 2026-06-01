bool __fastcall sub_F99120(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // r13
  const char *v5; // r12
  bool result; // al
  char v7; // al
  char v8; // al

  v4 = *(_BYTE *)(a3 + 15);
  v5 = (const char *)(*a1 + *(unsigned int *)(a2 + 8));
  if ( (v4 & 1) != 0 && strchr((const char *)(*a1 + *(unsigned int *)(a2 + 8)), 102) )
    return 0;
  if ( (v4 & 8) == 0 && *(char *)(a2 + 18) < 0 )
    return 0;
  if ( (v4 & 2) != 0 && *(_WORD *)(a2 + 16) == 10 )
    return 0;
  if ( (*(_BYTE *)(a3 + 4) & 4) == 0 && (*(_BYTE *)(a2 + 18) & 1) != 0 )
    return 0;
  if ( *(char *)a3 >= 0 && (*(_BYTE *)(a2 + 18) & 0x10) != 0 )
    return 0;
  if ( (*(_BYTE *)(a3 + 89) & 1) == 0 && (*(_BYTE *)(a2 + 19) & 0x10) != 0 )
    return 0;
  if ( (*(_BYTE *)(a3 + 2) & 4) == 0 && *(_WORD *)(a2 + 18) == 8 )
    return 0;
  if ( (*(_BYTE *)(a3 + 47) & 0x20) == 0 && (*(_BYTE *)(a2 + 19) & 8) != 0 )
    return 0;
  v7 = *(_BYTE *)(a3 + 60);
  if ( (v7 & 1) == 0 && (*(_BYTE *)(a2 + 19) & 1) != 0 )
    return 0;
  if ( (v7 & 2) == 0 && (*(_BYTE *)(a2 + 19) & 2) != 0
    || ((unsigned int)sub_FC6D50(a3) <= 0xC7 || (*(_BYTE *)(a3 + 20) & 0x40) == 0) && (*(_BYTE *)(a2 + 19) & 4) != 0 )
  {
    return 0;
  }
  if ( !*(_DWORD *)(a3 + 64) && *(_WORD *)(a2 + 18) == 32 )
    return 0;
  if ( (*(_BYTE *)(a3 + 60) & 0x10) == 0 && *(_WORD *)(a2 + 18) == 64 )
    return 0;
  v8 = *(_BYTE *)(a3 + 1);
  if ( (v8 & 8) == 0 && *(_WORD *)(a2 + 18) == 4 )
    return 0;
  if ( v8 >= 0 && strchr(v5, 71) )
    return 0;
  result = 1;
  if ( (*(_BYTE *)a3 & 8) == 0 )
    return *(_WORD *)(a2 + 18) != 0x2000;
  return result;
}

