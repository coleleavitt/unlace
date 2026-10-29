unsigned __int64 __fastcall sub_3F1690(__int64 a1)
{
  int v1; // eax
  int v2; // edx
  unsigned __int8 v3; // bp
  __int64 v4; // r12
  int v5; // r13d
  int dtype_size; // eax
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rsi

  v1 = *(_DWORD *)(a1 + 52);
  v2 = *(unsigned __int16 *)(a1 + 48);
  if ( (v1 & 0x10) == 0 )
  {
    v8 = *(_DWORD *)(a1 + 52) & 0x818;
    if ( v8 && v8 != 2056 )
    {
      v3 = v8 == 8 || v8 == 2048;
      if ( (_WORD)v2 != 17 )
        goto LABEL_5;
      goto LABEL_10;
    }
    v3 = 2;
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(a1 + 57) & 8) != 0 )
  {
    v3 = 7;
    goto LABEL_4;
  }
  if ( (v1 & 0x800) == 0 )
  {
    v3 = (*(_DWORD *)(a1 + 52) & 0x818) == 16;
    goto LABEL_4;
  }
  if ( (unsigned __int16)v2 > 0x39u )
  {
    v3 = 7;
    if ( (unsigned __int16)(v2 - 61) <= 0x18u )
      goto LABEL_6;
    if ( (unsigned __int16)v2 > 0xA0u )
    {
      if ( (_WORD)v2 == 738 || (_WORD)v2 == 741 )
        goto LABEL_6;
      goto LABEL_25;
    }
    if ( (unsigned __int16)v2 > 0x6Cu )
    {
      v10 = 0xC050682000555LL;
      if ( _bittest64(&v10, (unsigned int)(v2 - 109)) )
        goto LABEL_6;
      goto LABEL_25;
    }
  }
  else
  {
    v3 = 7;
    if ( (unsigned __int16)v2 > 0x34u )
      goto LABEL_6;
    if ( (unsigned __int16)v2 <= 0x12u )
    {
      if ( (unsigned __int16)v2 <= 0xFu )
      {
LABEL_16:
        v3 = 2 * ((*(_DWORD *)(a1 + 52) & 0x818) == 2064);
        goto LABEL_6;
      }
LABEL_4:
      if ( (_WORD)v2 != 17 )
        goto LABEL_5;
LABEL_10:
      sub_3EE1E0(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 64LL), v3);
      goto LABEL_6;
    }
  }
  if ( (unsigned __int16)(v2 - 37) > 0x3Bu )
    goto LABEL_16;
  v9 = 0xA1A000000E00005LL;
  v3 = 7;
  if ( _bittest64(&v9, (unsigned int)(v2 - 37)) )
    goto LABEL_6;
LABEL_25:
  v3 = 2;
  if ( (*(_DWORD *)(a1 + 52) & 0x818) == 0x810 )
    goto LABEL_6;
  v3 = 0;
LABEL_5:
  if ( (_WORD)v2 == 16 && *(_BYTE *)(a1 + 65) == 6 )
    goto LABEL_10;
LABEL_6:
  v4 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 50);
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
  dtype_size = get_dtype_size();
  sub_1D3790(a1, 3, dtype_size, v4, 346938453, v5, 0);
  return sub_3EE1E0(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL), v3);
}
