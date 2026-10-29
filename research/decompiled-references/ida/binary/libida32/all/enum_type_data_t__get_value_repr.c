__int64 __fastcall enum_type_data_t__get_value_repr(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // cl
  int v4; // edx
  char v5; // dl
  __int64 v6; // rdx

  *a2 = 0;
  v2 = 6;
  v3 = *(_BYTE *)(a1 + 52) & 0x60;
  if ( v3 != 32 )
  {
    if ( v3 > 0x20u )
    {
      v2 = ((*(_BYTE *)(a1 + 52) & 0x40) != 0) + 3LL;
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 48);
      v2 = 1;
      if ( (v4 & 0x200) == 0 )
        v2 = ((v4 & 0x100) == 0) + 2LL;
    }
  }
  *a2 = v2;
  v5 = *(_BYTE *)(a1 + 52) & 0x60;
  if ( v5 == 64 || !v5 && (*(_BYTE *)(a1 + 49) & 4) != 0 )
    BYTE1(v2) |= 4u;
  v6 = v2;
  *a2 = v2;
  if ( (*(_BYTE *)(a1 + 49) & 8) != 0 )
  {
    BYTE1(v6) = BYTE1(v2) | 8;
    v2 = v6;
  }
  *a2 = v2;
  return 0;
}

