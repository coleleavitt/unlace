__int64 __fastcall sub_B8E180(unsigned __int64 a1)
{
  unsigned __int8 v2; // al
  int v3; // edx
  __int64 v5; // rax
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // rax

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v2 = *(_BYTE *)(a1 + 8) & 0x7F;
        v3 = v2;
        if ( !v2 || v2 == 24 )
          return 0;
        if ( v2 == 61 )
          return 1;
        if ( (unsigned int)v2 - 59 > 2 )
          break;
        if ( a1 != 64 )
        {
          if ( sub_B97230(a1 - 64) )
            return 1;
          v5 = *(_QWORD *)(a1 + 64);
          if ( v5 && (*(_BYTE *)(v5 + 10) & 0x20) != 0 )
          {
            v6 = *(_BYTE *)(v5 + 104) & 3;
            if ( v6 == 1 )
              return 1;
            if ( v6 == 2 )
              return 0;
          }
          v3 = *(_BYTE *)(a1 + 8) & 0x7F;
          break;
        }
        a1 = sub_B72690(64);
        if ( !a1 )
          return 0;
      }
      if ( (unsigned int)(v3 - 34) <= 5 )
        break;
LABEL_20:
      a1 = sub_B72690(a1);
      if ( !a1 )
        return 0;
    }
    if ( a1 == 72 )
    {
      a1 = 72;
      goto LABEL_20;
    }
    if ( sub_B77A30(a1 - 72) )
      return 1;
    v7 = sub_B8C1B0(a1);
    if ( (*(_WORD *)(v7 + 30) & 0x180) == 0 )
      goto LABEL_20;
    v8 = *(_QWORD *)(v7 + 16);
    a1 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v8 & 4) != 0 )
      a1 = *(_QWORD *)(a1 + 8);
  }
}
