__int64 __fastcall enum_type_data_t__set_value_repr(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rsi
  int v8; // ecx
  int v10; // r8d
  char v11; // di
  char v12; // si

  v3 = *a2;
  if ( !v3 )
    return 0;
  v5 = (v3 & 0xF) - 1;
  if ( v5 <= 5 )
  {
    v10 = dword_238B490[v5];
    v6 = *(_DWORD *)(a1 + 48);
    v11 = *(_BYTE *)(a1 + 52) & 0x9F;
    *(_BYTE *)(a1 + 52) &= 0x9Fu;
    if ( (v3 & 0x400) != 0 )
    {
      BYTE1(v6) = BYTE1(v6) & 0xF8 | 4;
      *(_DWORD *)(a1 + 48) = v6;
      if ( v10 != 8 )
      {
        if ( v10 <= 8 )
          goto LABEL_13;
        if ( v10 != 10 )
          goto LABEL_6;
        v12 = 64;
        goto LABEL_19;
      }
    }
    else
    {
      BYTE1(v6) &= 0xF8u;
      *(_DWORD *)(a1 + 48) = v6;
      if ( v10 != 8 )
      {
        if ( v10 <= 8 )
        {
LABEL_13:
          if ( v10 == 1 )
          {
            *(_BYTE *)(a1 + 52) = v11 | 0x20;
          }
          else
          {
            BYTE1(v6) |= 2u;
            *(_DWORD *)(a1 + 48) = v6;
          }
          goto LABEL_6;
        }
        v12 = 96;
        if ( v10 != 10 )
          goto LABEL_6;
LABEL_19:
        *(_BYTE *)(a1 + 52) = v12 | v11;
        goto LABEL_6;
      }
    }
    BYTE1(v6) |= 1u;
    *(_DWORD *)(a1 + 48) = v6;
    goto LABEL_6;
  }
  *(_BYTE *)(a1 + 52) &= 0x9Fu;
  v6 = *(_DWORD *)(a1 + 48);
  if ( (v3 & 0x400) != 0 )
    BYTE1(v6) = BYTE1(v6) & 0xF8 | 4;
  else
    BYTE1(v6) &= 0xF8u;
  *(_DWORD *)(a1 + 48) = v6;
LABEL_6:
  v7 = *a2;
  v8 = v6;
  BYTE1(v6) |= 8u;
  BYTE1(v8) &= ~8u;
  if ( (v7 & 0x800) == 0 )
    v6 = v8;
  *(_DWORD *)(a1 + 48) = v6;
  return 0;
}

