__int64 __fastcall sub_229C5A0(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 4 )
  {
    if ( *(_DWORD *)a1 != 1701671521 || *(_BYTE *)(a1 + 4) != 98 )
    {
      if ( a2 <= 6 )
        goto LABEL_2;
      if ( (*(_DWORD *)a1 != 1836410996 || *(_WORD *)(a1 + 4) != 25954 || *(_BYTE *)(a1 + 6) != 98)
        && (a2 <= 9 || *(_QWORD *)a1 != 0x5F34366863726161LL || *(_WORD *)(a1 + 8) != 25954) )
      {
LABEL_10:
        if ( *(_WORD *)a1 == 29281 && *(_BYTE *)(a1 + 2) == 109 )
          return (unsigned int)(*(_WORD *)(a1 + a2 - 2) == 25189) + 1;
        goto LABEL_3;
      }
    }
    return 2;
  }
LABEL_2:
  if ( a2 > 2 )
    goto LABEL_10;
LABEL_3:
  if ( a2 <= 4 )
    return 0;
  if ( *(_DWORD *)a1 == 1836410996 && *(_BYTE *)(a1 + 4) == 98 )
    return (unsigned int)(*(_WORD *)(a1 + a2 - 2) == 25189) + 1;
  return a2 > 6
      && (*(_DWORD *)a1 == 1668440417 && *(_WORD *)(a1 + 4) == 13928 && *(_BYTE *)(a1 + 6) == 52
       || a2 > 9 && *(_QWORD *)a1 == 0x5F34366863726161LL && *(_WORD *)(a1 + 8) == 12851);
}
