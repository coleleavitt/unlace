__int64 __fastcall sub_BFE300(unsigned __int64 a1)
{
  __int16 i; // ax
  unsigned __int8 v2; // dl
  __int64 result; // rax
  __int64 v4; // rdi

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        for ( i = *(_WORD *)a1 & 0x1FF; i == 20; i = *(_WORD *)a1 & 0x1FF )
          a1 = *(_QWORD *)(a1 + 24);
        if ( i != 79 )
          break;
        v2 = (*(_WORD *)(a1 + 2) >> 3) & 0x7F;
        result = (unsigned int)v2 - 4;
        LOBYTE(result) = ((v2 + 121) & 0x7Fu) <= 1 || (unsigned int)result <= 1;
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
    if ( i != 48 )
      break;
    v4 = *(_QWORD *)(a1 + 16);
    if ( (v4 & 4) != 0 )
      a1 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 40);
    else
      a1 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  }
  if ( i != 98 )
    return 0;
  return (*(_QWORD *)a1 >> 19) & 1LL;
}
