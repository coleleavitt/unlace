__int64 __fastcall sub_9FCC80(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // edx
  int v4; // ecx
  int v5; // esi
  _BYTE v7[25]; // [rsp+Fh] [rbp-19h] BYREF

  sub_9FCC00(a1, a2);
  v2 = *(_BYTE *)(a2 + 112);
  LOBYTE(v3) = v2 & 1;
  if ( (v2 & 1) != 0 )
  {
    v3 = (v2 & 2) == 0 ? 32 : 96;
    v4 = (v2 & 2) == 0 ? 56 : 120;
    v5 = (v2 & 2) == 0 ? 40 : 104;
  }
  else
  {
    LOBYTE(v4) = 24;
    LOBYTE(v5) = 8;
  }
  if ( (v2 & 4) != 0 )
  {
    if ( (v2 & 8) == 0 )
      LOBYTE(v4) = v5;
    LOBYTE(v3) = v4;
  }
  if ( (v2 & 0x70) != 0 )
    LOBYTE(v3) = (v2 >> 4) & 7 | v3;
  v7[0] = v3;
  return sub_22581D0(a1, v7, 1);
}

