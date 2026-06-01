__int64 __fastcall sub_215E580(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v4; // al
  char v5; // r9
  bool v6; // r8
  bool v7; // r10
  bool v8; // zf
  int v9; // edx
  __int64 v10; // r10
  int v11; // ecx
  int v13; // edx
  _DWORD *v14; // rsi
  bool v15; // r11

  v3 = *(_QWORD *)(a2 + 96);
  if ( !v3 )
  {
    v4 = *(_BYTE *)(a3 + 18);
    v10 = a3;
    v5 = *(_BYTE *)(a3 + 19);
    v6 = v4 == 2;
    v15 = v4 == 2 || v4 == 105;
    if ( v15 )
    {
      if ( v5 )
      {
        if ( v4 == 105 )
        {
          v11 = 2;
          if ( a3 != -20 )
            v11 = (*(_DWORD *)(a3 + 24) != 3) + 6;
          goto LABEL_36;
        }
        v15 = v4 == 2;
        v11 = 2;
        goto LABEL_50;
      }
      v15 = v4 == 2;
      v11 = 2;
    }
    else
    {
      v11 = 0;
      if ( v5 )
      {
LABEL_50:
        v6 = v15;
LABEL_36:
        v9 = *(_DWORD *)(a3 + 12);
LABEL_19:
        if ( v9 == -1 )
          v11 |= 8u;
LABEL_21:
        v13 = v11;
        if ( v4 == 103 )
        {
          LOBYTE(v13) = v11 | 0x80;
          v11 = v13;
        }
        if ( v3 )
          goto LABEL_9;
        goto LABEL_24;
      }
    }
    v6 = v15;
    v5 = 0;
    goto LABEL_36;
  }
  v3 = a3;
  if ( !a3 )
    BUG();
  v4 = *(_BYTE *)(a3 + 16);
  v5 = *(_BYTE *)(a3 + 17);
  v6 = v4 == 2;
  v7 = v4 == 2 || v4 == 105;
  if ( !v7 )
  {
    v11 = 0;
    if ( v5 )
    {
LABEL_16:
      v6 = v7;
      goto LABEL_17;
    }
LABEL_48:
    v6 = v7;
    v5 = 0;
LABEL_17:
    v9 = *(__int16 *)(a3 + 12);
    v10 = 0;
    if ( (unsigned __int16)v9 <= 0xFEFFu )
      goto LABEL_21;
    goto LABEL_18;
  }
  if ( !v5 )
  {
    v7 = v4 == 2;
    v11 = 2;
    goto LABEL_48;
  }
  if ( v4 != 105 )
  {
    v7 = v4 == 2;
    v11 = 2;
    goto LABEL_16;
  }
  if ( a3 == -18 )
  {
    v9 = MEMORY[0xFFFFFFFFFFFFFFFA];
    v11 = 2;
    if ( MEMORY[0xFFFFFFFFFFFFFFFA] <= 0xFEFFu )
    {
LABEL_13:
      if ( !v6 )
        goto LABEL_14;
LABEL_39:
      if ( !*(_WORD *)(v3 + 12) )
      {
        if ( !*(_DWORD *)(v3 + 8) )
        {
LABEL_43:
          v14 = (_DWORD *)(v3 + 8);
          goto LABEL_44;
        }
        v11 |= 0x10u;
      }
LABEL_42:
      if ( *(_WORD *)(v3 + 12) )
        goto LABEL_14;
      goto LABEL_43;
    }
    goto LABEL_18;
  }
  v8 = *(_DWORD *)(a3 + 22) == 3;
  v9 = *(__int16 *)(a3 + 12);
  v10 = 0;
  v11 = !v8 + 6;
  if ( (unsigned __int16)v9 > 0xFEFFu )
  {
LABEL_18:
    v10 = 0;
    goto LABEL_19;
  }
  if ( v3 )
  {
LABEL_9:
    if ( v6 )
    {
      if ( *(_WORD *)(v3 + 12) == 0xFFFF )
      {
        v6 = 1;
        if ( !v5 )
          goto LABEL_42;
        goto LABEL_12;
      }
      if ( !v5 )
        goto LABEL_39;
    }
    else if ( !v5 )
    {
LABEL_14:
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_DWORD *)a1 = v11;
      return a1;
    }
    if ( v4 != 3 )
      goto LABEL_13;
LABEL_12:
    LOBYTE(v11) = v11 | 0x80;
    if ( v3 )
      goto LABEL_13;
    goto LABEL_27;
  }
LABEL_24:
  if ( v6 )
  {
    if ( *(_DWORD *)(v10 + 12) == -1 )
    {
      if ( !v5 )
        goto LABEL_55;
      goto LABEL_12;
    }
    if ( !v5 )
      goto LABEL_28;
  }
  else if ( !v5 )
  {
    goto LABEL_14;
  }
  if ( v4 == 3 )
    goto LABEL_12;
LABEL_27:
  if ( !v6 )
    goto LABEL_14;
LABEL_28:
  if ( *(_DWORD *)(v10 + 12) )
    goto LABEL_55;
  if ( *(_DWORD *)(v10 + 8) )
  {
    v11 |= 0x10u;
LABEL_55:
    if ( *(_DWORD *)(v10 + 12) )
      goto LABEL_14;
  }
  v14 = (_DWORD *)(v10 + 8);
LABEL_44:
  if ( !*v14 )
    v11 |= 1u;
  *(_BYTE *)(a1 + 8) &= ~1u;
  *(_DWORD *)a1 = v11;
  return a1;
}
