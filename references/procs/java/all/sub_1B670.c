__int64 __fastcall sub_1B670(__int64 a1, __int64 a2, const char *a3)
{
  char v3; // al
  int v5; // ebp
  _BYTE v7[4]; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int16 v8; // [rsp+12h] [rbp-36h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v3 = *(_BYTE *)(a2 + 41);
  v9 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 56);
  if ( v3 == 2 )
  {
    if ( *(_BYTE *)(a2 + 72) )
      return 0xFFFFFFFFLL;
  }
  else if ( !v3 )
  {
    if ( *(char *)(a2 + 72) < 0 )
      return 0xFFFFFFFFLL;
    v5 -= *(_DWORD *)(a1 + 33165);
    if ( v5 < 0 )
      return 0xFFFFFFFFLL;
  }
  if ( netnode_supval(*(_QWORD *)(a1 + 33193), (unsigned int)v5, v7, 10, 83) == 10
    && sub_1B440(a1, v8, (_BYTE *)(a1 + 33386), 0x8000, 13)
    && !strcmp(a3, (const char *)(a1 + 33386)) )
  {
    return (unsigned int)v5;
  }
  return 0xFFFFFFFFLL;
}
