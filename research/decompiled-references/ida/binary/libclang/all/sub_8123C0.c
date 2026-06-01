__int64 __fastcall sub_8123C0(unsigned __int64 a1)
{
  __int16 i; // ax
  __int64 result; // rax
  __int64 v3; // rax

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        for ( i = *(_WORD *)a1 & 0x1FF; i == 21; i = *(_WORD *)a1 & 0x1FF )
          a1 = *(_QWORD *)(a1 + 24);
        if ( i != 80 )
          break;
        result = ((*(_WORD *)(a1 + 2) >> 3) & 0x7Fu) - 4;
        LOBYTE(result) = (((unsigned __int8)(*(_WORD *)(a1 + 2) >> 3) + 121) & 0x7Fu) <= 1 || (unsigned int)result <= 1;
        if ( !(_BYTE)result )
          return result;
        a1 = *(_QWORD *)(a1 + 16);
      }
      if ( i != 4 )
        break;
      if ( *(_BYTE *)(a1 + 2) >> 3 != 12 )
        return 0;
      a1 = *(_QWORD *)(a1 + 16);
    }
    if ( i != 49 )
      break;
    v3 = *(_QWORD *)(a1 + 16);
    a1 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v3 & 4) != 0 )
      a1 = *(_QWORD *)(a1 + 40);
  }
  if ( i != 99 )
    return 0;
  return (*(_BYTE *)(a1 + 2) & 8) != 0;
}

