/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451570
// Address: 0x0000000000451570

//----- (0000000000451570) ----------------------------------------------------
_BYTE *__fastcall sub_451570(__int64 a1, _BYTE *a2)
{
  int v3; // w19
  _BOOL4 v5; // w2
  _BYTE *v6; // x20
  _BYTE *v7; // x21
  int v8; // w0
  int v9; // w26
  _BYTE *v10; // x23
  _BOOL4 v11; // w0
  int v12; // w1
  bool v13; // zf
  int v15; // t1
  int v16; // w0
  int v17; // w1

  v3 = (unsigned __int8)*a2;
  if ( !*a2 )
  {
LABEL_29:
    *a2 = 0;
    return a2;
  }
  v5 = 1;
  v6 = a2;
  v7 = a2;
  v8 = *(unsigned __int8 *)(a1 + 144);
  v9 = 0;
  while ( v8 )
  {
    while ( 1 )
    {
      v13 = v3 == 42;
      v3 = (unsigned __int8)v7[1];
      if ( v13 )
      {
        if ( v3 == 47 )
        {
          if ( (*(_DWORD *)(a1 + 764) & 1) != 0 )
            goto LABEL_33;
          goto LABEL_35;
        }
        if ( v3 == 41 )
          break;
      }
      ++v7;
      if ( !v3 )
        goto LABEL_22;
LABEL_19:
      v8 = *(unsigned __int8 *)(a1 + 144);
      if ( !*(_BYTE *)(a1 + 144) )
        goto LABEL_4;
    }
    if ( (*(_DWORD *)(a1 + 764) & 2) != 0 )
    {
LABEL_33:
      *(_BYTE *)(a1 + 144) = 0;
      v15 = (unsigned __int8)v7[2];
      v7 += 2;
      v3 = v15;
      goto LABEL_18;
    }
LABEL_35:
    ++v7;
  }
LABEL_4:
  if ( v3 == 34 )
  {
    v9 ^= 1u;
    v10 = v7 + 1;
    v5 = 1;
    goto LABEL_16;
  }
  v10 = v7 + 1;
  if ( v9 )
  {
LABEL_16:
    *v6++ = v3;
    goto LABEL_17;
  }
  if ( v3 == 47 )
  {
    v16 = (unsigned __int8)v7[1];
    v17 = *(_DWORD *)(a1 + 764);
    if ( v16 == 47 )
    {
      if ( (v17 & 4) != 0 )
        goto LABEL_22;
      v10 = v7 + 1;
      if ( (v17 & 1) != 0 )
      {
LABEL_10:
        v11 = v3 == 32;
        if ( v3 == 9 )
          v11 = 1;
        if ( v5 )
        {
          if ( v11 )
          {
LABEL_17:
            v3 = (unsigned __int8)v7[1];
            v7 = v10;
            goto LABEL_18;
          }
          goto LABEL_14;
        }
        goto LABEL_41;
      }
    }
    else
    {
      v10 = v7 + 1;
      if ( (v17 & 1) != 0 )
        goto LABEL_47;
    }
    goto LABEL_39;
  }
  if ( v3 != 59 )
  {
    v10 = v7 + 1;
    if ( v3 != 40 )
      goto LABEL_10;
    if ( (*(_DWORD *)(a1 + 764) & 2) != 0 )
    {
      v16 = (unsigned __int8)v7[1];
LABEL_47:
      if ( v16 == 42 )
      {
        *(_BYTE *)(a1 + 144) = 1;
        v3 = (unsigned __int8)v7[2];
        v7 = v10 + 1;
        goto LABEL_18;
      }
      goto LABEL_10;
    }
LABEL_39:
    if ( v5 )
    {
LABEL_14:
      if ( !sub_450428(v3) )
      {
LABEL_15:
        v5 = strchr("!%&*+-/<=>^|:?(),.[\\]`{};~@#", v3) != nullptr;
        goto LABEL_16;
      }
      v3 = (unsigned __int8)v7[1];
      v5 = 1;
      v7 = v10;
LABEL_18:
      if ( v3 )
        goto LABEL_19;
      goto LABEL_22;
    }
    v11 = v3 == 32;
LABEL_41:
    v5 = 1;
    if ( v11 || sub_450428(v3) )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(a1 + 764) & 8) == 0 )
  {
    v10 = v7 + 1;
    goto LABEL_10;
  }
LABEL_22:
  if ( v6 > a2 )
  {
    while ( 1 )
    {
      v12 = (unsigned __int8)*(v6 - 1);
      v13 = v12 == 32 || v12 == 9;
      if ( !v13 && !sub_450428(*(v6 - 1)) )
        break;
      if ( a2 == --v6 )
        goto LABEL_29;
    }
  }
  *v6 = 0;
  return v6;
}
// 451718: conditional instruction was optimized away because w19.4 is in (==28|==2F)
// 4515F4: variable 'v5' is possibly undefined
