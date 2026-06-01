bool __fastcall sub_804F90(unsigned __int64 a1, _QWORD *a2, int a3, char a4)
{
  unsigned __int16 v5; // ax
  unsigned __int64 v6; // rsi

  while ( 1 )
  {
    v5 = *(_WORD *)a1 & 0x1FF;
    if ( v5 == 21 )
    {
LABEL_15:
      v6 = *(_QWORD *)(a1 + 24);
      goto LABEL_16;
    }
    if ( v5 <= 0x15u )
    {
      if ( v5 == 4 )
      {
        if ( *(_BYTE *)(a1 + 2) >> 3 != 12 )
          goto LABEL_12;
        v6 = *(_QWORD *)(a1 + 16);
      }
      else
      {
        if ( v5 != 19 || (*(_BYTE *)(a1 + 3) & 1) == 0 || *(char *)(a1 + 2) >= 0 )
          goto LABEL_12;
        v6 = *(_QWORD *)(a1 + 16);
        if ( !v6 )
          return sub_798780(a2, v6, *(_QWORD *)(a1 + 8), a3, a4);
      }
      goto LABEL_16;
    }
    if ( v5 == 58 )
    {
      if ( (~*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0 )
        goto LABEL_12;
      v6 = *(_QWORD *)(a1
                     + 8LL
                     * (((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a1 + 19) & 0x40) != 0))
                     + 32);
      goto LABEL_16;
    }
    if ( v5 != 78 )
      break;
    if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
      goto LABEL_12;
    if ( *(_BYTE *)(a1 + 48) )
      goto LABEL_15;
    v6 = *(_QWORD *)(a1 + 32);
LABEL_16:
    if ( v6 == a1 )
      goto LABEL_12;
    a1 = v6;
  }
  if ( v5 == 47 )
  {
    v6 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    if ( v5 != 72 && v5 != 35 )
    {
LABEL_12:
      v6 = 0;
      return sub_798780(a2, v6, *(_QWORD *)(a1 + 8), a3, a4);
    }
    v6 = *(_QWORD *)(a1 + 16);
  }
  return sub_798780(a2, v6, *(_QWORD *)(a1 + 8), a3, a4);
}

