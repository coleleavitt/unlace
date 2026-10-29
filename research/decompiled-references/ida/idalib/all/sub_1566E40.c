__int64 __fastcall sub_1566E40(__int64 a1, _WORD *a2, __int64 a3, char a4)
{
  unsigned int v6; // r12d
  int v7; // ebp
  unsigned int v8; // ebx
  unsigned __int16 v9; // dx
  int v11; // eax
  __int64 *v12; // rdi
  __int64 *v13; // rdi
  int v14; // [rsp+Ch] [rbp-4Ch]
  _WORD v15[29]; // [rsp+1Eh] [rbp-3Ah] BYREF

  v6 = a4 & 5;
  v7 = a4 & 4;
  v8 = 1;
  v14 = a4 & 1;
  while ( 1 )
  {
    v9 = *(_WORD *)(a1 + 32);
    if ( *a2 == v9 )
      break;
    if ( *a2 == 1 && !v6 )
    {
      if ( v9 != 1 )
      {
        do
          sub_149F520(a1, 0);
        while ( *(_WORD *)(a1 + 32) != 1 );
      }
      return 1;
    }
    if ( v9 == 61 )
    {
      v13 = *(__int64 **)(a1 + 8);
      v8 = 0;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v13, (int *)(a1 + 16));
      v15[0] = 62;
      sub_1566E40(a1, v15, 1, v6);
    }
    else if ( v9 > 0x3Du )
    {
      if ( v9 > 0x1C3u )
      {
        if ( v9 >= 0x1C8u && (v9 <= 0x1CAu || v9 == 460) )
          return 0;
        goto LABEL_34;
      }
      if ( v9 >= 0x1C2u )
      {
        if ( *(_BYTE *)(a1 + 2152) )
          return 0;
        goto LABEL_26;
      }
      if ( v9 == 63 )
      {
        if ( v14 )
          return 0;
LABEL_34:
        v8 = 0;
        sub_149F520(a1, 0);
      }
      else
      {
        if ( v9 <= 0x1BEu )
          goto LABEL_34;
        if ( *(_BYTE *)(a1 + 2154) )
          return 0;
LABEL_26:
        v11 = *(_DWORD *)(a1 + 20);
        v12 = *(__int64 **)(a1 + 8);
        if ( !v11 )
          v11 = *(_DWORD *)(a1 + 16);
        v8 = 0;
        *(_DWORD *)(a1 + 40) = v11;
        sub_14634E0(v12, (int *)(a1 + 16));
      }
    }
    else if ( v9 == 21 )
    {
      LOBYTE(v8) = (*(_WORD *)(a1 + 90) == 0) | v8;
      if ( !(_BYTE)v8 )
        return v8;
      v8 = 0;
      sub_14789E0(a1);
    }
    else if ( v9 <= 0x15u )
    {
      if ( v9 == 3 )
      {
        v8 = 0;
        if ( !v7 )
          sub_1566D30(a1);
        return v8;
      }
      if ( v9 != 20 )
      {
        if ( v9 == 1 )
          return 0;
        goto LABEL_34;
      }
      sub_14789E0(a1);
      v8 = 0;
      if ( v7 )
        sub_15671A0(a1, 21, 4);
      else
        sub_15671A0(a1, 21, 0);
    }
    else if ( v9 == 23 )
    {
      LOBYTE(v8) = (*(_WORD *)(a1 + 88) == 0) | v8;
      if ( !(_BYTE)v8 )
        return v8;
      v8 = 0;
      sub_146A990(a1);
    }
    else if ( v9 < 0x17u )
    {
      sub_146A990(a1);
      v8 = 0;
      if ( v7 )
      {
        v15[0] = 23;
        sub_1566E40(a1, v15, 1, 4);
      }
      else
      {
        sub_15671A0(a1, 23, 0);
      }
    }
    else if ( v9 == 24 )
    {
      sub_1478A90(a1);
      v8 = 0;
      if ( v7 )
        sub_15671A0(a1, 25, 4);
      else
        sub_15671A0(a1, 25, 0);
    }
    else
    {
      if ( v9 != 25 )
        goto LABEL_34;
      LOBYTE(v8) = (*(_WORD *)(a1 + 92) == 0) | v8;
      if ( !(_BYTE)v8 )
        return v8;
      v8 = 0;
      sub_1478A90(a1);
    }
  }
  if ( (a4 & 2) != 0 )
    return 1;
  v8 = 1;
  sub_149F520(a1, 0);
  return v8;
}
