__int64 __fastcall Z3_get_sort_kind(_DWORD *a1, __int64 a2)
{
  char v2; // r12
  int *v3; // rdx
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // edx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_2997D0();
  a1[380] = 0;
  if ( !a2 || !*(_DWORD *)(a2 + 8) )
  {
    sub_24EA30((__int64)a1, 3u, "not a valid ast");
    goto LABEL_24;
  }
  v3 = *(int **)(a2 + 24);
  if ( !v3 || (v4 = *v3, *v3 == 4) || v4 == -1 )
  {
    v6 = 0;
    goto LABEL_21;
  }
  v5 = v3[1];
  if ( !v4 )
  {
    v6 = 1;
    if ( !v5 )
      goto LABEL_21;
    if ( !a1[361] )
      goto LABEL_33;
    if ( !a1[360] )
      goto LABEL_35;
    if ( !a1[362] )
      goto LABEL_54;
    if ( a1[363] )
      goto LABEL_14;
LABEL_46:
    if ( v5 != 1 )
      goto LABEL_18;
LABEL_47:
    v6 = 8;
    goto LABEL_21;
  }
  if ( v4 == 5 )
  {
    if ( v5 == 1 )
    {
      v6 = 2;
      goto LABEL_21;
    }
    v6 = 3;
    if ( !v5 )
      goto LABEL_21;
    if ( a1[361] == 5 )
    {
LABEL_33:
      if ( v4 != a1[360] && v4 != a1[362] )
        goto LABEL_13;
      goto LABEL_35;
    }
    if ( a1[360] == 5 )
    {
      if ( a1[363] != 5 )
        goto LABEL_14;
    }
    else
    {
      if ( a1[362] != 5 )
      {
        if ( a1[363] != 5 )
          goto LABEL_14;
        goto LABEL_46;
      }
      if ( a1[363] != 5 )
        goto LABEL_55;
    }
LABEL_37:
    if ( v4 == a1[365] || v4 == a1[366] )
      goto LABEL_18;
    goto LABEL_16;
  }
  if ( a1[361] == v4 )
  {
    v6 = 4;
    if ( !v5 )
      goto LABEL_21;
    goto LABEL_33;
  }
  if ( a1[360] == v4 )
  {
    v6 = 5;
    if ( !v5 )
      goto LABEL_21;
LABEL_35:
    if ( v4 != a1[363] )
      goto LABEL_14;
LABEL_36:
    if ( v5 == 1 )
      goto LABEL_47;
    goto LABEL_37;
  }
  if ( a1[362] != v4 )
  {
LABEL_13:
    if ( a1[363] != v4 )
    {
LABEL_14:
      if ( a1[365] != v4 )
      {
LABEL_15:
        if ( a1[366] != v4 )
          goto LABEL_16;
        v6 = 11;
        if ( !v5 )
          goto LABEL_21;
        v6 = 12;
        if ( v5 == 1 )
          goto LABEL_21;
LABEL_18:
        v6 = 14;
        if ( v4 == 6 )
          goto LABEL_21;
LABEL_24:
        v6 = 1000;
        if ( !v2 )
          return v6;
        goto LABEL_25;
      }
      v6 = 9;
      if ( !v5 )
        goto LABEL_21;
      if ( v5 != 1 )
        goto LABEL_18;
LABEL_50:
      v6 = 10;
      goto LABEL_21;
    }
    v6 = 7;
    if ( !v5 )
      goto LABEL_21;
    goto LABEL_46;
  }
  v6 = 6;
  if ( !v5 )
    goto LABEL_21;
LABEL_54:
  if ( v4 == a1[363] )
    goto LABEL_36;
LABEL_55:
  if ( v4 != a1[365] )
    goto LABEL_15;
  if ( v5 == 1 )
    goto LABEL_50;
  if ( v4 == a1[366] )
    goto LABEL_18;
LABEL_16:
  if ( a1[367] != v4 )
    goto LABEL_18;
  v6 = 13;
  if ( v5 )
    goto LABEL_18;
LABEL_21:
  if ( !v2 )
    return v6;
LABEL_25:
  byte_1C7EBA0 = 1;
  return v6;
}

