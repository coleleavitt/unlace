__int64 __fastcall sub_3EE540(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx

  v2 = 1;
  if ( (*(_QWORD *)a2 & 0xFFFF00000000FF00LL) != 0x93000000000400LL )
  {
    v2 = 0;
    if ( *(_BYTE *)(a2 + 1) == 3 )
    {
      v2 = 1;
      if ( *(_WORD *)(a2 + 6) != 147 )
      {
        v2 = 0;
        if ( !*(_BYTE *)(a2 + 33) && !*(_QWORD *)(a2 + 8) && (*(_BYTE *)(a1 + 52) & 0xB0) == 0 )
          LOBYTE(v2) = *(_BYTE *)(a2 + 32) == 0x93;
      }
    }
  }
  return v2;
}
