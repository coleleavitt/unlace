/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BCA0
// Address: 0x0004BCA0

//----- (0004BCA0) --------------------------------------------------------
_BYTE *__fastcall sub_4BCA0(int a1, _BYTE *a2)
{
  _BYTE *v2; // r5
  int v3; // r4
  int v5; // r3
  _BOOL4 v7; // r0
  int v8; // r10
  _BYTE *v9; // r6
  _BYTE *v10; // r11
  bool v11; // zf
  int v12; // r3
  int v13; // lr
  int v14; // r0
  int v15; // t1
  bool v16; // zf
  _BYTE *v17; // r3
  int v19; // t1
  int v20; // r3
  int v21; // r1

  v2 = a2;
  v3 = (unsigned __int8)*a2;
  if ( !*a2 )
    goto LABEL_32;
  v5 = *(unsigned __int8 *)(a1 + 76);
  v7 = 1;
  v8 = 0;
  v2 = a2;
  v9 = a2;
  while ( v5 )
  {
    while ( 1 )
    {
      v13 = (unsigned __int8)v9[1];
      if ( v3 == 42 )
      {
        if ( v13 == 47 )
        {
          if ( (*(_DWORD *)(a1 + 648) & 1) != 0 )
            goto LABEL_36;
          goto LABEL_38;
        }
        if ( v13 == 41 )
          break;
      }
      v3 = (unsigned __int8)*++v9;
      if ( !v13 )
        goto LABEL_26;
LABEL_23:
      v5 = *(unsigned __int8 *)(a1 + 76);
      if ( !*(_BYTE *)(a1 + 76) )
        goto LABEL_4;
    }
    if ( (*(_DWORD *)(a1 + 648) & 2) != 0 )
    {
LABEL_36:
      *(_BYTE *)(a1 + 76) = 0;
      v19 = (unsigned __int8)v9[2];
      v9 += 2;
      v3 = v19;
      goto LABEL_22;
    }
LABEL_38:
    v3 = (unsigned __int8)*++v9;
  }
LABEL_4:
  if ( v3 == 34 )
  {
    v8 ^= 1u;
    v10 = v9 + 1;
    v7 = 1;
LABEL_20:
    *v2++ = v3;
    goto LABEL_21;
  }
  v10 = v9 + 1;
  if ( v8 )
    goto LABEL_20;
  if ( v3 == 47 )
  {
    v20 = (unsigned __int8)v9[1];
    v21 = *(_DWORD *)(a1 + 648);
    if ( v20 == 47 )
    {
      if ( (v21 & 4) != 0 )
        goto LABEL_26;
      v10 = v9 + 1;
      if ( (v21 & 1) != 0 )
        goto LABEL_11;
    }
    else
    {
      v10 = v9 + 1;
      if ( (v21 & 1) != 0 )
        goto LABEL_48;
    }
  }
  else
  {
    if ( v3 == 59 )
    {
      if ( (*(_DWORD *)(a1 + 648) & 8) != 0 )
        goto LABEL_26;
      v10 = v9 + 1;
      goto LABEL_11;
    }
    v10 = v9 + 1;
    if ( v3 != 40 )
      goto LABEL_11;
    if ( (*(_DWORD *)(a1 + 648) & 2) != 0 )
    {
      v20 = (unsigned __int8)v9[1];
LABEL_48:
      if ( v20 == 42 )
      {
        *(_BYTE *)(a1 + 76) = 1;
        v3 = (unsigned __int8)v9[2];
        v9 = v10 + 1;
        goto LABEL_22;
      }
LABEL_11:
      v11 = v3 == 9;
      if ( v3 != 9 )
        v11 = v3 == 32;
      v12 = v11;
      if ( v7 )
      {
        if ( v12 )
        {
LABEL_21:
          v3 = (unsigned __int8)v9[1];
          v9 = v10;
          goto LABEL_22;
        }
        goto LABEL_18;
      }
LABEL_43:
      if ( v12 || sub_4B1C0(v3) )
      {
        v7 = 1;
        goto LABEL_20;
      }
      goto LABEL_19;
    }
  }
  if ( !v7 )
  {
    v12 = 0;
    goto LABEL_43;
  }
LABEL_18:
  if ( !sub_4B1C0(v3) )
  {
LABEL_19:
    v7 = strchr("!%&*+-/<=>^|:?(),.[\\]`{};~@#", v3) != nullptr;
    goto LABEL_20;
  }
  v3 = (unsigned __int8)v9[1];
  v7 = 1;
  v9 = v10;
LABEL_22:
  if ( v3 )
    goto LABEL_23;
LABEL_26:
  if ( v2 <= a2 )
  {
LABEL_32:
    *v2 = 0;
    return v2;
  }
  while ( 1 )
  {
    v15 = (unsigned __int8)*--v2;
    v14 = v15;
    v16 = v15 == 9;
    if ( v15 != 9 )
      v16 = v14 == 32;
    if ( !v16 && !sub_4B1C0(v14) )
      break;
    if ( a2 == v2 )
      goto LABEL_32;
  }
  *v17 = 0;
  return v17;
}
// 4BDB4: conditional instruction was optimized away because r4.4 is in (==28|==2F)
// 4BDB8: conditional instruction was optimized away because r4.4 is in (==28|==2F)
// 4BE12: variable 'v17' is possibly undefined
