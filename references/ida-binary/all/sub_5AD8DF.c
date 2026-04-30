__int64 __fastcall sub_5AD8DF(__int64 a1)
{
  __int16 v1; // ax

  if ( (unsigned __int8)sub_5AD9C5(a1) != 1 )
    sub_5ADA4A(a1);
  *(_WORD *)(a1 + 6) &= 0xFFFu;
  v1 = *(_WORD *)(a1 + 6);
  HIBYTE(v1) |= 0x40u;
  *(_WORD *)(a1 + 6) = v1;
  *(_BYTE *)(a1 + 8) &= 0x3Fu;
  *(_BYTE *)(a1 + 8) |= 0x80u;
  return 1;
}
