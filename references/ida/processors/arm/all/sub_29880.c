__int64 __fastcall sub_29880(__int64 a1, _DWORD *a2, char a3)
{
  _DWORD *v4; // rdi
  unsigned __int16 v5; // ax
  int v7; // eax
  int v8; // r8d
  __int16 v9; // ax

  v4 = a2;
  v5 = *(_WORD *)(a1 + 24);
  if ( v5 == 42 )
  {
    if ( !a2 )
      return 1;
    v7 = *(_DWORD *)(a1 + 64);
    goto LABEL_11;
  }
  if ( v5 > 0x2Au )
  {
    if ( v5 == 343 )
      goto LABEL_14;
    if ( v5 <= 0x157u )
    {
      LODWORD(a2) = 0;
      if ( (unsigned __int16)(v5 - 115) > 2u )
        return (unsigned int)a2;
      goto LABEL_14;
    }
    if ( v5 != 370 )
      return 0;
    v7 = 0;
    if ( !a2 )
      return 1;
LABEL_11:
    *a2 = v7;
    return 1;
  }
  if ( v5 <= 0x1Fu )
  {
    LODWORD(a2) = 0;
    if ( v5 <= 0x1Du || *(_WORD *)(a1 + 86) != 13 )
      return (unsigned int)a2;
    v9 = *(_WORD *)(a1 + 28) & 0xB0;
    if ( v9 == 128 )
    {
      if ( *(_QWORD *)(a1 + 96) == 4 )
      {
LABEL_25:
        if ( v4 )
          *v4 = 1 << *(_WORD *)(a1 + 46);
        return 1;
      }
    }
    else if ( v9 == 32 && !*(_QWORD *)(a1 + 96) )
    {
      goto LABEL_25;
    }
    return (unsigned int)a2;
  }
  if ( v5 == 33 )
  {
LABEL_14:
    v8 = *(_DWORD *)(a1 + 28);
    if ( (v8 & 0x90) != 0x80 )
    {
      LOBYTE(a2) = a3 & ((v8 & 0x90) == 0);
      if ( !(_BYTE)a2 )
        return (unsigned int)a2;
    }
    LODWORD(a2) = 0;
    if ( *(_BYTE *)(a1 + 41) != 1 )
      return (unsigned int)a2;
    LOBYTE(a2) = *(_WORD *)(a1 + 46) == 161 || *(_WORD *)(a1 + 46) == 13;
    if ( !(_BYTE)a2 )
      return (unsigned int)a2;
    if ( (v8 & 0x40) == 0 )
    {
      LODWORD(a2) = 0;
      if ( (*(_BYTE *)(a1 + 105) & 0x20) == 0 )
        return (unsigned int)a2;
    }
    if ( v4 )
      *v4 = *(_QWORD *)(a1 + 104);
    return 1;
  }
  return 0;
}
