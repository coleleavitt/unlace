unsigned __int8 *__fastcall sub_77F500(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v3; // bl
  int v4; // esi
  unsigned __int8 *v5; // rbp
  unsigned __int8 *v6; // r12
  _BOOL4 v7; // edx
  int v8; // eax
  char v9; // al
  int v11; // ecx

  v3 = *a2;
  if ( !*a2 )
  {
LABEL_32:
    v5 = a2;
    goto LABEL_19;
  }
  v4 = v3;
  v5 = a2;
  v6 = a2;
  v7 = 1;
  v8 = 0;
  while ( !*(_BYTE *)(a1 + 144) )
  {
    if ( v3 == 34 )
    {
      v8 ^= 1u;
      v7 = 1;
      goto LABEL_14;
    }
    if ( !v8 )
    {
      if ( v3 != 47 )
      {
        if ( v3 == 59 )
        {
          if ( (*(_BYTE *)(a1 + 652) & 8) != 0 )
            goto LABEL_16;
        }
        else if ( v3 == 40 )
        {
          if ( (*(_BYTE *)(a1 + 652) & 2) == 0 )
          {
            if ( v7 )
              goto LABEL_11;
LABEL_22:
            v7 = 1;
            if ( (unsigned __int8)(v4 - 11) > 1u )
LABEL_12:
              v7 = strchr("!%&*+-/<=>^|:?(),.[\\]`{};~@#", v4) != nullptr;
LABEL_13:
            v8 = 0;
            goto LABEL_14;
          }
LABEL_27:
          if ( v6[1] == 42 )
          {
            *(_BYTE *)(a1 + 144) = 1;
            ++v6;
            v8 = 0;
            v3 = v6[1];
            goto LABEL_15;
          }
LABEL_28:
          if ( v7 )
          {
LABEL_29:
            if ( v3 == 10 )
            {
LABEL_30:
              v3 = v6[1];
              v7 = 1;
              v8 = 0;
              goto LABEL_15;
            }
            if ( v3 == 13 )
            {
              v3 = v6[1];
              v7 = 1;
              v8 = 0;
              goto LABEL_15;
            }
LABEL_11:
            if ( (unsigned __int8)(v4 - 11) <= 1u )
              goto LABEL_30;
            goto LABEL_12;
          }
          goto LABEL_20;
        }
LABEL_40:
        if ( v7 )
        {
          if ( v3 == 32 || v3 == 9 )
          {
            v3 = v6[1];
            v8 = 0;
            goto LABEL_15;
          }
          goto LABEL_29;
        }
        if ( v3 != 32 && v3 != 9 )
        {
LABEL_20:
          if ( v3 != 10 && v3 != 13 )
            goto LABEL_22;
        }
        v7 = 1;
        goto LABEL_13;
      }
      v11 = *(_DWORD *)(a1 + 652);
      goto LABEL_25;
    }
LABEL_14:
    *v5 = v3;
    v3 = v6[1];
    ++v5;
LABEL_15:
    ++v6;
    v4 = v3;
    if ( !v3 )
      goto LABEL_16;
  }
  v3 = v6[1];
  if ( (_BYTE)v4 != 42 )
    goto LABEL_15;
  if ( v3 != 47 )
  {
    if ( v3 != 41 )
      goto LABEL_15;
    if ( (*(_BYTE *)(a1 + 652) & 2) != 0 )
      goto LABEL_45;
    if ( *(_BYTE *)(a1 + 144) )
    {
      v3 = v6[2];
      ++v6;
      goto LABEL_15;
    }
    ++v6;
    if ( v8 )
      goto LABEL_14;
    v4 = 41;
    goto LABEL_40;
  }
  v11 = *(_DWORD *)(a1 + 652);
  if ( (v11 & 1) != 0 )
  {
LABEL_45:
    *(_BYTE *)(a1 + 144) = 0;
    v3 = (++v6)[1];
    goto LABEL_15;
  }
  if ( *(_BYTE *)(a1 + 144) )
  {
    v3 = v6[2];
    ++v6;
    goto LABEL_15;
  }
  ++v6;
  if ( v8 )
    goto LABEL_14;
LABEL_25:
  if ( v6[1] != 47 )
  {
    v4 = 47;
    if ( (v11 & 1) != 0 )
      goto LABEL_27;
    goto LABEL_60;
  }
  if ( (v11 & 4) == 0 )
  {
    if ( (v11 & 1) != 0 )
    {
      v4 = 47;
      goto LABEL_28;
    }
LABEL_60:
    v7 = strchr("!%&*+-/<=>^|:?(),.[\\]`{};~@#", 47) != nullptr;
    goto LABEL_13;
  }
LABEL_16:
  if ( a2 < v5 )
  {
    while ( 1 )
    {
      v9 = *(v5 - 1);
      if ( (unsigned __int8)(v9 - 9) > 4u && v9 != 32 )
        break;
      if ( a2 == --v5 )
        goto LABEL_32;
    }
  }
LABEL_19:
  *v5 = 0;
  return v5;
}

