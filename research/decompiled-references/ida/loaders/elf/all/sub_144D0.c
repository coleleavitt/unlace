bool __fastcall sub_144D0(__int64 a1, __int16 a2)
{
  *(_BYTE *)(a1 + 388) = a2 == -128;
  *(_BYTE *)(a1 + 389) = a2 == -96;
  return (a2 & 0xFFDF) == 0xFF80;
}

