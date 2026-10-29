/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38D00
// Address: 0x00038D00

//----- (00038D00) --------------------------------------------------------
int __fastcall sub_38D00(int a1)
{
  unsigned int v2; // r2
  int v3; // r5
  int v4; // r3
  _BYTE *v5; // r0
  unsigned int v7; // r5
  int v8; // r6
  unsigned int v9; // r5
  unsigned int v10; // r2
  bool v11; // cf
  int v12; // r5
  char *v13; // r0
  unsigned int v14; // r5

  v2 = *(unsigned __int8 *)(a1 + 120);
  if ( v2 == 139 )
    goto LABEL_35;
  if ( v2 <= 0x8B )
  {
    if ( v2 <= 0x7F )
    {
      if ( v2 < 0x60 )
      {
        if ( v2 < 0x40 )
          goto LABEL_8;
        sub_3E53C(*(_DWORD **)(a1 + 112), *(_DWORD *)(a1 + 116) - 1, v2 - 32);
        goto LABEL_15;
      }
      v12 = *(_DWORD *)(a1 + 116);
      if ( v12 )
      {
        v8 = *(_DWORD *)(a1 + 112);
        v9 = v12 - 1;
        *(_DWORD *)(a1 + 116) = v9;
        v10 = *(_DWORD *)(v8 + 4);
        v11 = v9 >= v10;
        if ( v9 <= v10 )
        {
LABEL_19:
          if ( !v11 )
LABEL_20:
            *(_DWORD *)(v8 + 4) = v9;
LABEL_15:
          *(_BYTE *)(a1 + 120) = -87;
          return 0;
        }
LABEL_24:
        v13 = *(char **)v8;
        if ( v9 > *(_DWORD *)(v8 + 8) )
        {
          v13 = (char *)sub_77EB0(v8, *(void **)v8, v9, 1u);
          v10 = *(_DWORD *)(v8 + 4);
          *(_DWORD *)v8 = v13;
        }
        memset(&v13[v10], 0, v9 - v10);
        goto LABEL_20;
      }
LABEL_31:
      if ( !under_debugger )
        sub_78AFC(708);
      __und(0xFFu);
    }
    if ( v2 != 137 )
    {
      if ( v2 > 0x89 || v2 == 136 )
      {
        sub_3E53C(*(_DWORD **)(a1 + 112), *(_DWORD *)(a1 + 116) - 2, v2 - 4);
        *(_BYTE *)(a1 + 120) = -87;
        return 0;
      }
      goto LABEL_8;
    }
LABEL_35:
    sub_3E53C(*(_DWORD **)(a1 + 112), *(_DWORD *)(a1 + 116) - 3, v2 - 4);
    *(_BYTE *)(a1 + 120) = -87;
    return 0;
  }
  if ( v2 == 143 )
    goto LABEL_37;
  if ( v2 <= 0x8F )
  {
    if ( v2 != 141 )
    {
      v7 = *(_DWORD *)(a1 + 116);
      if ( v7 > 1 )
      {
        v8 = *(_DWORD *)(a1 + 112);
        v9 = v7 - 2;
        *(_DWORD *)(a1 + 116) = v9;
        v10 = *(_DWORD *)(v8 + 4);
        v11 = v9 >= v10;
        if ( v9 <= v10 )
          goto LABEL_19;
        goto LABEL_24;
      }
      goto LABEL_31;
    }
LABEL_37:
    v14 = *(_DWORD *)(a1 + 116);
    if ( v14 > 2 )
    {
      v8 = *(_DWORD *)(a1 + 112);
      v9 = v14 - 3;
      *(_DWORD *)(a1 + 116) = v9;
      v10 = *(_DWORD *)(v8 + 4);
      if ( v9 <= v10 )
      {
        if ( v9 >= v10 )
          goto LABEL_15;
        goto LABEL_20;
      }
      goto LABEL_24;
    }
    goto LABEL_31;
  }
  switch ( v2 )
  {
    case 0xDAu:
      sub_3E53C(*(_DWORD **)(a1 + 112), *(_DWORD *)(a1 + 116) - 3, 216);
      *(_BYTE *)(a1 + 120) = -87;
      return 0;
    case 0xF3u:
      sub_3E53C(*(_DWORD **)(a1 + 112), *(_DWORD *)(a1 + 116) - 1, 244);
      *(_BYTE *)(a1 + 120) = -87;
      return 0;
    case 0xD9u:
      sub_3E53C(*(_DWORD **)(a1 + 112), *(_DWORD *)(a1 + 116) - 2, 215);
      *(_BYTE *)(a1 + 120) = -87;
      return 0;
  }
LABEL_8:
  v3 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -87;
  v4 = *(_DWORD *)(v3 + 4);
  if ( (unsigned int)(v4 + 1) > *(_DWORD *)(v3 + 8) )
  {
    v5 = sub_77EB0(v3, *(void **)v3, v4 + 1, 1u);
    v4 = *(_DWORD *)(v3 + 4);
    *(_DWORD *)v3 = v5;
  }
  else
  {
    v5 = *(_BYTE **)v3;
  }
  v5[v4] = -87;
  ++*(_DWORD *)(v3 + 4);
  ++*(_DWORD *)(a1 + 116);
  *(_BYTE *)(a1 + 120) = -87;
  return 0;
}
// D5C00: using guessed type char under_debugger;
