__int64 __fastcall GUIDGenerator::CreateGUID(__int64 a1)
{
  __int16 v1; // ax

  if ( (unsigned __int8)GUIDGenerator::CreateGUIDFromDevUrandom(a1) != 1 )
    GUIDGenerator::CreateGUIDFromRand(a1);
  *(_WORD *)(a1 + 6) &= 0xFFFu;
  v1 = *(_WORD *)(a1 + 6);
  HIBYTE(v1) |= 0x40u;
  *(_WORD *)(a1 + 6) = v1;
  *(_BYTE *)(a1 + 8) &= 0x3Fu;
  *(_BYTE *)(a1 + 8) |= 0x80u;
  return 1;
}

