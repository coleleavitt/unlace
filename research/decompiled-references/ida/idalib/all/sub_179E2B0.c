__int64 __fastcall sub_179E2B0(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int8 v3; // al
  __int64 v4; // r12
  unsigned __int8 v5; // al
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v9; // rbx

  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_17;
  v2 = **(_QWORD **)(a2 + 16);
  if ( !v2 )
    goto LABEL_20;
  v3 = *(_BYTE *)(v2 + 28) & 0x7F;
  if ( (unsigned int)v3 - 53 <= 1 || ((v3 + 52) & 0x7Fu) <= 1 )
  {
    v4 = sub_B72ED0(v2);
    if ( v4 )
      goto LABEL_6;
LABEL_20:
    if ( !a1[33] )
    {
      LOBYTE(v2) = v2 == 0;
      return (unsigned int)v2;
    }
    goto LABEL_17;
  }
  v4 = **(_QWORD **)(a2 + 16);
LABEL_6:
  if ( !a1[32] && *(char *)(v4 + 28) < 0 )
    goto LABEL_17;
  v5 = *(_BYTE *)(v4 + 28) & 0x7F;
  if ( (unsigned int)v5 - 68 <= 6 )
  {
    v6 = (v5 + 67) & 0x7F;
    if ( (unsigned __int8)v6 <= 0xBu )
    {
      v7 = 2689;
      if ( _bittest64(&v7, v6) )
        return (unsigned __int8)a1[34];
      goto LABEL_17;
    }
  }
  LOBYTE(v2) = v5 == 20 || (unsigned int)v5 - 58 <= 9;
  if ( !(_BYTE)v2 )
  {
LABEL_17:
    LODWORD(v2) = 0;
    return (unsigned int)v2;
  }
  if ( !a1[35] )
  {
    if ( a1[34] && (unsigned int)v5 - 59 <= 2 && sub_B97450(v4) )
    {
      v9 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
        v9 = *(_QWORD *)v9;
      if ( v9 )
        v9 -= 64LL;
      if ( !sub_B97230(v9) )
        LOBYTE(v2) = (*(_BYTE *)(v9 + 28) & 0x7Fu) - 60 <= 1;
      return (unsigned int)v2;
    }
    goto LABEL_17;
  }
  return (unsigned int)v2;
}
