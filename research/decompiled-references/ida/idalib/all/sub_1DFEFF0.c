char __fastcall sub_1DFEFF0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int8 v2; // cl
  char result; // al
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // eax

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)v1;
  v2 = *(_BYTE *)(v1 + 8) & 0x7F;
  if ( v2 <= 0x12u )
    return ((1LL << v2) & 0x40182) != 0;
  result = 0;
  if ( v2 > 0x21u )
  {
    result = 1;
    if ( v2 > 0x27u )
    {
      result = 0;
      if ( ((v2 + 70) & 0x7Fu) <= 3 )
      {
        v4 = v1 - 64;
        while ( 1 )
        {
          v5 = *(_QWORD *)(v4 + 16);
          v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v5 & 4) != 0 )
            v6 = *(_QWORD *)v6;
          v7 = *(_BYTE *)(v6 + 8) & 0x7F;
          if ( (unsigned int)(v7 - 59) > 2 )
            break;
          v4 = v6 - 64;
          if ( !v4 )
            return 0;
        }
        if ( (unsigned int)(v7 - 34) > 5 )
          return 0;
        return v6 != 72;
      }
    }
  }
  return result;
}
