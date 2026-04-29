__int64 __fastcall sub_6AE60(__int64 a1)
{
  char v2; // bp
  char v3; // al
  unsigned __int64 *v4; // rax
  char v5; // dl
  __int16 v6; // cx
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v10; // [rsp+168h] [rbp-20h] BYREF

  v10 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 14 )
    return 0;
  if ( *(_BYTE *)(a1 + 57) != 1 )
    return 0;
  if ( *(_WORD *)(a1 + 62) != 15 )
    return 0;
  if ( *(_BYTE *)(a1 + 97) != 1 )
    return 0;
  if ( *(_WORD *)(a1 + 102) != 15 )
    return 0;
  if ( *(_BYTE *)(a1 + 137) != 8 )
    return 0;
  v2 = *(_BYTE *)(a1 + 169);
  if ( v2 || *(_QWORD *)(a1 + 144) != 2 )
    return 0;
  v3 = *(_BYTE *)(a1 + 48) & 0xF;
  if ( v3 != 11 )
  {
    if ( (*(_BYTE *)(a1 + 48) & 0xFu) > 0xB )
    {
      if ( v3 == 13 )
        goto LABEL_14;
      return 0;
    }
    if ( v3 != 3 )
    {
      if ( v3 == 9 )
      {
LABEL_14:
        v2 = 1;
        goto LABEL_15;
      }
      return 0;
    }
  }
LABEL_15:
  v4 = (unsigned __int64 *)&v9;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( v4 != &v10 );
  if ( !(unsigned int)decode_insn() )
    return 0;
  v5 = *(_BYTE *)(a1 + 141);
  v6 = *(_WORD *)(a1 + 142);
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v6;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v5;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42) + 4LL;
  **(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFBFB | 4;
  v7 = *(_QWORD *)(a1 + 864);
  v8 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v7 + 40) = 25344;
  *(_QWORD *)(v7 + 48) = 0;
  *(_QWORD *)(v7 + 56) = v8;
  *(_QWORD *)(v7 + 64) = -1;
  *(_BYTE *)(v7 + 72) = v2;
  *(_WORD *)(v7 + 73) = 0;
  *(_BYTE *)(v7 + 75) = 0;
  return 1;
}
